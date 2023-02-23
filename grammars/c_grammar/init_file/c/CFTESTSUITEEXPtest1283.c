
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

static int64_t x4 = -1LL;
int32_t x5 = -201791295;
int16_t x8 = INT16_MIN;
static int16_t x11 = INT16_MIN;
static uint16_t x12 = 129U;
int32_t t2 = 0;
int64_t x17 = INT64_MAX;
static volatile int16_t x19 = -1;
volatile int32_t t4 = 18856;
int32_t t5 = 9117592;
uint64_t x28 = 2253LLU;
static volatile uint8_t x33 = 0U;
int8_t x34 = -1;
static int16_t x36 = -1;
int16_t x41 = -31;
int32_t x43 = INT32_MIN;
int32_t t11 = 3864;
int8_t x49 = INT8_MIN;
uint32_t x50 = 21526U;
static int32_t t12 = -131492201;
int32_t t13 = 293927561;
uint16_t x57 = UINT16_MAX;
static uint32_t x58 = UINT32_MAX;
int32_t x60 = INT32_MAX;
static int32_t x65 = INT32_MIN;
static uint64_t x70 = UINT64_MAX;
volatile int16_t x78 = INT16_MAX;
int16_t x80 = -9;
int16_t x84 = INT16_MAX;
static int32_t t20 = 89;
int64_t x88 = -14572623287LL;
uint64_t x89 = UINT64_MAX;
int64_t x90 = INT64_MAX;
uint8_t x92 = UINT8_MAX;
int32_t t22 = -26;
volatile int32_t t23 = 28;
int16_t x98 = -296;
int8_t x100 = INT8_MAX;
uint16_t x106 = 2U;
int32_t t26 = 734268;
static int32_t x111 = -1;
int64_t x113 = INT64_MIN;
uint16_t x114 = UINT16_MAX;
int32_t t30 = 42819143;
volatile uint8_t x127 = 18U;
volatile int32_t t32 = 74632;
uint8_t x138 = UINT8_MAX;
int64_t x144 = 9566149099LL;
int64_t x154 = INT64_MIN;
uint16_t x158 = 2U;
int32_t x159 = -1;
volatile int8_t x177 = INT8_MIN;
int16_t x181 = INT16_MIN;
volatile int32_t x184 = INT32_MIN;
int8_t x185 = -1;
uint8_t x187 = UINT8_MAX;
int16_t x198 = -1;
volatile int8_t x199 = INT8_MIN;
static int16_t x204 = INT16_MAX;
uint8_t x206 = 6U;
uint16_t x210 = 42U;
uint64_t x211 = UINT64_MAX;
uint16_t x215 = 2U;
volatile int32_t x216 = -1;
uint64_t x225 = UINT64_MAX;
int8_t x226 = INT8_MAX;
int32_t t56 = -242882;
static int64_t x235 = -75608453558802LL;
uint8_t x239 = 26U;
int16_t x240 = INT16_MAX;
int32_t t59 = 2;
uint16_t x251 = UINT16_MAX;
uint32_t x254 = 28009U;
int32_t x256 = -1;
static volatile int8_t x259 = INT8_MIN;
uint64_t x261 = UINT64_MAX;
volatile int32_t x263 = -1;
int32_t t65 = 2089162;
int32_t x265 = INT32_MIN;
int64_t x270 = -1LL;
int32_t t67 = -3348077;
int8_t x274 = INT8_MAX;
int8_t x287 = INT8_MIN;
int32_t t73 = 36402;
static int32_t t74 = -12;
int32_t t75 = -3608864;
int32_t x319 = INT32_MAX;
uint8_t x320 = 4U;
static int32_t t79 = -6569962;
int16_t x326 = -1;
static int64_t x333 = -1LL;
static int16_t x334 = 0;
static uint16_t x337 = 6U;
static int32_t x343 = -1;
int16_t x350 = -1;
int32_t x357 = INT32_MAX;
uint16_t x363 = 361U;
int64_t x364 = INT64_MIN;
static volatile int32_t t90 = 1509;
int32_t t91 = -176098;
uint32_t x370 = 8U;
volatile int32_t t92 = -130;
static int64_t x375 = 118034676738842LL;
volatile int32_t t93 = -4568770;
int32_t t94 = 15321081;
int32_t t97 = 423;
volatile uint16_t x399 = 2U;
static int8_t x401 = -7;
int32_t t100 = 440;
int16_t x412 = -1;
int64_t x413 = 3097LL;
int32_t x414 = -1;
static int32_t x416 = INT32_MIN;
uint16_t x418 = UINT16_MAX;
int64_t x420 = INT64_MIN;
static int8_t x421 = INT8_MAX;
static uint64_t x424 = 489699450510710LLU;
int32_t t105 = -1317686;
static uint16_t x425 = 353U;
static int32_t x431 = INT32_MIN;
uint8_t x432 = 6U;
volatile int32_t t107 = 31;
static int32_t x433 = 1971;
int64_t x442 = INT64_MIN;
int32_t x443 = -4335065;
volatile uint64_t x444 = UINT64_MAX;
static int32_t t111 = 28971;
int32_t t112 = 3312;
static volatile int32_t x453 = INT32_MIN;
int8_t x455 = -4;
uint32_t x459 = UINT32_MAX;
int32_t x469 = -1;
volatile int16_t x471 = -1;
static int32_t t117 = -11;
static volatile int32_t x483 = -493573;
volatile int32_t x489 = INT32_MAX;
uint64_t x492 = 121LLU;
static int16_t x502 = INT16_MAX;
int16_t x506 = INT16_MIN;
static int64_t x510 = INT64_MIN;
int64_t x515 = -1LL;
int16_t x517 = INT16_MIN;
volatile uint16_t x518 = 1823U;
volatile int32_t x519 = 68;
int32_t t130 = -63270714;
int64_t x531 = -60996LL;
uint64_t x532 = 14516577LLU;
static volatile int16_t x535 = INT16_MIN;
int32_t x546 = INT32_MIN;
static volatile int8_t x551 = 0;
int32_t x556 = -437416;
int32_t t138 = 25;
uint8_t x561 = UINT8_MAX;
uint16_t x565 = 0U;
int32_t t141 = 115821600;
uint8_t x571 = UINT8_MAX;
uint16_t x572 = 1U;
uint16_t x573 = UINT16_MAX;
int32_t t144 = -931;
int32_t x588 = INT32_MIN;
volatile int8_t x589 = 0;
static uint16_t x590 = UINT16_MAX;
volatile int32_t t147 = 140074988;
int32_t x595 = -488340317;
int32_t t149 = 0;
static volatile int32_t t150 = -13;
volatile uint16_t x614 = 4034U;
volatile int32_t t154 = -1;
uint32_t x626 = 14849U;
int32_t t156 = 8746644;
static int32_t x629 = INT32_MIN;
int32_t t157 = 172891192;
static int64_t x634 = INT64_MIN;
int32_t x639 = INT32_MIN;
uint8_t x640 = 105U;
int8_t x643 = INT8_MIN;
uint8_t x658 = 0U;
static uint32_t x659 = 1747U;
volatile int16_t x661 = -2;
int8_t x662 = INT8_MIN;
static int32_t x663 = INT32_MIN;
int32_t x667 = INT32_MIN;
int64_t x674 = -279703LL;
int32_t x687 = INT32_MIN;
static uint32_t x689 = UINT32_MAX;
int32_t x692 = INT32_MIN;
int16_t x696 = INT16_MIN;
int32_t t177 = -651;
volatile uint16_t x715 = 15U;
volatile int32_t t178 = 2214123;
int8_t x728 = -1;
volatile int32_t t182 = 93976;
volatile int32_t x733 = -1;
int32_t x736 = 28803612;
volatile int16_t x738 = INT16_MIN;
volatile int32_t t184 = -7747;
int32_t t185 = -350036;
volatile int16_t x752 = -294;
int8_t x758 = INT8_MIN;
volatile int32_t t189 = -87193136;
static uint16_t x764 = 1014U;
int32_t t190 = -2539;
int16_t x767 = -172;
int32_t t192 = 13529048;
volatile int32_t t193 = 169131587;
static int16_t x786 = -1;
volatile int32_t t198 = -13606198;
static uint64_t x797 = 3977539890677LLU;
uint64_t x800 = UINT64_MAX;
volatile int32_t t199 = -9936357;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MAX;
	int32_t x3 = 12959125;
	volatile int32_t t0 = -1046;

    t0 = (x1>((x2!=x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 17U;
	int32_t x7 = -1;
	volatile int32_t t1 = 29414533;

    t1 = (x5>((x6!=x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 5U;
	volatile int16_t x10 = 3277;

    t2 = (x9>((x10!=x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 5U;
	static int16_t x14 = 7736;
	volatile int16_t x15 = INT16_MAX;
	int32_t x16 = 1287;
	int32_t t3 = 126900595;

    t3 = (x13>((x14!=x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = INT64_MIN;
	uint64_t x20 = 161781824200645933LLU;

    t4 = (x17>((x18!=x19)==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 13;
	volatile uint64_t x22 = 4059835020655LLU;
	uint8_t x23 = UINT8_MAX;
	uint8_t x24 = 0U;

    t5 = (x21>((x22!=x23)==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	int32_t x26 = 377;
	int32_t x27 = 246652;
	volatile int32_t t6 = 3299;

    t6 = (x25>((x26!=x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	uint8_t x30 = 118U;
	int8_t x31 = 1;
	int8_t x32 = 1;
	static int32_t t7 = -118;

    t7 = (x29>((x30!=x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x35 = 103401170596909LL;
	volatile int32_t t8 = 51;

    t8 = (x33>((x34!=x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	uint16_t x38 = 6U;
	volatile int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -2;

    t9 = (x37>((x38!=x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = -5;
	int8_t x44 = -1;
	volatile int32_t t10 = -7501698;

    t10 = (x41>((x42!=x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MIN;
	volatile uint32_t x47 = 124U;
	static int16_t x48 = -1;

    t11 = (x45>((x46!=x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x51 = -1;
	int32_t x52 = -387;

    t12 = (x49>((x50!=x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 11254U;
	volatile int8_t x54 = INT8_MIN;
	volatile uint64_t x55 = UINT64_MAX;
	int64_t x56 = INT64_MAX;

    t13 = (x53>((x54!=x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x59 = INT8_MIN;
	int32_t t14 = 72914299;

    t14 = (x57>((x58!=x59)==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x61 = INT64_MIN;
	volatile int32_t x62 = INT32_MIN;
	int32_t x63 = INT32_MAX;
	int64_t x64 = 17092LL;
	int32_t t15 = 859;

    t15 = (x61>((x62!=x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MAX;
	int64_t x68 = -2119535LL;
	volatile int32_t t16 = -5171599;

    t16 = (x65>((x66!=x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x69 = 24594U;
	volatile int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -30932440;

    t17 = (x69>((x70!=x71)==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MIN;
	volatile int32_t x75 = -105399;
	int64_t x76 = INT64_MIN;
	int32_t t18 = 201043;

    t18 = (x73>((x74!=x75)==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = -410;
	int32_t x79 = -1;
	static volatile int32_t t19 = -2058578;

    t19 = (x77>((x78!=x79)==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -1;
	int16_t x82 = INT16_MAX;
	int32_t x83 = -1;

    t20 = (x81>((x82!=x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MAX;
	int64_t x87 = INT64_MIN;
	volatile int32_t t21 = 115;

    t21 = (x85>((x86!=x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x91 = -1LL;

    t22 = (x89>((x90!=x91)==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	volatile uint64_t x94 = UINT64_MAX;
	int32_t x95 = -471906;
	int32_t x96 = -1;

    t23 = (x93>((x94!=x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	uint64_t x99 = 256902LLU;
	static int32_t t24 = 113;

    t24 = (x97>((x98!=x99)==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	static int64_t x103 = 8148781LL;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = 269;

    t25 = (x101>((x102!=x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MIN;
	uint64_t x107 = 2847888231LLU;
	uint8_t x108 = 14U;

    t26 = (x105>((x106!=x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	int64_t x110 = -6699LL;
	volatile int32_t x112 = 3475;
	int32_t t27 = -1291;

    t27 = (x109>((x110!=x111)==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = 36068816;

    t28 = (x113>((x114!=x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -79;
	static int64_t x118 = 5LL;
	int64_t x119 = 201714628072158790LL;
	volatile int8_t x120 = -1;
	volatile int32_t t29 = 450204851;

    t29 = (x117>((x118!=x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int32_t x122 = -1;
	volatile uint16_t x123 = 2U;
	int64_t x124 = INT64_MAX;

    t30 = (x121>((x122!=x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = UINT64_MAX;
	uint16_t x126 = 13U;
	static int16_t x128 = -1;
	volatile int32_t t31 = 1403;

    t31 = (x125>((x126!=x127)==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = UINT16_MAX;
	uint16_t x130 = 173U;
	uint32_t x131 = 1556090U;
	uint8_t x132 = 23U;

    t32 = (x129>((x130!=x131)==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -20;
	volatile int8_t x134 = INT8_MAX;
	int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MAX;
	volatile int32_t t33 = 15797549;

    t33 = (x133>((x134!=x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = -20;
	volatile uint16_t x139 = 205U;
	static int32_t x140 = -94;
	volatile int32_t t34 = -14;

    t34 = (x137>((x138!=x139)==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	int32_t t35 = -1290;

    t35 = (x141>((x142!=x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 0;
	int16_t x146 = -3;
	int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = -154500193;

    t36 = (x145>((x146!=x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x149 = 0U;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	static int32_t x152 = INT32_MAX;
	volatile int32_t t37 = -386;

    t37 = (x149>((x150!=x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x153 = 62U;
	int16_t x155 = -1;
	uint16_t x156 = 71U;
	int32_t t38 = -1161628;

    t38 = (x153>((x154!=x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	int64_t x160 = 55175314950972018LL;
	int32_t t39 = 172004388;

    t39 = (x157>((x158!=x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = INT32_MIN;
	volatile uint8_t x162 = 1U;
	int8_t x163 = INT8_MIN;
	int8_t x164 = -1;
	volatile int32_t t40 = -120362668;

    t40 = (x161>((x162!=x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MAX;
	uint16_t x166 = 35U;
	int16_t x167 = -1;
	uint32_t x168 = 1350958U;
	int32_t t41 = -26;

    t41 = (x165>((x166!=x167)==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 9U;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = 47LLU;
	static int16_t x172 = -1;
	static volatile int32_t t42 = -22;

    t42 = (x169>((x170!=x171)==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	int32_t x174 = INT32_MAX;
	uint32_t x175 = 99807231U;
	int16_t x176 = -57;
	static int32_t t43 = -1097;

    t43 = (x173>((x174!=x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x178 = UINT16_MAX;
	uint8_t x179 = 8U;
	int32_t x180 = 0;
	volatile int32_t t44 = -1004416;

    t44 = (x177>((x178!=x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x182 = 3U;
	static volatile uint32_t x183 = 6301379U;
	static int32_t t45 = 349239180;

    t45 = (x181>((x182!=x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x186 = INT8_MIN;
	uint16_t x188 = UINT16_MAX;
	int32_t t46 = 2;

    t46 = (x185>((x186!=x187)==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = UINT64_MAX;
	static uint8_t x190 = 4U;
	int32_t x191 = INT32_MAX;
	int32_t x192 = -1;
	int32_t t47 = -11939088;

    t47 = (x189>((x190!=x191)==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	int16_t x194 = -20;
	int8_t x195 = INT8_MAX;
	int16_t x196 = INT16_MIN;
	static volatile int32_t t48 = -15397701;

    t48 = (x193>((x194!=x195)==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x197 = 0U;
	static int64_t x200 = -232696576785670LL;
	int32_t t49 = 132270141;

    t49 = (x197>((x198!=x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	volatile int64_t x202 = 22LL;
	int8_t x203 = -1;
	int32_t t50 = 24;

    t50 = (x201>((x202!=x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	int64_t x207 = INT64_MAX;
	int32_t x208 = -16636;
	volatile int32_t t51 = -156;

    t51 = (x205>((x206!=x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = UINT64_MAX;
	int64_t x212 = -1LL;
	volatile int32_t t52 = -2949089;

    t52 = (x209>((x210!=x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x213 = 112U;
	volatile int32_t x214 = INT32_MIN;
	volatile int32_t t53 = -53989741;

    t53 = (x213>((x214!=x215)==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -851LL;
	uint64_t x218 = 63342592441LLU;
	int32_t x219 = -4249432;
	uint32_t x220 = 80678815U;
	volatile int32_t t54 = -24042781;

    t54 = (x217>((x218!=x219)==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = 53U;
	int16_t x224 = 0;
	int32_t t55 = 865;

    t55 = (x221>((x222!=x223)==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x227 = 1U;
	volatile uint16_t x228 = UINT16_MAX;

    t56 = (x225>((x226!=x227)==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	volatile uint64_t x230 = UINT64_MAX;
	int32_t x231 = -1825582;
	volatile int16_t x232 = -3;
	int32_t t57 = -227105896;

    t57 = (x229>((x230!=x231)==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	static int64_t x234 = 85180334LL;
	static int16_t x236 = INT16_MAX;
	volatile int32_t t58 = 8564;

    t58 = (x233>((x234!=x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	volatile uint64_t x238 = 241869923752824768LLU;

    t59 = (x237>((x238!=x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = INT16_MIN;
	static volatile uint8_t x242 = 1U;
	int16_t x243 = -1;
	int8_t x244 = -1;
	int32_t t60 = 63;

    t60 = (x241>((x242!=x243)==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -7190;
	int16_t x246 = INT16_MIN;
	volatile int16_t x247 = INT16_MAX;
	uint8_t x248 = 30U;
	static int32_t t61 = 95997;

    t61 = (x245>((x246!=x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -20487409;
	volatile uint64_t x250 = 41446565LLU;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t62 = -315;

    t62 = (x249>((x250!=x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	int32_t t63 = 84281275;

    t63 = (x253>((x254!=x255)==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 128028192U;
	static int16_t x258 = INT16_MIN;
	int8_t x260 = 1;
	int32_t t64 = -35;

    t64 = (x257>((x258!=x259)==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = 5;
	static int8_t x264 = INT8_MAX;

    t65 = (x261>((x262!=x263)==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = INT32_MIN;
	volatile int64_t x267 = INT64_MIN;
	volatile int32_t x268 = INT32_MAX;
	int32_t t66 = 536934;

    t66 = (x265>((x266!=x267)==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -1;
	volatile uint8_t x271 = UINT8_MAX;
	volatile int8_t x272 = 1;

    t67 = (x269>((x270!=x271)==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MAX;
	volatile int64_t x275 = -123358702378774LL;
	volatile uint32_t x276 = 385U;
	volatile int32_t t68 = 160816168;

    t68 = (x273>((x274!=x275)==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x277 = 0U;
	int16_t x278 = 4305;
	uint16_t x279 = 1U;
	int8_t x280 = INT8_MIN;
	int32_t t69 = -31415;

    t69 = (x277>((x278!=x279)==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = INT32_MAX;
	volatile int64_t x282 = INT64_MAX;
	uint8_t x283 = UINT8_MAX;
	int32_t x284 = -1;
	int32_t t70 = -57138;

    t70 = (x281>((x282!=x283)==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = -1LL;
	uint32_t x286 = 1787U;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t71 = -1192196;

    t71 = (x285>((x286!=x287)==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	volatile int8_t x290 = 12;
	int8_t x291 = -14;
	volatile int8_t x292 = INT8_MAX;
	int32_t t72 = 11508;

    t72 = (x289>((x290!=x291)==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MAX;
	uint32_t x296 = 1888U;

    t73 = (x293>((x294!=x295)==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = INT8_MIN;
	uint64_t x298 = 5038907032973LLU;
	uint16_t x299 = 3982U;
	static int16_t x300 = 1;

    t74 = (x297>((x298!=x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x301 = 1U;
	volatile int64_t x302 = 63263393990LL;
	static volatile int16_t x303 = INT16_MAX;
	uint8_t x304 = 5U;

    t75 = (x301>((x302!=x303)==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MAX;
	int16_t x306 = 2062;
	int16_t x307 = -3;
	int32_t x308 = INT32_MIN;
	static int32_t t76 = -12180;

    t76 = (x305>((x306!=x307)==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = 0LL;
	uint32_t x310 = UINT32_MAX;
	int32_t x311 = 127334094;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t77 = -4607743;

    t77 = (x309>((x310!=x311)==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	static uint32_t x314 = 15062481U;
	int16_t x315 = -1;
	int64_t x316 = INT64_MAX;
	int32_t t78 = -7169153;

    t78 = (x313>((x314!=x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	volatile int16_t x318 = -1;

    t79 = (x317>((x318!=x319)==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x322 = 0;
	int8_t x323 = 1;
	int8_t x324 = INT8_MIN;
	int32_t t80 = 121;

    t80 = (x321>((x322!=x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x327 = -13;
	volatile int16_t x328 = 56;
	volatile int32_t t81 = 1;

    t81 = (x325>((x326!=x327)==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 76205298890LLU;
	int16_t x330 = INT16_MAX;
	int32_t x331 = -1;
	int64_t x332 = INT64_MIN;
	int32_t t82 = 1226890;

    t82 = (x329>((x330!=x331)==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x335 = INT16_MIN;
	static int32_t x336 = INT32_MIN;
	int32_t t83 = -52;

    t83 = (x333>((x334!=x335)==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = INT8_MAX;
	static int8_t x339 = 25;
	int64_t x340 = -62130LL;
	volatile int32_t t84 = -89110145;

    t84 = (x337>((x338!=x339)==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MIN;
	static int32_t x344 = -1;
	volatile int32_t t85 = -1863728;

    t85 = (x341>((x342!=x343)==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = 213700400833088409LL;
	uint8_t x346 = 28U;
	volatile uint16_t x347 = 28959U;
	uint16_t x348 = 32U;
	volatile int32_t t86 = 10497479;

    t86 = (x345>((x346!=x347)==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x349 = INT16_MIN;
	volatile int32_t x351 = -1;
	volatile int64_t x352 = -1175LL;
	int32_t t87 = 63;

    t87 = (x349>((x350!=x351)==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = INT64_MAX;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -1;
	volatile int32_t t88 = 179947850;

    t88 = (x353>((x354!=x355)==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x358 = 10;
	int8_t x359 = -5;
	int16_t x360 = INT16_MAX;
	int32_t t89 = -204380;

    t89 = (x357>((x358!=x359)==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	static volatile uint8_t x362 = 8U;

    t90 = (x361>((x362!=x363)==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 2;
	volatile int16_t x366 = -1;
	volatile int16_t x367 = -1;
	int16_t x368 = -1881;

    t91 = (x365>((x366!=x367)==x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	static volatile int32_t x372 = INT32_MIN;

    t92 = (x369>((x370!=x371)==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x373 = 0U;
	static int64_t x374 = INT64_MIN;
	uint64_t x376 = 90LLU;

    t93 = (x373>((x374!=x375)==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x377 = UINT32_MAX;
	volatile int64_t x378 = INT64_MAX;
	static int32_t x379 = -1;
	uint32_t x380 = 14818U;

    t94 = (x377>((x378!=x379)==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -882;
	int8_t x382 = INT8_MIN;
	int32_t x383 = INT32_MIN;
	int64_t x384 = -47677988227110213LL;
	volatile int32_t t95 = 1;

    t95 = (x381>((x382!=x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = 1;
	int32_t x388 = INT32_MAX;
	volatile int32_t t96 = -21373484;

    t96 = (x385>((x386!=x387)==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x389 = UINT16_MAX;
	int64_t x390 = INT64_MIN;
	static uint16_t x391 = UINT16_MAX;
	volatile int32_t x392 = INT32_MIN;

    t97 = (x389>((x390!=x391)==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 1991U;
	volatile uint32_t x394 = UINT32_MAX;
	int64_t x395 = -1LL;
	int8_t x396 = INT8_MAX;
	int32_t t98 = -2;

    t98 = (x393>((x394!=x395)==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x397 = INT16_MIN;
	uint32_t x398 = UINT32_MAX;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -46297956;

    t99 = (x397>((x398!=x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x402 = 12LLU;
	int8_t x403 = -1;
	int8_t x404 = INT8_MIN;

    t100 = (x401>((x402!=x403)==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = 40;
	int32_t x406 = INT32_MIN;
	int32_t x407 = 1;
	int32_t x408 = -1;
	volatile int32_t t101 = -1503;

    t101 = (x405>((x406!=x407)==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	volatile int8_t x410 = INT8_MAX;
	static int8_t x411 = 7;
	volatile int32_t t102 = 7859658;

    t102 = (x409>((x410!=x411)==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x415 = UINT8_MAX;
	volatile int32_t t103 = -18227563;

    t103 = (x413>((x414!=x415)==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -36;
	volatile int64_t x419 = INT64_MAX;
	int32_t t104 = 0;

    t104 = (x417>((x418!=x419)==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x422 = UINT16_MAX;
	uint32_t x423 = 26U;

    t105 = (x421>((x422!=x423)==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = INT16_MIN;
	volatile int8_t x427 = 14;
	static int16_t x428 = INT16_MAX;
	int32_t t106 = 7719;

    t106 = (x425>((x426!=x427)==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = INT64_MIN;
	uint8_t x430 = UINT8_MAX;

    t107 = (x429>((x430!=x431)==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x434 = INT16_MAX;
	int32_t x435 = INT32_MIN;
	uint64_t x436 = 4009594869654118928LLU;
	int32_t t108 = 67007091;

    t108 = (x433>((x434!=x435)==x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x437 = -1;
	int16_t x438 = -1;
	volatile int64_t x439 = -12935LL;
	int16_t x440 = -1;
	volatile int32_t t109 = 215;

    t109 = (x437>((x438!=x439)==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x441 = INT16_MAX;
	int32_t t110 = -35535;

    t110 = (x441>((x442!=x443)==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 214U;
	static int16_t x446 = 1;
	int64_t x447 = -118LL;
	int16_t x448 = INT16_MAX;

    t111 = (x445>((x446!=x447)==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MAX;
	int64_t x450 = INT64_MIN;
	uint16_t x451 = UINT16_MAX;
	uint32_t x452 = 4597U;

    t112 = (x449>((x450!=x451)==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x454 = -54;
	volatile int64_t x456 = INT64_MIN;
	static volatile int32_t t113 = 3533875;

    t113 = (x453>((x454!=x455)==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	volatile int32_t x458 = -1;
	static int32_t x460 = INT32_MIN;
	int32_t t114 = 7735;

    t114 = (x457>((x458!=x459)==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = INT8_MIN;
	static uint8_t x462 = 4U;
	static int8_t x463 = INT8_MAX;
	int8_t x464 = 1;
	int32_t t115 = -9279250;

    t115 = (x461>((x462!=x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = UINT16_MAX;
	int8_t x466 = 0;
	uint8_t x467 = 11U;
	int64_t x468 = -1LL;
	volatile int32_t t116 = -12016804;

    t116 = (x465>((x466!=x467)==x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x470 = 4487296584LLU;
	volatile uint64_t x472 = UINT64_MAX;

    t117 = (x469>((x470!=x471)==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 3;
	int16_t x474 = 8;
	int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MIN;
	volatile int32_t t118 = -27;

    t118 = (x473>((x474!=x475)==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 256276273124088637LLU;
	volatile uint32_t x478 = UINT32_MAX;
	uint32_t x479 = 45019U;
	int16_t x480 = INT16_MAX;
	volatile int32_t t119 = -2785752;

    t119 = (x477>((x478!=x479)==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 15519U;
	int64_t x482 = INT64_MAX;
	uint64_t x484 = 239294371566519564LLU;
	volatile int32_t t120 = 356;

    t120 = (x481>((x482!=x483)==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	static volatile int32_t x486 = INT32_MIN;
	uint32_t x487 = 54312113U;
	int32_t x488 = INT32_MAX;
	int32_t t121 = -409104;

    t121 = (x485>((x486!=x487)==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x490 = INT32_MAX;
	uint16_t x491 = 4375U;
	int32_t t122 = -313829374;

    t122 = (x489>((x490!=x491)==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	volatile uint32_t x494 = UINT32_MAX;
	int64_t x495 = INT64_MIN;
	static int16_t x496 = -1;
	int32_t t123 = -7755;

    t123 = (x493>((x494!=x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int32_t x498 = 8645;
	int32_t x499 = INT32_MIN;
	int64_t x500 = -1LL;
	int32_t t124 = 52626;

    t124 = (x497>((x498!=x499)==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	int8_t x503 = INT8_MIN;
	uint32_t x504 = UINT32_MAX;
	volatile int32_t t125 = 1001181;

    t125 = (x501>((x502!=x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = -1;
	int64_t x507 = INT64_MAX;
	static int32_t x508 = INT32_MIN;
	int32_t t126 = 1;

    t126 = (x505>((x506!=x507)==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 4U;
	volatile int64_t x511 = INT64_MAX;
	int32_t x512 = 78069523;
	volatile int32_t t127 = 0;

    t127 = (x509>((x510!=x511)==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	uint16_t x514 = 74U;
	static uint32_t x516 = 31551U;
	static int32_t t128 = 73736628;

    t128 = (x513>((x514!=x515)==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x520 = 0LLU;
	volatile int32_t t129 = -65;

    t129 = (x517>((x518!=x519)==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 9734U;
	static volatile uint32_t x522 = UINT32_MAX;
	int32_t x523 = 4782812;
	int64_t x524 = INT64_MIN;

    t130 = (x521>((x522!=x523)==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = -2858159LL;
	volatile uint64_t x526 = UINT64_MAX;
	volatile int64_t x527 = INT64_MIN;
	int64_t x528 = INT64_MIN;
	volatile int32_t t131 = -16449617;

    t131 = (x525>((x526!=x527)==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MAX;
	static int32_t x530 = INT32_MAX;
	int32_t t132 = 0;

    t132 = (x529>((x530!=x531)==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 23LLU;
	uint32_t x534 = 328193354U;
	int16_t x536 = -1;
	volatile int32_t t133 = 3837;

    t133 = (x533>((x534!=x535)==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x537 = 27U;
	uint8_t x538 = 1U;
	uint32_t x539 = 19344390U;
	uint64_t x540 = 16060515LLU;
	int32_t t134 = -226274;

    t134 = (x537>((x538!=x539)==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MAX;
	volatile int16_t x542 = INT16_MIN;
	volatile int8_t x543 = INT8_MIN;
	static int16_t x544 = 0;
	volatile int32_t t135 = 21;

    t135 = (x541>((x542!=x543)==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x545 = INT64_MIN;
	uint8_t x547 = 3U;
	int64_t x548 = INT64_MIN;
	int32_t t136 = -1224597;

    t136 = (x545>((x546!=x547)==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = UINT16_MAX;
	volatile uint16_t x550 = 590U;
	int16_t x552 = -1;
	int32_t t137 = -13671;

    t137 = (x549>((x550!=x551)==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 256752250;
	int16_t x554 = INT16_MIN;
	uint8_t x555 = 1U;

    t138 = (x553>((x554!=x555)==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x557 = 22677640U;
	volatile int8_t x558 = INT8_MIN;
	uint8_t x559 = UINT8_MAX;
	int32_t x560 = INT32_MAX;
	static volatile int32_t t139 = 13;

    t139 = (x557>((x558!=x559)==x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x562 = 63;
	int32_t x563 = INT32_MAX;
	int16_t x564 = INT16_MAX;
	volatile int32_t t140 = 905386150;

    t140 = (x561>((x562!=x563)==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x566 = INT64_MIN;
	static int64_t x567 = -1LL;
	int64_t x568 = -1LL;

    t141 = (x565>((x566!=x567)==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 7;
	int32_t x570 = INT32_MIN;
	int32_t t142 = 20;

    t142 = (x569>((x570!=x571)==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x574 = -1LL;
	static volatile uint64_t x575 = 0LLU;
	volatile int16_t x576 = 1;
	int32_t t143 = 165823;

    t143 = (x573>((x574!=x575)==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MIN;
	volatile uint8_t x578 = UINT8_MAX;
	volatile int32_t x579 = -1056425466;
	uint8_t x580 = 1U;

    t144 = (x577>((x578!=x579)==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	int32_t x582 = INT32_MIN;
	int8_t x583 = -1;
	static volatile int64_t x584 = -661545888LL;
	int32_t t145 = 4;

    t145 = (x581>((x582!=x583)==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -8;
	static uint16_t x586 = 509U;
	int8_t x587 = 3;
	static int32_t t146 = -12;

    t146 = (x585>((x586!=x587)==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x591 = INT32_MAX;
	static int32_t x592 = -1;

    t147 = (x589>((x590!=x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -132;
	int32_t x594 = INT32_MIN;
	static int16_t x596 = INT16_MAX;
	int32_t t148 = -13;

    t148 = (x593>((x594!=x595)==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	uint64_t x598 = 8LLU;
	int64_t x599 = INT64_MIN;
	static int32_t x600 = -744805029;

    t149 = (x597>((x598!=x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = 3848LL;
	static volatile uint16_t x602 = UINT16_MAX;
	static int8_t x603 = 21;
	int16_t x604 = 78;

    t150 = (x601>((x602!=x603)==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x605 = 24487123145010LL;
	int8_t x606 = -1;
	static uint16_t x607 = 6U;
	static int8_t x608 = INT8_MAX;
	static int32_t t151 = 863;

    t151 = (x605>((x606!=x607)==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	volatile int16_t x610 = INT16_MAX;
	uint32_t x611 = 749U;
	uint16_t x612 = 16034U;
	int32_t t152 = 717063058;

    t152 = (x609>((x610!=x611)==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = INT64_MAX;
	uint32_t x615 = 496380U;
	int32_t x616 = -1;
	int32_t t153 = -9337;

    t153 = (x613>((x614!=x615)==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x617 = 6U;
	uint16_t x618 = 5201U;
	static int16_t x619 = INT16_MAX;
	static volatile int32_t x620 = 145771;

    t154 = (x617>((x618!=x619)==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	volatile int16_t x622 = -3;
	uint8_t x623 = 3U;
	volatile uint32_t x624 = 20772611U;
	volatile int32_t t155 = 9375464;

    t155 = (x621>((x622!=x623)==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 159;
	static int32_t x627 = 373303;
	int64_t x628 = INT64_MIN;

    t156 = (x625>((x626!=x627)==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x630 = INT16_MIN;
	static int16_t x631 = INT16_MAX;
	int32_t x632 = INT32_MIN;

    t157 = (x629>((x630!=x631)==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x633 = UINT16_MAX;
	volatile int64_t x635 = -1150783385743803862LL;
	int8_t x636 = INT8_MIN;
	int32_t t158 = -312;

    t158 = (x633>((x634!=x635)==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MIN;
	static int8_t x638 = INT8_MIN;
	volatile int32_t t159 = 950;

    t159 = (x637>((x638!=x639)==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	uint32_t x642 = UINT32_MAX;
	volatile uint16_t x644 = 128U;
	int32_t t160 = -3;

    t160 = (x641>((x642!=x643)==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 19494LLU;
	int64_t x646 = 3377995455781LL;
	int16_t x647 = INT16_MIN;
	uint16_t x648 = 8U;
	volatile int32_t t161 = -2;

    t161 = (x645>((x646!=x647)==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MAX;
	uint64_t x650 = 7038306LLU;
	volatile int8_t x651 = INT8_MIN;
	int16_t x652 = INT16_MAX;
	volatile int32_t t162 = 305320756;

    t162 = (x649>((x650!=x651)==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 16980U;
	static volatile int64_t x654 = INT64_MIN;
	static int16_t x655 = 2700;
	volatile int16_t x656 = INT16_MIN;
	int32_t t163 = -6811;

    t163 = (x653>((x654!=x655)==x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = INT32_MIN;
	static int8_t x660 = INT8_MIN;
	int32_t t164 = 15631;

    t164 = (x657>((x658!=x659)==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x664 = 130988LLU;
	volatile int32_t t165 = 571;

    t165 = (x661>((x662!=x663)==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	int16_t x666 = INT16_MIN;
	volatile int64_t x668 = -1LL;
	int32_t t166 = -30;

    t166 = (x665>((x666!=x667)==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x669 = UINT16_MAX;
	static volatile uint16_t x670 = 0U;
	volatile int32_t x671 = 14;
	static int16_t x672 = -2428;
	volatile int32_t t167 = 0;

    t167 = (x669>((x670!=x671)==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = 3;
	static volatile int8_t x675 = -31;
	uint32_t x676 = 8688U;
	int32_t t168 = -1066612352;

    t168 = (x673>((x674!=x675)==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = UINT64_MAX;
	int16_t x678 = INT16_MIN;
	volatile int8_t x679 = INT8_MIN;
	int32_t x680 = INT32_MIN;
	int32_t t169 = 63587;

    t169 = (x677>((x678!=x679)==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	uint16_t x682 = 0U;
	int64_t x683 = -1LL;
	volatile uint8_t x684 = 1U;
	volatile int32_t t170 = 1948;

    t170 = (x681>((x682!=x683)==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 0U;
	int16_t x686 = INT16_MIN;
	uint64_t x688 = 16134496060346LLU;
	volatile int32_t t171 = 52;

    t171 = (x685>((x686!=x687)==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x690 = INT64_MIN;
	int16_t x691 = INT16_MAX;
	int32_t t172 = -27353;

    t172 = (x689>((x690!=x691)==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = 271747333;
	uint16_t x694 = 315U;
	uint8_t x695 = 0U;
	int32_t t173 = 806;

    t173 = (x693>((x694!=x695)==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 295U;
	static int8_t x698 = INT8_MIN;
	int16_t x699 = -1;
	volatile int32_t x700 = 1;
	int32_t t174 = -180;

    t174 = (x697>((x698!=x699)==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = UINT32_MAX;
	int8_t x702 = -1;
	int64_t x703 = INT64_MAX;
	int32_t x704 = -1;
	volatile int32_t t175 = -42071;

    t175 = (x701>((x702!=x703)==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -5;
	static volatile uint8_t x706 = 14U;
	static int64_t x707 = -20281223249794LL;
	volatile int64_t x708 = INT64_MIN;
	volatile int32_t t176 = 938168;

    t176 = (x705>((x706!=x707)==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int8_t x709 = INT8_MIN;
	uint64_t x710 = 12995872220683342LLU;
	int16_t x711 = -7427;
	volatile int8_t x712 = -1;

    t177 = (x709>((x710!=x711)==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 292U;
	int64_t x714 = -71532990LL;
	uint32_t x716 = 11U;

    t178 = (x713>((x714!=x715)==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	uint16_t x718 = 77U;
	int32_t x719 = -1;
	uint32_t x720 = 40844U;
	int32_t t179 = 19616;

    t179 = (x717>((x718!=x719)==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x721 = 170459LL;
	int32_t x722 = INT32_MAX;
	int32_t x723 = 11836901;
	int16_t x724 = INT16_MAX;
	int32_t t180 = -245;

    t180 = (x721>((x722!=x723)==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	static int8_t x726 = 0;
	int16_t x727 = INT16_MIN;
	int32_t t181 = 429110395;

    t181 = (x725>((x726!=x727)==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = -1;
	uint16_t x730 = UINT16_MAX;
	int16_t x731 = 5052;
	int32_t x732 = INT32_MIN;

    t182 = (x729>((x730!=x731)==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x734 = 13763445866LLU;
	int8_t x735 = -1;
	volatile int32_t t183 = 127;

    t183 = (x733>((x734!=x735)==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 392U;
	int16_t x739 = INT16_MIN;
	static volatile int64_t x740 = INT64_MIN;

    t184 = (x737>((x738!=x739)==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 0;
	int16_t x742 = -398;
	int16_t x743 = INT16_MIN;
	uint32_t x744 = UINT32_MAX;

    t185 = (x741>((x742!=x743)==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	static int32_t x746 = INT32_MIN;
	int16_t x747 = -1;
	int8_t x748 = INT8_MIN;
	int32_t t186 = 175060398;

    t186 = (x745>((x746!=x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -14;
	int64_t x750 = INT64_MIN;
	volatile int64_t x751 = INT64_MIN;
	int32_t t187 = 0;

    t187 = (x749>((x750!=x751)==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -192896477;
	uint16_t x754 = UINT16_MAX;
	volatile int64_t x755 = 519970LL;
	uint16_t x756 = 191U;
	volatile int32_t t188 = -1;

    t188 = (x753>((x754!=x755)==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 3U;
	static uint16_t x759 = 0U;
	volatile int64_t x760 = 4113202546LL;

    t189 = (x757>((x758!=x759)==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	int16_t x762 = 0;
	int8_t x763 = INT8_MIN;

    t190 = (x761>((x762!=x763)==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -1;
	int8_t x766 = INT8_MIN;
	volatile int8_t x768 = 2;
	int32_t t191 = 67421890;

    t191 = (x765>((x766!=x767)==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MAX;
	static volatile uint64_t x770 = 127507632634LLU;
	int64_t x771 = INT64_MAX;
	volatile int8_t x772 = INT8_MIN;

    t192 = (x769>((x770!=x771)==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 5U;
	volatile int32_t x774 = -1;
	int8_t x775 = 60;
	uint8_t x776 = 103U;

    t193 = (x773>((x774!=x775)==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = 933846LL;
	int16_t x778 = 53;
	int32_t x779 = INT32_MIN;
	int16_t x780 = -1;
	int32_t t194 = 12137476;

    t194 = (x777>((x778!=x779)==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -1;
	static int16_t x782 = 0;
	int64_t x783 = 14154905394356569LL;
	int16_t x784 = -1;
	volatile int32_t t195 = -1;

    t195 = (x781>((x782!=x783)==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	int8_t x787 = -60;
	volatile int8_t x788 = INT8_MIN;
	static volatile int32_t t196 = 2;

    t196 = (x785>((x786!=x787)==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x789 = 44979;
	uint64_t x790 = UINT64_MAX;
	int8_t x791 = 9;
	volatile int8_t x792 = INT8_MIN;
	int32_t t197 = -731747829;

    t197 = (x789>((x790!=x791)==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = 394189LLU;
	int8_t x794 = INT8_MIN;
	static int64_t x795 = -1LL;
	uint32_t x796 = 17U;

    t198 = (x793>((x794!=x795)==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x798 = UINT32_MAX;
	int64_t x799 = INT64_MIN;

    t199 = (x797>((x798!=x799)==x800));

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

