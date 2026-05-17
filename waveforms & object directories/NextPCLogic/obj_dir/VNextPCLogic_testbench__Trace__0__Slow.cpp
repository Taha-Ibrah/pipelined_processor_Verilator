// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VNextPCLogic_testbench__Syms.h"


VL_ATTR_COLD void VNextPCLogic_testbench___024root__trace_init_sub__TOP__0(VNextPCLogic_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root__trace_init_sub__TOP__0\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "NextPCLogic_testbench", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+0,0,"CurrentPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,0,"SignExtendImm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ALUZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"Uncondbranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+7,0,"NextPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"num_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+0,0,"CurrentPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+7,0,"NextPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ALUZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"Uncondbranch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+2,0,"SignExtendImm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"needToBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VNextPCLogic_testbench___024root__trace_init_top(VNextPCLogic_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root__trace_init_top\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VNextPCLogic_testbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VNextPCLogic_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VNextPCLogic_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VNextPCLogic_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VNextPCLogic_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VNextPCLogic_testbench___024root__trace_register(VNextPCLogic_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root__trace_register\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VNextPCLogic_testbench___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VNextPCLogic_testbench___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VNextPCLogic_testbench___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VNextPCLogic_testbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VNextPCLogic_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root__trace_const_0\n"); );
    // Body
    VNextPCLogic_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNextPCLogic_testbench___024root*>(voidSelf);
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VNextPCLogic_testbench___024root__trace_full_0_sub_0(VNextPCLogic_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VNextPCLogic_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root__trace_full_0\n"); );
    // Body
    VNextPCLogic_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNextPCLogic_testbench___024root*>(voidSelf);
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VNextPCLogic_testbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VNextPCLogic_testbench___024root__trace_full_0_sub_0(VNextPCLogic_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root__trace_full_0_sub_0\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullQData(oldp+0,(vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC),64);
    bufp->fullQData(oldp+2,(vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm),64);
    bufp->fullBit(oldp+4,(vlSelfRef.NextPCLogic_testbench__DOT__ALUZero));
    bufp->fullBit(oldp+5,(vlSelfRef.NextPCLogic_testbench__DOT__Branch));
    bufp->fullBit(oldp+6,(vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch));
    bufp->fullQData(oldp+7,((((IData)(vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch) 
                              | ((IData)(vlSelfRef.NextPCLogic_testbench__DOT__ALUZero) 
                                 & (IData)(vlSelfRef.NextPCLogic_testbench__DOT__Branch)))
                              ? (vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC 
                                 + VL_SHIFTL_QQI(64,64,32, vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm, 2U))
                              : (4ULL + vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC))),64);
    bufp->fullIData(oldp+9,(vlSelfRef.NextPCLogic_testbench__DOT__passed),32);
    bufp->fullIData(oldp+10,(vlSelfRef.NextPCLogic_testbench__DOT__num_tests),32);
    bufp->fullBit(oldp+11,(((IData)(vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch) 
                            | ((IData)(vlSelfRef.NextPCLogic_testbench__DOT__ALUZero) 
                               & (IData)(vlSelfRef.NextPCLogic_testbench__DOT__Branch)))));
}
