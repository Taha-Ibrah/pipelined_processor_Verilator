// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VsignExtender_testbench__Syms.h"


VL_ATTR_COLD void VsignExtender_testbench___024root__trace_init_sub__TOP__0(VsignExtender_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root__trace_init_sub__TOP__0\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "signExtender_testbench", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"Instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"SignOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,0,"BusImm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"num_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"SignOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,0,"BusImm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VsignExtender_testbench___024root__trace_init_top(VsignExtender_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root__trace_init_top\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsignExtender_testbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VsignExtender_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VsignExtender_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsignExtender_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VsignExtender_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VsignExtender_testbench___024root__trace_register(VsignExtender_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root__trace_register\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VsignExtender_testbench___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VsignExtender_testbench___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VsignExtender_testbench___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VsignExtender_testbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VsignExtender_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root__trace_const_0\n"); );
    // Body
    VsignExtender_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsignExtender_testbench___024root*>(voidSelf);
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VsignExtender_testbench___024root__trace_full_0_sub_0(VsignExtender_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VsignExtender_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root__trace_full_0\n"); );
    // Body
    VsignExtender_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsignExtender_testbench___024root*>(voidSelf);
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VsignExtender_testbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VsignExtender_testbench___024root__trace_full_0_sub_0(VsignExtender_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtender_testbench___024root__trace_full_0_sub_0\n"); );
    VsignExtender_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.signExtender_testbench__DOT__Instr),26);
    bufp->fullCData(oldp+1,(vlSelfRef.signExtender_testbench__DOT__SignOp),2);
    bufp->fullQData(oldp+2,(((0U == (IData)(vlSelfRef.signExtender_testbench__DOT__SignOp))
                              ? (QData)((IData)((0x00000fffU 
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
    bufp->fullIData(oldp+4,(vlSelfRef.signExtender_testbench__DOT__passed),32);
    bufp->fullIData(oldp+5,(vlSelfRef.signExtender_testbench__DOT__num_tests),32);
}
