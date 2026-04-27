// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vshift_register__Syms.h"


VL_ATTR_COLD void Vshift_register___024root__trace_init_sub__TOP__0(Vshift_register___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_init_sub__TOP__0\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"sin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"sin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vshift_register___024root__trace_init_top(Vshift_register___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_init_top\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vshift_register___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vshift_register___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vshift_register___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_register___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_register___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vshift_register___024root__trace_register(Vshift_register___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_register\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vshift_register___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vshift_register___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vshift_register___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vshift_register___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vshift_register___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_const_0\n"); );
    // Body
    Vshift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_register___024root*>(voidSelf);
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vshift_register___024root__trace_full_0_sub_0(Vshift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vshift_register___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_full_0\n"); );
    // Body
    Vshift_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_register___024root*>(voidSelf);
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vshift_register___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vshift_register___024root__trace_full_0_sub_0(Vshift_register___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register___024root__trace_full_0_sub_0\n"); );
    Vshift_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb__DOT__clk));
    bufp->fullBit(oldp+1,(vlSelfRef.tb__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelfRef.tb__DOT__sin));
    bufp->fullCData(oldp+3,(vlSelfRef.tb__DOT__q),4);
}
