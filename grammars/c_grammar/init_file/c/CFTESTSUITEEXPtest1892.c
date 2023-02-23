
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

static int32_t x4 = INT32_MIN;
int64_t x8 = INT64_MIN;
uint8_t x10 = UINT8_MAX;
uint32_t x12 = 973011347U;
volatile int32_t t2 = 29;
uint64_t x15 = 1LLU;
int32_t x19 = -1;
static int64_t t4 = -51714998484545255LL;
volatile int8_t x21 = -1;
uint32_t t7 = UINT32_MAX;
static int16_t x35 = INT16_MIN;
static int16_t x38 = 1;
volatile uint64_t x45 = 3601050LLU;
int64_t x49 = INT64_MIN;
int64_t t12 = INT64_MIN;
volatile int64_t t13 = -3482LL;
uint64_t x71 = 661LLU;
int32_t t17 = 485;
volatile int16_t x81 = -1;
static uint64_t x82 = 96LLU;
uint16_t x85 = UINT16_MAX;
int16_t x86 = INT16_MIN;
volatile int32_t t20 = -1;
static int32_t x89 = -1;
uint16_t x90 = 1427U;
int64_t x91 = INT64_MIN;
int8_t x102 = -1;
volatile uint8_t x107 = 6U;
volatile uint8_t x111 = 14U;
volatile uint16_t x115 = 2U;
int8_t x128 = INT8_MIN;
volatile uint64_t t30 = 91LLU;
int16_t x129 = -1;
volatile int64_t x134 = INT64_MIN;
static int16_t x137 = -1;
int32_t x142 = 5375;
int16_t x144 = INT16_MAX;
volatile int16_t x146 = -773;
volatile int8_t x153 = 42;
int64_t x154 = INT64_MIN;
static uint64_t t38 = 120414725905705LLU;
volatile int64_t x164 = -1LL;
int32_t x165 = INT32_MIN;
int64_t x167 = -1LL;
volatile int16_t x169 = INT16_MIN;
int64_t x172 = INT64_MAX;
int16_t x174 = -13510;
static int8_t x184 = INT8_MIN;
int8_t x186 = -1;
uint16_t x187 = 11036U;
int16_t x202 = -1;
volatile int32_t t48 = 5178;
uint8_t x206 = UINT8_MAX;
volatile int32_t t50 = 56;
int32_t t51 = 7357491;
uint16_t x217 = UINT16_MAX;
static uint8_t x222 = 1U;
int16_t x223 = -1;
int32_t x224 = -747175861;
uint64_t x227 = 100592967454737352LLU;
volatile int32_t t54 = 251466894;
int64_t x229 = 95908LL;
volatile uint64_t x239 = UINT64_MAX;
int16_t x248 = -1;
volatile uint32_t t59 = UINT32_MAX;
volatile int32_t t60 = -114566;
int16_t x253 = 5683;
static uint64_t x254 = UINT64_MAX;
int32_t t61 = 1;
uint8_t x263 = 22U;
int16_t x266 = -1;
volatile uint8_t x267 = 47U;
int16_t x268 = INT16_MAX;
static int32_t t64 = 27;
int32_t x280 = INT32_MIN;
volatile uint32_t t69 = UINT32_MAX;
uint64_t x304 = 93LLU;
int32_t t73 = 743;
static int8_t x313 = INT8_MIN;
int16_t x314 = -1;
int16_t x316 = -1;
int16_t x317 = INT16_MIN;
int64_t x329 = INT64_MAX;
uint16_t x331 = 0U;
static uint16_t x333 = 1336U;
int32_t x336 = INT32_MIN;
int16_t x339 = -1;
static int64_t x345 = INT64_MAX;
uint8_t x353 = 0U;
int16_t x354 = INT16_MAX;
int32_t t83 = 91299163;
uint64_t x357 = 50750LLU;
static uint32_t x363 = 443U;
int32_t x372 = INT32_MAX;
int32_t x389 = 1;
int32_t t92 = 16;
static volatile int16_t x395 = INT16_MAX;
int32_t x397 = -1;
volatile int16_t x404 = INT16_MAX;
static int32_t t95 = 381730235;
uint8_t x409 = 93U;
int8_t x410 = 13;
int64_t x413 = INT64_MIN;
static int16_t x421 = INT16_MIN;
int32_t t101 = -13217;
uint32_t x429 = 377U;
int32_t t104 = 1904396;
static volatile uint64_t x442 = UINT64_MAX;
volatile uint64_t x466 = 214LLU;
int16_t x473 = 180;
int8_t x488 = INT8_MIN;
int16_t x494 = INT16_MIN;
volatile int16_t x497 = INT16_MIN;
int32_t t119 = 14901;
volatile uint32_t t120 = 2078861275U;
int64_t x513 = INT64_MAX;
int16_t x519 = -3;
uint16_t x520 = UINT16_MAX;
uint64_t x525 = 847078146133LLU;
uint8_t x527 = UINT8_MAX;
static volatile int32_t t126 = 858;
int64_t x539 = -154637837997LL;
volatile int64_t t128 = 392054613023365LL;
int32_t x547 = INT32_MIN;
static volatile int64_t x549 = -1LL;
int16_t x550 = INT16_MIN;
int8_t x555 = -1;
uint64_t x563 = UINT64_MAX;
int16_t x566 = 30;
int16_t x571 = -1;
static int32_t t134 = -32;
int32_t x577 = 11573;
static int16_t x581 = -1;
volatile int16_t x590 = 1;
volatile int64_t t139 = -17152444938427393LL;
int16_t x593 = -46;
int32_t x598 = INT32_MIN;
static uint16_t x601 = UINT16_MAX;
static int32_t t143 = -126;
static int8_t x610 = -1;
volatile int64_t x617 = INT64_MAX;
static volatile int8_t x627 = INT8_MIN;
volatile uint64_t t148 = 57894617463LLU;
int64_t x630 = INT64_MIN;
int32_t t150 = 5;
static int32_t x637 = 3763587;
int16_t x638 = INT16_MIN;
volatile int32_t t151 = 90655;
int16_t x641 = -1;
static volatile uint8_t x643 = 3U;
int32_t x656 = -12;
uint64_t x663 = UINT64_MAX;
int32_t x664 = INT32_MIN;
int64_t x666 = INT64_MIN;
int8_t x667 = -5;
static int64_t x672 = -1LL;
int32_t t159 = 118004;
volatile int16_t x675 = 8912;
int8_t x678 = -1;
int32_t x684 = -2;
uint8_t x689 = 1U;
int16_t x691 = INT16_MAX;
uint64_t x696 = UINT64_MAX;
volatile int32_t t166 = -12344;
static volatile int32_t t169 = 632526781;
static int16_t x726 = INT16_MIN;
int32_t t172 = -715;
int32_t x729 = INT32_MIN;
volatile int32_t t173 = INT32_MIN;
volatile uint8_t x735 = 7U;
int8_t x738 = INT8_MIN;
int16_t x739 = INT16_MIN;
volatile int32_t x740 = INT32_MIN;
static volatile int32_t t175 = -559;
volatile int32_t x745 = -1;
uint8_t x747 = 21U;
volatile int8_t x752 = -1;
volatile int32_t t178 = INT32_MIN;
static int8_t x756 = INT8_MIN;
volatile int32_t x758 = INT32_MAX;
static int32_t x759 = INT32_MIN;
static int64_t x760 = -391709LL;
volatile int32_t t180 = -9;
int8_t x761 = -1;
static volatile int32_t x772 = -1;
int64_t t183 = -92225937722548241LL;
volatile int16_t x773 = -1;
volatile int32_t t184 = -159925386;
static volatile uint64_t x794 = UINT64_MAX;
uint8_t x804 = 21U;
volatile int8_t x810 = INT8_MIN;
static uint8_t x816 = UINT8_MAX;
uint16_t x817 = 1U;
uint16_t x819 = 22176U;
int64_t x828 = INT64_MIN;
static int32_t x834 = INT32_MAX;
volatile int32_t x838 = -1376;
int16_t x839 = INT16_MIN;


void f0(void) {
    	int16_t x1 = -3;
	static int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MAX;
	volatile int32_t t0 = 2527;

    t0 = (x1-((x2<=x3)<=x4));

    if (t0 != -3) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -32856786;
	int32_t x6 = 0;
	int32_t x7 = INT32_MIN;
	int32_t t1 = -3;

    t1 = (x5-((x6<=x7)<=x8));

    if (t1 != -32856786) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	static int64_t x11 = 31850053646972LL;

    t2 = (x9-((x10<=x11)<=x12));

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	int64_t x14 = -1LL;
	static int32_t x16 = 1864;
	volatile int32_t t3 = 14307340;

    t3 = (x13-((x14<=x15)<=x16));

    if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 47LL;
	volatile int16_t x18 = INT16_MIN;
	static uint64_t x20 = 2314531676908191786LLU;

    t4 = (x17-((x18<=x19)<=x20));

    if (t4 != 46LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -7;
	volatile int16_t x23 = -153;
	static uint8_t x24 = 100U;
	volatile int32_t t5 = -193053185;

    t5 = (x21-((x22<=x23)<=x24));

    if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = INT32_MIN;
	static int32_t x28 = -679;
	volatile int32_t t6 = -493582810;

    t6 = (x25-((x26<=x27)<=x28));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	int64_t x32 = -1LL;

    t7 = (x29-((x30<=x31)<=x32));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int32_t x34 = INT32_MAX;
	volatile int64_t x36 = -1LL;
	volatile int32_t t8 = -573;

    t8 = (x33-((x34<=x35)<=x36));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -9;
	int8_t x39 = 1;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 169766;

    t9 = (x37-((x38<=x39)<=x40));

    if (t9 != -9) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = 228U;
	uint32_t x42 = 81U;
	int64_t x43 = 573744262756LL;
	int64_t x44 = INT64_MIN;
	uint32_t t10 = 113407472U;

    t10 = (x41-((x42<=x43)<=x44));

    if (t10 != 228U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MIN;
	static int64_t x47 = INT64_MAX;
	int8_t x48 = INT8_MIN;
	uint64_t t11 = 523622LLU;

    t11 = (x45-((x46<=x47)<=x48));

    if (t11 != 3601050LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x50 = 25241U;
	volatile int32_t x51 = -212732;
	int8_t x52 = -1;

    t12 = (x49-((x50<=x51)<=x52));

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = -1LL;
	uint32_t x58 = 31698U;
	int32_t x59 = INT32_MIN;
	int32_t x60 = 532546;

    t13 = (x57-((x58<=x59)<=x60));

    if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	int32_t x62 = INT32_MIN;
	uint32_t x63 = 991091899U;
	volatile int8_t x64 = -47;
	volatile int32_t t14 = -1868;

    t14 = (x61-((x62<=x63)<=x64));

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = UINT64_MAX;
	static int64_t x66 = INT64_MIN;
	int32_t x67 = -1;
	int8_t x68 = -1;
	volatile uint64_t t15 = UINT64_MAX;

    t15 = (x65-((x66<=x67)<=x68));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -126464430606433LL;
	uint8_t x70 = 48U;
	uint32_t x72 = UINT32_MAX;
	volatile int64_t t16 = -7393LL;

    t16 = (x69-((x70<=x71)<=x72));

    if (t16 != -126464430606434LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	int64_t x74 = INT64_MIN;
	uint8_t x75 = 6U;
	int8_t x76 = -12;

    t17 = (x73-((x74<=x75)<=x76));

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MAX;
	static uint64_t x78 = 3327LLU;
	int32_t x79 = 117;
	int32_t x80 = INT32_MIN;
	int64_t t18 = INT64_MAX;

    t18 = (x77-((x78<=x79)<=x80));

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x83 = 223853905U;
	volatile uint32_t x84 = 797871U;
	volatile int32_t t19 = 41;

    t19 = (x81-((x82<=x83)<=x84));

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x87 = UINT32_MAX;
	int8_t x88 = INT8_MAX;

    t20 = (x85-((x86<=x87)<=x88));

    if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x92 = INT32_MAX;
	int32_t t21 = -472;

    t21 = (x89-((x90<=x91)<=x92));

    if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = -1LL;
	int32_t x94 = INT32_MAX;
	volatile uint32_t x95 = 422083442U;
	static uint8_t x96 = 11U;
	volatile int64_t t22 = 2701627227LL;

    t22 = (x93-((x94<=x95)<=x96));

    if (t22 != -2LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 3355093U;
	int32_t x98 = 23;
	int64_t x99 = -6405692998418LL;
	int32_t x100 = INT32_MIN;
	uint32_t t23 = 550048U;

    t23 = (x97-((x98<=x99)<=x100));

    if (t23 != 3355093U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x101 = 5;
	int8_t x103 = 0;
	int8_t x104 = INT8_MAX;
	static volatile int32_t t24 = -83814087;

    t24 = (x101-((x102<=x103)<=x104));

    if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x105 = -1;
	uint8_t x106 = 2U;
	uint16_t x108 = 207U;
	int32_t t25 = 11;

    t25 = (x105-((x106<=x107)<=x108));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MIN;
	int16_t x110 = -266;
	static int8_t x112 = -1;
	int32_t t26 = INT32_MIN;

    t26 = (x109-((x110<=x111)<=x112));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x113 = 3U;
	int64_t x114 = -28885285396534LL;
	int32_t x116 = INT32_MIN;
	volatile uint32_t t27 = 31095638U;

    t27 = (x113-((x114<=x115)<=x116));

    if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -1;
	static uint8_t x118 = 102U;
	uint64_t x119 = 2484866832LLU;
	static int32_t x120 = INT32_MIN;
	int32_t t28 = 4678;

    t28 = (x117-((x118<=x119)<=x120));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = -1;
	volatile int16_t x122 = -1;
	uint32_t x123 = 159270U;
	int64_t x124 = INT64_MIN;
	int32_t t29 = 834;

    t29 = (x121-((x122<=x123)<=x124));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 3353919763327LLU;
	int16_t x126 = 63;
	volatile int8_t x127 = INT8_MIN;

    t30 = (x125-((x126<=x127)<=x128));

    if (t30 != 3353919763327LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x130 = 28885U;
	int32_t x131 = -1;
	volatile int16_t x132 = INT16_MIN;
	volatile int32_t t31 = 0;

    t31 = (x129-((x130<=x131)<=x132));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MIN;
	int8_t x135 = -26;
	uint32_t x136 = 0U;
	int32_t t32 = 0;

    t32 = (x133-((x134<=x135)<=x136));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x138 = -1;
	int8_t x139 = INT8_MAX;
	volatile int8_t x140 = INT8_MAX;
	volatile int32_t t33 = -37;

    t33 = (x137-((x138<=x139)<=x140));

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 1U;
	int64_t x143 = INT64_MIN;
	int32_t t34 = 2;

    t34 = (x141-((x142<=x143)<=x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x145 = UINT8_MAX;
	volatile int16_t x147 = INT16_MIN;
	int32_t x148 = 3;
	int32_t t35 = -19537;

    t35 = (x145-((x146<=x147)<=x148));

    if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x149 = -1;
	int64_t x150 = -1LL;
	int64_t x151 = -298LL;
	uint32_t x152 = 77936332U;
	int32_t t36 = 67;

    t36 = (x149-((x150<=x151)<=x152));

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x155 = 7;
	int8_t x156 = -1;
	int32_t t37 = -1;

    t37 = (x153-((x154<=x155)<=x156));

    if (t37 != 42) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = 33670946151LLU;
	volatile int16_t x158 = INT16_MIN;
	int32_t x159 = INT32_MIN;
	static int8_t x160 = INT8_MIN;

    t38 = (x157-((x158<=x159)<=x160));

    if (t38 != 33670946151LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x161 = INT16_MAX;
	volatile int8_t x162 = INT8_MIN;
	volatile int64_t x163 = INT64_MIN;
	static int32_t t39 = -44823;

    t39 = (x161-((x162<=x163)<=x164));

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x166 = INT16_MIN;
	int8_t x168 = 0;
	volatile int32_t t40 = INT32_MIN;

    t40 = (x165-((x166<=x167)<=x168));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x170 = 1881;
	int16_t x171 = INT16_MIN;
	int32_t t41 = 1054799882;

    t41 = (x169-((x170<=x171)<=x172));

    if (t41 != -32769) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x173 = 3332U;
	int8_t x175 = INT8_MAX;
	int8_t x176 = 4;
	static volatile uint32_t t42 = 15856U;

    t42 = (x173-((x174<=x175)<=x176));

    if (t42 != 3331U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x177 = INT16_MAX;
	int32_t x178 = INT32_MIN;
	uint8_t x179 = 15U;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t43 = -2;

    t43 = (x177-((x178<=x179)<=x180));

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x181 = 110U;
	volatile int16_t x182 = INT16_MIN;
	int8_t x183 = -20;
	volatile uint32_t t44 = 1838U;

    t44 = (x181-((x182<=x183)<=x184));

    if (t44 != 110U) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint16_t x185 = UINT16_MAX;
	int32_t x188 = INT32_MIN;
	volatile int32_t t45 = 58;

    t45 = (x185-((x186<=x187)<=x188));

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = 0;
	int8_t x194 = -1;
	int8_t x195 = -1;
	int64_t x196 = INT64_MAX;
	int32_t t46 = 76032497;

    t46 = (x193-((x194<=x195)<=x196));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = -44;
	static int64_t x198 = INT64_MAX;
	int64_t x199 = INT64_MAX;
	int16_t x200 = 0;
	volatile int32_t t47 = 617373;

    t47 = (x197-((x198<=x199)<=x200));

    if (t47 != -44) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = -32;
	static uint16_t x203 = 147U;
	uint16_t x204 = 1U;

    t48 = (x201-((x202<=x203)<=x204));

    if (t48 != -33) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = -1391648LL;
	static uint32_t x207 = 106795U;
	uint8_t x208 = 15U;
	static int64_t t49 = 248462LL;

    t49 = (x205-((x206<=x207)<=x208));

    if (t49 != -1391649LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x209 = UINT16_MAX;
	int32_t x210 = INT32_MAX;
	int32_t x211 = INT32_MIN;
	uint16_t x212 = UINT16_MAX;

    t50 = (x209-((x210<=x211)<=x212));

    if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = 116061252;
	volatile int8_t x214 = INT8_MAX;
	volatile int8_t x215 = INT8_MAX;
	volatile uint8_t x216 = 1U;

    t51 = (x213-((x214<=x215)<=x216));

    if (t51 != 116061251) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x218 = 8951U;
	static uint64_t x219 = UINT64_MAX;
	static volatile int16_t x220 = INT16_MIN;
	static volatile int32_t t52 = -5717330;

    t52 = (x217-((x218<=x219)<=x220));

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x221 = -1135380647LL;
	volatile int64_t t53 = -16744401946625430LL;

    t53 = (x221-((x222<=x223)<=x224));

    if (t53 != -1135380647LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x225 = UINT8_MAX;
	int64_t x226 = INT64_MIN;
	uint64_t x228 = 359930LLU;

    t54 = (x225-((x226<=x227)<=x228));

    if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x230 = UINT32_MAX;
	static int64_t x231 = 83068806651838LL;
	volatile int16_t x232 = INT16_MAX;
	int64_t t55 = 31260816796LL;

    t55 = (x229-((x230<=x231)<=x232));

    if (t55 != 95907LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = -16360;
	volatile uint16_t x234 = 1375U;
	int32_t x235 = 845;
	int64_t x236 = INT64_MIN;
	static volatile int32_t t56 = 12361;

    t56 = (x233-((x234<=x235)<=x236));

    if (t56 != -16360) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x237 = UINT8_MAX;
	int32_t x238 = -17797;
	volatile int64_t x240 = 530719633441625LL;
	static volatile int32_t t57 = -135107;

    t57 = (x237-((x238<=x239)<=x240));

    if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x241 = 277U;
	volatile int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MAX;
	static int32_t x244 = 0;
	int32_t t58 = 0;

    t58 = (x241-((x242<=x243)<=x244));

    if (t58 != 277) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x245 = UINT32_MAX;
	volatile int16_t x246 = INT16_MAX;
	static volatile int16_t x247 = 1117;

    t59 = (x245-((x246<=x247)<=x248));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x249 = 0U;
	uint64_t x250 = UINT64_MAX;
	int16_t x251 = -8;
	static uint8_t x252 = 1U;

    t60 = (x249-((x250<=x251)<=x252));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x255 = UINT32_MAX;
	int64_t x256 = 539329464847638LL;

    t61 = (x253-((x254<=x255)<=x256));

    if (t61 != 5682) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = INT16_MIN;
	volatile int8_t x258 = INT8_MIN;
	int8_t x259 = 0;
	static int8_t x260 = 51;
	static int32_t t62 = 6765249;

    t62 = (x257-((x258<=x259)<=x260));

    if (t62 != -32769) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x261 = UINT8_MAX;
	int16_t x262 = INT16_MIN;
	volatile uint16_t x264 = 5U;
	int32_t t63 = -1712;

    t63 = (x261-((x262<=x263)<=x264));

    if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = 0;

    t64 = (x265-((x266<=x267)<=x268));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x269 = UINT16_MAX;
	uint32_t x270 = 80U;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 47U;
	int32_t t65 = 1;

    t65 = (x269-((x270<=x271)<=x272));

    if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MAX;
	static volatile int32_t x276 = INT32_MIN;
	volatile int32_t t66 = -1;

    t66 = (x273-((x274<=x275)<=x276));

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = INT8_MIN;
	uint64_t x278 = 11439183222907LLU;
	uint32_t x279 = 622752U;
	int32_t t67 = 0;

    t67 = (x277-((x278<=x279)<=x280));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MAX;
	int16_t x284 = 13814;
	static uint64_t t68 = 8184843298305804878LLU;

    t68 = (x281-((x282<=x283)<=x284));

    if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x285 = UINT32_MAX;
	int8_t x286 = INT8_MIN;
	int16_t x287 = 0;
	volatile int64_t x288 = INT64_MIN;

    t69 = (x285-((x286<=x287)<=x288));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x289 = 1529225U;
	uint8_t x290 = 36U;
	int16_t x291 = INT16_MIN;
	volatile uint64_t x292 = UINT64_MAX;
	uint32_t t70 = 138310269U;

    t70 = (x289-((x290<=x291)<=x292));

    if (t70 != 1529224U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x293 = 353425400U;
	int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MAX;
	volatile uint32_t t71 = 7U;

    t71 = (x293-((x294<=x295)<=x296));

    if (t71 != 353425399U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x297 = INT32_MAX;
	uint8_t x298 = 0U;
	int8_t x299 = -1;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t72 = 0;

    t72 = (x297-((x298<=x299)<=x300));

    if (t72 != 2147483646) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = -736;
	volatile int8_t x302 = -1;
	uint16_t x303 = 604U;

    t73 = (x301-((x302<=x303)<=x304));

    if (t73 != -737) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x305 = 80;
	int32_t x306 = -1;
	volatile uint16_t x307 = UINT16_MAX;
	int8_t x308 = -1;
	int32_t t74 = -7608;

    t74 = (x305-((x306<=x307)<=x308));

    if (t74 != 80) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x315 = INT32_MIN;
	int32_t t75 = -41;

    t75 = (x313-((x314<=x315)<=x316));

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x318 = 142546469255515LL;
	int8_t x319 = INT8_MAX;
	int16_t x320 = -1;
	static volatile int32_t t76 = 6371439;

    t76 = (x317-((x318<=x319)<=x320));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x330 = INT32_MIN;
	int64_t x332 = 1733LL;
	volatile int64_t t77 = -40909LL;

    t77 = (x329-((x330<=x331)<=x332));

    if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x334 = -274;
	int8_t x335 = INT8_MAX;
	int32_t t78 = 764051937;

    t78 = (x333-((x334<=x335)<=x336));

    if (t78 != 1336) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x337 = UINT32_MAX;
	int16_t x338 = INT16_MIN;
	volatile int32_t x340 = 9;
	uint32_t t79 = 13467U;

    t79 = (x337-((x338<=x339)<=x340));

    if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x341 = -1LL;
	volatile int64_t x342 = INT64_MIN;
	static volatile int16_t x343 = INT16_MAX;
	uint32_t x344 = 6950U;
	volatile int64_t t80 = -93762LL;

    t80 = (x341-((x342<=x343)<=x344));

    if (t80 != -2LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x346 = UINT8_MAX;
	uint32_t x347 = 3888538U;
	int32_t x348 = 92;
	volatile int64_t t81 = 460540201228LL;

    t81 = (x345-((x346<=x347)<=x348));

    if (t81 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x349 = -321631;
	volatile uint16_t x350 = 11494U;
	int64_t x351 = -1LL;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t82 = 20478;

    t82 = (x349-((x350<=x351)<=x352));

    if (t82 != -321632) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x355 = UINT64_MAX;
	volatile int16_t x356 = INT16_MIN;

    t83 = (x353-((x354<=x355)<=x356));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x358 = INT8_MAX;
	volatile int8_t x359 = INT8_MIN;
	volatile uint8_t x360 = 3U;
	static uint64_t t84 = 124989939LLU;

    t84 = (x357-((x358<=x359)<=x360));

    if (t84 != 50749LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x361 = 6U;
	uint64_t x362 = 2439226814529920LLU;
	static int32_t x364 = 843;
	static volatile uint32_t t85 = 1U;

    t85 = (x361-((x362<=x363)<=x364));

    if (t85 != 5U) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x365 = -69;
	uint16_t x366 = 298U;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t86 = 117965;

    t86 = (x365-((x366<=x367)<=x368));

    if (t86 != -69) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x369 = -31;
	int32_t x370 = INT32_MAX;
	volatile int32_t x371 = -90192112;
	int32_t t87 = 21898;

    t87 = (x369-((x370<=x371)<=x372));

    if (t87 != -32) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x373 = INT32_MIN;
	int32_t x374 = -11;
	uint64_t x375 = 1944443LLU;
	int32_t x376 = INT32_MIN;
	static int32_t t88 = INT32_MIN;

    t88 = (x373-((x374<=x375)<=x376));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x377 = INT16_MIN;
	static uint64_t x378 = UINT64_MAX;
	volatile int16_t x379 = INT16_MIN;
	uint32_t x380 = 11467573U;
	int32_t t89 = 15566;

    t89 = (x377-((x378<=x379)<=x380));

    if (t89 != -32769) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x381 = UINT8_MAX;
	volatile uint64_t x382 = UINT64_MAX;
	static volatile int64_t x383 = -1LL;
	static volatile uint16_t x384 = 2U;
	volatile int32_t t90 = -3681620;

    t90 = (x381-((x382<=x383)<=x384));

    if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;
	volatile int32_t t91 = INT32_MIN;

    t91 = (x385-((x386<=x387)<=x388));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x390 = UINT32_MAX;
	uint16_t x391 = 691U;
	volatile int8_t x392 = INT8_MIN;

    t92 = (x389-((x390<=x391)<=x392));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x393 = INT64_MIN;
	uint8_t x394 = UINT8_MAX;
	int64_t x396 = -1LL;
	int64_t t93 = INT64_MIN;

    t93 = (x393-((x394<=x395)<=x396));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x398 = INT64_MAX;
	int8_t x399 = -1;
	uint32_t x400 = UINT32_MAX;
	int32_t t94 = 0;

    t94 = (x397-((x398<=x399)<=x400));

    if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x401 = 7888;
	static int8_t x402 = -1;
	int64_t x403 = INT64_MAX;

    t95 = (x401-((x402<=x403)<=x404));

    if (t95 != 7887) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x405 = INT16_MAX;
	static uint8_t x406 = 3U;
	int8_t x407 = -1;
	int16_t x408 = INT16_MAX;
	volatile int32_t t96 = 29871;

    t96 = (x405-((x406<=x407)<=x408));

    if (t96 != 32766) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x411 = UINT8_MAX;
	static uint16_t x412 = 1U;
	volatile int32_t t97 = -745467;

    t97 = (x409-((x410<=x411)<=x412));

    if (t97 != 92) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x414 = INT16_MAX;
	int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MIN;
	int64_t t98 = INT64_MIN;

    t98 = (x413-((x414<=x415)<=x416));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x417 = -1;
	uint64_t x418 = UINT64_MAX;
	int16_t x419 = -1;
	int32_t x420 = INT32_MIN;
	volatile int32_t t99 = 2;

    t99 = (x417-((x418<=x419)<=x420));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x422 = INT64_MAX;
	uint32_t x423 = 322U;
	uint16_t x424 = 543U;
	volatile int32_t t100 = -727889475;

    t100 = (x421-((x422<=x423)<=x424));

    if (t100 != -32769) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint8_t x425 = 1U;
	uint32_t x426 = 6684144U;
	uint8_t x427 = 3U;
	static int16_t x428 = INT16_MAX;

    t101 = (x425-((x426<=x427)<=x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x430 = 30;
	static int64_t x431 = 0LL;
	volatile int16_t x432 = INT16_MAX;
	volatile uint32_t t102 = 16U;

    t102 = (x429-((x430<=x431)<=x432));

    if (t102 != 376U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x433 = INT64_MIN;
	uint8_t x434 = 7U;
	volatile int64_t x435 = INT64_MAX;
	static int8_t x436 = INT8_MIN;
	volatile int64_t t103 = INT64_MIN;

    t103 = (x433-((x434<=x435)<=x436));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x437 = INT8_MIN;
	int32_t x438 = -79520;
	volatile int8_t x439 = -1;
	int32_t x440 = INT32_MAX;

    t104 = (x437-((x438<=x439)<=x440));

    if (t104 != -129) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x441 = 1U;
	int32_t x443 = -277;
	int8_t x444 = -1;
	volatile int32_t t105 = -190430;

    t105 = (x441-((x442<=x443)<=x444));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x453 = 19U;
	int16_t x454 = INT16_MIN;
	int32_t x455 = INT32_MAX;
	int16_t x456 = -1;
	volatile int32_t t106 = 27020323;

    t106 = (x453-((x454<=x455)<=x456));

    if (t106 != 19) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x457 = 8U;
	volatile int64_t x458 = -30671409017LL;
	uint16_t x459 = UINT16_MAX;
	volatile int16_t x460 = -3;
	static int32_t t107 = -59047165;

    t107 = (x457-((x458<=x459)<=x460));

    if (t107 != 8) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x461 = INT32_MIN;
	uint64_t x462 = UINT64_MAX;
	static int8_t x463 = INT8_MAX;
	int16_t x464 = -1;
	volatile int32_t t108 = INT32_MIN;

    t108 = (x461-((x462<=x463)<=x464));

    if (t108 != INT32_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x465 = 0U;
	int64_t x467 = -1LL;
	static int16_t x468 = INT16_MAX;
	int32_t t109 = -1;

    t109 = (x465-((x466<=x467)<=x468));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x469 = 13;
	uint8_t x470 = 0U;
	int8_t x471 = INT8_MIN;
	int64_t x472 = INT64_MIN;
	static int32_t t110 = 330;

    t110 = (x469-((x470<=x471)<=x472));

    if (t110 != 13) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x474 = UINT16_MAX;
	int8_t x475 = 4;
	static int64_t x476 = -104LL;
	int32_t t111 = 3;

    t111 = (x473-((x474<=x475)<=x476));

    if (t111 != 180) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x477 = INT16_MAX;
	static int8_t x478 = -40;
	volatile int16_t x479 = -8925;
	int8_t x480 = 0;
	int32_t t112 = 88;

    t112 = (x477-((x478<=x479)<=x480));

    if (t112 != 32766) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x481 = UINT16_MAX;
	uint8_t x482 = 7U;
	int32_t x483 = INT32_MIN;
	volatile uint32_t x484 = UINT32_MAX;
	volatile int32_t t113 = 249726597;

    t113 = (x481-((x482<=x483)<=x484));

    if (t113 != 65534) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x485 = -25;
	volatile int16_t x486 = INT16_MIN;
	uint16_t x487 = UINT16_MAX;
	volatile int32_t t114 = -81;

    t114 = (x485-((x486<=x487)<=x488));

    if (t114 != -25) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x489 = INT64_MIN;
	int64_t x490 = INT64_MAX;
	static uint32_t x491 = 26U;
	volatile int8_t x492 = INT8_MIN;
	volatile int64_t t115 = INT64_MIN;

    t115 = (x489-((x490<=x491)<=x492));

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x493 = -1;
	static int8_t x495 = INT8_MIN;
	int8_t x496 = INT8_MIN;
	volatile int32_t t116 = -55;

    t116 = (x493-((x494<=x495)<=x496));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x498 = UINT8_MAX;
	static int16_t x499 = 7483;
	volatile uint32_t x500 = 24866133U;
	static volatile int32_t t117 = -868920757;

    t117 = (x497-((x498<=x499)<=x500));

    if (t117 != -32769) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x501 = -1056432907;
	uint16_t x502 = 3718U;
	volatile int8_t x503 = -1;
	uint8_t x504 = 3U;
	int32_t t118 = -331886035;

    t118 = (x501-((x502<=x503)<=x504));

    if (t118 != -1056432908) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x505 = -1;
	static int16_t x506 = -3;
	static int32_t x507 = -1;
	static uint16_t x508 = 706U;

    t119 = (x505-((x506<=x507)<=x508));

    if (t119 != -2) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x509 = 3U;
	int16_t x510 = INT16_MIN;
	volatile int32_t x511 = INT32_MIN;
	uint64_t x512 = 4369056346LLU;

    t120 = (x509-((x510<=x511)<=x512));

    if (t120 != 2U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x514 = 7;
	int64_t x515 = -1LL;
	int64_t x516 = INT64_MAX;
	volatile int64_t t121 = 31485694712092823LL;

    t121 = (x513-((x514<=x515)<=x516));

    if (t121 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x517 = -1LL;
	int16_t x518 = INT16_MAX;
	volatile int64_t t122 = 227412033426LL;

    t122 = (x517-((x518<=x519)<=x520));

    if (t122 != -2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x521 = INT8_MAX;
	int64_t x522 = INT64_MIN;
	int8_t x523 = INT8_MIN;
	int8_t x524 = -2;
	volatile int32_t t123 = 12;

    t123 = (x521-((x522<=x523)<=x524));

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x526 = 2097441901LLU;
	uint16_t x528 = 6747U;
	volatile uint64_t t124 = 39LLU;

    t124 = (x525-((x526<=x527)<=x528));

    if (t124 != 847078146132LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x529 = 15;
	static int64_t x530 = -1LL;
	volatile int64_t x531 = INT64_MIN;
	volatile int16_t x532 = -76;
	volatile int32_t t125 = -52064;

    t125 = (x529-((x530<=x531)<=x532));

    if (t125 != 15) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x533 = 14858U;
	uint16_t x534 = UINT16_MAX;
	int16_t x535 = INT16_MIN;
	volatile int8_t x536 = INT8_MIN;

    t126 = (x533-((x534<=x535)<=x536));

    if (t126 != 14858) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x537 = 9LLU;
	int32_t x538 = INT32_MIN;
	int8_t x540 = -1;
	uint64_t t127 = 6847448662LLU;

    t127 = (x537-((x538<=x539)<=x540));

    if (t127 != 9LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x541 = -41116LL;
	int32_t x542 = INT32_MAX;
	int8_t x543 = INT8_MIN;
	uint64_t x544 = UINT64_MAX;

    t128 = (x541-((x542<=x543)<=x544));

    if (t128 != -41117LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x545 = INT8_MIN;
	static int16_t x546 = -1;
	static uint64_t x548 = 12796013267490LLU;
	int32_t t129 = -6370;

    t129 = (x545-((x546<=x547)<=x548));

    if (t129 != -129) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x551 = -1LL;
	int8_t x552 = -15;
	volatile int64_t t130 = -4519LL;

    t130 = (x549-((x550<=x551)<=x552));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x553 = UINT32_MAX;
	int32_t x554 = INT32_MAX;
	static uint8_t x556 = 27U;
	volatile uint32_t t131 = 1U;

    t131 = (x553-((x554<=x555)<=x556));

    if (t131 != 4294967294U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x561 = 2894158U;
	static volatile int16_t x562 = INT16_MIN;
	int8_t x564 = -1;
	volatile uint32_t t132 = 1U;

    t132 = (x561-((x562<=x563)<=x564));

    if (t132 != 2894158U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = -1LL;
	volatile int16_t x567 = INT16_MIN;
	int8_t x568 = -1;
	int64_t t133 = 40640776001551LL;

    t133 = (x565-((x566<=x567)<=x568));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x569 = 1;
	int8_t x570 = INT8_MIN;
	int64_t x572 = INT64_MIN;

    t134 = (x569-((x570<=x571)<=x572));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x573 = INT16_MAX;
	int16_t x574 = -490;
	static volatile int32_t x575 = INT32_MIN;
	volatile int16_t x576 = -5;
	volatile int32_t t135 = 5905;

    t135 = (x573-((x574<=x575)<=x576));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x578 = 361019;
	uint32_t x579 = 2525137U;
	int8_t x580 = INT8_MIN;
	volatile int32_t t136 = 1;

    t136 = (x577-((x578<=x579)<=x580));

    if (t136 != 11573) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x582 = -3;
	static uint16_t x583 = 541U;
	static uint16_t x584 = 1232U;
	volatile int32_t t137 = 954078;

    t137 = (x581-((x582<=x583)<=x584));

    if (t137 != -2) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x585 = 23;
	int64_t x586 = INT64_MIN;
	uint8_t x587 = 21U;
	int16_t x588 = INT16_MIN;
	volatile int32_t t138 = -7287;

    t138 = (x585-((x586<=x587)<=x588));

    if (t138 != 23) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x589 = 7735663570427LL;
	uint64_t x591 = 8866278352LLU;
	int32_t x592 = INT32_MIN;

    t139 = (x589-((x590<=x591)<=x592));

    if (t139 != 7735663570427LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x594 = 1;
	int64_t x595 = -83128701LL;
	int16_t x596 = -3;
	volatile int32_t t140 = 1;

    t140 = (x593-((x594<=x595)<=x596));

    if (t140 != -46) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x597 = -746;
	int32_t x599 = INT32_MIN;
	static uint8_t x600 = 44U;
	static int32_t t141 = 257703475;

    t141 = (x597-((x598<=x599)<=x600));

    if (t141 != -747) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x602 = 5;
	volatile int16_t x603 = -2;
	uint64_t x604 = 53994557249210LLU;
	int32_t t142 = 220915;

    t142 = (x601-((x602<=x603)<=x604));

    if (t142 != 65534) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x605 = -171;
	int16_t x606 = -1;
	int64_t x607 = INT64_MIN;
	int32_t x608 = INT32_MIN;

    t143 = (x605-((x606<=x607)<=x608));

    if (t143 != -171) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x609 = INT32_MIN;
	int32_t x611 = 11944468;
	int8_t x612 = INT8_MIN;
	int32_t t144 = INT32_MIN;

    t144 = (x609-((x610<=x611)<=x612));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x613 = 1U;
	int16_t x614 = INT16_MIN;
	int8_t x615 = INT8_MIN;
	static int8_t x616 = -1;
	static int32_t t145 = 172901;

    t145 = (x613-((x614<=x615)<=x616));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x618 = UINT16_MAX;
	static uint16_t x619 = UINT16_MAX;
	static volatile int32_t x620 = INT32_MIN;
	volatile int64_t t146 = INT64_MAX;

    t146 = (x617-((x618<=x619)<=x620));

    if (t146 != INT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x621 = INT16_MAX;
	volatile int8_t x622 = -1;
	static int64_t x623 = -1LL;
	volatile int32_t x624 = 4;
	int32_t t147 = 1;

    t147 = (x621-((x622<=x623)<=x624));

    if (t147 != 32766) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x625 = 401342162709LLU;
	static int32_t x626 = -286;
	int64_t x628 = INT64_MAX;

    t148 = (x625-((x626<=x627)<=x628));

    if (t148 != 401342162708LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x629 = 13U;
	int8_t x631 = INT8_MIN;
	static uint8_t x632 = UINT8_MAX;
	static volatile int32_t t149 = 4682;

    t149 = (x629-((x630<=x631)<=x632));

    if (t149 != 12) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x633 = -1;
	int32_t x634 = -1;
	int32_t x635 = INT32_MIN;
	int16_t x636 = 148;

    t150 = (x633-((x634<=x635)<=x636));

    if (t150 != -2) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x639 = INT16_MIN;
	static int64_t x640 = INT64_MIN;

    t151 = (x637-((x638<=x639)<=x640));

    if (t151 != 3763587) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x642 = -1;
	int32_t x644 = -684608;
	int32_t t152 = 2;

    t152 = (x641-((x642<=x643)<=x644));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x645 = 454327LL;
	uint16_t x646 = UINT16_MAX;
	volatile int8_t x647 = -1;
	uint8_t x648 = 0U;
	volatile int64_t t153 = 55805LL;

    t153 = (x645-((x646<=x647)<=x648));

    if (t153 != 454326LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x649 = 7U;
	int32_t x650 = -1;
	static int64_t x651 = INT64_MIN;
	uint8_t x652 = UINT8_MAX;
	static int32_t t154 = 5057978;

    t154 = (x649-((x650<=x651)<=x652));

    if (t154 != 6) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x653 = INT8_MAX;
	uint64_t x654 = 192475419235LLU;
	int8_t x655 = -1;
	static volatile int32_t t155 = 0;

    t155 = (x653-((x654<=x655)<=x656));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x657 = INT16_MAX;
	static int64_t x658 = INT64_MAX;
	static int16_t x659 = INT16_MIN;
	uint64_t x660 = 642611957399LLU;
	static volatile int32_t t156 = -42;

    t156 = (x657-((x658<=x659)<=x660));

    if (t156 != 32766) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x661 = 139U;
	uint8_t x662 = 4U;
	volatile int32_t t157 = 5227;

    t157 = (x661-((x662<=x663)<=x664));

    if (t157 != 139) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x665 = INT8_MIN;
	int8_t x668 = 0;
	static volatile int32_t t158 = 41306019;

    t158 = (x665-((x666<=x667)<=x668));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x669 = -1;
	int64_t x670 = 197289LL;
	uint32_t x671 = 284U;

    t159 = (x669-((x670<=x671)<=x672));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x673 = 41;
	volatile uint8_t x674 = 92U;
	volatile uint64_t x676 = UINT64_MAX;
	int32_t t160 = 205;

    t160 = (x673-((x674<=x675)<=x676));

    if (t160 != 40) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x677 = 59;
	int8_t x679 = INT8_MAX;
	uint32_t x680 = 13343U;
	int32_t t161 = -85379339;

    t161 = (x677-((x678<=x679)<=x680));

    if (t161 != 58) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x681 = INT64_MIN;
	int64_t x682 = INT64_MIN;
	int64_t x683 = INT64_MIN;
	volatile int64_t t162 = INT64_MIN;

    t162 = (x681-((x682<=x683)<=x684));

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x685 = 0U;
	uint32_t x686 = 251533U;
	int16_t x687 = 325;
	volatile uint16_t x688 = UINT16_MAX;
	int32_t t163 = 197237;

    t163 = (x685-((x686<=x687)<=x688));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x690 = UINT16_MAX;
	volatile int32_t x692 = INT32_MAX;
	volatile int32_t t164 = -786044;

    t164 = (x689-((x690<=x691)<=x692));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x693 = 10;
	int32_t x694 = 293729;
	uint8_t x695 = 86U;
	static int32_t t165 = -299;

    t165 = (x693-((x694<=x695)<=x696));

    if (t165 != 9) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x701 = INT8_MAX;
	static int32_t x702 = -1;
	int32_t x703 = 6393538;
	int16_t x704 = INT16_MAX;

    t166 = (x701-((x702<=x703)<=x704));

    if (t166 != 126) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x705 = 51233LLU;
	int16_t x706 = INT16_MAX;
	uint8_t x707 = UINT8_MAX;
	uint8_t x708 = 5U;
	volatile uint64_t t167 = 81953105890207881LLU;

    t167 = (x705-((x706<=x707)<=x708));

    if (t167 != 51232LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x709 = -19478;
	uint16_t x710 = 159U;
	volatile int64_t x711 = -22919863LL;
	int32_t x712 = -3761;
	static volatile int32_t t168 = -59;

    t168 = (x709-((x710<=x711)<=x712));

    if (t168 != -19478) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x713 = 341U;
	int16_t x714 = INT16_MIN;
	int8_t x715 = INT8_MIN;
	uint32_t x716 = 28117U;

    t169 = (x713-((x714<=x715)<=x716));

    if (t169 != 340) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x717 = UINT64_MAX;
	int64_t x718 = -229444585LL;
	volatile int8_t x719 = INT8_MIN;
	int64_t x720 = INT64_MIN;
	volatile uint64_t t170 = UINT64_MAX;

    t170 = (x717-((x718<=x719)<=x720));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x721 = UINT8_MAX;
	uint64_t x722 = 102LLU;
	int8_t x723 = 3;
	static volatile int64_t x724 = -1LL;
	volatile int32_t t171 = -49056;

    t171 = (x721-((x722<=x723)<=x724));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x725 = INT8_MAX;
	static int32_t x727 = INT32_MIN;
	int64_t x728 = INT64_MIN;

    t172 = (x725-((x726<=x727)<=x728));

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x730 = 0;
	uint64_t x731 = UINT64_MAX;
	int32_t x732 = -1;

    t173 = (x729-((x730<=x731)<=x732));

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x733 = INT32_MAX;
	int32_t x734 = 20180;
	int16_t x736 = INT16_MIN;
	int32_t t174 = INT32_MAX;

    t174 = (x733-((x734<=x735)<=x736));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x737 = UINT16_MAX;

    t175 = (x737-((x738<=x739)<=x740));

    if (t175 != 65535) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x741 = INT8_MIN;
	int32_t x742 = -20;
	uint64_t x743 = 3847816419709098421LLU;
	uint64_t x744 = 3030LLU;
	volatile int32_t t176 = 13953817;

    t176 = (x741-((x742<=x743)<=x744));

    if (t176 != -129) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x746 = -615238242;
	int16_t x748 = INT16_MAX;
	volatile int32_t t177 = 106024;

    t177 = (x745-((x746<=x747)<=x748));

    if (t177 != -2) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x749 = INT32_MIN;
	volatile int64_t x750 = -121859398950LL;
	volatile int8_t x751 = INT8_MAX;

    t178 = (x749-((x750<=x751)<=x752));

    if (t178 != INT32_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x753 = 218368026676LLU;
	volatile int8_t x754 = INT8_MIN;
	volatile int16_t x755 = INT16_MIN;
	static volatile uint64_t t179 = 31182433247928054LLU;

    t179 = (x753-((x754<=x755)<=x756));

    if (t179 != 218368026676LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x757 = 6U;

    t180 = (x757-((x758<=x759)<=x760));

    if (t180 != 6) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x762 = 5054LLU;
	uint16_t x763 = 26700U;
	int8_t x764 = INT8_MIN;
	volatile int32_t t181 = -104929;

    t181 = (x761-((x762<=x763)<=x764));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x765 = INT8_MAX;
	static int8_t x766 = INT8_MIN;
	volatile uint64_t x767 = 32976206518LLU;
	int64_t x768 = -529446LL;
	int32_t t182 = 43567666;

    t182 = (x765-((x766<=x767)<=x768));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x769 = -1LL;
	static int64_t x770 = INT64_MIN;
	int16_t x771 = 5572;

    t183 = (x769-((x770<=x771)<=x772));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x774 = -1;
	static int16_t x775 = 20;
	volatile uint32_t x776 = UINT32_MAX;

    t184 = (x773-((x774<=x775)<=x776));

    if (t184 != -2) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x777 = 2U;
	int8_t x778 = -1;
	int32_t x779 = INT32_MIN;
	int32_t x780 = INT32_MAX;
	int32_t t185 = 3005;

    t185 = (x777-((x778<=x779)<=x780));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x785 = UINT16_MAX;
	int32_t x786 = INT32_MAX;
	int16_t x787 = 463;
	int64_t x788 = INT64_MAX;
	int32_t t186 = -310747;

    t186 = (x785-((x786<=x787)<=x788));

    if (t186 != 65534) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x789 = 5202633842LL;
	static int16_t x790 = INT16_MAX;
	volatile uint16_t x791 = 1U;
	int64_t x792 = 270158LL;
	static int64_t t187 = 135110525282LL;

    t187 = (x789-((x790<=x791)<=x792));

    if (t187 != 5202633841LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x793 = UINT64_MAX;
	static int32_t x795 = INT32_MAX;
	static uint16_t x796 = 395U;
	static volatile uint64_t t188 = 2349049083715930079LLU;

    t188 = (x793-((x794<=x795)<=x796));

    if (t188 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x797 = 3219;
	int32_t x798 = INT32_MIN;
	volatile int16_t x799 = 0;
	static uint8_t x800 = 22U;
	int32_t t189 = 9854;

    t189 = (x797-((x798<=x799)<=x800));

    if (t189 != 3218) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x801 = INT8_MAX;
	uint8_t x802 = UINT8_MAX;
	static uint8_t x803 = 107U;
	int32_t t190 = -186239212;

    t190 = (x801-((x802<=x803)<=x804));

    if (t190 != 126) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x805 = -1;
	static int32_t x806 = 7;
	int16_t x807 = -1;
	int8_t x808 = INT8_MIN;
	int32_t t191 = -123;

    t191 = (x805-((x806<=x807)<=x808));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x809 = UINT64_MAX;
	volatile uint32_t x811 = 9424U;
	static volatile int64_t x812 = INT64_MIN;
	static uint64_t t192 = UINT64_MAX;

    t192 = (x809-((x810<=x811)<=x812));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x813 = 58U;
	int16_t x814 = -124;
	volatile int32_t x815 = INT32_MAX;
	uint32_t t193 = 121086891U;

    t193 = (x813-((x814<=x815)<=x816));

    if (t193 != 57U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x818 = INT16_MIN;
	volatile int8_t x820 = INT8_MIN;
	int32_t t194 = -3;

    t194 = (x817-((x818<=x819)<=x820));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x821 = 122024714U;
	uint8_t x822 = 7U;
	uint64_t x823 = 2263LLU;
	uint32_t x824 = UINT32_MAX;
	uint32_t t195 = 551222U;

    t195 = (x821-((x822<=x823)<=x824));

    if (t195 != 122024713U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x825 = INT32_MIN;
	int32_t x826 = INT32_MIN;
	uint16_t x827 = 1101U;
	static volatile int32_t t196 = INT32_MIN;

    t196 = (x825-((x826<=x827)<=x828));

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x829 = UINT32_MAX;
	int8_t x830 = INT8_MIN;
	int32_t x831 = INT32_MIN;
	static int8_t x832 = -1;
	volatile uint32_t t197 = UINT32_MAX;

    t197 = (x829-((x830<=x831)<=x832));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x833 = 3U;
	volatile int32_t x835 = -933720089;
	int16_t x836 = -1;
	volatile int32_t t198 = -29;

    t198 = (x833-((x834<=x835)<=x836));

    if (t198 != 3) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x837 = 140440055714122LLU;
	volatile uint8_t x840 = UINT8_MAX;
	uint64_t t199 = 5842617313191149LLU;

    t199 = (x837-((x838<=x839)<=x840));

    if (t199 != 140440055714121LLU) { NG(); } else { ; }
	
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

