// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VSingleCycleProcessor_testbench__Syms.h"


void VSingleCycleProcessor_testbench___024root__trace_chg_0_sub_0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleProcessor_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_chg_0\n"); );
    // Body
    VSingleCycleProcessor_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleProcessor_testbench___024root*>(voidSelf);
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VSingleCycleProcessor_testbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleProcessor_testbench___024root__trace_chg_dtype____0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar);

void VSingleCycleProcessor_testbench___024root__trace_chg_0_sub_0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_chg_0_sub_0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgQData(oldp+0,(vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc),64);
        bufp->chgIData(oldp+2,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction),32);
        bufp->chgCData(oldp+3,((0x0000001fU & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction)),5);
        bufp->chgCData(oldp+4,((0x0000001fU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                               >> 5U))),5);
        bufp->chgCData(oldp+5,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__rn),5);
        bufp->chgSData(oldp+6,((vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                >> 0x00000015U)),11);
        bufp->chgBit(oldp+7,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__reg2loc));
        bufp->chgBit(oldp+8,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alusrc));
        bufp->chgBit(oldp+9,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem2reg));
        bufp->chgBit(oldp+10,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regwrite));
        bufp->chgBit(oldp+11,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__memwrite));
        bufp->chgBit(oldp+12,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__branch));
        bufp->chgBit(oldp+13,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch));
        bufp->chgCData(oldp+14,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl),4);
        bufp->chgCData(oldp+15,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop),2);
        bufp->chgQData(oldp+16,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm),64);
        bufp->chgIData(oldp+18,((0x03ffffffU & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction)),26);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+19,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA),64);
        bufp->chgQData(oldp+21,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB),64);
        bufp->chgQData(oldp+23,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout),64);
        bufp->chgBit(oldp+25,((0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)));
        bufp->chgQData(oldp+26,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b),64);
    }
    bufp->chgBit(oldp+28,(vlSelfRef.SingleCycleProcessor_testbench__DOT__resetl));
    bufp->chgBit(oldp+29,(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK));
    bufp->chgQData(oldp+30,(vlSelfRef.SingleCycleProcessor_testbench__DOT__startpc),64);
    bufp->chgQData(oldp+32,(((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem2reg)
                              ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data
                              : vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)),64);
    bufp->chgIData(oldp+34,(vlSelfRef.SingleCycleProcessor_testbench__DOT__passed),32);
    bufp->chgIData(oldp+35,(vlSelfRef.SingleCycleProcessor_testbench__DOT__num_tests),32);
    bufp->chgSData(oldp+36,(vlSelfRef.SingleCycleProcessor_testbench__DOT__watchdog),16);
    bufp->chgQData(oldp+37,((((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch) 
                              | ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__branch) 
                                 & (0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))
                              ? (vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc 
                                 + VL_SHIFTL_QQI(64,64,32, vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm, 2U))
                              : (4ULL + vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc))),64);
    bufp->chgBit(oldp+39,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__memread));
    bufp->chgQData(oldp+40,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data),64);
    bufp->chgBit(oldp+42,(((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch) 
                           | ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__branch) 
                              & (0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))));
    VSingleCycleProcessor_testbench___024root__trace_chg_dtype____0(vlSelf, bufp, 43, vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs);
}

void VSingleCycleProcessor_testbench___024root__trace_chg_dtype____0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_chg_dtype____0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VSingleCycleProcessor_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_cleanup\n"); );
    // Body
    VSingleCycleProcessor_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleProcessor_testbench___024root*>(voidSelf);
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
