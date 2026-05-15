// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsignExtender_testbench.h for the primary calling header

#include "VsignExtender_testbench__pch.h"

void VsignExtender_testbench___024root___ctor_var_reset(VsignExtender_testbench___024root* vlSelf);

VsignExtender_testbench___024root::VsignExtender_testbench___024root(VsignExtender_testbench__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VsignExtender_testbench___024root___ctor_var_reset(this);
}

void VsignExtender_testbench___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VsignExtender_testbench___024root::~VsignExtender_testbench___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
