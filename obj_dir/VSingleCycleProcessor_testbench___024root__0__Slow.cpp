// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleProcessor_testbench.h for the primary calling header

#include "VSingleCycleProcessor_testbench__pch.h"

void VSingleCycleProcessor_testbench___024root___timing_ready(VSingleCycleProcessor_testbench___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_static(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_static\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0 
        = vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK;
    VSingleCycleProcessor_testbench___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_initial__TOP(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_initial__TOP\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("SingleCycleTest.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[0U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[1U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[2U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[3U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[4U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[5U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[6U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[7U] = 1U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[8U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[9U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[10U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[11U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[12U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[13U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[14U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[15U] = 0x0aU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[16U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[17U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[18U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[19U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[20U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[21U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[22U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[23U] = 5U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[24U] = 0x0fU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[25U] = 0xfbU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[26U] = 0xeaU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[27U] = 0x7dU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[28U] = 0xeaU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[29U] = 0xdbU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[30U] = 0xeeU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[31U] = 0xffU;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[32U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[33U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[34U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[35U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[36U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[37U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[38U] = 0U;
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[39U] = 0U;
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_final(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_final\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSingleCycleProcessor_testbench___024root___eval_phase__stl(VSingleCycleProcessor_testbench___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_settle(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_settle\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VSingleCycleProcessor_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("SingleCycleProcessor_testbench.sv", 20, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VSingleCycleProcessor_testbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_triggers_vec__stl(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_triggers_vec__stl\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VSingleCycleProcessor_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VSingleCycleProcessor_testbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VSingleCycleProcessor_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___stl_sequent__TOP__0(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___stl_sequent__TOP__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((0x00ffU == (IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__watchdog))))) {
        VL_WRITEF_NX("Watchdog timer expired\n",0);
        VL_FINISH_MT("SingleCycleProcessor_testbench.sv", 180, "");
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
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA 
        = ((0x1fU == (0x0000001fU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                     >> 5U))) ? 0ULL
            : vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
           [(0x0000001fU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                            >> 5U))]);
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
    vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__nextpc 
        = (((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch) 
            | ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__branch) 
               & (0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))
            ? (vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc 
               + VL_SHIFTL_QQI(64,64,32, vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm, 2U))
            : (4ULL + vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc));
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root____Vm_traceActivitySetAll(VSingleCycleProcessor_testbench___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___eval_stl(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_stl\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VSingleCycleProcessor_testbench___024root___stl_sequent__TOP__0(vlSelf);
        VSingleCycleProcessor_testbench___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool VSingleCycleProcessor_testbench___024root___eval_phase__stl(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___eval_phase__stl\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VSingleCycleProcessor_testbench___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCycleProcessor_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VSingleCycleProcessor_testbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VSingleCycleProcessor_testbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VSingleCycleProcessor_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VSingleCycleProcessor_testbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge SingleCycleProcessor_testbench.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge SingleCycleProcessor_testbench.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root____Vm_traceActivitySetAll(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root____Vm_traceActivitySetAll\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root___ctor_var_reset(VSingleCycleProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root___ctor_var_reset\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->SingleCycleProcessor_testbench__DOT__resetl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6747380284912699907ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12245290335480439017ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__startpc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13121252653471664292ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__currentpc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6179568948364316322ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__passed = 0;
    vlSelf->SingleCycleProcessor_testbench__DOT__num_tests = 0;
    vlSelf->SingleCycleProcessor_testbench__DOT__watchdog = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5073417492880628659ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__nextpc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17195562202417874979ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9379790455353590453ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__rn = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2223643160873275754ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__reg2loc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7143123170895219713ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__alusrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13981205500717195478ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__mem2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5229287756051779277ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__regwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16591881466673376950ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__memread = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16516933133674619373ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__memwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17982476136175451579ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9184860252180186707ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13940819643121320775ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8219277682705599223ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__signop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6813760502606391879ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11129832512094592686ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15069134174659460821ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__aluout = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4309022560605503144ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__extimm = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 761275861738368158ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14633902962773049506ull);
    vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7920349896800098271ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15736083273007455080ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 110131042675900200ull);
    }
    vlSelf->__Vintraval_hcce029f6__0 = 0;
    vlSelf->__Vintraidx_hd87748d2__0 = 0;
    vlSelf->__Vintraval_hf3c41db6__0 = 0;
    vlSelf->__Vintraidx_h1fef0ce8__0 = 0;
    vlSelf->__Vintraval_he160ab81__0 = 0;
    vlSelf->__Vintraidx_h1fc4832d__0 = 0;
    vlSelf->__Vintraval_h19ee18c2__0 = 0;
    vlSelf->__Vintraidx_h1fc388c6__0 = 0;
    vlSelf->__Vintraval_h2222a082__0 = 0;
    vlSelf->__Vintraidx_h1fc062b1__0 = 0;
    vlSelf->__Vintraval_h603979d0__0 = 0;
    vlSelf->__Vintraidx_h1fe7e255__0 = 0;
    vlSelf->__Vintraval_hf1509afa__0 = 0;
    vlSelf->__Vintraidx_h1fb9f694__0 = 0;
    vlSelf->__Vintraval_h55293a7a__0 = 0;
    vlSelf->__Vintraidx_h1fba200f__0 = 0;
    vlSelf->__Vintraval_h6138bc5a__0 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__currentpc__v0 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__currentpc__v0 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0;
    vlSelf->__VdlyVal__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0;
    vlSelf->__VdlyDim0__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0;
    vlSelf->__VdlySet__SingleCycleProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleProcessor_testbench__DOT__CLK__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
