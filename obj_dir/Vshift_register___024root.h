// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshift_register.h for the primary calling header

#ifndef VERILATED_VSHIFT_REGISTER___024ROOT_H_
#define VERILATED_VSHIFT_REGISTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vshift_register__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vshift_register___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*0:0*/ tb__DOT__rst;
    CData/*0:0*/ tb__DOT__sin;
    CData/*3:0*/ tb__DOT__q;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rst__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vshift_register__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vshift_register___024root(Vshift_register__Syms* symsp, const char* namep);
    ~Vshift_register___024root();
    VL_UNCOPYABLE(Vshift_register___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
