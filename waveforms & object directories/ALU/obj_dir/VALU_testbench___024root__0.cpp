// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_testbench.h for the primary calling header

#include "VALU_testbench__pch.h"

VL_ATTR_COLD void VALU_testbench___024root___eval_initial__TOP(VALU_testbench___024root* vlSelf);
VlCoroutine VALU_testbench___024root___eval_initial__TOP__Vtiming__0(VALU_testbench___024root* vlSelf);

void VALU_testbench___024root___eval_initial(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_initial\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VALU_testbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VALU_testbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine VALU_testbench___024root___eval_initial__TOP__Vtiming__0(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__0__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__0__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__0__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__0__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__1__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__1__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__1__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__1__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__2__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__2__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__2__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__2__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__3__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__3__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__3__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__3__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__4__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__4__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__4__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__4__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__5__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__5__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__5__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__5__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__6__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__6__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__6__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__6__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__7__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__7__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__7__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__7__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__8__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__8__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__8__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__8__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__9__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__9__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__9__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__9__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__10__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__10__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__10__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__10__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__11__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__11__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__11__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__11__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__12__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__12__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__12__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__12__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__13__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__13__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__13__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__13__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__14__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__14__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__14__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__14__expectedOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__15__actualOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__15__actualOut);
    VlWide<3>/*64:0*/ __Vtask_ALU_testbench__DOT__passTest__15__expectedOut;
    VL_ZERO_W(65, __Vtask_ALU_testbench__DOT__passTest__15__expectedOut);
    IData/*31:0*/ __Vtask_ALU_testbench__DOT__allPassed__16__passedCount;
    __Vtask_ALU_testbench__DOT__allPassed__16__passedCount = 0;
    IData/*31:0*/ __Vtask_ALU_testbench__DOT__allPassed__16__totalTests;
    __Vtask_ALU_testbench__DOT__allPassed__16__totalTests = 0;
    // Body
    vlSelfRef.ALU_testbench__DOT__passed = 0U;
    vlSelfRef.ALU_testbench__DOT__num_tests = 0x00000010U;
    vlSelfRef.ALU_testbench__DOT__BusA = 0x0000000000001234ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0x00000000abcd0000ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__0__testName = "ADD 0x1234, 0xABCD0000"s;
    __Vtask_ALU_testbench__DOT__passTest__0__expectedOut[0U] = 0xabcd1234U;
    __Vtask_ALU_testbench__DOT__passTest__0__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__0__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__0__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__0__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__0__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__0__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__0__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__0__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__0__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__0__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__0__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__0__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__0__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__0__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__0__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0xffffffffffffffffULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0x1234123412341234ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         89);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__1__testName = "AND all ones, 0x1234123412341234"s;
    __Vtask_ALU_testbench__DOT__passTest__1__expectedOut[0U] = 0x12341234U;
    __Vtask_ALU_testbench__DOT__passTest__1__expectedOut[1U] = 0x12341234U;
    __Vtask_ALU_testbench__DOT__passTest__1__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__1__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__1__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__1__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__1__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__1__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__1__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__1__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__1__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__1__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__1__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__1__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__1__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__1__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0xaaaaddddaaaaddddULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__2__testName = "AND 0x0, 0xAAAADDDDAAAADDDD"s;
    __Vtask_ALU_testbench__DOT__passTest__2__expectedOut[0U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__2__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__2__expectedOut[2U] = 1U;
    __Vtask_ALU_testbench__DOT__passTest__2__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__2__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__2__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__2__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__2__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__2__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__2__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__2__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__2__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__2__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__2__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__2__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__2__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0xf0f0f0f0f0f0f0f0ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0xa1b2c3d4a1b2c3d4ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__3__testName = "AND patterned inputs"s;
    __Vtask_ALU_testbench__DOT__passTest__3__expectedOut[0U] = 0xa0b0c0d0U;
    __Vtask_ALU_testbench__DOT__passTest__3__expectedOut[1U] = 0xa0b0c0d0U;
    __Vtask_ALU_testbench__DOT__passTest__3__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__3__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__3__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__3__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__3__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__3__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__3__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__3__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__3__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__3__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__3__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__3__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__3__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__3__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0xffffffffffffffffULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0x5678567856785678ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__4__testName = "OR all ones, 0x5678567856785678"s;
    __Vtask_ALU_testbench__DOT__passTest__4__expectedOut[0U] = 0xffffffffU;
    __Vtask_ALU_testbench__DOT__passTest__4__expectedOut[1U] = 0xffffffffU;
    __Vtask_ALU_testbench__DOT__passTest__4__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__4__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__4__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__4__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__4__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__4__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__4__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__4__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__4__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__4__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__4__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__4__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__4__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__4__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__5__testName = "OR 0x0, 0x0"s;
    __Vtask_ALU_testbench__DOT__passTest__5__expectedOut[0U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__5__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__5__expectedOut[2U] = 1U;
    __Vtask_ALU_testbench__DOT__passTest__5__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__5__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__5__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__5__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__5__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__5__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__5__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__5__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__5__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__5__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__5__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__5__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__5__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0xf0f0f0f0f0f0f0f0ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0xabcd1234abcd1234ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__6__testName = "OR patterned inputs"s;
    __Vtask_ALU_testbench__DOT__passTest__6__expectedOut[0U] = 0xfbfdf2f4U;
    __Vtask_ALU_testbench__DOT__passTest__6__expectedOut[1U] = 0xfbfdf2f4U;
    __Vtask_ALU_testbench__DOT__passTest__6__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__6__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__6__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__6__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__6__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__6__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__6__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__6__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__6__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__6__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__6__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__6__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__6__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__6__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__7__testName = "ADD 0x0, 0x0"s;
    __Vtask_ALU_testbench__DOT__passTest__7__expectedOut[0U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__7__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__7__expectedOut[2U] = 1U;
    __Vtask_ALU_testbench__DOT__passTest__7__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__7__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__7__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__7__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__7__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__7__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__7__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__7__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__7__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__7__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__7__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__7__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__7__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0x000000000000000fULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 1ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__8__testName = "ADD 0xF, 0x1"s;
    __Vtask_ALU_testbench__DOT__passTest__8__expectedOut[0U] = 0x00000010U;
    __Vtask_ALU_testbench__DOT__passTest__8__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__8__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__8__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__8__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__8__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__8__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__8__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__8__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__8__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__8__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__8__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__8__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__8__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__8__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__8__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0x0000000012341230ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 4ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         126);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__9__testName = "ADD 0x12341230, 0x4"s;
    __Vtask_ALU_testbench__DOT__passTest__9__expectedOut[0U] = 0x12341234U;
    __Vtask_ALU_testbench__DOT__passTest__9__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__9__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__9__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__9__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__9__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__9__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__9__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__9__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__9__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__9__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__9__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__9__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__9__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__9__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__9__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__10__testName = "SUB 0x0, 0x0"s;
    __Vtask_ALU_testbench__DOT__passTest__10__expectedOut[0U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__10__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__10__expectedOut[2U] = 1U;
    __Vtask_ALU_testbench__DOT__passTest__10__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__10__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__10__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__10__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__10__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__10__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__10__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__10__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__10__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__10__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__10__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__10__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__10__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0x0000000000000010ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 1ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__11__testName = "SUB 0x10, 0x1"s;
    __Vtask_ALU_testbench__DOT__passTest__11__expectedOut[0U] = 0x0000000fU;
    __Vtask_ALU_testbench__DOT__passTest__11__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__11__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__11__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__11__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__11__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__11__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__11__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__11__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__11__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__11__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__11__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__11__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__11__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__11__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__11__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0x00000000aaaabbbbULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 2ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         142);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__12__testName = "SUB 0xAAAABBBB, 0x2"s;
    __Vtask_ALU_testbench__DOT__passTest__12__expectedOut[0U] = 0xaaaabbb9U;
    __Vtask_ALU_testbench__DOT__passTest__12__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__12__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__12__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__12__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__12__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__12__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__12__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__12__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__12__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__12__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__12__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__12__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__12__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__12__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__12__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0xaaaaaaaaaaaaaaaaULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0ULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__13__testName = "PassB with BusB = 0"s;
    __Vtask_ALU_testbench__DOT__passTest__13__expectedOut[0U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__13__expectedOut[1U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__13__expectedOut[2U] = 1U;
    __Vtask_ALU_testbench__DOT__passTest__13__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__13__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__13__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__13__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__13__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__13__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__13__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__13__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__13__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__13__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__13__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__13__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__13__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0xffffffffffffffffULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__14__testName = "PassB with BusB = all ones"s;
    __Vtask_ALU_testbench__DOT__passTest__14__expectedOut[0U] = 0xffffffffU;
    __Vtask_ALU_testbench__DOT__passTest__14__expectedOut[1U] = 0xffffffffU;
    __Vtask_ALU_testbench__DOT__passTest__14__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__14__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__14__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__14__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__14__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__14__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__14__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__14__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__14__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__14__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__14__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__14__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__14__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__14__expectedOut.data());
    }
    vlSelfRef.ALU_testbench__DOT__BusA = 0x1357135724682468ULL;
    vlSelfRef.ALU_testbench__DOT__BusB = 0xaabbaabbaabbaabbULL;
    vlSelfRef.ALU_testbench__DOT__ALUCtrl = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "ALU_testbench.sv", 
                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__15__testName = "PassB patterned input"s;
    __Vtask_ALU_testbench__DOT__passTest__15__expectedOut[0U] = 0xaabbaabbU;
    __Vtask_ALU_testbench__DOT__passTest__15__expectedOut[1U] = 0xaabbaabbU;
    __Vtask_ALU_testbench__DOT__passTest__15__expectedOut[2U] = 0U;
    __Vtask_ALU_testbench__DOT__passTest__15__actualOut[0U] 
        = (IData)(vlSelfRef.ALU_testbench__DOT__BusW);
    __Vtask_ALU_testbench__DOT__passTest__15__actualOut[1U] 
        = (IData)((vlSelfRef.ALU_testbench__DOT__BusW 
                   >> 0x00000020U));
    __Vtask_ALU_testbench__DOT__passTest__15__actualOut[2U] 
        = (0ULL == vlSelfRef.ALU_testbench__DOT__BusW);
    if ((0U == (((__Vtask_ALU_testbench__DOT__passTest__15__actualOut[0U] 
                  ^ __Vtask_ALU_testbench__DOT__passTest__15__expectedOut[0U]) 
                 | (__Vtask_ALU_testbench__DOT__passTest__15__actualOut[1U] 
                    ^ __Vtask_ALU_testbench__DOT__passTest__15__expectedOut[1U])) 
                | (__Vtask_ALU_testbench__DOT__passTest__15__actualOut[2U] 
                   ^ __Vtask_ALU_testbench__DOT__passTest__15__expectedOut[2U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__15__testName));
        vlSelfRef.ALU_testbench__DOT__passed = ((IData)(1U) 
                                                + vlSelfRef.ALU_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_ALU_testbench__DOT__passTest__15__testName)
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__15__actualOut.data()
                     , '#',65,__Vtask_ALU_testbench__DOT__passTest__15__expectedOut.data());
    }
    __Vtask_ALU_testbench__DOT__allPassed__16__totalTests 
        = vlSelfRef.ALU_testbench__DOT__num_tests;
    __Vtask_ALU_testbench__DOT__allPassed__16__passedCount 
        = vlSelfRef.ALU_testbench__DOT__passed;
    if ((__Vtask_ALU_testbench__DOT__allPassed__16__passedCount 
         == __Vtask_ALU_testbench__DOT__allPassed__16__totalTests)) {
        VL_WRITEF_NX("All tests passed\n",0);
    } else {
        VL_WRITEF_NX("Some tests failed: %0d/%0d passed\n",2
                     , '~',32,__Vtask_ALU_testbench__DOT__allPassed__16__passedCount
                     , '~',32,__Vtask_ALU_testbench__DOT__allPassed__16__totalTests);
    }
    VL_FINISH_MT("ALU_testbench.sv", 165, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void VALU_testbench___024root___eval_triggers_vec__act(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_triggers_vec__act\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool VALU_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___trigger_anySet__act\n"); );
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

void VALU_testbench___024root___act_sequent__TOP__0(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___act_sequent__TOP__0\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ALU_testbench__DOT__BusW = (((4U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                            ? (((1U 
                                                 & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                                 ? vlSelfRef.ALU_testbench__DOT__BusB
                                                 : 
                                                (vlSelfRef.ALU_testbench__DOT__BusA 
                                                 - vlSelfRef.ALU_testbench__DOT__BusB)) 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl) 
                                                                        >> 1U))))))
                                            : ((2U 
                                                & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                                ? (
                                                   (vlSelfRef.ALU_testbench__DOT__BusA 
                                                    + vlSelfRef.ALU_testbench__DOT__BusB) 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & (~ (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl)))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                                    ? 
                                                   (vlSelfRef.ALU_testbench__DOT__BusA 
                                                    | vlSelfRef.ALU_testbench__DOT__BusB)
                                                    : 
                                                   (vlSelfRef.ALU_testbench__DOT__BusA 
                                                    & vlSelfRef.ALU_testbench__DOT__BusB)))) 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl) 
                                                                    >> 3U)))))));
}

void VALU_testbench___024root___eval_act(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_act\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        VALU_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VALU_testbench___024root___eval_nba(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_nba\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VALU_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VALU_testbench___024root___timing_resume(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___timing_resume\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VALU_testbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VALU_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VALU_testbench___024root___eval_phase__act(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_phase__act\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VALU_testbench___024root___eval_triggers_vec__act(vlSelf);
    VALU_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VALU_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VALU_testbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VALU_testbench___024root___timing_resume(vlSelf);
        VALU_testbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VALU_testbench___024root___eval_phase__inact(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_phase__inact\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("ALU_testbench.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VALU_testbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VALU_testbench___024root___eval_phase__nba(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_phase__nba\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VALU_testbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VALU_testbench___024root___eval_nba(vlSelf);
        VALU_testbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VALU_testbench___024root___eval(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VALU_testbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("ALU_testbench.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("ALU_testbench.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VALU_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("ALU_testbench.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VALU_testbench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VALU_testbench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VALU_testbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VALU_testbench___024root___eval_debug_assertions(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_debug_assertions\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
