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
        case(Address)


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


        64'h000: Data = 32'hF84003E9;
        64'h004: Data = 32'hF84083EA;
        64'h008: Data = 32'hF84103EB;
        64'h00C: Data = 32'hF84183EC;
        64'h010: Data = 32'hF84203ED;
        64'h014: Data = 32'hAA0B014A;
        64'h018: Data = 32'h8A0A018C;
        64'h01C: Data = 32'hB400008C;
        64'h020: Data = 32'h8B0901AD;
        64'h024: Data = 32'hCB09018C;
        64'h028: Data = 32'h17FFFFFD;
        64'h02C: Data = 32'hF80203ED;
        64'h030: Data = 32'hF84203ED;
        
        default: Data = 32'hXXXXXXXX;

        endcase

    end
endmodule