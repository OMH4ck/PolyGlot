
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

int16_t x2 = INT16_MAX;
static int64_t x3 = INT64_MIN;
uint8_t x6 = 10U;
int16_t x7 = INT16_MIN;
int32_t x10 = -1;
uint32_t x13 = 1922057U;
uint8_t x24 = UINT8_MAX;
static volatile int16_t x28 = INT16_MIN;
static int32_t x29 = 0;
uint32_t x35 = 15847U;
volatile int8_t x40 = INT8_MAX;
int16_t x42 = 2;
int64_t t11 = -60876LL;
int8_t x51 = 2;
uint64_t x53 = 5329809031690LLU;
volatile int32_t t14 = 235981715;
volatile uint64_t x63 = 54358682743LLU;
static uint64_t x64 = 33741713903312555LLU;
static int8_t x65 = INT8_MIN;
uint64_t x68 = 674287608433LLU;
volatile int32_t t16 = -215768993;
int16_t x84 = INT16_MIN;
volatile uint8_t x87 = 6U;
volatile int64_t x94 = INT64_MAX;
static volatile uint64_t t23 = 339150619038LLU;
uint64_t x98 = 128505610030327654LLU;
static int32_t t25 = 2710;
int32_t x105 = -1;
uint8_t x112 = UINT8_MAX;
uint16_t x114 = UINT16_MAX;
int16_t x116 = INT16_MIN;
static int16_t x119 = INT16_MIN;
int32_t x120 = INT32_MIN;
volatile int64_t x122 = -1LL;
int8_t x123 = 11;
volatile int32_t t30 = 484;
static int64_t t31 = -24354441662828LL;
int32_t x129 = 271;
volatile int8_t x131 = INT8_MAX;
int32_t t32 = -1;
int32_t x134 = INT32_MAX;
int32_t x135 = INT32_MIN;
int8_t x142 = INT8_MAX;
volatile int8_t x143 = -1;
int32_t t35 = 109;
int16_t x148 = INT16_MAX;
static volatile uint8_t x149 = 67U;
int64_t x154 = INT64_MIN;
int8_t x155 = INT8_MAX;
int64_t x161 = 19054284045203223LL;
int32_t x167 = INT32_MIN;
static int8_t x175 = -44;
int64_t x184 = -453393LL;
static int16_t x185 = INT16_MAX;
int64_t x195 = -663LL;
static int32_t t48 = 231175;
int64_t x200 = INT64_MIN;
int32_t x206 = -10118;
volatile int32_t x207 = 8235288;
int16_t x208 = -1;
int64_t x209 = INT64_MAX;
uint8_t x211 = UINT8_MAX;
volatile int8_t x215 = -3;
int32_t t55 = 1656;
volatile int16_t x230 = INT16_MAX;
int32_t t57 = -818794138;
int64_t x238 = -15402288806LL;
volatile int32_t x240 = INT32_MIN;
volatile int32_t t58 = -765;
volatile int32_t t59 = 33865061;
int32_t t60 = 57913;
int8_t x252 = INT8_MIN;
volatile int32_t t62 = -35585;
int8_t x259 = INT8_MIN;
static int16_t x265 = -1;
int32_t x269 = -2667764;
uint32_t x270 = 503U;
static volatile uint64_t x272 = 17096616239069LLU;
int32_t x277 = -1;
static volatile int32_t x279 = INT32_MAX;
volatile uint32_t x282 = 140U;
static int32_t x283 = INT32_MIN;
static int8_t x284 = 0;
static int32_t t69 = 511492212;
static int8_t x285 = INT8_MIN;
static int16_t x299 = INT16_MIN;
static uint16_t x302 = 1828U;
uint8_t x305 = 1U;
int32_t t75 = 43923915;
int64_t x313 = INT64_MIN;
int32_t x316 = -1;
int8_t x318 = INT8_MIN;
static uint32_t x324 = UINT32_MAX;
uint32_t x331 = 36182211U;
int8_t x332 = INT8_MIN;
uint16_t x335 = UINT16_MAX;
uint64_t x337 = 2LLU;
int16_t x351 = INT16_MAX;
volatile int64_t t86 = -901LL;
static int64_t x355 = 5854744220975LL;
uint32_t x358 = 12637492U;
volatile int32_t t89 = -4808;
int64_t x372 = INT64_MIN;
volatile int32_t t92 = -4291623;
uint8_t x383 = UINT8_MAX;
int32_t x387 = 614296053;
int8_t x390 = INT8_MIN;
int32_t t96 = 655;
uint8_t x399 = 16U;
static uint64_t x402 = 77082414927814974LLU;
int64_t t99 = -29LL;
int32_t t100 = -3671706;
uint32_t x413 = 7205U;
static int64_t x415 = INT64_MAX;
uint32_t t101 = 0U;
int16_t x422 = -514;
uint8_t x428 = 0U;
int8_t x429 = -1;
int32_t x432 = INT32_MIN;
int64_t x438 = INT64_MAX;
static uint32_t x441 = 936U;
int64_t x442 = INT64_MIN;
volatile int64_t x445 = 31261435827373456LL;
static volatile int64_t t108 = 1272LL;
uint16_t x451 = UINT16_MAX;
int32_t t109 = -545670;
int16_t x460 = INT16_MIN;
volatile int32_t t112 = 110640;
int32_t t114 = 126;
uint8_t x473 = 0U;
int32_t x480 = INT32_MIN;
uint64_t t116 = 6640LLU;
uint64_t t117 = 6563846811488720816LLU;
int32_t x486 = -1;
static int32_t x490 = -1;
static int16_t x492 = -1;
int32_t t119 = 0;
static int32_t t120 = 8246;
volatile int64_t t121 = 432425358LL;
int8_t x509 = INT8_MIN;
int8_t x511 = -1;
int32_t t123 = -94545;
int32_t t124 = 28;
int8_t x520 = 1;
int16_t x521 = INT16_MIN;
volatile uint32_t x527 = 8828U;
uint32_t t127 = 2549U;
int8_t x537 = 7;
volatile uint8_t x538 = 37U;
int32_t x539 = -1;
int32_t x541 = 4057911;
static int64_t x543 = -1LL;
int32_t t132 = 17307464;
int16_t x550 = INT16_MAX;
uint16_t x561 = 25998U;
static int32_t x569 = INT32_MIN;
int32_t t138 = 1878;
int32_t x580 = INT32_MAX;
static int64_t x584 = INT64_MIN;
int16_t x592 = INT16_MAX;
int64_t x600 = -25248LL;
static uint16_t x604 = 0U;
static int16_t x615 = INT16_MAX;
static int32_t t146 = -253811;
int64_t x626 = INT64_MIN;
int16_t x629 = -1;
static uint64_t x632 = 18008959544236233LLU;
static uint32_t x634 = UINT32_MAX;
uint8_t x642 = UINT8_MAX;
int32_t x644 = -793476990;
int64_t x651 = INT64_MAX;
static volatile int8_t x654 = -42;
int8_t x662 = 1;
uint64_t x674 = UINT64_MAX;
int16_t x680 = INT16_MAX;
int8_t x681 = INT8_MAX;
int32_t x684 = -65;
int8_t x685 = 1;
uint16_t x687 = 15U;
static volatile int32_t x693 = -14;
int16_t x694 = 70;
int16_t x696 = -1;
int32_t t165 = -428;
int64_t x700 = INT64_MAX;
int32_t x701 = INT32_MIN;
int32_t t167 = 42772;
volatile int64_t t168 = 62300905954214703LL;
int64_t x712 = -775736534573LL;
static volatile int32_t t169 = -168407;
uint64_t x717 = 131806553LLU;
volatile int16_t x718 = INT16_MIN;
int32_t x722 = INT32_MAX;
static int32_t t171 = -64005;
static volatile int64_t t175 = -322LL;
int64_t x742 = INT64_MAX;
int64_t x744 = 100483LL;
int64_t t176 = 535LL;
int16_t x753 = INT16_MIN;
static int16_t x764 = INT16_MAX;
int64_t x766 = -127845085349401007LL;
int16_t x767 = INT16_MIN;
volatile uint32_t x769 = 54286U;
int32_t t185 = -77001;
int32_t x791 = -13197092;
uint8_t x793 = 2U;
volatile int32_t x797 = INT32_MIN;
int16_t x802 = -1;
int8_t x804 = INT8_MAX;
int64_t t190 = 0LL;
uint8_t x805 = 0U;
int16_t x809 = INT16_MIN;
volatile int32_t x813 = -437396556;
volatile int64_t x816 = INT64_MIN;
int64_t t194 = 9416226LL;
volatile uint32_t t195 = 7255U;
int32_t x826 = -1;
volatile uint64_t t196 = 3158LLU;


void f0(void) {
    	static int32_t x1 = INT32_MAX;
	int32_t x4 = -1806;
	volatile int32_t t0 = -4;

    t0 = (x1*((x2/x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MAX;
	volatile uint64_t x8 = 131560483LLU;
	int32_t t1 = 21394;

    t1 = (x5*((x6/x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int64_t x11 = INT64_MIN;
	int16_t x12 = -1;
	static volatile int32_t t2 = 3;

    t2 = (x9*((x10/x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MAX;
	int8_t x15 = 2;
	uint64_t x16 = 1LLU;
	uint32_t t3 = 186281676U;

    t3 = (x13*((x14/x15)==x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 1U;
	uint64_t x18 = UINT64_MAX;
	int32_t x19 = INT32_MIN;
	static volatile uint64_t x20 = UINT64_MAX;
	int32_t t4 = 265392;

    t4 = (x17*((x18/x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 1996393U;
	int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MAX;
	uint32_t t5 = 7604670U;

    t5 = (x21*((x22/x23)==x24));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	int16_t x26 = -1;
	int64_t x27 = INT64_MAX;
	volatile int32_t t6 = -801150855;

    t6 = (x25*((x26/x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = -2;
	static uint8_t x31 = UINT8_MAX;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -18;

    t7 = (x29*((x30/x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MIN;
	static int8_t x36 = 62;
	int32_t t8 = -11;

    t8 = (x33*((x34/x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x37 = 789603U;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 68511699LLU;
	static volatile uint32_t t9 = 136320886U;

    t9 = (x37*((x38/x39)==x40));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 10341436066706522LLU;
	static uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MIN;
	volatile uint64_t t10 = 232333LLU;

    t10 = (x41*((x42/x43)==x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int8_t x46 = -1;
	static volatile uint16_t x47 = UINT16_MAX;
	uint64_t x48 = UINT64_MAX;

    t11 = (x45*((x46/x47)==x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 16446446U;
	static int8_t x50 = INT8_MIN;
	int32_t x52 = 20951458;
	static uint32_t t12 = 934071625U;

    t12 = (x49*((x50/x51)==x52));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x54 = -1LL;
	int16_t x55 = -895;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t13 = 4038082926823660099LLU;

    t13 = (x53*((x54/x55)==x56));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 9U;
	int16_t x58 = -168;
	static int16_t x59 = -1;
	uint16_t x60 = 1U;

    t14 = (x57*((x58/x59)==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	volatile uint32_t x62 = UINT32_MAX;
	int32_t t15 = -29;

    t15 = (x61*((x62/x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = 849;
	static int8_t x67 = INT8_MIN;

    t16 = (x65*((x66/x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -13;
	int64_t x70 = -6063666533LL;
	int16_t x71 = -1;
	int8_t x72 = INT8_MIN;
	static int32_t t17 = 30233;

    t17 = (x69*((x70/x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 31U;
	static int64_t x74 = -1LL;
	volatile int64_t x75 = INT64_MAX;
	uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 132766063U;

    t18 = (x73*((x74/x75)==x76));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int8_t x78 = 15;
	uint16_t x79 = 9U;
	int64_t x80 = INT64_MIN;
	volatile int64_t t19 = -127628LL;

    t19 = (x77*((x78/x79)==x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = INT8_MAX;
	int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MAX;
	int32_t t20 = 1330132;

    t20 = (x81*((x82/x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	uint32_t x86 = 199112503U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 7327100;

    t21 = (x85*((x86/x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MAX;
	int32_t x90 = INT32_MIN;
	static int32_t x91 = 1;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = INT32_MAX;

    t22 = (x89*((x90/x91)==x92));

    if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x93 = UINT64_MAX;
	int32_t x95 = INT32_MAX;
	static int32_t x96 = 1;

    t23 = (x93*((x94/x95)==x96));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = INT16_MAX;
	int64_t x99 = -1LL;
	int16_t x100 = -187;
	volatile int32_t t24 = -623609037;

    t24 = (x97*((x98/x99)==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = -2921867;
	uint64_t x102 = 215LLU;
	volatile int16_t x103 = -2184;
	uint16_t x104 = 15390U;

    t25 = (x101*((x102/x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MAX;
	static int32_t x107 = -1;
	volatile int16_t x108 = 10616;
	int32_t t26 = -1;

    t26 = (x105*((x106/x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	static int16_t x110 = INT16_MIN;
	volatile int16_t x111 = INT16_MIN;
	static volatile int32_t t27 = 81;

    t27 = (x109*((x110/x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	static int64_t x115 = INT64_MIN;
	int32_t t28 = -2300082;

    t28 = (x113*((x114/x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	int8_t x118 = 2;
	uint64_t t29 = 8418LLU;

    t29 = (x117*((x118/x119)==x120));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	int8_t x124 = INT8_MIN;

    t30 = (x121*((x122/x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	uint16_t x126 = 4668U;
	uint32_t x127 = 592613U;
	int32_t x128 = INT32_MIN;

    t31 = (x125*((x126/x127)==x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x130 = UINT64_MAX;
	int8_t x132 = -5;

    t32 = (x129*((x130/x131)==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = INT16_MAX;
	volatile uint64_t x136 = 7484LLU;
	volatile int32_t t33 = 224748384;

    t33 = (x133*((x134/x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 98495U;
	volatile int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MIN;
	uint8_t x140 = UINT8_MAX;
	static volatile uint32_t t34 = 1148U;

    t34 = (x137*((x138/x139)==x140));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	uint32_t x144 = 11313990U;

    t35 = (x141*((x142/x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x145 = 126U;
	volatile uint32_t x146 = 12072128U;
	static volatile uint64_t x147 = 300817642LLU;
	int32_t t36 = -4;

    t36 = (x145*((x146/x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x150 = 354614532U;
	uint64_t x151 = 88194LLU;
	volatile int64_t x152 = 1626LL;
	volatile int32_t t37 = 769154575;

    t37 = (x149*((x150/x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int16_t x156 = -1;
	int32_t t38 = 87011;

    t38 = (x153*((x154/x155)==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = INT64_MAX;
	int32_t x158 = 2320;
	int8_t x159 = INT8_MAX;
	int8_t x160 = INT8_MAX;
	volatile int64_t t39 = 21153LL;

    t39 = (x157*((x158/x159)==x160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x162 = -22;
	int8_t x163 = INT8_MAX;
	static int8_t x164 = -1;
	volatile int64_t t40 = -83427316420547813LL;

    t40 = (x161*((x162/x163)==x164));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -1;
	int16_t x166 = 649;
	int8_t x168 = INT8_MIN;
	int32_t t41 = 89288125;

    t41 = (x165*((x166/x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = 1229673;
	static uint8_t x170 = UINT8_MAX;
	uint64_t x171 = 50969695238274873LLU;
	volatile int8_t x172 = INT8_MIN;
	int32_t t42 = -20;

    t42 = (x169*((x170/x171)==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	uint64_t x174 = 730994044LLU;
	static int32_t x176 = INT32_MAX;
	volatile int64_t t43 = -4025557496947823LL;

    t43 = (x173*((x174/x175)==x176));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MIN;
	int8_t x178 = 1;
	uint32_t x179 = 20U;
	int16_t x180 = 12;
	volatile int32_t t44 = 953400;

    t44 = (x177*((x178/x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x181 = 1U;
	int16_t x182 = 90;
	int16_t x183 = 1278;
	volatile int32_t t45 = 19;

    t45 = (x181*((x182/x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = 463864316276977486LLU;
	uint8_t x187 = 15U;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = -7458956;

    t46 = (x185*((x186/x187)==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = -1;
	volatile int32_t x191 = 56;
	static int16_t x192 = INT16_MIN;
	int32_t t47 = -1190689;

    t47 = (x189*((x190/x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 39039;
	volatile int32_t x194 = INT32_MIN;
	static int8_t x196 = INT8_MIN;

    t48 = (x193*((x194/x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 1376880202302LLU;
	static uint64_t x198 = 16839495259187917LLU;
	int64_t x199 = -1LL;
	volatile uint64_t t49 = 50050224198345LLU;

    t49 = (x197*((x198/x199)==x200));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -17720688;
	static int16_t x202 = -1;
	volatile int8_t x203 = -1;
	uint8_t x204 = 4U;
	int32_t t50 = -130205483;

    t50 = (x201*((x202/x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = INT32_MIN;
	int32_t t51 = 3484922;

    t51 = (x205*((x206/x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x210 = 20834U;
	uint8_t x212 = 3U;
	volatile int64_t t52 = 32320080238992590LL;

    t52 = (x209*((x210/x211)==x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -1;
	uint64_t x214 = 153557963793501563LLU;
	uint32_t x216 = 30U;
	int32_t t53 = 2;

    t53 = (x213*((x214/x215)==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -1LL;
	int16_t x218 = -1;
	volatile uint16_t x219 = 174U;
	volatile uint16_t x220 = 10U;
	volatile int64_t t54 = -774381972112LL;

    t54 = (x217*((x218/x219)==x220));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x225 = 6040649;
	uint32_t x226 = 25U;
	static int32_t x227 = INT32_MIN;
	uint64_t x228 = 933183467455LLU;

    t55 = (x225*((x226/x227)==x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = INT16_MIN;
	volatile uint16_t x231 = UINT16_MAX;
	int8_t x232 = -3;
	static int32_t t56 = 34;

    t56 = (x229*((x230/x231)==x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = INT32_MIN;
	static uint16_t x234 = 1U;
	uint16_t x235 = 12247U;
	int8_t x236 = -1;

    t57 = (x233*((x234/x235)==x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x237 = 1U;
	uint8_t x239 = 14U;

    t58 = (x237*((x238/x239)==x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = 1;
	int64_t x242 = INT64_MIN;
	int8_t x243 = INT8_MAX;
	static volatile uint8_t x244 = 1U;

    t59 = (x241*((x242/x243)==x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = 13;
	static int32_t x246 = INT32_MIN;
	int32_t x247 = 7852;
	int16_t x248 = INT16_MIN;

    t60 = (x245*((x246/x247)==x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x249 = UINT32_MAX;
	int16_t x250 = INT16_MAX;
	static int32_t x251 = INT32_MIN;
	uint32_t t61 = 863300U;

    t61 = (x249*((x250/x251)==x252));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x253 = -1;
	uint16_t x254 = 0U;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = 145751485LL;

    t62 = (x253*((x254/x255)==x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = 1;
	int8_t x258 = INT8_MIN;
	static int64_t x260 = INT64_MIN;
	int32_t t63 = 3;

    t63 = (x257*((x258/x259)==x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x261 = 9214;
	uint64_t x262 = 7190275LLU;
	int32_t x263 = -1;
	int64_t x264 = -1LL;
	volatile int32_t t64 = -358477;

    t64 = (x261*((x262/x263)==x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x266 = -1;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = INT8_MAX;
	int32_t t65 = 48977685;

    t65 = (x265*((x266/x267)==x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x271 = INT32_MIN;
	int32_t t66 = -1253;

    t66 = (x269*((x270/x271)==x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x273 = INT32_MIN;
	uint32_t x274 = 5U;
	int16_t x275 = INT16_MAX;
	int8_t x276 = INT8_MAX;
	int32_t t67 = 21492758;

    t67 = (x273*((x274/x275)==x276));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x278 = -1;
	int32_t x280 = INT32_MIN;
	int32_t t68 = 30433462;

    t68 = (x277*((x278/x279)==x280));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = 14311U;

    t69 = (x281*((x282/x283)==x284));

    if (t69 != 14311) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x286 = 4363U;
	int64_t x287 = -1LL;
	static int8_t x288 = INT8_MIN;
	static volatile int32_t t70 = 2469194;

    t70 = (x285*((x286/x287)==x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x289 = INT16_MIN;
	int64_t x290 = 1029967LL;
	volatile uint32_t x291 = 7U;
	static uint64_t x292 = 9285354076640048LLU;
	static int32_t t71 = 45427;

    t71 = (x289*((x290/x291)==x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = INT8_MIN;
	uint8_t x294 = UINT8_MAX;
	volatile uint16_t x295 = 30U;
	volatile int64_t x296 = INT64_MIN;
	volatile int32_t t72 = -1063987;

    t72 = (x293*((x294/x295)==x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x297 = -14;
	volatile int32_t x298 = -64652288;
	int16_t x300 = 57;
	volatile int32_t t73 = 431;

    t73 = (x297*((x298/x299)==x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x301 = -1;
	volatile uint8_t x303 = 50U;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t74 = 44505;

    t74 = (x301*((x302/x303)==x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x306 = INT16_MIN;
	static int16_t x307 = -1;
	volatile int8_t x308 = INT8_MAX;

    t75 = (x305*((x306/x307)==x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x309 = 6724078LLU;
	static int8_t x310 = -1;
	static uint64_t x311 = 1189868LLU;
	static int8_t x312 = -2;
	static volatile uint64_t t76 = 401549602LLU;

    t76 = (x309*((x310/x311)==x312));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x314 = -42148079330LL;
	uint16_t x315 = UINT16_MAX;
	volatile int64_t t77 = 274484714441003LL;

    t77 = (x313*((x314/x315)==x316));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x317 = INT64_MIN;
	uint32_t x319 = 362440238U;
	int16_t x320 = 3618;
	volatile int64_t t78 = -28495721875780LL;

    t78 = (x317*((x318/x319)==x320));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x321 = 3U;
	int32_t x322 = -725;
	int64_t x323 = INT64_MIN;
	static volatile int32_t t79 = -94;

    t79 = (x321*((x322/x323)==x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x325 = INT64_MIN;
	volatile int32_t x326 = INT32_MIN;
	volatile uint32_t x327 = 358282599U;
	int8_t x328 = INT8_MIN;
	int64_t t80 = 47182059156LL;

    t80 = (x325*((x326/x327)==x328));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x329 = -1;
	static int8_t x330 = INT8_MIN;
	volatile int32_t t81 = -127457529;

    t81 = (x329*((x330/x331)==x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x333 = 0U;
	static volatile int32_t x334 = -1;
	int32_t x336 = INT32_MAX;
	volatile uint32_t t82 = 80800U;

    t82 = (x333*((x334/x335)==x336));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x338 = -1;
	int8_t x339 = -17;
	static volatile int32_t x340 = INT32_MAX;
	uint64_t t83 = 354138327LLU;

    t83 = (x337*((x338/x339)==x340));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = -6;
	int16_t x342 = INT16_MAX;
	uint16_t x343 = 24692U;
	int16_t x344 = INT16_MIN;
	int32_t t84 = 22671233;

    t84 = (x341*((x342/x343)==x344));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x345 = UINT64_MAX;
	volatile int64_t x346 = 8825042019LL;
	int32_t x347 = -1;
	int64_t x348 = INT64_MAX;
	volatile uint64_t t85 = 3982719LLU;

    t85 = (x345*((x346/x347)==x348));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x349 = INT64_MIN;
	int64_t x350 = 8008355462502LL;
	int64_t x352 = INT64_MIN;

    t86 = (x349*((x350/x351)==x352));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = -1;
	volatile int32_t x354 = -4676076;
	uint16_t x356 = 7516U;
	int32_t t87 = 151598;

    t87 = (x353*((x354/x355)==x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x357 = 0U;
	uint8_t x359 = 30U;
	static int16_t x360 = 4;
	int32_t t88 = 11;

    t88 = (x357*((x358/x359)==x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x361 = INT8_MAX;
	int8_t x362 = -1;
	volatile int8_t x363 = -24;
	int8_t x364 = INT8_MIN;

    t89 = (x361*((x362/x363)==x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x365 = 1016106651597LLU;
	static int16_t x366 = -1;
	volatile uint64_t x367 = 986LLU;
	volatile int16_t x368 = INT16_MIN;
	uint64_t t90 = 1941254201LLU;

    t90 = (x365*((x366/x367)==x368));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x369 = -1LL;
	int32_t x370 = 5566569;
	static volatile int8_t x371 = 3;
	int64_t t91 = 73414LL;

    t91 = (x369*((x370/x371)==x372));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x373 = INT8_MIN;
	static int8_t x374 = -13;
	int32_t x375 = 307;
	int16_t x376 = INT16_MIN;

    t92 = (x373*((x374/x375)==x376));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x377 = 446041287411LLU;
	volatile int8_t x378 = -63;
	volatile uint16_t x379 = UINT16_MAX;
	uint32_t x380 = UINT32_MAX;
	uint64_t t93 = 436456341LLU;

    t93 = (x377*((x378/x379)==x380));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x381 = 14LLU;
	int16_t x382 = 21;
	uint16_t x384 = 3U;
	volatile uint64_t t94 = 21641LLU;

    t94 = (x381*((x382/x383)==x384));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x385 = INT32_MIN;
	int64_t x386 = -136LL;
	volatile uint8_t x388 = 2U;
	volatile int32_t t95 = -310427129;

    t95 = (x385*((x386/x387)==x388));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x389 = INT16_MIN;
	volatile int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MIN;

    t96 = (x389*((x390/x391)==x392));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x393 = INT16_MAX;
	int64_t x394 = INT64_MIN;
	static int8_t x395 = INT8_MIN;
	static uint64_t x396 = 835570987LLU;
	int32_t t97 = 651998353;

    t97 = (x393*((x394/x395)==x396));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = 1;
	int64_t x398 = INT64_MIN;
	int8_t x400 = INT8_MIN;
	static int32_t t98 = 3096;

    t98 = (x397*((x398/x399)==x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x401 = INT64_MIN;
	int16_t x403 = INT16_MIN;
	static volatile int32_t x404 = INT32_MAX;

    t99 = (x401*((x402/x403)==x404));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x405 = INT16_MIN;
	static volatile uint64_t x406 = 17367531126712LLU;
	uint16_t x407 = 1624U;
	volatile int32_t x408 = -1;

    t100 = (x405*((x406/x407)==x408));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x414 = INT16_MAX;
	int16_t x416 = -1;

    t101 = (x413*((x414/x415)==x416));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x417 = UINT8_MAX;
	static int64_t x418 = -1LL;
	static int16_t x419 = -502;
	int8_t x420 = -7;
	volatile int32_t t102 = -176903;

    t102 = (x417*((x418/x419)==x420));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = -117937727;
	int64_t x423 = INT64_MAX;
	volatile int8_t x424 = INT8_MAX;
	volatile int32_t t103 = 960659;

    t103 = (x421*((x422/x423)==x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x425 = -1149;
	static int32_t x426 = 987800;
	int32_t x427 = 237;
	volatile int32_t t104 = -4746853;

    t104 = (x425*((x426/x427)==x428));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x430 = -5;
	volatile uint8_t x431 = UINT8_MAX;
	volatile int32_t t105 = 11;

    t105 = (x429*((x430/x431)==x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x437 = 1LLU;
	static int32_t x439 = INT32_MAX;
	volatile uint16_t x440 = 5773U;
	uint64_t t106 = 12123546362LLU;

    t106 = (x437*((x438/x439)==x440));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x443 = 1;
	int16_t x444 = -7;
	uint32_t t107 = 43993U;

    t107 = (x441*((x442/x443)==x444));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x446 = UINT16_MAX;
	static int16_t x447 = INT16_MIN;
	uint32_t x448 = UINT32_MAX;

    t108 = (x445*((x446/x447)==x448));

    if (t108 != 31261435827373456LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x449 = -2818474;
	int32_t x450 = INT32_MIN;
	int16_t x452 = INT16_MIN;

    t109 = (x449*((x450/x451)==x452));

    if (t109 != -2818474) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x453 = 2U;
	int8_t x454 = -2;
	int16_t x455 = -1;
	volatile uint32_t x456 = 108016U;
	volatile uint32_t t110 = 3U;

    t110 = (x453*((x454/x455)==x456));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = INT32_MIN;
	int32_t x458 = 146302;
	int8_t x459 = 2;
	volatile int32_t t111 = -860;

    t111 = (x457*((x458/x459)==x460));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x461 = INT8_MAX;
	volatile int16_t x462 = INT16_MAX;
	uint8_t x463 = 13U;
	int64_t x464 = 237721143LL;

    t112 = (x461*((x462/x463)==x464));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = 38;
	static int16_t x467 = INT16_MAX;
	int16_t x468 = INT16_MIN;
	int32_t t113 = 3553202;

    t113 = (x465*((x466/x467)==x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x469 = 1;
	uint32_t x470 = 174451U;
	int16_t x471 = INT16_MIN;
	volatile int16_t x472 = -14366;

    t114 = (x469*((x470/x471)==x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x474 = INT32_MAX;
	volatile uint64_t x475 = UINT64_MAX;
	int8_t x476 = 62;
	int32_t t115 = -498690107;

    t115 = (x473*((x474/x475)==x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x477 = 552696576825637287LLU;
	int8_t x478 = -2;
	int8_t x479 = -1;

    t116 = (x477*((x478/x479)==x480));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x481 = UINT64_MAX;
	int32_t x482 = -1;
	int32_t x483 = INT32_MAX;
	uint64_t x484 = UINT64_MAX;

    t117 = (x481*((x482/x483)==x484));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = INT8_MIN;
	int64_t x487 = -1LL;
	int16_t x488 = 1193;
	volatile int32_t t118 = -20193513;

    t118 = (x485*((x486/x487)==x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x489 = INT32_MIN;
	int16_t x491 = INT16_MIN;

    t119 = (x489*((x490/x491)==x492));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = -4;
	uint32_t x494 = 990435163U;
	int64_t x495 = -1LL;
	static int16_t x496 = -1;

    t120 = (x493*((x494/x495)==x496));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = INT64_MAX;
	uint16_t x498 = 393U;
	int32_t x499 = INT32_MAX;
	volatile int32_t x500 = -312;

    t121 = (x497*((x498/x499)==x500));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = -5795;
	int16_t x507 = INT16_MIN;
	int8_t x508 = INT8_MAX;
	static volatile int32_t t122 = 89105;

    t122 = (x505*((x506/x507)==x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x510 = 752539670056LLU;
	int16_t x512 = INT16_MIN;

    t123 = (x509*((x510/x511)==x512));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x513 = INT16_MIN;
	volatile int32_t x514 = INT32_MIN;
	static int8_t x515 = -38;
	int16_t x516 = INT16_MAX;

    t124 = (x513*((x514/x515)==x516));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x517 = INT64_MIN;
	static int8_t x518 = INT8_MAX;
	static int16_t x519 = INT16_MIN;
	int64_t t125 = -16942452089304LL;

    t125 = (x517*((x518/x519)==x520));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x522 = -1;
	int8_t x523 = INT8_MIN;
	int16_t x524 = 1;
	volatile int32_t t126 = -1903324;

    t126 = (x521*((x522/x523)==x524));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x525 = UINT32_MAX;
	uint32_t x526 = 1707774U;
	uint64_t x528 = UINT64_MAX;

    t127 = (x525*((x526/x527)==x528));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x529 = 76LLU;
	uint8_t x530 = 0U;
	int32_t x531 = 3;
	uint8_t x532 = 23U;
	volatile uint64_t t128 = 463501822304322LLU;

    t128 = (x529*((x530/x531)==x532));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x533 = 288557601LLU;
	static volatile int64_t x534 = INT64_MIN;
	uint8_t x535 = UINT8_MAX;
	volatile uint32_t x536 = 17744U;
	volatile uint64_t t129 = 3LLU;

    t129 = (x533*((x534/x535)==x536));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x540 = 0;
	volatile int32_t t130 = -1;

    t130 = (x537*((x538/x539)==x540));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x542 = -1;
	static uint32_t x544 = UINT32_MAX;
	static int32_t t131 = -1;

    t131 = (x541*((x542/x543)==x544));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x545 = INT32_MIN;
	volatile uint64_t x546 = UINT64_MAX;
	uint32_t x547 = 12U;
	uint16_t x548 = UINT16_MAX;

    t132 = (x545*((x546/x547)==x548));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x549 = -86;
	uint8_t x551 = 12U;
	static int32_t x552 = INT32_MAX;
	volatile int32_t t133 = 5;

    t133 = (x549*((x550/x551)==x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x553 = -1;
	int16_t x554 = INT16_MIN;
	uint16_t x555 = 11U;
	int16_t x556 = INT16_MAX;
	static volatile int32_t t134 = 65;

    t134 = (x553*((x554/x555)==x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x557 = -55659LL;
	int32_t x558 = INT32_MIN;
	static int64_t x559 = -4983LL;
	int32_t x560 = -542005962;
	static volatile int64_t t135 = -1LL;

    t135 = (x557*((x558/x559)==x560));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x562 = INT64_MIN;
	uint8_t x563 = UINT8_MAX;
	static int32_t x564 = INT32_MAX;
	int32_t t136 = -29340205;

    t136 = (x561*((x562/x563)==x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x565 = 15476786U;
	int64_t x566 = INT64_MAX;
	int16_t x567 = INT16_MIN;
	static uint16_t x568 = 13894U;
	volatile uint32_t t137 = 289354631U;

    t137 = (x565*((x566/x567)==x568));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x570 = INT8_MAX;
	uint16_t x571 = 636U;
	uint64_t x572 = 26023597698807954LLU;

    t138 = (x569*((x570/x571)==x572));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = -1;
	int8_t x578 = INT8_MAX;
	int64_t x579 = INT64_MAX;
	static volatile int32_t t139 = 57;

    t139 = (x577*((x578/x579)==x580));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x581 = 732;
	uint64_t x582 = 2596892027440647LLU;
	int16_t x583 = INT16_MIN;
	int32_t t140 = 343382868;

    t140 = (x581*((x582/x583)==x584));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x589 = -15;
	volatile int64_t x590 = -1LL;
	uint16_t x591 = UINT16_MAX;
	static volatile int32_t t141 = 22;

    t141 = (x589*((x590/x591)==x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x593 = 2;
	volatile int64_t x594 = -1LL;
	uint16_t x595 = UINT16_MAX;
	volatile uint16_t x596 = 54U;
	volatile int32_t t142 = 0;

    t142 = (x593*((x594/x595)==x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x597 = UINT64_MAX;
	static uint64_t x598 = 2482185009656LLU;
	int16_t x599 = INT16_MAX;
	static volatile uint64_t t143 = 4429737495581196095LLU;

    t143 = (x597*((x598/x599)==x600));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x601 = 787104258LL;
	int32_t x602 = INT32_MIN;
	uint16_t x603 = 58U;
	int64_t t144 = -5744655730806LL;

    t144 = (x601*((x602/x603)==x604));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x609 = 1240U;
	static uint8_t x610 = UINT8_MAX;
	int32_t x611 = INT32_MIN;
	uint8_t x612 = 0U;
	static volatile int32_t t145 = -446605511;

    t145 = (x609*((x610/x611)==x612));

    if (t145 != 1240) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x613 = INT16_MIN;
	int8_t x614 = 3;
	volatile int16_t x616 = INT16_MIN;

    t146 = (x613*((x614/x615)==x616));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x617 = 71;
	volatile int32_t x618 = -1;
	volatile int64_t x619 = 1LL;
	uint8_t x620 = 0U;
	static volatile int32_t t147 = -41158;

    t147 = (x617*((x618/x619)==x620));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x621 = INT32_MIN;
	static uint8_t x622 = UINT8_MAX;
	int32_t x623 = INT32_MAX;
	uint8_t x624 = UINT8_MAX;
	volatile int32_t t148 = -31;

    t148 = (x621*((x622/x623)==x624));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x625 = 11LLU;
	uint64_t x627 = 634LLU;
	uint16_t x628 = 1463U;
	static volatile uint64_t t149 = 2055LLU;

    t149 = (x625*((x626/x627)==x628));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x630 = INT16_MAX;
	uint8_t x631 = 10U;
	int32_t t150 = -235729;

    t150 = (x629*((x630/x631)==x632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x633 = -1;
	uint32_t x635 = 814U;
	static int8_t x636 = INT8_MIN;
	int32_t t151 = -94556;

    t151 = (x633*((x634/x635)==x636));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x637 = UINT64_MAX;
	int64_t x638 = -150828495LL;
	uint16_t x639 = UINT16_MAX;
	volatile int16_t x640 = INT16_MAX;
	uint64_t t152 = 66927349LLU;

    t152 = (x637*((x638/x639)==x640));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x641 = -5911237454LL;
	volatile int64_t x643 = 1034186315LL;
	volatile int64_t t153 = 23130LL;

    t153 = (x641*((x642/x643)==x644));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x645 = INT64_MIN;
	static uint8_t x646 = UINT8_MAX;
	volatile int64_t x647 = -1LL;
	int64_t x648 = 48254LL;
	volatile int64_t t154 = 7398LL;

    t154 = (x645*((x646/x647)==x648));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x649 = 2U;
	int64_t x650 = INT64_MIN;
	int64_t x652 = 1LL;
	int32_t t155 = -9979;

    t155 = (x649*((x650/x651)==x652));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x653 = 4;
	static int64_t x655 = 46971355LL;
	volatile uint8_t x656 = 65U;
	int32_t t156 = -129955;

    t156 = (x653*((x654/x655)==x656));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x657 = 5;
	volatile int32_t x658 = INT32_MIN;
	static int32_t x659 = 27;
	uint16_t x660 = UINT16_MAX;
	int32_t t157 = -7;

    t157 = (x657*((x658/x659)==x660));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x661 = INT64_MIN;
	static uint8_t x663 = 1U;
	static volatile int32_t x664 = INT32_MIN;
	int64_t t158 = 397088375LL;

    t158 = (x661*((x662/x663)==x664));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x669 = 993328797LLU;
	volatile int16_t x670 = INT16_MAX;
	static int8_t x671 = INT8_MIN;
	uint32_t x672 = UINT32_MAX;
	volatile uint64_t t159 = 413944379719059LLU;

    t159 = (x669*((x670/x671)==x672));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x673 = UINT16_MAX;
	volatile int32_t x675 = -13304;
	volatile int32_t x676 = 8;
	int32_t t160 = 20886671;

    t160 = (x673*((x674/x675)==x676));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x677 = 41U;
	volatile int64_t x678 = -4880087LL;
	static volatile uint32_t x679 = 20U;
	volatile int32_t t161 = 23076714;

    t161 = (x677*((x678/x679)==x680));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x682 = 2764LLU;
	static uint8_t x683 = 69U;
	int32_t t162 = 5798733;

    t162 = (x681*((x682/x683)==x684));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x686 = INT16_MIN;
	int8_t x688 = INT8_MIN;
	volatile int32_t t163 = 163;

    t163 = (x685*((x686/x687)==x688));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x689 = 7704;
	uint64_t x690 = 57407765855LLU;
	static volatile int32_t x691 = 80616;
	int64_t x692 = INT64_MIN;
	int32_t t164 = 16;

    t164 = (x689*((x690/x691)==x692));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint8_t x695 = 12U;

    t165 = (x693*((x694/x695)==x696));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x697 = -121;
	uint64_t x698 = UINT64_MAX;
	int64_t x699 = INT64_MIN;
	int32_t t166 = 1871242;

    t166 = (x697*((x698/x699)==x700));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x702 = 13U;
	int32_t x703 = INT32_MIN;
	int8_t x704 = -1;

    t167 = (x701*((x702/x703)==x704));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x705 = INT64_MAX;
	int32_t x706 = -1;
	int64_t x707 = -15100622LL;
	volatile uint16_t x708 = 7U;

    t168 = (x705*((x706/x707)==x708));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x709 = 21722U;
	int8_t x710 = -1;
	int8_t x711 = -1;

    t169 = (x709*((x710/x711)==x712));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x719 = -1;
	int32_t x720 = -1;
	uint64_t t170 = 6364281369790LLU;

    t170 = (x717*((x718/x719)==x720));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x721 = INT16_MAX;
	int8_t x723 = INT8_MAX;
	int16_t x724 = INT16_MIN;

    t171 = (x721*((x722/x723)==x724));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x725 = 38973300233872842LLU;
	int64_t x726 = INT64_MIN;
	uint16_t x727 = UINT16_MAX;
	int8_t x728 = INT8_MAX;
	uint64_t t172 = 87972892801LLU;

    t172 = (x725*((x726/x727)==x728));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x729 = 7U;
	volatile uint64_t x730 = UINT64_MAX;
	uint64_t x731 = 14518334LLU;
	uint16_t x732 = UINT16_MAX;
	volatile int32_t t173 = 2202;

    t173 = (x729*((x730/x731)==x732));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x733 = INT8_MIN;
	static int16_t x734 = INT16_MAX;
	static int16_t x735 = -3;
	int8_t x736 = -9;
	int32_t t174 = -1536864;

    t174 = (x733*((x734/x735)==x736));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x737 = -29944409LL;
	int64_t x738 = -1LL;
	int8_t x739 = INT8_MIN;
	volatile uint16_t x740 = 1U;

    t175 = (x737*((x738/x739)==x740));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x741 = -49723175LL;
	uint64_t x743 = UINT64_MAX;

    t176 = (x741*((x742/x743)==x744));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x745 = -26;
	int32_t x746 = -8940031;
	int16_t x747 = -382;
	uint32_t x748 = UINT32_MAX;
	int32_t t177 = 73431503;

    t177 = (x745*((x746/x747)==x748));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x749 = INT32_MAX;
	int16_t x750 = -907;
	volatile int16_t x751 = INT16_MAX;
	uint64_t x752 = UINT64_MAX;
	volatile int32_t t178 = 129205967;

    t178 = (x749*((x750/x751)==x752));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x754 = 3071591434980277820LL;
	uint8_t x755 = 54U;
	int8_t x756 = -1;
	volatile int32_t t179 = 2869;

    t179 = (x753*((x754/x755)==x756));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x761 = INT16_MIN;
	static int16_t x762 = INT16_MIN;
	uint64_t x763 = UINT64_MAX;
	int32_t t180 = 440573;

    t180 = (x761*((x762/x763)==x764));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x765 = INT8_MAX;
	volatile int32_t x768 = INT32_MIN;
	int32_t t181 = 122892665;

    t181 = (x765*((x766/x767)==x768));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x770 = INT16_MAX;
	static int64_t x771 = INT64_MAX;
	static uint32_t x772 = 57562695U;
	volatile uint32_t t182 = 1054697U;

    t182 = (x769*((x770/x771)==x772));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x773 = UINT64_MAX;
	int32_t x774 = -1;
	int8_t x775 = INT8_MIN;
	int8_t x776 = INT8_MAX;
	volatile uint64_t t183 = 51817LLU;

    t183 = (x773*((x774/x775)==x776));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x777 = INT32_MIN;
	int64_t x778 = 469061076798647LL;
	static volatile int64_t x779 = 4974299058283LL;
	int16_t x780 = INT16_MIN;
	volatile int32_t t184 = -8324;

    t184 = (x777*((x778/x779)==x780));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x781 = INT8_MAX;
	static int8_t x782 = INT8_MIN;
	volatile int16_t x783 = -1;
	int64_t x784 = -240113596048462641LL;

    t185 = (x781*((x782/x783)==x784));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x785 = 308714073050210LLU;
	uint16_t x786 = 4U;
	uint8_t x787 = 2U;
	volatile int8_t x788 = -1;
	uint64_t t186 = 481764LLU;

    t186 = (x785*((x786/x787)==x788));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x789 = INT8_MAX;
	static uint32_t x790 = 15819U;
	uint32_t x792 = 1375468U;
	int32_t t187 = -888965553;

    t187 = (x789*((x790/x791)==x792));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x794 = INT16_MAX;
	int8_t x795 = -1;
	int32_t x796 = INT32_MAX;
	volatile int32_t t188 = 106875076;

    t188 = (x793*((x794/x795)==x796));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x798 = -1748;
	static uint16_t x799 = 368U;
	int16_t x800 = INT16_MAX;
	int32_t t189 = 13210173;

    t189 = (x797*((x798/x799)==x800));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x801 = INT64_MAX;
	int32_t x803 = INT32_MIN;

    t190 = (x801*((x802/x803)==x804));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x806 = UINT64_MAX;
	volatile int64_t x807 = INT64_MIN;
	volatile int8_t x808 = -1;
	static volatile int32_t t191 = -254;

    t191 = (x805*((x806/x807)==x808));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x810 = UINT8_MAX;
	uint64_t x811 = 26797LLU;
	int32_t x812 = INT32_MIN;
	int32_t t192 = 4965613;

    t192 = (x809*((x810/x811)==x812));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x814 = INT64_MIN;
	int64_t x815 = INT64_MAX;
	int32_t t193 = -23;

    t193 = (x813*((x814/x815)==x816));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x817 = -23595311991228537LL;
	uint32_t x818 = 1U;
	int64_t x819 = INT64_MAX;
	uint64_t x820 = UINT64_MAX;

    t194 = (x817*((x818/x819)==x820));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x821 = UINT32_MAX;
	static int16_t x822 = INT16_MAX;
	volatile int16_t x823 = INT16_MIN;
	int64_t x824 = 23700892106299LL;

    t195 = (x821*((x822/x823)==x824));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x825 = 3180LLU;
	int16_t x827 = INT16_MIN;
	int8_t x828 = INT8_MIN;

    t196 = (x825*((x826/x827)==x828));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x829 = 1356824U;
	static int64_t x830 = -1LL;
	uint64_t x831 = 22837428361LLU;
	int16_t x832 = 7468;
	volatile uint32_t t197 = 9U;

    t197 = (x829*((x830/x831)==x832));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x833 = -1LL;
	int16_t x834 = 2;
	uint64_t x835 = UINT64_MAX;
	int16_t x836 = 782;
	int64_t t198 = 0LL;

    t198 = (x833*((x834/x835)==x836));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x837 = INT8_MIN;
	int16_t x838 = 765;
	int8_t x839 = INT8_MIN;
	uint8_t x840 = UINT8_MAX;
	volatile int32_t t199 = 118461;

    t199 = (x837*((x838/x839)==x840));

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

