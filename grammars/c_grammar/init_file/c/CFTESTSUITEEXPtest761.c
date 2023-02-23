
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

uint32_t x1 = 1U;
static uint8_t x4 = 10U;
volatile uint16_t x7 = 22U;
int16_t x19 = 1473;
uint16_t x22 = UINT16_MAX;
volatile uint32_t x24 = 345935U;
int16_t x27 = INT16_MAX;
volatile int64_t t5 = -253663967047LL;
static volatile int16_t x30 = INT16_MIN;
static volatile uint64_t x41 = UINT64_MAX;
int32_t x42 = INT32_MIN;
static int8_t x55 = INT8_MIN;
volatile int16_t x57 = -1;
int8_t x64 = 7;
static uint8_t x68 = 24U;
int64_t x80 = INT64_MIN;
int16_t x81 = 1140;
uint32_t x82 = UINT32_MAX;
volatile uint8_t x86 = UINT8_MAX;
int8_t x87 = INT8_MAX;
uint32_t t20 = 289U;
volatile int8_t x100 = -1;
int64_t t23 = 83487497533LL;
static volatile int64_t x112 = -4997199955LL;
static int64_t t25 = -6441149172245936LL;
uint32_t x113 = 1031782296U;
uint64_t x123 = 2668156703LLU;
uint64_t t28 = 1LLU;
int64_t x127 = 3296LL;
uint8_t x128 = UINT8_MAX;
int64_t x132 = -54265137780800LL;
int64_t x137 = INT64_MIN;
int16_t x146 = INT16_MIN;
static int64_t t34 = 29LL;
int16_t x149 = INT16_MIN;
int32_t x151 = 9880802;
uint64_t t35 = 202181774LLU;
volatile uint64_t x154 = 336533LLU;
int8_t x163 = INT8_MIN;
uint8_t x164 = 1U;
static int64_t t38 = -471284LL;
int64_t x174 = INT64_MIN;
volatile int64_t t40 = 393LL;
int16_t x183 = INT16_MAX;
volatile int16_t x186 = INT16_MAX;
uint32_t x193 = 71876247U;
static volatile int64_t t46 = -5LL;
int64_t t47 = 7297647079LL;
uint8_t x209 = 0U;
int16_t x211 = INT16_MIN;
volatile uint8_t x216 = 78U;
int64_t t50 = 30787536LL;
static uint64_t x218 = UINT64_MAX;
uint32_t x220 = 18499U;
int8_t x222 = INT8_MIN;
int32_t x229 = 893933707;
static int64_t x230 = INT64_MAX;
int16_t x237 = INT16_MIN;
volatile int64_t t56 = 978786886046LL;
int64_t t58 = 44345710LL;
volatile int64_t t59 = 3664438675LL;
volatile int32_t x253 = -522645029;
volatile int64_t t60 = -40873221002448LL;
volatile int8_t x257 = INT8_MIN;
int16_t x265 = 0;
int64_t x269 = INT64_MIN;
int16_t x271 = 37;
uint16_t x274 = 439U;
int32_t x275 = INT32_MIN;
int32_t x276 = -447934921;
uint32_t x277 = UINT32_MAX;
int32_t t67 = 27923;
static volatile int16_t x285 = 4;
int16_t x287 = INT16_MIN;
int16_t x292 = 2;
int16_t x295 = INT16_MAX;
uint8_t x297 = 10U;
static int8_t x298 = 49;
uint8_t x299 = 6U;
int16_t x301 = INT16_MIN;
static int16_t x302 = -1;
int32_t x308 = INT32_MAX;
static volatile int64_t t73 = -980LL;
uint16_t x314 = 316U;
uint32_t x319 = UINT32_MAX;
volatile int16_t x327 = INT16_MAX;
static int16_t x330 = INT16_MIN;
static volatile int64_t x331 = INT64_MIN;
int32_t x332 = -130778638;
uint32_t x339 = 15814U;
uint32_t x342 = UINT32_MAX;
int8_t x357 = INT8_MAX;
static int8_t x365 = INT8_MIN;
int32_t x369 = INT32_MIN;
uint64_t x371 = 14188263777029LLU;
uint64_t t89 = 748LLU;
uint8_t x377 = 23U;
int8_t x378 = INT8_MAX;
static volatile uint32_t x379 = 59U;
int8_t x383 = INT8_MAX;
static uint32_t t92 = 59U;
int64_t t95 = -677563495LL;
static int64_t x398 = 7638393723LL;
int8_t x399 = INT8_MIN;
static volatile uint32_t x403 = 3335456U;
volatile uint32_t t97 = 82004U;
int16_t x415 = -1;
static uint8_t x416 = 24U;
volatile int32_t t100 = 2;
static int64_t x422 = -1076611104539LL;
volatile int64_t t101 = -31LL;
int16_t x425 = INT16_MAX;
int16_t x426 = 6780;
int32_t t102 = 0;
int32_t x429 = -47922;
volatile uint8_t x438 = UINT8_MAX;
volatile int8_t x440 = -19;
volatile uint64_t t106 = 3690307LLU;
volatile uint64_t x450 = 309LLU;
int8_t x451 = INT8_MIN;
static int64_t x474 = INT64_MAX;
uint8_t x483 = 1U;
volatile int64_t t117 = -13941839737217LL;
int32_t x494 = -1;
volatile int8_t x499 = 6;
static int8_t x505 = INT8_MAX;
uint16_t x507 = 9U;
int32_t t120 = -13378;
int8_t x511 = -5;
volatile uint32_t x512 = 44U;
int8_t x515 = 24;
int32_t x527 = INT32_MIN;
volatile uint64_t t125 = 1064390177655695LLU;
uint32_t x529 = 278600U;
volatile int16_t x540 = -16;
static int32_t x546 = INT32_MAX;
volatile int32_t t129 = 0;
int8_t x556 = -2;
static int16_t x564 = -1016;
int32_t x571 = -343385;
uint16_t x572 = UINT16_MAX;
volatile int8_t x580 = INT8_MIN;
static int64_t x584 = INT64_MIN;
uint64_t x587 = 14794886822LLU;
int16_t x588 = INT16_MIN;
int16_t x590 = -1;
int32_t x592 = INT32_MIN;
uint32_t x599 = 263813U;
static volatile int64_t t143 = -1LL;
int8_t x605 = INT8_MAX;
volatile int32_t t144 = 32579468;
uint8_t x615 = 54U;
volatile int64_t x620 = INT64_MAX;
int16_t x621 = -1;
volatile uint8_t x622 = 1U;
uint64_t x625 = UINT64_MAX;
volatile uint64_t t148 = 28687336LLU;
uint16_t x631 = 23963U;
volatile uint16_t x635 = UINT16_MAX;
uint64_t t150 = 143828LLU;
uint16_t x638 = UINT16_MAX;
uint32_t t151 = 946699U;
int32_t x645 = INT32_MAX;
int16_t x651 = 4962;
int32_t t154 = -535583;
int64_t x658 = INT64_MAX;
static volatile uint32_t x659 = UINT32_MAX;
static uint8_t x666 = UINT8_MAX;
int64_t x669 = INT64_MIN;
static int32_t x687 = INT32_MIN;
static int64_t x689 = -1LL;
volatile uint64_t t161 = 68763410834323LLU;
int8_t x707 = 17;
int64_t x710 = 26162960208346995LL;
uint64_t x719 = 12358187277LLU;
volatile uint64_t t168 = 46007219949037LLU;
int32_t x726 = -1;
int16_t x730 = INT16_MIN;
static int8_t x731 = 21;
static uint16_t x734 = UINT16_MAX;
volatile uint64_t t174 = 106714515329LLU;
int8_t x762 = -1;
static int32_t t178 = 388;
volatile int64_t t179 = -135LL;
uint8_t x770 = 1U;
static volatile int64_t t180 = 1517LL;
uint64_t x777 = 255860LLU;
int32_t x780 = INT32_MIN;
volatile int64_t t182 = -1858716988429923431LL;
static int32_t x787 = INT32_MIN;
volatile uint64_t t185 = 1066645622795LLU;
int64_t x803 = INT64_MIN;
int8_t x805 = 2;
volatile int16_t x806 = 0;
static int64_t x807 = 69538LL;
volatile int64_t t190 = 249459200695234009LL;
int64_t x821 = -1LL;
int64_t x822 = 5LL;
int16_t x823 = INT16_MIN;
uint8_t x824 = 4U;
int64_t t192 = 220868596594578703LL;
int64_t x840 = INT64_MIN;
uint64_t t195 = 469583161050LLU;
int32_t x842 = -1;
static volatile uint32_t x845 = UINT32_MAX;
int64_t x848 = 1869120909LL;
static volatile int64_t t197 = -187225722369254LL;
uint32_t x852 = UINT32_MAX;


void f0(void) {
    	uint8_t x2 = UINT8_MAX;
	int32_t x3 = -829046800;
	uint32_t t0 = 100U;

    t0 = (x1%((x2/x3)|x4));

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 3;
	int16_t x6 = -49;
	uint16_t x8 = UINT16_MAX;
	static int32_t t1 = 1;

    t1 = (x5%((x6/x7)|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -42;
	int64_t x10 = 1526LL;
	static int8_t x11 = -1;
	uint8_t x12 = 4U;
	int64_t t2 = -4190917818704404114LL;

    t2 = (x9%((x10/x11)|x12));

    if (t2 != -42LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	int32_t x20 = -39648;
	volatile int32_t t3 = -2024563;

    t3 = (x17%((x18/x19)|x20));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 27021773217163LLU;
	uint8_t x23 = UINT8_MAX;
	static uint64_t t4 = 7837775236039LLU;

    t4 = (x21%((x22/x23)|x24));

    if (t4 != 251623LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -1;
	int8_t x26 = 1;
	int64_t x28 = INT64_MAX;

    t5 = (x25%((x26/x27)|x28));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MAX;
	int16_t x31 = 3;
	volatile int32_t x32 = INT32_MIN;
	volatile int64_t t6 = -29944703435668LL;

    t6 = (x29%((x30/x31)|x32));

    if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	static int64_t x34 = INT64_MIN;
	int8_t x35 = -39;
	int16_t x36 = INT16_MIN;
	int64_t t7 = 5308LL;

    t7 = (x33%((x34/x35)|x36));

    if (t7 != -5728LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	int16_t x39 = -1;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t8 = 191698899;

    t8 = (x37%((x38/x39)|x40));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x43 = 56544U;
	volatile int16_t x44 = INT16_MIN;
	volatile uint64_t t9 = 13219832175368LLU;

    t9 = (x41%((x42/x43)|x44));

    if (t9 != 759443363LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 1332187096U;
	int64_t x46 = 1256892284LL;
	static uint32_t x47 = 11U;
	int32_t x48 = INT32_MIN;
	int64_t t10 = 2664606LL;

    t10 = (x45%((x46/x47)|x48));

    if (t10 != 1332187096LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -1;
	volatile int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	uint32_t x52 = UINT32_MAX;
	static volatile int64_t t11 = -42LL;

    t11 = (x49%((x50/x51)|x52));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x53 = INT32_MIN;
	int32_t x54 = 104;
	int8_t x56 = INT8_MAX;
	int32_t t12 = -1;

    t12 = (x53%((x54/x55)|x56));

    if (t12 != -8) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x58 = -1;
	int32_t x59 = INT32_MAX;
	int32_t x60 = -13051;
	volatile int32_t t13 = 19695468;

    t13 = (x57%((x58/x59)|x60));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = 16103LL;
	volatile int64_t x62 = INT64_MAX;
	volatile int32_t x63 = -1;
	static int64_t t14 = -7317LL;

    t14 = (x61%((x62/x63)|x64));

    if (t14 != 16103LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = INT32_MAX;
	static int16_t x66 = INT16_MAX;
	int32_t x67 = -1;
	static int32_t t15 = 19;

    t15 = (x65%((x66/x67)|x68));

    if (t15 != 1249) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	static int8_t x70 = INT8_MIN;
	uint32_t x71 = 44U;
	int16_t x72 = INT16_MIN;
	volatile uint32_t t16 = 3467124U;

    t16 = (x69%((x70/x71)|x72));

    if (t16 != 2854U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x73 = INT64_MAX;
	static int64_t x74 = -1LL;
	static int64_t x75 = INT64_MAX;
	static int32_t x76 = -1;
	int64_t t17 = -31707073451444390LL;

    t17 = (x73%((x74/x75)|x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = 3135LL;
	volatile int16_t x78 = INT16_MAX;
	static int32_t x79 = INT32_MIN;
	volatile int64_t t18 = 4360922831LL;

    t18 = (x77%((x78/x79)|x80));

    if (t18 != 3135LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x83 = -1;
	int64_t x84 = -97LL;
	int64_t t19 = 1LL;

    t19 = (x81%((x82/x83)|x84));

    if (t19 != 73LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MIN;
	uint32_t x88 = UINT32_MAX;

    t20 = (x85%((x86/x87)|x88));

    if (t20 != 4294967168U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -91899LL;
	int8_t x90 = INT8_MIN;
	int64_t x91 = -1LL;
	volatile int64_t x92 = INT64_MAX;
	static volatile int64_t t21 = 5LL;

    t21 = (x89%((x90/x91)|x92));

    if (t21 != -91899LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = -1;
	int8_t x94 = INT8_MIN;
	volatile int64_t x95 = 11575LL;
	int64_t x96 = -12268LL;
	volatile int64_t t22 = 15345914069549744LL;

    t22 = (x93%((x94/x95)|x96));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint8_t x97 = 1U;
	int32_t x98 = INT32_MIN;
	int64_t x99 = -1LL;

    t23 = (x97%((x98/x99)|x100));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = 858194754U;
	int64_t x106 = 56241LL;
	uint64_t x107 = 11182495559308LLU;
	static int32_t x108 = -1;
	volatile uint64_t t24 = 88422371990267LLU;

    t24 = (x105%((x106/x107)|x108));

    if (t24 != 858194754LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MAX;
	int32_t x110 = 3;
	uint32_t x111 = 37811U;

    t25 = (x109%((x110/x111)|x112));

    if (t25 != 32767LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x114 = 14U;
	uint8_t x115 = UINT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile uint32_t t26 = 4U;

    t26 = (x113%((x114/x115)|x116));

    if (t26 != 1031782296U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MAX;
	int32_t x119 = -24;
	static int8_t x120 = -1;
	uint64_t t27 = 2650368807LLU;

    t27 = (x117%((x118/x119)|x120));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x121 = 31U;
	static uint64_t x122 = 27061LLU;
	int32_t x124 = INT32_MIN;

    t28 = (x121%((x122/x123)|x124));

    if (t28 != 31LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = -1;
	volatile int8_t x126 = INT8_MAX;
	int64_t t29 = -1084LL;

    t29 = (x125%((x126/x127)|x128));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MIN;
	static volatile uint64_t x131 = 91558722285LLU;
	uint64_t t30 = 21877095LLU;

    t30 = (x129%((x130/x131)|x132));

    if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	volatile int8_t x134 = INT8_MIN;
	int64_t x135 = -5819063815807LL;
	int16_t x136 = INT16_MIN;
	volatile int64_t t31 = -35177207327290981LL;

    t31 = (x133%((x134/x135)|x136));

    if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x138 = INT32_MAX;
	static uint64_t x139 = 1761796739LLU;
	uint8_t x140 = 17U;
	static volatile uint64_t t32 = 1557813LLU;

    t32 = (x137%((x138/x139)|x140));

    if (t32 != 9LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x141 = 550U;
	uint32_t x142 = 376245U;
	static uint8_t x143 = 12U;
	uint32_t x144 = UINT32_MAX;
	volatile uint32_t t33 = 14U;

    t33 = (x141%((x142/x143)|x144));

    if (t33 != 550U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x145 = -1LL;
	int32_t x147 = INT32_MAX;
	static int8_t x148 = INT8_MIN;

    t34 = (x145%((x146/x147)|x148));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x150 = 10518772670LLU;
	int32_t x152 = INT32_MIN;

    t35 = (x149%((x150/x151)|x152));

    if (t35 != 2147449816LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x153 = 106U;
	int8_t x155 = INT8_MAX;
	volatile uint8_t x156 = 3U;
	static volatile uint64_t t36 = 3125086605LLU;

    t36 = (x153%((x154/x155)|x156));

    if (t36 != 106LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x157 = 31;
	int32_t x158 = INT32_MIN;
	int16_t x159 = 3348;
	uint64_t x160 = 1142385708811292419LLU;
	volatile uint64_t t37 = 121776651LLU;

    t37 = (x157%((x158/x159)|x160));

    if (t37 != 31LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x161 = 5U;
	int64_t x162 = INT64_MIN;

    t38 = (x161%((x162/x163)|x164));

    if (t38 != 5LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x165 = -3;
	uint8_t x166 = 1U;
	int8_t x167 = INT8_MIN;
	uint64_t x168 = UINT64_MAX;
	uint64_t t39 = 2LLU;

    t39 = (x165%((x166/x167)|x168));

    if (t39 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = -1;
	static uint32_t x175 = UINT32_MAX;
	int64_t x176 = -1LL;

    t40 = (x173%((x174/x175)|x176));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x177 = INT8_MIN;
	volatile int64_t x178 = INT64_MAX;
	volatile uint16_t x179 = 2596U;
	uint16_t x180 = 199U;
	volatile int64_t t41 = -374339LL;

    t41 = (x177%((x178/x179)|x180));

    if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x181 = UINT64_MAX;
	int64_t x182 = -1LL;
	uint8_t x184 = 35U;
	uint64_t t42 = 967421480169LLU;

    t42 = (x181%((x182/x183)|x184));

    if (t42 != 15LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = INT16_MIN;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = 4U;
	int32_t t43 = -19;

    t43 = (x185%((x186/x187)|x188));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x189 = 33841679156712LL;
	static int32_t x190 = INT32_MIN;
	volatile uint16_t x191 = 53U;
	uint32_t x192 = UINT32_MAX;
	static volatile int64_t t44 = -972020620006658181LL;

    t44 = (x189%((x190/x191)|x192));

    if (t44 != 1631839407LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x194 = INT64_MIN;
	volatile int16_t x195 = 14178;
	int64_t x196 = INT64_MAX;
	int64_t t45 = 277LL;

    t45 = (x193%((x194/x195)|x196));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x197 = UINT16_MAX;
	uint8_t x198 = 10U;
	int32_t x199 = -1;
	int64_t x200 = INT64_MIN;

    t46 = (x197%((x198/x199)|x200));

    if (t46 != 5LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x201 = 59;
	int64_t x202 = INT64_MAX;
	uint16_t x203 = 1U;
	int32_t x204 = 1561573;

    t47 = (x201%((x202/x203)|x204));

    if (t47 != 59LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x205 = UINT8_MAX;
	uint64_t x206 = 1545274LLU;
	int64_t x207 = -281927036287407797LL;
	volatile int8_t x208 = INT8_MIN;
	uint64_t t48 = 144145LLU;

    t48 = (x205%((x206/x207)|x208));

    if (t48 != 255LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x210 = 0;
	int8_t x212 = INT8_MIN;
	volatile int32_t t49 = 5308755;

    t49 = (x209%((x210/x211)|x212));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x213 = -1;
	volatile int32_t x214 = INT32_MAX;
	int64_t x215 = INT64_MIN;

    t50 = (x213%((x214/x215)|x216));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x217 = 6;
	volatile uint32_t x219 = 859U;
	volatile uint64_t t51 = 95949208000LLU;

    t51 = (x217%((x218/x219)|x220));

    if (t51 != 6LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x221 = 0U;
	uint64_t x223 = 42LLU;
	int8_t x224 = INT8_MAX;
	volatile uint64_t t52 = 11482724376LLU;

    t52 = (x221%((x222/x223)|x224));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x225 = 1U;
	uint8_t x226 = 33U;
	uint32_t x227 = 159U;
	volatile uint32_t x228 = UINT32_MAX;
	uint32_t t53 = 487648073U;

    t53 = (x225%((x226/x227)|x228));

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x231 = 2U;
	uint32_t x232 = UINT32_MAX;
	volatile int64_t t54 = 21692627545LL;

    t54 = (x229%((x230/x231)|x232));

    if (t54 != 893933707LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = 701LL;
	uint8_t x234 = 28U;
	static uint32_t x235 = UINT32_MAX;
	static int32_t x236 = -1;
	static volatile int64_t t55 = 174396825914LL;

    t55 = (x233%((x234/x235)|x236));

    if (t55 != 701LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x238 = INT64_MIN;
	int64_t x239 = -102343763290051LL;
	uint32_t x240 = 1209U;

    t56 = (x237%((x238/x239)|x240));

    if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MAX;
	int8_t x243 = INT8_MAX;
	uint8_t x244 = 26U;
	int32_t t57 = 22133;

    t57 = (x241%((x242/x243)|x244));

    if (t57 != -20) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = INT64_MIN;
	static volatile uint32_t x246 = 16U;
	uint8_t x247 = 2U;
	volatile int16_t x248 = INT16_MIN;

    t58 = (x245%((x246/x247)|x248));

    if (t58 != -536608800LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x249 = INT64_MAX;
	int8_t x250 = -16;
	int32_t x251 = INT32_MIN;
	int16_t x252 = -3455;

    t59 = (x249%((x250/x251)|x252));

    if (t59 != 2067LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x254 = 739709582U;
	int16_t x255 = -1;
	volatile int64_t x256 = INT64_MAX;

    t60 = (x253%((x254/x255)|x256));

    if (t60 != -522645029LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x258 = 0U;
	volatile int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MAX;
	int64_t t61 = -5392LL;

    t61 = (x257%((x258/x259)|x260));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = 170;
	int32_t x262 = INT32_MIN;
	int8_t x263 = -3;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t62 = 88U;

    t62 = (x261%((x262/x263)|x264));

    if (t62 != 170U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x266 = INT64_MIN;
	volatile uint32_t x267 = 2139U;
	static uint32_t x268 = 23U;
	volatile int64_t t63 = -265672523051992885LL;

    t63 = (x265%((x266/x267)|x268));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x270 = INT64_MIN;
	int64_t x272 = INT64_MIN;
	int64_t t64 = -39982442LL;

    t64 = (x269%((x270/x271)|x272));

    if (t64 != -6LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = -1;
	int32_t t65 = -190371841;

    t65 = (x273%((x274/x275)|x276));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x278 = -204307032523LL;
	static int8_t x279 = INT8_MAX;
	static int64_t x280 = INT64_MAX;
	static volatile int64_t t66 = -30020015LL;

    t66 = (x277%((x278/x279)|x280));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x281 = UINT8_MAX;
	int16_t x282 = 6;
	volatile int32_t x283 = 261537691;
	int16_t x284 = -13;

    t67 = (x281%((x282/x283)|x284));

    if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x286 = 30U;
	static uint16_t x288 = 203U;
	volatile uint32_t t68 = 7U;

    t68 = (x285%((x286/x287)|x288));

    if (t68 != 4U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x289 = INT16_MIN;
	static volatile uint8_t x290 = UINT8_MAX;
	int8_t x291 = -1;
	static int32_t t69 = 1042122;

    t69 = (x289%((x290/x291)|x292));

    if (t69 != -131) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x293 = 52U;
	int32_t x294 = INT32_MAX;
	static int32_t x296 = INT32_MIN;
	static int32_t t70 = -14;

    t70 = (x293%((x294/x295)|x296));

    if (t70 != 52) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x300 = 48U;
	int32_t t71 = 174;

    t71 = (x297%((x298/x299)|x300));

    if (t71 != 10) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x303 = -51;
	int16_t x304 = 902;
	static int32_t t72 = -1064;

    t72 = (x301%((x302/x303)|x304));

    if (t72 != -296) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = INT64_MAX;
	static int16_t x306 = INT16_MIN;
	int64_t x307 = -18181464243LL;

    t73 = (x305%((x306/x307)|x308));

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x309 = INT64_MIN;
	uint8_t x310 = 83U;
	int32_t x311 = INT32_MIN;
	static int32_t x312 = INT32_MAX;
	int64_t t74 = -134932604230541LL;

    t74 = (x309%((x310/x311)|x312));

    if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = INT32_MIN;
	int16_t x315 = 15;
	volatile int8_t x316 = -1;
	static volatile int32_t t75 = -8353693;

    t75 = (x313%((x314/x315)|x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x317 = -1100277;
	static int8_t x318 = 14;
	int16_t x320 = INT16_MIN;
	static uint32_t t76 = 6382U;

    t76 = (x317%((x318/x319)|x320));

    if (t76 != 4293867019U) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x321 = 5U;
	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = 419066984U;
	volatile uint32_t t77 = 658U;

    t77 = (x321%((x322/x323)|x324));

    if (t77 != 5U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x325 = UINT8_MAX;
	volatile int64_t x326 = -524071LL;
	int8_t x328 = -50;
	int64_t t78 = -16223012880357LL;

    t78 = (x325%((x326/x327)|x328));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x329 = 115U;
	int64_t t79 = 15252LL;

    t79 = (x329%((x330/x331)|x332));

    if (t79 != 115LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = INT32_MIN;
	static uint64_t x334 = UINT64_MAX;
	static int16_t x335 = -1;
	static int64_t x336 = INT64_MIN;
	static uint64_t t80 = 304LLU;

    t80 = (x333%((x334/x335)|x336));

    if (t80 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x337 = 10U;
	int16_t x338 = INT16_MIN;
	int32_t x340 = INT32_MAX;
	static uint32_t t81 = 6685423U;

    t81 = (x337%((x338/x339)|x340));

    if (t81 != 10U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = -501;
	static int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MIN;
	uint32_t t82 = 2U;

    t82 = (x341%((x342/x343)|x344));

    if (t82 != 32266U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x345 = 53;
	uint32_t x346 = UINT32_MAX;
	static int32_t x347 = -1;
	uint8_t x348 = 0U;
	static volatile uint32_t t83 = 119793U;

    t83 = (x345%((x346/x347)|x348));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x349 = 0;
	volatile uint16_t x350 = UINT16_MAX;
	volatile int64_t x351 = -6545597144397LL;
	uint32_t x352 = 373U;
	volatile int64_t t84 = 402LL;

    t84 = (x349%((x350/x351)|x352));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x353 = -7669;
	int16_t x354 = INT16_MIN;
	uint16_t x355 = 432U;
	int16_t x356 = -1;
	volatile int32_t t85 = 6858;

    t85 = (x353%((x354/x355)|x356));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x358 = INT8_MIN;
	volatile int32_t x359 = INT32_MIN;
	int16_t x360 = -1;
	static volatile int32_t t86 = 1;

    t86 = (x357%((x358/x359)|x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x361 = UINT32_MAX;
	uint64_t x362 = 13224LLU;
	static volatile int8_t x363 = -1;
	static int64_t x364 = -592142672013448LL;
	uint64_t t87 = 1528524915418LLU;

    t87 = (x361%((x362/x363)|x364));

    if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x366 = -1;
	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	volatile int32_t t88 = 0;

    t88 = (x365%((x366/x367)|x368));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x370 = -1LL;
	uint64_t x372 = UINT64_MAX;

    t89 = (x369%((x370/x371)|x372));

    if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = -1;
	int16_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	static volatile int32_t x376 = INT32_MIN;
	static uint64_t t90 = 4137538456771LLU;

    t90 = (x373%((x374/x375)|x376));

    if (t90 != 2147483646LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x380 = INT64_MIN;
	int64_t t91 = -45LL;

    t91 = (x377%((x378/x379)|x380));

    if (t91 != 23LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x381 = 1;
	uint32_t x382 = UINT32_MAX;
	int8_t x384 = INT8_MAX;

    t92 = (x381%((x382/x383)|x384));

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = INT32_MIN;
	int8_t x386 = 60;
	uint32_t x387 = 15017U;
	int64_t x388 = -9LL;
	int64_t t93 = 31847332786834LL;

    t93 = (x385%((x386/x387)|x388));

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x389 = -10363499LL;
	uint32_t x390 = 12U;
	static int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;
	static int64_t t94 = -7449093651870LL;

    t94 = (x389%((x390/x391)|x392));

    if (t94 != -10363499LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x393 = 127U;
	volatile int64_t x394 = 717679LL;
	volatile int32_t x395 = -1;
	uint32_t x396 = UINT32_MAX;

    t95 = (x393%((x394/x395)|x396));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x397 = 2601387180373LL;
	volatile uint8_t x400 = 4U;
	static int64_t t96 = -219072LL;

    t96 = (x397%((x398/x399)|x400));

    if (t96 != 36934341LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x401 = INT8_MIN;
	int16_t x402 = 7248;
	int16_t x404 = -1;

    t97 = (x401%((x402/x403)|x404));

    if (t97 != 4294967168U) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MAX;
	int16_t x407 = INT16_MIN;
	static int64_t x408 = INT64_MAX;
	volatile int64_t t98 = 273596784727LL;

    t98 = (x405%((x406/x407)|x408));

    if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x409 = -1;
	uint64_t x410 = 136580068202LLU;
	volatile uint32_t x411 = 1276604U;
	static int8_t x412 = -1;
	volatile uint64_t t99 = 202LLU;

    t99 = (x409%((x410/x411)|x412));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x413 = -1;
	int8_t x414 = 13;

    t100 = (x413%((x414/x415)|x416));

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x421 = 604U;
	volatile int16_t x423 = INT16_MIN;
	static int64_t x424 = INT64_MAX;

    t101 = (x421%((x422/x423)|x424));

    if (t101 != 604LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x427 = 5;
	uint8_t x428 = 0U;

    t102 = (x425%((x426/x427)|x428));

    if (t102 != 223) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x430 = 1437566262796802LLU;
	volatile int16_t x431 = INT16_MAX;
	int64_t x432 = -196LL;
	volatile uint64_t t103 = 450164244328LLU;

    t103 = (x429%((x430/x431)|x432));

    if (t103 != 18446744073709503694LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x433 = INT32_MIN;
	volatile uint16_t x434 = UINT16_MAX;
	int8_t x435 = -29;
	int32_t x436 = INT32_MAX;
	volatile int32_t t104 = 248614354;

    t104 = (x433%((x434/x435)|x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = 96916;
	int16_t x439 = INT16_MIN;
	volatile int32_t t105 = -2240300;

    t105 = (x437%((x438/x439)|x440));

    if (t105 != 16) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x441 = 110224946LLU;
	int16_t x442 = INT16_MIN;
	int32_t x443 = -95205085;
	int16_t x444 = 6761;

    t106 = (x441%((x442/x443)|x444));

    if (t106 != 363LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x445 = 14;
	int8_t x446 = INT8_MIN;
	uint32_t x447 = 10U;
	static int8_t x448 = INT8_MIN;
	uint32_t t107 = 122165U;

    t107 = (x445%((x446/x447)|x448));

    if (t107 != 14U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x449 = UINT8_MAX;
	uint64_t x452 = 670329740350LLU;
	uint64_t t108 = 1069LLU;

    t108 = (x449%((x450/x451)|x452));

    if (t108 != 255LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x453 = 109U;
	uint8_t x454 = 3U;
	int8_t x455 = INT8_MIN;
	uint64_t x456 = 4313823765060053LLU;
	uint64_t t109 = 17135740556117LLU;

    t109 = (x453%((x454/x455)|x456));

    if (t109 != 109LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x461 = 35904;
	uint64_t x462 = UINT64_MAX;
	static int64_t x463 = 20LL;
	int64_t x464 = -1LL;
	uint64_t t110 = 1LLU;

    t110 = (x461%((x462/x463)|x464));

    if (t110 != 35904LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x465 = 1U;
	static int8_t x466 = INT8_MIN;
	int32_t x467 = INT32_MAX;
	static uint16_t x468 = 202U;
	int32_t t111 = -22918;

    t111 = (x465%((x466/x467)|x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = INT64_MAX;
	uint16_t x470 = 0U;
	static int8_t x471 = -1;
	static int8_t x472 = INT8_MIN;
	volatile int64_t t112 = 276683184556017836LL;

    t112 = (x469%((x470/x471)|x472));

    if (t112 != 127LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x473 = 44LLU;
	int8_t x475 = -1;
	volatile int16_t x476 = -1;
	volatile uint64_t t113 = 24360963379538LLU;

    t113 = (x473%((x474/x475)|x476));

    if (t113 != 44LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x477 = UINT64_MAX;
	volatile int32_t x478 = INT32_MAX;
	volatile uint64_t x479 = 98472405567LLU;
	uint32_t x480 = 5686U;
	volatile uint64_t t114 = 680797740772LLU;

    t114 = (x477%((x478/x479)|x480));

    if (t114 != 345LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x481 = -14;
	static uint8_t x482 = 1U;
	int16_t x484 = 18;
	static int32_t t115 = -1;

    t115 = (x481%((x482/x483)|x484));

    if (t115 != -14) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x485 = INT8_MAX;
	volatile uint32_t x486 = 1936854U;
	int32_t x487 = -2807;
	volatile uint64_t x488 = UINT64_MAX;
	static uint64_t t116 = 39LLU;

    t116 = (x485%((x486/x487)|x488));

    if (t116 != 127LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x489 = -234790878LL;
	int64_t x490 = 2462207975469334LL;
	static volatile int8_t x491 = -1;
	int16_t x492 = INT16_MIN;

    t117 = (x489%((x490/x491)|x492));

    if (t117 != -7734LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x493 = INT8_MIN;
	int8_t x495 = -1;
	int64_t x496 = -3908341078694LL;
	volatile int64_t t118 = 33344LL;

    t118 = (x493%((x494/x495)|x496));

    if (t118 != -128LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x497 = 801181539665448LLU;
	uint32_t x498 = UINT32_MAX;
	uint16_t x500 = 3637U;
	volatile uint64_t t119 = 7061947923LLU;

    t119 = (x497%((x498/x499)|x500));

    if (t119 != 34725676LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x506 = -5;
	uint8_t x508 = 85U;

    t120 = (x505%((x506/x507)|x508));

    if (t120 != 42) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x509 = INT32_MIN;
	int16_t x510 = 4;
	volatile uint32_t t121 = 193U;

    t121 = (x509%((x510/x511)|x512));

    if (t121 != 24U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x513 = UINT16_MAX;
	static int8_t x514 = INT8_MIN;
	int16_t x516 = -1;
	volatile int32_t t122 = -1969;

    t122 = (x513%((x514/x515)|x516));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x517 = -172;
	int32_t x518 = -1;
	int8_t x519 = -1;
	volatile int64_t x520 = -1LL;
	static volatile int64_t t123 = 6956420577LL;

    t123 = (x517%((x518/x519)|x520));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x521 = 49829LLU;
	int32_t x522 = -99;
	static int64_t x523 = INT64_MIN;
	int32_t x524 = INT32_MAX;
	static volatile uint64_t t124 = 958272910716LLU;

    t124 = (x521%((x522/x523)|x524));

    if (t124 != 49829LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x525 = 15LLU;
	volatile int32_t x526 = -692159;
	static volatile uint16_t x528 = 1U;

    t125 = (x525%((x526/x527)|x528));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x530 = INT64_MAX;
	uint8_t x531 = UINT8_MAX;
	int8_t x532 = 1;
	int64_t t126 = -380127230956LL;

    t126 = (x529%((x530/x531)|x532));

    if (t126 != 278600LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x533 = -28;
	int64_t x534 = 1LL;
	int32_t x535 = INT32_MIN;
	volatile uint8_t x536 = UINT8_MAX;
	static volatile int64_t t127 = -29097553150979613LL;

    t127 = (x533%((x534/x535)|x536));

    if (t127 != -28LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x537 = 1;
	static int8_t x538 = -5;
	static int16_t x539 = INT16_MIN;
	int32_t t128 = -161;

    t128 = (x537%((x538/x539)|x540));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x545 = 2825;
	uint8_t x547 = 19U;
	int8_t x548 = -1;

    t129 = (x545%((x546/x547)|x548));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x549 = 37U;
	static volatile uint16_t x550 = UINT16_MAX;
	static int8_t x551 = 1;
	int32_t x552 = INT32_MAX;
	int32_t t130 = -353;

    t130 = (x549%((x550/x551)|x552));

    if (t130 != 37) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x553 = 245LLU;
	volatile int64_t x554 = 1LL;
	int32_t x555 = INT32_MIN;
	volatile uint64_t t131 = 168593837629971300LLU;

    t131 = (x553%((x554/x555)|x556));

    if (t131 != 245LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x557 = 9U;
	volatile int16_t x558 = -11;
	int8_t x559 = -1;
	uint32_t x560 = 220040U;
	uint32_t t132 = 5635U;

    t132 = (x557%((x558/x559)|x560));

    if (t132 != 9U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x561 = INT16_MIN;
	int32_t x562 = 14;
	volatile int32_t x563 = 12340265;
	volatile int32_t t133 = 7472877;

    t133 = (x561%((x562/x563)|x564));

    if (t133 != -256) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x565 = 201;
	uint32_t x566 = 1U;
	uint32_t x567 = UINT32_MAX;
	volatile uint16_t x568 = UINT16_MAX;
	uint32_t t134 = 38573U;

    t134 = (x565%((x566/x567)|x568));

    if (t134 != 201U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x569 = INT8_MIN;
	static int16_t x570 = INT16_MAX;
	volatile int32_t t135 = -384215;

    t135 = (x569%((x570/x571)|x572));

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x573 = 130525560126746LL;
	int32_t x574 = INT32_MAX;
	int32_t x575 = INT32_MAX;
	volatile int8_t x576 = INT8_MAX;
	int64_t t136 = -1LL;

    t136 = (x573%((x574/x575)|x576));

    if (t136 != 80LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x577 = -22616978950059765LL;
	int8_t x578 = INT8_MAX;
	volatile uint8_t x579 = UINT8_MAX;
	static int64_t t137 = 10LL;

    t137 = (x577%((x578/x579)|x580));

    if (t137 != -117LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x581 = -1;
	static uint32_t x582 = 31U;
	uint16_t x583 = 29U;
	int64_t t138 = -15114843585374897LL;

    t138 = (x581%((x582/x583)|x584));

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x585 = 0;
	uint8_t x586 = 2U;
	volatile uint64_t t139 = 2386554507151940996LLU;

    t139 = (x585%((x586/x587)|x588));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x589 = -1173;
	static uint32_t x591 = UINT32_MAX;
	volatile uint32_t t140 = 395488U;

    t140 = (x589%((x590/x591)|x592));

    if (t140 != 2147482474U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x593 = INT8_MIN;
	uint32_t x594 = UINT32_MAX;
	int8_t x595 = 13;
	int64_t x596 = -1LL;
	static int64_t t141 = 59979LL;

    t141 = (x593%((x594/x595)|x596));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x597 = -3598502;
	uint64_t x598 = 2355999342LLU;
	uint32_t x600 = 50071U;
	uint64_t t142 = 3098505LLU;

    t142 = (x597%((x598/x599)|x600));

    if (t142 != 23825LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x601 = INT64_MIN;
	int8_t x602 = INT8_MIN;
	int32_t x603 = INT32_MIN;
	int8_t x604 = INT8_MAX;

    t143 = (x601%((x602/x603)|x604));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x606 = INT16_MIN;
	static volatile int16_t x607 = INT16_MIN;
	int8_t x608 = INT8_MAX;

    t144 = (x605%((x606/x607)|x608));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x613 = INT32_MIN;
	volatile int32_t x614 = 0;
	int16_t x616 = -1;
	int32_t t145 = 13;

    t145 = (x613%((x614/x615)|x616));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x617 = -1;
	volatile int64_t x618 = -1LL;
	uint32_t x619 = 1482613U;
	volatile int64_t t146 = 3036230710LL;

    t146 = (x617%((x618/x619)|x620));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x623 = INT8_MIN;
	volatile int32_t x624 = -1;
	static int32_t t147 = -18662903;

    t147 = (x621%((x622/x623)|x624));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x626 = UINT32_MAX;
	volatile uint16_t x627 = 1487U;
	uint64_t x628 = 221296091113LLU;

    t148 = (x625%((x626/x627)|x628));

    if (t148 != 179987582040LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x629 = INT8_MIN;
	volatile int64_t x630 = -101032834118819655LL;
	static uint64_t x632 = 1678592762252876LLU;
	uint64_t t149 = 1LLU;

    t149 = (x629%((x630/x631)|x632));

    if (t149 != 1460963033393LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x633 = INT32_MAX;
	volatile uint32_t x634 = 0U;
	uint64_t x636 = 975335779242LLU;

    t150 = (x633%((x634/x635)|x636));

    if (t150 != 2147483647LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x637 = INT16_MIN;
	static volatile uint32_t x639 = 22851U;
	uint32_t x640 = 41821570U;

    t151 = (x637%((x638/x639)|x640));

    if (t151 != 29134388U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x646 = UINT32_MAX;
	volatile int8_t x647 = INT8_MIN;
	int32_t x648 = -265;
	static uint32_t t152 = 344U;

    t152 = (x645%((x646/x647)|x648));

    if (t152 != 2147483647U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x649 = 181269LL;
	static int64_t x650 = INT64_MIN;
	int16_t x652 = INT16_MAX;
	static volatile int64_t t153 = 44670452105071178LL;

    t153 = (x649%((x650/x651)|x652));

    if (t153 != 181269LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x653 = -1;
	int32_t x654 = INT32_MIN;
	int16_t x655 = INT16_MAX;
	int32_t x656 = INT32_MIN;

    t154 = (x653%((x654/x655)|x656));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x657 = -1;
	int16_t x660 = INT16_MIN;
	int64_t t155 = 106LL;

    t155 = (x657%((x658/x659)|x660));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x661 = -1;
	int16_t x662 = INT16_MIN;
	int64_t x663 = INT64_MAX;
	uint32_t x664 = UINT32_MAX;
	int64_t t156 = -10712791LL;

    t156 = (x661%((x662/x663)|x664));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x665 = -1;
	uint8_t x667 = UINT8_MAX;
	volatile uint64_t x668 = 3176861096834855545LLU;
	static uint64_t t157 = 9054395004026LLU;

    t157 = (x665%((x666/x667)|x668));

    if (t157 != 2562438589535273890LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x670 = 4U;
	static int16_t x671 = -1;
	int16_t x672 = INT16_MAX;
	int64_t t158 = -366078237065LL;

    t158 = (x669%((x670/x671)|x672));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x677 = INT64_MIN;
	static uint64_t x678 = 53LLU;
	volatile int16_t x679 = INT16_MIN;
	int32_t x680 = 8659495;
	uint64_t t159 = 113LLU;

    t159 = (x677%((x678/x679)|x680));

    if (t159 != 8202423LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x685 = INT32_MIN;
	static uint64_t x686 = 157LLU;
	static uint64_t x688 = 35702849329398350LLU;
	volatile uint64_t t160 = 33501LLU;

    t160 = (x685%((x686/x687)|x688));

    if (t160 != 24073817592519368LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x690 = -491;
	static int64_t x691 = -1LL;
	uint64_t x692 = 159601204784951136LLU;

    t161 = (x689%((x690/x691)|x692));

    if (t161 != 92605523440154990LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x693 = INT16_MIN;
	volatile int16_t x694 = INT16_MIN;
	int32_t x695 = -1;
	volatile uint16_t x696 = UINT16_MAX;
	int32_t t162 = 1753643;

    t162 = (x693%((x694/x695)|x696));

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x697 = 164150253U;
	int64_t x698 = INT64_MAX;
	uint16_t x699 = UINT16_MAX;
	int32_t x700 = -1;
	int64_t t163 = 2041674505291217060LL;

    t163 = (x697%((x698/x699)|x700));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x701 = INT32_MIN;
	volatile int64_t x702 = INT64_MAX;
	uint8_t x703 = 16U;
	int16_t x704 = INT16_MIN;
	volatile int64_t t164 = 2665773456180LL;

    t164 = (x701%((x702/x703)|x704));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x705 = -541;
	static uint8_t x706 = UINT8_MAX;
	int64_t x708 = INT64_MIN;
	int64_t t165 = -94872283899006600LL;

    t165 = (x705%((x706/x707)|x708));

    if (t165 != -541LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x709 = 1819LLU;
	uint32_t x711 = 18903U;
	int16_t x712 = INT16_MIN;
	volatile uint64_t t166 = 743LLU;

    t166 = (x709%((x710/x711)|x712));

    if (t166 != 1819LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x713 = -1;
	int64_t x714 = 0LL;
	uint8_t x715 = UINT8_MAX;
	static int64_t x716 = INT64_MIN;
	int64_t t167 = -186153299404238014LL;

    t167 = (x713%((x714/x715)|x716));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x717 = INT64_MAX;
	int8_t x718 = INT8_MAX;
	uint64_t x720 = 12200LLU;

    t168 = (x717%((x718/x719)|x720));

    if (t168 != 7LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x721 = -1;
	int64_t x722 = INT64_MAX;
	int64_t x723 = -1LL;
	volatile int16_t x724 = 22;
	volatile int64_t t169 = -12LL;

    t169 = (x721%((x722/x723)|x724));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x725 = UINT32_MAX;
	uint32_t x727 = UINT32_MAX;
	int32_t x728 = INT32_MIN;
	uint32_t t170 = 16181153U;

    t170 = (x725%((x726/x727)|x728));

    if (t170 != 2147483646U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x729 = INT8_MIN;
	static int64_t x732 = INT64_MIN;
	static volatile int64_t t171 = -168536154379LL;

    t171 = (x729%((x730/x731)|x732));

    if (t171 != -128LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x733 = INT16_MIN;
	int16_t x735 = -1;
	int8_t x736 = -1;
	volatile int32_t t172 = -1;

    t172 = (x733%((x734/x735)|x736));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x737 = INT32_MIN;
	volatile int8_t x738 = INT8_MIN;
	static int64_t x739 = -1LL;
	static int16_t x740 = INT16_MIN;
	int64_t t173 = -507LL;

    t173 = (x737%((x738/x739)|x740));

    if (t173 != -128LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x741 = 7911118LLU;
	int8_t x742 = INT8_MIN;
	volatile int64_t x743 = INT64_MIN;
	volatile int64_t x744 = -20914912475LL;

    t174 = (x741%((x742/x743)|x744));

    if (t174 != 7911118LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x745 = 992012268918589LL;
	static int32_t x746 = INT32_MIN;
	int8_t x747 = 2;
	int32_t x748 = INT32_MAX;
	volatile int64_t t175 = -2927091753042LL;

    t175 = (x745%((x746/x747)|x748));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x749 = UINT8_MAX;
	int8_t x750 = -1;
	static int16_t x751 = -1;
	static int16_t x752 = INT16_MIN;
	static int32_t t176 = -23871;

    t176 = (x749%((x750/x751)|x752));

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x753 = 6154;
	int8_t x754 = INT8_MIN;
	int8_t x755 = -27;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t177 = -27;

    t177 = (x753%((x754/x755)|x756));

    if (t177 != 6154) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x761 = -114468;
	volatile int32_t x763 = INT32_MIN;
	int32_t x764 = INT32_MIN;

    t178 = (x761%((x762/x763)|x764));

    if (t178 != -114468) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x765 = 334151LL;
	int8_t x766 = -1;
	volatile int32_t x767 = INT32_MAX;
	int32_t x768 = INT32_MAX;

    t179 = (x765%((x766/x767)|x768));

    if (t179 != 334151LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x769 = -1LL;
	int8_t x771 = 1;
	static int64_t x772 = INT64_MIN;

    t180 = (x769%((x770/x771)|x772));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x778 = -1;
	int16_t x779 = INT16_MAX;
	static uint64_t t181 = 67954893329718LLU;

    t181 = (x777%((x778/x779)|x780));

    if (t181 != 255860LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x781 = UINT16_MAX;
	uint32_t x782 = 105745031U;
	static int32_t x783 = INT32_MIN;
	int64_t x784 = -37375404224564LL;

    t182 = (x781%((x782/x783)|x784));

    if (t182 != 65535LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x785 = 1U;
	int8_t x786 = -1;
	uint32_t x788 = 1U;
	uint32_t t183 = 18158U;

    t183 = (x785%((x786/x787)|x788));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x789 = -2LL;
	uint64_t x790 = UINT64_MAX;
	uint32_t x791 = 11095403U;
	volatile int64_t x792 = -1LL;
	volatile uint64_t t184 = 50348632418031445LLU;

    t184 = (x789%((x790/x791)|x792));

    if (t184 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x793 = INT8_MIN;
	uint64_t x794 = UINT64_MAX;
	int8_t x795 = INT8_MIN;
	uint16_t x796 = 5U;

    t185 = (x793%((x794/x795)|x796));

    if (t185 != 3LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x797 = -770097;
	static int32_t x798 = -1;
	int64_t x799 = INT64_MAX;
	int16_t x800 = 9;
	int64_t t186 = -10001LL;

    t186 = (x797%((x798/x799)|x800));

    if (t186 != -3LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x801 = 0;
	volatile int32_t x802 = -2256095;
	uint16_t x804 = 2793U;
	int64_t t187 = -4770630LL;

    t187 = (x801%((x802/x803)|x804));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x808 = 37;
	int64_t t188 = 1840744482LL;

    t188 = (x805%((x806/x807)|x808));

    if (t188 != 2LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x809 = -1;
	uint32_t x810 = 104519U;
	int64_t x811 = 6147926LL;
	uint8_t x812 = 48U;
	volatile int64_t t189 = 1074198635LL;

    t189 = (x809%((x810/x811)|x812));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x813 = INT64_MAX;
	int8_t x814 = INT8_MAX;
	static volatile int32_t x815 = INT32_MIN;
	int16_t x816 = INT16_MAX;

    t190 = (x813%((x814/x815)|x816));

    if (t190 != 7LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x817 = INT8_MIN;
	int16_t x818 = 2;
	int64_t x819 = 121003304819LL;
	volatile uint32_t x820 = 301U;
	int64_t t191 = 810749378354791LL;

    t191 = (x817%((x818/x819)|x820));

    if (t191 != -128LL) { NG(); } else { ; }
	
}

void f192(void) {
    

    t192 = (x821%((x822/x823)|x824));

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x825 = INT16_MAX;
	int64_t x826 = INT64_MIN;
	static int64_t x827 = INT64_MAX;
	static int8_t x828 = -1;
	volatile int64_t t193 = -4216603LL;

    t193 = (x825%((x826/x827)|x828));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x833 = 15414U;
	static int32_t x834 = -2035913;
	int64_t x835 = -1LL;
	int32_t x836 = INT32_MAX;
	int64_t t194 = -7035968925583LL;

    t194 = (x833%((x834/x835)|x836));

    if (t194 != 15414LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x837 = INT16_MIN;
	static uint64_t x838 = UINT64_MAX;
	volatile int16_t x839 = -1;

    t195 = (x837%((x838/x839)|x840));

    if (t195 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x841 = 1164;
	static volatile int32_t x843 = INT32_MIN;
	int16_t x844 = INT16_MAX;
	static int32_t t196 = 24;

    t196 = (x841%((x842/x843)|x844));

    if (t196 != 1164) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x846 = INT32_MAX;
	static int32_t x847 = -1;

    t197 = (x845%((x846/x847)|x848));

    if (t197 != 119526210LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x849 = INT64_MIN;
	volatile int16_t x850 = 0;
	static int16_t x851 = -1;
	static int64_t t198 = -66722602247LL;

    t198 = (x849%((x850/x851)|x852));

    if (t198 != -2147483648LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x853 = UINT8_MAX;
	int64_t x854 = 2229825365431644LL;
	uint32_t x855 = 1065135458U;
	volatile int16_t x856 = INT16_MIN;
	static int64_t t199 = -121061195476LL;

    t199 = (x853%((x854/x855)|x856));

    if (t199 != 255LL) { NG(); } else { ; }
	
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

