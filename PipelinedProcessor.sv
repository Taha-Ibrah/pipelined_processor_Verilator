//The following code is the top-level design for 5-stage pipelined processor (LEGv8)
//=====================================================================
//REMINDER: You are creating the signals that connect component parts together.
//=====================================================================
//1st objective: After creating the 4 pipeline (flip-flop) registers, compile the
//full 5-stage pipeline processor.

//QUESTION: HOW DO YOU KNOW THAT THE PROCESSOR WILL TAKE IN THE NEXT INSTRUCTION ONCE THE INITIAL INSTRUCTION
//PASSED THE FIRST STAGE?
//ANSWER: THE PROCESSOR DOES IT AUTOMATICALLY THROUGH TIMINGS OF THE PIPELINE REGISTER AND THROUGH THE PC UPDATING.

//For now, compile the processor --> add hazard units later.


module PipelinedProcessor(
    input logic CLK,
    input logic resetl, //Active-low reset signal
    input logic [63:0] startpc, //Starting PC value after reset
    output logic [63:0] currentpc, //Current program counter value
    output logic [63:0] MemtoRegOut //Final writeback data to register file
);

    //Pipeline register output variables.

    //INSTRUCTION FETCH / INSTRUCTION DECODE
    logic[31:0] IF_ID_instruction;
    logic[63:0] IF_ID_PC;

    //INSTRUCTION DECODE / EXECUTE
    logic[63:0] ID_EX_PC;
    logic[63:0] ID_EX_ReadData1;
    logic[63:0] ID_EX_ReadData2;
    logic[63:0] ID_EX_SignExtImm;
    logic[4:0] ID_EX_Rd;
    
    logic[3:0] ID_EX_ALUOp;
    logic ID_EX_ALUSrc;

    logic ID_EX_MemRead;
    logic ID_EX_MemWrite;
    logic ID_EX_Branch;
    logic ID_EX_UncondBranch;

    logic ID_EX_RegWrite;
    logic ID_EX_MemtoReg;

    //EXECUTE / MEMORY
    logic EX_MEM_Branch;
    logic EX_MEM_UncondBranch;
    logic EX_MEM_MemWrite;
    logic EX_MEM_MemRead;
    
    logic EX_MEM_MemtoReg;
    logic EX_MEM_RegWrite;

    logic EX_MEM_Zero;
    logic [63:0] EX_MEM_ALUresult;
    logic [63:0] EX_MEM_AddResult;
    logic [63:0] EX_MEM_ReadData2;
    logic [4:0] EX_MEM_Rd; //Destination Register

    //MEMORY / WRITEBACK
    logic MEM_WB_RegWrite;
    logic MEM_WB_MemtoReg;
    logic [63:0] MEM_WB_ALUResult;
    logic [63:0] MEM_WB_ReadMemData;
    logic [4:0] MEM_WB_Rd;



    //The following logic wires are the intermediate wires connecting various control units
    //and pipeline registers.

    //Next PC connection
    logic [63:0] nextpc; //holds the next pc value

    //Instruction memory connection
    logic [31:0] instruction; //current 32-bit instruction

    //Instruction fields.
    logic [4:0] rd;
    logic [4:0] rm;
    logic [4:0] rn;
    logic [10:0] opcode; //goes into control unit

    //Control signals --> outputting from control unit, going into respective processor units.
    logic reg2loc; //selects second register source field.
    logic alusrc; //Selects second input for ALU -- register or immediate sign-extend field.
    logic mem2reg; //select data that is wrote back to write register -- ALU result or memory
    logic regwrite; //enables write on register file
    logic memread; //enables data memory read
    logic memwrite; //enables data memory write
    logic branch; //conditional branch control
    logic uncond_branch; //unconditional branch control
    logic [3:0] aluctrl; //ALU operation control
    logic [1:0] signop; //Sign extender control

    //Register file connections
    logic [63:0] regoutA; //Register file BusA output
    logic [63:0] regoutB; //Register file BusB output

    //ALU connections
    logic [63:0] ALU_out; //ALU output --> resulting value
    logic zero; //ALU output --> zero flag

    //Sign extender connection
    logic[63:0] ext_imm; //Sign-extended immediate value

    //ALU input mux connection
    logic [63:0] alu_input_b; //Second input of ALU

    //Data memory read output
    logic[63:0] mem_read_data;

    //ABOVE INTERMEDIATE WIRES COVER ALL WIRES WITHIN PROCESSOR

    //PC Update logic
    //PC UPDATES AT THE NEGATIVE EDGE OF THE CLOCK.
    //WHILE PIPELINE REGISTERS UPDATE AT THE POSITIVE EDGE
    always_ff @(negedge CLK) begin
    if(resetl)
        currentpc <= #3 nextpc;
    else
        currentpc <= #3 startpc;
    end

    //Breaking up instruction field into respective register fields.
    //ADD X1, X2, X3.        opcode[31:21] Rm[20:16] shamt[16:11] Rn[9:5] Rd[4:0]
    assign rd = IF_ID_instruction[4:0];
    assign rm = IF_ID_instruction[9:5];
    assign rn = reg2loc ? IF_ID_instruction[4:0] : IF_ID_instruction[20:16];
    assign opcode = IF_ID_instruction[31:21];








    //INSTRUCTION VARIABLE WILL BE INSTANTIATED IN INSTRUCTION MEMORY
    //THEN ALL THE VARIABLES WILL HOLD THE VALUES OF THE INSTRUCTION BITS
    //IN WHICH WHERE THEY WERE ASSIGNED.

    //INSTANTIATE MODULES
    InstructionMemory imem(
        .Instruction(instruction),
        .ReadAddress(currentpc)
    );

    control control_unit(
        .reg2loc(reg2loc),
        .alusrc(alusrc),
        .mem2reg(mem2reg),
        .regwrite(regwrite),
        .memwrite(memwrite),
        .memread(memread),
        .branch(branch),
        .uncond_branch(uncond_branch),
        .signop(signop),
        .aluop(aluctrl),
        .opcode(opcode)
    );

    signExtender signext(
        .BusImm(ext_imm),
        .Instr(IF_ID_instruction[25:0]),
        .signOp(signop)
    );

    RegisterFile regfile(
        .BusA(regoutA),
        .BusB(regoutB),
        .writeData(MemtoRegOut),
        .readRegister1(rm),
        .readRegister2(rn),
        .writeRegister(MEM_WB_Rd),
        .regWrite(MEM_WB_RegWrite),
        .Clk(CLK)
    );

    //MUX for ALUsrc
    //Because the ALU is in the ID/EX stage, use respective signals
    assign alu_input_b = ID_EX_ALUSrc ? ID_EX_SignExtImm : ID_EX_ReadData2;

    ALU alu(
        .BusW(ALU_out),
        .BusA(ID_EX_ReadData1),
        .BusB(alu_input_b),
        .Zero(zero),
        .ALUCtrl(ID_EX_ALUOp)
    );

    //Change up datamem instantiation based on new logic signals
    DataMemory datamem(
        .ReadData(mem_read_data),
        .Address(EX_MEM_ALUresult),
        .WriteData(EX_MEM_ReadData2),
        .MemoryRead(EX_MEM_MemRead),
        .MemoryWrite(EX_MEM_MemWrite),
        .Clock(CLK)
    );
    assign MemtoRegOut = MEM_WB_MemtoReg ? MEM_WB_ReadMemData : MEM_WB_ALUResult;

    


    // BRANCH TARGET ADDER — EX stage.
    //
    // PROBLEM (what the original code did wrong):
    //   NextPCLogic was computing the branch target as:
    //       CurrentPC + (SignExtendImm << 2)
    //   with CurrentPC wired to 'currentpc' (IF-stage PC) and
    //   SignExtendImm wired to ID_EX_SignExtImm (EX-stage immediate).
    //
    //   By the time EX_MEM_Branch fires (branch instruction is in MEM stage):
    //     - 'currentpc' is 3 cycles ahead of the branch instruction — it is
    //       the PC of whatever instruction is currently being fetched in IF.
    //     - ID_EX_SignExtImm has already shifted to the instruction NOW in EX,
    //       which is two instructions after the branch instruction.
    //   Both operands were stale, so the computed target was wrong.
    //
    // FIX:
    //   Compute the target HERE in the EX stage, where ID_EX_PC and
    //   ID_EX_SignExtImm both belong to the branch instruction at the same time.
    //   Register the result into EX_MEM_AddResult (see EX_MEM instantiation below).
    //   NextPCLogic then just selects between (currentpc+4) and EX_MEM_AddResult —
    //   it no longer needs SignExtendImm or does any addition itself.
    logic [63:0] branch_target;
    assign branch_target = ID_EX_PC + (ID_EX_SignExtImm << 2);

    NextPCLogic programCounter(
        .CurrentPC(currentpc),
        .NextPC(nextpc),
        // FIX: BranchTarget is now EX_MEM_AddResult — the target computed one
        // stage earlier and registered through EX_MEM. No longer recomputed
        // here from the stale currentpc + ID_EX_SignExtImm combination.
        .BranchTarget(EX_MEM_AddResult),
        .Branch(EX_MEM_Branch),
        .Uncondbranch(EX_MEM_UncondBranch),
        .ALUZero(EX_MEM_Zero)
    );

    //Instantiating pipeline registers

    IF_ID if_id(
        .clk(CLK),
        .reset(~resetl), //because the reset in this processor is active-low, then its inversed to the reset inside IF_ID
        .PC_in(currentpc),
        .Instruction_in(instruction),
        .PC_out(IF_ID_PC),
        .Instruction_out(IF_ID_instruction)
    );

    ID_EX id_ex(
        .clk(CLK),
        .reset(~resetl),
        .PC_in(IF_ID_PC), //IF_ID_PC coming in, and ID_EX_PC will exit
        .ReadData1_in(regoutA), //Because processor component is originating in IF/ID
        .ReadData2_in(regoutB),
        .SignExtImm_in(ext_imm),

        .Rd_in(rd),

        .ALUOp_in(aluctrl),
        .ALUsrc_in(alusrc),

        .MemRead_in(memread),
        .MemWrite_in(memwrite),
        .Branch_in(branch),
        .UncondBranch_in(uncond_branch),

        .RegWrite_in(regwrite),
        .MemtoReg_in(mem2reg),

        .PC_out(ID_EX_PC),
        .ReadData1_out(ID_EX_ReadData1),
        .ReadData2_out(ID_EX_ReadData2),
        .SignExtImm_out(ID_EX_SignExtImm),
        .Rd_out(ID_EX_Rd),
        .ALUOp_out(ID_EX_ALUOp),
        .ALUSrc_out(ID_EX_ALUSrc),
        .MemRead_out(ID_EX_MemRead),
        .MemWrite_out(ID_EX_MemWrite),
        .Branch_out(ID_EX_Branch),
        .UncondBranch_out(ID_EX_UncondBranch),
        .RegWrite_out(ID_EX_RegWrite),
        .MemtoReg_out(ID_EX_MemtoReg)
    );

    EX_MEM ex_mem(
        .clk(CLK),
        .reset(~resetl),
        .ALUresult_in(ALU_out),
        // FIX: branch_target (computed above in EX stage) is registered here.
        // EX_MEM_AddResult is what NextPCLogic uses as BranchTarget.
        // This carries the correct target forward to MEM stage, where Branch
        // signals fire — instead of recomputing from the wrong currentpc.
        .AddResult_in(branch_target),
        .Zero_in(zero),
        .Rd_in(ID_EX_Rd),
        .ReadData2_in(ID_EX_ReadData2),

        .branch_in(ID_EX_Branch),
        .uncondbranch_in(ID_EX_UncondBranch),
        .MemRead_in(ID_EX_MemRead),
        .MemWrite_in(ID_EX_MemWrite),

        .MemtoReg_in(ID_EX_MemtoReg),
        .RegWrite_in(ID_EX_RegWrite),

        .ALUresult_out(EX_MEM_ALUresult),
        .AddResult_out(EX_MEM_AddResult),
        .Zero_out(EX_MEM_Zero),
        .Rd_out(EX_MEM_Rd),
        .ReadData2_out(EX_MEM_ReadData2),

        .branch_out(EX_MEM_Branch),
        .uncondbranch_out(EX_MEM_UncondBranch),
        .MemRead_out(EX_MEM_MemRead),
        .MemWrite_out(EX_MEM_MemWrite),

        .MemtoReg_out(EX_MEM_MemtoReg),
        .RegWrite_out(EX_MEM_RegWrite)
    );

    MEM_WB mem_wb(
        .clk(CLK),
        .reset(~resetl),

        .ALUresult_in(EX_MEM_ALUresult),
        .ReadMemData_in(mem_read_data),
        .Rd_in(EX_MEM_Rd),
        
        .MemtoReg_in(EX_MEM_MemtoReg),
        .RegWrite_in(EX_MEM_RegWrite),

        .ALUresult_out(MEM_WB_ALUResult),
        .ReadMemData_out(MEM_WB_ReadMemData),
        .Rd_out(MEM_WB_Rd),
        
        .MemtoReg_out(MEM_WB_MemtoReg),
        .RegWrite_out(MEM_WB_RegWrite)
    );
    


endmodule