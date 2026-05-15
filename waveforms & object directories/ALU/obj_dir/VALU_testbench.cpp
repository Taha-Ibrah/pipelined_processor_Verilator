// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALU_testbench__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VALU_testbench::VALU_testbench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VALU_testbench__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VALU_testbench::VALU_testbench(const char* _vcname__)
    : VALU_testbench(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VALU_testbench::~VALU_testbench() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VALU_testbench___024root___eval_debug_assertions(VALU_testbench___024root* vlSelf);
#endif  // VL_DEBUG
void VALU_testbench___024root___eval_static(VALU_testbench___024root* vlSelf);
void VALU_testbench___024root___eval_initial(VALU_testbench___024root* vlSelf);
void VALU_testbench___024root___eval_settle(VALU_testbench___024root* vlSelf);
void VALU_testbench___024root___eval(VALU_testbench___024root* vlSelf);

void VALU_testbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALU_testbench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALU_testbench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VALU_testbench___024root___eval_static(&(vlSymsp->TOP));
        VALU_testbench___024root___eval_initial(&(vlSymsp->TOP));
        VALU_testbench___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VALU_testbench___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VALU_testbench::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VALU_testbench::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VALU_testbench::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VALU_testbench::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VALU_testbench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VALU_testbench___024root___eval_final(VALU_testbench___024root* vlSelf);

VL_ATTR_COLD void VALU_testbench::final() {
    contextp()->executingFinal(true);
    VALU_testbench___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VALU_testbench::hierName() const { return vlSymsp->name(); }
const char* VALU_testbench::modelName() const { return "VALU_testbench"; }
unsigned VALU_testbench::threads() const { return 1; }
void VALU_testbench::prepareClone() const { contextp()->prepareClone(); }
void VALU_testbench::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VALU_testbench::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VALU_testbench___024root__trace_decl_types(VerilatedVcd* tracep);

void VALU_testbench___024root__trace_init_top(VALU_testbench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALU_testbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_testbench___024root*>(voidSelf);
    VALU_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VALU_testbench___024root__trace_decl_types(tracep);
    VALU_testbench___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VALU_testbench___024root__trace_register(VALU_testbench___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALU_testbench::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VALU_testbench::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 15);
    VALU_testbench___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
