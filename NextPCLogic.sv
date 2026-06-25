//Optimized code for SystemVerilog
module NextPCLogic(
    input logic [63:0] CurrentPC,
    output logic [63:0] NextPC,
    input logic ALUZero, Branch, Uncondbranch,

    // FIX (#7): Removed SignExtendImm input and the addition CurrentPC+(SignExtImm<<2).
    //
    // PROBLEM: The old design computed the branch target here as CurrentPC+(SignExtImm<<2).
    // This was wrong for two reasons:
    //   1. By the time Branch/UncondBranch fire (instruction is in EX/MEM stage),
    //      CurrentPC has already advanced 3 cycles past the branch instruction.
    //      So CurrentPC+(offset<<2) gives a completely wrong target address.
    //   2. ID_EX_SignExtImm no longer holds the branch instruction's immediate at
    //      that point — it has shifted to the NEXT instruction's immediate.
    //
    // FIX: The branch target is precomputed one stage earlier (in the EX stage) as
    //      ID_EX_PC + (ID_EX_SignExtImm << 2), where both operands belong to the
    //      branch instruction. That result is registered into EX_MEM_AddResult and
    //      passed in here directly as BranchTarget. This module now just selects
    //      between sequential (CurrentPC+4) and branch (BranchTarget).
    input logic [63:0] BranchTarget
    );

    logic needToBranch;
    assign needToBranch = (ALUZero & Branch) | (Uncondbranch);

    // Sequential: CurrentPC+4 is still correct — CurrentPC is the IF-stage PC.
    // Branch: use the precomputed target carried through EX_MEM, not a recomputation.
    assign NextPC = needToBranch ? BranchTarget : (CurrentPC + 4);

endmodule