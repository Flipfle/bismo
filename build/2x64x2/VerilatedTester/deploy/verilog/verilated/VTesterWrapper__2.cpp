// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTesterWrapper.h for the primary calling header

#include "VTesterWrapper.h"
#include "VTesterWrapper__Syms.h"

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3930__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3930__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3931__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3931__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem
                : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState))
                        ? 0U : ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                 ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                 : 0U)) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3932__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3932__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState))
                        ? 2U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                                 ? 2U : 1U)) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3933__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3933__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState))
                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                       : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3934__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3934__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R2 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_addr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3935__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3935__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R1 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_data;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3936__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3936__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R0 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_id)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3937__PROF__TesterWrapper__l7505(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3937__PROF__TesterWrapper__l7505\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T22 
        = ((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixColsGroup)) 
           * (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixRows)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3938__PROF__TesterWrapper__l7090(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3938__PROF__TesterWrapper__l7090\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__StreamingSignCorrection__DOT__T0 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_signed)
            ? (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
               | ((0x8080808080808080ULL & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo) 
                  >> (0xfU & ((IData)(8U) - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_actualPrecision)))))
            : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3940__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3940__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R2 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_addr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3941__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3941__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R1 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_data;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3942__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3942__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R0 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_id)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_1));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3943__PROF__TesterWrapper__l205(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3943__PROF__TesterWrapper__l205\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T24 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T25) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3944__PROF__TesterWrapper__l179(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3944__PROF__TesterWrapper__l179\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T0 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29)
            ? (QData)((IData)((0x1fffffffU & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep 
                                              >> 3U))))
            : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3)
                ? 0x40ULL : (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3945__PROF__TesterWrapper__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3945__PROF__TesterWrapper__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T15 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T16) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3946__PROF__TesterWrapper__l219(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3946__PROF__TesterWrapper__l219\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T25) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T16));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3947__PROF__TesterWrapper__l205(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3947__PROF__TesterWrapper__l205\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T24 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T25) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3948__PROF__TesterWrapper__l179(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3948__PROF__TesterWrapper__l179\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T0 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29)
            ? (QData)((IData)((0x1fffffffU & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep 
                                              >> 3U))))
            : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3)
                ? 0x40ULL : (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3949__PROF__TesterWrapper__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3949__PROF__TesterWrapper__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T15 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T16) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3950__PROF__TesterWrapper__l219(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3950__PROF__TesterWrapper__l219\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T25) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T16));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3951__PROF__TesterWrapper__l205(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3951__PROF__TesterWrapper__l205\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T24 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T25) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3952__PROF__TesterWrapper__l179(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3952__PROF__TesterWrapper__l179\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp341[3];
    WData/*95:0*/ __Vtemp342[3];
    // Body
    VL_EXTEND_WQ(68,64, __Vtemp341, ((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixColsGroup)) 
                                     * (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixRows))));
    VL_SHIFTL_WWI(68,68,32, __Vtemp342, __Vtemp341, 3U);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T0 
        = (0x7ffffffffULL & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T29)
                              ? (QData)((IData)((0x1fffffffU 
                                                 & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regStep 
                                                    >> 3U))))
                              : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T3)
                                  ? ((QData)((IData)(
                                                     __Vtemp342[0U])) 
                                     << 3U) : (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regStep)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3953__PROF__TesterWrapper__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3953__PROF__TesterWrapper__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T15 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T16) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3954__PROF__TesterWrapper__l219(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3954__PROF__TesterWrapper__l219\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T25) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T16));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3955__PROF__TesterWrapper__l2625(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3955__PROF__TesterWrapper__l2625\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T13 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regShiftCount)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3956__PROF__TesterWrapper__l11570(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3956__PROF__TesterWrapper__l11570\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__T6 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3957__PROF__TesterWrapper__l11573(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3957__PROF__TesterWrapper__l11573\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ptr_match 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3958__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3958__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R2 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_addr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3959__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3959__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R1 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_data;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3960__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3960__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R0 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_id)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_2));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3961__PROF__TesterWrapper__l5490(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3961__PROF__TesterWrapper__l5490\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T10 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3962__PROF__TesterWrapper__l5018(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3962__PROF__TesterWrapper__l5018\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T13 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3963__PROF__TesterWrapper__l4489(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3963__PROF__TesterWrapper__l4489\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T13 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3964__PROF__TesterWrapper__l5493(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3964__PROF__TesterWrapper__l5493\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T13 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3965__PROF__TesterWrapper__l5501(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3965__PROF__TesterWrapper__l5501\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3966__PROF__TesterWrapper__l5021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3966__PROF__TesterWrapper__l5021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T16 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3967__PROF__TesterWrapper__l5029(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3967__PROF__TesterWrapper__l5029\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3968__PROF__TesterWrapper__l4492(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3968__PROF__TesterWrapper__l4492\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T16 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3969__PROF__TesterWrapper__l4500(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3969__PROF__TesterWrapper__l4500\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3970__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3970__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R2 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_3_addr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3971__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3971__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R1 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_3_data;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3972__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3972__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R0 
        = ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_3_id)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_3));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3973__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3973__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x100U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__phitmp_reg_792 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_17_fu_487_p2)
                ? 1U : (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_reg2mem_1_reg_201))));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3975__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l336(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3975__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l336\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ins_in_tiles_m_reg_331 
            = (0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[0U]);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3976__PROF__TesterWrapper__l2957(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3976__PROF__TesterWrapper__l2957\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__T5;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3977__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l336(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3977__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l336\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ins_in_tiles_n_reg_337 
            = (0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[1U]);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3978__PROF__TesterWrapper__l68(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3978__PROF__TesterWrapper__l68\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T13 
        = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem 
           + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regStep);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3979__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3979__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U];
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3980__PROF__TesterWrapper__l2544(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3980__PROF__TesterWrapper__l2544\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_1 = 0ULL;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__T6) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_1 = 0ULL;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T19) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_1 
                    = (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[2U])));
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3981__PROF__TesterWrapper__l2909(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3981__PROF__TesterWrapper__l2909\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__T2 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R0)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3982__PROF__TesterWrapper__l68(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3982__PROF__TesterWrapper__l68\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T13 
        = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem 
           + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regStep);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3983__PROF__TesterWrapper__l1270(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3983__PROF__TesterWrapper__l1270\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_base 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_base 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3984__PROF__TesterWrapper__l70(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3984__PROF__TesterWrapper__l70\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T15 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3985__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3985__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3986__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3986__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3987__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3987__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem
                : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState))
                        ? 0U : ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                 ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                 : 0U)) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3988__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3988__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState))
                        ? 2U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                                 ? 2U : 1U)) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3989__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3989__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState))
                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                       : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3990__PROF__TesterWrapper__l1114(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3990__PROF__TesterWrapper__l1114\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T10 
        = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlocksReceived 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_count));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3991__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3991__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x100U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_1_reg_785 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_18_fu_506_p2)
                ? 0U : (0xffffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_reg2mem_1_reg_231))));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3992__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3992__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_tiles_per_row_V_reg_644 
            = (0xffffU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
                           << 0x10U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[0U] 
                                        >> 0x10U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3993__PROF__TesterWrapper__l205(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3993__PROF__TesterWrapper__l205\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T24 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T25) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3994__PROF__TesterWrapper__l179(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3994__PROF__TesterWrapper__l179\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T0 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29)
            ? (QData)((IData)((0x1fffffffU & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep 
                                              >> 3U))))
            : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3)
                ? 0x40ULL : (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3995__PROF__TesterWrapper__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3995__PROF__TesterWrapper__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T15 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T16) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3996__PROF__TesterWrapper__l219(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3996__PROF__TesterWrapper__l219\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T25) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T16));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3997__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3997__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x100U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__n_2_reg_779 
            = (0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_18_fu_506_p2)
                           ? (((0xffffU & ((IData)(1U) 
                                           + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__n_reg2mem_1_reg_221))) 
                               == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_tiles_n_reg_652))
                               ? 0U : ((IData)(1U) 
                                       + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__n_reg2mem_1_reg_221)))
                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__n_reg2mem_1_reg_221)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3998__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3998__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x100U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_6_reg_773 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_17_fu_487_p2)
                ? 0U : (0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_offset_reg2mem_1_reg_211) 
                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_size_reg_717))));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__3999__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__3999__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_2 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_2 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4000__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4000__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_2 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_2 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4001__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4001__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_2 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_2 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4002__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4002__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_2 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_2 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4003__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4003__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_2 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_2 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4004__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4004__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_2 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_2 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4005__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4005__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_2 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_2 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4006__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4006__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_2 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_2 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4007__PROF__TesterWrapper__l3378(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4007__PROF__TesterWrapper__l3378\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T12 
        = ((2U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState)
            ? ((1U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_3
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_2)
            : ((1U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_1
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4008__PROF__TesterWrapper__l4147(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4008__PROF__TesterWrapper__l4147\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T30) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T28) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState = 0U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T26) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T17) 
                         & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T6)) 
                            & (~ (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[0U] 
                                  >> 2U))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState 
                            = ((8U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[0U])
                                ? 2U : 3U);
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T17) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T6))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState = 1U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4009__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l150(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4009__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l150\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0 = 0U;
    } else {
        if ((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_subdone)) 
              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__exitcond_fu_172_p2)) 
             & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                >> 1U))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0 = 0U;
        } else {
            if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg)) 
                           | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)))) 
                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0 = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4010__PROF__FetchInstrGen__l291(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4010__PROF__FetchInstrGen__l291\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_out_V_V_TREADY 
        = (1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state) 
                  >> 1U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__ap_CS_fsm) 
                            >> 2U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4011__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4011__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_6_reg_694 
            = ((0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[1U]) 
               * (0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[0U]));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4012__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l363(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4012__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l363\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state))) {
        if ((0x80U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_1_reg2mem_1_reg_241 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_1_reg2mem_reg_189;
        } else {
            if ((0x1000U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_1_reg2mem_1_reg_241 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_s_reg_802;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4014__PROF__TesterWrapper__l3378(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4014__PROF__TesterWrapper__l3378\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T12 
        = ((2U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState)
            ? ((1U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_3
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_2)
            : ((1U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_1
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4015__PROF__TesterWrapper__l3679(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4015__PROF__TesterWrapper__l3679\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regProfileState = 0U;
    } else {
        if ((1U & ((0U < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))))) {
            if (((0U >= vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regProfileState = 0U;
            } else {
                if ((0U < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds)) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regProfileState = 1U;
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regProfileState 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4016__PROF__TesterWrapper__l12139(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4016__PROF__TesterWrapper__l12139\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T79 = (0xffffffffffffULL 
                                                & (8ULL 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__R75));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4017__PROF__TesterWrapper__l11450(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4017__PROF__TesterWrapper__l11450\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__T3 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4018__PROF__TesterWrapper__l3179(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4018__PROF__TesterWrapper__l3179\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T28 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4019__PROF__TesterWrapper__l61(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4019__PROF__TesterWrapper__l61\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T6 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T7));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4020__PROF__TesterWrapper__l71(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4020__PROF__TesterWrapper__l71\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T7)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4021__PROF__TesterWrapper__l3378(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4021__PROF__TesterWrapper__l3378\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T12 
        = ((2U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState)
            ? ((1U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_3
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_2)
            : ((1U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_1
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4022__PROF__TesterWrapper__l3957(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4022__PROF__TesterWrapper__l3957\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regProfileState = 0U;
    } else {
        if ((1U & ((0U < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))))) {
            if (((0U >= vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regProfileState = 0U;
            } else {
                if ((0U < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds)) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regProfileState = 1U;
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regProfileState 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4023__PROF__TesterWrapper__l11342(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4023__PROF__TesterWrapper__l11342\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T6 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4024__PROF__TesterWrapper__l11345(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4024__PROF__TesterWrapper__l11345\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ptr_match 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4025__PROF__TesterWrapper__l7523(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4025__PROF__TesterWrapper__l7523\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T34 
        = ((IData)(1U) + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCycleCount);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4026__PROF__TesterWrapper__l7646(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4026__PROF__TesterWrapper__l7646\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T19) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T12) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState = 4U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T10) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState = 3U;
                } else {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T8) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState = 2U;
                    } else {
                        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T1) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState = 1U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4027__PROF__TesterWrapper__l11342(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4027__PROF__TesterWrapper__l11342\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T6 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4028__PROF__TesterWrapper__l11345(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4028__PROF__TesterWrapper__l11345\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ptr_match 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4029__PROF__TesterWrapper__l11454(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4029__PROF__TesterWrapper__l11454\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__T6 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4030__PROF__TesterWrapper__l11457(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4030__PROF__TesterWrapper__l11457\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ptr_match 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4031__PROF__TesterWrapper__l10831(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4031__PROF__TesterWrapper__l10831\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0 = 0x8426730U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 1U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 2U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 3U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 4U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 5U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 6U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 7U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 8U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 9U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0xaU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0xbU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0xcU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0xdU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0xeU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0xfU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x10U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x11U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x12U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x13U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x14U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x15U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x16U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x17U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x18U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x19U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x1aU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T33;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x1bU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x1cU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T33;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x1dU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29 = 0x20U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x1eU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30 = 0x200U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x1fU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31 = 0x40U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x20U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32 = 2U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x21U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33 = 2U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x22U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34 = 0x400U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x23U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35 = 0x10U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x24U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36 = 0x40U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x25U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37 = 0x400U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x26U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38 = 0x40U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x27U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x28U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x29U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x2aU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x2bU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x2cU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x2dU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x2eU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x2fU)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x30U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x31U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x32U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x33U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x34U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x35U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
             & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                        >> 0x36U)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54 
                = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x37U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T27;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x38U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl_count;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x39U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl_count;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x3aU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl_count;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                 & (IData)(((1ULL << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                            >> 0x3bU)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59 
                    = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData;
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl_count;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4037__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l830(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4037__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l830\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__j_reg_1612 
            = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_bits_l_reg_1519))
                ? 0xffU : 0U);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4044__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l798(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4044__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l798\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001)) 
               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                  >> 3U)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_fu_669_p2;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4045__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l798(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4045__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l798\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001)) 
               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                  >> 3U)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_fu_643_p2;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4046__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4046__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_base_l_reg_1549 
            = (0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[2U]);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4047__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4047__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exec_numTiles_V_reg_1506 
            = (0xffffU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
                           << 0x10U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[0U] 
                                        >> 0x10U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4048__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l710(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4048__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l710\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_fu_669_p2) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001))) 
          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
             >> 3U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_8_fu_1145_p3;
    } else {
        if ((((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_fu_643_p2) 
                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_fu_669_p2))) 
               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001))) 
              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                 >> 3U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_2_fu_989_p3;
        } else {
            if ((((((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_fu_669_p2)) 
                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_fu_643_p2))) 
                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001))) 
                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                     >> 3U)) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_5_fu_832_p3;
            } else {
                if (((0U != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_2_reg_1586) 
                     & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                        >> 2U))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138 = 0U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4065__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4065__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4066__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4066__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4067__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4067__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4068__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4068__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4069__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4069__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4070__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4070__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4071__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4071__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4072__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4072__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4073__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4073__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4074__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4074__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4075__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4075__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4076__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4076__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4077__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4077__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4078__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4078__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4079__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4079__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4080__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4080__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4081__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4081__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4082__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4082__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4083__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4083__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4084__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4084__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4085__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4085__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4086__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4086__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4087__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4087__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4088__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4088__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4089__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4089__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4090__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4090__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4091__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4091__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4092__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4092__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4093__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4093__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4094__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4094__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4095__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4095__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4096__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4096__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4097__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4097__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4098__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4098__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4099__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4099__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4100__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4100__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4101__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4101__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4102__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4102__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4103__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4103__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4104__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4104__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4105__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4105__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4106__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4106__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4107__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4107__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4108__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4108__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4125__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4125__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4136__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4136__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4137__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4137__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4149__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4149__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4156__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4156__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4157__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4157__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4158__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4158__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2
                : 0ULL);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)
                        ? 0ULL : ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                   ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                  [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                   : 0ULL)) : 0ULL);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4159__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4159__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)
                        ? 2U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                                 ? 2U : 1U)) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4160__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4160__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T35)) 
                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)
                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                       : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4161__PROF__TesterWrapper__l11595(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4161__PROF__TesterWrapper__l11595\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4162__PROF__TesterWrapper__l11599(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4162__PROF__TesterWrapper__l11599\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4166__PROF__TesterWrapper__l5494(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4166__PROF__TesterWrapper__l5494\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_deq 
        = ((2U > (3U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT____Vcellout__Q_srl__count))) 
           & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__ptr_match) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__maybe_full)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4167__PROF__TesterWrapper__l5529(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4167__PROF__TesterWrapper__l5529\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4168__PROF__TesterWrapper__l5022(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4168__PROF__TesterWrapper__l5022\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_deq 
        = ((2U > (3U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT____Vcellout__Q_srl__count))) 
           & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__ptr_match) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__maybe_full)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4169__PROF__TesterWrapper__l5063(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4169__PROF__TesterWrapper__l5063\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4170__PROF__TesterWrapper__l4493(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4170__PROF__TesterWrapper__l4493\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_deq 
        = ((2U > (3U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT____Vcellout__Q_srl__count))) 
           & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__ptr_match) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__maybe_full)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4171__PROF__TesterWrapper__l4534(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4171__PROF__TesterWrapper__l4534\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4180__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l406(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4180__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l406\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_reg2mem_1_reg_201 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_reg2mem_1_reg_201;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4188__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l396(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4188__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l396\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_rd) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[6U];
    } else {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4189__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l215(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4189__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l215\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4193__PROF__TesterWrapper__l3204(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4193__PROF__TesterWrapper__l3204\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__R5];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__R5];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[2U] 
        = (IData)((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__mem
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__R5])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__mem
                                                [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__R5]))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__mem
                                     [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__R5])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__mem
                                                 [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__R5]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4196__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4196__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4197__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l426(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4197__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l426\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_reg2mem_1_reg_231 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_reg2mem_1_reg_231;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4200__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l446(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4200__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l446\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__n_reg2mem_1_reg_221 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__n_reg2mem_1_reg_221;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4203__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l386(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4203__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l386\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_offset_reg2mem_1_reg_211 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_offset_reg2mem_1_reg_211;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4225__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l208(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4225__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l208\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4234__PROF__TesterWrapper__l70(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4234__PROF__TesterWrapper__l70\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T15 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4235__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4235__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4236__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4236__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4237__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4237__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem
                : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState))
                        ? 0U : ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                 ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                 : 0U)) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4238__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4238__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState))
                        ? 2U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                                 ? 2U : 1U)) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4239__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4239__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                 & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16) 
                     & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                         & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T16)) 
                             & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState))
                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                       : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4244__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4244__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4245__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4245__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4247__PROF__TesterWrapper__l11367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4247__PROF__TesterWrapper__l11367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4248__PROF__TesterWrapper__l11371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4248__PROF__TesterWrapper__l11371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4249__PROF__TesterWrapper__l11465(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4249__PROF__TesterWrapper__l11465\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__empty 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4250__PROF__TesterWrapper__l11469(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4250__PROF__TesterWrapper__l11469\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4251__PROF__TesterWrapper__l10289(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4251__PROF__TesterWrapper__l10289\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regDoCmd) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_write));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4256__PROF__TesterWrapper__l5044(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4256__PROF__TesterWrapper__l5044\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T33 
        = (0x3ffU & (((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__maybe_full) 
                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__ptr_match)) 
                       << 9U) | (0x1ffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11) 
                                           - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14)))) 
                     + (3U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT____Vcellout__Q_srl__count))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4257__PROF__TesterWrapper__l4515(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4257__PROF__TesterWrapper__l4515\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T33 
        = (0x3ffU & (((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__maybe_full) 
                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__ptr_match)) 
                       << 9U) | (0x1ffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11) 
                                           - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14)))) 
                     + (3U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT____Vcellout__Q_srl__count))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4258__PROF__TesterWrapper__l5513(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4258__PROF__TesterWrapper__l5513\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T27 
        = (0x3ffU & (((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__maybe_full) 
                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__ptr_match)) 
                       << 9U) | (0x1ffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8) 
                                           - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11)))) 
                     + (3U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT____Vcellout__Q_srl__count))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4323__PROF__TesterWrapper__l9454(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4323__PROF__TesterWrapper__l9454\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4335__PROF__TesterWrapper__l1892(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4335__PROF__TesterWrapper__l1892\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__R2 
        = (0x7fU & ((0x3fU & ((0x1fU & ((0xfU & ((7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16)) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                     >> 1U))))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                     >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                     >> 3U))))))) 
                                                 + 
                                                 (7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                     >> 4U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                     >> 5U))))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                     >> 6U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                     >> 7U))))))))) 
                                        + (0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 8U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 9U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0xaU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0xbU))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0xcU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0xdU))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0xeU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0xfU))))))))))) 
                              + (0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x10U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x11U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x12U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x13U))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x14U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x15U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x16U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x17U))))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                >> 0x18U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                >> 0x19U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                  >> 0x1aU))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                  >> 0x1bU))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x1cU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x1dU))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x1eU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x1fU))))))))))))) 
                    + (0x3fU & ((0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x20U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x21U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x22U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x23U))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x24U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x25U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x26U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                       >> 0x27U))))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                >> 0x28U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                >> 0x29U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                  >> 0x2aU))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                  >> 0x2bU))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x2cU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x2dU))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x2eU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x2fU))))))))))) 
                                + (0x1fU & ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                >> 0x30U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                >> 0x31U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                  >> 0x32U))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                  >> 0x33U))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x34U))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x35U))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x36U))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                    >> 0x37U))))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                      >> 0x38U))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                      >> 0x39U))))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                      >> 0x3aU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                      >> 0x3bU))))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                      >> 0x3cU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                      >> 0x3dU))))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                      >> 0x3eU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
                                                                      >> 0x3fU)))))))))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4336__PROF__TesterWrapper__l1892(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4336__PROF__TesterWrapper__l1892\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__R2 
        = (0x7fU & ((0x3fU & ((0x1fU & ((0xfU & ((7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16)) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                     >> 1U))))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                     >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                     >> 3U))))))) 
                                                 + 
                                                 (7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                     >> 4U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                     >> 5U))))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                     >> 6U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                     >> 7U))))))))) 
                                        + (0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 8U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 9U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0xaU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0xbU))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0xcU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0xdU))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0xeU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0xfU))))))))))) 
                              + (0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x10U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x11U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x12U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x13U))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x14U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x15U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x16U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x17U))))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                >> 0x18U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                >> 0x19U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                  >> 0x1aU))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                  >> 0x1bU))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x1cU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x1dU))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x1eU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x1fU))))))))))))) 
                    + (0x3fU & ((0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x20U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x21U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x22U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x23U))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x24U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x25U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x26U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                       >> 0x27U))))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                >> 0x28U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                >> 0x29U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                  >> 0x2aU))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                  >> 0x2bU))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x2cU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x2dU))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x2eU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x2fU))))))))))) 
                                + (0x1fU & ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                >> 0x30U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                >> 0x31U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                  >> 0x32U))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                  >> 0x33U))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x34U))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x35U))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x36U))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                    >> 0x37U))))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                      >> 0x38U))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                      >> 0x39U))))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                      >> 0x3aU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                      >> 0x3bU))))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                      >> 0x3cU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                      >> 0x3dU))))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                      >> 0x3eU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
                                                                      >> 0x3fU)))))))))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4337__PROF__TesterWrapper__l1892(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4337__PROF__TesterWrapper__l1892\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__R2 
        = (0x7fU & ((0x3fU & ((0x1fU & ((0xfU & ((7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16)) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                     >> 1U))))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                     >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                     >> 3U))))))) 
                                                 + 
                                                 (7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                     >> 4U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                     >> 5U))))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                     >> 6U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                     >> 7U))))))))) 
                                        + (0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 8U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 9U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0xaU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0xbU))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0xcU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0xdU))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0xeU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0xfU))))))))))) 
                              + (0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x10U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x11U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x12U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x13U))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x14U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x15U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x16U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x17U))))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                >> 0x18U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                >> 0x19U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                  >> 0x1aU))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                  >> 0x1bU))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x1cU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x1dU))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x1eU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x1fU))))))))))))) 
                    + (0x3fU & ((0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x20U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x21U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x22U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x23U))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x24U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x25U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x26U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                       >> 0x27U))))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                >> 0x28U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                >> 0x29U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                  >> 0x2aU))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                  >> 0x2bU))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x2cU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x2dU))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x2eU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x2fU))))))))))) 
                                + (0x1fU & ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                >> 0x30U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                >> 0x31U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                  >> 0x32U))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                  >> 0x33U))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x34U))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x35U))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x36U))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                    >> 0x37U))))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                      >> 0x38U))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                      >> 0x39U))))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                      >> 0x3aU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                      >> 0x3bU))))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                      >> 0x3cU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                      >> 0x3dU))))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                      >> 0x3eU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
                                                                      >> 0x3fU)))))))))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4338__PROF__TesterWrapper__l1892(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4338__PROF__TesterWrapper__l1892\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__R2 
        = (0x7fU & ((0x3fU & ((0x1fU & ((0xfU & ((7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16)) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                     >> 1U))))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                     >> 2U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                     >> 3U))))))) 
                                                 + 
                                                 (7U 
                                                  & ((3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                     >> 4U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                     >> 5U))))) 
                                                     + 
                                                     (3U 
                                                      & ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                     >> 6U))) 
                                                         + 
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                     >> 7U))))))))) 
                                        + (0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 8U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 9U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0xaU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0xbU))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0xcU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0xdU))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0xeU))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0xfU))))))))))) 
                              + (0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x10U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x11U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x12U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x13U))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x14U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x15U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x16U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x17U))))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                >> 0x18U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                >> 0x19U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                  >> 0x1aU))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                  >> 0x1bU))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x1cU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x1dU))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x1eU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x1fU))))))))))))) 
                    + (0x3fU & ((0x1fU & ((0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x20U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x21U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x22U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x23U))))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x24U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x25U))))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x26U))) 
                                                           + 
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                       >> 0x27U))))))))) 
                                          + (0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                >> 0x28U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                >> 0x29U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                  >> 0x2aU))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                  >> 0x2bU))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x2cU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x2dU))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x2eU))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x2fU))))))))))) 
                                + (0x1fU & ((0xfU & 
                                             ((7U & 
                                               ((3U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                >> 0x30U))) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                >> 0x31U))))) 
                                                + (3U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                  >> 0x32U))) 
                                                      + 
                                                      (1U 
                                                       & (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                  >> 0x33U))))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x34U))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x35U))))) 
                                                    + 
                                                    (3U 
                                                     & ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x36U))) 
                                                        + 
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                    >> 0x37U))))))))) 
                                            + (0xfU 
                                               & ((7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                      >> 0x38U))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                      >> 0x39U))))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                      >> 0x3aU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                      >> 0x3bU))))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                      >> 0x3cU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                      >> 0x3dU))))) 
                                                      + 
                                                      (3U 
                                                       & ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                      >> 0x3eU))) 
                                                          + 
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
                                                                      >> 0x3fU)))))))))))))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4339__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4339__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_b_dout 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R5];
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_b_dout 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4340__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4340__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_b_dout 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R5];
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_b_dout 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4341__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4341__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_b_dout 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R5];
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_b_dout 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4342__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4342__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_b_dout 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R5];
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_b_dout 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4343__PROF__TesterWrapper__l12055(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4343__PROF__TesterWrapper__l12055\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T4 = (1U & 
                                               ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R1)) 
                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4344__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4344__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R1)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4345__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4345__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4346__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4346__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4347__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4347__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4348__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4348__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4349__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4349__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4350__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4350__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4351__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4351__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4352__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4352__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4353__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4353__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4354__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4354__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4355__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4355__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4356__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4356__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4357__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4357__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4358__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4358__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4359__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4359__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4360__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4360__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4361__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4361__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4362__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4362__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4363__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4363__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4364__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4364__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4365__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4365__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4366__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4366__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4367__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4367__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4368__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4368__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4369__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4369__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4370__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4370__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4371__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4371__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4372__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4372__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4373__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4373__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4374__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4374__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4375__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4375__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4376__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4376__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4377__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4377__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4378__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4378__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4379__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4379__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4380__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4380__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4381__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4381__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4382__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4382__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4383__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4383__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4384__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4384__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4385__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4385__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R18 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R19;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4386__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4386__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R22 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R23;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4387__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4387__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R18 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R19;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4388__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4388__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R22 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R23;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4389__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4389__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R18 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R19;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4390__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4390__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R22 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R23;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4391__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4391__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R18 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R19;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4392__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4392__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R22 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R23;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4393__PROF__TesterWrapper__l2470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4393__PROF__TesterWrapper__l2470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R21 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R22;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4394__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4394__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R10 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R11;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4395__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4395__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R10 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R11;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4396__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4396__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R10 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R11;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4397__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4397__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R10 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R11;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4398__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4398__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4399__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4399__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4400__PROF__TesterWrapper__l12079(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4400__PROF__TesterWrapper__l12079\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T28 = (1U 
                                                & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R25)) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4401__PROF__TesterWrapper__l12090(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4401__PROF__TesterWrapper__l12090\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T39 = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T31) 
                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__empty)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4402__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4402__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R26 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R27;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4403__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4403__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R26 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R27;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4404__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4404__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R26 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R27;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4405__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4405__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R26 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R27;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4406__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4406__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[4U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[5U] = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[4U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[5U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U];
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4407__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4407__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4408__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4408__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_3_addr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_addr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4409__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4409__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_3_data 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_data;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4410__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4410__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_3_id 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_id;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4411__PROF__TesterWrapper__l751(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4411__PROF__TesterWrapper__l751\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_3 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_2));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4414__PROF__TesterWrapper__l2912(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4414__PROF__TesterWrapper__l2912\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__T5 
        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R3)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4415__PROF__TesterWrapper__l2920(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4415__PROF__TesterWrapper__l2920\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R0) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R3));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4416__PROF__ResultInstrGen__l117(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4416__PROF__ResultInstrGen__l117\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg = 0U;
    } else {
        if ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_CS_fsm))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg = 1U;
        } else {
            if ((1U & ((~ ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                               >> 1U)) | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_block_state9_io))) 
                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                          >> 8U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4417__PROF__TesterWrapper__l3182(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4417__PROF__TesterWrapper__l3182\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T31 
        = ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState)) 
           & (~ ((0U < (0xffffU & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                   >> 0x10U))) & (0U 
                                                  < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4419__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4419__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U];
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4423__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4423__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_tiles_n_reg_652 
            = (0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[1U]);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4424__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l944(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4424__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l944\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_size_reg_717 
        = (0x7ffU & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_size_reg_717));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4425__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4425__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state2_io)) 
               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                  >> 1U)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_size_reg_717 
            = ((0xf800U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_size_reg_717)) 
               | ((0xaU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_nbufs_fetch_exec_log2_reg_678))
                   ? (0x7ffU & (0x400U >> (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_nbufs_fetch_exec_log2_reg_678)))
                   : 0U));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4426__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4426__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_4;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4427__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4427__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_4;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4428__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4428__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_4;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4429__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4429__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_4;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4430__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4430__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_4;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4431__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4431__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_4;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4432__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4432__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_4;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4433__PROF__TesterWrapper__l6597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4433__PROF__TesterWrapper__l6597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_3 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_3 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_4;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4434__PROF__TesterWrapper__l4111(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4434__PROF__TesterWrapper__l4111\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T28 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4435__PROF__TesterWrapper__l4113(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4435__PROF__TesterWrapper__l4113\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T30 
        = ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4436__PROF__TesterWrapper__l3153(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4436__PROF__TesterWrapper__l3153\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T3 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState)) 
           & (1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4437__PROF__ExecAddrGen__l117(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4437__PROF__ExecAddrGen__l117\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg = 0U;
    } else {
        if ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__ap_CS_fsm))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg = 1U;
        } else {
            if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                        >> 1U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                                  >> 2U)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4438__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4438__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state))) {
        if ((0x2000U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_1_reg2mem_reg_189 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_s_reg_802;
        } else {
            if ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_1_reg2mem_reg_189 = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4439__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4439__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4440__PROF__TesterWrapper__l3679(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4440__PROF__TesterWrapper__l3679\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds = 0U;
    } else {
        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T7)) 
             & ((~ ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T25))) 
                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T30)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T10;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T7) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T6;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4441__PROF__TesterWrapper__l3679(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4441__PROF__TesterWrapper__l3679\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T52) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T50) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState = 0U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T47) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState 
                        = ((8U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U])
                            ? 2U : 3U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T38) 
                         & ((~ (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U] 
                                >> 2U)) & (~ (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U] 
                                              >> 2U))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState = 1U;
                    } else {
                        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T24) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState = 0U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4442__PROF__Q_srl__l146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4442__PROF__Q_srl__l146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_ 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4443__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4443__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4444__PROF__TesterWrapper__l3957(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4444__PROF__TesterWrapper__l3957\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds = 0U;
    } else {
        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T7)) 
             & ((~ (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state) 
                     >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T25))) 
                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R32)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T10;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T7) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T6;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4445__PROF__TesterWrapper__l3957(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4445__PROF__TesterWrapper__l3957\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T55) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T50) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState = 0U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T47) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState 
                        = ((8U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U])
                            ? 2U : 3U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T38) 
                         & ((~ (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
                                >> 2U)) & (~ (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
                                              >> 2U))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState = 1U;
                    } else {
                        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T24) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState = 0U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4446__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4446__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4447__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4447__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4448__PROF__TesterWrapper__l7488(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4448__PROF__TesterWrapper__l7488\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T8 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4449__PROF__TesterWrapper__l7490(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4449__PROF__TesterWrapper__l7490\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T10 
        = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4450__PROF__TesterWrapper__l56(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4450__PROF__TesterWrapper__l56\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState)) 
           & (1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4451__PROF__TesterWrapper__l56(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4451__PROF__TesterWrapper__l56\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T2 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState)) 
           & (2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4452__PROF__TesterWrapper__l7492(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4452__PROF__TesterWrapper__l7492\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T12 
        = ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
           & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCompletedWrBytes 
              == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_waitCompleteBytes));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4453__PROF__TesterWrapper__l11339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4453__PROF__TesterWrapper__l11339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4454__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4454__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__full)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4455__PROF__TesterWrapper__l12063(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4455__PROF__TesterWrapper__l12063\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T12 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__R1) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R7))) 
                                                & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__full)) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__empty))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4456__PROF__TesterWrapper__l10831(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4456__PROF__TesterWrapper__l10831\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData 
        = vlTOPp->io_regFileIF_cmd_bits_writeData;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4457__PROF__TesterWrapper__l3364(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4457__PROF__TesterWrapper__l3364\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T0 
        = ((2U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49)
            ? ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_3
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_2)
            : ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_1
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4458__PROF__TesterWrapper__l3364(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4458__PROF__TesterWrapper__l3364\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T0 
        = ((2U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51)
            ? ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_3
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_2)
            : ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_1
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4459__PROF__TesterWrapper__l3364(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4459__PROF__TesterWrapper__l3364\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T0 
        = ((2U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53)
            ? ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_3
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_2)
            : ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_1
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_0));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4460__PROF__TesterWrapper__l12122(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4460__PROF__TesterWrapper__l12122\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T62[0U] = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43;
    vlTOPp->VerilatedTesterWrapper__DOT__T62[1U] = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42;
    vlTOPp->VerilatedTesterWrapper__DOT__T62[2U] = (IData)(
                                                           (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41))));
    vlTOPp->VerilatedTesterWrapper__DOT__T62[3U] = (IData)(
                                                           ((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41))) 
                                                            >> 0x20U));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4461__PROF__TesterWrapper__l7744(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4461__PROF__TesterWrapper__l7744\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[0U] 
        = (IData)((((QData)((IData)((0xfU & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6))) 
                    << 0x21U) | (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12)) 
                                  << 1U) | (QData)((IData)(
                                                           (1U 
                                                            & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11))))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[1U] 
        = ((0xffffffe0U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9 
                           << 5U)) | (IData)(((((QData)((IData)(
                                                                (0xfU 
                                                                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6))) 
                                                << 0x21U) 
                                               | (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12)) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11))))) 
                                              >> 0x20U)));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[2U] 
        = ((0x1fU & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9 
                     >> 0x1bU)) | (0xffffffe0U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10 
                                                  << 5U)));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[3U] 
        = ((0x1fU & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10 
                     >> 0x1bU)) | (0xffffffe0U & ((IData)(
                                                          (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7)))) 
                                                  << 5U)));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[4U] 
        = ((0x1fU & ((IData)((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)) 
                               << 0x20U) | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7)))) 
                     >> 0x1bU)) | (0xffffffe0U & ((IData)(
                                                          ((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7))) 
                                                           >> 0x20U)) 
                                                  << 5U)));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[5U] 
        = (0x1fU & ((IData)(((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)) 
                               << 0x20U) | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7))) 
                             >> 0x20U)) >> 0x1bU));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4462__PROF__TesterWrapper__l12115(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4462__PROF__TesterWrapper__l12115\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T55[0U] = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21;
    vlTOPp->VerilatedTesterWrapper__DOT__T55[1U] = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20;
    vlTOPp->VerilatedTesterWrapper__DOT__T55[2U] = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19;
    vlTOPp->VerilatedTesterWrapper__DOT__T55[3U] = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18;
    vlTOPp->VerilatedTesterWrapper__DOT__T55[4U] = vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17;
    vlTOPp->VerilatedTesterWrapper__DOT__T55[5U] = (IData)(
                                                           (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))));
    vlTOPp->VerilatedTesterWrapper__DOT__T55[6U] = (IData)(
                                                           ((((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))) 
                                                            >> 0x20U));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4463__PROF__TesterWrapper__l4100(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4463__PROF__TesterWrapper__l4100\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T17 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)) 
           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
              & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4464__PROF__TesterWrapper__l10831(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4464__PROF__TesterWrapper__l10831\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID 
        = vlTOPp->io_regFileIF_cmd_bits_regID;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4465__PROF__TesterWrapper__l8643(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4465__PROF__TesterWrapper__l8643\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T65 
        = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCCEnablePrev))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4466__PROF__TesterWrapper__l4115(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4466__PROF__TesterWrapper__l4115\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T32 
        = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47 
                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4467__PROF__TesterWrapper__l8593(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4467__PROF__TesterWrapper__l8593\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30 
        = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R32))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4468__PROF__TesterWrapper__l8566(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4468__PROF__TesterWrapper__l8566\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0 
        = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R2))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4469__PROF__TesterWrapper__l8570(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4469__PROF__TesterWrapper__l8570\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5 
        = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R7))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4470__PROF__TesterWrapper__l8582(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4470__PROF__TesterWrapper__l8582\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18 
        = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R20))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4471__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4471__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4472__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4472__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4473__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4473__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4474__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4474__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4475__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4475__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4476__PROF__TesterWrapper__l6261(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4476__PROF__TesterWrapper__l6261\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T5 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__full)) 
                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4477__PROF__TesterWrapper__l6261(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4477__PROF__TesterWrapper__l6261\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T5 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__full)) 
                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4478__PROF__TesterWrapper__l6261(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4478__PROF__TesterWrapper__l6261\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T5 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__full)) 
                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4479__PROF__TesterWrapper__l6258(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4479__PROF__TesterWrapper__l6258\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__full)) 
                 & (~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4480__PROF__TesterWrapper__l6258(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4480__PROF__TesterWrapper__l6258\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__full)) 
                 & (~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4481__PROF__TesterWrapper__l6258(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4481__PROF__TesterWrapper__l6258\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__full)) 
                 & (~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4482__PROF__TesterWrapper__l5479(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4482__PROF__TesterWrapper__l5479\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__full)) 
                 & ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)
                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state)
                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4483__PROF__TesterWrapper__l6253(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4483__PROF__TesterWrapper__l6253\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[0U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_B[0U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_A[0U]);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[1U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_B[1U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_A[1U]);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[2U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_B[2U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_A[2U]);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[3U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_B[3U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_A[3U]);
    } else {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4484__PROF__TesterWrapper__l4475(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4484__PROF__TesterWrapper__l4475\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__full)) 
                 & ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)
                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state)
                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4485__PROF__TesterWrapper__l6253(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4485__PROF__TesterWrapper__l6253\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[0U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_B[0U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_A[0U]);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[1U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_B[1U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_A[1U]);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[2U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_B[2U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_A[2U]);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[3U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_B[3U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_A[3U]);
    } else {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4486__PROF__TesterWrapper__l5004(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4486__PROF__TesterWrapper__l5004\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__full)) 
                 & ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)
                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state)
                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4487__PROF__TesterWrapper__l6253(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4487__PROF__TesterWrapper__l6253\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[0U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_B[0U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_A[0U]);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[1U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_B[1U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_A[1U]);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[2U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_B[2U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_A[2U]);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[3U] 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_B[3U]
                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_A[3U]);
    } else {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4488__PROF__TesterWrapper__l8645(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4488__PROF__TesterWrapper__l8645\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T67 
        = ((IData)(1U) + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4489__PROF__TesterWrapper__l3920(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4489__PROF__TesterWrapper__l3920\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T61 
        = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47 
                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4490__PROF__TesterWrapper__l3644(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4490__PROF__TesterWrapper__l3644\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T56 
        = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47 
                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4491__PROF__TesterWrapper__l7480(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4491__PROF__TesterWrapper__l7480\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T1 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
              & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4492__PROF__TesterWrapper__l7501(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4492__PROF__TesterWrapper__l7501\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T19 
        = ((4U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
           & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)) 
              & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4493__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4493__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__full)) 
           & ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
               ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)
               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4494__PROF__TesterWrapper__l11455(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4494__PROF__TesterWrapper__l11455\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__full)) 
           & ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
               ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)
               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4495__PROF__TesterWrapper__l11343(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4495__PROF__TesterWrapper__l11343\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__full)) 
           & ((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
               ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)
               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4496__PROF__TesterWrapper__l8051(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4496__PROF__TesterWrapper__l8051\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux_1__DOT__T0 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty)) 
                 & (~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4497__PROF__TesterWrapper__l12092(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4497__PROF__TesterWrapper__l12092\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T41 = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T42) 
                                                & ((1U 
                                                    & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                    ? 
                                                   (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))
                                                    : 
                                                   (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4498__PROF__TesterWrapper__l7970(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4498__PROF__TesterWrapper__l7970\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__full)) 
                 & (~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4499__PROF__TesterWrapper__l7973(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4499__PROF__TesterWrapper__l7973\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__full)) 
                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4500__PROF__TesterWrapper__l8568(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4500__PROF__TesterWrapper__l8568\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3 
        = ((4U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
           & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4501__PROF__TesterWrapper__l8569(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4501__PROF__TesterWrapper__l8569\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
           & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4502__PROF__TesterWrapper__l7973(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4502__PROF__TesterWrapper__l7973\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T9 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__full)) 
                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4503__PROF__TesterWrapper__l8005(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4503__PROF__TesterWrapper__l8005\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T3 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__full)) 
                 & (~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4504__PROF__TesterWrapper__l8008(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4504__PROF__TesterWrapper__l8008\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_5__DOT__T5 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__full)) 
                 & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4505__PROF__TesterWrapper__l8059(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4505__PROF__TesterWrapper__l8059\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T2 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T42) 
           & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4506__PROF__TesterWrapper__l7970(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4506__PROF__TesterWrapper__l7970\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__full)) 
                 & (~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4507__PROF__TesterWrapper__l8051(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4507__PROF__TesterWrapper__l8051\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux__DOT__T0 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T42) 
           & (~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4508__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4508__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l760\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_bits_l_reg_1519 
            = (0xffU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
                         << 0x10U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
                                      >> 0x10U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4519__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l542(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4519__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l542\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0 = 0U;
    } else {
        if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__exitcond1_reg_1855) 
              & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage6_subdone))) 
             & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                >> 9U))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0 = 0U;
        } else {
            if (((0U != vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_2_reg_1586) 
                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                    >> 2U))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0 = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4521__PROF__TesterWrapper__l1650(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4521__PROF__TesterWrapper__l1650\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__T16 
        = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R1 
           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R0);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4523__PROF__TesterWrapper__l1650(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4523__PROF__TesterWrapper__l1650\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__T16 
        = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R1 
           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R0);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4525__PROF__TesterWrapper__l1650(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4525__PROF__TesterWrapper__l1650\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__T16 
        = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R1 
           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R0);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4527__PROF__TesterWrapper__l1650(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4527__PROF__TesterWrapper__l1650\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__T16 
        = (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R1 
           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R0);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4529__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4529__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem[vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0] 
            = vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0;
    }
    if (vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem[vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1] 
            = vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4534__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4534__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem[vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0] 
            = vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0;
    }
    if (vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem[vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1] 
            = vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4539__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4539__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem[vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0] 
            = vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0;
    }
    if (vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem[vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1] 
            = vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4544__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4544__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem[vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0] 
            = vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0;
    }
    if (vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem[vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1] 
            = vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4591__PROF__TesterWrapper__l2913(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4591__PROF__TesterWrapper__l2913\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq 
        = ((2U > (3U & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                         ? ((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                         : ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                             ? 1U : 0U)))) & (~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__ptr_match) 
                                                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__maybe_full)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4592__PROF__TesterWrapper__l2933(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4592__PROF__TesterWrapper__l2933\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__full 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__maybe_full));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4595__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l251(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4595__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l251\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4597__PROF__TesterWrapper__l4109(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4597__PROF__TesterWrapper__l4109\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T26 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T31));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4598__PROF__TesterWrapper__l4089(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4598__PROF__TesterWrapper__l4089\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T6 
        = (1U & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[0U] 
                  >> 2U) & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T31))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4599__PROF__TesterWrapper__l4126(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4599__PROF__TesterWrapper__l4126\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T38 
        = (3U & ((3U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)) 
                 & ((IData)(1U) << (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[0U] 
                                          >> 4U)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4600__PROF__TesterWrapper__l4119(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4600__PROF__TesterWrapper__l4119\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T33 
        = (3U & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)) 
                 & ((IData)(1U) << (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[0U] 
                                          >> 4U)))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4621__PROF__TesterWrapper__l3151(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4621__PROF__TesterWrapper__l3151\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T1 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T3) 
           & (~ (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                 >> 0x1eU)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4625__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l244(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4625__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l244\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4626__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l486(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4626__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l486\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_s_reg_802 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_s_reg_802;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4628__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l347(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4628__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l347\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4635__PROF__ExecAddrGen__l149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4635__PROF__ExecAddrGen__l149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state 
        = vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4639__PROF__TesterWrapper__l11451(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4639__PROF__TesterWrapper__l11451\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T12) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__empty)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4640__PROF__TesterWrapper__l11571(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4640__PROF__TesterWrapper__l11571\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__full)) 
           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T12) 
              & (8U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R7))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4643__PROF__TesterWrapper__l3369(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4643__PROF__TesterWrapper__l3369\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T32));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4644__PROF__TesterWrapper__l3374(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4644__PROF__TesterWrapper__l3374\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T8 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T32)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4645__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4645__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4646__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4646__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4647__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4647__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T62[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T62[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T62[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T62[3U];
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T62[0U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T62[1U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T62[2U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T62[3U];
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U]
                            : 0U) : 0U);
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4648__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4648__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)
                        ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                            ? 2U : 1U) : 2U) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4649__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4649__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T30)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U) : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4650__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4650__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4651__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4651__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4652__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4652__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T55[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T55[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T55[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T55[3U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T55[4U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__T55[5U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] 
                = (0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__T55[6U]);
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T55[0U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T55[1U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T55[2U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T55[3U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T55[4U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__T55[5U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] 
                        = (0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__T55[6U]);
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                            = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                            = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                            = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                            = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                            = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][4U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                            = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][5U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] 
                            = ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][6U]
                                : 0U);
                    } else {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
                    }
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            if ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][4U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][5U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][6U];
                            } else {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
                            }
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                                    if ((2U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))) {
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][4U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][5U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr][6U];
                                    } else {
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[6U] = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4653__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4653__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4654__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4654__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)
                                  ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                              - (IData)(1U)))
                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (3U & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T18)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T16))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                  - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4660__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4660__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4661__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4661__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4662__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4662__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U]
                            : 0U) : 0U);
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4663__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4663__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)
                        ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                            ? 2U : 1U) : 2U) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4664__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4664__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T3)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U) : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4665__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4665__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4666__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4666__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4667__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4667__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U]
                            : 0U) : 0U);
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4668__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4668__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)
                        ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                            ? 2U : 1U) : 2U) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4669__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4669__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T3)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U) : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4670__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4670__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4671__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4671__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4672__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4672__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U]
                            : 0U) : 0U);
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                    = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U]
                            : 0U) : 0U);
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4673__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4673__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)
                        ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                            ? 2U : 1U) : 2U) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4674__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4674__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T3)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U) : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4675__PROF__TesterWrapper__l5481(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4675__PROF__TesterWrapper__l5481\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T0[3U];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4676__PROF__TesterWrapper__l4477(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4676__PROF__TesterWrapper__l4477\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T0[3U];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4677__PROF__TesterWrapper__l5006(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4677__PROF__TesterWrapper__l5006\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[3U] 
        = (0xfffffffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T0[3U]);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4678__PROF__TesterWrapper__l3369(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4678__PROF__TesterWrapper__l3369\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T61));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4679__PROF__TesterWrapper__l3374(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4679__PROF__TesterWrapper__l3374\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T8 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T61)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4680__PROF__TesterWrapper__l3369(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4680__PROF__TesterWrapper__l3369\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T56));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4681__PROF__TesterWrapper__l3374(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4681__PROF__TesterWrapper__l3374\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T8 
        = ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T56)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4682__PROF__TesterWrapper__l12097(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4682__PROF__TesterWrapper__l12097\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__T46 = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T41) 
                                                & (8U 
                                                   == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R33)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4683__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4683__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4684__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4684__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4685__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4685__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2
                : 0ULL);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                            : 0ULL) : 0ULL) : 0ULL);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4686__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4686__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7)
                        ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                            ? 2U : 1U) : 2U) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4687__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4687__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T7)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U) : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4688__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4688__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4689__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4689__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4690__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4690__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2
                : 0ULL);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0ULL;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9)
                        ? ((0U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                            : 0ULL) : 0ULL) : 0ULL);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4691__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4691__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9)
                        ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                            ? 2U : 1U) : 2U) : 0U);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4692__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4692__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T35)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                = ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state)) 
                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_3__DOT__T9)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)
                           ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                              - (IData)(1U)) : 0U) : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4693__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4693__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4694__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4694__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4695__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4695__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)
                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCycleCount
                : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCycleCount;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)
                            ? ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                : 0U) : 0U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                = ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                    ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                   [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                    : 0U);
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ 
                                        = ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                           [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr]
                                            : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4696__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4696__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)
                ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 1U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)
                            ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? 1U : 2U) : 2U);
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 2U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 1U : 2U);
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4697__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4697__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                        = (0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)
                                    ? ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                        ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                                - (IData)(1U)))
                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr)));
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T3)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T0))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ 
                                        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                            ? 0U : 
                                           (0xfU & 
                                            ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr) 
                                             - (IData)(1U))));
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4698__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4698__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4699__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4699__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 1U;
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_ = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__4700__PROF__Q_srl__l202(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__4700__PROF__Q_srl__l202\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[3U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[4U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[5U];
        } else {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[0U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[1U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[2U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[3U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[4U];
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__T2[5U];
                } else {
                    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                               & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                    } else {
                        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state))) {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full) {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                            = ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                            = ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                            = ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                            = ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                            = ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][4U]
                                : 0U);
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                            = ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                                ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                               [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][5U]
                                : 0U);
                    } else {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                    }
                } else {
                    if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4)))) {
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                    } else {
                        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5) 
                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                            if ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][4U];
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                    [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][5U];
                            } else {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                            }
                        } else {
                            if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                       & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))))) {
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                            } else {
                                if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T5)) 
                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T4))) {
                                    if ((0xeU >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr))) {
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][0U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][1U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][2U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][3U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][4U];
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] 
                                            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl
                                            [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr][5U];
                                    } else {
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                                        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[4U] = 0U;
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[5U] = 0U;
            }
        }
    }
}
