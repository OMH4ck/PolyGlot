
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

volatile int64_t x1 = INT64_MIN;
int8_t x4 = 14;
static volatile int16_t x6 = -1;
static uint32_t x14 = 44U;
static uint8_t x26 = 7U;
int32_t x29 = INT32_MIN;
volatile uint16_t x31 = UINT16_MAX;
static uint8_t x35 = 10U;
volatile uint16_t x54 = 25U;
int32_t t9 = -8901193;
uint8_t x69 = UINT8_MAX;
static volatile int16_t x80 = -1;
static volatile int8_t x82 = INT8_MIN;
int32_t x87 = -1;
uint16_t x90 = 32U;
uint32_t x95 = 183113U;
static int8_t x96 = INT8_MIN;
int32_t x99 = 30889;
uint8_t x104 = UINT8_MAX;
volatile int32_t t19 = -210639388;
uint16_t x112 = 18043U;
volatile uint64_t x118 = UINT64_MAX;
int16_t x122 = -335;
volatile uint32_t x123 = UINT32_MAX;
int8_t x128 = 0;
uint16_t x130 = UINT16_MAX;
int8_t x132 = INT8_MIN;
uint16_t x134 = 1380U;
int32_t x137 = 1;
volatile uint8_t x141 = 31U;
volatile int32_t t28 = 121101015;
volatile int32_t t32 = -13026;
int16_t x169 = INT16_MIN;
int8_t x181 = INT8_MIN;
uint16_t x187 = 2U;
int16_t x196 = -1330;
volatile int16_t x198 = INT16_MAX;
static int32_t x200 = INT32_MAX;
volatile uint8_t x202 = 27U;
int64_t x207 = 7LL;
static volatile int8_t x215 = INT8_MIN;
static volatile int8_t x216 = INT8_MAX;
uint64_t x218 = 27LLU;
int8_t x225 = -1;
int8_t x227 = -1;
uint64_t x235 = 7791661590780674LLU;
int32_t x237 = -1;
int16_t x239 = INT16_MIN;
volatile int32_t t50 = -220129550;
uint64_t x255 = 92LLU;
static int8_t x262 = 0;
uint16_t x268 = 2513U;
int8_t x271 = -1;
uint32_t x273 = 1749U;
int64_t x275 = -222166874872684LL;
uint64_t x276 = 110338991052140506LLU;
uint32_t x277 = UINT32_MAX;
int8_t x278 = INT8_MIN;
int32_t x282 = INT32_MAX;
static int64_t x283 = -1LL;
uint32_t x286 = 780U;
int16_t x288 = 194;
volatile uint64_t x290 = 500101016812645592LLU;
volatile int64_t x302 = -1LL;
int64_t x316 = 1443LL;
static int16_t x325 = INT16_MIN;
uint64_t t68 = 4815660LLU;
static int32_t x345 = -1;
int32_t x360 = 2255;
int32_t t72 = 233195667;
int16_t x363 = -1;
uint8_t x365 = UINT8_MAX;
static volatile uint8_t x378 = 59U;
int16_t x383 = -6;
static int16_t x390 = INT16_MIN;
static int8_t x399 = -1;
int16_t x402 = INT16_MIN;
volatile int8_t x414 = -1;
uint16_t x415 = 20U;
uint32_t x416 = UINT32_MAX;
int8_t x417 = -1;
volatile uint8_t x427 = UINT8_MAX;
uint16_t x430 = 0U;
uint16_t x435 = 219U;
uint16_t x438 = 254U;
static volatile uint8_t x442 = UINT8_MAX;
volatile int64_t t91 = 933526717LL;
static int16_t x457 = 0;
int32_t x462 = 50856134;
int8_t x464 = INT8_MIN;
int32_t x474 = 61327435;
static int32_t x490 = 1;
uint8_t x493 = 30U;
int16_t x504 = INT16_MIN;
int32_t x505 = INT32_MIN;
int16_t x507 = -109;
int32_t x514 = 61;
static int64_t t107 = 9368708LL;
static uint16_t x526 = 0U;
uint8_t x528 = UINT8_MAX;
static uint32_t x538 = UINT32_MAX;
static int32_t t112 = 119542;
volatile uint8_t x555 = 0U;
int16_t x558 = 6641;
volatile int32_t t114 = 18089097;
uint32_t x562 = 950U;
static int64_t x577 = -1LL;
static int16_t x578 = INT16_MIN;
volatile int64_t t118 = 38437224770135LL;
int16_t x584 = 1;
volatile int32_t t119 = 378;
static uint16_t x595 = UINT16_MAX;
static uint16_t x611 = UINT16_MAX;
uint32_t x615 = UINT32_MAX;
static int16_t x619 = 0;
int64_t t125 = 87048596154652397LL;
int8_t x625 = -3;
volatile uint32_t x629 = UINT32_MAX;
uint32_t x633 = 2U;
volatile uint32_t t128 = 12586732U;
int8_t x642 = -57;
int16_t x645 = INT16_MIN;
static int8_t x656 = 0;
static uint64_t x662 = 549905712472033LLU;
uint64_t t133 = UINT64_MAX;
int16_t x665 = INT16_MIN;
int8_t x666 = -6;
int64_t x675 = -1LL;
int16_t x679 = 860;
uint64_t x687 = 0LLU;
static int64_t x694 = -1LL;
volatile int32_t t141 = -321285964;
static int8_t x697 = INT8_MIN;
int16_t x699 = 26;
int32_t x701 = INT32_MIN;
int16_t x702 = 32;
uint32_t x703 = 20014977U;
uint8_t x705 = 2U;
int16_t x711 = INT16_MAX;
static int32_t t145 = 0;
int8_t x726 = -1;
static volatile int64_t x728 = 63388431LL;
int64_t x736 = INT64_MIN;
uint32_t x742 = 702574669U;
int32_t t153 = -3;
int32_t t154 = -1;
uint8_t x757 = UINT8_MAX;
int32_t x769 = -1;
int16_t x784 = -1574;
static volatile int32_t t162 = 408073;
uint32_t x798 = 24949U;
volatile uint8_t x799 = 25U;
int64_t x805 = -1LL;
static int8_t x806 = INT8_MAX;
static int16_t x808 = INT16_MIN;
volatile int64_t t164 = 1663323461LL;
int8_t x810 = INT8_MAX;
static volatile uint64_t x811 = 5957910120346154136LLU;
int64_t x814 = 4174LL;
int64_t t167 = 3LL;
int16_t x823 = 1097;
uint64_t x825 = 4787LLU;
int16_t x838 = 1;
volatile int32_t x839 = INT32_MIN;
int16_t x844 = INT16_MIN;
static int16_t x858 = INT16_MIN;
static volatile int8_t x870 = INT8_MIN;
int8_t x874 = INT8_MIN;
static int16_t x881 = 13;
volatile int32_t t178 = 0;
int8_t x889 = INT8_MIN;
volatile uint16_t x901 = 1U;
uint16_t x904 = UINT16_MAX;
uint8_t x906 = 2U;
static int16_t x910 = -3;
int16_t x915 = INT16_MIN;
uint32_t t185 = UINT32_MAX;
static uint16_t x921 = UINT16_MAX;
int32_t x923 = INT32_MIN;
volatile int8_t x925 = -7;
uint8_t x927 = 23U;
int32_t x933 = 1773667;
uint8_t x935 = 13U;
int64_t x936 = 431472LL;
int32_t x939 = -1;
static int8_t x945 = 53;
int64_t x950 = -99267806662LL;
int8_t x952 = INT8_MIN;
volatile int32_t x959 = INT32_MAX;
volatile uint32_t t194 = UINT32_MAX;
int64_t x974 = INT64_MAX;
int16_t x981 = -1;
volatile int16_t x991 = INT16_MAX;
int32_t t199 = -1081948;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	static uint64_t x3 = 1937295327LLU;
	static int64_t t0 = INT64_MIN;

    t0 = (x1*((x2*x3)>x4));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 106186U;
	int32_t x7 = -1;
	int64_t x8 = 12LL;
	static uint32_t t1 = 15411311U;

    t1 = (x5*((x6*x7)>x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x9 = UINT8_MAX;
	uint16_t x10 = 1U;
	uint8_t x11 = 26U;
	static int8_t x12 = 0;
	int32_t t2 = 5264;

    t2 = (x9*((x10*x11)>x12));

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	volatile int32_t x15 = 62;
	int32_t x16 = -4287613;
	volatile int64_t t3 = 1811367LL;

    t3 = (x13*((x14*x15)>x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = -1;
	int64_t x27 = -11327LL;
	uint8_t x28 = 39U;
	int32_t t4 = 46;

    t4 = (x25*((x26*x27)>x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x30 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	volatile int32_t t5 = INT32_MIN;

    t5 = (x29*((x30*x31)>x32));

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	volatile uint32_t x36 = 3575U;
	volatile int32_t t6 = 33;

    t6 = (x33*((x34*x35)>x36));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = INT16_MAX;
	int8_t x38 = 0;
	int8_t x39 = 1;
	volatile uint64_t x40 = UINT64_MAX;
	volatile int32_t t7 = -111053;

    t7 = (x37*((x38*x39)>x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x53 = INT32_MIN;
	uint8_t x55 = 10U;
	uint64_t x56 = 207LLU;
	int32_t t8 = INT32_MIN;

    t8 = (x53*((x54*x55)>x56));

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x57 = -1;
	int16_t x58 = -11;
	int16_t x59 = INT16_MAX;
	volatile int8_t x60 = INT8_MAX;

    t9 = (x57*((x58*x59)>x60));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x65 = 7158U;
	int16_t x66 = -1;
	int8_t x67 = INT8_MAX;
	static int32_t x68 = -830770975;
	static int32_t t10 = -25;

    t10 = (x65*((x66*x67)>x68));

    if (t10 != 7158) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x70 = UINT64_MAX;
	int64_t x71 = -168566278611276510LL;
	int64_t x72 = INT64_MIN;
	volatile int32_t t11 = -2891;

    t11 = (x69*((x70*x71)>x72));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x73 = 348354513083625915LL;
	int16_t x74 = INT16_MAX;
	uint64_t x75 = 405338809LLU;
	uint8_t x76 = 113U;
	static volatile int64_t t12 = 82LL;

    t12 = (x73*((x74*x75)>x76));

    if (t12 != 348354513083625915LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x77 = -41;
	uint64_t x78 = 643129831154877531LLU;
	volatile int64_t x79 = INT64_MIN;
	int32_t t13 = -789174;

    t13 = (x77*((x78*x79)>x80));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x81 = -25;
	uint8_t x83 = 5U;
	int16_t x84 = -1;
	volatile int32_t t14 = 156443993;

    t14 = (x81*((x82*x83)>x84));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x85 = -1;
	int16_t x86 = INT16_MIN;
	volatile int64_t x88 = 1377360552817LL;
	static int32_t t15 = 42;

    t15 = (x85*((x86*x87)>x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x89 = INT16_MAX;
	uint16_t x91 = 7U;
	static int8_t x92 = -1;
	volatile int32_t t16 = -42067828;

    t16 = (x89*((x90*x91)>x92));

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x93 = 2U;
	static uint64_t x94 = 21360893382714LLU;
	volatile int32_t t17 = 566;

    t17 = (x93*((x94*x95)>x96));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x97 = -4033;
	int16_t x98 = -1;
	volatile uint32_t x100 = 40311U;
	int32_t t18 = -2;

    t18 = (x97*((x98*x99)>x100));

    if (t18 != -4033) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x101 = -1;
	static int8_t x102 = INT8_MIN;
	uint8_t x103 = UINT8_MAX;

    t19 = (x101*((x102*x103)>x104));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x105 = -9;
	int8_t x106 = -56;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = UINT64_MAX;
	static int32_t t20 = 25;

    t20 = (x105*((x106*x107)>x108));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x109 = 215182917U;
	static int32_t x110 = INT32_MIN;
	uint32_t x111 = 957U;
	static volatile uint32_t t21 = 56360683U;

    t21 = (x109*((x110*x111)>x112));

    if (t21 != 215182917U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x117 = 20772414LL;
	int8_t x119 = 10;
	uint16_t x120 = UINT16_MAX;
	static int64_t t22 = -6507680578336274LL;

    t22 = (x117*((x118*x119)>x120));

    if (t22 != 20772414LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x121 = 1313U;
	uint8_t x124 = UINT8_MAX;
	uint32_t t23 = 49306638U;

    t23 = (x121*((x122*x123)>x124));

    if (t23 != 1313U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x125 = 1950U;
	volatile int32_t x126 = INT32_MAX;
	int64_t x127 = -1LL;
	static uint32_t t24 = 31U;

    t24 = (x125*((x126*x127)>x128));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x129 = -1;
	uint64_t x131 = UINT64_MAX;
	volatile int32_t t25 = -6854018;

    t25 = (x129*((x130*x131)>x132));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x133 = INT16_MIN;
	int32_t x135 = 1;
	int16_t x136 = -5;
	static volatile int32_t t26 = -828;

    t26 = (x133*((x134*x135)>x136));

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x138 = INT16_MIN;
	int16_t x139 = 1;
	static int8_t x140 = -1;
	volatile int32_t t27 = -2;

    t27 = (x137*((x138*x139)>x140));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x142 = INT64_MAX;
	int8_t x143 = 0;
	uint8_t x144 = 3U;

    t28 = (x141*((x142*x143)>x144));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x145 = 497028LL;
	uint16_t x146 = 0U;
	uint16_t x147 = 15356U;
	int32_t x148 = INT32_MAX;
	static int64_t t29 = -42258308372835LL;

    t29 = (x145*((x146*x147)>x148));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x149 = 0U;
	volatile int16_t x150 = INT16_MIN;
	int8_t x151 = 1;
	uint16_t x152 = 114U;
	volatile int32_t t30 = 1485;

    t30 = (x149*((x150*x151)>x152));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x153 = 5307903879335163LLU;
	static int16_t x154 = -1881;
	static uint8_t x155 = 4U;
	int64_t x156 = -1LL;
	uint64_t t31 = 153058LLU;

    t31 = (x153*((x154*x155)>x156));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x157 = 0U;
	static volatile int64_t x158 = 53607246962LL;
	static uint32_t x159 = 46235075U;
	int64_t x160 = 4191098439976265LL;

    t32 = (x157*((x158*x159)>x160));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x161 = INT32_MIN;
	static uint64_t x162 = UINT64_MAX;
	uint16_t x163 = UINT16_MAX;
	volatile int16_t x164 = INT16_MAX;
	volatile int32_t t33 = INT32_MIN;

    t33 = (x161*((x162*x163)>x164));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x165 = 951U;
	uint64_t x166 = 3192765LLU;
	static int32_t x167 = -1;
	int64_t x168 = -1LL;
	volatile uint32_t t34 = 58833512U;

    t34 = (x165*((x166*x167)>x168));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x170 = -1LL;
	int8_t x171 = -1;
	static int8_t x172 = INT8_MIN;
	int32_t t35 = -393497;

    t35 = (x169*((x170*x171)>x172));

    if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x177 = 36;
	int8_t x178 = 2;
	uint16_t x179 = 213U;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t36 = 3017;

    t36 = (x177*((x178*x179)>x180));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x182 = INT16_MAX;
	uint16_t x183 = UINT16_MAX;
	int16_t x184 = INT16_MIN;
	int32_t t37 = 115;

    t37 = (x181*((x182*x183)>x184));

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x185 = INT8_MIN;
	volatile uint16_t x186 = UINT16_MAX;
	volatile uint8_t x188 = 4U;
	static int32_t t38 = 123626;

    t38 = (x185*((x186*x187)>x188));

    if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x189 = INT32_MIN;
	static uint8_t x190 = UINT8_MAX;
	int8_t x191 = -3;
	int32_t x192 = INT32_MAX;
	static int32_t t39 = -191;

    t39 = (x189*((x190*x191)>x192));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	static uint64_t x194 = 14552753216LLU;
	static int8_t x195 = INT8_MIN;
	int32_t t40 = 1;

    t40 = (x193*((x194*x195)>x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x197 = INT64_MIN;
	volatile uint8_t x199 = 40U;
	volatile int64_t t41 = -111454202636132315LL;

    t41 = (x197*((x198*x199)>x200));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x201 = INT8_MIN;
	int64_t x203 = 32719LL;
	int64_t x204 = -1LL;
	volatile int32_t t42 = 3;

    t42 = (x201*((x202*x203)>x204));

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x205 = 1;
	uint16_t x206 = 26957U;
	static int16_t x208 = INT16_MAX;
	volatile int32_t t43 = 337236;

    t43 = (x205*((x206*x207)>x208));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x213 = 3U;
	int8_t x214 = INT8_MAX;
	volatile int32_t t44 = -1;

    t44 = (x213*((x214*x215)>x216));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x217 = INT32_MAX;
	static int8_t x219 = 48;
	int8_t x220 = -1;
	volatile int32_t t45 = 3285567;

    t45 = (x217*((x218*x219)>x220));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x226 = INT16_MIN;
	int8_t x228 = 7;
	static volatile int32_t t46 = -381247;

    t46 = (x225*((x226*x227)>x228));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x233 = 3U;
	static int32_t x234 = INT32_MIN;
	volatile int16_t x236 = INT16_MAX;
	int32_t t47 = 1;

    t47 = (x233*((x234*x235)>x236));

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x238 = 8U;
	int64_t x240 = 329531321584230839LL;
	volatile int32_t t48 = -62158;

    t48 = (x237*((x238*x239)>x240));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x245 = 79U;
	volatile int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	volatile uint8_t x248 = UINT8_MAX;
	int32_t t49 = 7;

    t49 = (x245*((x246*x247)>x248));

    if (t49 != 79) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x249 = -10;
	uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MAX;
	static uint64_t x252 = 15LLU;

    t50 = (x249*((x250*x251)>x252));

    if (t50 != -10) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x253 = -1;
	uint16_t x254 = 181U;
	int8_t x256 = -5;
	int32_t t51 = 302;

    t51 = (x253*((x254*x255)>x256));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x257 = 2841091;
	int32_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	volatile int8_t x260 = INT8_MAX;
	static volatile int32_t t52 = -26082;

    t52 = (x257*((x258*x259)>x260));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x261 = 33;
	int16_t x263 = INT16_MIN;
	volatile int64_t x264 = -1LL;
	int32_t t53 = -394;

    t53 = (x261*((x262*x263)>x264));

    if (t53 != 33) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x265 = UINT8_MAX;
	volatile int64_t x266 = INT64_MIN;
	uint8_t x267 = 1U;
	int32_t t54 = -28;

    t54 = (x265*((x266*x267)>x268));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x269 = INT64_MIN;
	uint16_t x270 = UINT16_MAX;
	static int8_t x272 = 1;
	int64_t t55 = -105479LL;

    t55 = (x269*((x270*x271)>x272));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x274 = INT8_MIN;
	static uint32_t t56 = 1U;

    t56 = (x273*((x274*x275)>x276));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x279 = INT16_MIN;
	static volatile int64_t x280 = INT64_MIN;
	static uint32_t t57 = UINT32_MAX;

    t57 = (x277*((x278*x279)>x280));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x281 = 8;
	volatile int16_t x284 = 15839;
	static volatile int32_t t58 = 31;

    t58 = (x281*((x282*x283)>x284));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x285 = 0;
	int8_t x287 = -1;
	int32_t t59 = 3978828;

    t59 = (x285*((x286*x287)>x288));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x289 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	uint32_t x292 = 1U;
	volatile int32_t t60 = 1;

    t60 = (x289*((x290*x291)>x292));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x297 = UINT8_MAX;
	volatile int8_t x298 = INT8_MIN;
	int64_t x299 = 42976LL;
	int8_t x300 = 0;
	int32_t t61 = -1987457;

    t61 = (x297*((x298*x299)>x300));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x301 = -985645167224952LL;
	static int64_t x303 = -1LL;
	volatile uint16_t x304 = UINT16_MAX;
	int64_t t62 = 103445335LL;

    t62 = (x301*((x302*x303)>x304));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MAX;
	int16_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int32_t t63 = -202457;

    t63 = (x305*((x306*x307)>x308));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x313 = UINT64_MAX;
	volatile int16_t x314 = INT16_MIN;
	uint8_t x315 = 25U;
	uint64_t t64 = 66969926594219143LLU;

    t64 = (x313*((x314*x315)>x316));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x317 = 953825399U;
	uint32_t x318 = UINT32_MAX;
	static volatile int32_t x319 = 29972;
	volatile uint16_t x320 = 987U;
	volatile uint32_t t65 = 24U;

    t65 = (x317*((x318*x319)>x320));

    if (t65 != 953825399U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x321 = 23LLU;
	uint32_t x322 = 76248U;
	static int32_t x323 = 0;
	int16_t x324 = INT16_MAX;
	uint64_t t66 = 687106LLU;

    t66 = (x321*((x322*x323)>x324));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x326 = 743013;
	volatile uint16_t x327 = 13U;
	static uint64_t x328 = 195949951429LLU;
	int32_t t67 = 1444;

    t67 = (x325*((x326*x327)>x328));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x329 = 202891766945327272LLU;
	uint32_t x330 = UINT32_MAX;
	int32_t x331 = -52968;
	uint32_t x332 = 195792U;

    t68 = (x329*((x330*x331)>x332));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x333 = 2U;
	static volatile uint8_t x334 = 4U;
	volatile uint8_t x335 = UINT8_MAX;
	uint16_t x336 = UINT16_MAX;
	volatile uint32_t t69 = 469739U;

    t69 = (x333*((x334*x335)>x336));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x337 = -420;
	int32_t x338 = -340619;
	int8_t x339 = -1;
	static int8_t x340 = INT8_MAX;
	volatile int32_t t70 = -1;

    t70 = (x337*((x338*x339)>x340));

    if (t70 != -420) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x346 = INT64_MIN;
	uint64_t x347 = 378925LLU;
	uint32_t x348 = 33U;
	int32_t t71 = 1;

    t71 = (x345*((x346*x347)>x348));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x357 = -45;
	uint64_t x358 = 8498992189871107660LLU;
	int64_t x359 = 6338723LL;

    t72 = (x357*((x358*x359)>x360));

    if (t72 != -45) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	int64_t x364 = INT64_MIN;
	volatile int32_t t73 = 31647;

    t73 = (x361*((x362*x363)>x364));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x366 = -1LL;
	int16_t x367 = INT16_MAX;
	int8_t x368 = INT8_MAX;
	int32_t t74 = 286086;

    t74 = (x365*((x366*x367)>x368));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x369 = 406553547414752LLU;
	volatile int8_t x370 = INT8_MAX;
	int16_t x371 = INT16_MAX;
	static int64_t x372 = -1525671LL;
	volatile uint64_t t75 = 1LLU;

    t75 = (x369*((x370*x371)>x372));

    if (t75 != 406553547414752LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x377 = 223670280LLU;
	uint64_t x379 = 201793916LLU;
	int8_t x380 = 1;
	uint64_t t76 = 4509LLU;

    t76 = (x377*((x378*x379)>x380));

    if (t76 != 223670280LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x381 = 1104951203U;
	static int64_t x382 = -1LL;
	int64_t x384 = -232393993LL;
	volatile uint32_t t77 = 5221U;

    t77 = (x381*((x382*x383)>x384));

    if (t77 != 1104951203U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x385 = INT8_MAX;
	volatile int16_t x386 = INT16_MIN;
	uint16_t x387 = 6U;
	int8_t x388 = INT8_MIN;
	int32_t t78 = -63516;

    t78 = (x385*((x386*x387)>x388));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x389 = 4980354;
	uint64_t x391 = 4503902550LLU;
	int8_t x392 = INT8_MIN;
	int32_t t79 = 57;

    t79 = (x389*((x390*x391)>x392));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x393 = 186361486U;
	volatile uint16_t x394 = 2275U;
	static int16_t x395 = INT16_MAX;
	static int64_t x396 = -9907602619900043LL;
	volatile uint32_t t80 = 523020U;

    t80 = (x393*((x394*x395)>x396));

    if (t80 != 186361486U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x397 = 122533828LLU;
	volatile int8_t x398 = 2;
	volatile uint64_t x400 = 132088028LLU;
	volatile uint64_t t81 = 3086107175419LLU;

    t81 = (x397*((x398*x399)>x400));

    if (t81 != 122533828LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x401 = -1LL;
	uint32_t x403 = 11426749U;
	int32_t x404 = INT32_MAX;
	volatile int64_t t82 = -7453588491LL;

    t82 = (x401*((x402*x403)>x404));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x405 = INT32_MIN;
	int32_t x406 = INT32_MIN;
	uint32_t x407 = UINT32_MAX;
	volatile int8_t x408 = INT8_MIN;
	int32_t t83 = 0;

    t83 = (x405*((x406*x407)>x408));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x409 = 22;
	uint32_t x410 = 39U;
	static int16_t x411 = INT16_MAX;
	static uint16_t x412 = UINT16_MAX;
	volatile int32_t t84 = -56165875;

    t84 = (x409*((x410*x411)>x412));

    if (t84 != 22) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x413 = INT64_MIN;
	int64_t t85 = -145258699002663181LL;

    t85 = (x413*((x414*x415)>x416));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x418 = -1;
	uint8_t x419 = UINT8_MAX;
	int32_t x420 = INT32_MIN;
	int32_t t86 = -137;

    t86 = (x417*((x418*x419)>x420));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x425 = -1;
	int64_t x426 = 2851840433109LL;
	int64_t x428 = INT64_MIN;
	static volatile int32_t t87 = 37;

    t87 = (x425*((x426*x427)>x428));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x429 = INT8_MAX;
	volatile int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;
	static volatile int32_t t88 = 9;

    t88 = (x429*((x430*x431)>x432));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x433 = 10950571LL;
	volatile int64_t x434 = 6627LL;
	int32_t x436 = INT32_MIN;
	int64_t t89 = -1LL;

    t89 = (x433*((x434*x435)>x436));

    if (t89 != 10950571LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x437 = -85;
	static uint16_t x439 = UINT16_MAX;
	uint64_t x440 = 18442691016504LLU;
	static int32_t t90 = 30021;

    t90 = (x437*((x438*x439)>x440));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x441 = 500617520LL;
	uint64_t x443 = UINT64_MAX;
	static int8_t x444 = -33;

    t91 = (x441*((x442*x443)>x444));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x445 = INT32_MIN;
	volatile int64_t x446 = 202557LL;
	int8_t x447 = INT8_MIN;
	int16_t x448 = -1;
	int32_t t92 = 31427079;

    t92 = (x445*((x446*x447)>x448));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x453 = -1;
	static volatile int16_t x454 = INT16_MIN;
	static uint32_t x455 = 1478033644U;
	volatile uint8_t x456 = UINT8_MAX;
	int32_t t93 = -1261771;

    t93 = (x453*((x454*x455)>x456));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x458 = -1LL;
	uint16_t x459 = 14530U;
	int64_t x460 = INT64_MAX;
	int32_t t94 = -1019316845;

    t94 = (x457*((x458*x459)>x460));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x461 = INT16_MIN;
	uint64_t x463 = 727923LLU;
	static int32_t t95 = -1;

    t95 = (x461*((x462*x463)>x464));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x465 = -346LL;
	int64_t x466 = -1LL;
	int32_t x467 = INT32_MIN;
	int16_t x468 = 64;
	static int64_t t96 = -2111547123345414566LL;

    t96 = (x465*((x466*x467)>x468));

    if (t96 != -346LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x469 = 39649536LLU;
	volatile uint16_t x470 = UINT16_MAX;
	uint16_t x471 = 3363U;
	int8_t x472 = 1;
	uint64_t t97 = 827920418LLU;

    t97 = (x469*((x470*x471)>x472));

    if (t97 != 39649536LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x473 = INT16_MAX;
	int8_t x475 = -1;
	static int8_t x476 = INT8_MIN;
	volatile int32_t t98 = -1;

    t98 = (x473*((x474*x475)>x476));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x477 = UINT16_MAX;
	uint64_t x478 = 11LLU;
	int16_t x479 = -698;
	static int32_t x480 = INT32_MIN;
	volatile int32_t t99 = 274031518;

    t99 = (x477*((x478*x479)>x480));

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x481 = 2LLU;
	static int8_t x482 = INT8_MIN;
	uint8_t x483 = 40U;
	uint8_t x484 = UINT8_MAX;
	uint64_t t100 = 5385390873067LLU;

    t100 = (x481*((x482*x483)>x484));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x485 = INT64_MIN;
	int16_t x486 = INT16_MAX;
	int8_t x487 = INT8_MIN;
	int32_t x488 = INT32_MAX;
	volatile int64_t t101 = 1LL;

    t101 = (x485*((x486*x487)>x488));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x489 = INT32_MAX;
	uint64_t x491 = 3744329171LLU;
	int8_t x492 = 22;
	int32_t t102 = INT32_MAX;

    t102 = (x489*((x490*x491)>x492));

    if (t102 != INT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x494 = INT64_MIN;
	int8_t x495 = 0;
	uint64_t x496 = UINT64_MAX;
	static volatile int32_t t103 = 1;

    t103 = (x493*((x494*x495)>x496));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x501 = UINT16_MAX;
	uint8_t x502 = 8U;
	int8_t x503 = INT8_MAX;
	volatile int32_t t104 = 16;

    t104 = (x501*((x502*x503)>x504));

    if (t104 != 65535) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x506 = -1;
	int16_t x508 = INT16_MIN;
	int32_t t105 = INT32_MIN;

    t105 = (x505*((x506*x507)>x508));

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x513 = 43U;
	volatile uint32_t x515 = UINT32_MAX;
	int8_t x516 = -1;
	static uint32_t t106 = 220209197U;

    t106 = (x513*((x514*x515)>x516));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x521 = -1LL;
	uint64_t x522 = UINT64_MAX;
	uint16_t x523 = 5750U;
	static int16_t x524 = INT16_MAX;

    t107 = (x521*((x522*x523)>x524));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x525 = INT8_MIN;
	uint16_t x527 = UINT16_MAX;
	static int32_t t108 = 169990;

    t108 = (x525*((x526*x527)>x528));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x529 = 0;
	uint64_t x530 = UINT64_MAX;
	int64_t x531 = INT64_MIN;
	int16_t x532 = INT16_MAX;
	int32_t t109 = -249381;

    t109 = (x529*((x530*x531)>x532));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x537 = 3U;
	volatile uint8_t x539 = UINT8_MAX;
	uint8_t x540 = 1U;
	volatile uint32_t t110 = 2617U;

    t110 = (x537*((x538*x539)>x540));

    if (t110 != 3U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x541 = 762U;
	static volatile uint16_t x542 = 9888U;
	uint8_t x543 = UINT8_MAX;
	int32_t x544 = -1;
	volatile int32_t t111 = 8;

    t111 = (x541*((x542*x543)>x544));

    if (t111 != 762) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x545 = 1;
	volatile uint64_t x546 = 6857285LLU;
	int64_t x547 = INT64_MAX;
	int32_t x548 = INT32_MIN;

    t112 = (x545*((x546*x547)>x548));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x553 = UINT8_MAX;
	static int32_t x554 = -1;
	int16_t x556 = 5947;
	int32_t t113 = 45;

    t113 = (x553*((x554*x555)>x556));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x557 = INT16_MIN;
	int64_t x559 = -1LL;
	int8_t x560 = -1;

    t114 = (x557*((x558*x559)>x560));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x561 = UINT8_MAX;
	int64_t x563 = -1LL;
	int64_t x564 = INT64_MAX;
	static volatile int32_t t115 = 6;

    t115 = (x561*((x562*x563)>x564));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x569 = -70;
	volatile uint8_t x570 = UINT8_MAX;
	int64_t x571 = -1LL;
	int8_t x572 = INT8_MIN;
	volatile int32_t t116 = -7;

    t116 = (x569*((x570*x571)>x572));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x573 = INT32_MIN;
	int8_t x574 = -1;
	uint64_t x575 = UINT64_MAX;
	int16_t x576 = -7;
	volatile int32_t t117 = -5;

    t117 = (x573*((x574*x575)>x576));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x579 = INT16_MIN;
	static int16_t x580 = 376;

    t118 = (x577*((x578*x579)>x580));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x581 = -1;
	volatile uint16_t x582 = 2739U;
	static int16_t x583 = INT16_MAX;

    t119 = (x581*((x582*x583)>x584));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x589 = -76LL;
	static uint64_t x590 = UINT64_MAX;
	volatile uint32_t x591 = UINT32_MAX;
	static int64_t x592 = 82112291093LL;
	static int64_t t120 = 148232063776LL;

    t120 = (x589*((x590*x591)>x592));

    if (t120 != -76LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x593 = 359;
	static int16_t x594 = -3;
	int8_t x596 = INT8_MIN;
	volatile int32_t t121 = 49;

    t121 = (x593*((x594*x595)>x596));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x601 = 64U;
	int32_t x602 = INT32_MIN;
	int64_t x603 = 2421962809LL;
	int64_t x604 = INT64_MIN;
	int32_t t122 = 794663;

    t122 = (x601*((x602*x603)>x604));

    if (t122 != 64) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x609 = 82U;
	uint16_t x610 = 42U;
	int16_t x612 = INT16_MIN;
	int32_t t123 = 0;

    t123 = (x609*((x610*x611)>x612));

    if (t123 != 82) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x613 = 0;
	volatile int64_t x614 = -1LL;
	volatile int32_t x616 = 2002;
	volatile int32_t t124 = -35;

    t124 = (x613*((x614*x615)>x616));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x617 = INT64_MIN;
	int64_t x618 = -45294555311100LL;
	int16_t x620 = INT16_MAX;

    t125 = (x617*((x618*x619)>x620));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x626 = -1LL;
	volatile int32_t x627 = INT32_MIN;
	int32_t x628 = INT32_MIN;
	int32_t t126 = -3;

    t126 = (x625*((x626*x627)>x628));

    if (t126 != -3) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x630 = 12;
	int8_t x631 = -26;
	static int64_t x632 = 249541190537627567LL;
	static volatile uint32_t t127 = 250776240U;

    t127 = (x629*((x630*x631)>x632));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x634 = INT8_MIN;
	int16_t x635 = INT16_MAX;
	static int32_t x636 = 4023771;

    t128 = (x633*((x634*x635)>x636));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x637 = INT32_MAX;
	int32_t x638 = -1;
	static int8_t x639 = 0;
	int8_t x640 = 1;
	static volatile int32_t t129 = 148060407;

    t129 = (x637*((x638*x639)>x640));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x641 = 7;
	int8_t x643 = INT8_MAX;
	int32_t x644 = INT32_MIN;
	int32_t t130 = -1676182;

    t130 = (x641*((x642*x643)>x644));

    if (t130 != 7) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x646 = -3465443098930LL;
	static volatile int8_t x647 = INT8_MAX;
	static uint16_t x648 = UINT16_MAX;
	int32_t t131 = -65514;

    t131 = (x645*((x646*x647)>x648));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x653 = INT32_MAX;
	volatile uint32_t x654 = 1293239182U;
	static int8_t x655 = 0;
	volatile int32_t t132 = 0;

    t132 = (x653*((x654*x655)>x656));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x661 = UINT64_MAX;
	static volatile int8_t x663 = INT8_MIN;
	int32_t x664 = 1;

    t133 = (x661*((x662*x663)>x664));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x667 = 98U;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t134 = -257;

    t134 = (x665*((x666*x667)>x668));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x669 = -1;
	static uint8_t x670 = UINT8_MAX;
	uint64_t x671 = 20592505012LLU;
	uint8_t x672 = 6U;
	int32_t t135 = -2651;

    t135 = (x669*((x670*x671)>x672));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x673 = 0;
	int16_t x674 = INT16_MIN;
	int16_t x676 = -6;
	int32_t t136 = 37346;

    t136 = (x673*((x674*x675)>x676));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x677 = INT8_MIN;
	int32_t x678 = -594;
	static int32_t x680 = INT32_MIN;
	int32_t t137 = -8086;

    t137 = (x677*((x678*x679)>x680));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x681 = -1;
	uint8_t x682 = 0U;
	int8_t x683 = INT8_MAX;
	int64_t x684 = 6LL;
	volatile int32_t t138 = 7966;

    t138 = (x681*((x682*x683)>x684));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x685 = -1;
	int32_t x686 = -1;
	int32_t x688 = 1;
	int32_t t139 = -19904;

    t139 = (x685*((x686*x687)>x688));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x689 = 12368U;
	uint16_t x690 = UINT16_MAX;
	int16_t x691 = INT16_MIN;
	static int16_t x692 = INT16_MIN;
	volatile uint32_t t140 = 1U;

    t140 = (x689*((x690*x691)>x692));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x693 = -9883;
	static int8_t x695 = INT8_MIN;
	int16_t x696 = 5621;

    t141 = (x693*((x694*x695)>x696));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x698 = INT8_MIN;
	static volatile int16_t x700 = -246;
	int32_t t142 = -1050576212;

    t142 = (x697*((x698*x699)>x700));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x704 = -3533183190373828LL;
	int32_t t143 = INT32_MIN;

    t143 = (x701*((x702*x703)>x704));

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x706 = INT8_MIN;
	uint64_t x707 = UINT64_MAX;
	static uint8_t x708 = 56U;
	static volatile int32_t t144 = -14165026;

    t144 = (x705*((x706*x707)>x708));

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x709 = -181;
	int16_t x710 = 1801;
	uint8_t x712 = UINT8_MAX;

    t145 = (x709*((x710*x711)>x712));

    if (t145 != -181) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x717 = INT16_MIN;
	volatile uint16_t x718 = 32250U;
	uint8_t x719 = 1U;
	uint64_t x720 = UINT64_MAX;
	static int32_t t146 = -289192074;

    t146 = (x717*((x718*x719)>x720));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x721 = 426373;
	uint32_t x722 = 86646259U;
	uint64_t x723 = 7245LLU;
	volatile int16_t x724 = 2;
	static volatile int32_t t147 = 5;

    t147 = (x721*((x722*x723)>x724));

    if (t147 != 426373) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x725 = INT32_MIN;
	uint16_t x727 = 133U;
	volatile int32_t t148 = -652121;

    t148 = (x725*((x726*x727)>x728));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x729 = INT16_MIN;
	static int8_t x730 = -1;
	static int8_t x731 = -3;
	static int8_t x732 = INT8_MAX;
	static volatile int32_t t149 = -7133;

    t149 = (x729*((x730*x731)>x732));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x733 = INT8_MAX;
	uint32_t x734 = 1389815504U;
	int16_t x735 = INT16_MIN;
	int32_t t150 = -5;

    t150 = (x733*((x734*x735)>x736));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x737 = -1;
	int16_t x738 = INT16_MIN;
	static int16_t x739 = INT16_MIN;
	int32_t x740 = INT32_MIN;
	int32_t t151 = -43;

    t151 = (x737*((x738*x739)>x740));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x741 = INT32_MIN;
	uint64_t x743 = UINT64_MAX;
	volatile uint8_t x744 = 100U;
	volatile int32_t t152 = INT32_MIN;

    t152 = (x741*((x742*x743)>x744));

    if (t152 != INT32_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x745 = 30;
	volatile int64_t x746 = -1LL;
	static int8_t x747 = INT8_MIN;
	uint64_t x748 = 2017491806LLU;

    t153 = (x745*((x746*x747)>x748));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x753 = -1;
	uint8_t x754 = UINT8_MAX;
	int16_t x755 = INT16_MAX;
	static volatile int64_t x756 = INT64_MIN;

    t154 = (x753*((x754*x755)>x756));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x758 = UINT16_MAX;
	int8_t x759 = -1;
	static int64_t x760 = 102640LL;
	static int32_t t155 = 1418;

    t155 = (x757*((x758*x759)>x760));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x770 = -1;
	int16_t x771 = INT16_MIN;
	volatile int32_t x772 = INT32_MIN;
	volatile int32_t t156 = -26259994;

    t156 = (x769*((x770*x771)>x772));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x773 = INT16_MIN;
	int16_t x774 = INT16_MAX;
	volatile int8_t x775 = INT8_MIN;
	static uint32_t x776 = UINT32_MAX;
	static volatile int32_t t157 = 0;

    t157 = (x773*((x774*x775)>x776));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x777 = UINT64_MAX;
	volatile uint32_t x778 = 32805200U;
	int8_t x779 = INT8_MIN;
	int16_t x780 = 39;
	uint64_t t158 = UINT64_MAX;

    t158 = (x777*((x778*x779)>x780));

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x781 = INT64_MIN;
	int32_t x782 = -1482;
	int8_t x783 = INT8_MIN;
	volatile int64_t t159 = INT64_MIN;

    t159 = (x781*((x782*x783)>x784));

    if (t159 != INT64_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x785 = 7U;
	int32_t x786 = -1;
	volatile uint16_t x787 = 1192U;
	static uint64_t x788 = UINT64_MAX;
	volatile int32_t t160 = -136940972;

    t160 = (x785*((x786*x787)>x788));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x789 = 7U;
	uint8_t x790 = 31U;
	volatile uint8_t x791 = UINT8_MAX;
	int64_t x792 = 16841555955105043LL;
	int32_t t161 = 47556417;

    t161 = (x789*((x790*x791)>x792));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x793 = UINT8_MAX;
	uint8_t x794 = UINT8_MAX;
	int8_t x795 = INT8_MIN;
	static int16_t x796 = INT16_MIN;

    t162 = (x793*((x794*x795)>x796));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x797 = INT64_MIN;
	volatile uint16_t x800 = UINT16_MAX;
	static volatile int64_t t163 = INT64_MIN;

    t163 = (x797*((x798*x799)>x800));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x807 = 2424152;

    t164 = (x805*((x806*x807)>x808));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x809 = UINT16_MAX;
	volatile uint16_t x812 = 73U;
	int32_t t165 = -3;

    t165 = (x809*((x810*x811)>x812));

    if (t165 != 65535) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x813 = -89;
	int8_t x815 = INT8_MAX;
	int16_t x816 = 4347;
	int32_t t166 = -12737345;

    t166 = (x813*((x814*x815)>x816));

    if (t166 != -89) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x817 = INT64_MAX;
	uint64_t x818 = UINT64_MAX;
	uint8_t x819 = 114U;
	int16_t x820 = -1;

    t167 = (x817*((x818*x819)>x820));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x821 = INT32_MAX;
	uint64_t x822 = 1661818LLU;
	static int8_t x824 = 19;
	volatile int32_t t168 = INT32_MAX;

    t168 = (x821*((x822*x823)>x824));

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x826 = INT16_MAX;
	int8_t x827 = INT8_MAX;
	static int16_t x828 = INT16_MIN;
	volatile uint64_t t169 = 78908314445469LLU;

    t169 = (x825*((x826*x827)>x828));

    if (t169 != 4787LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x837 = -1;
	volatile uint16_t x840 = 3U;
	int32_t t170 = 32551;

    t170 = (x837*((x838*x839)>x840));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x841 = UINT8_MAX;
	int32_t x842 = INT32_MIN;
	uint64_t x843 = UINT64_MAX;
	volatile int32_t t171 = 3305564;

    t171 = (x841*((x842*x843)>x844));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x845 = 4925509;
	uint64_t x846 = 37178894545597LLU;
	int64_t x847 = -5863539423LL;
	volatile uint64_t x848 = UINT64_MAX;
	int32_t t172 = 52;

    t172 = (x845*((x846*x847)>x848));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x849 = INT32_MIN;
	volatile int32_t x850 = -2;
	int64_t x851 = 9028084992LL;
	uint8_t x852 = UINT8_MAX;
	int32_t t173 = -1;

    t173 = (x849*((x850*x851)>x852));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x857 = 4682LLU;
	int16_t x859 = INT16_MIN;
	static int8_t x860 = -3;
	uint64_t t174 = 21976LLU;

    t174 = (x857*((x858*x859)>x860));

    if (t174 != 4682LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x869 = INT8_MIN;
	int16_t x871 = 510;
	int32_t x872 = INT32_MAX;
	volatile int32_t t175 = 178;

    t175 = (x869*((x870*x871)>x872));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x873 = INT16_MIN;
	int8_t x875 = -35;
	int64_t x876 = -16095LL;
	int32_t t176 = -61055284;

    t176 = (x873*((x874*x875)>x876));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x882 = 16LL;
	int32_t x883 = INT32_MAX;
	uint64_t x884 = UINT64_MAX;
	volatile int32_t t177 = 98;

    t177 = (x881*((x882*x883)>x884));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x885 = INT16_MAX;
	static int32_t x886 = 3;
	volatile int32_t x887 = -1;
	int64_t x888 = INT64_MIN;

    t178 = (x885*((x886*x887)>x888));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x890 = UINT16_MAX;
	volatile int8_t x891 = INT8_MIN;
	int16_t x892 = 3;
	volatile int32_t t179 = -13330;

    t179 = (x889*((x890*x891)>x892));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x893 = 1;
	uint8_t x894 = 36U;
	int8_t x895 = -1;
	volatile int64_t x896 = -5547860LL;
	volatile int32_t t180 = -6949;

    t180 = (x893*((x894*x895)>x896));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x897 = INT8_MAX;
	static int32_t x898 = INT32_MIN;
	uint16_t x899 = 1U;
	volatile int16_t x900 = INT16_MAX;
	int32_t t181 = -2;

    t181 = (x897*((x898*x899)>x900));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x902 = -8024;
	uint32_t x903 = 109684U;
	volatile int32_t t182 = -31550776;

    t182 = (x901*((x902*x903)>x904));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x905 = UINT16_MAX;
	static uint16_t x907 = UINT16_MAX;
	uint16_t x908 = 3045U;
	volatile int32_t t183 = 51933074;

    t183 = (x905*((x906*x907)>x908));

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x909 = INT8_MIN;
	int64_t x911 = -1LL;
	int32_t x912 = -1;
	volatile int32_t t184 = 4;

    t184 = (x909*((x910*x911)>x912));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x913 = UINT32_MAX;
	int8_t x914 = -1;
	uint16_t x916 = 0U;

    t185 = (x913*((x914*x915)>x916));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x922 = 1464LL;
	uint32_t x924 = 1681286U;
	int32_t t186 = 15396772;

    t186 = (x921*((x922*x923)>x924));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x926 = UINT32_MAX;
	static uint32_t x928 = 12U;
	volatile int32_t t187 = -115508361;

    t187 = (x925*((x926*x927)>x928));

    if (t187 != -7) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x929 = -1;
	uint32_t x930 = 117U;
	static int32_t x931 = INT32_MAX;
	int16_t x932 = INT16_MIN;
	int32_t t188 = 179203965;

    t188 = (x929*((x930*x931)>x932));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x934 = -1;
	int32_t t189 = 2062509;

    t189 = (x933*((x934*x935)>x936));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x937 = 343U;
	volatile uint16_t x938 = 29U;
	int16_t x940 = 450;
	static volatile int32_t t190 = -114;

    t190 = (x937*((x938*x939)>x940));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x946 = 0U;
	int8_t x947 = INT8_MAX;
	int64_t x948 = INT64_MIN;
	volatile int32_t t191 = -220;

    t191 = (x945*((x946*x947)>x948));

    if (t191 != 53) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x949 = INT64_MAX;
	uint8_t x951 = 2U;
	int64_t t192 = 121203111857917375LL;

    t192 = (x949*((x950*x951)>x952));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x953 = -1LL;
	static uint32_t x954 = 3U;
	uint16_t x955 = 35U;
	volatile int32_t x956 = INT32_MAX;
	int64_t t193 = -56564711580LL;

    t193 = (x953*((x954*x955)>x956));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x957 = UINT32_MAX;
	uint64_t x958 = 1LLU;
	volatile uint32_t x960 = 15466268U;

    t194 = (x957*((x958*x959)>x960));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x965 = 8;
	uint8_t x966 = UINT8_MAX;
	uint32_t x967 = UINT32_MAX;
	uint8_t x968 = 23U;
	volatile int32_t t195 = 1031966625;

    t195 = (x965*((x966*x967)>x968));

    if (t195 != 8) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x973 = -43920028300550LL;
	int64_t x975 = -1LL;
	int64_t x976 = INT64_MIN;
	static volatile int64_t t196 = 7928123830604684LL;

    t196 = (x973*((x974*x975)>x976));

    if (t196 != -43920028300550LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x977 = INT32_MAX;
	uint32_t x978 = UINT32_MAX;
	int32_t x979 = -1;
	int8_t x980 = INT8_MIN;
	volatile int32_t t197 = -41262769;

    t197 = (x977*((x978*x979)>x980));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x982 = 60U;
	volatile uint16_t x983 = UINT16_MAX;
	static int32_t x984 = -357827028;
	volatile int32_t t198 = 32056;

    t198 = (x981*((x982*x983)>x984));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x989 = -1;
	uint32_t x990 = 487U;
	static int16_t x992 = INT16_MIN;

    t199 = (x989*((x990*x991)>x992));

    if (t199 != 0) { NG(); } else { ; }
	
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

