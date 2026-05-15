// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU_testbench.h for the primary calling header

#ifndef VERILATED_VALU_TESTBENCH___024ROOT_H_
#define VERILATED_VALU_TESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VALU_testbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VALU_testbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ ALU_testbench__DOT__ALUCtrl;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ ALU_testbench__DOT__passed;
    IData/*31:0*/ ALU_testbench__DOT__num_tests;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ ALU_testbench__DOT__BusA;
    QData/*63:0*/ ALU_testbench__DOT__BusB;
    QData/*63:0*/ ALU_testbench__DOT__BusW;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    std::string __Vtask_ALU_testbench__DOT__passTest__0__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__1__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__2__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__3__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__4__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__5__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__6__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__7__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__8__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__9__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__10__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__11__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__12__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__13__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__14__testName;
    std::string __Vtask_ALU_testbench__DOT__passTest__15__testName;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    VALU_testbench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VALU_testbench___024root(VALU_testbench__Syms* symsp, const char* namep);
    ~VALU_testbench___024root();
    VL_UNCOPYABLE(VALU_testbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
