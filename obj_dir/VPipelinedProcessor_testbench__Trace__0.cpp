// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VPipelinedProcessor_testbench__Syms.h"


void VPipelinedProcessor_testbench___024root__trace_chg_0_sub_0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelinedProcessor_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_chg_0\n"); );
    // Body
    VPipelinedProcessor_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelinedProcessor_testbench___024root*>(voidSelf);
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VPipelinedProcessor_testbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelinedProcessor_testbench___024root__trace_chg_dtype____0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar);

void VPipelinedProcessor_testbench___024root__trace_chg_0_sub_0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_chg_0_sub_0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl));
        bufp->chgQData(oldp+1,(vlSelfRef.PipelinedProcessor_testbench__DOT__startpc),64);
        bufp->chgIData(oldp+3,(vlSelfRef.PipelinedProcessor_testbench__DOT__passed),32);
        bufp->chgIData(oldp+4,(vlSelfRef.PipelinedProcessor_testbench__DOT__num_tests),32);
        bufp->chgBit(oldp+5,((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+6,(vlSelfRef.PipelinedProcessor_testbench__DOT__MemtoRegOut),64);
        bufp->chgIData(oldp+8,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction),32);
        bufp->chgQData(oldp+9,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_PC),64);
        bufp->chgQData(oldp+11,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_PC),64);
        bufp->chgQData(oldp+13,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1),64);
        bufp->chgQData(oldp+15,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData2),64);
        bufp->chgQData(oldp+17,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm),64);
        bufp->chgCData(oldp+19,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd),5);
        bufp->chgCData(oldp+20,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp),4);
        bufp->chgBit(oldp+21,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUSrc));
        bufp->chgBit(oldp+22,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemRead));
        bufp->chgBit(oldp+23,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemWrite));
        bufp->chgBit(oldp+24,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Branch));
        bufp->chgBit(oldp+25,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_UncondBranch));
        bufp->chgBit(oldp+26,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite));
        bufp->chgBit(oldp+27,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemtoReg));
        bufp->chgBit(oldp+28,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Branch));
        bufp->chgBit(oldp+29,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_UncondBranch));
        bufp->chgBit(oldp+30,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemWrite));
        bufp->chgBit(oldp+31,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemRead));
        bufp->chgBit(oldp+32,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemtoReg));
        bufp->chgBit(oldp+33,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite));
        bufp->chgBit(oldp+34,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Zero));
        bufp->chgQData(oldp+35,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult),64);
        bufp->chgQData(oldp+37,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_AddResult),64);
        bufp->chgQData(oldp+39,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2),64);
        bufp->chgCData(oldp+41,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd),5);
        bufp->chgBit(oldp+42,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_RegWrite));
        bufp->chgBit(oldp+43,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_MemtoReg));
        bufp->chgQData(oldp+44,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ALUResult),64);
        bufp->chgQData(oldp+46,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ReadMemData),64);
        bufp->chgCData(oldp+48,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_Rd),5);
        bufp->chgBit(oldp+49,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush));
        bufp->chgBit(oldp+50,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall));
        bufp->chgCData(oldp+51,((0x0000001fU & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction)),5);
        bufp->chgCData(oldp+52,((0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                >> 5U))),5);
        bufp->chgCData(oldp+53,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn),5);
        bufp->chgSData(oldp+54,((vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                 >> 0x00000015U)),11);
        bufp->chgBit(oldp+55,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc));
        bufp->chgBit(oldp+56,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alusrc));
        bufp->chgBit(oldp+57,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem2reg));
        bufp->chgBit(oldp+58,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regwrite));
        bufp->chgBit(oldp+59,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memread));
        bufp->chgBit(oldp+60,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memwrite));
        bufp->chgBit(oldp+61,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__branch));
        bufp->chgBit(oldp+62,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__uncond_branch));
        bufp->chgCData(oldp+63,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl),4);
        bufp->chgCData(oldp+64,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop),2);
        bufp->chgQData(oldp+65,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out),64);
        bufp->chgBit(oldp+67,((0ULL == vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out)));
        bufp->chgQData(oldp+68,(((0U == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop))
                                  ? (QData)((IData)(
                                                    (0x00000fffU 
                                                     & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                        >> 0x0000000aU))))
                                  : ((1U == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop))
                                      ? (((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                                 >> 0x00000014U))))) 
                                          << 9U) | (QData)((IData)(
                                                                   (0x000001ffU 
                                                                    & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                                       >> 0x0000000cU)))))
                                      : ((2U == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                                     >> 0x00000019U))))) 
                                              << 0x0000001aU) 
                                             | (QData)((IData)(
                                                               (0x03ffffffU 
                                                                & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction))))
                                          : (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                                     >> 0x00000017U))))) 
                                              << 0x00000013U) 
                                             | (QData)((IData)(
                                                               (0x0007ffffU 
                                                                & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                                                   >> 5U))))))))),64);
        bufp->chgQData(oldp+70,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b),64);
        bufp->chgQData(oldp+72,((vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_PC 
                                 + VL_SHIFTL_QQI(64,64,32, vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm, 2U))),64);
        bufp->chgBit(oldp+74,(((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite) 
                               & ((0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd)) 
                                  & (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd) 
                                      == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn)) 
                                     | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd) 
                                        == (0x0000001fU 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 5U))))))));
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite) 
                               & ((0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd)) 
                                  & (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd) 
                                      == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn)) 
                                     | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd) 
                                        == (0x0000001fU 
                                            & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 5U))))))));
        bufp->chgCData(oldp+76,(((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl) 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall))))))),4);
        bufp->chgBit(oldp+77,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alusrc))));
        bufp->chgBit(oldp+78,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memread))));
        bufp->chgBit(oldp+79,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memwrite))));
        bufp->chgBit(oldp+80,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__branch))));
        bufp->chgBit(oldp+81,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__uncond_branch))));
        bufp->chgBit(oldp+82,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regwrite))));
        bufp->chgBit(oldp+83,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                               & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem2reg))));
        bufp->chgBit(oldp+84,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__if_id__DOT__write_enable));
        bufp->chgIData(oldp+85,((0x03ffffffU & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction)),26);
    }
    bufp->chgBit(oldp+86,(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK));
    bufp->chgQData(oldp+87,(vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc),64);
    bufp->chgQData(oldp+89,(vlSelfRef.PipelinedProcessor_testbench__DOT__CommittedResult),64);
    bufp->chgSData(oldp+91,(vlSelfRef.PipelinedProcessor_testbench__DOT__watchdog),16);
    bufp->chgQData(oldp+92,(((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush)
                              ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_AddResult
                              : (4ULL + vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc))),64);
    bufp->chgIData(oldp+94,(((0ULL == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                              ? 0x91001be1U : ((4ULL 
                                                == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                ? 0x91001fe2U
                                                : (
                                                   (8ULL 
                                                    == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                    ? 0x8b1f03e3U
                                                    : 
                                                   ((0x000000000000000cULL 
                                                     == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                     ? 0xb4000082U
                                                     : 
                                                    ((0x0000000000000010ULL 
                                                      == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                      ? 0x8b010063U
                                                      : 
                                                     ((0x0000000000000014ULL 
                                                       == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                       ? 0xd1000442U
                                                       : 
                                                      ((0x0000000000000018ULL 
                                                        == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                        ? 0x17fffffdU
                                                        : 
                                                       ((0x000000000000001cULL 
                                                         == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                         ? 0x91003fe4U
                                                         : 
                                                        ((0x0000000000000020ULL 
                                                          == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                          ? 0x8a040065U
                                                          : 
                                                         ((0x0000000000000024ULL 
                                                           == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                           ? 0xaa0100a6U
                                                           : 
                                                          ((0x0000000000000028ULL 
                                                            == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                            ? 0xcb060067U
                                                            : 
                                                           ((0x000000000000002cULL 
                                                             == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                             ? 0xf80003e7U
                                                             : 
                                                            (0xf84003e8U 
                                                             & (- (IData)(
                                                                          (0x0000000000000030ULL 
                                                                           == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc))))))))))))))))),32);
    bufp->chgQData(oldp+95,(((0x1fU == (0x0000001fU 
                                        & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                           >> 5U)))
                              ? 0ULL : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
                             [(0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                              >> 5U))])),64);
    bufp->chgQData(oldp+97,(((0x1fU == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn))
                              ? 0ULL : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
                             [vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn])),64);
    bufp->chgQData(oldp+99,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data),64);
    bufp->chgBit(oldp+101,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset));
    VPipelinedProcessor_testbench___024root__trace_chg_dtype____0(vlSelf, bufp, 102, vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs);
}

void VPipelinedProcessor_testbench___024root__trace_chg_dtype____0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_chg_dtype____0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VPipelinedProcessor_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_cleanup\n"); );
    // Body
    VPipelinedProcessor_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelinedProcessor_testbench___024root*>(voidSelf);
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
