// ==============================================================
// File generated on Mon May 17 09:54:12 CEST 2021
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3.1 (64-bit)
// SW Build 2489853 on Tue Mar 26 04:18:30 MDT 2019
// IP Build 2486929 on Tue Mar 26 06:44:21 MDT 2019
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps

module ExecInstrGen_ama_addmuladd_1s_10ns_16s_16ns_16_1_1_DSP48_1 (
    input  [1 - 1:0] in0,
    input  [10 - 1:0] in1,
    input  [16 - 1:0] in2,
    input  [16 - 1:0] in3,
    output [16 - 1:0]  dout);


wire signed [18 - 1:0]     b;
wire signed [27 - 1:0]     a;
wire signed [27 - 1:0]     d;
wire signed [48 - 1:0]     c;
wire signed [45 - 1:0]     m;
wire signed [48 - 1:0]     p;
wire signed [27 - 1:0]     ad;

assign a = $signed(in0);
assign d = $unsigned(in1);
assign b = $signed(in2);
assign c = $unsigned(in3);

assign ad = a + d;
assign m  = ad * b;
assign p  = m + c;

assign dout = p;

endmodule
`timescale 1 ns / 1 ps
module ExecInstrGen_ama_addmuladd_1s_10ns_16s_16ns_16_1_1(
    din0,
    din1,
    din2,
    din3,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter din2_WIDTH = 32'd1;
parameter din3_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
input[din2_WIDTH - 1:0] din2;
input[din3_WIDTH - 1:0] din3;
output[dout_WIDTH - 1:0] dout;



ExecInstrGen_ama_addmuladd_1s_10ns_16s_16ns_16_1_1_DSP48_1 ExecInstrGen_ama_addmuladd_1s_10ns_16s_16ns_16_1_1_DSP48_1_U(
    .in0( din0 ),
    .in1( din1 ),
    .in2( din2 ),
    .in3( din3 ),
    .dout( dout ));

endmodule

