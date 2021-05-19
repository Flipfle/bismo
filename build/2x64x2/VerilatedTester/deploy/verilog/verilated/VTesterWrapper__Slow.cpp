// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTesterWrapper.h for the primary calling header

#include "VTesterWrapper.h"
#include "VTesterWrapper__Syms.h"

//==========
CData/*1:0*/ VTesterWrapper::__Vtable1_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable2_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state[16];
CData/*3:0*/ VTesterWrapper::__Vtable3_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__ap_NS_fsm[1024];
CData/*1:0*/ VTesterWrapper::__Vtable4_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable5_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable6_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable7_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state[32];
CData/*3:0*/ VTesterWrapper::__Vtable8_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_NS_fsm[1024];
CData/*1:0*/ VTesterWrapper::__Vtable9_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable10_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable11_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable12_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state[32];
CData/*3:0*/ VTesterWrapper::__Vtable13_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__ap_NS_fsm[1024];
CData/*1:0*/ VTesterWrapper::__Vtable14_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable15_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable16_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable17_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state[32];
CData/*3:0*/ VTesterWrapper::__Vtable18_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_NS_fsm[1024];
CData/*1:0*/ VTesterWrapper::__Vtable19_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state[32];
CData/*1:0*/ VTesterWrapper::__Vtable20_VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state[32];

VTesterWrapper::VTesterWrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    VTesterWrapper__Syms* __restrict vlSymsp = __VlSymsp = new VTesterWrapper__Syms(_vcontextp__, this, name());
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTesterWrapper::__Vconfigure(VTesterWrapper__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-9);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

VTesterWrapper::~VTesterWrapper() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VTesterWrapper::_settle__TOP__1__PROF__TesterWrapper__l12159(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__1__PROF__TesterWrapper__l12159\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_regFileIF_regCount = 0x3cU;
}

void VTesterWrapper::_settle__TOP__2__PROF__TesterWrapper__l12438(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__2__PROF__TesterWrapper__l12438\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_54_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__3__PROF__TesterWrapper__l12439(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__3__PROF__TesterWrapper__l12439\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_53_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__4__PROF__TesterWrapper__l12440(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__4__PROF__TesterWrapper__l12440\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_51_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__5__PROF__TesterWrapper__l12441(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__5__PROF__TesterWrapper__l12441\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_49_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__6__PROF__TesterWrapper__l12442(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__6__PROF__TesterWrapper__l12442\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_47_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__7__PROF__TesterWrapper__l12443(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__7__PROF__TesterWrapper__l12443\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_45_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__8__PROF__TesterWrapper__l12444(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__8__PROF__TesterWrapper__l12444\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_43_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__9__PROF__TesterWrapper__l12445(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__9__PROF__TesterWrapper__l12445\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_42_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__10__PROF__TesterWrapper__l12446(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__10__PROF__TesterWrapper__l12446\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_41_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__11__PROF__TesterWrapper__l12447(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__11__PROF__TesterWrapper__l12447\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_40_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__12__PROF__TesterWrapper__l12448(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__12__PROF__TesterWrapper__l12448\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_39_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__13__PROF__TesterWrapper__l12449(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__13__PROF__TesterWrapper__l12449\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_27_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__14__PROF__TesterWrapper__l12450(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__14__PROF__TesterWrapper__l12450\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_25_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__15__PROF__TesterWrapper__l12451(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__15__PROF__TesterWrapper__l12451\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_24_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__16__PROF__TesterWrapper__l12452(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__16__PROF__TesterWrapper__l12452\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_23_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__17__PROF__TesterWrapper__l12453(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__17__PROF__TesterWrapper__l12453\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_21_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__18__PROF__TesterWrapper__l12454(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__18__PROF__TesterWrapper__l12454\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_20_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__19__PROF__TesterWrapper__l12455(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__19__PROF__TesterWrapper__l12455\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_19_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__20__PROF__TesterWrapper__l12456(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__20__PROF__TesterWrapper__l12456\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_18_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__21__PROF__TesterWrapper__l12457(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__21__PROF__TesterWrapper__l12457\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_17_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__22__PROF__TesterWrapper__l12458(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__22__PROF__TesterWrapper__l12458\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_16_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__23__PROF__TesterWrapper__l12459(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__23__PROF__TesterWrapper__l12459\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_15_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__24__PROF__TesterWrapper__l12460(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__24__PROF__TesterWrapper__l12460\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_14_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__25__PROF__TesterWrapper__l12461(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__25__PROF__TesterWrapper__l12461\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_12_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__26__PROF__TesterWrapper__l12462(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__26__PROF__TesterWrapper__l12462\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_11_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__27__PROF__TesterWrapper__l12463(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__27__PROF__TesterWrapper__l12463\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_10_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__28__PROF__TesterWrapper__l12464(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__28__PROF__TesterWrapper__l12464\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_9_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__29__PROF__TesterWrapper__l12465(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__29__PROF__TesterWrapper__l12465\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_8_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__30__PROF__TesterWrapper__l12466(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__30__PROF__TesterWrapper__l12466\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_7_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__31__PROF__TesterWrapper__l12467(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__31__PROF__TesterWrapper__l12467\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_6_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__32__PROF__TesterWrapper__l12468(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__32__PROF__TesterWrapper__l12468\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_5_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__33__PROF__TesterWrapper__l12469(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__33__PROF__TesterWrapper__l12469\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_4_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__34__PROF__TesterWrapper__l12470(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__34__PROF__TesterWrapper__l12470\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__io_regIn_2_bits 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__39__PROF__TesterWrapper__l3143(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__39__PROF__TesterWrapper__l3143\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage_io_resmem_req_0_0_writeData 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__40__PROF__TesterWrapper__l3144(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__40__PROF__TesterWrapper__l3144\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage_io_resmem_req_0_1_writeData 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__41__PROF__TesterWrapper__l3145(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__41__PROF__TesterWrapper__l3145\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage_io_resmem_req_1_0_writeData 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__42__PROF__TesterWrapper__l3146(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__42__PROF__TesterWrapper__l3146\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage_io_resmem_req_1_1_writeData 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_settle__TOP__96__PROF__TesterWrapper__l2365(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__96__PROF__TesterWrapper__l2365\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct_io_tilemem_rhs_req_0_writeData 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
}

void VTesterWrapper::_settle__TOP__97__PROF__TesterWrapper__l2366(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__97__PROF__TesterWrapper__l2366\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct_io_tilemem_rhs_req_1_writeData 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
}

void VTesterWrapper::_settle__TOP__98__PROF__TesterWrapper__l2367(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__98__PROF__TesterWrapper__l2367\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct_io_tilemem_lhs_req_0_writeData 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
}

void VTesterWrapper::_settle__TOP__99__PROF__TesterWrapper__l2368(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_settle__TOP__99__PROF__TesterWrapper__l2368\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct_io_tilemem_lhs_req_1_writeData 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
}

void VTesterWrapper::_initial__TOP__124__PROF__TesterWrapper__l5947(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__124__PROF__TesterWrapper__l5947\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__regDecodeErrors 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__125__PROF__TesterWrapper__l5782(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__125__PROF__TesterWrapper__l5782\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__mem[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__mem[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__initvar = 2U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__R3 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__R5 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__126__PROF__TesterWrapper__l5782(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__126__PROF__TesterWrapper__l5782\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__mem[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__mem[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__initvar = 2U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__R3 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__R5 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__127__PROF__TesterWrapper__l5782(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__127__PROF__TesterWrapper__l5782\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__mem[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__mem[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__initvar = 2U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__R3 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__R5 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__128__PROF__TesterWrapper__l5782(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__128__PROF__TesterWrapper__l5782\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__mem[0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__mem[1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__initvar = 2U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__R3 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__R5 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__129__PROF__TesterWrapper__l6490(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__129__PROF__TesterWrapper__l6490\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__regMax 
        = (0xfU & VL_RANDOM_I(4));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__regCount 
        = (0xfU & VL_RANDOM_I(4));
}

void VTesterWrapper::_initial__TOP__130__PROF__TesterWrapper__l6490(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__130__PROF__TesterWrapper__l6490\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regMax 
        = (0xfU & VL_RANDOM_I(4));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount 
        = (0xfU & VL_RANDOM_I(4));
}

void VTesterWrapper::_initial__TOP__131__PROF__TesterWrapper__l6831(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__131__PROF__TesterWrapper__l6831\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__132__PROF__TesterWrapper__l558(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__132__PROF__TesterWrapper__l558\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddr 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regTilesPerRowMinusOne 
        = (0xffffU & VL_RANDOM_I(16));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddrBase 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regTilesPerRow 
        = (0xffffU & VL_RANDOM_I(16));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMRange 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMTarget 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMStart 
        = (3U & VL_RANDOM_I(2));
}

void VTesterWrapper::_initial__TOP__133__PROF__TesterWrapper__l3133(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__133__PROF__TesterWrapper__l3133\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__134__PROF__TesterWrapper__l165(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__134__PROF__TesterWrapper__l165\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCount 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCountWithBurst 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__135__PROF__TesterWrapper__l165(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__135__PROF__TesterWrapper__l165\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCount 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCountWithBurst 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__136__PROF__TesterWrapper__l165(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__136__PROF__TesterWrapper__l165\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regStep 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCount 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regCounter 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regMaxCountWithBurst 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__137__PROF__TesterWrapper__l165(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__137__PROF__TesterWrapper__l165\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regStep 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regMaxCount 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regCounter 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regMaxCountWithBurst 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regSeqElem 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__138__PROF__TesterWrapper__l3351(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__138__PROF__TesterWrapper__l3351\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_0 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_2 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_3 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_1 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__139__PROF__TesterWrapper__l3351(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__139__PROF__TesterWrapper__l3351\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_0 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_2 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_3 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_1 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__140__PROF__TesterWrapper__l3351(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__140__PROF__TesterWrapper__l3351\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_0 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_2 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_3 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_1 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__141__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__141__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__142__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__142__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__143__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__143__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__144__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__144__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__145__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__145__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__146__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__146__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__147__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__147__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__148__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__148__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__149__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__149__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__150__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__150__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__151__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__151__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__152__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__152__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__153__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__153__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__154__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__154__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__155__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__155__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__156__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__156__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__157__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__157__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__158__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__158__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__159__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__159__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__160__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__160__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__161__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__161__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__162__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__162__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__163__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__163__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__164__PROF__TesterWrapper__l11550(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__164__PROF__TesterWrapper__l11550\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1 
        = (0xfU & VL_RANDOM_I(4));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4 
        = (0xfU & VL_RANDOM_I(4));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[1U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[1U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[2U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[2U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[2U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[2U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[3U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[3U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[3U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[3U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[4U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[4U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[4U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[4U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[5U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[5U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[5U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[5U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[6U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[6U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[6U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[6U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[7U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[7U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[7U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[7U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[8U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[8U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[8U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[8U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[9U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[9U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[9U][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[9U][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xaU][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xaU][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xaU][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xaU][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xbU][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xbU][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xbU][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xbU][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xcU][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xcU][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xcU][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xcU][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xdU][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xdU][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xdU][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xdU][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xeU][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xeU][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xeU][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xeU][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xfU][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xfU][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xfU][2U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0xfU][3U] 
        = (7U & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__initvar = 0x10U;
}

void VTesterWrapper::_initial__TOP__165__PROF__TesterWrapper__l42(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__165__PROF__TesterWrapper__l42\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regMaxCount 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regCounter 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regStep 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__166__PROF__TesterWrapper__l42(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__166__PROF__TesterWrapper__l42\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regSeqElem 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regMaxCount 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regCounter 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regStep 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__167__PROF__TesterWrapper__l42(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__167__PROF__TesterWrapper__l42\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regMaxCount 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regCounter 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regStep 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__168__PROF__TesterWrapper__l42(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__168__PROF__TesterWrapper__l42\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regSeqElem 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regMaxCount 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regCounter 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regStep 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__169__PROF__TesterWrapper__l4465(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__169__PROF__TesterWrapper__l4465\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11 
        = (0x1ffU & VL_RANDOM_I(9));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14 
        = (0x1ffU & VL_RANDOM_I(9));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R32 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__170__PROF__TesterWrapper__l4994(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__170__PROF__TesterWrapper__l4994\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11 
        = (0x1ffU & VL_RANDOM_I(9));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14 
        = (0x1ffU & VL_RANDOM_I(9));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R32 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__171__PROF__TesterWrapper__l5469(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__171__PROF__TesterWrapper__l5469\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8 
        = (0x1ffU & VL_RANDOM_I(9));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11 
        = (0x1ffU & VL_RANDOM_I(9));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R26 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__172__PROF__TesterWrapper__l12027(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__172__PROF__TesterWrapper__l12027\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__regWrapperReset 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__R1 = (1U & 
                                               VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__R7 = (0xffU 
                                               & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__R17 = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__R25 = (1U 
                                                & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__R33 = (0xffU 
                                                & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__initvar = 0U;
    while (VL_GTS_III(1,32,32, 0x4000000U, vlTOPp->VerilatedTesterWrapper__DOT__initvar)) {
        vlTOPp->VerilatedTesterWrapper__DOT__mem[(0x3ffffffU 
                                                  & vlTOPp->VerilatedTesterWrapper__DOT__initvar)] 
            = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
               | (QData)((IData)(VL_RANDOM_I(32))));
        vlTOPp->VerilatedTesterWrapper__DOT__initvar 
            = ((IData)(1U) + vlTOPp->VerilatedTesterWrapper__DOT__initvar);
    }
    vlTOPp->VerilatedTesterWrapper__DOT__R75 = (0xffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    VL_RANDOM_I(32))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__R82 = (0xffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    VL_RANDOM_I(32))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__R89 = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__173__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__173__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__174__PROF__TesterWrapper__l11322(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__174__PROF__TesterWrapper__l11322\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[0U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[0U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[0U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[1U][0U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[1U][1U] 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[1U][2U] 
        = (0x3ffffffU & VL_RANDOM_I(32));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__initvar = 2U;
}

void VTesterWrapper::_initial__TOP__175__PROF__TesterWrapper__l11434(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__175__PROF__TesterWrapper__l11434\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1 
        = (0xfU & VL_RANDOM_I(4));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4 
        = (0xfU & VL_RANDOM_I(4));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[0U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[1U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[2U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[3U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[4U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[5U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[6U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[7U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[8U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[9U] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[0xaU] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[0xbU] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[0xcU] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[0xdU] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[0xeU] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[0xfU] 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__initvar = 0x10U;
}

void VTesterWrapper::_initial__TOP__176__PROF__TesterWrapper__l2524(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__176__PROF__TesterWrapper__l2524\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_1 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
}

void VTesterWrapper::_initial__TOP__177__PROF__TesterWrapper__l2602(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__177__PROF__TesterWrapper__l2602\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regShiftCount 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__178__PROF__TesterWrapper__l7458(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__178__PROF__TesterWrapper__l7458\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_signed 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState 
        = (7U & VL_RANDOM_I(3));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_waitCompleteBytes 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCompletedWrBytes 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_actualPrecision 
        = (0xfU & VL_RANDOM_I(4));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixRows 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_matrixColsGroup 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_dramBaseAddrDst 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_dramBaseAddrSrc 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCycleCount 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__179__PROF__TesterWrapper__l4074(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__179__PROF__TesterWrapper__l4074\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState 
        = (3U & VL_RANDOM_I(2));
}

void VTesterWrapper::_initial__TOP__180__PROF__TesterWrapper__l2896(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__180__PROF__TesterWrapper__l2896\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R0 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R3 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__maybe_full 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R10 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__181__PROF__TesterWrapper__l1627(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__181__PROF__TesterWrapper__l1627\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__R0 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__R1 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__R2 
        = (0x7fU & VL_RANDOM_I(7));
}

void VTesterWrapper::_initial__TOP__182__PROF__TesterWrapper__l1627(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__182__PROF__TesterWrapper__l1627\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__R0 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__R1 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__R2 
        = (0x7fU & VL_RANDOM_I(7));
}

void VTesterWrapper::_initial__TOP__183__PROF__TesterWrapper__l1627(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__183__PROF__TesterWrapper__l1627\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__R0 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__R1 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__R2 
        = (0x7fU & VL_RANDOM_I(7));
}

void VTesterWrapper::_initial__TOP__184__PROF__TesterWrapper__l1627(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__184__PROF__TesterWrapper__l1627\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__R0 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__R1 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__R2 
        = (0x7fU & VL_RANDOM_I(7));
}

void VTesterWrapper::_initial__TOP__185__PROF__TesterWrapper__l8546(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__185__PROF__TesterWrapper__l8546\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R2 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R7 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R12 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R15 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R20 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__R32 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCCEnablePrev 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__186__PROF__TesterWrapper__l3575(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__186__PROF__TesterWrapper__l3575\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regProfileState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState 
        = (3U & VL_RANDOM_I(2));
}

void VTesterWrapper::_initial__TOP__187__PROF__TesterWrapper__l3844(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__187__PROF__TesterWrapper__l3844\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regProfileState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState 
        = (3U & VL_RANDOM_I(2));
}

void VTesterWrapper::_initial__TOP__188__PROF__TesterWrapper__l10210(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__188__PROF__TesterWrapper__l10210\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID 
        = (0x3fU & VL_RANDOM_I(6));
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_write 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regDoCmd 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_read 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__189__PROF__TesterWrapper__l5689(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__189__PROF__TesterWrapper__l5689\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R0 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R1 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R2 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R3 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R4 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R5 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R6 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__R7 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
}

void VTesterWrapper::_initial__TOP__190__PROF__TesterWrapper__l5689(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__190__PROF__TesterWrapper__l5689\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R0 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R1 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R2 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R3 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R4 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R5 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R6 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__R7 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
}

void VTesterWrapper::_initial__TOP__191__PROF__TesterWrapper__l5689(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__191__PROF__TesterWrapper__l5689\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R0 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R1 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R2 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R3 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R4 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R5 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R6 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__R7 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
}

void VTesterWrapper::_initial__TOP__192__PROF__TesterWrapper__l5689(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__192__PROF__TesterWrapper__l5689\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R0 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R1 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R2 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R3 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R4 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R5 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R6 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__R7 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
}

void VTesterWrapper::_initial__TOP__193__PROF__TesterWrapper__l1961(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__193__PROF__TesterWrapper__l1961\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R1 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regAcc 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_b_popcountResult 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_b_neg 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R8 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R9 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R10 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R11 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_b_acc_shift 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R16 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R17 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R18 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R19 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_b_clear 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R20 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R21 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R22 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R23 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__regStage1_v 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R24 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R25 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R26 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__R27 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__194__PROF__TesterWrapper__l1961(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__194__PROF__TesterWrapper__l1961\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R1 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regAcc 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_b_popcountResult 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_b_neg 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R8 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R9 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R10 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R11 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_b_acc_shift 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R16 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R17 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R18 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R19 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_b_clear 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R20 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R21 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R22 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R23 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__regStage1_v 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R24 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R25 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R26 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__R27 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__195__PROF__TesterWrapper__l1961(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__195__PROF__TesterWrapper__l1961\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R1 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regAcc 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_b_popcountResult 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_b_neg 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R8 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R9 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R10 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R11 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_b_acc_shift 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R16 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R17 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R18 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R19 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_b_clear 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R20 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R21 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R22 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R23 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__regStage1_v 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R24 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R25 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R26 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__R27 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__196__PROF__TesterWrapper__l1961(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__196__PROF__TesterWrapper__l1961\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R0 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R1 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regAcc 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_b_popcountResult 
        = (0x7fU & VL_RANDOM_I(7));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_b_neg 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R8 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R9 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R10 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R11 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_b_acc_shift 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R16 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R17 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R18 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R19 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_b_clear 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R20 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R21 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R22 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R23 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__regStage1_v 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R24 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R25 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R26 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__R27 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__197__PROF__ResultInstrGen__l83(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__197__PROF__ResultInstrGen__l83\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__in_V_V_0_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__out_V_V_1_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26_ap_start_reg = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__ap_CS_fsm = 1U;
}

void VTesterWrapper::_initial__TOP__198__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l153(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__198__PROF__ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s__l153\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__ap_CS_fsm = 1U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__in_V_V_0_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultInstrGen__DOT__grp_ResultInstrGen_RHSTiling_Templated_2ul_2ul_32ul_s_fu_26__DOT__out_V_V_1_state = 0U;
}

void VTesterWrapper::_initial__TOP__199__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l129(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__199__PROF__ExecAddrGen_Templated_1ul_16ul_0ul_s__l129\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_CS_fsm = 1U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__in_V_V_0_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__out_V_V_1_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1 = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter2 = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0 = 0U;
}

void VTesterWrapper::_initial__TOP__200__PROF__TesterWrapper__l1073(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__200__PROF__TesterWrapper__l1073\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__lhs_range 
        = (0x1ffU & VL_RANDOM_I(9));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__rhs_range 
        = (0x1ffU & VL_RANDOM_I(9));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_id_range 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_count 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlocksReceived 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesAlmostFinished 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesReceived 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regWaitInterconnect 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_id_start 
        = (0x1ffU & VL_RANDOM_I(9));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_addr_base 
        = (0xffffU & VL_RANDOM_I(16));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_tiles_per_row 
        = (0xffffU & VL_RANDOM_I(16));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_offset_bytes 
        = (0xffffffU & VL_RANDOM_I(24));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_base 
        = VL_RANDOM_I(32);
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_size_bytes 
        = (0xffffU & VL_RANDOM_I(16));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regCycles 
        = VL_RANDOM_I(32);
}

void VTesterWrapper::_initial__TOP__201__PROF__TesterWrapper__l2100(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__201__PROF__TesterWrapper__l2100\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R0 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R2 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R3 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R4 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R5 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R6 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R7 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R8 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R9 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R10 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R11 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R12 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R13 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R14 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R15 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R16 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R17 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R18 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R19 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R20 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R21 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R22 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R23 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__202__PROF__FetchInstrGen__l83(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__202__PROF__FetchInstrGen__l83\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__in_V_V_0_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__out_V_V_1_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26_ap_start_reg = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__ap_CS_fsm = 1U;
}

void VTesterWrapper::_initial__TOP__203__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l213(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__203__PROF__FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s__l213\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__ap_CS_fsm = 1U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__in_V_V_0_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchInstrGen__DOT__grp_FetchInstrGen_RHSLHSTiling_Templated_2ul_64ul_2ul_0ul_1024ul_1024ul_s_fu_26__DOT__out_V_V_1_state = 0U;
}

void VTesterWrapper::_initial__TOP__204__PROF__TesterWrapper__l703(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__204__PROF__TesterWrapper__l703\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_0 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_id 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_data 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_0_addr 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_1 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_id 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_data 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_1_addr 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_2 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_id 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_data 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_2_addr 
        = (0x3ffU & VL_RANDOM_I(10));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_3 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_3_id 
        = (3U & VL_RANDOM_I(2));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_3_data 
        = (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
           | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodePacket_3_addr 
        = (0x3ffU & VL_RANDOM_I(10));
}

void VTesterWrapper::_initial__TOP__205__PROF__TesterWrapper__l6558(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__205__PROF__TesterWrapper__l6558\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_0 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_1 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_2 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_3 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_4 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_5 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_6 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_7 
        = (0xffU & VL_RANDOM_I(8));
}

void VTesterWrapper::_initial__TOP__206__PROF__TesterWrapper__l6558(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__206__PROF__TesterWrapper__l6558\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_0 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_1 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_2 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_3 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_4 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_5 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_6 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_7 
        = (0xffU & VL_RANDOM_I(8));
}

void VTesterWrapper::_initial__TOP__207__PROF__TesterWrapper__l6558(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__207__PROF__TesterWrapper__l6558\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_0 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_1 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_2 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_3 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_4 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_5 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_6 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_7 
        = (0xffU & VL_RANDOM_I(8));
}

void VTesterWrapper::_initial__TOP__208__PROF__TesterWrapper__l6558(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__208__PROF__TesterWrapper__l6558\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_0 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_1 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_2 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_3 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_4 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_5 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_6 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_7 
        = (0xffU & VL_RANDOM_I(8));
}

void VTesterWrapper::_initial__TOP__209__PROF__TesterWrapper__l6558(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__209__PROF__TesterWrapper__l6558\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_0 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_1 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_2 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_3 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_4 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_5 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_6 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_7 
        = (0xffU & VL_RANDOM_I(8));
}

void VTesterWrapper::_initial__TOP__210__PROF__TesterWrapper__l6558(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__210__PROF__TesterWrapper__l6558\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_0 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_1 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_2 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_3 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_4 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_5 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_6 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_7 
        = (0xffU & VL_RANDOM_I(8));
}

void VTesterWrapper::_initial__TOP__211__PROF__TesterWrapper__l6558(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__211__PROF__TesterWrapper__l6558\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_0 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_1 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_2 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_3 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_4 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_5 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_6 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_7 
        = (0xffU & VL_RANDOM_I(8));
}

void VTesterWrapper::_initial__TOP__212__PROF__TesterWrapper__l6558(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__212__PROF__TesterWrapper__l6558\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_0 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_1 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_2 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_3 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_4 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_5 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_6 
        = (0xffU & VL_RANDOM_I(8));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_7 
        = (0xffU & VL_RANDOM_I(8));
}

void VTesterWrapper::_initial__TOP__213__PROF__ExecInstrGen__l83(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__213__PROF__ExecInstrGen__l83\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__in_V_V_0_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__out_V_V_1_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26_ap_start_reg = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__ap_CS_fsm = 1U;
}

void VTesterWrapper::_initial__TOP__214__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l414(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__214__PROF__ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s__l414\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_CS_fsm = 1U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__in_V_V_0_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__out_V_V_1_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter0 = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecInstrGen__DOT__grp_ExecInstrGen_RHSLHSTiling_1024ul_1024ul_0ul_s_fu_26__DOT__ap_enable_reg_pp0_iter1 = 0U;
}

void VTesterWrapper::_initial__TOP__215__PROF__TesterWrapper__l2331(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__215__PROF__TesterWrapper__l2331\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_delayed_raw 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R13 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R14 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__read_complete 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R17 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R18 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_out_final_delayed_raw 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R20 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R21 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R22 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R23 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R24 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R25 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R26 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R27 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R28 
        = (0x3ffffffffffULL & (((QData)((IData)(VL_RANDOM_I(32))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_RANDOM_I(32)))));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R32 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R33 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R34 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R35 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R36 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R37 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R38 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R39 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R40 
        = (1U & VL_RANDOM_I(1));
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R41 
        = (1U & VL_RANDOM_I(1));
}

void VTesterWrapper::_initial__TOP__216__PROF__ExecAddrGen__l83(VTesterWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTesterWrapper::_initial__TOP__216__PROF__ExecAddrGen__l83\n"); );
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_rd = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_sel_wr = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__out_V_V_1_state = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__grp_ExecAddrGen_Templated_1ul_16ul_0ul_s_fu_26_ap_start_reg = 0U;
    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__ap_CS_fsm = 1U;
}
