// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VPipelinedProcessor_testbench__Syms.h"


VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_init_dtype____0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_init_sub__TOP__0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_init_sub__TOP__0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "PipelinedProcessor_testbench", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"resetl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"CLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+1,0,"startpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+87,0,"currentpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"MemtoRegOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+89,0,"CommittedResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"num_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"watchdog",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"resetl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+1,0,"startpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+87,0,"currentpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"MemtoRegOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+89,0,"CommittedResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"IF_ID_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+9,0,"IF_ID_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+11,0,"ID_EX_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+13,0,"ID_EX_ReadData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+15,0,"ID_EX_ReadData2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+17,0,"ID_EX_SignExtImm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"ID_EX_Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"ID_EX_ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"ID_EX_ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"ID_EX_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"ID_EX_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"ID_EX_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"ID_EX_UncondBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"ID_EX_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"ID_EX_MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"EX_MEM_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"EX_MEM_UncondBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"EX_MEM_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"EX_MEM_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"EX_MEM_MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"EX_MEM_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"EX_MEM_Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+35,0,"EX_MEM_ALUresult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+37,0,"EX_MEM_AddResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+39,0,"EX_MEM_ReadData2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"EX_MEM_Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"MEM_WB_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"MEM_WB_MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+44,0,"MEM_WB_ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,0,"MEM_WB_ReadMemData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"MEM_WB_Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"Flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"Stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+92,0,"nextpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"rn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"reg2loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"alusrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"mem2reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"regwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"memread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"memwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"uncond_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"aluctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"signop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+95,0,"regoutA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+97,0,"regoutB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+65,0,"ALU_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+68,0,"ext_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+70,0,"alu_input_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+99,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+72,0,"branch_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_PUSH_PREFIX(tracep, "Flush_Unit", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"EX_MEM_Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"EX_MEM_Zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"EX_MEM_UncondBranch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"Flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Stall_Unit", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"ID_EX_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"ID_EX_Rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"EX_MEM_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"EX_MEM_Rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"rn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"rm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+50,0,"stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"hazard_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"hazard_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "alu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+65,0,"BusW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+13,0,"BusA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+70,0,"BusB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"ALUCtrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+166,0,"AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"PASSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "control_unit", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 10,0);
    VL_TRACE_DECL_BIT(tracep,c+55,0,"reg2loc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+56,0,"alusrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+57,0,"mem2reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+58,0,"regwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+60,0,"memwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"uncond_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+59,0,"memread",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"signop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"aluop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "datamem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+99,0,"ReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+35,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+39,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"MemoryRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"MemoryWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_mem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+65,0,"ALUresult_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+72,0,"AddResult_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+67,0,"Zero_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"Rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_QUAD(tracep,c+15,0,"ReadData2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"branch_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"uncondbranch_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"MemRead_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"MemWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"MemtoReg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"RegWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+35,0,"ALUresult_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+37,0,"AddResult_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"Zero_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"Rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_QUAD(tracep,c+39,0,"ReadData2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"branch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"uncondbranch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"MemRead_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"MemWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"MemtoReg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"RegWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "id_ex", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+9,0,"PC_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+95,0,"ReadData1_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+97,0,"ReadData2_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+68,0,"SignExtImm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"Rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"ALUOp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"ALUSrc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"MemRead_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"MemWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"Branch_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"UncondBranch_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+82,0,"RegWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"MemtoReg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+11,0,"PC_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+13,0,"ReadData1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+15,0,"ReadData2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+17,0,"SignExtImm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"Rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"ALUOp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"ALUSrc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"MemRead_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"MemWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"Branch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"UncondBranch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"RegWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"MemtoReg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "if_id", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+87,0,"PC_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"Instruction_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+9,0,"PC_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"Instruction_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "imem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+87,0,"ReadAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"Instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"T_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"MemSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mem_wb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+35,0,"ALUresult_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+99,0,"ReadMemData_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"Rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"MemtoReg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+33,0,"RegWrite_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+44,0,"ALUresult_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+46,0,"ReadMemData_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"Rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+43,0,"MemtoReg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"RegWrite_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "programCounter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_QUAD(tracep,c+87,0,"CurrentPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+92,0,"NextPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+34,0,"ALUZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"Uncondbranch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+37,0,"BranchTarget",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"needToBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "regfile", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"readRegister1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"readRegister2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"writeRegister",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+42,0,"regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+6,0,"writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+95,0,"BusA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+97,0,"BusB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);

    VPipelinedProcessor_testbench___024root__trace_init_dtype____0(vlSelf, tracep, "regs", 0, c+102, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "signext", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"Instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"SignOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+68,0,"BusImm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_init_dtype_sub____0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_init_dtype____0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_init_dtype____0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPipelinedProcessor_testbench___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_init_dtype_sub____0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_init_dtype_sub____0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 31, 0);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+0+i*2,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (31 - i), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_init_top(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_init_top\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VPipelinedProcessor_testbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelinedProcessor_testbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelinedProcessor_testbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_register(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_register\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VPipelinedProcessor_testbench___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VPipelinedProcessor_testbench___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VPipelinedProcessor_testbench___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VPipelinedProcessor_testbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_const_0_sub_0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_const_0\n"); );
    // Body
    VPipelinedProcessor_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelinedProcessor_testbench___024root*>(voidSelf);
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VPipelinedProcessor_testbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_const_0_sub_0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_const_0_sub_0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+166,(0U),4);
    bufp->fullCData(oldp+167,(1U),4);
    bufp->fullCData(oldp+168,(2U),4);
    bufp->fullCData(oldp+169,(6U),4);
    bufp->fullCData(oldp+170,(7U),4);
    bufp->fullIData(oldp+171,(0x00000014U),32);
    bufp->fullIData(oldp+172,(0x00000028U),32);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_full_0_sub_0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_full_0\n"); );
    // Body
    VPipelinedProcessor_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelinedProcessor_testbench___024root*>(voidSelf);
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VPipelinedProcessor_testbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_full_dtype____0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_full_0_sub_0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_full_0_sub_0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl));
    bufp->fullQData(oldp+1,(vlSelfRef.PipelinedProcessor_testbench__DOT__startpc),64);
    bufp->fullIData(oldp+3,(vlSelfRef.PipelinedProcessor_testbench__DOT__passed),32);
    bufp->fullIData(oldp+4,(vlSelfRef.PipelinedProcessor_testbench__DOT__num_tests),32);
    bufp->fullBit(oldp+5,((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__resetl)))));
    bufp->fullQData(oldp+6,(vlSelfRef.PipelinedProcessor_testbench__DOT__MemtoRegOut),64);
    bufp->fullIData(oldp+8,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction),32);
    bufp->fullQData(oldp+9,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_PC),64);
    bufp->fullQData(oldp+11,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_PC),64);
    bufp->fullQData(oldp+13,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData1),64);
    bufp->fullQData(oldp+15,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ReadData2),64);
    bufp->fullQData(oldp+17,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm),64);
    bufp->fullCData(oldp+19,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd),5);
    bufp->fullCData(oldp+20,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUOp),4);
    bufp->fullBit(oldp+21,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_ALUSrc));
    bufp->fullBit(oldp+22,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemRead));
    bufp->fullBit(oldp+23,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemWrite));
    bufp->fullBit(oldp+24,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Branch));
    bufp->fullBit(oldp+25,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_UncondBranch));
    bufp->fullBit(oldp+26,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite));
    bufp->fullBit(oldp+27,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_MemtoReg));
    bufp->fullBit(oldp+28,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Branch));
    bufp->fullBit(oldp+29,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_UncondBranch));
    bufp->fullBit(oldp+30,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemWrite));
    bufp->fullBit(oldp+31,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemRead));
    bufp->fullBit(oldp+32,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_MemtoReg));
    bufp->fullBit(oldp+33,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite));
    bufp->fullBit(oldp+34,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Zero));
    bufp->fullQData(oldp+35,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ALUresult),64);
    bufp->fullQData(oldp+37,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_AddResult),64);
    bufp->fullQData(oldp+39,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_ReadData2),64);
    bufp->fullCData(oldp+41,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd),5);
    bufp->fullBit(oldp+42,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_RegWrite));
    bufp->fullBit(oldp+43,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_MemtoReg));
    bufp->fullQData(oldp+44,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ALUResult),64);
    bufp->fullQData(oldp+46,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_ReadMemData),64);
    bufp->fullCData(oldp+48,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__MEM_WB_Rd),5);
    bufp->fullBit(oldp+49,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush));
    bufp->fullBit(oldp+50,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall));
    bufp->fullCData(oldp+51,((0x0000001fU & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction)),5);
    bufp->fullCData(oldp+52,((0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                             >> 5U))),5);
    bufp->fullCData(oldp+53,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn),5);
    bufp->fullSData(oldp+54,((vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                              >> 0x00000015U)),11);
    bufp->fullBit(oldp+55,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__reg2loc));
    bufp->fullBit(oldp+56,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alusrc));
    bufp->fullBit(oldp+57,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem2reg));
    bufp->fullBit(oldp+58,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regwrite));
    bufp->fullBit(oldp+59,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memread));
    bufp->fullBit(oldp+60,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memwrite));
    bufp->fullBit(oldp+61,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__branch));
    bufp->fullBit(oldp+62,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__uncond_branch));
    bufp->fullCData(oldp+63,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl),4);
    bufp->fullCData(oldp+64,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop),2);
    bufp->fullQData(oldp+65,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out),64);
    bufp->fullBit(oldp+67,((0ULL == vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ALU_out)));
    bufp->fullQData(oldp+68,(((0U == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__signop))
                               ? (QData)((IData)((0x00000fffU 
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
    bufp->fullQData(oldp+70,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alu_input_b),64);
    bufp->fullQData(oldp+72,((vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_PC 
                              + VL_SHIFTL_QQI(64,64,32, vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_SignExtImm, 2U))),64);
    bufp->fullBit(oldp+74,(((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_RegWrite) 
                            & ((0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd)) 
                               & (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd) 
                                   == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn)) 
                                  | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__ID_EX_Rd) 
                                     == (0x0000001fU 
                                         & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 5U))))))));
    bufp->fullBit(oldp+75,(((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_RegWrite) 
                            & ((0x1fU != (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd)) 
                               & (((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd) 
                                   == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn)) 
                                  | ((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_Rd) 
                                     == (0x0000001fU 
                                         & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 5U))))))));
    bufp->fullCData(oldp+76,(((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__aluctrl) 
                              & (- (IData)((1U & (~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall))))))),4);
    bufp->fullBit(oldp+77,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                            & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__alusrc))));
    bufp->fullBit(oldp+78,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                            & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memread))));
    bufp->fullBit(oldp+79,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                            & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__memwrite))));
    bufp->fullBit(oldp+80,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                            & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__branch))));
    bufp->fullBit(oldp+81,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                            & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__uncond_branch))));
    bufp->fullBit(oldp+82,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                            & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regwrite))));
    bufp->fullBit(oldp+83,(((~ (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Stall)) 
                            & (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem2reg))));
    bufp->fullBit(oldp+84,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__if_id__DOT__write_enable));
    bufp->fullIData(oldp+85,((0x03ffffffU & vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction)),26);
    bufp->fullBit(oldp+86,(vlSelfRef.PipelinedProcessor_testbench__DOT__CLK));
    bufp->fullQData(oldp+87,(vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc),64);
    bufp->fullQData(oldp+89,(vlSelfRef.PipelinedProcessor_testbench__DOT__CommittedResult),64);
    bufp->fullSData(oldp+91,(vlSelfRef.PipelinedProcessor_testbench__DOT__watchdog),16);
    bufp->fullQData(oldp+92,(((IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__Flush)
                               ? vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__EX_MEM_AddResult
                               : (4ULL + vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc))),64);
    bufp->fullIData(oldp+94,(((0ULL == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                               ? 0x91001be1U : ((4ULL 
                                                 == vlSelfRef.PipelinedProcessor_testbench__DOT__currentpc)
                                                 ? 0x91001fe2U
                                                 : 
                                                ((8ULL 
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
    bufp->fullQData(oldp+95,(((0x1fU == (0x0000001fU 
                                         & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                            >> 5U)))
                               ? 0ULL : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
                              [(0x0000001fU & (vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__IF_ID_instruction 
                                               >> 5U))])),64);
    bufp->fullQData(oldp+97,(((0x1fU == (IData)(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn))
                               ? 0ULL : vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs
                              [vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__rn])),64);
    bufp->fullQData(oldp+99,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__mem_read_data),64);
    bufp->fullBit(oldp+101,(vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__id_ex__DOT__reset));
    VPipelinedProcessor_testbench___024root__trace_full_dtype____0(vlSelf, bufp, 102, vlSelfRef.PipelinedProcessor_testbench__DOT__uut__DOT__regfile__DOT__regs);
}

VL_ATTR_COLD void VPipelinedProcessor_testbench___024root__trace_full_dtype____0(VPipelinedProcessor_testbench___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*63:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedProcessor_testbench___024root__trace_full_dtype____0\n"); );
    VPipelinedProcessor_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
