
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = -1;
uint32_t x7 = 174443U;
uint64_t x8 = UINT64_MAX;
int8_t x10 = -1;
volatile int8_t x12 = 1;
volatile int64_t t2 = INT64_MAX;
int16_t x15 = INT16_MIN;
int16_t x17 = INT16_MAX;
static volatile int32_t x18 = -3263179;
uint8_t x21 = UINT8_MAX;
int64_t x26 = -1LL;
uint16_t x32 = UINT16_MAX;
static volatile int32_t t7 = 20439;
int8_t x33 = -2;
static int64_t x35 = INT64_MAX;
int32_t t8 = 959250049;
uint64_t x39 = UINT64_MAX;
uint64_t x40 = UINT64_MAX;
static volatile uint64_t t9 = 7653402421LLU;
int8_t x43 = -59;
static int32_t t10 = 0;
volatile int16_t x46 = -2480;
uint16_t x48 = 377U;
int32_t t11 = -12183746;
int32_t x51 = INT32_MAX;
int64_t x53 = 156366547886353LL;
volatile uint32_t x62 = 46U;
int64_t x64 = INT64_MAX;
volatile uint64_t t16 = 1865612972LLU;
volatile int32_t x69 = INT32_MIN;
int32_t x76 = INT32_MIN;
static uint32_t x85 = UINT32_MAX;
int64_t x87 = 2223671321616685056LL;
uint32_t t21 = 1517146U;
int8_t x90 = -1;
volatile uint32_t x98 = UINT32_MAX;
int8_t x101 = INT8_MIN;
static volatile int32_t x111 = -11334048;
static volatile uint16_t x115 = 2U;
int64_t x117 = INT64_MIN;
uint8_t x119 = 11U;
uint32_t x126 = 11506U;
uint8_t x127 = UINT8_MAX;
volatile int32_t t31 = 27199;
static volatile int16_t x130 = 289;
volatile int64_t x131 = -2043000LL;
int8_t x132 = -6;
static int32_t t32 = 133039856;
volatile int16_t x141 = INT16_MIN;
volatile int32_t t35 = -13;
int32_t x152 = -208274;
volatile int32_t t37 = -2;
uint16_t x153 = 1U;
static uint64_t x154 = UINT64_MAX;
int64_t x156 = -1LL;
int64_t x170 = INT64_MIN;
int32_t x175 = INT32_MAX;
volatile int8_t x177 = INT8_MIN;
static uint32_t x182 = 19346U;
int8_t x183 = -1;
int8_t x186 = INT8_MIN;
int32_t x194 = INT32_MIN;
int8_t x196 = 1;
static int32_t x199 = INT32_MIN;
volatile int32_t t49 = 3641;
int16_t x202 = INT16_MAX;
static int8_t x211 = INT8_MAX;
int64_t x213 = 61LL;
volatile int8_t x214 = 30;
int32_t x217 = -156921688;
volatile int32_t t54 = -14683;
int32_t x221 = INT32_MIN;
volatile uint16_t x222 = 802U;
int16_t x225 = INT16_MIN;
uint64_t x229 = UINT64_MAX;
volatile int32_t t59 = -16182;
uint16_t x247 = 54U;
int32_t t62 = 41993;
uint64_t x254 = 6554051340LLU;
uint8_t x257 = 7U;
int32_t t64 = 1269963;
int8_t x263 = -6;
uint64_t x269 = 119LLU;
int8_t x274 = INT8_MIN;
int32_t x278 = INT32_MAX;
volatile int32_t t69 = -29798;
static uint8_t x281 = 6U;
volatile int64_t x289 = INT64_MIN;
uint64_t x295 = 194092089LLU;
volatile uint8_t x305 = UINT8_MAX;
volatile uint32_t x310 = 4214U;
volatile int8_t x311 = INT8_MIN;
volatile int32_t t79 = 2975420;
volatile int16_t x322 = INT16_MIN;
static int64_t x325 = 3606103LL;
static int64_t x336 = -1LL;
static int16_t x338 = INT16_MAX;
static int32_t x341 = -7885;
int64_t x344 = INT64_MIN;
int16_t x352 = -1;
volatile uint32_t t88 = 1834132U;
int64_t x359 = INT64_MAX;
volatile int64_t x370 = -1LL;
volatile int64_t x371 = -1LL;
volatile uint32_t x380 = 1863566U;
int8_t x381 = -1;
static int8_t x383 = INT8_MAX;
static int8_t x387 = -1;
static int64_t t97 = 2245833761443923394LL;
int16_t x397 = INT16_MIN;
static int32_t x401 = INT32_MIN;
uint64_t x404 = UINT64_MAX;
int32_t x406 = INT32_MIN;
uint32_t x408 = UINT32_MAX;
static uint16_t x410 = UINT16_MAX;
int8_t x418 = INT8_MAX;
int64_t x421 = INT64_MIN;
uint8_t x424 = 46U;
int64_t t105 = 107985060632215206LL;
static int64_t x425 = -1LL;
static uint32_t t108 = 772069394U;
static uint32_t x437 = 8624440U;
volatile int8_t x442 = -1;
static uint32_t x449 = UINT32_MAX;
int16_t x456 = INT16_MIN;
volatile int64_t t113 = -3447119347196310LL;
int8_t x459 = -1;
uint64_t t114 = 50243LLU;
int8_t x462 = 61;
uint32_t x474 = 44U;
volatile int32_t x476 = INT32_MIN;
static volatile int8_t x483 = INT8_MAX;
int32_t x489 = 1;
static volatile int64_t x502 = INT64_MIN;
static uint32_t x505 = 44U;
volatile uint8_t x508 = 2U;
int64_t x511 = 799664LL;
volatile int32_t t127 = 31636151;
static int8_t x515 = -1;
static int8_t x517 = INT8_MIN;
volatile int32_t x521 = INT32_MIN;
uint16_t x522 = UINT16_MAX;
volatile int32_t t130 = 202320;
int32_t x538 = -1;
volatile uint32_t x543 = 140835832U;
static int8_t x548 = 7;
volatile int64_t x552 = INT64_MIN;
static int64_t x558 = -1LL;
int8_t x560 = INT8_MIN;
int32_t t140 = -14;
int64_t t142 = -5889462787311331LL;
int64_t x577 = INT64_MIN;
static int64_t x578 = INT64_MAX;
volatile uint32_t x579 = 122757U;
volatile int32_t x581 = INT32_MIN;
int64_t x582 = INT64_MIN;
int64_t x583 = 149873764525858LL;
static int32_t x593 = INT32_MIN;
int32_t t148 = -11582;
uint32_t x598 = 913454U;
uint64_t x602 = UINT64_MAX;
int32_t t152 = 780774748;
int16_t x616 = INT16_MAX;
uint8_t x618 = UINT8_MAX;
int32_t t156 = 661;
static volatile int64_t x632 = -524653126405475564LL;
int32_t t158 = 206877002;
volatile int64_t x649 = INT64_MAX;
static volatile int16_t x650 = -1;
int16_t x653 = -5;
int64_t x658 = -1LL;
uint8_t x663 = 0U;
int32_t t165 = 4593640;
int16_t x667 = -1;
int32_t x679 = INT32_MAX;
int32_t t170 = 7225242;
static int64_t x688 = INT64_MIN;
uint32_t x689 = UINT32_MAX;
volatile uint32_t t172 = 2292U;
int8_t x694 = INT8_MIN;
static uint64_t x699 = 15035942969343LLU;
volatile int32_t t174 = -11521732;
static int8_t x704 = INT8_MAX;
static volatile uint64_t t175 = 195904LLU;
uint8_t x707 = UINT8_MAX;
int16_t x710 = 5633;
uint32_t x715 = 126588282U;
static int16_t x716 = INT16_MAX;
volatile int32_t x720 = -1;
int64_t x726 = -23196958LL;
volatile int32_t t181 = -829304;
int64_t x730 = INT64_MIN;
volatile int64_t x731 = INT64_MIN;
uint8_t x735 = 94U;
uint8_t x737 = 2U;
int16_t x748 = -1;
volatile int32_t t186 = -48;
static uint8_t x750 = 5U;
volatile int32_t x751 = -621433742;
static int8_t x757 = INT8_MIN;
uint16_t x759 = UINT16_MAX;
static volatile int32_t t189 = -1415064;
volatile int32_t t190 = -2;
uint32_t x766 = 23U;
int32_t t193 = 674613785;
int16_t x780 = INT16_MAX;
uint16_t x788 = 924U;
volatile int8_t x789 = -1;
int32_t x790 = INT32_MIN;
int32_t t197 = -24;


void f0(void) {
    	uint8_t x1 = 3U;
	uint16_t x3 = UINT16_MAX;
	static uint64_t x4 = 9332165LLU;
	volatile int32_t t0 = 12155;

    t0 = (x1*((x2<=x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int16_t x6 = 7669;
	int32_t t1 = -107231;

    t1 = (x5*((x6<=x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	volatile int32_t x11 = 93254;

    t2 = (x9*((x10<=x11)==x12));

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MAX;
	static uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 2U;

    t3 = (x13*((x14<=x15)==x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x19 = INT16_MIN;
	int32_t x20 = -1;
	int32_t t4 = 18;

    t4 = (x17*((x18<=x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -1;
	volatile int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -12;

    t5 = (x21*((x22<=x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 251U;
	volatile int64_t x27 = -887342577915170301LL;
	volatile int32_t x28 = INT32_MIN;
	int32_t t6 = 47222;

    t6 = (x25*((x26<=x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	int8_t x30 = -1;
	uint8_t x31 = 63U;

    t7 = (x29*((x30<=x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x34 = -1;
	int32_t x36 = -1;

    t8 = (x33*((x34<=x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	uint64_t x38 = UINT64_MAX;

    t9 = (x37*((x38<=x39)==x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	int32_t x42 = INT32_MIN;
	int64_t x44 = INT64_MAX;

    t10 = (x41*((x42<=x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	uint16_t x47 = 26U;

    t11 = (x45*((x46<=x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	int8_t x50 = INT8_MAX;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -1003443;

    t12 = (x49*((x50<=x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x54 = 27887416004LL;
	static int32_t x55 = 84130;
	int8_t x56 = -10;
	int64_t t13 = 24997050374312757LL;

    t13 = (x53*((x54<=x55)==x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	volatile int64_t x58 = -3994637562056305244LL;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = 3;
	volatile int64_t t14 = -1887LL;

    t14 = (x57*((x58<=x59)==x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -17144662;
	uint64_t x63 = UINT64_MAX;
	static int32_t t15 = -63;

    t15 = (x61*((x62<=x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 29LLU;
	int16_t x66 = INT16_MIN;
	int16_t x67 = -1;
	uint8_t x68 = UINT8_MAX;

    t16 = (x65*((x66<=x67)==x68));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x70 = -3;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 2786486;

    t17 = (x69*((x70<=x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	int8_t x74 = INT8_MAX;
	volatile uint64_t x75 = 245950741LLU;
	int32_t t18 = -1;

    t18 = (x73*((x74<=x75)==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 26378U;
	volatile int32_t x78 = 6664940;
	uint8_t x79 = 17U;
	uint16_t x80 = 151U;
	static uint32_t t19 = 207542U;

    t19 = (x77*((x78<=x79)==x80));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = -561372774800053085LL;
	static int64_t x82 = -1LL;
	int16_t x83 = INT16_MIN;
	int32_t x84 = -184899358;
	volatile int64_t t20 = -14314188163750LL;

    t20 = (x81*((x82<=x83)==x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x86 = UINT64_MAX;
	int32_t x88 = -1;

    t21 = (x85*((x86<=x87)==x88));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x89 = UINT64_MAX;
	int8_t x91 = 11;
	static uint16_t x92 = 3251U;
	uint64_t t22 = 2252LLU;

    t22 = (x89*((x90<=x91)==x92));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	int64_t x94 = -1LL;
	int64_t x95 = -86291LL;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = -6155;

    t23 = (x93*((x94<=x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 2371;
	uint64_t x99 = 146398066LLU;
	volatile int32_t x100 = INT32_MIN;
	int32_t t24 = -902393814;

    t24 = (x97*((x98<=x99)==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x102 = -1LL;
	uint64_t x103 = 545491068561LLU;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t25 = 1;

    t25 = (x101*((x102<=x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -1;
	static int8_t x106 = -1;
	uint32_t x107 = 1U;
	uint16_t x108 = 159U;
	volatile int32_t t26 = 19715397;

    t26 = (x105*((x106<=x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = 93;
	int8_t x110 = INT8_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t27 = -442243183;

    t27 = (x109*((x110<=x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 187532208U;
	static uint64_t x114 = UINT64_MAX;
	uint16_t x116 = 16U;
	uint32_t t28 = 15980U;

    t28 = (x113*((x114<=x115)==x116));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x118 = -1;
	uint32_t x120 = 14208U;
	static int64_t t29 = 80778261290LL;

    t29 = (x117*((x118<=x119)==x120));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 24;
	static int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MIN;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = 9;

    t30 = (x121*((x122<=x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	int8_t x128 = -1;

    t31 = (x125*((x126<=x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;

    t32 = (x129*((x130<=x131)==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 0U;
	int16_t x134 = INT16_MAX;
	static int8_t x135 = 6;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = 3230141;

    t33 = (x133*((x134<=x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 5U;
	int8_t x138 = -1;
	static int16_t x139 = 3;
	int32_t x140 = -1;
	int32_t t34 = -1;

    t34 = (x137*((x138<=x139)==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x142 = 543401LLU;
	uint16_t x143 = UINT16_MAX;
	static int8_t x144 = INT8_MIN;

    t35 = (x141*((x142<=x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 56;
	int64_t x146 = -1LL;
	volatile int16_t x147 = INT16_MAX;
	static uint64_t x148 = 25642389884LLU;
	static int32_t t36 = -3;

    t36 = (x145*((x146<=x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	int32_t x150 = 434498;
	int64_t x151 = -279409509692617738LL;

    t37 = (x149*((x150<=x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x155 = 16;
	volatile int32_t t38 = 55147506;

    t38 = (x153*((x154<=x155)==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	static int16_t x158 = INT16_MAX;
	int16_t x159 = -1;
	int64_t x160 = INT64_MAX;
	volatile int32_t t39 = 0;

    t39 = (x157*((x158<=x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x161 = -9;
	uint16_t x162 = UINT16_MAX;
	static uint32_t x163 = 11U;
	static volatile int16_t x164 = -1;
	static int32_t t40 = 2384945;

    t40 = (x161*((x162<=x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 56U;
	int32_t x166 = 1;
	volatile uint64_t x167 = 1515LLU;
	volatile int32_t x168 = INT32_MIN;
	int32_t t41 = 831;

    t41 = (x165*((x166<=x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -1LL;
	volatile int64_t x171 = INT64_MAX;
	int32_t x172 = -244490960;
	int64_t t42 = 300604LL;

    t42 = (x169*((x170<=x171)==x172));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	uint16_t x176 = UINT16_MAX;
	int32_t t43 = -22885875;

    t43 = (x173*((x174<=x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = INT32_MAX;
	int64_t x179 = INT64_MIN;
	int16_t x180 = -1;
	volatile int32_t t44 = 18206690;

    t44 = (x177*((x178<=x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1;
	int64_t x184 = INT64_MIN;
	int32_t t45 = -1438134;

    t45 = (x181*((x182<=x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x185 = 9030439318LLU;
	volatile int32_t x187 = INT32_MAX;
	volatile uint16_t x188 = 182U;
	volatile uint64_t t46 = 6109714929LLU;

    t46 = (x185*((x186<=x187)==x188));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x189 = 3523U;
	uint16_t x190 = 1U;
	int16_t x191 = INT16_MAX;
	int8_t x192 = INT8_MAX;
	int32_t t47 = -3793;

    t47 = (x189*((x190<=x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 602609118;
	uint32_t x195 = 7971741U;
	int32_t t48 = 9;

    t48 = (x193*((x194<=x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 104U;
	int64_t x198 = -1LL;
	static int8_t x200 = -1;

    t49 = (x197*((x198<=x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -1;
	static uint64_t x203 = 875785574221323907LLU;
	int32_t x204 = INT32_MAX;
	static volatile int32_t t50 = -362021;

    t50 = (x201*((x202<=x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	uint64_t x206 = UINT64_MAX;
	static uint64_t x207 = 25885584390812847LLU;
	volatile int8_t x208 = INT8_MIN;
	static volatile int32_t t51 = 28;

    t51 = (x205*((x206<=x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = 742;
	static int8_t x210 = 22;
	int16_t x212 = 2;
	volatile int32_t t52 = 1511;

    t52 = (x209*((x210<=x211)==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x215 = -29;
	static int8_t x216 = -1;
	volatile int64_t t53 = -3894254868241LL;

    t53 = (x213*((x214<=x215)==x216));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint16_t x218 = 21U;
	uint32_t x219 = UINT32_MAX;
	int64_t x220 = -1LL;

    t54 = (x217*((x218<=x219)==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x223 = -228816263;
	int64_t x224 = INT64_MAX;
	volatile int32_t t55 = 2;

    t55 = (x221*((x222<=x223)==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x226 = INT32_MIN;
	int8_t x227 = -1;
	int16_t x228 = -1;
	static int32_t t56 = 0;

    t56 = (x225*((x226<=x227)==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = 1;
	static int8_t x231 = -1;
	static uint8_t x232 = 56U;
	uint64_t t57 = 261685055LLU;

    t57 = (x229*((x230<=x231)==x232));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = 50156U;
	uint64_t x234 = 221862080597139LLU;
	uint8_t x235 = 91U;
	int8_t x236 = -16;
	uint32_t t58 = 84428487U;

    t58 = (x233*((x234<=x235)==x236));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = INT32_MIN;
	int32_t x238 = -1;
	uint16_t x239 = 5U;
	uint64_t x240 = UINT64_MAX;

    t59 = (x237*((x238<=x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x241 = 2017567565U;
	volatile int32_t x242 = INT32_MIN;
	int32_t x243 = 12;
	int16_t x244 = INT16_MIN;
	uint32_t t60 = 514U;

    t60 = (x241*((x242<=x243)==x244));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MAX;
	int32_t x248 = INT32_MIN;
	int64_t t61 = 63162LL;

    t61 = (x245*((x246<=x247)==x248));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 2U;
	int8_t x250 = 0;
	static int16_t x251 = INT16_MAX;
	static int64_t x252 = 2068176418578433LL;

    t62 = (x249*((x250<=x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	int64_t x255 = 115072172323244LL;
	volatile int16_t x256 = INT16_MAX;
	int32_t t63 = -8534;

    t63 = (x253*((x254<=x255)==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x258 = -1;
	int64_t x259 = 1LL;
	uint64_t x260 = 618131904LLU;

    t64 = (x257*((x258<=x259)==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = INT8_MIN;
	int8_t x262 = -10;
	static int16_t x264 = 15;
	int32_t t65 = 22;

    t65 = (x261*((x262<=x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	static volatile uint16_t x266 = 25U;
	int64_t x267 = -69908924519LL;
	int64_t x268 = -1LL;
	int32_t t66 = 2;

    t66 = (x265*((x266<=x267)==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = 48;
	volatile int32_t x271 = INT32_MIN;
	volatile int64_t x272 = -1LL;
	volatile uint64_t t67 = 3331652037LLU;

    t67 = (x269*((x270<=x271)==x272));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x273 = INT32_MIN;
	uint8_t x275 = 0U;
	uint64_t x276 = 2248971023836257LLU;
	volatile int32_t t68 = -172878;

    t68 = (x273*((x274<=x275)==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = -1;
	uint32_t x279 = 823170272U;
	int16_t x280 = 14096;

    t69 = (x277*((x278<=x279)==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x282 = UINT64_MAX;
	static int16_t x283 = INT16_MIN;
	volatile uint8_t x284 = 1U;
	volatile int32_t t70 = 470405826;

    t70 = (x281*((x282<=x283)==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MAX;
	int64_t x286 = 103007LL;
	uint64_t x287 = 260706311077398437LLU;
	uint32_t x288 = UINT32_MAX;
	volatile int32_t t71 = 1;

    t71 = (x285*((x286<=x287)==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x290 = 44910729064LLU;
	volatile int64_t x291 = -1LL;
	static uint16_t x292 = 13947U;
	volatile int64_t t72 = -28800901324320LL;

    t72 = (x289*((x290<=x291)==x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	int8_t x294 = -1;
	int32_t x296 = 13291801;
	int64_t t73 = 3115310014964LL;

    t73 = (x293*((x294<=x295)==x296));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MIN;
	volatile int64_t x299 = INT64_MIN;
	volatile int32_t x300 = 88456;
	volatile int32_t t74 = 0;

    t74 = (x297*((x298<=x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	static uint32_t x303 = 10U;
	volatile uint8_t x304 = 85U;
	int32_t t75 = 95819;

    t75 = (x301*((x302<=x303)==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = -54;
	int64_t x307 = -1LL;
	int32_t x308 = -1;
	volatile int32_t t76 = 1;

    t76 = (x305*((x306<=x307)==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	int64_t x312 = INT64_MAX;
	int32_t t77 = 1762;

    t77 = (x309*((x310<=x311)==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	static uint32_t x314 = 55502284U;
	static uint64_t x315 = 37228LLU;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 28;

    t78 = (x313*((x314<=x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MAX;
	uint8_t x318 = 8U;
	volatile int64_t x319 = 517328275024884LL;
	int64_t x320 = -31128289LL;

    t79 = (x317*((x318<=x319)==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = 1181;
	volatile uint32_t x323 = UINT32_MAX;
	int16_t x324 = -1;
	volatile int32_t t80 = -32883964;

    t80 = (x321*((x322<=x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x326 = 167482578642518837LL;
	uint64_t x327 = 218LLU;
	int32_t x328 = 1;
	volatile int64_t t81 = 1630216959592LL;

    t81 = (x325*((x326<=x327)==x328));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MAX;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = 170136604U;
	static uint64_t t82 = 56LLU;

    t82 = (x329*((x330<=x331)==x332));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 22356111;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MAX;
	int32_t t83 = 75;

    t83 = (x333*((x334<=x335)==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 336U;
	int64_t t84 = 26806365354592LL;

    t84 = (x337*((x338<=x339)==x340));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = 7;
	int16_t x343 = INT16_MIN;
	volatile int32_t t85 = -4904690;

    t85 = (x341*((x342<=x343)==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x345 = 13U;
	static int8_t x346 = INT8_MAX;
	int64_t x347 = INT64_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t86 = 338;

    t86 = (x345*((x346<=x347)==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 736;
	static volatile int16_t x350 = 471;
	uint32_t x351 = 51917U;
	int32_t t87 = -180227;

    t87 = (x349*((x350<=x351)==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MIN;
	static uint8_t x355 = 10U;
	volatile uint8_t x356 = 53U;

    t88 = (x353*((x354<=x355)==x356));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = INT32_MAX;
	int16_t x358 = -1;
	static volatile int16_t x360 = -37;
	volatile int32_t t89 = 78974;

    t89 = (x357*((x358<=x359)==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x361 = INT32_MIN;
	uint8_t x362 = 6U;
	static int32_t x363 = INT32_MIN;
	volatile uint64_t x364 = 9105395208409LLU;
	volatile int32_t t90 = 60;

    t90 = (x361*((x362<=x363)==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 8002U;
	uint64_t x366 = 1LLU;
	int16_t x367 = INT16_MAX;
	volatile int8_t x368 = INT8_MIN;
	int32_t t91 = -1192876;

    t91 = (x365*((x366<=x367)==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = INT8_MAX;
	static uint16_t x372 = UINT16_MAX;
	int32_t t92 = -81617;

    t92 = (x369*((x370<=x371)==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -902232153594LL;
	static uint64_t x374 = 5714795LLU;
	uint16_t x375 = UINT16_MAX;
	static uint16_t x376 = 298U;
	int64_t t93 = 285415052767880LL;

    t93 = (x373*((x374<=x375)==x376));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = -16311211;
	uint64_t x378 = 4824736517068LLU;
	int8_t x379 = 6;
	volatile int32_t t94 = -14460;

    t94 = (x377*((x378<=x379)==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = INT16_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = 5;

    t95 = (x381*((x382<=x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MIN;
	int16_t x386 = -14488;
	uint32_t x388 = 1107813478U;
	int64_t t96 = -7LL;

    t96 = (x385*((x386<=x387)==x388));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = -3775504118244596515LL;
	static int32_t x390 = 447;
	int16_t x391 = INT16_MIN;
	static int8_t x392 = -5;

    t97 = (x389*((x390<=x391)==x392));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -1LL;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	int64_t t98 = -4491LL;

    t98 = (x393*((x394<=x395)==x396));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x398 = -1;
	uint8_t x399 = 1U;
	int32_t x400 = INT32_MIN;
	int32_t t99 = 180480;

    t99 = (x397*((x398<=x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x402 = 454;
	static uint32_t x403 = UINT32_MAX;
	int32_t t100 = -1622;

    t100 = (x401*((x402<=x403)==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	static volatile int16_t x407 = INT16_MIN;
	static volatile int32_t t101 = 5148987;

    t101 = (x405*((x406<=x407)==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -12926809855589LL;
	static volatile int8_t x411 = 21;
	int32_t x412 = 7339;
	volatile int64_t t102 = 1LL;

    t102 = (x409*((x410<=x411)==x412));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x413 = 110U;
	volatile int8_t x414 = INT8_MIN;
	volatile int16_t x415 = -20;
	static int8_t x416 = INT8_MAX;
	int32_t t103 = -31;

    t103 = (x413*((x414<=x415)==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 15;
	int16_t x419 = -1;
	int32_t x420 = -1;
	volatile int32_t t104 = 21;

    t104 = (x417*((x418<=x419)==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x422 = INT64_MIN;
	int16_t x423 = 5;

    t105 = (x421*((x422<=x423)==x424));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x426 = 21LL;
	uint16_t x427 = 29567U;
	int16_t x428 = -1;
	static volatile int64_t t106 = -287157785LL;

    t106 = (x425*((x426<=x427)==x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = -1;
	int8_t x430 = -1;
	int16_t x431 = -6620;
	static int64_t x432 = INT64_MIN;
	static volatile int32_t t107 = -3;

    t107 = (x429*((x430<=x431)==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	uint8_t x434 = UINT8_MAX;
	int64_t x435 = INT64_MIN;
	int16_t x436 = 1;

    t108 = (x433*((x434<=x435)==x436));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = UINT64_MAX;
	volatile int32_t x439 = -1;
	static uint16_t x440 = 204U;
	volatile uint32_t t109 = 447878680U;

    t109 = (x437*((x438<=x439)==x440));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x441 = 40U;
	int32_t x443 = INT32_MIN;
	int8_t x444 = 1;
	volatile int32_t t110 = -12;

    t110 = (x441*((x442<=x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	uint16_t x446 = 1114U;
	static volatile int16_t x447 = -3;
	int32_t x448 = INT32_MAX;
	int64_t t111 = 68130LL;

    t111 = (x445*((x446<=x447)==x448));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x450 = 10;
	volatile int32_t x451 = -1;
	static volatile int16_t x452 = INT16_MAX;
	volatile uint32_t t112 = 35837218U;

    t112 = (x449*((x450<=x451)==x452));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	static int32_t x454 = -1;
	static int64_t x455 = -1LL;

    t113 = (x453*((x454<=x455)==x456));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	int16_t x458 = INT16_MIN;
	static int8_t x460 = INT8_MAX;

    t114 = (x457*((x458<=x459)==x460));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	int8_t x463 = 1;
	int16_t x464 = 1;
	int32_t t115 = 249;

    t115 = (x461*((x462<=x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 21U;
	int8_t x466 = 13;
	volatile int32_t x467 = INT32_MAX;
	uint64_t x468 = 216659474004330LLU;
	int32_t t116 = 1;

    t116 = (x465*((x466<=x467)==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int8_t x470 = -1;
	volatile uint16_t x471 = UINT16_MAX;
	static uint32_t x472 = 14857284U;
	volatile int32_t t117 = -308229;

    t117 = (x469*((x470<=x471)==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 15U;
	int16_t x475 = INT16_MIN;
	volatile uint32_t t118 = 21092U;

    t118 = (x473*((x474<=x475)==x476));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = -3328131;
	static volatile int8_t x478 = INT8_MAX;
	volatile uint8_t x479 = 3U;
	volatile int8_t x480 = 6;
	static int32_t t119 = -515566;

    t119 = (x477*((x478<=x479)==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x481 = 118U;
	int16_t x482 = INT16_MAX;
	volatile uint64_t x484 = 236685290275454244LLU;
	volatile int32_t t120 = 193;

    t120 = (x481*((x482<=x483)==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	int32_t x486 = -11444049;
	uint64_t x487 = 358018689507200LLU;
	static int64_t x488 = INT64_MIN;
	volatile int32_t t121 = 866828010;

    t121 = (x485*((x486<=x487)==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x490 = 56U;
	static volatile uint32_t x491 = 28U;
	static int64_t x492 = -1LL;
	volatile int32_t t122 = 65388871;

    t122 = (x489*((x490<=x491)==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = -1;
	volatile int16_t x494 = INT16_MIN;
	static uint32_t x495 = UINT32_MAX;
	uint64_t x496 = 2LLU;
	volatile int32_t t123 = -5307465;

    t123 = (x493*((x494<=x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	volatile uint64_t x498 = 14273056489LLU;
	int8_t x499 = -20;
	int8_t x500 = INT8_MIN;
	uint32_t t124 = 100U;

    t124 = (x497*((x498<=x499)==x500));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = INT8_MIN;
	int32_t x503 = -8263660;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t125 = 686;

    t125 = (x501*((x502<=x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MIN;
	volatile uint32_t t126 = 1751U;

    t126 = (x505*((x506<=x507)==x508));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x509 = 22U;
	volatile int64_t x510 = 20600652LL;
	volatile int32_t x512 = INT32_MIN;

    t127 = (x509*((x510<=x511)==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -8;
	static int64_t x514 = 353369698781080LL;
	int32_t x516 = 165;
	int32_t t128 = -348546;

    t128 = (x513*((x514<=x515)==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x518 = INT64_MIN;
	static int64_t x519 = INT64_MIN;
	uint8_t x520 = 100U;
	int32_t t129 = -37254689;

    t129 = (x517*((x518<=x519)==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x523 = UINT64_MAX;
	volatile int8_t x524 = INT8_MAX;

    t130 = (x521*((x522<=x523)==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = INT16_MIN;
	int64_t x526 = INT64_MIN;
	int8_t x527 = INT8_MIN;
	static volatile int32_t x528 = INT32_MAX;
	int32_t t131 = -969942;

    t131 = (x525*((x526<=x527)==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = UINT64_MAX;
	static uint16_t x530 = 3235U;
	static int16_t x531 = INT16_MIN;
	int64_t x532 = -1608998628565LL;
	volatile uint64_t t132 = 87697LLU;

    t132 = (x529*((x530<=x531)==x532));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 156313468457LLU;
	int64_t x534 = INT64_MAX;
	int64_t x535 = INT64_MAX;
	volatile uint64_t x536 = UINT64_MAX;
	volatile uint64_t t133 = 98267806705864361LLU;

    t133 = (x533*((x534<=x535)==x536));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	static int16_t x539 = INT16_MIN;
	int16_t x540 = INT16_MAX;
	volatile uint32_t t134 = 37U;

    t134 = (x537*((x538<=x539)==x540));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -218015283;
	static volatile uint64_t x542 = UINT64_MAX;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t135 = 96529;

    t135 = (x541*((x542<=x543)==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MIN;
	int8_t x546 = -5;
	volatile int8_t x547 = INT8_MIN;
	static volatile int32_t t136 = 8618761;

    t136 = (x545*((x546<=x547)==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MAX;
	static int8_t x550 = INT8_MIN;
	uint32_t x551 = UINT32_MAX;
	int32_t t137 = -97091;

    t137 = (x549*((x550<=x551)==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	uint64_t x554 = 24676761LLU;
	int32_t x555 = -58;
	int8_t x556 = -1;
	int32_t t138 = 25;

    t138 = (x553*((x554<=x555)==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 11806U;
	int16_t x559 = INT16_MAX;
	uint32_t t139 = 113087904U;

    t139 = (x557*((x558<=x559)==x560));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = INT16_MAX;
	uint64_t x562 = UINT64_MAX;
	static int16_t x563 = INT16_MIN;
	int8_t x564 = -1;

    t140 = (x561*((x562<=x563)==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	int32_t x566 = -1;
	int32_t x567 = INT32_MAX;
	int64_t x568 = INT64_MIN;
	static int64_t t141 = -533118LL;

    t141 = (x565*((x566<=x567)==x568));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = -922597378LL;
	uint32_t x570 = UINT32_MAX;
	int64_t x571 = INT64_MAX;
	int16_t x572 = -1;

    t142 = (x569*((x570<=x571)==x572));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	static volatile uint64_t x574 = UINT64_MAX;
	uint64_t x575 = UINT64_MAX;
	uint32_t x576 = 7263U;
	static volatile int64_t t143 = -6865243075LL;

    t143 = (x573*((x574<=x575)==x576));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x580 = INT64_MAX;
	int64_t t144 = 809160LL;

    t144 = (x577*((x578<=x579)==x580));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x584 = 26893U;
	int32_t t145 = -70;

    t145 = (x581*((x582<=x583)==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	static int64_t x586 = -1LL;
	uint8_t x587 = 3U;
	volatile int16_t x588 = INT16_MIN;
	int32_t t146 = -41719;

    t146 = (x585*((x586<=x587)==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x589 = INT32_MAX;
	static int8_t x590 = 1;
	static volatile int32_t x591 = -1;
	static volatile uint64_t x592 = 335750644LLU;
	static int32_t t147 = 679751;

    t147 = (x589*((x590<=x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x594 = -7;
	int32_t x595 = -45339104;
	int32_t x596 = 158153468;

    t148 = (x593*((x594<=x595)==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	int8_t x599 = INT8_MIN;
	int16_t x600 = INT16_MIN;
	static volatile int32_t t149 = -24816522;

    t149 = (x597*((x598<=x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 29U;
	volatile uint16_t x603 = 3U;
	int8_t x604 = -1;
	volatile int32_t t150 = 53;

    t150 = (x601*((x602<=x603)==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x605 = 7LLU;
	int16_t x606 = 3;
	static volatile uint16_t x607 = 223U;
	uint32_t x608 = UINT32_MAX;
	volatile uint64_t t151 = 0LLU;

    t151 = (x605*((x606<=x607)==x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	int16_t x610 = -1;
	int16_t x611 = 3562;
	int8_t x612 = INT8_MIN;

    t152 = (x609*((x610<=x611)==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	volatile int32_t x614 = INT32_MAX;
	int64_t x615 = -52874646671369379LL;
	int64_t t153 = -275284817795186090LL;

    t153 = (x613*((x614<=x615)==x616));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = 8251;
	static uint16_t x619 = 231U;
	int16_t x620 = INT16_MIN;
	int32_t t154 = -23321155;

    t154 = (x617*((x618<=x619)==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = -1526;
	int16_t x622 = INT16_MIN;
	static uint32_t x623 = 259079050U;
	int8_t x624 = INT8_MAX;
	int32_t t155 = 1;

    t155 = (x621*((x622<=x623)==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	int16_t x626 = INT16_MIN;
	uint64_t x627 = 7359603696588LLU;
	uint8_t x628 = 1U;

    t156 = (x625*((x626<=x627)==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 841599033833547LLU;
	static int16_t x630 = INT16_MIN;
	int8_t x631 = 1;
	uint64_t t157 = 1510919841LLU;

    t157 = (x629*((x630<=x631)==x632));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	int8_t x634 = INT8_MIN;
	int16_t x635 = INT16_MIN;
	static volatile int16_t x636 = -1;

    t158 = (x633*((x634<=x635)==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	int8_t x638 = INT8_MIN;
	volatile uint8_t x639 = UINT8_MAX;
	int16_t x640 = INT16_MIN;
	static volatile uint32_t t159 = 36U;

    t159 = (x637*((x638<=x639)==x640));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 258245;
	int8_t x642 = -5;
	uint64_t x643 = 15267901489456354LLU;
	static int32_t x644 = -25000468;
	int32_t t160 = -588319;

    t160 = (x641*((x642<=x643)==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	int16_t x646 = -1;
	volatile int64_t x647 = -1979LL;
	int8_t x648 = INT8_MIN;
	volatile int32_t t161 = -1045274273;

    t161 = (x645*((x646<=x647)==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x651 = 22555935855LLU;
	int8_t x652 = INT8_MIN;
	int64_t t162 = -8268894550974LL;

    t162 = (x649*((x650<=x651)==x652));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = 1968;
	volatile int64_t x655 = INT64_MIN;
	int32_t x656 = -3249551;
	static int32_t t163 = -354;

    t163 = (x653*((x654<=x655)==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	volatile uint64_t x659 = 9946395796220600LLU;
	uint8_t x660 = 7U;
	int32_t t164 = -15523;

    t164 = (x657*((x658<=x659)==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = UINT8_MAX;
	volatile int32_t x662 = INT32_MAX;
	volatile uint32_t x664 = 8774145U;

    t165 = (x661*((x662<=x663)==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x665 = UINT8_MAX;
	int64_t x666 = INT64_MIN;
	int16_t x668 = INT16_MIN;
	volatile int32_t t166 = 0;

    t166 = (x665*((x666<=x667)==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	uint8_t x670 = 3U;
	uint32_t x671 = UINT32_MAX;
	static volatile int64_t x672 = INT64_MIN;
	volatile int32_t t167 = -4998501;

    t167 = (x669*((x670<=x671)==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x673 = INT64_MAX;
	volatile int8_t x674 = INT8_MIN;
	int64_t x675 = INT64_MAX;
	int8_t x676 = -11;
	int64_t t168 = -1254LL;

    t168 = (x673*((x674<=x675)==x676));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x677 = INT8_MIN;
	static int16_t x678 = -161;
	int8_t x680 = -35;
	static volatile int32_t t169 = 1;

    t169 = (x677*((x678<=x679)==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = 1;
	uint64_t x682 = 123567LLU;
	static int64_t x683 = -4253654087185LL;
	int32_t x684 = INT32_MAX;

    t170 = (x681*((x682<=x683)==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x685 = 3415U;
	int64_t x686 = 7989LL;
	static volatile uint64_t x687 = 2LLU;
	uint32_t t171 = 98U;

    t171 = (x685*((x686<=x687)==x688));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = 0U;
	int16_t x691 = INT16_MAX;
	int64_t x692 = INT64_MIN;

    t172 = (x689*((x690<=x691)==x692));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	int32_t x695 = INT32_MIN;
	static int32_t x696 = -1;
	uint64_t t173 = 33255LLU;

    t173 = (x693*((x694<=x695)==x696));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = 1203;
	static int64_t x698 = INT64_MIN;
	int64_t x700 = 93852689348LL;

    t174 = (x697*((x698<=x699)==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 0LLU;
	int32_t x702 = INT32_MAX;
	int64_t x703 = 829031715LL;

    t175 = (x701*((x702<=x703)==x704));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 1236261300437683495LL;
	int32_t x706 = 11877633;
	volatile int64_t x708 = INT64_MIN;
	static volatile int64_t t176 = -119467LL;

    t176 = (x705*((x706<=x707)==x708));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = -57;
	int8_t x711 = -1;
	uint64_t x712 = 218184844758394115LLU;
	int32_t t177 = 59890275;

    t177 = (x709*((x710<=x711)==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MAX;
	static uint64_t x714 = UINT64_MAX;
	volatile int32_t t178 = 96698401;

    t178 = (x713*((x714<=x715)==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	int32_t x718 = INT32_MAX;
	int8_t x719 = -1;
	int32_t t179 = -99745;

    t179 = (x717*((x718<=x719)==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x721 = -1;
	uint32_t x722 = UINT32_MAX;
	static int8_t x723 = INT8_MAX;
	int32_t x724 = 26;
	int32_t t180 = 5;

    t180 = (x721*((x722<=x723)==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MIN;
	int16_t x727 = -1;
	uint8_t x728 = UINT8_MAX;

    t181 = (x725*((x726<=x727)==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = UINT64_MAX;
	uint8_t x732 = 7U;
	uint64_t t182 = 106396603852LLU;

    t182 = (x729*((x730<=x731)==x732));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	static int32_t x734 = INT32_MAX;
	uint8_t x736 = 13U;
	static int32_t t183 = 321068;

    t183 = (x733*((x734<=x735)==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x738 = 38749927081784078LLU;
	int64_t x739 = 29LL;
	int64_t x740 = -1LL;
	int32_t t184 = -3661;

    t184 = (x737*((x738<=x739)==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 3129415859156LLU;
	int16_t x742 = INT16_MIN;
	uint8_t x743 = 24U;
	uint32_t x744 = UINT32_MAX;
	uint64_t t185 = 1020893534LLU;

    t185 = (x741*((x742<=x743)==x744));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	uint16_t x746 = UINT16_MAX;
	int32_t x747 = INT32_MAX;

    t186 = (x745*((x746<=x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x749 = 1U;
	int32_t x752 = INT32_MIN;
	volatile int32_t t187 = -641;

    t187 = (x749*((x750<=x751)==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	static volatile uint16_t x754 = 15265U;
	volatile int64_t x755 = INT64_MIN;
	int8_t x756 = 10;
	int32_t t188 = -13521;

    t188 = (x753*((x754<=x755)==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = 841613409;
	static volatile int64_t x760 = 67056408LL;

    t189 = (x757*((x758<=x759)==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = -1;
	int32_t x762 = -388634932;
	volatile int32_t x763 = INT32_MIN;
	int8_t x764 = INT8_MIN;

    t190 = (x761*((x762<=x763)==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	static uint64_t x767 = 8833LLU;
	int64_t x768 = 181850620701562LL;
	static int32_t t191 = 12046;

    t191 = (x765*((x766<=x767)==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = 24;
	int32_t x770 = INT32_MIN;
	volatile int64_t x771 = INT64_MAX;
	static int16_t x772 = INT16_MAX;
	int32_t t192 = 1494373;

    t192 = (x769*((x770<=x771)==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x773 = 60U;
	static int64_t x774 = INT64_MAX;
	static volatile uint8_t x775 = 11U;
	int32_t x776 = 1902;

    t193 = (x773*((x774<=x775)==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	static uint8_t x778 = 83U;
	int32_t x779 = -3743924;
	int32_t t194 = -165106738;

    t194 = (x777*((x778<=x779)==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	volatile int32_t x782 = 1;
	volatile uint64_t x783 = 24637LLU;
	static int8_t x784 = INT8_MIN;
	volatile int32_t t195 = -224515390;

    t195 = (x781*((x782<=x783)==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	volatile int8_t x786 = INT8_MIN;
	static uint16_t x787 = 1962U;
	volatile int32_t t196 = 373173701;

    t196 = (x785*((x786<=x787)==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x791 = INT64_MIN;
	uint64_t x792 = 4625826970662LLU;

    t197 = (x789*((x790<=x791)==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = -1;
	static volatile uint16_t x794 = 324U;
	uint16_t x795 = 638U;
	int8_t x796 = INT8_MAX;
	int32_t t198 = -11;

    t198 = (x793*((x794<=x795)==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 4292592U;
	int64_t x798 = INT64_MAX;
	uint16_t x799 = 2024U;
	int8_t x800 = INT8_MIN;
	uint32_t t199 = 0U;

    t199 = (x797*((x798<=x799)==x800));

    if (t199 != 0U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

