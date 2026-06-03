//Optimized for SystemVerilog...
//SingleCycleControl has different instructions.
//Each instruction has a different 

`define OPCODE_ANDREG 11'b?0001010??? //given opcodes
`define OPCODE_ORRREG 11'b?0101010???
`define OPCODE_ADDREG 11'b?0?01011???
`define OPCODE_SUBREG 11'b?1?01011???

`define OPCODE_ADDIMM 11'b?0?10001???
`define OPCODE_SUBIMM 11'b?1?10001???

//`define OPCODE_MOVZ   11'b110100101??

`define OPCODE_B      11'b?00101?????
`define OPCODE_CBZ    11'b?011010????

`define OPCODE_LDUR   11'b??111000010
`define OPCODE_STUR   11'b??111000000

module control(
    input logic [10:0] opcode,
    output logic reg2loc,
    output logic alusrc,
    output logic mem2reg,
    output logic regwrite,
    output logic memwrite,
    output logic branch,
    output logic uncond_branch,
    output logic memread,
    output logic[1:0] signop,
    output logic[3:0] aluop
);

//using case syntax (as seen in C/C++)

//always_comb stands for combinational logic
//signals change immediately, no clock edge is required.
    always_comb begin
        //casez allows ? wildcard matching in opcode patterns
        //Whenever opcode changes, control signals are updated
        casez (opcode)

            //LDUR
            `OPCODE_LDUR: begin
                reg2loc = 1'bx;
                uncond_branch = 1'b0;
                branch = 1'b0;
                memread = 1'b1;
                memwrite = 1'b0;
                regwrite = 1'b1;
                alusrc = 1'b1;
                mem2reg = 1'b1;
                aluop = 4'b0010;
                signop = 2'b01; //recall that signop extends bits based on instruction type
            end
            `OPCODE_STUR: begin
                reg2loc = 1'b1;
                uncond_branch = 1'b0;
                branch = 1'b0;
                memread = 1'b0;
                memwrite = 1'b1;
                regwrite = 1'b0;
                alusrc = 1'b1;
                mem2reg = 1'bx;
                aluop = 4'b0010; //ADD
                signop = 2'b01;
            end

            //MOVING ONTO R-TYPE INSTRUCTIONS

            `OPCODE_ADDREG: begin
                reg2loc = 1'b1;
                uncond_branch = 1'b0;
                branch = 1'b0;
                memread = 1'b0;
                memwrite = 1'b0;
                regwrite = 1'b1;
                alusrc = 1'b0;
                mem2reg = 1'b0;
                aluop = 4'b0010; //ADD
                signop = 2'bx; //Don't Care
            end
            `OPCODE_SUBREG: begin
                reg2loc = 1'b0;
                uncond_branch = 1'b0;
                branch = 1'b0;
                memread = 1'b0;
                memwrite = 1'b0;
                regwrite = 1'b1;
                alusrc = 1'b0;
                mem2reg = 1'b0;
                aluop = 4'b0110; //SUB
                signop = 2'bx; //Don't Care
            end
            `OPCODE_ANDREG: begin
                reg2loc = 1'b0;
                uncond_branch = 1'b0;
                branch = 1'b0;
                memread = 1'b0;
                memwrite = 1'b0;
                regwrite = 1'b1;
                alusrc = 1'b0;
                mem2reg = 1'b0;
                aluop = 4'b0000; //SUB
                signop = 2'bx; //Don't Care
            end
            `OPCODE_ORRREG: begin
                reg2loc = 1'b0;
                uncond_branch = 1'b0;
                branch = 1'b0;
                memread = 1'b0;
                memwrite = 1'b0;
                regwrite = 1'b1;
                alusrc = 1'b0;
                mem2reg = 1'b0;
                aluop = 4'b0001; //SUB
                signop = 2'bx; //Don't Care
            end

            //CBZ (branch)
            `OPCODE_CBZ: begin
                reg2loc = 1'b1;
                uncond_branch = 1'b0;
                branch = 1'b1;
                memread = 1'b0;
                memwrite = 1'b0;
                regwrite = 1'b0;
                alusrc = 1'b0;
                mem2reg = 1'bx;
                aluop = 4'b0111; //PASSB
                signop = 2'b11;
            end
            
            //B (unconditional branch)
            `OPCODE_B: begin
                reg2loc = 1'bx;
                uncond_branch = 1'b1;
                branch = 1'bx;
                memread = 1'b0;
                memwrite = 1'b0;
                regwrite = 1'b0;
                alusrc = 1'bx;
                mem2reg = 1'bx;
                aluop = 4'bxxxx; //as soon as uncond_branch is 1, then aluop becomes irrelevant
                //because no calculation is required for this type of instruction
                signop = 2'b10; //Changing signop based on instruction type
            end

            //ADDI (I-type instruction)
            `OPCODE_ADDIMM: begin
                reg2loc = 1'b1;
                uncond_branch = 1'b0;
                branch = 1'b0;
                memread = 1'b0;
                memwrite = 1'b0;
                regwrite = 1'b1;
                alusrc = 1'b1;
                mem2reg = 1'b0;
                aluop = 4'b0010;
                signop = 2'b00;
            end
            `OPCODE_SUBIMM: begin
                reg2loc = 1'b1;
                uncond_branch = 1'b0;
                branch = 1'b0;
                memread = 1'b0;
                memwrite = 1'b0;
                regwrite = 1'b1;
                alusrc = 1'b1;
                mem2reg = 1'b0;
                aluop = 4'b0110;
                signop = 2'b00;
            end

            //default --> nothing occurs
            default:begin
                reg2loc = 1'bx;
                uncond_branch = 1'b0;
                branch = 1'b0;
                memread = 1'b0;
                memwrite = 1'b0;
                regwrite = 1'b0;
                alusrc = 1'bx;
                mem2reg = 1'bx;
                aluop = 4'bxxx;
                signop = 2'bxx;
            end
        endcase
    end

endmodule
