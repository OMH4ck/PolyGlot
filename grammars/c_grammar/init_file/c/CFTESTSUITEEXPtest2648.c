
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

static int32_t x8 = -1;
static int16_t x10 = -1;
int8_t x11 = -4;
int64_t x12 = INT64_MIN;
int8_t x15 = INT8_MIN;
int64_t x16 = INT64_MIN;
volatile int32_t t3 = -29252;
uint64_t x24 = 6LLU;
volatile int32_t t7 = INT32_MAX;
uint32_t t8 = UINT32_MAX;
volatile int32_t x39 = -3;
static int32_t x45 = -217846265;
uint32_t x46 = 49890383U;
int32_t x47 = INT32_MIN;
volatile int32_t t12 = -153;
volatile int16_t x54 = INT16_MIN;
static int64_t x56 = INT64_MIN;
int8_t x60 = INT8_MIN;
static int8_t x63 = -6;
static volatile int16_t x64 = INT16_MIN;
int32_t x67 = 7;
static int64_t t16 = INT64_MIN;
int64_t x69 = INT64_MIN;
volatile uint8_t x78 = UINT8_MAX;
volatile int32_t t21 = 13;
volatile int32_t x105 = -988;
int16_t x114 = -1;
int8_t x120 = 5;
int8_t x123 = -1;
int16_t x124 = INT16_MIN;
volatile int32_t t30 = 957378;
int32_t t31 = 269347;
static int64_t x131 = INT64_MIN;
static int64_t x132 = 2278481139LL;
int32_t t33 = 0;
static volatile uint64_t t34 = UINT64_MAX;
int8_t x141 = -5;
volatile int32_t x142 = 279789;
volatile int32_t t35 = 131;
uint8_t x147 = 1U;
volatile int32_t t36 = -234;
static int32_t x150 = 1;
volatile int32_t t38 = INT32_MAX;
int64_t x159 = INT64_MIN;
volatile uint32_t t39 = UINT32_MAX;
static volatile int16_t x161 = INT16_MIN;
static uint32_t x162 = 1U;
volatile int32_t t40 = 89750;
volatile int64_t t41 = INT64_MIN;
int8_t x175 = INT8_MIN;
uint64_t t43 = 2666921899812912667LLU;
uint64_t x182 = 248287113571633LLU;
int8_t x183 = -9;
volatile int32_t x184 = INT32_MIN;
static uint32_t x192 = UINT32_MAX;
volatile int16_t x194 = INT16_MIN;
static volatile int32_t t48 = 1;
int32_t x197 = INT32_MIN;
static uint32_t x210 = UINT32_MAX;
static int32_t x215 = -1;
uint32_t x217 = 376882313U;
uint32_t x221 = 237320U;
uint64_t x224 = UINT64_MAX;
volatile int16_t x227 = INT16_MAX;
int32_t t57 = 1167;
uint64_t x236 = 10437229749237LLU;
volatile int64_t x239 = INT64_MIN;
int32_t t61 = 10195851;
uint16_t x255 = 14U;
volatile int32_t x259 = INT32_MIN;
uint32_t t64 = 2068U;
uint64_t x267 = UINT64_MAX;
uint64_t x268 = 13898654890817LLU;
int32_t t66 = 97;
uint32_t x270 = UINT32_MAX;
volatile uint64_t t68 = UINT64_MAX;
int64_t x280 = -55961948LL;
static int32_t t70 = -154135018;
int16_t x289 = -8;
int16_t x292 = INT16_MAX;
int8_t x294 = 5;
static uint32_t x296 = UINT32_MAX;
int64_t t73 = 923333843942283LL;
uint64_t x303 = 20LLU;
int64_t x305 = INT64_MIN;
volatile int32_t x315 = -224;
int8_t x316 = INT8_MAX;
int16_t x317 = INT16_MAX;
static int64_t x328 = -12372497500969080LL;
volatile int32_t t81 = -8013;
uint8_t x332 = 20U;
int32_t x339 = INT32_MIN;
volatile uint64_t t86 = 1386014597050LLU;
static int16_t x350 = 10847;
uint64_t t88 = 273708210819LLU;
volatile int16_t x366 = INT16_MAX;
int64_t t91 = INT64_MAX;
static volatile int64_t x369 = INT64_MAX;
int32_t x374 = INT32_MAX;
volatile int64_t x375 = INT64_MIN;
int32_t x380 = INT32_MIN;
int32_t t95 = 3870341;
int64_t x391 = INT64_MAX;
int16_t x393 = INT16_MIN;
volatile uint8_t x395 = 3U;
int8_t x401 = INT8_MIN;
uint32_t x403 = UINT32_MAX;
volatile uint16_t x407 = 16124U;
uint32_t x410 = UINT32_MAX;
static int32_t x413 = -2895631;
int8_t x419 = -9;
uint16_t x433 = UINT16_MAX;
volatile uint8_t x436 = 0U;
static int32_t x437 = 92034;
volatile uint16_t x440 = UINT16_MAX;
int64_t x443 = 1LL;
uint16_t x444 = UINT16_MAX;
static uint32_t x451 = 416147000U;
uint64_t x456 = 474012917863LLU;
volatile int64_t x460 = -170549838LL;
int8_t x465 = -1;
int32_t x480 = INT32_MIN;
int32_t t119 = 119;
static uint32_t x482 = UINT32_MAX;
static volatile int32_t t121 = 14;
int64_t x489 = -411570LL;
int16_t x493 = INT16_MAX;
int8_t x506 = -1;
volatile int8_t x508 = INT8_MIN;
int64_t x510 = -1LL;
static int16_t x515 = INT16_MAX;
static volatile int64_t x518 = -1LL;
uint32_t x520 = 33630241U;
int8_t x521 = 19;
static volatile int32_t t130 = -53494475;
static int8_t x525 = 1;
int32_t x526 = INT32_MIN;
int32_t x541 = -3;
int16_t x543 = INT16_MIN;
uint8_t x546 = 5U;
volatile int64_t t136 = INT64_MIN;
uint8_t x551 = 2U;
int8_t x557 = INT8_MAX;
static int8_t x566 = -1;
int16_t x570 = INT16_MAX;
static volatile int64_t t142 = INT64_MIN;
int16_t x575 = INT16_MAX;
int32_t t143 = -3809;
static uint8_t x577 = 10U;
int64_t x581 = INT64_MIN;
int8_t x582 = INT8_MIN;
int32_t x583 = INT32_MIN;
uint16_t x587 = UINT16_MAX;
static int64_t x591 = -110LL;
int8_t x593 = 0;
static uint8_t x596 = UINT8_MAX;
volatile int32_t t149 = -1;
uint16_t x602 = UINT16_MAX;
static volatile int32_t x604 = INT32_MIN;
static uint8_t x609 = 2U;
int64_t x611 = INT64_MIN;
int32_t t152 = 1012091;
uint64_t x626 = UINT64_MAX;
uint32_t x632 = 1867991289U;
uint32_t x634 = UINT32_MAX;
int64_t x638 = 55781797210LL;
int32_t x645 = INT32_MIN;
volatile int32_t t162 = -11720742;
int8_t x655 = 1;
int32_t x656 = -1;
volatile uint32_t x662 = 2046U;
volatile int32_t x663 = -1;
uint8_t x673 = UINT8_MAX;
volatile int32_t x675 = INT32_MAX;
int32_t t168 = 0;
int16_t x678 = -67;
uint64_t x681 = 257050558498282LLU;
uint8_t x684 = 0U;
volatile int16_t x685 = INT16_MIN;
volatile int64_t x687 = -1LL;
static volatile int64_t x701 = INT64_MIN;
static uint16_t x703 = 5U;
static int16_t x707 = INT16_MIN;
volatile int32_t t176 = INT32_MIN;
uint8_t x725 = 64U;
int32_t t181 = -8619071;
int32_t x729 = INT32_MIN;
int8_t x730 = -1;
int64_t x737 = INT64_MIN;
uint64_t x742 = 8614553LLU;
uint32_t x743 = UINT32_MAX;
uint16_t x748 = UINT16_MAX;
volatile int16_t x753 = -2;
volatile int8_t x756 = 1;
static uint32_t x761 = 147861U;
int16_t x762 = 1;
volatile uint32_t t190 = 1U;
int32_t t191 = -117828564;
volatile int64_t x773 = -1LL;
static uint16_t x775 = 634U;
int32_t x777 = INT32_MAX;
int16_t x778 = 18;
int32_t t194 = INT32_MAX;
static volatile uint64_t x782 = 19351585762LLU;
volatile int32_t t195 = -20;
static uint32_t x790 = 154144518U;
int8_t x793 = INT8_MAX;
int64_t x796 = 51828755055759699LL;
uint32_t x797 = 26686U;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int8_t x2 = INT8_MIN;
	volatile int16_t x3 = 889;
	volatile int32_t x4 = INT32_MIN;
	static volatile int64_t t0 = INT64_MAX;

    t0 = (x1-((x2^x3)==x4));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 27097586U;
	uint16_t x6 = UINT16_MAX;
	volatile int16_t x7 = INT16_MIN;
	volatile uint32_t t1 = 28006U;

    t1 = (x5-((x6^x7)==x8));

    if (t1 != 27097586U) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x9 = UINT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

    t2 = (x9-((x10^x11)==x12));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MAX;

    t3 = (x13-((x14^x15)==x16));

    if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	static int32_t x18 = 23778089;
	static int8_t x19 = 17;
	int64_t x20 = INT64_MIN;
	static volatile int32_t t4 = INT32_MIN;

    t4 = (x17-((x18^x19)==x20));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 13U;
	static int64_t x22 = INT64_MIN;
	static int64_t x23 = -1LL;
	static int32_t t5 = -755332607;

    t5 = (x21-((x22^x23)==x24));

    if (t5 != 13) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 115U;
	uint8_t x26 = UINT8_MAX;
	int32_t x27 = INT32_MIN;
	uint32_t x28 = 822731497U;
	int32_t t6 = 374180;

    t6 = (x25-((x26^x27)==x28));

    if (t6 != 115) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	static int64_t x30 = -7130719LL;
	static uint16_t x31 = 25U;
	uint8_t x32 = UINT8_MAX;

    t7 = (x29-((x30^x31)==x32));

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = INT8_MIN;

    t8 = (x33-((x34^x35)==x36));

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x37 = 886LL;
	int32_t x38 = INT32_MIN;
	int32_t x40 = -1;
	int64_t t9 = -1LL;

    t9 = (x37-((x38^x39)==x40));

    if (t9 != 886LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -1;
	static uint16_t x42 = 1U;
	int64_t x43 = -1915367262LL;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 450190553;

    t10 = (x41-((x42^x43)==x44));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x48 = 75;
	volatile int32_t t11 = -769707;

    t11 = (x45-((x46^x47)==x48));

    if (t11 != -217846265) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 62U;
	int32_t x50 = INT32_MIN;
	static volatile int8_t x51 = 2;
	volatile uint32_t x52 = 938301253U;

    t12 = (x49-((x50^x51)==x52));

    if (t12 != 62) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 62U;
	volatile int64_t x55 = INT64_MIN;
	int32_t t13 = 51;

    t13 = (x53-((x54^x55)==x56));

    if (t13 != 62) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = -1LL;
	static int32_t x58 = -304999;
	volatile int32_t x59 = 2977;
	volatile int64_t t14 = 811569349801LL;

    t14 = (x57-((x58^x59)==x60));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -21822;
	int16_t x62 = INT16_MAX;
	int32_t t15 = -6;

    t15 = (x61-((x62^x63)==x64));

    if (t15 != -21822) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int32_t x66 = 86495;
	int64_t x68 = INT64_MIN;

    t16 = (x65-((x66^x67)==x68));

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x70 = INT32_MAX;
	int16_t x71 = INT16_MAX;
	static uint8_t x72 = 1U;
	volatile int64_t t17 = INT64_MIN;

    t17 = (x69-((x70^x71)==x72));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = UINT64_MAX;
	uint64_t x76 = 92270814654540LLU;
	volatile int32_t t18 = INT32_MIN;

    t18 = (x73-((x74^x75)==x76));

    if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = 18891808044271LL;
	int64_t x79 = INT64_MIN;
	static int16_t x80 = -484;
	volatile int64_t t19 = 9LL;

    t19 = (x77-((x78^x79)==x80));

    if (t19 != 18891808044271LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x81 = 15377U;
	int16_t x82 = -1;
	volatile uint64_t x83 = 673263971LLU;
	static int64_t x84 = -333065524905LL;
	int32_t t20 = 21;

    t20 = (x81-((x82^x83)==x84));

    if (t20 != 15377) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	uint32_t x86 = UINT32_MAX;
	static int32_t x87 = 93039508;
	static int32_t x88 = INT32_MIN;

    t21 = (x85-((x86^x87)==x88));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = 6279LL;
	int64_t x90 = INT64_MIN;
	int64_t x91 = INT64_MIN;
	uint32_t x92 = 754U;
	int64_t t22 = 828387LL;

    t22 = (x89-((x90^x91)==x92));

    if (t22 != 6279LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	static int16_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	static int32_t x96 = INT32_MIN;
	int64_t t23 = INT64_MAX;

    t23 = (x93-((x94^x95)==x96));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 1;
	int64_t x98 = 3106026622811585925LL;
	uint8_t x99 = 100U;
	static volatile int16_t x100 = INT16_MAX;
	int32_t t24 = -33385;

    t24 = (x97-((x98^x99)==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 38U;
	volatile int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 1600078;

    t25 = (x101-((x102^x103)==x104));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x106 = UINT32_MAX;
	uint8_t x107 = 0U;
	int16_t x108 = 2;
	volatile int32_t t26 = -27;

    t26 = (x105-((x106^x107)==x108));

    if (t26 != -988) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = INT64_MAX;
	volatile int8_t x110 = 1;
	int16_t x111 = INT16_MAX;
	uint8_t x112 = 1U;
	int64_t t27 = INT64_MAX;

    t27 = (x109-((x110^x111)==x112));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = INT32_MIN;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = -16;
	static volatile int32_t t28 = INT32_MIN;

    t28 = (x113-((x114^x115)==x116));

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	static int8_t x118 = INT8_MAX;
	int16_t x119 = -1;
	int32_t t29 = 1;

    t29 = (x117-((x118^x119)==x120));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 63;
	uint16_t x122 = 0U;

    t30 = (x121-((x122^x123)==x124));

    if (t30 != 63) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	static int32_t x126 = -1;
	int32_t x127 = 221;
	int32_t x128 = INT32_MIN;

    t31 = (x125-((x126^x127)==x128));

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = 1LL;
	uint32_t x130 = 0U;
	static volatile int64_t t32 = 364735216619507924LL;

    t32 = (x129-((x130^x131)==x132));

    if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -61;
	int8_t x134 = 0;
	static volatile int8_t x135 = 46;
	volatile int64_t x136 = -1LL;

    t33 = (x133-((x134^x135)==x136));

    if (t33 != -61) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	volatile int16_t x140 = INT16_MIN;

    t34 = (x137-((x138^x139)==x140));

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x143 = INT64_MIN;
	volatile int16_t x144 = 6;

    t35 = (x141-((x142^x143)==x144));

    if (t35 != -5) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	uint64_t x146 = UINT64_MAX;
	static int8_t x148 = INT8_MAX;

    t36 = (x145-((x146^x147)==x148));

    if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 1;
	int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MAX;
	static volatile int32_t t37 = 4;

    t37 = (x149-((x150^x151)==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x153 = INT32_MAX;
	volatile int8_t x154 = -19;
	int8_t x155 = INT8_MAX;
	static int32_t x156 = INT32_MAX;

    t38 = (x153-((x154^x155)==x156));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x157 = UINT32_MAX;
	static uint8_t x158 = 45U;
	static int32_t x160 = -1;

    t39 = (x157-((x158^x159)==x160));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x163 = INT64_MIN;
	static int16_t x164 = -1;

    t40 = (x161-((x162^x163)==x164));

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	static int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	int64_t x168 = 4998493398LL;

    t41 = (x165-((x166^x167)==x168));

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	int16_t x170 = -1;
	volatile int64_t x171 = -204074579127LL;
	uint8_t x172 = 1U;
	int32_t t42 = INT32_MIN;

    t42 = (x169-((x170^x171)==x172));

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x173 = 29709LLU;
	uint32_t x174 = 346U;
	uint16_t x176 = 4655U;

    t43 = (x173-((x174^x175)==x176));

    if (t43 != 29709LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = INT64_MAX;
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	int8_t x180 = 1;
	volatile int64_t t44 = INT64_MAX;

    t44 = (x177-((x178^x179)==x180));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int64_t t45 = INT64_MIN;

    t45 = (x181-((x182^x183)==x184));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -10694;
	uint64_t x186 = 449577577729839560LLU;
	static int8_t x187 = 0;
	volatile int16_t x188 = INT16_MIN;
	static int32_t t46 = -58;

    t46 = (x185-((x186^x187)==x188));

    if (t46 != -10694) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -613215301298385921LL;
	uint32_t x190 = 18U;
	static volatile int64_t x191 = -1LL;
	volatile int64_t t47 = -483454999832LL;

    t47 = (x189-((x190^x191)==x192));

    if (t47 != -613215301298385921LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 91U;
	volatile uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MIN;

    t48 = (x193-((x194^x195)==x196));

    if (t48 != 91) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = -1;
	static int64_t x199 = -1LL;
	int32_t x200 = -1;
	int32_t t49 = INT32_MIN;

    t49 = (x197-((x198^x199)==x200));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	uint64_t x202 = 129275203587LLU;
	uint16_t x203 = 28053U;
	int16_t x204 = INT16_MAX;
	volatile int32_t t50 = -249427746;

    t50 = (x201-((x202^x203)==x204));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x205 = 0LLU;
	volatile int32_t x206 = -53042528;
	int64_t x207 = INT64_MIN;
	int8_t x208 = 12;
	static volatile uint64_t t51 = 2122703107230476LLU;

    t51 = (x205-((x206^x207)==x208));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MAX;
	uint64_t x211 = 5682148784317LLU;
	int8_t x212 = INT8_MAX;
	int32_t t52 = INT32_MAX;

    t52 = (x209-((x210^x211)==x212));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	uint8_t x214 = 3U;
	uint64_t x216 = 5636273563889200LLU;
	volatile int32_t t53 = INT32_MIN;

    t53 = (x213-((x214^x215)==x216));

    if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = -113537204;
	volatile uint64_t x219 = 7227532399871LLU;
	static int32_t x220 = INT32_MIN;
	uint32_t t54 = 2U;

    t54 = (x217-((x218^x219)==x220));

    if (t54 != 376882313U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x222 = INT32_MIN;
	uint64_t x223 = 235289474298574723LLU;
	volatile uint32_t t55 = 283452U;

    t55 = (x221-((x222^x223)==x224));

    if (t55 != 237320U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	static int32_t x226 = INT32_MIN;
	int32_t x228 = -1849;
	static uint64_t t56 = UINT64_MAX;

    t56 = (x225-((x226^x227)==x228));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = -1;
	int32_t x230 = INT32_MIN;
	uint64_t x231 = UINT64_MAX;
	uint64_t x232 = 521906089LLU;

    t57 = (x229-((x230^x231)==x232));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x233 = 850304U;
	int8_t x234 = INT8_MIN;
	uint16_t x235 = 6003U;
	volatile uint32_t t58 = 2299798U;

    t58 = (x233-((x234^x235)==x236));

    if (t58 != 850304U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = -2;
	static int32_t x238 = INT32_MIN;
	uint64_t x240 = 250980888705LLU;
	static int32_t t59 = 213997;

    t59 = (x237-((x238^x239)==x240));

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = INT8_MIN;
	static int32_t x242 = -82044;
	int8_t x243 = INT8_MIN;
	volatile int8_t x244 = -1;
	int32_t t60 = 126860;

    t60 = (x241-((x242^x243)==x244));

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -4;
	static volatile int8_t x246 = -18;
	static int8_t x247 = -1;
	int32_t x248 = INT32_MAX;

    t61 = (x245-((x246^x247)==x248));

    if (t61 != -4) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MAX;
	uint32_t x250 = 198U;
	int32_t x251 = INT32_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -145731582;

    t62 = (x249-((x250^x251)==x252));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -117;
	int16_t x254 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	int32_t t63 = 3327;

    t63 = (x253-((x254^x255)==x256));

    if (t63 != -117) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 3179632U;
	static int16_t x258 = INT16_MIN;
	volatile int64_t x260 = INT64_MIN;

    t64 = (x257-((x258^x259)==x260));

    if (t64 != 3179632U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	uint8_t x262 = 0U;
	uint32_t x263 = 29U;
	int16_t x264 = -1;
	int64_t t65 = -16236058983475LL;

    t65 = (x261-((x262^x263)==x264));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 9U;
	int64_t x266 = INT64_MIN;

    t66 = (x265-((x266^x267)==x268));

    if (t66 != 9) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = -22;
	uint32_t x271 = UINT32_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t67 = 1;

    t67 = (x269-((x270^x271)==x272));

    if (t67 != -22) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	static uint16_t x274 = 0U;
	volatile int64_t x275 = INT64_MIN;
	uint8_t x276 = 4U;

    t68 = (x273-((x274^x275)==x276));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = UINT32_MAX;
	volatile uint16_t x278 = UINT16_MAX;
	int32_t x279 = -1366;
	volatile uint32_t t69 = UINT32_MAX;

    t69 = (x277-((x278^x279)==x280));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x281 = 2;
	int16_t x282 = -1;
	volatile int16_t x283 = INT16_MIN;
	volatile int64_t x284 = INT64_MIN;

    t70 = (x281-((x282^x283)==x284));

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	volatile int16_t x286 = -1;
	volatile int32_t x287 = INT32_MIN;
	int16_t x288 = INT16_MIN;
	volatile int64_t t71 = INT64_MIN;

    t71 = (x285-((x286^x287)==x288));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x290 = -16;
	int64_t x291 = 107368933516LL;
	static volatile int32_t t72 = 5;

    t72 = (x289-((x290^x291)==x292));

    if (t72 != -8) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = 391252269LL;
	int16_t x295 = INT16_MIN;

    t73 = (x293-((x294^x295)==x296));

    if (t73 != 391252269LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x297 = UINT16_MAX;
	uint16_t x298 = 14U;
	volatile uint32_t x299 = UINT32_MAX;
	int8_t x300 = -6;
	static int32_t t74 = -1;

    t74 = (x297-((x298^x299)==x300));

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x301 = 305U;
	volatile int32_t x302 = INT32_MAX;
	static int8_t x304 = INT8_MIN;
	static volatile int32_t t75 = -10;

    t75 = (x301-((x302^x303)==x304));

    if (t75 != 305) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x306 = UINT32_MAX;
	int8_t x307 = INT8_MAX;
	volatile uint32_t x308 = 805U;
	volatile int64_t t76 = INT64_MIN;

    t76 = (x305-((x306^x307)==x308));

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	static int8_t x310 = INT8_MIN;
	int64_t x311 = 69089044996911LL;
	volatile uint64_t x312 = 1701227664961726LLU;
	static volatile int32_t t77 = 128721957;

    t77 = (x309-((x310^x311)==x312));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -1;
	int64_t x314 = -5523485LL;
	volatile int32_t t78 = 22;

    t78 = (x313-((x314^x315)==x316));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x318 = 10820U;
	int8_t x319 = INT8_MIN;
	volatile uint64_t x320 = UINT64_MAX;
	int32_t t79 = -4;

    t79 = (x317-((x318^x319)==x320));

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = INT32_MIN;
	static volatile uint64_t x322 = UINT64_MAX;
	volatile int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = INT32_MIN;

    t80 = (x321-((x322^x323)==x324));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = -9988;
	static uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 3789926826303LLU;

    t81 = (x325-((x326^x327)==x328));

    if (t81 != -9988) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 26147U;
	uint8_t x330 = 5U;
	int8_t x331 = -1;
	static int32_t t82 = 13801722;

    t82 = (x329-((x330^x331)==x332));

    if (t82 != 26147) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	static uint32_t x335 = 26U;
	int32_t x336 = 16336167;
	static int64_t t83 = INT64_MIN;

    t83 = (x333-((x334^x335)==x336));

    if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = -5036;
	static int64_t x338 = -208LL;
	uint64_t x340 = 989779837585103610LLU;
	int32_t t84 = 2965;

    t84 = (x337-((x338^x339)==x340));

    if (t84 != -5036) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	uint8_t x342 = 10U;
	volatile int8_t x343 = 1;
	volatile int32_t x344 = 1;
	volatile int32_t t85 = -2;

    t85 = (x341-((x342^x343)==x344));

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 445658878480317174LLU;
	int16_t x346 = -1;
	int32_t x347 = INT32_MIN;
	uint32_t x348 = 961U;

    t86 = (x345-((x346^x347)==x348));

    if (t86 != 445658878480317174LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	static int32_t x351 = 33;
	int32_t x352 = -10717;
	int32_t t87 = 1347965;

    t87 = (x349-((x350^x351)==x352));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 0LLU;
	volatile int64_t x354 = -1LL;
	int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MAX;

    t88 = (x353-((x354^x355)==x356));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x357 = 2U;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MIN;
	int32_t t89 = 38947;

    t89 = (x357-((x358^x359)==x360));

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 673U;
	static uint8_t x362 = 40U;
	uint16_t x363 = UINT16_MAX;
	uint64_t x364 = 438745LLU;
	volatile int32_t t90 = -15312;

    t90 = (x361-((x362^x363)==x364));

    if (t90 != 673) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x365 = INT64_MAX;
	static int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MAX;

    t91 = (x365-((x366^x367)==x368));

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = -1;
	static int8_t x371 = -1;
	volatile int32_t x372 = INT32_MIN;
	volatile int64_t t92 = INT64_MAX;

    t92 = (x369-((x370^x371)==x372));

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 29133LLU;
	int32_t x376 = INT32_MIN;
	uint64_t t93 = 8596623LLU;

    t93 = (x373-((x374^x375)==x376));

    if (t93 != 29133LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 506U;
	static int32_t x378 = -1;
	int64_t x379 = INT64_MIN;
	volatile int32_t t94 = -42615189;

    t94 = (x377-((x378^x379)==x380));

    if (t94 != 506) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	uint16_t x382 = 120U;
	static uint32_t x383 = 228132U;
	int16_t x384 = INT16_MIN;

    t95 = (x381-((x382^x383)==x384));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = -386;
	static volatile uint16_t x386 = 2U;
	int8_t x387 = -1;
	static uint16_t x388 = 2U;
	int32_t t96 = -565;

    t96 = (x385-((x386^x387)==x388));

    if (t96 != -386) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MAX;
	static volatile int64_t x390 = -88424LL;
	int32_t x392 = INT32_MAX;
	static volatile int64_t t97 = INT64_MAX;

    t97 = (x389-((x390^x391)==x392));

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = 116U;
	static int8_t x396 = INT8_MAX;
	static volatile int32_t t98 = -19026401;

    t98 = (x393-((x394^x395)==x396));

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = 2845LL;
	uint16_t x398 = 0U;
	uint32_t x399 = 2U;
	static int32_t x400 = INT32_MIN;
	int64_t t99 = -89040313827222815LL;

    t99 = (x397-((x398^x399)==x400));

    if (t99 != 2845LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x402 = INT16_MIN;
	int32_t x404 = -1;
	int32_t t100 = -1;

    t100 = (x401-((x402^x403)==x404));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 3959589;
	volatile int16_t x406 = INT16_MIN;
	volatile int64_t x408 = INT64_MAX;
	int32_t t101 = 372;

    t101 = (x405-((x406^x407)==x408));

    if (t101 != 3959589) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x409 = 3U;
	int8_t x411 = INT8_MAX;
	uint32_t x412 = 19731102U;
	volatile int32_t t102 = -237507478;

    t102 = (x409-((x410^x411)==x412));

    if (t102 != 3) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x414 = -1;
	int64_t x415 = 591LL;
	uint32_t x416 = 362543085U;
	volatile int32_t t103 = -527364;

    t103 = (x413-((x414^x415)==x416));

    if (t103 != -2895631) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x417 = -59;
	static int32_t x418 = 505073;
	volatile uint8_t x420 = UINT8_MAX;
	static volatile int32_t t104 = 29401;

    t104 = (x417-((x418^x419)==x420));

    if (t104 != -59) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x421 = 0;
	uint32_t x422 = 0U;
	static int64_t x423 = INT64_MIN;
	int64_t x424 = INT64_MIN;
	volatile int32_t t105 = 822751;

    t105 = (x421-((x422^x423)==x424));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 1526556U;
	int8_t x426 = -1;
	int64_t x427 = -14418276LL;
	uint64_t x428 = 16693021LLU;
	static uint32_t t106 = 64388100U;

    t106 = (x425-((x426^x427)==x428));

    if (t106 != 1526556U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 3U;
	static int64_t x430 = INT64_MAX;
	uint32_t x431 = 6U;
	int8_t x432 = -5;
	volatile int32_t t107 = -461936;

    t107 = (x429-((x430^x431)==x432));

    if (t107 != 3) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x434 = 7388U;
	int64_t x435 = INT64_MIN;
	static volatile int32_t t108 = 6;

    t108 = (x433-((x434^x435)==x436));

    if (t108 != 65535) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x438 = -1;
	uint64_t x439 = 5770288938591882561LLU;
	volatile int32_t t109 = 139;

    t109 = (x437-((x438^x439)==x440));

    if (t109 != 92034) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x441 = 131246225LLU;
	int32_t x442 = -44;
	static uint64_t t110 = 21249653180LLU;

    t110 = (x441-((x442^x443)==x444));

    if (t110 != 131246225LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = -1LL;
	uint8_t x446 = 108U;
	uint16_t x447 = 4827U;
	int64_t x448 = 9LL;
	static int64_t t111 = -141953548926281070LL;

    t111 = (x445-((x446^x447)==x448));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	static int64_t x450 = 1139145057LL;
	int8_t x452 = -1;
	int32_t t112 = -78572464;

    t112 = (x449-((x450^x451)==x452));

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x453 = INT64_MIN;
	uint8_t x454 = 12U;
	static int32_t x455 = -1;
	volatile int64_t t113 = INT64_MIN;

    t113 = (x453-((x454^x455)==x456));

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 1569U;
	volatile int8_t x458 = 8;
	int16_t x459 = INT16_MIN;
	volatile uint32_t t114 = 208U;

    t114 = (x457-((x458^x459)==x460));

    if (t114 != 1569U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 287519LL;
	int32_t x462 = INT32_MAX;
	int32_t x463 = 2672622;
	int16_t x464 = INT16_MAX;
	static volatile int64_t t115 = 18774LL;

    t115 = (x461-((x462^x463)==x464));

    if (t115 != 287519LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x466 = INT8_MIN;
	static int64_t x467 = INT64_MIN;
	int8_t x468 = INT8_MIN;
	static int32_t t116 = -46;

    t116 = (x465-((x466^x467)==x468));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x469 = 31435408U;
	int8_t x470 = -1;
	int64_t x471 = INT64_MIN;
	int8_t x472 = INT8_MAX;
	uint32_t t117 = 829U;

    t117 = (x469-((x470^x471)==x472));

    if (t117 != 31435408U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 22U;
	static uint64_t x474 = 90899945786LLU;
	int8_t x475 = 21;
	int64_t x476 = 1816174187455598LL;
	int32_t t118 = 260885;

    t118 = (x473-((x474^x475)==x476));

    if (t118 != 22) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	int64_t x478 = -31LL;
	int32_t x479 = -1;

    t119 = (x477-((x478^x479)==x480));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 25827LLU;
	uint64_t x483 = 61401729200560584LLU;
	int16_t x484 = 40;
	static uint64_t t120 = 4593579993540LLU;

    t120 = (x481-((x482^x483)==x484));

    if (t120 != 25827LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 6757;
	static uint64_t x486 = 632937613599LLU;
	int32_t x487 = INT32_MIN;
	uint16_t x488 = 204U;

    t121 = (x485-((x486^x487)==x488));

    if (t121 != 6757) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x490 = -1;
	static int64_t x491 = INT64_MAX;
	volatile int8_t x492 = -40;
	int64_t t122 = 1LL;

    t122 = (x489-((x490^x491)==x492));

    if (t122 != -411570LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = INT8_MIN;
	int32_t x495 = INT32_MIN;
	int16_t x496 = INT16_MIN;
	volatile int32_t t123 = 73517371;

    t123 = (x493-((x494^x495)==x496));

    if (t123 != 32767) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x497 = INT8_MIN;
	volatile int8_t x498 = INT8_MIN;
	uint64_t x499 = 55304528611142LLU;
	int32_t x500 = -1;
	volatile int32_t t124 = -9117;

    t124 = (x497-((x498^x499)==x500));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -1LL;
	uint64_t x502 = UINT64_MAX;
	int32_t x503 = INT32_MAX;
	static uint32_t x504 = UINT32_MAX;
	volatile int64_t t125 = -100149949779678470LL;

    t125 = (x501-((x502^x503)==x504));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = -1;
	volatile int16_t x507 = 0;
	volatile int32_t t126 = -1760102;

    t126 = (x505-((x506^x507)==x508));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = 198;
	int64_t x511 = -1LL;
	int16_t x512 = INT16_MIN;
	volatile int32_t t127 = -678;

    t127 = (x509-((x510^x511)==x512));

    if (t127 != 198) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -47;
	static int16_t x514 = -5871;
	int16_t x516 = INT16_MAX;
	int32_t t128 = 54783;

    t128 = (x513-((x514^x515)==x516));

    if (t128 != -47) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -120905;
	static int8_t x519 = -1;
	volatile int32_t t129 = 36;

    t129 = (x517-((x518^x519)==x520));

    if (t129 != -120905) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x522 = 64105;
	volatile int64_t x523 = INT64_MAX;
	int64_t x524 = INT64_MIN;

    t130 = (x521-((x522^x523)==x524));

    if (t130 != 19) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x527 = INT16_MIN;
	uint16_t x528 = 4U;
	volatile int32_t t131 = -955;

    t131 = (x525-((x526^x527)==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MIN;
	volatile uint32_t x532 = 5743970U;
	int32_t t132 = INT32_MIN;

    t132 = (x529-((x530^x531)==x532));

    if (t132 != INT32_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -1;
	volatile uint64_t x534 = 772726653892341596LLU;
	int8_t x535 = 1;
	int16_t x536 = INT16_MIN;
	int32_t t133 = 66722729;

    t133 = (x533-((x534^x535)==x536));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x537 = 363583U;
	volatile int32_t x538 = INT32_MIN;
	int8_t x539 = INT8_MIN;
	int8_t x540 = -1;
	uint32_t t134 = 13410U;

    t134 = (x537-((x538^x539)==x540));

    if (t134 != 363583U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = -1;
	int32_t x544 = -1;
	static volatile int32_t t135 = 1690434;

    t135 = (x541-((x542^x543)==x544));

    if (t135 != -3) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = INT64_MIN;
	uint64_t x547 = 20LLU;
	int16_t x548 = INT16_MIN;

    t136 = (x545-((x546^x547)==x548));

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	static int64_t x550 = INT64_MAX;
	int32_t x552 = -1;
	volatile int32_t t137 = -27699220;

    t137 = (x549-((x550^x551)==x552));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -8;
	uint16_t x554 = 18U;
	int16_t x555 = -1;
	volatile int8_t x556 = 0;
	int32_t t138 = 1701125;

    t138 = (x553-((x554^x555)==x556));

    if (t138 != -8) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x558 = 1989321511391060105LLU;
	uint64_t x559 = 6180599038LLU;
	int32_t x560 = INT32_MIN;
	static volatile int32_t t139 = -263;

    t139 = (x557-((x558^x559)==x560));

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = INT32_MIN;
	int32_t x562 = INT32_MAX;
	int8_t x563 = 0;
	volatile int16_t x564 = INT16_MIN;
	static int32_t t140 = INT32_MIN;

    t140 = (x561-((x562^x563)==x564));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = -1;
	static uint32_t x567 = 5973611U;
	uint64_t x568 = 408201340283LLU;
	volatile int32_t t141 = 14486176;

    t141 = (x565-((x566^x567)==x568));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x569 = INT64_MIN;
	uint64_t x571 = 1818562934776072333LLU;
	uint64_t x572 = UINT64_MAX;

    t142 = (x569-((x570^x571)==x572));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -217;
	static int32_t x574 = INT32_MIN;
	static volatile int64_t x576 = -1LL;

    t143 = (x573-((x574^x575)==x576));

    if (t143 != -217) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x578 = UINT8_MAX;
	uint32_t x579 = UINT32_MAX;
	int32_t x580 = INT32_MAX;
	static volatile int32_t t144 = -1754452;

    t144 = (x577-((x578^x579)==x580));

    if (t144 != 10) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x584 = INT64_MIN;
	int64_t t145 = INT64_MIN;

    t145 = (x581-((x582^x583)==x584));

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	static volatile uint16_t x586 = UINT16_MAX;
	static int32_t x588 = -29278755;
	static int32_t t146 = -12350896;

    t146 = (x585-((x586^x587)==x588));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MAX;
	int8_t x590 = -1;
	volatile int8_t x592 = INT8_MIN;
	static int32_t t147 = -67444;

    t147 = (x589-((x590^x591)==x592));

    if (t147 != 32767) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = INT8_MIN;
	int16_t x595 = -19;
	int32_t t148 = 1;

    t148 = (x593-((x594^x595)==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 12U;
	uint8_t x598 = UINT8_MAX;
	uint8_t x599 = 85U;
	int32_t x600 = -78727405;

    t149 = (x597-((x598^x599)==x600));

    if (t149 != 12) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 169046402317048LLU;
	int16_t x603 = -73;
	volatile uint64_t t150 = 28LLU;

    t150 = (x601-((x602^x603)==x604));

    if (t150 != 169046402317048LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x605 = 180U;
	uint16_t x606 = UINT16_MAX;
	int64_t x607 = INT64_MIN;
	int16_t x608 = 1;
	int32_t t151 = -2117834;

    t151 = (x605-((x606^x607)==x608));

    if (t151 != 180) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x610 = INT16_MIN;
	volatile int64_t x612 = -2449416226795179LL;

    t152 = (x609-((x610^x611)==x612));

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	int16_t x614 = 3409;
	int16_t x615 = INT16_MAX;
	static uint16_t x616 = 71U;
	static uint64_t t153 = UINT64_MAX;

    t153 = (x613-((x614^x615)==x616));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = 30078498LL;
	static uint32_t x618 = 2292U;
	volatile uint16_t x619 = 5512U;
	static int16_t x620 = -1;
	int64_t t154 = 4083890919563712649LL;

    t154 = (x617-((x618^x619)==x620));

    if (t154 != 30078498LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = 0;
	int64_t x622 = INT64_MIN;
	uint8_t x623 = 6U;
	int8_t x624 = INT8_MIN;
	int32_t t155 = 0;

    t155 = (x621-((x622^x623)==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MIN;
	uint64_t x627 = 15224331427094230LLU;
	static volatile int16_t x628 = INT16_MAX;
	volatile int64_t t156 = INT64_MIN;

    t156 = (x625-((x626^x627)==x628));

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = 109;
	static volatile uint32_t x630 = 1U;
	static volatile uint16_t x631 = 246U;
	static int32_t t157 = 3543;

    t157 = (x629-((x630^x631)==x632));

    if (t157 != 109) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -9;
	int64_t x635 = 15648047717042LL;
	uint64_t x636 = UINT64_MAX;
	int32_t t158 = 12006344;

    t158 = (x633-((x634^x635)==x636));

    if (t158 != -9) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x637 = 0U;
	int16_t x639 = 53;
	uint32_t x640 = 8U;
	int32_t t159 = -599;

    t159 = (x637-((x638^x639)==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	int16_t x642 = -1;
	uint32_t x643 = 137U;
	static uint16_t x644 = 1720U;
	volatile uint64_t t160 = UINT64_MAX;

    t160 = (x641-((x642^x643)==x644));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x646 = 60002;
	volatile uint32_t x647 = 896996648U;
	int8_t x648 = -61;
	volatile int32_t t161 = INT32_MIN;

    t161 = (x645-((x646^x647)==x648));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	int64_t x650 = INT64_MIN;
	uint64_t x651 = 17577195255LLU;
	static int16_t x652 = INT16_MIN;

    t162 = (x649-((x650^x651)==x652));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 441359932LLU;
	int64_t x654 = INT64_MIN;
	volatile uint64_t t163 = 30555829408554LLU;

    t163 = (x653-((x654^x655)==x656));

    if (t163 != 441359932LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -67279481439LL;
	volatile int16_t x658 = -2;
	volatile int16_t x659 = 33;
	int8_t x660 = INT8_MIN;
	int64_t t164 = 928841802729LL;

    t164 = (x657-((x658^x659)==x660));

    if (t164 != -67279481439LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 5948U;
	int8_t x664 = -10;
	static volatile int32_t t165 = 201593285;

    t165 = (x661-((x662^x663)==x664));

    if (t165 != 5948) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	volatile int64_t x666 = -60786LL;
	volatile uint8_t x667 = UINT8_MAX;
	volatile int8_t x668 = -1;
	int32_t t166 = 89571;

    t166 = (x665-((x666^x667)==x668));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x669 = 133;
	int32_t x670 = -914015;
	volatile int64_t x671 = INT64_MAX;
	uint8_t x672 = 125U;
	volatile int32_t t167 = -847857548;

    t167 = (x669-((x670^x671)==x672));

    if (t167 != 133) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x674 = INT16_MIN;
	uint32_t x676 = 3421U;

    t168 = (x673-((x674^x675)==x676));

    if (t168 != 255) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = -1LL;
	static uint32_t x679 = 114774U;
	static uint16_t x680 = UINT16_MAX;
	volatile int64_t t169 = 2779444669933260LL;

    t169 = (x677-((x678^x679)==x680));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x682 = 11177;
	int32_t x683 = 43816;
	uint64_t t170 = 1618703LLU;

    t170 = (x681-((x682^x683)==x684));

    if (t170 != 257050558498282LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x686 = INT64_MIN;
	int64_t x688 = 1009741969166LL;
	volatile int32_t t171 = 2889380;

    t171 = (x685-((x686^x687)==x688));

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	int16_t x690 = -1;
	int64_t x691 = INT64_MAX;
	int16_t x692 = -1;
	volatile int32_t t172 = -3443739;

    t172 = (x689-((x690^x691)==x692));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	int64_t x694 = -1LL;
	int32_t x695 = INT32_MAX;
	volatile int64_t x696 = INT64_MIN;
	int64_t t173 = INT64_MIN;

    t173 = (x693-((x694^x695)==x696));

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = INT16_MIN;
	int32_t x698 = -945518;
	static int8_t x699 = INT8_MIN;
	int64_t x700 = 298506454LL;
	static int32_t t174 = 28;

    t174 = (x697-((x698^x699)==x700));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = INT8_MAX;
	static int32_t x704 = INT32_MIN;
	static volatile int64_t t175 = INT64_MIN;

    t175 = (x701-((x702^x703)==x704));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int32_t x706 = 15490068;
	int64_t x708 = -1LL;

    t176 = (x705-((x706^x707)==x708));

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 216U;
	int8_t x710 = INT8_MIN;
	int32_t x711 = -1;
	volatile int32_t x712 = INT32_MAX;
	volatile int32_t t177 = -4101;

    t177 = (x709-((x710^x711)==x712));

    if (t177 != 216) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -1LL;
	uint64_t x714 = 19539931994953951LLU;
	static uint32_t x715 = UINT32_MAX;
	static int8_t x716 = -1;
	volatile int64_t t178 = 287146342819461012LL;

    t178 = (x713-((x714^x715)==x716));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = INT8_MIN;
	static int64_t x718 = 19LL;
	volatile uint8_t x719 = 7U;
	uint32_t x720 = 5533U;
	static volatile int32_t t179 = -5596;

    t179 = (x717-((x718^x719)==x720));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x721 = 1U;
	int32_t x722 = 1;
	int16_t x723 = INT16_MIN;
	static volatile int64_t x724 = INT64_MAX;
	int32_t t180 = 442324190;

    t180 = (x721-((x722^x723)==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x726 = 45652;
	int64_t x727 = -1997065932621LL;
	int32_t x728 = 60;

    t181 = (x725-((x726^x727)==x728));

    if (t181 != 64) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x731 = INT64_MAX;
	int8_t x732 = INT8_MIN;
	volatile int32_t t182 = INT32_MIN;

    t182 = (x729-((x730^x731)==x732));

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	int64_t x734 = INT64_MIN;
	int32_t x735 = INT32_MAX;
	uint64_t x736 = 3762777LLU;
	volatile int64_t t183 = INT64_MIN;

    t183 = (x733-((x734^x735)==x736));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = INT64_MAX;
	int8_t x739 = INT8_MIN;
	int32_t x740 = 929654929;
	int64_t t184 = INT64_MIN;

    t184 = (x737-((x738^x739)==x740));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	uint32_t x744 = 3830U;
	volatile uint32_t t185 = UINT32_MAX;

    t185 = (x741-((x742^x743)==x744));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	static int8_t x746 = 1;
	static uint16_t x747 = UINT16_MAX;
	volatile int64_t t186 = -955745627883816526LL;

    t186 = (x745-((x746^x747)==x748));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 1615;
	int32_t x750 = 1464261;
	int64_t x751 = -1LL;
	int16_t x752 = INT16_MAX;
	int32_t t187 = -99181891;

    t187 = (x749-((x750^x751)==x752));

    if (t187 != 1615) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MIN;
	int64_t x755 = -1LL;
	volatile int32_t t188 = -5;

    t188 = (x753-((x754^x755)==x756));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = 37;
	static int32_t x758 = INT32_MIN;
	uint32_t x759 = 3510468U;
	int16_t x760 = -1;
	int32_t t189 = -42886185;

    t189 = (x757-((x758^x759)==x760));

    if (t189 != 37) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x763 = INT16_MIN;
	volatile int16_t x764 = -1;

    t190 = (x761-((x762^x763)==x764));

    if (t190 != 147861U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x765 = UINT16_MAX;
	static int8_t x766 = INT8_MIN;
	int64_t x767 = -215173336LL;
	uint64_t x768 = UINT64_MAX;

    t191 = (x765-((x766^x767)==x768));

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = -213897LL;
	uint8_t x770 = 1U;
	static uint16_t x771 = 1U;
	uint16_t x772 = UINT16_MAX;
	int64_t t192 = -45LL;

    t192 = (x769-((x770^x771)==x772));

    if (t192 != -213897LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x774 = -1;
	int8_t x776 = INT8_MIN;
	int64_t t193 = 1LL;

    t193 = (x773-((x774^x775)==x776));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x779 = INT16_MAX;
	volatile uint32_t x780 = UINT32_MAX;

    t194 = (x777-((x778^x779)==x780));

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = 12167;
	static uint8_t x783 = UINT8_MAX;
	int32_t x784 = 116;

    t195 = (x781-((x782^x783)==x784));

    if (t195 != 12167) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MIN;
	int8_t x786 = 6;
	int64_t x787 = INT64_MAX;
	static volatile uint8_t x788 = 6U;
	static volatile int32_t t196 = 276155;

    t196 = (x785-((x786^x787)==x788));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 73LLU;
	static uint32_t x791 = 346820984U;
	int16_t x792 = INT16_MAX;
	uint64_t t197 = 7LLU;

    t197 = (x789-((x790^x791)==x792));

    if (t197 != 73LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x794 = UINT32_MAX;
	static int64_t x795 = -1LL;
	static volatile int32_t t198 = 34;

    t198 = (x793-((x794^x795)==x796));

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x798 = 0;
	int32_t x799 = INT32_MAX;
	int64_t x800 = 169183036166LL;
	volatile uint32_t t199 = 29U;

    t199 = (x797-((x798^x799)==x800));

    if (t199 != 26686U) { NG(); } else { ; }
	
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

