// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTesterWrapper.h for the primary calling header

#include "VTesterWrapper.h"
#include "VTesterWrapper__Syms.h"

//==========

VerilatedContext* VTesterWrapper::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void VTesterWrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTesterWrapper::eval\n"); );
    VTesterWrapper__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("TesterWrapper.v", 11622, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTesterWrapper::_eval_initial_loop(VTesterWrapper__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("TesterWrapper.v", 11622, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__43__PROF__TesterWrapper__l2375(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__43__PROF__TesterWrapper__l2375\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__T2[0U] = 5U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__T2[1U] = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__T2[2U] 
        = (0xffffff80U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U]);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__T2[3U] 
        = ((0xf800000U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U]) 
           | ((0x7fff80U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U]) 
              | (0x7fU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U])));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__44__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l454(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__44__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l454\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__addr_lhsAddr_V_1_fu_244_p2 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ExecAddr_lhsAddr_V_read_assign_reg_88)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__45__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l456(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__45__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l456\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__addr_rhsAddr_V_1_fu_250_p2 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ExecAddr_rhsAddr_V_read_assign_reg_79)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__46__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l504(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__46__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l504\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__i_V_fu_177_p2 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__p_s_reg_97)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__47__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1469(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__47__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1469\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__p_1_fu_1434_p3 
        = ((2U == (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__offset_res_reg2mem_0_fu_162))))
            ? 0U : (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__offset_res_reg2mem_0_fu_162))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__48__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1571(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__48__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1571\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_24_fu_914_p2 
        = ((0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_region_fu_158))) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_num_regions_reg_1619));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__49__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1573(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__49__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1573\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_25_fu_1071_p2 
        = ((0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rmem_region_reg2mem_0_fu_150))) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_num_regions_reg_1619));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__50__PROF__TesterWrapper__l4226(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__50__PROF__TesterWrapper__l4226\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[3U];
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__51__PROF__TesterWrapper__l4755(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__51__PROF__TesterWrapper__l4755\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[3U];
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__52__PROF__TesterWrapper__l5272(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__52__PROF__TesterWrapper__l5272\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[3U];
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__53__PROF__TesterWrapper__l7227(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__53__PROF__TesterWrapper__l7227\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T3 
        = (((QData)((IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                             >> 0x20U))) << 9U) | (QData)((IData)(
                                                                  (0x1feU 
                                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo) 
                                                                      << 1U)))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__54__PROF__Q_srl__l155(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__54__PROF__Q_srl__l155\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT____Vcellout__Q_srl__count 
        = (7U & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                  ? ((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                  : ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                      ? 1U : 0U)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__55__PROF__Q_srl__l155(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__55__PROF__Q_srl__l155\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT____Vcellout__Q_srl__count 
        = (7U & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                  ? ((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                  : ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                      ? 1U : 0U)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__56__PROF__Q_srl__l155(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__56__PROF__Q_srl__l155\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT____Vcellout__Q_srl__count 
        = (7U & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                  ? ((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                  : ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                      ? 1U : 0U)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__57__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l544(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__57__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l544\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__p_Result_s_fu_227_p8 
        = (((QData)((IData)((3U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__tmp_V_1_reg_260[3U] 
                                   >> 0x1aU)))) << 0x28U) 
           | (((QData)((IData)(((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__p_s_reg_97)) 
                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__lhs_V_2_reg_275)))) 
               << 0x23U) | (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__addr_negate_V_reg_280)) 
                             << 0x22U) | (((QData)((IData)(
                                                           ((0U 
                                                             == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__p_s_reg_97)) 
                                                            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__lhs_V_1_reg_285)))) 
                                           << 0x21U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               == 
                                                               (0x1ffffU 
                                                                & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__lhs_V_reg_295 
                                                                   - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__p_s_reg_97)))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ExecAddr_rhsAddr_V_read_assign_reg_79) 
                                                                 << 0x10U) 
                                                                | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ExecAddr_lhsAddr_V_read_assign_reg_88)))))))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__58__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1541(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__58__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1541\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_11_fu_598_p2 
        = (0x3ffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_8_cast1_reg_1631) 
                     - VL_EXTENDS_II(10,8, (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__j_1_fu_126))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__59__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l904(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__59__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l904\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_13_fu_452_p2 
        = ((0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__rmem_region_reg2mem_reg_131))) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_num_regions_reg_711));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__60__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1425(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__60__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1425\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_region_offset_1_fu_1325_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_24_reg_1835)
            ? 0U : (0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_region_size_reg_1625) 
                               + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_region_offset_fu_154))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__61__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1473(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__61__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1473\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__p_3_fu_1345_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_25_reg_1845)
            ? 0U : (0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_region_size_reg_1625) 
                               + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rmem_region_offset_reg2mem_0_fu_146))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__62__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1539(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__62__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1539\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp4_fu_621_p2 
        = (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__j_1_fu_126)) 
                     + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_9_cast1_reg_1636)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__63__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1371(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__63__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1371\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_266_p2 
        = ((0xffffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_reg2mem_0_fu_142))) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_tiles_m_reg_1500));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__64__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1597(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__64__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1597\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_34_fu_936_p2 
        = VL_LTS_III(1,9,9, (0x1ffU & VL_EXTENDS_II(9,8, 
                                                    (0xffU 
                                                     & ((IData)(0xffU) 
                                                        + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__j_1_fu_126))))), (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_1_fu_134));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__65__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1609(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__65__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1609\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_42_fu_779_p2 
        = VL_LTS_III(1,9,9, (0x1ffU & VL_EXTENDS_II(9,8, 
                                                    (0xffU 
                                                     & ((IData)(0xffU) 
                                                        + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__j_1_fu_126))))), (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_1_fu_134));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__66__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1629(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__66__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1629\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_50_fu_1092_p2 
        = VL_LTS_III(1,9,9, (0x1ffU & VL_EXTENDS_II(9,8, 
                                                    (0xffU 
                                                     & ((IData)(0xffU) 
                                                        + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__j_1_fu_126))))), (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_1_fu_134));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__67__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1277(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__67__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1277\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op328_write_state6 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__68__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1281(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__68__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1281\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op329_write_state6 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__69__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1261(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__69__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1261\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op283_write_state5 
        = (1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763)) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__70__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1265(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__70__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1265\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op284_write_state5 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_first_reg_1763) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_reg_1777)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__71__PROF__TesterWrapper__l5966(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__71__PROF__TesterWrapper__l5966\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T6 
        = ((3U > (3U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U])) 
           & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg) 
              & ((2U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U])
                  ? (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))
                  : ((1U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U])
                      ? (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))
                      : (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__72__PROF__Q_srl__l155(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__72__PROF__Q_srl__l155\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl_count 
        = (0xfU & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                    : ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                        ? 1U : 0U)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__73__PROF__Q_srl__l155(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__73__PROF__Q_srl__l155\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl_count 
        = (0xfU & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                    : ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                        ? 1U : 0U)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__74__PROF__Q_srl__l155(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__74__PROF__Q_srl__l155\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl_count 
        = (0xfU & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                    : ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                        ? 1U : 0U)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__75__PROF__Q_srl__l155(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__75__PROF__Q_srl__l155\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl_count 
        = (0xfU & ((2U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                    ? ((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr))
                    : ((1U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state))
                        ? 1U : 0U)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__76__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l502(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__76__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l502\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__exitcond_fu_172_p2 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ExecAddr_rhsAddr_V_read_assign_reg_79) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__tmp_reg_290));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__77__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1485(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__77__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1485\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_first_fu_654_p2 
        = ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_reg2mem_0_fu_142)) 
           & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__78__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l914(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__78__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l914\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_17_fu_487_p2 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_reg2mem_1_reg_201) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_num_regions_reg_711));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__79__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l916(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__79__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l916\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_18_fu_506_p2 
        = ((0xffffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_reg2mem_1_reg_231))) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_tiles_m_reg_638));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__80__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l658(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__80__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l658\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_8_fu_191_p2 
        = ((0xffffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__m_reg2mem_reg_92))) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ins_in_tiles_m_reg_331));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__81__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1513(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__81__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1513\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_fu_643_p2 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138) 
           == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_3_reg_1641));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__82__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1355(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__82__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1355\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_222_p2 
        = ((0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))) 
           < (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_bits_r_reg_1592));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__83__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1359(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__83__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1359\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_232_p2 
        = (0xffU & (((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138)) 
                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_bits_r_reg_1592)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__84__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l792(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__84__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l792\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_predicate_op114_write_state12 
        = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_20_reg_798) 
            & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_1_reg_785))) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_9_reg_739)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__85__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l796(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__85__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l796\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_predicate_op115_write_state12 
        = (((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_1_reg_785)) 
            & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_20_reg_798)) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_9_reg_739)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__86__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1293(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__86__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1293\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op356_write_state9 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781) 
           & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__87__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1301(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__87__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1301\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_predicate_op365_write_state11 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_reg_1781) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_reg_1770));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__88__PROF__TesterWrapper__l4093(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__88__PROF__TesterWrapper__l4093\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__89__PROF__TesterWrapper__l3885(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__89__PROF__TesterWrapper__l3885\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__90__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1365(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__90__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1365\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_247_p3 
        = (((0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))) 
            < (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_bits_l_reg_1519))
            ? 0U : (0xffU & (((IData)(2U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138)) 
                             - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ins_in_bits_l_reg_1519))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__91__PROF__TesterWrapper__l3616(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__91__PROF__TesterWrapper__l3616\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__100__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1421(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__100__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1421\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_region_1_fu_919_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_24_fu_914_p2)
            ? 0U : (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__lmem_region_fu_158))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__101__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1471(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__101__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1471\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__p_2_fu_1076_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_25_fu_1071_p2)
            ? 0U : (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rmem_region_reg2mem_0_fu_150))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__102__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1347(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__102__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1347\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_202_p2 
        = ((VL_EXTENDS_II(32,9, (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp4_fu_621_p2)) 
            + (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))) 
           == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_32_cast_reg_1651);
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__103__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1497(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__103__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1497\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp_fu_967_p2 
        = (((0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))) 
            == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_9_reg_1656)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_34_fu_936_p2));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__104__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1493(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__104__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1493\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp1_fu_810_p2 
        = (((0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))) 
            == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_9_reg_1656)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_42_fu_779_p2));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__105__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1495(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__105__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1495\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp2_fu_1123_p2 
        = (((0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))) 
            == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_9_reg_1656)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_50_fu_1092_p2));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__106__PROF__TesterWrapper__l5962(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__106__PROF__TesterWrapper__l5962\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T2 
        = (0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T6) 
                   & ((IData)(1U) << (3U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U]))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__107__PROF__TesterWrapper__l5975(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__107__PROF__TesterWrapper__l5975\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T12 
        = (7U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T6) 
                 & (((IData)(1U) << (3U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U])) 
                    >> 1U)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__108__PROF__TesterWrapper__l5979(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__108__PROF__TesterWrapper__l5979\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T14 
        = (3U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T6) 
                 & (((IData)(1U) << (3U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U])) 
                    >> 2U)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__109__PROF__TesterWrapper__l5982(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__109__PROF__TesterWrapper__l5982\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T16 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T6) 
           | (3U <= (3U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U])));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__110__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1487(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__110__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1487\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_fu_669_p2 
        = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_reg2mem_0_fu_142) 
            == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_4_reg_1646) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_fu_643_p2));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__111__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__111__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_255_p2 
        = (0xffU & (((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138)) 
                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_247_p3)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__112__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1431(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__112__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1431\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_1_fu_973_p3 
        = (0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp_fu_967_p2)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_266_p2)
                           ? 0U : ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_reg2mem_0_fu_142)))
                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_reg2mem_0_fu_142)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__113__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1501(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__113__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1501\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_2_fu_989_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp_fu_967_p2)
            ? 0U : (0xffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_34_fu_936_p2)
                              ? ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))
                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__114__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1671(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__114__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1671\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_3_fu_1005_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp_fu_967_p2)
            ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_reg_1598)
            : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_34_fu_936_p2)
                ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_222_p2)
                    ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_232_p2))
                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_1_fu_134)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__115__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1691(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__115__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1691\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z2_3_fu_1020_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp_fu_967_p2)
            ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z2_reg_1605)
            : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_34_fu_936_p2)
                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_247_p3)
                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z2_1_fu_130)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__116__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1433(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__116__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1433\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_3_fu_816_p3 
        = (0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp1_fu_810_p2)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_266_p2)
                           ? 0U : ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_reg2mem_0_fu_142)))
                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_reg2mem_0_fu_142)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__117__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1505(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__117__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1505\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_5_fu_832_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp1_fu_810_p2)
            ? 0U : (0xffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_42_fu_779_p2)
                              ? ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))
                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__118__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1677(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__118__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1677\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_6_fu_848_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp1_fu_810_p2)
            ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_reg_1598)
            : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_42_fu_779_p2)
                ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_222_p2)
                    ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_232_p2))
                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_1_fu_134)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__119__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1695(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__119__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1695\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z2_6_fu_863_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp1_fu_810_p2)
            ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z2_reg_1605)
            : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_42_fu_779_p2)
                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_247_p3)
                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z2_1_fu_130)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__120__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1435(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__120__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1435\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_5_fu_1129_p3 
        = (0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp2_fu_1123_p2)
                       ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_266_p2)
                           ? 0U : ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_reg2mem_0_fu_142)))
                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__m_reg2mem_0_fu_142)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__121__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1509(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__121__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1509\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_8_fu_1145_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp2_fu_1123_p2)
            ? 0U : (0xffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_50_fu_1092_p2)
                              ? ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))
                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__slice_reg2mem_0_fu_138))));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__122__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1683(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__122__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1683\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_9_fu_1161_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp2_fu_1123_p2)
            ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_reg_1598)
            : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_50_fu_1092_p2)
                ? ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_222_p2)
                    ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_232_p2))
                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z1_1_fu_134)));
}

VL_INLINE_OPT void VTesterWrapper::_settle__TOP__123__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1699(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__123__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l1699\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z2_9_fu_1176_p3 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__sel_tmp2_fu_1123_p2)
            ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z2_reg_1605)
            : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_50_fu_1092_p2)
                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__grp_fu_247_p3)
                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__z2_1_fu_130)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1272__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1272__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1273__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1273__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1274__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1274__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1275__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1275__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1276__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1276__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1277__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1277__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1278__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1278__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1279__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1279__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1280__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1280__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1324__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1324__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1325__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1325__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1326__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1326__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1327__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1327__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1329__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1329__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1330__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1330__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1358__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1358__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1359__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1359__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1517__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1517__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_26__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1518__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1518__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_25__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1519__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1519__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_24__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1520__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1520__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_23__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1521__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1521__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_22__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1522__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1522__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_21__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1523__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1523__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_20__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1524__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1524__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_19__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1525__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1525__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_18__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1526__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1526__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_13__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1527__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1527__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_12__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1528__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1528__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_11__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1529__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1529__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_10__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1530__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1530__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_9__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1531__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1531__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_8__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1532__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1532__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_7__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1533__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1533__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_6__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1534__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1534__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_5__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1535__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1535__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_4__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1536__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1536__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_3__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1537__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1537__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_2__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1538__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1538__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1559__PROF__TesterWrapper__l5801(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1559__PROF__TesterWrapper__l5801\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1560__PROF__TesterWrapper__l5801(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1560__PROF__TesterWrapper__l5801\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1561__PROF__TesterWrapper__l5801(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1561__PROF__TesterWrapper__l5801\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1562__PROF__TesterWrapper__l5801(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1562__PROF__TesterWrapper__l5801\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1570__PROF__ResultInstrGen__l167(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1570__PROF__ResultInstrGen__l167\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1571__PROF__ExecInstrGen__l167(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1571__PROF__ExecInstrGen__l167\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1572__PROF__FetchInstrGen__l167(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1572__PROF__FetchInstrGen__l167\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1576__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l197(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1576__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l197\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1579__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l293(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1579__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l293\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1580__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1580__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_14__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1581__PROF__ResultInstrGen__l141(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1581__PROF__ResultInstrGen__l141\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1582__PROF__ExecInstrGen__l141(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1582__PROF__ExecInstrGen__l141\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1583__PROF__FetchInstrGen__l141(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1583__PROF__FetchInstrGen__l141\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1584__PROF__ResultInstrGen__l131(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1584__PROF__ResultInstrGen__l131\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1585__PROF__ExecInstrGen__l131(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1585__PROF__ExecInstrGen__l131\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1586__PROF__FetchInstrGen__l131(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1586__PROF__FetchInstrGen__l131\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1593__PROF__ExecAddrGen__l167(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1593__PROF__ExecAddrGen__l167\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1594__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l339(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1594__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l339\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1595__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l243(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1595__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l243\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1600__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l329(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1600__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l329\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1603__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l233(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1603__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l233\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1604__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l215(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1604__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l215\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1607__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l311(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1607__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l311\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1609__PROF__ResultInstrGen__l149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1609__PROF__ResultInstrGen__l149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1610__PROF__ExecInstrGen__l149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1610__PROF__ExecInstrGen__l149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1611__PROF__FetchInstrGen__l149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1611__PROF__FetchInstrGen__l149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1615__PROF__ResultInstrGen__l185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1615__PROF__ResultInstrGen__l185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1616__PROF__FetchInstrGen__l185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1616__PROF__FetchInstrGen__l185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1617__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l207(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1617__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l207\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1618__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l303(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1618__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l303\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1619__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l347(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1619__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l347\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1620__PROF__ResultInstrGen__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1620__PROF__ResultInstrGen__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1621__PROF__ExecAddrGen__l131(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1621__PROF__ExecAddrGen__l131\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1622__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1622__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1623__PROF__FetchInstrGen__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1623__PROF__FetchInstrGen__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1624__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l251(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1624__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l251\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1626__PROF__ExecAddrGen__l185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1626__PROF__ExecAddrGen__l185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1631__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1631__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1632__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1632__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1633__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1633__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1634__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1634__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1635__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1635__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1636__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1636__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1637__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1637__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1638__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1638__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1639__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1639__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1640__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1640__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1641__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1641__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1642__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1642__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1643__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1643__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1644__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1644__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1645__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1645__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1646__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1646__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1647__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1647__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1648__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1648__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1649__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1649__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1650__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1650__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1651__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1651__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1652__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1652__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1653__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1653__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1654__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1654__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1655__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l236(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1655__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l236\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1657__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l208(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1657__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l208\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1664__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l226(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1664__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l226\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1666__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1666__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1667__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1667__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1670__PROF__ExecAddrGen__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1670__PROF__ExecAddrGen__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1671__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l244(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1671__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l244\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1673__PROF__ExecAddrGen__l141(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1673__PROF__ExecAddrGen__l141\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1674__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l200(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1674__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l200\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1679__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l270(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1679__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l270\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__i_1_reg2mem_reg_115 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__i_1_reg2mem_reg_115;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1681__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l280(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1681__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l280\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__m_reg2mem_reg_92 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__m_reg2mem_reg_92;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1685__PROF__ExecAddrGen__l149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1685__PROF__ExecAddrGen__l149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1687__PROF__DualPortBRAM__l42(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1687__PROF__DualPortBRAM__l42\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1688__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1688__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1697__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l360(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1697__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l360\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__p_s_reg_396 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__p_s_reg_396;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1700__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l552(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1700__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l552\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_s_reg_753 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_s_reg_753;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1702__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l586(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1702__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l586\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1705__PROF__DualPortBRAM__l42(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1705__PROF__DualPortBRAM__l42\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1706__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1706__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1716__PROF__TesterWrapper__l2647(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1716__PROF__TesterWrapper__l2647\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1717__PROF__TesterWrapper__l11618(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1717__PROF__TesterWrapper__l11618\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_16__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1720__PROF__DualPortBRAM__l42(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1720__PROF__DualPortBRAM__l42\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1721__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1721__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1725__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1725__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1726__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1726__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1727__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1727__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1732__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l486(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1732__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l486\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_s_reg_802 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_s_reg_802;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1733__PROF__ExecInstrGen__l185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1733__PROF__ExecInstrGen__l185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1737__PROF__DualPortBRAM__l42(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1737__PROF__DualPortBRAM__l42\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1738__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1738__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1739__PROF__ExecInstrGen__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1739__PROF__ExecInstrGen__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1744__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l568(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1744__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l568\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1745__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l406(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1745__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l406\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_reg2mem_1_reg_201 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_reg2mem_1_reg_201;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1746__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1746__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1747__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1747__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1748__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1748__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1749__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l578(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1749__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l578\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1761__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l551(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1761__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l551\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_3_reg_758 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_3_reg_758;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1762__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l614(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1762__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l614\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1763__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l604(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1763__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l604\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_sel_rd 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_sel_rd;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1773__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1773__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1775__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l290(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1775__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l290\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__n_reg2mem_reg_104 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__n_reg2mem_reg_104;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1776__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1776__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1781__PROF__DualPortBRAM__l33(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1781__PROF__DualPortBRAM__l33\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1782__PROF__Q_srl__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1782__PROF__Q_srl__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1784__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l426(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1784__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l426\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_reg2mem_1_reg_231 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_reg2mem_1_reg_231;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1785__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l622(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1785__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l622\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1789__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l446(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1789__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l446\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__n_reg2mem_1_reg_221 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__n_reg2mem_1_reg_221;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1791__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l386(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1791__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l386\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_offset_reg2mem_1_reg_211 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_offset_reg2mem_1_reg_211;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1810__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1810__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1811__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1811__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1812__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1812__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1813__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1813__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1814__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1814__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1815__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1815__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1816__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1816__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v6 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1817__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1817__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v7 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1818__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1818__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v8 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1819__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1819__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v9 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1820__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1820__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v10 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1821__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1821__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v11 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1822__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1822__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v12 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1823__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1823__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v13 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1825__PROF__FetchInstrGen__l119(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1825__PROF__FetchInstrGen__l119\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1839__PROF__TesterWrapper__l12969(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1839__PROF__TesterWrapper__l12969\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1840__PROF__TesterWrapper__l12978(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1840__PROF__TesterWrapper__l12978\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__mem__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1907__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1907__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1908__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1908__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1909__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1909__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1910__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1910__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1911__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1911__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1912__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1912__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1913__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1913__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1914__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1914__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v6 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1915__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1915__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v7 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1916__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1916__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v8 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1917__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1917__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v9 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1918__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1918__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v10 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1919__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1919__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v11 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1920__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1920__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v12 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1921__PROF__Q_srl__l196(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1921__PROF__Q_srl__l196\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v13 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1922__PROF__TesterWrapper__l11390(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1922__PROF__TesterWrapper__l11390\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_17__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1923__PROF__TesterWrapper__l11488(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1923__PROF__TesterWrapper__l11488\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_15__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1924__PROF__TesterWrapper__l9454(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1924__PROF__TesterWrapper__l9454\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1933__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l648(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1933__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l648\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__j_1_fu_126 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__j_1_fu_126;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1943__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1943__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1944__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1944__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1945__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1945__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1946__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1946__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1947__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1947__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1948__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1948__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1949__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1949__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1950__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1950__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1951__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1951__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1952__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1952__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1953__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1953__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1954__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1954__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1955__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1955__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1956__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1956__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1957__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1957__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1958__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1958__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1959__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1959__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1960__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1960__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1961__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1961__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1962__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1962__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1963__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1963__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1964__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1964__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1965__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1965__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1966__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1966__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1967__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1967__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1968__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1968__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1969__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1969__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__a_ = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1970__PROF__TesterWrapper__l10831(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1970__PROF__TesterWrapper__l10831\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_read 
        = vlTOPp->io_regFileIF_cmd_bits_read;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1971__PROF__TesterWrapper__l10831(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1971__PROF__TesterWrapper__l10831\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_write 
        = vlTOPp->io_regFileIF_cmd_bits_write;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1972__PROF__TesterWrapper__l1270(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1972__PROF__TesterWrapper__l1270\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__lhs_range = 1U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1973__PROF__TesterWrapper__l1270(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1973__PROF__TesterWrapper__l1270\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__rhs_range = 1U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1974__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1974__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T2) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regStep = 8U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1975__PROF__TesterWrapper__l6507(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1975__PROF__TesterWrapper__l6507\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__regMax = 7U;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1976__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1976__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1977__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1977__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1978__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1978__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1979__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1979__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1980__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1980__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T2;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1981__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1981__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T62[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T62[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T62[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T62[3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1982__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1982__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1983__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1983__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1984__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1984__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__T2[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1985__PROF__TesterWrapper__l12925(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1985__PROF__TesterWrapper__l12925\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__regWrapperReset = 0U;
    } else {
        if ((((IData)(vlTOPp->io_regFileIF_cmd_valid) 
              & (IData)(vlTOPp->io_regFileIF_cmd_bits_write)) 
             & (0U == (IData)(vlTOPp->io_regFileIF_cmd_bits_regID)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__regWrapperReset 
                = (1U & vlTOPp->io_regFileIF_cmd_bits_writeData);
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1986__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1986__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_b_popcountResult 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__R0;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1987__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1987__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_b_popcountResult 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__R0;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1988__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1988__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_b_popcountResult 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__R0;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1989__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1989__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_b_popcountResult 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__R0;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1990__PROF__TesterWrapper__l10831(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1990__PROF__TesterWrapper__l10831\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regDoCmd 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->io_regFileIF_cmd_valid));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1991__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1991__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep 
        = (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T0);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1992__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1992__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep 
        = (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T0);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1993__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1993__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep 
        = (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T0);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1994__PROF__TesterWrapper__l12925(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1994__PROF__TesterWrapper__l12925\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__R89 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__T44) {
            vlTOPp->VerilatedTesterWrapper__DOT__R89 
                = ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U] 
                    << 6U) | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                              >> 0x1aU));
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__T39) {
                vlTOPp->VerilatedTesterWrapper__DOT__R89 
                    = ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U] 
                        << 6U) | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                  >> 0x1aU));
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__T28) {
                    vlTOPp->VerilatedTesterWrapper__DOT__R89 
                        = ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U] 
                            << 6U) | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                      >> 0x1aU));
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1995__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1995__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regStep 
        = (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T0);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1996__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1996__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R0 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R3;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1997__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1997__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R1 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R4;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1998__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1998__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R0 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R9;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__1999__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__1999__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R1 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R10;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2000__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2000__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R0 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R15;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2001__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2001__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R1 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R16;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2002__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2002__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R0 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R21;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2003__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2003__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R1 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R22;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2004__PROF__TesterWrapper__l12925(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2004__PROF__TesterWrapper__l12925\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__T5) {
            vlTOPp->VerilatedTesterWrapper__DOT__R1 = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__T4) {
                vlTOPp->VerilatedTesterWrapper__DOT__R1 = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2005__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2005__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2006__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2006__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2007__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2007__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2008__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2008__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2009__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2009__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2010__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2010__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2011__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2011__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2012__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2012__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2013__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2013__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2014__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2014__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2015__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2015__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2016__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2016__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2017__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2017__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2018__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2018__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2019__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2019__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2020__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2020__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2021__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2021__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2022__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2022__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2023__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2023__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2024__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2024__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2025__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2025__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2026__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2026__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2027__PROF__TesterWrapper__l12925(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2027__PROF__TesterWrapper__l12925\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__R7 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__T12) {
            vlTOPp->VerilatedTesterWrapper__DOT__R7 
                = vlTOPp->VerilatedTesterWrapper__DOT__T11;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__T4) {
                vlTOPp->VerilatedTesterWrapper__DOT__R7 
                    = (0xffU & ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[1U] 
                                 << 0x1fU) | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[0U] 
                                              >> 1U)));
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2028__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2028__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 1U;
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 
            = (0x60000000000ULL | vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__T3);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2029__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2029__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U][0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U][1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U][2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U][3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U][4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U][5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U][6U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[3U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[4U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[5U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[6U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U][6U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[3U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[4U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[5U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1[6U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 1U;
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T55[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T55[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T55[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T55[3U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T55[4U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__T55[5U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2[6U] 
            = (0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__T55[6U]);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2030__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2030__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2031__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2031__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 1U;
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 
            = vlTOPp->VerilatedTesterWrapper__DOT__T72;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2032__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2032__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2033__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2033__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2034__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2034__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2035__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2035__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2036__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2036__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2037__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2037__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2038__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2038__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2039__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2039__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2040__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2040__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2041__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2041__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2042__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2042__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2043__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2043__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2044__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2044__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2045__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2045__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2046__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2046__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2047__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2047__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2048__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2048__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2049__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2049__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2050__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2050__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2051__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2051__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2052__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2052__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2053__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2053__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2054__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2054__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2055__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2055__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2056__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2056__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2057__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2057__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2058__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2058__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2059__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2059__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 1U;
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T147;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2060__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2060__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2061__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2061__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2062__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2062__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2063__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2063__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2064__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2064__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2065__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2065__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2066__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2066__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2067__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2067__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2068__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2068__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2069__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2069__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2070__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2070__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2071__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2071__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2072__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2072__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2073__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2073__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2074__PROF__TesterWrapper__l12925(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2074__PROF__TesterWrapper__l12925\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__R82 = 0ULL;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__T44) {
            vlTOPp->VerilatedTesterWrapper__DOT__R82 
                = (0xffffffffffffULL & (((QData)((IData)(
                                                         vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U])) 
                                              >> 9U))));
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__T41) {
                vlTOPp->VerilatedTesterWrapper__DOT__R82 
                    = vlTOPp->VerilatedTesterWrapper__DOT__T88;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__T39) {
                    vlTOPp->VerilatedTesterWrapper__DOT__R82 
                        = (0xffffffffffffULL & (((QData)((IData)(
                                                                 vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U])) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U])) 
                                                      >> 9U))));
                } else {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__T28) {
                        vlTOPp->VerilatedTesterWrapper__DOT__R82 
                            = (0xffffffffffffULL & 
                               (((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U])) 
                                 << 0x37U) | (((QData)((IData)(
                                                               vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U])) 
                                                 >> 9U))));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2075__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2075__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2076__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2076__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2077__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2077__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2078__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2078__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2079__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2079__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2080__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2080__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2081__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2081__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2082__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2082__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2083__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2083__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2084__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2084__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2085__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2085__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2086__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2086__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2087__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2087__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2088__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2088__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2089__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2089__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2090__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2090__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2091__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2091__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2092__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2092__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2093__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2093__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2094__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2094__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2095__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2095__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2096__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2096__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2097__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2097__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U];
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2098__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2098__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U];
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2099__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2099__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] = 0U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[0U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[1U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[2U];
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_[3U];
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2100__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2100__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2101__PROF__TesterWrapper__l7646(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2101__PROF__TesterWrapper__l7646\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T1) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_waitCompleteBytes 
            = ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                << 0x1fU) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                             >> 1U));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2102__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2102__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2103__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2103__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2104__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2104__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2105__PROF__TesterWrapper__l6507(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2105__PROF__TesterWrapper__l6507\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__regCount = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T136) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__regCount 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__T2;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2106__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2106__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2107__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2107__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo = 0ULL;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2108__PROF__TesterWrapper__l11601(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2108__PROF__TesterWrapper__l11601\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq) 
             != (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty))))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2109__PROF__TesterWrapper__l1270(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2109__PROF__TesterWrapper__l1270\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regWaitInterconnect = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T35) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regWaitInterconnect 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T34;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regWaitInterconnect = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2110__PROF__TesterWrapper__l1270(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2110__PROF__TesterWrapper__l1270\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesReceived = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T25) 
             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T16)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesReceived 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T22;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T15) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesReceived = 0U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesReceived = 0U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2111__PROF__TesterWrapper__l612(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2111__PROF__TesterWrapper__l612\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMRange = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMRange 
                = (3U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__sel_idrange));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2112__PROF__TesterWrapper__l612(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2112__PROF__TesterWrapper__l612\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddrBase 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (0x3ffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T8)
                               ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T11)
                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T10))));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2113__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2113__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2114__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2114__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2115__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2115__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2116__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2116__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2117__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2117__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2118__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2118__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2119__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2119__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2120__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2120__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2121__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2121__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2122__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2122__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2123__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2123__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2124__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2124__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2125__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2125__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2126__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2126__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2127__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2127__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2128__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2128__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2129__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2129__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2130__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2130__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2131__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2131__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2132__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2132__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2133__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2133__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2134__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2134__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2135__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2135__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2136__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2136__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2137__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2137__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2138__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2138__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2139__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2139__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T24) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T34;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T15) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T33;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2140__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2140__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T24) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T34;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T15) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T33;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2141__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2141__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T24) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T34;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T15) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T33;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2142__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2142__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2143__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2143__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T24) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T34;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T15) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T33;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T3) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2144__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2144__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2145__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2145__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2146__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2146__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2147__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2147__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2148__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2148__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2149__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2149__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2150__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2150__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2151__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2151__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2152__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2152__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2153__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2153__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2154__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2154__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2155__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2155__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2156__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2156__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2157__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2157__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2158__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2158__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2159__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2159__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2160__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2160__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2161__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2161__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2162__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2162__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2163__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2163__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2164__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2164__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2165__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2165__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2166__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2166__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2167__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2167__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2168__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2168__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2169__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2169__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2170__PROF__TesterWrapper__l5567(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2170__PROF__TesterWrapper__l5567\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_deq));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2171__PROF__TesterWrapper__l5107(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2171__PROF__TesterWrapper__l5107\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_deq));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2172__PROF__TesterWrapper__l4578(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2172__PROF__TesterWrapper__l4578\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_deq));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2173__PROF__TesterWrapper__l1270(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2173__PROF__TesterWrapper__l1270\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlocksReceived = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T15) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlocksReceived 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T14;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlocksReceived = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2174__PROF__TesterWrapper__l2957(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2174__PROF__TesterWrapper__l2957\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2175__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2175__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2176__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2176__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2177__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2177__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2178__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2178__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2179__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2179__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2180__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2180__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2181__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2181__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2182__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2182__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2183__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2183__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2184__PROF__ResultInstrGen__l219(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2184__PROF__ResultInstrGen__l219\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_out[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2185__PROF__ResultInstrGen__l213(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2185__PROF__ResultInstrGen__l213\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_out[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2186__PROF__ExecInstrGen__l219(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2186__PROF__ExecInstrGen__l219\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_out[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2187__PROF__ExecInstrGen__l213(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2187__PROF__ExecInstrGen__l213\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_out[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2188__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2188__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2189__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2189__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2190__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2190__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2191__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2191__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2192__PROF__TesterWrapper__l5797(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2192__PROF__TesterWrapper__l5797\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__R3 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                         >> 0x29U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2193__PROF__TesterWrapper__l5797(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2193__PROF__TesterWrapper__l5797\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__R3 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                         >> 0x29U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2194__PROF__TesterWrapper__l5797(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2194__PROF__TesterWrapper__l5797\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__R3 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                         >> 0x29U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2195__PROF__TesterWrapper__l5797(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2195__PROF__TesterWrapper__l5797\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__R3 
        = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                         >> 0x29U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2196__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2196__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2197__PROF__TesterWrapper__l612(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2197__PROF__TesterWrapper__l612\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMTarget = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T8) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMTarget 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T19;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMTarget = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2198__PROF__FetchInstrGen__l219(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2198__PROF__FetchInstrGen__l219\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_out[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2199__PROF__FetchInstrGen__l213(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2199__PROF__FetchInstrGen__l213\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_out[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2200__PROF__Q_srl__l177(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2200__PROF__Q_srl__l177\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo = 0ULL;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_o_) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo_;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2201__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l330(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2201__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l330\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_B[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2202__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l324(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2202__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l324\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_payload_A[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_data_out[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2203__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l531(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2203__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l531\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_B[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2204__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l525(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2204__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l525\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_payload_A[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_data_out[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2205__PROF__TesterWrapper__l612(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2205__PROF__TesterWrapper__l612\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddr = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T8) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddr 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T3;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddr = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2206__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2206__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2207__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2207__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2208__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2208__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2209__PROF__TesterWrapper__l7646(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2209__PROF__TesterWrapper__l7646\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T1) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_signed 
            = (1U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U]);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2210__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2210__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2211__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2211__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2212__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2212__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2213__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2213__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
            ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2214__PROF__TesterWrapper__l6507(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2214__PROF__TesterWrapper__l6507\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T145) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__T2;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2215__PROF__ExecAddrGen__l219(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2215__PROF__ExecAddrGen__l219\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_payload_B 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_data_out;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2216__PROF__ExecAddrGen__l213(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2216__PROF__ExecAddrGen__l213\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_payload_A 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_data_out;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2217__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2217__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_26__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_26__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_26__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_26__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_26__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2218__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2218__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_25__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_25__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_25__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_25__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_25__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2219__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2219__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_24__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_24__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_24__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_24__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_24__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2220__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2220__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_23__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_23__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_23__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_23__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_23__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2221__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2221__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_22__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_22__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_22__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_22__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_22__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2222__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2222__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_21__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_21__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_21__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_21__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_21__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2223__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2223__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_20__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_20__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_20__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_20__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_20__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2224__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2224__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_19__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_19__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_19__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_19__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_19__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2225__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2225__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_18__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_18__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_18__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_18__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_18__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2226__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2226__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_13__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_13__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_13__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_13__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_13__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2227__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2227__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_12__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_12__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_12__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_12__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_12__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2228__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2228__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_11__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_11__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_11__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_11__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_11__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2229__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2229__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_10__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_10__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_10__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_10__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_10__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2230__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2230__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_9__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_9__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_9__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_9__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_9__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2231__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2231__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_8__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_8__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_8__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_8__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_8__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2232__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2232__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_7__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_7__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_7__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_7__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_7__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2233__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2233__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_6__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_6__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_6__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_6__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_6__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2234__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2234__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_5__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_5__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_5__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_5__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_5__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2235__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2235__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_4__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_4__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_4__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_4__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_4__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2236__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2236__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_3__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_3__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_3__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_3__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_3__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2237__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2237__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_2__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_2__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_2__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_2__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_2__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2238__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2238__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_1__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_1__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_1__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_1__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_1__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2239__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l352(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2239__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l352\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2240__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l346(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2240__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l346\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_data_in[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2241__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l543(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2241__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l543\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2242__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l537(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2242__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l537\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_data_in[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2243__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2243__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_b_acc_shift 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R16;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2244__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2244__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_b_clear 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R20;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2245__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2245__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_b_acc_shift 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R16;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2246__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2246__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_b_clear 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R20;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2247__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2247__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_b_acc_shift 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R16;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2248__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2248__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_b_clear 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R20;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2249__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2249__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_b_acc_shift 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R16;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2250__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2250__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_b_clear 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R20;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2251__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2251__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regMaxCount = 2U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2252__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2252__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T2) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regMaxCount 
            = (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T22);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2253__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2253__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T6) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T2) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2254__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2254__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T6) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2255__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2255__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T15) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regCounter 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T11;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T2) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regCounter = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2256__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2256__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T15) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regCounter 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T11;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regCounter = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2257__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2257__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T15) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regCounter 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T11;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regCounter = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2258__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2258__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T15) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regCounter 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T11;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regCounter = 0U;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2259__PROF__TesterWrapper__l5797(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2259__PROF__TesterWrapper__l5797\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                       >> 0x28U)))) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regAcc;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 
            = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                             >> 0x29U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2260__PROF__TesterWrapper__l5797(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2260__PROF__TesterWrapper__l5797\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                       >> 0x28U)))) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regAcc;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 
            = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                             >> 0x29U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2261__PROF__TesterWrapper__l5797(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2261__PROF__TesterWrapper__l5797\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                       >> 0x28U)))) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regAcc;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 
            = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                             >> 0x29U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2262__PROF__TesterWrapper__l5797(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2262__PROF__TesterWrapper__l5797\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                       >> 0x28U)))) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regAcc;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__mem__v0 
            = (1U & (IData)((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
                             >> 0x29U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2263__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2263__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_b_neg 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R8;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2264__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2264__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_b_neg 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R8;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2265__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2265__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_b_neg 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R8;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2266__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2266__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_b_neg 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R8;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2267__PROF__TesterWrapper__l11601(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2267__PROF__TesterWrapper__l11601\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty)))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2268__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2268__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T6) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2269__PROF__TesterWrapper__l7058(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2269__PROF__TesterWrapper__l7058\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T145) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__limitReached))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState = 0U;
        } else {
            if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T136) 
                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__limitReached)))) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState = 0U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T136) 
                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__limitReached))) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2270__PROF__ResultInstrGen__l165(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2270__PROF__ResultInstrGen__l165\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T5) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2271__PROF__ExecInstrGen__l165(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2271__PROF__ExecInstrGen__l165\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T5) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2272__PROF__FetchInstrGen__l165(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2272__PROF__FetchInstrGen__l165\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T5) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2273__PROF__ExecAddrGen__l207(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2273__PROF__ExecAddrGen__l207\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp278[7];
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_wr))) {
        VL_EXTEND_WW(208,124, __Vtemp278, vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__T2);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_payload_B[0U] 
            = __Vtemp278[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_payload_B[1U] 
            = __Vtemp278[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_payload_B[2U] 
            = __Vtemp278[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_payload_B[3U] 
            = __Vtemp278[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2274__PROF__ExecAddrGen__l201(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2274__PROF__ExecAddrGen__l201\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp280[7];
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_wr)))) {
        VL_EXTEND_WW(208,124, __Vtemp280, vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__T2);
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_payload_A[0U] 
            = __Vtemp280[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_payload_A[1U] 
            = __Vtemp280[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_payload_A[2U] 
            = __Vtemp280[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_payload_A[3U] 
            = __Vtemp280[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2275__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2275__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regStep 
            = (IData)((0x7ffffffff8ULL & ((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixColsGroup)) 
                                          << 6U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2276__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l195(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2276__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l195\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_ack_out) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2277__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l308(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2277__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l308\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_data_out[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2278__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l302(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2278__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l302\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_data_out[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2279__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l291(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2279__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l291\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_ack_out) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2280__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2280__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_14__DOT__ram__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_14__DOT__ram__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_14__DOT__ram__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[2U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_14__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_14__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2281__PROF__ResultInstrGen__l139(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2281__PROF__ResultInstrGen__l139\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_wr = 0U;
    } else {
        if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state) 
              >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T22))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2282__PROF__ExecInstrGen__l139(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2282__PROF__ExecInstrGen__l139\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_wr = 0U;
    } else {
        if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state) 
              >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T28))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2283__PROF__FetchInstrGen__l139(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2283__PROF__FetchInstrGen__l139\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_wr = 0U;
    } else {
        if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state) 
              >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T25))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2284__PROF__ResultInstrGen__l129(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2284__PROF__ResultInstrGen__l129\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_ack_out) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2285__PROF__ExecInstrGen__l129(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2285__PROF__ExecInstrGen__l129\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_ack_out) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2286__PROF__FetchInstrGen__l129(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2286__PROF__FetchInstrGen__l129\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_ack_out) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2287__PROF__ResultInstrGen__l207(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2287__PROF__ResultInstrGen__l207\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_B[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_B[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_B[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2288__PROF__ResultInstrGen__l201(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2288__PROF__ResultInstrGen__l201\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_A[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_A[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_payload_A[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2289__PROF__ExecInstrGen__l207(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2289__PROF__ExecInstrGen__l207\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_B[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_B[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_B[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2290__PROF__ExecInstrGen__l201(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2290__PROF__ExecInstrGen__l201\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_A[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_A[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_payload_A[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2291__PROF__FetchInstrGen__l207(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2291__PROF__FetchInstrGen__l207\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_B[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_B[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_B[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2292__PROF__FetchInstrGen__l201(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2292__PROF__FetchInstrGen__l201\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_A[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_A[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_payload_A[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2293__PROF__ExecAddrGen__l165(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2293__PROF__ExecAddrGen__l165\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_rd = 0U;
    } else {
        if ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2294__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l337(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2294__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l337\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_wr = 0U;
    } else {
        if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
              >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_vld_in))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2295__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l241(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2295__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l241\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_wr = 0U;
    } else {
        if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
              >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_vld_in))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2296__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2296__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2297__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2297__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2298__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2298__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2299__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2299__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2300__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l327(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2300__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l327\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_out_V_V_TREADY) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2301__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2301__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2302__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2302__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2303__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l231(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2303__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l231\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_out_V_V_TREADY) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2304__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l215(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2304__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l215\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx19;
    // Body
    __Vtableidx19 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_ack_out) 
                      << 4U) | ((8U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state) 
                                       << 3U)) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->__Vtable19_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state
        [__Vtableidx19];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2305__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2305__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2306__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2306__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2307__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l311(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2307__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l311\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx14;
    // Body
    __Vtableidx14 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_ack_out) 
                      << 4U) | ((8U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state) 
                                       << 3U)) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->__Vtable14_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state
        [__Vtableidx14];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2308__PROF__TesterWrapper__l6507(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2308__PROF__TesterWrapper__l6507\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regMax 
        = (0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_actualPrecision) 
                   - (IData)(1U)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2309__PROF__ResultInstrGen__l149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2309__PROF__ResultInstrGen__l149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx16;
    // Body
    __Vtableidx16 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_ack_out) 
                      << 4U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state) 
                                 << 2U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T22) 
                                            << 1U) 
                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state 
        = vlTOPp->__Vtable16_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state
        [__Vtableidx16];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2310__PROF__ExecInstrGen__l149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2310__PROF__ExecInstrGen__l149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx6;
    // Body
    __Vtableidx6 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_ack_out) 
                     << 4U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state) 
                                << 2U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T28) 
                                           << 1U) | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state 
        = vlTOPp->__Vtable6_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state
        [__Vtableidx6];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2311__PROF__FetchInstrGen__l149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2311__PROF__FetchInstrGen__l149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx11;
    // Body
    __Vtableidx11 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_ack_out) 
                      << 4U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state) 
                                 << 2U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T25) 
                                            << 1U) 
                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state 
        = vlTOPp->__Vtable11_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state
        [__Vtableidx11];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2312__PROF__TesterWrapper__l5567(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2312__PROF__TesterWrapper__l5567\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2313__PROF__TesterWrapper__l5107(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2313__PROF__TesterWrapper__l5107\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2314__PROF__TesterWrapper__l4578(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2314__PROF__TesterWrapper__l4578\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2315__PROF__ResultInstrGen__l185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2315__PROF__ResultInstrGen__l185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx17;
    // Body
    __Vtableidx17 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_2__DOT__T5) 
                      << 4U) | ((8U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                       << 3U)) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state 
        = vlTOPp->__Vtable17_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state
        [__Vtableidx17];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2316__PROF__FetchInstrGen__l185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2316__PROF__FetchInstrGen__l185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx12;
    // Body
    __Vtableidx12 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux__DOT__T5) 
                      << 4U) | ((8U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                       << 3U)) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state 
        = vlTOPp->__Vtable12_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state
        [__Vtableidx12];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2317__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l205(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2317__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l205\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_wr = 0U;
    } else {
        if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state) 
                    >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state)))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2318__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l301(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2318__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l301\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_wr = 0U;
    } else {
        if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state) 
                    >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state)))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2319__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l347(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2319__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l347\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx15;
    // Body
    __Vtableidx15 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_out_V_V_TREADY) 
                      << 4U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_vld_in) 
                                 << 3U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                                            << 1U) 
                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->__Vtable15_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state
        [__Vtableidx15];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2320__PROF__ResultInstrGen__l175(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2320__PROF__ResultInstrGen__l175\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_wr = 0U;
    } else {
        if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state) 
                    >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state)))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2321__PROF__ExecAddrGen__l129(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2321__PROF__ExecAddrGen__l129\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_ack_out) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2322__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l188(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2322__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l188\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_ack_out) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2323__PROF__FetchInstrGen__l175(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2323__PROF__FetchInstrGen__l175\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_wr = 0U;
    } else {
        if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state) 
                    >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state)))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2324__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l251(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2324__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l251\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx20;
    // Body
    __Vtableidx20 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_out_V_V_TREADY) 
                      << 4U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_vld_in) 
                                 << 3U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                                            << 1U) 
                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->__Vtable20_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state
        [__Vtableidx20];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2325__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2325__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCount = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2326__PROF__ExecAddrGen__l185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2326__PROF__ExecAddrGen__l185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vtableidx2;
    // Body
    __Vtableidx2 = ((8U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                           << 3U)) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state) 
                                       << 1U) | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state 
        = vlTOPp->__Vtable2_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state
        [__Vtableidx2];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2327__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2327__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_v 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R24;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2328__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2328__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_v 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R24;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2329__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2329__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_v 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R24;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2330__PROF__TesterWrapper__l2021(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2330__PROF__TesterWrapper__l2021\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_v 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R24;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2331__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2331__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [5U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [4U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [3U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2332__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2332__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [5U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [4U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [3U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2333__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2333__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [5U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [4U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [3U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2334__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2334__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [5U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [4U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v1 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [3U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v2 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v3 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v4 = 1U;
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl
            [0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT____Vlvbound1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v5 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2335__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l234(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2335__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l234\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr = 0U;
    } else {
        if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
              >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_vld_in))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2336__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2336__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCountWithBurst = 0U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2337__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l208(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2337__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l208\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx4;
    // Body
    __Vtableidx4 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_ack_out) 
                     << 4U) | ((8U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state) 
                                      << 3U)) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->__Vtable4_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state
        [__Vtableidx4];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2338__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2338__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_reg_700 
            = (0xfffU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
                          << 0x10U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[0U] 
                                       >> 0x10U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2339__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2339__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_dram_rhs_reg_689 
            = ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[5U] 
                << 0x10U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[4U] 
                             >> 0x10U));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2340__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2340__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_dram_block_count_V_1_reg_658 
            = (0xffU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
                         << 0x10U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[1U] 
                                      >> 0x10U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2341__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2341__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_base_r_reg_673 
            = (0xffffU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
                           << 0x10U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
                                        >> 0x10U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2342__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2342__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l496\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_dram_lhs_reg_684 
            = ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[4U] 
                << 0x10U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
                             >> 0x10U));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2343__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2343__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2344__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l224(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2344__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l224\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_out_V_V_TREADY) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2345__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2345__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2346__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2346__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regSeqElem;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2347__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2347__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2348__PROF__TesterWrapper__l76(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2348__PROF__TesterWrapper__l76\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regMaxCount 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixRows;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2349__PROF__TesterWrapper__l2957(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2349__PROF__TesterWrapper__l2957\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2350__PROF__ExecAddrGen__l175(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2350__PROF__ExecAddrGen__l175\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_wr = 0U;
    } else {
        if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state) 
                    >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state)))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2351__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l244(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2351__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l244\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx5;
    // Body
    __Vtableidx5 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_out_V_V_TREADY) 
                     << 4U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_vld_in) 
                                << 3U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                                           << 1U) | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state 
        = vlTOPp->__Vtable5_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state
        [__Vtableidx5];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2352__PROF__TesterWrapper__l11471(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2352__PROF__TesterWrapper__l11471\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq) 
             != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq))) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2353__PROF__ExecAddrGen__l139(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2353__PROF__ExecAddrGen__l139\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_wr = 0U;
    } else {
        if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state) 
              >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T25))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2354__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l198(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2354__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l198\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr = 0U;
    } else {
        if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state) 
                    >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state)))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2355__PROF__TesterWrapper__l1270(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2355__PROF__TesterWrapper__l1270\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState))) {
        if ((0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regCycles = 0U;
        }
    } else {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regCycles 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T48;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2356__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2356__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T8) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 2U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2357__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2357__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T8) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 2U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2358__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2358__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T8) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 2U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2359__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l267(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2359__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l267\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state))) {
        if ((0x80U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__i_1_reg2mem_reg_115 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__i_s_reg_386;
        } else {
            if ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) {
                vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__i_1_reg2mem_reg_115 = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2360__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2360__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regState = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T8) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T29) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regState = 2U;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T3) {
                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regState = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2361__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l277(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2361__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l277\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state))) {
        if ((0x80U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__m_reg2mem_reg_92 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__m_1_reg_372;
        } else {
            if ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm))) {
                vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__m_reg2mem_reg_92 = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2362__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2362__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R6 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_a_dout;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2363__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l320(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2363__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l320\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_payload_B 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__p_Result_s_reg_309;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2364__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l314(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2364__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l314\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_payload_A 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__p_Result_s_reg_309;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2365__PROF__ExecAddrGen__l149(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2365__PROF__ExecAddrGen__l149\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_ack_out) 
                     << 4U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state) 
                                << 2U) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T25) 
                                           << 1U) | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state 
        = vlTOPp->__Vtable1_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state
        [__Vtableidx1];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2366__PROF__TesterWrapper__l12925(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2366__PROF__TesterWrapper__l12925\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__R25 = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T31) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__empty))) {
            vlTOPp->VerilatedTesterWrapper__DOT__R25 = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__T28) {
                vlTOPp->VerilatedTesterWrapper__DOT__R25 = 1U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2367__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2367__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R3) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R4;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R5;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2368__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2368__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R0) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R2;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2369__PROF__TesterWrapper__l12925(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2369__PROF__TesterWrapper__l12925\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__R33 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__T44) {
            vlTOPp->VerilatedTesterWrapper__DOT__R33 
                = (0xffU & ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                             << 0x1fU) | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U] 
                                          >> 1U)));
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__T41) {
                vlTOPp->VerilatedTesterWrapper__DOT__R33 
                    = vlTOPp->VerilatedTesterWrapper__DOT__T40;
            } else {
                if (vlTOPp->VerilatedTesterWrapper__DOT__T39) {
                    vlTOPp->VerilatedTesterWrapper__DOT__R33 
                        = (0xffU & ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                     << 0x1fU) | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U] 
                                                  >> 1U)));
                } else {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__T28) {
                        vlTOPp->VerilatedTesterWrapper__DOT__R33 
                            = (0xffU & ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U] 
                                           >> 1U)));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2370__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2370__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCount 
            = (IData)((0xfffffffffULL & ((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixColsGroup)) 
                                         << 3U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2371__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2371__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x100U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_bram_addr_base_V_1_reg_768 
            = (0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_base_l_reg_668) 
                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_offset_reg2mem_1_reg_211)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2372__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2372__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state2_io)) 
               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                  >> 1U)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_num_regions_reg_711 
            = ((7U >= (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_nbufs_fetch_exec_log2_reg_678))
                ? (0xffU & ((IData)(1U) << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_nbufs_fetch_exec_log2_reg_678)))
                : 0U);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2373__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2373__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCountWithBurst 
            = (0xfffffff8U & (IData)((0xfffffffffULL 
                                      & ((QData)((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixColsGroup)) 
                                         << 3U))));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2374__PROF__TesterWrapper__l3260(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2374__PROF__TesterWrapper__l3260\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes = 0U;
    } else {
        if (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T38)) 
             & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7) 
                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux_1__DOT__T0))))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T42;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T38) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T37;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2375__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l944(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2375__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l944\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_dram_block_count_V_reg_706 
        = (0x3fU & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_dram_block_count_V_reg_706));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2376__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2376__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state2_io)) 
               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                  >> 1U)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_dram_block_count_V_reg_706 
            = ((0xc0U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_dram_block_count_V_reg_706)) 
               | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_Result_4_i_reg_663));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2377__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2377__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regMaxCount 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_actualPrecision;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2378__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l358(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2378__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l358\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm) 
                >> 4U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state) 
                          >> 1U)))) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__p_s_reg_396 
            = ((2U == (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__val_assign_reg2mem_reg_126))))
                ? 0U : (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__val_assign_reg2mem_reg_126))));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2379__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2379__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T3) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regMaxCountWithBurst 
            = (0xfffffff8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_actualPrecision));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2380__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l295(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2380__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l295\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001)) 
               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
                  >> 1U)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__exitcond_reg_300_pp0_iter1_reg 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__exitcond_reg_300;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2381__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l549(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2381__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l549\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                >> 4U) & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state) 
                          >> 1U)))) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_s_reg_753 
            = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_13_fu_452_p2)
                ? 0U : (0xffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__rmem_region_reg2mem_reg_131))));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2382__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2382__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R6 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_a_dout;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2383__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l586(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2383__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l586\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx9;
    // Body
    __Vtableidx9 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_ack_out) 
                     << 4U) | ((8U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state) 
                                      << 3U)) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state 
        = vlTOPp->__Vtable9_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state
        [__Vtableidx9];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2384__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l847(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2384__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l847\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__rhstile_last_fu_669_p2) 
          & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001))) 
         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
            >> 3U))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_25_reg_1845 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_25_fu_1071_p2;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2385__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l896(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2385__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l896\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tile_last_fu_643_p2) 
          & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_block_pp0_stage0_11001))) 
         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm) 
            >> 3U))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_24_reg_1835 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__tmp_24_fu_914_p2;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2386__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2386__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R3) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R4;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R5;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2387__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2387__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R0) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R2;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2388__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2388__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2389__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2389__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T24) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T23;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T15) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T14;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2390__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2390__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T24) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T23;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T15) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T14;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2391__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2391__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T24) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T23;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T15) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T14;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2392__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2392__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2393__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2393__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2394__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2394__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg 
        = ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95) 
           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__addr_full_));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2395__PROF__Q_srl__l160(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2395__PROF__Q_srl__l160\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg 
        = ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
           & (0U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__state_)));
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2396__PROF__TesterWrapper__l222(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2396__PROF__TesterWrapper__l222\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T24) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regCounter 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T23;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T15) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regCounter 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T14;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T3) {
                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regCounter = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2397__PROF__TesterWrapper__l2645(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2397__PROF__TesterWrapper__l2645\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T15) 
             & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T54)))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState = 0U;
        } else {
            if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T14) {
                vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState = 1U;
            } else {
                if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T0) 
                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regShiftCount)))) {
                    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState = 2U;
                } else {
                    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T6) {
                        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2398__PROF__TesterWrapper__l11601(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2398__PROF__TesterWrapper__l11601\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_16__DOT__ram__v0[0U] = 0U;
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_16__DOT__ram__v0[1U] = 0U;
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_16__DOT__ram__v0[2U] 
            = (0xfffffff8U & (vlTOPp->VerilatedTesterWrapper__DOT__R17 
                              << 3U));
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__Queue_16__DOT__ram__v0[3U] 
            = (7U & (vlTOPp->VerilatedTesterWrapper__DOT__R17 
                     >> 0x1dU));
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__Queue_16__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__Queue_16__DOT__ram__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2399__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2399__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R6 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_a_dout;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2400__PROF__TesterWrapper__l11373(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2400__PROF__TesterWrapper__l11373\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1 = 0U;
    } else {
        if (vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq) {
            vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1 
                = vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T3;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2401__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2401__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R3) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R4;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R5;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2402__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2402__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R0) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R2;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2403__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2403__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8][0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8][1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8][2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8][3U];
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2404__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2404__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11][0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11][1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11][2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11][3U];
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2405__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2405__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11][0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11][1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11][2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11][3U];
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__a_dout[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2406__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2406__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T1[3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2407__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2407__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T1[3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2408__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2408__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T1[3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2409__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2409__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x100U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_15_reg_763 
            = (0xfffffffU & ((0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__tmp_7_reg_728) 
                             * (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__m_reg2mem_1_reg_231)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2410__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2410__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11][0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11][1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11][2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11][3U];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2411__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2411__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14][0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14][1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14][2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14][3U];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2412__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2412__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[0U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14][0U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[1U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14][1U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[2U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14][2U];
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM_b_dout[3U] 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__DualPortBRAM__DOT__mem
        [vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14][3U];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2413__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2413__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l483\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x100U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_s_reg_802 
            = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__i_1_reg2mem_1_reg_241)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2414__PROF__ExecInstrGen__l185(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2414__PROF__ExecInstrGen__l185\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx7;
    // Body
    __Vtableidx7 = (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_1__DOT__T5) 
                     << 4U) | ((8U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state) 
                                      << 3U)) | (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95))));
    vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state 
        = vlTOPp->__Vtable7_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state
        [__Vtableidx7];
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2415__PROF__TesterWrapper__l5719(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2415__PROF__TesterWrapper__l5719\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R6 
        = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_a_dout;
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2416__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l824(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2416__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l824\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_B[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2417__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l818(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2417__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l818\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[3U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[4U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[4U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[5U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[5U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_payload_A[6U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_data_out[6U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2418__PROF__DualPortBRAM__l38(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2418__PROF__DualPortBRAM__l38\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R3) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R4;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v1 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R5;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2419__PROF__DualPortBRAM__l29(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2419__PROF__DualPortBRAM__l29\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R0) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R1;
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 = 1U;
        vlTOPp->__Vdlyvdim0__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM__DOT__mem__v0 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R2;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2420__PROF__ExecInstrGen__l175(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2420__PROF__ExecInstrGen__l175\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_wr = 0U;
    } else {
        if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state) 
                    >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state)))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2421__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l336(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2421__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l336\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__tmp_12_reg_347 
            = (0x1fffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[0U]);
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2422__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l336(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2422__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l336\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ins_in_dram_res_reg_342 
            = ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[6U] 
                << 0x10U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_data_out[5U] 
                             >> 0x10U));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2423__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2423__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state2_io)) 
               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                  >> 1U)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_1_reg_723 
            = (0xfffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_tiles_n_reg_652) 
                           * (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_tiles_per_row_V_reg_644)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2424__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2424__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l513\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_block_state2_io)) 
               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm) 
                  >> 1U)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__p_9_reg_734 
            = (0xfffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ins_in_tiles_m_reg_638) 
                           * (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__fetch_tiles_per_row_V_reg_644)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2425__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l566(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2425__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l566\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd = 0U;
    } else {
        if (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_ack_out) 
             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2426__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l403(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2426__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l403\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state))) {
        if ((0x80U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_reg2mem_1_reg_201 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_reg2mem_reg_153;
        } else {
            if ((0x1000U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm))) {
                vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__lmem_region_reg2mem_1_reg_201 
                    = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__phitmp_reg_792;
            }
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2427__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2427__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2428__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2428__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2429__PROF__Q_srl__l190(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2429__PROF__Q_srl__l190\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__shift_en_) {
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U];
        vlTOPp->__Vdlyvval__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U];
        vlTOPp->__Vdlyvset__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srl__v0 = 1U;
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2430__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l576(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2430__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l576\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr = 0U;
    } else {
        if ((1U & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state) 
                    >> 1U) & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state)))) {
            vlTOPp->__Vdly__VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr 
                = (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr)));
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2431__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2431__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__addr_negate_V_reg_280 
            = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
                     >> 0x18U));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2432__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2432__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__lhs_V_2_reg_275 
            = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
                     >> 0x17U));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2433__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2433__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__tmp_V_1_reg_260[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__tmp_V_1_reg_260[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__tmp_V_1_reg_260[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__tmp_V_1_reg_260[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2434__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2434__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__lhs_V_1_reg_285 
            = (1U & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
                     >> 0x19U));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2435__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l560(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2435__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l560\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__lhs_V_reg_295 
        = (0xffffU & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__lhs_V_reg_295);
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2436__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2436__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__lhs_V_reg_295 
            = ((0x10000U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__lhs_V_reg_295) 
               | (0xffffU & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
                             >> 7U)));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2437__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2437__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l284\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & ((~ ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg)) 
                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state)))) 
               & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__tmp_reg_290 
            = (0xffffU & ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
                           >> 7U) + ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[3U] 
                                      << 9U) | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_data_out[2U] 
                                                >> 0x17U))));
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2438__PROF__TesterWrapper__l5984(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2438__PROF__TesterWrapper__l5984\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->VerilatedTesterWrapper__DOT__T95) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__regDecodeErrors = 0U;
    } else {
        if ((3U <= (3U & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U]))) {
            vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__regDecodeErrors 
                = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__T1;
        }
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2439__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l872(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2439__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l872\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state)) 
         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_payload_B[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_payload_B[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_payload_B[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_payload_B[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[3U];
    }
}

VL_INLINE_OPT void VTesterWrapper::_sequent__TOP__2440__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l866(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_sequent__TOP__2440__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l866\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((1U != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state)) 
         & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr)))) {
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_payload_A[0U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[0U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_payload_A[1U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[1U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_payload_A[2U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[2U];
        vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_payload_A[3U] 
            = vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_data_in[3U];
    }
}
