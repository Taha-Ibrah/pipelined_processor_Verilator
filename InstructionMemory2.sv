//InstructionMemory2 — a second, more complex test program for the 5-stage pipeline.
//
//Drop-in replacement for InstructionMemory: same ports, same byte-addressed ROM layout.
//Swap which one PipelinedProcessor.sv instantiates to run this program instead.
//
//Compared to Program 1 (which only exercised LDUR/ORR/AND/CBZ/ADD/SUB/STUR/B), this
//program additionally exercises the immediate ALU path (ADDI / SUBI) and reads XZR as a
//source, and chains a multiply-by-repeated-addition loop into a series of dependent
//arithmetic/logic ops — stressing the stall (data-hazard) and flush (branch) units harder.

`timescale 1ns/1ps

module InstructionMemory2(
    input  logic [63:0] ReadAddress,
    output logic [31:0] Instruction
);
    parameter T_rd = 20;
    parameter MemSize = 40;

    /* Test Program 2:
     *
     * Computes 6 * 7 by repeated addition, then folds the result through
     * AND / ORR / SUB, stores it to memory, and loads it back.
     *
     * Pseudocode:
     *   X1 = 6                      // multiplicand
     *   X2 = 7                      // counter
     *   X3 = 0                      // accumulator
     * loop:
     *   if (X2 == 0) goto after
     *   X3 = X3 + X1                // accumulate
     *   X2 = X2 - 1                 // decrement counter
     *   goto loop
     * after:                        // X3 = 42 = 0x2A
     *   X4 = 15                     // 0x0F mask
     *   X5 = X3 & X4                // 42 & 15 = 0x0A
     *   X6 = X5 | X1                // 0x0A | 6 = 0x0E
     *   X7 = X3 - X6                // 42 - 14 = 28 = 0x1C
     *   mem[0x0] = X7               // store result
     *   X8 = mem[0x0]               // load it back  -> final committed result = 0x1C
     */

    always_comb begin
        case(ReadAddress)
            64'h000: Instruction = 32'h91001BE1; // ADDI X1, XZR, #6
            64'h004: Instruction = 32'h91001FE2; // ADDI X2, XZR, #7
            64'h008: Instruction = 32'h8B1F03E3; // ADD  X3, XZR, XZR   (X3 = 0)
            64'h00C: Instruction = 32'hB4000082; // CBZ  X2, after      (loop:)
            64'h010: Instruction = 32'h8B010063; // ADD  X3, X3, X1
            64'h014: Instruction = 32'hD1000442; // SUBI X2, X2, #1
            64'h018: Instruction = 32'h17FFFFFD; // B    loop
            64'h01C: Instruction = 32'h91003FE4; // ADDI X4, XZR, #15   (after:)
            64'h020: Instruction = 32'h8A040065; // AND  X5, X3, X4
            64'h024: Instruction = 32'hAA0100A6; // ORR  X6, X5, X1
            64'h028: Instruction = 32'hCB060067; // SUB  X7, X3, X6
            64'h02C: Instruction = 32'hF80003E7; // STUR X7, [XZR, #0]
            64'h030: Instruction = 32'hF84003E8; // LDUR X8, [XZR, #0]

            default: Instruction = 32'hXXXXXXXX;
        endcase
    end
endmodule

//Expected final result: X8 = 28 = 0x1C, committed back from mem[0x0].
