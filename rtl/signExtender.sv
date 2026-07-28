//optimized code for SystemVerilog
//Development of Sign-Extend module

//Recall SignOp value
//00 = I-type
//01 = D-type
//10 = B-type
//11 = CB-type

module signExtender(
    input logic [25:0] Instr,
    input logic [1:0] SignOp,
    output logic [63:0] BusImm
    );

//Sign-Extend is used in specific cases, and not all input bits are filled
//Assigne BusImm (output) using Verilog If-Else Block
    assign BusImm = 
    //i-type
    (SignOp==2'b00) ? {{52'b0}, Instr[21:10]}: //12 immediate bits + 52 bits
    //d-type
    (SignOp==2'b01) ? {{55{Instr[20]}}, Instr[20:12]}: //sign-extend
    //b-type
    (SignOp==2'b10) ? {{38{Instr[25]}}, Instr[25:0]}: //sign extend

    //cb-type (acting as default case)
    {{45{Instr[23]}}, Instr[23:5]};

endmodule
