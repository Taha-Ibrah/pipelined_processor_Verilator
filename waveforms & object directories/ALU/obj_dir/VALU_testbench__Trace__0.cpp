// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VALU_testbench__Syms.h"


void VALU_testbench___024root__trace_chg_0_sub_0(VALU_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_chg_0\n"); );
    // Body
    VALU_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_testbench___024root*>(voidSelf);
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VALU_testbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VALU_testbench___024root__trace_chg_0_sub_0(VALU_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_chg_0_sub_0\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgQData(oldp+0,(vlSelfRef.ALU_testbench__DOT__BusA),64);
        bufp->chgQData(oldp+2,(vlSelfRef.ALU_testbench__DOT__BusB),64);
        bufp->chgCData(oldp+4,(vlSelfRef.ALU_testbench__DOT__ALUCtrl),4);
        bufp->chgQData(oldp+5,((((4U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                  ? (((1U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                       ? vlSelfRef.ALU_testbench__DOT__BusB
                                       : (vlSelfRef.ALU_testbench__DOT__BusA 
                                          - vlSelfRef.ALU_testbench__DOT__BusB)) 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl) 
                                                              >> 1U))))))
                                  : ((2U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                      ? ((vlSelfRef.ALU_testbench__DOT__BusA 
                                          + vlSelfRef.ALU_testbench__DOT__BusB) 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl)))))))
                                      : ((1U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                          ? (vlSelfRef.ALU_testbench__DOT__BusA 
                                             | vlSelfRef.ALU_testbench__DOT__BusB)
                                          : (vlSelfRef.ALU_testbench__DOT__BusA 
                                             & vlSelfRef.ALU_testbench__DOT__BusB)))) 
                                & (- (QData)((IData)(
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl) 
                                                          >> 3U)))))))),64);
        bufp->chgBit(oldp+7,((0ULL == (((4U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                         ? (((1U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                              ? vlSelfRef.ALU_testbench__DOT__BusB
                                              : (vlSelfRef.ALU_testbench__DOT__BusA 
                                                 - vlSelfRef.ALU_testbench__DOT__BusB)) 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl) 
                                                                     >> 1U))))))
                                         : ((2U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
                                             ? ((vlSelfRef.ALU_testbench__DOT__BusA 
                                                 + vlSelfRef.ALU_testbench__DOT__BusB) 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl)))))))
                                             : ((1U 
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
                                                                 >> 3U))))))))));
        bufp->chgIData(oldp+8,(vlSelfRef.ALU_testbench__DOT__passed),32);
        bufp->chgIData(oldp+9,(vlSelfRef.ALU_testbench__DOT__num_tests),32);
    }
}

void VALU_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_cleanup\n"); );
    // Body
    VALU_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_testbench___024root*>(voidSelf);
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
