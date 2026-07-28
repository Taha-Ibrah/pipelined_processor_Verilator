// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelinedProcessor_testbench.h for the primary calling header

#include "VPipelinedProcessor_testbench__pch.h"

void VPipelinedProcessor_testbench___024root___timing_ready(VPipelinedProcessor_testbench___024root* vlSelf);

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___eval_static(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_static\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0 
        = vlSelfRef.PipelinedProcessor_testbench__DOT__CLK;
    VPipelinedProcessor_testbench___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___eval_initial__TOP(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_initial__TOP\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("PipelineProcessorTest.vcd"s);
    VL_PRINTF_MT("-Info: PipelinedProcessor_testbench.sv:44: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[0U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[1U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[2U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[3U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[4U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[5U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[6U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[7U] = 1U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[8U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[9U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[10U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[11U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[12U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[13U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[14U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[15U] = 0x0aU;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[16U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[17U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[18U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[19U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[20U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[21U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[22U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[23U] = 5U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[24U] = 0x0fU;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[25U] = 0xfbU;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[26U] = 0xeaU;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[27U] = 0x7dU;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[28U] = 0xeaU;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[29U] = 0xdbU;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[30U] = 0xeeU;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[31U] = 0xffU;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[32U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[33U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[34U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[35U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[36U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[37U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[38U] = 0U;
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[39U] = 0U;
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___eval_final(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_final\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPipelinedProcessor_testbench___024root___eval_phase__stl(VPipelinedProcessor_testbench___024root* vlSelf);

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___eval_settle(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_settle\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VPipelinedProcessor_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("PipelinedProcessor_testbench.sv", 12, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VPipelinedProcessor_testbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___eval_triggers_vec__stl(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_triggers_vec__stl\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VPipelinedProcessor_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VPipelinedProcessor_testbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VPipelinedProcessor_testbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___stl_sequent__TOP__0(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___stl_sequent__TOP__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc;
    PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc = 0;
    QData/*63:0*/ PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b;
    PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b = 0;
    // Body
    if (VL_UNLIKELY(((0x00ffU == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__watchdog))))) {
        VL_WRITEF_NX("Watchdog timer expired\n",0);
        VL_FINISH_MT("PipelinedProcessor_testbench.sv", 188, "");
    }
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memwrite 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && ((0x01c2U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               && (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__uncond_branch 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && ((0x01c2U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               && ((0x01c0U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U))) 
                   && ((0x0058U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                       && ((0x0258U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                           && ((0x0050U != (0x03f8U 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                               && ((0x0150U != (0x03f8U 
                                                & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                                   && (0x01a0U != (0x03f0U 
                                                   & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                      >> 0x00000015U))))))))));
    if (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                     >> 0x00000015U)))) 
          | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                    >> 0x00000015U)))) 
         | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                   >> 0x00000015U))))) {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regwrite 
            = ((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || ((0x01c0U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U))) 
                   && ((0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                       || ((0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                           || ((0x0050U == (0x03f8U 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                               || (0x0150U == (0x03f8U 
                                               & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                  >> 0x00000015U))))))));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alusrc 
            = ((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))));
        if ((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                    >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 2U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 1U;
        } else if ((0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 2U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 1U;
        } else if ((0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 2U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 6U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 0U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 1U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        } else if ((0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 7U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 3U;
        } else {
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = 0U;
            vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 2U;
        }
        PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc 
            = ((0x01c2U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               && ((0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U))) 
                   || ((0x0058U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                       && ((0x0258U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                           && ((0x0050U != (0x03f8U 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                               && ((0x0150U != (0x03f8U 
                                                & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                                   && (0x01a0U == (0x03f0U 
                                                   & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                      >> 0x00000015U)))))))));
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regwrite 
            = ((0x0088U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || (0x0288U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alusrc 
            = ((0x0088U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || (0x0288U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl 
            = ((0x0088U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))
                ? 2U : ((0x0288U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                >> 0x00000015U)))
                         ? 6U : 0U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop = 0U;
        PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc 
            = ((0x0088U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               || (0x0288U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))));
    }
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__branch 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && ((0x01c2U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U))) 
               && ((0x01c0U != (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U))) 
                   && ((0x0058U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                       && ((0x0258U != (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                           && ((0x0050U != (0x03f8U 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 0x00000015U))) 
                               && ((0x0150U != (0x03f8U 
                                                & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                   >> 0x00000015U))) 
                                   && (0x01a0U == (0x03f0U 
                                                   & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                      >> 0x00000015U))))))))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memread 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && (0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem2reg 
        = (((((((((0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U))) 
                  | (0x01c0U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 0x00000015U)))) 
                 | (0x0058U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 0x00000015U)))) 
                | (0x0258U == (0x02f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 0x00000015U)))) 
               | (0x0050U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                         >> 0x00000015U)))) 
              | (0x0150U == (0x03f8U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 0x00000015U)))) 
             | (0x01a0U == (0x03f0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                       >> 0x00000015U)))) 
            | (0x00a0U == (0x03e0U & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U)))) 
           && (0x01c2U == (0x01ffU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                      >> 0x00000015U))));
    if (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemRead) {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0x00ffffffffffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult))])) 
                  << 0x00000038U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xff00ffffffffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000030U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffff00ffffffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(2U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000028U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffff00ffffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(3U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000020U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffff00ffffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(4U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000018U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffffff00ffffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(5U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 0x00000010U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffffffff00ffULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | ((QData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                  [(0x000003ffU & ((IData)(6U) 
                                                   + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])) 
                  << 8U));
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data 
            = ((0xffffffffffffff00ULL & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data) 
               | (IData)((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank
                                 [(0x000003ffU & ((IData)(7U) 
                                                  + (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult)))])));
    } else {
        vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data = 0ULL;
    }
    vlSelfRef.PipelinedProcessor_testbench__DOT__MemtoRegOut 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_MemtoReg)
            ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ReadMemData
            : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ALUResult);
    PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUSrc)
            ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm
            : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData2);
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush 
        = ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_UncondBranch) 
           | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Zero) 
              & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Branch)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out 
        = (((4U & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp))
             ? (((1U & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp))
                  ? PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b
                  : (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 
                     - PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b)) 
                & (- (QData)((IData)((1U & ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp) 
                                            >> 1U))))))
             : ((2U & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp))
                 ? ((vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 
                     + PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b) 
                    & (- (QData)((IData)((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp)))))))
                 : ((1U & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp))
                     ? (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 
                        | PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b)
                     : (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 
                        & PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b)))) 
           & (- (QData)((IData)((1U & (~ ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp) 
                                          >> 3U)))))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT____Vcellinp__id_ex__reset 
        = (1U & ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl)) 
                 | (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn 
        = (0x0000001fU & ((IData)(PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc)
                           ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction
                           : (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                              >> 0x00000010U)));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall 
        = (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite) 
            & ((0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd)) 
               & (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd) 
                   == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn)) 
                  | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd) 
                     == (0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                        >> 5U)))))) 
           | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite) 
              & ((0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd)) 
                 & (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd) 
                     == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn)) 
                    | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd) 
                       == (0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                          >> 5U)))))));
    vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT____Vcellinp__if_id__write_enable 
        = (1U & ((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                 | (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush)));
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___eval_stl(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_stl\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VPipelinedProcessor_testbench___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VPipelinedProcessor_testbench___024root___eval_phase__stl(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___eval_phase__stl\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VPipelinedProcessor_testbench___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPipelinedProcessor_testbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VPipelinedProcessor_testbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VPipelinedProcessor_testbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VPipelinedProcessor_testbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VPipelinedProcessor_testbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge PipelinedProcessor_testbench.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge PipelinedProcessor_testbench.CLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root___ctor_var_reset(VPipelinedProcessor_testbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root___ctor_var_reset\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->PipelinedProcessor_testbench__DOT__resetl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4275389779672264839ull);
    vlSelf->PipelinedProcessor_testbench__DOT__CLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6487946463936971111ull);
    vlSelf->PipelinedProcessor_testbench__DOT__startpc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 887417998560038338ull);
    vlSelf->PipelinedProcessor_testbench__DOT__currentpc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7946251445637214978ull);
    vlSelf->PipelinedProcessor_testbench__DOT__MemtoRegOut = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5038716145030630116ull);
    vlSelf->PipelinedProcessor_testbench__DOT__CommittedResult = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14365970940503921562ull);
    vlSelf->PipelinedProcessor_testbench__DOT__watchdog = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11241481571468521929ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4582315778306807690ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_PC = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10230686853405506096ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_PC = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3100376534127910448ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17798820930532041257ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17953332419494409934ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9873631748902498639ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11531027836029297431ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14386452037158121100ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17003811123891459530ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 92880373288113077ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11299689005684469327ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12896116684364538047ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_UncondBranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16263408944583568675ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1039237852152113447ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemtoReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12254252264784876777ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3098350074970401508ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_UncondBranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11350616527081786012ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12072450250102980201ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10386075151676408691ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemtoReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15325307152738864062ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4433068619485703065ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12932697159126191852ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15477662965720396850ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_AddResult = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1066909891987902480ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13182150096016896541ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14753486498966337631ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12365084592176342446ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_MemtoReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3970063420152785655ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ALUResult = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11259393520672395177ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ReadMemData = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5723696730671044790ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11691975300618030378ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__Flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7695660903371283481ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__Stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 128382641600153698ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__rn = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9571484454095848938ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__alusrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1913820913542760988ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__mem2reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9163504591877332173ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__regwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1047236406429680885ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__memread = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1877619674828703184ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__memwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14011841604962838897ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2254329337435687014ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__uncond_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 891849020875355653ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5927825489678288921ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__signop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6861821739037396127ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 517054261839779689ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7536624702516743859ull);
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT____Vcellinp__if_id__write_enable = 0;
    vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT____Vcellinp__id_ex__reset = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13223471873037778793ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10999226909257815440ull);
    }
    vlSelf->__Vintraval_hd2aee5f2__0 = 0;
    vlSelf->__Vintraval_hacfe3d62__0 = 0;
    vlSelf->__Vintraidx_h6e8abd32__0 = 0;
    vlSelf->__Vintraval_h22118c8a__0 = 0;
    vlSelf->__Vintraidx_hefd2326e__0 = 0;
    vlSelf->__Vintraval_h59cbb57d__0 = 0;
    vlSelf->__Vintraidx_hf0b667e7__0 = 0;
    vlSelf->__Vintraval_hf77e6eac__0 = 0;
    vlSelf->__Vintraidx_hf0b68988__0 = 0;
    vlSelf->__Vintraval_h0b73c320__0 = 0;
    vlSelf->__Vintraidx_hefd9d71d__0 = 0;
    vlSelf->__Vintraval_h47488ba2__0 = 0;
    vlSelf->__Vintraidx_hf0b5f151__0 = 0;
    vlSelf->__Vintraval_ha5f44913__0 = 0;
    vlSelf->__Vintraidx_hefe74b60__0 = 0;
    vlSelf->__Vintraval_hbdef69c3__0 = 0;
    vlSelf->__Vintraidx_hf03f02fb__0 = 0;
    vlSelf->__Vintraval_h5fd37b22__0 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0;
    vlSelf->__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v0 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0;
    vlSelf->__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v1 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0;
    vlSelf->__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v2 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0;
    vlSelf->__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v3 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0;
    vlSelf->__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v4 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0;
    vlSelf->__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v5 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0;
    vlSelf->__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v6 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0;
    vlSelf->__VdlyDim0__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__uut__DOT__datamem__DOT__memBank__v7 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__currentpc__v0 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v0 = 0;
    vlSelf->__VdlyVal__PipelinedProcessor_testbench__DOT__currentpc__v1 = 0;
    vlSelf->__VdlySet__PipelinedProcessor_testbench__DOT__currentpc__v1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__PipelinedProcessor_testbench__DOT__CLK__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
