// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VRegisterFile_testbench__Syms.h"


void VRegisterFile_testbench___024root__trace_chg_0_sub_0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRegisterFile_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_chg_0\n"); );
    // Body
    VRegisterFile_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegisterFile_testbench___024root*>(voidSelf);
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VRegisterFile_testbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VRegisterFile_testbench___024root__trace_chg_dtype____0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar);

void VRegisterFile_testbench___024root__trace_chg_0_sub_0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_chg_0_sub_0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.RegisterFile_testbench__DOT__readRegister1),5);
        bufp->chgCData(oldp+1,(vlSelfRef.RegisterFile_testbench__DOT__readRegister2),5);
        bufp->chgCData(oldp+2,(vlSelfRef.RegisterFile_testbench__DOT__writeRegister),5);
        bufp->chgBit(oldp+3,(vlSelfRef.RegisterFile_testbench__DOT__regWrite));
        bufp->chgQData(oldp+4,(vlSelfRef.RegisterFile_testbench__DOT__writeData),64);
        bufp->chgIData(oldp+6,(vlSelfRef.RegisterFile_testbench__DOT__passed),32);
        bufp->chgIData(oldp+7,(vlSelfRef.RegisterFile_testbench__DOT__num_tests),32);
    }
    bufp->chgBit(oldp+8,(vlSelfRef.RegisterFile_testbench__DOT__Clk));
    bufp->chgQData(oldp+9,(((0x1fU == (IData)(vlSelfRef.RegisterFile_testbench__DOT__readRegister1))
                             ? 0ULL : vlSelfRef.RegisterFile_testbench__DOT__uut__DOT__regs
                            [vlSelfRef.RegisterFile_testbench__DOT__readRegister1])),64);
    bufp->chgQData(oldp+11,(((0x1fU == (IData)(vlSelfRef.RegisterFile_testbench__DOT__readRegister2))
                              ? 0ULL : vlSelfRef.RegisterFile_testbench__DOT__uut__DOT__regs
                             [vlSelfRef.RegisterFile_testbench__DOT__readRegister2])),64);
    VRegisterFile_testbench___024root__trace_chg_dtype____0(vlSelf, bufp, 13, vlSelfRef.RegisterFile_testbench__DOT__uut__DOT__regs);
}

void VRegisterFile_testbench___024root__trace_chg_dtype____0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_chg_dtype____0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[31]),64);
    bufp->chgQData(oldp+2,(__VdtypeVar[30]),64);
    bufp->chgQData(oldp+4,(__VdtypeVar[29]),64);
    bufp->chgQData(oldp+6,(__VdtypeVar[28]),64);
    bufp->chgQData(oldp+8,(__VdtypeVar[27]),64);
    bufp->chgQData(oldp+10,(__VdtypeVar[26]),64);
    bufp->chgQData(oldp+12,(__VdtypeVar[25]),64);
    bufp->chgQData(oldp+14,(__VdtypeVar[24]),64);
    bufp->chgQData(oldp+16,(__VdtypeVar[23]),64);
    bufp->chgQData(oldp+18,(__VdtypeVar[22]),64);
    bufp->chgQData(oldp+20,(__VdtypeVar[21]),64);
    bufp->chgQData(oldp+22,(__VdtypeVar[20]),64);
    bufp->chgQData(oldp+24,(__VdtypeVar[19]),64);
    bufp->chgQData(oldp+26,(__VdtypeVar[18]),64);
    bufp->chgQData(oldp+28,(__VdtypeVar[17]),64);
    bufp->chgQData(oldp+30,(__VdtypeVar[16]),64);
    bufp->chgQData(oldp+32,(__VdtypeVar[15]),64);
    bufp->chgQData(oldp+34,(__VdtypeVar[14]),64);
    bufp->chgQData(oldp+36,(__VdtypeVar[13]),64);
    bufp->chgQData(oldp+38,(__VdtypeVar[12]),64);
    bufp->chgQData(oldp+40,(__VdtypeVar[11]),64);
    bufp->chgQData(oldp+42,(__VdtypeVar[10]),64);
    bufp->chgQData(oldp+44,(__VdtypeVar[9]),64);
    bufp->chgQData(oldp+46,(__VdtypeVar[8]),64);
    bufp->chgQData(oldp+48,(__VdtypeVar[7]),64);
    bufp->chgQData(oldp+50,(__VdtypeVar[6]),64);
    bufp->chgQData(oldp+52,(__VdtypeVar[5]),64);
    bufp->chgQData(oldp+54,(__VdtypeVar[4]),64);
    bufp->chgQData(oldp+56,(__VdtypeVar[3]),64);
    bufp->chgQData(oldp+58,(__VdtypeVar[2]),64);
    bufp->chgQData(oldp+60,(__VdtypeVar[1]),64);
    bufp->chgQData(oldp+62,(__VdtypeVar[0]),64);
}

void VRegisterFile_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_cleanup\n"); );
    // Body
    VRegisterFile_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegisterFile_testbench___024root*>(voidSelf);
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
