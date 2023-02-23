
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

int16_t x2 = 3;
uint16_t x3 = UINT16_MAX;
volatile int32_t t0 = -6;
int32_t x6 = INT32_MAX;
int64_t x7 = -3680043900271474LL;
static int16_t x10 = INT16_MAX;
uint64_t x11 = UINT64_MAX;
uint16_t x14 = UINT16_MAX;
int16_t x20 = -1;
uint32_t x22 = 15U;
static volatile int32_t t5 = -3020;
volatile uint8_t x25 = 0U;
static int8_t x27 = INT8_MAX;
int64_t x29 = INT64_MAX;
int8_t x31 = INT8_MIN;
static volatile int8_t x33 = INT8_MIN;
static int8_t x35 = INT8_MIN;
uint8_t x49 = UINT8_MAX;
uint64_t x50 = 0LLU;
static volatile int64_t x58 = -1LL;
static int32_t t16 = 23883724;
volatile int32_t x80 = -88;
int16_t x82 = INT16_MIN;
int32_t t20 = 79025;
int16_t x89 = -1;
int32_t t22 = -72179674;
int8_t x93 = -1;
uint64_t x98 = 5526312497494LLU;
uint8_t x99 = UINT8_MAX;
volatile int32_t t24 = -21813;
volatile int64_t x115 = -1LL;
int32_t x123 = 13625;
int32_t t32 = -732585;
uint8_t x139 = 0U;
int16_t x140 = INT16_MIN;
int32_t t35 = -118290538;
volatile int32_t t36 = -1;
int8_t x149 = INT8_MIN;
static int8_t x151 = INT8_MIN;
volatile uint8_t x156 = UINT8_MAX;
int32_t t40 = 200813413;
int32_t t41 = -54517;
volatile int32_t t43 = -1;
static int32_t x181 = INT32_MIN;
int16_t x182 = INT16_MAX;
int32_t x187 = INT32_MIN;
static int16_t x189 = -2791;
int32_t t47 = 14439;
volatile int64_t x201 = -169LL;
static uint32_t x203 = UINT32_MAX;
uint8_t x214 = UINT8_MAX;
static volatile int32_t t53 = -356;
int16_t x218 = INT16_MIN;
int8_t x222 = INT8_MIN;
uint8_t x228 = 116U;
static volatile int64_t x233 = INT64_MIN;
int8_t x240 = -48;
int64_t x250 = -1LL;
uint16_t x251 = 8893U;
int32_t x253 = INT32_MAX;
int8_t x257 = INT8_MAX;
uint8_t x261 = 3U;
volatile uint32_t x270 = UINT32_MAX;
int32_t x271 = INT32_MIN;
static int32_t t67 = -197734202;
uint8_t x274 = 32U;
volatile int64_t x280 = -136202380LL;
uint64_t x282 = 511626574LLU;
int64_t x287 = INT64_MIN;
int32_t t72 = 53;
int16_t x295 = INT16_MIN;
int8_t x297 = -1;
int32_t x300 = -12385455;
static volatile int32_t t74 = 1;
int64_t x302 = INT64_MAX;
uint8_t x303 = 3U;
int64_t x308 = -1LL;
int32_t t76 = -520544;
uint8_t x311 = 1U;
int16_t x312 = -31;
int32_t t77 = 3494907;
volatile int8_t x318 = -56;
volatile int32_t t79 = 0;
volatile int32_t x326 = -1;
static uint32_t x328 = 13528774U;
volatile int32_t t81 = 520;
volatile int32_t t82 = 396768;
int32_t x334 = 23723;
static int16_t x335 = 66;
uint32_t x339 = 74376U;
static uint8_t x356 = 29U;
uint8_t x358 = UINT8_MAX;
uint16_t x367 = UINT16_MAX;
uint32_t x368 = 9447U;
int32_t t91 = -7225;
static volatile int16_t x370 = -1;
volatile int32_t t92 = -1;
int8_t x373 = INT8_MIN;
static int32_t t93 = 1554;
static int8_t x379 = INT8_MAX;
int32_t x380 = -1;
int64_t x383 = -1LL;
int16_t x387 = -476;
static uint64_t x388 = 941067577702LLU;
int8_t x390 = INT8_MIN;
static uint8_t x394 = 12U;
int32_t t99 = 182690118;
int16_t x406 = 0;
uint8_t x409 = 32U;
int32_t x411 = INT32_MIN;
int16_t x414 = INT16_MAX;
int32_t t103 = 1769;
volatile uint64_t x417 = UINT64_MAX;
volatile int64_t x423 = INT64_MAX;
int32_t x427 = 62;
static int16_t x429 = -1870;
uint32_t x430 = 3U;
int32_t x433 = -1;
static int8_t x435 = -1;
int32_t x443 = -694054;
volatile int16_t x449 = -3352;
int32_t t112 = -5;
int8_t x460 = INT8_MIN;
int32_t x466 = -1;
uint16_t x474 = 41U;
uint16_t x481 = UINT16_MAX;
int8_t x488 = -1;
static int32_t t121 = 96;
uint64_t x495 = 1602386875214LLU;
int64_t x497 = INT64_MIN;
static uint16_t x503 = 467U;
int32_t x506 = INT32_MAX;
int64_t x510 = INT64_MIN;
uint64_t x513 = 26724LLU;
volatile int32_t t128 = -339673;
int64_t x518 = INT64_MAX;
volatile int32_t t129 = -196659;
volatile int32_t x523 = 64195;
static int64_t x529 = INT64_MIN;
uint16_t x530 = 1019U;
volatile int32_t t132 = -770552;
int32_t x534 = INT32_MIN;
int32_t x540 = INT32_MAX;
static volatile int64_t x544 = -1LL;
int32_t t135 = -217909;
static uint32_t x545 = 48305U;
int64_t x551 = 0LL;
volatile int16_t x556 = INT16_MAX;
int32_t x558 = INT32_MIN;
int16_t x559 = INT16_MIN;
volatile int32_t x560 = -1;
int64_t x562 = -1934784289LL;
uint64_t x565 = 336864013044325LLU;
uint64_t x572 = 818032663LLU;
static int32_t x574 = -1;
int8_t x575 = -1;
int8_t x576 = -13;
uint64_t x579 = UINT64_MAX;
volatile int32_t x583 = 1516553;
int32_t x584 = -107193;
int8_t x591 = INT8_MIN;
int64_t x595 = INT64_MIN;
uint16_t x599 = 119U;
static int32_t t151 = 2;
int8_t x612 = INT8_MIN;
int32_t t152 = 1521053;
uint32_t x613 = UINT32_MAX;
static uint16_t x614 = 236U;
int32_t x616 = INT32_MIN;
uint8_t x618 = UINT8_MAX;
int64_t x621 = INT64_MAX;
int16_t x625 = -1;
volatile int16_t x628 = INT16_MAX;
int16_t x630 = 115;
volatile int32_t t158 = 14778;
int16_t x640 = INT16_MIN;
volatile uint8_t x646 = UINT8_MAX;
static int32_t x651 = 141095;
int8_t x660 = -2;
int16_t x661 = INT16_MAX;
int16_t x663 = 0;
int16_t x667 = -1724;
static uint16_t x672 = 1506U;
int16_t x684 = INT16_MIN;
int64_t x690 = -11500LL;
uint64_t x695 = 251LLU;
volatile int32_t t173 = -22;
static int32_t x697 = INT32_MIN;
int32_t t174 = 19229;
int8_t x708 = INT8_MAX;
int8_t x710 = -61;
int16_t x716 = -119;
int32_t x720 = INT32_MIN;
int32_t t181 = 52688909;
static int32_t x729 = -1;
int32_t t187 = 597996682;
int16_t x762 = -1;
uint8_t x766 = UINT8_MAX;
volatile uint16_t x772 = 1U;
int16_t x773 = -1;
static int16_t x774 = -1;
int64_t x775 = -1LL;
int32_t t193 = -1950;
int64_t x778 = INT64_MIN;
volatile int32_t t194 = -103479997;
static int32_t x782 = INT32_MIN;
uint16_t x784 = UINT16_MAX;
uint8_t x789 = 57U;
uint32_t x790 = UINT32_MAX;
uint64_t x796 = 830164723827750329LLU;


void f0(void) {
    	int64_t x1 = 129483LL;
	int64_t x4 = -1055516710364644354LL;

    t0 = (x1>((x2&x3)>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	static int64_t x8 = INT64_MAX;
	int32_t t1 = -16981709;

    t1 = (x5>((x6&x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 98LLU;
	uint32_t x12 = 7U;
	volatile int32_t t2 = -1;

    t2 = (x9>((x10&x11)>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int32_t x15 = -23;
	static int16_t x16 = -1;
	int32_t t3 = -30711;

    t3 = (x13>((x14&x15)>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	static int16_t x18 = INT16_MIN;
	uint16_t x19 = 1001U;
	static int32_t t4 = 0;

    t4 = (x17>((x18&x19)>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MIN;
	int8_t x23 = 63;
	int8_t x24 = 2;

    t5 = (x21>((x22&x23)>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = 1624973701LLU;
	volatile int8_t x28 = 35;
	int32_t t6 = 0;

    t6 = (x25>((x26&x27)>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x30 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 15326;

    t7 = (x29>((x30&x31)>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	int32_t x36 = -1;
	int32_t t8 = -18846710;

    t8 = (x33>((x34&x35)>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint64_t x37 = UINT64_MAX;
	uint8_t x38 = UINT8_MAX;
	uint32_t x39 = UINT32_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -53457;

    t9 = (x37>((x38&x39)>x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = 39;
	int32_t x42 = -1365;
	uint16_t x43 = UINT16_MAX;
	static volatile uint16_t x44 = 95U;
	volatile int32_t t10 = -477579207;

    t10 = (x41>((x42&x43)>x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	volatile int32_t x46 = -1;
	uint64_t x47 = 6929308LLU;
	int8_t x48 = INT8_MAX;
	int32_t t11 = -11717;

    t11 = (x45>((x46&x47)>x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = INT8_MAX;
	int64_t x52 = -1033872537511LL;
	volatile int32_t t12 = 507;

    t12 = (x49>((x50&x51)>x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = -3166472323LL;
	int64_t x54 = INT64_MIN;
	int64_t x55 = -1224532558811LL;
	volatile int64_t x56 = -3629043174715795088LL;
	static int32_t t13 = 3050;

    t13 = (x53>((x54&x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	uint16_t x60 = 666U;
	volatile int32_t t14 = -277001032;

    t14 = (x57>((x58&x59)>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MAX;
	uint16_t x62 = 3U;
	volatile int8_t x63 = INT8_MIN;
	int16_t x64 = 87;
	int32_t t15 = -174;

    t15 = (x61>((x62&x63)>x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = UINT32_MAX;
	uint8_t x66 = 1U;
	int32_t x67 = INT32_MAX;
	static uint16_t x68 = UINT16_MAX;

    t16 = (x65>((x66&x67)>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	volatile int8_t x70 = INT8_MIN;
	int32_t x71 = -1;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 2;

    t17 = (x69>((x70&x71)>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 108048630LLU;
	int8_t x74 = INT8_MIN;
	uint8_t x75 = 16U;
	volatile int8_t x76 = -1;
	volatile int32_t t18 = 0;

    t18 = (x73>((x74&x75)>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = 363127U;
	static uint8_t x78 = 3U;
	uint32_t x79 = UINT32_MAX;
	int32_t t19 = 3161635;

    t19 = (x77>((x78&x79)>x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x81 = UINT32_MAX;
	static volatile int16_t x83 = -9601;
	static int64_t x84 = 12991181563368715LL;

    t20 = (x81>((x82&x83)>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 2753U;
	volatile uint64_t x86 = 2635129341310965060LLU;
	static volatile uint64_t x87 = 220482609092LLU;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = -1;

    t21 = (x85>((x86&x87)>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = 2U;
	volatile uint64_t x91 = 54742102LLU;
	int8_t x92 = 24;

    t22 = (x89>((x90&x91)>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = 3861U;
	volatile int32_t t23 = -9;

    t23 = (x93>((x94&x95)>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = 1;
	uint32_t x100 = 9229247U;

    t24 = (x97>((x98&x99)>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MIN;
	uint16_t x103 = UINT16_MAX;
	int16_t x104 = 0;
	int32_t t25 = 87;

    t25 = (x101>((x102&x103)>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	volatile uint16_t x106 = UINT16_MAX;
	static int64_t x107 = 4324294LL;
	int16_t x108 = INT16_MAX;
	static int32_t t26 = 32272;

    t26 = (x105>((x106&x107)>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MIN;
	int64_t x110 = 500LL;
	volatile int8_t x111 = 9;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = 1;

    t27 = (x109>((x110&x111)>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MAX;
	uint8_t x114 = 46U;
	volatile uint64_t x116 = 114000474609LLU;
	volatile int32_t t28 = 39764026;

    t28 = (x113>((x114&x115)>x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	volatile int16_t x118 = INT16_MIN;
	int16_t x119 = 3;
	int8_t x120 = -1;
	volatile int32_t t29 = 4;

    t29 = (x117>((x118&x119)>x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 617888080;
	static int32_t x122 = INT32_MAX;
	int64_t x124 = INT64_MIN;
	int32_t t30 = 115595172;

    t30 = (x121>((x122&x123)>x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -2LL;
	int8_t x126 = INT8_MIN;
	static uint16_t x127 = 80U;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = -119305;

    t31 = (x125>((x126&x127)>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	static uint64_t x130 = 51680331110959LLU;
	uint32_t x131 = 11882U;
	int16_t x132 = INT16_MAX;

    t32 = (x129>((x130&x131)>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MAX;
	int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	int8_t x136 = INT8_MIN;
	static int32_t t33 = 9;

    t33 = (x133>((x134&x135)>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 4U;
	int8_t x138 = -1;
	static volatile int32_t t34 = 3494;

    t34 = (x137>((x138&x139)>x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = 3900855U;
	int8_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;

    t35 = (x141>((x142&x143)>x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	int16_t x146 = INT16_MIN;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = -2622;

    t36 = (x145>((x146&x147)>x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = -15;
	uint64_t x152 = 16567194109LLU;
	int32_t t37 = -14;

    t37 = (x149>((x150&x151)>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	int32_t x154 = INT32_MAX;
	uint32_t x155 = UINT32_MAX;
	volatile int32_t t38 = 49;

    t38 = (x153>((x154&x155)>x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = INT16_MIN;
	int32_t x158 = -389;
	static int8_t x159 = -1;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 399;

    t39 = (x157>((x158&x159)>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MAX;
	uint32_t x164 = 2U;

    t40 = (x161>((x162&x163)>x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 1U;
	int16_t x166 = -1;
	static int32_t x167 = INT32_MIN;
	static volatile int32_t x168 = 95539569;

    t41 = (x165>((x166&x167)>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 4066977LLU;
	volatile int8_t x170 = INT8_MIN;
	int8_t x171 = -1;
	static uint64_t x172 = 7085683287437457LLU;
	int32_t t42 = -23899;

    t42 = (x169>((x170&x171)>x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = INT8_MIN;
	int32_t x176 = -1;

    t43 = (x173>((x174&x175)>x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MIN;
	int16_t x178 = 70;
	int16_t x179 = 2962;
	static int16_t x180 = INT16_MIN;
	static volatile int32_t t44 = -29;

    t44 = (x177>((x178&x179)>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x183 = 32414U;
	volatile int64_t x184 = INT64_MIN;
	int32_t t45 = -223;

    t45 = (x181>((x182&x183)>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 1;
	uint32_t x186 = UINT32_MAX;
	int8_t x188 = INT8_MAX;
	static int32_t t46 = 0;

    t46 = (x185>((x186&x187)>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = INT32_MIN;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = 50864U;

    t47 = (x189>((x190&x191)>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 80U;
	int32_t x194 = INT32_MAX;
	int32_t x195 = -5127;
	uint8_t x196 = 8U;
	int32_t t48 = -82020849;

    t48 = (x193>((x194&x195)>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	volatile int32_t x198 = INT32_MIN;
	uint8_t x199 = 20U;
	int64_t x200 = 454758045033057LL;
	int32_t t49 = 0;

    t49 = (x197>((x198&x199)>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x202 = 44;
	int64_t x204 = -1LL;
	static int32_t t50 = -43007663;

    t50 = (x201>((x202&x203)>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	volatile uint64_t x206 = 176442879LLU;
	volatile uint16_t x207 = 22U;
	volatile int16_t x208 = -1;
	volatile int32_t t51 = 32115;

    t51 = (x205>((x206&x207)>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MIN;
	int32_t x211 = 10471;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = -3638268;

    t52 = (x209>((x210&x211)>x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = 2981336699613977781LLU;
	int64_t x215 = INT64_MIN;
	uint16_t x216 = UINT16_MAX;

    t53 = (x213>((x214&x215)>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint16_t x217 = 419U;
	int32_t x219 = INT32_MIN;
	uint32_t x220 = 1976U;
	int32_t t54 = -218;

    t54 = (x217>((x218&x219)>x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = INT8_MAX;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = UINT64_MAX;
	static volatile int32_t t55 = 273;

    t55 = (x221>((x222&x223)>x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 9267U;
	int16_t x226 = -1;
	int16_t x227 = -3788;
	volatile int32_t t56 = -11651;

    t56 = (x225>((x226&x227)>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 16835U;
	int32_t x230 = -845;
	static int16_t x231 = INT16_MIN;
	volatile int16_t x232 = -7849;
	static volatile int32_t t57 = -1466717;

    t57 = (x229>((x230&x231)>x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x234 = 2180852878082870467LLU;
	uint8_t x235 = 17U;
	static volatile int16_t x236 = INT16_MIN;
	static int32_t t58 = -94;

    t58 = (x233>((x234&x235)>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	uint16_t x238 = 1429U;
	int64_t x239 = INT64_MIN;
	int32_t t59 = 64413;

    t59 = (x237>((x238&x239)>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x241 = 123843570596LLU;
	int32_t x242 = -1;
	int16_t x243 = -72;
	int64_t x244 = -2150935574LL;
	volatile int32_t t60 = -4032;

    t60 = (x241>((x242&x243)>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x245 = 140073510826958991LLU;
	int32_t x246 = INT32_MAX;
	volatile int8_t x247 = -1;
	int8_t x248 = INT8_MIN;
	int32_t t61 = -163253187;

    t61 = (x245>((x246&x247)>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = -37;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t62 = 21815;

    t62 = (x249>((x250&x251)>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x254 = UINT64_MAX;
	static volatile int8_t x255 = INT8_MIN;
	int8_t x256 = -19;
	static int32_t t63 = 245;

    t63 = (x253>((x254&x255)>x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x258 = 68U;
	static uint64_t x259 = 14290LLU;
	uint8_t x260 = 16U;
	int32_t t64 = -149745349;

    t64 = (x257>((x258&x259)>x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = INT64_MIN;
	volatile int16_t x263 = -2;
	int64_t x264 = INT64_MAX;
	int32_t t65 = -6346;

    t65 = (x261>((x262&x263)>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MIN;
	uint16_t x266 = 13U;
	int32_t x267 = 992873393;
	int8_t x268 = -19;
	volatile int32_t t66 = -52;

    t66 = (x265>((x266&x267)>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int8_t x272 = INT8_MIN;

    t67 = (x269>((x270&x271)>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	int32_t x275 = INT32_MAX;
	static int16_t x276 = 404;
	int32_t t68 = -13793;

    t68 = (x273>((x274&x275)>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x277 = 1U;
	int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MAX;
	volatile int32_t t69 = 2700;

    t69 = (x277>((x278&x279)>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -571007469382477LL;
	int32_t x283 = -1;
	int64_t x284 = INT64_MIN;
	int32_t t70 = -584857;

    t70 = (x281>((x282&x283)>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 23;
	static int64_t x286 = INT64_MAX;
	static uint16_t x288 = 0U;
	int32_t t71 = -169;

    t71 = (x285>((x286&x287)>x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -47;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MIN;
	static int16_t x292 = 3527;

    t72 = (x289>((x290&x291)>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	int64_t x296 = -4496485LL;
	int32_t t73 = -10039291;

    t73 = (x293>((x294&x295)>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x298 = -15970636LL;
	uint16_t x299 = UINT16_MAX;

    t74 = (x297>((x298&x299)>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	uint64_t x304 = 93012860638723LLU;
	static int32_t t75 = 192562;

    t75 = (x301>((x302&x303)>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	int16_t x306 = -1;
	int32_t x307 = -9677958;

    t76 = (x305>((x306&x307)>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	static int32_t x310 = INT32_MIN;

    t77 = (x309>((x310&x311)>x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x313 = INT64_MAX;
	int32_t x314 = INT32_MIN;
	int8_t x315 = 0;
	int8_t x316 = 49;
	volatile int32_t t78 = -158;

    t78 = (x313>((x314&x315)>x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	static uint64_t x319 = UINT64_MAX;
	int8_t x320 = INT8_MAX;

    t79 = (x317>((x318&x319)>x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 59934602LLU;
	int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MIN;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t80 = 446825;

    t80 = (x321>((x322&x323)>x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	uint8_t x327 = UINT8_MAX;

    t81 = (x325>((x326&x327)>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 1;
	volatile int64_t x330 = -1LL;
	uint32_t x331 = UINT32_MAX;
	static volatile int16_t x332 = 14;

    t82 = (x329>((x330&x331)>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	static uint64_t x336 = 816975534731LLU;
	int32_t t83 = -109055;

    t83 = (x333>((x334&x335)>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = INT16_MIN;
	static volatile int64_t x338 = INT64_MIN;
	static int8_t x340 = INT8_MIN;
	int32_t t84 = -92;

    t84 = (x337>((x338&x339)>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	volatile int32_t x342 = INT32_MAX;
	uint64_t x343 = UINT64_MAX;
	static int16_t x344 = -1;
	static volatile int32_t t85 = -181;

    t85 = (x341>((x342&x343)>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 53905002U;
	uint64_t x346 = UINT64_MAX;
	volatile int64_t x347 = 268521071990LL;
	int8_t x348 = INT8_MAX;
	static int32_t t86 = 264321;

    t86 = (x345>((x346&x347)>x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = -1;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -84291319;

    t87 = (x349>((x350&x351)>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = UINT16_MAX;
	int32_t x354 = 0;
	volatile int8_t x355 = INT8_MIN;
	static volatile int32_t t88 = 318831879;

    t88 = (x353>((x354&x355)>x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	static int64_t x359 = INT64_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -129071;

    t89 = (x357>((x358&x359)>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 35;
	static uint16_t x362 = 1287U;
	int32_t x363 = 3115653;
	int32_t x364 = -59777786;
	volatile int32_t t90 = 6087492;

    t90 = (x361>((x362&x363)>x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = INT64_MAX;
	int64_t x366 = -1LL;

    t91 = (x365>((x366&x367)>x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MAX;
	int16_t x371 = -1613;
	uint64_t x372 = 208371LLU;

    t92 = (x369>((x370&x371)>x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = -27;
	uint64_t x375 = UINT64_MAX;
	volatile uint32_t x376 = 1U;

    t93 = (x373>((x374&x375)>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x377 = 1567U;
	int16_t x378 = -1;
	int32_t t94 = -732;

    t94 = (x377>((x378&x379)>x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MAX;
	static uint8_t x384 = 77U;
	static volatile int32_t t95 = 268;

    t95 = (x381>((x382&x383)>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 332998455LLU;
	int64_t x386 = INT64_MIN;
	static int32_t t96 = -6936247;

    t96 = (x385>((x386&x387)>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x389 = UINT8_MAX;
	volatile int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 110;

    t97 = (x389>((x390&x391)>x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = -9;
	int16_t x395 = INT16_MAX;
	volatile uint32_t x396 = 62U;
	int32_t t98 = 272152;

    t98 = (x393>((x394&x395)>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x397 = INT8_MIN;
	uint16_t x398 = 25U;
	volatile uint64_t x399 = 6388LLU;
	int8_t x400 = -1;

    t99 = (x397>((x398&x399)>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = UINT32_MAX;
	int8_t x402 = INT8_MIN;
	volatile int64_t x403 = -134169296304LL;
	int64_t x404 = INT64_MAX;
	int32_t t100 = 13789;

    t100 = (x401>((x402&x403)>x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 22036U;
	int32_t x407 = 328;
	int8_t x408 = INT8_MAX;
	volatile int32_t t101 = -2092115;

    t101 = (x405>((x406&x407)>x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x410 = 15344702755552487LLU;
	volatile int64_t x412 = INT64_MAX;
	volatile int32_t t102 = 1;

    t102 = (x409>((x410&x411)>x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x413 = 6U;
	uint16_t x415 = 28U;
	int32_t x416 = -1;

    t103 = (x413>((x414&x415)>x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x418 = 72719LLU;
	uint64_t x419 = 0LLU;
	int16_t x420 = -1;
	volatile int32_t t104 = -11090262;

    t104 = (x417>((x418&x419)>x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = INT64_MIN;
	static int64_t x422 = INT64_MAX;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t105 = 16928;

    t105 = (x421>((x422&x423)>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 235;
	int8_t x426 = -1;
	int8_t x428 = INT8_MAX;
	static int32_t t106 = -49;

    t106 = (x425>((x426&x427)>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x431 = 10980109429179570LLU;
	int16_t x432 = -1;
	volatile int32_t t107 = -3264;

    t107 = (x429>((x430&x431)>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x434 = INT16_MAX;
	volatile int32_t x436 = INT32_MIN;
	volatile int32_t t108 = -7109;

    t108 = (x433>((x434&x435)>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x437 = INT16_MIN;
	uint8_t x438 = 32U;
	int32_t x439 = INT32_MIN;
	uint16_t x440 = UINT16_MAX;
	int32_t t109 = -476589490;

    t109 = (x437>((x438&x439)>x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MIN;
	int8_t x442 = -43;
	int16_t x444 = -1;
	volatile int32_t t110 = -8994;

    t110 = (x441>((x442&x443)>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	uint16_t x446 = 28U;
	volatile int16_t x447 = INT16_MAX;
	int32_t x448 = -1;
	volatile int32_t t111 = 987;

    t111 = (x445>((x446&x447)>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x450 = INT32_MIN;
	static int64_t x451 = INT64_MAX;
	int16_t x452 = 300;

    t112 = (x449>((x450&x451)>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	static uint64_t x454 = 23LLU;
	int8_t x455 = INT8_MAX;
	uint8_t x456 = UINT8_MAX;
	static int32_t t113 = 315930;

    t113 = (x453>((x454&x455)>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 0LLU;
	uint16_t x458 = 0U;
	int32_t x459 = -6206055;
	int32_t t114 = -1934119;

    t114 = (x457>((x458&x459)>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MAX;
	int16_t x462 = -1;
	int8_t x463 = INT8_MIN;
	int64_t x464 = -225498485724LL;
	int32_t t115 = 2;

    t115 = (x461>((x462&x463)>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	volatile int64_t x467 = INT64_MIN;
	uint16_t x468 = 11U;
	int32_t t116 = 66532517;

    t116 = (x465>((x466&x467)>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = 127;
	int16_t x470 = INT16_MIN;
	static volatile uint16_t x471 = 383U;
	volatile int64_t x472 = INT64_MIN;
	int32_t t117 = -375487107;

    t117 = (x469>((x470&x471)>x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = 779;
	uint16_t x475 = 11084U;
	int8_t x476 = -1;
	int32_t t118 = 13;

    t118 = (x473>((x474&x475)>x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int8_t x478 = 1;
	volatile int8_t x479 = -1;
	int64_t x480 = -17962501749867LL;
	volatile int32_t t119 = 1;

    t119 = (x477>((x478&x479)>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x482 = INT32_MAX;
	uint32_t x483 = 24041408U;
	uint16_t x484 = 648U;
	static int32_t t120 = -194;

    t120 = (x481>((x482&x483)>x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	int32_t x486 = 126393949;
	uint64_t x487 = 12191LLU;

    t121 = (x485>((x486&x487)>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	uint8_t x490 = 78U;
	int16_t x491 = -473;
	volatile uint16_t x492 = 2120U;
	static int32_t t122 = -510533366;

    t122 = (x489>((x490&x491)>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x493 = UINT8_MAX;
	int64_t x494 = -1LL;
	uint64_t x496 = 32649LLU;
	int32_t t123 = -3836;

    t123 = (x493>((x494&x495)>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x498 = 6209;
	int8_t x499 = INT8_MAX;
	static int8_t x500 = INT8_MIN;
	volatile int32_t t124 = -20;

    t124 = (x497>((x498&x499)>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	volatile int8_t x502 = INT8_MAX;
	int16_t x504 = INT16_MAX;
	volatile int32_t t125 = 353656895;

    t125 = (x501>((x502&x503)>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = -1;
	int16_t x507 = 1;
	uint8_t x508 = 0U;
	int32_t t126 = -329768;

    t126 = (x505>((x506&x507)>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = UINT32_MAX;
	int16_t x511 = -7083;
	static volatile uint16_t x512 = 3U;
	int32_t t127 = 1666;

    t127 = (x509>((x510&x511)>x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint8_t x514 = 0U;
	int16_t x515 = -1;
	int8_t x516 = -1;

    t128 = (x513>((x514&x515)>x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x517 = INT64_MIN;
	uint16_t x519 = 3180U;
	int32_t x520 = -13990;

    t129 = (x517>((x518&x519)>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 19U;
	uint8_t x522 = 1U;
	static int16_t x524 = 2211;
	volatile int32_t t130 = -4;

    t130 = (x521>((x522&x523)>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = 339706;
	uint16_t x526 = 3219U;
	static int32_t x527 = INT32_MIN;
	static int8_t x528 = INT8_MIN;
	volatile int32_t t131 = 52469;

    t131 = (x525>((x526&x527)>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x531 = 1U;
	int8_t x532 = -5;

    t132 = (x529>((x530&x531)>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	int64_t x535 = INT64_MIN;
	uint16_t x536 = UINT16_MAX;
	static int32_t t133 = 116597;

    t133 = (x533>((x534&x535)>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = -1LL;
	uint16_t x538 = 158U;
	int16_t x539 = INT16_MAX;
	int32_t t134 = -1831;

    t134 = (x537>((x538&x539)>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	static int8_t x542 = INT8_MAX;
	uint32_t x543 = UINT32_MAX;

    t135 = (x541>((x542&x543)>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x546 = UINT8_MAX;
	volatile int8_t x547 = INT8_MIN;
	int16_t x548 = INT16_MIN;
	volatile int32_t t136 = 105775300;

    t136 = (x545>((x546&x547)>x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = INT32_MIN;
	int16_t x550 = INT16_MAX;
	uint16_t x552 = 539U;
	int32_t t137 = -31;

    t137 = (x549>((x550&x551)>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = 2;
	volatile int16_t x554 = INT16_MAX;
	static int32_t x555 = INT32_MIN;
	int32_t t138 = 1;

    t138 = (x553>((x554&x555)>x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -6;
	volatile int32_t t139 = -4417766;

    t139 = (x557>((x558&x559)>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x561 = 31U;
	static uint8_t x563 = 1U;
	volatile int32_t x564 = INT32_MIN;
	volatile int32_t t140 = 189403;

    t140 = (x561>((x562&x563)>x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = INT8_MIN;
	int8_t x567 = 26;
	volatile int16_t x568 = -4264;
	static volatile int32_t t141 = -1;

    t141 = (x565>((x566&x567)>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -30179783;
	int32_t x570 = -1;
	volatile int32_t x571 = -1;
	static volatile int32_t t142 = -1;

    t142 = (x569>((x570&x571)>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	static volatile int32_t t143 = -4724;

    t143 = (x573>((x574&x575)>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x577 = UINT32_MAX;
	static volatile int8_t x578 = 3;
	int8_t x580 = INT8_MAX;
	int32_t t144 = -1656448;

    t144 = (x577>((x578&x579)>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x581 = UINT32_MAX;
	volatile uint16_t x582 = 29964U;
	volatile int32_t t145 = 357;

    t145 = (x581>((x582&x583)>x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x585 = 102075535U;
	static int8_t x586 = INT8_MAX;
	uint64_t x587 = 63449139538440LLU;
	static uint16_t x588 = UINT16_MAX;
	volatile int32_t t146 = -2794034;

    t146 = (x585>((x586&x587)>x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = -12073LL;
	int8_t x590 = 1;
	int16_t x592 = INT16_MAX;
	volatile int32_t t147 = -412276339;

    t147 = (x589>((x590&x591)>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -17085294;
	uint16_t x594 = UINT16_MAX;
	int64_t x596 = -1LL;
	volatile int32_t t148 = -75376922;

    t148 = (x593>((x594&x595)>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = -1148042980595700102LL;
	int8_t x598 = INT8_MIN;
	int64_t x600 = 7749248325188580LL;
	volatile int32_t t149 = -180692696;

    t149 = (x597>((x598&x599)>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = INT8_MIN;
	uint16_t x602 = 743U;
	uint64_t x603 = UINT64_MAX;
	volatile uint64_t x604 = UINT64_MAX;
	static volatile int32_t t150 = -94;

    t150 = (x601>((x602&x603)>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MIN;
	static int8_t x606 = -27;
	volatile int32_t x607 = INT32_MIN;
	volatile uint32_t x608 = 0U;

    t151 = (x605>((x606&x607)>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	int64_t x610 = 1063415216557LL;
	volatile uint16_t x611 = 2U;

    t152 = (x609>((x610&x611)>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x615 = UINT64_MAX;
	int32_t t153 = 2193141;

    t153 = (x613>((x614&x615)>x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MAX;
	int16_t x619 = INT16_MIN;
	volatile int64_t x620 = INT64_MIN;
	volatile int32_t t154 = 815141396;

    t154 = (x617>((x618&x619)>x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x622 = 1U;
	uint32_t x623 = 6U;
	volatile uint32_t x624 = 666U;
	int32_t t155 = -9208130;

    t155 = (x621>((x622&x623)>x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = INT16_MAX;
	static int64_t x627 = INT64_MAX;
	int32_t t156 = 678017924;

    t156 = (x625>((x626&x627)>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = UINT32_MAX;
	int16_t x631 = INT16_MIN;
	static volatile uint8_t x632 = 37U;
	static int32_t t157 = 5;

    t157 = (x629>((x630&x631)>x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = UINT16_MAX;
	static uint16_t x634 = 1U;
	uint32_t x635 = 2U;
	int32_t x636 = INT32_MIN;

    t158 = (x633>((x634&x635)>x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x637 = UINT16_MAX;
	int32_t x638 = 5734;
	static int64_t x639 = 1225894LL;
	int32_t t159 = 10;

    t159 = (x637>((x638&x639)>x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	uint8_t x642 = UINT8_MAX;
	static uint32_t x643 = 2108015495U;
	uint32_t x644 = UINT32_MAX;
	int32_t t160 = 111;

    t160 = (x641>((x642&x643)>x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MAX;
	int16_t x647 = INT16_MIN;
	int8_t x648 = -6;
	int32_t t161 = 373826;

    t161 = (x645>((x646&x647)>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = INT8_MIN;
	int32_t x650 = -1;
	uint32_t x652 = UINT32_MAX;
	volatile int32_t t162 = 565063;

    t162 = (x649>((x650&x651)>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 6640U;
	static uint16_t x654 = 487U;
	static int8_t x655 = 42;
	int16_t x656 = INT16_MAX;
	volatile int32_t t163 = 130914901;

    t163 = (x653>((x654&x655)>x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = -1;
	volatile int32_t x658 = INT32_MIN;
	int8_t x659 = -1;
	int32_t t164 = -144;

    t164 = (x657>((x658&x659)>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x662 = -1LL;
	uint16_t x664 = UINT16_MAX;
	volatile int32_t t165 = -23064600;

    t165 = (x661>((x662&x663)>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	int32_t x666 = INT32_MIN;
	static uint16_t x668 = 7U;
	volatile int32_t t166 = -282;

    t166 = (x665>((x666&x667)>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 0U;
	volatile uint64_t x670 = UINT64_MAX;
	static uint32_t x671 = UINT32_MAX;
	int32_t t167 = -252;

    t167 = (x669>((x670&x671)>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x673 = 8366U;
	int64_t x674 = INT64_MAX;
	int16_t x675 = INT16_MAX;
	int32_t x676 = -1;
	int32_t t168 = -2895;

    t168 = (x673>((x674&x675)>x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = 1;
	int8_t x678 = INT8_MIN;
	uint8_t x679 = UINT8_MAX;
	int32_t x680 = INT32_MIN;
	int32_t t169 = -1690;

    t169 = (x677>((x678&x679)>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int32_t x682 = -1;
	int16_t x683 = -7;
	static volatile int32_t t170 = -1686;

    t170 = (x681>((x682&x683)>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = UINT8_MAX;
	static int16_t x686 = INT16_MIN;
	uint8_t x687 = 10U;
	int64_t x688 = -1LL;
	volatile int32_t t171 = -26823802;

    t171 = (x685>((x686&x687)>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x689 = INT64_MIN;
	int32_t x691 = INT32_MAX;
	static volatile int32_t x692 = 763343;
	volatile int32_t t172 = 362345839;

    t172 = (x689>((x690&x691)>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	uint8_t x694 = 10U;
	uint16_t x696 = 197U;

    t173 = (x693>((x694&x695)>x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x698 = INT32_MAX;
	static uint32_t x699 = UINT32_MAX;
	volatile uint8_t x700 = 3U;

    t174 = (x697>((x698&x699)>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x701 = UINT32_MAX;
	int32_t x702 = INT32_MAX;
	volatile int16_t x703 = 2;
	volatile uint32_t x704 = 2223U;
	volatile int32_t t175 = 4274;

    t175 = (x701>((x702&x703)>x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x705 = 7404150786789LLU;
	uint8_t x706 = UINT8_MAX;
	int32_t x707 = INT32_MIN;
	volatile int32_t t176 = 3523;

    t176 = (x705>((x706&x707)>x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MAX;
	uint16_t x711 = 1838U;
	uint64_t x712 = UINT64_MAX;
	volatile int32_t t177 = 633406;

    t177 = (x709>((x710&x711)>x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 1887LLU;
	uint64_t x714 = 612022460495LLU;
	uint8_t x715 = UINT8_MAX;
	int32_t t178 = 5460595;

    t178 = (x713>((x714&x715)>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = INT64_MAX;
	static int32_t x718 = INT32_MIN;
	int32_t x719 = -35;
	volatile int32_t t179 = -933723;

    t179 = (x717>((x718&x719)>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = 1;
	volatile int32_t x722 = INT32_MAX;
	volatile uint8_t x723 = UINT8_MAX;
	static int8_t x724 = INT8_MIN;
	volatile int32_t t180 = -25690709;

    t180 = (x721>((x722&x723)>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = UINT16_MAX;
	int8_t x726 = INT8_MAX;
	int64_t x727 = 1118004642047157005LL;
	static uint16_t x728 = UINT16_MAX;

    t181 = (x725>((x726&x727)>x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = -1LL;
	uint32_t x731 = 5U;
	volatile int8_t x732 = -1;
	volatile int32_t t182 = 228313;

    t182 = (x729>((x730&x731)>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 269478408U;
	int16_t x734 = 42;
	volatile int32_t x735 = INT32_MIN;
	int64_t x736 = -31476083252573LL;
	int32_t t183 = -9460541;

    t183 = (x733>((x734&x735)>x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -12LL;
	int64_t x738 = -5283855195LL;
	int8_t x739 = -1;
	static int16_t x740 = 2;
	int32_t t184 = -1270473;

    t184 = (x737>((x738&x739)>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	uint32_t x742 = 46U;
	uint64_t x743 = 862037995700166869LLU;
	static volatile int16_t x744 = -1980;
	int32_t t185 = -2457496;

    t185 = (x741>((x742&x743)>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 8015U;
	int8_t x746 = INT8_MIN;
	uint8_t x747 = 2U;
	uint32_t x748 = 172U;
	volatile int32_t t186 = -12;

    t186 = (x745>((x746&x747)>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 34U;
	static int32_t x750 = 866777358;
	uint32_t x751 = 2851713U;
	int64_t x752 = -1LL;

    t187 = (x749>((x750&x751)>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x753 = 10196002309LLU;
	static int8_t x754 = -1;
	static int8_t x755 = 10;
	static uint32_t x756 = UINT32_MAX;
	int32_t t188 = 17;

    t188 = (x753>((x754&x755)>x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = INT16_MAX;
	int64_t x758 = -59853133642629LL;
	static int32_t x759 = -1;
	int32_t x760 = 4148836;
	volatile int32_t t189 = -6714202;

    t189 = (x757>((x758&x759)>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = -1;
	volatile uint32_t x763 = UINT32_MAX;
	uint16_t x764 = 3223U;
	volatile int32_t t190 = 2;

    t190 = (x761>((x762&x763)>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -409;
	int32_t x767 = INT32_MAX;
	int64_t x768 = 15690431014LL;
	int32_t t191 = -20421738;

    t191 = (x765>((x766&x767)>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 13U;
	int8_t x770 = -14;
	int8_t x771 = INT8_MAX;
	int32_t t192 = -1;

    t192 = (x769>((x770&x771)>x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x776 = 21190U;

    t193 = (x773>((x774&x775)>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 1U;
	uint16_t x779 = UINT16_MAX;
	static uint32_t x780 = 615U;

    t194 = (x777>((x778&x779)>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	int32_t x783 = -1303991;
	volatile int32_t t195 = 1;

    t195 = (x781>((x782&x783)>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	static uint32_t x786 = UINT32_MAX;
	int64_t x787 = INT64_MIN;
	uint8_t x788 = 17U;
	int32_t t196 = -1534501;

    t196 = (x785>((x786&x787)>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x791 = UINT8_MAX;
	int64_t x792 = INT64_MIN;
	static int32_t t197 = 0;

    t197 = (x789>((x790&x791)>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 212U;
	int8_t x794 = INT8_MIN;
	uint64_t x795 = UINT64_MAX;
	int32_t t198 = -330;

    t198 = (x793>((x794&x795)>x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = UINT64_MAX;
	int64_t x798 = INT64_MIN;
	int16_t x799 = 967;
	uint8_t x800 = UINT8_MAX;
	int32_t t199 = 37130638;

    t199 = (x797>((x798&x799)>x800));

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

