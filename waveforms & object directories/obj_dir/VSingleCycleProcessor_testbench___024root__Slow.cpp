// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleProcessor_testbench.h for the primary calling header

#include "VSingleCycleProcessor_testbench__pch.h"

void VSingleCycleProcessor_testbench___024root___ctor_var_reset(VSingleCycleProcessor_testbench___024root* vlSelf);

VSingleCycleProcessor_testbench___024root::VSingleCycleProcessor_testbench___024root(VSingleCycleProcessor_testbench__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VSingleCycleProcessor_testbench___024root___ctor_var_reset(this);
}

void VSingleCycleProcessor_testbench___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VSingleCycleProcessor_testbench___024root::~VSingleCycleProcessor_testbench___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
