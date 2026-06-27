//First pipeline register of 5-stage ARMv8 pipeline processor

//Produces: Instruction memory, Program Counter

//inputs from IF stage
//PC inputs, instruction memory input, clk, reset

//outputs going to ID stage
//PC, instruction memory

//Note:
//Pipeline registers do not perform a function other than holding values until clk trigger (flip-flop)


//This specific pipeline (flip-flop) register should not hold any Control Unit Signals
//WHY? Because PC is in Instruction Fetch stage, so nothing has been decoded as of yet.
module IF_ID(
    input logic clk,
    input logic reset,
    
    //inputs from IF (Instruction Fetch)
    input logic[63:0] PC_in,
    input logic[31:0] Instruction_in,

    //outputs into ID (Instruction decode)

    output logic[63:0] PC_out,
    output logic[31:0] Instruction_out,

    input logic write_enable //logic signal used for stalling.
);
    always_ff @(posedge clk) begin
        if(reset) begin
            PC_out <= 64'd0;
            Instruction_out <= 32'd0;
        end
        else if (write_enable) begin //Only updating when not stalled
            PC_out <= PC_in;
            Instruction_out <= Instruction_in;
        end
    end
endmodule