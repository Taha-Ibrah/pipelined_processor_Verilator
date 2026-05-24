// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile_testbench.h for the primary calling header

#include "VRegisterFile_testbench__pch.h"

VL_ATTR_COLD void VRegisterFile_testbench___024root___eval_initial__TOP(VRegisterFile_testbench___024root* vlSelf);
VlCoroutine VRegisterFile_testbench___024root___eval_initial__TOP__Vtiming__0(VRegisterFile_testbench___024root* vlSelf);
VlCoroutine VRegisterFile_testbench___024root___eval_initial__TOP__Vtiming__1(VRegisterFile_testbench___024root* vlSelf);

void VRegisterFile_testbench___024root___eval_initial(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_initial\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRegisterFile_testbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VRegisterFile_testbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VRegisterFile_testbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine VRegisterFile_testbench___024root___eval_initial__TOP__Vtiming__0(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RegisterFile_testbench__DOT__Clk = 1U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                             nullptr, 
                                             "RegisterFile_testbench.sv", 
                                             36);
        vlSelfRef.RegisterFile_testbench__DOT__Clk 
            = (1U & (~ (IData)(vlSelfRef.RegisterFile_testbench__DOT__Clk)));
    }
    co_return;
}

VlCoroutine VRegisterFile_testbench___024root___eval_initial__TOP__Vtiming__1(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut);
    VlWide<4>/*127:0*/ __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut;
    VL_ZERO_W(128, __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut);
    IData/*31:0*/ __Vtask_RegisterFile_testbench__DOT__allPassed__6__passedCount;
    __Vtask_RegisterFile_testbench__DOT__allPassed__6__passedCount = 0;
    IData/*31:0*/ __Vtask_RegisterFile_testbench__DOT__allPassed__6__totalTests;
    __Vtask_RegisterFile_testbench__DOT__allPassed__6__totalTests = 0;
    // Body
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 0U;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 0U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0ULL;
    vlSelfRef.RegisterFile_testbench__DOT__passed = 0U;
    vlSelfRef.RegisterFile_testbench__DOT__num_tests = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__0__testName = "Read zero register on BusA and BusB"s;
    __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut[0U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut[1U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut[2U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut[3U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut[0U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusB);
    __Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut[1U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusB 
                   >> 0x00000020U));
    __Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut[2U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusA);
    __Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut[3U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusA 
                   >> 0x00000020U));
    if ((0U == ((((__Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut[0U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut[0U]) 
                  | (__Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut[1U] 
                     ^ __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut[1U])) 
                 | (__Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut[2U] 
                    ^ __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut[2U])) 
                | (__Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut[3U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut[3U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__0__testName));
        vlSelfRef.RegisterFile_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.RegisterFile_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__0__testName)
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__0__actualOut.data()
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__0__expectedOut.data());
    }
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 5U;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0x123456789abcdef0ULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 5U;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 5U;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 0U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0x123456789abcdef0ULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__1__testName = "Write/read register 5 on BusA"s;
    __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut[0U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut[1U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut[2U] = 0x9abcdef0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut[3U] = 0x12345678U;
    __Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut[0U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusB);
    __Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut[1U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusB 
                   >> 0x00000020U));
    __Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut[2U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusA);
    __Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut[3U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusA 
                   >> 0x00000020U));
    if ((0U == ((((__Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut[0U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut[0U]) 
                  | (__Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut[1U] 
                     ^ __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut[1U])) 
                 | (__Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut[2U] 
                    ^ __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut[2U])) 
                | (__Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut[3U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut[3U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__1__testName));
        vlSelfRef.RegisterFile_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.RegisterFile_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__1__testName)
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__1__actualOut.data()
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__1__expectedOut.data());
    }
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 5U;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 5U;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 0U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0x123456789abcdef0ULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         109);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__2__testName = "Read register 5 on BusB"s;
    __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut[0U] = 0x9abcdef0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut[1U] = 0x12345678U;
    __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut[2U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut[3U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut[0U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusB);
    __Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut[1U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusB 
                   >> 0x00000020U));
    __Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut[2U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusA);
    __Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut[3U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusA 
                   >> 0x00000020U));
    if ((0U == ((((__Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut[0U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut[0U]) 
                  | (__Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut[1U] 
                     ^ __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut[1U])) 
                 | (__Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut[2U] 
                    ^ __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut[2U])) 
                | (__Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut[3U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut[3U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__2__testName));
        vlSelfRef.RegisterFile_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.RegisterFile_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__2__testName)
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__2__actualOut.data()
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__2__expectedOut.data());
    }
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 0x0aU;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0x0f0f0f0f0f0f0f0fULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 5U;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x0aU;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 0x0aU;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 0U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0x0f0f0f0f0f0f0f0fULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__3__testName = "Read registers 5 and 10"s;
    __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut[0U] = 0x0f0f0f0fU;
    __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut[1U] = 0x0f0f0f0fU;
    __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut[2U] = 0x9abcdef0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut[3U] = 0x12345678U;
    __Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut[0U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusB);
    __Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut[1U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusB 
                   >> 0x00000020U));
    __Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut[2U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusA);
    __Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut[3U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusA 
                   >> 0x00000020U));
    if ((0U == ((((__Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut[0U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut[0U]) 
                  | (__Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut[1U] 
                     ^ __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut[1U])) 
                 | (__Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut[2U] 
                    ^ __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut[2U])) 
                | (__Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut[3U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut[3U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__3__testName));
        vlSelfRef.RegisterFile_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.RegisterFile_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__3__testName)
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__3__actualOut.data()
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__3__expectedOut.data());
    }
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x0aU;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0xffffffffffffffffULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x0aU;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 0U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0xffffffffffffffffULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         135);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__4__testName = "Register 31 write ignored"s;
    __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut[0U] = 0x0f0f0f0fU;
    __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut[1U] = 0x0f0f0f0fU;
    __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut[2U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut[3U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut[0U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusB);
    __Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut[1U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusB 
                   >> 0x00000020U));
    __Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut[2U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusA);
    __Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut[3U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusA 
                   >> 0x00000020U));
    if ((0U == ((((__Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut[0U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut[0U]) 
                  | (__Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut[1U] 
                     ^ __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut[1U])) 
                 | (__Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut[2U] 
                    ^ __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut[2U])) 
                | (__Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut[3U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut[3U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__4__testName));
        vlSelfRef.RegisterFile_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.RegisterFile_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__4__testName)
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__4__actualOut.data()
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__4__expectedOut.data());
    }
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 0x0cU;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0x000000000000000aULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 0x16U;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0x000000000000000bULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         149);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister1 = 0x0cU;
    vlSelfRef.RegisterFile_testbench__DOT__readRegister2 = 0x16U;
    vlSelfRef.RegisterFile_testbench__DOT__writeRegister = 0x1fU;
    vlSelfRef.RegisterFile_testbench__DOT__regWrite = 0U;
    vlSelfRef.RegisterFile_testbench__DOT__writeData = 0ULL;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__5__testName = "Read Register 12 & 22"s;
    __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut[0U] = 0x0000000bU;
    __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut[1U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut[2U] = 0x0000000aU;
    __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut[3U] = 0U;
    __Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut[0U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusB);
    __Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut[1U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusB 
                   >> 0x00000020U));
    __Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut[2U] 
        = (IData)(vlSelfRef.RegisterFile_testbench__DOT__BusA);
    __Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut[3U] 
        = (IData)((vlSelfRef.RegisterFile_testbench__DOT__BusA 
                   >> 0x00000020U));
    if ((0U == ((((__Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut[0U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut[0U]) 
                  | (__Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut[1U] 
                     ^ __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut[1U])) 
                 | (__Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut[2U] 
                    ^ __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut[2U])) 
                | (__Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut[3U] 
                   ^ __Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut[3U])))) {
        VL_WRITEF_NX("%s passed\n",1, 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__5__testName));
        vlSelfRef.RegisterFile_testbench__DOT__passed 
            = ((IData)(1U) + vlSelfRef.RegisterFile_testbench__DOT__passed);
    } else {
        VL_WRITEF_NX("%s failed: got %x, expected %x\n",3
                     , 'S',&(vlSelfRef.__Vtask_RegisterFile_testbench__DOT__passTest__5__testName)
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__5__actualOut.data()
                     , '#',128,__Vtask_RegisterFile_testbench__DOT__passTest__5__expectedOut.data());
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000009c40ULL, 
                                         nullptr, "RegisterFile_testbench.sv", 
                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_RegisterFile_testbench__DOT__allPassed__6__totalTests 
        = vlSelfRef.RegisterFile_testbench__DOT__num_tests;
    __Vtask_RegisterFile_testbench__DOT__allPassed__6__passedCount 
        = vlSelfRef.RegisterFile_testbench__DOT__passed;
    if ((__Vtask_RegisterFile_testbench__DOT__allPassed__6__passedCount 
         == __Vtask_RegisterFile_testbench__DOT__allPassed__6__totalTests)) {
        VL_WRITEF_NX("All tests passed\n",0);
    } else {
        VL_WRITEF_NX("Some tests failed: %0d/%0d passed\n",2
                     , '~',32,__Vtask_RegisterFile_testbench__DOT__allPassed__6__passedCount
                     , '~',32,__Vtask_RegisterFile_testbench__DOT__allPassed__6__totalTests);
    }
    VL_FINISH_MT("RegisterFile_testbench.sv", 162, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void VRegisterFile_testbench___024root___eval_triggers_vec__act(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_triggers_vec__act\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelfRef.RegisterFile_testbench__DOT__Clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__RegisterFile_testbench__DOT__Clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__RegisterFile_testbench__DOT__Clk__0 
        = vlSelfRef.RegisterFile_testbench__DOT__Clk;
}

bool VRegisterFile_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___trigger_anySet__act\n"); );
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

void VRegisterFile_testbench___024root___act_sequent__TOP__0(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___act_sequent__TOP__0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.RegisterFile_testbench__DOT__BusA = (
                                                   (0x1fU 
                                                    == (IData)(vlSelfRef.RegisterFile_testbench__DOT__readRegister1))
                                                    ? 0ULL
                                                    : vlSelfRef.RegisterFile_testbench__DOT__uut__DOT__regs
                                                   [vlSelfRef.RegisterFile_testbench__DOT__readRegister1]);
    vlSelfRef.RegisterFile_testbench__DOT__BusB = (
                                                   (0x1fU 
                                                    == (IData)(vlSelfRef.RegisterFile_testbench__DOT__readRegister2))
                                                    ? 0ULL
                                                    : vlSelfRef.RegisterFile_testbench__DOT__uut__DOT__regs
                                                   [vlSelfRef.RegisterFile_testbench__DOT__readRegister2]);
}

void VRegisterFile_testbench___024root___eval_act(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_act\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        VRegisterFile_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VRegisterFile_testbench___024root___nba_sequent__TOP__0(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___nba_sequent__TOP__0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __VdlyVal__RegisterFile_testbench__DOT__uut__DOT__regs__v0;
    __VdlyVal__RegisterFile_testbench__DOT__uut__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__RegisterFile_testbench__DOT__uut__DOT__regs__v0;
    __VdlyDim0__RegisterFile_testbench__DOT__uut__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__RegisterFile_testbench__DOT__uut__DOT__regs__v0;
    __VdlySet__RegisterFile_testbench__DOT__uut__DOT__regs__v0 = 0;
    // Body
    __VdlySet__RegisterFile_testbench__DOT__uut__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.RegisterFile_testbench__DOT__regWrite) 
         & (0x1fU != (IData)(vlSelfRef.RegisterFile_testbench__DOT__writeRegister)))) {
        __VdlyVal__RegisterFile_testbench__DOT__uut__DOT__regs__v0 
            = vlSelfRef.RegisterFile_testbench__DOT__writeData;
        __VdlyDim0__RegisterFile_testbench__DOT__uut__DOT__regs__v0 
            = vlSelfRef.RegisterFile_testbench__DOT__writeRegister;
        __VdlySet__RegisterFile_testbench__DOT__uut__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__RegisterFile_testbench__DOT__uut__DOT__regs__v0) {
        vlSelfRef.RegisterFile_testbench__DOT__uut__DOT__regs[__VdlyDim0__RegisterFile_testbench__DOT__uut__DOT__regs__v0] 
            = __VdlyVal__RegisterFile_testbench__DOT__uut__DOT__regs__v0;
    }
}

void VRegisterFile_testbench___024root___eval_nba(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_nba\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VRegisterFile_testbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VRegisterFile_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VRegisterFile_testbench___024root___timing_resume(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___timing_resume\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VRegisterFile_testbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VRegisterFile_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VRegisterFile_testbench___024root___eval_phase__act(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_phase__act\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VRegisterFile_testbench___024root___eval_triggers_vec__act(vlSelf);
    VRegisterFile_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegisterFile_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VRegisterFile_testbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VRegisterFile_testbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VRegisterFile_testbench___024root___timing_resume(vlSelf);
        VRegisterFile_testbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRegisterFile_testbench___024root___eval_phase__inact(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_phase__inact\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("RegisterFile_testbench.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VRegisterFile_testbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VRegisterFile_testbench___024root___eval_phase__nba(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_phase__nba\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VRegisterFile_testbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VRegisterFile_testbench___024root___eval_nba(vlSelf);
        VRegisterFile_testbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VRegisterFile_testbench___024root___eval(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VRegisterFile_testbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("RegisterFile_testbench.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("RegisterFile_testbench.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VRegisterFile_testbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("RegisterFile_testbench.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VRegisterFile_testbench___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VRegisterFile_testbench___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VRegisterFile_testbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VRegisterFile_testbench___024root___eval_debug_assertions(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_debug_assertions\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
