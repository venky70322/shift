// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_register.h for the primary calling header

#include "Vshift_register__pch.h"

VlCoroutine Vshift_register___024root___eval_initial__TOP__Vtiming__0(Vshift_register___024root* vlSelf);
VlCoroutine Vshift_register___024root___eval_initial__TOP__Vtiming__1(Vshift_register___024root* vlSelf);

void Vshift_register___024root___eval_initial(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_initial\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vshift_register___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vshift_register___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vshift_register___024root___eval_initial__TOP__Vtiming__0(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("shift_register.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb__DOT__clk = 0U;
    vlSelfRef.tb__DOT__rst = 1U;
    vlSelfRef.tb__DOT__sin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         27);
    vlSelfRef.tb__DOT__rst = 0U;
    vlSelfRef.tb__DOT__sin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         29);
    vlSelfRef.tb__DOT__sin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         30);
    vlSelfRef.tb__DOT__sin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         31);
    vlSelfRef.tb__DOT__sin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         32);
    vlSelfRef.tb__DOT__sin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         33);
    vlSelfRef.tb__DOT__sin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         34);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb.v", 
                                         36);
    VL_FINISH_MT("tb.v", 36, "");
    co_return;
}

VlCoroutine Vshift_register___024root___eval_initial__TOP__Vtiming__1(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb.v", 
                                             17);
        vlSelfRef.tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk)));
    }
    co_return;
}

void Vshift_register___024root___eval_triggers_vec__act(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_triggers_vec__act\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.tb__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelfRef.tb__DOT__rst;
}

bool Vshift_register___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vshift_register___024root___nba_sequent__TOP__0(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___nba_sequent__TOP__0\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("time=%0t sin=%b q=%b\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,1,(IData)(vlSelfRef.tb__DOT__sin),
                 4,vlSelfRef.tb__DOT__q);
}

void Vshift_register___024root___nba_sequent__TOP__1(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___nba_sequent__TOP__1\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__q = ((IData)(vlSelfRef.tb__DOT__rst)
                             ? 0U : ((0x0000000eU & 
                                      ((IData)(vlSelfRef.tb__DOT__q) 
                                       << 1U)) | (IData)(vlSelfRef.tb__DOT__sin)));
}

void Vshift_register___024root___eval_nba(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_nba\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vshift_register___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vshift_register___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vshift_register___024root___timing_resume(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___timing_resume\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vshift_register___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vshift_register___024root___eval_phase__act(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_phase__act\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vshift_register___024root___eval_triggers_vec__act(vlSelf);
    Vshift_register___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vshift_register___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vshift_register___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vshift_register___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vshift_register___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vshift_register___024root___eval_phase__inact(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_phase__inact\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vshift_register___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vshift_register___024root___eval_phase__nba(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_phase__nba\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vshift_register___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vshift_register___024root___eval_nba(vlSelf);
        Vshift_register___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vshift_register___024root___eval(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vshift_register___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vshift_register___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vshift_register___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vshift_register___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vshift_register___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vshift_register___024root___eval_debug_assertions(Vshift_register___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root___eval_debug_assertions\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
