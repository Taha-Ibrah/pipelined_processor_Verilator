// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelinedProcessor_testbench.h for the primary calling header

#include "VPipelinedProcessor_testbench__pch.h"

void VPipelinedProcessor_testbench___024root___ctor_var_reset(VPipelinedProcessor_testbench___024root* vlSelf);

VPipelinedProcessor_testbench___024root::VPipelinedProcessor_testbench___024root(VPipelinedProcessor_testbench__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VPipelinedProcessor_testbench___024root___ctor_var_reset(this);
}

void VPipelinedProcessor_testbench___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPipelinedProcessor_testbench___024root::~VPipelinedProcessor_testbench___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
