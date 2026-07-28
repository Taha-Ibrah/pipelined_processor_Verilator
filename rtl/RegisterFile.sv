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

    // WHY NEGEDGE WRITE: Pipeline registers update on posedge. If the register file also
    // wrote on posedge, a WB-stage write and an ID-stage read of the SAME register would
    // race — both happen at posedge and the read might see the old value or new value
    // unpredictably. Writing on negedge separates the two events cleanly:
    //   posedge → ID reads the (not-yet-updated) register value
    //   negedge → WB writes the new value
    //   posedge+1 → ID (next instruction) reads the freshly written value
    // This is also why the Stall module only needs to check EX and MEM stages (not WB):
    // by the time a WB-stage instruction would write, the ID-stage read has already
    // happened at the preceding posedge, so there is no hazard to stall for.
    always_ff @(negedge Clk) begin
        if(regWrite && (writeRegister != 5'd31))
            regs[writeRegister] <= writeData;
    end

    // WHY COMBINATIONAL READS: Reads are asynchronous (always_comb) so the ID stage can
    // get register values in the same cycle the instruction arrives — no extra latency.
    // XZR (register 31) is hardwired to 0 and can never be written (guarded above).
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