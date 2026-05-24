// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile_testbench.h for the primary calling header

#include "VRegisterFile_testbench__pch.h"

void VRegisterFile_testbench___024root___ctor_var_reset(VRegisterFile_testbench___024root* vlSelf);

VRegisterFile_testbench___024root::VRegisterFile_testbench___024root(VRegisterFile_testbench__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VRegisterFile_testbench___024root___ctor_var_reset(this);
}

void VRegisterFile_testbench___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRegisterFile_testbench___024root::~VRegisterFile_testbench___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
