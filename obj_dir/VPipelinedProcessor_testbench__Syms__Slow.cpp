// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPipelinedProcessor_testbench__pch.h"

VPipelinedProcessor_testbench__Syms::VPipelinedProcessor_testbench__Syms(VerilatedContext* contextp, const char* namep, VPipelinedProcessor_testbench* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(429);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
}

VPipelinedProcessor_testbench__Syms::~VPipelinedProcessor_testbench__Syms() {
    // Tear down scopes
    // Tear down sub module instances
}
