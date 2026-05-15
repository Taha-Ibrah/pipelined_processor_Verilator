// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_testbench.h for the primary calling header

#include "VALU_testbench__pch.h"

void VALU_testbench___024root___ctor_var_reset(VALU_testbench___024root* vlSelf);

VALU_testbench___024root::VALU_testbench___024root(VALU_testbench__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VALU_testbench___024root___ctor_var_reset(this);
}

void VALU_testbench___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VALU_testbench___024root::~VALU_testbench___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
