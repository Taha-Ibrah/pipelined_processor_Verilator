// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleProcessor_testbench.h for the primary calling header

#include "VSingleCycleProcessor_testbench__pch.h"

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_initial__TOP(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__0(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__1(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__3(VSingleCycleProcessor_testbench___024root* vlSelf);

void VSingleCycleProcessor_testbench___024root___eval_initial(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSingleCycleProcessor_testbench___024root___eval_initial__TOP(vlSelf);
    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

void VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968159__0(VSingleCycleProcessor_testbench___024root* vlSelf, const char* __VeventDescription);
void VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968e31__0(VSingleCycleProcessor_testbench___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__actualOut;
    __Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__actualOut = 0;
    QData/*63:0*/ __Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__expectedOut;
    __Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__expectedOut = 0;
    IData/*31:0*/ __Vtask_SingleCycleProcessor_testbench__DOT__allPassed__1__passedCount;
    __Vtask_SingleCycleProcessor_testbench__DOT__allPassed__1__passedCount = 0;
    IData/*31:0*/ __Vtask_SingleCycleProcessor_testbench__DOT__allPassed__1__totalTests;
    __Vtask_SingleCycleProcessor_testbench__DOT__allPassed__1__totalTests = 0;
    // Body
    vlSelfRef.SingleCycleProcessor_testbench__DOT__resetl = 1U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__startpc = 0ULL;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__passed = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__num_tests = 1U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__watchdog = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000001d4c0ULL, 
                                         nullptr, "SingleCycleProcessor_testbench.sv", 
                                         113);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "SingleCycleProcessor_testbench.sv", 
                                         115);
    vlSelfRef.SingleCycleProcessor_testbench__DOT__resetl = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__startpc = 0ULL;
    VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968159__0(vlSelf, 
                                                                          "@(posedge SingleCycleProcessor_testbench.CLK)");
    co_await vlSelfRef.__VtrigSched_hc0968159__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge SingleCycleProcessor_testbench.CLK)", 
                                                         "SingleCycleProcessor_testbench.sv", 
                                                         124);
    VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968e31__0(vlSelf, 
                                                                          "@(negedge SingleCycleProcessor_testbench.CLK)");
    co_await vlSelfRef.__VtrigSched_hc0968e31__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SingleCycleProcessor_testbench.CLK)", 
                                                         "SingleCycleProcessor_testbench.sv", 
                                                         125);
    VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968159__0(vlSelf, 
                                                                          "@(posedge SingleCycleProcessor_testbench.CLK)");
    co_await vlSelfRef.__VtrigSched_hc0968159__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge SingleCycleProcessor_testbench.CLK)", 
                                                         "SingleCycleProcessor_testbench.sv", 
                                                         126);
    vlSelfRef.SingleCycleProcessor_testbench__DOT__resetl = 1U;
    while ((0x0000000000000030ULL > vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)) {
        VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968159__0(vlSelf, 
                                                                              "@(posedge SingleCycleProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_hc0968159__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge SingleCycleProcessor_testbench.CLK)", 
                                                             "SingleCycleProcessor_testbench.sv", 
                                                             149);
        VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968e31__0(vlSelf, 
                                                                              "@(negedge SingleCycleProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_hc0968e31__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SingleCycleProcessor_testbench.CLK)", 
                                                             "SingleCycleProcessor_testbench.sv", 
                                                             150);
        VL_WRITEF_NX("CurrentPC: %h\n",1, '#',64,vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc);
    }
    vlSelfRef.__Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__testName = "Results of Program 1"s;
    __Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__expectedOut = 0x000000000000000fULL;
    __Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__actualOut 
        = ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem2reg)
            ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data
            : vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout);
    if ((__Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__actualOut 
         == __Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__testName));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.SingleCycleProcessor_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__testName)
                     , '#',64,__Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__actualOut
                     , '#',64,__Vtask_SingleCycleProcessor_testbench__DOT__passTest__0__expectedOut);
    }
    __Vtask_SingleCycleProcessor_testbench__DOT__allPassed__1__totalTests 
        = vlSelfRef.SingleCycleProcessor_testbench__DOT__num_tests;
    __Vtask_SingleCycleProcessor_testbench__DOT__allPassed__1__passedCount 
        = vlSelfRef.SingleCycleProcessor_testbench__DOT__passed;
    if ((__Vtask_SingleCycleProcessor_testbench__DOT__allPassed__1__passedCount 
         == __Vtask_SingleCycleProcessor_testbench__DOT__allPassed__1__totalTests)) {
        VL_WRITEF_NX("All tests passed. Single-Cycle Processor Passed.\n",0);
    } else {
        VL_WRITEF_NX("Some tests failed.\n",0);
    }
    VL_FINISH_MT("SingleCycleProcessor_testbench.sv", 164, "");
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__1(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x000000000000ea60ULL, 
                                             nullptr, 
                                             "SingleCycleProcessor_testbench.sv", 
                                             170);
        vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK 
            = (1U & (~ (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK)));
        co_await vlSelfRef.__VdlySched.delay(0x000000000000ea60ULL, 
                                             nullptr, 
                                             "SingleCycleProcessor_testbench.sv", 
                                             171);
        vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK 
            = (1U & (~ (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK)));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__watchdog 
            = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__watchdog)));
    }
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0(VSingleCycleProcessor_testbench___024root* vlSelf);
VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0(VSingleCycleProcessor_testbench___024root* vlSelf);

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968e31__0(vlSelf, 
                                                                              "@(negedge SingleCycleProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_hc0968e31__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SingleCycleProcessor_testbench.CLK)", 
                                                             "DataMemory.sv", 
                                                             94);
        if (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__memwrite) {
            vlSelfRef.__Vintraidx_hd87748d2__0 = (0x000003ffU 
                                                  & (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout));
            vlSelfRef.__Vintraval_hf3c41db6__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB 
                                                             >> 0x38U)));
            VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0(vlSelf);
            vlSelfRef.__Vintraidx_h1fef0ce8__0 = (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)));
            vlSelfRef.__Vintraval_he160ab81__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB 
                                                             >> 0x30U)));
            VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0(vlSelf);
            vlSelfRef.__Vintraidx_h1fc4832d__0 = (0x000003ffU 
                                                  & ((IData)(2U) 
                                                     + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)));
            vlSelfRef.__Vintraval_h19ee18c2__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB 
                                                             >> 0x28U)));
            VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0(vlSelf);
            vlSelfRef.__Vintraidx_h1fc388c6__0 = (0x000003ffU 
                                                  & ((IData)(3U) 
                                                     + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)));
            vlSelfRef.__Vintraval_h2222a082__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB 
                                                             >> 0x20U)));
            VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0(vlSelf);
            vlSelfRef.__Vintraidx_h1fc062b1__0 = (0x000003ffU 
                                                  & ((IData)(4U) 
                                                     + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)));
            vlSelfRef.__Vintraval_h603979d0__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB 
                                                             >> 0x18U)));
            VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0(vlSelf);
            vlSelfRef.__Vintraidx_h1fe7e255__0 = (0x000003ffU 
                                                  & ((IData)(5U) 
                                                     + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)));
            vlSelfRef.__Vintraval_hf1509afa__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB 
                                                             >> 0x10U)));
            VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0(vlSelf);
            vlSelfRef.__Vintraidx_h1fb9f694__0 = (0x000003ffU 
                                                  & ((IData)(6U) 
                                                     + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)));
            vlSelfRef.__Vintraval_h55293a7a__0 = (0x000000ffU 
                                                  & (IData)(
                                                            (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB 
                                                             >> 8U)));
            VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0(vlSelf);
            vlSelfRef.__Vintraidx_h1fba200f__0 = (0x000003ffU 
                                                  & ((IData)(7U) 
                                                     + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)));
            vlSelfRef.__Vintraval_h6138bc5a__0 = (0x000000ffU 
                                                  & (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB));
            VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0(vlSelf);
        }
    }
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_9__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         109);
    vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 
        = vlSelfRef.__Vintraval_h6138bc5a__0;
    vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 
        = vlSelfRef.__Vintraidx_h1fba200f__0;
    vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 1U;
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_8__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         108);
    vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 
        = vlSelfRef.__Vintraval_h55293a7a__0;
    vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 
        = vlSelfRef.__Vintraidx_h1fb9f694__0;
    vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 1U;
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_7__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         107);
    vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 
        = vlSelfRef.__Vintraval_hf1509afa__0;
    vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 
        = vlSelfRef.__Vintraidx_h1fe7e255__0;
    vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 1U;
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_6__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         106);
    vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 
        = vlSelfRef.__Vintraval_h603979d0__0;
    vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 
        = vlSelfRef.__Vintraidx_h1fc062b1__0;
    vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 1U;
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_5__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         105);
    vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 
        = vlSelfRef.__Vintraval_h2222a082__0;
    vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 
        = vlSelfRef.__Vintraidx_h1fc388c6__0;
    vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 1U;
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_4__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         104);
    vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 
        = vlSelfRef.__Vintraval_h19ee18c2__0;
    vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 
        = vlSelfRef.__Vintraidx_h1fc4832d__0;
    vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 1U;
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_3__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         103);
    vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 
        = vlSelfRef.__Vintraval_he160ab81__0;
    vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 
        = vlSelfRef.__Vintraidx_h1fef0ce8__0;
    vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 1U;
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "DataMemory.sv", 
                                         102);
    vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 
        = vlSelfRef.__Vintraval_hf3c41db6__0;
    vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 
        = vlSelfRef.__Vintraidx_hd87748d2__0;
    vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 1U;
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(VSingleCycleProcessor_testbench___024root* vlSelf);

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__3(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__3\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968e31__0(vlSelf, 
                                                                              "@(negedge SingleCycleProcessor_testbench.CLK)");
        co_await vlSelfRef.__VtrigSched_hc0968e31__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SingleCycleProcessor_testbench.CLK)", 
                                                             "SingleCycleProcessor.sv", 
                                                             61);
        vlSelfRef.__Vintraval_hcce029f6__0 = ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__resetl)
                                               ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__nextpc
                                               : vlSelfRef.SingleCycleProcessor_testbench__DOT__startpc);
        VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(vlSelf);
    }
    co_return;
}

VlCoroutine VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP__Vtiming__3____Vfork_1__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000bb8ULL, 
                                         nullptr, "SingleCycleProcessor.sv", 
                                         63);
    vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__currentpc__v0 
        = vlSelfRef.__Vintraval_hcce029f6__0;
    vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__currentpc__v0 = 1U;
    co_return;
}

void VSingleCycleProcessor_testbench___024root___eval_triggers_vec__act(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_triggers_vec__act\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0))) 
                                                      << 2U) 
                                                     | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 1U) 
                                                        | ((~ (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0 
        = vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK;
}

bool VSingleCycleProcessor_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___trigger_anySet__act\n"); );
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

void VSingleCycleProcessor_testbench___024root___act_comb__TOP__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___act_comb__TOP__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((0x00ffU == (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__watchdog))))) {
        VL_WRITEF_NX("Watchdog timer expired\n",0);
        VL_FINISH_MT("SingleCycleProcessor_testbench.sv", 180, "");
    }
}

void VSingleCycleProcessor_testbench___024root___eval_act(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_act\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        VSingleCycleProcessor_testbench___024root___act_comb__TOP__0(vlSelf);
    }
}

void VSingleCycleProcessor_testbench___024root___nba_sequent__TOP__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___nba_sequent__TOP__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0;
    __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0;
    __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0;
    __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 0;
    // Body
    __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regwrite) 
         & (0x1fU != (0x0000001fU & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction)))) {
        __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 
            = ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem2reg)
                ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data
                : vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout);
        __VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 
            = (0x0000001fU & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction);
        __VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0) {
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs[__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0] 
            = __VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs__v0;
    }
}

void VSingleCycleProcessor_testbench___024root___nba_sequent__TOP__1(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___nba_sequent__TOP__1\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0) {
        vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0U;
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0] 
            = vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0;
    }
    if (vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1) {
        vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0U;
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1] 
            = vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1;
    }
    if (vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2) {
        vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0U;
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2] 
            = vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2;
    }
    if (vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3) {
        vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0U;
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3] 
            = vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3;
    }
    if (vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4) {
        vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0U;
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4] 
            = vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4;
    }
    if (vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5) {
        vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0U;
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5] 
            = vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5;
    }
    if (vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6) {
        vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0U;
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6] 
            = vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6;
    }
    if (vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7) {
        vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0U;
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[vlSelfRef.__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7] 
            = vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7;
    }
    if (vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__currentpc__v0) {
        vlSelfRef.__VdlySet__SingleCycleProcessor_testbench__DOT__currentpc__v0 = 0U;
        vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc 
            = vlSelfRef.__VdlyVal__SingleCycleProcessor_testbench__DOT__currentpc__v0;
    }
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
        = ((0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
            ? 0xf84003e9U : ((4ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                              ? 0xf84083eaU : ((8ULL 
                                                == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                ? 0xf84103ebU
                                                : (
                                                   (0x000000000000000cULL 
                                                    == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                    ? 0xf84183ecU
                                                    : 
                                                   ((0x0000000000000010ULL 
                                                     == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                     ? 0xf84203edU
                                                     : 
                                                    ((0x0000000000000014ULL 
                                                      == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                      ? 0xaa0b014aU
                                                      : 
                                                     ((0x0000000000000018ULL 
                                                       == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                       ? 0x8a0a018cU
                                                       : 
                                                      ((0x000000000000001cULL 
                                                        == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                        ? 0xb400008cU
                                                        : 
                                                       ((0x0000000000000020ULL 
                                                         == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                         ? 0x8b0901adU
                                                         : 
                                                        ((0x0000000000000024ULL 
                                                          == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                          ? 0xcb09018cU
                                                          : 
                                                         ((0x0000000000000028ULL 
                                                           == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                           ? 0x17fffffdU
                                                           : 
                                                          ((0x000000000000002cULL 
                                                            == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc)
                                                            ? 0xf80203edU
                                                            : 
                                                           (0xf84203edU 
                                                            & (- (IData)(
                                                                         (0x0000000000000030ULL 
                                                                          == vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc))))))))))))))));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__memwrite 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                      >> 0x00000015U)))) 
           && ((0x01c2U != (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               && (0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U)))));
    if (((((((((0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               | (0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                         >> 0x00000015U)))) 
              | (0x0058U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                        >> 0x00000015U)))) 
             | (0x0258U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U)))) 
            | (0x0050U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                      >> 0x00000015U)))) 
           | (0x0150U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                     >> 0x00000015U)))) 
          | (0x01a0U == (0x03f0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                    >> 0x00000015U)))) 
         | (0x00a0U == (0x03e0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                   >> 0x00000015U))))) {
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regwrite 
            = ((0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               || ((0x01c0U != (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U))) 
                   && ((0x0058U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                               >> 0x00000015U))) 
                       || ((0x0258U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                   >> 0x00000015U))) 
                           || ((0x0050U == (0x03f8U 
                                            & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                               >> 0x00000015U))) 
                               || (0x0150U == (0x03f8U 
                                               & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                  >> 0x00000015U))))))));
        if ((0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                    >> 0x00000015U)))) {
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl = 2U;
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop = 1U;
        } else if ((0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl = 2U;
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop = 1U;
        } else if ((0x0058U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl = 2U;
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x0258U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl = 6U;
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x0050U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl = 0U;
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x0150U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl = 1U;
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x01a0U == (0x03f0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl = 7U;
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop = 3U;
        } else {
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl = 0U;
            vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop = 2U;
        }
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alusrc 
            = ((0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               || (0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U))));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__reg2loc 
            = ((0x01c2U != (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               && ((0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U))) 
                   || ((0x0058U != (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                               >> 0x00000015U))) 
                       && ((0x0258U != (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                   >> 0x00000015U))) 
                           && ((0x0050U != (0x03f8U 
                                            & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                               >> 0x00000015U))) 
                               && ((0x0150U != (0x03f8U 
                                                & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                   >> 0x00000015U))) 
                                   && (0x01a0U == (0x03f0U 
                                                   & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                      >> 0x00000015U)))))))));
    } else {
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regwrite 
            = ((0x0088U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               || (0x0288U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U))));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl 
            = ((0x0088U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U)))
                ? 2U : ((0x0288U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                >> 0x00000015U)))
                         ? 6U : 0U));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alusrc 
            = ((0x0088U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               || (0x0288U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U))));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__reg2loc 
            = ((0x0088U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               || (0x0288U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U))));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop = 0U;
    }
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem2reg 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                      >> 0x00000015U)))) 
           && (0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                      >> 0x00000015U))));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__memread 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                      >> 0x00000015U)))) 
           && (0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                      >> 0x00000015U))));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                      >> 0x00000015U)))) 
           && ((0x01c2U != (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               && ((0x01c0U != (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U))) 
                   && ((0x0058U != (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                               >> 0x00000015U))) 
                       && ((0x0258U != (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                   >> 0x00000015U))) 
                           && ((0x0050U != (0x03f8U 
                                            & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                               >> 0x00000015U))) 
                               && ((0x0150U != (0x03f8U 
                                                & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                   >> 0x00000015U))) 
                                   && (0x01a0U != (0x03f0U 
                                                   & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                      >> 0x00000015U))))))))));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__branch 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                      >> 0x00000015U)))) 
           && ((0x01c2U != (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                       >> 0x00000015U))) 
               && ((0x01c0U != (0x01ffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                           >> 0x00000015U))) 
                   && ((0x0058U != (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                               >> 0x00000015U))) 
                       && ((0x0258U != (0x02f8U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                   >> 0x00000015U))) 
                           && ((0x0050U != (0x03f8U 
                                            & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                               >> 0x00000015U))) 
                               && ((0x0150U != (0x03f8U 
                                                & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                   >> 0x00000015U))) 
                                   && (0x01a0U == (0x03f0U 
                                                   & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                      >> 0x00000015U))))))))));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__rn 
        = (0x0000001fU & ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__reg2loc)
                           ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction
                           : (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                              >> 0x00000010U)));
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm 
        = ((0U == (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop))
            ? (QData)((IData)((0x00000fffU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                              >> 0x0000000aU))))
            : ((1U == (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop))
                ? (((- (QData)((IData)((1U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                              >> 0x00000014U))))) 
                    << 9U) | (QData)((IData)((0x000001ffU 
                                              & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                 >> 0x0000000cU)))))
                : ((2U == (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop))
                    ? (((- (QData)((IData)((1U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                  >> 0x00000019U))))) 
                        << 0x0000001aU) | (QData)((IData)(
                                                          (0x03ffffffU 
                                                           & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction))))
                    : (((- (QData)((IData)((1U & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                  >> 0x00000017U))))) 
                        << 0x00000013U) | (QData)((IData)(
                                                          (0x0007ffffU 
                                                           & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                                              >> 5U))))))));
}

void VSingleCycleProcessor_testbench___024root___nba_comb__TOP__1(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___nba_comb__TOP__1\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA 
        = ((0x1fU == (0x0000001fU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                     >> 5U))) ? 0ULL
            : vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
           [(0x0000001fU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                            >> 5U))]);
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB 
        = ((0x1fU == (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__rn))
            ? 0ULL : vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
           [vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__rn]);
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b 
        = ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alusrc)
            ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm
            : vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB);
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout 
        = (((4U & (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl))
             ? (((1U & (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl))
                  ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b
                  : (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA 
                     - vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b)) 
                & (- (QData)((IData)((1U & ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl) 
                                            >> 1U))))))
             : ((2U & (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl))
                 ? ((vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA 
                     + vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b) 
                    & (- (QData)((IData)((1U & (~ (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl)))))))
                 : ((1U & (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl))
                     ? (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA 
                        | vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b)
                     : (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA 
                        & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b)))) 
           & (- (QData)((IData)((1U & (~ ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl) 
                                          >> 3U)))))));
    if (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__memread) {
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0x00ffffffffffffffULL & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout))])) 
                  << 0x00000038U));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xff00ffffffffffffULL & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))])) 
                  << 0x00000030U));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffff00ffffffffffULL & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(2U) 
                                                   + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))])) 
                  << 0x00000028U));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffff00ffffffffULL & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))])) 
                  << 0x00000020U));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffff00ffffffULL & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(4U) 
                                                   + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))])) 
                  << 0x00000018U));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffffff00ffffULL & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(5U) 
                                                   + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))])) 
                  << 0x00000010U));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffffffff00ffULL & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(6U) 
                                                   + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))])) 
                  << 8U));
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffffffffff00ULL & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | (IData)((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                 [(0x000003ffU & ((IData)(7U) 
                                                  + (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))])));
    } else {
        vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data = 0ULL;
    }
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__nextpc 
        = (((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch) 
            | ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__branch) 
               & (0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))
            ? (vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm, 2U))
            : (4ULL + vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc));
}

void VSingleCycleProcessor_testbench___024root___eval_nba(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_nba\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSingleCycleProcessor_testbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSingleCycleProcessor_testbench___024root___act_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSingleCycleProcessor_testbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSingleCycleProcessor_testbench___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void VSingleCycleProcessor_testbench___024root___timing_ready(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___timing_ready\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc0968159__0.ready("@(posedge SingleCycleProcessor_testbench.CLK)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc0968e31__0.ready("@(negedge SingleCycleProcessor_testbench.CLK)");
    }
}

void VSingleCycleProcessor_testbench___024root___timing_resume(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___timing_resume\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc0968159__0.moveToResumeQueue(
                                                          "@(posedge SingleCycleProcessor_testbench.CLK)");
    vlSelfRef.__VtrigSched_hc0968e31__0.moveToResumeQueue(
                                                          "@(negedge SingleCycleProcessor_testbench.CLK)");
    vlSelfRef.__VtrigSched_hc0968159__0.resume("@(posedge SingleCycleProcessor_testbench.CLK)");
    vlSelfRef.__VtrigSched_hc0968e31__0.resume("@(negedge SingleCycleProcessor_testbench.CLK)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VSingleCycleProcessor_testbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VSingleCycleProcessor_testbench___024root___eval_phase__act(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_phase__act\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VSingleCycleProcessor_testbench___024root___eval_triggers_vec__act(vlSelf);
    VSingleCycleProcessor_testbench___024root___timing_ready(vlSelf);
    VSingleCycleProcessor_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCycleProcessor_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VSingleCycleProcessor_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VSingleCycleProcessor_testbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VSingleCycleProcessor_testbench___024root___timing_resume(vlSelf);
        VSingleCycleProcessor_testbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSingleCycleProcessor_testbench___024root___eval_phase__inact(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_phase__inact\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("SingleCycleProcessor_testbench.sv", 20, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VSingleCycleProcessor_testbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VSingleCycleProcessor_testbench___024root___eval_phase__nba(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_phase__nba\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VSingleCycleProcessor_testbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VSingleCycleProcessor_testbench___024root___eval_nba(vlSelf);
        VSingleCycleProcessor_testbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VSingleCycleProcessor_testbench___024root___eval(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VSingleCycleProcessor_testbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("SingleCycleProcessor_testbench.sv", 20, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("SingleCycleProcessor_testbench.sv", 20, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VSingleCycleProcessor_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("SingleCycleProcessor_testbench.sv", 20, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VSingleCycleProcessor_testbench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VSingleCycleProcessor_testbench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VSingleCycleProcessor_testbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968159__0(VSingleCycleProcessor_testbench___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968159__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK) 
                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0))) 
                                   << 2U) | ((~ (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0 
        = vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc0968e31__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968e31__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968e31__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968e31__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc0968159__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968159__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968159__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968e31__0(VSingleCycleProcessor_testbench___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root____VbeforeTrig_hc0968e31__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK) 
                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0))) 
                                   << 2U) | ((~ (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0 
        = vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc0968e31__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968e31__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968e31__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968e31__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc0968159__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968159__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc0968159__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VSingleCycleProcessor_testbench___024root___eval_debug_assertions(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_debug_assertions\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
