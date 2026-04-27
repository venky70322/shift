// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_register.h for the primary calling header

#include "Vshift_register__pch.h"

void Vshift_register___024root___ctor_var_reset(Vshift_register___024root* vlSelf);

Vshift_register___024root::Vshift_register___024root(Vshift_register__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vshift_register___024root___ctor_var_reset(this);
}

void Vshift_register___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vshift_register___024root::~Vshift_register___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
