// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPIPELINEDPROCESSOR_TESTBENCH__SYMS_H_
#define VERILATED_VPIPELINEDPROCESSOR_TESTBENCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPipelinedProcessor_testbench.h"

// INCLUDE MODULE CLASSES
#include "VPipelinedProcessor_testbench___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VPipelinedProcessor_testbench__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPipelinedProcessor_testbench* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPipelinedProcessor_testbench___024root TOP;

    // CONSTRUCTORS
    VPipelinedProcessor_testbench__Syms(VerilatedContext* contextp, const char* namep, VPipelinedProcessor_testbench* modelp);
    ~VPipelinedProcessor_testbench__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
