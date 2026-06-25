// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VSingleCycleProcessor_testbench__Syms.h"


VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_init_dtype____0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_init_sub__TOP__0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_init_sub__TOP__0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "SingleCycleProcessor_testbench", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"resetl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+33,0,"startpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+0,0,"currentpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+35,0,"MemtoRegOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"num_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"watchdog",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"resetl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+33,0,"startpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+0,0,"currentpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+35,0,"MemtoRegOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+40,0,"nextpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"rn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"reg2loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"alusrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"mem2reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"regwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"memread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"memwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"uncond_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"aluctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"signop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+20,0,"regoutA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+22,0,"regoutB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+24,0,"aluout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+17,0,"extimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"alu_input_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+29,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+24,0,"BusW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+20,0,"BusA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+27,0,"BusB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"ALUCtrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+108,0,"OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"PASSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "control_unit", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"reg2loc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"alusrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"mem2reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"regwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"memwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"uncond_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"memread",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"signop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"aluop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "datamem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+29,0,"ReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+24,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+22,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"MemoryRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"MemoryWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "imem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+0,0,"ReadAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"Instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"T_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"MemSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pc_logic", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+0,0,"CurrentPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+40,0,"NextPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"ALUZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"Uncondbranch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+17,0,"SignExtendImm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"needToBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "regfile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"readRegister1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"readRegister2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"writeRegister",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+35,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+20,0,"BusA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+22,0,"BusB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);

    VSingleCycleProcessor_testbench___024root__trace_init_dtype____0(vlSelf, tracep, "regs", 0, c+43, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "signext", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"SignOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+17,0,"BusImm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_init_dtype_sub____0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_init_dtype____0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_init_dtype____0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSingleCycleProcessor_testbench___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_init_dtype_sub____0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_init_dtype_sub____0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_init_top(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_init_top\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSingleCycleProcessor_testbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleProcessor_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleProcessor_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_register(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_register\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VSingleCycleProcessor_testbench___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VSingleCycleProcessor_testbench___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VSingleCycleProcessor_testbench___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleProcessor_testbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_const_0_sub_0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_const_0\n"); );
    // Body
    VSingleCycleProcessor_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleProcessor_testbench___024root*>(voidSelf);
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VSingleCycleProcessor_testbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_const_0_sub_0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_const_0_sub_0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+107,(0U),4);
    bufp->fullCData(oldp+108,(1U),4);
    bufp->fullCData(oldp+109,(2U),4);
    bufp->fullCData(oldp+110,(6U),4);
    bufp->fullCData(oldp+111,(7U),4);
    bufp->fullIData(oldp+112,(0x00000014U),32);
    bufp->fullIData(oldp+113,(0x00000028U),32);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_full_0_sub_0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_full_0\n"); );
    // Body
    VSingleCycleProcessor_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleProcessor_testbench___024root*>(voidSelf);
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VSingleCycleProcessor_testbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_full_dtype____0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_full_0_sub_0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_full_0_sub_0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullQData(oldp+0,(vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc),64);
    bufp->fullIData(oldp+2,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction),32);
    bufp->fullCData(oldp+3,((0x0000001fU & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction)),5);
    bufp->fullCData(oldp+4,((0x0000001fU & (vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                                            >> 5U))),5);
    bufp->fullCData(oldp+5,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__rn),5);
    bufp->fullSData(oldp+6,((vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction 
                             >> 0x00000015U)),11);
    bufp->fullBit(oldp+7,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__reg2loc));
    bufp->fullBit(oldp+8,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alusrc));
    bufp->fullBit(oldp+9,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem2reg));
    bufp->fullBit(oldp+10,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regwrite));
    bufp->fullBit(oldp+11,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__memread));
    bufp->fullBit(oldp+12,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__memwrite));
    bufp->fullBit(oldp+13,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__branch));
    bufp->fullBit(oldp+14,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch));
    bufp->fullCData(oldp+15,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluctrl),4);
    bufp->fullCData(oldp+16,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__signop),2);
    bufp->fullQData(oldp+17,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm),64);
    bufp->fullIData(oldp+19,((0x03ffffffU & vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__instruction)),26);
    bufp->fullQData(oldp+20,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutA),64);
    bufp->fullQData(oldp+22,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regoutB),64);
    bufp->fullQData(oldp+24,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout),64);
    bufp->fullBit(oldp+26,((0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)));
    bufp->fullQData(oldp+27,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__alu_input_b),64);
    bufp->fullQData(oldp+29,(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data),64);
    bufp->fullBit(oldp+31,(vlSelfRef.SingleCycleProcessor_testbench__DOT__resetl));
    bufp->fullBit(oldp+32,(vlSelfRef.SingleCycleProcessor_testbench__DOT__CLK));
    bufp->fullQData(oldp+33,(vlSelfRef.SingleCycleProcessor_testbench__DOT__startpc),64);
    bufp->fullQData(oldp+35,(((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem2reg)
                               ? vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__mem_read_data
                               : vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)),64);
    bufp->fullIData(oldp+37,(vlSelfRef.SingleCycleProcessor_testbench__DOT__passed),32);
    bufp->fullIData(oldp+38,(vlSelfRef.SingleCycleProcessor_testbench__DOT__num_tests),32);
    bufp->fullSData(oldp+39,(vlSelfRef.SingleCycleProcessor_testbench__DOT__watchdog),16);
    bufp->fullQData(oldp+40,((((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch) 
                               | ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__branch) 
                                  & (0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))
                               ? (vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc 
                                  + VL_SHIFTL_QQI(64,64,32, vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__extimm, 2U))
                               : (4ULL + vlSelfRef.SingleCycleProcessor_testbench__DOT__currentpc))),64);
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__uncond_branch) 
                            | ((IData)(vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__branch) 
                               & (0ULL == vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__aluout)))));
    VSingleCycleProcessor_testbench___024root__trace_full_dtype____0(vlSelf, bufp, 43, vlSelfRef.SingleCycleProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs);
}

VL_ATTR_COLD void VSingleCycleProcessor_testbench___024root__trace_full_dtype____0(VSingleCycleProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProcessor_testbench___024root__trace_full_dtype____0\n"); );
    VSingleCycleProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
