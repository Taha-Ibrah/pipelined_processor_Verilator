// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNextPCLogic_testbench.h for the primary calling header

#include "VNextPCLogic_testbench__pch.h"

VL_ATTR_COLD void VNextPCLogic_testbench___024root___eval_static(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_static\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VNextPCLogic_testbench___024root___eval_initial__TOP(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_initial__TOP\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("NextPCLogicTest.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void VNextPCLogic_testbench___024root___eval_final(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_final\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNextPCLogic_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VNextPCLogic_testbench___024root___eval_phase__stl(VNextPCLogic_testbench___024root* vlSelf);

VL_ATTR_COLD void VNextPCLogic_testbench___024root___eval_settle(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_settle\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VNextPCLogic_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("NextPCLogic_testbench.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VNextPCLogic_testbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VNextPCLogic_testbench___024root___eval_triggers_vec__stl(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_triggers_vec__stl\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VNextPCLogic_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VNextPCLogic_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VNextPCLogic_testbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VNextPCLogic_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___trigger_anySet__stl\n"); );
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

void VNextPCLogic_testbench___024root___act_sequent__TOP__0(VNextPCLogic_testbench___024root* vlSelf);

VL_ATTR_COLD void VNextPCLogic_testbench___024root___eval_stl(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_stl\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VNextPCLogic_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VNextPCLogic_testbench___024root___eval_phase__stl(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___eval_phase__stl\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VNextPCLogic_testbench___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNextPCLogic_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VNextPCLogic_testbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VNextPCLogic_testbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VNextPCLogic_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VNextPCLogic_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VNextPCLogic_testbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VNextPCLogic_testbench___024root___ctor_var_reset(VNextPCLogic_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root___ctor_var_reset\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->NextPCLogic_testbench__DOT__CurrentPC = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8835931593184501317ull);
    vlSelf->NextPCLogic_testbench__DOT__SignExtendImm = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6227475726022413634ull);
    vlSelf->NextPCLogic_testbench__DOT__ALUZero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14252783752349558672ull);
    vlSelf->NextPCLogic_testbench__DOT__Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8117176176295740908ull);
    vlSelf->NextPCLogic_testbench__DOT__Uncondbranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15249819066773227977ull);
    vlSelf->NextPCLogic_testbench__DOT__NextPC = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16985021940230990535ull);
    vlSelf->NextPCLogic_testbench__DOT__passed = 0;
    vlSelf->NextPCLogic_testbench__DOT__num_tests = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
