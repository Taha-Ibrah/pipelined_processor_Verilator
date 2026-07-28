//optimized code for SystemVerilog
//ALU module in 5-stage pipeline processor...

//two 64-bit inputs, 4-bit ALU operation, output is zero bit & busW
module ALU(
   output logic [63:0] BusW, //output, 
   input logic [63:0] BusA, 
   input logic [63:0] BusB,
   input logic [3:0] ALUCtrl, //control signal,
   output logic Zero //high when BusW=0
   );

   //ALU operation encoding...
   //localparam will keep constants local to this specific module.
   localparam logic [3:0]
      AND = 4'b0000, //bitwise and
      OR = 4'b0001, //bitwise or
      ADD = 4'b0010, //bitwise ADD
      SUB = 4'b0110, //bitwise SUB
      PASSB = 4'b0111; //pass BusB directly to output
   
   //combinational ALU logic
   //always_comb automatically builds sensitivity list...
   always_comb begin
      //select ALU operation based on ALUCtrl.
      case(ALUCtrl)
         AND:
            BusW=BusA&BusB;
         OR:
            BusW=BusA|BusB;
         ADD:
            BusW=BusA+BusB;
         SUB:
            BusW=BusA-BusB;
         PASSB:
            BusW=BusB;
         
         //ensure a default case
         default:
            BusW=64'd0;
      endcase
   end
   //assign output zero
   assign Zero = (BusW==64'd0);
endmodule
