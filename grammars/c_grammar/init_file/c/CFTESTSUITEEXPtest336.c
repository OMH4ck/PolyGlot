
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

static uint16_t x1 = UINT16_MAX;
static int16_t x2 = -1;
static volatile int16_t x8 = INT16_MIN;
int64_t x10 = -1LL;
static uint16_t x11 = 206U;
int8_t x21 = -1;
volatile int32_t t5 = 3;
int8_t x27 = INT8_MIN;
static uint64_t x30 = 16397232LLU;
volatile uint32_t x31 = 11492U;
int32_t t7 = 765560;
int32_t x33 = 815202;
int64_t x34 = 3527485LL;
int64_t x35 = 42686LL;
int16_t x39 = 31;
int64_t x41 = INT64_MIN;
int32_t t11 = -4769982;
int8_t x50 = INT8_MAX;
static int16_t x52 = 7105;
static uint64_t x53 = UINT64_MAX;
volatile int8_t x56 = 15;
int16_t x60 = -1;
int32_t t14 = 15558932;
uint8_t x75 = 0U;
int64_t t19 = 32409LL;
volatile uint32_t x93 = 5510693U;
volatile uint64_t x100 = 515320010128LLU;
volatile int32_t t22 = 31;
int16_t x108 = -109;
uint8_t x109 = 4U;
uint64_t x120 = 643452198803LLU;
uint64_t x121 = 143244669LLU;
int64_t t28 = 48466252806937406LL;
int32_t x129 = INT32_MAX;
uint8_t x135 = UINT8_MAX;
uint8_t x139 = UINT8_MAX;
static int16_t x143 = 42;
uint8_t x145 = UINT8_MAX;
int32_t x147 = -1;
int64_t x151 = INT64_MAX;
uint16_t x153 = 4027U;
static uint32_t x155 = UINT32_MAX;
int8_t x158 = 18;
int8_t x159 = -1;
uint64_t x165 = 11542011LLU;
volatile int64_t x168 = 58LL;
uint8_t x173 = UINT8_MAX;
uint32_t x180 = 117788U;
volatile int32_t x181 = -2498314;
volatile int64_t x194 = INT64_MAX;
uint32_t x202 = 52U;
int8_t x206 = INT8_MAX;
static int8_t x226 = -14;
static uint16_t x232 = UINT16_MAX;
static uint64_t x242 = 4317LLU;
int64_t t55 = 115272582345LL;
int64_t x247 = -1LL;
volatile int32_t t57 = 4978;
int8_t x253 = INT8_MIN;
volatile int32_t t58 = -379;
int16_t x258 = INT16_MIN;
int8_t x271 = -1;
int32_t x273 = 100048254;
static int32_t t61 = 6;
static int32_t t62 = -5864039;
uint16_t x282 = UINT16_MAX;
int8_t x286 = INT8_MIN;
uint32_t x290 = 288108455U;
int64_t x299 = INT64_MIN;
int64_t x301 = INT64_MAX;
static uint64_t x303 = UINT64_MAX;
int8_t x304 = 0;
int64_t x309 = INT64_MIN;
int8_t x312 = 0;
volatile int64_t t70 = -656530493438507LL;
uint16_t x315 = UINT16_MAX;
static int8_t x318 = -49;
int8_t x319 = 0;
static int16_t x321 = 12865;
int64_t x328 = INT64_MIN;
uint8_t x332 = 1U;
int32_t x336 = INT32_MIN;
int64_t x339 = -1LL;
volatile int32_t t77 = 65250723;
static int64_t t80 = INT64_MIN;
volatile int32_t t81 = -87;
static int16_t x367 = INT16_MIN;
uint16_t x373 = 2U;
uint64_t x376 = UINT64_MAX;
volatile uint32_t t87 = 13U;
static volatile int32_t t88 = 59386;
volatile int32_t t89 = 48;
int32_t t90 = 103607;
int32_t t91 = -54492180;
int8_t x402 = 11;
uint64_t x403 = 335LLU;
static int64_t t93 = INT64_MIN;
uint16_t x413 = UINT16_MAX;
int64_t x415 = 24488LL;
volatile int32_t t95 = 32;
int32_t t96 = -28047016;
uint32_t x436 = 320878359U;
volatile int32_t t102 = -2747;
int8_t x456 = INT8_MAX;
int32_t t104 = -326512;
volatile int32_t x458 = -20;
static uint16_t x463 = 7161U;
volatile uint32_t x464 = 27064739U;
volatile int32_t x483 = -7;
int16_t x499 = -1;
uint16_t x502 = UINT16_MAX;
static int64_t x504 = INT64_MAX;
uint16_t x505 = 16693U;
uint32_t x510 = 27579U;
int32_t t118 = 78;
uint16_t x520 = UINT16_MAX;
uint64_t x522 = 1872152393LLU;
int64_t x526 = INT64_MIN;
uint64_t x534 = 2242780400LLU;
uint64_t x542 = 11974908485448422LLU;
volatile int16_t x543 = INT16_MIN;
static int16_t x549 = -1;
uint16_t x552 = 182U;
static int8_t x555 = INT8_MIN;
volatile int32_t t128 = -29463;
int32_t t129 = -3;
volatile int8_t x565 = -7;
int8_t x568 = 9;
static int32_t t130 = 1;
volatile int64_t x574 = -1LL;
int16_t x576 = INT16_MIN;
static int64_t x580 = INT64_MAX;
uint16_t x582 = 46U;
static int64_t x584 = INT64_MIN;
uint32_t t135 = 959911U;
int64_t x592 = INT64_MAX;
int8_t x594 = INT8_MAX;
static uint64_t x598 = UINT64_MAX;
volatile uint64_t t139 = 1793LLU;
volatile uint64_t x611 = 2116LLU;
int8_t x612 = -1;
int32_t t142 = 204048;
volatile int32_t t145 = 35;
uint32_t t147 = 1829624501U;
int32_t x642 = 1;
static volatile int32_t t149 = 123;
int16_t x647 = 76;
static int32_t x649 = 1;
int8_t x650 = -1;
uint32_t x651 = UINT32_MAX;
uint64_t x659 = 3849493761320115LLU;
static int8_t x670 = 1;
int16_t x672 = INT16_MAX;
volatile uint64_t x673 = UINT64_MAX;
int32_t x681 = 9;
uint32_t x683 = 870U;
int64_t x687 = -1LL;
int32_t t161 = 46;
static int8_t x699 = 0;
volatile int32_t x705 = INT32_MIN;
int32_t t164 = 652;
int32_t x710 = 229;
int64_t x720 = INT64_MIN;
static int64_t t167 = INT64_MAX;
uint16_t x723 = UINT16_MAX;
int16_t x724 = -1896;
int16_t x727 = INT16_MIN;
int16_t x732 = -4492;
volatile uint32_t x734 = 398U;
int16_t x736 = INT16_MIN;
int32_t x741 = INT32_MAX;
static int64_t x744 = INT64_MIN;
static volatile int32_t x752 = INT32_MAX;
uint64_t x765 = 7089LLU;
int16_t x769 = 3;
int8_t x770 = INT8_MIN;
int8_t x774 = 31;
uint16_t x776 = 51U;
int32_t x777 = -1;
int8_t x787 = INT8_MAX;
uint16_t x801 = 1467U;
uint32_t x804 = UINT32_MAX;
volatile uint16_t x810 = 8U;
int8_t x811 = INT8_MIN;
int8_t x815 = INT8_MIN;
int32_t t190 = -1337490;
uint64_t x819 = 135832784422339730LLU;
uint32_t x823 = 7669360U;
volatile int32_t t192 = -813;
uint32_t x825 = 72876U;
int32_t x827 = INT32_MIN;
volatile uint16_t x832 = 15U;
int32_t x839 = INT32_MAX;
uint64_t x841 = 651423541388LLU;
volatile int8_t x842 = 0;
static volatile int32_t x844 = 2;
uint64_t t197 = 353988268LLU;
static int16_t x856 = -2;
volatile int32_t t199 = INT32_MAX;


void f0(void) {
    	int64_t x3 = INT64_MIN;
	volatile uint32_t x4 = UINT32_MAX;
	int32_t t0 = 6861125;

    t0 = (x1^((x2-x3)<=x4));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = 33;
	static int64_t x6 = -30100219117412LL;
	volatile uint16_t x7 = UINT16_MAX;
	volatile int32_t t1 = 43598813;

    t1 = (x5^((x6-x7)<=x8));

    if (t1 != 32) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int16_t x12 = -326;
	static volatile int32_t t2 = 143;

    t2 = (x9^((x10-x11)<=x12));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MIN;
	static volatile int16_t x15 = 885;
	static int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = UINT64_MAX;

    t3 = (x13^((x14-x15)<=x16));

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int8_t x18 = -51;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = 1;
	static int64_t t4 = INT64_MAX;

    t4 = (x17^((x18-x19)<=x20));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MAX;
	static uint16_t x23 = 21470U;
	volatile uint8_t x24 = 49U;

    t5 = (x21^((x22-x23)<=x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = 14283;
	int8_t x26 = INT8_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -4007143;

    t6 = (x25^((x26-x27)<=x28));

    if (t6 != 14283) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	uint32_t x32 = UINT32_MAX;

    t7 = (x29^((x30-x31)<=x32));

    if (t7 != 2147483646) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x36 = INT64_MIN;
	static volatile int32_t t8 = 103;

    t8 = (x33^((x34-x35)<=x36));

    if (t8 != 815202) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 1882U;
	uint8_t x38 = UINT8_MAX;
	int64_t x40 = 14718364631702LL;
	static uint32_t t9 = 156U;

    t9 = (x37^((x38-x39)<=x40));

    if (t9 != 1883U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x42 = UINT32_MAX;
	int16_t x43 = -1;
	volatile int8_t x44 = 42;
	static volatile int64_t t10 = -1LL;

    t10 = (x41^((x42-x43)<=x44));

    if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x45 = UINT16_MAX;
	volatile int64_t x46 = 5563679009506LL;
	volatile int8_t x47 = 4;
	static int8_t x48 = 0;

    t11 = (x45^((x46-x47)<=x48));

    if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 4U;
	uint32_t x51 = UINT32_MAX;
	volatile int32_t t12 = -61342;

    t12 = (x49^((x50-x51)<=x52));

    if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x54 = -24746198;
	volatile int64_t x55 = 4056288LL;
	volatile uint64_t t13 = 1LLU;

    t13 = (x53^((x54-x55)<=x56));

    if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	int64_t x59 = -1LL;

    t14 = (x57^((x58-x59)<=x60));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = UINT64_MAX;
	int8_t x70 = -1;
	int64_t x71 = INT64_MAX;
	static uint32_t x72 = UINT32_MAX;
	uint64_t t15 = 59631977LLU;

    t15 = (x69^((x70-x71)<=x72));

    if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = 1353634;
	static int32_t x74 = -1;
	int8_t x76 = -1;
	static volatile int32_t t16 = -111467;

    t16 = (x73^((x74-x75)<=x76));

    if (t16 != 1353635) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = -1LL;
	uint32_t x78 = 7824U;
	volatile int64_t x79 = INT64_MAX;
	int64_t x80 = -1LL;
	volatile int64_t t17 = -3LL;

    t17 = (x77^((x78-x79)<=x80));

    if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = 19;
	static int64_t x82 = INT64_MIN;
	int64_t x83 = -9907LL;
	static int16_t x84 = INT16_MIN;
	int32_t t18 = -442246;

    t18 = (x81^((x82-x83)<=x84));

    if (t18 != 18) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = -1LL;
	int8_t x86 = 0;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = 10U;

    t19 = (x85^((x86-x87)<=x88));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x89 = -2976;
	int8_t x90 = INT8_MAX;
	int64_t x91 = -1LL;
	uint32_t x92 = 15633234U;
	volatile int32_t t20 = -8135;

    t20 = (x89^((x90-x91)<=x92));

    if (t20 != -2975) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x94 = 285174651805LL;
	int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MAX;
	uint32_t t21 = 2831U;

    t21 = (x93^((x94-x95)<=x96));

    if (t21 != 5510693U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MIN;
	static int16_t x98 = INT16_MIN;
	volatile int8_t x99 = INT8_MAX;

    t22 = (x97^((x98-x99)<=x100));

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x105 = -1;
	static int16_t x106 = INT16_MAX;
	volatile uint32_t x107 = 3290U;
	int32_t t23 = 122;

    t23 = (x105^((x106-x107)<=x108));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x110 = INT16_MAX;
	static uint16_t x111 = UINT16_MAX;
	int64_t x112 = INT64_MIN;
	volatile int32_t t24 = 3574668;

    t24 = (x109^((x110-x111)<=x112));

    if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x113 = 449929U;
	uint64_t x114 = 3271260LLU;
	uint64_t x115 = UINT64_MAX;
	int8_t x116 = INT8_MIN;
	uint32_t t25 = 403831043U;

    t25 = (x113^((x114-x115)<=x116));

    if (t25 != 449928U) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = 95;
	int64_t x118 = -1LL;
	int64_t x119 = INT64_MIN;
	int32_t t26 = 10;

    t26 = (x117^((x118-x119)<=x120));

    if (t26 != 95) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x122 = 60;
	int16_t x123 = -1;
	static uint8_t x124 = 3U;
	uint64_t t27 = 1LLU;

    t27 = (x121^((x122-x123)<=x124));

    if (t27 != 143244669LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = INT64_MIN;
	static int8_t x126 = INT8_MAX;
	static uint64_t x127 = UINT64_MAX;
	uint64_t x128 = 43579450209LLU;

    t28 = (x125^((x126-x127)<=x128));

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x130 = UINT32_MAX;
	int16_t x131 = INT16_MAX;
	int8_t x132 = 1;
	int32_t t29 = INT32_MAX;

    t29 = (x129^((x130-x131)<=x132));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x133 = 0U;
	uint8_t x134 = 3U;
	int64_t x136 = -298639647137140LL;
	volatile int32_t t30 = -3;

    t30 = (x133^((x134-x135)<=x136));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x137 = INT8_MAX;
	int8_t x138 = INT8_MIN;
	uint16_t x140 = UINT16_MAX;
	int32_t t31 = 140561810;

    t31 = (x137^((x138-x139)<=x140));

    if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = 430;
	uint16_t x142 = UINT16_MAX;
	uint8_t x144 = UINT8_MAX;
	int32_t t32 = 6458258;

    t32 = (x141^((x142-x143)<=x144));

    if (t32 != 430) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x146 = INT64_MIN;
	volatile int32_t x148 = INT32_MAX;
	volatile int32_t t33 = 2505;

    t33 = (x145^((x146-x147)<=x148));

    if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x149 = 2U;
	int16_t x150 = 1;
	uint32_t x152 = 126315140U;
	int32_t t34 = -1;

    t34 = (x149^((x150-x151)<=x152));

    if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x154 = 314U;
	int16_t x156 = INT16_MAX;
	int32_t t35 = 25148976;

    t35 = (x153^((x154-x155)<=x156));

    if (t35 != 4026) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x157 = INT64_MAX;
	int32_t x160 = INT32_MIN;
	volatile int64_t t36 = INT64_MAX;

    t36 = (x157^((x158-x159)<=x160));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = 1273LL;
	int64_t x162 = -1LL;
	static int32_t x163 = 301843;
	int8_t x164 = INT8_MIN;
	static int64_t t37 = 279239060538585505LL;

    t37 = (x161^((x162-x163)<=x164));

    if (t37 != 1272LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x166 = INT16_MAX;
	int64_t x167 = -1LL;
	volatile uint64_t t38 = 2716249930907759LLU;

    t38 = (x165^((x166-x167)<=x168));

    if (t38 != 11542011LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x169 = 7LLU;
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	volatile uint32_t x172 = 111102776U;
	uint64_t t39 = 513934288013LLU;

    t39 = (x169^((x170-x171)<=x172));

    if (t39 != 6LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x174 = -2205;
	static volatile uint16_t x175 = UINT16_MAX;
	uint16_t x176 = 205U;
	volatile int32_t t40 = 7;

    t40 = (x173^((x174-x175)<=x176));

    if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x177 = 15942047U;
	static uint64_t x178 = 4LLU;
	int32_t x179 = -1333373;
	static volatile uint32_t t41 = 745U;

    t41 = (x177^((x178-x179)<=x180));

    if (t41 != 15942047U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x182 = UINT32_MAX;
	int16_t x183 = 1;
	int8_t x184 = -1;
	volatile int32_t t42 = 192570258;

    t42 = (x181^((x182-x183)<=x184));

    if (t42 != -2498313) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = INT16_MIN;
	uint16_t x186 = 7U;
	uint32_t x187 = 2571660U;
	static int16_t x188 = INT16_MAX;
	static volatile int32_t t43 = -11680771;

    t43 = (x185^((x186-x187)<=x188));

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = -6;
	volatile int8_t x190 = INT8_MIN;
	static uint16_t x191 = 8930U;
	uint64_t x192 = 33061666284228LLU;
	volatile int32_t t44 = -3905548;

    t44 = (x189^((x190-x191)<=x192));

    if (t44 != -6) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x193 = -1;
	volatile uint32_t x195 = 54679013U;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t45 = 47;

    t45 = (x193^((x194-x195)<=x196));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x197 = 43323LL;
	volatile uint64_t x198 = UINT64_MAX;
	uint64_t x199 = 225LLU;
	uint8_t x200 = UINT8_MAX;
	volatile int64_t t46 = -32770327206025056LL;

    t46 = (x197^((x198-x199)<=x200));

    if (t46 != 43323LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x201 = 78U;
	int64_t x203 = 3LL;
	volatile int32_t x204 = 310633;
	int32_t t47 = 4;

    t47 = (x201^((x202-x203)<=x204));

    if (t47 != 79) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = -40;
	static uint32_t x207 = UINT32_MAX;
	int8_t x208 = -17;
	int32_t t48 = 73849;

    t48 = (x205^((x206-x207)<=x208));

    if (t48 != -39) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = -1;
	int64_t x210 = INT64_MAX;
	uint8_t x211 = UINT8_MAX;
	volatile uint8_t x212 = UINT8_MAX;
	int32_t t49 = 1;

    t49 = (x209^((x210-x211)<=x212));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = INT64_MIN;
	volatile int16_t x214 = -1;
	uint32_t x215 = 51243U;
	uint16_t x216 = UINT16_MAX;
	static volatile int64_t t50 = INT64_MIN;

    t50 = (x213^((x214-x215)<=x216));

    if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = -231096629;
	uint64_t x218 = UINT64_MAX;
	int32_t x219 = -1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t51 = 56;

    t51 = (x217^((x218-x219)<=x220));

    if (t51 != -231096630) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x225 = INT16_MAX;
	int16_t x227 = INT16_MIN;
	uint8_t x228 = 61U;
	int32_t t52 = -750327776;

    t52 = (x225^((x226-x227)<=x228));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x229 = -1;
	static int64_t x230 = INT64_MIN;
	volatile uint64_t x231 = 265642337402414LLU;
	volatile int32_t t53 = 71565;

    t53 = (x229^((x230-x231)<=x232));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x237 = -1LL;
	int64_t x238 = -44847179573780LL;
	int16_t x239 = INT16_MIN;
	volatile uint8_t x240 = UINT8_MAX;
	volatile int64_t t54 = -11450061587062972LL;

    t54 = (x237^((x238-x239)<=x240));

    if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x241 = 2LL;
	int32_t x243 = 50759100;
	static int16_t x244 = INT16_MAX;

    t55 = (x241^((x242-x243)<=x244));

    if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x245 = 1U;
	static int16_t x246 = -1;
	static int64_t x248 = 4094826520859LL;
	static volatile int32_t t56 = 98528403;

    t56 = (x245^((x246-x247)<=x248));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x249 = -1;
	int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MIN;
	int8_t x252 = -1;

    t57 = (x249^((x250-x251)<=x252));

    if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x254 = 10U;
	static uint16_t x255 = 12195U;
	int8_t x256 = INT8_MAX;

    t58 = (x253^((x254-x255)<=x256));

    if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x257 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MIN;
	static int32_t t59 = -156;

    t59 = (x257^((x258-x259)<=x260));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x269 = UINT64_MAX;
	static int16_t x270 = INT16_MAX;
	static int16_t x272 = -1;
	volatile uint64_t t60 = UINT64_MAX;

    t60 = (x269^((x270-x271)<=x272));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x274 = -84;
	int16_t x275 = -1;
	int64_t x276 = INT64_MIN;

    t61 = (x273^((x274-x275)<=x276));

    if (t61 != 100048254) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = 672;
	int64_t x278 = -200977LL;
	int16_t x279 = -16261;
	static int8_t x280 = 1;

    t62 = (x277^((x278-x279)<=x280));

    if (t62 != 673) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x281 = 476;
	static uint32_t x283 = UINT32_MAX;
	int8_t x284 = -53;
	int32_t t63 = 5988;

    t63 = (x281^((x282-x283)<=x284));

    if (t63 != 477) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x285 = 2105426506627626498LLU;
	static int8_t x287 = INT8_MAX;
	int16_t x288 = INT16_MAX;
	uint64_t t64 = 75187LLU;

    t64 = (x285^((x286-x287)<=x288));

    if (t64 != 2105426506627626499LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x289 = -1;
	static int16_t x291 = INT16_MIN;
	static int32_t x292 = -105333076;
	volatile int32_t t65 = 129700325;

    t65 = (x289^((x290-x291)<=x292));

    if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = INT32_MIN;
	int16_t x294 = -1;
	volatile int32_t x295 = -1;
	uint64_t x296 = 6316319069756047LLU;
	int32_t t66 = 107;

    t66 = (x293^((x294-x295)<=x296));

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x297 = 17775U;
	int32_t x298 = -1;
	int16_t x300 = INT16_MAX;
	volatile int32_t t67 = -1708;

    t67 = (x297^((x298-x299)<=x300));

    if (t67 != 17775) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x302 = 49442982U;
	static volatile int64_t t68 = INT64_MAX;

    t68 = (x301^((x302-x303)<=x304));

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x305 = INT8_MAX;
	uint64_t x306 = 1739491LLU;
	static volatile int16_t x307 = INT16_MAX;
	uint8_t x308 = 119U;
	volatile int32_t t69 = 22;

    t69 = (x305^((x306-x307)<=x308));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x310 = -2199LL;
	uint8_t x311 = 2U;

    t70 = (x309^((x310-x311)<=x312));

    if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x313 = 286385U;
	uint32_t x314 = 20373925U;
	int8_t x316 = 52;
	uint32_t t71 = 121739U;

    t71 = (x313^((x314-x315)<=x316));

    if (t71 != 286385U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x317 = INT64_MIN;
	int32_t x320 = INT32_MAX;
	int64_t t72 = 38LL;

    t72 = (x317^((x318-x319)<=x320));

    if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x322 = 4084695U;
	static uint64_t x323 = UINT64_MAX;
	int16_t x324 = -14;
	volatile int32_t t73 = 0;

    t73 = (x321^((x322-x323)<=x324));

    if (t73 != 12864) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x325 = -1LL;
	uint64_t x326 = 1970LLU;
	uint64_t x327 = 75141771320485681LLU;
	int64_t t74 = 11LL;

    t74 = (x325^((x326-x327)<=x328));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x329 = 109U;
	volatile uint8_t x330 = 30U;
	volatile uint32_t x331 = UINT32_MAX;
	volatile int32_t t75 = 10286982;

    t75 = (x329^((x330-x331)<=x332));

    if (t75 != 109) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x333 = UINT64_MAX;
	int8_t x334 = INT8_MIN;
	int16_t x335 = -1;
	static uint64_t t76 = UINT64_MAX;

    t76 = (x333^((x334-x335)<=x336));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x337 = 1U;
	int8_t x338 = -1;
	uint32_t x340 = 4549U;

    t77 = (x337^((x338-x339)<=x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x341 = UINT64_MAX;
	static int64_t x342 = -1LL;
	static uint16_t x343 = UINT16_MAX;
	uint64_t x344 = 320901359223LLU;
	uint64_t t78 = UINT64_MAX;

    t78 = (x341^((x342-x343)<=x344));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x345 = 8473317399317LL;
	uint16_t x346 = UINT16_MAX;
	static int8_t x347 = -1;
	int8_t x348 = -1;
	volatile int64_t t79 = 2927452058LL;

    t79 = (x345^((x346-x347)<=x348));

    if (t79 != 8473317399317LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x353 = INT64_MIN;
	uint64_t x354 = UINT64_MAX;
	volatile uint16_t x355 = UINT16_MAX;
	static uint16_t x356 = 4U;

    t80 = (x353^((x354-x355)<=x356));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x357 = INT32_MIN;
	uint16_t x358 = 238U;
	static int16_t x359 = INT16_MAX;
	int64_t x360 = INT64_MAX;

    t81 = (x357^((x358-x359)<=x360));

    if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x361 = INT64_MIN;
	static int64_t x362 = INT64_MAX;
	int16_t x363 = 270;
	int32_t x364 = INT32_MIN;
	volatile int64_t t82 = INT64_MIN;

    t82 = (x361^((x362-x363)<=x364));

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint16_t x365 = UINT16_MAX;
	int8_t x366 = 6;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t83 = 0;

    t83 = (x365^((x366-x367)<=x368));

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x369 = INT64_MAX;
	volatile int32_t x370 = -1;
	uint8_t x371 = 122U;
	uint16_t x372 = 110U;
	volatile int64_t t84 = 1LL;

    t84 = (x369^((x370-x371)<=x372));

    if (t84 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x374 = INT8_MAX;
	int16_t x375 = INT16_MIN;
	volatile int32_t t85 = -1;

    t85 = (x373^((x374-x375)<=x376));

    if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x377 = 517558135914952772LL;
	uint16_t x378 = 14U;
	volatile int8_t x379 = 25;
	uint32_t x380 = 235U;
	int64_t t86 = -3345649074430838LL;

    t86 = (x377^((x378-x379)<=x380));

    if (t86 != 517558135914952772LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x381 = 8002173U;
	static uint64_t x382 = 3LLU;
	static int8_t x383 = 8;
	static uint16_t x384 = UINT16_MAX;

    t87 = (x381^((x382-x383)<=x384));

    if (t87 != 8002173U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x385 = INT32_MIN;
	volatile uint32_t x386 = 72851613U;
	uint64_t x387 = 15510790394981LLU;
	int32_t x388 = -39996301;

    t88 = (x385^((x386-x387)<=x388));

    if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x389 = INT16_MIN;
	int32_t x390 = -1;
	uint16_t x391 = 162U;
	int8_t x392 = -9;

    t89 = (x389^((x390-x391)<=x392));

    if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x393 = UINT16_MAX;
	uint32_t x394 = 45106901U;
	uint32_t x395 = 1934037000U;
	volatile uint8_t x396 = 14U;

    t90 = (x393^((x394-x395)<=x396));

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x397 = 0;
	static uint32_t x398 = 2934435U;
	uint32_t x399 = UINT32_MAX;
	volatile int16_t x400 = INT16_MAX;

    t91 = (x397^((x398-x399)<=x400));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x401 = -119;
	int8_t x404 = -1;
	static int32_t t92 = 734;

    t92 = (x401^((x402-x403)<=x404));

    if (t92 != -120) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x405 = INT64_MIN;
	uint64_t x406 = 2580077LLU;
	int16_t x407 = -1;
	static uint8_t x408 = 54U;

    t93 = (x405^((x406-x407)<=x408));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x409 = 31U;
	volatile uint8_t x410 = UINT8_MAX;
	static int64_t x411 = -1LL;
	int8_t x412 = INT8_MAX;
	int32_t t94 = 489997;

    t94 = (x409^((x410-x411)<=x412));

    if (t94 != 31) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x414 = 6U;
	static volatile int32_t x416 = 1;

    t95 = (x413^((x414-x415)<=x416));

    if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x417 = -1;
	int8_t x418 = 1;
	volatile uint8_t x419 = UINT8_MAX;
	volatile int64_t x420 = INT64_MIN;

    t96 = (x417^((x418-x419)<=x420));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x425 = -1;
	static int16_t x426 = INT16_MIN;
	int64_t x427 = -947716166102LL;
	int64_t x428 = INT64_MIN;
	volatile int32_t t97 = 8456159;

    t97 = (x425^((x426-x427)<=x428));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x429 = UINT16_MAX;
	static volatile int8_t x430 = -16;
	int64_t x431 = INT64_MIN;
	uint64_t x432 = 71191LLU;
	int32_t t98 = 0;

    t98 = (x429^((x430-x431)<=x432));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x433 = UINT16_MAX;
	volatile int32_t x434 = -7548133;
	volatile int8_t x435 = 0;
	static int32_t t99 = 61952;

    t99 = (x433^((x434-x435)<=x436));

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x437 = UINT32_MAX;
	volatile uint16_t x438 = 2U;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = 13817;
	volatile uint32_t t100 = 64526131U;

    t100 = (x437^((x438-x439)<=x440));

    if (t100 != 4294967294U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x441 = 0LLU;
	uint8_t x442 = 2U;
	volatile int8_t x443 = -1;
	static int64_t x444 = INT64_MIN;
	volatile uint64_t t101 = 5LLU;

    t101 = (x441^((x442-x443)<=x444));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x445 = INT16_MIN;
	int64_t x446 = -1LL;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = 1;

    t102 = (x445^((x446-x447)<=x448));

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x449 = 29U;
	int64_t x450 = 13407893LL;
	int16_t x451 = INT16_MAX;
	int64_t x452 = -1LL;
	volatile int32_t t103 = 27;

    t103 = (x449^((x450-x451)<=x452));

    if (t103 != 29) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x453 = -1;
	static volatile uint16_t x454 = 2354U;
	int16_t x455 = INT16_MIN;

    t104 = (x453^((x454-x455)<=x456));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x457 = UINT64_MAX;
	volatile int8_t x459 = 17;
	int16_t x460 = -2;
	volatile uint64_t t105 = 1060849911934350648LLU;

    t105 = (x457^((x458-x459)<=x460));

    if (t105 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x461 = INT16_MAX;
	uint64_t x462 = 57823LLU;
	volatile int32_t t106 = 271124770;

    t106 = (x461^((x462-x463)<=x464));

    if (t106 != 32766) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x465 = INT16_MIN;
	uint16_t x466 = 369U;
	int16_t x467 = 1;
	int32_t x468 = -1;
	int32_t t107 = 931;

    t107 = (x465^((x466-x467)<=x468));

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x469 = 32U;
	int64_t x470 = -177079327LL;
	static uint16_t x471 = 21U;
	uint64_t x472 = 6139683064915436936LLU;
	static int32_t t108 = -148123579;

    t108 = (x469^((x470-x471)<=x472));

    if (t108 != 32) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x473 = INT8_MIN;
	int64_t x474 = 1233396092767664LL;
	volatile int16_t x475 = 0;
	uint32_t x476 = UINT32_MAX;
	int32_t t109 = -3;

    t109 = (x473^((x474-x475)<=x476));

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x481 = 3U;
	static int16_t x482 = -1;
	int8_t x484 = INT8_MIN;
	volatile int32_t t110 = -26451514;

    t110 = (x481^((x482-x483)<=x484));

    if (t110 != 3) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x485 = INT64_MIN;
	static volatile int8_t x486 = INT8_MAX;
	int16_t x487 = INT16_MIN;
	uint32_t x488 = 331750791U;
	int64_t t111 = 33089590255989LL;

    t111 = (x485^((x486-x487)<=x488));

    if (t111 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x489 = 2;
	int64_t x490 = -1LL;
	uint64_t x491 = UINT64_MAX;
	int64_t x492 = 14143073267513LL;
	int32_t t112 = -384;

    t112 = (x489^((x490-x491)<=x492));

    if (t112 != 3) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x493 = -255;
	int8_t x494 = -4;
	uint64_t x495 = UINT64_MAX;
	int32_t x496 = -1;
	volatile int32_t t113 = 7169;

    t113 = (x493^((x494-x495)<=x496));

    if (t113 != -256) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x497 = INT8_MIN;
	static volatile int8_t x498 = -1;
	static int32_t x500 = -1;
	int32_t t114 = 2;

    t114 = (x497^((x498-x499)<=x500));

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x501 = INT64_MAX;
	int8_t x503 = INT8_MIN;
	int64_t t115 = 907245084LL;

    t115 = (x501^((x502-x503)<=x504));

    if (t115 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x506 = UINT8_MAX;
	int8_t x507 = INT8_MAX;
	uint8_t x508 = 54U;
	int32_t t116 = -3075;

    t116 = (x505^((x506-x507)<=x508));

    if (t116 != 16693) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x509 = INT8_MIN;
	static uint64_t x511 = 4374718LLU;
	static uint32_t x512 = 38444628U;
	int32_t t117 = 410352618;

    t117 = (x509^((x510-x511)<=x512));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x513 = INT16_MAX;
	int64_t x514 = -127775915370LL;
	uint32_t x515 = 168058U;
	static volatile int64_t x516 = INT64_MAX;

    t118 = (x513^((x514-x515)<=x516));

    if (t118 != 32766) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x517 = INT32_MAX;
	volatile int64_t x518 = 660192853700991LL;
	int16_t x519 = INT16_MIN;
	volatile int32_t t119 = INT32_MAX;

    t119 = (x517^((x518-x519)<=x520));

    if (t119 != INT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x521 = 8LLU;
	uint16_t x523 = 62U;
	int32_t x524 = INT32_MIN;
	uint64_t t120 = 1422097188LLU;

    t120 = (x521^((x522-x523)<=x524));

    if (t120 != 9LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x525 = INT32_MAX;
	int64_t x527 = INT64_MIN;
	volatile uint32_t x528 = 4437U;
	volatile int32_t t121 = 3883654;

    t121 = (x525^((x526-x527)<=x528));

    if (t121 != 2147483646) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x529 = -1LL;
	volatile uint8_t x530 = UINT8_MAX;
	int8_t x531 = -1;
	static uint8_t x532 = 41U;
	volatile int64_t t122 = -50023LL;

    t122 = (x529^((x530-x531)<=x532));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x533 = 61;
	volatile int8_t x535 = -1;
	int32_t x536 = INT32_MIN;
	static volatile int32_t t123 = 1;

    t123 = (x533^((x534-x535)<=x536));

    if (t123 != 60) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x537 = INT64_MAX;
	uint16_t x538 = 7U;
	volatile int16_t x539 = INT16_MIN;
	uint16_t x540 = UINT16_MAX;
	int64_t t124 = -14018111436LL;

    t124 = (x537^((x538-x539)<=x540));

    if (t124 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x541 = 1224635419040894LLU;
	static volatile int16_t x544 = -1;
	volatile uint64_t t125 = 1LLU;

    t125 = (x541^((x542-x543)<=x544));

    if (t125 != 1224635419040895LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x545 = 142U;
	int16_t x546 = INT16_MAX;
	uint64_t x547 = 1141870LLU;
	uint16_t x548 = 9696U;
	int32_t t126 = 114833612;

    t126 = (x545^((x546-x547)<=x548));

    if (t126 != 142) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x550 = 15;
	int64_t x551 = INT64_MAX;
	int32_t t127 = 1;

    t127 = (x549^((x550-x551)<=x552));

    if (t127 != -2) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x553 = 0U;
	int8_t x554 = -1;
	int16_t x556 = INT16_MIN;

    t128 = (x553^((x554-x555)<=x556));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x561 = -1;
	int16_t x562 = -1;
	uint32_t x563 = 1644091U;
	int8_t x564 = INT8_MIN;

    t129 = (x561^((x562-x563)<=x564));

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x566 = -1LL;
	int16_t x567 = INT16_MIN;

    t130 = (x565^((x566-x567)<=x568));

    if (t130 != -7) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x569 = -1;
	volatile uint64_t x570 = UINT64_MAX;
	int8_t x571 = 36;
	int64_t x572 = -759119777LL;
	int32_t t131 = 378;

    t131 = (x569^((x570-x571)<=x572));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x573 = INT16_MIN;
	static int32_t x575 = INT32_MIN;
	volatile int32_t t132 = -2488;

    t132 = (x573^((x574-x575)<=x576));

    if (t132 != -32768) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x577 = INT32_MIN;
	uint8_t x578 = 40U;
	volatile uint16_t x579 = 119U;
	int32_t t133 = -12161;

    t133 = (x577^((x578-x579)<=x580));

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x581 = -1;
	uint8_t x583 = 8U;
	volatile int32_t t134 = 26826226;

    t134 = (x581^((x582-x583)<=x584));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x585 = 27472U;
	int8_t x586 = INT8_MIN;
	int64_t x587 = INT64_MIN;
	uint32_t x588 = UINT32_MAX;

    t135 = (x585^((x586-x587)<=x588));

    if (t135 != 27472U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x589 = INT64_MIN;
	int16_t x590 = -1;
	int16_t x591 = INT16_MIN;
	volatile int64_t t136 = 265LL;

    t136 = (x589^((x590-x591)<=x592));

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x593 = 4;
	uint32_t x595 = UINT32_MAX;
	uint16_t x596 = UINT16_MAX;
	volatile int32_t t137 = -534160965;

    t137 = (x593^((x594-x595)<=x596));

    if (t137 != 5) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x597 = INT32_MIN;
	int32_t x599 = INT32_MAX;
	int8_t x600 = INT8_MIN;
	int32_t t138 = -97330708;

    t138 = (x597^((x598-x599)<=x600));

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x601 = UINT64_MAX;
	int64_t x602 = INT64_MIN;
	int8_t x603 = INT8_MIN;
	static uint8_t x604 = UINT8_MAX;

    t139 = (x601^((x602-x603)<=x604));

    if (t139 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x605 = 1;
	int64_t x606 = INT64_MIN;
	volatile int32_t x607 = -1;
	volatile uint16_t x608 = 873U;
	volatile int32_t t140 = -738285061;

    t140 = (x605^((x606-x607)<=x608));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x609 = INT32_MIN;
	int64_t x610 = INT64_MIN;
	volatile int32_t t141 = 6220;

    t141 = (x609^((x610-x611)<=x612));

    if (t141 != -2147483647) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x613 = 12661168;
	int64_t x614 = -1LL;
	int32_t x615 = INT32_MIN;
	static int32_t x616 = 0;

    t142 = (x613^((x614-x615)<=x616));

    if (t142 != 12661168) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x617 = -1LL;
	static volatile uint8_t x618 = UINT8_MAX;
	static int32_t x619 = -63009853;
	uint16_t x620 = UINT16_MAX;
	static int64_t t143 = -344508LL;

    t143 = (x617^((x618-x619)<=x620));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x621 = INT32_MIN;
	uint64_t x622 = 8950579940LLU;
	int8_t x623 = -1;
	uint32_t x624 = 1258008036U;
	volatile int32_t t144 = INT32_MIN;

    t144 = (x621^((x622-x623)<=x624));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x625 = INT8_MIN;
	uint32_t x626 = 54U;
	int8_t x627 = -1;
	uint16_t x628 = UINT16_MAX;

    t145 = (x625^((x626-x627)<=x628));

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x629 = 1;
	int8_t x630 = INT8_MAX;
	volatile int64_t x631 = -11LL;
	uint64_t x632 = 714262LLU;
	int32_t t146 = -3097;

    t146 = (x629^((x630-x631)<=x632));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x633 = UINT32_MAX;
	volatile uint32_t x634 = 11886U;
	int16_t x635 = INT16_MIN;
	int32_t x636 = INT32_MIN;

    t147 = (x633^((x634-x635)<=x636));

    if (t147 != 4294967294U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x637 = 15U;
	int32_t x638 = -660165;
	int16_t x639 = INT16_MIN;
	int8_t x640 = INT8_MIN;
	int32_t t148 = -1317309;

    t148 = (x637^((x638-x639)<=x640));

    if (t148 != 14) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x641 = 0U;
	int64_t x643 = 1127838LL;
	int32_t x644 = -1;

    t149 = (x641^((x642-x643)<=x644));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x645 = INT32_MIN;
	int16_t x646 = INT16_MIN;
	static int64_t x648 = INT64_MAX;
	int32_t t150 = -1;

    t150 = (x645^((x646-x647)<=x648));

    if (t150 != -2147483647) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x652 = 2U;
	int32_t t151 = -4336;

    t151 = (x649^((x650-x651)<=x652));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x653 = 703824;
	int8_t x654 = INT8_MIN;
	uint64_t x655 = UINT64_MAX;
	int16_t x656 = INT16_MAX;
	int32_t t152 = 1669;

    t152 = (x653^((x654-x655)<=x656));

    if (t152 != 703824) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x657 = 9U;
	volatile int32_t x658 = INT32_MIN;
	uint8_t x660 = 0U;
	static int32_t t153 = -16776303;

    t153 = (x657^((x658-x659)<=x660));

    if (t153 != 9) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x661 = 1;
	static uint8_t x662 = 4U;
	uint8_t x663 = 0U;
	volatile int64_t x664 = 1230340LL;
	int32_t t154 = -1069;

    t154 = (x661^((x662-x663)<=x664));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x665 = 21575LLU;
	int8_t x666 = INT8_MIN;
	int8_t x667 = 51;
	uint64_t x668 = UINT64_MAX;
	uint64_t t155 = 1LLU;

    t155 = (x665^((x666-x667)<=x668));

    if (t155 != 21574LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x669 = -4;
	static volatile int16_t x671 = -1;
	int32_t t156 = 40882;

    t156 = (x669^((x670-x671)<=x672));

    if (t156 != -3) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x674 = -63;
	int8_t x675 = 6;
	uint64_t x676 = 4894854LLU;
	volatile uint64_t t157 = UINT64_MAX;

    t157 = (x673^((x674-x675)<=x676));

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x682 = 804U;
	static int32_t x684 = INT32_MIN;
	volatile int32_t t158 = -132;

    t158 = (x681^((x682-x683)<=x684));

    if (t158 != 9) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x685 = INT64_MIN;
	uint32_t x686 = UINT32_MAX;
	volatile int64_t x688 = INT64_MAX;
	volatile int64_t t159 = 21079611279258752LL;

    t159 = (x685^((x686-x687)<=x688));

    if (t159 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x689 = INT8_MAX;
	volatile int32_t x690 = -30696;
	volatile uint32_t x691 = 311968313U;
	volatile uint64_t x692 = 3989674837018970LLU;
	volatile int32_t t160 = 0;

    t160 = (x689^((x690-x691)<=x692));

    if (t160 != 126) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x693 = UINT8_MAX;
	volatile int32_t x694 = 12514244;
	int64_t x695 = -103818693933LL;
	static volatile int32_t x696 = INT32_MIN;

    t161 = (x693^((x694-x695)<=x696));

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x697 = 4817219365618LL;
	static int8_t x698 = 22;
	int32_t x700 = 13214842;
	static volatile int64_t t162 = -2245432LL;

    t162 = (x697^((x698-x699)<=x700));

    if (t162 != 4817219365619LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x701 = -1;
	static volatile int64_t x702 = -154769636096LL;
	static int16_t x703 = -1;
	uint32_t x704 = UINT32_MAX;
	int32_t t163 = 27744;

    t163 = (x701^((x702-x703)<=x704));

    if (t163 != -2) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x706 = 15;
	volatile int8_t x707 = INT8_MIN;
	uint32_t x708 = 3912U;

    t164 = (x705^((x706-x707)<=x708));

    if (t164 != -2147483647) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x709 = 2U;
	int8_t x711 = INT8_MAX;
	int8_t x712 = 2;
	volatile int32_t t165 = 78615886;

    t165 = (x709^((x710-x711)<=x712));

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x713 = UINT64_MAX;
	uint32_t x714 = 99298U;
	uint8_t x715 = UINT8_MAX;
	static uint32_t x716 = 7939129U;
	volatile uint64_t t166 = 8137859955205LLU;

    t166 = (x713^((x714-x715)<=x716));

    if (t166 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x717 = INT64_MAX;
	static int8_t x718 = INT8_MIN;
	volatile uint32_t x719 = UINT32_MAX;

    t167 = (x717^((x718-x719)<=x720));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x721 = INT8_MIN;
	volatile uint64_t x722 = 296853705410424590LLU;
	volatile int32_t t168 = 392266041;

    t168 = (x721^((x722-x723)<=x724));

    if (t168 != -127) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x725 = 9;
	static uint32_t x726 = UINT32_MAX;
	int32_t x728 = INT32_MAX;
	int32_t t169 = -9;

    t169 = (x725^((x726-x727)<=x728));

    if (t169 != 8) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x729 = -1LL;
	int16_t x730 = INT16_MAX;
	static volatile int32_t x731 = 2727544;
	volatile int64_t t170 = -39766936277202LL;

    t170 = (x729^((x730-x731)<=x732));

    if (t170 != -2LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x733 = INT8_MIN;
	int16_t x735 = INT16_MAX;
	volatile int32_t t171 = 511622142;

    t171 = (x733^((x734-x735)<=x736));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x737 = 15;
	int32_t x738 = -58642;
	uint8_t x739 = 56U;
	static int8_t x740 = -1;
	int32_t t172 = -5978183;

    t172 = (x737^((x738-x739)<=x740));

    if (t172 != 14) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x742 = 55;
	int64_t x743 = -577052834865LL;
	int32_t t173 = INT32_MAX;

    t173 = (x741^((x742-x743)<=x744));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x745 = -1;
	uint32_t x746 = UINT32_MAX;
	static volatile uint64_t x747 = 42963LLU;
	uint8_t x748 = UINT8_MAX;
	volatile int32_t t174 = 866779;

    t174 = (x745^((x746-x747)<=x748));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x749 = -27235660LL;
	uint32_t x750 = UINT32_MAX;
	int64_t x751 = -1LL;
	int64_t t175 = 2326750496361074161LL;

    t175 = (x749^((x750-x751)<=x752));

    if (t175 != -27235660LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x753 = -1;
	uint16_t x754 = 1552U;
	int16_t x755 = -1;
	volatile int16_t x756 = -5485;
	int32_t t176 = 926;

    t176 = (x753^((x754-x755)<=x756));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x761 = INT64_MIN;
	int8_t x762 = INT8_MIN;
	int16_t x763 = -90;
	static volatile int8_t x764 = 2;
	static int64_t t177 = 28005336LL;

    t177 = (x761^((x762-x763)<=x764));

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x766 = 336699;
	int64_t x767 = INT64_MAX;
	static int64_t x768 = -1LL;
	uint64_t t178 = 451515861424315666LLU;

    t178 = (x765^((x766-x767)<=x768));

    if (t178 != 7088LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x771 = -1;
	uint8_t x772 = UINT8_MAX;
	volatile int32_t t179 = -2471;

    t179 = (x769^((x770-x771)<=x772));

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x773 = UINT32_MAX;
	int32_t x775 = -905035;
	volatile uint32_t t180 = UINT32_MAX;

    t180 = (x773^((x774-x775)<=x776));

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x778 = -880507366212261LL;
	uint8_t x779 = 63U;
	int32_t x780 = 1351;
	volatile int32_t t181 = -7376322;

    t181 = (x777^((x778-x779)<=x780));

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x781 = UINT32_MAX;
	uint32_t x782 = 7329U;
	int32_t x783 = INT32_MIN;
	int16_t x784 = 361;
	volatile uint32_t t182 = UINT32_MAX;

    t182 = (x781^((x782-x783)<=x784));

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x785 = 121U;
	int16_t x786 = INT16_MIN;
	uint64_t x788 = 12538LLU;
	int32_t t183 = -2;

    t183 = (x785^((x786-x787)<=x788));

    if (t183 != 121) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x789 = 0;
	int64_t x790 = INT64_MIN;
	int32_t x791 = INT32_MIN;
	uint16_t x792 = 0U;
	static volatile int32_t t184 = -2619719;

    t184 = (x789^((x790-x791)<=x792));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x793 = 1U;
	int16_t x794 = 1;
	volatile uint8_t x795 = 3U;
	int64_t x796 = -977202780LL;
	volatile int32_t t185 = -6;

    t185 = (x793^((x794-x795)<=x796));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	volatile uint8_t x798 = UINT8_MAX;
	int64_t x799 = 92477465472614470LL;
	int64_t x800 = -25258554675LL;
	uint32_t t186 = 45663U;

    t186 = (x797^((x798-x799)<=x800));

    if (t186 != 4294967294U) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x802 = 15312381135381318LL;
	int16_t x803 = INT16_MAX;
	int32_t t187 = -1595;

    t187 = (x801^((x802-x803)<=x804));

    if (t187 != 1467) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x805 = UINT16_MAX;
	int16_t x806 = 23;
	int16_t x807 = -441;
	int32_t x808 = -95892;
	volatile int32_t t188 = -6405;

    t188 = (x805^((x806-x807)<=x808));

    if (t188 != 65535) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x809 = UINT16_MAX;
	int16_t x812 = INT16_MIN;
	static volatile int32_t t189 = 321413;

    t189 = (x809^((x810-x811)<=x812));

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x813 = 1U;
	int16_t x814 = INT16_MIN;
	uint16_t x816 = UINT16_MAX;

    t190 = (x813^((x814-x815)<=x816));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x817 = INT8_MIN;
	uint16_t x818 = 12396U;
	uint8_t x820 = UINT8_MAX;
	int32_t t191 = -2010;

    t191 = (x817^((x818-x819)<=x820));

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x821 = 0U;
	static int8_t x822 = -1;
	int8_t x824 = -2;

    t192 = (x821^((x822-x823)<=x824));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x826 = INT16_MIN;
	int16_t x828 = INT16_MAX;
	static volatile uint32_t t193 = 153966391U;

    t193 = (x825^((x826-x827)<=x828));

    if (t193 != 72876U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x829 = UINT64_MAX;
	uint8_t x830 = UINT8_MAX;
	static int8_t x831 = INT8_MIN;
	static volatile uint64_t t194 = UINT64_MAX;

    t194 = (x829^((x830-x831)<=x832));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x833 = INT8_MIN;
	int16_t x834 = INT16_MAX;
	int64_t x835 = INT64_MAX;
	volatile int64_t x836 = INT64_MAX;
	volatile int32_t t195 = 1;

    t195 = (x833^((x834-x835)<=x836));

    if (t195 != -127) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x837 = -1;
	uint16_t x838 = 2U;
	volatile int16_t x840 = INT16_MIN;
	volatile int32_t t196 = -10537990;

    t196 = (x837^((x838-x839)<=x840));

    if (t196 != -2) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x843 = INT16_MIN;

    t197 = (x841^((x842-x843)<=x844));

    if (t197 != 651423541388LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x849 = 0U;
	uint16_t x850 = UINT16_MAX;
	int8_t x851 = -1;
	uint8_t x852 = 0U;
	int32_t t198 = -6128;

    t198 = (x849^((x850-x851)<=x852));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x853 = INT32_MAX;
	volatile int64_t x854 = 323214678LL;
	volatile int16_t x855 = INT16_MAX;

    t199 = (x853^((x854-x855)<=x856));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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

