// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_testbench.h for the primary calling header

#include "VALU_testbench__pch.h"

VL_ATTR_COLD void VALU_testbench___024root___eval_static(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_static\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VALU_testbench___024root___eval_initial__TOP(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_initial__TOP\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("ALUTest.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void VALU_testbench___024root___eval_final(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_final\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VALU_testbench___024root___eval_phase__stl(VALU_testbench___024root* vlSelf);

VL_ATTR_COLD void VALU_testbench___024root___eval_settle(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_settle\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VALU_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("ALU_testbench.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VALU_testbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VALU_testbench___024root___eval_triggers_vec__stl(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_triggers_vec__stl\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VALU_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VALU_testbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VALU_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___trigger_anySet__stl\n"); );
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

void VALU_testbench___024root___act_sequent__TOP__0(VALU_testbench___024root* vlSelf);

VL_ATTR_COLD void VALU_testbench___024root___eval_stl(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_stl\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VALU_testbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VALU_testbench___024root___eval_phase__stl(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___eval_phase__stl\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VALU_testbench___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VALU_testbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VALU_testbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VALU_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VALU_testbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VALU_testbench___024root___ctor_var_reset(VALU_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root___ctor_var_reset\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->ALU_testbench__DOT__BusA = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14114736816452070054ull);
    vlSelf->ALU_testbench__DOT__BusB = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15946360492133115097ull);
    vlSelf->ALU_testbench__DOT__ALUCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3668504835720483138ull);
    vlSelf->ALU_testbench__DOT__BusW = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17164997699929810049ull);
    vlSelf->ALU_testbench__DOT__passed = 0;
    vlSelf->ALU_testbench__DOT__num_tests = 0;
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
