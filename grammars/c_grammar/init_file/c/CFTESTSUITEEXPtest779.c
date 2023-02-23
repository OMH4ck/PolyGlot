
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

static int32_t x7 = -1;
volatile int16_t x24 = INT16_MIN;
volatile int32_t t5 = -21;
static uint16_t x32 = 3U;
volatile int64_t x34 = -1LL;
int8_t x35 = INT8_MAX;
volatile uint16_t x37 = UINT16_MAX;
volatile int32_t t9 = -309;
volatile int32_t x46 = -162761030;
uint8_t x51 = 8U;
int32_t t12 = 1;
static int16_t x55 = 231;
int32_t t15 = 3407;
int32_t x71 = 29;
volatile int32_t x72 = -1;
int8_t x74 = -1;
int8_t x77 = INT8_MAX;
volatile int32_t t20 = 3570420;
uint16_t x91 = UINT16_MAX;
volatile int32_t t21 = -233;
int64_t x94 = INT64_MIN;
static int64_t x98 = INT64_MAX;
volatile uint32_t x105 = 4072U;
int16_t x106 = INT16_MAX;
int64_t x107 = 2LL;
volatile uint8_t x112 = UINT8_MAX;
int32_t t25 = -228685853;
uint16_t x119 = UINT16_MAX;
uint8_t x122 = 1U;
volatile int32_t x123 = -1;
int32_t x126 = 947408182;
uint8_t x128 = 4U;
int32_t x129 = INT32_MAX;
int64_t x145 = 2488LL;
int8_t x146 = INT8_MIN;
static int32_t x153 = INT32_MIN;
int16_t x154 = INT16_MIN;
volatile int32_t t35 = 2323;
uint32_t x162 = 31344515U;
static volatile uint8_t x164 = 12U;
int64_t x166 = 837012LL;
uint32_t x174 = 1670U;
int32_t t40 = 438;
static volatile int8_t x184 = -1;
uint64_t x185 = UINT64_MAX;
volatile int32_t x187 = INT32_MIN;
uint64_t x193 = 1404829LLU;
int16_t x195 = INT16_MIN;
int32_t t46 = -174114674;
static volatile int16_t x201 = INT16_MAX;
volatile int64_t x205 = -4700489315276739LL;
int32_t x212 = INT32_MIN;
int32_t x214 = INT32_MAX;
volatile int32_t t50 = 2651;
int64_t x217 = INT64_MIN;
volatile int32_t x219 = -59372;
volatile int32_t x220 = INT32_MIN;
int64_t x222 = -121452LL;
uint16_t x227 = 3345U;
int64_t x229 = INT64_MAX;
int64_t x232 = INT64_MAX;
static int8_t x237 = -1;
uint8_t x242 = UINT8_MAX;
int32_t x244 = INT32_MIN;
int16_t x247 = INT16_MAX;
static int32_t t58 = 7512;
volatile uint16_t x257 = 12U;
static int8_t x264 = 7;
int64_t x265 = INT64_MIN;
int8_t x277 = -1;
volatile int32_t t65 = 1;
int8_t x281 = INT8_MIN;
int16_t x283 = INT16_MIN;
static volatile int8_t x284 = -1;
volatile int32_t x286 = INT32_MIN;
int16_t x294 = INT16_MIN;
volatile int32_t t70 = 359;
static int8_t x308 = INT8_MIN;
int32_t t72 = -13396;
uint16_t x329 = UINT16_MAX;
volatile int32_t t77 = -48;
static int32_t x336 = -69441772;
int64_t x337 = -13LL;
static int8_t x350 = -1;
uint16_t x352 = 23U;
static uint32_t x355 = UINT32_MAX;
int16_t x362 = INT16_MIN;
volatile int8_t x363 = INT8_MIN;
int32_t t85 = -1963856;
int8_t x370 = -1;
static int64_t x372 = -1LL;
volatile int32_t t86 = -2731;
static int32_t x374 = INT32_MIN;
uint64_t x375 = UINT64_MAX;
int32_t x376 = -1635;
int32_t t87 = -97;
static int32_t x378 = INT32_MIN;
static volatile int8_t x382 = -1;
static int32_t t89 = 264;
uint16_t x387 = 25337U;
uint16_t x404 = UINT16_MAX;
volatile uint32_t x409 = UINT32_MAX;
int32_t x422 = -1;
int8_t x425 = INT8_MAX;
volatile int32_t x435 = INT32_MIN;
int32_t t102 = 14740121;
volatile int32_t t104 = 654;
volatile int16_t x453 = INT16_MIN;
int64_t x455 = INT64_MIN;
volatile int32_t t106 = -7;
uint64_t x469 = 82508LLU;
int8_t x478 = INT8_MIN;
uint16_t x487 = 6U;
volatile uint16_t x492 = UINT16_MAX;
volatile uint16_t x493 = 23213U;
uint16_t x495 = 2804U;
int64_t x512 = 7242605271297218LL;
volatile uint64_t x513 = 5070LLU;
volatile int64_t x516 = -306670056121LL;
volatile int32_t t122 = -29601;
static int16_t x523 = INT16_MIN;
int16_t x528 = INT16_MAX;
static uint8_t x531 = UINT8_MAX;
volatile uint64_t x538 = UINT64_MAX;
int16_t x541 = -3832;
int8_t x547 = INT8_MIN;
int8_t x550 = -4;
int16_t x556 = INT16_MIN;
volatile uint32_t x560 = 2921U;
volatile int32_t t133 = -39;
volatile uint32_t x568 = UINT32_MAX;
volatile uint16_t x570 = 770U;
int8_t x578 = INT8_MIN;
static volatile int32_t x582 = 1;
uint64_t x596 = 454048285LLU;
int8_t x601 = -13;
uint64_t x602 = 7115LLU;
uint16_t x603 = 783U;
volatile int32_t t143 = -12883;
static int64_t x608 = -5247LL;
volatile int32_t t144 = 4050;
static int16_t x609 = INT16_MAX;
int16_t x614 = INT16_MIN;
static int32_t x625 = -1;
volatile uint64_t x626 = 13527LLU;
int32_t x629 = INT32_MIN;
int64_t x631 = INT64_MAX;
uint32_t x636 = UINT32_MAX;
static volatile int32_t x648 = -1;
int16_t x653 = -1;
static uint64_t x658 = 110303927234LLU;
int32_t t159 = -60;
uint64_t x669 = 12LLU;
int64_t x670 = 124LL;
int8_t x681 = INT8_MAX;
static int16_t x685 = INT16_MIN;
volatile int32_t t164 = -210;
static uint16_t x695 = 41U;
volatile int32_t t165 = 285416297;
static int16_t x703 = -1;
volatile int32_t t167 = 8;
volatile int32_t t168 = 15572711;
int16_t x709 = INT16_MIN;
uint16_t x714 = 14359U;
uint64_t x724 = 27811591687609LLU;
static int32_t t173 = 30219;
uint32_t x731 = UINT32_MAX;
uint32_t x738 = 112039U;
uint64_t x750 = 3798825493533996LLU;
int64_t x754 = -13738400LL;
volatile int64_t x760 = -249604LL;
int8_t x768 = 55;
int16_t x770 = -1;
uint64_t x771 = 50869620LLU;
int32_t t184 = 31554789;
static uint64_t x776 = UINT64_MAX;
static volatile int32_t t185 = -17;
int32_t x782 = -1;
static int32_t t189 = -2;
int16_t x803 = -10371;
static int32_t t192 = 1941;
volatile int32_t x809 = 844083266;
uint32_t x823 = UINT32_MAX;
int32_t t197 = -20278405;
int16_t x826 = INT16_MIN;
static int64_t x828 = INT64_MIN;
int8_t x831 = INT8_MIN;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MAX;
	int32_t x3 = -1;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -18285084;

    t0 = (x1>((x2/x3)^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = 0;
	uint16_t x6 = 5U;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 120034770;

    t1 = (x5>((x6/x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	volatile int8_t x10 = INT8_MIN;
	int8_t x11 = -1;
	static uint64_t x12 = 80560703502680562LLU;
	static int32_t t2 = -3;

    t2 = (x9>((x10/x11)^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1LL;
	int16_t x14 = 4;
	static int64_t x15 = -1LL;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -7;

    t3 = (x13>((x14/x15)^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = 89;
	uint16_t x18 = UINT16_MAX;
	int64_t x19 = INT64_MIN;
	uint64_t x20 = 1523943541811137LLU;
	volatile int32_t t4 = 3017;

    t4 = (x17>((x18/x19)^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	uint32_t x22 = 1U;
	static uint32_t x23 = 94U;

    t5 = (x21>((x22/x23)^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int8_t x26 = 12;
	volatile uint8_t x27 = 6U;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 317913;

    t6 = (x25>((x26/x27)^x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 8741U;
	volatile uint8_t x30 = 1U;
	static uint8_t x31 = UINT8_MAX;
	volatile int32_t t7 = 5201;

    t7 = (x29>((x30/x31)^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MIN;
	int32_t x36 = INT32_MAX;
	volatile int32_t t8 = -154065970;

    t8 = (x33>((x34/x35)^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = INT32_MAX;
	static int16_t x39 = INT16_MAX;
	int64_t x40 = INT64_MAX;

    t9 = (x37>((x38/x39)^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	static int32_t x42 = 16191;
	uint8_t x43 = 47U;
	static int32_t x44 = -1;
	volatile int32_t t10 = 3074021;

    t10 = (x41>((x42/x43)^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 2136278324590038LL;
	volatile int8_t x47 = -1;
	volatile uint8_t x48 = 44U;
	int32_t t11 = -640736602;

    t11 = (x45>((x46/x47)^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x49 = 95U;
	volatile int8_t x50 = -1;
	uint64_t x52 = UINT64_MAX;

    t12 = (x49>((x50/x51)^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 3U;
	int64_t x54 = INT64_MAX;
	uint8_t x56 = 11U;
	volatile int32_t t13 = 74937997;

    t13 = (x53>((x54/x55)^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x57 = -1;
	volatile int16_t x58 = -2574;
	static int16_t x59 = 1;
	static int64_t x60 = INT64_MIN;
	int32_t t14 = 179050;

    t14 = (x57>((x58/x59)^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = INT8_MIN;
	int64_t x62 = 2536709407LL;
	int8_t x63 = 24;
	int8_t x64 = INT8_MIN;

    t15 = (x61>((x62/x63)^x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 15452;
	volatile int64_t x66 = -1LL;
	int32_t x67 = -388324;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = 3574860;

    t16 = (x65>((x66/x67)^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = INT16_MIN;
	volatile uint16_t x70 = 1239U;
	int32_t t17 = -1395;

    t17 = (x69>((x70/x71)^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 28U;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = -1;
	volatile int32_t t18 = 14216;

    t18 = (x73>((x74/x75)^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x78 = INT16_MIN;
	volatile int8_t x79 = INT8_MIN;
	volatile uint64_t x80 = 274LLU;
	int32_t t19 = -130;

    t19 = (x77>((x78/x79)^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	uint32_t x82 = 0U;
	int8_t x83 = INT8_MIN;
	uint8_t x84 = 0U;

    t20 = (x81>((x82/x83)^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -8217754LL;
	int32_t x90 = INT32_MAX;
	int16_t x92 = INT16_MIN;

    t21 = (x89>((x90/x91)^x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 7U;
	static int16_t x95 = INT16_MIN;
	uint32_t x96 = UINT32_MAX;
	int32_t t22 = -2790984;

    t22 = (x93>((x94/x95)^x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x97 = 11;
	int32_t x99 = -1;
	uint8_t x100 = 0U;
	int32_t t23 = 1;

    t23 = (x97>((x98/x99)^x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x108 = INT16_MIN;
	static volatile int32_t t24 = 425639;

    t24 = (x105>((x106/x107)^x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x109 = UINT32_MAX;
	int16_t x110 = -1;
	uint64_t x111 = UINT64_MAX;

    t25 = (x109>((x110/x111)^x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = 297U;
	int64_t x118 = INT64_MIN;
	static int32_t x120 = -1;
	volatile int32_t t26 = 1;

    t26 = (x117>((x118/x119)^x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x121 = 30196U;
	uint64_t x124 = 822030527937LLU;
	int32_t t27 = 144;

    t27 = (x121>((x122/x123)^x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x125 = 0;
	int32_t x127 = -1;
	volatile int32_t t28 = -1;

    t28 = (x125>((x126/x127)^x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x130 = -1;
	int64_t x131 = INT64_MAX;
	static uint16_t x132 = 0U;
	int32_t t29 = 75;

    t29 = (x129>((x130/x131)^x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x133 = UINT32_MAX;
	int32_t x134 = INT32_MAX;
	uint64_t x135 = 6008620720486169LLU;
	int32_t x136 = 1;
	volatile int32_t t30 = -495;

    t30 = (x133>((x134/x135)^x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x137 = 3U;
	static uint8_t x138 = 37U;
	uint64_t x139 = 8102LLU;
	int32_t x140 = INT32_MIN;
	volatile int32_t t31 = -1439;

    t31 = (x137>((x138/x139)^x140));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x141 = UINT8_MAX;
	static uint32_t x142 = 512498U;
	static uint32_t x143 = UINT32_MAX;
	uint8_t x144 = 2U;
	volatile int32_t t32 = -524175941;

    t32 = (x141>((x142/x143)^x144));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x147 = INT16_MIN;
	int64_t x148 = 6398197573LL;
	int32_t t33 = -98523;

    t33 = (x145>((x146/x147)^x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MAX;
	volatile int32_t x151 = -79176;
	int64_t x152 = 1974012947502835960LL;
	static int32_t t34 = -212643307;

    t34 = (x149>((x150/x151)^x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x155 = 439;
	int8_t x156 = INT8_MIN;

    t35 = (x153>((x154/x155)^x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x157 = UINT32_MAX;
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = INT8_MAX;
	int8_t x160 = INT8_MIN;
	volatile int32_t t36 = 0;

    t36 = (x157>((x158/x159)^x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = INT16_MIN;
	int16_t x163 = -1;
	static int32_t t37 = 6;

    t37 = (x161>((x162/x163)^x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x165 = 9U;
	uint32_t x167 = 2771616U;
	static int64_t x168 = -1LL;
	volatile int32_t t38 = -512469314;

    t38 = (x165>((x166/x167)^x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x169 = 3U;
	uint8_t x170 = 6U;
	int8_t x171 = 1;
	int64_t x172 = 3LL;
	int32_t t39 = -4116565;

    t39 = (x169>((x170/x171)^x172));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = -1;
	uint32_t x175 = 1U;
	int16_t x176 = INT16_MIN;

    t40 = (x173>((x174/x175)^x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x177 = INT64_MAX;
	static int8_t x178 = -2;
	uint8_t x179 = 4U;
	int32_t x180 = -63920443;
	volatile int32_t t41 = -1850288;

    t41 = (x177>((x178/x179)^x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x181 = INT64_MIN;
	volatile int16_t x182 = 217;
	uint32_t x183 = 29U;
	volatile int32_t t42 = -122;

    t42 = (x181>((x182/x183)^x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x186 = UINT32_MAX;
	static int32_t x188 = -5520;
	volatile int32_t t43 = 141270;

    t43 = (x185>((x186/x187)^x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x189 = -4092;
	int8_t x190 = 1;
	static int64_t x191 = -1LL;
	volatile int32_t x192 = 121;
	int32_t t44 = 14288;

    t44 = (x189>((x190/x191)^x192));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x194 = INT32_MAX;
	int32_t x196 = -97020613;
	volatile int32_t t45 = -26;

    t45 = (x193>((x194/x195)^x196));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = INT16_MAX;
	int16_t x198 = -17;
	volatile uint64_t x199 = UINT64_MAX;
	int16_t x200 = INT16_MIN;

    t46 = (x197>((x198/x199)^x200));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x202 = UINT8_MAX;
	uint32_t x203 = 1257302077U;
	uint8_t x204 = UINT8_MAX;
	int32_t t47 = 120600023;

    t47 = (x201>((x202/x203)^x204));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x206 = 47;
	uint64_t x207 = 14LLU;
	int8_t x208 = 26;
	volatile int32_t t48 = 71921;

    t48 = (x205>((x206/x207)^x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = INT64_MAX;
	int64_t x210 = -13924119466389LL;
	int16_t x211 = INT16_MIN;
	static int32_t t49 = 129353;

    t49 = (x209>((x210/x211)^x212));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = INT16_MAX;
	static uint32_t x215 = 118U;
	volatile int32_t x216 = INT32_MAX;

    t50 = (x213>((x214/x215)^x216));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x218 = -1LL;
	static int32_t t51 = 6;

    t51 = (x217>((x218/x219)^x220));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = INT64_MIN;
	static int64_t x223 = -1LL;
	int64_t x224 = INT64_MIN;
	int32_t t52 = 20552;

    t52 = (x221>((x222/x223)^x224));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x225 = 476979LLU;
	static uint16_t x226 = UINT16_MAX;
	uint16_t x228 = 356U;
	int32_t t53 = -3588;

    t53 = (x225>((x226/x227)^x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x230 = -1;
	volatile int64_t x231 = INT64_MIN;
	static volatile int32_t t54 = 3867593;

    t54 = (x229>((x230/x231)^x232));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = -1;
	int16_t x234 = INT16_MIN;
	volatile int16_t x235 = INT16_MIN;
	static int64_t x236 = INT64_MAX;
	int32_t t55 = -3891;

    t55 = (x233>((x234/x235)^x236));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x238 = 10U;
	volatile int32_t x239 = -1;
	uint8_t x240 = 1U;
	volatile int32_t t56 = 502;

    t56 = (x237>((x238/x239)^x240));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x241 = 20;
	int16_t x243 = INT16_MIN;
	static volatile int32_t t57 = -4911;

    t57 = (x241>((x242/x243)^x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x245 = 32623U;
	int8_t x246 = INT8_MIN;
	static volatile int64_t x248 = -1LL;

    t58 = (x245>((x246/x247)^x248));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = INT8_MAX;
	int8_t x250 = 0;
	static int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MAX;
	int32_t t59 = -25;

    t59 = (x249>((x250/x251)^x252));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MAX;
	volatile int8_t x255 = INT8_MAX;
	int64_t x256 = 2183509603294325LL;
	volatile int32_t t60 = 1430268;

    t60 = (x253>((x254/x255)^x256));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x258 = -1;
	uint32_t x259 = 7323367U;
	int32_t x260 = 158201107;
	int32_t t61 = -911;

    t61 = (x257>((x258/x259)^x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x261 = INT8_MAX;
	uint16_t x262 = UINT16_MAX;
	volatile uint32_t x263 = 157863U;
	volatile int32_t t62 = -109098;

    t62 = (x261>((x262/x263)^x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x266 = -1;
	static int8_t x267 = 29;
	uint16_t x268 = UINT16_MAX;
	static int32_t t63 = 1;

    t63 = (x265>((x266/x267)^x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = INT16_MIN;
	uint32_t x274 = 1U;
	static int64_t x275 = 27957429837LL;
	volatile int64_t x276 = INT64_MIN;
	int32_t t64 = -4150;

    t64 = (x273>((x274/x275)^x276));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x278 = UINT16_MAX;
	uint32_t x279 = 13682U;
	int8_t x280 = INT8_MAX;

    t65 = (x277>((x278/x279)^x280));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x282 = UINT64_MAX;
	volatile int32_t t66 = 1;

    t66 = (x281>((x282/x283)^x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x285 = INT16_MIN;
	static int16_t x287 = INT16_MAX;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t67 = 207746566;

    t67 = (x285>((x286/x287)^x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x289 = INT8_MIN;
	uint8_t x290 = UINT8_MAX;
	static uint64_t x291 = 731636139023LLU;
	uint32_t x292 = 8U;
	volatile int32_t t68 = -195563;

    t68 = (x289>((x290/x291)^x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x293 = 2114U;
	uint8_t x295 = 4U;
	static int64_t x296 = INT64_MIN;
	int32_t t69 = -1379108;

    t69 = (x293>((x294/x295)^x296));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = 58;
	static volatile int32_t x298 = INT32_MIN;
	uint32_t x299 = 198U;
	int32_t x300 = -1;

    t70 = (x297>((x298/x299)^x300));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x301 = -1;
	uint64_t x302 = UINT64_MAX;
	int8_t x303 = INT8_MAX;
	static int64_t x304 = -1LL;
	volatile int32_t t71 = -178131;

    t71 = (x301>((x302/x303)^x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x305 = -1730206591LL;
	int8_t x306 = INT8_MAX;
	int8_t x307 = -1;

    t72 = (x305>((x306/x307)^x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x309 = -1;
	int16_t x310 = -801;
	static int32_t x311 = INT32_MIN;
	uint8_t x312 = 20U;
	volatile int32_t t73 = -219;

    t73 = (x309>((x310/x311)^x312));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x313 = INT16_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	uint64_t x315 = 12087LLU;
	volatile int64_t x316 = INT64_MIN;
	int32_t t74 = -1;

    t74 = (x313>((x314/x315)^x316));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x321 = INT64_MIN;
	int64_t x322 = 405672LL;
	int32_t x323 = -1;
	static int32_t x324 = INT32_MAX;
	int32_t t75 = -247;

    t75 = (x321>((x322/x323)^x324));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x325 = UINT64_MAX;
	static int32_t x326 = -2990389;
	uint8_t x327 = UINT8_MAX;
	int8_t x328 = 13;
	int32_t t76 = -47;

    t76 = (x325>((x326/x327)^x328));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x330 = INT8_MAX;
	static int16_t x331 = -533;
	static int16_t x332 = 1;

    t77 = (x329>((x330/x331)^x332));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x333 = 5683371;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = -2092;
	static volatile int32_t t78 = -597;

    t78 = (x333>((x334/x335)^x336));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x338 = INT64_MIN;
	uint16_t x339 = UINT16_MAX;
	static volatile int16_t x340 = -1;
	int32_t t79 = 111;

    t79 = (x337>((x338/x339)^x340));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x341 = -146455891840151003LL;
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MAX;
	int64_t x344 = 0LL;
	volatile int32_t t80 = -26137145;

    t80 = (x341>((x342/x343)^x344));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x345 = 158408LL;
	int16_t x346 = INT16_MIN;
	static int64_t x347 = INT64_MIN;
	static uint8_t x348 = 41U;
	volatile int32_t t81 = 1;

    t81 = (x345>((x346/x347)^x348));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x349 = -1;
	volatile int8_t x351 = -15;
	int32_t t82 = 415770565;

    t82 = (x349>((x350/x351)^x352));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x353 = 1U;
	uint16_t x354 = 2U;
	static volatile int8_t x356 = INT8_MIN;
	int32_t t83 = 134;

    t83 = (x353>((x354/x355)^x356));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x357 = -62283414;
	int32_t x358 = -1;
	int16_t x359 = INT16_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t84 = 69716154;

    t84 = (x357>((x358/x359)^x360));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x361 = INT16_MIN;
	volatile int16_t x364 = INT16_MIN;

    t85 = (x361>((x362/x363)^x364));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x369 = INT32_MIN;
	int8_t x371 = INT8_MIN;

    t86 = (x369>((x370/x371)^x372));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x373 = INT32_MIN;

    t87 = (x373>((x374/x375)^x376));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x377 = 5165U;
	volatile int16_t x379 = INT16_MAX;
	int16_t x380 = 0;
	int32_t t88 = 971;

    t88 = (x377>((x378/x379)^x380));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x381 = INT64_MIN;
	uint64_t x383 = 316455729067LLU;
	int16_t x384 = -1;

    t89 = (x381>((x382/x383)^x384));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x385 = -229;
	int16_t x386 = -1;
	int64_t x388 = INT64_MAX;
	int32_t t90 = -5;

    t90 = (x385>((x386/x387)^x388));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x389 = INT32_MIN;
	uint32_t x390 = 1676911U;
	uint32_t x391 = 363076878U;
	static volatile int8_t x392 = -3;
	volatile int32_t t91 = 63024505;

    t91 = (x389>((x390/x391)^x392));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x393 = 7U;
	uint64_t x394 = 78202476LLU;
	int64_t x395 = 66563413211783LL;
	static int32_t x396 = INT32_MIN;
	int32_t t92 = -12;

    t92 = (x393>((x394/x395)^x396));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x397 = -1;
	static uint8_t x398 = UINT8_MAX;
	static int32_t x399 = INT32_MAX;
	int32_t x400 = INT32_MIN;
	static int32_t t93 = -403343;

    t93 = (x397>((x398/x399)^x400));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x401 = 91263U;
	int32_t x402 = -400049400;
	static int16_t x403 = -1;
	volatile int32_t t94 = 18;

    t94 = (x401>((x402/x403)^x404));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x405 = 15930U;
	int8_t x406 = INT8_MAX;
	volatile int16_t x407 = -1;
	int64_t x408 = -1LL;
	static volatile int32_t t95 = 3032;

    t95 = (x405>((x406/x407)^x408));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x410 = 1;
	int64_t x411 = 1LL;
	volatile int8_t x412 = INT8_MIN;
	static volatile int32_t t96 = -198556;

    t96 = (x409>((x410/x411)^x412));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x417 = 68785399069432LL;
	int8_t x418 = INT8_MAX;
	uint8_t x419 = UINT8_MAX;
	int8_t x420 = 24;
	volatile int32_t t97 = -7;

    t97 = (x417>((x418/x419)^x420));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint32_t x421 = UINT32_MAX;
	int8_t x423 = INT8_MIN;
	static int8_t x424 = INT8_MIN;
	static volatile int32_t t98 = -80393305;

    t98 = (x421>((x422/x423)^x424));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x426 = INT8_MIN;
	static int64_t x427 = -1LL;
	int16_t x428 = -10;
	int32_t t99 = 164;

    t99 = (x425>((x426/x427)^x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x429 = 0;
	int64_t x430 = INT64_MIN;
	uint64_t x431 = 3177LLU;
	volatile uint16_t x432 = 129U;
	volatile int32_t t100 = -6532;

    t100 = (x429>((x430/x431)^x432));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x433 = 288U;
	int16_t x434 = INT16_MAX;
	uint16_t x436 = 3U;
	static volatile int32_t t101 = 1;

    t101 = (x433>((x434/x435)^x436));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x437 = INT32_MAX;
	int16_t x438 = INT16_MIN;
	static int32_t x439 = INT32_MIN;
	int8_t x440 = INT8_MIN;

    t102 = (x437>((x438/x439)^x440));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x441 = 0U;
	volatile uint64_t x442 = 54553248963395519LLU;
	int32_t x443 = 526176;
	static int64_t x444 = INT64_MIN;
	int32_t t103 = -441769026;

    t103 = (x441>((x442/x443)^x444));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x445 = INT16_MIN;
	volatile int8_t x446 = -1;
	static volatile int8_t x447 = INT8_MAX;
	int16_t x448 = -1;

    t104 = (x445>((x446/x447)^x448));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x449 = -2;
	volatile uint64_t x450 = UINT64_MAX;
	int64_t x451 = INT64_MAX;
	static int8_t x452 = -1;
	int32_t t105 = 501819263;

    t105 = (x449>((x450/x451)^x452));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x454 = INT32_MAX;
	uint8_t x456 = 7U;

    t106 = (x453>((x454/x455)^x456));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x457 = 86U;
	int64_t x458 = INT64_MAX;
	static int8_t x459 = INT8_MIN;
	static int64_t x460 = -547283LL;
	int32_t t107 = 25649223;

    t107 = (x457>((x458/x459)^x460));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x461 = INT8_MIN;
	int32_t x462 = 140090;
	static int16_t x463 = INT16_MIN;
	uint8_t x464 = UINT8_MAX;
	volatile int32_t t108 = 0;

    t108 = (x461>((x462/x463)^x464));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x465 = 125954;
	uint32_t x466 = 57493U;
	volatile int16_t x467 = INT16_MAX;
	int64_t x468 = -45LL;
	volatile int32_t t109 = -25286774;

    t109 = (x465>((x466/x467)^x468));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x470 = 4U;
	uint16_t x471 = 275U;
	volatile uint8_t x472 = 3U;
	volatile int32_t t110 = -417575126;

    t110 = (x469>((x470/x471)^x472));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x473 = UINT16_MAX;
	volatile uint16_t x474 = UINT16_MAX;
	volatile int8_t x475 = 13;
	int16_t x476 = INT16_MAX;
	int32_t t111 = -1645;

    t111 = (x473>((x474/x475)^x476));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x477 = 24889LLU;
	int32_t x479 = INT32_MIN;
	int32_t x480 = -208496209;
	int32_t t112 = 8;

    t112 = (x477>((x478/x479)^x480));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x481 = -1;
	int64_t x482 = INT64_MIN;
	int16_t x483 = INT16_MIN;
	int64_t x484 = -122943LL;
	int32_t t113 = -105506;

    t113 = (x481>((x482/x483)^x484));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x485 = -1;
	static volatile int16_t x486 = INT16_MIN;
	uint32_t x488 = 9483U;
	volatile int32_t t114 = 6102749;

    t114 = (x485>((x486/x487)^x488));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x489 = INT64_MIN;
	int32_t x490 = 12;
	int16_t x491 = INT16_MAX;
	static int32_t t115 = -13435;

    t115 = (x489>((x490/x491)^x492));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x494 = -3;
	int32_t x496 = -633326;
	static int32_t t116 = 204;

    t116 = (x493>((x494/x495)^x496));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x497 = -1;
	int32_t x498 = INT32_MIN;
	int64_t x499 = -4568421LL;
	int8_t x500 = -4;
	volatile int32_t t117 = -1;

    t117 = (x497>((x498/x499)^x500));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x501 = 3639263U;
	volatile int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MIN;
	static int8_t x504 = -1;
	static int32_t t118 = 13208;

    t118 = (x501>((x502/x503)^x504));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x505 = UINT64_MAX;
	uint8_t x506 = UINT8_MAX;
	int8_t x507 = INT8_MAX;
	static volatile int64_t x508 = INT64_MAX;
	static int32_t t119 = 0;

    t119 = (x505>((x506/x507)^x508));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x509 = INT32_MIN;
	int16_t x510 = INT16_MIN;
	static uint32_t x511 = UINT32_MAX;
	int32_t t120 = -61628;

    t120 = (x509>((x510/x511)^x512));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x514 = INT32_MAX;
	static int32_t x515 = INT32_MIN;
	volatile int32_t t121 = -24;

    t121 = (x513>((x514/x515)^x516));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x517 = 4666U;
	int16_t x518 = 41;
	int16_t x519 = -3;
	volatile int32_t x520 = 0;

    t122 = (x517>((x518/x519)^x520));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x521 = 1U;
	static uint8_t x522 = 12U;
	uint8_t x524 = 50U;
	volatile int32_t t123 = 114138130;

    t123 = (x521>((x522/x523)^x524));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x525 = INT8_MAX;
	volatile int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MIN;
	volatile int32_t t124 = -13221;

    t124 = (x525>((x526/x527)^x528));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x529 = -864001797;
	static int32_t x530 = -2042076;
	int8_t x532 = INT8_MAX;
	int32_t t125 = 39947086;

    t125 = (x529>((x530/x531)^x532));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x533 = 56133641395LL;
	uint32_t x534 = 0U;
	int8_t x535 = -1;
	int32_t x536 = -1;
	int32_t t126 = 15968014;

    t126 = (x533>((x534/x535)^x536));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x537 = INT8_MAX;
	static int32_t x539 = INT32_MIN;
	int8_t x540 = -1;
	volatile int32_t t127 = 319032;

    t127 = (x537>((x538/x539)^x540));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x542 = 396;
	volatile int64_t x543 = INT64_MAX;
	static volatile uint8_t x544 = 40U;
	int32_t t128 = 17228317;

    t128 = (x541>((x542/x543)^x544));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x545 = UINT16_MAX;
	volatile uint32_t x546 = 30230274U;
	int16_t x548 = INT16_MAX;
	static volatile int32_t t129 = -417808376;

    t129 = (x545>((x546/x547)^x548));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x549 = 2470;
	volatile uint8_t x551 = 5U;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t130 = 37;

    t130 = (x549>((x550/x551)^x552));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x553 = 1713949U;
	int32_t x554 = INT32_MAX;
	int8_t x555 = INT8_MIN;
	volatile int32_t t131 = 1964;

    t131 = (x553>((x554/x555)^x556));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x557 = INT64_MIN;
	uint16_t x558 = 241U;
	static volatile uint8_t x559 = 41U;
	volatile int32_t t132 = -522788;

    t132 = (x557>((x558/x559)^x560));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x561 = 3824U;
	int64_t x562 = 113343300739041719LL;
	int8_t x563 = INT8_MIN;
	uint16_t x564 = 10406U;

    t133 = (x561>((x562/x563)^x564));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x565 = INT16_MAX;
	static int32_t x566 = INT32_MIN;
	uint8_t x567 = UINT8_MAX;
	static int32_t t134 = -73;

    t134 = (x565>((x566/x567)^x568));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x569 = INT64_MIN;
	volatile int32_t x571 = 8839;
	int8_t x572 = -1;
	int32_t t135 = 6419876;

    t135 = (x569>((x570/x571)^x572));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x573 = INT16_MAX;
	int64_t x574 = INT64_MAX;
	int32_t x575 = INT32_MAX;
	int8_t x576 = 3;
	int32_t t136 = -45;

    t136 = (x573>((x574/x575)^x576));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x577 = 1870U;
	static int64_t x579 = INT64_MAX;
	uint64_t x580 = 27216LLU;
	int32_t t137 = 114;

    t137 = (x577>((x578/x579)^x580));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x581 = INT32_MAX;
	int32_t x583 = -112;
	int32_t x584 = INT32_MIN;
	int32_t t138 = -16224919;

    t138 = (x581>((x582/x583)^x584));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x585 = INT64_MAX;
	volatile int16_t x586 = -1;
	volatile uint64_t x587 = UINT64_MAX;
	static volatile int16_t x588 = 437;
	int32_t t139 = 505356439;

    t139 = (x585>((x586/x587)^x588));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x589 = -1;
	volatile int8_t x590 = -31;
	static int8_t x591 = -1;
	int8_t x592 = 28;
	int32_t t140 = -260275;

    t140 = (x589>((x590/x591)^x592));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x593 = -64939133098LL;
	volatile int16_t x594 = INT16_MAX;
	volatile uint64_t x595 = 72312336538803LLU;
	volatile int32_t t141 = -38454908;

    t141 = (x593>((x594/x595)^x596));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x597 = UINT64_MAX;
	static int16_t x598 = 10;
	int32_t x599 = INT32_MAX;
	uint16_t x600 = UINT16_MAX;
	int32_t t142 = -1;

    t142 = (x597>((x598/x599)^x600));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x604 = INT8_MIN;

    t143 = (x601>((x602/x603)^x604));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x605 = -1LL;
	uint64_t x606 = 837LLU;
	static int8_t x607 = -1;

    t144 = (x605>((x606/x607)^x608));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x610 = -26208;
	static int16_t x611 = -63;
	int32_t x612 = INT32_MIN;
	int32_t t145 = 7;

    t145 = (x609>((x610/x611)^x612));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x613 = -186626;
	uint16_t x615 = 7620U;
	int64_t x616 = -1LL;
	volatile int32_t t146 = 802694;

    t146 = (x613>((x614/x615)^x616));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x617 = INT32_MIN;
	int64_t x618 = INT64_MAX;
	int32_t x619 = -21219;
	int8_t x620 = 1;
	volatile int32_t t147 = -1;

    t147 = (x617>((x618/x619)^x620));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x621 = 11U;
	int16_t x622 = INT16_MIN;
	static uint32_t x623 = UINT32_MAX;
	volatile int8_t x624 = INT8_MIN;
	volatile int32_t t148 = 203614;

    t148 = (x621>((x622/x623)^x624));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x627 = INT64_MIN;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t149 = -225445906;

    t149 = (x625>((x626/x627)^x628));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x630 = INT8_MIN;
	int64_t x632 = 111246648349LL;
	volatile int32_t t150 = 285;

    t150 = (x629>((x630/x631)^x632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x633 = INT32_MAX;
	uint16_t x634 = 16U;
	static volatile int16_t x635 = INT16_MAX;
	volatile int32_t t151 = -180461;

    t151 = (x633>((x634/x635)^x636));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int64_t x637 = 36855397310LL;
	static uint8_t x638 = 15U;
	static int16_t x639 = INT16_MAX;
	int32_t x640 = -1;
	int32_t t152 = 214086;

    t152 = (x637>((x638/x639)^x640));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x641 = UINT8_MAX;
	volatile int16_t x642 = INT16_MIN;
	int16_t x643 = INT16_MAX;
	volatile uint64_t x644 = UINT64_MAX;
	volatile int32_t t153 = 18385275;

    t153 = (x641>((x642/x643)^x644));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x645 = UINT64_MAX;
	volatile int64_t x646 = 13953994730LL;
	int64_t x647 = INT64_MIN;
	static volatile int32_t t154 = -1455361;

    t154 = (x645>((x646/x647)^x648));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x649 = INT8_MAX;
	uint32_t x650 = 1U;
	volatile uint16_t x651 = 6367U;
	int64_t x652 = INT64_MAX;
	volatile int32_t t155 = -260772;

    t155 = (x649>((x650/x651)^x652));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x654 = INT64_MAX;
	static volatile int32_t x655 = INT32_MAX;
	static int8_t x656 = 1;
	int32_t t156 = 54429020;

    t156 = (x653>((x654/x655)^x656));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	uint64_t x659 = 28641LLU;
	int32_t x660 = INT32_MIN;
	volatile int32_t t157 = 1;

    t157 = (x657>((x658/x659)^x660));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x661 = INT32_MAX;
	int8_t x662 = INT8_MIN;
	int32_t x663 = -2643;
	int16_t x664 = -280;
	int32_t t158 = 130050;

    t158 = (x661>((x662/x663)^x664));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x665 = -1;
	static uint16_t x666 = 38U;
	int8_t x667 = 36;
	uint8_t x668 = 5U;

    t159 = (x665>((x666/x667)^x668));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x671 = 25166318819614LLU;
	static volatile int16_t x672 = INT16_MIN;
	int32_t t160 = 53831;

    t160 = (x669>((x670/x671)^x672));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x673 = 0;
	static volatile int64_t x674 = -455605895LL;
	int64_t x675 = 520327LL;
	uint16_t x676 = 23U;
	static int32_t t161 = -82;

    t161 = (x673>((x674/x675)^x676));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x677 = INT16_MAX;
	static uint32_t x678 = 0U;
	static int8_t x679 = 28;
	int32_t x680 = INT32_MAX;
	volatile int32_t t162 = -306090;

    t162 = (x677>((x678/x679)^x680));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x682 = -1LL;
	uint64_t x683 = 144490411810825045LLU;
	volatile int16_t x684 = -1;
	volatile int32_t t163 = 329;

    t163 = (x681>((x682/x683)^x684));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x686 = INT16_MIN;
	uint16_t x687 = 5U;
	volatile uint16_t x688 = UINT16_MAX;

    t164 = (x685>((x686/x687)^x688));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x694 = 38LL;
	static int8_t x696 = INT8_MAX;

    t165 = (x693>((x694/x695)^x696));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x697 = 2127LLU;
	volatile int64_t x698 = 92577251896LL;
	uint16_t x699 = 8731U;
	int16_t x700 = INT16_MIN;
	static volatile int32_t t166 = 892764;

    t166 = (x697>((x698/x699)^x700));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x701 = INT64_MIN;
	static volatile int32_t x702 = 1317;
	uint64_t x704 = 22718926132199123LLU;

    t167 = (x701>((x702/x703)^x704));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x705 = 802U;
	int16_t x706 = -1;
	int8_t x707 = -15;
	int64_t x708 = -1LL;

    t168 = (x705>((x706/x707)^x708));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x710 = 2;
	volatile int16_t x711 = INT16_MIN;
	int8_t x712 = 2;
	static volatile int32_t t169 = -5;

    t169 = (x709>((x710/x711)^x712));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x713 = UINT16_MAX;
	int32_t x715 = -207196184;
	uint8_t x716 = UINT8_MAX;
	int32_t t170 = 111711;

    t170 = (x713>((x714/x715)^x716));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x717 = INT64_MIN;
	int16_t x718 = INT16_MAX;
	volatile int16_t x719 = 1;
	volatile uint8_t x720 = 2U;
	int32_t t171 = -32555708;

    t171 = (x717>((x718/x719)^x720));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x721 = INT16_MAX;
	int16_t x722 = INT16_MAX;
	static int16_t x723 = INT16_MIN;
	volatile int32_t t172 = -1154;

    t172 = (x721>((x722/x723)^x724));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x725 = UINT32_MAX;
	int16_t x726 = -1;
	int64_t x727 = -1LL;
	int8_t x728 = INT8_MIN;

    t173 = (x725>((x726/x727)^x728));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x729 = INT32_MAX;
	int8_t x730 = 0;
	volatile int64_t x732 = -881132LL;
	int32_t t174 = 2;

    t174 = (x729>((x730/x731)^x732));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x733 = 59U;
	uint64_t x734 = 74LLU;
	static int32_t x735 = INT32_MIN;
	int64_t x736 = -440118732571639139LL;
	static int32_t t175 = 232945094;

    t175 = (x733>((x734/x735)^x736));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x737 = INT8_MIN;
	volatile int8_t x739 = -1;
	uint32_t x740 = UINT32_MAX;
	static int32_t t176 = -30;

    t176 = (x737>((x738/x739)^x740));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x741 = -1;
	int8_t x742 = INT8_MIN;
	int8_t x743 = INT8_MIN;
	static int16_t x744 = 1;
	int32_t t177 = 1;

    t177 = (x741>((x742/x743)^x744));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x745 = INT8_MAX;
	uint64_t x746 = 13486976505LLU;
	uint8_t x747 = UINT8_MAX;
	static int16_t x748 = -988;
	volatile int32_t t178 = -657;

    t178 = (x745>((x746/x747)^x748));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x749 = 711168604895153546LLU;
	volatile int32_t x751 = INT32_MIN;
	static int16_t x752 = INT16_MAX;
	volatile int32_t t179 = 3;

    t179 = (x749>((x750/x751)^x752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x753 = INT16_MIN;
	static int16_t x755 = 31;
	volatile int8_t x756 = -1;
	int32_t t180 = 0;

    t180 = (x753>((x754/x755)^x756));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x757 = INT16_MIN;
	int64_t x758 = INT64_MIN;
	int32_t x759 = INT32_MIN;
	int32_t t181 = 1984;

    t181 = (x757>((x758/x759)^x760));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x761 = 12779;
	int8_t x762 = -6;
	static int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MAX;
	volatile int32_t t182 = 0;

    t182 = (x761>((x762/x763)^x764));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x765 = -1;
	int8_t x766 = -1;
	volatile uint32_t x767 = UINT32_MAX;
	int32_t t183 = 6;

    t183 = (x765>((x766/x767)^x768));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x769 = 61U;
	uint8_t x772 = 0U;

    t184 = (x769>((x770/x771)^x772));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x773 = 27;
	int32_t x774 = 288970;
	int64_t x775 = 547554151361876LL;

    t185 = (x773>((x774/x775)^x776));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x777 = 3U;
	int32_t x778 = INT32_MIN;
	int64_t x779 = -88923243980419661LL;
	int64_t x780 = -6214190LL;
	int32_t t186 = 320036469;

    t186 = (x777>((x778/x779)^x780));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x781 = INT8_MAX;
	int32_t x783 = -1;
	int8_t x784 = -1;
	volatile int32_t t187 = 35;

    t187 = (x781>((x782/x783)^x784));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x785 = -13;
	volatile int64_t x786 = 4500572367964185LL;
	int16_t x787 = INT16_MIN;
	int16_t x788 = -10;
	int32_t t188 = 0;

    t188 = (x785>((x786/x787)^x788));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x789 = 27;
	int64_t x790 = -1LL;
	uint8_t x791 = UINT8_MAX;
	static int8_t x792 = INT8_MIN;

    t189 = (x789>((x790/x791)^x792));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x793 = -1LL;
	int64_t x794 = INT64_MAX;
	int8_t x795 = -1;
	int32_t x796 = INT32_MIN;
	int32_t t190 = 2;

    t190 = (x793>((x794/x795)^x796));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x797 = -1;
	int64_t x798 = INT64_MAX;
	uint64_t x799 = UINT64_MAX;
	int16_t x800 = -82;
	static volatile int32_t t191 = -3086;

    t191 = (x797>((x798/x799)^x800));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x801 = INT8_MIN;
	int8_t x802 = INT8_MIN;
	static uint64_t x804 = 259707480793LLU;

    t192 = (x801>((x802/x803)^x804));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x805 = 2U;
	uint64_t x806 = UINT64_MAX;
	static volatile int32_t x807 = -155;
	int8_t x808 = -2;
	int32_t t193 = -2;

    t193 = (x805>((x806/x807)^x808));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x810 = UINT32_MAX;
	int64_t x811 = INT64_MAX;
	static int8_t x812 = INT8_MIN;
	volatile int32_t t194 = 0;

    t194 = (x809>((x810/x811)^x812));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x813 = INT32_MIN;
	int8_t x814 = INT8_MAX;
	int8_t x815 = 4;
	uint64_t x816 = 2162346742217574LLU;
	static volatile int32_t t195 = -6;

    t195 = (x813>((x814/x815)^x816));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x817 = 11U;
	uint64_t x818 = UINT64_MAX;
	static uint32_t x819 = 95163248U;
	int64_t x820 = 434921269LL;
	int32_t t196 = 386228;

    t196 = (x817>((x818/x819)^x820));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x821 = -6258211;
	volatile uint8_t x822 = 14U;
	int16_t x824 = 68;

    t197 = (x821>((x822/x823)^x824));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x825 = INT16_MIN;
	volatile int8_t x827 = 31;
	volatile int32_t t198 = -11451381;

    t198 = (x825>((x826/x827)^x828));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x829 = 0;
	int8_t x830 = -1;
	int64_t x832 = -78653442731947LL;
	int32_t t199 = -4;

    t199 = (x829>((x830/x831)^x832));

    if (t199 != 1) { NG(); } else { ; }
	
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

