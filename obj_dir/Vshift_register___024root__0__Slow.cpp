// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_register.h for the primary calling header

#include "Vshift_register__pch.h"

VL_ATTR_COLD void Vshift_register___024root___eval_static(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_static\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelfRef.tb__DOT__rst;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vshift_register___024root___eval_final(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_final\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vshift_register___024root___eval_settle(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_settle\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vshift_register___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vshift_register___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vshift_register___024root___ctor_var_reset(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___ctor_var_reset\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6743979137201610926ull);
    vlSelf->tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1156696098083290880ull);
    vlSelf->tb__DOT__sin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17783664642833742460ull);
    vlSelf->tb__DOT__q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17542501176477825310ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
