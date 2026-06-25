//Pipeline Register #2 --> (Instruction Decode/Execution)
//Implementing Control Signals
//Control Signals are created in the ID stage by the Control Unit
//Later pipeline stages carry only the necessary signals needed by cpu components in later stages

//Reg2Loc and SignOp is not included within this module because they are immediately used in the ID stage
module ID_EX(
    input logic clk,
    input logic reset,

    //inputs coming in from ID
    input logic [63:0] PC_in,
    input logic [63:0] ReadData1_in,
    input logic [63:0] ReadData2_in,
    input logic [63:0] SignExtImm_in,

    input logic [4:0] Rd_in, //Instruction[4:0]


    //inputs stemming from Control Unit (CONTROL UNIT IS IN ID STAGE)
    //EX STAGE
    input logic[3:0] ALUOp_in,
    input logic ALUSrc_in,
    //MEM STAGE
    input logic MemRead_in,
    input logic MemWrite_in,
    input logic Branch_in,
    input logic UncondBranch_in,
    //WB Stage
    input logic RegWrite_in,
    input logic MemtoReg_in,


    //Outputs going to EX stage
    output logic[63:0] PC_out,
    output logic[63:0] ReadData1_out,
    output logic[63:0] ReadData2_out,
    output logic[63:0] SignExtImm_out,

    output logic [4:0] Rd_out,

    //CONTROL SIGNAL OUTPUTS LEAVING ID/EX PIPELINE REGISTER
    output logic[3:0] ALUOp_out,
    output logic ALUSrc_out,

    //MEM stage
    output logic MemRead_out,
    output logic MemWrite_out,
    output logic Branch_out,
    output logic UncondBranch_out,
    //WB Stage
    output logic RegWrite_out,
    output logic MemtoReg_out
    
);

    always_ff @(posedge clk) begin
        if(reset) begin
            PC_out           <= 64'd0;
            ReadData1_out    <= 64'd0;
            ReadData2_out    <= 64'd0;
            SignExtImm_out   <= 64'd0;

            Rd_out           <= 5'd0;

            ALUOp_out        <= 4'd0;
            ALUSrc_out       <= 1'b0;

            MemRead_out      <= 1'b0;
            MemWrite_out     <= 1'b0;
            Branch_out       <= 1'b0;
            UncondBranch_out <= 1'b0;

            RegWrite_out     <= 1'b0;
            MemtoReg_out     <= 1'b0;
        end
        else begin
            PC_out           <= PC_in;
            ReadData1_out    <= ReadData1_in;
            ReadData2_out    <= ReadData2_in;
            SignExtImm_out   <= SignExtImm_in;

            Rd_out           <= Rd_in;

            ALUOp_out        <= ALUOp_in;
            ALUSrc_out       <= ALUSrc_in;

            MemRead_out      <= MemRead_in;
            MemWrite_out     <= MemWrite_in;
            Branch_out       <= Branch_in;
            UncondBranch_out <= UncondBranch_in;

            RegWrite_out     <= RegWrite_in;
            MemtoReg_out     <= MemtoReg_in;
        end
    end
endmodule