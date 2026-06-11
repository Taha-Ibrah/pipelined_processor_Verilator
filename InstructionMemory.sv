//INSTRUCTION MEMORY IS THE PROGRAM THAT WILL BE RAN BY THE SINGLECYCLE PROCESSOR
//THE MACHINE CODE INSTRUCTIONS ARE THE PROGRAM

//Optimized code for systemverilog
//InstructionMemory has input of ReadAddress, output of 32-bit Instruction Set Address

`timescale 1ns/1ps
//CPU only reads from it --> CPU never writes to it.
//Acts like ROM (Read-only-memory)

module InstructionMemory(
    input logic[63:0] ReadAddress,
    output logic [31:0] Instruction
);
    //timing parameter
    parameter T_rd=20;

    //represents the number of instruction bytes
    parameter MemSize=40;


    always_comb begin
        case(ReadAddress)


    	/* Test Program 1:
	 * Program loads constants from the data memory. Uses these constants to test
	 * the following instructions: LDUR, ORR, AND, CBZ, ADD, SUB, STUR and B.
	 * 
	 * Assembly code for test:
	 * 
	 * 0: LDUR X9, [XZR, 0x0]    //Load 1 into x9
	 * 4: LDUR X10, [XZR, 0x8]   //Load a into x10
	 * 8: LDUR X11, [XZR, 0x10]  //Load 5 into x11
	 * C: LDUR X12, [XZR, 0x18]  //Load big constant into x12
	 * 10: LDUR X13, [XZR, 0x20]  //load a 0 into X13
	 * 
	 * 14: ORR X10, X10, X11  //Create mask of 0xf
	 * 18: AND X12, X12, X10  //Mask off low order bits of big constant
	 * 
	 * loop:
	 * 1C: CBZ X12, end  //while X12 is not 0
	 * 20: ADD X13, X13, X9  //Increment counter in X13
	 * 24: SUB X12, X12, X9  //Decrement remainder of big constant in X12
	 * 28: B loop  //Repeat till X12 is 0
	 * 2C: STUR X13, [XZR, 0x20]  //store back the counter value into the memory location 0x20
	 */

//RECALL: EACH INSTRUCTION HAS 32 BITS, AND THE 8BYTES ARE INSTRUCTIONS
//IN LEGv8 FORMATTING!!
        64'h000: Instruction = 32'hF84003E9; // LDUR X9, [X31, #0] ------ X9 holds 1
        64'h004: Instruction = 32'hF84083EA; // LDUR X10, [XZR, #8] ------ Loads memory[0x8] into register X10 ---- X10 holds 0xA
        64'h008: Instruction = 32'hF84103EB; // LDUR X11, [XZR, #0x10] --- Loads memory[0x10] into X11 ---- X11 holds 0x5
        64'h00C: Instruction = 32'hF84183EC; // LDUR X12, [XZR, #0x18] ---- Loads memory[0x18] into X12 ---- X12 holds large value
        64'h010: Instruction = 32'hF84203ED; // LDUR X13, [XZR, #0x20] ---- X13 holds 0
        64'h014: Instruction = 32'hAA0B014A; // ORR X10, X10, X11 --- OR LOGIC --- X10 holds 0xF
        64'h018: Instruction = 32'h8A0A018C; // AND X12, X12, X10 --- X12 holds 0xF
        64'h01C: Instruction = 32'hB400008C; // CBZ X12, end ---- if X12==0, branch to end
        64'h020: Instruction = 32'h8B0901AD; // ADD X13, X13, X9 ---- X13=X13+1 (incremented)
        64'h024: Instruction = 32'hCB09018C; // SUB X12, X12, X9 ----- X12=X12-1
        64'h028: Instruction = 32'h17FFFFFD; // B loop ---- Unconditional branch back to PC 0x1C
        64'h02C: Instruction = 32'hF80203ED; // STUR X13, [XZR, #0x20] ---- memory address [0x20] contains value 0xF
        64'h030: Instruction = 32'hF84203ED; // LDUR X13, [XZR, #0x20] ---- Loads memory address 0x20 back into X13
        
        default: Instruction = 32'hXXXXXXXX;

        endcase

    end
endmodule

//By the end of the iteration, Register X13 and MemtoRegOut variable should both have value of 0xF (single cycle)