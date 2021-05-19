// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTesterWrapper.h for the primary calling header

#include "VTesterWrapper.h"
#include "VTesterWrapper__Syms.h"

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4701__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4701__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4702__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4702__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)
                                    ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                        ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                - (IData)(1U)))
                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (0xfU & 
                                            ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                             - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4703__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4703__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4704__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4704__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4705__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4705__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)
                ? (0x60000000000ULL | vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T3)
                : 0ULL);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = (0x60000000000ULL | vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T3);
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)
                            ? ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                : 0ULL) : 0ULL);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                    ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                   [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                    : 0ULL);
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                        = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                            : 0ULL);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4706__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4706__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4707__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4707__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (3U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4708__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4708__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4709__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4709__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4710__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4710__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout
                : 0ULL);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))]
                            : 0ULL);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))];
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))];
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4711__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4711__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4712__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4712__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (3U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4713__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4713__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4714__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4714__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4715__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4715__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4716__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4716__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (3U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4717__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4717__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4718__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4718__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4719__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4719__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)
                ? vlTOPp->VerilatedTesterWrapper__DOT__T72
                : 0ULL);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T72;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)
                            ? 0ULL : ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                      [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                       : 0ULL));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                    ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                   [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                    : 0ULL);
                        } else {
                            if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                            } else {
                                if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                        = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                            : 0ULL);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4720__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4720__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)
                            ? 2U : ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                     ? 1U : 2U));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4721__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4721__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)
                                  ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                                  : ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (3U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2) 
                             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2)) 
                                           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState))))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4722__PROF__TesterWrapper__l3190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4722__PROF__TesterWrapper__l3190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T38 
        = ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux_1__DOT__T0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4723__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4723__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4724__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4724__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4725__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4725__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2
                : 0ULL);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                            : 0ULL) : 0ULL) : 0ULL);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4726__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4726__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7)
                        ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                            ? 2U : 1U) : 2U) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4727__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4727__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U) : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4728__PROF__TesterWrapper__l583(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4728__PROF__TesterWrapper__l583\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T8 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4729__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4729__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4730__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4730__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                          - (IData)(1U)) : 0U));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4744__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4744__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4745__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4745__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R4 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct_io_tilemem_lhs_req_1_writeData;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4746__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4746__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R5 
        = (0x3ffU & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_data_out));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4747__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4747__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4748__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4748__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R4 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct_io_tilemem_rhs_req_1_writeData;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4749__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4749__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R5 
        = (0x3ffU & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_data_out 
                             >> 0x10U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4750__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4750__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4751__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4751__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R4 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct_io_tilemem_rhs_req_0_writeData;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4752__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4752__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R5 
        = (0x3ffU & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_data_out 
                             >> 0x10U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4753__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4753__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4754__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4754__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R4 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct_io_tilemem_lhs_req_0_writeData;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4755__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4755__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R5 
        = (0x3ffU & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_data_out));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4756__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4756__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R19 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R2;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4757__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4757__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R23 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R0;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4758__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4758__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R19 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R8;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4759__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4759__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R23 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R6;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4760__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4760__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R19 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R14;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4761__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4761__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R23 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R12;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4762__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4762__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R19 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R20;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4763__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4763__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R23 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R18;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4764__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4764__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R22 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R23;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4765__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4765__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R11 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R1;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4766__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4766__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R11 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R7;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4767__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4767__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R11 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R13;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4768__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4768__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R11 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R19;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4769__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4769__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R27 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R5));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4770__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4770__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R27 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R11));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4771__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4771__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R27 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R17));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4772__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4772__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R27 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R23));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4773__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4773__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_addr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_addr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4774__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4774__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_data 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_data;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4775__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4775__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_id 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_id;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4776__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4776__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_2 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_1));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4777__PROF__TesterWrapper__l2906(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4777__PROF__TesterWrapper__l2906\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__full)) 
           & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState)) 
              | (1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4778__PROF__TesterWrapper__l2610(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4778__PROF__TesterWrapper__l2610\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T0 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4779__PROF__TesterWrapper__l2627(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4779__PROF__TesterWrapper__l2627\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T15 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4780__PROF__ResultInstrGen__l109(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4780__PROF__ResultInstrGen__l109\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_CS_fsm 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 1U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4781__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l552(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4781__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l552\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state2_io 
        = (((0U == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
            & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                  >> 1U))) | ((0U != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                              & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                    >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4782__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l556(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4782__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l556\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state7_io 
        = (1U & (((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                      >> 1U)) | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382) 
                                 & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                       >> 1U)))) | 
                 ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382)) 
                  & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                        >> 1U)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4783__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l560(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4783__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l560\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state9_io 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond7_reg_363)) 
                 & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                       >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4784__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l187(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4784__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l187\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 1U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4785__PROF__TesterWrapper__l4138(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4785__PROF__TesterWrapper__l4138\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T30) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T28) 
              | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T26)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4786__PROF__TesterWrapper__l6294(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4786__PROF__TesterWrapper__l6294\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2 
        = (1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T33)
                  ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T33)
                  : (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R12)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4788__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4788__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_nbufs_fetch_exec_log2_reg_678 
            = (0xffU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[4U] 
                         << 0x18U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
                                      >> 8U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4789__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4789__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_4 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_4 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_5;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4790__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4790__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_4 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_4 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_5;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4791__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4791__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_4 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_4 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_5;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4792__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4792__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_4 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_4 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_5;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4793__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4793__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_4 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_4 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_5;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4794__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4794__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_4 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_4 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_5;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4795__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4795__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_4 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_4 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_5;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4796__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4796__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_4 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_4 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_5;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4797__PROF__TesterWrapper__l56(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4797__PROF__TesterWrapper__l56\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState)) 
           & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState)) 
              | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T1)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4798__PROF__TesterWrapper__l3207(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4798__PROF__TesterWrapper__l3207\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T54 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState)) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T1));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4799__PROF__ExecAddrGen__l109(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4799__PROF__ExecAddrGen__l109\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__ap_CS_fsm 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 1U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4800__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l142(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4800__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l142\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 1U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4801__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l486(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4801__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l486\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_state3_io 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__exitcond_reg_300)) 
                 & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                       >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4802__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l492(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4802__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l492\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_state4_io 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__exitcond_reg_300_pp0_iter1_reg)) 
                 & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                       >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4803__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l788(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4803__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l788\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state2_io 
        = ((0U != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_6_reg_694) 
           & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                 >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4804__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l784(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4804__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l784\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state12_io 
        = (1U & ((((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                       >> 1U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_predicate_op115_write_state12)) 
                  | ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                         >> 1U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_predicate_op114_write_state12))) 
                 | ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_9_reg_739)) 
                    & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                          >> 1U)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4805__PROF__TesterWrapper__l3593(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4805__PROF__TesterWrapper__l3593\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T6 
        = ((IData)(1U) + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4806__PROF__TesterWrapper__l3597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4806__PROF__TesterWrapper__l3597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T10 
        = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds 
           - (IData)(1U));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4807__PROF__TesterWrapper__l1270(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4807__PROF__TesterWrapper__l1270\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T30) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T9) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState = 3U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState = 2U;
                } else {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4808__PROF__TesterWrapper__l3635(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4808__PROF__TesterWrapper__l3635\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T47 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)) 
           & (0U == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4809__PROF__TesterWrapper__l3638(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4809__PROF__TesterWrapper__l3638\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T50 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4810__PROF__TesterWrapper__l3640(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4810__PROF__TesterWrapper__l3640\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T52 
        = ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4811__PROF__TesterWrapper__l3626(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4811__PROF__TesterWrapper__l3626\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T38 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)) 
           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
              & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4812__PROF__TesterWrapper__l3862(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4812__PROF__TesterWrapper__l3862\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T6 
        = ((IData)(1U) + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4813__PROF__TesterWrapper__l3866(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4813__PROF__TesterWrapper__l3866\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T10 
        = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds 
           - (IData)(1U));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4814__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4814__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R32 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R33;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4815__PROF__TesterWrapper__l3904(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4815__PROF__TesterWrapper__l3904\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T47 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)) 
           & (0U == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4816__PROF__TesterWrapper__l3895(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4816__PROF__TesterWrapper__l3895\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T38 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)) 
           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
              & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4817__PROF__TesterWrapper__l3929(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4817__PROF__TesterWrapper__l3929\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65 
        = (1U & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)) 
                 & (((IData)(1U) << (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
                                           >> 4U))) 
                    >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4818__PROF__TesterWrapper__l3932(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4818__PROF__TesterWrapper__l3932\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67 
        = (3U & ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)) 
                 & ((IData)(1U) << (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
                                          >> 4U)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4819__PROF__TesterWrapper__l3936(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4819__PROF__TesterWrapper__l3936\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70 
        = (1U & ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)) 
                 & (((IData)(1U) << (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
                                           >> 4U))) 
                    >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4820__PROF__TesterWrapper__l3924(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4820__PROF__TesterWrapper__l3924\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T62 
        = (3U & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)) 
                 & ((IData)(1U) << (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
                                          >> 4U)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4821__PROF__TesterWrapper__l3907(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4821__PROF__TesterWrapper__l3907\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T50 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)) 
           & ((0x10U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U])
               ? (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))
               : (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4822__PROF__TesterWrapper__l3913(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4822__PROF__TesterWrapper__l3913\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T55 
        = ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)) 
           & ((0x10U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U])
               ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)
               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4823__PROF__TesterWrapper__l12160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4823__PROF__TesterWrapper__l12160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_regFileIF_readData_bits = ((0x3cU > (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((0x20U 
                                               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? ((0x10U 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59
                                                      : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57
                                                      : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)))))
                                               : ((0x10U 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0))))))
                                           : 0U);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4824__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4824__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4825__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4825__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4826__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4826__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4827__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4827__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4828__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4828__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4829__PROF__TesterWrapper__l12095(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4829__PROF__TesterWrapper__l12095\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T44 = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T46) 
                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__empty)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4830__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4830__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq 
        = (1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T46) 
                  | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T31) 
                     | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R25)))) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4831__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4831__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4832__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4832__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4833__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4833__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (0xeU == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4834__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4834__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (0xeU == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4835__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4835__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4836__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4836__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4837__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4837__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4838__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4838__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4839__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4839__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4841__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l798(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4841__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l798\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001)) 
               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                  >> 3U)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exitcond1_reg_1855 
            = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_phi_mux_i_1_reg2mem_phi_fu_187_p4 
               == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_2_reg_1586);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4898__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4898__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4899__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4899__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4900__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4900__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U];
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U];
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][0U];
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][1U];
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][2U];
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][3U];
                    } else {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    }
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][0U];
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][1U];
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][2U];
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][3U];
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][0U];
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][1U];
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][2U];
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][3U];
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4901__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4901__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4902__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4902__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (3U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T42))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4903__PROF__TesterWrapper__l3648(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4903__PROF__TesterWrapper__l3648\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57 
        = (3U & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)) 
                 & ((IData)(1U) << (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U] 
                                          >> 4U)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4904__PROF__TesterWrapper__l3655(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4904__PROF__TesterWrapper__l3655\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62 
        = (3U & ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)) 
                 & ((IData)(1U) << (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U] 
                                          >> 4U)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4906__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l594(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4906__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l594\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_rd) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[6U];
    } else {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4907__PROF__FetchInstrGen__l119(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4907__PROF__FetchInstrGen__l119\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4908__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l311(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4908__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l311\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4926__PROF__TesterWrapper__l2617(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4926__PROF__TesterWrapper__l2617\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T6 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T54));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4927__PROF__TesterWrapper__l2626(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4927__PROF__TesterWrapper__l2626\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T14 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T15) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T54));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4930__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l472(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4930__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l472\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001 
        = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter2) 
            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_state4_io)) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1) 
              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_state3_io)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4931__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l476(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4931__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l476\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_subdone 
        = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter2) 
            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_state4_io)) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1) 
              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_state3_io)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4933__PROF__TesterWrapper__l3613(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4933__PROF__TesterWrapper__l3613\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T25 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T38) 
           & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U] 
              >> 2U));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4936__PROF__TesterWrapper__l3882(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4936__PROF__TesterWrapper__l3882\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T25 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T38) 
           & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
              >> 2U));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4937__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4937__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4938__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4938__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4939__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4939__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38) 
                           & ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                              & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                              [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr]));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                = ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                                   & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                   [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr]);
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                        = ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr]);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4940__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4940__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4941__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4941__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (7U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (7U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T65)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (7U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4942__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4942__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4943__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4943__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4944__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4944__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70) 
                           & ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                              & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                              [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr]));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                = ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                                   & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                   [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr]);
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                        = ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr]);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4945__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4945__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4946__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4946__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (7U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (7U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter_1__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T70))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (7U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4947__PROF__TesterWrapper__l6294(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4947__PROF__TesterWrapper__l6294\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2 
        = (1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T62)
                  ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T62)
                  : (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R15)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4954__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4954__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R2 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x23U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4955__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4955__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R0 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x21U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4956__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4956__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R8 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x23U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4957__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4957__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R6 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x21U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4958__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4958__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R14 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x23U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4959__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4959__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R12 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x21U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4960__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4960__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R20 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x23U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4961__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4961__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R18 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x21U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4962__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4962__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R23 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R24;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4963__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4963__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R1 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x22U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4964__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4964__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R7 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x22U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4965__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4965__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R13 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x22U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4966__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4966__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R19 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
                         >> 0x22U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4967__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4967__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R5 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__read_complete;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4968__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4968__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R11 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__read_complete;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4969__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4969__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R17 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__read_complete;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4970__PROF__TesterWrapper__l2171(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4970__PROF__TesterWrapper__l2171\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R23 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__read_complete;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4971__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4971__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_addr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_addr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4972__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4972__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_data 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_data;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4973__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4973__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_id 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_id;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4974__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4974__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_1 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4975__PROF__ResultInstrGen__l225(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4975__PROF__ResultInstrGen__l225\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_ack_out 
        = (1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_CS_fsm) 
                  >> 2U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state) 
                            >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4976__PROF__ResultInstrGen__l291(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4976__PROF__ResultInstrGen__l291\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_out_V_V_TREADY 
        = (1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state) 
                  >> 1U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_CS_fsm) 
                            >> 2U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4977__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l388(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4977__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l388\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_ack_out 
        = (1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state)) 
                     | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg)))) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4978__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l434(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4978__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l434\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_vld_in 
        = (1U & ((((((IData)((0U != (0x30U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)))) 
                     & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                        >> 1U)) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382) 
                                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state7_io))) 
                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                      >> 6U))) | ((
                                                   (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382)) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state7_io))) 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                     >> 6U))) 
                  | (((0U == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                      & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state2_io))) 
                     & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                        >> 1U))) | (((0U != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state2_io))) 
                                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                       >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4979__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l412(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4979__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l412\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp469[4];
    // Body
    if ((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) {
        __Vtemp469[2U] = (IData)((((QData)((IData)(
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_12_reg_347) 
                                                    << 3U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ins_in_dram_res_reg_342 
                                                                + 
                                                                (0xfffffffcU 
                                                                 & ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__m_reg2mem_reg_92) 
                                                                      << 1U) 
                                                                     + 
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_7_reg_367 
                                                                      << 2U)) 
                                                                    << 2U)))))));
        __Vtemp469[3U] = (IData)(((((QData)((IData)(
                                                    ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_12_reg_347) 
                                                     << 3U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ins_in_dram_res_reg_342 
                                                                 + 
                                                                 (0xfffffffcU 
                                                                  & ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__m_reg2mem_reg_92) 
                                                                       << 1U) 
                                                                      + 
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_7_reg_367 
                                                                       << 2U)) 
                                                                     << 2U)))))) 
                                  >> 0x20U));
    } else {
        __Vtemp469[2U] = ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382) 
                            & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                               >> 6U)) | ((0U == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                             >> 1U)))
                           ? 0U : 0U);
        __Vtemp469[3U] = ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382) 
                            & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                               >> 6U)) | ((0U == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                             >> 1U)))
                           ? 0x10000U : 0U);
    }
    if ((0x20U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[0U] = 0xaU;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[1U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[2U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[3U] = 0U;
    } else {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[0U] 
            = ((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                ? (IData)((6ULL | ((QData)((IData)(
                                                   (1U 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__val_assign_reg2mem_reg_126)))) 
                                   << 0x3fU))) : ((
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382) 
                                                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                       >> 6U)) 
                                                   | ((0U 
                                                       == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                                                      & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                         >> 1U)))
                                                   ? 6U
                                                   : 
                                                  ((1U 
                                                    & (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382)) 
                                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                           >> 6U)) 
                                                       | ((0U 
                                                           != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                             >> 1U))))
                                                    ? 2U
                                                    : 0U)));
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[1U] 
            = ((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                ? (IData)(((6ULL | ((QData)((IData)(
                                                    (1U 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__val_assign_reg2mem_reg_126)))) 
                                    << 0x3fU)) >> 0x20U))
                : ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382) 
                     & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                        >> 6U)) | ((0U == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                      >> 1U))) ? 0x40000000U
                    : 0U));
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[2U] 
            = __Vtemp469[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[3U] 
            = __Vtemp469[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4980__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l450(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4980__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l450\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_NS_fsm 
        = (((((((((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)) 
                  | (2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) 
                 | (4U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) 
                | (8U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) 
               | (0x10U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) 
              | (0x20U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) 
             | (0x40U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) 
            | (0x80U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)))
            ? ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                ? ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state)) 
                              | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg)))) 
                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)))
                    ? 2U : 1U) : ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                                   ? ((((0U == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                                        & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state2_io))) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                          >> 1U)) ? 0x200U
                                       : ((((0U != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_2_reg_352) 
                                            & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state2_io))) 
                                           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                              >> 1U))
                                           ? 4U : 2U))
                                   : ((4U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                                       ? ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                  >> 2U) 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                                    >> 1U)))
                                           ? 8U : 4U)
                                       : ((8U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                                           ? 0x10U : 
                                          ((0x10U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                                            ? ((1U 
                                                & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                                      >> 1U)))
                                                ? 0x20U
                                                : 0x10U)
                                            : ((0x20U 
                                                == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                                                ? (
                                                   (1U 
                                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                        >> 5U) 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                                          >> 1U)))
                                                    ? 0x40U
                                                    : 0x20U)
                                                : (
                                                   (0x40U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                                                    ? 
                                                   ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382) 
                                                      & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state7_io))) 
                                                     & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                        >> 6U))
                                                     ? 0x100U
                                                     : 
                                                    ((1U 
                                                      & (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__exitcond5_reg_382)) 
                                                          & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state7_io))) 
                                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                            >> 6U)))
                                                      ? 0x80U
                                                      : 0x40U))
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                                         >> 7U) 
                                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                                           >> 1U)))
                                                     ? 8U
                                                     : 0x80U))))))))
            : ((0x100U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                ? ((1U & ((~ ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                  >> 1U)) | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state9_io))) 
                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                             >> 8U))) ? 1U : 0x100U)
                : ((0x200U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))
                    ? ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                               >> 9U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                         >> 1U))) ? 0x100U
                        : 0x200U) : 0U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4981__PROF__ResultInstrGen__l249(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4981__PROF__ResultInstrGen__l249\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx18 = ((0x200U & ((0xfffffe00U 
                                         & (((~ ((~ 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                                   >> 1U)) 
                                                 | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state9_io))) 
                                             << 9U) 
                                            & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                                               << 1U))) 
                                        | (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg)) 
                                            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)) 
                                           << 9U))) 
                             | ((0x100U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_CS_fsm) 
                                           << 6U)) 
                                | ((0x80U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_CS_fsm) 
                                             << 4U)) 
                                   | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state) 
                                       << 5U) | ((0x10U 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state) 
                                                     << 3U)) 
                                                 | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_CS_fsm))))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_NS_fsm 
        = vlTOPp->__Vtable18_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_NS_fsm
        [vlTOPp->__Vtableidx18];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4982__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4982__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4983__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4983__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4984__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4984__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4985__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4985__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67) 
                           & ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                              & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                              [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                = ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                                   & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                   [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]);
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                        = ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4986__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4986__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4987__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4987__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (7U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (7U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T57)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T67))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (7U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4988__PROF__FetchInstrGen__l225(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4988__PROF__FetchInstrGen__l225\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_ack_out 
        = (1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__ap_CS_fsm) 
                  >> 2U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state) 
                            >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4989__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l283(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4989__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l283\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 1U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4990__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4990__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_5 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_5 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_6;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4991__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4991__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_5 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_5 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_6;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4992__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4992__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_5 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_5 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_6;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4993__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4993__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_5 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_5 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_6;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4994__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4994__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_5 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_5 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_6;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4995__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4995__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_5 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_5 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_6;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4996__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4996__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_5 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_5 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_6;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4997__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4997__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_5 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_5 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_6;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4998__PROF__TesterWrapper__l2631(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4998__PROF__TesterWrapper__l2631\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T19 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T14) 
           | (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4999__PROF__TesterWrapper__l2636(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4999__PROF__TesterWrapper__l2636\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T21 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T14) 
           | (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5000__PROF__ExecAddrGen__l225(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5000__PROF__ExecAddrGen__l225\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_ack_out 
        = (1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__ap_CS_fsm) 
                  >> 2U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state) 
                            >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5001__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5001__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_ack_out 
        = (1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg)) 
                     | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)))) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5002__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l405(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5002__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l405\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_vld_in 
        = ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__exitcond_reg_300)) 
             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001))) 
            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1)) 
           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
              >> 1U));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5003__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l421(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5003__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l421\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_NS_fsm 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm))
            ? ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg)) 
                          | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)))) 
                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm)))
                ? 2U : 1U) : ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                               ? ((1U & ((~ ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__exitcond_fu_172_p2) 
                                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_subdone))) 
                                              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1)))) 
                                         & (~ (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_subdone)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter2)) 
                                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1))))))
                                   ? 2U : ((((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__exitcond_fu_172_p2) 
                                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_subdone))) 
                                              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1))) 
                                            | (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_subdone)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter2)) 
                                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1))))
                                            ? 4U : 2U))
                               : ((4U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                                   ? ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                >> 2U)))
                                       ? 1U : 4U) : 0U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5004__PROF__TesterWrapper__l1113(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5004__PROF__TesterWrapper__l1113\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T9 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T10));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5005__PROF__TesterWrapper__l1146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5005__PROF__TesterWrapper__l1146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T35 
        = ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
           & (5U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regWaitInterconnect)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5006__PROF__TesterWrapper__l56(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5006__PROF__TesterWrapper__l56\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState)) 
           & (1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5007__PROF__TesterWrapper__l1111(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5007__PROF__TesterWrapper__l1111\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5008__PROF__TesterWrapper__l1135(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5008__PROF__TesterWrapper__l1135\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T25 
        = (((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
            & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T10))) 
           & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)) 
              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5009__PROF__TesterWrapper__l1140(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5009__PROF__TesterWrapper__l1140\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T30 
        = ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
           & (5U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regWaitInterconnect)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5010__PROF__TesterWrapper__l1104(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5010__PROF__TesterWrapper__l1104\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T25));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5011__PROF__TesterWrapper__l3612(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5011__PROF__TesterWrapper__l3612\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T24 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T25) 
           & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5012__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5012__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R33 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R34;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5013__PROF__TesterWrapper__l3863(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5013__PROF__TesterWrapper__l3863\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T7 
        = ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state) 
             >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T25)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R32)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5014__PROF__TesterWrapper__l3881(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5014__PROF__TesterWrapper__l3881\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T24 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T25) 
           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state) 
              >> 1U));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5015__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5015__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (6U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5016__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5016__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (6U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5017__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5017__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5018__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5018__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5019__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5019__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62) 
                           & ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                              & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                              [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr]));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                = ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                                   & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                   [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr]);
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                        = ((6U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)) 
                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr]);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5020__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5020__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5021__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5021__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (7U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (7U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__Arbiter__DOT__T2)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T62))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (7U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5022__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l902(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5022__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l902\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_2_reg_1586 
            = VL_MULS_III(32,32,32, vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp1_reg_1569, 
                          VL_EXTENDS_II(32,15, (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp2_reg_1574)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5051__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5051__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (6U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5069__PROF__TesterWrapper__l2541(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5069__PROF__TesterWrapper__l2541\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__T6 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T19)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5070__PROF__TesterWrapper__l3165(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5070__PROF__TesterWrapper__l3165\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T14 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T21) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5071__PROF__TesterWrapper__l3169(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5071__PROF__TesterWrapper__l3169\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T18 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T21)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5072__PROF__TesterWrapper__l3177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5072__PROF__TesterWrapper__l3177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T26 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T21));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5073__PROF__TesterWrapper__l588(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5073__PROF__TesterWrapper__l588\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T10 
        = (0x3ffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                      ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_addr_base)
                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddrBase)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5074__PROF__TesterWrapper__l1122(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5074__PROF__TesterWrapper__l1122\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T15 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T25) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T16));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5075__PROF__TesterWrapper__l3594(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5075__PROF__TesterWrapper__l3594\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T7 
        = (((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T25)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T30)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5076__PROF__TesterWrapper__l3670(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5076__PROF__TesterWrapper__l3670\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T52) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T50) 
              | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T24)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5079__PROF__TesterWrapper__l3948(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5079__PROF__TesterWrapper__l3948\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T55) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T50) 
              | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T24)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5080__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5080__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (6U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5084__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5084__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R24 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R25;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5085__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5085__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R13;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5086__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5086__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__read_complete 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R17;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5087__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5087__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_addr 
        = (0x3ffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U]);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5088__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5088__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_data 
        = (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U])) 
            << 0x34U) | (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U])) 
                          << 0x14U) | ((QData)((IData)(
                                                       vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U])) 
                                       >> 0xcU)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5089__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5089__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_id 
        = (3U & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                  << 0x16U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                               >> 0xaU)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5090__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5090__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_0 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5091__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l586(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5091__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l586\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_ack_out 
        = (1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                     | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5092__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l632(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5092__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l632\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_vld_in 
        = (1U & (((((IData)((0U != (0x670U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) 
                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                       >> 1U)) | (((0U != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_6_reg_694) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state2_io))) 
                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                     >> 1U))) | (((~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                      >> 1U)) 
                                                    | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state12_io))) 
                                                  & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_predicate_op115_write_state12)) 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                    >> 0xbU))) 
                 | (((~ ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                             >> 1U)) | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state12_io))) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_predicate_op114_write_state12)) 
                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                       >> 0xbU))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5093__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l648(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5093__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l648\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_NS_fsm 
        = (((((((((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)) 
                  | (2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) 
                 | (4U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) 
                | (8U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) 
               | (0x10U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) 
              | (0x20U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) 
             | (0x40U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) 
            | (0x80U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))
            ? ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                ? ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                              | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))
                    ? 2U : 1U) : ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                   ? ((((0U == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_6_reg_694) 
                                        & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state2_io))) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                          >> 1U)) ? 0x800U
                                       : ((((0U != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_6_reg_694) 
                                            & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state2_io))) 
                                           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                              >> 1U))
                                           ? 4U : 2U))
                                   : ((4U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                       ? ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                  >> 2U) 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                    >> 1U)))
                                           ? 8U : 4U)
                                       : ((8U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                           ? 0x10U : 
                                          ((0x10U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                            ? ((1U 
                                                & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                    >> 4U) 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                      >> 1U)))
                                                ? 0x20U
                                                : 0x10U)
                                            : ((0x20U 
                                                == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                                ? (
                                                   (1U 
                                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                        >> 5U) 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                          >> 1U)))
                                                    ? 0x40U
                                                    : 0x20U)
                                                : (
                                                   (0x40U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                                    ? 
                                                   ((1U 
                                                     & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                         >> 6U) 
                                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                           >> 1U)))
                                                     ? 0x80U
                                                     : 0x40U)
                                                    : 
                                                   ((1U 
                                                     & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                         >> 7U) 
                                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                           >> 1U)))
                                                     ? 0x100U
                                                     : 0x80U))))))))
            : ((0x100U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                ? 0x200U : ((0x200U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                             ? ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                        >> 9U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                  >> 1U)))
                                 ? 0x400U : 0x200U)
                             : ((0x400U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                 ? ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                            >> 0xaU) 
                                           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                              >> 1U)))
                                     ? 0x800U : 0x400U)
                                 : ((0x800U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                     ? ((1U & (((~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                    >> 1U)) 
                                                  | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state12_io))) 
                                                & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                   >> 0xbU)) 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_9_reg_739) 
                                                  | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_20_reg_798)))))
                                         ? 1U : (((
                                                   (((~ 
                                                      ((~ 
                                                        ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                         >> 1U)) 
                                                       | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state12_io))) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_1_reg_785))) 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_20_reg_798)) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_9_reg_739))) 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                     >> 0xbU))
                                                  ? 0x2000U
                                                  : 
                                                 ((((((~ 
                                                       ((~ 
                                                         ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                          >> 1U)) 
                                                        | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state12_io))) 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_20_reg_798)) 
                                                     & (0U 
                                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_1_reg_785))) 
                                                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_9_reg_739))) 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                      >> 0xbU))
                                                   ? 0x1000U
                                                   : 0x800U)))
                                     : ((0x1000U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                         ? ((1U & (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                    >> 0xcU) 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                      >> 1U)))
                                             ? 0x100U
                                             : 0x1000U)
                                         : ((0x2000U 
                                             == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                             ? ((1U 
                                                 & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                     >> 0xdU) 
                                                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                       >> 1U)))
                                                 ? 8U
                                                 : 0x2000U)
                                             : 0U)))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5094__PROF__FetchInstrGen__l249(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5094__PROF__FetchInstrGen__l249\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx13 = ((0x200U & ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)) 
                                         << 9U) | (0x3ffffe00U 
                                                   & ((((~ 
                                                         ((~ 
                                                           ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                                            >> 1U)) 
                                                          | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state12_io))) 
                                                        << 9U) 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                                                          >> 2U)) 
                                                      & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_9_reg_739) 
                                                          | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_20_reg_798))) 
                                                         << 9U))))) 
                             | ((0x100U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__ap_CS_fsm) 
                                           << 6U)) 
                                | ((0x80U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__ap_CS_fsm) 
                                             << 4U)) 
                                   | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state) 
                                       << 5U) | ((0x10U 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state) 
                                                     << 3U)) 
                                                 | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__ap_CS_fsm))))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__ap_NS_fsm 
        = vlTOPp->__Vtable13_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__ap_NS_fsm
        [vlTOPp->__Vtableidx13];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5095__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l610(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5095__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l610\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp483[4];
    // Body
    if ((0x200U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
        __Vtemp483[2U] = (IData)((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_tiles_per_row_V_reg_644)) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_dram_block_count_V_1_reg_658) 
                                                                   << 0x18U) 
                                                                  | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_9_reg_734 
                                                                     << 4U)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_reg_700) 
                                                                   << 4U))))));
        __Vtemp483[3U] = (IData)(((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_tiles_per_row_V_reg_644)) 
                                    << 0x30U) | (((QData)((IData)(
                                                                  (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_dram_block_count_V_1_reg_658) 
                                                                    << 0x18U) 
                                                                   | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_9_reg_734 
                                                                      << 4U)))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_reg_700) 
                                                                    << 4U))))) 
                                  >> 0x20U));
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[0U] 
            = (4U | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_bram_addr_base_V_1_reg_768) 
                     << 0x10U));
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[1U] 
            = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_dram_lhs_reg_684 
               + (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_15_reg_763 
                  << 4U));
    } else {
        __Vtemp483[2U] = ((IData)((0U != (0x420U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))))
                           ? 0U : ((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                    ? (IData)((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_tiles_per_row_V_reg_644)) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_dram_block_count_V_reg_706) 
                                                                     << 0x18U) 
                                                                    | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_1_reg_723 
                                                                       << 4U)))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_reg_700) 
                                                                     << 4U))))))
                                    : 0U));
        __Vtemp483[3U] = ((IData)((0U != (0x420U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))))
                           ? 0U : ((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                                    ? (IData)(((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_tiles_per_row_V_reg_644)) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_dram_block_count_V_reg_706) 
                                                                      << 0x18U) 
                                                                     | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_1_reg_723 
                                                                        << 4U)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_reg_700) 
                                                                      << 4U))))) 
                                               >> 0x20U))
                                    : 0U));
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[0U] 
            = ((IData)((0U != (0x420U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))))
                ? 8U : ((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                         ? (0x8084U | (0xffff0000U 
                                       & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_base_r_reg_673) 
                                           + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__rmem_region_offset_reg2mem_reg_142)) 
                                          << 0x10U)))
                         : 0U));
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[1U] 
            = ((IData)((0U != (0x420U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))))
                ? 0U : ((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))
                         ? (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_dram_rhs_reg_689 
                            + (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_11_reg_743 
                               << 4U)) : 0U));
    }
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[2U] 
        = __Vtemp483[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[3U] 
        = __Vtemp483[3U];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5096__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5096__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_6 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_6 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_7;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5097__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5097__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_6 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_6 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_7;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5098__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5098__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_6 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_6 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_7;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5099__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5099__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_6 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_6 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_7;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5100__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5100__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_6 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_6 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_7;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5101__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5101__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_6 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_6 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_7;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5102__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5102__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_6 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_6 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_7;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5103__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5103__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_6 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_6 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_7;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5104__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5104__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5105__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5105__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5106__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5106__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U];
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U];
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][0U];
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][1U];
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][2U];
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][3U];
                    } else {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    }
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][0U];
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][1U];
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][2U];
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][3U];
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][0U];
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][1U];
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][2U];
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][3U];
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5107__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5107__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5108__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5108__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (3U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T66))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5109__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5109__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R34 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R35;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5110__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5110__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5111__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5111__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5112__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5112__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U];
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U];
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][0U];
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][1U];
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][2U];
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                            [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][3U];
                    } else {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    }
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][0U];
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][1U];
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][2U];
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][3U];
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][0U];
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][1U];
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][2U];
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                        [(1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))][3U];
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5113__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5113__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5114__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5114__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (3U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T72))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5115__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5115__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp1_reg_1569 
            = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, 
                                                  (0xffffU 
                                                   & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[1U])), 
                          VL_EXTENDS_II(32,16, (0xffffU 
                                                & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[0U])));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5116__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5116__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp2_reg_1574 
            = (0x3fffU & ((0x3fU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
                                     << 8U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
                                               >> 0x18U))) 
                          * (0xffU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
                                       << 0x10U) | 
                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
                                       >> 0x10U)))));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5145__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5145__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5148__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5148__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5151__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l956(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5151__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l956\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[6U];
    } else {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5152__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l586(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5152__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l586\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5154__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5154__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R25 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R26;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5155__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5155__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R13 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R14;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5156__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5156__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R17 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R18;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5157__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5157__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U];
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5158__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5158__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5159__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5159__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_7 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_7 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T1;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5160__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5160__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_7 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_7 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T25;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5161__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5161__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_7 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_7 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T41;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5162__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5162__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_7 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_7 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T57;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5163__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5163__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_7 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_7 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T73;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5164__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5164__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_7 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_7 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T89;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5165__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5165__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_7 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_7 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T105;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5166__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5166__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_7 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_7 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T121;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5167__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5167__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R35 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R36;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5168__PROF__ExecInstrGen__l117(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5168__PROF__ExecInstrGen__l117\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg = 0U;
    } else {
        if ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_CS_fsm))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg = 1U;
        } else {
            if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                        >> 0xaU) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                                    >> 1U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5176__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5176__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = (2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5177__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5177__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
            } else {
                if ((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                    = ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                        ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                       [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U]
                        : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                    = ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                        ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                       [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U]
                        : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                    = ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                        ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                       [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U]
                        : 0U);
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5179__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5179__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
            } else {
                if ((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                        ? 2U : 1U) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5180__PROF__TesterWrapper__l6839(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5180__PROF__TesterWrapper__l6839\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T1 
        = (((0x80U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x3fU)) << 7U)) | 
            (0x40U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x37U)) << 6U))) 
           | (((0x20U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                  >> 0x2fU)) << 5U)) 
               | (0x10U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x27U)) << 4U))) 
              | ((8U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                 >> 0x1fU)) << 3U)) 
                 | ((4U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x17U)) << 2U)) 
                    | ((2U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                       >> 0xfU)) << 1U)) 
                       | (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                        >> 7U))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5181__PROF__TesterWrapper__l6838(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5181__PROF__TesterWrapper__l6838\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5183__PROF__TesterWrapper__l6863(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5183__PROF__TesterWrapper__l6863\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T25 
        = (((0x80U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x3eU)) << 7U)) | 
            (0x40U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x36U)) << 6U))) 
           | (((0x20U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                  >> 0x2eU)) << 5U)) 
               | (0x10U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x26U)) << 4U))) 
              | ((8U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                 >> 0x1eU)) << 3U)) 
                 | ((4U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x16U)) << 2U)) 
                    | ((2U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                       >> 0xeU)) << 1U)) 
                       | (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                        >> 6U))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5184__PROF__TesterWrapper__l6862(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5184__PROF__TesterWrapper__l6862\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5186__PROF__TesterWrapper__l6879(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5186__PROF__TesterWrapper__l6879\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T41 
        = (((0x80U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x3dU)) << 7U)) | 
            (0x40U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x35U)) << 6U))) 
           | (((0x20U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                  >> 0x2dU)) << 5U)) 
               | (0x10U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x25U)) << 4U))) 
              | ((8U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                 >> 0x1dU)) << 3U)) 
                 | ((4U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x15U)) << 2U)) 
                    | ((2U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                       >> 0xdU)) << 1U)) 
                       | (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                        >> 5U))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5187__PROF__TesterWrapper__l6878(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5187__PROF__TesterWrapper__l6878\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5189__PROF__TesterWrapper__l6895(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5189__PROF__TesterWrapper__l6895\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T57 
        = (((0x80U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x3cU)) << 7U)) | 
            (0x40U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x34U)) << 6U))) 
           | (((0x20U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                  >> 0x2cU)) << 5U)) 
               | (0x10U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x24U)) << 4U))) 
              | ((8U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                 >> 0x1cU)) << 3U)) 
                 | ((4U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x14U)) << 2U)) 
                    | ((2U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                       >> 0xcU)) << 1U)) 
                       | (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                        >> 4U))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5190__PROF__TesterWrapper__l6894(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5190__PROF__TesterWrapper__l6894\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5192__PROF__TesterWrapper__l6911(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5192__PROF__TesterWrapper__l6911\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T73 
        = (((0x80U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x3bU)) << 7U)) | 
            (0x40U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x33U)) << 6U))) 
           | (((0x20U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                  >> 0x2bU)) << 5U)) 
               | (0x10U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x23U)) << 4U))) 
              | ((8U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                 >> 0x1bU)) << 3U)) 
                 | ((4U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x13U)) << 2U)) 
                    | ((2U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                       >> 0xbU)) << 1U)) 
                       | (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                        >> 3U))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5193__PROF__TesterWrapper__l6910(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5193__PROF__TesterWrapper__l6910\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5195__PROF__TesterWrapper__l6927(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5195__PROF__TesterWrapper__l6927\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T89 
        = (((0x80U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x3aU)) << 7U)) | 
            (0x40U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x32U)) << 6U))) 
           | (((0x20U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                  >> 0x2aU)) << 5U)) 
               | (0x10U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x22U)) << 4U))) 
              | ((8U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                 >> 0x1aU)) << 3U)) 
                 | ((4U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x12U)) << 2U)) 
                    | ((2U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                       >> 0xaU)) << 1U)) 
                       | (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                        >> 2U))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5196__PROF__TesterWrapper__l6926(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5196__PROF__TesterWrapper__l6926\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5198__PROF__TesterWrapper__l6943(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5198__PROF__TesterWrapper__l6943\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T105 
        = (((0x80U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x39U)) << 7U)) | 
            (0x40U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x31U)) << 6U))) 
           | (((0x20U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                  >> 0x29U)) << 5U)) 
               | (0x10U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x21U)) << 4U))) 
              | ((8U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                 >> 0x19U)) << 3U)) 
                 | ((4U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x11U)) << 2U)) 
                    | ((2U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                       >> 9U)) << 1U)) 
                       | (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                        >> 1U))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5199__PROF__TesterWrapper__l6942(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5199__PROF__TesterWrapper__l6942\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5201__PROF__TesterWrapper__l6959(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5201__PROF__TesterWrapper__l6959\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T121 
        = (((0x80U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x38U)) << 7U)) | 
            (0x40U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                               >> 0x30U)) << 6U))) 
           | (((0x20U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                  >> 0x28U)) << 5U)) 
               | (0x10U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x20U)) << 4U))) 
              | ((8U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                 >> 0x18U)) << 3U)) 
                 | ((4U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                    >> 0x10U)) << 2U)) 
                    | ((2U & ((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
                                       >> 8U)) << 1U)) 
                       | (1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0)))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5202__PROF__TesterWrapper__l6958(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5202__PROF__TesterWrapper__l6958\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5209__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l622(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5209__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l622\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5210__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5210__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R26 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R27;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5211__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5211__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R14 
        = (0x3ffffffffffULL & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_data_out);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5212__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5212__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R18 
        = (1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5213__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5213__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5214__PROF__TesterWrapper__l6987(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5214__PROF__TesterWrapper__l6987\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T147 
        = ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount))
            ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount))
                ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount))
                    ? (((QData)((IData)((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_7) 
                                          << 0x18U) 
                                         | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_6) 
                                             << 0x10U) 
                                            | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_5) 
                                                << 8U) 
                                               | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_4)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_3) 
                                                      << 0x18U) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_2) 
                                                         << 0x10U) 
                                                        | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_1) 
                                                            << 8U) 
                                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_0)))))))
                    : (((QData)((IData)((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_7) 
                                          << 0x18U) 
                                         | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_6) 
                                             << 0x10U) 
                                            | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_5) 
                                                << 8U) 
                                               | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_4)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_3) 
                                                      << 0x18U) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_2) 
                                                         << 0x10U) 
                                                        | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_1) 
                                                            << 8U) 
                                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_0))))))))
                : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount))
                    ? (((QData)((IData)((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_7) 
                                          << 0x18U) 
                                         | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_6) 
                                             << 0x10U) 
                                            | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_5) 
                                                << 8U) 
                                               | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_4)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_3) 
                                                      << 0x18U) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_2) 
                                                         << 0x10U) 
                                                        | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_1) 
                                                            << 8U) 
                                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_0)))))))
                    : (((QData)((IData)((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_7) 
                                          << 0x18U) 
                                         | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_6) 
                                             << 0x10U) 
                                            | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_5) 
                                                << 8U) 
                                               | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_4)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_3) 
                                                      << 0x18U) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_2) 
                                                         << 0x10U) 
                                                        | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_1) 
                                                            << 8U) 
                                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_0)))))))))
            : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount))
                ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount))
                    ? (((QData)((IData)((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_7) 
                                          << 0x18U) 
                                         | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_6) 
                                             << 0x10U) 
                                            | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_5) 
                                                << 8U) 
                                               | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_4)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_3) 
                                                      << 0x18U) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_2) 
                                                         << 0x10U) 
                                                        | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_1) 
                                                            << 8U) 
                                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_0)))))))
                    : (((QData)((IData)((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_7) 
                                          << 0x18U) 
                                         | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_6) 
                                             << 0x10U) 
                                            | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_5) 
                                                << 8U) 
                                               | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_4)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_3) 
                                                      << 0x18U) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_2) 
                                                         << 0x10U) 
                                                        | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_1) 
                                                            << 8U) 
                                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_0))))))))
                : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount))
                    ? (((QData)((IData)((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_7) 
                                          << 0x18U) 
                                         | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_6) 
                                             << 0x10U) 
                                            | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_5) 
                                                << 8U) 
                                               | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_4)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_3) 
                                                      << 0x18U) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_2) 
                                                         << 0x10U) 
                                                        | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_1) 
                                                            << 8U) 
                                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_0)))))))
                    : (((QData)((IData)((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_7) 
                                          << 0x18U) 
                                         | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_6) 
                                             << 0x10U) 
                                            | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_5) 
                                                << 8U) 
                                               | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_4)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_3) 
                                                      << 0x18U) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_2) 
                                                         << 0x10U) 
                                                        | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_1) 
                                                            << 8U) 
                                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_0))))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5215__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5215__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R36 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R37;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5216__PROF__ExecInstrGen__l109(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5216__PROF__ExecInstrGen__l109\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_CS_fsm 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 1U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5217__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l534(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5217__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l534\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 1U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_NS_fsm));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5218__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1241(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5218__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1241\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state7_io 
        = ((((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                 >> 1U)) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777))) 
            | ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                   >> 1U)) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                              & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763))))) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
              & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                    >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5219__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1209(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5219__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1209\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state10_io 
        = (((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                >> 1U)) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781) 
                           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770)))) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
              & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                    >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5220__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1247(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5220__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1247\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state8_io 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
           & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                 >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5221__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1215(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5221__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1215\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state11_io 
        = (((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                >> 1U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op365_write_state11)) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
              & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                    >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5222__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1253(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5222__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1253\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state9_io 
        = ((((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                 >> 1U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op356_write_state9)) 
            | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
               & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                     >> 1U)))) | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                  & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                                        >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5223__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1235(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5223__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1235\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state6_io 
        = (1U & ((((((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                         >> 1U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op329_write_state6)) 
                    | ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                           >> 1U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op328_write_state6))) 
                   | ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                          >> 1U)) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777))))) 
                  | ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                         >> 1U)) & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763)) 
                                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777))))) 
                 | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                    & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                          >> 1U)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5224__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1221(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5224__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1221\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state12_io 
        = ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
               >> 1U)) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781_pp0_iter1_reg) 
                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770_pp0_iter1_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5225__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1229(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5225__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1229\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state5_io 
        = ((((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                 >> 1U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op284_write_state5)) 
            | ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                   >> 1U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op283_write_state5))) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
              & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                    >> 1U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5230__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5230__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T147
                : 0ULL);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T147;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)
                            ? ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                : 0ULL) : 0ULL);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                    ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                   [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                    : 0ULL);
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                        = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                            : 0ULL);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5235__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1201(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5235__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1201\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage6_subdone 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state10_io));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5236__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1173(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5236__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1173\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage4_11001 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state8_io));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5237__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1125(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5237__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1125\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state11_io));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5238__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5238__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage5_11001 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state9_io));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5239__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5239__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage2_11001 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state6_io));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5240__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1141(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5240__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1141\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage1_subdone 
        = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1) 
            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state12_io)) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state5_io)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5241__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1137(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5241__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1137\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage1_11001 
        = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1) 
            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state12_io)) 
           | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state5_io)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5242__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5242__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R27 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R28;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5243__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5243__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R37 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R38;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5244__PROF__ExecInstrGen__l225(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5244__PROF__ExecInstrGen__l225\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_ack_out 
        = (1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_CS_fsm) 
                  >> 2U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state) 
                            >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5245__PROF__ExecInstrGen__l291(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5245__PROF__ExecInstrGen__l291\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_out_V_V_TREADY 
        = (1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state) 
                  >> 1U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_CS_fsm) 
                            >> 2U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5246__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l948(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5246__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l948\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_ack_out 
        = (1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
                     | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg)))) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5247__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l932(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5247__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l932\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_phi_mux_i_1_reg2mem_phi_fu_187_p4 
        = ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exitcond1_reg_1855)) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1)) 
            & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
               >> 3U)) ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__i_s_reg_1859
            : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__i_1_reg2mem_reg_183);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5248__PROF__ExecInstrGen__l249(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5248__PROF__ExecInstrGen__l249\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx8 = ((0x200U & ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg)) 
                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)) 
                                        << 9U) | (0x7ffffe00U 
                                                  & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                      >> 1U) 
                                                     & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                                                        << 8U))))) 
                            | ((0x100U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_CS_fsm) 
                                          << 6U)) | 
                               ((0x80U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_CS_fsm) 
                                          << 4U)) | 
                                (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state) 
                                  << 5U) | ((0x10U 
                                             & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state) 
                                                << 3U)) 
                                            | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_CS_fsm))))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_NS_fsm 
        = vlTOPp->__Vtable8_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_NS_fsm
        [vlTOPp->__Vtableidx8];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5249__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1008(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5249__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1008\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_TDATA_blk_n 
        = (1U & ((~ (((((((((((((((((((((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770)) 
                                         | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770)) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1)) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                          >> 3U)) | 
                                      ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781) 
                                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770))) 
                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                           >> 9U)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                            >> 9U)) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                                    | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781) 
                                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770))) 
                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                           >> 8U)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                                   | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                          >> 8U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                                  | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                      & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                         >> 8U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                                 | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                     & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                        >> 7U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                                | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                       >> 6U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                               | ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763)) 
                                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777))) 
                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                      >> 5U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                              | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777))) 
                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                     >> 5U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                             | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                                  & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763))) 
                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                    >> 6U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                            | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777)) 
                                & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                   >> 6U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                           | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763))) 
                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                  >> 5U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                          | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777)) 
                              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                 >> 5U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                         | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                             & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                >> 5U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                        | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781_pp0_iter1_reg) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770_pp0_iter1_reg)) 
                            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1)) 
                           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                              >> 4U))) | ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763)) 
                                            & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777))) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                             >> 4U))) 
                      | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777))) 
                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                            >> 4U))) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                           >> 4U)))) 
                 | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                    >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5250__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l972(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5250__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l972\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp517[4];
    WData/*127:0*/ __Vtemp518[4];
    WData/*127:0*/ __Vtemp527[4];
    WData/*127:0*/ __Vtemp528[4];
    WData/*127:0*/ __Vtemp535[4];
    WData/*127:0*/ __Vtemp537[4];
    WData/*127:0*/ __Vtemp538[4];
    WData/*127:0*/ __Vtemp551[4];
    // Body
    __Vtemp517[0U] = 5U;
    __Vtemp517[1U] = 0U;
    __Vtemp517[2U] = ((0xff800000U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_rhsOffset_V2_reg_1884) 
                                      << 0x17U)) | 
                      (0xffffff80U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_lhsOffset_V2_reg_1879) 
                                      << 7U)));
    __Vtemp517[3U] = ((0x8000000U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__offset_res_reg2mem_0_fu_162) 
                                      ^ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_21_reg_1579)) 
                                     << 0x1bU)) | (
                                                   (0xfc000000U 
                                                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
                                                       << 0x1aU)) 
                                                   | ((0xfe000000U 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                                          << 0x19U)) 
                                                      | ((0xff000000U 
                                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__negate2_reg_1815) 
                                                             << 0x18U)) 
                                                         | ((0xff800000U 
                                                             & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_shiftAmount_V2_reg_1825) 
                                                                << 0x17U)) 
                                                            | (0x7fffffU 
                                                               & ((0x7fff80U 
                                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_numTiles_V_reg_1506) 
                                                                      << 7U)) 
                                                                  | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_rhsOffset_V2_reg_1884) 
                                                                     >> 9U))))))));
    VL_EXTEND_WW(128,124, __Vtemp518, __Vtemp517);
    __Vtemp527[0U] = 5U;
    __Vtemp527[1U] = 0U;
    __Vtemp527[2U] = ((0xff800000U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_rhsOffset_V_reg_1874) 
                                      << 0x17U)) | 
                      (0xffffff80U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_lhsOffset_V_reg_1869) 
                                      << 7U)));
    __Vtemp527[3U] = ((0x8000000U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__offset_res_reg2mem_0_fu_162) 
                                      ^ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_21_reg_1579)) 
                                     << 0x1bU)) | (
                                                   (0xfc000000U 
                                                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
                                                       << 0x1aU)) 
                                                   | ((0xfe000000U 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                                          << 0x19U)) 
                                                      | ((0xff000000U 
                                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__negate_reg_1800) 
                                                             << 0x18U)) 
                                                         | ((0xff800000U 
                                                             & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_shiftAmount_V_reg_1810) 
                                                                << 0x17U)) 
                                                            | (0x7fffffU 
                                                               & ((0x7fff80U 
                                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_numTiles_V_reg_1506) 
                                                                      << 7U)) 
                                                                  | ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_rhsOffset_V_reg_1874) 
                                                                     >> 9U))))))));
    VL_EXTEND_WW(128,124, __Vtemp528, __Vtemp527);
    __Vtemp535[3U] = ((0xfe000000U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                      << 0x19U)) | 
                      ((0xff000000U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__negate1_reg_1785) 
                                       << 0x18U)) | 
                       ((0xff800000U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_shiftAmount_V1_reg_1795) 
                                        << 0x17U)) 
                        | (0x7fffffU & ((0x7fff80U 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_numTiles_V_reg_1506) 
                                            << 7U)) 
                                        | (0x7fU & 
                                           ((((IData)(
                                                      (0xffffffffffffULL 
                                                       & VL_EXTENDS_QQ(48,45, 
                                                                       (0x1fffffffffffULL 
                                                                        & VL_MULS_QQQ(45,45,45, 
                                                                                (0x1fffffffffffULL 
                                                                                & VL_EXTENDS_QI(45,27, 
                                                                                (0x7ffffffU 
                                                                                & ((0xffffU 
                                                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_load_reg_1751))) 
                                                                                + 
                                                                                VL_EXTENDS_II(27,9, (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp4_reg_1756)))))), 
                                                                                (0x1fffffffffffULL 
                                                                                & VL_EXTENDS_QI(45,16, (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_numTiles_V_reg_1506)))))))) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_base_r_reg_1556)) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rmem_region_offset_reg2mem_0_fu_146)) 
                                            >> 9U)))))));
    __Vtemp537[0U] = 5U;
    __Vtemp537[1U] = 0U;
    __Vtemp537[2U] = ((0xff800000U & ((((IData)((0xffffffffffffULL 
                                                 & VL_EXTENDS_QQ(48,45, 
                                                                 (0x1fffffffffffULL 
                                                                  & VL_MULS_QQQ(45,45,45, 
                                                                                (0x1fffffffffffULL 
                                                                                & VL_EXTENDS_QI(45,27, 
                                                                                (0x7ffffffU 
                                                                                & ((0xffffU 
                                                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_load_reg_1751))) 
                                                                                + 
                                                                                VL_EXTENDS_II(27,9, (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp4_reg_1756)))))), 
                                                                                (0x1fffffffffffULL 
                                                                                & VL_EXTENDS_QI(45,16, (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_numTiles_V_reg_1506)))))))) 
                                        + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_base_r_reg_1556)) 
                                       + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rmem_region_offset_reg2mem_0_fu_146)) 
                                      << 0x17U)) | 
                      (0x7fff80U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp27_reg_1790) 
                                     + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_region_offset_fu_154)) 
                                    << 7U)));
    __Vtemp537[3U] = ((0x8000000U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__offset_res_reg2mem_0_fu_162) 
                                      ^ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_21_reg_1579)) 
                                     << 0x1bU)) | (
                                                   (0xfc000000U 
                                                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
                                                       << 0x1aU)) 
                                                   | __Vtemp535[3U]));
    VL_EXTEND_WW(128,124, __Vtemp538, __Vtemp537);
    if ((((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1) 
            & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
               >> 3U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op365_write_state11)) 
          | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                 >> 9U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
         | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781) 
              & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770))) 
             & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                >> 8U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)))) {
        __Vtemp551[0U] = 9U;
        __Vtemp551[1U] = 0U;
        __Vtemp551[2U] = 0U;
        __Vtemp551[3U] = 0U;
    } else {
        __Vtemp551[0U] = ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                            & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                               >> 7U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))
                           ? __Vtemp518[0U] : ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                    >> 6U)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))
                                                ? 0x11U
                                                : (
                                                   ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                      >> 5U) 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op328_write_state6))
                                                    ? 
                                                   __Vtemp528[0U]
                                                    : 
                                                   (((((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                         >> 5U) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op329_write_state6)) 
                                                      | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                             >> 4U)) 
                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op284_write_state5))) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                           >> 4U)))
                                                     ? 1U
                                                     : 
                                                    ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                          >> 4U)) 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op283_write_state5))
                                                      ? 
                                                     __Vtemp538[0U]
                                                      : 0U)))));
        __Vtemp551[1U] = ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                            & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                               >> 7U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))
                           ? __Vtemp518[1U] : ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                    >> 6U)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))
                                                ? 0U
                                                : (
                                                   ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                      >> 5U) 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op328_write_state6))
                                                    ? 
                                                   __Vtemp528[1U]
                                                    : 
                                                   (((((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                         >> 5U) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op329_write_state6)) 
                                                      | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                             >> 4U)) 
                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op284_write_state5))) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                           >> 4U)))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                          >> 4U)) 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op283_write_state5))
                                                      ? 
                                                     __Vtemp538[1U]
                                                      : 0U)))));
        __Vtemp551[2U] = ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                            & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                               >> 7U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))
                           ? __Vtemp518[2U] : ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                    >> 6U)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))
                                                ? 0U
                                                : (
                                                   ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                      >> 5U) 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op328_write_state6))
                                                    ? 
                                                   __Vtemp528[2U]
                                                    : 
                                                   (((((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                         >> 5U) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op329_write_state6)) 
                                                      | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                             >> 4U)) 
                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op284_write_state5))) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                           >> 4U)))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                          >> 4U)) 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op283_write_state5))
                                                      ? 
                                                     __Vtemp538[2U]
                                                      : 0U)))));
        __Vtemp551[3U] = ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                            & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                               >> 7U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))
                           ? __Vtemp518[3U] : ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                    >> 6U)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))
                                                ? 0U
                                                : (
                                                   ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                      >> 5U) 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op328_write_state6))
                                                    ? 
                                                   __Vtemp528[3U]
                                                    : 
                                                   (((((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                         >> 5U) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op329_write_state6)) 
                                                      | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                             >> 4U)) 
                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op284_write_state5))) 
                                                     | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                                                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                           >> 4U)))
                                                     ? 0U
                                                     : 
                                                    ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                          >> 4U)) 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op283_write_state5))
                                                      ? 
                                                     __Vtemp538[3U]
                                                      : 0U)))));
    }
    if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770) 
          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
             >> 8U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[0U] = 0x19U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[1U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[2U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[3U] = 0U;
    } else {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[0U] 
            = __Vtemp551[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[1U] 
            = __Vtemp551[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[2U] 
            = __Vtemp551[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[3U] 
            = __Vtemp551[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5251__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1016(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5251__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1016\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_NS_fsm 
        = (((((((((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)) 
                  | (2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))) 
                 | (4U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))) 
                | (8U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))) 
               | (0x10U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))) 
              | (0x20U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))) 
             | (0x40U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))) 
            | (0x80U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)))
            ? ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                ? ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
                              | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg)))) 
                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)))
                    ? 2U : 1U) : ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                                   ? 4U : ((4U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                                            ? (((0U 
                                                 != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_2_reg_1586) 
                                                & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                   >> 2U))
                                                ? 8U
                                                : 0x400U)
                                            : ((8U 
                                                == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1) 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state11_io))
                                                    ? 8U
                                                    : 0x10U)
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                                                    ? 
                                                   ((1U 
                                                     & ((~ 
                                                         ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage1_subdone)) 
                                                            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1)) 
                                                           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                              >> 4U)) 
                                                          & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)))) 
                                                        & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage1_subdone))))
                                                     ? 0x20U
                                                     : 
                                                    (((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage1_subdone)) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1)) 
                                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                          >> 4U)) 
                                                      & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)))
                                                      ? 0x400U
                                                      : 0x10U))
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                                                     ? 
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state6_io))
                                                      ? 0x20U
                                                      : 0x40U)
                                                     : 
                                                    ((0x40U 
                                                      == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                                                      ? 
                                                     (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state7_io))
                                                       ? 0x40U
                                                       : 0x80U)
                                                      : 
                                                     (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state8_io))
                                                       ? 0x80U
                                                       : 0x100U))))))))
            : ((0x100U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state9_io))
                    ? 0x100U : 0x200U) : ((0x200U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage6_subdone)
                                               ? 0x200U
                                               : 8U)
                                           : ((0x400U 
                                               == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))
                                               ? ((1U 
                                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                                       >> 0xaU) 
                                                      & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                                                         >> 1U)))
                                                   ? 1U
                                                   : 0x400U)
                                               : 0U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5252__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1000(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5252__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1000\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_vld_in 
        = ((((((((((((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001)) 
                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1)) 
                      & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                         >> 3U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op365_write_state11)) 
                    | ((((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state10_io))) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770)) 
                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                           >> 9U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                   | ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage5_11001)) 
                        & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                           >> 8U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op356_write_state9))) 
                  | ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage5_11001)) 
                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770)) 
                      & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                         >> 8U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                 | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
                      & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage4_11001))) 
                     & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                        >> 7U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
                | ((((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_state7_io))) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763)) 
                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                       >> 6U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) 
               | ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage2_11001)) 
                    & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                       >> 5U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                  & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op329_write_state6))) 
              | ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage2_11001)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                      >> 5U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op328_write_state6))) 
             | ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage1_11001)) 
                  & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                    >> 4U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op284_write_state5))) 
            | ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage1_11001)) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
                & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                   >> 4U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op283_write_state5))) 
           | ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage1_11001))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0)) 
              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                 >> 4U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5257__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5257__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R28 
        = (0x3ffffffffffULL & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_data_out);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5258__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5258__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R38 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R39;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5262__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5262__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R39 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R40;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5265__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5265__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R40 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R41;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5268__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5268__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R41 
        = (1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state) 
                 & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_data_out 
                            >> 0x20U))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5270__PROF__ExecAddrGen__l241(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5270__PROF__ExecAddrGen__l241\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_data_out 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_rd)
            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_payload_B
            : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_payload_A);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5271__PROF__ExecAddrGen__l185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5271__PROF__ExecAddrGen__l185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__5272__PROF__ExecAddrGen__l291(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__5272__PROF__ExecAddrGen__l291\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_out_V_V_TREADY 
        = (1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state) 
                  >> 1U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__ap_CS_fsm) 
                            >> 2U)));
}
