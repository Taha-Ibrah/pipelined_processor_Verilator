//Optimized for SystemVerilog
//Register file...

module RegisterFile(
    input logic [4:0] readRegister1, readRegister2, writeRegister,
    input logic regWrite,
    input logic Clk,
    input logic [63:0] writeData,
    output logic [63:0] BusA, BusB
    );

    //because Registers within Register File are neither outputs nor
    //inputs, they are labeled as "logic"

    logic [63:0] regs[31:0]; //32 registers, each 64-bits wide.

    //always_comb --> combinational logic
    //whenever inputs change, recompute outputs immediately

    //always_ff --> sequential logic / flip-flops
    //used for state machines, pipeline registers, registers
    //only update on rising edge of clock (sequential logic)

    always_ff @(negedge Clk) begin //negative edge of Clk signal
    //negedge to avoid read/write conflict in a single cycle.
        if(regWrite && (writeRegister != 5'd31)) begin //regWrite signal & writeRegister is not the zero register
         //Write data into selected register
         regs[writeRegister] <= writeData;
         //store writeData into register selected by writeRegister
        end
    end

    //Asynchronous read port A & port B
    always_comb begin
        if(readRegister1 == 5'd31)
            BusA=64'd0;
        else
            BusA=regs[readRegister1];
    end

    always_comb begin
        if(readRegister2 == 5'd31)
            BusB=64'd0;
        else
            BusB=regs[readRegister2];
    end
endmodule