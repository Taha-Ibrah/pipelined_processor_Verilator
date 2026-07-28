//Flush module optimized for System Verilog

//Flush is a mistake eraser...
//Checks for branch/uncondbranch, and then cancels the incorrect instructions that
//snuck into the pipeline before it

//Split the flush module into two different aspects.

// The Flush module detects control hazards: when a branch or unconditional jump is resolved
// in the MEM stage, any two instructions that entered the pipeline behind it must be discarded.
// In PipelinedProcessor.sv, the Flush output is wired to the reset input of both ID_EX and IF_ID,
// clearing those stages to NOP bubbles on the next rising clock edge.
module Flush(
    input logic EX_MEM_Branch,
    input logic EX_MEM_Zero,
    input logic EX_MEM_UncondBranch,

    output logic Flush
);
    always_comb begin
        Flush = (EX_MEM_Branch & EX_MEM_Zero) | EX_MEM_UncondBranch;
    end



endmodule