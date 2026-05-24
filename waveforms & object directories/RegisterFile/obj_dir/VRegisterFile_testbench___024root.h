// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegisterFile_testbench.h for the primary calling header

#ifndef VERILATED_VREGISTERFILE_TESTBENCH___024ROOT_H_
#define VERILATED_VREGISTERFILE_TESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VRegisterFile_testbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegisterFile_testbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ RegisterFile_testbench__DOT__readRegister1;
    CData/*4:0*/ RegisterFile_testbench__DOT__readRegister2;
    CData/*4:0*/ RegisterFile_testbench__DOT__writeRegister;
    CData/*0:0*/ RegisterFile_testbench__DOT__regWrite;
    CData/*0:0*/ RegisterFile_testbench__DOT__Clk;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__RegisterFile_testbench__DOT__Clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ RegisterFile_testbench__DOT__passed;
    IData/*31:0*/ RegisterFile_testbench__DOT__num_tests;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ RegisterFile_testbench__DOT__writeData;
    QData/*63:0*/ RegisterFile_testbench__DOT__BusA;
    QData/*63:0*/ RegisterFile_testbench__DOT__BusB;
    VlUnpacked<QData/*63:0*/, 32> RegisterFile_testbench__DOT__uut__DOT__regs;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    std::string __Vtask_RegisterFile_testbench__DOT__passTest__0__testName;
    std::string __Vtask_RegisterFile_testbench__DOT__passTest__1__testName;
    std::string __Vtask_RegisterFile_testbench__DOT__passTest__2__testName;
    std::string __Vtask_RegisterFile_testbench__DOT__passTest__3__testName;
    std::string __Vtask_RegisterFile_testbench__DOT__passTest__4__testName;
    std::string __Vtask_RegisterFile_testbench__DOT__passTest__5__testName;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    VRegisterFile_testbench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VRegisterFile_testbench___024root(VRegisterFile_testbench__Syms* symsp, const char* namep);
    ~VRegisterFile_testbench___024root();
    VL_UNCOPYABLE(VRegisterFile_testbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
