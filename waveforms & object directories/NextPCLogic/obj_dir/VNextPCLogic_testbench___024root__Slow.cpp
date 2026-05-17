// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNextPCLogic_testbench.h for the primary calling header

#include "VNextPCLogic_testbench__pch.h"

void VNextPCLogic_testbench___024root___ctor_var_reset(VNextPCLogic_testbench___024root* vlSelf);

VNextPCLogic_testbench___024root::VNextPCLogic_testbench___024root(VNextPCLogic_testbench__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VNextPCLogic_testbench___024root___ctor_var_reset(this);
}

void VNextPCLogic_testbench___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VNextPCLogic_testbench___024root::~VNextPCLogic_testbench___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
