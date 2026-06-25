// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSingleCycleProcessor_testbench__pch.h"

VSingleCycleProcessor_testbench__Syms::VSingleCycleProcessor_testbench__Syms(VerilatedContext* contextp, const char* namep, VSingleCycleProcessor_testbench* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(363);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
}

VSingleCycleProcessor_testbench__Syms::~VSingleCycleProcessor_testbench__Syms() {
    if (__Vm_dumping) _traceDumpClose();
    // Tear down scopes
    // Tear down sub module instances
}

void VSingleCycleProcessor_testbench__Syms::_traceDump() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumperp->dump(VL_TIME_Q());
}

void VSingleCycleProcessor_testbench__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        const std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void VSingleCycleProcessor_testbench__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
