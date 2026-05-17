// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VNextPCLogic_testbench__Syms.h"


void VNextPCLogic_testbench___024root__trace_chg_0_sub_0(VNextPCLogic_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VNextPCLogic_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root__trace_chg_0\n"); );
    // Body
    VNextPCLogic_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNextPCLogic_testbench___024root*>(voidSelf);
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VNextPCLogic_testbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VNextPCLogic_testbench___024root__trace_chg_0_sub_0(VNextPCLogic_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root__trace_chg_0_sub_0\n"); );
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgQData(oldp+0,(vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC),64);
        bufp->chgQData(oldp+2,(vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm),64);
        bufp->chgBit(oldp+4,(vlSelfRef.NextPCLogic_testbench__DOT__ALUZero));
        bufp->chgBit(oldp+5,(vlSelfRef.NextPCLogic_testbench__DOT__Branch));
        bufp->chgBit(oldp+6,(vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch));
        bufp->chgQData(oldp+7,((((IData)(vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch) 
                                 | ((IData)(vlSelfRef.NextPCLogic_testbench__DOT__ALUZero) 
                                    & (IData)(vlSelfRef.NextPCLogic_testbench__DOT__Branch)))
                                 ? (vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC 
                                    + VL_SHIFTL_QQI(64,64,32, vlSelfRef.NextPCLogic_testbench__DOT__SignExtendImm, 2U))
                                 : (4ULL + vlSelfRef.NextPCLogic_testbench__DOT__CurrentPC))),64);
        bufp->chgIData(oldp+9,(vlSelfRef.NextPCLogic_testbench__DOT__passed),32);
        bufp->chgIData(oldp+10,(vlSelfRef.NextPCLogic_testbench__DOT__num_tests),32);
        bufp->chgBit(oldp+11,(((IData)(vlSelfRef.NextPCLogic_testbench__DOT__Uncondbranch) 
                               | ((IData)(vlSelfRef.NextPCLogic_testbench__DOT__ALUZero) 
                                  & (IData)(vlSelfRef.NextPCLogic_testbench__DOT__Branch)))));
    }
}

void VNextPCLogic_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNextPCLogic_testbench___024root__trace_cleanup\n"); );
    // Body
    VNextPCLogic_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNextPCLogic_testbench___024root*>(voidSelf);
    VNextPCLogic_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
