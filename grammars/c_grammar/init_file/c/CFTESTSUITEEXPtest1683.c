
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

static int64_t x1 = INT64_MIN;
uint32_t x2 = UINT32_MAX;
int16_t x4 = INT16_MIN;
int16_t x7 = INT16_MAX;
uint16_t x10 = 58U;
volatile int64_t x11 = -200083301095186LL;
uint32_t x13 = UINT32_MAX;
int64_t x15 = INT64_MIN;
uint16_t x18 = UINT16_MAX;
int32_t t5 = -1591983;
static int8_t x25 = -8;
uint16_t x29 = 3U;
static uint32_t x31 = UINT32_MAX;
int32_t x32 = INT32_MIN;
volatile int32_t t7 = 5;
volatile int64_t x43 = INT64_MIN;
int64_t t10 = 1492900LL;
volatile int64_t x50 = -123725983375806523LL;
volatile int64_t x55 = -4185889833LL;
int16_t x57 = INT16_MIN;
int8_t x66 = INT8_MIN;
int32_t x71 = INT32_MIN;
volatile uint32_t x72 = UINT32_MAX;
uint16_t x73 = 5U;
int16_t x74 = 298;
static uint8_t x77 = UINT8_MAX;
int8_t x87 = INT8_MIN;
uint32_t x90 = UINT32_MAX;
int32_t x96 = -1;
int8_t x106 = INT8_MIN;
uint16_t x107 = 19U;
static volatile uint64_t t26 = 2347458LLU;
uint8_t x109 = UINT8_MAX;
volatile int64_t x110 = INT64_MIN;
uint32_t t29 = 125U;
int32_t t30 = INT32_MIN;
volatile uint64_t t31 = 50LLU;
volatile int32_t t32 = 0;
uint16_t x134 = 868U;
static uint64_t x143 = 47LLU;
int64_t x145 = -338LL;
int64_t x146 = INT64_MAX;
int32_t x153 = INT32_MIN;
int32_t x160 = INT32_MIN;
int32_t t39 = 232;
uint32_t x171 = 5867118U;
int8_t x182 = -1;
int8_t x184 = INT8_MIN;
volatile uint8_t x190 = 3U;
uint32_t x193 = 20U;
static int32_t x202 = INT32_MAX;
volatile uint32_t x217 = UINT32_MAX;
int16_t x221 = INT16_MIN;
int16_t x223 = INT16_MIN;
int16_t x225 = -1;
int8_t x228 = INT8_MIN;
uint64_t x230 = 18458LLU;
int16_t x231 = 46;
int32_t t58 = -35111693;
int32_t x239 = INT32_MAX;
uint32_t x242 = 82332910U;
uint32_t x243 = 7U;
int16_t x247 = -5279;
int8_t x248 = -2;
int32_t x249 = INT32_MIN;
int64_t x251 = INT64_MIN;
volatile int32_t t62 = INT32_MIN;
uint32_t x253 = 256873U;
volatile int64_t x254 = 27259469LL;
int16_t x255 = INT16_MIN;
uint16_t x258 = 1345U;
int64_t x265 = -1LL;
static int32_t x266 = -41787;
static int16_t x267 = -2403;
uint64_t x268 = UINT64_MAX;
volatile int64_t t66 = 1547464943LL;
volatile int64_t x269 = INT64_MIN;
int64_t t67 = -19043094944694LL;
static int64_t x280 = -1658458173761253LL;
static int8_t x282 = INT8_MIN;
volatile int32_t x283 = -1;
static volatile int32_t t72 = 70764;
int16_t x299 = 148;
volatile int32_t t75 = 158;
uint8_t x305 = 53U;
int64_t x307 = 1123729LL;
uint64_t x309 = 66047113611427552LLU;
int16_t x311 = 1;
uint64_t x313 = UINT64_MAX;
static uint32_t x319 = 3060288U;
static volatile int16_t x320 = -7148;
uint8_t x324 = UINT8_MAX;
volatile int64_t t80 = -4486302783647779598LL;
static volatile int32_t t82 = -531;
static uint8_t x336 = UINT8_MAX;
int8_t x340 = -3;
volatile int32_t x341 = -1;
int64_t x343 = -1LL;
int32_t t85 = 2728788;
int16_t x345 = INT16_MAX;
uint32_t t87 = 28U;
uint8_t x362 = UINT8_MAX;
int8_t x373 = INT8_MAX;
uint8_t x375 = 16U;
static int32_t t94 = INT32_MIN;
volatile uint8_t x384 = UINT8_MAX;
static volatile int32_t x395 = INT32_MIN;
uint8_t x396 = UINT8_MAX;
int16_t x400 = INT16_MIN;
uint64_t x402 = UINT64_MAX;
int16_t x404 = -15;
int8_t x406 = -1;
int64_t x409 = INT64_MIN;
static int64_t x411 = -1LL;
uint16_t x412 = 28U;
static int32_t x413 = INT32_MIN;
int64_t x418 = 45243422404LL;
uint64_t x421 = 5595LLU;
int32_t x424 = INT32_MIN;
int32_t x425 = 117;
uint32_t x438 = UINT32_MAX;
static uint64_t x442 = 5688646795996685LLU;
volatile uint64_t x443 = 1LLU;
uint8_t x451 = UINT8_MAX;
int64_t x452 = 2288LL;
volatile uint8_t x457 = 0U;
int32_t x459 = INT32_MAX;
uint64_t x460 = 6691217LLU;
int32_t t114 = 388;
int32_t t116 = -11012;
int64_t x471 = INT64_MIN;
volatile uint16_t x473 = UINT16_MAX;
int64_t x479 = INT64_MIN;
static uint64_t x480 = UINT64_MAX;
uint8_t x485 = UINT8_MAX;
uint16_t x487 = UINT16_MAX;
volatile int8_t x488 = -2;
uint16_t x494 = UINT16_MAX;
int16_t x496 = 2;
volatile int8_t x498 = INT8_MIN;
int8_t x501 = -1;
int64_t t126 = 11000564231572LL;
int8_t x520 = INT8_MAX;
static uint64_t x530 = 1405842924294838747LLU;
int8_t x532 = INT8_MIN;
static uint8_t x536 = UINT8_MAX;
int64_t x537 = -45875331555408264LL;
static volatile int64_t t134 = -16130902840813LL;
int16_t x544 = 118;
int8_t x556 = 3;
uint8_t x559 = 15U;
int16_t x562 = INT16_MAX;
int32_t x563 = -1;
int64_t x564 = 4LL;
int32_t t141 = -789;
static int8_t x572 = INT8_MIN;
int32_t t142 = INT32_MIN;
volatile int64_t x575 = -28970738273319LL;
int32_t x582 = INT32_MIN;
uint8_t x586 = 2U;
volatile int8_t x587 = -1;
static int64_t x596 = -1LL;
int32_t x597 = INT32_MIN;
uint64_t x599 = 9767178382227LLU;
uint32_t x608 = UINT32_MAX;
static uint64_t x611 = 1986160737LLU;
static uint64_t x618 = UINT64_MAX;
volatile uint64_t x623 = 5326987719LLU;
uint8_t x627 = 78U;
volatile int32_t t156 = -1027245;
int32_t x636 = -1;
int32_t x638 = INT32_MIN;
int64_t x641 = -29LL;
int16_t x649 = INT16_MIN;
uint16_t x651 = UINT16_MAX;
int32_t t162 = -29;
uint16_t x659 = 3U;
uint64_t x660 = UINT64_MAX;
uint8_t x666 = 10U;
int16_t x677 = INT16_MIN;
int8_t x681 = INT8_MAX;
int32_t x687 = -1;
int64_t t171 = 24911LL;
uint64_t x692 = 536LLU;
volatile int32_t t172 = -7;
int32_t x695 = INT32_MIN;
volatile uint16_t x696 = 1777U;
volatile int32_t t173 = -9531;
int16_t x697 = INT16_MIN;
int32_t x706 = INT32_MIN;
int8_t x709 = INT8_MAX;
volatile uint32_t t178 = 2467301U;
uint16_t x718 = UINT16_MAX;
int64_t x724 = -1LL;
uint64_t x733 = 3123856095590LLU;
volatile uint32_t x734 = 943379U;
volatile int32_t x737 = 1038658;
volatile int64_t x747 = -1LL;
int64_t x750 = -1232652LL;
int8_t x751 = INT8_MIN;
int16_t x752 = 14410;
int64_t x757 = -1LL;
int32_t x764 = INT32_MIN;
int16_t x765 = -2898;
static volatile uint64_t x767 = 102836319071535LLU;
static volatile int32_t t191 = -200;
uint8_t x770 = UINT8_MAX;
volatile uint8_t x774 = UINT8_MAX;
int64_t x776 = -1477437087LL;
uint64_t x781 = 52646748747685761LLU;
static volatile int16_t x783 = -1;
int16_t x785 = 4353;
volatile int32_t t199 = -1039766;


void f0(void) {
    	uint32_t x3 = UINT32_MAX;
	volatile int64_t t0 = INT64_MIN;

    t0 = (x1*((x2>x3)>x4));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	uint8_t x6 = 34U;
	int16_t x8 = 7336;
	static int64_t t1 = -130821453571LL;

    t1 = (x5*((x6>x7)>x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	int32_t x12 = -18;
	int32_t t2 = -199235;

    t2 = (x9*((x10>x11)>x12));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x14 = -1;
	int32_t x16 = 1736844;
	volatile uint32_t t3 = 32U;

    t3 = (x13*((x14>x15)>x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MIN;
	int32_t x19 = -1;
	volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = INT64_MIN;

    t4 = (x17*((x18>x19)>x20));

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 37U;
	uint32_t x22 = 1300U;
	uint64_t x23 = UINT64_MAX;
	uint32_t x24 = 2U;

    t5 = (x21*((x22>x23)>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x26 = UINT64_MAX;
	int64_t x27 = -1LL;
	uint8_t x28 = 0U;
	static volatile int32_t t6 = 91;

    t6 = (x25*((x26>x27)>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x30 = 29U;

    t7 = (x29*((x30>x31)>x32));

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MIN;
	volatile int16_t x34 = INT16_MIN;
	static int32_t x35 = -11;
	uint16_t x36 = 332U;
	static volatile int32_t t8 = 11317;

    t8 = (x33*((x34>x35)>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	int32_t x38 = 267916;
	static uint64_t x39 = 38930LLU;
	int8_t x40 = -1;
	uint32_t t9 = UINT32_MAX;

    t9 = (x37*((x38>x39)>x40));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = -1LL;
	int8_t x42 = -8;
	volatile int8_t x44 = INT8_MAX;

    t10 = (x41*((x42>x43)>x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	int16_t x46 = INT16_MIN;
	volatile int64_t x47 = INT64_MIN;
	static uint16_t x48 = 2U;
	volatile int64_t t11 = 3609648LL;

    t11 = (x45*((x46>x47)>x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 112U;
	volatile int64_t t12 = -17363462678LL;

    t12 = (x49*((x50>x51)>x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 0U;
	static int8_t x54 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 3011;

    t13 = (x53*((x54>x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = -301795918LL;
	int8_t x59 = 15;
	static volatile int8_t x60 = INT8_MIN;
	static int32_t t14 = 1;

    t14 = (x57*((x58>x59)>x60));

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 14238114LLU;
	int8_t x62 = INT8_MAX;
	int16_t x63 = 0;
	static int16_t x64 = -1;
	static uint64_t t15 = 920874205LLU;

    t15 = (x61*((x62>x63)>x64));

    if (t15 != 14238114LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x65 = INT8_MAX;
	uint64_t x67 = 94697056803151569LLU;
	static int32_t x68 = -1;
	static int32_t t16 = 10;

    t16 = (x65*((x66>x67)>x68));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = INT32_MAX;
	volatile int16_t x70 = INT16_MIN;
	volatile int32_t t17 = 23132959;

    t17 = (x69*((x70>x71)>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x75 = 26;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -71;

    t18 = (x73*((x74>x75)>x76));

    if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x78 = 45561153LLU;
	int32_t x79 = -543;
	volatile int8_t x80 = -1;
	volatile int32_t t19 = -1;

    t19 = (x77*((x78>x79)>x80));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	int8_t x82 = INT8_MIN;
	volatile int64_t x83 = INT64_MIN;
	uint32_t x84 = 41455U;
	volatile int32_t t20 = -3;

    t20 = (x81*((x82>x83)>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = 7162966;
	int64_t x86 = 8234101677307270LL;
	static uint8_t x88 = 1U;
	volatile int32_t t21 = -746;

    t21 = (x85*((x86>x87)>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = UINT64_MAX;
	int64_t x91 = INT64_MIN;
	int8_t x92 = 1;
	static volatile uint64_t t22 = 14182LLU;

    t22 = (x89*((x90>x91)>x92));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 1464978U;
	int32_t x94 = -207;
	int16_t x95 = INT16_MIN;
	volatile uint32_t t23 = 26295759U;

    t23 = (x93*((x94>x95)>x96));

    if (t23 != 1464978U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = 194LLU;
	uint16_t x98 = UINT16_MAX;
	int64_t x99 = INT64_MAX;
	static int64_t x100 = INT64_MIN;
	uint64_t t24 = 65243796LLU;

    t24 = (x97*((x98>x99)>x100));

    if (t24 != 194LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	int64_t x102 = INT64_MAX;
	static int32_t x103 = -1;
	volatile int64_t x104 = 28912393769525275LL;
	volatile int32_t t25 = -1326337;

    t25 = (x101*((x102>x103)>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 452426LLU;
	int64_t x108 = INT64_MAX;

    t26 = (x105*((x106>x107)>x108));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x111 = -1;
	static int8_t x112 = INT8_MIN;
	int32_t t27 = 29887647;

    t27 = (x109*((x110>x111)>x112));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	int32_t x114 = INT32_MAX;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 51778084;

    t28 = (x113*((x114>x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x117 = 114U;
	volatile int16_t x118 = INT16_MIN;
	volatile uint8_t x119 = 19U;
	int64_t x120 = -2600801760399LL;

    t29 = (x117*((x118>x119)>x120));

    if (t29 != 114U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	uint32_t x122 = 6270972U;
	static uint16_t x123 = 15U;
	volatile int8_t x124 = INT8_MIN;

    t30 = (x121*((x122>x123)>x124));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 1748744LLU;
	int16_t x126 = -1;
	int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;

    t31 = (x125*((x126>x127)>x128));

    if (t31 != 1748744LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -1;
	volatile int8_t x130 = INT8_MIN;
	static uint64_t x131 = UINT64_MAX;
	uint16_t x132 = UINT16_MAX;

    t32 = (x129*((x130>x131)>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x133 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	volatile int64_t t33 = INT64_MIN;

    t33 = (x133*((x134>x135)>x136));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = 39408550;
	static uint32_t x138 = UINT32_MAX;
	int8_t x139 = INT8_MIN;
	static uint32_t x140 = 1241080678U;
	volatile int32_t t34 = 2007881;

    t34 = (x137*((x138>x139)>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 91U;
	int64_t x142 = -1LL;
	uint32_t x144 = 2642U;
	volatile int32_t t35 = 6;

    t35 = (x141*((x142>x143)>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x147 = INT32_MIN;
	uint8_t x148 = 87U;
	int64_t t36 = 158705LL;

    t36 = (x145*((x146>x147)>x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 1073955U;
	int32_t x150 = INT32_MIN;
	uint8_t x151 = UINT8_MAX;
	int16_t x152 = INT16_MIN;
	volatile uint32_t t37 = 421551917U;

    t37 = (x149*((x150>x151)>x152));

    if (t37 != 1073955U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x154 = 7459;
	static int64_t x155 = INT64_MAX;
	volatile int64_t x156 = -1LL;
	volatile int32_t t38 = INT32_MIN;

    t38 = (x153*((x154>x155)>x156));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	int16_t x158 = 389;
	static int8_t x159 = INT8_MIN;

    t39 = (x157*((x158>x159)>x160));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 0;
	static int64_t x162 = 16089297LL;
	int32_t x163 = INT32_MAX;
	volatile int64_t x164 = -15615075105LL;
	static int32_t t40 = 2;

    t40 = (x161*((x162>x163)>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = -1;
	int8_t x166 = INT8_MIN;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = -425;

    t41 = (x165*((x166>x167)>x168));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	static uint64_t x170 = 138660LLU;
	uint8_t x172 = 0U;
	int32_t t42 = 167;

    t42 = (x169*((x170>x171)>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = INT32_MAX;
	volatile uint8_t x174 = 7U;
	volatile uint32_t x175 = UINT32_MAX;
	int8_t x176 = -1;
	int32_t t43 = INT32_MAX;

    t43 = (x173*((x174>x175)>x176));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 11LLU;
	int16_t x178 = -1;
	volatile int16_t x179 = -1;
	static int8_t x180 = INT8_MAX;
	uint64_t t44 = 15996722668278LLU;

    t44 = (x177*((x178>x179)>x180));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 22U;
	int8_t x183 = INT8_MIN;
	static volatile int32_t t45 = 9;

    t45 = (x181*((x182>x183)>x184));

    if (t45 != 22) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	uint32_t x186 = 699U;
	static uint8_t x187 = UINT8_MAX;
	uint64_t x188 = UINT64_MAX;
	static int32_t t46 = 400142;

    t46 = (x185*((x186>x187)>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	static uint32_t x191 = 44U;
	uint32_t x192 = 5494378U;
	volatile int32_t t47 = -8072;

    t47 = (x189*((x190>x191)>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = 194122298;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = 277890853111162175LLU;
	volatile uint32_t t48 = 17202995U;

    t48 = (x193*((x194>x195)>x196));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint64_t x197 = 8472050973499315545LLU;
	volatile uint16_t x198 = UINT16_MAX;
	static volatile uint64_t x199 = UINT64_MAX;
	volatile int32_t x200 = 12156;
	volatile uint64_t t49 = 3LLU;

    t49 = (x197*((x198>x199)>x200));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x201 = INT8_MAX;
	static int8_t x203 = INT8_MIN;
	uint64_t x204 = UINT64_MAX;
	static int32_t t50 = -2;

    t50 = (x201*((x202>x203)>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = -1;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = 1106U;
	static int16_t x208 = INT16_MIN;
	int32_t t51 = -2;

    t51 = (x205*((x206>x207)>x208));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = 3831;
	int64_t x210 = INT64_MIN;
	static int64_t x211 = -7558833474968286LL;
	uint8_t x212 = 13U;
	volatile int32_t t52 = -12391090;

    t52 = (x209*((x210>x211)>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = -3;
	int64_t x214 = 553102944409758LL;
	int64_t x215 = INT64_MIN;
	volatile int16_t x216 = INT16_MIN;
	static volatile int32_t t53 = 209;

    t53 = (x213*((x214>x215)>x216));

    if (t53 != -3) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x218 = INT64_MIN;
	int64_t x219 = -9LL;
	static int8_t x220 = -1;
	volatile uint32_t t54 = UINT32_MAX;

    t54 = (x217*((x218>x219)>x220));

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = 3611;
	uint64_t x224 = 4195069555901972LLU;
	volatile int32_t t55 = -6003;

    t55 = (x221*((x222>x223)>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x226 = 252605606LLU;
	static int32_t x227 = INT32_MIN;
	volatile int32_t t56 = -433344098;

    t56 = (x225*((x226>x227)>x228));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 357U;
	int16_t x232 = 44;
	int32_t t57 = -43;

    t57 = (x229*((x230>x231)>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = INT8_MAX;
	int32_t x234 = -1;
	static int8_t x235 = INT8_MIN;
	volatile int16_t x236 = INT16_MIN;

    t58 = (x233*((x234>x235)>x236));

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = INT16_MIN;
	static int64_t x238 = INT64_MIN;
	static int8_t x240 = -11;
	int32_t t59 = -1016;

    t59 = (x237*((x238>x239)>x240));

    if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MAX;
	uint64_t x244 = 26259208LLU;
	volatile int64_t t60 = -367585LL;

    t60 = (x241*((x242>x243)>x244));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	int64_t x246 = -1LL;
	volatile int64_t t61 = 122748504923LL;

    t61 = (x245*((x246>x247)>x248));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x250 = INT32_MAX;
	int16_t x252 = -1;

    t62 = (x249*((x250>x251)>x252));

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x256 = -1LL;
	static volatile uint32_t t63 = 37990268U;

    t63 = (x253*((x254>x255)>x256));

    if (t63 != 256873U) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x257 = 6235;
	int32_t x259 = INT32_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = 526913;

    t64 = (x257*((x258>x259)>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -149LL;
	volatile uint16_t x262 = UINT16_MAX;
	static int8_t x263 = INT8_MAX;
	int8_t x264 = -1;
	volatile int64_t t65 = -28341904778LL;

    t65 = (x261*((x262>x263)>x264));

    if (t65 != -149LL) { NG(); } else { ; }
	
}

void f66(void) {
    

    t66 = (x265*((x266>x267)>x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x270 = 162;
	int16_t x271 = -1;
	int16_t x272 = 241;

    t67 = (x269*((x270>x271)>x272));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	int8_t x274 = -49;
	static uint64_t x275 = UINT64_MAX;
	static int16_t x276 = INT16_MIN;
	static volatile int64_t t68 = INT64_MIN;

    t68 = (x273*((x274>x275)>x276));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	static uint32_t x278 = 26287U;
	static uint32_t x279 = UINT32_MAX;
	volatile int32_t t69 = -4598;

    t69 = (x277*((x278>x279)>x280));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	static int8_t x284 = -1;
	volatile int32_t t70 = 18;

    t70 = (x281*((x282>x283)>x284));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -13920308817269404LL;
	int8_t x286 = -1;
	static int8_t x287 = -1;
	int32_t x288 = -1;
	static int64_t t71 = 212124847LL;

    t71 = (x285*((x286>x287)>x288));

    if (t71 != -13920308817269404LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = -1;
	uint16_t x290 = 788U;
	static int16_t x291 = INT16_MIN;
	int32_t x292 = -1;

    t72 = (x289*((x290>x291)>x292));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = 9200928290876665433LLU;
	int8_t x294 = INT8_MIN;
	volatile int64_t x295 = 680644590LL;
	int32_t x296 = 89624;
	uint64_t t73 = 80010317227407336LLU;

    t73 = (x293*((x294>x295)>x296));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = UINT16_MAX;
	int16_t x298 = INT16_MAX;
	volatile uint8_t x300 = 28U;
	int32_t t74 = -2690535;

    t74 = (x297*((x298>x299)>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = -52;
	static volatile uint16_t x302 = 6513U;
	int64_t x303 = INT64_MIN;
	volatile int8_t x304 = -1;

    t75 = (x301*((x302>x303)>x304));

    if (t75 != -52) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x306 = 8U;
	volatile int16_t x308 = -1;
	volatile int32_t t76 = -5;

    t76 = (x305*((x306>x307)>x308));

    if (t76 != 53) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x310 = 389465378LL;
	int32_t x312 = INT32_MAX;
	volatile uint64_t t77 = 780LLU;

    t77 = (x309*((x310>x311)>x312));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x314 = -1LL;
	int32_t x315 = 186808;
	int8_t x316 = 26;
	uint64_t t78 = 474345259835161186LLU;

    t78 = (x313*((x314>x315)>x316));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	static uint16_t x318 = 14790U;
	int32_t t79 = -328;

    t79 = (x317*((x318>x319)>x320));

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MAX;
	uint32_t x322 = 512891U;
	int8_t x323 = -1;

    t80 = (x321*((x322>x323)>x324));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = 184894694704167744LL;
	int64_t x326 = 4290735880411106680LL;
	int8_t x327 = 1;
	int64_t x328 = INT64_MIN;
	volatile int64_t t81 = -245366753030021LL;

    t81 = (x325*((x326>x327)>x328));

    if (t81 != 184894694704167744LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = -1;
	int8_t x330 = INT8_MIN;
	static int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;

    t82 = (x329*((x330>x331)>x332));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 0;
	int64_t x334 = INT64_MAX;
	int32_t x335 = -1;
	static int32_t t83 = -496;

    t83 = (x333*((x334>x335)>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	static volatile int32_t t84 = 158;

    t84 = (x337*((x338>x339)>x340));

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = -1LL;
	int8_t x344 = INT8_MAX;

    t85 = (x341*((x342>x343)>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x346 = INT16_MIN;
	int32_t x347 = 7803;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -60;

    t86 = (x345*((x346>x347)>x348));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 14340203U;
	int32_t x350 = INT32_MIN;
	volatile int32_t x351 = -16;
	int16_t x352 = INT16_MAX;

    t87 = (x349*((x350>x351)>x352));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = -1LL;
	int64_t x354 = INT64_MAX;
	static int64_t x355 = 1115644709630742334LL;
	int64_t x356 = INT64_MIN;
	volatile int64_t t88 = -378561146LL;

    t88 = (x353*((x354>x355)>x356));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -833669571746385LL;
	int64_t x358 = INT64_MIN;
	int8_t x359 = INT8_MAX;
	int64_t x360 = INT64_MIN;
	int64_t t89 = 11915LL;

    t89 = (x357*((x358>x359)>x360));

    if (t89 != -833669571746385LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x361 = UINT32_MAX;
	int64_t x363 = INT64_MIN;
	int16_t x364 = -1;
	static uint32_t t90 = UINT32_MAX;

    t90 = (x361*((x362>x363)>x364));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 914U;
	int32_t x366 = -1;
	int64_t x367 = INT64_MAX;
	int16_t x368 = 1;
	static volatile int32_t t91 = 1396;

    t91 = (x365*((x366>x367)>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	uint8_t x370 = 16U;
	volatile int16_t x371 = -1;
	static int64_t x372 = INT64_MAX;
	int32_t t92 = 54897;

    t92 = (x369*((x370>x371)>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = 1;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t93 = 233930484;

    t93 = (x373*((x374>x375)>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int16_t x378 = INT16_MAX;
	static uint32_t x379 = 58U;
	volatile int32_t x380 = INT32_MIN;

    t94 = (x377*((x378>x379)>x380));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 319U;
	int32_t x382 = -105224;
	int8_t x383 = INT8_MAX;
	volatile int32_t t95 = -796;

    t95 = (x381*((x382>x383)>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 3LLU;
	int8_t x386 = -1;
	int8_t x387 = INT8_MAX;
	static uint8_t x388 = UINT8_MAX;
	static volatile uint64_t t96 = 961572102874137LLU;

    t96 = (x385*((x386>x387)>x388));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = INT64_MAX;
	uint8_t x390 = 1U;
	static int16_t x391 = 3;
	static uint8_t x392 = 0U;
	volatile int64_t t97 = 1LL;

    t97 = (x389*((x390>x391)>x392));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = INT8_MAX;
	uint64_t x394 = 527018206264LLU;
	volatile int32_t t98 = 20514325;

    t98 = (x393*((x394>x395)>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 0U;
	static volatile int16_t x398 = 61;
	uint8_t x399 = 15U;
	static int32_t t99 = 12;

    t99 = (x397*((x398>x399)>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	int64_t x403 = -1LL;
	volatile int64_t t100 = INT64_MIN;

    t100 = (x401*((x402>x403)>x404));

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	uint8_t x407 = 12U;
	int8_t x408 = 1;
	static volatile int32_t t101 = 11369;

    t101 = (x405*((x406>x407)>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = INT16_MIN;
	int64_t t102 = -22331790744971581LL;

    t102 = (x409*((x410>x411)>x412));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x414 = 54527LL;
	int16_t x415 = -1;
	int8_t x416 = -1;
	volatile int32_t t103 = INT32_MIN;

    t103 = (x413*((x414>x415)>x416));

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	uint64_t x419 = 54775415LLU;
	uint32_t x420 = UINT32_MAX;
	static int32_t t104 = -437191;

    t104 = (x417*((x418>x419)>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x422 = INT32_MIN;
	int32_t x423 = INT32_MIN;
	static volatile uint64_t t105 = 6627LLU;

    t105 = (x421*((x422>x423)>x424));

    if (t105 != 5595LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x426 = 2818U;
	volatile uint32_t x427 = 14667U;
	uint32_t x428 = UINT32_MAX;
	static int32_t t106 = -40580;

    t106 = (x425*((x426>x427)>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 4U;
	int16_t x430 = INT16_MAX;
	int16_t x431 = 38;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = 42;

    t107 = (x429*((x430>x431)>x432));

    if (t107 != 4) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	static int8_t x434 = 3;
	uint16_t x435 = UINT16_MAX;
	static uint32_t x436 = 499699649U;
	volatile int32_t t108 = -1;

    t108 = (x433*((x434>x435)>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = UINT64_MAX;
	int64_t x439 = -39581191165675LL;
	int8_t x440 = INT8_MIN;
	uint64_t t109 = UINT64_MAX;

    t109 = (x437*((x438>x439)>x440));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 1;
	uint64_t x444 = UINT64_MAX;
	volatile int32_t t110 = 1009679620;

    t110 = (x441*((x442>x443)>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = 0;
	uint8_t x446 = 53U;
	static int16_t x447 = INT16_MIN;
	volatile uint32_t x448 = 54U;
	int32_t t111 = 146;

    t111 = (x445*((x446>x447)>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	int64_t x450 = INT64_MAX;
	static volatile int32_t t112 = 128592929;

    t112 = (x449*((x450>x451)>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -8902;
	static int8_t x454 = INT8_MAX;
	int8_t x455 = -1;
	int32_t x456 = 237616738;
	int32_t t113 = -30;

    t113 = (x453*((x454>x455)>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x458 = UINT64_MAX;

    t114 = (x457*((x458>x459)>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = INT16_MIN;
	int8_t x462 = -21;
	uint64_t x463 = 1015LLU;
	int8_t x464 = -1;
	static int32_t t115 = 3367075;

    t115 = (x461*((x462>x463)>x464));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 1U;
	volatile uint64_t x466 = 11803LLU;
	int16_t x467 = INT16_MAX;
	int64_t x468 = INT64_MAX;

    t116 = (x465*((x466>x467)>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = 67302LL;
	uint64_t x470 = 327LLU;
	int32_t x472 = -437849;
	volatile int64_t t117 = -8801135013LL;

    t117 = (x469*((x470>x471)>x472));

    if (t117 != 67302LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x474 = 14U;
	uint32_t x475 = 1190503U;
	volatile int64_t x476 = 148891885951407979LL;
	static int32_t t118 = -2;

    t118 = (x473*((x474>x475)>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = 0;
	static uint64_t x478 = 666LLU;
	int32_t t119 = -24;

    t119 = (x477*((x478>x479)>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x481 = 210996675U;
	int16_t x482 = -1;
	uint16_t x483 = 492U;
	volatile uint16_t x484 = 19172U;
	volatile uint32_t t120 = 116888365U;

    t120 = (x481*((x482>x483)>x484));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x486 = -113033940042LL;
	volatile int32_t t121 = -7866;

    t121 = (x485*((x486>x487)>x488));

    if (t121 != 255) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	static uint32_t x490 = 4U;
	volatile int8_t x491 = -7;
	static volatile int16_t x492 = -131;
	volatile int32_t t122 = -173839;

    t122 = (x489*((x490>x491)>x492));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = -1;
	static int16_t x495 = INT16_MAX;
	volatile int32_t t123 = 3451;

    t123 = (x493*((x494>x495)>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x497 = INT8_MIN;
	int16_t x499 = INT16_MIN;
	uint32_t x500 = 669894114U;
	volatile int32_t t124 = 225;

    t124 = (x497*((x498>x499)>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x502 = INT32_MIN;
	int16_t x503 = 53;
	int64_t x504 = -14LL;
	volatile int32_t t125 = 7635;

    t125 = (x501*((x502>x503)>x504));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = 6920445LL;
	uint64_t x506 = 12205747LLU;
	int32_t x507 = 7274;
	int64_t x508 = INT64_MAX;

    t126 = (x505*((x506>x507)>x508));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 82200LLU;
	static volatile int16_t x510 = -1;
	static int16_t x511 = -413;
	uint32_t x512 = 59009398U;
	volatile uint64_t t127 = 3466545117740400LLU;

    t127 = (x509*((x510>x511)>x512));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 118324U;
	volatile uint16_t x514 = 17U;
	uint8_t x515 = 0U;
	int32_t x516 = 2;
	uint32_t t128 = 0U;

    t128 = (x513*((x514>x515)>x516));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MAX;
	int16_t x518 = -131;
	int16_t x519 = INT16_MIN;
	static int32_t t129 = -34548558;

    t129 = (x517*((x518>x519)>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x521 = 298U;
	int8_t x522 = INT8_MAX;
	int16_t x523 = -30;
	static int32_t x524 = -1;
	static int32_t t130 = 60396212;

    t130 = (x521*((x522>x523)>x524));

    if (t130 != 298) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	static uint16_t x526 = UINT16_MAX;
	int16_t x527 = -1;
	static int64_t x528 = INT64_MAX;
	volatile int32_t t131 = -656;

    t131 = (x525*((x526>x527)>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = 1;
	uint32_t x531 = 36994U;
	volatile int32_t t132 = -296783933;

    t132 = (x529*((x530>x531)>x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MAX;
	static int64_t x534 = INT64_MAX;
	int16_t x535 = 103;
	volatile int32_t t133 = 255;

    t133 = (x533*((x534>x535)>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x538 = INT8_MAX;
	static int8_t x539 = INT8_MAX;
	uint64_t x540 = 49684816537060724LLU;

    t134 = (x537*((x538>x539)>x540));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = UINT8_MAX;
	static int8_t x542 = INT8_MIN;
	static int8_t x543 = -1;
	static volatile int32_t t135 = 1444205;

    t135 = (x541*((x542>x543)>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -6;
	int8_t x546 = 0;
	int16_t x547 = 1504;
	uint8_t x548 = UINT8_MAX;
	volatile int32_t t136 = -91524;

    t136 = (x545*((x546>x547)>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 0U;
	uint8_t x550 = 2U;
	static int16_t x551 = -250;
	int16_t x552 = INT16_MAX;
	int32_t t137 = -19;

    t137 = (x549*((x550>x551)>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 791U;
	volatile int32_t x554 = -1;
	int16_t x555 = 731;
	volatile int32_t t138 = -430254486;

    t138 = (x553*((x554>x555)>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -14;
	uint16_t x558 = 32050U;
	int8_t x560 = -3;
	volatile int32_t t139 = -428041821;

    t139 = (x557*((x558>x559)>x560));

    if (t139 != -14) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = 145;
	int32_t t140 = -1;

    t140 = (x561*((x562>x563)>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 2U;
	static volatile int32_t x566 = -20;
	volatile int64_t x567 = -1LL;
	int64_t x568 = INT64_MAX;

    t141 = (x565*((x566>x567)>x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	uint32_t x570 = UINT32_MAX;
	volatile int32_t x571 = INT32_MIN;

    t142 = (x569*((x570>x571)>x572));

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 18745926;
	volatile int64_t x574 = INT64_MAX;
	int32_t x576 = -307571;
	int32_t t143 = 3;

    t143 = (x573*((x574>x575)>x576));

    if (t143 != 18745926) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 1447;
	volatile uint8_t x578 = 0U;
	uint8_t x579 = UINT8_MAX;
	int32_t x580 = INT32_MIN;
	volatile int32_t t144 = 2842652;

    t144 = (x577*((x578>x579)>x580));

    if (t144 != 1447) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = -1LL;
	uint8_t x583 = 0U;
	int32_t x584 = 2;
	int64_t t145 = -1413LL;

    t145 = (x581*((x582>x583)>x584));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 122032LLU;
	int8_t x588 = -10;
	static volatile uint64_t t146 = 514985197002LLU;

    t146 = (x585*((x586>x587)>x588));

    if (t146 != 122032LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = 13168U;
	int64_t x590 = -1553LL;
	uint16_t x591 = UINT16_MAX;
	volatile uint16_t x592 = 27U;
	volatile uint32_t t147 = 1466325U;

    t147 = (x589*((x590>x591)>x592));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = -4;
	volatile int16_t x594 = -3;
	int64_t x595 = INT64_MIN;
	int32_t t148 = -1;

    t148 = (x593*((x594>x595)>x596));

    if (t148 != -4) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x598 = INT32_MAX;
	int8_t x600 = -9;
	static int32_t t149 = INT32_MIN;

    t149 = (x597*((x598>x599)>x600));

    if (t149 != INT32_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x601 = INT8_MAX;
	int64_t x602 = -1LL;
	uint32_t x603 = 674U;
	uint16_t x604 = UINT16_MAX;
	int32_t t150 = 229;

    t150 = (x601*((x602>x603)>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x605 = 6126U;
	int16_t x606 = -416;
	uint32_t x607 = UINT32_MAX;
	volatile int32_t t151 = 334;

    t151 = (x605*((x606>x607)>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	volatile uint32_t x610 = 31120201U;
	int64_t x612 = INT64_MIN;
	static int32_t t152 = -400922970;

    t152 = (x609*((x610>x611)>x612));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 870684037052LLU;
	uint32_t x614 = 23U;
	volatile int16_t x615 = INT16_MIN;
	uint32_t x616 = UINT32_MAX;
	uint64_t t153 = 2098166971065815LLU;

    t153 = (x613*((x614>x615)>x616));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = -953693LL;
	static int32_t x619 = INT32_MIN;
	int32_t x620 = 1;
	int64_t t154 = -1000935524066359LL;

    t154 = (x617*((x618>x619)>x620));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 1U;
	int16_t x622 = -14825;
	int8_t x624 = 2;
	static int32_t t155 = -46;

    t155 = (x621*((x622>x623)>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x625 = 21U;
	static int64_t x626 = INT64_MIN;
	static int8_t x628 = -49;

    t156 = (x625*((x626>x627)>x628));

    if (t156 != 21) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = -1;
	int16_t x630 = 1;
	static volatile int64_t x631 = INT64_MAX;
	uint64_t x632 = 9890512LLU;
	static int32_t t157 = -482326635;

    t157 = (x629*((x630>x631)>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -17;
	uint32_t x634 = 22106U;
	volatile int8_t x635 = -1;
	volatile int32_t t158 = -221;

    t158 = (x633*((x634>x635)>x636));

    if (t158 != -17) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -215;
	int64_t x639 = INT64_MAX;
	int64_t x640 = INT64_MIN;
	volatile int32_t t159 = 57;

    t159 = (x637*((x638>x639)>x640));

    if (t159 != -215) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x642 = 1932080715415902478LL;
	volatile int32_t x643 = INT32_MIN;
	volatile int8_t x644 = -14;
	volatile int64_t t160 = -68594798LL;

    t160 = (x641*((x642>x643)>x644));

    if (t160 != -29LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MAX;
	uint64_t x646 = 25424LLU;
	static uint32_t x647 = 8189U;
	int32_t x648 = -1;
	int32_t t161 = 226;

    t161 = (x645*((x646>x647)>x648));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x650 = INT8_MIN;
	int64_t x652 = INT64_MIN;

    t162 = (x649*((x650>x651)>x652));

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	static volatile uint16_t x654 = UINT16_MAX;
	int64_t x655 = -2059066LL;
	int16_t x656 = INT16_MAX;
	volatile int64_t t163 = -7511LL;

    t163 = (x653*((x654>x655)>x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 1884U;
	int16_t x658 = INT16_MAX;
	static int32_t t164 = 2453239;

    t164 = (x657*((x658>x659)>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x661 = UINT8_MAX;
	volatile int32_t x662 = -18641172;
	int64_t x663 = -1LL;
	static uint8_t x664 = 9U;
	int32_t t165 = -1309;

    t165 = (x661*((x662>x663)>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int32_t x667 = 239516;
	int16_t x668 = -6;
	volatile int64_t t166 = INT64_MIN;

    t166 = (x665*((x666>x667)>x668));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	static volatile uint64_t x670 = UINT64_MAX;
	int16_t x671 = -8392;
	uint8_t x672 = 3U;
	int32_t t167 = 11;

    t167 = (x669*((x670>x671)>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 12U;
	int16_t x674 = -1;
	static int16_t x675 = INT16_MAX;
	int64_t x676 = INT64_MIN;
	int32_t t168 = -7826;

    t168 = (x673*((x674>x675)>x676));

    if (t168 != 12) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x678 = INT16_MIN;
	static int8_t x679 = INT8_MIN;
	int16_t x680 = 77;
	volatile int32_t t169 = 38412;

    t169 = (x677*((x678>x679)>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x682 = UINT64_MAX;
	volatile int32_t x683 = 211;
	int32_t x684 = -1628769;
	int32_t t170 = -29;

    t170 = (x681*((x682>x683)>x684));

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = 32825939888593885LL;
	static int64_t x686 = INT64_MIN;
	volatile int64_t x688 = INT64_MIN;

    t171 = (x685*((x686>x687)>x688));

    if (t171 != 32825939888593885LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = -1;
	int64_t x690 = -1LL;
	int8_t x691 = -1;

    t172 = (x689*((x690>x691)>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = INT32_MAX;
	static int16_t x694 = -3;

    t173 = (x693*((x694>x695)>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = -1LL;
	static int16_t x699 = 868;
	int64_t x700 = 1070LL;
	volatile int32_t t174 = 5136;

    t174 = (x697*((x698>x699)>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x701 = 1265881LLU;
	int8_t x702 = INT8_MIN;
	uint16_t x703 = UINT16_MAX;
	int8_t x704 = -1;
	uint64_t t175 = 49661LLU;

    t175 = (x701*((x702>x703)>x704));

    if (t175 != 1265881LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x705 = UINT32_MAX;
	uint64_t x707 = 27643368616910LLU;
	int32_t x708 = INT32_MIN;
	volatile uint32_t t176 = UINT32_MAX;

    t176 = (x705*((x706>x707)>x708));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = INT8_MIN;
	volatile int8_t x711 = 5;
	volatile uint32_t x712 = 639693910U;
	volatile int32_t t177 = -1;

    t177 = (x709*((x710>x711)>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 2U;
	static int8_t x714 = -47;
	int16_t x715 = -2;
	static int64_t x716 = 64753LL;

    t178 = (x713*((x714>x715)>x716));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x717 = 5667;
	volatile int16_t x719 = INT16_MAX;
	uint64_t x720 = 27LLU;
	volatile int32_t t179 = -59212;

    t179 = (x717*((x718>x719)>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = 95876;
	static int16_t x722 = -2612;
	int16_t x723 = 0;
	static volatile int32_t t180 = 1;

    t180 = (x721*((x722>x723)>x724));

    if (t180 != 95876) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x725 = 7005924920393283689LLU;
	static volatile uint8_t x726 = UINT8_MAX;
	int8_t x727 = INT8_MAX;
	static int16_t x728 = -1;
	volatile uint64_t t181 = 0LLU;

    t181 = (x725*((x726>x727)>x728));

    if (t181 != 7005924920393283689LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = 11;
	volatile uint8_t x730 = 1U;
	int64_t x731 = INT64_MIN;
	static uint32_t x732 = 2028U;
	int32_t t182 = 24976;

    t182 = (x729*((x730>x731)>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x735 = -369660747324989LL;
	int32_t x736 = INT32_MIN;
	volatile uint64_t t183 = 529143LLU;

    t183 = (x733*((x734>x735)>x736));

    if (t183 != 3123856095590LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x738 = 254022422942LLU;
	int16_t x739 = INT16_MIN;
	volatile uint16_t x740 = UINT16_MAX;
	int32_t t184 = -26342688;

    t184 = (x737*((x738>x739)>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = UINT8_MAX;
	static int8_t x742 = -3;
	uint64_t x743 = 52473627043960LLU;
	volatile int8_t x744 = INT8_MIN;
	static int32_t t185 = -19380979;

    t185 = (x741*((x742>x743)>x744));

    if (t185 != 255) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MAX;
	static int64_t x746 = INT64_MIN;
	volatile int8_t x748 = INT8_MIN;
	int32_t t186 = INT32_MAX;

    t186 = (x745*((x746>x747)>x748));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = INT64_MIN;
	int64_t t187 = 2LL;

    t187 = (x749*((x750>x751)>x752));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	static volatile uint64_t x754 = 2862963LLU;
	int16_t x755 = 28;
	int32_t x756 = -60848;
	volatile int32_t t188 = -251482;

    t188 = (x753*((x754>x755)>x756));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x758 = 27;
	int8_t x759 = -1;
	int32_t x760 = 349996;
	volatile int64_t t189 = -128LL;

    t189 = (x757*((x758>x759)>x760));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -23;
	volatile uint32_t x762 = 45U;
	int32_t x763 = -7164;
	int32_t t190 = 1;

    t190 = (x761*((x762>x763)>x764));

    if (t190 != -23) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x766 = INT16_MIN;
	volatile int8_t x768 = INT8_MIN;

    t191 = (x765*((x766>x767)>x768));

    if (t191 != -2898) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 31;
	uint32_t x771 = 306U;
	int32_t x772 = INT32_MIN;
	int32_t t192 = -465884224;

    t192 = (x769*((x770>x771)>x772));

    if (t192 != 31) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	uint64_t x775 = 3242803831857355268LLU;
	volatile int32_t t193 = 189477957;

    t193 = (x773*((x774>x775)>x776));

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x777 = INT64_MIN;
	int8_t x778 = INT8_MIN;
	uint16_t x779 = 0U;
	int64_t x780 = -1LL;
	static volatile int64_t t194 = INT64_MIN;

    t194 = (x777*((x778>x779)>x780));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x782 = INT16_MIN;
	int16_t x784 = INT16_MIN;
	volatile uint64_t t195 = 60568714711435567LLU;

    t195 = (x781*((x782>x783)>x784));

    if (t195 != 52646748747685761LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x786 = 346744604LLU;
	static int8_t x787 = INT8_MAX;
	static uint8_t x788 = 3U;
	volatile int32_t t196 = -32071;

    t196 = (x785*((x786>x787)>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 13;
	static uint32_t x790 = UINT32_MAX;
	static int8_t x791 = INT8_MIN;
	volatile int8_t x792 = INT8_MIN;
	int32_t t197 = -696400;

    t197 = (x789*((x790>x791)>x792));

    if (t197 != 13) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint16_t x793 = 252U;
	volatile int16_t x794 = 3681;
	static int32_t x795 = -1;
	static int64_t x796 = INT64_MIN;
	volatile int32_t t198 = -13;

    t198 = (x793*((x794>x795)>x796));

    if (t198 != 252) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x797 = 5U;
	static int16_t x798 = INT16_MIN;
	int64_t x799 = -1LL;
	int64_t x800 = INT64_MIN;

    t199 = (x797*((x798>x799)>x800));

    if (t199 != 5) { NG(); } else { ; }
	
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

