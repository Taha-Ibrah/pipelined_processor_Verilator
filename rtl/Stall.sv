//Stall module optimized for systemverilog
//Solution to pipeline data hazard.


//Stall module lives in ID stage
//A stall is needed when:
//Instruction in EX writes a register that is read by ID
//Instruction in MEM writes a register that ID reads

//The stall needs to happen if the following is true:
//1.) If the instruction ahead is writing to the register
//2.) if the instruction is writing to a register other than XZR
//3.) If the register being written is the same register that is being read.


// The Stall module detects RAW (read-after-write) data hazards: when an instruction in EX or MEM
// is writing a register that the instruction currently in ID needs to read, the pipeline must pause.
// In PipelinedProcessor.sv, the stall output freezes the PC and IF_ID register (write_enable low)
// and inserts a NOP bubble into ID_EX by zeroing all control signals for that cycle.
module Stall(
    //From EX stage
    input logic ID_EX_RegWrite,
    input logic [4:0] ID_EX_Rd,

    //From MEM stage
    input logic EX_MEM_RegWrite,
    input logic [4:0] EX_MEM_Rd,

    input logic [4:0] rn, //Instruction [9:5]
    input logic [4:0] rm, //reg2loc ? Instruction[4:0] : Instruction[20:16]

    output logic stall
);

    logic hazard_EX;
    logic hazard_MEM;
    always_comb begin
        hazard_EX  = ID_EX_RegWrite  & (ID_EX_Rd  != 5'd31) & ((ID_EX_Rd  == rn) | (ID_EX_Rd  == rm));
        hazard_MEM = EX_MEM_RegWrite & (EX_MEM_Rd != 5'd31) & ((EX_MEM_Rd == rn) | (EX_MEM_Rd == rm));

        stall = hazard_EX | hazard_MEM;
    end
endmodule