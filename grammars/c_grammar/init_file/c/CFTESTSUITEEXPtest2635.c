
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

static int16_t x1 = INT16_MAX;
int32_t x2 = INT32_MIN;
static volatile uint32_t x9 = 626668544U;
volatile uint32_t x11 = UINT32_MAX;
int8_t x12 = -1;
static int32_t t3 = INT32_MAX;
volatile int32_t t5 = 124957086;
int64_t x26 = INT64_MIN;
uint16_t x34 = UINT16_MAX;
uint64_t x40 = UINT64_MAX;
int16_t x47 = INT16_MAX;
int8_t x49 = INT8_MAX;
static int32_t x51 = -139;
int64_t x63 = INT64_MIN;
uint16_t x65 = 3135U;
int64_t x68 = INT64_MAX;
uint8_t x86 = 70U;
int16_t x94 = -6;
int64_t x111 = INT64_MAX;
uint32_t x113 = 222U;
static int32_t x118 = -176792835;
volatile int64_t x119 = 4379062229365LL;
int8_t x120 = -8;
int32_t x122 = -1;
uint16_t x128 = 2273U;
int32_t t31 = 679;
int16_t x133 = -1;
uint16_t x134 = UINT16_MAX;
int64_t x137 = -1LL;
int8_t x141 = -1;
volatile uint8_t x142 = UINT8_MAX;
int8_t x143 = -1;
volatile int16_t x145 = 1;
uint16_t x150 = 7U;
int64_t t37 = -93192195377217LL;
static int16_t x153 = INT16_MAX;
int16_t x156 = 7;
volatile int32_t x159 = INT32_MIN;
uint32_t t39 = 465443148U;
uint32_t x161 = 12U;
volatile uint8_t x164 = UINT8_MAX;
int16_t x167 = 171;
int32_t x173 = -1;
int16_t x174 = 0;
uint16_t x183 = 642U;
uint64_t x186 = 53959LLU;
volatile uint16_t x194 = 1U;
static uint16_t x204 = 4597U;
int64_t x205 = INT64_MIN;
uint16_t x210 = 0U;
int8_t x213 = INT8_MIN;
volatile int32_t x214 = INT32_MIN;
int64_t x215 = INT64_MAX;
int16_t x218 = -1;
volatile int64_t x219 = INT64_MAX;
int32_t t55 = INT32_MAX;
volatile int32_t x231 = INT32_MAX;
uint16_t x236 = 147U;
int32_t x237 = INT32_MIN;
static uint16_t x242 = 0U;
int32_t x244 = INT32_MIN;
static int64_t x247 = -1LL;
volatile int16_t x256 = 54;
int8_t x263 = INT8_MIN;
uint16_t x270 = UINT16_MAX;
int32_t x273 = 6563;
volatile int32_t t68 = -5474;
int64_t x277 = 61LL;
int32_t x280 = INT32_MAX;
volatile int64_t t69 = 6634533450191LL;
static int8_t x286 = INT8_MIN;
int32_t x296 = -1;
volatile uint64_t x298 = 95384470LLU;
uint16_t x299 = 6747U;
volatile int32_t x300 = -1;
static int32_t x306 = INT32_MAX;
int64_t t76 = 40953794506LL;
uint64_t x314 = 2801946LLU;
int32_t t78 = 210;
volatile int16_t x330 = INT16_MAX;
int16_t x331 = INT16_MAX;
int16_t x332 = INT16_MAX;
int8_t x335 = -1;
int64_t t83 = -18624184LL;
uint64_t x339 = UINT64_MAX;
int32_t x340 = 624060436;
uint16_t x342 = 1898U;
int64_t x348 = INT64_MIN;
int8_t x349 = -2;
int64_t x357 = -1LL;
volatile int8_t x362 = INT8_MIN;
int16_t x364 = -1;
volatile int32_t x370 = INT32_MAX;
volatile int32_t t93 = -437884;
int16_t x378 = -1;
volatile int32_t t94 = 12;
int16_t x389 = INT16_MIN;
int16_t x398 = INT16_MIN;
int64_t x404 = INT64_MIN;
uint8_t x409 = 62U;
volatile int8_t x410 = 14;
int32_t x411 = 7679186;
int32_t t102 = -1917950;
int8_t x420 = 0;
static volatile int8_t x425 = -1;
static int32_t t106 = -25159;
uint8_t x432 = 2U;
volatile uint64_t x436 = 2035966648053152LLU;
int64_t x437 = -328569825348454433LL;
static int64_t t109 = 1393100846281LL;
volatile int32_t t110 = -3;
static int32_t t111 = 520390373;
int8_t x454 = INT8_MIN;
int8_t x458 = -1;
uint32_t t114 = UINT32_MAX;
int32_t x461 = -1;
uint8_t x465 = UINT8_MAX;
static uint16_t x467 = UINT16_MAX;
volatile int32_t t116 = -98245;
int8_t x471 = INT8_MIN;
volatile int64_t x477 = 1LL;
uint8_t x478 = 2U;
int8_t x488 = 1;
uint8_t x500 = 5U;
int64_t x507 = 2LL;
uint32_t x524 = 503U;
int64_t t130 = INT64_MAX;
uint8_t x527 = 1U;
int32_t t131 = -122397;
volatile int32_t x530 = 34833;
volatile uint32_t x533 = UINT32_MAX;
int32_t x536 = -1;
volatile int16_t x537 = 672;
volatile uint64_t x542 = UINT64_MAX;
volatile uint64_t t135 = UINT64_MAX;
int32_t t136 = 1;
uint64_t x550 = UINT64_MAX;
int8_t x554 = INT8_MAX;
int8_t x555 = INT8_MIN;
static int32_t t140 = -12005;
uint64_t x568 = UINT64_MAX;
volatile uint32_t t141 = UINT32_MAX;
int32_t t142 = 1234;
int32_t x574 = INT32_MIN;
static volatile int64_t x575 = INT64_MIN;
static int32_t x577 = -1;
static uint8_t x580 = UINT8_MAX;
int16_t x585 = -1;
int16_t x595 = INT16_MIN;
uint8_t x596 = UINT8_MAX;
static volatile uint8_t x598 = 26U;
volatile int8_t x602 = INT8_MIN;
int16_t x604 = INT16_MIN;
int32_t t150 = INT32_MIN;
uint8_t x607 = 99U;
volatile int32_t t151 = -163317;
int8_t x614 = -6;
static int64_t x631 = INT64_MAX;
int64_t t157 = INT64_MIN;
volatile int32_t x636 = INT32_MIN;
int32_t x637 = -1;
volatile int32_t t159 = 5853912;
volatile int32_t x643 = INT32_MIN;
int64_t x644 = INT64_MAX;
int8_t x653 = 42;
volatile int32_t t163 = 0;
volatile uint16_t x661 = 1779U;
static uint32_t x664 = UINT32_MAX;
volatile uint16_t x670 = 206U;
int32_t x672 = INT32_MIN;
static int32_t x680 = -1;
static volatile int8_t x682 = INT8_MAX;
uint8_t x684 = 3U;
int8_t x688 = INT8_MAX;
int16_t x695 = 3520;
int16_t x708 = -636;
static int64_t x715 = -11619273967LL;
volatile uint8_t x718 = 1U;
uint64_t t179 = 4002898LLU;
uint8_t x731 = UINT8_MAX;
int32_t x735 = -11686;
uint16_t x746 = UINT16_MAX;
int16_t x750 = 4305;
static volatile int32_t x752 = 1;
uint8_t x755 = 0U;
int32_t t188 = INT32_MAX;
int8_t x759 = INT8_MIN;
static uint16_t x762 = 12U;
int32_t t191 = -31001671;
static uint32_t x772 = UINT32_MAX;
volatile uint32_t t192 = 803U;
int32_t t193 = 15;
int16_t x790 = -1;
volatile uint64_t x799 = UINT64_MAX;


void f0(void) {
    	int16_t x3 = 12;
	volatile int16_t x4 = -1;
	volatile int32_t t0 = 2930;

    t0 = (x1*((x2^x3)!=x4));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x5 = INT64_MIN;
	static int32_t x6 = INT32_MAX;
	uint32_t x7 = UINT32_MAX;
	static int8_t x8 = -1;
	volatile int64_t t1 = INT64_MIN;

    t1 = (x5*((x6^x7)!=x8));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = INT64_MIN;
	static uint32_t t2 = 843U;

    t2 = (x9*((x10^x11)!=x12));

    if (t2 != 626668544U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int64_t x14 = -1LL;
	uint16_t x15 = 21092U;
	uint64_t x16 = UINT64_MAX;

    t3 = (x13*((x14^x15)!=x16));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	uint8_t x18 = 2U;
	int8_t x19 = -1;
	int32_t x20 = -1210;
	volatile int32_t t4 = 0;

    t4 = (x17*((x18^x19)!=x20));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	static uint64_t x22 = 143863258391617938LLU;
	uint16_t x23 = UINT16_MAX;
	static int64_t x24 = INT64_MAX;

    t5 = (x21*((x22^x23)!=x24));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -1;
	int32_t x27 = -861474838;
	int8_t x28 = INT8_MIN;
	static int32_t t6 = -2;

    t6 = (x25*((x26^x27)!=x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = -1;
	int8_t x30 = INT8_MIN;
	int16_t x31 = -1;
	volatile int8_t x32 = -1;
	volatile int32_t t7 = 1;

    t7 = (x29*((x30^x31)!=x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 90;
	int16_t x35 = INT16_MIN;
	static int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -48856581;

    t8 = (x33*((x34^x35)!=x36));

    if (t8 != 90) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = UINT16_MAX;
	uint16_t x38 = UINT16_MAX;
	uint32_t x39 = 2U;
	volatile int32_t t9 = -5008144;

    t9 = (x37*((x38^x39)!=x40));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 0U;
	int8_t x42 = 55;
	int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = -7;

    t10 = (x41*((x42^x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -29298;
	static int16_t x46 = -1;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 7166822;

    t11 = (x45*((x46^x47)!=x48));

    if (t11 != -29298) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = -38182LL;
	int64_t x52 = INT64_MIN;
	int32_t t12 = -92;

    t12 = (x49*((x50^x51)!=x52));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	uint16_t x54 = 1U;
	uint32_t x55 = 105245U;
	volatile int32_t x56 = INT32_MIN;
	volatile int64_t t13 = 264860496421539LL;

    t13 = (x53*((x54^x55)!=x56));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1333717880535339LL;
	uint64_t x58 = UINT64_MAX;
	int64_t x59 = 17790937842LL;
	static int64_t x60 = -1LL;
	int64_t t14 = 1975450246LL;

    t14 = (x57*((x58^x59)!=x60));

    if (t14 != -1333717880535339LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int8_t x62 = -1;
	static int8_t x64 = INT8_MIN;
	static volatile int64_t t15 = INT64_MIN;

    t15 = (x61*((x62^x63)!=x64));

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = 29228261U;
	volatile int32_t t16 = -367970703;

    t16 = (x65*((x66^x67)!=x68));

    if (t16 != 3135) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = 1;
	static int16_t x70 = INT16_MAX;
	static int16_t x71 = INT16_MAX;
	volatile uint64_t x72 = UINT64_MAX;
	volatile int32_t t17 = -7456;

    t17 = (x69*((x70^x71)!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 643U;
	int8_t x74 = INT8_MIN;
	volatile uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MAX;
	int32_t t18 = 53550;

    t18 = (x73*((x74^x75)!=x76));

    if (t18 != 643) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x77 = 8U;
	static uint8_t x78 = 16U;
	uint16_t x79 = 190U;
	int16_t x80 = INT16_MAX;
	volatile int32_t t19 = -2733505;

    t19 = (x77*((x78^x79)!=x80));

    if (t19 != 8) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	static uint64_t x82 = UINT64_MAX;
	int8_t x83 = -1;
	uint64_t x84 = 43925705575563659LLU;
	volatile int32_t t20 = 129641;

    t20 = (x81*((x82^x83)!=x84));

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 491673283768459660LL;
	int64_t x87 = INT64_MAX;
	uint8_t x88 = 79U;
	volatile int64_t t21 = -1938LL;

    t21 = (x85*((x86^x87)!=x88));

    if (t21 != 491673283768459660LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	volatile uint32_t x90 = 1U;
	int32_t x91 = INT32_MIN;
	static int32_t x92 = INT32_MAX;
	int32_t t22 = 5839;

    t22 = (x89*((x90^x91)!=x92));

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = -15443156236LL;
	static int8_t x95 = 38;
	static int8_t x96 = -17;
	int64_t t23 = -84191164LL;

    t23 = (x93*((x94^x95)!=x96));

    if (t23 != -15443156236LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	int16_t x98 = 96;
	static volatile int32_t x99 = INT32_MAX;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -498926;

    t24 = (x97*((x98^x99)!=x100));

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 36602315009558508LL;
	int16_t x102 = -1;
	int16_t x103 = INT16_MAX;
	int64_t x104 = INT64_MIN;
	int64_t t25 = 26705929023339203LL;

    t25 = (x101*((x102^x103)!=x104));

    if (t25 != 36602315009558508LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = 21;
	uint16_t x106 = UINT16_MAX;
	volatile int64_t x107 = INT64_MIN;
	uint64_t x108 = 504129284631527684LLU;
	volatile int32_t t26 = 15992;

    t26 = (x105*((x106^x107)!=x108));

    if (t26 != 21) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	uint16_t x110 = 232U;
	static volatile int64_t x112 = 2913LL;
	volatile int32_t t27 = 1;

    t27 = (x109*((x110^x111)!=x112));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = -3580760;
	volatile int16_t x115 = INT16_MIN;
	int64_t x116 = 0LL;
	volatile uint32_t t28 = 1U;

    t28 = (x113*((x114^x115)!=x116));

    if (t28 != 222U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	int32_t t29 = 937;

    t29 = (x117*((x118^x119)!=x120));

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x121 = UINT64_MAX;
	uint8_t x123 = 0U;
	static volatile uint16_t x124 = 16124U;
	static volatile uint64_t t30 = UINT64_MAX;

    t30 = (x121*((x122^x123)!=x124));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 27;
	volatile int64_t x126 = INT64_MIN;
	static volatile uint64_t x127 = UINT64_MAX;

    t31 = (x125*((x126^x127)!=x128));

    if (t31 != 27) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = 0;
	volatile int16_t x130 = INT16_MAX;
	int16_t x131 = -1;
	static int64_t x132 = INT64_MAX;
	int32_t t32 = -30302;

    t32 = (x129*((x130^x131)!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x135 = -1;
	static int32_t x136 = -1;
	int32_t t33 = 15496;

    t33 = (x133*((x134^x135)!=x136));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x138 = -1LL;
	volatile int32_t x139 = INT32_MIN;
	int64_t x140 = -22675547773LL;
	volatile int64_t t34 = 8554535LL;

    t34 = (x137*((x138^x139)!=x140));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x144 = INT32_MIN;
	int32_t t35 = -394403395;

    t35 = (x141*((x142^x143)!=x144));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = 62U;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = 30U;
	int32_t t36 = -1639;

    t36 = (x145*((x146^x147)!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = -8291481LL;
	volatile uint32_t x151 = UINT32_MAX;
	int16_t x152 = INT16_MIN;

    t37 = (x149*((x150^x151)!=x152));

    if (t37 != -8291481LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x154 = INT64_MIN;
	uint64_t x155 = 194254LLU;
	static int32_t t38 = 61316874;

    t38 = (x153*((x154^x155)!=x156));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 1030U;
	int32_t x158 = INT32_MIN;
	int8_t x160 = 1;

    t39 = (x157*((x158^x159)!=x160));

    if (t39 != 1030U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x162 = UINT32_MAX;
	static int16_t x163 = 1514;
	volatile uint32_t t40 = 0U;

    t40 = (x161*((x162^x163)!=x164));

    if (t40 != 12U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -2;
	int16_t x166 = 8;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = -45653235;

    t41 = (x165*((x166^x167)!=x168));

    if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x169 = UINT64_MAX;
	int32_t x170 = -22;
	volatile uint8_t x171 = 3U;
	int8_t x172 = INT8_MIN;
	uint64_t t42 = UINT64_MAX;

    t42 = (x169*((x170^x171)!=x172));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x175 = -1;
	static volatile int8_t x176 = INT8_MIN;
	int32_t t43 = -384019;

    t43 = (x173*((x174^x175)!=x176));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x177 = 0U;
	int8_t x178 = -58;
	uint8_t x179 = 10U;
	static int64_t x180 = -1LL;
	int32_t t44 = -13054917;

    t44 = (x177*((x178^x179)!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	static int64_t x182 = INT64_MIN;
	uint8_t x184 = 2U;
	volatile int64_t t45 = -1283846591752LL;

    t45 = (x181*((x182^x183)!=x184));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x185 = 0LLU;
	uint64_t x187 = UINT64_MAX;
	int8_t x188 = 0;
	static uint64_t t46 = 1416962593LLU;

    t46 = (x185*((x186^x187)!=x188));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = UINT64_MAX;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = UINT16_MAX;
	volatile uint16_t x192 = UINT16_MAX;
	volatile uint64_t t47 = UINT64_MAX;

    t47 = (x189*((x190^x191)!=x192));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 3U;
	uint64_t x195 = 633614258278168085LLU;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 94;

    t48 = (x193*((x194^x195)!=x196));

    if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 1539841013270583LLU;
	int8_t x198 = -1;
	static volatile int8_t x199 = INT8_MIN;
	volatile int8_t x200 = -1;
	uint64_t t49 = 2019LLU;

    t49 = (x197*((x198^x199)!=x200));

    if (t49 != 1539841013270583LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 4063U;
	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MAX;
	volatile uint32_t t50 = 0U;

    t50 = (x201*((x202^x203)!=x204));

    if (t50 != 4063U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x206 = INT32_MAX;
	uint8_t x207 = 0U;
	int16_t x208 = INT16_MIN;
	int64_t t51 = INT64_MIN;

    t51 = (x205*((x206^x207)!=x208));

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	int32_t x211 = 2839;
	int32_t x212 = INT32_MAX;
	volatile int64_t t52 = 24978798461417LL;

    t52 = (x209*((x210^x211)!=x212));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x216 = INT8_MIN;
	static int32_t t53 = 27274499;

    t53 = (x213*((x214^x215)!=x216));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -1LL;
	uint32_t x220 = 28790U;
	int64_t t54 = -23LL;

    t54 = (x217*((x218^x219)!=x220));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MAX;
	volatile int16_t x222 = INT16_MAX;
	uint64_t x223 = 372546271794720155LLU;
	volatile int32_t x224 = INT32_MIN;

    t55 = (x221*((x222^x223)!=x224));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x225 = 115465U;
	uint64_t x226 = 398924077744443LLU;
	int64_t x227 = INT64_MIN;
	int64_t x228 = 5750308LL;
	volatile uint32_t t56 = 737U;

    t56 = (x225*((x226^x227)!=x228));

    if (t56 != 115465U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	uint64_t x230 = UINT64_MAX;
	volatile uint16_t x232 = UINT16_MAX;
	static volatile int64_t t57 = INT64_MIN;

    t57 = (x229*((x230^x231)!=x232));

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 159U;
	uint16_t x234 = 2258U;
	uint32_t x235 = UINT32_MAX;
	static volatile int32_t t58 = -582323;

    t58 = (x233*((x234^x235)!=x236));

    if (t58 != 159) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x238 = 0U;
	static int8_t x239 = INT8_MIN;
	static int64_t x240 = INT64_MAX;
	static int32_t t59 = INT32_MIN;

    t59 = (x237*((x238^x239)!=x240));

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x241 = UINT16_MAX;
	int16_t x243 = INT16_MIN;
	int32_t t60 = 17;

    t60 = (x241*((x242^x243)!=x244));

    if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = INT64_MIN;
	uint32_t x246 = UINT32_MAX;
	int16_t x248 = INT16_MIN;
	volatile int64_t t61 = INT64_MIN;

    t61 = (x245*((x246^x247)!=x248));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	int8_t x250 = 6;
	static int16_t x251 = -1;
	uint32_t x252 = UINT32_MAX;
	uint32_t t62 = UINT32_MAX;

    t62 = (x249*((x250^x251)!=x252));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 11;
	static volatile int8_t x254 = 31;
	int64_t x255 = INT64_MIN;
	volatile int32_t t63 = 971765;

    t63 = (x253*((x254^x255)!=x256));

    if (t63 != 11) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -10889;
	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MAX;
	int8_t x260 = INT8_MIN;
	int32_t t64 = -111;

    t64 = (x257*((x258^x259)!=x260));

    if (t64 != -10889) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	uint64_t x262 = 6440558104LLU;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 388503899;

    t65 = (x261*((x262^x263)!=x264));

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = UINT8_MAX;
	int32_t x266 = INT32_MAX;
	int64_t x267 = INT64_MIN;
	int8_t x268 = INT8_MIN;
	int32_t t66 = -2;

    t66 = (x265*((x266^x267)!=x268));

    if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x269 = UINT64_MAX;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	static volatile uint64_t t67 = UINT64_MAX;

    t67 = (x269*((x270^x271)!=x272));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x274 = -1;
	static int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MIN;

    t68 = (x273*((x274^x275)!=x276));

    if (t68 != 6563) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x278 = 0;
	int32_t x279 = 5;

    t69 = (x277*((x278^x279)!=x280));

    if (t69 != 61LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = INT32_MIN;
	static volatile int32_t x282 = -123524718;
	static int8_t x283 = -1;
	int16_t x284 = 5191;
	static int32_t t70 = INT32_MIN;

    t70 = (x281*((x282^x283)!=x284));

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 24291692U;
	int32_t x287 = INT32_MIN;
	static volatile int64_t x288 = -1LL;
	uint32_t t71 = 0U;

    t71 = (x285*((x286^x287)!=x288));

    if (t71 != 24291692U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 1014U;
	static volatile int64_t x290 = INT64_MAX;
	int32_t x291 = INT32_MAX;
	static volatile int64_t x292 = -843397LL;
	volatile uint32_t t72 = 30U;

    t72 = (x289*((x290^x291)!=x292));

    if (t72 != 1014U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x293 = UINT64_MAX;
	volatile int8_t x294 = INT8_MIN;
	int16_t x295 = INT16_MIN;
	static uint64_t t73 = UINT64_MAX;

    t73 = (x293*((x294^x295)!=x296));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MAX;
	volatile int64_t t74 = INT64_MAX;

    t74 = (x297*((x298^x299)!=x300));

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -79227876LL;
	uint16_t x302 = 209U;
	volatile int64_t x303 = 23319LL;
	int32_t x304 = 197641815;
	volatile int64_t t75 = -13493190438326879LL;

    t75 = (x301*((x302^x303)!=x304));

    if (t75 != -79227876LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = 317756797916102400LL;
	int32_t x307 = -1;
	int32_t x308 = 17;

    t76 = (x305*((x306^x307)!=x308));

    if (t76 != 317756797916102400LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x309 = INT16_MIN;
	int64_t x310 = 234939769LL;
	int16_t x311 = 934;
	int32_t x312 = INT32_MIN;
	int32_t t77 = -12414028;

    t77 = (x309*((x310^x311)!=x312));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x313 = 5U;
	uint32_t x315 = 11U;
	int8_t x316 = -1;

    t78 = (x313*((x314^x315)!=x316));

    if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = INT8_MAX;
	int16_t x318 = 2;
	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	int32_t t79 = -330772197;

    t79 = (x317*((x318^x319)!=x320));

    if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = -1;
	uint8_t x322 = 27U;
	uint32_t x323 = 30U;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = 0;

    t80 = (x321*((x322^x323)!=x324));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x325 = 55697276U;
	static volatile int64_t x326 = -1LL;
	volatile int8_t x327 = INT8_MIN;
	int8_t x328 = 13;
	static volatile uint32_t t81 = 736609U;

    t81 = (x325*((x326^x327)!=x328));

    if (t81 != 55697276U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = UINT32_MAX;
	volatile uint32_t t82 = UINT32_MAX;

    t82 = (x329*((x330^x331)!=x332));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 17060267517960LL;
	volatile uint8_t x334 = 0U;
	static int16_t x336 = INT16_MIN;

    t83 = (x333*((x334^x335)!=x336));

    if (t83 != 17060267517960LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x337 = INT16_MIN;
	static uint32_t x338 = UINT32_MAX;
	static volatile int32_t t84 = 76964;

    t84 = (x337*((x338^x339)!=x340));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	uint8_t x343 = UINT8_MAX;
	static int32_t x344 = -2225640;
	int32_t t85 = -49;

    t85 = (x341*((x342^x343)!=x344));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 6LLU;
	static int8_t x346 = INT8_MAX;
	uint32_t x347 = UINT32_MAX;
	uint64_t t86 = 85645259535LLU;

    t86 = (x345*((x346^x347)!=x348));

    if (t86 != 6LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x350 = 49811360767286394LLU;
	int32_t x351 = 7872011;
	int16_t x352 = INT16_MIN;
	int32_t t87 = 5920843;

    t87 = (x349*((x350^x351)!=x352));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	static int16_t x354 = INT16_MIN;
	int64_t x355 = -1LL;
	static int16_t x356 = -1;
	volatile int32_t t88 = -1;

    t88 = (x353*((x354^x355)!=x356));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x358 = UINT8_MAX;
	static int64_t x359 = -4375492548383LL;
	int32_t x360 = 43;
	int64_t t89 = -34LL;

    t89 = (x357*((x358^x359)!=x360));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 15U;
	uint32_t x363 = 394U;
	int32_t t90 = -429155855;

    t90 = (x361*((x362^x363)!=x364));

    if (t90 != 15) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = INT32_MIN;
	static int32_t x366 = INT32_MAX;
	volatile uint64_t x367 = 240350575LLU;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t91 = INT32_MIN;

    t91 = (x365*((x366^x367)!=x368));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = 0;
	int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MAX;
	volatile int32_t t92 = -2975764;

    t92 = (x369*((x370^x371)!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = -34389854;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MAX;
	volatile int8_t x376 = INT8_MIN;

    t93 = (x373*((x374^x375)!=x376));

    if (t93 != -34389854) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 51U;
	int8_t x379 = INT8_MIN;
	int8_t x380 = -1;

    t94 = (x377*((x378^x379)!=x380));

    if (t94 != 51) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	int16_t x382 = -1;
	static volatile uint64_t x383 = 29954033LLU;
	uint8_t x384 = 14U;
	volatile int32_t t95 = -16;

    t95 = (x381*((x382^x383)!=x384));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = INT8_MIN;
	static volatile int16_t x386 = -1;
	int16_t x387 = -1;
	int16_t x388 = INT16_MAX;
	int32_t t96 = 604;

    t96 = (x385*((x386^x387)!=x388));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = 5;
	int64_t x391 = INT64_MAX;
	uint16_t x392 = 62U;
	volatile int32_t t97 = 7217;

    t97 = (x389*((x390^x391)!=x392));

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MAX;
	uint16_t x394 = 30550U;
	int8_t x395 = INT8_MIN;
	volatile int16_t x396 = INT16_MIN;
	static volatile int64_t t98 = INT64_MAX;

    t98 = (x393*((x394^x395)!=x396));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x397 = -1;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;
	int32_t t99 = 2461489;

    t99 = (x397*((x398^x399)!=x400));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MAX;
	int64_t x402 = -1LL;
	static uint16_t x403 = 14U;
	volatile int64_t t100 = INT64_MAX;

    t100 = (x401*((x402^x403)!=x404));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MAX;
	int64_t x406 = -1LL;
	static volatile int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MAX;
	static int32_t t101 = 7432;

    t101 = (x405*((x406^x407)!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x412 = 129U;

    t102 = (x409*((x410^x411)!=x412));

    if (t102 != 62) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MAX;
	int16_t x414 = INT16_MAX;
	volatile int32_t x415 = INT32_MIN;
	static int8_t x416 = -2;
	int32_t t103 = INT32_MAX;

    t103 = (x413*((x414^x415)!=x416));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	volatile int16_t x418 = 1;
	uint64_t x419 = 6900852691697061LLU;
	static int32_t t104 = -1499;

    t104 = (x417*((x418^x419)!=x420));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = 3;
	int8_t x422 = INT8_MIN;
	static int64_t x423 = -2LL;
	volatile uint64_t x424 = 865034LLU;
	volatile int32_t t105 = 24817949;

    t105 = (x421*((x422^x423)!=x424));

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x426 = -1;
	volatile int8_t x427 = 1;
	int8_t x428 = INT8_MAX;

    t106 = (x425*((x426^x427)!=x428));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 40546635699917069LLU;
	uint64_t x430 = 3091LLU;
	uint32_t x431 = 206592U;
	uint64_t t107 = 4127498831219396239LLU;

    t107 = (x429*((x430^x431)!=x432));

    if (t107 != 40546635699917069LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MAX;
	int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MAX;
	int32_t t108 = 501665;

    t108 = (x433*((x434^x435)!=x436));

    if (t108 != 32767) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x438 = 86U;
	int16_t x439 = INT16_MIN;
	uint32_t x440 = UINT32_MAX;

    t109 = (x437*((x438^x439)!=x440));

    if (t109 != -328569825348454433LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MAX;
	int16_t x442 = INT16_MAX;
	int8_t x443 = -1;
	uint16_t x444 = 12U;

    t110 = (x441*((x442^x443)!=x444));

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	int8_t x446 = INT8_MIN;
	int16_t x447 = INT16_MIN;
	int64_t x448 = -2LL;

    t111 = (x445*((x446^x447)!=x448));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	volatile int32_t x450 = -44;
	static int64_t x451 = -1LL;
	static int8_t x452 = -3;
	int32_t t112 = 112;

    t112 = (x449*((x450^x451)!=x452));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x453 = UINT64_MAX;
	volatile int8_t x455 = 0;
	volatile int32_t x456 = INT32_MAX;
	volatile uint64_t t113 = UINT64_MAX;

    t113 = (x453*((x454^x455)!=x456));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	uint8_t x459 = 12U;
	uint32_t x460 = 59297U;

    t114 = (x457*((x458^x459)!=x460));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = -395;
	uint16_t x463 = 11389U;
	int16_t x464 = INT16_MIN;
	volatile int32_t t115 = 29;

    t115 = (x461*((x462^x463)!=x464));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x466 = -4;
	int16_t x468 = -955;

    t116 = (x465*((x466^x467)!=x468));

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = 31;
	int8_t x470 = INT8_MIN;
	int64_t x472 = INT64_MAX;
	int32_t t117 = 765863;

    t117 = (x469*((x470^x471)!=x472));

    if (t117 != 31) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = INT32_MIN;
	int64_t x474 = INT64_MIN;
	static volatile uint32_t x475 = 36U;
	static int8_t x476 = -50;
	static int32_t t118 = INT32_MIN;

    t118 = (x473*((x474^x475)!=x476));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x479 = 2139220LLU;
	uint16_t x480 = 72U;
	volatile int64_t t119 = -1LL;

    t119 = (x477*((x478^x479)!=x480));

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MAX;
	uint32_t x482 = 12621636U;
	static volatile uint64_t x483 = UINT64_MAX;
	volatile uint8_t x484 = UINT8_MAX;
	int32_t t120 = 2922835;

    t120 = (x481*((x482^x483)!=x484));

    if (t120 != 127) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 7U;
	static int8_t x486 = INT8_MIN;
	static volatile int32_t x487 = -30;
	static volatile int32_t t121 = -1453;

    t121 = (x485*((x486^x487)!=x488));

    if (t121 != 7) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	int16_t x490 = INT16_MIN;
	int64_t x491 = INT64_MIN;
	int64_t x492 = INT64_MAX;
	volatile uint32_t t122 = UINT32_MAX;

    t122 = (x489*((x490^x491)!=x492));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 6U;
	int32_t x494 = -1;
	int32_t x495 = -7;
	volatile uint8_t x496 = UINT8_MAX;
	int32_t t123 = -73875006;

    t123 = (x493*((x494^x495)!=x496));

    if (t123 != 6) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 111U;
	int8_t x498 = INT8_MIN;
	int16_t x499 = INT16_MAX;
	volatile int32_t t124 = -5617;

    t124 = (x497*((x498^x499)!=x500));

    if (t124 != 111) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = UINT8_MAX;
	volatile int32_t x502 = -1;
	int16_t x503 = -465;
	volatile uint32_t x504 = 355481U;
	int32_t t125 = 12;

    t125 = (x501*((x502^x503)!=x504));

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = 1U;
	uint32_t x506 = UINT32_MAX;
	int8_t x508 = INT8_MAX;
	volatile int32_t t126 = -27171189;

    t126 = (x505*((x506^x507)!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 1272764229LLU;
	static volatile uint16_t x510 = 1U;
	static int16_t x511 = -562;
	volatile int32_t x512 = INT32_MAX;
	uint64_t t127 = 13098146LLU;

    t127 = (x509*((x510^x511)!=x512));

    if (t127 != 1272764229LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = INT32_MIN;
	static int32_t x515 = INT32_MIN;
	uint16_t x516 = 12U;
	int32_t t128 = INT32_MIN;

    t128 = (x513*((x514^x515)!=x516));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x517 = 32516U;
	uint8_t x518 = 7U;
	uint32_t x519 = 19595U;
	uint64_t x520 = UINT64_MAX;
	int32_t t129 = 853242951;

    t129 = (x517*((x518^x519)!=x520));

    if (t129 != 32516) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MAX;
	uint16_t x522 = 12U;
	volatile int8_t x523 = INT8_MIN;

    t130 = (x521*((x522^x523)!=x524));

    if (t130 != INT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	uint64_t x526 = 1428651LLU;
	static uint8_t x528 = 1U;

    t131 = (x525*((x526^x527)!=x528));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = 13296882482520LL;
	int64_t x531 = INT64_MIN;
	static volatile uint64_t x532 = 2275121520511968368LLU;
	int64_t t132 = 116192769479LL;

    t132 = (x529*((x530^x531)!=x532));

    if (t132 != 13296882482520LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x534 = -1;
	static volatile uint32_t x535 = UINT32_MAX;
	volatile uint32_t t133 = UINT32_MAX;

    t133 = (x533*((x534^x535)!=x536));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x538 = -1;
	volatile int16_t x539 = -4;
	static int64_t x540 = INT64_MIN;
	volatile int32_t t134 = -180;

    t134 = (x537*((x538^x539)!=x540));

    if (t134 != 672) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = UINT64_MAX;
	int64_t x543 = -1LL;
	volatile uint64_t x544 = 2068189LLU;

    t135 = (x541*((x542^x543)!=x544));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	int8_t x546 = INT8_MIN;
	int64_t x547 = -1LL;
	int64_t x548 = INT64_MAX;

    t136 = (x545*((x546^x547)!=x548));

    if (t136 != -32768) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 867LL;
	uint32_t x551 = 176U;
	static int16_t x552 = INT16_MIN;
	static volatile int64_t t137 = 817876326806242LL;

    t137 = (x549*((x550^x551)!=x552));

    if (t137 != 867LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile int16_t x556 = INT16_MIN;
	static int32_t t138 = -121190;

    t138 = (x553*((x554^x555)!=x556));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 24683U;
	int64_t x558 = INT64_MAX;
	int16_t x559 = -12;
	static int16_t x560 = INT16_MIN;
	volatile uint32_t t139 = 650U;

    t139 = (x557*((x558^x559)!=x560));

    if (t139 != 24683U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	volatile int16_t x562 = INT16_MIN;
	int16_t x563 = 0;
	static int64_t x564 = -17LL;

    t140 = (x561*((x562^x563)!=x564));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = UINT32_MAX;
	volatile int16_t x566 = 1;
	int8_t x567 = INT8_MIN;

    t141 = (x565*((x566^x567)!=x568));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 1U;
	int64_t x570 = INT64_MIN;
	uint64_t x571 = 3322110136LLU;
	volatile int64_t x572 = -3372888153417397305LL;

    t142 = (x569*((x570^x571)!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = INT32_MIN;
	volatile int64_t x576 = -1LL;
	volatile int32_t t143 = INT32_MIN;

    t143 = (x573*((x574^x575)!=x576));

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = INT16_MIN;
	volatile int16_t x579 = INT16_MAX;
	int32_t t144 = -110;

    t144 = (x577*((x578^x579)!=x580));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -1;
	int16_t x582 = 31;
	int16_t x583 = INT16_MAX;
	uint16_t x584 = 2U;
	volatile int32_t t145 = -240749787;

    t145 = (x581*((x582^x583)!=x584));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x586 = INT64_MIN;
	int16_t x587 = -1;
	static uint32_t x588 = UINT32_MAX;
	volatile int32_t t146 = 1;

    t146 = (x585*((x586^x587)!=x588));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = INT8_MIN;
	uint16_t x590 = 10983U;
	uint16_t x591 = 44U;
	uint32_t x592 = 3U;
	volatile int32_t t147 = -762;

    t147 = (x589*((x590^x591)!=x592));

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = 1;
	int64_t x594 = -1LL;
	int32_t t148 = 0;

    t148 = (x593*((x594^x595)!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x599 = -1;
	static uint8_t x600 = UINT8_MAX;
	volatile int32_t t149 = 45966509;

    t149 = (x597*((x598^x599)!=x600));

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x601 = INT32_MIN;
	int64_t x603 = INT64_MAX;

    t150 = (x601*((x602^x603)!=x604));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile int64_t x606 = INT64_MIN;
	static int8_t x608 = -1;

    t151 = (x605*((x606^x607)!=x608));

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x609 = -4997685;
	int32_t x610 = INT32_MAX;
	int64_t x611 = 90501LL;
	int16_t x612 = INT16_MIN;
	volatile int32_t t152 = 2;

    t152 = (x609*((x610^x611)!=x612));

    if (t152 != -4997685) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MAX;
	int32_t x615 = 1064431520;
	volatile uint8_t x616 = UINT8_MAX;
	int32_t t153 = 189889178;

    t153 = (x613*((x614^x615)!=x616));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = 7;
	int32_t x618 = -1;
	volatile int32_t x619 = 22554335;
	volatile int32_t x620 = -33253712;
	int32_t t154 = 18;

    t154 = (x617*((x618^x619)!=x620));

    if (t154 != 7) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 748906718307010785LLU;
	static volatile uint32_t x622 = UINT32_MAX;
	int16_t x623 = 415;
	volatile int8_t x624 = -21;
	volatile uint64_t t155 = 2711449LLU;

    t155 = (x621*((x622^x623)!=x624));

    if (t155 != 748906718307010785LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x625 = INT16_MAX;
	static int32_t x626 = -226185475;
	int16_t x627 = -6;
	static int32_t x628 = 5;
	static int32_t t156 = 22;

    t156 = (x625*((x626^x627)!=x628));

    if (t156 != 32767) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int16_t x630 = -1;
	int64_t x632 = -1LL;

    t157 = (x629*((x630^x631)!=x632));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x633 = 15271LLU;
	uint8_t x634 = 2U;
	uint32_t x635 = 2U;
	static uint64_t t158 = 5466652069394LLU;

    t158 = (x633*((x634^x635)!=x636));

    if (t158 != 15271LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x638 = INT32_MAX;
	volatile int16_t x639 = -42;
	static int16_t x640 = -84;

    t159 = (x637*((x638^x639)!=x640));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	uint8_t x642 = 12U;
	uint64_t t160 = UINT64_MAX;

    t160 = (x641*((x642^x643)!=x644));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -54675300490031014LL;
	static int16_t x646 = 1;
	int16_t x647 = -1;
	static int16_t x648 = INT16_MIN;
	volatile int64_t t161 = 393922LL;

    t161 = (x645*((x646^x647)!=x648));

    if (t161 != -54675300490031014LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x649 = INT16_MIN;
	int8_t x650 = INT8_MIN;
	int16_t x651 = -1;
	uint32_t x652 = 4551345U;
	static volatile int32_t t162 = 2;

    t162 = (x649*((x650^x651)!=x652));

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x654 = INT16_MIN;
	int32_t x655 = 16;
	int8_t x656 = INT8_MIN;

    t163 = (x653*((x654^x655)!=x656));

    if (t163 != 42) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = -1;
	int32_t x658 = 152911358;
	int16_t x659 = 118;
	int64_t x660 = INT64_MIN;
	int32_t t164 = 1029;

    t164 = (x657*((x658^x659)!=x660));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x662 = UINT16_MAX;
	int32_t x663 = INT32_MAX;
	int32_t t165 = -21319145;

    t165 = (x661*((x662^x663)!=x664));

    if (t165 != 1779) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int64_t x666 = INT64_MIN;
	int64_t x667 = -1LL;
	uint16_t x668 = 30U;
	int64_t t166 = INT64_MIN;

    t166 = (x665*((x666^x667)!=x668));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	int16_t x671 = INT16_MIN;
	static volatile int32_t t167 = INT32_MIN;

    t167 = (x669*((x670^x671)!=x672));

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = INT8_MIN;
	int8_t x674 = INT8_MIN;
	uint8_t x675 = UINT8_MAX;
	uint16_t x676 = 23U;
	int32_t t168 = 412117643;

    t168 = (x673*((x674^x675)!=x676));

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x677 = INT8_MIN;
	static volatile uint16_t x678 = 41U;
	int16_t x679 = INT16_MIN;
	int32_t t169 = 455;

    t169 = (x677*((x678^x679)!=x680));

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x681 = 15129;
	static volatile int64_t x683 = 21113LL;
	static volatile int32_t t170 = -63085;

    t170 = (x681*((x682^x683)!=x684));

    if (t170 != 15129) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = -5569;
	uint64_t x686 = 84255801973059226LLU;
	static int64_t x687 = 1973189630LL;
	volatile int32_t t171 = -7;

    t171 = (x685*((x686^x687)!=x688));

    if (t171 != -5569) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = INT64_MIN;
	int8_t x690 = -1;
	uint32_t x691 = 198U;
	volatile int8_t x692 = -1;
	static int64_t t172 = INT64_MIN;

    t172 = (x689*((x690^x691)!=x692));

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = 17782288949934208LL;
	volatile uint64_t x694 = 28317174337709588LLU;
	uint8_t x696 = UINT8_MAX;
	static int64_t t173 = -110349662964LL;

    t173 = (x693*((x694^x695)!=x696));

    if (t173 != 17782288949934208LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = -4181;
	int32_t x698 = INT32_MAX;
	static volatile uint16_t x699 = 7U;
	uint8_t x700 = 117U;
	static volatile int32_t t174 = -5;

    t174 = (x697*((x698^x699)!=x700));

    if (t174 != -4181) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -12;
	static int16_t x702 = -1;
	int32_t x703 = -1;
	int64_t x704 = 39479681794981194LL;
	int32_t t175 = 15757088;

    t175 = (x701*((x702^x703)!=x704));

    if (t175 != -12) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = UINT8_MAX;
	uint8_t x706 = 36U;
	int32_t x707 = 2965791;
	static int32_t t176 = 6772829;

    t176 = (x705*((x706^x707)!=x708));

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = INT8_MIN;
	int16_t x710 = INT16_MIN;
	static int16_t x711 = -30;
	int64_t x712 = -1LL;
	volatile int32_t t177 = 0;

    t177 = (x709*((x710^x711)!=x712));

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -4038645;
	uint32_t x714 = UINT32_MAX;
	int32_t x716 = 1;
	int32_t t178 = -4138581;

    t178 = (x713*((x714^x715)!=x716));

    if (t178 != -4038645) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x717 = 31881300088LLU;
	uint8_t x719 = UINT8_MAX;
	uint16_t x720 = 1U;

    t179 = (x717*((x718^x719)!=x720));

    if (t179 != 31881300088LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = 312;
	int64_t x722 = -45LL;
	int64_t x723 = INT64_MIN;
	uint32_t x724 = 15206295U;
	static volatile int32_t t180 = -5;

    t180 = (x721*((x722^x723)!=x724));

    if (t180 != 312) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = 885074596885706490LL;
	volatile int64_t x726 = -117LL;
	volatile int64_t x727 = INT64_MAX;
	int16_t x728 = INT16_MAX;
	volatile int64_t t181 = 329136LL;

    t181 = (x725*((x726^x727)!=x728));

    if (t181 != 885074596885706490LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MIN;
	uint64_t x730 = 1363LLU;
	int8_t x732 = 59;
	volatile int32_t t182 = INT32_MIN;

    t182 = (x729*((x730^x731)!=x732));

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	volatile int8_t x734 = -30;
	uint32_t x736 = 1821140385U;
	int32_t t183 = 189;

    t183 = (x733*((x734^x735)!=x736));

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = UINT8_MAX;
	int8_t x738 = -1;
	uint16_t x739 = UINT16_MAX;
	uint64_t x740 = 992377892641LLU;
	int32_t t184 = 15655724;

    t184 = (x737*((x738^x739)!=x740));

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = -1;
	static uint8_t x742 = 104U;
	static int16_t x743 = -1;
	int8_t x744 = -2;
	volatile int32_t t185 = 4061400;

    t185 = (x741*((x742^x743)!=x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = UINT64_MAX;
	int32_t x747 = 5;
	int16_t x748 = INT16_MIN;
	uint64_t t186 = UINT64_MAX;

    t186 = (x745*((x746^x747)!=x748));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = 30;
	static volatile int8_t x751 = INT8_MIN;
	int32_t t187 = -80;

    t187 = (x749*((x750^x751)!=x752));

    if (t187 != 30) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MAX;
	static int16_t x754 = INT16_MIN;
	uint64_t x756 = 2427494255782LLU;

    t188 = (x753*((x754^x755)!=x756));

    if (t188 != INT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = UINT16_MAX;
	uint8_t x758 = 3U;
	int8_t x760 = -1;
	volatile int32_t t189 = -17312078;

    t189 = (x757*((x758^x759)!=x760));

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 7170929442LL;
	static int64_t x763 = -1014178LL;
	uint16_t x764 = UINT16_MAX;
	int64_t t190 = -40471LL;

    t190 = (x761*((x762^x763)!=x764));

    if (t190 != 7170929442LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -1;
	int8_t x766 = INT8_MIN;
	int8_t x767 = INT8_MIN;
	volatile int64_t x768 = -1LL;

    t191 = (x765*((x766^x767)!=x768));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x769 = 829824314U;
	int8_t x770 = 13;
	uint32_t x771 = 73098U;

    t192 = (x769*((x770^x771)!=x772));

    if (t192 != 829824314U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x773 = -22;
	volatile int32_t x774 = INT32_MAX;
	static int8_t x775 = -28;
	static volatile int32_t x776 = INT32_MIN;

    t193 = (x773*((x774^x775)!=x776));

    if (t193 != -22) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 1886;
	static int16_t x778 = -1;
	int64_t x779 = INT64_MIN;
	uint8_t x780 = UINT8_MAX;
	int32_t t194 = 760113729;

    t194 = (x777*((x778^x779)!=x780));

    if (t194 != 1886) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	int16_t x782 = INT16_MAX;
	static int32_t x783 = -1;
	int8_t x784 = INT8_MIN;
	volatile int32_t t195 = 12009;

    t195 = (x781*((x782^x783)!=x784));

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MIN;
	int8_t x786 = INT8_MIN;
	static int32_t x787 = -61347;
	int64_t x788 = 290LL;
	int32_t t196 = 229;

    t196 = (x785*((x786^x787)!=x788));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x789 = 4709893LLU;
	volatile uint16_t x791 = 11343U;
	int16_t x792 = INT16_MAX;
	uint64_t t197 = 106635102511640162LLU;

    t197 = (x789*((x790^x791)!=x792));

    if (t197 != 4709893LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 44U;
	uint16_t x794 = UINT16_MAX;
	volatile uint32_t x795 = UINT32_MAX;
	static int16_t x796 = 15;
	static volatile int32_t t198 = -1963;

    t198 = (x793*((x794^x795)!=x796));

    if (t198 != 44) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = UINT16_MAX;
	static int64_t x798 = INT64_MIN;
	static int32_t x800 = -15;
	volatile int32_t t199 = -287;

    t199 = (x797*((x798^x799)!=x800));

    if (t199 != 65535) { NG(); } else { ; }
	
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

