// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTesterWrapper__Syms.h"


void VTesterWrapper::traceChgSub2(void* userp, VerilatedVcd* tracep) {
    VTesterWrapper__Syms* __restrict vlSymsp = static_cast<VTesterWrapper__Syms*>(userp);
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 5498);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp884[3];
    WData/*127:0*/ __Vtemp885[4];
    WData/*127:0*/ __Vtemp887[4];
    WData/*95:0*/ __Vtemp888[3];
    WData/*95:0*/ __Vtemp889[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 1U)))));
            tracep->chgIData(oldp+1,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 2U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2)),32);
            tracep->chgBit(oldp+2,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 2U)))));
            tracep->chgBit(oldp+3,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 2U)))));
            tracep->chgIData(oldp+4,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 3U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))),32);
            tracep->chgIData(oldp+5,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 3U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3)),32);
            tracep->chgBit(oldp+6,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 3U)))));
            tracep->chgBit(oldp+7,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 3U)))));
            tracep->chgIData(oldp+8,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 4U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4)),32);
            tracep->chgBit(oldp+9,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 4U)))));
            tracep->chgBit(oldp+10,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 4U)))));
            tracep->chgIData(oldp+11,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 5U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5)),32);
            tracep->chgBit(oldp+12,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 5U)))));
            tracep->chgBit(oldp+13,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 5U)))));
            tracep->chgIData(oldp+14,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 6U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6)),32);
            tracep->chgBit(oldp+15,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 6U)))));
            tracep->chgBit(oldp+16,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 6U)))));
            tracep->chgIData(oldp+17,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 7U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7)),32);
            tracep->chgBit(oldp+18,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 7U)))));
            tracep->chgBit(oldp+19,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 7U)))));
            tracep->chgIData(oldp+20,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 8U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)),32);
            tracep->chgBit(oldp+21,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 8U)))));
            tracep->chgBit(oldp+22,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 8U)))));
            tracep->chgIData(oldp+23,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 9U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9)),32);
            tracep->chgBit(oldp+24,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 9U)))));
            tracep->chgBit(oldp+25,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 9U)))));
            tracep->chgIData(oldp+26,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xaU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10)),32);
            tracep->chgBit(oldp+27,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+28,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xaU)))));
            tracep->chgIData(oldp+29,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xbU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11)),32);
            tracep->chgBit(oldp+30,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0xbU)))));
            tracep->chgBit(oldp+31,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xbU)))));
            tracep->chgIData(oldp+32,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xcU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12)),32);
            tracep->chgBit(oldp+33,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0xcU)))));
            tracep->chgBit(oldp+34,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xcU)))));
            tracep->chgIData(oldp+35,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                        ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                            & (IData)(
                                                      ((1ULL 
                                                        << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                       >> 0xdU)))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                            : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13)
                                        : (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))),32);
            tracep->chgIData(oldp+36,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xdU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13)),32);
            tracep->chgBit(oldp+37,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0xdU)))));
            tracep->chgBit(oldp+38,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xdU)))));
            tracep->chgIData(oldp+39,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xeU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14)),32);
            tracep->chgBit(oldp+40,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+41,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xeU)))));
            tracep->chgIData(oldp+42,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xfU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15)),32);
            tracep->chgBit(oldp+43,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0xfU)))));
            tracep->chgBit(oldp+44,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0xfU)))));
            tracep->chgIData(oldp+45,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x10U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16)),32);
            tracep->chgBit(oldp+46,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x10U)))));
            tracep->chgBit(oldp+47,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x10U)))));
            tracep->chgIData(oldp+48,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x11U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17)),32);
            tracep->chgBit(oldp+49,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+50,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x11U)))));
            tracep->chgIData(oldp+51,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x12U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18)),32);
            tracep->chgBit(oldp+52,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+53,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x12U)))));
            tracep->chgIData(oldp+54,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x13U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19)),32);
            tracep->chgBit(oldp+55,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+56,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x13U)))));
            tracep->chgIData(oldp+57,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x14U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20)),32);
            tracep->chgBit(oldp+58,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+59,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x14U)))));
            tracep->chgIData(oldp+60,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x15U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21)),32);
            tracep->chgBit(oldp+61,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+62,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x15U)))));
            tracep->chgIData(oldp+63,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                        ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                            & (IData)(
                                                      ((1ULL 
                                                        << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                       >> 0x16U)))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                            : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)
                                        : (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))),32);
            tracep->chgIData(oldp+64,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x16U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)),32);
            tracep->chgBit(oldp+65,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+66,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x16U)))));
            tracep->chgIData(oldp+67,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x17U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23)),32);
            tracep->chgBit(oldp+68,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+69,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x17U)))));
            tracep->chgIData(oldp+70,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x18U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)),32);
            tracep->chgBit(oldp+71,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+72,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x18U)))));
            tracep->chgIData(oldp+73,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x19U)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25)),32);
            tracep->chgBit(oldp+74,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+75,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x19U)))));
            tracep->chgIData(oldp+76,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                        ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                            & (IData)(
                                                      ((1ULL 
                                                        << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                       >> 0x1aU)))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                            : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T33))),32);
            tracep->chgIData(oldp+77,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1aU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)),32);
            tracep->chgBit(oldp+78,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+79,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1aU)))));
            tracep->chgIData(oldp+80,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1bU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27)),32);
            tracep->chgBit(oldp+81,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+82,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1bU)))));
            tracep->chgIData(oldp+83,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                        ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                            & (IData)(
                                                      ((1ULL 
                                                        << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                       >> 0x1cU)))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                            : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T33))),32);
            tracep->chgIData(oldp+84,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1cU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28)),32);
            tracep->chgBit(oldp+85,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+86,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1cU)))));
            tracep->chgIData(oldp+87,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                        ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                            & (IData)(
                                                      ((1ULL 
                                                        << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                       >> 0x1dU)))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                            : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29)
                                        : 0x20U)),32);
            tracep->chgIData(oldp+88,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1dU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29)),32);
            tracep->chgBit(oldp+89,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+90,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1dU)))));
            tracep->chgIData(oldp+91,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                        ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                            & (IData)(
                                                      ((1ULL 
                                                        << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                       >> 0x1eU)))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                            : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)
                                        : 0x200U)),32);
            tracep->chgIData(oldp+92,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1eU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)),32);
            tracep->chgBit(oldp+93,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x1eU)))));
            tracep->chgBit(oldp+94,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1eU)))));
            tracep->chgIData(oldp+95,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                        ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                            & (IData)(
                                                      ((1ULL 
                                                        << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                       >> 0x1fU)))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                            : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31)
                                        : 0x40U)),32);
            tracep->chgIData(oldp+96,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                        & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1fU)))
                                        ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                        : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31)),32);
            tracep->chgBit(oldp+97,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                     & (IData)(((1ULL 
                                                 << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+98,((1U & (IData)((
                                                   (1ULL 
                                                    << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                   >> 0x1fU)))));
            tracep->chgIData(oldp+99,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                        ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                            & (IData)(
                                                      ((1ULL 
                                                        << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                       >> 0x20U)))
                                            ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                            : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)
                                        : 2U)),32);
            tracep->chgIData(oldp+100,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x20U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)),32);
            tracep->chgBit(oldp+101,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x20U)))));
            tracep->chgBit(oldp+102,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x20U)))));
            tracep->chgIData(oldp+103,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x21U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33)
                                         : 2U)),32);
            tracep->chgIData(oldp+104,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x21U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33)),32);
            tracep->chgBit(oldp+105,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x21U)))));
            tracep->chgBit(oldp+106,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x21U)))));
            tracep->chgIData(oldp+107,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x22U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)
                                         : 0x400U)),32);
            tracep->chgIData(oldp+108,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x22U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)),32);
            tracep->chgBit(oldp+109,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x22U)))));
            tracep->chgBit(oldp+110,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+111,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x23U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35)
                                         : 0x10U)),32);
            tracep->chgIData(oldp+112,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x23U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35)),32);
            tracep->chgBit(oldp+113,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x23U)))));
            tracep->chgBit(oldp+114,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x23U)))));
            tracep->chgIData(oldp+115,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x24U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36)
                                         : 0x40U)),32);
            tracep->chgIData(oldp+116,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x24U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36)),32);
            tracep->chgBit(oldp+117,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x24U)))));
            tracep->chgBit(oldp+118,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x24U)))));
            tracep->chgIData(oldp+119,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x25U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37)
                                         : 0x400U)),32);
            tracep->chgIData(oldp+120,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x25U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37)),32);
            tracep->chgBit(oldp+121,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x25U)))));
            tracep->chgBit(oldp+122,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x25U)))));
            tracep->chgIData(oldp+123,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x26U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)
                                         : 0x40U)),32);
            tracep->chgIData(oldp+124,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x26U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)),32);
            tracep->chgBit(oldp+125,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x26U)))));
            tracep->chgBit(oldp+126,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x26U)))));
            tracep->chgIData(oldp+127,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x27U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)),32);
            tracep->chgBit(oldp+128,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x27U)))));
            tracep->chgBit(oldp+129,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x27U)))));
            tracep->chgIData(oldp+130,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x28U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)),32);
            tracep->chgBit(oldp+131,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x28U)))));
            tracep->chgBit(oldp+132,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x28U)))));
            tracep->chgIData(oldp+133,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x29U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41)),32);
            tracep->chgBit(oldp+134,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x29U)))));
            tracep->chgBit(oldp+135,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x29U)))));
            tracep->chgIData(oldp+136,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2aU)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42)),32);
            tracep->chgBit(oldp+137,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x2aU)))));
            tracep->chgBit(oldp+138,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2aU)))));
            tracep->chgIData(oldp+139,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2bU)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43)),32);
            tracep->chgBit(oldp+140,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x2bU)))));
            tracep->chgBit(oldp+141,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2bU)))));
            tracep->chgIData(oldp+142,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x2cU)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44)
                                         : (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))),32);
            tracep->chgIData(oldp+143,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2cU)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44)),32);
            tracep->chgBit(oldp+144,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x2cU)))));
            tracep->chgBit(oldp+145,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2cU)))));
            tracep->chgIData(oldp+146,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2dU)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45)),32);
            tracep->chgBit(oldp+147,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x2dU)))));
            tracep->chgBit(oldp+148,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2dU)))));
            tracep->chgIData(oldp+149,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x2eU)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)
                                         : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC)),32);
            tracep->chgIData(oldp+150,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2eU)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)),32);
            tracep->chgBit(oldp+151,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x2eU)))));
            tracep->chgBit(oldp+152,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2eU)))));
            tracep->chgIData(oldp+153,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2fU)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47)),32);
            tracep->chgBit(oldp+154,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x2fU)))));
            tracep->chgBit(oldp+155,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x2fU)))));
            tracep->chgIData(oldp+156,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x30U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)
                                         : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T0)),32);
            tracep->chgIData(oldp+157,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x30U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)),32);
            tracep->chgBit(oldp+158,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x30U)))));
            tracep->chgBit(oldp+159,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x30U)))));
            tracep->chgIData(oldp+160,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x31U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49)),32);
            tracep->chgBit(oldp+161,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x31U)))));
            tracep->chgBit(oldp+162,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x31U)))));
            tracep->chgIData(oldp+163,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x32U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)
                                         : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T0)),32);
            tracep->chgIData(oldp+164,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x32U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)),32);
            tracep->chgBit(oldp+165,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x32U)))));
            tracep->chgBit(oldp+166,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x32U)))));
            tracep->chgIData(oldp+167,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x33U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51)),32);
            tracep->chgBit(oldp+168,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x33U)))));
            tracep->chgBit(oldp+169,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x33U)))));
            tracep->chgIData(oldp+170,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x34U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52)
                                         : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T0)),32);
            tracep->chgIData(oldp+171,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x34U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52)),32);
            tracep->chgBit(oldp+172,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x34U)))));
            tracep->chgBit(oldp+173,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x34U)))));
            tracep->chgIData(oldp+174,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x35U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53)),32);
            tracep->chgBit(oldp+175,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x35U)))));
            tracep->chgBit(oldp+176,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x35U)))));
            tracep->chgIData(oldp+177,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x36U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54)),32);
            tracep->chgBit(oldp+178,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x36U)))));
            tracep->chgBit(oldp+179,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x36U)))));
            tracep->chgIData(oldp+180,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x37U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55)
                                         : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T27))),32);
            tracep->chgIData(oldp+181,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x37U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55)),32);
            tracep->chgBit(oldp+182,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x37U)))));
            tracep->chgBit(oldp+183,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x37U)))));
            tracep->chgIData(oldp+184,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x38U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56)
                                         : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl_count))),32);
            tracep->chgIData(oldp+185,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x38U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56)),32);
            tracep->chgBit(oldp+186,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x38U)))));
            tracep->chgBit(oldp+187,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x38U)))));
            tracep->chgIData(oldp+188,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x39U)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57)
                                         : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl_count))),32);
            tracep->chgIData(oldp+189,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x39U)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57)),32);
            tracep->chgBit(oldp+190,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x39U)))));
            tracep->chgBit(oldp+191,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x39U)))));
            tracep->chgIData(oldp+192,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x3aU)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)
                                         : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl_count))),32);
            tracep->chgIData(oldp+193,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x3aU)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)),32);
            tracep->chgBit(oldp+194,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x3aU)))));
            tracep->chgBit(oldp+195,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x3aU)))));
            tracep->chgIData(oldp+196,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                         ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                             & (IData)(
                                                       ((1ULL 
                                                         << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                        >> 0x3bU)))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59)
                                         : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl_count))),32);
            tracep->chgIData(oldp+197,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                         & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x3bU)))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59)),32);
            tracep->chgBit(oldp+198,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                      & (IData)(((1ULL 
                                                  << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                 >> 0x3bU)))));
            tracep->chgBit(oldp+199,((1U & (IData)(
                                                   ((1ULL 
                                                     << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                    >> 0x3bU)))));
            tracep->chgIData(oldp+200,(((0x20U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((0x10U 
                                             & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((8U 
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
                                             : ((8U 
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
                                             ? ((8U 
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
                                             : ((8U 
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
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0))))))),32);
            tracep->chgIData(oldp+201,(((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((4U 
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
                                             : ((4U 
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
                                         : ((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((4U 
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
                                             : ((4U 
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
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0)))))),32);
            tracep->chgIData(oldp+202,(((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((2U 
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
                                             : ((2U 
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
                                         : ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((2U 
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
                                             : ((2U 
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
                                                  : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0))))),32);
            tracep->chgIData(oldp+203,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4))
                                         : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0)))),32);
            tracep->chgIData(oldp+204,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0))),32);
            tracep->chgIData(oldp+205,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0)),32);
            tracep->chgBit(oldp+206,((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))));
            tracep->chgIData(oldp+207,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2)),32);
            tracep->chgBit(oldp+208,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                            >> 1U))));
            tracep->chgIData(oldp+209,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4))),32);
            tracep->chgIData(oldp+210,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4)),32);
            tracep->chgIData(oldp+211,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6)),32);
            tracep->chgBit(oldp+212,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                            >> 2U))));
            tracep->chgIData(oldp+213,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12))
                                         : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)))),32);
            tracep->chgIData(oldp+214,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8))),32);
            tracep->chgIData(oldp+215,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)),32);
            tracep->chgIData(oldp+216,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10)),32);
            tracep->chgIData(oldp+217,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12))),32);
            tracep->chgIData(oldp+218,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12)),32);
            tracep->chgIData(oldp+219,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14)),32);
            tracep->chgBit(oldp+220,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                            >> 3U))));
            tracep->chgIData(oldp+221,(((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((2U 
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
                                             : ((2U 
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
                                         : ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((2U 
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
                                             : ((2U 
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
                                                  : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))))),32);
            tracep->chgIData(oldp+222,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20))
                                         : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16)))),32);
            tracep->chgIData(oldp+223,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))),32);
            tracep->chgIData(oldp+224,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16)),32);
            tracep->chgIData(oldp+225,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18)),32);
            tracep->chgIData(oldp+226,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20))),32);
            tracep->chgIData(oldp+227,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20)),32);
            tracep->chgIData(oldp+228,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)),32);
            tracep->chgIData(oldp+229,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28))
                                         : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)))),32);
            tracep->chgIData(oldp+230,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24))),32);
            tracep->chgIData(oldp+231,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)),32);
            tracep->chgIData(oldp+232,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)),32);
            tracep->chgIData(oldp+233,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28))),32);
            tracep->chgIData(oldp+234,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28)),32);
            tracep->chgIData(oldp+235,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)),32);
            tracep->chgBit(oldp+236,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                            >> 4U))));
            tracep->chgIData(oldp+237,(((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((2U 
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
                                             : ((4U 
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
                                         : ((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((4U 
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
                                             : ((4U 
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
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)))))),32);
            tracep->chgIData(oldp+238,(((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((2U 
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
                                             : ((2U 
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
                                         : ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((2U 
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
                                             : ((2U 
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
                                                  : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32))))),32);
            tracep->chgIData(oldp+239,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36))
                                         : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)))),32);
            tracep->chgIData(oldp+240,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32))),32);
            tracep->chgIData(oldp+241,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)),32);
            tracep->chgIData(oldp+242,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)),32);
            tracep->chgIData(oldp+243,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36))),32);
            tracep->chgIData(oldp+244,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36)),32);
            tracep->chgIData(oldp+245,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)),32);
            tracep->chgIData(oldp+246,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44))
                                         : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)))),32);
            tracep->chgIData(oldp+247,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40))),32);
            tracep->chgIData(oldp+248,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)),32);
            tracep->chgIData(oldp+249,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42)),32);
            tracep->chgIData(oldp+250,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44))),32);
            tracep->chgIData(oldp+251,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44)),32);
            tracep->chgIData(oldp+252,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)),32);
            tracep->chgIData(oldp+253,(((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56))
                                         : ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((2U 
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
                                             : ((2U 
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
                                                  : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48))))),32);
            tracep->chgIData(oldp+254,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52))
                                         : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)
                                             : ((1U 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                                 ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)))),32);
            tracep->chgIData(oldp+255,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48))),32);
            tracep->chgIData(oldp+256,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)),32);
            tracep->chgIData(oldp+257,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)),32);
            tracep->chgIData(oldp+258,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52))),32);
            tracep->chgIData(oldp+259,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52)),32);
            tracep->chgIData(oldp+260,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54)),32);
            tracep->chgIData(oldp+261,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)
                                         : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                             ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57
                                             : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56))),32);
            tracep->chgIData(oldp+262,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56)),32);
            tracep->chgIData(oldp+263,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                         ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59
                                         : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)),32);
            tracep->chgBit(oldp+264,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                            >> 5U))));
            tracep->chgBit(oldp+265,((0x3cU > (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))));
            tracep->chgBit(oldp+266,(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_read));
            tracep->chgCData(oldp+267,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1))))),2);
            tracep->chgBit(oldp+268,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1)))));
            tracep->chgBit(oldp+269,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1)))));
            tracep->chgBit(oldp+271,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1)))));
            tracep->chgBit(oldp+272,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq));
            tracep->chgBit(oldp+273,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4));
            tracep->chgBit(oldp+274,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4)))));
            tracep->chgBit(oldp+275,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4)))));
            tracep->chgBit(oldp+276,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq));
            tracep->chgBit(oldp+277,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ptr_match))));
            tracep->chgBit(oldp+278,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ptr_match));
            tracep->chgBit(oldp+279,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full));
            tracep->chgBit(oldp+280,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full))));
            tracep->chgBit(oldp+281,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq))));
            tracep->chgWData(oldp+282,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11),90);
            tracep->chgWData(oldp+285,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[0]),90);
            tracep->chgWData(oldp+288,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[1]),90);
            __Vtemp884[0U] = (IData)((((QData)((IData)(
                                                       ((1U 
                                                         & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                         ? (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                    >> 0x20U))
                                                         : (IData)(
                                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                    >> 0x20U))))) 
                                       << 9U) | (QData)((IData)(
                                                                (0x1feU 
                                                                 & (((1U 
                                                                      & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                                      ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)
                                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)) 
                                                                    << 1U))))));
            __Vtemp884[1U] = ((0xfc000000U & (((1U 
                                                & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                ? 1U
                                                : 0U) 
                                              << 0x1aU)) 
                              | (IData)(((((QData)((IData)(
                                                           ((1U 
                                                             & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                             ? (IData)(
                                                                       (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                        >> 0x20U))
                                                             : (IData)(
                                                                       (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                        >> 0x20U))))) 
                                           << 9U) | (QData)((IData)(
                                                                    (0x1feU 
                                                                     & (((1U 
                                                                          & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                                          ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)
                                                                          : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)) 
                                                                        << 1U))))) 
                                         >> 0x20U)));
            __Vtemp884[2U] = (0x3ffffffU & (((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                              ? 1U : 0U) 
                                            >> 6U));
            tracep->chgWData(oldp+291,(__Vtemp884),90);
            tracep->chgQData(oldp+294,((((QData)((IData)(
                                                         ((1U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                           ? (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                      >> 0x20U))
                                                           : (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                      >> 0x20U))))) 
                                         << 9U) | (QData)((IData)(
                                                                  (0x1feU 
                                                                   & (((1U 
                                                                        & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)
                                                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)) 
                                                                      << 1U)))))),57);
            tracep->chgSData(oldp+296,((0x1feU & ((
                                                   (1U 
                                                    & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                    ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)
                                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)) 
                                                  << 1U))),9);
            tracep->chgQData(oldp+297,(((QData)((IData)(
                                                        ((1U 
                                                          & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                          ? 1U
                                                          : 0U))) 
                                        << 1U)),33);
            tracep->chgBit(oldp+299,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__empty));
            tracep->chgBit(oldp+300,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full)))));
            tracep->chgBit(oldp+301,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__full));
            tracep->chgCData(oldp+302,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1))))),2);
            tracep->chgBit(oldp+303,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1)))));
            tracep->chgBit(oldp+304,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1));
            tracep->chgBit(oldp+305,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1)))));
            tracep->chgBit(oldp+306,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1)))));
            tracep->chgBit(oldp+307,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq));
            tracep->chgBit(oldp+308,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4));
            tracep->chgBit(oldp+309,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4)))));
            tracep->chgBit(oldp+310,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4)))));
            tracep->chgBit(oldp+311,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq));
            tracep->chgBit(oldp+312,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ptr_match))));
            tracep->chgBit(oldp+313,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ptr_match));
            tracep->chgBit(oldp+314,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full));
            tracep->chgBit(oldp+315,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full))));
            tracep->chgBit(oldp+316,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq))));
            tracep->chgWData(oldp+317,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11),90);
            tracep->chgWData(oldp+320,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[0]),90);
            tracep->chgWData(oldp+323,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[1]),90);
            tracep->chgQData(oldp+326,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+328,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[0U])),9);
            tracep->chgQData(oldp+329,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+331,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__empty));
            tracep->chgBit(oldp+332,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full)))));
            tracep->chgBit(oldp+333,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__full));
            tracep->chgCData(oldp+334,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1))))),2);
            tracep->chgBit(oldp+335,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1)))));
            tracep->chgBit(oldp+336,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1));
            tracep->chgBit(oldp+337,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1)))));
            tracep->chgBit(oldp+338,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1)))));
            tracep->chgBit(oldp+339,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq));
            tracep->chgBit(oldp+340,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4));
            tracep->chgBit(oldp+341,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4)))));
            tracep->chgBit(oldp+342,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4)))));
            tracep->chgBit(oldp+343,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq));
            tracep->chgBit(oldp+344,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ptr_match))));
            tracep->chgBit(oldp+345,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ptr_match));
            tracep->chgBit(oldp+346,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full));
            tracep->chgBit(oldp+347,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full))));
            tracep->chgBit(oldp+348,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq))));
            tracep->chgWData(oldp+349,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11),90);
            tracep->chgWData(oldp+352,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[0]),90);
            tracep->chgWData(oldp+355,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[1]),90);
            tracep->chgQData(oldp+358,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+360,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[0U])),9);
            tracep->chgQData(oldp+361,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+363,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__empty));
            tracep->chgBit(oldp+364,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full)))));
            tracep->chgBit(oldp+365,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__full));
            tracep->chgCData(oldp+366,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1))))),2);
            tracep->chgBit(oldp+367,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1)))));
            tracep->chgBit(oldp+368,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1));
            tracep->chgBit(oldp+369,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1)))));
            tracep->chgBit(oldp+370,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1)))));
            tracep->chgBit(oldp+371,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq));
            tracep->chgBit(oldp+372,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4));
            tracep->chgBit(oldp+373,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4)))));
            tracep->chgBit(oldp+374,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4)))));
            tracep->chgBit(oldp+375,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq));
            tracep->chgBit(oldp+376,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ptr_match))));
            tracep->chgBit(oldp+377,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ptr_match));
            tracep->chgBit(oldp+378,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full));
            tracep->chgBit(oldp+379,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full))));
            tracep->chgBit(oldp+380,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq))));
            tracep->chgWData(oldp+381,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11),90);
            tracep->chgWData(oldp+384,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[0]),90);
            tracep->chgWData(oldp+387,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[1]),90);
            tracep->chgQData(oldp+390,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+392,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[0U])),9);
            tracep->chgQData(oldp+393,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+395,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__empty));
            tracep->chgBit(oldp+396,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full)))));
            tracep->chgBit(oldp+397,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__full));
            tracep->chgCData(oldp+398,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1))))),2);
            tracep->chgBit(oldp+399,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1)))));
            tracep->chgBit(oldp+400,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1));
            tracep->chgBit(oldp+401,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1)))));
            tracep->chgBit(oldp+402,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1)))));
            tracep->chgBit(oldp+403,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq));
            tracep->chgBit(oldp+404,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4));
            tracep->chgBit(oldp+405,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4)))));
            tracep->chgBit(oldp+406,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4)))));
            tracep->chgBit(oldp+407,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq));
            tracep->chgBit(oldp+408,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ptr_match))));
            tracep->chgBit(oldp+409,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ptr_match));
            tracep->chgBit(oldp+410,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full));
            tracep->chgBit(oldp+411,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full))));
            tracep->chgBit(oldp+412,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq))));
            tracep->chgWData(oldp+413,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11),90);
            tracep->chgWData(oldp+416,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[0]),90);
            tracep->chgWData(oldp+419,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[1]),90);
            tracep->chgQData(oldp+422,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+424,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[0U])),9);
            tracep->chgQData(oldp+425,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+427,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__empty));
            tracep->chgBit(oldp+428,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full)))));
            tracep->chgBit(oldp+429,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__full));
            tracep->chgCData(oldp+430,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1))))),2);
            tracep->chgBit(oldp+431,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1)))));
            tracep->chgBit(oldp+432,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1));
            tracep->chgBit(oldp+433,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1)))));
            tracep->chgBit(oldp+434,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1)))));
            tracep->chgBit(oldp+435,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq));
            tracep->chgBit(oldp+436,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4));
            tracep->chgBit(oldp+437,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4)))));
            tracep->chgBit(oldp+438,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4)))));
            tracep->chgBit(oldp+439,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq));
            tracep->chgBit(oldp+440,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ptr_match))));
            tracep->chgBit(oldp+441,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ptr_match));
            tracep->chgBit(oldp+442,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full));
            tracep->chgBit(oldp+443,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full))));
            tracep->chgBit(oldp+444,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq))));
            tracep->chgWData(oldp+445,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11),90);
            tracep->chgWData(oldp+448,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[0]),90);
            tracep->chgWData(oldp+451,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[1]),90);
            tracep->chgQData(oldp+454,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+456,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[0U])),9);
            tracep->chgQData(oldp+457,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+459,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__empty));
            tracep->chgBit(oldp+460,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full)))));
            tracep->chgBit(oldp+461,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__full));
            tracep->chgCData(oldp+462,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1))))),2);
            tracep->chgBit(oldp+463,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1)))));
            tracep->chgBit(oldp+464,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1));
            tracep->chgBit(oldp+465,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1)))));
            tracep->chgBit(oldp+466,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1)))));
            tracep->chgBit(oldp+467,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq));
            tracep->chgBit(oldp+468,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4));
            tracep->chgBit(oldp+469,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4)))));
            tracep->chgBit(oldp+470,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4)))));
            tracep->chgBit(oldp+471,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq));
            tracep->chgBit(oldp+472,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ptr_match))));
            tracep->chgBit(oldp+473,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ptr_match));
            tracep->chgBit(oldp+474,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full));
            tracep->chgBit(oldp+475,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full))));
            tracep->chgBit(oldp+476,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq))));
            tracep->chgWData(oldp+477,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11),90);
            tracep->chgWData(oldp+480,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[0]),90);
            tracep->chgWData(oldp+483,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[1]),90);
            tracep->chgQData(oldp+486,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+488,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[0U])),9);
            tracep->chgQData(oldp+489,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+491,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__empty));
            tracep->chgBit(oldp+492,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full)))));
            tracep->chgBit(oldp+493,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__full));
            tracep->chgCData(oldp+494,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1))))),2);
            tracep->chgBit(oldp+495,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1)))));
            tracep->chgBit(oldp+496,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1));
            tracep->chgBit(oldp+497,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1)))));
            tracep->chgBit(oldp+498,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1)))));
            tracep->chgBit(oldp+499,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq));
            tracep->chgBit(oldp+500,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4));
            tracep->chgBit(oldp+501,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4)))));
            tracep->chgBit(oldp+502,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4)))));
            tracep->chgBit(oldp+503,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq));
            tracep->chgBit(oldp+504,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ptr_match))));
            tracep->chgBit(oldp+505,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ptr_match));
            tracep->chgBit(oldp+506,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full));
            tracep->chgBit(oldp+507,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full))));
            tracep->chgBit(oldp+508,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq))));
            tracep->chgWData(oldp+509,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11),90);
            tracep->chgWData(oldp+512,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[0]),90);
            tracep->chgWData(oldp+515,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[1]),90);
            tracep->chgQData(oldp+518,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+520,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[0U])),9);
            tracep->chgQData(oldp+521,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+523,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__empty));
            tracep->chgBit(oldp+524,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full)))));
            tracep->chgBit(oldp+525,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__full));
            tracep->chgCData(oldp+526,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1))))),2);
            tracep->chgBit(oldp+527,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1)))));
            tracep->chgBit(oldp+528,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1));
            tracep->chgBit(oldp+529,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1)))));
            tracep->chgBit(oldp+530,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1)))));
            tracep->chgBit(oldp+531,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq));
            tracep->chgBit(oldp+532,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4));
            tracep->chgBit(oldp+533,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4)))));
            tracep->chgBit(oldp+534,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4)))));
            tracep->chgBit(oldp+535,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq));
            tracep->chgBit(oldp+536,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ptr_match))));
            tracep->chgBit(oldp+537,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ptr_match));
            tracep->chgBit(oldp+538,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full));
            tracep->chgBit(oldp+539,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full))));
            tracep->chgBit(oldp+540,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq))));
            tracep->chgWData(oldp+541,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11),90);
            tracep->chgWData(oldp+544,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[0]),90);
            tracep->chgWData(oldp+547,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[1]),90);
            tracep->chgQData(oldp+550,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+552,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[0U])),9);
            tracep->chgQData(oldp+553,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+555,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__empty));
            tracep->chgBit(oldp+556,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full)))));
            tracep->chgBit(oldp+557,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__full));
            tracep->chgCData(oldp+558,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1))))),2);
            tracep->chgBit(oldp+559,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1)))));
            tracep->chgBit(oldp+560,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1));
            tracep->chgBit(oldp+561,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1)))));
            tracep->chgBit(oldp+562,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1)))));
            tracep->chgBit(oldp+563,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq));
            tracep->chgBit(oldp+564,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4));
            tracep->chgBit(oldp+565,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4)))));
            tracep->chgBit(oldp+566,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4)))));
            tracep->chgBit(oldp+567,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq));
            tracep->chgBit(oldp+568,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ptr_match))));
            tracep->chgBit(oldp+569,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ptr_match));
            tracep->chgBit(oldp+570,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full));
            tracep->chgBit(oldp+571,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full))));
            tracep->chgBit(oldp+572,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq))));
            tracep->chgWData(oldp+573,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11),90);
            tracep->chgWData(oldp+576,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[0]),90);
            tracep->chgWData(oldp+579,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[1]),90);
            tracep->chgQData(oldp+582,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+584,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[0U])),9);
            tracep->chgQData(oldp+585,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+587,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__empty));
            tracep->chgBit(oldp+588,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full)))));
            tracep->chgBit(oldp+589,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__full));
            tracep->chgCData(oldp+590,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1))))),2);
            tracep->chgBit(oldp+591,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1)))));
            tracep->chgBit(oldp+592,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1));
            tracep->chgBit(oldp+593,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1)))));
            tracep->chgBit(oldp+594,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1)))));
            tracep->chgBit(oldp+595,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq));
            tracep->chgBit(oldp+596,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4));
            tracep->chgBit(oldp+597,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4)))));
            tracep->chgBit(oldp+598,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4)))));
            tracep->chgBit(oldp+599,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq));
            tracep->chgBit(oldp+600,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ptr_match))));
            tracep->chgBit(oldp+601,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ptr_match));
            tracep->chgBit(oldp+602,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full));
            tracep->chgBit(oldp+603,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full))));
            tracep->chgBit(oldp+604,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq))));
            tracep->chgWData(oldp+605,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11),90);
            tracep->chgWData(oldp+608,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[0]),90);
            tracep->chgWData(oldp+611,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[1]),90);
            tracep->chgQData(oldp+614,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+616,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[0U])),9);
            tracep->chgQData(oldp+617,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+619,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__empty));
            tracep->chgBit(oldp+620,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full)))));
            tracep->chgBit(oldp+621,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__full));
            tracep->chgCData(oldp+622,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1))))),2);
            tracep->chgBit(oldp+623,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1)))));
            tracep->chgBit(oldp+624,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1));
            tracep->chgBit(oldp+625,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1)))));
            tracep->chgBit(oldp+626,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1)))));
            tracep->chgBit(oldp+627,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq));
            tracep->chgBit(oldp+628,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4));
            tracep->chgBit(oldp+629,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4)))));
            tracep->chgBit(oldp+630,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4)))));
            tracep->chgBit(oldp+631,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq));
            tracep->chgBit(oldp+632,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ptr_match))));
            tracep->chgBit(oldp+633,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ptr_match));
            tracep->chgBit(oldp+634,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full));
            tracep->chgBit(oldp+635,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full))));
            tracep->chgBit(oldp+636,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq))));
            tracep->chgWData(oldp+637,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11),90);
            tracep->chgWData(oldp+640,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[0]),90);
            tracep->chgWData(oldp+643,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[1]),90);
            tracep->chgQData(oldp+646,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+648,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[0U])),9);
            tracep->chgQData(oldp+649,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+651,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__empty));
            tracep->chgBit(oldp+652,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full)))));
            tracep->chgBit(oldp+653,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__full));
            tracep->chgCData(oldp+654,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1))))),2);
            tracep->chgBit(oldp+655,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1)))));
            tracep->chgBit(oldp+656,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1));
            tracep->chgBit(oldp+657,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1)))));
            tracep->chgBit(oldp+658,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1)))));
            tracep->chgBit(oldp+659,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq));
            tracep->chgBit(oldp+660,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4));
            tracep->chgBit(oldp+661,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4)))));
            tracep->chgBit(oldp+662,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4)))));
            tracep->chgBit(oldp+663,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq));
            tracep->chgBit(oldp+664,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ptr_match))));
            tracep->chgBit(oldp+665,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ptr_match));
            tracep->chgBit(oldp+666,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full));
            tracep->chgBit(oldp+667,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full))));
            tracep->chgBit(oldp+668,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq))));
            tracep->chgWData(oldp+669,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11),90);
            tracep->chgWData(oldp+672,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[0]),90);
            tracep->chgWData(oldp+675,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[1]),90);
            tracep->chgQData(oldp+678,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+680,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[0U])),9);
            tracep->chgQData(oldp+681,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+683,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__empty));
            tracep->chgBit(oldp+684,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full)))));
            tracep->chgBit(oldp+685,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__full));
            tracep->chgCData(oldp+686,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1))))),2);
            tracep->chgBit(oldp+687,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1)))));
            tracep->chgBit(oldp+688,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1));
            tracep->chgBit(oldp+689,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1)))));
            tracep->chgBit(oldp+690,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1)))));
            tracep->chgBit(oldp+691,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq));
            tracep->chgBit(oldp+692,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4));
            tracep->chgBit(oldp+693,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4)))));
            tracep->chgBit(oldp+694,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4)))));
            tracep->chgBit(oldp+695,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq));
            tracep->chgBit(oldp+696,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ptr_match))));
            tracep->chgBit(oldp+697,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ptr_match));
            tracep->chgBit(oldp+698,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full));
            tracep->chgBit(oldp+699,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full))));
            tracep->chgBit(oldp+700,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq))));
            tracep->chgWData(oldp+701,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11),90);
            tracep->chgWData(oldp+704,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[0]),90);
            tracep->chgWData(oldp+707,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[1]),90);
            tracep->chgQData(oldp+710,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+712,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[0U])),9);
            tracep->chgQData(oldp+713,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+715,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__empty));
            tracep->chgBit(oldp+716,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full)))));
            tracep->chgBit(oldp+717,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__full));
            tracep->chgBit(oldp+718,((1U & (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+719,((1U & vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U])));
            tracep->chgCData(oldp+720,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1))))),2);
            tracep->chgBit(oldp+721,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1)))));
            tracep->chgBit(oldp+722,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1));
            tracep->chgBit(oldp+723,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1)))));
            tracep->chgBit(oldp+724,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1)))));
            tracep->chgBit(oldp+725,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq));
            tracep->chgBit(oldp+726,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4));
            tracep->chgBit(oldp+727,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4)))));
            tracep->chgBit(oldp+728,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4)))));
            tracep->chgBit(oldp+729,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq));
            tracep->chgBit(oldp+730,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ptr_match))));
            tracep->chgBit(oldp+731,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ptr_match));
            tracep->chgBit(oldp+732,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full));
            tracep->chgBit(oldp+733,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full))));
            tracep->chgBit(oldp+734,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq))));
            tracep->chgWData(oldp+735,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11),90);
            tracep->chgWData(oldp+738,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[0]),90);
            tracep->chgWData(oldp+741,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[1]),90);
            tracep->chgQData(oldp+744,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+746,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[0U])),9);
            tracep->chgQData(oldp+747,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+749,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full)))));
            tracep->chgBit(oldp+750,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__full));
            tracep->chgCData(oldp+751,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ptr_match)) 
                                         << 4U) | (0xfU 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1))))),5);
            tracep->chgCData(oldp+752,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4) 
                                                - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1)))),4);
            tracep->chgCData(oldp+753,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1),4);
            tracep->chgCData(oldp+754,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1))
                                                 : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1)))),4);
            tracep->chgCData(oldp+755,((0xfU & ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1)))),4);
            tracep->chgBit(oldp+756,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq));
            tracep->chgCData(oldp+757,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4),4);
            tracep->chgCData(oldp+758,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4))
                                                 : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4)))),4);
            tracep->chgCData(oldp+759,((0xfU & ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4)))),4);
            tracep->chgBit(oldp+760,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq));
            tracep->chgBit(oldp+761,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ptr_match))));
            tracep->chgBit(oldp+762,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ptr_match));
            tracep->chgBit(oldp+763,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full));
            tracep->chgBit(oldp+764,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full))));
            tracep->chgBit(oldp+765,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq))));
            tracep->chgQData(oldp+766,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[0]),64);
            tracep->chgQData(oldp+768,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[1]),64);
            tracep->chgQData(oldp+770,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[2]),64);
            tracep->chgQData(oldp+772,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[3]),64);
            tracep->chgQData(oldp+774,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[4]),64);
            tracep->chgQData(oldp+776,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[5]),64);
            tracep->chgQData(oldp+778,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[6]),64);
            tracep->chgQData(oldp+780,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[7]),64);
            tracep->chgQData(oldp+782,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[8]),64);
            tracep->chgQData(oldp+784,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[9]),64);
            tracep->chgQData(oldp+786,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[10]),64);
            tracep->chgQData(oldp+788,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[11]),64);
            tracep->chgQData(oldp+790,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[12]),64);
            tracep->chgQData(oldp+792,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[13]),64);
            tracep->chgQData(oldp+794,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[14]),64);
            tracep->chgQData(oldp+796,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[15]),64);
            tracep->chgBit(oldp+798,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__empty));
            tracep->chgBit(oldp+799,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full)))));
            tracep->chgBit(oldp+800,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__full));
            tracep->chgCData(oldp+801,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ptr_match)) 
                                         << 4U) | (0xfU 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1))))),5);
            tracep->chgCData(oldp+802,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4) 
                                                - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)))),4);
            tracep->chgCData(oldp+803,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1),4);
            tracep->chgCData(oldp+804,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty)
                                                 ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1))))),4);
            tracep->chgCData(oldp+805,((0xfU & ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)))),4);
            tracep->chgCData(oldp+806,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4),4);
            tracep->chgCData(oldp+807,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4))
                                                 : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4)))),4);
            tracep->chgCData(oldp+808,((0xfU & ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4)))),4);
            tracep->chgBit(oldp+809,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq));
            tracep->chgBit(oldp+810,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ptr_match))));
            tracep->chgBit(oldp+811,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ptr_match));
            tracep->chgBit(oldp+812,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full));
            tracep->chgBit(oldp+813,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq) 
                                       != (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty))))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full))));
            tracep->chgBit(oldp+814,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq) 
                                      != (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty))))));
            __Vtemp885[0U] = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram
                [vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1][0U];
            __Vtemp885[1U] = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram
                [vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1][1U];
            __Vtemp885[2U] = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram
                [vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1][2U];
            __Vtemp885[3U] = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram
                [vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1][3U];
            tracep->chgWData(oldp+815,(__Vtemp885),99);
            tracep->chgWData(oldp+819,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0]),99);
            tracep->chgWData(oldp+823,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[1]),99);
            tracep->chgWData(oldp+827,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[2]),99);
            tracep->chgWData(oldp+831,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[3]),99);
            tracep->chgWData(oldp+835,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[4]),99);
            tracep->chgWData(oldp+839,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[5]),99);
            tracep->chgWData(oldp+843,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[6]),99);
            tracep->chgWData(oldp+847,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[7]),99);
            tracep->chgWData(oldp+851,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[8]),99);
            tracep->chgWData(oldp+855,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[9]),99);
            tracep->chgWData(oldp+859,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[10]),99);
            tracep->chgWData(oldp+863,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[11]),99);
            tracep->chgWData(oldp+867,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[12]),99);
            tracep->chgWData(oldp+871,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[13]),99);
            tracep->chgWData(oldp+875,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[14]),99);
            tracep->chgWData(oldp+879,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[15]),99);
            __Vtemp887[0U] = 0U;
            __Vtemp887[1U] = 0U;
            __Vtemp887[2U] = (0xfffffff8U & (vlTOPp->VerilatedTesterWrapper__DOT__R17 
                                             << 3U));
            __Vtemp887[3U] = (7U & (vlTOPp->VerilatedTesterWrapper__DOT__R17 
                                    >> 0x1dU));
            tracep->chgWData(oldp+883,(__Vtemp887),99);
            __Vtemp888[0U] = 0U;
            __Vtemp888[1U] = 0U;
            __Vtemp888[2U] = vlTOPp->VerilatedTesterWrapper__DOT__R17;
            tracep->chgWData(oldp+887,(__Vtemp888),96);
            tracep->chgBit(oldp+890,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty));
            tracep->chgBit(oldp+891,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full)))));
            tracep->chgBit(oldp+892,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__full));
            tracep->chgCData(oldp+893,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1))))),2);
            tracep->chgBit(oldp+894,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1)))));
            tracep->chgBit(oldp+895,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1));
            tracep->chgBit(oldp+896,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1)))));
            tracep->chgBit(oldp+897,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1)))));
            tracep->chgBit(oldp+898,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq));
            tracep->chgBit(oldp+899,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4));
            tracep->chgBit(oldp+900,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4)))));
            tracep->chgBit(oldp+901,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4)))));
            tracep->chgBit(oldp+902,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq));
            tracep->chgBit(oldp+903,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ptr_match))));
            tracep->chgBit(oldp+904,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ptr_match));
            tracep->chgBit(oldp+905,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full));
            tracep->chgBit(oldp+906,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full))));
            tracep->chgBit(oldp+907,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq))));
            tracep->chgWData(oldp+908,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11),90);
            tracep->chgWData(oldp+911,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[0]),90);
            tracep->chgWData(oldp+914,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[1]),90);
            __Vtemp889[0U] = (IData)((((QData)((IData)(
                                                       (1U 
                                                        & ((~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24) 
                                                           | (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                      >> 0x29U)))))) 
                                       << 0x39U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                          ? (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                     >> 9U))
                                                          : (IData)(
                                                                    (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                     >> 0x20U))))) 
                                        << 9U) | (QData)((IData)(
                                                                 ((((1U 
                                                                     & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                                     ? 8U
                                                                     : 
                                                                    (0xffU 
                                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo))) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24 
                                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)))))))));
            __Vtemp889[1U] = ((0xfc000000U & (((1U 
                                                & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                ? (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                              >> 0x2aU)))
                                                : 0U) 
                                              << 0x1aU)) 
                              | (IData)(((((QData)((IData)(
                                                           (1U 
                                                            & ((~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24) 
                                                               | (IData)(
                                                                         (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                          >> 0x29U)))))) 
                                           << 0x39U) 
                                          | (((QData)((IData)(
                                                              ((1U 
                                                                & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                                ? (IData)(
                                                                          (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                           >> 9U))
                                                                : (IData)(
                                                                          (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                           >> 0x20U))))) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               ((((1U 
                                                                   & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                                   ? 8U
                                                                   : 
                                                                  (0xffU 
                                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo))) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24 
                                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)))))))) 
                                         >> 0x20U)));
            __Vtemp889[2U] = (0x3ffffffU & (((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                              ? (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                            >> 0x2aU)))
                                              : 0U) 
                                            >> 6U));
            tracep->chgWData(oldp+917,(__Vtemp889),90);
            tracep->chgQData(oldp+920,((((QData)((IData)(
                                                         ((1U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                           ? (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                      >> 9U))
                                                           : (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                      >> 0x20U))))) 
                                         << 9U) | (QData)((IData)(
                                                                  ((((1U 
                                                                      & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                                      ? 8U
                                                                      : 
                                                                     (0xffU 
                                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo))) 
                                                                    << 1U) 
                                                                   | (1U 
                                                                      & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24 
                                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)))))))),57);
            tracep->chgSData(oldp+922,(((((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                           ? 8U : (0xffU 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo))) 
                                         << 1U) | (1U 
                                                   & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo))))),9);
            tracep->chgQData(oldp+923,((((QData)((IData)(
                                                         ((1U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                           ? 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                      >> 0x2aU)))
                                                           : 0U))) 
                                         << 1U) | (QData)((IData)(
                                                                  (1U 
                                                                   & ((~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24) 
                                                                      | (IData)(
                                                                                (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                                >> 0x29U)))))))),33);
            tracep->chgBit(oldp+925,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__empty));
            tracep->chgBit(oldp+926,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full)))));
            tracep->chgBit(oldp+927,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__full));
            tracep->chgCData(oldp+928,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1))))),2);
            tracep->chgBit(oldp+929,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1)))));
            tracep->chgBit(oldp+930,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1));
            tracep->chgBit(oldp+931,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1)))));
            tracep->chgBit(oldp+932,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1)))));
            tracep->chgBit(oldp+933,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq));
            tracep->chgBit(oldp+934,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4));
            tracep->chgBit(oldp+935,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4)))));
            tracep->chgBit(oldp+936,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4)))));
            tracep->chgBit(oldp+937,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq));
            tracep->chgBit(oldp+938,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ptr_match))));
            tracep->chgBit(oldp+939,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ptr_match));
            tracep->chgBit(oldp+940,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full));
            tracep->chgBit(oldp+941,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full))));
            tracep->chgBit(oldp+942,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq))));
            tracep->chgWData(oldp+943,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11),90);
            tracep->chgWData(oldp+946,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[0]),90);
            tracep->chgWData(oldp+949,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[1]),90);
            tracep->chgQData(oldp+952,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+954,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[0U])),9);
            tracep->chgQData(oldp+955,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+957,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__empty));
            tracep->chgBit(oldp+958,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full)))));
            tracep->chgBit(oldp+959,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__full));
            tracep->chgCData(oldp+960,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1))))),2);
            tracep->chgBit(oldp+961,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1)))));
            tracep->chgBit(oldp+962,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1));
            tracep->chgBit(oldp+963,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1)))));
            tracep->chgBit(oldp+964,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1)))));
            tracep->chgBit(oldp+965,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq));
            tracep->chgBit(oldp+966,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4));
            tracep->chgBit(oldp+967,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4)))));
            tracep->chgBit(oldp+968,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4)))));
            tracep->chgBit(oldp+969,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq));
            tracep->chgBit(oldp+970,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full) 
                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ptr_match))));
            tracep->chgBit(oldp+971,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ptr_match));
            tracep->chgBit(oldp+972,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full));
            tracep->chgBit(oldp+973,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full))));
            tracep->chgBit(oldp+974,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq) 
                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq))));
            tracep->chgWData(oldp+975,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11),90);
            tracep->chgWData(oldp+978,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[0]),90);
            tracep->chgWData(oldp+981,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[1]),90);
            tracep->chgQData(oldp+984,((0x1ffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+986,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[0U])),9);
            tracep->chgQData(oldp+987,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[2U])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[1U])) 
                                              >> 0x19U)))),33);
            tracep->chgBit(oldp+989,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__empty));
            tracep->chgBit(oldp+990,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full)))));
            tracep->chgBit(oldp+991,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__full));
            tracep->chgCData(oldp+992,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ptr_match)) 
                                         << 1U) | (1U 
                                                   & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4) 
                                                      - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1))))),2);
            tracep->chgBit(oldp+993,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4) 
                                            - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1)))));
            tracep->chgBit(oldp+994,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1));
            tracep->chgBit(oldp+995,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1)))));
            tracep->chgBit(oldp+996,((1U & ((IData)(1U) 
                                            + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1)))));
            tracep->chgBit(oldp+997,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq));
            tracep->chgBit(oldp+998,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4));
            tracep->chgBit(oldp+999,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4)))));
            tracep->chgBit(oldp+1000,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4)))));
            tracep->chgBit(oldp+1001,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq));
            tracep->chgBit(oldp+1002,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ptr_match))));
            tracep->chgBit(oldp+1003,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ptr_match));
            tracep->chgBit(oldp+1004,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full));
            tracep->chgBit(oldp+1005,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full))));
            tracep->chgBit(oldp+1006,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq))));
            tracep->chgWData(oldp+1007,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11),90);
            tracep->chgWData(oldp+1010,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[0]),90);
            tracep->chgWData(oldp+1013,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[1]),90);
            tracep->chgQData(oldp+1016,((0x1ffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+1018,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[0U])),9);
            tracep->chgQData(oldp+1019,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[2U])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[1U])) 
                                               >> 0x19U)))),33);
            tracep->chgBit(oldp+1021,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__empty));
            tracep->chgBit(oldp+1022,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full)))));
            tracep->chgBit(oldp+1023,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__full));
            tracep->chgCData(oldp+1024,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ptr_match)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4) 
                                                - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1))))),2);
            tracep->chgBit(oldp+1025,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4) 
                                             - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1)))));
            tracep->chgBit(oldp+1026,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1));
            tracep->chgBit(oldp+1027,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1)))));
            tracep->chgBit(oldp+1028,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1)))));
            tracep->chgBit(oldp+1029,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq));
            tracep->chgBit(oldp+1030,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4));
            tracep->chgBit(oldp+1031,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4)))));
            tracep->chgBit(oldp+1032,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4)))));
            tracep->chgBit(oldp+1033,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq));
            tracep->chgBit(oldp+1034,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ptr_match))));
            tracep->chgBit(oldp+1035,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ptr_match));
            tracep->chgBit(oldp+1036,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full));
            tracep->chgBit(oldp+1037,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full))));
            tracep->chgBit(oldp+1038,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq))));
            tracep->chgWData(oldp+1039,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11),90);
            tracep->chgWData(oldp+1042,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[0]),90);
            tracep->chgWData(oldp+1045,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[1]),90);
            tracep->chgQData(oldp+1048,((0x1ffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+1050,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[0U])),9);
            tracep->chgQData(oldp+1051,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[2U])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[1U])) 
                                               >> 0x19U)))),33);
            tracep->chgBit(oldp+1053,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__empty));
            tracep->chgBit(oldp+1054,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full)))));
            tracep->chgBit(oldp+1055,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__full));
            tracep->chgCData(oldp+1056,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ptr_match)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4) 
                                                - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1))))),2);
            tracep->chgBit(oldp+1057,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4) 
                                             - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1)))));
            tracep->chgBit(oldp+1058,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1));
            tracep->chgBit(oldp+1059,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1)))));
            tracep->chgBit(oldp+1060,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1)))));
            tracep->chgBit(oldp+1061,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq));
            tracep->chgBit(oldp+1062,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4));
            tracep->chgBit(oldp+1063,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4)))));
            tracep->chgBit(oldp+1064,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4)))));
            tracep->chgBit(oldp+1065,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq));
            tracep->chgBit(oldp+1066,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ptr_match))));
            tracep->chgBit(oldp+1067,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ptr_match));
            tracep->chgBit(oldp+1068,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full));
            tracep->chgBit(oldp+1069,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full))));
            tracep->chgBit(oldp+1070,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq))));
            tracep->chgWData(oldp+1071,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11),90);
            tracep->chgWData(oldp+1074,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[0]),90);
            tracep->chgWData(oldp+1077,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[1]),90);
            tracep->chgQData(oldp+1080,((0x1ffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+1082,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[0U])),9);
            tracep->chgQData(oldp+1083,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[2U])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[1U])) 
                                               >> 0x19U)))),33);
            tracep->chgBit(oldp+1085,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__empty));
            tracep->chgBit(oldp+1086,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full)))));
            tracep->chgBit(oldp+1087,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__full));
            tracep->chgCData(oldp+1088,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ptr_match)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4) 
                                                - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1))))),2);
            tracep->chgBit(oldp+1089,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4) 
                                             - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1)))));
            tracep->chgBit(oldp+1090,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1));
            tracep->chgBit(oldp+1091,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1)))));
            tracep->chgBit(oldp+1092,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1)))));
            tracep->chgBit(oldp+1093,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq));
            tracep->chgBit(oldp+1094,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4));
            tracep->chgBit(oldp+1095,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4)))));
            tracep->chgBit(oldp+1096,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4)))));
            tracep->chgBit(oldp+1097,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq));
            tracep->chgBit(oldp+1098,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ptr_match))));
            tracep->chgBit(oldp+1099,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ptr_match));
            tracep->chgBit(oldp+1100,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full));
            tracep->chgBit(oldp+1101,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full))));
            tracep->chgBit(oldp+1102,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq))));
            tracep->chgWData(oldp+1103,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11),90);
            tracep->chgWData(oldp+1106,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[0]),90);
            tracep->chgWData(oldp+1109,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[1]),90);
            tracep->chgQData(oldp+1112,((0x1ffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+1114,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[0U])),9);
            tracep->chgQData(oldp+1115,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[2U])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[1U])) 
                                               >> 0x19U)))),33);
            tracep->chgBit(oldp+1117,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__empty));
            tracep->chgBit(oldp+1118,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full)))));
            tracep->chgBit(oldp+1119,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__full));
            tracep->chgCData(oldp+1120,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ptr_match)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4) 
                                                - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1))))),2);
            tracep->chgBit(oldp+1121,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4) 
                                             - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1)))));
            tracep->chgBit(oldp+1122,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1));
            tracep->chgBit(oldp+1123,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1)))));
            tracep->chgBit(oldp+1124,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1)))));
            tracep->chgBit(oldp+1125,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq));
            tracep->chgBit(oldp+1126,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4));
            tracep->chgBit(oldp+1127,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4)))));
            tracep->chgBit(oldp+1128,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4)))));
            tracep->chgBit(oldp+1129,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq));
            tracep->chgBit(oldp+1130,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ptr_match))));
            tracep->chgBit(oldp+1131,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ptr_match));
            tracep->chgBit(oldp+1132,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full));
            tracep->chgBit(oldp+1133,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full))));
            tracep->chgBit(oldp+1134,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq))));
            tracep->chgWData(oldp+1135,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11),90);
            tracep->chgWData(oldp+1138,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[0]),90);
            tracep->chgWData(oldp+1141,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[1]),90);
            tracep->chgQData(oldp+1144,((0x1ffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+1146,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[0U])),9);
            tracep->chgQData(oldp+1147,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[2U])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[1U])) 
                                               >> 0x19U)))),33);
            tracep->chgBit(oldp+1149,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__empty));
            tracep->chgBit(oldp+1150,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full)))));
            tracep->chgBit(oldp+1151,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__full));
            tracep->chgCData(oldp+1152,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ptr_match)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4) 
                                                - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1))))),2);
            tracep->chgBit(oldp+1153,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4) 
                                             - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1)))));
            tracep->chgBit(oldp+1154,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1));
            tracep->chgBit(oldp+1155,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1)))));
            tracep->chgBit(oldp+1156,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1)))));
            tracep->chgBit(oldp+1157,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq));
            tracep->chgBit(oldp+1158,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4));
            tracep->chgBit(oldp+1159,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4)))));
            tracep->chgBit(oldp+1160,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4)))));
            tracep->chgBit(oldp+1161,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq));
            tracep->chgBit(oldp+1162,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ptr_match))));
            tracep->chgBit(oldp+1163,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ptr_match));
            tracep->chgBit(oldp+1164,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full));
            tracep->chgBit(oldp+1165,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full))));
            tracep->chgBit(oldp+1166,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq))));
            tracep->chgWData(oldp+1167,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11),90);
            tracep->chgWData(oldp+1170,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[0]),90);
            tracep->chgWData(oldp+1173,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[1]),90);
            tracep->chgQData(oldp+1176,((0x1ffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+1178,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[0U])),9);
            tracep->chgQData(oldp+1179,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[2U])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[1U])) 
                                               >> 0x19U)))),33);
            tracep->chgBit(oldp+1181,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__empty));
            tracep->chgBit(oldp+1182,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full)))));
            tracep->chgBit(oldp+1183,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__full));
            tracep->chgBit(oldp+1184,((1U & (vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1185,((1U & vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[0U])));
            tracep->chgCData(oldp+1186,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ptr_match)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4) 
                                                - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1))))),2);
            tracep->chgBit(oldp+1187,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4) 
                                             - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1)))));
            tracep->chgBit(oldp+1188,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1));
            tracep->chgBit(oldp+1189,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1)))));
            tracep->chgBit(oldp+1190,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1)))));
            tracep->chgBit(oldp+1191,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq));
            tracep->chgBit(oldp+1192,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4));
            tracep->chgBit(oldp+1193,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4)))));
            tracep->chgBit(oldp+1194,((1U & ((IData)(1U) 
                                             + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4)))));
            tracep->chgBit(oldp+1195,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq));
            tracep->chgBit(oldp+1196,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ptr_match))));
            tracep->chgBit(oldp+1197,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ptr_match));
            tracep->chgBit(oldp+1198,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full));
            tracep->chgBit(oldp+1199,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full))));
            tracep->chgBit(oldp+1200,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq))));
            tracep->chgWData(oldp+1201,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11),90);
            tracep->chgWData(oldp+1204,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[0]),90);
            tracep->chgWData(oldp+1207,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[1]),90);
            tracep->chgQData(oldp+1210,((0x1ffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[0U]))))),57);
            tracep->chgSData(oldp+1212,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[0U])),9);
            tracep->chgQData(oldp+1213,((0x1ffffffffULL 
                                         & (((QData)((IData)(
                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[2U])) 
                                             << 7U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[1U])) 
                                               >> 0x19U)))),33);
            tracep->chgBit(oldp+1215,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__empty));
            tracep->chgBit(oldp+1216,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full)))));
            tracep->chgBit(oldp+1217,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__full));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgIData(oldp+1218,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T65)) 
                                                   & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCCEnablePrev)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T65)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC)))),32);
            tracep->chgBit(oldp+1219,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                              ? (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                                 >> 0xfU)
                                              : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                  ? 
                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                                  >> 0xfU)
                                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_id_range))))));
            tracep->chgCData(oldp+1220,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T30)
                                                   ? 0U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T10))
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                      ? 1U
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState))))))),2);
            tracep->chgCData(oldp+1221,((0xffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                                   ? 
                                                  (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                   >> 8U)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                    ? 
                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                    >> 8U)
                                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_count))))),8);
            tracep->chgIData(oldp+1222,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T15)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlocksReceived)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlocksReceived)))),32);
            tracep->chgIData(oldp+1223,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                   ? 
                                                  (0xffffU 
                                                   & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                                                      - (IData)(8U)))
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesAlmostFinished))),32);
            tracep->chgIData(oldp+1224,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T25) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T16)))
                                                   ? 
                                                  ((IData)(8U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesReceived)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T15)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                     ? 0U
                                                     : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesReceived))))),32);
            tracep->chgCData(oldp+1225,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0xffU 
                                                  & (((3U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
                                                      & (5U 
                                                         != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regWaitInterconnect)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regWaitInterconnect))
                                                      : 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                       ? 0U
                                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regWaitInterconnect)))))),8);
            tracep->chgSData(oldp+1226,((0x1ffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                                    ? 
                                                   ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                                       >> 6U))
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                     ? 
                                                    ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                                        >> 6U))
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_id_start))))),9);
            tracep->chgSData(oldp+1227,((0xffffU & 
                                         ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                           ? ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                                               << 0x10U) 
                                              | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                                 >> 0x10U))
                                           : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                               ? ((
                                                   vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                                     >> 0x10U))
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_addr_base))))),16);
            tracep->chgSData(oldp+1228,((0xffffU & 
                                         ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                           ? (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                              >> 0x10U)
                                           : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                               ? (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                  >> 0x10U)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_tiles_per_row))))),16);
            tracep->chgIData(oldp+1229,((0xffffffU 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                             ? ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                 << 0x10U) 
                                                | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                                                   >> 0x10U))
                                             : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                 ? 
                                                ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                                                    >> 0x10U))
                                                 : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_offset_bytes)))),24);
            tracep->chgIData(oldp+1230,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U]
                                          : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                              ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U]
                                              : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_base))),32);
            tracep->chgSData(oldp+1231,((0xffffU & 
                                         ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U]
                                           : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U]
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_size_bytes))))),16);
            tracep->chgBit(oldp+1232,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState) 
                                              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T7))) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) 
                                             | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState))))));
            tracep->chgCData(oldp+1233,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (2U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)) 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T9))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))))),2);
            tracep->chgSData(oldp+1234,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0x3ffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T8)
                                                      ? 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T5)
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddr)))
                                                      : 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                       ? 0U
                                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddr)))))),10);
            tracep->chgSData(oldp+1235,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0xffffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                      ? 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_tiles_per_row) 
                                                      - (IData)(1U))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regTilesPerRowMinusOne))))),16);
            tracep->chgSData(oldp+1236,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0x3ffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T8)
                                                      ? 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddrBase) 
                                                      + 
                                                      (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T15) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T5))
                                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regTilesPerRow)
                                                        : 0U))
                                                      : 
                                                     (0x3ffU 
                                                      & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                          ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_addr_base)
                                                          : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddrBase))))))),10);
            tracep->chgSData(oldp+1237,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0xffffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T8)
                                                      ? 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddrBase) 
                                                      + 
                                                      (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T15) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T5))
                                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regTilesPerRow)
                                                        : 0U))
                                                      : 
                                                     (0x3ffU 
                                                      & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                          ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_addr_base)
                                                          : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regAddrBase))))))),16);
            tracep->chgSData(oldp+1238,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_tiles_per_row)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regTilesPerRow)))),16);
            tracep->chgCData(oldp+1239,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (3U 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                      ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__sel_idrange)
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMRange))))),2);
            tracep->chgCData(oldp+1240,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (3U 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T8)
                                                      ? 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T5)
                                                       ? 
                                                      ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T15)
                                                        ? 0U
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMTarget)))
                                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMTarget))
                                                      : 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                       ? 0U
                                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMTarget)))))),2);
            tracep->chgCData(oldp+1241,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (3U 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                      ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_id_start)
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMStart))))),2);
            tracep->chgBit(oldp+1242,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))));
            tracep->chgBit(oldp+1243,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_0))));
            tracep->chgBit(oldp+1244,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_1))));
            tracep->chgBit(oldp+1245,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_2))));
            tracep->chgBit(oldp+1246,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R23))));
            tracep->chgBit(oldp+1247,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R17))));
            tracep->chgBit(oldp+1248,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R11))));
            tracep->chgBit(oldp+1249,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R5))));
            tracep->chgCData(oldp+1250,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T31) 
                                                   & (1U 
                                                      != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)))
                                                   ? 0U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState)) 
                                                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState)))
                                                    ? 3U
                                                    : 
                                                   (((1U 
                                                      == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState)) 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T21))
                                                     ? 3U
                                                     : 
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T1) 
                                                      & ((~ 
                                                          ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T14) 
                                                           | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T18))) 
                                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T21) 
                                                            & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState)))))
                                                      ? 3U
                                                      : 
                                                     (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T1) 
                                                       & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T14)) 
                                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T18)))
                                                       ? 1U
                                                       : 
                                                      (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T1) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T14))
                                                        ? 2U
                                                        : 
                                                       (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T3) 
                                                         & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                                                            >> 0x1eU))
                                                         ? 3U
                                                         : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regState)))))))))),2);
            tracep->chgIData(oldp+1251,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T38)) 
                                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7) 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                                      & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux_1__DOT__T0))))
                                                   ? 
                                                  ((IData)(8U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T38)
                                                    ? 
                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes 
                                                    - (IData)(8U))
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes)))),32);
            tracep->chgCData(oldp+1252,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T15) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T54)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T14)
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T0) 
                                                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regShiftCount)))
                                                     ? 2U
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState)) 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T54))
                                                      ? 1U
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState))))))),2);
            tracep->chgBit(oldp+1253,((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                             & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T14)) 
                                                & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T0)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regShiftCount))
                                                    : 
                                                   ((0U 
                                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState)) 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regShiftCount))))))));
            tracep->chgQData(oldp+1254,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0ULL : 
                                         ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__T6)
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_1
                                           : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T19)
                                               ? (((QData)((IData)(
                                                                   vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[0U])))
                                               : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_0)))),64);
            tracep->chgQData(oldp+1256,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0ULL : 
                                         ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__T6)
                                           ? 0ULL : 
                                          ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T19)
                                            ? (((QData)((IData)(
                                                                vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[2U])))
                                            : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_1)))),64);
            tracep->chgBit(oldp+1258,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState) 
                                              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T7))) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) 
                                             | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState))))));
            tracep->chgCData(oldp+1259,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (2U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)) 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T9))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))))),2);
            tracep->chgCData(oldp+1260,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0xffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_enq)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R0))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R0))))),8);
            tracep->chgCData(oldp+1261,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0xffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R3))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R3))))),8);
            tracep->chgBit(oldp+1262,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_enq) 
                                           != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq))
                                           ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_enq)
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__maybe_full)))));
            tracep->chgBit(oldp+1263,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq))));
            tracep->chgCData(oldp+1264,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((1U 
                                                   & ((0U 
                                                       < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds) 
                                                      | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))))
                                                   ? 
                                                  (((0U 
                                                     >= vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds) 
                                                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regProfileState)))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)))),2);
            tracep->chgIData(oldp+1265,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T7)) 
                                                   & ((~ 
                                                       ((0U 
                                                         == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T25))) 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T30)))
                                                   ? 
                                                  (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T7)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds)
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds)))),32);
            tracep->chgCData(oldp+1266,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T52)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T50)
                                                    ? 0U
                                                    : 
                                                   (((1U 
                                                      == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)) 
                                                     & (0U 
                                                        == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds))
                                                     ? 
                                                    ((8U 
                                                      & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U])
                                                      ? 2U
                                                      : 3U)
                                                     : 
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T38) 
                                                      & ((~ 
                                                          (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U] 
                                                           >> 2U)) 
                                                         & (~ 
                                                            (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T28[0U] 
                                                             >> 2U))))
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T24)
                                                       ? 0U
                                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)))))))),2);
            tracep->chgIData(oldp+1267,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((0xfU 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_0)))),32);
            tracep->chgCData(oldp+1268,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T56)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 1U
                                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState))))),2);
            tracep->chgIData(oldp+1269,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regProfileState))),32);
            tracep->chgIData(oldp+1270,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((3U 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                         >> 2U)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_2)))),32);
            tracep->chgIData(oldp+1271,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((1U 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                         >> 3U)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_3)))),32);
            tracep->chgIData(oldp+1272,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((7U 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                         >> 1U)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_1)))),32);
            tracep->chgCData(oldp+1273,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((1U 
                                                   & ((0U 
                                                       < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds) 
                                                      | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))))
                                                   ? 
                                                  (((0U 
                                                     >= vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds) 
                                                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regProfileState)))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)))),2);
            tracep->chgIData(oldp+1274,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T7)) 
                                                   & ((~ 
                                                       (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state) 
                                                         >> 1U) 
                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T25))) 
                                                      & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R32)))
                                                   ? 
                                                  (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T7)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds)
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds)))),32);
            tracep->chgCData(oldp+1275,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T55)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T50)
                                                    ? 0U
                                                    : 
                                                   (((1U 
                                                      == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)) 
                                                     & (0U 
                                                        == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds))
                                                     ? 
                                                    ((8U 
                                                      & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U])
                                                      ? 2U
                                                      : 3U)
                                                     : 
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T38) 
                                                      & ((~ 
                                                          (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
                                                           >> 2U)) 
                                                         & (~ 
                                                            (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T28[0U] 
                                                             >> 2U))))
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T24)
                                                       ? 0U
                                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)))))))),2);
            tracep->chgIData(oldp+1276,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((0xfU 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_0)))),32);
            tracep->chgCData(oldp+1277,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T61)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 1U
                                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState))))),2);
            tracep->chgIData(oldp+1278,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regProfileState))),32);
            tracep->chgIData(oldp+1279,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((3U 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                         >> 2U)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_2)))),32);
            tracep->chgIData(oldp+1280,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((1U 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                         >> 3U)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_3)))),32);
            tracep->chgIData(oldp+1281,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((7U 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                         >> 1U)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_1)))),32);
            tracep->chgCData(oldp+1282,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T30)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T28)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T26)
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T17) 
                                                      & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T6)) 
                                                         & (~ 
                                                            (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[0U] 
                                                             >> 2U))))
                                                      ? 
                                                     ((8U 
                                                       & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T10[0U])
                                                       ? 2U
                                                       : 3U)
                                                      : 
                                                     (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T17) 
                                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T6))
                                                       ? 1U
                                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)))))))),2);
            tracep->chgIData(oldp+1283,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((0xfU 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState))))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_0)))),32);
            tracep->chgCData(oldp+1284,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T32)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 1U
                                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState))))),2);
            tracep->chgIData(oldp+1285,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState))),32);
            tracep->chgIData(oldp+1286,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((3U 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState)) 
                                                         >> 2U)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_2)))),32);
            tracep->chgIData(oldp+1287,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((1U 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState)) 
                                                         >> 3U)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_3)))),32);
            tracep->chgIData(oldp+1288,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((7U 
                                                   & ((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState)) 
                                                         >> 1U)))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T12)
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_1)))),32);
            tracep->chgSData(oldp+1289,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11))))),9);
            tracep->chgSData(oldp+1290,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_deq)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14))))),9);
            tracep->chgBit(oldp+1291,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq) 
                                           != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_deq))
                                           ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq)
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__maybe_full)))));
            tracep->chgBit(oldp+1292,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_deq))));
            tracep->chgSData(oldp+1293,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11))))),9);
            tracep->chgSData(oldp+1294,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_deq)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14))))),9);
            tracep->chgBit(oldp+1295,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq) 
                                           != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_deq))
                                           ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq)
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__maybe_full)))));
            tracep->chgBit(oldp+1296,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_deq))));
            tracep->chgSData(oldp+1297,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8))))),9);
            tracep->chgSData(oldp+1298,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0x1ffU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_deq)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11))))),9);
            tracep->chgBit(oldp+1299,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq) 
                                           != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_deq))
                                           ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq)
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__maybe_full)))));
            tracep->chgBit(oldp+1300,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_deq))));
            tracep->chgIData(oldp+1301,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((3U 
                                                   <= 
                                                   (3U 
                                                    & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U]))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__regDecodeErrors)
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__regDecodeErrors))),32);
            tracep->chgCData(oldp+1302,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (4U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
                                                   & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)) 
                                                      & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24))
                                                   ? 0U
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
                                                    & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCompletedWrBytes 
                                                       == vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCmd_waitCompleteBytes))
                                                    ? 4U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
                                                     & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState)))
                                                     ? 3U
                                                     : 
                                                    (((1U 
                                                       == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
                                                      & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState)))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__T1)
                                                       ? 1U
                                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)))))))),3);
            tracep->chgIData(oldp+1303,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((0U 
                                                   == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty)) 
                                                       & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24))
                                                    ? 
                                                   ((IData)(8U) 
                                                    + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCompletedWrBytes)
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCompletedWrBytes)))),32);
            tracep->chgIData(oldp+1304,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((0U 
                                                   == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState))
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCycleCount)
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCycleCount)))),32);
            tracep->chgBit(oldp+1305,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState) 
                                              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T7))) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) 
                                             | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState))))));
            tracep->chgCData(oldp+1306,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (2U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)) 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T9))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))))),2);
            tracep->chgBit(oldp+1307,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState) 
                                              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T7))) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T2) 
                                             | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState))))));
            tracep->chgCData(oldp+1308,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((
                                                   (2U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regState)) 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T9))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T29)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T3)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regState)))))),2);
            tracep->chgBit(oldp+1309,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                       & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T145) 
                                              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__limitReached))) 
                                          & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T136) 
                                                 & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__limitReached)))) 
                                             & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T136) 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__limitReached)) 
                                                | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))))));
            tracep->chgCData(oldp+1310,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0xfU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T145)
                                                      ? 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__limitReached)
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount)))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount))))),4);
            tracep->chgCData(oldp+1311,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : (0xfU 
                                                  & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T136)
                                                      ? 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__limitReached)
                                                       ? 0U
                                                       : 
                                                      ((IData)(1U) 
                                                       + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__regCount)))
                                                      : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__regCount))))),4);
            tracep->chgCData(oldp+1312,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_1)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_0)))),8);
            tracep->chgCData(oldp+1313,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_2)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_1)))),8);
            tracep->chgCData(oldp+1314,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_3)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_2)))),8);
            tracep->chgCData(oldp+1315,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_4)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_3)))),8);
            tracep->chgCData(oldp+1316,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_5)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_4)))),8);
            tracep->chgCData(oldp+1317,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_6)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_5)))),8);
            tracep->chgCData(oldp+1318,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_7)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_6)))),8);
            tracep->chgCData(oldp+1319,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T121)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_7)))),8);
            tracep->chgCData(oldp+1320,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_1)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_0)))),8);
            tracep->chgCData(oldp+1321,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_2)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_1)))),8);
            tracep->chgCData(oldp+1322,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_3)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_2)))),8);
            tracep->chgCData(oldp+1323,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_4)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_3)))),8);
            tracep->chgCData(oldp+1324,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_5)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_4)))),8);
            tracep->chgCData(oldp+1325,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_6)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_5)))),8);
            tracep->chgCData(oldp+1326,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_7)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_6)))),8);
            tracep->chgCData(oldp+1327,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T105)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_7)))),8);
            tracep->chgCData(oldp+1328,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_1)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_0)))),8);
            tracep->chgCData(oldp+1329,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_2)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_1)))),8);
            tracep->chgCData(oldp+1330,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_3)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_2)))),8);
            tracep->chgCData(oldp+1331,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_4)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_3)))),8);
            tracep->chgCData(oldp+1332,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_5)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_4)))),8);
            tracep->chgCData(oldp+1333,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_6)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_5)))),8);
            tracep->chgCData(oldp+1334,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_7)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_6)))),8);
            tracep->chgCData(oldp+1335,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T89)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_7)))),8);
            tracep->chgCData(oldp+1336,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_1)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_0)))),8);
            tracep->chgCData(oldp+1337,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_2)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_1)))),8);
            tracep->chgCData(oldp+1338,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_3)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_2)))),8);
            tracep->chgCData(oldp+1339,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_4)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_3)))),8);
            tracep->chgCData(oldp+1340,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_5)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_4)))),8);
            tracep->chgCData(oldp+1341,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_6)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_5)))),8);
            tracep->chgCData(oldp+1342,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_7)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_6)))),8);
            tracep->chgCData(oldp+1343,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T73)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_7)))),8);
            tracep->chgCData(oldp+1344,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_1)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_0)))),8);
            tracep->chgCData(oldp+1345,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_2)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_1)))),8);
            tracep->chgCData(oldp+1346,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_3)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_2)))),8);
            tracep->chgCData(oldp+1347,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_4)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_3)))),8);
            tracep->chgCData(oldp+1348,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_5)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_4)))),8);
            tracep->chgCData(oldp+1349,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_6)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_5)))),8);
            tracep->chgCData(oldp+1350,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_7)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_6)))),8);
            tracep->chgCData(oldp+1351,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T57)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_7)))),8);
            tracep->chgCData(oldp+1352,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_1)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_0)))),8);
            tracep->chgCData(oldp+1353,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_2)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_1)))),8);
            tracep->chgCData(oldp+1354,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_3)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_2)))),8);
            tracep->chgCData(oldp+1355,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_4)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_3)))),8);
            tracep->chgCData(oldp+1356,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_5)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_4)))),8);
            tracep->chgCData(oldp+1357,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_6)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_5)))),8);
            tracep->chgCData(oldp+1358,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_7)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_6)))),8);
            tracep->chgCData(oldp+1359,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T41)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_7)))),8);
            tracep->chgCData(oldp+1360,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_1)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_0)))),8);
            tracep->chgCData(oldp+1361,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_2)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_1)))),8);
            tracep->chgCData(oldp+1362,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_3)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_2)))),8);
            tracep->chgCData(oldp+1363,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_4)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_3)))),8);
            tracep->chgCData(oldp+1364,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_5)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_4)))),8);
            tracep->chgCData(oldp+1365,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_6)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_5)))),8);
            tracep->chgCData(oldp+1366,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_7)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_6)))),8);
            tracep->chgCData(oldp+1367,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T25)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_7)))),8);
            tracep->chgCData(oldp+1368,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_1)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_0)))),8);
            tracep->chgCData(oldp+1369,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_2)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_1)))),8);
            tracep->chgCData(oldp+1370,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_3)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_2)))),8);
            tracep->chgCData(oldp+1371,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_4)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_3)))),8);
            tracep->chgCData(oldp+1372,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_5)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_4)))),8);
            tracep->chgCData(oldp+1373,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_6)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_5)))),8);
            tracep->chgCData(oldp+1374,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_7)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_6)))),8);
            tracep->chgCData(oldp+1375,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                          ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T1)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_7)))),8);
        }
        tracep->chgBit(oldp+1376,(vlTOPp->clk));
        tracep->chgBit(oldp+1377,(vlTOPp->reset));
        tracep->chgBit(oldp+1378,(vlTOPp->io_regFileIF_cmd_valid));
        tracep->chgCData(oldp+1379,(vlTOPp->io_regFileIF_cmd_bits_regID),6);
        tracep->chgBit(oldp+1380,(vlTOPp->io_regFileIF_cmd_bits_read));
        tracep->chgBit(oldp+1381,(vlTOPp->io_regFileIF_cmd_bits_write));
        tracep->chgIData(oldp+1382,(vlTOPp->io_regFileIF_cmd_bits_writeData),32);
        tracep->chgBit(oldp+1383,(vlTOPp->io_regFileIF_readData_valid));
        tracep->chgIData(oldp+1384,(vlTOPp->io_regFileIF_readData_bits),32);
        tracep->chgCData(oldp+1385,(vlTOPp->io_regFileIF_regCount),6);
        tracep->chgQData(oldp+1386,(vlTOPp->io_memAddr),48);
        tracep->chgBit(oldp+1388,(vlTOPp->io_memWriteEn));
        tracep->chgQData(oldp+1389,(vlTOPp->io_memWriteData),64);
        tracep->chgQData(oldp+1391,(vlTOPp->io_memReadData),64);
        tracep->chgBit(oldp+1393,(vlTOPp->VerilatedTesterWrapper__DOT__T95));
        tracep->chgBit(oldp+1394,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((((IData)(vlTOPp->io_regFileIF_cmd_valid) 
                                              & (IData)(vlTOPp->io_regFileIF_cmd_bits_write)) 
                                             & (0U 
                                                == (IData)(vlTOPp->io_regFileIF_cmd_bits_regID)))
                                             ? vlTOPp->io_regFileIF_cmd_bits_writeData
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__regWrapperReset))))));
        tracep->chgBit(oldp+1395,((1U & ((((IData)(vlTOPp->io_regFileIF_cmd_valid) 
                                           & (IData)(vlTOPp->io_regFileIF_cmd_bits_write)) 
                                          & (0U == (IData)(vlTOPp->io_regFileIF_cmd_bits_regID)))
                                          ? vlTOPp->io_regFileIF_cmd_bits_writeData
                                          : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__regWrapperReset)))));
        tracep->chgBit(oldp+1396,((1U & vlTOPp->io_regFileIF_cmd_bits_writeData)));
        tracep->chgBit(oldp+1397,((((IData)(vlTOPp->io_regFileIF_cmd_valid) 
                                    & (IData)(vlTOPp->io_regFileIF_cmd_bits_write)) 
                                   & (0U == (IData)(vlTOPp->io_regFileIF_cmd_bits_regID)))));
        tracep->chgBit(oldp+1398,((0U == (IData)(vlTOPp->io_regFileIF_cmd_bits_regID))));
        tracep->chgBit(oldp+1399,(((IData)(vlTOPp->io_regFileIF_cmd_valid) 
                                   & (IData)(vlTOPp->io_regFileIF_cmd_bits_write))));
        tracep->chgBit(oldp+1400,(((~ (IData)(vlTOPp->reset)) 
                                   & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__R1) 
                                          & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R7)))) 
                                      & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T4) 
                                         | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R1))))));
        tracep->chgCData(oldp+1401,(((IData)(vlTOPp->reset)
                                      ? 0U : (0xffU 
                                              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T12)
                                                  ? 
                                                 ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__R7) 
                                                  - (IData)(8U))
                                                  : 
                                                 ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T4)
                                                   ? 
                                                  ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[0U] 
                                                      >> 1U))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R7)))))),8);
        tracep->chgIData(oldp+1402,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T4)
                                               ? ((
                                                   vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[1U] 
                                                     >> 0x1aU))
                                               : vlTOPp->VerilatedTesterWrapper__DOT__R17))),32);
        tracep->chgBit(oldp+1403,(((~ (IData)(vlTOPp->reset)) 
                                   & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T31) 
                                          & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__empty))) 
                                      & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T28) 
                                         | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R25))))));
        tracep->chgCData(oldp+1404,(((IData)(vlTOPp->reset)
                                      ? 0U : (0xffU 
                                              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T44)
                                                  ? 
                                                 ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U] 
                                                     >> 1U))
                                                  : 
                                                 ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T41)
                                                   ? 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__R33) 
                                                   - (IData)(8U))
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T39)
                                                    ? 
                                                   ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U] 
                                                       >> 1U))
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T28)
                                                     ? 
                                                    ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U] 
                                                        >> 1U))
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R33)))))))),8);
        tracep->chgQData(oldp+1405,(((IData)(vlTOPp->reset)
                                      ? 0ULL : (0xffffffffffffULL 
                                                & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T12)
                                                    ? 
                                                   (8ULL 
                                                    + vlTOPp->VerilatedTesterWrapper__DOT__R75)
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T4)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[2U])) 
                                                      << 0x37U) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[1U])) 
                                                         << 0x17U) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[0U])) 
                                                           >> 9U)))
                                                     : vlTOPp->VerilatedTesterWrapper__DOT__R75))))),48);
        tracep->chgIData(oldp+1407,((0x3ffffffU & (IData)(
                                                          (0xffffffffffffULL 
                                                           & (vlTOPp->io_memAddr 
                                                              >> 3U))))),26);
        tracep->chgQData(oldp+1408,((0x1fffffffffffULL 
                                     & (vlTOPp->io_memAddr 
                                        >> 3U))),45);
        tracep->chgQData(oldp+1410,(((IData)(vlTOPp->reset)
                                      ? 0ULL : (0xffffffffffffULL 
                                                & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T44)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U])) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U])) 
                                                        << 0x17U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U])) 
                                                          >> 9U)))
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T41)
                                                     ? 
                                                    (8ULL 
                                                     + vlTOPp->VerilatedTesterWrapper__DOT__R82)
                                                     : 
                                                    ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T39)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U])) 
                                                       << 0x37U) 
                                                      | (((QData)((IData)(
                                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U])) 
                                                          << 0x17U) 
                                                         | ((QData)((IData)(
                                                                            vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U])) 
                                                            >> 9U)))
                                                      : 
                                                     ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T28)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U])) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U])) 
                                                           << 0x17U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U])) 
                                                             >> 9U)))
                                                       : vlTOPp->VerilatedTesterWrapper__DOT__R82))))))),48);
        tracep->chgIData(oldp+1412,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T44)
                                               ? ((
                                                   vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U] 
                                                   << 6U) 
                                                  | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                                     >> 0x1aU))
                                               : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T39)
                                                   ? 
                                                  ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U] 
                                                    << 6U) 
                                                   | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                                      >> 0x1aU))
                                                   : 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T28)
                                                    ? 
                                                   ((vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U] 
                                                     << 6U) 
                                                    | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                                       >> 0x1aU))
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__R89))))),32);
        tracep->chgQData(oldp+1413,(vlTOPp->VerilatedTesterWrapper__DOT__mem
                                    [(0x3ffffffU & (IData)(
                                                           (0xffffffffffffULL 
                                                            & (vlTOPp->io_memAddr 
                                                               >> 3U))))]),64);
        tracep->chgBit(oldp+1415,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)))));
        tracep->chgIData(oldp+1416,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             (1ULL 
                                                              << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0)
                                               : 0x8426730U))),32);
        tracep->chgBit(oldp+1417,(((~ (IData)(vlTOPp->reset)) 
                                   & (IData)(vlTOPp->io_regFileIF_cmd_valid))));
        tracep->chgIData(oldp+1418,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 1U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1)
                                               : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo))),32);
        tracep->chgIData(oldp+1419,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 2U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2))),32);
        tracep->chgIData(oldp+1420,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 3U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)))),32);
        tracep->chgIData(oldp+1421,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 4U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4))),32);
        tracep->chgIData(oldp+1422,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 5U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5))),32);
        tracep->chgIData(oldp+1423,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 6U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6))),32);
        tracep->chgIData(oldp+1424,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 7U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7))),32);
        tracep->chgIData(oldp+1425,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 8U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8))),32);
        tracep->chgIData(oldp+1426,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 9U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9))),32);
        tracep->chgIData(oldp+1427,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0xaU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10))),32);
        tracep->chgIData(oldp+1428,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0xbU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11))),32);
        tracep->chgIData(oldp+1429,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0xcU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12))),32);
        tracep->chgIData(oldp+1430,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0xdU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13)
                                               : (1U 
                                                  & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))))),32);
        tracep->chgIData(oldp+1431,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0xeU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14))),32);
        tracep->chgIData(oldp+1432,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0xfU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15))),32);
        tracep->chgIData(oldp+1433,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x10U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))),32);
        tracep->chgIData(oldp+1434,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x11U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17))),32);
        tracep->chgIData(oldp+1435,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x12U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18))),32);
        tracep->chgIData(oldp+1436,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x13U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19))),32);
        tracep->chgIData(oldp+1437,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x14U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20))),32);
        tracep->chgIData(oldp+1438,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x15U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21))),32);
        tracep->chgIData(oldp+1439,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x16U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)
                                               : (1U 
                                                  & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))))),32);
        tracep->chgIData(oldp+1440,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x17U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23))),32);
        tracep->chgIData(oldp+1441,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x18U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24))),32);
        tracep->chgIData(oldp+1442,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x19U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25))),32);
        tracep->chgIData(oldp+1443,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x1aU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T33)))),32);
        tracep->chgIData(oldp+1444,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x1bU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27))),32);
        tracep->chgIData(oldp+1445,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x1cU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T33)))),32);
        tracep->chgIData(oldp+1446,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x1dU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29)
                                               : 0x20U))),32);
        tracep->chgIData(oldp+1447,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x1eU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)
                                               : 0x200U))),32);
        tracep->chgIData(oldp+1448,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x1fU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31)
                                               : 0x40U))),32);
        tracep->chgIData(oldp+1449,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x20U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)
                                               : 2U))),32);
        tracep->chgIData(oldp+1450,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x21U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33)
                                               : 2U))),32);
        tracep->chgIData(oldp+1451,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x22U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)
                                               : 0x400U))),32);
        tracep->chgIData(oldp+1452,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x23U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35)
                                               : 0x10U))),32);
        tracep->chgIData(oldp+1453,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x24U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36)
                                               : 0x40U))),32);
        tracep->chgIData(oldp+1454,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x25U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37)
                                               : 0x400U))),32);
        tracep->chgIData(oldp+1455,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x26U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)
                                               : 0x40U))),32);
        tracep->chgIData(oldp+1456,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x27U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39))),32);
        tracep->chgIData(oldp+1457,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x28U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40))),32);
        tracep->chgIData(oldp+1458,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x29U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41))),32);
        tracep->chgIData(oldp+1459,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x2aU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42))),32);
        tracep->chgIData(oldp+1460,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x2bU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43))),32);
        tracep->chgIData(oldp+1461,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x2cU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44)
                                               : (1U 
                                                  & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))))),32);
        tracep->chgIData(oldp+1462,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x2dU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45))),32);
        tracep->chgIData(oldp+1463,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x2eU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)
                                               : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC))),32);
        tracep->chgIData(oldp+1464,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x2fU)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47))),32);
        tracep->chgIData(oldp+1465,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x30U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)
                                               : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T0))),32);
        tracep->chgIData(oldp+1466,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x31U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49))),32);
        tracep->chgIData(oldp+1467,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x32U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)
                                               : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T0))),32);
        tracep->chgIData(oldp+1468,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x33U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51))),32);
        tracep->chgIData(oldp+1469,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x34U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52)
                                               : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T0))),32);
        tracep->chgIData(oldp+1470,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x35U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53))),32);
        tracep->chgIData(oldp+1471,(((IData)(vlTOPp->reset)
                                      ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                               & (IData)(
                                                         ((1ULL 
                                                           << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                          >> 0x36U)))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54))),32);
        tracep->chgIData(oldp+1472,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x37U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T27)))),32);
        tracep->chgIData(oldp+1473,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x38U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl_count)))),32);
        tracep->chgIData(oldp+1474,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x39U)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl_count)))),32);
        tracep->chgIData(oldp+1475,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x3aU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl_count)))),32);
        tracep->chgIData(oldp+1476,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                               ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                   & (IData)(
                                                             ((1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                              >> 0x3bU)))
                                                   ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl_count)))),32);
        tracep->chgBit(oldp+1477,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1))))));
        tracep->chgBit(oldp+1478,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4))))));
        tracep->chgBit(oldp+1479,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full)))));
        tracep->chgBit(oldp+1480,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1))))));
        tracep->chgBit(oldp+1481,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4))))));
        tracep->chgBit(oldp+1482,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full)))));
        tracep->chgBit(oldp+1483,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1))))));
        tracep->chgBit(oldp+1484,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4))))));
        tracep->chgBit(oldp+1485,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full)))));
        tracep->chgBit(oldp+1486,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1))))));
        tracep->chgBit(oldp+1487,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4))))));
        tracep->chgBit(oldp+1488,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full)))));
        tracep->chgBit(oldp+1489,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1))))));
        tracep->chgBit(oldp+1490,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4))))));
        tracep->chgBit(oldp+1491,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full)))));
        tracep->chgBit(oldp+1492,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1))))));
        tracep->chgBit(oldp+1493,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4))))));
        tracep->chgBit(oldp+1494,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full)))));
        tracep->chgBit(oldp+1495,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1))))));
        tracep->chgBit(oldp+1496,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4))))));
        tracep->chgBit(oldp+1497,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full)))));
        tracep->chgBit(oldp+1498,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1))))));
        tracep->chgBit(oldp+1499,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4))))));
        tracep->chgBit(oldp+1500,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full)))));
        tracep->chgBit(oldp+1501,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1))))));
        tracep->chgBit(oldp+1502,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4))))));
        tracep->chgBit(oldp+1503,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full)))));
        tracep->chgBit(oldp+1504,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1))))));
        tracep->chgBit(oldp+1505,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4))))));
        tracep->chgBit(oldp+1506,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full)))));
        tracep->chgBit(oldp+1507,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1))))));
        tracep->chgBit(oldp+1508,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4))))));
        tracep->chgBit(oldp+1509,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full)))));
        tracep->chgBit(oldp+1510,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1))))));
        tracep->chgBit(oldp+1511,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4))))));
        tracep->chgBit(oldp+1512,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full)))));
        tracep->chgBit(oldp+1513,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1))))));
        tracep->chgBit(oldp+1514,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4))))));
        tracep->chgBit(oldp+1515,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full)))));
        tracep->chgBit(oldp+1516,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1))))));
        tracep->chgBit(oldp+1517,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4))))));
        tracep->chgBit(oldp+1518,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full)))));
        tracep->chgBit(oldp+1519,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1))))));
        tracep->chgBit(oldp+1520,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4))))));
        tracep->chgBit(oldp+1521,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full)))));
        tracep->chgCData(oldp+1522,(((IData)(vlTOPp->reset)
                                      ? 0U : (0xfU 
                                              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1))
                                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1))))),4);
        tracep->chgCData(oldp+1523,(((IData)(vlTOPp->reset)
                                      ? 0U : (0xfU 
                                              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4))
                                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4))))),4);
        tracep->chgBit(oldp+1524,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full)))));
        tracep->chgCData(oldp+1525,(((IData)(vlTOPp->reset)
                                      ? 0U : (0xfU 
                                              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty)
                                                  ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)))))),4);
        tracep->chgCData(oldp+1526,(((IData)(vlTOPp->reset)
                                      ? 0U : (0xfU 
                                              & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4))
                                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4))))),4);
        tracep->chgBit(oldp+1527,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq) 
                                       != (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty))))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full)))));
        tracep->chgBit(oldp+1528,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1))))));
        tracep->chgBit(oldp+1529,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4))))));
        tracep->chgBit(oldp+1530,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full)))));
        tracep->chgBit(oldp+1531,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1))))));
        tracep->chgBit(oldp+1532,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4))))));
        tracep->chgBit(oldp+1533,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full)))));
        tracep->chgBit(oldp+1534,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1))))));
        tracep->chgBit(oldp+1535,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4))))));
        tracep->chgBit(oldp+1536,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full)))));
        tracep->chgBit(oldp+1537,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1))))));
        tracep->chgBit(oldp+1538,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4))))));
        tracep->chgBit(oldp+1539,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full)))));
        tracep->chgBit(oldp+1540,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1))))));
        tracep->chgBit(oldp+1541,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4))))));
        tracep->chgBit(oldp+1542,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full)))));
        tracep->chgBit(oldp+1543,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1))))));
        tracep->chgBit(oldp+1544,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4))))));
        tracep->chgBit(oldp+1545,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full)))));
        tracep->chgBit(oldp+1546,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1))))));
        tracep->chgBit(oldp+1547,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4))))));
        tracep->chgBit(oldp+1548,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full)))));
        tracep->chgBit(oldp+1549,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1))))));
        tracep->chgBit(oldp+1550,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4))))));
        tracep->chgBit(oldp+1551,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full)))));
        tracep->chgBit(oldp+1552,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1))))));
        tracep->chgBit(oldp+1553,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4))))));
        tracep->chgBit(oldp+1554,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full)))));
        tracep->chgBit(oldp+1555,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1))))));
        tracep->chgBit(oldp+1556,((1U & ((~ (IData)(vlTOPp->reset)) 
                                         & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq)
                                             ? ((IData)(1U) 
                                                + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4))
                                             : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4))))));
        tracep->chgBit(oldp+1557,(((~ (IData)(vlTOPp->reset)) 
                                   & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq) 
                                       != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq))
                                       ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full)))));
    }
}

void VTesterWrapper::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VTesterWrapper__Syms* __restrict vlSymsp = static_cast<VTesterWrapper__Syms*>(userp);
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
