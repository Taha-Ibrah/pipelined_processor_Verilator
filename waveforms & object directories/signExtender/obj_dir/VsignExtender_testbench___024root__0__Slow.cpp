// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsignExtender_testbench.h for the primary calling header

#include "VsignExtender_testbench__pch.h"

VL_ATTR_COLD void VsignExtender_testbench___024root___eval_static(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_static\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VsignExtender_testbench___024root___eval_initial__TOP(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_initial__TOP\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("signExtenderTest.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void VsignExtender_testbench___024root___eval_final(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_final\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsignExtender_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VsignExtender_testbench___024root___eval_phase__stl(VsignExtender_testbench___024root* vlSelf);

VL_ATTR_COLD void VsignExtender_testbench___024root___eval_settle(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_settle\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VsignExtender_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("signExtender_testbench.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VsignExtender_testbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VsignExtender_testbench___024root___eval_triggers_vec__stl(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_triggers_vec__stl\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VsignExtender_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VsignExtender_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VsignExtender_testbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VsignExtender_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___trigger_anySet__stl\n"); );
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

void VsignExtender_testbench___024root___act_sequent__TOP__0(VsignExtender_testbench___024root* vlSelf);

VL_ATTR_COLD void VsignExtender_testbench___024root___eval_stl(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_stl\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VsignExtender_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VsignExtender_testbench___024root___eval_phase__stl(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___eval_phase__stl\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VsignExtender_testbench___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsignExtender_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VsignExtender_testbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VsignExtender_testbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VsignExtender_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VsignExtender_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VsignExtender_testbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsignExtender_testbench___024root___ctor_var_reset(VsignExtender_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root___ctor_var_reset\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->signExtender_testbench__DOT__Instr = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 1350201531934241178ull);
    vlSelf->signExtender_testbench__DOT__SignOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1385444212774868512ull);
    vlSelf->signExtender_testbench__DOT__BusImm = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2770633646302494773ull);
    vlSelf->signExtender_testbench__DOT__passed = 0;
    vlSelf->signExtender_testbench__DOT__num_tests = 0;
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
