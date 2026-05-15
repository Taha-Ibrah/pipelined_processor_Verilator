// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsignExtender_testbench.h for the primary calling header

#include "VsignExtender_testbench__pch.h"

VL_ATTR_COLD void VsignExtender_testbench___024root___eval_initial__TOP(VsignExtender_testbench___024root* vlSelf);
VlCoroutine VsignExtender_testbench___024root___eval_initial__TOP__Vtiming__0(VsignExtender_testbench___024root* vlSelf);

void VsignExtender_testbench___024root___eval_initial(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_initial\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsignExtender_testbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VsignExtender_testbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine VsignExtender_testbench___024root___eval_initial__TOP__Vtiming__0(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__0__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__0__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__0__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__0__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__1__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__1__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__1__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__1__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__2__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__2__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__2__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__2__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__3__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__3__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__3__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__3__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__4__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__4__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__4__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__4__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__5__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__5__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__5__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__5__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__6__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__6__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__6__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__6__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__7__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__7__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__7__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__7__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__8__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__8__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__8__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__8__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__9__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__9__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__9__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__9__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__10__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__10__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__10__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__10__expectedOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__11__actualOut;
    __Vtask_signExtender_testbench__DOT__passTest__11__actualOut = 0;
    QData/*63:0*/ __Vtask_signExtender_testbench__DOT__passTest__11__expectedOut;
    __Vtask_signExtender_testbench__DOT__passTest__11__expectedOut = 0;
    IData/*31:0*/ __Vtask_signExtender_testbench__DOT__allPassed__12__passedCount;
    __Vtask_signExtender_testbench__DOT__allPassed__12__passedCount = 0;
    IData/*31:0*/ __Vtask_signExtender_testbench__DOT__allPassed__12__totalTests;
    __Vtask_signExtender_testbench__DOT__allPassed__12__totalTests = 0;
    // Body
    vlSelfRef.signExtender_testbench__DOT__passed = 0U;
    vlSelfRef.signExtender_testbench__DOT__num_tests = 0x0000000cU;
    vlSelfRef.signExtender_testbench__DOT__Instr = 0U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__0__testName = "I-type immediate 0x000"s;
    __Vtask_signExtender_testbench__DOT__passTest__0__expectedOut = 0ULL;
    __Vtask_signExtender_testbench__DOT__passTest__0__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__0__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__0__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__0__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__0__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__0__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__0__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0x00000400U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         74);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__1__testName = "I-type immediate 0x001"s;
    __Vtask_signExtender_testbench__DOT__passTest__1__expectedOut = 1ULL;
    __Vtask_signExtender_testbench__DOT__passTest__1__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__1__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__1__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__1__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__1__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__1__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__1__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0x003ffc00U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__2__testName = "I-type immediate 0xFFF"s;
    __Vtask_signExtender_testbench__DOT__passTest__2__expectedOut = 0x0000000000000fffULL;
    __Vtask_signExtender_testbench__DOT__passTest__2__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__2__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__2__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__2__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__2__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__2__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__2__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__3__testName = "D-type immediate 0x000"s;
    __Vtask_signExtender_testbench__DOT__passTest__3__expectedOut = 0ULL;
    __Vtask_signExtender_testbench__DOT__passTest__3__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__3__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__3__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__3__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__3__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__3__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__3__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0x00100000U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__4__testName = "D-type negative immediate 0x100"s;
    __Vtask_signExtender_testbench__DOT__passTest__4__expectedOut = 0xffffffffffffff00ULL;
    __Vtask_signExtender_testbench__DOT__passTest__4__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__4__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__4__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__4__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__4__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__4__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__4__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0x000ff000U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__5__testName = "D-type positive immediate 0x0FF"s;
    __Vtask_signExtender_testbench__DOT__passTest__5__expectedOut = 0x00000000000000ffULL;
    __Vtask_signExtender_testbench__DOT__passTest__5__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__5__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__5__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__5__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__5__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__5__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__5__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__6__testName = "B-type immediate 0x0000000"s;
    __Vtask_signExtender_testbench__DOT__passTest__6__expectedOut = 0ULL;
    __Vtask_signExtender_testbench__DOT__passTest__6__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__6__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__6__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__6__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__6__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__6__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__6__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0x02000000U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__7__testName = "B-type negative immediate 0x2000000"s;
    __Vtask_signExtender_testbench__DOT__passTest__7__expectedOut = 0xfffffffffe000000ULL;
    __Vtask_signExtender_testbench__DOT__passTest__7__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__7__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__7__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__7__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__7__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__7__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__7__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0x01ffffffU;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__8__testName = "B-type positive immediate 0x1FFFFFF"s;
    __Vtask_signExtender_testbench__DOT__passTest__8__expectedOut = 0x0000000001ffffffULL;
    __Vtask_signExtender_testbench__DOT__passTest__8__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__8__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__8__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__8__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__8__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__8__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__8__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         109);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__9__testName = "CB-type immediate 0x00000"s;
    __Vtask_signExtender_testbench__DOT__passTest__9__expectedOut = 0ULL;
    __Vtask_signExtender_testbench__DOT__passTest__9__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__9__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__9__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__9__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__9__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__9__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__9__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0x00800000U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         113);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__10__testName = "CB-type negative immediate 0x40000"s;
    __Vtask_signExtender_testbench__DOT__passTest__10__expectedOut = 0xfffffffffffc0000ULL;
    __Vtask_signExtender_testbench__DOT__passTest__10__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__10__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__10__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__10__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__10__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__10__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__10__expectedOut);
    }
    vlSelfRef.signExtender_testbench__DOT__Instr = 0x007fffe0U;
    vlSelfRef.signExtender_testbench__DOT__SignOp = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "signExtender_testbench.sv", 
                                         117);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__11__testName = "CB-type positive immediate 0x3FFFF"s;
    __Vtask_signExtender_testbench__DOT__passTest__11__expectedOut = 0x000000000003ffffULL;
    __Vtask_signExtender_testbench__DOT__passTest__11__actualOut 
        = vlSelfRef.signExtender_testbench__DOT__BusImm;
    if ((__Vtask_signExtender_testbench__DOT__passTest__11__actualOut 
         == __Vtask_signExtender_testbench__DOT__passTest__11__expectedOut)) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__11__testName));
        vlSelfRef.signExtender_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.signExtender_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_signExtender_testbench__DOT__passTest__11__testName)
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__11__actualOut
                     , '#',64,__Vtask_signExtender_testbench__DOT__passTest__11__expectedOut);
    }
    __Vtask_signExtender_testbench__DOT__allPassed__12__totalTests 
        = vlSelfRef.signExtender_testbench__DOT__num_tests;
    __Vtask_signExtender_testbench__DOT__allPassed__12__passedCount 
        = vlSelfRef.signExtender_testbench__DOT__passed;
    if ((__Vtask_signExtender_testbench__DOT__allPassed__12__passedCount 
         == __Vtask_signExtender_testbench__DOT__allPassed__12__totalTests)) {
        VL_WRITEF_NX("All tests passed\n",0);
    } else {
        VL_WRITEF_NX("Some tests failed: %0d/%0d passed\n",2
                     , '~',32,__Vtask_signExtender_testbench__DOT__allPassed__12__passedCount
                     , '~',32,__Vtask_signExtender_testbench__DOT__allPassed__12__totalTests);
    }
    VL_FINISH_MT("signExtender_testbench.sv", 124, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void VsignExtender_testbench___024root___eval_triggers_vec__act(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_triggers_vec__act\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool VsignExtender_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___trigger_anySet__act\n"); );
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

void VsignExtender_testbench___024root___act_sequent__TOP__0(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___act_sequent__TOP__0\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.signExtender_testbench__DOT__BusImm = 
        ((0U == (IData)(vlSelfRef.signExtender_testbench__DOT__SignOp))
          ? (QData)((IData)((0x00000fffU & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                            >> 0x0000000aU))))
          : ((1U == (IData)(vlSelfRef.signExtender_testbench__DOT__SignOp))
              ? (((- (QData)((IData)((1U & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                            >> 0x00000014U))))) 
                  << 9U) | (QData)((IData)((0x000001ffU 
                                            & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                               >> 0x0000000cU)))))
              : ((2U == (IData)(vlSelfRef.signExtender_testbench__DOT__SignOp))
                  ? (((- (QData)((IData)((1U & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                                >> 0x00000019U))))) 
                      << 0x0000001aU) | (QData)((IData)(vlSelfRef.signExtender_testbench__DOT__Instr)))
                  : (((- (QData)((IData)((1U & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                                >> 0x00000017U))))) 
                      << 0x00000013U) | (QData)((IData)(
                                                        (0x0007ffffU 
                                                         & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                                            >> 5U))))))));
}

void VsignExtender_testbench___024root___eval_act(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_act\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        VsignExtender_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VsignExtender_testbench___024root___eval_nba(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_nba\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VsignExtender_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VsignExtender_testbench___024root___timing_resume(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___timing_resume\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VsignExtender_testbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VsignExtender_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VsignExtender_testbench___024root___eval_phase__act(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_phase__act\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VsignExtender_testbench___024root___eval_triggers_vec__act(vlSelf);
    VsignExtender_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsignExtender_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VsignExtender_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VsignExtender_testbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VsignExtender_testbench___024root___timing_resume(vlSelf);
        VsignExtender_testbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsignExtender_testbench___024root___eval_phase__inact(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_phase__inact\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("signExtender_testbench.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VsignExtender_testbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VsignExtender_testbench___024root___eval_phase__nba(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_phase__nba\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VsignExtender_testbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VsignExtender_testbench___024root___eval_nba(vlSelf);
        VsignExtender_testbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VsignExtender_testbench___024root___eval(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsignExtender_testbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("signExtender_testbench.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("signExtender_testbench.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VsignExtender_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("signExtender_testbench.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VsignExtender_testbench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VsignExtender_testbench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VsignExtender_testbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VsignExtender_testbench___024root___eval_debug_assertions(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_debug_assertions\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
