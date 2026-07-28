// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPipelinedProcessor_testbench__pch.h"

//============================================================
// Constructors

VPipelinedProcessor_testbench::VPipelinedProcessor_testbench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPipelinedProcessor_testbench__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPipelinedProcessor_testbench::VPipelinedProcessor_testbench(const char* _vcname__)
    : VPipelinedProcessor_testbench(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPipelinedProcessor_testbench::~VPipelinedProcessor_testbench() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPipelinedProcessor_testbench___024root___eval_debug_assertions(VPipelinedProcessor_testbench___024root* vlSelf);
#endif  // VL_DEBUG
void VPipelinedProcessor_testbench___024root___eval_static(VPipelinedProcessor_testbench___024root* vlSelf);
void VPipelinedProcessor_testbench___024root___eval_initial(VPipelinedProcessor_testbench___024root* vlSelf);
void VPipelinedProcessor_testbench___024root___eval_settle(VPipelinedProcessor_testbench___024root* vlSelf);
void VPipelinedProcessor_testbench___024root___eval(VPipelinedProcessor_testbench___024root* vlSelf);

void VPipelinedProcessor_testbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPipelinedProcessor_testbench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPipelinedProcessor_testbench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPipelinedProcessor_testbench___024root___eval_static(&(vlSymsp->TOP));
        VPipelinedProcessor_testbench___024root___eval_initial(&(vlSymsp->TOP));
        VPipelinedProcessor_testbench___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPipelinedProcessor_testbench___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPipelinedProcessor_testbench::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VPipelinedProcessor_testbench::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VPipelinedProcessor_testbench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPipelinedProcessor_testbench___024root___eval_final(VPipelinedProcessor_testbench___024root* vlSelf);

VL_ATTR_COLD void VPipelinedProcessor_testbench::final() {
    contextp()->executingFinal(true);
    VPipelinedProcessor_testbench___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPipelinedProcessor_testbench::hierName() const { return vlSymsp->name(); }
const char* VPipelinedProcessor_testbench::modelName() const { return "VPipelinedProcessor_testbench"; }
unsigned VPipelinedProcessor_testbench::threads() const { return 1; }
void VPipelinedProcessor_testbench::prepareClone() const { contextp()->prepareClone(); }
void VPipelinedProcessor_testbench::atClone() const {
    contextp()->threadPoolpOnClone();
}
