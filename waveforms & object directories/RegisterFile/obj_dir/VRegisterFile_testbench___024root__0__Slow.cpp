// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile_testbench.h for the primary calling header

#include "VRegisterFile_testbench__pch.h"

VL_ATTR_COLD void VRegisterFile_testbench___024root___eval_static(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_static\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__RegisterFile_testbench__DOT__Clk__0 
        = vlSelfRef.RegisterFile_testbench__DOT__Clk;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VRegisterFile_testbench___024root___eval_initial__TOP(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_initial__TOP\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("RegisterFileTest.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void VRegisterFile_testbench___024root___eval_final(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_final\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRegisterFile_testbench___024root___eval_phase__stl(VRegisterFile_testbench___024root* vlSelf);

VL_ATTR_COLD void VRegisterFile_testbench___024root___eval_settle(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_settle\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VRegisterFile_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("RegisterFile_testbench.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VRegisterFile_testbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VRegisterFile_testbench___024root___eval_triggers_vec__stl(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_triggers_vec__stl\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VRegisterFile_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VRegisterFile_testbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VRegisterFile_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___trigger_anySet__stl\n"); );
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

void VRegisterFile_testbench___024root___act_sequent__TOP__0(VRegisterFile_testbench___024root* vlSelf);

VL_ATTR_COLD void VRegisterFile_testbench___024root___eval_stl(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_stl\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VRegisterFile_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VRegisterFile_testbench___024root___eval_phase__stl(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___eval_phase__stl\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VRegisterFile_testbench___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegisterFile_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VRegisterFile_testbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VRegisterFile_testbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VRegisterFile_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VRegisterFile_testbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge RegisterFile_testbench.Clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegisterFile_testbench___024root___ctor_var_reset(VRegisterFile_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root___ctor_var_reset\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->RegisterFile_testbench__DOT__readRegister1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1429408787647926492ull);
    vlSelf->RegisterFile_testbench__DOT__readRegister2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1701964469656019813ull);
    vlSelf->RegisterFile_testbench__DOT__writeRegister = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7232627413133558335ull);
    vlSelf->RegisterFile_testbench__DOT__regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11324184468268666469ull);
    vlSelf->RegisterFile_testbench__DOT__Clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3903686235455480744ull);
    vlSelf->RegisterFile_testbench__DOT__writeData = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1826053236649727280ull);
    vlSelf->RegisterFile_testbench__DOT__BusA = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7425524756557148874ull);
    vlSelf->RegisterFile_testbench__DOT__BusB = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7903963178744395639ull);
    vlSelf->RegisterFile_testbench__DOT__passed = 0;
    vlSelf->RegisterFile_testbench__DOT__num_tests = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->RegisterFile_testbench__DOT__uut__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 484029583583604171ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__RegisterFile_testbench__DOT__Clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
