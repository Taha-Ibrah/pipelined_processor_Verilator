// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelinedProcessor_testbench.h for the primary calling header

#ifndef VERILATED_VPIPELINEDPROCESSOR_TESTBENCH___024ROOT_H_
#define VERILATED_VPIPELINEDPROCESSOR_TESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VPipelinedProcessor_testbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPipelinedProcessor_testbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__resetl;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__CLK;
        CData/*4:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd;
        CData/*3:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUSrc;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemRead;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemWrite;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Branch;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_UncondBranch;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemtoReg;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Branch;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_UncondBranch;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemWrite;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemRead;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemtoReg;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Zero;
        CData/*4:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_RegWrite;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_MemtoReg;
        CData/*4:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_Rd;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__Flush;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__Stall;
        CData/*4:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__rn;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__alusrc;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__mem2reg;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__regwrite;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__memread;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__memwrite;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__branch;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__uncond_branch;
        CData/*3:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl;
        CData/*1:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__signop;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT____Vcellinp__if_id__write_enable;
        CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT____Vcellinp__id_ex__reset;
        CData/*7:0*/ __Vintraval_h22118c8a__0;
        CData/*7:0*/ __Vintraval_h59cbb57d__0;
        CData/*7:0*/ __Vintraval_hf77e6eac__0;
        CData/*7:0*/ __Vintraval_h0b73c320__0;
        CData/*7:0*/ __Vintraval_h47488ba2__0;
        CData/*7:0*/ __Vintraval_ha5f44913__0;
        CData/*7:0*/ __Vintraval_hbdef69c3__0;
        CData/*7:0*/ __Vintraval_h5fd37b22__0;
        CData/*7:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0;
        CData/*7:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1;
        CData/*7:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2;
        CData/*7:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3;
        CData/*7:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4;
        CData/*7:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5;
        CData/*7:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6;
        CData/*7:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v0;
        CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ PipelinedProcessor_testbench__DOT__watchdog;
        SData/*9:0*/ __Vintraidx_h6e8abd32__0;
        SData/*9:0*/ __Vintraidx_hefd2326e__0;
        SData/*9:0*/ __Vintraidx_hf0b667e7__0;
        SData/*9:0*/ __Vintraidx_hf0b68988__0;
        SData/*9:0*/ __Vintraidx_hefd9d71d__0;
        SData/*9:0*/ __Vintraidx_hf0b5f151__0;
        SData/*9:0*/ __Vintraidx_hefe74b60__0;
        SData/*9:0*/ __Vintraidx_hf03f02fb__0;
        SData/*9:0*/ __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0;
        SData/*9:0*/ __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1;
        SData/*9:0*/ __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2;
        SData/*9:0*/ __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3;
        SData/*9:0*/ __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4;
        SData/*9:0*/ __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5;
        SData/*9:0*/ __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6;
        SData/*9:0*/ __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7;
        IData/*31:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__startpc;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__currentpc;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__MemtoRegOut;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__CommittedResult;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_PC;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_PC;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData2;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_AddResult;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ALUResult;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ReadMemData;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out;
        QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data;
        QData/*63:0*/ __Vintraval_hd2aee5f2__0;
        QData/*63:0*/ __Vintraval_hacfe3d62__0;
        QData/*63:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__currentpc__v0;
        QData/*63:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__currentpc__v1;
        VlUnpacked<QData/*63:0*/, 32> PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs;
        VlUnpacked<CData/*7:0*/, 1024> PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    std::string __Vtask_PipelinedProcessor_testbench__DOT__passTest__0__testName;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5f004e51__0;
    VlTriggerScheduler __VtrigSched_h5f004ef9__0;

    // INTERNAL VARIABLES
    VPipelinedProcessor_testbench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VPipelinedProcessor_testbench___024root(VPipelinedProcessor_testbench__Syms* symsp, const char* namep);
    ~VPipelinedProcessor_testbench___024root();
    VL_UNCOPYABLE(VPipelinedProcessor_testbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
