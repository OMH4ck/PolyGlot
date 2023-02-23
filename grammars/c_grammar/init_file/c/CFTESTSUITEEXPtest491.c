
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

uint8_t x3 = 113U;
static volatile int8_t x16 = 2;
volatile int8_t x17 = -1;
static volatile int32_t t2 = 1;
volatile int32_t x39 = -17669;
static int32_t t5 = 15858973;
volatile int64_t t6 = -9907LL;
uint16_t x61 = 12066U;
int16_t x62 = INT16_MAX;
uint16_t x75 = 7U;
static volatile int16_t x76 = INT16_MIN;
volatile uint8_t x81 = UINT8_MAX;
static int64_t x87 = -1LL;
volatile int8_t x88 = -35;
uint32_t x94 = UINT32_MAX;
volatile int8_t x96 = INT8_MIN;
volatile int16_t x97 = INT16_MAX;
int32_t x98 = 58;
int8_t x110 = INT8_MIN;
uint64_t x114 = 15LLU;
static uint32_t x118 = UINT32_MAX;
int32_t x121 = INT32_MIN;
static int32_t t18 = INT32_MIN;
static int64_t x128 = INT64_MIN;
volatile uint64_t t19 = 1138747440LLU;
uint64_t x131 = 784205826374LLU;
uint16_t x132 = 172U;
int64_t x135 = -1LL;
static int32_t x144 = -1;
volatile uint32_t t23 = UINT32_MAX;
int32_t x156 = -7;
int8_t x157 = INT8_MIN;
int32_t t26 = 163865875;
int32_t t28 = 250932937;
volatile int32_t x177 = 9279101;
int8_t x179 = INT8_MAX;
int16_t x180 = INT16_MIN;
volatile int32_t x189 = 92;
volatile int32_t t31 = -527427072;
int32_t x205 = -1;
static int32_t x206 = -1;
uint64_t x208 = 6711760690975040LLU;
int32_t t34 = 1019;
static int32_t x213 = -1;
static uint32_t x217 = UINT32_MAX;
volatile uint64_t x218 = 1110983208327840LLU;
volatile uint64_t x222 = UINT64_MAX;
static uint32_t x227 = 1037344U;
uint16_t x233 = 8U;
static int32_t t40 = 454;
volatile uint32_t x241 = 66127077U;
volatile int32_t t43 = -43;
int32_t x250 = -1;
uint32_t x252 = UINT32_MAX;
int32_t t44 = -8652;
int64_t x254 = -1LL;
uint32_t x255 = 47U;
static uint64_t x262 = UINT64_MAX;
int8_t x273 = INT8_MIN;
int32_t x276 = INT32_MIN;
volatile int32_t t48 = -132;
int8_t x277 = INT8_MIN;
volatile int16_t x282 = INT16_MIN;
volatile uint64_t t50 = 863978LLU;
volatile int8_t x287 = INT8_MIN;
int8_t x289 = -47;
volatile int32_t t52 = 255;
int32_t t53 = 0;
static int16_t x299 = 3265;
uint32_t x318 = UINT32_MAX;
volatile int8_t x321 = INT8_MAX;
volatile int16_t x322 = -1;
int8_t x324 = INT8_MAX;
int16_t x331 = 11809;
int64_t t60 = -24LL;
volatile int64_t x341 = INT64_MAX;
static int32_t x349 = 4516;
volatile int32_t t63 = -317;
int16_t x360 = -22;
uint16_t x365 = 10890U;
uint8_t x368 = UINT8_MAX;
volatile int32_t t67 = 2236;
static int32_t t68 = INT32_MIN;
int16_t x378 = INT16_MIN;
volatile int32_t x384 = 2;
static int64_t x385 = INT64_MIN;
int64_t x389 = -1LL;
int16_t x396 = -2052;
volatile int8_t x400 = INT8_MIN;
int16_t x414 = INT16_MIN;
uint64_t t77 = 46507LLU;
static uint16_t x420 = 3966U;
int32_t x423 = INT32_MIN;
uint64_t x426 = 10744595412770125LLU;
static volatile int32_t t80 = -3;
uint8_t x430 = UINT8_MAX;
int8_t x431 = INT8_MIN;
uint16_t x435 = 97U;
uint16_t x438 = 9815U;
int64_t x441 = -1LL;
volatile int64_t t84 = 1950352LL;
int8_t x451 = 2;
int32_t x462 = INT32_MIN;
static volatile int64_t t90 = 8LL;
int16_t x474 = -1;
static volatile uint8_t x489 = 2U;
volatile int32_t t94 = -55;
volatile int64_t x501 = -1LL;
volatile int64_t x526 = INT64_MIN;
volatile uint32_t x528 = UINT32_MAX;
static int16_t x541 = -62;
static volatile uint64_t x547 = 3LLU;
int64_t t100 = -303986062LL;
int8_t x551 = INT8_MAX;
int16_t x554 = INT16_MIN;
int32_t t103 = INT32_MIN;
volatile int32_t x565 = INT32_MIN;
int8_t x568 = 6;
volatile int64_t x577 = -1LL;
int32_t x579 = -1;
volatile uint16_t x585 = UINT16_MAX;
int32_t t107 = 103447641;
volatile int16_t x589 = -1;
static volatile uint32_t x590 = UINT32_MAX;
int64_t x599 = -1LL;
int8_t x621 = -4;
volatile uint32_t x623 = 52530U;
volatile int32_t t112 = 0;
volatile int16_t x628 = 1;
int32_t x630 = -91;
int8_t x635 = -1;
volatile int8_t x640 = INT8_MIN;
static int64_t x651 = -817555928445LL;
int16_t x652 = -1;
int32_t t120 = 528646;
int32_t x664 = -1;
uint64_t x670 = 1125822456808895034LLU;
volatile int64_t t123 = INT64_MIN;
int32_t x677 = -110;
static volatile int64_t t125 = INT64_MIN;
int64_t x689 = 196LL;
int32_t x690 = -27856;
int8_t x691 = INT8_MIN;
int64_t x698 = INT64_MAX;
uint32_t x707 = UINT32_MAX;
static int32_t t130 = -1;
volatile int32_t t132 = INT32_MAX;
int8_t x724 = -1;
int32_t t133 = INT32_MAX;
int64_t x725 = -13959989679683LL;
volatile int8_t x728 = -1;
static volatile int64_t t134 = -46340676LL;
static int8_t x731 = INT8_MIN;
volatile int16_t x737 = 3583;
int32_t x738 = INT32_MAX;
uint32_t x740 = 1117131U;
uint64_t t137 = 2406147LLU;
int8_t x754 = -1;
uint32_t x755 = 855736652U;
volatile int64_t t139 = INT64_MIN;
static int32_t x767 = 611;
uint32_t x778 = 1331663807U;
int64_t x797 = INT64_MIN;
uint64_t x799 = 26666234980126285LLU;
uint64_t x801 = UINT64_MAX;
int16_t x806 = INT16_MAX;
static int64_t x808 = INT64_MAX;
int16_t x810 = INT16_MIN;
static int16_t x813 = -3;
int16_t x814 = -1;
static int32_t x818 = -100504;
static int32_t x821 = -1942;
static volatile int16_t x833 = 2;
static volatile int32_t t152 = -120;
uint16_t x838 = UINT16_MAX;
uint32_t x848 = 51U;
uint32_t t154 = 2U;
static int64_t x868 = INT64_MIN;
uint64_t x869 = 31286401220604924LLU;
int8_t x875 = -5;
uint64_t t159 = 281530133070868528LLU;
int32_t x887 = 310;
static volatile int64_t x888 = INT64_MAX;
static int64_t x892 = -9586813427117538LL;
static uint64_t t162 = 24025197LLU;
int16_t x901 = -7;
uint8_t x904 = UINT8_MAX;
uint8_t x910 = 60U;
uint8_t x912 = 13U;
int8_t x921 = -10;
volatile int8_t x924 = -1;
int16_t x925 = -212;
static volatile int16_t x927 = -1;
static int64_t x929 = INT64_MAX;
uint8_t x931 = UINT8_MAX;
uint16_t x947 = 16U;
uint64_t x954 = 87802647614235503LLU;
int8_t x955 = INT8_MAX;
static int32_t t173 = 75078045;
volatile int32_t t176 = 3;
volatile int8_t x975 = 20;
int32_t x983 = 2035;
int64_t x985 = -27136252325823LL;
int16_t x986 = INT16_MIN;
int8_t x991 = INT8_MAX;
volatile int16_t x993 = 0;
volatile int32_t t183 = 100;
int8_t x1005 = -1;
int8_t x1008 = -1;
int16_t x1010 = 3;
static int8_t x1019 = -1;
int32_t x1030 = INT32_MIN;
static int64_t x1033 = -1LL;
uint64_t x1042 = UINT64_MAX;
int32_t t191 = INT32_MAX;
static uint64_t x1049 = UINT64_MAX;
static uint64_t x1069 = 4142494LLU;
uint64_t x1071 = 53LLU;
int16_t x1076 = -1;
int64_t t195 = INT64_MIN;
static volatile uint64_t t197 = 1003674679259LLU;
uint8_t x1087 = 75U;
volatile uint32_t t198 = 261680U;
int32_t x1089 = -779;
int64_t x1090 = -58761LL;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MAX;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

    t0 = (x1+((x2*x3)==x4));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x13 = INT32_MAX;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = UINT8_MAX;
	int32_t t1 = INT32_MAX;

    t1 = (x13+((x14*x15)==x16));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x18 = 58982953LL;
	int32_t x19 = -1;
	volatile uint8_t x20 = 0U;

    t2 = (x17+((x18*x19)==x20));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint16_t x21 = 3U;
	int8_t x22 = INT8_MIN;
	int64_t x23 = 15442463225LL;
	int8_t x24 = 0;
	int32_t t3 = 222902;

    t3 = (x21+((x22*x23)==x24));

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x33 = INT16_MAX;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = 1;
	int8_t x36 = -3;
	static volatile int32_t t4 = 4316;

    t4 = (x33+((x34*x35)==x36));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x37 = 3906;
	int64_t x38 = 40322LL;
	int8_t x40 = -1;

    t5 = (x37+((x38*x39)==x40));

    if (t5 != 3906) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x41 = -1LL;
	volatile uint16_t x42 = 55U;
	volatile int16_t x43 = -1;
	int64_t x44 = INT64_MAX;

    t6 = (x41+((x42*x43)==x44));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x49 = UINT16_MAX;
	uint64_t x50 = 10LLU;
	int64_t x51 = 1962803938LL;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t7 = -1;

    t7 = (x49+((x50*x51)==x52));

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x63 = -3960;
	int16_t x64 = INT16_MIN;
	int32_t t8 = 22;

    t8 = (x61+((x62*x63)==x64));

    if (t8 != 12066) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x73 = 0U;
	uint64_t x74 = UINT64_MAX;
	int32_t t9 = -23;

    t9 = (x73+((x74*x75)==x76));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x77 = INT8_MIN;
	static uint64_t x78 = 6LLU;
	int8_t x79 = 5;
	volatile int32_t x80 = INT32_MAX;
	int32_t t10 = 130028;

    t10 = (x77+((x78*x79)==x80));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x82 = -1108224856671984LL;
	int8_t x83 = INT8_MIN;
	static uint64_t x84 = 195349645503408170LLU;
	int32_t t11 = 1;

    t11 = (x81+((x82*x83)==x84));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x85 = -8020;
	int8_t x86 = -1;
	static volatile int32_t t12 = 53;

    t12 = (x85+((x86*x87)==x88));

    if (t12 != -8020) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x93 = 3828755U;
	int16_t x95 = INT16_MIN;
	volatile uint32_t t13 = 16118U;

    t13 = (x93+((x94*x95)==x96));

    if (t13 != 3828755U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x99 = -1;
	static int16_t x100 = -30;
	volatile int32_t t14 = -3399274;

    t14 = (x97+((x98*x99)==x100));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x109 = INT8_MIN;
	int8_t x111 = -1;
	static uint64_t x112 = 107006692LLU;
	static int32_t t15 = -24061184;

    t15 = (x109+((x110*x111)==x112));

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x113 = -1;
	int16_t x115 = -1;
	int16_t x116 = 248;
	int32_t t16 = -410955199;

    t16 = (x113+((x114*x115)==x116));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x117 = INT32_MIN;
	volatile uint16_t x119 = 143U;
	volatile int64_t x120 = INT64_MAX;
	static int32_t t17 = INT32_MIN;

    t17 = (x117+((x118*x119)==x120));

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x122 = INT8_MIN;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = -1;

    t18 = (x121+((x122*x123)==x124));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x125 = 4453526556114LLU;
	volatile int64_t x126 = INT64_MAX;
	uint64_t x127 = 2982690575286LLU;

    t19 = (x125+((x126*x127)==x128));

    if (t19 != 4453526556114LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x129 = 17;
	int8_t x130 = INT8_MIN;
	int32_t t20 = 608979058;

    t20 = (x129+((x130*x131)==x132));

    if (t20 != 17) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x133 = -1;
	int32_t x134 = 24276780;
	int8_t x136 = -45;
	static int32_t t21 = -21;

    t21 = (x133+((x134*x135)==x136));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x141 = INT16_MIN;
	uint64_t x142 = UINT64_MAX;
	uint64_t x143 = 6LLU;
	volatile int32_t t22 = -2;

    t22 = (x141+((x142*x143)==x144));

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x145 = UINT32_MAX;
	int8_t x146 = -60;
	static volatile int32_t x147 = -1;
	int16_t x148 = -34;

    t23 = (x145+((x146*x147)==x148));

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x149 = -1;
	uint64_t x150 = 721968270LLU;
	int64_t x151 = INT64_MAX;
	static volatile int16_t x152 = INT16_MIN;
	int32_t t24 = 30189;

    t24 = (x149+((x150*x151)==x152));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x153 = INT8_MAX;
	volatile int64_t x154 = -1LL;
	volatile int32_t x155 = INT32_MIN;
	int32_t t25 = 658557177;

    t25 = (x153+((x154*x155)==x156));

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x158 = 28U;
	static int32_t x159 = -1;
	uint8_t x160 = UINT8_MAX;

    t26 = (x157+((x158*x159)==x160));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x161 = INT64_MIN;
	static int8_t x162 = INT8_MIN;
	volatile uint32_t x163 = UINT32_MAX;
	uint8_t x164 = UINT8_MAX;
	static volatile int64_t t27 = INT64_MIN;

    t27 = (x161+((x162*x163)==x164));

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MIN;
	uint64_t x171 = 12565LLU;
	uint8_t x172 = 1U;

    t28 = (x169+((x170*x171)==x172));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x178 = 14U;
	volatile int32_t t29 = -135223173;

    t29 = (x177+((x178*x179)==x180));

    if (t29 != 9279101) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x181 = INT16_MAX;
	int32_t x182 = -1;
	volatile int8_t x183 = 1;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t30 = -21704522;

    t30 = (x181+((x182*x183)==x184));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x190 = UINT8_MAX;
	int32_t x191 = 1;
	volatile uint32_t x192 = 18U;

    t31 = (x189+((x190*x191)==x192));

    if (t31 != 92) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x197 = UINT64_MAX;
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = -1;
	int8_t x200 = -1;
	static volatile uint64_t t32 = UINT64_MAX;

    t32 = (x197+((x198*x199)==x200));

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	volatile uint32_t x203 = UINT32_MAX;
	volatile int8_t x204 = INT8_MAX;
	volatile int32_t t33 = -110;

    t33 = (x201+((x202*x203)==x204));

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x207 = 134668424U;

    t34 = (x205+((x206*x207)==x208));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x209 = -18;
	uint8_t x210 = 22U;
	int32_t x211 = -1;
	int16_t x212 = INT16_MAX;
	int32_t t35 = 3;

    t35 = (x209+((x210*x211)==x212));

    if (t35 != -18) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x214 = INT32_MAX;
	int8_t x215 = -1;
	int64_t x216 = INT64_MAX;
	int32_t t36 = 107081;

    t36 = (x213+((x214*x215)==x216));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x219 = 80571;
	volatile int64_t x220 = INT64_MAX;
	uint32_t t37 = UINT32_MAX;

    t37 = (x217+((x218*x219)==x220));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x221 = -1;
	volatile int64_t x223 = INT64_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t38 = 25704758;

    t38 = (x221+((x222*x223)==x224));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x225 = -1;
	static int32_t x226 = -1682;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t39 = -494626;

    t39 = (x225+((x226*x227)==x228));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x234 = INT8_MIN;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = INT32_MIN;

    t40 = (x233+((x234*x235)==x236));

    if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x237 = 42U;
	int16_t x238 = INT16_MIN;
	static int8_t x239 = -2;
	volatile uint64_t x240 = 81025952LLU;
	int32_t t41 = -13262;

    t41 = (x237+((x238*x239)==x240));

    if (t41 != 42) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x242 = 9182U;
	int32_t x243 = -1;
	int32_t x244 = INT32_MAX;
	uint32_t t42 = 5U;

    t42 = (x241+((x242*x243)==x244));

    if (t42 != 66127077U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x245 = 1U;
	volatile int16_t x246 = -219;
	int8_t x247 = -1;
	int8_t x248 = 1;

    t43 = (x245+((x246*x247)==x248));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x249 = 1;
	int32_t x251 = -1;

    t44 = (x249+((x250*x251)==x252));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x253 = INT16_MIN;
	int8_t x256 = INT8_MIN;
	int32_t t45 = -747581;

    t45 = (x253+((x254*x255)==x256));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x261 = 167;
	volatile int64_t x263 = 182352057265LL;
	int32_t x264 = INT32_MAX;
	int32_t t46 = -3578;

    t46 = (x261+((x262*x263)==x264));

    if (t46 != 167) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x265 = INT64_MIN;
	int64_t x266 = -1LL;
	static uint32_t x267 = 25U;
	int8_t x268 = INT8_MIN;
	int64_t t47 = INT64_MIN;

    t47 = (x265+((x266*x267)==x268));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x274 = -1;
	int16_t x275 = INT16_MIN;

    t48 = (x273+((x274*x275)==x276));

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x278 = INT32_MIN;
	uint32_t x279 = 462720930U;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t49 = 28684994;

    t49 = (x277+((x278*x279)==x280));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x281 = 26LLU;
	uint64_t x283 = UINT64_MAX;
	int32_t x284 = INT32_MAX;

    t50 = (x281+((x282*x283)==x284));

    if (t50 != 26LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x285 = INT32_MIN;
	static uint16_t x286 = 1U;
	uint8_t x288 = 2U;
	static int32_t t51 = INT32_MIN;

    t51 = (x285+((x286*x287)==x288));

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x290 = -1;
	static int64_t x291 = INT64_MAX;
	int32_t x292 = 2761;

    t52 = (x289+((x290*x291)==x292));

    if (t52 != -47) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x293 = -1;
	int8_t x294 = 30;
	int16_t x295 = INT16_MIN;
	static uint8_t x296 = 1U;

    t53 = (x293+((x294*x295)==x296));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MIN;
	int32_t x300 = 0;
	volatile int32_t t54 = 812319;

    t54 = (x297+((x298*x299)==x300));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = -1;
	static uint8_t x303 = UINT8_MAX;
	uint8_t x304 = 0U;
	volatile int32_t t55 = INT32_MIN;

    t55 = (x301+((x302*x303)==x304));

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x309 = INT8_MAX;
	uint32_t x310 = 700459U;
	int8_t x311 = INT8_MIN;
	int16_t x312 = -71;
	int32_t t56 = 299081;

    t56 = (x309+((x310*x311)==x312));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x317 = UINT16_MAX;
	int8_t x319 = -1;
	volatile int16_t x320 = INT16_MAX;
	volatile int32_t t57 = 251979;

    t57 = (x317+((x318*x319)==x320));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x323 = INT16_MAX;
	int32_t t58 = 6071850;

    t58 = (x321+((x322*x323)==x324));

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x329 = -118085175;
	volatile int16_t x330 = -1;
	int64_t x332 = -1LL;
	static int32_t t59 = 5230;

    t59 = (x329+((x330*x331)==x332));

    if (t59 != -118085175) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x333 = -3652916518465418923LL;
	int16_t x334 = 2735;
	uint8_t x335 = 86U;
	int64_t x336 = -1LL;

    t60 = (x333+((x334*x335)==x336));

    if (t60 != -3652916518465418923LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x337 = INT32_MAX;
	static int16_t x338 = -253;
	uint64_t x339 = 1713694890570693LLU;
	volatile int8_t x340 = -1;
	volatile int32_t t61 = INT32_MAX;

    t61 = (x337+((x338*x339)==x340));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x342 = 37;
	int8_t x343 = 1;
	int16_t x344 = INT16_MIN;
	volatile int64_t t62 = INT64_MAX;

    t62 = (x341+((x342*x343)==x344));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x350 = 6402726822406875LLU;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MIN;

    t63 = (x349+((x350*x351)==x352));

    if (t63 != 4516) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x353 = -1;
	int32_t x354 = -348187;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -24;
	volatile int32_t t64 = 107623;

    t64 = (x353+((x354*x355)==x356));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x357 = 61U;
	int8_t x358 = INT8_MIN;
	volatile uint64_t x359 = UINT64_MAX;
	volatile int32_t t65 = -415460;

    t65 = (x357+((x358*x359)==x360));

    if (t65 != 61) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x361 = -1;
	volatile int16_t x362 = -3;
	volatile int64_t x363 = 105894726689LL;
	volatile uint8_t x364 = 0U;
	int32_t t66 = -2674920;

    t66 = (x361+((x362*x363)==x364));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x366 = 68U;
	static int32_t x367 = 432;

    t67 = (x365+((x366*x367)==x368));

    if (t67 != 10890) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x373 = INT32_MIN;
	uint8_t x374 = UINT8_MAX;
	uint16_t x375 = 237U;
	uint16_t x376 = UINT16_MAX;

    t68 = (x373+((x374*x375)==x376));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x377 = INT8_MIN;
	uint32_t x379 = 301U;
	static int64_t x380 = INT64_MIN;
	int32_t t69 = -928766;

    t69 = (x377+((x378*x379)==x380));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x381 = -2;
	int32_t x382 = INT32_MAX;
	int8_t x383 = -1;
	int32_t t70 = -93;

    t70 = (x381+((x382*x383)==x384));

    if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x386 = 1;
	static uint8_t x387 = 40U;
	uint8_t x388 = 53U;
	int64_t t71 = INT64_MIN;

    t71 = (x385+((x386*x387)==x388));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x390 = 170U;
	volatile uint8_t x391 = UINT8_MAX;
	static volatile int32_t x392 = -1;
	volatile int64_t t72 = 724284710LL;

    t72 = (x389+((x390*x391)==x392));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x393 = INT16_MAX;
	int32_t x394 = 1;
	uint64_t x395 = UINT64_MAX;
	int32_t t73 = -11310;

    t73 = (x393+((x394*x395)==x396));

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	int8_t x399 = -1;
	int32_t t74 = -22;

    t74 = (x397+((x398*x399)==x400));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x405 = -167;
	static int16_t x406 = INT16_MIN;
	uint16_t x407 = 9U;
	volatile int32_t x408 = INT32_MIN;
	static volatile int32_t t75 = 38;

    t75 = (x405+((x406*x407)==x408));

    if (t75 != -167) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x409 = INT8_MIN;
	uint32_t x410 = UINT32_MAX;
	volatile int16_t x411 = INT16_MIN;
	uint16_t x412 = 4U;
	volatile int32_t t76 = 2912123;

    t76 = (x409+((x410*x411)==x412));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x413 = 27LLU;
	int16_t x415 = INT16_MIN;
	int64_t x416 = -76315536753949132LL;

    t77 = (x413+((x414*x415)==x416));

    if (t77 != 27LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x417 = INT64_MIN;
	volatile uint8_t x418 = UINT8_MAX;
	int32_t x419 = -1;
	int64_t t78 = INT64_MIN;

    t78 = (x417+((x418*x419)==x420));

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x421 = UINT64_MAX;
	int64_t x422 = 4059LL;
	uint64_t x424 = 14559291662257060LLU;
	volatile uint64_t t79 = UINT64_MAX;

    t79 = (x421+((x422*x423)==x424));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x425 = 20U;
	int8_t x427 = INT8_MIN;
	int32_t x428 = 0;

    t80 = (x425+((x426*x427)==x428));

    if (t80 != 20) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x429 = 2U;
	volatile uint16_t x432 = 7U;
	int32_t t81 = -6;

    t81 = (x429+((x430*x431)==x432));

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x433 = INT8_MIN;
	uint32_t x434 = 2U;
	uint8_t x436 = 9U;
	volatile int32_t t82 = 397576;

    t82 = (x433+((x434*x435)==x436));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x437 = 0U;
	uint32_t x439 = UINT32_MAX;
	volatile int64_t x440 = INT64_MAX;
	int32_t t83 = 258323453;

    t83 = (x437+((x438*x439)==x440));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x442 = 269042203U;
	static uint16_t x443 = 1U;
	volatile int8_t x444 = -50;

    t84 = (x441+((x442*x443)==x444));

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x445 = UINT8_MAX;
	int64_t x446 = -163993458748798884LL;
	int8_t x447 = 2;
	static int16_t x448 = -1;
	int32_t t85 = 812;

    t85 = (x445+((x446*x447)==x448));

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x449 = UINT8_MAX;
	int32_t x450 = -1;
	static int8_t x452 = -1;
	volatile int32_t t86 = -26;

    t86 = (x449+((x450*x451)==x452));

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x457 = 1LLU;
	uint32_t x458 = UINT32_MAX;
	int64_t x459 = -1LL;
	int64_t x460 = INT64_MIN;
	uint64_t t87 = 2LLU;

    t87 = (x457+((x458*x459)==x460));

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x461 = INT16_MIN;
	uint32_t x463 = UINT32_MAX;
	int16_t x464 = -1;
	volatile int32_t t88 = 4;

    t88 = (x461+((x462*x463)==x464));

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x465 = 6946367618LLU;
	uint16_t x466 = 194U;
	uint8_t x467 = UINT8_MAX;
	int16_t x468 = INT16_MIN;
	uint64_t t89 = 40449755099250LLU;

    t89 = (x465+((x466*x467)==x468));

    if (t89 != 6946367618LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x469 = -962138LL;
	uint32_t x470 = 0U;
	int32_t x471 = INT32_MIN;
	uint64_t x472 = UINT64_MAX;

    t90 = (x469+((x470*x471)==x472));

    if (t90 != -962138LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x473 = UINT64_MAX;
	int8_t x475 = INT8_MIN;
	int32_t x476 = -45;
	volatile uint64_t t91 = UINT64_MAX;

    t91 = (x473+((x474*x475)==x476));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x477 = UINT8_MAX;
	uint64_t x478 = 119523481038LLU;
	static volatile int16_t x479 = 230;
	volatile int16_t x480 = -1;
	int32_t t92 = 566;

    t92 = (x477+((x478*x479)==x480));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x490 = INT16_MIN;
	int8_t x491 = 1;
	int8_t x492 = INT8_MAX;
	volatile int32_t t93 = -151;

    t93 = (x489+((x490*x491)==x492));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x493 = 53U;
	int8_t x494 = -1;
	int64_t x495 = INT64_MAX;
	static volatile int32_t x496 = INT32_MIN;

    t94 = (x493+((x494*x495)==x496));

    if (t94 != 53) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x502 = INT8_MIN;
	int8_t x503 = -1;
	int8_t x504 = -1;
	volatile int64_t t95 = 128713822LL;

    t95 = (x501+((x502*x503)==x504));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x509 = INT32_MIN;
	static int16_t x510 = INT16_MIN;
	uint32_t x511 = UINT32_MAX;
	volatile int64_t x512 = 16027408938436LL;
	volatile int32_t t96 = INT32_MIN;

    t96 = (x509+((x510*x511)==x512));

    if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x513 = 28879U;
	static uint8_t x514 = 63U;
	int32_t x515 = -1;
	static int64_t x516 = INT64_MAX;
	volatile int32_t t97 = 0;

    t97 = (x513+((x514*x515)==x516));

    if (t97 != 28879) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x525 = UINT32_MAX;
	uint64_t x527 = UINT64_MAX;
	static uint32_t t98 = UINT32_MAX;

    t98 = (x525+((x526*x527)==x528));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x542 = INT8_MAX;
	static int8_t x543 = -14;
	int8_t x544 = -1;
	static int32_t t99 = 323218000;

    t99 = (x541+((x542*x543)==x544));

    if (t99 != -62) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x545 = 5564295LL;
	uint16_t x546 = UINT16_MAX;
	int64_t x548 = -1LL;

    t100 = (x545+((x546*x547)==x548));

    if (t100 != 5564295LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x549 = -1;
	int8_t x550 = -7;
	int8_t x552 = INT8_MIN;
	volatile int32_t t101 = -258;

    t101 = (x549+((x550*x551)==x552));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x553 = UINT16_MAX;
	int16_t x555 = INT16_MIN;
	int8_t x556 = INT8_MAX;
	int32_t t102 = 35018;

    t102 = (x553+((x554*x555)==x556));

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x557 = INT32_MIN;
	uint16_t x558 = 108U;
	static uint32_t x559 = UINT32_MAX;
	volatile int64_t x560 = INT64_MAX;

    t103 = (x557+((x558*x559)==x560));

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x566 = 31U;
	volatile int8_t x567 = INT8_MAX;
	static volatile int32_t t104 = INT32_MIN;

    t104 = (x565+((x566*x567)==x568));

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x573 = 461LLU;
	static int64_t x574 = -1LL;
	volatile int32_t x575 = INT32_MIN;
	static int8_t x576 = 0;
	static uint64_t t105 = 1943018478880LLU;

    t105 = (x573+((x574*x575)==x576));

    if (t105 != 461LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x578 = 125294LL;
	volatile int8_t x580 = INT8_MIN;
	int64_t t106 = 1754315865713147370LL;

    t106 = (x577+((x578*x579)==x580));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x586 = INT8_MIN;
	uint8_t x587 = 109U;
	volatile int32_t x588 = INT32_MIN;

    t107 = (x585+((x586*x587)==x588));

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x591 = UINT32_MAX;
	static int64_t x592 = -5986762457746032LL;
	static volatile int32_t t108 = 2347;

    t108 = (x589+((x590*x591)==x592));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x593 = 1508U;
	static uint16_t x594 = UINT16_MAX;
	uint64_t x595 = 5799477LLU;
	int8_t x596 = 3;
	int32_t t109 = 3430186;

    t109 = (x593+((x594*x595)==x596));

    if (t109 != 1508) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x597 = 904598U;
	volatile int64_t x598 = 54778LL;
	uint8_t x600 = UINT8_MAX;
	volatile uint32_t t110 = 145983222U;

    t110 = (x597+((x598*x599)==x600));

    if (t110 != 904598U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x609 = INT16_MIN;
	int32_t x610 = 1;
	uint16_t x611 = UINT16_MAX;
	uint16_t x612 = 7U;
	volatile int32_t t111 = -27;

    t111 = (x609+((x610*x611)==x612));

    if (t111 != -32768) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x622 = UINT16_MAX;
	static uint16_t x624 = UINT16_MAX;

    t112 = (x621+((x622*x623)==x624));

    if (t112 != -4) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x625 = -1;
	uint64_t x626 = 112089LLU;
	volatile uint8_t x627 = 1U;
	int32_t t113 = 52730403;

    t113 = (x625+((x626*x627)==x628));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x629 = -9;
	uint16_t x631 = UINT16_MAX;
	static int32_t x632 = -1;
	volatile int32_t t114 = -2;

    t114 = (x629+((x630*x631)==x632));

    if (t114 != -9) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x633 = 315109810579072LLU;
	uint32_t x634 = 232U;
	int64_t x636 = INT64_MIN;
	uint64_t t115 = 31LLU;

    t115 = (x633+((x634*x635)==x636));

    if (t115 != 315109810579072LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x637 = 450U;
	static uint16_t x638 = 13U;
	uint32_t x639 = 28265U;
	int32_t t116 = -20545543;

    t116 = (x637+((x638*x639)==x640));

    if (t116 != 450) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x641 = INT32_MAX;
	volatile int16_t x642 = INT16_MIN;
	int16_t x643 = 54;
	int16_t x644 = 0;
	volatile int32_t t117 = INT32_MAX;

    t117 = (x641+((x642*x643)==x644));

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x645 = 265426896;
	volatile int8_t x646 = 1;
	int64_t x647 = INT64_MIN;
	static int32_t x648 = INT32_MIN;
	int32_t t118 = -27;

    t118 = (x645+((x646*x647)==x648));

    if (t118 != 265426896) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x649 = INT32_MIN;
	volatile int32_t x650 = -1;
	static volatile int32_t t119 = INT32_MIN;

    t119 = (x649+((x650*x651)==x652));

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x657 = 1551;
	int16_t x658 = INT16_MAX;
	volatile uint16_t x659 = 0U;
	int32_t x660 = INT32_MIN;

    t120 = (x657+((x658*x659)==x660));

    if (t120 != 1551) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x661 = INT8_MAX;
	int32_t x662 = -58663757;
	static uint8_t x663 = 7U;
	int32_t t121 = -4;

    t121 = (x661+((x662*x663)==x664));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x669 = 113U;
	int16_t x671 = 3;
	int16_t x672 = 1;
	uint32_t t122 = 0U;

    t122 = (x669+((x670*x671)==x672));

    if (t122 != 113U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x673 = INT64_MIN;
	int32_t x674 = 933132;
	static uint8_t x675 = 1U;
	int64_t x676 = INT64_MIN;

    t123 = (x673+((x674*x675)==x676));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x678 = UINT32_MAX;
	volatile int16_t x679 = 1325;
	int32_t x680 = 153597561;
	volatile int32_t t124 = -2537;

    t124 = (x677+((x678*x679)==x680));

    if (t124 != -110) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x681 = INT64_MIN;
	int16_t x682 = -1;
	int8_t x683 = -5;
	int16_t x684 = INT16_MIN;

    t125 = (x681+((x682*x683)==x684));

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x692 = INT16_MIN;
	int64_t t126 = -343LL;

    t126 = (x689+((x690*x691)==x692));

    if (t126 != 196LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x693 = -1;
	static uint16_t x694 = UINT16_MAX;
	volatile uint16_t x695 = 8234U;
	int32_t x696 = INT32_MIN;
	volatile int32_t t127 = 188;

    t127 = (x693+((x694*x695)==x696));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x697 = -22;
	uint64_t x699 = UINT64_MAX;
	int64_t x700 = INT64_MAX;
	volatile int32_t t128 = -558557071;

    t128 = (x697+((x698*x699)==x700));

    if (t128 != -22) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x701 = 3;
	volatile uint16_t x702 = 1U;
	int32_t x703 = -2727;
	uint8_t x704 = 52U;
	int32_t t129 = 255576;

    t129 = (x701+((x702*x703)==x704));

    if (t129 != 3) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x705 = INT8_MAX;
	int8_t x706 = INT8_MAX;
	volatile uint16_t x708 = UINT16_MAX;

    t130 = (x705+((x706*x707)==x708));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x709 = INT16_MAX;
	int16_t x710 = INT16_MIN;
	uint8_t x711 = 9U;
	uint16_t x712 = 90U;
	int32_t t131 = -257230;

    t131 = (x709+((x710*x711)==x712));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x713 = INT32_MAX;
	uint32_t x714 = 385282157U;
	int8_t x715 = INT8_MIN;
	int64_t x716 = -1LL;

    t132 = (x713+((x714*x715)==x716));

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x721 = INT32_MAX;
	uint32_t x722 = UINT32_MAX;
	int16_t x723 = 91;

    t133 = (x721+((x722*x723)==x724));

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x726 = UINT64_MAX;
	int64_t x727 = -1LL;

    t134 = (x725+((x726*x727)==x728));

    if (t134 != -13959989679683LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x729 = -1;
	uint32_t x730 = 49193U;
	int64_t x732 = INT64_MAX;
	volatile int32_t t135 = -4792575;

    t135 = (x729+((x730*x731)==x732));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x739 = 1392129347LLU;
	static int32_t t136 = 0;

    t136 = (x737+((x738*x739)==x740));

    if (t136 != 3583) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x741 = 3LLU;
	uint32_t x742 = 377459249U;
	int16_t x743 = -1;
	volatile uint16_t x744 = 19263U;

    t137 = (x741+((x742*x743)==x744));

    if (t137 != 3LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x745 = 696650169U;
	static volatile uint8_t x746 = 3U;
	int16_t x747 = 227;
	int32_t x748 = 633971;
	uint32_t t138 = 658836457U;

    t138 = (x745+((x746*x747)==x748));

    if (t138 != 696650169U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x753 = INT64_MIN;
	int32_t x756 = -1;

    t139 = (x753+((x754*x755)==x756));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x757 = 8LLU;
	int8_t x758 = 3;
	uint16_t x759 = UINT16_MAX;
	static volatile uint16_t x760 = 27376U;
	static volatile uint64_t t140 = 7602262148LLU;

    t140 = (x757+((x758*x759)==x760));

    if (t140 != 8LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x765 = -9;
	static int8_t x766 = -1;
	int32_t x768 = 14850;
	int32_t t141 = 2090333;

    t141 = (x765+((x766*x767)==x768));

    if (t141 != -9) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x773 = -1;
	int8_t x774 = -41;
	uint32_t x775 = 43423U;
	static int64_t x776 = INT64_MAX;
	volatile int32_t t142 = 3666;

    t142 = (x773+((x774*x775)==x776));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x777 = 3U;
	int8_t x779 = INT8_MIN;
	int16_t x780 = INT16_MIN;
	uint32_t t143 = 2392U;

    t143 = (x777+((x778*x779)==x780));

    if (t143 != 3U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x781 = INT32_MIN;
	int16_t x782 = INT16_MIN;
	int8_t x783 = 1;
	volatile uint8_t x784 = 1U;
	int32_t t144 = INT32_MIN;

    t144 = (x781+((x782*x783)==x784));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x798 = INT8_MIN;
	uint32_t x800 = 436U;
	int64_t t145 = INT64_MIN;

    t145 = (x797+((x798*x799)==x800));

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x802 = INT8_MIN;
	volatile int64_t x803 = -1LL;
	int64_t x804 = 0LL;
	volatile uint64_t t146 = UINT64_MAX;

    t146 = (x801+((x802*x803)==x804));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x805 = UINT64_MAX;
	int16_t x807 = INT16_MIN;
	uint64_t t147 = UINT64_MAX;

    t147 = (x805+((x806*x807)==x808));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x809 = -1;
	int16_t x811 = INT16_MAX;
	static uint8_t x812 = 87U;
	int32_t t148 = -27;

    t148 = (x809+((x810*x811)==x812));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x815 = 251;
	int8_t x816 = -6;
	volatile int32_t t149 = 74272;

    t149 = (x813+((x814*x815)==x816));

    if (t149 != -3) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x817 = 1LL;
	uint8_t x819 = 3U;
	uint16_t x820 = 3393U;
	volatile int64_t t150 = 357067572944LL;

    t150 = (x817+((x818*x819)==x820));

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x822 = -26;
	static uint8_t x823 = 12U;
	int64_t x824 = INT64_MIN;
	int32_t t151 = -24621638;

    t151 = (x821+((x822*x823)==x824));

    if (t151 != -1942) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x834 = UINT8_MAX;
	int32_t x835 = 1;
	static volatile int16_t x836 = -1;

    t152 = (x833+((x834*x835)==x836));

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x837 = INT32_MAX;
	static uint8_t x839 = 4U;
	volatile int64_t x840 = 6210335900040LL;
	int32_t t153 = INT32_MAX;

    t153 = (x837+((x838*x839)==x840));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x845 = 22U;
	int32_t x846 = -1;
	static uint8_t x847 = 2U;

    t154 = (x845+((x846*x847)==x848));

    if (t154 != 22U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x849 = 2;
	static int8_t x850 = -35;
	volatile uint32_t x851 = 980473119U;
	int32_t x852 = INT32_MAX;
	volatile int32_t t155 = 0;

    t155 = (x849+((x850*x851)==x852));

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x857 = 3680595U;
	static int8_t x858 = INT8_MIN;
	uint16_t x859 = UINT16_MAX;
	uint32_t x860 = 1121015723U;
	uint32_t t156 = 248698033U;

    t156 = (x857+((x858*x859)==x860));

    if (t156 != 3680595U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x865 = -1LL;
	uint8_t x866 = UINT8_MAX;
	volatile int8_t x867 = -1;
	int64_t t157 = 9284LL;

    t157 = (x865+((x866*x867)==x868));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x870 = 24322190758303LLU;
	volatile int64_t x871 = INT64_MIN;
	int16_t x872 = -1344;
	volatile uint64_t t158 = 242994832248999LLU;

    t158 = (x869+((x870*x871)==x872));

    if (t158 != 31286401220604924LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x873 = 5347956219440LLU;
	int8_t x874 = -24;
	static int8_t x876 = -1;

    t159 = (x873+((x874*x875)==x876));

    if (t159 != 5347956219440LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x877 = -36697004295LL;
	volatile int32_t x878 = INT32_MIN;
	int64_t x879 = 777LL;
	int32_t x880 = INT32_MIN;
	volatile int64_t t160 = 1LL;

    t160 = (x877+((x878*x879)==x880));

    if (t160 != -36697004295LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x885 = INT64_MIN;
	volatile uint16_t x886 = 545U;
	int64_t t161 = INT64_MIN;

    t161 = (x885+((x886*x887)==x888));

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x889 = 14805LLU;
	int8_t x890 = INT8_MIN;
	uint64_t x891 = 1020139836LLU;

    t162 = (x889+((x890*x891)==x892));

    if (t162 != 14805LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x902 = -1;
	uint16_t x903 = 0U;
	volatile int32_t t163 = -98012272;

    t163 = (x901+((x902*x903)==x904));

    if (t163 != -7) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x909 = INT64_MIN;
	volatile uint32_t x911 = 54014U;
	int64_t t164 = INT64_MIN;

    t164 = (x909+((x910*x911)==x912));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x913 = INT32_MIN;
	static uint64_t x914 = 71LLU;
	int32_t x915 = INT32_MIN;
	static int8_t x916 = -22;
	volatile int32_t t165 = INT32_MIN;

    t165 = (x913+((x914*x915)==x916));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x922 = 7920423030LL;
	int8_t x923 = -13;
	volatile int32_t t166 = 6213833;

    t166 = (x921+((x922*x923)==x924));

    if (t166 != -10) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x926 = INT64_MAX;
	uint8_t x928 = 17U;
	volatile int32_t t167 = -1029731;

    t167 = (x925+((x926*x927)==x928));

    if (t167 != -212) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x930 = 7U;
	int8_t x932 = INT8_MIN;
	int64_t t168 = INT64_MAX;

    t168 = (x929+((x930*x931)==x932));

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x937 = INT32_MAX;
	volatile int8_t x938 = INT8_MIN;
	int8_t x939 = INT8_MIN;
	uint32_t x940 = 1955U;
	volatile int32_t t169 = INT32_MAX;

    t169 = (x937+((x938*x939)==x940));

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x941 = INT32_MIN;
	int32_t x942 = INT32_MIN;
	int64_t x943 = -1LL;
	int16_t x944 = -1;
	int32_t t170 = INT32_MIN;

    t170 = (x941+((x942*x943)==x944));

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x945 = 2U;
	int32_t x946 = -1;
	volatile int64_t x948 = INT64_MIN;
	volatile int32_t t171 = -19220466;

    t171 = (x945+((x946*x947)==x948));

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x949 = INT64_MAX;
	int64_t x950 = 513903941211722307LL;
	uint64_t x951 = UINT64_MAX;
	int32_t x952 = -518564943;
	volatile int64_t t172 = INT64_MAX;

    t172 = (x949+((x950*x951)==x952));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x953 = INT8_MIN;
	static volatile uint64_t x956 = 62341659LLU;

    t173 = (x953+((x954*x955)==x956));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x961 = UINT16_MAX;
	int8_t x962 = INT8_MAX;
	int32_t x963 = -499622;
	int8_t x964 = INT8_MAX;
	static int32_t t174 = -4505600;

    t174 = (x961+((x962*x963)==x964));

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x965 = INT16_MAX;
	int8_t x966 = -1;
	volatile int16_t x967 = -12543;
	static uint64_t x968 = 158170LLU;
	int32_t t175 = 1477094;

    t175 = (x965+((x966*x967)==x968));

    if (t175 != 32767) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x969 = INT16_MIN;
	uint8_t x970 = 76U;
	static int16_t x971 = -3;
	volatile int64_t x972 = -141434296104753785LL;

    t176 = (x969+((x970*x971)==x972));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x973 = 384580827967120LLU;
	uint64_t x974 = UINT64_MAX;
	volatile int16_t x976 = INT16_MAX;
	uint64_t t177 = 346LLU;

    t177 = (x973+((x974*x975)==x976));

    if (t177 != 384580827967120LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x977 = 96539646151LLU;
	volatile int16_t x978 = -1;
	static int64_t x979 = 229928229254916LL;
	uint8_t x980 = 1U;
	static volatile uint64_t t178 = 96179LLU;

    t178 = (x977+((x978*x979)==x980));

    if (t178 != 96539646151LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x981 = INT64_MIN;
	uint8_t x982 = 2U;
	uint32_t x984 = 34549224U;
	volatile int64_t t179 = INT64_MIN;

    t179 = (x981+((x982*x983)==x984));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x987 = -3127LL;
	uint64_t x988 = 67205229074104LLU;
	volatile int64_t t180 = 2649177902944974908LL;

    t180 = (x985+((x986*x987)==x988));

    if (t180 != -27136252325823LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x989 = -1;
	int16_t x990 = -474;
	int64_t x992 = INT64_MIN;
	int32_t t181 = 11433211;

    t181 = (x989+((x990*x991)==x992));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x994 = 42U;
	int16_t x995 = -28;
	int64_t x996 = 522180611549LL;
	static volatile int32_t t182 = 384;

    t182 = (x993+((x994*x995)==x996));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x997 = INT16_MIN;
	int16_t x998 = INT16_MIN;
	static volatile int16_t x999 = -11;
	volatile int64_t x1000 = -1LL;

    t183 = (x997+((x998*x999)==x1000));

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1006 = INT16_MIN;
	uint32_t x1007 = UINT32_MAX;
	int32_t t184 = 60674;

    t184 = (x1005+((x1006*x1007)==x1008));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1009 = UINT8_MAX;
	volatile int32_t x1011 = -97818;
	int16_t x1012 = -1;
	volatile int32_t t185 = 99275;

    t185 = (x1009+((x1010*x1011)==x1012));

    if (t185 != 255) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1017 = -5;
	uint16_t x1018 = 0U;
	int16_t x1020 = INT16_MIN;
	volatile int32_t t186 = 72;

    t186 = (x1017+((x1018*x1019)==x1020));

    if (t186 != -5) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1021 = INT16_MIN;
	uint64_t x1022 = 719405670706368LLU;
	int8_t x1023 = -32;
	int32_t x1024 = INT32_MAX;
	volatile int32_t t187 = -6;

    t187 = (x1021+((x1022*x1023)==x1024));

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1029 = 76U;
	static uint32_t x1031 = 2591533U;
	uint32_t x1032 = UINT32_MAX;
	uint32_t t188 = 8361532U;

    t188 = (x1029+((x1030*x1031)==x1032));

    if (t188 != 76U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x1034 = INT16_MIN;
	static int8_t x1035 = INT8_MIN;
	volatile int8_t x1036 = INT8_MIN;
	int64_t t189 = 2LL;

    t189 = (x1033+((x1034*x1035)==x1036));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1041 = INT8_MIN;
	volatile int8_t x1043 = INT8_MIN;
	int32_t x1044 = 193360754;
	volatile int32_t t190 = -7;

    t190 = (x1041+((x1042*x1043)==x1044));

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1045 = INT32_MAX;
	int64_t x1046 = -1LL;
	int8_t x1047 = -1;
	static uint64_t x1048 = UINT64_MAX;

    t191 = (x1045+((x1046*x1047)==x1048));

    if (t191 != INT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x1050 = INT16_MAX;
	int8_t x1051 = 35;
	int32_t x1052 = INT32_MAX;
	static volatile uint64_t t192 = UINT64_MAX;

    t192 = (x1049+((x1050*x1051)==x1052));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1057 = 457050923;
	int16_t x1058 = INT16_MAX;
	static volatile int32_t x1059 = -180;
	static uint8_t x1060 = 125U;
	volatile int32_t t193 = -1041;

    t193 = (x1057+((x1058*x1059)==x1060));

    if (t193 != 457050923) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1070 = 615697484548114538LL;
	int16_t x1072 = -22;
	volatile uint64_t t194 = 832LLU;

    t194 = (x1069+((x1070*x1071)==x1072));

    if (t194 != 4142494LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1073 = INT64_MIN;
	volatile int16_t x1074 = -153;
	volatile uint32_t x1075 = UINT32_MAX;

    t195 = (x1073+((x1074*x1075)==x1076));

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1077 = UINT16_MAX;
	static volatile int32_t x1078 = INT32_MIN;
	uint32_t x1079 = 556U;
	uint16_t x1080 = 0U;
	int32_t t196 = -35609945;

    t196 = (x1077+((x1078*x1079)==x1080));

    if (t196 != 65536) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1081 = 519363839LLU;
	int16_t x1082 = INT16_MIN;
	volatile int32_t x1083 = -1;
	uint8_t x1084 = UINT8_MAX;

    t197 = (x1081+((x1082*x1083)==x1084));

    if (t197 != 519363839LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1085 = 807941830U;
	volatile uint8_t x1086 = UINT8_MAX;
	int16_t x1088 = 1;

    t198 = (x1085+((x1086*x1087)==x1088));

    if (t198 != 807941830U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1091 = INT32_MAX;
	int32_t x1092 = 608408651;
	static volatile int32_t t199 = -15557;

    t199 = (x1089+((x1090*x1091)==x1092));

    if (t199 != -779) { NG(); } else { ; }
	
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

