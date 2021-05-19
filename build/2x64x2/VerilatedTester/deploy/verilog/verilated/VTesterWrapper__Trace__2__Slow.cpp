// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTesterWrapper__Syms.h"


void VTesterWrapper::traceFullSub2(void* userp, VerilatedVcd* tracep) {
    VTesterWrapper__Syms* __restrict vlSymsp = static_cast<VTesterWrapper__Syms*>(userp);
    VTesterWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp714[3];
    WData/*127:0*/ __Vtemp715[4];
    WData/*127:0*/ __Vtemp717[4];
    WData/*95:0*/ __Vtemp718[3];
    WData/*95:0*/ __Vtemp719[3];
    WData/*95:0*/ __Vtemp720[3];
    WData/*95:0*/ __Vtemp721[3];
    WData/*127:0*/ __Vtemp722[4];
    WData/*127:0*/ __Vtemp723[4];
    // Body
    {
        tracep->fullBit(oldp+5500,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 2U)))));
        tracep->fullBit(oldp+5501,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 2U)))));
        tracep->fullIData(oldp+5502,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 3U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))),32);
        tracep->fullIData(oldp+5503,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 3U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3)),32);
        tracep->fullBit(oldp+5504,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 3U)))));
        tracep->fullBit(oldp+5505,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 3U)))));
        tracep->fullIData(oldp+5506,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 4U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4)),32);
        tracep->fullBit(oldp+5507,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 4U)))));
        tracep->fullBit(oldp+5508,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 4U)))));
        tracep->fullIData(oldp+5509,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 5U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5)),32);
        tracep->fullBit(oldp+5510,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 5U)))));
        tracep->fullBit(oldp+5511,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 5U)))));
        tracep->fullIData(oldp+5512,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 6U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6)),32);
        tracep->fullBit(oldp+5513,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 6U)))));
        tracep->fullBit(oldp+5514,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 6U)))));
        tracep->fullIData(oldp+5515,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 7U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7)),32);
        tracep->fullBit(oldp+5516,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 7U)))));
        tracep->fullBit(oldp+5517,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 7U)))));
        tracep->fullIData(oldp+5518,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 8U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)),32);
        tracep->fullBit(oldp+5519,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 8U)))));
        tracep->fullBit(oldp+5520,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 8U)))));
        tracep->fullIData(oldp+5521,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 9U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9)),32);
        tracep->fullBit(oldp+5522,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 9U)))));
        tracep->fullBit(oldp+5523,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 9U)))));
        tracep->fullIData(oldp+5524,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xaU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10)),32);
        tracep->fullBit(oldp+5525,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0xaU)))));
        tracep->fullBit(oldp+5526,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xaU)))));
        tracep->fullIData(oldp+5527,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xbU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11)),32);
        tracep->fullBit(oldp+5528,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0xbU)))));
        tracep->fullBit(oldp+5529,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xbU)))));
        tracep->fullIData(oldp+5530,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xcU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12)),32);
        tracep->fullBit(oldp+5531,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0xcU)))));
        tracep->fullBit(oldp+5532,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xcU)))));
        tracep->fullIData(oldp+5533,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0xdU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13)
                                       : (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))),32);
        tracep->fullIData(oldp+5534,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xdU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13)),32);
        tracep->fullBit(oldp+5535,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0xdU)))));
        tracep->fullBit(oldp+5536,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xdU)))));
        tracep->fullIData(oldp+5537,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xeU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14)),32);
        tracep->fullBit(oldp+5538,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+5539,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xeU)))));
        tracep->fullIData(oldp+5540,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xfU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15)),32);
        tracep->fullBit(oldp+5541,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0xfU)))));
        tracep->fullBit(oldp+5542,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0xfU)))));
        tracep->fullIData(oldp+5543,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x10U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16)),32);
        tracep->fullBit(oldp+5544,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x10U)))));
        tracep->fullBit(oldp+5545,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x10U)))));
        tracep->fullIData(oldp+5546,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x11U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17)),32);
        tracep->fullBit(oldp+5547,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x11U)))));
        tracep->fullBit(oldp+5548,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x11U)))));
        tracep->fullIData(oldp+5549,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x12U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18)),32);
        tracep->fullBit(oldp+5550,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x12U)))));
        tracep->fullBit(oldp+5551,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x12U)))));
        tracep->fullIData(oldp+5552,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x13U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19)),32);
        tracep->fullBit(oldp+5553,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x13U)))));
        tracep->fullBit(oldp+5554,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x13U)))));
        tracep->fullIData(oldp+5555,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x14U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20)),32);
        tracep->fullBit(oldp+5556,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x14U)))));
        tracep->fullBit(oldp+5557,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x14U)))));
        tracep->fullIData(oldp+5558,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x15U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21)),32);
        tracep->fullBit(oldp+5559,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x15U)))));
        tracep->fullBit(oldp+5560,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x15U)))));
        tracep->fullIData(oldp+5561,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x16U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)
                                       : (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))),32);
        tracep->fullIData(oldp+5562,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x16U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)),32);
        tracep->fullBit(oldp+5563,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x16U)))));
        tracep->fullBit(oldp+5564,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x16U)))));
        tracep->fullIData(oldp+5565,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x17U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23)),32);
        tracep->fullBit(oldp+5566,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x17U)))));
        tracep->fullBit(oldp+5567,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x17U)))));
        tracep->fullIData(oldp+5568,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x18U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)),32);
        tracep->fullBit(oldp+5569,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x18U)))));
        tracep->fullBit(oldp+5570,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x18U)))));
        tracep->fullIData(oldp+5571,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x19U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25)),32);
        tracep->fullBit(oldp+5572,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x19U)))));
        tracep->fullBit(oldp+5573,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x19U)))));
        tracep->fullIData(oldp+5574,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x1aU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T33))),32);
        tracep->fullIData(oldp+5575,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1aU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)),32);
        tracep->fullBit(oldp+5576,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x1aU)))));
        tracep->fullBit(oldp+5577,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1aU)))));
        tracep->fullIData(oldp+5578,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1bU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27)),32);
        tracep->fullBit(oldp+5579,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x1bU)))));
        tracep->fullBit(oldp+5580,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1bU)))));
        tracep->fullIData(oldp+5581,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x1cU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T33))),32);
        tracep->fullIData(oldp+5582,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1cU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28)),32);
        tracep->fullBit(oldp+5583,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x1cU)))));
        tracep->fullBit(oldp+5584,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1cU)))));
        tracep->fullIData(oldp+5585,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x1dU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29)
                                       : 0x20U)),32);
        tracep->fullIData(oldp+5586,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1dU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29)),32);
        tracep->fullBit(oldp+5587,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x1dU)))));
        tracep->fullBit(oldp+5588,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1dU)))));
        tracep->fullIData(oldp+5589,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x1eU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)
                                       : 0x200U)),32);
        tracep->fullIData(oldp+5590,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1eU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)),32);
        tracep->fullBit(oldp+5591,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x1eU)))));
        tracep->fullBit(oldp+5592,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1eU)))));
        tracep->fullIData(oldp+5593,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x1fU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31)
                                       : 0x40U)),32);
        tracep->fullIData(oldp+5594,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1fU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31)),32);
        tracep->fullBit(oldp+5595,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x1fU)))));
        tracep->fullBit(oldp+5596,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x1fU)))));
        tracep->fullIData(oldp+5597,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x20U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)
                                       : 2U)),32);
        tracep->fullIData(oldp+5598,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x20U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)),32);
        tracep->fullBit(oldp+5599,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x20U)))));
        tracep->fullBit(oldp+5600,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x20U)))));
        tracep->fullIData(oldp+5601,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x21U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33)
                                       : 2U)),32);
        tracep->fullIData(oldp+5602,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x21U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33)),32);
        tracep->fullBit(oldp+5603,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x21U)))));
        tracep->fullBit(oldp+5604,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x21U)))));
        tracep->fullIData(oldp+5605,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x22U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)
                                       : 0x400U)),32);
        tracep->fullIData(oldp+5606,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x22U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)),32);
        tracep->fullBit(oldp+5607,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x22U)))));
        tracep->fullBit(oldp+5608,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+5609,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x23U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35)
                                       : 0x10U)),32);
        tracep->fullIData(oldp+5610,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x23U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35)),32);
        tracep->fullBit(oldp+5611,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x23U)))));
        tracep->fullBit(oldp+5612,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x23U)))));
        tracep->fullIData(oldp+5613,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x24U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36)
                                       : 0x40U)),32);
        tracep->fullIData(oldp+5614,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x24U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36)),32);
        tracep->fullBit(oldp+5615,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x24U)))));
        tracep->fullBit(oldp+5616,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x24U)))));
        tracep->fullIData(oldp+5617,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x25U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37)
                                       : 0x400U)),32);
        tracep->fullIData(oldp+5618,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x25U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37)),32);
        tracep->fullBit(oldp+5619,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x25U)))));
        tracep->fullBit(oldp+5620,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x25U)))));
        tracep->fullIData(oldp+5621,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x26U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)
                                       : 0x40U)),32);
        tracep->fullIData(oldp+5622,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x26U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)),32);
        tracep->fullBit(oldp+5623,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x26U)))));
        tracep->fullBit(oldp+5624,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x26U)))));
        tracep->fullIData(oldp+5625,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x27U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39)),32);
        tracep->fullBit(oldp+5626,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x27U)))));
        tracep->fullBit(oldp+5627,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x27U)))));
        tracep->fullIData(oldp+5628,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x28U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)),32);
        tracep->fullBit(oldp+5629,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x28U)))));
        tracep->fullBit(oldp+5630,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x28U)))));
        tracep->fullIData(oldp+5631,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x29U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41)),32);
        tracep->fullBit(oldp+5632,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x29U)))));
        tracep->fullBit(oldp+5633,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x29U)))));
        tracep->fullIData(oldp+5634,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2aU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42)),32);
        tracep->fullBit(oldp+5635,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x2aU)))));
        tracep->fullBit(oldp+5636,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2aU)))));
        tracep->fullIData(oldp+5637,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2bU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43)),32);
        tracep->fullBit(oldp+5638,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x2bU)))));
        tracep->fullBit(oldp+5639,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2bU)))));
        tracep->fullIData(oldp+5640,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x2cU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44)
                                       : (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg))))),32);
        tracep->fullIData(oldp+5641,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2cU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44)),32);
        tracep->fullBit(oldp+5642,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x2cU)))));
        tracep->fullBit(oldp+5643,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2cU)))));
        tracep->fullIData(oldp+5644,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2dU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45)),32);
        tracep->fullBit(oldp+5645,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x2dU)))));
        tracep->fullBit(oldp+5646,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2dU)))));
        tracep->fullIData(oldp+5647,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x2eU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)
                                       : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC)),32);
        tracep->fullIData(oldp+5648,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2eU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)),32);
        tracep->fullBit(oldp+5649,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x2eU)))));
        tracep->fullBit(oldp+5650,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2eU)))));
        tracep->fullIData(oldp+5651,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2fU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47)),32);
        tracep->fullBit(oldp+5652,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x2fU)))));
        tracep->fullBit(oldp+5653,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x2fU)))));
        tracep->fullIData(oldp+5654,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x30U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)
                                       : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T0)),32);
        tracep->fullIData(oldp+5655,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x30U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)),32);
        tracep->fullBit(oldp+5656,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x30U)))));
        tracep->fullBit(oldp+5657,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x30U)))));
        tracep->fullIData(oldp+5658,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x31U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49)),32);
        tracep->fullBit(oldp+5659,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x31U)))));
        tracep->fullBit(oldp+5660,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x31U)))));
        tracep->fullIData(oldp+5661,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x32U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)
                                       : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T0)),32);
        tracep->fullIData(oldp+5662,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x32U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)),32);
        tracep->fullBit(oldp+5663,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x32U)))));
        tracep->fullBit(oldp+5664,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x32U)))));
        tracep->fullIData(oldp+5665,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x33U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51)),32);
        tracep->fullBit(oldp+5666,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x33U)))));
        tracep->fullBit(oldp+5667,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x33U)))));
        tracep->fullIData(oldp+5668,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x34U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52)
                                       : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T0)),32);
        tracep->fullIData(oldp+5669,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x34U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52)),32);
        tracep->fullBit(oldp+5670,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x34U)))));
        tracep->fullBit(oldp+5671,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x34U)))));
        tracep->fullIData(oldp+5672,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x35U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53)),32);
        tracep->fullBit(oldp+5673,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x35U)))));
        tracep->fullBit(oldp+5674,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x35U)))));
        tracep->fullIData(oldp+5675,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x36U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54)),32);
        tracep->fullBit(oldp+5676,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x36U)))));
        tracep->fullBit(oldp+5677,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x36U)))));
        tracep->fullIData(oldp+5678,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x37U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T27))),32);
        tracep->fullIData(oldp+5679,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x37U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55)),32);
        tracep->fullBit(oldp+5680,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x37U)))));
        tracep->fullBit(oldp+5681,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x37U)))));
        tracep->fullIData(oldp+5682,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x38U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl_count))),32);
        tracep->fullIData(oldp+5683,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x38U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56)),32);
        tracep->fullBit(oldp+5684,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x38U)))));
        tracep->fullBit(oldp+5685,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x38U)))));
        tracep->fullIData(oldp+5686,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x39U)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl_count))),32);
        tracep->fullIData(oldp+5687,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x39U)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57)),32);
        tracep->fullBit(oldp+5688,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x39U)))));
        tracep->fullBit(oldp+5689,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x39U)))));
        tracep->fullIData(oldp+5690,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x3aU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl_count))),32);
        tracep->fullIData(oldp+5691,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x3aU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)),32);
        tracep->fullBit(oldp+5692,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x3aU)))));
        tracep->fullBit(oldp+5693,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x3aU)))));
        tracep->fullIData(oldp+5694,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                       ? (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                           & (IData)(
                                                     ((1ULL 
                                                       << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                      >> 0x3bU)))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59)
                                       : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl_count))),32);
        tracep->fullIData(oldp+5695,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                       & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x3bU)))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59)),32);
        tracep->fullBit(oldp+5696,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                    & (IData)(((1ULL 
                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                               >> 0x3bU)))));
        tracep->fullBit(oldp+5697,((1U & (IData)(((1ULL 
                                                   << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                  >> 0x3bU)))));
        tracep->fullIData(oldp+5698,(((0x20U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                     : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)))))
                                       : ((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                     : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0))))))),32);
        tracep->fullIData(oldp+5699,(((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))))
                                       : ((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0)))))),32);
        tracep->fullIData(oldp+5700,(((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)))
                                       : ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0))))),32);
        tracep->fullIData(oldp+5701,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4))
                                       : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0)))),32);
        tracep->fullIData(oldp+5702,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0))),32);
        tracep->fullIData(oldp+5703,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0)),32);
        tracep->fullBit(oldp+5704,((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))));
        tracep->fullIData(oldp+5705,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2)),32);
        tracep->fullBit(oldp+5706,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                          >> 1U))));
        tracep->fullIData(oldp+5707,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4))),32);
        tracep->fullIData(oldp+5708,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4)),32);
        tracep->fullIData(oldp+5709,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6)),32);
        tracep->fullBit(oldp+5710,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                          >> 2U))));
        tracep->fullIData(oldp+5711,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12))
                                       : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)))),32);
        tracep->fullIData(oldp+5712,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8))),32);
        tracep->fullIData(oldp+5713,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8)),32);
        tracep->fullIData(oldp+5714,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10)),32);
        tracep->fullIData(oldp+5715,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12))),32);
        tracep->fullIData(oldp+5716,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12)),32);
        tracep->fullIData(oldp+5717,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14)),32);
        tracep->fullBit(oldp+5718,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                          >> 3U))));
        tracep->fullIData(oldp+5719,(((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)))
                                       : ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))))),32);
        tracep->fullIData(oldp+5720,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20))
                                       : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16)))),32);
        tracep->fullIData(oldp+5721,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))),32);
        tracep->fullIData(oldp+5722,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16)),32);
        tracep->fullIData(oldp+5723,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18)),32);
        tracep->fullIData(oldp+5724,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20))),32);
        tracep->fullIData(oldp+5725,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20)),32);
        tracep->fullIData(oldp+5726,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)),32);
        tracep->fullIData(oldp+5727,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28))
                                       : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)))),32);
        tracep->fullIData(oldp+5728,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24))),32);
        tracep->fullIData(oldp+5729,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)),32);
        tracep->fullIData(oldp+5730,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)),32);
        tracep->fullIData(oldp+5731,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28))),32);
        tracep->fullIData(oldp+5732,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28)),32);
        tracep->fullIData(oldp+5733,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)),32);
        tracep->fullBit(oldp+5734,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                          >> 4U))));
        tracep->fullIData(oldp+5735,(((0x10U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48))))
                                       : ((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)))))),32);
        tracep->fullIData(oldp+5736,(((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)))
                                       : ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32))))),32);
        tracep->fullIData(oldp+5737,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36))
                                       : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)))),32);
        tracep->fullIData(oldp+5738,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32))),32);
        tracep->fullIData(oldp+5739,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)),32);
        tracep->fullIData(oldp+5740,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)),32);
        tracep->fullIData(oldp+5741,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36))),32);
        tracep->fullIData(oldp+5742,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36)),32);
        tracep->fullIData(oldp+5743,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)),32);
        tracep->fullIData(oldp+5744,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44))
                                       : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)))),32);
        tracep->fullIData(oldp+5745,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40))),32);
        tracep->fullIData(oldp+5746,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40)),32);
        tracep->fullIData(oldp+5747,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42)),32);
        tracep->fullIData(oldp+5748,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44))),32);
        tracep->fullIData(oldp+5749,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44)),32);
        tracep->fullIData(oldp+5750,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)),32);
        tracep->fullIData(oldp+5751,(((8U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56))
                                       : ((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
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
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48))))),32);
        tracep->fullIData(oldp+5752,(((4U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52))
                                       : ((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)
                                           : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                               ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49
                                               : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)))),32);
        tracep->fullIData(oldp+5753,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48))),32);
        tracep->fullIData(oldp+5754,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)),32);
        tracep->fullIData(oldp+5755,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)),32);
        tracep->fullIData(oldp+5756,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52))),32);
        tracep->fullIData(oldp+5757,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52)),32);
        tracep->fullIData(oldp+5758,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54)),32);
        tracep->fullIData(oldp+5759,(((2U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)
                                       : ((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57
                                           : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56))),32);
        tracep->fullIData(oldp+5760,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56)),32);
        tracep->fullIData(oldp+5761,(((1U & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59
                                       : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)),32);
        tracep->fullBit(oldp+5762,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID) 
                                          >> 5U))));
        tracep->fullBit(oldp+5763,((0x3cU > (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))));
        tracep->fullBit(oldp+5764,(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_read));
        tracep->fullCData(oldp+5765,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1))))),2);
        tracep->fullBit(oldp+5766,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1)))));
        tracep->fullBit(oldp+5767,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1));
        tracep->fullBit(oldp+5768,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1)))));
        tracep->fullBit(oldp+5769,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1)))));
        tracep->fullBit(oldp+5770,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq));
        tracep->fullBit(oldp+5771,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4));
        tracep->fullBit(oldp+5772,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4)))));
        tracep->fullBit(oldp+5773,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4)))));
        tracep->fullBit(oldp+5774,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq));
        tracep->fullBit(oldp+5775,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ptr_match))));
        tracep->fullBit(oldp+5776,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ptr_match));
        tracep->fullBit(oldp+5777,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full));
        tracep->fullBit(oldp+5778,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full))));
        tracep->fullBit(oldp+5779,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq))));
        tracep->fullWData(oldp+5780,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11),90);
        tracep->fullWData(oldp+5783,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[0]),90);
        tracep->fullWData(oldp+5786,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__ram[1]),90);
        __Vtemp714[0U] = (IData)((((QData)((IData)(
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
        __Vtemp714[1U] = ((0xfc000000U & (((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                            ? 1U : 0U) 
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
        __Vtemp714[2U] = (0x3ffffffU & (((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                          ? 1U : 0U) 
                                        >> 6U));
        tracep->fullWData(oldp+5789,(__Vtemp714),90);
        tracep->fullQData(oldp+5792,((((QData)((IData)(
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
        tracep->fullSData(oldp+5794,((0x1feU & (((1U 
                                                  & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                  ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)
                                                  : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)) 
                                                << 1U))),9);
        tracep->fullQData(oldp+5795,(((QData)((IData)(
                                                      ((1U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                                        ? 1U
                                                        : 0U))) 
                                      << 1U)),33);
        tracep->fullBit(oldp+5797,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__empty));
        tracep->fullBit(oldp+5798,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full)))));
        tracep->fullBit(oldp+5799,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__full));
        tracep->fullCData(oldp+5800,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1))))),2);
        tracep->fullBit(oldp+5801,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1)))));
        tracep->fullBit(oldp+5802,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1));
        tracep->fullBit(oldp+5803,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1)))));
        tracep->fullBit(oldp+5804,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1)))));
        tracep->fullBit(oldp+5805,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq));
        tracep->fullBit(oldp+5806,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4));
        tracep->fullBit(oldp+5807,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4)))));
        tracep->fullBit(oldp+5808,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4)))));
        tracep->fullBit(oldp+5809,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq));
        tracep->fullBit(oldp+5810,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ptr_match))));
        tracep->fullBit(oldp+5811,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ptr_match));
        tracep->fullBit(oldp+5812,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full));
        tracep->fullBit(oldp+5813,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full))));
        tracep->fullBit(oldp+5814,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq))));
        tracep->fullWData(oldp+5815,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11),90);
        tracep->fullWData(oldp+5818,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[0]),90);
        tracep->fullWData(oldp+5821,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__ram[1]),90);
        tracep->fullQData(oldp+5824,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+5826,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[0U])),9);
        tracep->fullQData(oldp+5827,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+5829,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__empty));
        tracep->fullBit(oldp+5830,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full)))));
        tracep->fullBit(oldp+5831,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__full));
        tracep->fullCData(oldp+5832,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1))))),2);
        tracep->fullBit(oldp+5833,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1)))));
        tracep->fullBit(oldp+5834,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1));
        tracep->fullBit(oldp+5835,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1)))));
        tracep->fullBit(oldp+5836,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1)))));
        tracep->fullBit(oldp+5837,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq));
        tracep->fullBit(oldp+5838,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4));
        tracep->fullBit(oldp+5839,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4)))));
        tracep->fullBit(oldp+5840,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4)))));
        tracep->fullBit(oldp+5841,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq));
        tracep->fullBit(oldp+5842,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ptr_match))));
        tracep->fullBit(oldp+5843,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ptr_match));
        tracep->fullBit(oldp+5844,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full));
        tracep->fullBit(oldp+5845,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full))));
        tracep->fullBit(oldp+5846,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq))));
        tracep->fullWData(oldp+5847,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11),90);
        tracep->fullWData(oldp+5850,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[0]),90);
        tracep->fullWData(oldp+5853,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__ram[1]),90);
        tracep->fullQData(oldp+5856,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+5858,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[0U])),9);
        tracep->fullQData(oldp+5859,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+5861,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__empty));
        tracep->fullBit(oldp+5862,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full)))));
        tracep->fullBit(oldp+5863,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__full));
        tracep->fullCData(oldp+5864,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1))))),2);
        tracep->fullBit(oldp+5865,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1)))));
        tracep->fullBit(oldp+5866,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1));
        tracep->fullBit(oldp+5867,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1)))));
        tracep->fullBit(oldp+5868,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1)))));
        tracep->fullBit(oldp+5869,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq));
        tracep->fullBit(oldp+5870,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4));
        tracep->fullBit(oldp+5871,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4)))));
        tracep->fullBit(oldp+5872,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4)))));
        tracep->fullBit(oldp+5873,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq));
        tracep->fullBit(oldp+5874,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ptr_match))));
        tracep->fullBit(oldp+5875,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ptr_match));
        tracep->fullBit(oldp+5876,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full));
        tracep->fullBit(oldp+5877,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full))));
        tracep->fullBit(oldp+5878,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq))));
        tracep->fullWData(oldp+5879,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11),90);
        tracep->fullWData(oldp+5882,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[0]),90);
        tracep->fullWData(oldp+5885,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__ram[1]),90);
        tracep->fullQData(oldp+5888,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+5890,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[0U])),9);
        tracep->fullQData(oldp+5891,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+5893,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__empty));
        tracep->fullBit(oldp+5894,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full)))));
        tracep->fullBit(oldp+5895,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__full));
        tracep->fullCData(oldp+5896,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1))))),2);
        tracep->fullBit(oldp+5897,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1)))));
        tracep->fullBit(oldp+5898,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1));
        tracep->fullBit(oldp+5899,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1)))));
        tracep->fullBit(oldp+5900,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1)))));
        tracep->fullBit(oldp+5901,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq));
        tracep->fullBit(oldp+5902,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4));
        tracep->fullBit(oldp+5903,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4)))));
        tracep->fullBit(oldp+5904,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4)))));
        tracep->fullBit(oldp+5905,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq));
        tracep->fullBit(oldp+5906,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ptr_match))));
        tracep->fullBit(oldp+5907,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ptr_match));
        tracep->fullBit(oldp+5908,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full));
        tracep->fullBit(oldp+5909,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full))));
        tracep->fullBit(oldp+5910,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq))));
        tracep->fullWData(oldp+5911,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11),90);
        tracep->fullWData(oldp+5914,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[0]),90);
        tracep->fullWData(oldp+5917,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__ram[1]),90);
        tracep->fullQData(oldp+5920,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+5922,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[0U])),9);
        tracep->fullQData(oldp+5923,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+5925,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__empty));
        tracep->fullBit(oldp+5926,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full)))));
        tracep->fullBit(oldp+5927,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__full));
        tracep->fullCData(oldp+5928,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1))))),2);
        tracep->fullBit(oldp+5929,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1)))));
        tracep->fullBit(oldp+5930,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1));
        tracep->fullBit(oldp+5931,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1)))));
        tracep->fullBit(oldp+5932,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1)))));
        tracep->fullBit(oldp+5933,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq));
        tracep->fullBit(oldp+5934,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4));
        tracep->fullBit(oldp+5935,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4)))));
        tracep->fullBit(oldp+5936,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4)))));
        tracep->fullBit(oldp+5937,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq));
        tracep->fullBit(oldp+5938,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ptr_match))));
        tracep->fullBit(oldp+5939,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ptr_match));
        tracep->fullBit(oldp+5940,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full));
        tracep->fullBit(oldp+5941,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full))));
        tracep->fullBit(oldp+5942,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq))));
        tracep->fullWData(oldp+5943,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11),90);
        tracep->fullWData(oldp+5946,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[0]),90);
        tracep->fullWData(oldp+5949,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__ram[1]),90);
        tracep->fullQData(oldp+5952,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+5954,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[0U])),9);
        tracep->fullQData(oldp+5955,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+5957,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__empty));
        tracep->fullBit(oldp+5958,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full)))));
        tracep->fullBit(oldp+5959,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__full));
        tracep->fullCData(oldp+5960,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1))))),2);
        tracep->fullBit(oldp+5961,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1)))));
        tracep->fullBit(oldp+5962,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1));
        tracep->fullBit(oldp+5963,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1)))));
        tracep->fullBit(oldp+5964,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1)))));
        tracep->fullBit(oldp+5965,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq));
        tracep->fullBit(oldp+5966,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4));
        tracep->fullBit(oldp+5967,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4)))));
        tracep->fullBit(oldp+5968,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4)))));
        tracep->fullBit(oldp+5969,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq));
        tracep->fullBit(oldp+5970,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ptr_match))));
        tracep->fullBit(oldp+5971,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ptr_match));
        tracep->fullBit(oldp+5972,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full));
        tracep->fullBit(oldp+5973,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full))));
        tracep->fullBit(oldp+5974,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq))));
        tracep->fullWData(oldp+5975,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11),90);
        tracep->fullWData(oldp+5978,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[0]),90);
        tracep->fullWData(oldp+5981,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__ram[1]),90);
        tracep->fullQData(oldp+5984,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+5986,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[0U])),9);
        tracep->fullQData(oldp+5987,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+5989,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__empty));
        tracep->fullBit(oldp+5990,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full)))));
        tracep->fullBit(oldp+5991,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__full));
        tracep->fullCData(oldp+5992,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1))))),2);
        tracep->fullBit(oldp+5993,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1)))));
        tracep->fullBit(oldp+5994,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1));
        tracep->fullBit(oldp+5995,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1)))));
        tracep->fullBit(oldp+5996,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1)))));
        tracep->fullBit(oldp+5997,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq));
        tracep->fullBit(oldp+5998,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4));
        tracep->fullBit(oldp+5999,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4)))));
        tracep->fullBit(oldp+6000,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4)))));
        tracep->fullBit(oldp+6001,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq));
        tracep->fullBit(oldp+6002,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ptr_match))));
        tracep->fullBit(oldp+6003,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ptr_match));
        tracep->fullBit(oldp+6004,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full));
        tracep->fullBit(oldp+6005,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full))));
        tracep->fullBit(oldp+6006,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq))));
        tracep->fullWData(oldp+6007,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11),90);
        tracep->fullWData(oldp+6010,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[0]),90);
        tracep->fullWData(oldp+6013,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__ram[1]),90);
        tracep->fullQData(oldp+6016,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6018,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6019,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6021,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__empty));
        tracep->fullBit(oldp+6022,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full)))));
        tracep->fullBit(oldp+6023,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__full));
        tracep->fullCData(oldp+6024,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1))))),2);
        tracep->fullBit(oldp+6025,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1)))));
        tracep->fullBit(oldp+6026,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1));
        tracep->fullBit(oldp+6027,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1)))));
        tracep->fullBit(oldp+6028,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1)))));
        tracep->fullBit(oldp+6029,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq));
        tracep->fullBit(oldp+6030,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4));
        tracep->fullBit(oldp+6031,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4)))));
        tracep->fullBit(oldp+6032,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4)))));
        tracep->fullBit(oldp+6033,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq));
        tracep->fullBit(oldp+6034,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ptr_match))));
        tracep->fullBit(oldp+6035,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ptr_match));
        tracep->fullBit(oldp+6036,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full));
        tracep->fullBit(oldp+6037,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full))));
        tracep->fullBit(oldp+6038,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq))));
        tracep->fullWData(oldp+6039,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11),90);
        tracep->fullWData(oldp+6042,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[0]),90);
        tracep->fullWData(oldp+6045,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__ram[1]),90);
        tracep->fullQData(oldp+6048,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6050,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6051,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6053,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__empty));
        tracep->fullBit(oldp+6054,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full)))));
        tracep->fullBit(oldp+6055,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__full));
        tracep->fullCData(oldp+6056,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1))))),2);
        tracep->fullBit(oldp+6057,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1)))));
        tracep->fullBit(oldp+6058,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1));
        tracep->fullBit(oldp+6059,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1)))));
        tracep->fullBit(oldp+6060,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1)))));
        tracep->fullBit(oldp+6061,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq));
        tracep->fullBit(oldp+6062,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4));
        tracep->fullBit(oldp+6063,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4)))));
        tracep->fullBit(oldp+6064,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4)))));
        tracep->fullBit(oldp+6065,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq));
        tracep->fullBit(oldp+6066,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ptr_match))));
        tracep->fullBit(oldp+6067,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ptr_match));
        tracep->fullBit(oldp+6068,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full));
        tracep->fullBit(oldp+6069,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full))));
        tracep->fullBit(oldp+6070,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq))));
        tracep->fullWData(oldp+6071,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11),90);
        tracep->fullWData(oldp+6074,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[0]),90);
        tracep->fullWData(oldp+6077,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__ram[1]),90);
        tracep->fullQData(oldp+6080,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6082,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6083,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6085,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__empty));
        tracep->fullBit(oldp+6086,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full)))));
        tracep->fullBit(oldp+6087,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__full));
        tracep->fullCData(oldp+6088,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1))))),2);
        tracep->fullBit(oldp+6089,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1)))));
        tracep->fullBit(oldp+6090,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1));
        tracep->fullBit(oldp+6091,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1)))));
        tracep->fullBit(oldp+6092,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1)))));
        tracep->fullBit(oldp+6093,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq));
        tracep->fullBit(oldp+6094,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4));
        tracep->fullBit(oldp+6095,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4)))));
        tracep->fullBit(oldp+6096,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4)))));
        tracep->fullBit(oldp+6097,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq));
        tracep->fullBit(oldp+6098,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ptr_match))));
        tracep->fullBit(oldp+6099,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ptr_match));
        tracep->fullBit(oldp+6100,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full));
        tracep->fullBit(oldp+6101,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full))));
        tracep->fullBit(oldp+6102,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq))));
        tracep->fullWData(oldp+6103,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11),90);
        tracep->fullWData(oldp+6106,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[0]),90);
        tracep->fullWData(oldp+6109,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__ram[1]),90);
        tracep->fullQData(oldp+6112,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6114,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6115,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6117,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__empty));
        tracep->fullBit(oldp+6118,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full)))));
        tracep->fullBit(oldp+6119,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__full));
        tracep->fullCData(oldp+6120,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1))))),2);
        tracep->fullBit(oldp+6121,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1)))));
        tracep->fullBit(oldp+6122,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1));
        tracep->fullBit(oldp+6123,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1)))));
        tracep->fullBit(oldp+6124,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1)))));
        tracep->fullBit(oldp+6125,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq));
        tracep->fullBit(oldp+6126,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4));
        tracep->fullBit(oldp+6127,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4)))));
        tracep->fullBit(oldp+6128,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4)))));
        tracep->fullBit(oldp+6129,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq));
        tracep->fullBit(oldp+6130,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ptr_match))));
        tracep->fullBit(oldp+6131,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ptr_match));
        tracep->fullBit(oldp+6132,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full));
        tracep->fullBit(oldp+6133,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full))));
        tracep->fullBit(oldp+6134,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq))));
        tracep->fullWData(oldp+6135,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11),90);
        tracep->fullWData(oldp+6138,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[0]),90);
        tracep->fullWData(oldp+6141,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__ram[1]),90);
        tracep->fullQData(oldp+6144,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6146,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6147,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6149,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__empty));
        tracep->fullBit(oldp+6150,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full)))));
        tracep->fullBit(oldp+6151,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__full));
        tracep->fullCData(oldp+6152,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1))))),2);
        tracep->fullBit(oldp+6153,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1)))));
        tracep->fullBit(oldp+6154,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1));
        tracep->fullBit(oldp+6155,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1)))));
        tracep->fullBit(oldp+6156,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1)))));
        tracep->fullBit(oldp+6157,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq));
        tracep->fullBit(oldp+6158,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4));
        tracep->fullBit(oldp+6159,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4)))));
        tracep->fullBit(oldp+6160,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4)))));
        tracep->fullBit(oldp+6161,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq));
        tracep->fullBit(oldp+6162,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ptr_match))));
        tracep->fullBit(oldp+6163,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ptr_match));
        tracep->fullBit(oldp+6164,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full));
        tracep->fullBit(oldp+6165,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full))));
        tracep->fullBit(oldp+6166,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq))));
        tracep->fullWData(oldp+6167,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11),90);
        tracep->fullWData(oldp+6170,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[0]),90);
        tracep->fullWData(oldp+6173,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__ram[1]),90);
        tracep->fullQData(oldp+6176,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6178,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6179,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6181,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__empty));
        tracep->fullBit(oldp+6182,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full)))));
        tracep->fullBit(oldp+6183,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__full));
        tracep->fullCData(oldp+6184,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1))))),2);
        tracep->fullBit(oldp+6185,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1)))));
        tracep->fullBit(oldp+6186,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1));
        tracep->fullBit(oldp+6187,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1)))));
        tracep->fullBit(oldp+6188,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1)))));
        tracep->fullBit(oldp+6189,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq));
        tracep->fullBit(oldp+6190,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4));
        tracep->fullBit(oldp+6191,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4)))));
        tracep->fullBit(oldp+6192,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4)))));
        tracep->fullBit(oldp+6193,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq));
        tracep->fullBit(oldp+6194,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ptr_match))));
        tracep->fullBit(oldp+6195,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ptr_match));
        tracep->fullBit(oldp+6196,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full));
        tracep->fullBit(oldp+6197,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full))));
        tracep->fullBit(oldp+6198,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq))));
        tracep->fullWData(oldp+6199,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11),90);
        tracep->fullWData(oldp+6202,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[0]),90);
        tracep->fullWData(oldp+6205,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__ram[1]),90);
        tracep->fullQData(oldp+6208,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6210,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6211,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6213,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__empty));
        tracep->fullBit(oldp+6214,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full)))));
        tracep->fullBit(oldp+6215,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__full));
        tracep->fullBit(oldp+6216,((1U & (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[1U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+6217,((1U & vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[0U])));
        tracep->fullCData(oldp+6218,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1))))),2);
        tracep->fullBit(oldp+6219,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1)))));
        tracep->fullBit(oldp+6220,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1));
        tracep->fullBit(oldp+6221,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1)))));
        tracep->fullBit(oldp+6222,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1)))));
        tracep->fullBit(oldp+6223,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq));
        tracep->fullBit(oldp+6224,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4));
        tracep->fullBit(oldp+6225,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4)))));
        tracep->fullBit(oldp+6226,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4)))));
        tracep->fullBit(oldp+6227,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq));
        tracep->fullBit(oldp+6228,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ptr_match))));
        tracep->fullBit(oldp+6229,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ptr_match));
        tracep->fullBit(oldp+6230,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full));
        tracep->fullBit(oldp+6231,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full))));
        tracep->fullBit(oldp+6232,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq))));
        tracep->fullWData(oldp+6233,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11),90);
        tracep->fullWData(oldp+6236,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[0]),90);
        tracep->fullWData(oldp+6239,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__ram[1]),90);
        tracep->fullQData(oldp+6242,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6244,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6245,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6247,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full)))));
        tracep->fullBit(oldp+6248,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__full));
        tracep->fullCData(oldp+6249,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ptr_match)) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1))))),5);
        tracep->fullCData(oldp+6250,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4) 
                                              - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1)))),4);
        tracep->fullCData(oldp+6251,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1),4);
        tracep->fullCData(oldp+6252,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq)
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1))
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1)))),4);
        tracep->fullCData(oldp+6253,((0xfU & ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1)))),4);
        tracep->fullBit(oldp+6254,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq));
        tracep->fullCData(oldp+6255,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4),4);
        tracep->fullCData(oldp+6256,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq)
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4))
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4)))),4);
        tracep->fullCData(oldp+6257,((0xfU & ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4)))),4);
        tracep->fullBit(oldp+6258,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq));
        tracep->fullBit(oldp+6259,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ptr_match))));
        tracep->fullBit(oldp+6260,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ptr_match));
        tracep->fullBit(oldp+6261,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full));
        tracep->fullBit(oldp+6262,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full))));
        tracep->fullBit(oldp+6263,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq))));
        tracep->fullQData(oldp+6264,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[0]),64);
        tracep->fullQData(oldp+6266,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[1]),64);
        tracep->fullQData(oldp+6268,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[2]),64);
        tracep->fullQData(oldp+6270,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[3]),64);
        tracep->fullQData(oldp+6272,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[4]),64);
        tracep->fullQData(oldp+6274,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[5]),64);
        tracep->fullQData(oldp+6276,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[6]),64);
        tracep->fullQData(oldp+6278,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[7]),64);
        tracep->fullQData(oldp+6280,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[8]),64);
        tracep->fullQData(oldp+6282,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[9]),64);
        tracep->fullQData(oldp+6284,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[10]),64);
        tracep->fullQData(oldp+6286,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[11]),64);
        tracep->fullQData(oldp+6288,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[12]),64);
        tracep->fullQData(oldp+6290,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[13]),64);
        tracep->fullQData(oldp+6292,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[14]),64);
        tracep->fullQData(oldp+6294,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__ram[15]),64);
        tracep->fullBit(oldp+6296,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__empty));
        tracep->fullBit(oldp+6297,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full)))));
        tracep->fullBit(oldp+6298,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__full));
        tracep->fullCData(oldp+6299,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ptr_match)) 
                                       << 4U) | (0xfU 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1))))),5);
        tracep->fullCData(oldp+6300,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4) 
                                              - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)))),4);
        tracep->fullCData(oldp+6301,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1),4);
        tracep->fullCData(oldp+6302,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty)
                                               ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)
                                               : ((IData)(1U) 
                                                  + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1))))),4);
        tracep->fullCData(oldp+6303,((0xfU & ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)))),4);
        tracep->fullCData(oldp+6304,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4),4);
        tracep->fullCData(oldp+6305,((0xfU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq)
                                               ? ((IData)(1U) 
                                                  + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4))
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4)))),4);
        tracep->fullCData(oldp+6306,((0xfU & ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4)))),4);
        tracep->fullBit(oldp+6307,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq));
        tracep->fullBit(oldp+6308,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ptr_match))));
        tracep->fullBit(oldp+6309,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ptr_match));
        tracep->fullBit(oldp+6310,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full));
        tracep->fullBit(oldp+6311,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq) 
                                     != (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty))))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full))));
        tracep->fullBit(oldp+6312,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq) 
                                    != (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty))))));
        __Vtemp715[0U] = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram
            [vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1][0U];
        __Vtemp715[1U] = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram
            [vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1][1U];
        __Vtemp715[2U] = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram
            [vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1][2U];
        __Vtemp715[3U] = vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram
            [vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1][3U];
        tracep->fullWData(oldp+6313,(__Vtemp715),99);
        tracep->fullWData(oldp+6317,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[0]),99);
        tracep->fullWData(oldp+6321,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[1]),99);
        tracep->fullWData(oldp+6325,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[2]),99);
        tracep->fullWData(oldp+6329,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[3]),99);
        tracep->fullWData(oldp+6333,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[4]),99);
        tracep->fullWData(oldp+6337,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[5]),99);
        tracep->fullWData(oldp+6341,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[6]),99);
        tracep->fullWData(oldp+6345,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[7]),99);
        tracep->fullWData(oldp+6349,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[8]),99);
        tracep->fullWData(oldp+6353,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[9]),99);
        tracep->fullWData(oldp+6357,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[10]),99);
        tracep->fullWData(oldp+6361,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[11]),99);
        tracep->fullWData(oldp+6365,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[12]),99);
        tracep->fullWData(oldp+6369,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[13]),99);
        tracep->fullWData(oldp+6373,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[14]),99);
        tracep->fullWData(oldp+6377,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__ram[15]),99);
        __Vtemp717[0U] = 0U;
        __Vtemp717[1U] = 0U;
        __Vtemp717[2U] = (0xfffffff8U & (vlTOPp->VerilatedTesterWrapper__DOT__R17 
                                         << 3U));
        __Vtemp717[3U] = (7U & (vlTOPp->VerilatedTesterWrapper__DOT__R17 
                                >> 0x1dU));
        tracep->fullWData(oldp+6381,(__Vtemp717),99);
        __Vtemp718[0U] = 0U;
        __Vtemp718[1U] = 0U;
        __Vtemp718[2U] = vlTOPp->VerilatedTesterWrapper__DOT__R17;
        tracep->fullWData(oldp+6385,(__Vtemp718),96);
        tracep->fullBit(oldp+6388,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty));
        tracep->fullBit(oldp+6389,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full)))));
        tracep->fullBit(oldp+6390,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__full));
        tracep->fullCData(oldp+6391,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1))))),2);
        tracep->fullBit(oldp+6392,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1)))));
        tracep->fullBit(oldp+6393,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1));
        tracep->fullBit(oldp+6394,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1)))));
        tracep->fullBit(oldp+6395,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1)))));
        tracep->fullBit(oldp+6396,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq));
        tracep->fullBit(oldp+6397,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4));
        tracep->fullBit(oldp+6398,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4)))));
        tracep->fullBit(oldp+6399,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4)))));
        tracep->fullBit(oldp+6400,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq));
        tracep->fullBit(oldp+6401,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ptr_match))));
        tracep->fullBit(oldp+6402,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ptr_match));
        tracep->fullBit(oldp+6403,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full));
        tracep->fullBit(oldp+6404,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full))));
        tracep->fullBit(oldp+6405,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq))));
        tracep->fullWData(oldp+6406,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11),90);
        tracep->fullWData(oldp+6409,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[0]),90);
        tracep->fullWData(oldp+6412,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__ram[1]),90);
        __Vtemp719[0U] = (IData)((((QData)((IData)(
                                                   (1U 
                                                    & ((~ vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24) 
                                                       | (IData)(
                                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                                  >> 0x29U)))))) 
                                   << 0x39U) | (((QData)((IData)(
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
                                                                         & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)))))))));
        __Vtemp719[1U] = ((0xfc000000U & (((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                            ? (0x3fU 
                                               & (IData)(
                                                         (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                          >> 0x2aU)))
                                            : 0U) << 0x1aU)) 
                          | (IData)(((((QData)((IData)(
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
                                                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo)))))))) 
                                     >> 0x20U)));
        __Vtemp719[2U] = (0x3ffffffU & (((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                          ? (0x3fU 
                                             & (IData)(
                                                       (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo 
                                                        >> 0x2aU)))
                                          : 0U) >> 6U));
        tracep->fullWData(oldp+6415,(__Vtemp719),90);
        tracep->fullQData(oldp+6418,((((QData)((IData)(
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
        tracep->fullSData(oldp+6420,(((((1U & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24)
                                         ? 8U : (0xffU 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo))) 
                                       << 1U) | (1U 
                                                 & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__srlo))))),9);
        tracep->fullQData(oldp+6421,((((QData)((IData)(
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
        tracep->fullBit(oldp+6423,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__empty));
        tracep->fullBit(oldp+6424,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full)))));
        tracep->fullBit(oldp+6425,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__full));
        tracep->fullCData(oldp+6426,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1))))),2);
        tracep->fullBit(oldp+6427,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1)))));
        tracep->fullBit(oldp+6428,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1));
        tracep->fullBit(oldp+6429,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1)))));
        tracep->fullBit(oldp+6430,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1)))));
        tracep->fullBit(oldp+6431,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq));
        tracep->fullBit(oldp+6432,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4));
        tracep->fullBit(oldp+6433,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4)))));
        tracep->fullBit(oldp+6434,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4)))));
        tracep->fullBit(oldp+6435,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq));
        tracep->fullBit(oldp+6436,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ptr_match))));
        tracep->fullBit(oldp+6437,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ptr_match));
        tracep->fullBit(oldp+6438,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full));
        tracep->fullBit(oldp+6439,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full))));
        tracep->fullBit(oldp+6440,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq))));
        tracep->fullWData(oldp+6441,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11),90);
        tracep->fullWData(oldp+6444,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[0]),90);
        tracep->fullWData(oldp+6447,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__ram[1]),90);
        tracep->fullQData(oldp+6450,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6452,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6453,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6455,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__empty));
        tracep->fullBit(oldp+6456,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full)))));
        tracep->fullBit(oldp+6457,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__full));
        tracep->fullCData(oldp+6458,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1))))),2);
        tracep->fullBit(oldp+6459,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1)))));
        tracep->fullBit(oldp+6460,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1));
        tracep->fullBit(oldp+6461,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1)))));
        tracep->fullBit(oldp+6462,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1)))));
        tracep->fullBit(oldp+6463,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq));
        tracep->fullBit(oldp+6464,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4));
        tracep->fullBit(oldp+6465,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4)))));
        tracep->fullBit(oldp+6466,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4)))));
        tracep->fullBit(oldp+6467,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq));
        tracep->fullBit(oldp+6468,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ptr_match))));
        tracep->fullBit(oldp+6469,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ptr_match));
        tracep->fullBit(oldp+6470,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full));
        tracep->fullBit(oldp+6471,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full))));
        tracep->fullBit(oldp+6472,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq))));
        tracep->fullWData(oldp+6473,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11),90);
        tracep->fullWData(oldp+6476,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[0]),90);
        tracep->fullWData(oldp+6479,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__ram[1]),90);
        tracep->fullQData(oldp+6482,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6484,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6485,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6487,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__empty));
        tracep->fullBit(oldp+6488,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full)))));
        tracep->fullBit(oldp+6489,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__full));
        tracep->fullCData(oldp+6490,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1))))),2);
        tracep->fullBit(oldp+6491,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1)))));
        tracep->fullBit(oldp+6492,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1));
        tracep->fullBit(oldp+6493,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1)))));
        tracep->fullBit(oldp+6494,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1)))));
        tracep->fullBit(oldp+6495,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq));
        tracep->fullBit(oldp+6496,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4));
        tracep->fullBit(oldp+6497,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4)))));
        tracep->fullBit(oldp+6498,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4)))));
        tracep->fullBit(oldp+6499,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq));
        tracep->fullBit(oldp+6500,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ptr_match))));
        tracep->fullBit(oldp+6501,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ptr_match));
        tracep->fullBit(oldp+6502,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full));
        tracep->fullBit(oldp+6503,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full))));
        tracep->fullBit(oldp+6504,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq))));
        tracep->fullWData(oldp+6505,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11),90);
        tracep->fullWData(oldp+6508,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[0]),90);
        tracep->fullWData(oldp+6511,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__ram[1]),90);
        tracep->fullQData(oldp+6514,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6516,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6517,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6519,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__empty));
        tracep->fullBit(oldp+6520,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full)))));
        tracep->fullBit(oldp+6521,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__full));
        tracep->fullCData(oldp+6522,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1))))),2);
        tracep->fullBit(oldp+6523,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1)))));
        tracep->fullBit(oldp+6524,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1));
        tracep->fullBit(oldp+6525,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1)))));
        tracep->fullBit(oldp+6526,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1)))));
        tracep->fullBit(oldp+6527,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq));
        tracep->fullBit(oldp+6528,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4));
        tracep->fullBit(oldp+6529,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4)))));
        tracep->fullBit(oldp+6530,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4)))));
        tracep->fullBit(oldp+6531,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq));
        tracep->fullBit(oldp+6532,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ptr_match))));
        tracep->fullBit(oldp+6533,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ptr_match));
        tracep->fullBit(oldp+6534,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full));
        tracep->fullBit(oldp+6535,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full))));
        tracep->fullBit(oldp+6536,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq))));
        tracep->fullWData(oldp+6537,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11),90);
        tracep->fullWData(oldp+6540,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[0]),90);
        tracep->fullWData(oldp+6543,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__ram[1]),90);
        tracep->fullQData(oldp+6546,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6548,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6549,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6551,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__empty));
        tracep->fullBit(oldp+6552,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full)))));
        tracep->fullBit(oldp+6553,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__full));
        tracep->fullCData(oldp+6554,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1))))),2);
        tracep->fullBit(oldp+6555,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1)))));
        tracep->fullBit(oldp+6556,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1));
        tracep->fullBit(oldp+6557,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1)))));
        tracep->fullBit(oldp+6558,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1)))));
        tracep->fullBit(oldp+6559,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq));
        tracep->fullBit(oldp+6560,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4));
        tracep->fullBit(oldp+6561,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4)))));
        tracep->fullBit(oldp+6562,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4)))));
        tracep->fullBit(oldp+6563,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq));
        tracep->fullBit(oldp+6564,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ptr_match))));
        tracep->fullBit(oldp+6565,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ptr_match));
        tracep->fullBit(oldp+6566,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full));
        tracep->fullBit(oldp+6567,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full))));
        tracep->fullBit(oldp+6568,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq))));
        tracep->fullWData(oldp+6569,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11),90);
        tracep->fullWData(oldp+6572,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[0]),90);
        tracep->fullWData(oldp+6575,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__ram[1]),90);
        tracep->fullQData(oldp+6578,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6580,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6581,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6583,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__empty));
        tracep->fullBit(oldp+6584,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full)))));
        tracep->fullBit(oldp+6585,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__full));
        tracep->fullCData(oldp+6586,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1))))),2);
        tracep->fullBit(oldp+6587,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1)))));
        tracep->fullBit(oldp+6588,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1));
        tracep->fullBit(oldp+6589,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1)))));
        tracep->fullBit(oldp+6590,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1)))));
        tracep->fullBit(oldp+6591,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq));
        tracep->fullBit(oldp+6592,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4));
        tracep->fullBit(oldp+6593,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4)))));
        tracep->fullBit(oldp+6594,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4)))));
        tracep->fullBit(oldp+6595,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq));
        tracep->fullBit(oldp+6596,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ptr_match))));
        tracep->fullBit(oldp+6597,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ptr_match));
        tracep->fullBit(oldp+6598,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full));
        tracep->fullBit(oldp+6599,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full))));
        tracep->fullBit(oldp+6600,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq))));
        tracep->fullWData(oldp+6601,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11),90);
        tracep->fullWData(oldp+6604,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[0]),90);
        tracep->fullWData(oldp+6607,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__ram[1]),90);
        tracep->fullQData(oldp+6610,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6612,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6613,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6615,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__empty));
        tracep->fullBit(oldp+6616,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full)))));
        tracep->fullBit(oldp+6617,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__full));
        tracep->fullCData(oldp+6618,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1))))),2);
        tracep->fullBit(oldp+6619,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1)))));
        tracep->fullBit(oldp+6620,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1));
        tracep->fullBit(oldp+6621,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1)))));
        tracep->fullBit(oldp+6622,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1)))));
        tracep->fullBit(oldp+6623,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq));
        tracep->fullBit(oldp+6624,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4));
        tracep->fullBit(oldp+6625,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4)))));
        tracep->fullBit(oldp+6626,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4)))));
        tracep->fullBit(oldp+6627,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq));
        tracep->fullBit(oldp+6628,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ptr_match))));
        tracep->fullBit(oldp+6629,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ptr_match));
        tracep->fullBit(oldp+6630,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full));
        tracep->fullBit(oldp+6631,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full))));
        tracep->fullBit(oldp+6632,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq))));
        tracep->fullWData(oldp+6633,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11),90);
        tracep->fullWData(oldp+6636,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[0]),90);
        tracep->fullWData(oldp+6639,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__ram[1]),90);
        tracep->fullQData(oldp+6642,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6644,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6645,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6647,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__empty));
        tracep->fullBit(oldp+6648,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full)))));
        tracep->fullBit(oldp+6649,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__full));
        tracep->fullCData(oldp+6650,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1))))),2);
        tracep->fullBit(oldp+6651,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1)))));
        tracep->fullBit(oldp+6652,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1));
        tracep->fullBit(oldp+6653,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1)))));
        tracep->fullBit(oldp+6654,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1)))));
        tracep->fullBit(oldp+6655,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq));
        tracep->fullBit(oldp+6656,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4));
        tracep->fullBit(oldp+6657,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4)))));
        tracep->fullBit(oldp+6658,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4)))));
        tracep->fullBit(oldp+6659,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq));
        tracep->fullBit(oldp+6660,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ptr_match))));
        tracep->fullBit(oldp+6661,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ptr_match));
        tracep->fullBit(oldp+6662,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full));
        tracep->fullBit(oldp+6663,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full))));
        tracep->fullBit(oldp+6664,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq))));
        tracep->fullWData(oldp+6665,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11),90);
        tracep->fullWData(oldp+6668,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[0]),90);
        tracep->fullWData(oldp+6671,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__ram[1]),90);
        tracep->fullQData(oldp+6674,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6676,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6677,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6679,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__empty));
        tracep->fullBit(oldp+6680,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full)))));
        tracep->fullBit(oldp+6681,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__full));
        tracep->fullBit(oldp+6682,((1U & (vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[1U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+6683,((1U & vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[0U])));
        tracep->fullCData(oldp+6684,(((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full) 
                                        & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ptr_match)) 
                                       << 1U) | (1U 
                                                 & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4) 
                                                    - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1))))),2);
        tracep->fullBit(oldp+6685,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4) 
                                          - (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1)))));
        tracep->fullBit(oldp+6686,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1));
        tracep->fullBit(oldp+6687,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1)))));
        tracep->fullBit(oldp+6688,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1)))));
        tracep->fullBit(oldp+6689,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq));
        tracep->fullBit(oldp+6690,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4));
        tracep->fullBit(oldp+6691,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq)
                                           ? ((IData)(1U) 
                                              + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4))
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4)))));
        tracep->fullBit(oldp+6692,((1U & ((IData)(1U) 
                                          + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4)))));
        tracep->fullBit(oldp+6693,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq));
        tracep->fullBit(oldp+6694,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ptr_match))));
        tracep->fullBit(oldp+6695,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ptr_match));
        tracep->fullBit(oldp+6696,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full));
        tracep->fullBit(oldp+6697,((((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq) 
                                     != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq))
                                     ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq)
                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full))));
        tracep->fullBit(oldp+6698,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq) 
                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq))));
        tracep->fullWData(oldp+6699,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11),90);
        tracep->fullWData(oldp+6702,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[0]),90);
        tracep->fullWData(oldp+6705,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__ram[1]),90);
        tracep->fullQData(oldp+6708,((0x1ffffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[0U]))))),57);
        tracep->fullSData(oldp+6710,((0x1ffU & vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[0U])),9);
        tracep->fullQData(oldp+6711,((0x1ffffffffULL 
                                      & (((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[2U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T11[1U])) 
                                          >> 0x19U)))),33);
        tracep->fullBit(oldp+6713,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__empty));
        tracep->fullBit(oldp+6714,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full)))));
        tracep->fullBit(oldp+6715,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__full));
        tracep->fullIData(oldp+6716,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T65)) 
                                                & (vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCCEnablePrev)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__T65)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC)))),32);
        tracep->fullBit(oldp+6717,((1U & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                           ? (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                              >> 0xfU)
                                           : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                               ? (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                                  >> 0xfU)
                                               : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_id_range))))));
        tracep->fullCData(oldp+6718,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T30)
                                                ? 0U
                                                : (
                                                   ((2U 
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
        tracep->fullCData(oldp+6719,((0xffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                                ? (
                                                   vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                   >> 8U)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                    ? 
                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                    >> 8U)
                                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_count))))),8);
        tracep->fullIData(oldp+6720,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T15)
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlocksReceived)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlocksReceived)))),32);
        tracep->fullIData(oldp+6721,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                ? (0xffffU 
                                                   & (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                                                      - (IData)(8U)))
                                                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesAlmostFinished))),32);
        tracep->fullIData(oldp+6722,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T25) 
                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T16)))
                                                ? ((IData)(8U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesReceived)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T15)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                     ? 0U
                                                     : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regBlockBytesReceived))))),32);
        tracep->fullCData(oldp+6723,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
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
        tracep->fullSData(oldp+6724,((0x1ffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
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
        tracep->fullSData(oldp+6725,((0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                                  ? 
                                                 ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                                     >> 0x10U))
                                                  : 
                                                 ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                   ? 
                                                  ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U] 
                                                      >> 0x10U))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_addr_base))))),16);
        tracep->fullSData(oldp+6726,((0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                                  ? 
                                                 (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                  >> 0x10U)
                                                  : 
                                                 ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                   ? 
                                                  (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                   >> 0x10U)
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_tiles_per_row))))),16);
        tracep->fullIData(oldp+6727,((0xffffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                                    ? 
                                                   ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                     ? 
                                                    ((vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[3U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U] 
                                                        >> 0x10U))
                                                     : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_offset_bytes)))),24);
        tracep->fullIData(oldp+6728,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U]
                                       : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                           ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[1U]
                                           : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_base))),32);
        tracep->fullSData(oldp+6729,((0xffffU & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                                  ? 
                                                 vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U]
                                                  : 
                                                 ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T1)
                                                   ? 
                                                  vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[2U]
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_dram_block_size_bytes))))),16);
        tracep->fullBit(oldp+6730,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T7))) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) 
                                          | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState))))));
        tracep->fullCData(oldp+6731,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((2U 
                                                 == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T9))
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))))),2);
        tracep->fullSData(oldp+6732,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
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
        tracep->fullSData(oldp+6733,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0xffffU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                   ? 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_tiles_per_row) 
                                                   - (IData)(1U))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regTilesPerRowMinusOne))))),16);
        tracep->fullSData(oldp+6734,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
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
        tracep->fullSData(oldp+6735,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
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
        tracep->fullSData(oldp+6736,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_tiles_per_row)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regTilesPerRow)))),16);
        tracep->fullCData(oldp+6737,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (3U & 
                                               ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                 ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__sel_idrange)
                                                 : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMRange))))),2);
        tracep->fullCData(oldp+6738,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (3U & 
                                               ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__T8)
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
        tracep->fullCData(oldp+6739,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (3U & 
                                               ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T7)
                                                 ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__current_runcfg_bram_id_start)
                                                 : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__regBRAMStart))))),2);
        tracep->fullBit(oldp+6740,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))));
        tracep->fullBit(oldp+6741,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_0))));
        tracep->fullBit(oldp+6742,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_1))));
        tracep->fullBit(oldp+6743,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__regNodeValid_2))));
        tracep->fullBit(oldp+6744,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R23))));
        tracep->fullBit(oldp+6745,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R17))));
        tracep->fullBit(oldp+6746,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R11))));
        tracep->fullBit(oldp+6747,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__R5))));
        tracep->fullCData(oldp+6748,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T31) 
                                                & (1U 
                                                   != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState)))
                                                ? 0U
                                                : (
                                                   ((2U 
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
        tracep->fullIData(oldp+6749,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T38)) 
                                                & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledInputMux_4__DOT__T7) 
                                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)) 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__DecoupledOutputDemux_1__DOT__T0))))
                                                ? ((IData)(8U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T38)
                                                    ? 
                                                   (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes 
                                                    - (IData)(8U))
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__regOutstandingWrBytes)))),32);
        tracep->fullCData(oldp+6750,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T15) 
                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__T54)))
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T14)
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
        tracep->fullBit(oldp+6751,((1U & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                          & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T14)) 
                                             & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T0)
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regShiftCount))
                                                 : 
                                                ((0U 
                                                  != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regState)) 
                                                 & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__regShiftCount))))))));
        tracep->fullQData(oldp+6752,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0ULL : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__T6)
                                                  ? vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_1
                                                  : 
                                                 ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T19)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[0U])))
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_0)))),64);
        tracep->fullQData(oldp+6754,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0ULL : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__T6)
                                                  ? 0ULL
                                                  : 
                                                 ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__T19)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__allacc[2U])))
                                                   : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__stages_1)))),64);
        tracep->fullBit(oldp+6756,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T7))) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) 
                                          | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState))))));
        tracep->fullCData(oldp+6757,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((2U 
                                                 == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T9))
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))))),2);
        tracep->fullCData(oldp+6758,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0xffU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_enq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R0))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R0))))),8);
        tracep->fullCData(oldp+6759,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0xffU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R3))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__R3))))),8);
        tracep->fullBit(oldp+6760,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__maybe_full)))));
        tracep->fullBit(oldp+6761,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__do_deq))));
        tracep->fullCData(oldp+6762,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((1U 
                                                & ((0U 
                                                    < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds) 
                                                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))))
                                                ? (
                                                   ((0U 
                                                     >= vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds) 
                                                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regProfileState)))
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regState)))),2);
        tracep->fullIData(oldp+6763,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T7)) 
                                                & ((~ 
                                                    ((0U 
                                                      == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__regState)) 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T25))) 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__T30)))
                                                ? (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds 
                                                   - (IData)(1U))
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T7)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds)
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regOutstandingRunCmds)))),32);
        tracep->fullCData(oldp+6764,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T52)
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T50)
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
        tracep->fullIData(oldp+6765,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((0xfU 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState))))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_0)))),32);
        tracep->fullCData(oldp+6766,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((1U 
                                                 == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__T56)))
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 1U
                                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState))))),2);
        tracep->fullIData(oldp+6767,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__regProfileState))),32);
        tracep->fullIData(oldp+6768,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((3U 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                      >> 2U)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_2)))),32);
        tracep->fullIData(oldp+6769,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((1U 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                      >> 3U)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_3)))),32);
        tracep->fullIData(oldp+6770,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((7U 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                      >> 1U)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__regStateCount_1)))),32);
        tracep->fullCData(oldp+6771,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((1U 
                                                & ((0U 
                                                    < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds) 
                                                   | (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg))))
                                                ? (
                                                   ((0U 
                                                     >= vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds) 
                                                    & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     < vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regProfileState)))
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regState)))),2);
        tracep->fullIData(oldp+6772,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T7)) 
                                                & ((~ 
                                                    (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__addrgen_d__DOT__in_V_V_0_state) 
                                                      >> 1U) 
                                                     & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T25))) 
                                                   & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__R32)))
                                                ? (vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds 
                                                   - (IData)(1U))
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T7)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds)
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regOutstandingRunCmds)))),32);
        tracep->fullCData(oldp+6773,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T55)
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T50)
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
        tracep->fullIData(oldp+6774,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((0xfU 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState))))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_0)))),32);
        tracep->fullCData(oldp+6775,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((1U 
                                                 == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__T61)))
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 1U
                                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState))))),2);
        tracep->fullIData(oldp+6776,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__regProfileState))),32);
        tracep->fullIData(oldp+6777,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((3U 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                      >> 2U)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_2)))),32);
        tracep->fullIData(oldp+6778,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((1U 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                      >> 3U)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_3)))),32);
        tracep->fullIData(oldp+6779,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((7U 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regState)) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regInState)) 
                                                      >> 1U)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__regStateCount_1)))),32);
        tracep->fullCData(oldp+6780,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T30)
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T28)
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
        tracep->fullIData(oldp+6781,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((0xfU 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState))))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_0)))),32);
        tracep->fullCData(oldp+6782,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((1U 
                                                 == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__T32)))
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 1U
                                                    : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState))))),2);
        tracep->fullIData(oldp+6783,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__regState))),32);
        tracep->fullIData(oldp+6784,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((3U 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState)) 
                                                      >> 2U)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_2)))),32);
        tracep->fullIData(oldp+6785,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((1U 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState)) 
                                                      >> 3U)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_3)))),32);
        tracep->fullIData(oldp+6786,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((7U 
                                                & ((1U 
                                                    == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regState)) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regInState)) 
                                                      >> 1U)))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T12)
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T4)
                                                    ? 0U
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__regStateCount_1)))),32);
        tracep->fullSData(oldp+6787,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0x1ffU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R11))))),9);
        tracep->fullSData(oldp+6788,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0x1ffU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_deq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__R14))))),9);
        tracep->fullBit(oldp+6789,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__maybe_full)))));
        tracep->fullBit(oldp+6790,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__do_deq))));
        tracep->fullSData(oldp+6791,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0x1ffU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R11))))),9);
        tracep->fullSData(oldp+6792,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0x1ffU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_deq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__R14))))),9);
        tracep->fullBit(oldp+6793,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__maybe_full)))));
        tracep->fullBit(oldp+6794,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__do_deq))));
        tracep->fullSData(oldp+6795,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0x1ffU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R8))))),9);
        tracep->fullSData(oldp+6796,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0x1ffU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_deq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__R11))))),9);
        tracep->fullBit(oldp+6797,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__maybe_full)))));
        tracep->fullBit(oldp+6798,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__do_deq))));
        tracep->fullIData(oldp+6799,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((3U 
                                                <= 
                                                (3U 
                                                 & vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__srlo[0U]))
                                                ? ((IData)(1U) 
                                                   + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__regDecodeErrors)
                                                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__regDecodeErrors))),32);
        tracep->fullCData(oldp+6800,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((4U 
                                                 == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState)) 
                                                & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)) 
                                                   & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24))
                                                ? 0U
                                                : (
                                                   ((3U 
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
        tracep->fullIData(oldp+6801,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((0U 
                                                == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty)) 
                                                       & vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24))
                                                    ? 
                                                   ((IData)(8U) 
                                                    + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCompletedWrBytes)
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCompletedWrBytes)))),32);
        tracep->fullIData(oldp+6802,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((0U 
                                                == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState))
                                                ? 0U
                                                : (
                                                   (0U 
                                                    != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regState))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCycleCount)
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__regCycleCount)))),32);
        tracep->fullBit(oldp+6803,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T7))) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__T2) 
                                          | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__regState))))));
        tracep->fullCData(oldp+6804,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((2U 
                                                 == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T9))
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T29)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__T3)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__regState)))))),2);
        tracep->fullBit(oldp+6805,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T7))) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__T2) 
                                          | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__regState))))));
        tracep->fullCData(oldp+6806,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (((2U 
                                                 == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regState)) 
                                                & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T9))
                                                ? 0U
                                                : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T29)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__T3)
                                                     ? 1U
                                                     : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__regState)))))),2);
        tracep->fullBit(oldp+6807,(((~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)) 
                                    & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T145) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__limitReached))) 
                                       & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T136) 
                                              & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__limitReached)))) 
                                          & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T136) 
                                              & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__limitReached)) 
                                             | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__regState)))))));
        tracep->fullCData(oldp+6808,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0xfU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T145)
                                                   ? 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__limitReached)
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount)))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__regCount))))),4);
        tracep->fullCData(oldp+6809,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : (0xfU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T136)
                                                   ? 
                                                  ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__limitReached)
                                                    ? 0U
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__regCount)))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__regCount))))),4);
        tracep->fullCData(oldp+6810,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_1)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_0)))),8);
        tracep->fullCData(oldp+6811,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_2)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_1)))),8);
        tracep->fullCData(oldp+6812,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_3)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_2)))),8);
        tracep->fullCData(oldp+6813,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_4)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_3)))),8);
        tracep->fullCData(oldp+6814,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_5)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_4)))),8);
        tracep->fullCData(oldp+6815,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_6)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_5)))),8);
        tracep->fullCData(oldp+6816,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_7)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_6)))),8);
        tracep->fullCData(oldp+6817,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T120)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T121)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__stages_7)))),8);
        tracep->fullCData(oldp+6818,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_1)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_0)))),8);
        tracep->fullCData(oldp+6819,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_2)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_1)))),8);
        tracep->fullCData(oldp+6820,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_3)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_2)))),8);
        tracep->fullCData(oldp+6821,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_4)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_3)))),8);
        tracep->fullCData(oldp+6822,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_5)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_4)))),8);
        tracep->fullCData(oldp+6823,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_6)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_5)))),8);
        tracep->fullCData(oldp+6824,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_7)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_6)))),8);
        tracep->fullCData(oldp+6825,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T104)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T105)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__stages_7)))),8);
        tracep->fullCData(oldp+6826,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_1)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_0)))),8);
        tracep->fullCData(oldp+6827,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_2)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_1)))),8);
        tracep->fullCData(oldp+6828,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_3)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_2)))),8);
        tracep->fullCData(oldp+6829,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_4)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_3)))),8);
        tracep->fullCData(oldp+6830,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_5)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_4)))),8);
        tracep->fullCData(oldp+6831,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_6)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_5)))),8);
        tracep->fullCData(oldp+6832,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_7)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_6)))),8);
        tracep->fullCData(oldp+6833,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T88)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T89)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__stages_7)))),8);
        tracep->fullCData(oldp+6834,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_1)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_0)))),8);
        tracep->fullCData(oldp+6835,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_2)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_1)))),8);
        tracep->fullCData(oldp+6836,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_3)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_2)))),8);
        tracep->fullCData(oldp+6837,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_4)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_3)))),8);
        tracep->fullCData(oldp+6838,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_5)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_4)))),8);
        tracep->fullCData(oldp+6839,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_6)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_5)))),8);
        tracep->fullCData(oldp+6840,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_7)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_6)))),8);
        tracep->fullCData(oldp+6841,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T72)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T73)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__stages_7)))),8);
        tracep->fullCData(oldp+6842,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_1)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_0)))),8);
        tracep->fullCData(oldp+6843,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_2)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_1)))),8);
        tracep->fullCData(oldp+6844,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_3)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_2)))),8);
        tracep->fullCData(oldp+6845,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_4)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_3)))),8);
        tracep->fullCData(oldp+6846,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_5)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_4)))),8);
        tracep->fullCData(oldp+6847,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_6)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_5)))),8);
        tracep->fullCData(oldp+6848,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_7)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_6)))),8);
        tracep->fullCData(oldp+6849,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T56)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T57)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__stages_7)))),8);
        tracep->fullCData(oldp+6850,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_1)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_0)))),8);
        tracep->fullCData(oldp+6851,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_2)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_1)))),8);
        tracep->fullCData(oldp+6852,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_3)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_2)))),8);
        tracep->fullCData(oldp+6853,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_4)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_3)))),8);
        tracep->fullCData(oldp+6854,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_5)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_4)))),8);
        tracep->fullCData(oldp+6855,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_6)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_5)))),8);
        tracep->fullCData(oldp+6856,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_7)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_6)))),8);
        tracep->fullCData(oldp+6857,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T40)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T41)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__stages_7)))),8);
        tracep->fullCData(oldp+6858,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_1)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_0)))),8);
        tracep->fullCData(oldp+6859,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_2)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_1)))),8);
        tracep->fullCData(oldp+6860,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_3)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_2)))),8);
        tracep->fullCData(oldp+6861,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_4)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_3)))),8);
        tracep->fullCData(oldp+6862,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_5)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_4)))),8);
        tracep->fullCData(oldp+6863,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_6)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_5)))),8);
        tracep->fullCData(oldp+6864,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_7)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_6)))),8);
        tracep->fullCData(oldp+6865,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T24)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T25)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__stages_7)))),8);
        tracep->fullCData(oldp+6866,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_1)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_0)))),8);
        tracep->fullCData(oldp+6867,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_2)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_1)))),8);
        tracep->fullCData(oldp+6868,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_3)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_2)))),8);
        tracep->fullCData(oldp+6869,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_4)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_3)))),8);
        tracep->fullCData(oldp+6870,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_5)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_4)))),8);
        tracep->fullCData(oldp+6871,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_6)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_5)))),8);
        tracep->fullCData(oldp+6872,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_7)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_6)))),8);
        tracep->fullCData(oldp+6873,(((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T0)
                                                ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__T1)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__stages_7)))),8);
        tracep->fullBit(oldp+6874,(vlTOPp->clk));
        tracep->fullBit(oldp+6875,(vlTOPp->reset));
        tracep->fullBit(oldp+6876,(vlTOPp->io_regFileIF_cmd_valid));
        tracep->fullCData(oldp+6877,(vlTOPp->io_regFileIF_cmd_bits_regID),6);
        tracep->fullBit(oldp+6878,(vlTOPp->io_regFileIF_cmd_bits_read));
        tracep->fullBit(oldp+6879,(vlTOPp->io_regFileIF_cmd_bits_write));
        tracep->fullIData(oldp+6880,(vlTOPp->io_regFileIF_cmd_bits_writeData),32);
        tracep->fullBit(oldp+6881,(vlTOPp->io_regFileIF_readData_valid));
        tracep->fullIData(oldp+6882,(vlTOPp->io_regFileIF_readData_bits),32);
        tracep->fullCData(oldp+6883,(vlTOPp->io_regFileIF_regCount),6);
        tracep->fullQData(oldp+6884,(vlTOPp->io_memAddr),48);
        tracep->fullBit(oldp+6886,(vlTOPp->io_memWriteEn));
        tracep->fullQData(oldp+6887,(vlTOPp->io_memWriteData),64);
        tracep->fullQData(oldp+6889,(vlTOPp->io_memReadData),64);
        tracep->fullBit(oldp+6891,(vlTOPp->VerilatedTesterWrapper__DOT__T95));
        tracep->fullBit(oldp+6892,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((((IData)(vlTOPp->io_regFileIF_cmd_valid) 
                                               & (IData)(vlTOPp->io_regFileIF_cmd_bits_write)) 
                                              & (0U 
                                                 == (IData)(vlTOPp->io_regFileIF_cmd_bits_regID)))
                                              ? vlTOPp->io_regFileIF_cmd_bits_writeData
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__regWrapperReset))))));
        tracep->fullBit(oldp+6893,((1U & ((((IData)(vlTOPp->io_regFileIF_cmd_valid) 
                                            & (IData)(vlTOPp->io_regFileIF_cmd_bits_write)) 
                                           & (0U == (IData)(vlTOPp->io_regFileIF_cmd_bits_regID)))
                                           ? vlTOPp->io_regFileIF_cmd_bits_writeData
                                           : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__regWrapperReset)))));
        tracep->fullBit(oldp+6894,((1U & vlTOPp->io_regFileIF_cmd_bits_writeData)));
        tracep->fullBit(oldp+6895,((((IData)(vlTOPp->io_regFileIF_cmd_valid) 
                                     & (IData)(vlTOPp->io_regFileIF_cmd_bits_write)) 
                                    & (0U == (IData)(vlTOPp->io_regFileIF_cmd_bits_regID)))));
        tracep->fullBit(oldp+6896,((0U == (IData)(vlTOPp->io_regFileIF_cmd_bits_regID))));
        tracep->fullBit(oldp+6897,(((IData)(vlTOPp->io_regFileIF_cmd_valid) 
                                    & (IData)(vlTOPp->io_regFileIF_cmd_bits_write))));
        tracep->fullBit(oldp+6898,(((~ (IData)(vlTOPp->reset)) 
                                    & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__R1) 
                                           & (0U == (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R7)))) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T4) 
                                          | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R1))))));
        tracep->fullCData(oldp+6899,(((IData)(vlTOPp->reset)
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
        tracep->fullIData(oldp+6900,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T4)
                                                ? (
                                                   (vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[2U] 
                                                    << 6U) 
                                                   | (vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T11[1U] 
                                                      >> 0x1aU))
                                                : vlTOPp->VerilatedTesterWrapper__DOT__R17))),32);
        tracep->fullBit(oldp+6901,(((~ (IData)(vlTOPp->reset)) 
                                    & ((~ ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T31) 
                                           & (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__empty))) 
                                       & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T28) 
                                          | (IData)(vlTOPp->VerilatedTesterWrapper__DOT__R25))))));
        tracep->fullCData(oldp+6902,(((IData)(vlTOPp->reset)
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
        tracep->fullQData(oldp+6903,(((IData)(vlTOPp->reset)
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
        tracep->fullIData(oldp+6905,((0x3ffffffU & (IData)(
                                                           (0xffffffffffffULL 
                                                            & (vlTOPp->io_memAddr 
                                                               >> 3U))))),26);
        tracep->fullQData(oldp+6906,((0x1fffffffffffULL 
                                      & (vlTOPp->io_memAddr 
                                         >> 3U))),45);
        tracep->fullQData(oldp+6908,(((IData)(vlTOPp->reset)
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
        tracep->fullIData(oldp+6910,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__T44)
                                                ? (
                                                   (vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T11[2U] 
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
        tracep->fullQData(oldp+6911,(vlTOPp->VerilatedTesterWrapper__DOT__mem
                                     [(0x3ffffffU & (IData)(
                                                            (0xffffffffffffULL 
                                                             & (vlTOPp->io_memAddr 
                                                                >> 3U))))]),64);
        tracep->fullBit(oldp+6913,((1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__T95)))));
        tracep->fullIData(oldp+6914,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              (1ULL 
                                                               << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID))))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_0)
                                                : 0x8426730U))),32);
        tracep->fullBit(oldp+6915,(((~ (IData)(vlTOPp->reset)) 
                                    & (IData)(vlTOPp->io_regFileIF_cmd_valid))));
        tracep->fullIData(oldp+6916,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 1U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_1)
                                                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__srlo))),32);
        tracep->fullIData(oldp+6917,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 2U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_2))),32);
        tracep->fullIData(oldp+6918,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 3U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_3)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_6__DOT__SRLQueue__DOT__Q_srl__DOT__o_v_reg)))),32);
        tracep->fullIData(oldp+6919,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 4U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_4))),32);
        tracep->fullIData(oldp+6920,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 5U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_5))),32);
        tracep->fullIData(oldp+6921,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 6U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_6))),32);
        tracep->fullIData(oldp+6922,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 7U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_7))),32);
        tracep->fullIData(oldp+6923,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 8U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_8))),32);
        tracep->fullIData(oldp+6924,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 9U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_9))),32);
        tracep->fullIData(oldp+6925,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0xaU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_10))),32);
        tracep->fullIData(oldp+6926,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0xbU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_11))),32);
        tracep->fullIData(oldp+6927,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0xcU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_12))),32);
        tracep->fullIData(oldp+6928,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0xdU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_13)
                                                : (1U 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_5__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))))),32);
        tracep->fullIData(oldp+6929,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0xeU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_14))),32);
        tracep->fullIData(oldp+6930,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0xfU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_15))),32);
        tracep->fullIData(oldp+6931,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x10U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_16))),32);
        tracep->fullIData(oldp+6932,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x11U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_17))),32);
        tracep->fullIData(oldp+6933,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x12U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_18))),32);
        tracep->fullIData(oldp+6934,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x13U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_19))),32);
        tracep->fullIData(oldp+6935,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x14U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_20))),32);
        tracep->fullIData(oldp+6936,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x15U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_21))),32);
        tracep->fullIData(oldp+6937,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x16U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_22)
                                                : (1U 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_4__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))))),32);
        tracep->fullIData(oldp+6938,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x17U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_23))),32);
        tracep->fullIData(oldp+6939,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x18U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_24))),32);
        tracep->fullIData(oldp+6940,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x19U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_25))),32);
        tracep->fullIData(oldp+6941,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x1aU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_26)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__T33)))),32);
        tracep->fullIData(oldp+6942,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x1bU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_27))),32);
        tracep->fullIData(oldp+6943,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x1cU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_28)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__T33)))),32);
        tracep->fullIData(oldp+6944,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x1dU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_29)
                                                : 0x20U))),32);
        tracep->fullIData(oldp+6945,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x1eU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_30)
                                                : 0x200U))),32);
        tracep->fullIData(oldp+6946,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x1fU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_31)
                                                : 0x40U))),32);
        tracep->fullIData(oldp+6947,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x20U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_32)
                                                : 2U))),32);
        tracep->fullIData(oldp+6948,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x21U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_33)
                                                : 2U))),32);
        tracep->fullIData(oldp+6949,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x22U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_34)
                                                : 0x400U))),32);
        tracep->fullIData(oldp+6950,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x23U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_35)
                                                : 0x10U))),32);
        tracep->fullIData(oldp+6951,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x24U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_36)
                                                : 0x40U))),32);
        tracep->fullIData(oldp+6952,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x25U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_37)
                                                : 0x400U))),32);
        tracep->fullIData(oldp+6953,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x26U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_38)
                                                : 0x40U))),32);
        tracep->fullIData(oldp+6954,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x27U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_39))),32);
        tracep->fullIData(oldp+6955,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x28U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_40))),32);
        tracep->fullIData(oldp+6956,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x29U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_41))),32);
        tracep->fullIData(oldp+6957,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x2aU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_42))),32);
        tracep->fullIData(oldp+6958,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x2bU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_43))),32);
        tracep->fullIData(oldp+6959,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x2cU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_44)
                                                : (1U 
                                                   & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl__DOT__i_b_reg)))))),32);
        tracep->fullIData(oldp+6960,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x2dU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_45))),32);
        tracep->fullIData(oldp+6961,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x2eU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_46)
                                                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__regCC))),32);
        tracep->fullIData(oldp+6962,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x2fU)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_47))),32);
        tracep->fullIData(oldp+6963,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x30U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_48)
                                                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__T0))),32);
        tracep->fullIData(oldp+6964,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x31U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_49))),32);
        tracep->fullIData(oldp+6965,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x32U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_50)
                                                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__T0))),32);
        tracep->fullIData(oldp+6966,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x33U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_51))),32);
        tracep->fullIData(oldp+6967,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x34U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_52)
                                                : vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__T0))),32);
        tracep->fullIData(oldp+6968,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x35U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_53))),32);
        tracep->fullIData(oldp+6969,(((IData)(vlTOPp->reset)
                                       ? 0U : (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                & (IData)(
                                                          ((1ULL 
                                                            << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                           >> 0x36U)))
                                                ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_54))),32);
        tracep->fullIData(oldp+6970,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x37U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_55)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__T27)))),32);
        tracep->fullIData(oldp+6971,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x38U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_56)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue__DOT__SRLQueue__DOT__Q_srl_count)))),32);
        tracep->fullIData(oldp+6972,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x39U)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_57)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_3__DOT__SRLQueue__DOT__Q_srl_count)))),32);
        tracep->fullIData(oldp+6973,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x3aU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_58)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_1__DOT__SRLQueue__DOT__Q_srl_count)))),32);
        tracep->fullIData(oldp+6974,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand)
                                                ? (
                                                   ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__hasExtWriteCommand) 
                                                    & (IData)(
                                                              ((1ULL 
                                                                << (IData)(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_regID)) 
                                                               >> 0x3bU)))
                                                    ? vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regCommand_writeData
                                                    : vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__regFile_59)
                                                : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_2__DOT__SRLQueue__DOT__Q_srl_count)))),32);
        tracep->fullBit(oldp+6975,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R1))))));
        tracep->fullBit(oldp+6976,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__R4))))));
        tracep->fullBit(oldp+6977,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__maybe_full)))));
        tracep->fullBit(oldp+6978,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R1))))));
        tracep->fullBit(oldp+6979,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__R4))))));
        tracep->fullBit(oldp+6980,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__maybe_full)))));
        tracep->fullBit(oldp+6981,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R1))))));
        tracep->fullBit(oldp+6982,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__R4))))));
        tracep->fullBit(oldp+6983,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__maybe_full)))));
        tracep->fullBit(oldp+6984,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R1))))));
        tracep->fullBit(oldp+6985,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__R4))))));
        tracep->fullBit(oldp+6986,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__maybe_full)))));
        tracep->fullBit(oldp+6987,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R1))))));
        tracep->fullBit(oldp+6988,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__R4))))));
        tracep->fullBit(oldp+6989,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__maybe_full)))));
        tracep->fullBit(oldp+6990,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R1))))));
        tracep->fullBit(oldp+6991,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__R4))))));
        tracep->fullBit(oldp+6992,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__maybe_full)))));
        tracep->fullBit(oldp+6993,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R1))))));
        tracep->fullBit(oldp+6994,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__R4))))));
        tracep->fullBit(oldp+6995,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__maybe_full)))));
        tracep->fullBit(oldp+6996,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R1))))));
        tracep->fullBit(oldp+6997,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__R4))))));
        tracep->fullBit(oldp+6998,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__maybe_full)))));
        tracep->fullBit(oldp+6999,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R1))))));
        tracep->fullBit(oldp+7000,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__R4))))));
        tracep->fullBit(oldp+7001,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__maybe_full)))));
        tracep->fullBit(oldp+7002,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R1))))));
        tracep->fullBit(oldp+7003,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__R4))))));
        tracep->fullBit(oldp+7004,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__maybe_full)))));
        tracep->fullBit(oldp+7005,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R1))))));
        tracep->fullBit(oldp+7006,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__R4))))));
        tracep->fullBit(oldp+7007,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__maybe_full)))));
        tracep->fullBit(oldp+7008,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R1))))));
        tracep->fullBit(oldp+7009,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__R4))))));
        tracep->fullBit(oldp+7010,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__maybe_full)))));
        tracep->fullBit(oldp+7011,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R1))))));
        tracep->fullBit(oldp+7012,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__R4))))));
        tracep->fullBit(oldp+7013,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__maybe_full)))));
        tracep->fullBit(oldp+7014,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R1))))));
        tracep->fullBit(oldp+7015,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__R4))))));
        tracep->fullBit(oldp+7016,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__maybe_full)))));
        tracep->fullBit(oldp+7017,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R1))))));
        tracep->fullBit(oldp+7018,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__R4))))));
        tracep->fullBit(oldp+7019,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__maybe_full)))));
        tracep->fullCData(oldp+7020,(((IData)(vlTOPp->reset)
                                       ? 0U : (0xfU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R1))))),4);
        tracep->fullCData(oldp+7021,(((IData)(vlTOPp->reset)
                                       ? 0U : (0xfU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__R4))))),4);
        tracep->fullBit(oldp+7022,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__maybe_full)))));
        tracep->fullCData(oldp+7023,(((IData)(vlTOPp->reset)
                                       ? 0U : (0xfU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty)
                                                   ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R1)))))),4);
        tracep->fullCData(oldp+7024,(((IData)(vlTOPp->reset)
                                       ? 0U : (0xfU 
                                               & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4))
                                                   : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__R4))))),4);
        tracep->fullBit(oldp+7025,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq) 
                                        != (1U & (~ (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__empty))))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__maybe_full)))));
        tracep->fullBit(oldp+7026,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R1))))));
        tracep->fullBit(oldp+7027,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__R4))))));
        tracep->fullBit(oldp+7028,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__maybe_full)))));
        tracep->fullBit(oldp+7029,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R1))))));
        tracep->fullBit(oldp+7030,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__R4))))));
        tracep->fullBit(oldp+7031,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__maybe_full)))));
        tracep->fullBit(oldp+7032,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R1))))));
        tracep->fullBit(oldp+7033,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__R4))))));
        tracep->fullBit(oldp+7034,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__maybe_full)))));
        tracep->fullBit(oldp+7035,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R1))))));
        tracep->fullBit(oldp+7036,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__R4))))));
        tracep->fullBit(oldp+7037,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__maybe_full)))));
        tracep->fullBit(oldp+7038,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R1))))));
        tracep->fullBit(oldp+7039,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__R4))))));
        tracep->fullBit(oldp+7040,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__maybe_full)))));
        tracep->fullBit(oldp+7041,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R1))))));
        tracep->fullBit(oldp+7042,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__R4))))));
        tracep->fullBit(oldp+7043,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__maybe_full)))));
        tracep->fullBit(oldp+7044,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R1))))));
        tracep->fullBit(oldp+7045,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__R4))))));
        tracep->fullBit(oldp+7046,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__maybe_full)))));
        tracep->fullBit(oldp+7047,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R1))))));
        tracep->fullBit(oldp+7048,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__R4))))));
        tracep->fullBit(oldp+7049,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__maybe_full)))));
        tracep->fullBit(oldp+7050,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R1))))));
        tracep->fullBit(oldp+7051,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__R4))))));
        tracep->fullBit(oldp+7052,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__maybe_full)))));
        tracep->fullBit(oldp+7053,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R1))))));
        tracep->fullBit(oldp+7054,((1U & ((~ (IData)(vlTOPp->reset)) 
                                          & ((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4))
                                              : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__R4))))));
        tracep->fullBit(oldp+7055,(((~ (IData)(vlTOPp->reset)) 
                                    & (((IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq) 
                                        != (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_deq))
                                        ? (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__do_enq)
                                        : (IData)(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__maybe_full)))));
        tracep->fullCData(oldp+7056,(0U),8);
        tracep->fullIData(oldp+7057,(0U),32);
        tracep->fullQData(oldp+7058,(vlTOPp->VerilatedTesterWrapper__DOT__T73),64);
        tracep->fullQData(oldp+7060,(0ULL),48);
        tracep->fullQData(oldp+7062,(vlTOPp->VerilatedTesterWrapper__DOT__T80),64);
        tracep->fullCData(oldp+7064,(0x3cU),6);
        tracep->fullBit(oldp+7065,(0U));
        tracep->fullBit(oldp+7066,(1U));
        tracep->fullIData(oldp+7067,(0x8426730U),32);
        tracep->fullIData(oldp+7068,(0x40U),32);
        tracep->fullIData(oldp+7069,(2U),32);
        tracep->fullIData(oldp+7070,(0x400U),32);
        tracep->fullIData(oldp+7071,(0x20U),32);
        tracep->fullIData(oldp+7072,(0x10U),32);
        tracep->fullIData(oldp+7073,(0x200U),32);
        tracep->fullCData(oldp+7074,(1U),6);
        tracep->fullCData(oldp+7075,(0U),6);
        tracep->fullIData(oldp+7076,(1U),32);
        tracep->fullCData(oldp+7077,(8U),8);
        tracep->fullIData(oldp+7078,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__initvar),32);
        tracep->fullIData(oldp+7079,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__initvar),32);
        tracep->fullIData(oldp+7080,(8U),32);
        tracep->fullIData(oldp+7081,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__initvar),32);
        tracep->fullQData(oldp+7082,(0x40ULL),35);
        tracep->fullIData(oldp+7084,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__initvar),32);
        tracep->fullIData(oldp+7085,(2U),32);
        tracep->fullIData(oldp+7086,(0x20U),32);
        tracep->fullIData(oldp+7087,(1U),32);
        tracep->fullCData(oldp+7088,(0U),2);
        tracep->fullCData(oldp+7089,(1U),2);
        tracep->fullCData(oldp+7090,(2U),2);
        tracep->fullIData(oldp+7091,(0x40U),32);
        tracep->fullIData(oldp+7092,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchRouteGen__DOT__initvar),32);
        tracep->fullIData(oldp+7093,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledStage__DOT__FetchInterconnect__DOT__initvar),32);
        tracep->fullIData(oldp+7094,(0x4cU),32);
        __Vtemp720[0U] = 5U;
        __Vtemp720[1U] = 0U;
        __Vtemp720[2U] = 0U;
        tracep->fullWData(oldp+7095,(__Vtemp720),71);
        tracep->fullCData(oldp+7098,(5U),3);
        __Vtemp721[0U] = 0U;
        __Vtemp721[1U] = 0U;
        __Vtemp721[2U] = 0U;
        tracep->fullWData(oldp+7099,(__Vtemp721),68);
        tracep->fullIData(oldp+7102,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__initvar),32);
        tracep->fullIData(oldp+7103,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__initvar),32);
        tracep->fullIData(oldp+7104,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__initvar),32);
        tracep->fullIData(oldp+7105,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit__DOT__compressor__DOT__initvar),32);
        tracep->fullIData(oldp+7106,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__initvar),32);
        tracep->fullIData(oldp+7107,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_1__DOT__compressor__DOT__initvar),32);
        tracep->fullIData(oldp+7108,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__initvar),32);
        tracep->fullIData(oldp+7109,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_2__DOT__compressor__DOT__initvar),32);
        tracep->fullIData(oldp+7110,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__initvar),32);
        tracep->fullIData(oldp+7111,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__execStage_direct__DOT__DotProductArray__DOT__DotProductUnit_3__DOT__compressor__DOT__initvar),32);
        tracep->fullCData(oldp+7112,(1U),4);
        tracep->fullCData(oldp+7113,(2U),4);
        tracep->fullCData(oldp+7114,(4U),4);
        tracep->fullCData(oldp+7115,(8U),4);
        tracep->fullCData(oldp+7116,(1U),3);
        tracep->fullCData(oldp+7117,(2U),3);
        tracep->fullCData(oldp+7118,(4U),3);
        tracep->fullIData(oldp+7119,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__initvar),32);
        tracep->fullIData(oldp+7120,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__initvar),32);
        tracep->fullQData(oldp+7121,(0ULL),64);
        tracep->fullIData(oldp+7123,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__StreamResizer__DOT__AXIStreamDownsizer__DOT__shiftReg__DOT__initvar),32);
        tracep->fullIData(oldp+7124,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__initvar),32);
        tracep->fullIData(oldp+7125,(0U),29);
        tracep->fullIData(oldp+7126,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__initvar),32);
        tracep->fullIData(oldp+7127,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultStage__DOT__FPGAQueue__DOT__BRAMQueue__DOT__initvar),32);
        tracep->fullIData(oldp+7128,(3U),32);
        tracep->fullIData(oldp+7129,(8U),32);
        tracep->fullIData(oldp+7130,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__initvar),32);
        tracep->fullIData(oldp+7131,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FetchDecoupledController__DOT__StateProfiler__DOT__initvar),32);
        tracep->fullIData(oldp+7132,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__initvar),32);
        tracep->fullIData(oldp+7133,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ExecDecoupledController__DOT__StateProfiler__DOT__initvar),32);
        tracep->fullIData(oldp+7134,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__initvar),32);
        tracep->fullIData(oldp+7135,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__ResultController__DOT__StateProfiler__DOT__initvar),32);
        tracep->fullIData(oldp+7136,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_7__DOT__BRAMQueue__DOT__initvar),32);
        tracep->fullIData(oldp+7137,(0x80U),32);
        tracep->fullIData(oldp+7138,(9U),32);
        __Vtemp722[0U] = 0U;
        __Vtemp722[1U] = 0U;
        __Vtemp722[2U] = 0U;
        __Vtemp722[3U] = 0U;
        tracep->fullWData(oldp+7139,(__Vtemp722),128);
        tracep->fullIData(oldp+7143,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_8__DOT__BRAMQueue__DOT__initvar),32);
        tracep->fullIData(oldp+7144,(0x7cU),32);
        __Vtemp723[0U] = 0U;
        __Vtemp723[1U] = 0U;
        __Vtemp723[2U] = 0U;
        __Vtemp723[3U] = 0U;
        tracep->fullWData(oldp+7145,(__Vtemp723),124);
        tracep->fullIData(oldp+7149,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__FPGAQueue_9__DOT__BRAMQueue__DOT__initvar),32);
        tracep->fullIData(oldp+7150,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM__DOT__PipelinedDualPortBRAM__DOT__initvar),32);
        tracep->fullIData(oldp+7151,(0xaU),32);
        tracep->fullIData(oldp+7152,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_1__DOT__PipelinedDualPortBRAM__DOT__initvar),32);
        tracep->fullIData(oldp+7153,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_2__DOT__PipelinedDualPortBRAM__DOT__initvar),32);
        tracep->fullIData(oldp+7154,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__AsymPipelinedDualPortBRAM_3__DOT__PipelinedDualPortBRAM__DOT__initvar),32);
        tracep->fullIData(oldp+7155,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__T1),32);
        tracep->fullIData(oldp+7156,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM__DOT__DualPortBRAM_NoBlackBox__DOT__T2),32);
        tracep->fullIData(oldp+7157,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__T1),32);
        tracep->fullIData(oldp+7158,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_1__DOT__DualPortBRAM_NoBlackBox__DOT__T2),32);
        tracep->fullIData(oldp+7159,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__T1),32);
        tracep->fullIData(oldp+7160,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_2__DOT__DualPortBRAM_NoBlackBox__DOT__T2),32);
        tracep->fullIData(oldp+7161,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__T1),32);
        tracep->fullIData(oldp+7162,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__PipelinedDualPortBRAM_3__DOT__DualPortBRAM_NoBlackBox__DOT__T2),32);
        tracep->fullIData(oldp+7163,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StreamDeinterleaverQueued__DOT__StreamDeinterleaver__DOT__initvar),32);
        tracep->fullSData(oldp+7164,(1U),11);
        tracep->fullSData(oldp+7165,(2U),11);
        tracep->fullSData(oldp+7166,(4U),11);
        tracep->fullSData(oldp+7167,(8U),11);
        tracep->fullSData(oldp+7168,(0x10U),11);
        tracep->fullSData(oldp+7169,(0x20U),11);
        tracep->fullSData(oldp+7170,(0x40U),11);
        tracep->fullSData(oldp+7171,(0x80U),11);
        tracep->fullSData(oldp+7172,(0x100U),11);
        tracep->fullSData(oldp+7173,(0x200U),11);
        tracep->fullSData(oldp+7174,(0x400U),11);
        tracep->fullBit(oldp+7175,(1U));
        tracep->fullIData(oldp+7176,(0x10U),32);
        tracep->fullIData(oldp+7177,(0x7ffffffU),27);
        tracep->fullSData(oldp+7178,(1U),14);
        tracep->fullSData(oldp+7179,(2U),14);
        tracep->fullSData(oldp+7180,(4U),14);
        tracep->fullSData(oldp+7181,(8U),14);
        tracep->fullSData(oldp+7182,(0x10U),14);
        tracep->fullSData(oldp+7183,(0x20U),14);
        tracep->fullSData(oldp+7184,(0x40U),14);
        tracep->fullSData(oldp+7185,(0x80U),14);
        tracep->fullSData(oldp+7186,(0x100U),14);
        tracep->fullSData(oldp+7187,(0x200U),14);
        tracep->fullSData(oldp+7188,(0x400U),14);
        tracep->fullSData(oldp+7189,(0x800U),14);
        tracep->fullSData(oldp+7190,(0x1000U),14);
        tracep->fullSData(oldp+7191,(0x2000U),14);
        tracep->fullIData(oldp+7192,(0x14U),32);
        tracep->fullIData(oldp+7193,(0x1cU),32);
        tracep->fullSData(oldp+7194,(1U),10);
        tracep->fullSData(oldp+7195,(2U),10);
        tracep->fullSData(oldp+7196,(4U),10);
        tracep->fullSData(oldp+7197,(8U),10);
        tracep->fullSData(oldp+7198,(0x10U),10);
        tracep->fullSData(oldp+7199,(0x20U),10);
        tracep->fullSData(oldp+7200,(0x40U),10);
        tracep->fullSData(oldp+7201,(0x80U),10);
        tracep->fullSData(oldp+7202,(0x100U),10);
        tracep->fullSData(oldp+7203,(0x200U),10);
        tracep->fullIData(oldp+7204,(4U),32);
        tracep->fullIData(oldp+7205,(0xd0U),32);
        tracep->fullIData(oldp+7206,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__initvar),32);
        tracep->fullIData(oldp+7207,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__MultiSeqGen__DOT__initvar),32);
        tracep->fullIData(oldp+7208,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen__DOT__BurstyMultiSeqGen__DOT__initvar),32);
        tracep->fullIData(oldp+7209,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__MultiSeqGen__DOT__initvar),32);
        tracep->fullIData(oldp+7210,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__BlockStridedRqGen_1__DOT__BurstyMultiSeqGen__DOT__initvar),32);
        tracep->fullIData(oldp+7211,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__initvar),32);
        tracep->fullIData(oldp+7212,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter__DOT__initvar),32);
        tracep->fullCData(oldp+7213,(7U),4);
        tracep->fullIData(oldp+7214,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__Counter_1__DOT__initvar),32);
        tracep->fullIData(oldp+7215,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut__DOT__initvar),32);
        tracep->fullIData(oldp+7216,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_1__DOT__initvar),32);
        tracep->fullIData(oldp+7217,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_2__DOT__initvar),32);
        tracep->fullIData(oldp+7218,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_3__DOT__initvar),32);
        tracep->fullIData(oldp+7219,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_4__DOT__initvar),32);
        tracep->fullIData(oldp+7220,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_5__DOT__initvar),32);
        tracep->fullIData(oldp+7221,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_6__DOT__initvar),32);
        tracep->fullIData(oldp+7222,(vlTOPp->VerilatedTesterWrapper__DOT__BitSerialMatMulAccel__DOT__StandAloneP2SAccel__DOT__P2SKernel_Fast__DOT__SerialInParallelOut_7__DOT__initvar),32);
        tracep->fullCData(oldp+7223,(3U),7);
        tracep->fullIData(oldp+7224,(0x30U),32);
        tracep->fullIData(oldp+7225,(0xa5U),32);
        tracep->fullIData(oldp+7226,(vlTOPp->VerilatedTesterWrapper__DOT__RegFile__DOT__initvar),32);
        tracep->fullWData(oldp+7227,(vlTOPp->VerilatedTesterWrapper__DOT__Queue__DOT__T12),90);
        tracep->fullWData(oldp+7230,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_1__DOT__T12),90);
        tracep->fullWData(oldp+7233,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_2__DOT__T12),90);
        tracep->fullWData(oldp+7236,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_3__DOT__T12),90);
        tracep->fullWData(oldp+7239,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_4__DOT__T12),90);
        tracep->fullWData(oldp+7242,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_5__DOT__T12),90);
        tracep->fullWData(oldp+7245,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_6__DOT__T12),90);
        tracep->fullWData(oldp+7248,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_7__DOT__T12),90);
        tracep->fullWData(oldp+7251,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_8__DOT__T12),90);
        tracep->fullWData(oldp+7254,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_9__DOT__T12),90);
        tracep->fullWData(oldp+7257,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_10__DOT__T12),90);
        tracep->fullWData(oldp+7260,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_11__DOT__T12),90);
        tracep->fullWData(oldp+7263,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_12__DOT__T12),90);
        tracep->fullWData(oldp+7266,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_13__DOT__T12),90);
        tracep->fullWData(oldp+7269,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_14__DOT__T12),90);
        tracep->fullQData(oldp+7272,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_15__DOT__T11),64);
        tracep->fullWData(oldp+7274,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_16__DOT__T12),99);
        tracep->fullCData(oldp+7278,(0U),3);
        tracep->fullWData(oldp+7279,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_17__DOT__T12),90);
        tracep->fullWData(oldp+7282,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_18__DOT__T12),90);
        tracep->fullWData(oldp+7285,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_19__DOT__T12),90);
        tracep->fullWData(oldp+7288,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_20__DOT__T12),90);
        tracep->fullWData(oldp+7291,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_21__DOT__T12),90);
        tracep->fullWData(oldp+7294,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_22__DOT__T12),90);
        tracep->fullWData(oldp+7297,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_23__DOT__T12),90);
        tracep->fullWData(oldp+7300,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_24__DOT__T12),90);
        tracep->fullWData(oldp+7303,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_25__DOT__T12),90);
        tracep->fullWData(oldp+7306,(vlTOPp->VerilatedTesterWrapper__DOT__Queue_26__DOT__T12),90);
    }
}
