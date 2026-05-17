//Optimized code for SystemVerilog
module NextPCLogic(
    input logic [63:0] CurrentPC,
    output logic [63:0] NextPC,
    input logic ALUZero, Branch, Uncondbranch,
    input logic [63:0] SignExtendImm
    );
    
    logic needToBranch; //this wire is representative of 2:1 mux
    assign needToBranch = (ALUZero & Branch) | (Uncondbranch);
    //2:1 mux
    assign NextPC = (needToBranch) ? (CurrentPC + (SignExtendImm<<2)) : (CurrentPC + 4);

endmodule