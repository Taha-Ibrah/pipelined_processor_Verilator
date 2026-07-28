# 5-Stage Pipelined LEGv8 Processor

A 64-bit, five-stage pipelined processor implemented in SystemVerilog. The design executes a subset of the LEGv8 instruction set and includes pipeline registers, data-hazard stalls, control-hazard flushing, instruction and data memories, and self-checking testbenches for Verilator.

## Overview

The processor divides instruction execution into the classic five pipeline stages:

```text
IF → ID → EX → MEM → WB
```

Pipeline registers separate the stages:

```text
Program Counter
      │
      ▼
┌───────────┐    ┌───────┐    ┌────────┐    ┌────────┐    ┌────────┐
│ IF: Fetch │───▶│ IF/ID │───▶│ ID:    │───▶│ ID/EX  │───▶│ EX:    │
└───────────┘    └───────┘    │ Decode │    └────────┘    │ ALU    │
                              └────────┘                  └───┬────┘
                                                            │
                                                            ▼
┌──────────────┐    ┌────────┐    ┌─────────────┐    ┌────────┐
│ Register File│◀───│ WB:    │◀───│ MEM/WB     │◀───│ MEM:   │
└──────────────┘    │ Write  │    └─────────────┘    │ Memory │
                    │ Back   │                       └───▲────┘
                    └────────┘                           │
                                                   ┌────┴───┐
                                                   │ EX/MEM │
                                                   └────────┘
```

After the pipeline fills, multiple instructions can be active in different stages during the same clock cycle.

## Features

- Five-stage IF, ID, EX, MEM, and WB pipeline
- 64-bit datapath and 32-bit LEGv8 instructions
- Dedicated `IF_ID`, `ID_EX`, `EX_MEM`, and `MEM_WB` pipeline registers
- RAW data-hazard detection with automatic pipeline stalls
- Control-hazard handling with pipeline flushing
- Conditional and unconditional branch support
- 32-entry, 64-bit register file
- Hardwired zero register (`X31`/`XZR`)
- Byte-addressable 1 KiB data memory
- Separate instruction and data memories
- Two built-in instruction-memory test programs
- Self-checking SystemVerilog testbenches
- Simulation and waveform generation with Verilator

## Pipeline Stages

### 1. Instruction Fetch

The program counter selects a 32-bit instruction from instruction memory. Under normal execution, the PC advances by four bytes. A stall holds the PC, while a taken branch redirects it to the branch target.

### 2. Instruction Decode

The control unit decodes the instruction opcode, the register file supplies source operands, and the sign extender constructs the immediate value. Decoded data and control signals are stored in `ID_EX`.

### 3. Execute

The ALU performs arithmetic, logical, address, and branch-comparison operations. The branch target is calculated from the pipelined instruction PC and sign-extended immediate.

### 4. Memory

Load and store instructions access the byte-addressable data memory. Branch decisions carried through `EX_MEM` also drive PC redirection and flushing.

### 5. Write Back

The processor selects either the ALU result or loaded memory data and writes it to the destination register. Writes to `X31` are suppressed so it remains the zero register.

## Supported Instructions

| Category | Instructions | Purpose |
|---|---|---|
| Register arithmetic | `ADD`, `SUB` | 64-bit addition and subtraction |
| Register logic | `AND`, `ORR` | Bitwise logical operations |
| Immediate arithmetic | `ADDI`, `SUBI` | Arithmetic with a 12-bit immediate |
| Memory | `LDUR`, `STUR` | Load and store a 64-bit value |
| Branch | `CBZ`, `B` | Conditional branch on zero and unconditional branch |

## Hazard Handling

### Data hazards

`Stall.sv` detects read-after-write dependencies against instructions in the EX and MEM stages. When a hazard is found:

- The PC is held.
- The `IF_ID` register is frozen.
- Zeroed control signals insert a harmless bubble into `ID_EX`.

The design resolves these dependencies by stalling; it does not implement operand forwarding.

### Control hazards

`Flush.sv` detects a taken `CBZ` or an unconditional `B`. Wrong-path work in the pipeline is discarded, and the PC is redirected to the branch target. Branch redirection takes priority if a flush and stall occur together.

## Included Test Programs

The project contains two instruction ROMs:

- `InstructionMemory.sv` exercises loads, stores, register arithmetic, logic, `CBZ`, and `B`. Its expected result is `0xF`.
- `InstructionMemory2.sv` additionally exercises `ADDI` and `SUBI`, calculates `6 × 7` by repeated addition, performs dependent logical and arithmetic operations, stores the result, and loads it back. Its expected final committed result is `0x1C`.

`PipelinedProcessor.sv` currently instantiates `InstructionMemory2`.

## Verification

The `tb/` directory contains self-checking SystemVerilog testbenches for:

- The complete pipelined processor
- The reference single-cycle processor
- The ALU
- The register file
- Next-PC logic
- The sign extender

The pipelined-processor testbench applies reset, executes the selected program, drains the pipeline, checks the stable committed result, and includes a watchdog to stop a stalled simulation. It also produces `PipelineProcessorTest.vcd` for waveform inspection.

## Running the Pipelined Processor Test

Install Verilator, then run the following commands from the `Verilator_Pipelined` directory:

```bash
verilator --binary --timing --trace \
  -Wno-fatal -Wno-WIDTH -Wno-CASEINCOMPLETE \
  --top-module PipelinedProcessor_testbench \
  -o sim_run \
  tb/PipelinedProcessor_testbench.sv \
  rtl/PipelinedProcessor.sv \
  rtl/IF_ID.sv rtl/ID_EX.sv rtl/EX_MEM.sv rtl/MEM_WB.sv \
  rtl/InstructionMemory2.sv rtl/Control.sv rtl/signExtender.sv \
  rtl/RegisterFile.sv rtl/ALU.sv rtl/DataMemory.sv \
  rtl/NextPCLogic.sv rtl/Flush.sv rtl/Stall.sv

./obj_dir/sim_run
```

A successful run reports:

```text
Results of Program 2 passed
All tests passed. 5-Stage Pipelined Processor Passed.
```

## Project Structure

```text
Verilator_Pipelined/
├── rtl/
│   ├── ALU.sv
│   ├── Control.sv
│   ├── DataMemory.sv
│   ├── EX_MEM.sv
│   ├── Flush.sv
│   ├── ID_EX.sv
│   ├── IF_ID.sv
│   ├── InstructionMemory.sv
│   ├── InstructionMemory2.sv
│   ├── MEM_WB.sv
│   ├── NextPCLogic.sv
│   ├── PipelinedProcessor.sv
│   ├── RegisterFile.sv
│   ├── SingleCycleProcessor.sv
│   ├── Stall.sv
│   └── signExtender.sv
├── tb/
│   ├── ALU_testbench.sv
│   ├── NextPCLogic_testbench.sv
│   ├── PipelinedProcessor_testbench.sv
│   ├── RegisterFile_testbench.sv
│   ├── SingleCycleProcessor_testbench.sv
│   └── signExtender_testbench.sv
└── README.md
```

Verilator-generated object directories, simulation executables, VCD waveforms, and archived waveform artifacts are omitted from the source tree above.

## Tools

- **SystemVerilog** — processor RTL and testbenches
- **Verilator** — compilation and simulation
- **VCD waveform viewer** — signal-level debugging and pipeline inspection
- **Git** — version control

## Purpose

This project was built to develop practical experience with processor datapaths, pipelining, instruction decoding, register-transfer-level design, data and control hazards, finite-state timing, memory systems, and hardware verification.
