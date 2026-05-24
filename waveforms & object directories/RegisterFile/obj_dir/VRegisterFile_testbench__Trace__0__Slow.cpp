// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VRegisterFile_testbench__Syms.h"


VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_init_dtype____0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_init_sub__TOP__0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_init_sub__TOP__0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "RegisterFile_testbench", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"readRegister1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"readRegister2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"writeRegister",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"Clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+4,0,"writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+9,0,"BusA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+11,0,"BusB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"num_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"readRegister1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"readRegister2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"writeRegister",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+4,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+9,0,"BusA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+11,0,"BusB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);

    VRegisterFile_testbench___024root__trace_init_dtype____0(vlSelf, tracep, "regs", 0, c+13, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_init_dtype_sub____0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_init_dtype____0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_init_dtype____0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRegisterFile_testbench___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_init_dtype_sub____0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_init_dtype_sub____0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_init_top(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_init_top\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRegisterFile_testbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegisterFile_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegisterFile_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_register(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_register\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VRegisterFile_testbench___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VRegisterFile_testbench___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VRegisterFile_testbench___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VRegisterFile_testbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_const_0\n"); );
    // Body
    VRegisterFile_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegisterFile_testbench___024root*>(voidSelf);
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_full_0_sub_0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_full_0\n"); );
    // Body
    VRegisterFile_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegisterFile_testbench___024root*>(voidSelf);
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VRegisterFile_testbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_full_dtype____0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_full_0_sub_0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_full_0_sub_0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.RegisterFile_testbench__DOT__readRegister1),5);
    bufp->fullCData(oldp+1,(vlSelfRef.RegisterFile_testbench__DOT__readRegister2),5);
    bufp->fullCData(oldp+2,(vlSelfRef.RegisterFile_testbench__DOT__writeRegister),5);
    bufp->fullBit(oldp+3,(vlSelfRef.RegisterFile_testbench__DOT__regWrite));
    bufp->fullQData(oldp+4,(vlSelfRef.RegisterFile_testbench__DOT__writeData),64);
    bufp->fullIData(oldp+6,(vlSelfRef.RegisterFile_testbench__DOT__passed),32);
    bufp->fullIData(oldp+7,(vlSelfRef.RegisterFile_testbench__DOT__num_tests),32);
    bufp->fullBit(oldp+8,(vlSelfRef.RegisterFile_testbench__DOT__Clk));
    bufp->fullQData(oldp+9,(((0x1fU == (IData)(vlSelfRef.RegisterFile_testbench__DOT__readRegister1))
                              ? 0ULL : vlSelfRef.RegisterFile_testbench__DOT__uut__DOT__regs
                             [vlSelfRef.RegisterFile_testbench__DOT__readRegister1])),64);
    bufp->fullQData(oldp+11,(((0x1fU == (IData)(vlSelfRef.RegisterFile_testbench__DOT__readRegister2))
                               ? 0ULL : vlSelfRef.RegisterFile_testbench__DOT__uut__DOT__regs
                              [vlSelfRef.RegisterFile_testbench__DOT__readRegister2])),64);
    VRegisterFile_testbench___024root__trace_full_dtype____0(vlSelf, bufp, 13, vlSelfRef.RegisterFile_testbench__DOT__uut__DOT__regs);
}

VL_ATTR_COLD void VRegisterFile_testbench___024root__trace_full_dtype____0(VRegisterFile_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile_testbench___024root__trace_full_dtype____0\n"); );
    VRegisterFile_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[31]),64);
    bufp->fullQData(oldp+2,(__VdtypeVar[30]),64);
    bufp->fullQData(oldp+4,(__VdtypeVar[29]),64);
    bufp->fullQData(oldp+6,(__VdtypeVar[28]),64);
    bufp->fullQData(oldp+8,(__VdtypeVar[27]),64);
    bufp->fullQData(oldp+10,(__VdtypeVar[26]),64);
    bufp->fullQData(oldp+12,(__VdtypeVar[25]),64);
    bufp->fullQData(oldp+14,(__VdtypeVar[24]),64);
    bufp->fullQData(oldp+16,(__VdtypeVar[23]),64);
    bufp->fullQData(oldp+18,(__VdtypeVar[22]),64);
    bufp->fullQData(oldp+20,(__VdtypeVar[21]),64);
    bufp->fullQData(oldp+22,(__VdtypeVar[20]),64);
    bufp->fullQData(oldp+24,(__VdtypeVar[19]),64);
    bufp->fullQData(oldp+26,(__VdtypeVar[18]),64);
    bufp->fullQData(oldp+28,(__VdtypeVar[17]),64);
    bufp->fullQData(oldp+30,(__VdtypeVar[16]),64);
    bufp->fullQData(oldp+32,(__VdtypeVar[15]),64);
    bufp->fullQData(oldp+34,(__VdtypeVar[14]),64);
    bufp->fullQData(oldp+36,(__VdtypeVar[13]),64);
    bufp->fullQData(oldp+38,(__VdtypeVar[12]),64);
    bufp->fullQData(oldp+40,(__VdtypeVar[11]),64);
    bufp->fullQData(oldp+42,(__VdtypeVar[10]),64);
    bufp->fullQData(oldp+44,(__VdtypeVar[9]),64);
    bufp->fullQData(oldp+46,(__VdtypeVar[8]),64);
    bufp->fullQData(oldp+48,(__VdtypeVar[7]),64);
    bufp->fullQData(oldp+50,(__VdtypeVar[6]),64);
    bufp->fullQData(oldp+52,(__VdtypeVar[5]),64);
    bufp->fullQData(oldp+54,(__VdtypeVar[4]),64);
    bufp->fullQData(oldp+56,(__VdtypeVar[3]),64);
    bufp->fullQData(oldp+58,(__VdtypeVar[2]),64);
    bufp->fullQData(oldp+60,(__VdtypeVar[1]),64);
    bufp->fullQData(oldp+62,(__VdtypeVar[0]),64);
}
