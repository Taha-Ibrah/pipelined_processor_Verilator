// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VsignExtender_testbench__Syms.h"


void VsignExtender_testbench___024root__trace_chg_0_sub_0(VsignExtender_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VsignExtender_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root__trace_chg_0\n"); );
    // Body
    VsignExtender_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsignExtender_testbench___024root*>(voidSelf);
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VsignExtender_testbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsignExtender_testbench___024root__trace_chg_0_sub_0(VsignExtender_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root__trace_chg_0_sub_0\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.signExtender_testbench__DOT__Instr),26);
        bufp->chgCData(oldp+1,(vlSelfRef.signExtender_testbench__DOT__SignOp),2);
        bufp->chgQData(oldp+2,(((0U == (IData)(vlSelfRef.signExtender_testbench__DOT__SignOp))
                                 ? (QData)((IData)(
                                                   (0x00000fffU 
                                                    & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                                       >> 0x0000000aU))))
                                 : ((1U == (IData)(vlSelfRef.signExtender_testbench__DOT__SignOp))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                                                >> 0x00000014U))))) 
                                         << 9U) | (QData)((IData)(
                                                                  (0x000001ffU 
                                                                   & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                                                      >> 0x0000000cU)))))
                                     : ((2U == (IData)(vlSelfRef.signExtender_testbench__DOT__SignOp))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                                                    >> 0x00000019U))))) 
                                             << 0x0000001aU) 
                                            | (QData)((IData)(vlSelfRef.signExtender_testbench__DOT__Instr)))
                                         : (((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                                                    >> 0x00000017U))))) 
                                             << 0x00000013U) 
                                            | (QData)((IData)(
                                                              (0x0007ffffU 
                                                               & (vlSelfRef.signExtender_testbench__DOT__Instr 
                                                                  >> 5U))))))))),64);
        bufp->chgIData(oldp+4,(vlSelfRef.signExtender_testbench__DOT__passed),32);
        bufp->chgIData(oldp+5,(vlSelfRef.signExtender_testbench__DOT__num_tests),32);
    }
}

void VsignExtender_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root__trace_cleanup\n"); );
    // Body
    VsignExtender_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsignExtender_testbench___024root*>(voidSelf);
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
