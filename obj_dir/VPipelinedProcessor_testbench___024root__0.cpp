// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelinedProcessor_testbench.h for the primary calling header

#include "VPipelinedProcessor_testbench__pch.h"

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___eval_initial__TOP(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__0(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__1(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3(VPipelinedProcessor_testbench___024root* vlSelf);

void VPipelinedProcessor_testbench___024root___eval_initial(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPipelinedProcessor_testbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

void VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004e51__0(VPipelinedProcessor_testbench___024root* vlSelf, const char* __VeventDescription);
void VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004ef9__0(VPipelinedProcessor_testbench___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ PipelinedProcessor_testbench__DOT__unnamedblk1_1__DOT____Vrepeat0;
    PipelinedProcessor_testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    QData/*63:0*/ __Vtask_PipelinedProcessor_testbench__DOT__passTest__0__actualOut;
    __Vtask_PipelinedProcessor_testbench__DOT__passTest__0__actualOut = 0;
    QData/*63:0*/ __Vtask_PipelinedProcessor_testbench__DOT__passTest__0__expectedOut;
    __Vtask_PipelinedProcessor_testbench__DOT__passTest__0__expectedOut = 0;
    IData/*31:0*/ __Vtask_PipelinedProcessor_testbench__DOT__allPassed__1__passedCount;
    __Vtask_PipelinedProcessor_testbench__DOT__allPassed__1__passedCount = 0;
    IData/*31:0*/ __Vtask_PipelinedProcessor_testbench__DOT__allPassed__1__totalTests;
    __Vtask_PipelinedProcessor_testbench__DOT__allPassed__1__totalTests = 0;
    // Body
    vlSelfRef.PipelinedProcessor_testbench__DOT__resetl = 1U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__startpc = 0ULL;
    vlSelfRef.PipelinedProcessor_testbench__DOT__CLK = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__passed = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__num_tests = 1U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__watchdog = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000001d4c0ULL, 
                                         nullptr, "PipelinedProcessor_testbench.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "PipelinedProcessor_testbench.sv", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__resetl = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__startpc = 0ULL;
    VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004e51__0(vlSelf, 
                                                                        "@(posedge PipelinedProcessor_testbench.CLK)");
    co_await vlSelfRef.__VtrigSched_h5f004e51__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge PipelinedProcessor_testbench.CLK)", 
                                                         "PipelinedProcessor_testbench.sv", 
                                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004ef9__0(vlSelf, 
                                                                        "@(negedge PipelinedProcessor_testbench.CLK)");
    co_await vlSelfRef.__VtrigSched_h5f004ef9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PipelinedProcessor_testbench.CLK)", 
                                                         "PipelinedProcessor_testbench.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004e51__0(vlSelf, 
                                                                        "@(posedge PipelinedProcessor_testbench.CLK)");
    co_await vlSelfRef.__VtrigSched_h5f004e51__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge PipelinedProcessor_testbench.CLK)", 
                                                         "PipelinedProcessor_testbench.sv", 
                                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__resetl = 1U;
    while ((0x0000000000000034ULL > vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)) {
        VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004e51__0(vlSelf, 
                                                                            "@(posedge PipelinedProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_h5f004e51__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge PipelinedProcessor_testbench.CLK)", 
                                                             "PipelinedProcessor_testbench.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004ef9__0(vlSelf, 
                                                                            "@(negedge PipelinedProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_h5f004ef9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge PipelinedProcessor_testbench.CLK)", 
                                                             "PipelinedProcessor_testbench.sv", 
                                                             139);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("CurrentPC: %h\n",1, '#',64,vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc);
    }
    PipelinedProcessor_testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, PipelinedProcessor_testbench__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004e51__0(vlSelf, 
                                                                            "@(posedge PipelinedProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_h5f004e51__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge PipelinedProcessor_testbench.CLK)", 
                                                             "PipelinedProcessor_testbench.sv", 
                                                             150);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004ef9__0(vlSelf, 
                                                                            "@(negedge PipelinedProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_h5f004ef9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge PipelinedProcessor_testbench.CLK)", 
                                                             "PipelinedProcessor_testbench.sv", 
                                                             151);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        PipelinedProcessor_testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (PipelinedProcessor_testbench__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.__Vtask_PipelinedProcessor_testbench__DOT__passTest__0__testName = "Results of Program 2"s;
    __Vtask_PipelinedProcessor_testbench__DOT__passTest__0__expectedOut = 0x000000000000001cULL;
    __Vtask_PipelinedProcessor_testbench__DOT__passTest__0__actualOut 
        = vlSelfRef.PipelinedProcessor_testbench__DOT__CommittedResult;
    if ((__Vtask_PipelinedProcessor_testbench__DOT__passTest__0__actualOut 
         == __Vtask_PipelinedProcessor_testbench__DOT__passTest__0__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_PipelinedProcessor_testbench__DOT__passTest__0__testName));
        vlSelfRef.PipelinedProcessor_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.PipelinedProcessor_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_PipelinedProcessor_testbench__DOT__passTest__0__testName)
                     , '#',64,__Vtask_PipelinedProcessor_testbench__DOT__passTest__0__actualOut
                     , '#',64,__Vtask_PipelinedProcessor_testbench__DOT__passTest__0__expectedOut);
    }
    __Vtask_PipelinedProcessor_testbench__DOT__allPassed__1__totalTests 
        = vlSelfRef.PipelinedProcessor_testbench__DOT__num_tests;
    __Vtask_PipelinedProcessor_testbench__DOT__allPassed__1__passedCount 
        = vlSelfRef.PipelinedProcessor_testbench__DOT__passed;
    if ((__Vtask_PipelinedProcessor_testbench__DOT__allPassed__1__passedCount 
         == __Vtask_PipelinedProcessor_testbench__DOT__allPassed__1__totalTests)) {
        VL_WRITEF_NX("All tests passed. 5-Stage Pipelined Processor Passed.\n",0);
    } else {
        VL_WRITEF_NX("Some tests failed.\n",0);
    }
    VL_FINISH_MT("PipelinedProcessor_testbench.sv", 166, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__1(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x000000000000ea60ULL, 
                                             nullptr, 
                                             "PipelinedProcessor_testbench.sv", 
                                             172);
        vlSelfRef.PipelinedProcessor_testbench__DOT__CLK 
            = (1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK)));
        co_await vlSelfRef.__VdlySched.delay(0x000000000000ea60ULL, 
                                             nullptr, 
                                             "PipelinedProcessor_testbench.sv", 
                                             173);
        vlSelfRef.PipelinedProcessor_testbench__DOT__CLK 
            = (1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK)));
        vlSelfRef.PipelinedProcessor_testbench__DOT__watchdog 
            = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__watchdog)));
    }
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_10__0(VPipelinedProcessor_testbench___024root* vlSelf);

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004ef9__0(vlSelf, 
                                                                            "@(negedge PipelinedProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_h5f004ef9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge PipelinedProcessor_testbench.CLK)", 
                                                             "DataMemory.sv", 
                                                             94);
        if (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemWrite) {
            vlSelfRef.__Vintraidx_h6e8abd32__0 = (0x000003ffU 
                                                  & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult));
            vlSelfRef.__Vintraval_h22118c8a__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 
                                                             >> 0x38U)));
            VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0(vlSelf);
            vlSelfRef.__Vintraidx_hefd2326e__0 = (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)));
            vlSelfRef.__Vintraval_h59cbb57d__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 
                                                             >> 0x30U)));
            VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0(vlSelf);
            vlSelfRef.__Vintraidx_hf0b667e7__0 = (0x000003ffU 
                                                  & ((IData)(2U) 
                                                     + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)));
            vlSelfRef.__Vintraval_hf77e6eac__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 
                                                             >> 0x28U)));
            VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0(vlSelf);
            vlSelfRef.__Vintraidx_hf0b68988__0 = (0x000003ffU 
                                                  & ((IData)(3U) 
                                                     + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)));
            vlSelfRef.__Vintraval_h0b73c320__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 
                                                             >> 0x20U)));
            VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0(vlSelf);
            vlSelfRef.__Vintraidx_hefd9d71d__0 = (0x000003ffU 
                                                  & ((IData)(4U) 
                                                     + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)));
            vlSelfRef.__Vintraval_h47488ba2__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 
                                                             >> 0x18U)));
            VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0(vlSelf);
            vlSelfRef.__Vintraidx_hf0b5f151__0 = (0x000003ffU 
                                                  & ((IData)(5U) 
                                                     + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)));
            vlSelfRef.__Vintraval_ha5f44913__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 
                                                             >> 0x10U)));
            VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0(vlSelf);
            vlSelfRef.__Vintraidx_hefe74b60__0 = (0x000003ffU 
                                                  & ((IData)(6U) 
                                                     + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)));
            vlSelfRef.__Vintraval_hbdef69c3__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 
                                                             >> 8U)));
            VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0(vlSelf);
            vlSelfRef.__Vintraidx_hf03f02fb__0 = (0x000003ffU 
                                                  & ((IData)(7U) 
                                                     + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)));
            vlSelfRef.__Vintraval_h5fd37b22__0 = (0x000000ffU 
                                                  & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2));
            VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_10__0(vlSelf);
        }
    }
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_10__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_10__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         109);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 
        = vlSelfRef.__Vintraval_h5fd37b22__0;
    vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 
        = vlSelfRef.__Vintraidx_hf03f02fb__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         108);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 
        = vlSelfRef.__Vintraval_hbdef69c3__0;
    vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 
        = vlSelfRef.__Vintraidx_hefe74b60__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         107);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 
        = vlSelfRef.__Vintraval_ha5f44913__0;
    vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 
        = vlSelfRef.__Vintraidx_hf0b5f151__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         106);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 
        = vlSelfRef.__Vintraval_h47488ba2__0;
    vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 
        = vlSelfRef.__Vintraidx_hefd9d71d__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         105);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 
        = vlSelfRef.__Vintraval_h0b73c320__0;
    vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 
        = vlSelfRef.__Vintraidx_hf0b68988__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         104);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 
        = vlSelfRef.__Vintraval_hf77e6eac__0;
    vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 
        = vlSelfRef.__Vintraidx_hf0b667e7__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         103);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 
        = vlSelfRef.__Vintraval_h59cbb57d__0;
    vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 
        = vlSelfRef.__Vintraidx_hefd2326e__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         102);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 
        = vlSelfRef.__Vintraval_h22118c8a__0;
    vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 
        = vlSelfRef.__Vintraidx_h6e8abd32__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(VPipelinedProcessor_testbench___024root* vlSelf);
VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_2__0(VPipelinedProcessor_testbench___024root* vlSelf);

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004ef9__0(vlSelf, 
                                                                            "@(negedge PipelinedProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_h5f004ef9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge PipelinedProcessor_testbench.CLK)", 
                                                             "PipelinedProcessor.sv", 
                                                             122);
        if (vlSelfRef.PipelinedProcessor_testbench__DOT__resetl) {
            if ((1U & ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush) 
                       | (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall))))) {
                vlSelfRef.__Vintraval_h0a4e6e9a__0 
                    = vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__nextpc;
                VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(vlSelf);
            }
        } else {
            vlSelfRef.__Vintraval_hacfe3d62__0 = vlSelfRef.PipelinedProcessor_testbench__DOT__startpc;
            VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_2__0(vlSelf);
        }
    }
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_2__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_2__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "PipelinedProcessor.sv", 
                                         124);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__currentpc__v1 
        = vlSelfRef.__Vintraval_hacfe3d62__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v1 = 1U;
    co_return;
}

VlCoroutine VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "PipelinedProcessor.sv", 
                                         133);
    vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__currentpc__v0 
        = vlSelfRef.__Vintraval_h0a4e6e9a__0;
    vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v0 = 1U;
    co_return;
}

void VPipelinedProcessor_testbench___024root___eval_triggers_vec__act(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_triggers_vec__act\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0))) 
                                                         << 1U) 
                                                        | ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0 
        = vlSelfRef.PipelinedProcessor_testbench__DOT__CLK;
}

bool VPipelinedProcessor_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VPipelinedProcessor_testbench___024root___act_comb__TOP__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___act_comb__TOP__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((0x00ffU == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__watchdog))))) {
        VL_WRITEF_NX("Watchdog timer expired\n",0);
        VL_FINISH_MT("PipelinedProcessor_testbench.sv", 182, "");
    }
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset 
        = (1U & ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl)) 
                 | (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush)));
}

void VPipelinedProcessor_testbench___024root___eval_act(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_act\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        VPipelinedProcessor_testbench___024root___act_comb__TOP__0(vlSelf);
    }
}

void VPipelinedProcessor_testbench___024root___nba_sequent__TOP__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___nba_sequent__TOP__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0;
    __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0;
    __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0;
    __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 0;
    // Body
    __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_RegWrite) 
         & (0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_Rd)))) {
        __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 
            = vlSelfRef.PipelinedProcessor_testbench__DOT__MemtoRegOut;
        __VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 
            = vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_Rd;
        __VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 1U;
    }
    if (vlSelfRef.PipelinedProcessor_testbench__DOT__resetl) {
        if (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_RegWrite) 
             & (0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_Rd)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__CommittedResult 
                = vlSelfRef.PipelinedProcessor_testbench__DOT__MemtoRegOut;
        }
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__CommittedResult = 0ULL;
    }
    if (__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0) {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs[__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0] 
            = __VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0;
    }
}

void VPipelinedProcessor_testbench___024root___nba_comb__TOP__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___nba_comb__TOP__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((0x00ffU == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__watchdog))))) {
        VL_WRITEF_NX("Watchdog timer expired\n",0);
        VL_FINISH_MT("PipelinedProcessor_testbench.sv", 182, "");
    }
}

void VPipelinedProcessor_testbench___024root___nba_sequent__TOP__1(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___nba_sequent__TOP__1\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0] 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0;
    }
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1] 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1;
    }
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2] 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2;
    }
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3] 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3;
    }
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4] 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4;
    }
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5] 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5;
    }
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6] 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6;
    }
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7] 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7;
    }
}

void VPipelinedProcessor_testbench___024root___nba_sequent__TOP__2(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___nba_sequent__TOP__2\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset) {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 = 0ULL;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 = 0ULL;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_AddResult = 0ULL;
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp 
            = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl) 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall))))));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 
            = vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData2;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 
            = ((0x1fU == (0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 5U))) ? 0ULL
                : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
               [(0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                >> 5U))]);
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_AddResult 
            = (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_PC 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm, 2U));
    }
    if (vlSelfRef.PipelinedProcessor_testbench__DOT__resetl) {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ReadMemData 
            = vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ALUResult 
            = vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult;
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ReadMemData = 0ULL;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ALUResult = 0ULL;
    }
    if (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset) {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult = 0ULL;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData2 = 0ULL;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_PC = 0ULL;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm = 0ULL;
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult 
            = vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData2 
            = ((0x1fU == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn))
                ? 0ULL : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
               [vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn]);
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_PC 
            = vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_PC;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm 
            = ((0U == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop))
                ? (QData)((IData)((0x00000fffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                  >> 0x0000000aU))))
                : ((1U == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop))
                    ? (((- (QData)((IData)((1U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                  >> 0x00000014U))))) 
                        << 9U) | (QData)((IData)((0x000001ffU 
                                                  & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                     >> 0x0000000cU)))))
                    : ((2U == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop))
                        ? (((- (QData)((IData)((1U 
                                                & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000019U))))) 
                            << 0x0000001aU) | (QData)((IData)(
                                                              (0x03ffffffU 
                                                               & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction))))
                        : (((- (QData)((IData)((1U 
                                                & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000017U))))) 
                            << 0x00000013U) | (QData)((IData)(
                                                              (0x0007ffffU 
                                                               & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                                  >> 5U))))))));
    }
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_Rd 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl)
            ? (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd)
            : 0U);
    if (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset) {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd = 0U;
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd 
            = vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd 
            = (0x0000001fU & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction);
    }
    if (vlSelfRef.PipelinedProcessor_testbench__DOT__resetl) {
        if (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__if_id__DOT__write_enable) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_PC 
                = vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                = ((0ULL == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                    ? 0x91001be1U : ((4ULL == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                      ? 0x91001fe2U
                                      : ((8ULL == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                          ? 0x8b1f03e3U
                                          : ((0x000000000000000cULL 
                                              == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                              ? 0xb4000082U
                                              : ((0x0000000000000010ULL 
                                                  == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                  ? 0x8b010063U
                                                  : 
                                                 ((0x0000000000000014ULL 
                                                   == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                   ? 0xd1000442U
                                                   : 
                                                  ((0x0000000000000018ULL 
                                                    == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                    ? 0x17fffffdU
                                                    : 
                                                   ((0x000000000000001cULL 
                                                     == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                     ? 0x91003fe4U
                                                     : 
                                                    ((0x0000000000000020ULL 
                                                      == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                      ? 0x8a040065U
                                                      : 
                                                     ((0x0000000000000024ULL 
                                                       == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                       ? 0xaa0100a6U
                                                       : 
                                                      ((0x0000000000000028ULL 
                                                        == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                        ? 0xcb060067U
                                                        : 
                                                       ((0x000000000000002cULL 
                                                         == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                         ? 0xf80003e7U
                                                         : 
                                                        (0xf84003e8U 
                                                         & (- (IData)(
                                                                      (0x0000000000000030ULL 
                                                                       == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc))))))))))))))));
        }
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_PC = 0ULL;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction = 0U;
    }
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Zero 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && (0ULL == vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUSrc 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alusrc)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemWrite 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemWrite));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemRead 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemRead));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Branch 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Branch));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_UncondBranch 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_UncondBranch));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_MemtoReg 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl) 
           && (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemtoReg));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_RegWrite 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl) 
           && (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemWrite 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memwrite)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemRead 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memread)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Branch 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__branch)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_UncondBranch) 
           | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Zero) 
              & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Branch)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_UncondBranch 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__uncond_branch)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__MemtoRegOut 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_MemtoReg)
            ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ReadMemData
            : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ALUResult);
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemtoReg 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemtoReg));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemtoReg 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem2reg)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUSrc)
            ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm
            : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData2);
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite 
        = ((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset))) 
           && ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regwrite)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out 
        = (((4U & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp))
             ? (((1U & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp))
                  ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b
                  : (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 
                     - vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b)) 
                & (- (QData)((IData)((1U & ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp) 
                                            >> 1U))))))
             : ((2U & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp))
                 ? ((vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 
                     + vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b) 
                    & (- (QData)((IData)((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp)))))))
                 : ((1U & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp))
                     ? (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 
                        | vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b)
                     : (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 
                        & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b)))) 
           & (- (QData)((IData)((1U & (~ ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp) 
                                          >> 3U)))))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memwrite 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && ((0x01c2U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               && (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__uncond_branch 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && ((0x01c2U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               && ((0x01c0U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U))) 
                   && ((0x0058U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                       && ((0x0258U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                           && ((0x0050U != (0x03f8U 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                               && ((0x0150U != (0x03f8U 
                                                & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                                   && (0x01a0U != (0x03f0U 
                                                   & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                      >> 0x00000015U))))))))));
    if (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                     >> 0x00000015U)))) 
          | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                    >> 0x00000015U)))) 
         | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                   >> 0x00000015U))))) {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regwrite 
            = ((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || ((0x01c0U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U))) 
                   && ((0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                       || ((0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                           || ((0x0050U == (0x03f8U 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                               || (0x0150U == (0x03f8U 
                                               & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                  >> 0x00000015U))))))));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alusrc 
            = ((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))));
        if ((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                    >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 2U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 1U;
        } else if ((0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 2U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 1U;
        } else if ((0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 2U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 6U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 0U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 1U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 7U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 3U;
        } else {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 0U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 2U;
        }
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc 
            = ((0x01c2U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               && ((0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U))) 
                   || ((0x0058U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                       && ((0x0258U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                           && ((0x0050U != (0x03f8U 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                               && ((0x0150U != (0x03f8U 
                                                & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                                   && (0x01a0U == (0x03f0U 
                                                   & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                      >> 0x00000015U)))))))));
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regwrite 
            = ((0x0088U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || (0x0288U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alusrc 
            = ((0x0088U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || (0x0288U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl 
            = ((0x0088U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))
                ? 2U : ((0x0288U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                >> 0x00000015U)))
                         ? 6U : 0U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc 
            = ((0x0088U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || (0x0288U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))));
    }
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__branch 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && ((0x01c2U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               && ((0x01c0U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U))) 
                   && ((0x0058U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                       && ((0x0258U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                           && ((0x0050U != (0x03f8U 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                               && ((0x0150U != (0x03f8U 
                                                & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                                   && (0x01a0U == (0x03f0U 
                                                   & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                      >> 0x00000015U))))))))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memread 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && (0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem2reg 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && (0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn 
        = (0x0000001fU & ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc)
                           ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction
                           : (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                              >> 0x00000010U)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall 
        = (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite) 
            & ((0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd)) 
               & (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd) 
                   == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn)) 
                  | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd) 
                     == (0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 5U)))))) 
           | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite) 
              & ((0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd)) 
                 & (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd) 
                     == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn)) 
                    | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd) 
                       == (0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 5U)))))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__if_id__DOT__write_enable 
        = (1U & ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                 | (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush)));
}

void VPipelinedProcessor_testbench___024root___nba_comb__TOP__1(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___nba_comb__TOP__1\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemRead) {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0x00ffffffffffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult))])) 
                  << 0x00000038U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xff00ffffffffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000030U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffff00ffffffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(2U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000028U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffff00ffffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000020U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffff00ffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(4U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000018U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffffff00ffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(5U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000010U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffffffff00ffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(6U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 8U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffffffffff00ULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | (IData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                 [(0x000003ffU & ((IData)(7U) 
                                                  + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])));
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data = 0ULL;
    }
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset 
        = (1U & ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl)) 
                 | (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush)));
}

void VPipelinedProcessor_testbench___024root___nba_sequent__TOP__3(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___nba_sequent__TOP__3\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v0) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v0 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__currentpc__v0;
    }
    if (vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v1) {
        vlSelfRef.__VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v1 = 0U;
        vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc 
            = vlSelfRef.__VdlyVal__PipelinedProcessor_testbench__DOT__currentpc__v1;
    }
}

void VPipelinedProcessor_testbench___024root___nba_comb__TOP__2(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___nba_comb__TOP__2\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__nextpc 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush)
            ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_AddResult
            : (4ULL + vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc));
}

void VPipelinedProcessor_testbench___024root___eval_nba(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_nba\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VPipelinedProcessor_testbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VPipelinedProcessor_testbench___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VPipelinedProcessor_testbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VPipelinedProcessor_testbench___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VPipelinedProcessor_testbench___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VPipelinedProcessor_testbench___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VPipelinedProcessor_testbench___024root___nba_comb__TOP__2(vlSelf);
    }
}

void VPipelinedProcessor_testbench___024root___timing_ready(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___timing_ready\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5f004e51__0.ready("@(posedge PipelinedProcessor_testbench.CLK)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready("@(negedge PipelinedProcessor_testbench.CLK)");
    }
}

void VPipelinedProcessor_testbench___024root___timing_resume(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___timing_resume\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h5f004e51__0.moveToResumeQueue(
                                                          "@(posedge PipelinedProcessor_testbench.CLK)");
    vlSelfRef.__VtrigSched_h5f004ef9__0.moveToResumeQueue(
                                                          "@(negedge PipelinedProcessor_testbench.CLK)");
    vlSelfRef.__VtrigSched_h5f004e51__0.resume("@(posedge PipelinedProcessor_testbench.CLK)");
    vlSelfRef.__VtrigSched_h5f004ef9__0.resume("@(negedge PipelinedProcessor_testbench.CLK)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VPipelinedProcessor_testbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VPipelinedProcessor_testbench___024root___eval_phase__act(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_phase__act\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VPipelinedProcessor_testbench___024root___eval_triggers_vec__act(vlSelf);
    VPipelinedProcessor_testbench___024root___timing_ready(vlSelf);
    VPipelinedProcessor_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPipelinedProcessor_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VPipelinedProcessor_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VPipelinedProcessor_testbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VPipelinedProcessor_testbench___024root___timing_resume(vlSelf);
        VPipelinedProcessor_testbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VPipelinedProcessor_testbench___024root___eval_phase__inact(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_phase__inact\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("PipelinedProcessor_testbench.sv", 12, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VPipelinedProcessor_testbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VPipelinedProcessor_testbench___024root___eval_phase__nba(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_phase__nba\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VPipelinedProcessor_testbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VPipelinedProcessor_testbench___024root___eval_nba(vlSelf);
        VPipelinedProcessor_testbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VPipelinedProcessor_testbench___024root___eval(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VPipelinedProcessor_testbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("PipelinedProcessor_testbench.sv", 12, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("PipelinedProcessor_testbench.sv", 12, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VPipelinedProcessor_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("PipelinedProcessor_testbench.sv", 12, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VPipelinedProcessor_testbench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VPipelinedProcessor_testbench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VPipelinedProcessor_testbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004e51__0(VPipelinedProcessor_testbench___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004e51__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK) 
                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0))) 
                                   << 1U) | ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0 
        = vlSelfRef.PipelinedProcessor_testbench__DOT__CLK;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5f004e51__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004e51__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004e51__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004e51__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004ef9__0(VPipelinedProcessor_testbench___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root____VbeforeTrig_h5f004ef9__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK) 
                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0))) 
                                   << 1U) | ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0 
        = vlSelfRef.PipelinedProcessor_testbench__DOT__CLK;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004ef9__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5f004e51__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004e51__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004e51__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h5f004e51__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VPipelinedProcessor_testbench___024root___eval_debug_assertions(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_debug_assertions\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
