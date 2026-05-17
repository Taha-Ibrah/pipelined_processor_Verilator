// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNextPCLogic_testbench.h for the primary calling header

#include "VNextPCLogic_testbench__pch.h"

VL_ATTR_COLD void VNextPCLogic_testbench___024root___eval_initial__TOP(VNextPCLogic_testbench___024root* vlSelf);
VlCoroutine VNextPCLogic_testbench___024root___eval_initial__TOP__Vtiming__0(VNextPCLogic_testbench___024root* vlSelf);

void VNextPCLogic_testbench___024root___eval_initial(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_initial\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VNextPCLogic_testbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VNextPCLogic_testbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine VNextPCLogic_testbench___024root___eval_initial__TOP__Vtiming__0(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__0__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__0__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__0__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__0__expectedOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__1__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__1__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__1__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__1__expectedOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__2__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__2__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__2__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__2__expectedOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__3__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__3__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__3__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__3__expectedOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__4__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__4__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__4__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__4__expectedOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__5__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__5__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__5__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__5__expectedOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__6__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__6__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__6__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__6__expectedOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__7__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__7__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__7__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__7__expectedOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__8__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__8__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__8__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__8__expectedOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__9__actualOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__9__actualOut = 0;
    QData/*63:0*/ __Vtask_NextPCLogic_testbench__DOT__passTest__9__expectedOut;
    __Vtask_NextPCLogic_testbench__DOT__passTest__9__expectedOut = 0;
    IData/*31:0*/ __Vtask_NextPCLogic_testbench__DOT__allPassed__10__passedCount;
    __Vtask_NextPCLogic_testbench__DOT__allPassed__10__passedCount = 0;
    IData/*31:0*/ __Vtask_NextPCLogic_testbench__DOT__allPassed__10__totalTests;
    __Vtask_NextPCLogic_testbench__DOT__allPassed__10__totalTests = 0;
    // Body
    vlSelfRef.NextPCLogic_testbench__DOT__passed = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__num_tests = 0x0000000aU;
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 0ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__0__testName = "No branch from PC 0"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__0__expectedOut = 4ULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__0__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__0__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__0__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__0__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__0__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__0__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__0__expectedOut);
    }
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0x0000000000000100ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 5ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__1__testName = "Branch disabled when ALUZero = 0"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__1__expectedOut = 0x0000000000000104ULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__1__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__1__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__1__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__1__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__1__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__1__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__1__expectedOut);
    }
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0x0000000000000200ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 8ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__2__testName = "Branch disabled when Branch = 0"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__2__expectedOut = 0x0000000000000204ULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__2__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__2__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__2__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__2__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__2__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__2__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__2__expectedOut);
    }
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0x0000000000000100ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 4ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__3__testName = "Conditional branch positive offset"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__3__expectedOut = 0x0000000000000110ULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__3__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__3__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__3__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__3__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__3__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__3__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__3__expectedOut);
    }
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0x0000000000000100ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 0xffffffffffffffffULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__4__testName = "Conditional branch negative offset"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__4__expectedOut = 0x00000000000000fcULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__4__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__4__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__4__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__4__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__4__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__4__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__4__expectedOut);
    }
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0x0000000000000400ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 0ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__5__testName = "Conditional branch zero offset"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__5__expectedOut = 0x0000000000000400ULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__5__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__5__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__5__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__5__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__5__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__5__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__5__expectedOut);
    }
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0x0000000000000200ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 3ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__6__testName = "Unconditional branch positive offset"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__6__expectedOut = 0x000000000000020cULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__6__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__6__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__6__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__6__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__6__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__6__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__6__expectedOut);
    }
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0x0000000000000200ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 0xfffffffffffffffeULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__7__testName = "Unconditional branch negative offset"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__7__expectedOut = 0x00000000000001f8ULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__7__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__7__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__7__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__7__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__7__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__7__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__7__expectedOut);
    }
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0x0000000000000300ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 2ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 0U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__8__testName = "Unconditional branch overrides ALUZero = 0"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__8__expectedOut = 0x0000000000000308ULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__8__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__8__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__8__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__8__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__8__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__8__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__8__expectedOut);
    }
    vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC = 0xfffffffffffffff8ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm = 1ULL;
    vlSelfRef.NextPCLogic_testbench__DOT__ALUZero = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Branch = 1U;
    vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "NextPCLogic_testbench.sv", 
                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__9__testName = "Conditional branch near max address"s;
    __Vtask_NextPCLogic_testbench__DOT__passTest__9__expectedOut = 0xfffffffffffffffcULL;
    __Vtask_NextPCLogic_testbench__DOT__passTest__9__actualOut 
        = vlSelfRef.NextPCLogic_testbench__DOT__NextPC;
    if ((__Vtask_NextPCLogic_testbench__DOT__passTest__9__actualOut 
         == __Vtask_NextPCLogic_testbench__DOT__passTest__9__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__9__testName));
        vlSelfRef.NextPCLogic_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.NextPCLogic_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_NextPCLogic_testbench__DOT__passTest__9__testName)
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__9__actualOut
                     , '#',64,__Vtask_NextPCLogic_testbench__DOT__passTest__9__expectedOut);
    }
    __Vtask_NextPCLogic_testbench__DOT__allPassed__10__totalTests 
        = vlSelfRef.NextPCLogic_testbench__DOT__num_tests;
    __Vtask_NextPCLogic_testbench__DOT__allPassed__10__passedCount 
        = vlSelfRef.NextPCLogic_testbench__DOT__passed;
    if ((__Vtask_NextPCLogic_testbench__DOT__allPassed__10__passedCount 
         == __Vtask_NextPCLogic_testbench__DOT__allPassed__10__totalTests)) {
        VL_WRITEF_NX("All tests passed\n",0);
    } else {
        VL_WRITEF_NX("Some tests failed: %0d/%0d passed\n",2
                     , '~',32,__Vtask_NextPCLogic_testbench__DOT__allPassed__10__passedCount
                     , '~',32,__Vtask_NextPCLogic_testbench__DOT__allPassed__10__totalTests);
    }
    VL_FINISH_MT("NextPCLogic_testbench.sv", 132, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void VNextPCLogic_testbench___024root___eval_triggers_vec__act(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_triggers_vec__act\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool VNextPCLogic_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___trigger_anySet__act\n"); );
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

void VNextPCLogic_testbench___024root___act_sequent__TOP__0(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___act_sequent__TOP__0\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NextPCLogic_testbench__DOT__NextPC = 
        (((IData)(vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch) 
          | ((IData)(vlSelfRef.NextPCLogic_testbench__DOT__ALUZero) 
             & (IData)(vlSelfRef.NextPCLogic_testbench__DOT__Branch)))
          ? (vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC 
             + VL_SHIFTL_QQI(64,64,32, vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm, 2U))
          : (4ULL + vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC));
}

void VNextPCLogic_testbench___024root___eval_act(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_act\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        VNextPCLogic_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VNextPCLogic_testbench___024root___eval_nba(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_nba\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VNextPCLogic_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VNextPCLogic_testbench___024root___timing_resume(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___timing_resume\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VNextPCLogic_testbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VNextPCLogic_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VNextPCLogic_testbench___024root___eval_phase__act(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_phase__act\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VNextPCLogic_testbench___024root___eval_triggers_vec__act(vlSelf);
    VNextPCLogic_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNextPCLogic_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VNextPCLogic_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VNextPCLogic_testbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VNextPCLogic_testbench___024root___timing_resume(vlSelf);
        VNextPCLogic_testbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VNextPCLogic_testbench___024root___eval_phase__inact(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_phase__inact\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("NextPCLogic_testbench.sv", 6, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VNextPCLogic_testbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VNextPCLogic_testbench___024root___eval_phase__nba(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_phase__nba\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VNextPCLogic_testbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VNextPCLogic_testbench___024root___eval_nba(vlSelf);
        VNextPCLogic_testbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VNextPCLogic_testbench___024root___eval(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VNextPCLogic_testbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("NextPCLogic_testbench.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("NextPCLogic_testbench.sv", 6, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VNextPCLogic_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("NextPCLogic_testbench.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VNextPCLogic_testbench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VNextPCLogic_testbench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VNextPCLogic_testbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VNextPCLogic_testbench___024root___eval_debug_assertions(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_debug_assertions\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
