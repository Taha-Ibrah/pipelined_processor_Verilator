// Final pipeline (flip-flop) register
module MEM_WB(
    input logic clk,
    input logic reset,

    input logic [63:0] ALUresult_in,
    input logic [63:0] ReadMemData_in,
    input logic [4:0]  Rd_in,

    input logic MemtoReg_in,
    input logic RegWrite_in,

    output logic [63:0] ALUresult_out,
    output logic [63:0] ReadMemData_out,
    output logic [4:0]  Rd_out,

    output logic MemtoReg_out,
    output logic RegWrite_out
);

    always_ff @(posedge clk) begin
        if(reset) begin
            ALUresult_out   <= 64'd0;
            ReadMemData_out <= 64'd0;
            Rd_out          <= 5'd0;

            MemtoReg_out    <= 1'b0;
            RegWrite_out    <= 1'b0;
        end
        else begin
            ALUresult_out   <= ALUresult_in;
            ReadMemData_out <= ReadMemData_in;
            Rd_out          <= Rd_in;

            MemtoReg_out    <= MemtoReg_in;
            RegWrite_out    <= RegWrite_in;
        end
    end

endmodule