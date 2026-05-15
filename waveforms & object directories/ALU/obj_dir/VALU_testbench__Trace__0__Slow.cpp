// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VALU_testbench__Syms.h"


VL_ATTR_COLD void VALU_testbench___024root__trace_init_sub__TOP__0(VALU_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_init_sub__TOP__0\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "ALU_testbench", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+0,0,"BusA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,0,"BusB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"ALUCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_QUAD(tracep,c+5,0,"BusW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"num_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+5,0,"BusW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+0,0,"BusA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,0,"BusB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"ALUCtrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"PASSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VALU_testbench___024root__trace_init_top(VALU_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_init_top\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VALU_testbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VALU_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU_testbench___024root__trace_register(VALU_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_register\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VALU_testbench___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VALU_testbench___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VALU_testbench___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VALU_testbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU_testbench___024root__trace_const_0_sub_0(VALU_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_const_0\n"); );
    // Body
    VALU_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_testbench___024root*>(voidSelf);
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VALU_testbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU_testbench___024root__trace_const_0_sub_0(VALU_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_const_0_sub_0\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+10,(0U),4);
    bufp->fullCData(oldp+11,(1U),4);
    bufp->fullCData(oldp+12,(2U),4);
    bufp->fullCData(oldp+13,(6U),4);
    bufp->fullCData(oldp+14,(7U),4);
}

VL_ATTR_COLD void VALU_testbench___024root__trace_full_0_sub_0(VALU_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_full_0\n"); );
    // Body
    VALU_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_testbench___024root*>(voidSelf);
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VALU_testbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU_testbench___024root__trace_full_0_sub_0(VALU_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_testbench___024root__trace_full_0_sub_0\n"); );
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullQData(oldp+0,(vlSelfRef.ALU_testbench__DOT__BusA),64);
    bufp->fullQData(oldp+2,(vlSelfRef.ALU_testbench__DOT__BusB),64);
    bufp->fullCData(oldp+4,(vlSelfRef.ALU_testbench__DOT__ALUCtrl),4);
    bufp->fullQData(oldp+5,((((4U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
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
                             & (- (QData)((IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl) 
                                                       >> 3U)))))))),64);
    bufp->fullBit(oldp+7,((0ULL == (((4U & (IData)(vlSelfRef.ALU_testbench__DOT__ALUCtrl))
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
                                                              >> 3U))))))))));
    bufp->fullIData(oldp+8,(vlSelfRef.ALU_testbench__DOT__passed),32);
    bufp->fullIData(oldp+9,(vlSelfRef.ALU_testbench__DOT__num_tests),32);
}
