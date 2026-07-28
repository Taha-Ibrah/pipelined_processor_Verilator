//Optimized Code for SystemVerilog
//The following code is the top-level design for single-cycle LEGv8 processor
//In a top-level design, you are creating the signals that connect component parts together.
//THINK OF LOGIC VARIABLES AS CABLES BETWEEN PARTS ON A DIAGRAM

//This module contains previous processor components such as:
//sign extender, data memory, instruction memory, NEXTPClogic, Register File, etc.

//This file serves as the main "processor wiring" module

module singlecycle(
    input  logic        resetl,       // Active-low reset signal
    input  logic [63:0] startpc,      // Starting PC value after reset
    output logic [63:0] currentpc,    // Current program counter value
    output logic [63:0] MemtoRegOut,  // Final writeback data to register file
    input  logic        CLK           // Clock signal
);

    // Next PC connection
    logic [63:0] nextpc;              // Holds next PC value

    // Instruction memory connection
    logic [31:0] instruction;         // Current 32-bit instruction

    // Instruction fields
    logic [4:0] rd;                   // Destination register field: instruction[4:0]
    logic [4:0] rm;                   // First read register field: instruction[9:5]
    logic [4:0] rn;                   // Second read register after Reg2Loc mux
    logic [10:0] opcode;              // Opcode field: instruction[31:21]

    // Control signals
    logic reg2loc;                    // Selects second register source field
    logic alusrc;                     // Selects ALU second input: register or immediate
    logic mem2reg;                    // Selects writeback data: ALU or memory
    logic regwrite;                   // Enables register file write
    logic memread;                    // Enables data memory read
    logic memwrite;                   // Enables data memory write
    logic branch;                     // Conditional branch control
    logic uncond_branch;              // Unconditional branch control
    logic [3:0] aluctrl;              // ALU operation control
    logic [1:0] signop;               // Sign extender control

    // Register file connections
    logic [63:0] regoutA;             // Register file BusA output
    logic [63:0] regoutB;             // Register file BusB output

    // ALU connections
    logic [63:0] aluout;              // ALU result
    logic zero;                       // ALU zero flag

    // Sign extender connection
    logic [63:0] extimm;              // Sign-extended immediate value

    // ALU input mux connection
    logic [63:0] alu_input_b;         // Final second ALU input

    // Data memory read output
    logic [63:0] mem_read_data;       // Data read from memory

    // PC update logic
    always_ff @(negedge CLK) begin    // Update PC on negative clock edge
        if (resetl)                   // If reset is not active
            currentpc <= #3 nextpc;   // Move to next PC
        else                          // If reset is active
            currentpc <= #3 startpc;  // Load starting PC
    end

    // Break instruction into fields
    assign rd = instruction[4:0];     // Destination register / Rt field
    assign rm = instruction[9:5];     // Rn field / first register source
    assign rn = reg2loc ? instruction[4:0] : instruction[20:16]; // ***Reg2Loc mux***
    assign opcode = instruction[31:21]; // Opcode field for control unit



//INSTANTIATING EACH MODULE. CONNECTING MODULE OUTPUT TO SIGNAL


    //INSTRUCTION MEMORY IS INSTANTIATED IN PROCESSOR FILE****
    // Instruction memory
    InstructionMemory imem(
        .Instruction(instruction),    // Output instruction
        .ReadAddress(currentpc)       // Input PC address
    );

    // Main control unit
    control control_unit(
        .reg2loc(reg2loc),            // Reg2Loc control signal
        .alusrc(alusrc),              // ALUSrc control signal
        .mem2reg(mem2reg),            // MemtoReg control signal
        .regwrite(regwrite),          // Register write enable
        .memread(memread),            // Memory read enable
        .memwrite(memwrite),          // Memory write enable
        .branch(branch),              // Conditional branch signal
        .uncond_branch(uncond_branch),// Unconditional branch signal
        .aluop(aluctrl),              // ALU control output
        .signop(signop),              // Sign extension control
        .opcode(opcode)               // Instruction opcode input
    );

    // Sign extender
    signExtender signext(
        .BusImm(extimm),              // 64-bit extended immediate output
        .Instr(instruction[25:0]),    // Immediate bits from instruction
        .SignOp(signop)               // Selects immediate format
    );

    // Register file
    RegisterFile regfile(
        .BusA(regoutA),               // First register output
        .BusB(regoutB),               // Second register output
        .writeData(MemtoRegOut),      // Data written back to register file
        .readRegister1(rm),           // First read register number
        .readRegister2(rn),           // Second read register number
        .writeRegister(rd),           // Write register number
        .regWrite(regwrite),          // Register write enable
        .Clk(CLK)                     // Clock
    );

    // ALUSrc mux
    assign alu_input_b = alusrc ? extimm : regoutB; // Immediate or register input

    // ALU
    ALU alu(
        .BusW(aluout),                // ALU result
        .BusA(regoutA),               // First ALU input
        .BusB(alu_input_b),           // Second ALU input
        .ALUCtrl(aluctrl),            // ALU operation control
        .Zero(zero)                   // Zero flag output
    );

    // Data memory
    DataMemory datamem(
        .ReadData(mem_read_data),     // Data read from memory
        .Address(aluout),             // Memory address from ALU
        .WriteData(regoutB),          // Data to store into memory
        .MemoryRead(memread),         // Memory read enable
        .MemoryWrite(memwrite),       // Memory write enable
        .Clock(CLK)                   // Clock
    );

    // MemtoReg mux
    assign MemtoRegOut = mem2reg ? mem_read_data : aluout; // Memory data or ALU result

    // Next PC logic
    NextPCLogic pc_logic(
        .NextPC(nextpc),              // Computed next PC
        .CurrentPC(currentpc),        // Current PC
        .SignExtendImm(extimm),       // Branch immediate
        .Branch(branch),              // Conditional branch signal
        .ALUZero(zero),               // Zero flag
        .Uncondbranch(uncond_branch)  // Unconditional branch signal
    );

endmodule
