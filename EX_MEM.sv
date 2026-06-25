// 3rd pipeline register in 5-stage processor

module EX_MEM(
    input logic clk,
    input logic reset,

    input logic [63:0] ALUresult_in,
    input logic [63:0] AddResult_in,
    input logic        Zero_in,
    input logic [4:0]  Rd_in,
    input logic [63:0] ReadData2_in,

    // MEM Stage
    input logic branch_in,
    input logic uncondbranch_in,
    input logic MemRead_in,
    input logic MemWrite_in,

    // WB Stage
    input logic MemtoReg_in,
    input logic RegWrite_in,

    // Respective Outputs
    output logic [63:0] ALUresult_out,
    output logic [63:0] AddResult_out,
    output logic        Zero_out,
    output logic [4:0]  Rd_out, // destination register in register file
    output logic [63:0] ReadData2_out,

    output logic branch_out,
    output logic uncondbranch_out,
    output logic MemRead_out,
    output logic MemWrite_out,

    output logic MemtoReg_out,
    output logic RegWrite_out
);

    always_ff @(posedge clk) begin
        if(reset) begin
            ALUresult_out     <= 64'd0;
            AddResult_out     <= 64'd0;
            Zero_out          <= 1'b0;
            Rd_out            <= 5'd0;
            ReadData2_out     <= 64'd0;

            branch_out        <= 1'b0;
            uncondbranch_out  <= 1'b0;
            MemRead_out       <= 1'b0;
            MemWrite_out      <= 1'b0;

            MemtoReg_out      <= 1'b0;
            RegWrite_out      <= 1'b0;
        end
        else begin
            ALUresult_out     <= ALUresult_in;
            AddResult_out     <= AddResult_in;
            Zero_out          <= Zero_in;
            Rd_out            <= Rd_in;
            ReadData2_out     <= ReadData2_in;

            branch_out        <= branch_in;
            uncondbranch_out  <= uncondbranch_in;
            MemRead_out       <= MemRead_in;
            MemWrite_out      <= MemWrite_in;

            MemtoReg_out      <= MemtoReg_in;
            RegWrite_out      <= RegWrite_in;
        end
    end

endmodule