
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

int32_t x3 = -1;
int16_t x6 = INT16_MIN;
volatile int8_t x10 = -1;
volatile int32_t t3 = -1;
int64_t x25 = INT64_MIN;
volatile int32_t t6 = 491;
volatile uint32_t x32 = 480183642U;
uint64_t x37 = UINT64_MAX;
uint8_t x41 = 124U;
int16_t x42 = -1;
static int32_t x44 = -908;
volatile int32_t t10 = 2933;
static int32_t x54 = INT32_MIN;
int64_t x69 = INT64_MIN;
int32_t t17 = 600627;
static volatile int16_t x75 = INT16_MIN;
int8_t x77 = INT8_MAX;
int8_t x80 = INT8_MAX;
int8_t x81 = INT8_MAX;
int64_t x84 = INT64_MAX;
static int8_t x99 = -1;
volatile int32_t t24 = -3;
uint32_t x101 = 318038407U;
uint16_t x102 = 205U;
uint64_t x108 = 29967543LLU;
volatile uint32_t x109 = 819198095U;
int32_t x113 = INT32_MIN;
int16_t x115 = INT16_MAX;
int32_t x119 = -39594;
int32_t t29 = 86050;
volatile uint8_t x124 = UINT8_MAX;
int16_t x131 = -230;
volatile int8_t x133 = 47;
volatile int8_t x142 = 1;
int8_t x145 = INT8_MAX;
int8_t x150 = -1;
static int64_t x158 = INT64_MAX;
uint16_t x160 = 1U;
uint64_t x165 = UINT64_MAX;
int16_t x167 = INT16_MIN;
int32_t t41 = 696212348;
static int32_t x175 = INT32_MAX;
uint8_t x176 = UINT8_MAX;
int64_t x178 = INT64_MAX;
int64_t x183 = INT64_MIN;
int64_t x185 = 1723626004100LL;
int16_t x193 = INT16_MIN;
static volatile int32_t t48 = -15;
int8_t x200 = 1;
static uint64_t x206 = UINT64_MAX;
int16_t x207 = INT16_MIN;
uint32_t x208 = UINT32_MAX;
static int8_t x226 = INT8_MIN;
volatile int32_t x229 = INT32_MAX;
volatile uint8_t x231 = 7U;
int64_t x232 = INT64_MIN;
int32_t t57 = 884484831;
int8_t x238 = -1;
uint8_t x247 = 12U;
uint32_t x248 = 1133024903U;
volatile int32_t t63 = -105263;
int8_t x262 = INT8_MIN;
int8_t x268 = 45;
static int32_t t66 = -98146;
static int8_t x269 = INT8_MIN;
int32_t x275 = INT32_MIN;
int16_t x281 = -1;
uint8_t x285 = 60U;
static uint16_t x294 = 29U;
int16_t x299 = -132;
volatile int32_t t75 = -398564;
static int32_t x305 = INT32_MIN;
int16_t x310 = INT16_MAX;
int64_t x322 = INT64_MIN;
int16_t x326 = -1;
volatile int32_t t82 = 2314;
volatile int32_t t83 = 10;
static uint8_t x338 = 98U;
int32_t x339 = 9;
static volatile int32_t x342 = INT32_MIN;
int16_t x353 = INT16_MAX;
uint16_t x354 = 1U;
int16_t x355 = -1;
int8_t x359 = -1;
uint32_t x362 = UINT32_MAX;
volatile int32_t t90 = 583855;
int16_t x374 = -62;
int32_t t93 = 335819735;
uint64_t x383 = 2479396465LLU;
int32_t t95 = 402631;
int64_t x387 = -1LL;
int32_t t96 = -63553975;
int16_t x393 = INT16_MAX;
int32_t x395 = INT32_MIN;
static volatile uint32_t x396 = 336244U;
static volatile int8_t x399 = -1;
int32_t x405 = INT32_MAX;
int64_t x410 = 22324LL;
volatile int32_t t105 = 11536;
int32_t x426 = INT32_MAX;
int8_t x430 = INT8_MIN;
static volatile uint64_t x432 = 1171LLU;
static int64_t x437 = INT64_MIN;
int64_t x441 = INT64_MIN;
static volatile int32_t t112 = -24;
static volatile int32_t t113 = -4077690;
int32_t t114 = 390719;
volatile int32_t t115 = 6;
uint32_t x465 = 443104466U;
volatile uint8_t x468 = 2U;
static volatile int32_t t116 = -12420190;
int8_t x478 = -38;
int64_t x481 = INT64_MIN;
static int64_t x485 = INT64_MIN;
static int64_t x489 = INT64_MIN;
static int8_t x494 = INT8_MIN;
volatile int32_t t124 = -1856;
int64_t x503 = -1LL;
int32_t t126 = -698119;
volatile uint16_t x512 = 6674U;
int32_t t127 = 22143462;
static int16_t x513 = -1;
static uint64_t x522 = UINT64_MAX;
int8_t x524 = INT8_MAX;
uint32_t x529 = 1823U;
int32_t t132 = -21656872;
int8_t x543 = INT8_MIN;
int32_t t136 = 6742329;
int64_t x550 = INT64_MIN;
uint8_t x554 = 2U;
volatile int8_t x558 = INT8_MIN;
uint64_t x559 = 987LLU;
uint64_t x564 = 289659992475002LLU;
static volatile int16_t x571 = -1;
int16_t x574 = 24;
static uint64_t x583 = UINT64_MAX;
int8_t x588 = -1;
int32_t x591 = 27;
uint8_t x595 = 38U;
uint16_t x604 = 354U;
static int16_t x606 = INT16_MAX;
volatile int64_t x610 = INT64_MAX;
uint8_t x615 = 0U;
volatile uint16_t x618 = 2U;
volatile int32_t x619 = INT32_MIN;
int16_t x621 = 3840;
int32_t x628 = INT32_MIN;
uint64_t x631 = UINT64_MAX;
static int64_t x632 = -1LL;
volatile uint8_t x633 = 17U;
static volatile int32_t t160 = 114651770;
int8_t x645 = INT8_MIN;
int8_t x648 = -26;
static int64_t x654 = INT64_MIN;
int8_t x662 = -30;
volatile uint64_t x671 = 936011LLU;
int32_t t167 = -97518;
int32_t x680 = 521048381;
int32_t t169 = -3079;
uint16_t x691 = 11U;
int8_t x694 = -1;
int8_t x698 = INT8_MAX;
volatile int32_t t175 = -425914;
volatile int32_t t176 = -26330;
int64_t x722 = -1LL;
int64_t x725 = INT64_MAX;
static int16_t x728 = -1;
int64_t x729 = -3LL;
int16_t x746 = INT16_MIN;
static int32_t t186 = -48013;
volatile uint32_t x751 = UINT32_MAX;
volatile int32_t x754 = INT32_MAX;
int8_t x762 = INT8_MAX;
uint64_t x764 = UINT64_MAX;
int16_t x769 = INT16_MIN;
static volatile uint32_t x771 = 1U;
volatile int8_t x775 = 1;
volatile int32_t t194 = -18;
int8_t x782 = 27;
int32_t t195 = -40585464;
volatile int32_t t196 = 56018277;
static int32_t x791 = INT32_MAX;
uint64_t x797 = 29956199396LLU;
uint8_t x800 = 1U;


void f0(void) {
    	static int16_t x1 = INT16_MIN;
	uint8_t x2 = 0U;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -13563;

    t0 = (x1!=((x2^x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	uint32_t x7 = UINT32_MAX;
	static int32_t x8 = -1;
	int32_t t1 = 57524;

    t1 = (x5!=((x6^x7)!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	volatile uint64_t x11 = 84LLU;
	static int16_t x12 = INT16_MIN;
	int32_t t2 = 180;

    t2 = (x9!=((x10^x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static int64_t x14 = -1377923030LL;
	static uint16_t x15 = UINT16_MAX;
	volatile int64_t x16 = INT64_MAX;

    t3 = (x13!=((x14^x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 2901U;
	uint64_t x18 = 31522399774197LLU;
	int32_t x19 = -1;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -1;

    t4 = (x17!=((x18^x19)!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 7U;
	int8_t x22 = INT8_MAX;
	int64_t x23 = INT64_MIN;
	uint16_t x24 = 609U;
	volatile int32_t t5 = 73333;

    t5 = (x21!=((x22^x23)!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = 84256;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MIN;

    t6 = (x25!=((x26^x27)!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	uint64_t x30 = 252798737993LLU;
	static int64_t x31 = INT64_MAX;
	volatile int32_t t7 = 13;

    t7 = (x29!=((x30^x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	volatile uint8_t x34 = UINT8_MAX;
	int16_t x35 = INT16_MIN;
	int32_t x36 = 20946;
	int32_t t8 = 1981571;

    t8 = (x33!=((x34^x35)!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = -153LL;
	int64_t x39 = 100154473374LL;
	int64_t x40 = INT64_MIN;
	int32_t t9 = 2;

    t9 = (x37!=((x38^x39)!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x43 = UINT64_MAX;

    t10 = (x41!=((x42^x43)!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	uint8_t x46 = 44U;
	volatile uint32_t x47 = UINT32_MAX;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -463;

    t11 = (x45!=((x46^x47)!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	uint8_t x50 = UINT8_MAX;
	uint32_t x51 = UINT32_MAX;
	uint32_t x52 = 2061786003U;
	int32_t t12 = -216890414;

    t12 = (x49!=((x50^x51)!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	uint64_t x55 = 185600LLU;
	volatile int64_t x56 = INT64_MIN;
	int32_t t13 = -141;

    t13 = (x53!=((x54^x55)!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	int64_t x58 = INT64_MIN;
	uint64_t x59 = UINT64_MAX;
	static int16_t x60 = INT16_MIN;
	int32_t t14 = -3188;

    t14 = (x57!=((x58^x59)!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	uint32_t x62 = 191U;
	static uint8_t x63 = UINT8_MAX;
	uint8_t x64 = UINT8_MAX;
	static volatile int32_t t15 = 163435;

    t15 = (x61!=((x62^x63)!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 5LLU;
	static volatile int32_t x66 = -1;
	int8_t x67 = -1;
	static int64_t x68 = -1LL;
	static int32_t t16 = -2;

    t16 = (x65!=((x66^x67)!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = 5;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = UINT16_MAX;

    t17 = (x69!=((x70^x71)!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -543;
	int64_t x74 = INT64_MAX;
	uint64_t x76 = 2687892381917250LLU;
	volatile int32_t t18 = 461;

    t18 = (x73!=((x74^x75)!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x78 = 9U;
	static uint8_t x79 = 1U;
	int32_t t19 = 62;

    t19 = (x77!=((x78^x79)!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x82 = INT16_MIN;
	int64_t x83 = 7823258318827LL;
	int32_t t20 = -26;

    t20 = (x81!=((x82^x83)!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 27U;
	int8_t x86 = 29;
	static volatile int64_t x87 = INT64_MIN;
	int16_t x88 = -3;
	int32_t t21 = 243876;

    t21 = (x85!=((x86^x87)!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	static int32_t x90 = INT32_MIN;
	volatile int16_t x91 = -3808;
	uint32_t x92 = 5U;
	volatile int32_t t22 = -8297;

    t22 = (x89!=((x90^x91)!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	static int8_t x94 = INT8_MAX;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = -1;
	volatile int32_t t23 = 1492;

    t23 = (x93!=((x94^x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -1;
	uint32_t x98 = 21U;
	volatile int16_t x100 = INT16_MIN;

    t24 = (x97!=((x98^x99)!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x103 = 8U;
	uint16_t x104 = 6626U;
	volatile int32_t t25 = 212160;

    t25 = (x101!=((x102^x103)!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = UINT16_MAX;
	int32_t x106 = 4018;
	volatile int64_t x107 = -1LL;
	int32_t t26 = 284995;

    t26 = (x105!=((x106^x107)!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x110 = -1LL;
	int16_t x111 = -1;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 7800178;

    t27 = (x109!=((x110^x111)!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x114 = 2U;
	volatile uint64_t x116 = 3165140578920483LLU;
	volatile int32_t t28 = 236;

    t28 = (x113!=((x114^x115)!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	int32_t x118 = INT32_MAX;
	uint8_t x120 = 28U;

    t29 = (x117!=((x118^x119)!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 67923237421934480LL;
	int8_t x122 = INT8_MIN;
	int64_t x123 = -1LL;
	int32_t t30 = 2458390;

    t30 = (x121!=((x122^x123)!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 0;
	static int64_t x126 = -1LL;
	uint8_t x127 = UINT8_MAX;
	volatile uint8_t x128 = 3U;
	volatile int32_t t31 = -9;

    t31 = (x125!=((x126^x127)!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = -21090009LL;
	volatile int8_t x130 = INT8_MIN;
	int8_t x132 = 59;
	volatile int32_t t32 = -15;

    t32 = (x129!=((x130^x131)!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x134 = 191802U;
	int32_t x135 = INT32_MAX;
	uint16_t x136 = 164U;
	int32_t t33 = -412314152;

    t33 = (x133!=((x134^x135)!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MIN;
	uint32_t x138 = 541808U;
	int64_t x139 = 1358545LL;
	static volatile int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 1;

    t34 = (x137!=((x138^x139)!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x141 = 84U;
	int64_t x143 = -124LL;
	uint64_t x144 = 111002LLU;
	int32_t t35 = 30;

    t35 = (x141!=((x142^x143)!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MIN;
	static uint8_t x147 = UINT8_MAX;
	static int16_t x148 = -1;
	volatile int32_t t36 = 81;

    t36 = (x145!=((x146^x147)!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	uint16_t x151 = 3U;
	int16_t x152 = 26;
	volatile int32_t t37 = 110622;

    t37 = (x149!=((x150^x151)!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = UINT64_MAX;
	uint64_t x154 = 12195916964493LLU;
	int64_t x155 = -25593051498486LL;
	static volatile int32_t x156 = -498742733;
	int32_t t38 = -249340603;

    t38 = (x153!=((x154^x155)!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 63120198236796LLU;
	volatile uint32_t x159 = UINT32_MAX;
	int32_t t39 = 1;

    t39 = (x157!=((x158^x159)!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x161 = 20U;
	volatile int32_t x162 = INT32_MIN;
	volatile int16_t x163 = INT16_MAX;
	volatile int64_t x164 = INT64_MIN;
	int32_t t40 = 56763;

    t40 = (x161!=((x162^x163)!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x166 = 63849993;
	static int8_t x168 = INT8_MIN;

    t41 = (x165!=((x166^x167)!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = -1;
	volatile int32_t t42 = -60;

    t42 = (x169!=((x170^x171)!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	volatile int64_t x174 = -1LL;
	static int32_t t43 = 55673;

    t43 = (x173!=((x174^x175)!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x177 = UINT64_MAX;
	static uint64_t x179 = 871859383815422729LLU;
	static volatile int8_t x180 = -2;
	volatile int32_t t44 = 530;

    t44 = (x177!=((x178^x179)!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -11890;
	int64_t x182 = -1LL;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 1;

    t45 = (x181!=((x182^x183)!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = UINT64_MAX;
	int16_t x187 = INT16_MIN;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -125701;

    t46 = (x185!=((x186^x187)!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = -59;
	int16_t x190 = INT16_MAX;
	volatile uint32_t x191 = UINT32_MAX;
	int32_t x192 = INT32_MAX;
	int32_t t47 = -7907072;

    t47 = (x189!=((x190^x191)!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x194 = UINT64_MAX;
	uint8_t x195 = 7U;
	int16_t x196 = INT16_MIN;

    t48 = (x193!=((x194^x195)!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = INT16_MIN;
	uint32_t x198 = 513688U;
	static int64_t x199 = INT64_MIN;
	int32_t t49 = -424988896;

    t49 = (x197!=((x198^x199)!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = INT64_MIN;
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = 15858;
	static uint8_t x204 = 0U;
	static volatile int32_t t50 = 17;

    t50 = (x201!=((x202^x203)!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = -1;
	int32_t t51 = 2120;

    t51 = (x205!=((x206^x207)!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x209 = 27U;
	volatile int16_t x210 = -1;
	int8_t x211 = -12;
	static int32_t x212 = 759931284;
	volatile int32_t t52 = 1500069;

    t52 = (x209!=((x210^x211)!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = UINT16_MAX;
	volatile int32_t x214 = 858758802;
	int16_t x215 = INT16_MIN;
	int8_t x216 = -1;
	static volatile int32_t t53 = -1;

    t53 = (x213!=((x214^x215)!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -1;
	uint32_t x218 = 1U;
	static uint8_t x219 = UINT8_MAX;
	int16_t x220 = -1;
	int32_t t54 = -885;

    t54 = (x217!=((x218^x219)!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	static int64_t x222 = INT64_MIN;
	volatile int32_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = -141015;

    t55 = (x221!=((x222^x223)!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	int32_t x227 = 52046755;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -1015;

    t56 = (x225!=((x226^x227)!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = INT64_MIN;

    t57 = (x229!=((x230^x231)!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int64_t x234 = INT64_MIN;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = -1;
	int32_t t58 = -48449595;

    t58 = (x233!=((x234^x235)!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x237 = 54U;
	volatile int64_t x239 = INT64_MAX;
	int16_t x240 = INT16_MIN;
	static volatile int32_t t59 = -258455843;

    t59 = (x237!=((x238^x239)!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -6;
	uint16_t x242 = 14474U;
	volatile int8_t x243 = -1;
	static int16_t x244 = INT16_MIN;
	int32_t t60 = -1;

    t60 = (x241!=((x242^x243)!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = INT32_MIN;
	volatile int32_t x246 = INT32_MIN;
	volatile int32_t t61 = 67;

    t61 = (x245!=((x246^x247)!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	volatile uint32_t x250 = 23541253U;
	static int16_t x251 = INT16_MIN;
	int8_t x252 = -1;
	static volatile int32_t t62 = 96497;

    t62 = (x249!=((x250^x251)!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x253 = INT8_MAX;
	int32_t x254 = -1;
	volatile int32_t x255 = INT32_MIN;
	int32_t x256 = 436;

    t63 = (x253!=((x254^x255)!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MIN;
	volatile int32_t x259 = -30364;
	int64_t x260 = INT64_MIN;
	int32_t t64 = -854;

    t64 = (x257!=((x258^x259)!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MAX;
	volatile int16_t x263 = 0;
	int16_t x264 = INT16_MIN;
	int32_t t65 = 110;

    t65 = (x261!=((x262^x263)!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = -41936913LL;
	int64_t x266 = INT64_MAX;
	int8_t x267 = -1;

    t66 = (x265!=((x266^x267)!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = INT64_MIN;
	int16_t x271 = 2;
	int16_t x272 = INT16_MAX;
	volatile int32_t t67 = 307799;

    t67 = (x269!=((x270^x271)!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MAX;
	static volatile uint64_t x274 = 8211LLU;
	int8_t x276 = INT8_MAX;
	int32_t t68 = 3580;

    t68 = (x273!=((x274^x275)!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -1LL;
	uint32_t x278 = 10285U;
	uint8_t x279 = 0U;
	volatile int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -222606;

    t69 = (x277!=((x278^x279)!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x282 = INT32_MIN;
	int64_t x283 = 31LL;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = 53;

    t70 = (x281!=((x282^x283)!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = -171;
	static uint32_t x287 = 2389783U;
	int32_t x288 = -159;
	volatile int32_t t71 = 82915209;

    t71 = (x285!=((x286^x287)!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MAX;
	int16_t x291 = -1;
	volatile uint64_t x292 = 4687LLU;
	volatile int32_t t72 = 266;

    t72 = (x289!=((x290^x291)!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x293 = 697226299U;
	int64_t x295 = 2694731LL;
	static int8_t x296 = INT8_MIN;
	int32_t t73 = -1933;

    t73 = (x293!=((x294^x295)!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 13588981888103520LLU;
	uint32_t x298 = 2640317U;
	uint64_t x300 = 5301LLU;
	int32_t t74 = 54;

    t74 = (x297!=((x298^x299)!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = INT8_MIN;
	volatile uint32_t x302 = 20969U;
	uint64_t x303 = 21662899709LLU;
	uint64_t x304 = 59784130LLU;

    t75 = (x301!=((x302^x303)!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = INT64_MAX;
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = -1;
	int32_t t76 = 1;

    t76 = (x305!=((x306^x307)!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = 3155LL;
	int32_t x311 = 13886138;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -256401;

    t77 = (x309!=((x310^x311)!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	static volatile uint64_t x314 = 934085LLU;
	static int32_t x315 = INT32_MIN;
	int32_t x316 = 305;
	int32_t t78 = 122780207;

    t78 = (x313!=((x314^x315)!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 325U;
	uint64_t x318 = 0LLU;
	static int8_t x319 = -37;
	int32_t x320 = -2;
	volatile int32_t t79 = -463401;

    t79 = (x317!=((x318^x319)!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	static uint8_t x323 = 32U;
	volatile int32_t x324 = -3794;
	int32_t t80 = -777065198;

    t80 = (x321!=((x322^x323)!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	volatile int32_t t81 = 3792;

    t81 = (x325!=((x326^x327)!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = INT16_MAX;
	static volatile int64_t x330 = INT64_MAX;
	int8_t x331 = INT8_MIN;
	static volatile int32_t x332 = 11886114;

    t82 = (x329!=((x330^x331)!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x333 = 2LL;
	int32_t x334 = 21507656;
	volatile int16_t x335 = -73;
	int8_t x336 = INT8_MIN;

    t83 = (x333!=((x334^x335)!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 0;
	int8_t x340 = 7;
	int32_t t84 = -6375266;

    t84 = (x337!=((x338^x339)!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	int64_t x343 = INT64_MAX;
	int32_t x344 = INT32_MAX;
	int32_t t85 = 0;

    t85 = (x341!=((x342^x343)!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t86 = -203;

    t86 = (x345!=((x346^x347)!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 12U;
	int16_t x350 = INT16_MIN;
	volatile uint32_t x351 = 10394686U;
	int8_t x352 = 25;
	static int32_t t87 = 18;

    t87 = (x349!=((x350^x351)!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x356 = 2470;
	int32_t t88 = 52929653;

    t88 = (x353!=((x354^x355)!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = 3U;
	static volatile uint64_t x358 = UINT64_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t89 = -145634083;

    t89 = (x357!=((x358^x359)!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	static volatile uint32_t x363 = UINT32_MAX;
	volatile int64_t x364 = 547768LL;

    t90 = (x361!=((x362^x363)!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	int32_t x366 = INT32_MAX;
	int64_t x367 = INT64_MIN;
	static int32_t x368 = 21;
	static volatile int32_t t91 = -4;

    t91 = (x365!=((x366^x367)!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = -3834219;
	uint32_t x370 = 63262U;
	int16_t x371 = INT16_MAX;
	int32_t x372 = 36121207;
	int32_t t92 = -1;

    t92 = (x369!=((x370^x371)!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	uint32_t x375 = UINT32_MAX;
	uint64_t x376 = UINT64_MAX;

    t93 = (x373!=((x374^x375)!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 39U;
	int16_t x378 = -1945;
	uint64_t x379 = 6558555129750LLU;
	volatile int64_t x380 = INT64_MIN;
	volatile int32_t t94 = 42765;

    t94 = (x377!=((x378^x379)!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x381 = 68341965U;
	int32_t x382 = -1;
	static uint32_t x384 = UINT32_MAX;

    t95 = (x381!=((x382^x383)!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = 12237842LL;
	int64_t x386 = INT64_MIN;
	uint16_t x388 = 13238U;

    t96 = (x385!=((x386^x387)!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = -15;
	volatile int64_t x390 = -19744009699930LL;
	int16_t x391 = 13;
	int8_t x392 = -1;
	static volatile int32_t t97 = 464223950;

    t97 = (x389!=((x390^x391)!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x394 = UINT64_MAX;
	static volatile int32_t t98 = 1320;

    t98 = (x393!=((x394^x395)!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = INT16_MIN;
	static int16_t x398 = INT16_MIN;
	volatile uint32_t x400 = 132936U;
	static volatile int32_t t99 = -11815913;

    t99 = (x397!=((x398^x399)!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = INT16_MIN;
	int16_t x402 = -1;
	int32_t x403 = 158055;
	static int64_t x404 = INT64_MAX;
	int32_t t100 = 385812475;

    t100 = (x401!=((x402^x403)!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = INT64_MIN;
	int64_t x407 = -1LL;
	int8_t x408 = INT8_MAX;
	volatile int32_t t101 = -1773606;

    t101 = (x405!=((x406^x407)!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	volatile int16_t x411 = -1;
	int32_t x412 = -74234061;
	static volatile int32_t t102 = 42246;

    t102 = (x409!=((x410^x411)!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = -15;
	volatile int32_t x414 = INT32_MIN;
	int64_t x415 = 645233626257902782LL;
	uint16_t x416 = 130U;
	int32_t t103 = -13710;

    t103 = (x413!=((x414^x415)!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = -1LL;
	int8_t x418 = INT8_MAX;
	int16_t x419 = INT16_MAX;
	int16_t x420 = INT16_MAX;
	static volatile int32_t t104 = -754;

    t104 = (x417!=((x418^x419)!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = INT64_MIN;
	volatile int16_t x422 = -1;
	static uint64_t x423 = 2108197203LLU;
	uint32_t x424 = 229445884U;

    t105 = (x421!=((x422^x423)!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x425 = 1875640269LLU;
	int64_t x427 = -85907399428157LL;
	uint8_t x428 = 44U;
	int32_t t106 = -280083502;

    t106 = (x425!=((x426^x427)!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -13579135628LL;
	volatile int64_t x431 = INT64_MIN;
	int32_t t107 = -368363723;

    t107 = (x429!=((x430^x431)!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 3U;
	static int16_t x434 = INT16_MIN;
	int64_t x435 = INT64_MIN;
	int32_t x436 = INT32_MAX;
	int32_t t108 = 8382253;

    t108 = (x433!=((x434^x435)!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x438 = -1;
	uint32_t x439 = 0U;
	uint8_t x440 = 1U;
	volatile int32_t t109 = -10073907;

    t109 = (x437!=((x438^x439)!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = -1;
	int16_t x443 = INT16_MAX;
	volatile uint16_t x444 = UINT16_MAX;
	volatile int32_t t110 = 2833;

    t110 = (x441!=((x442^x443)!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 9865LL;
	static volatile int64_t x446 = 10343804314431014LL;
	uint8_t x447 = 29U;
	int32_t x448 = -1;
	volatile int32_t t111 = 4483758;

    t111 = (x445!=((x446^x447)!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 30882941U;
	static int8_t x450 = -1;
	int64_t x451 = INT64_MIN;
	volatile int64_t x452 = INT64_MAX;

    t112 = (x449!=((x450^x451)!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = -1LL;
	uint16_t x454 = 9U;
	static int32_t x455 = INT32_MIN;
	uint8_t x456 = 0U;

    t113 = (x453!=((x454^x455)!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = INT16_MIN;
	uint64_t x458 = 2LLU;
	volatile int8_t x459 = INT8_MAX;
	volatile int16_t x460 = INT16_MAX;

    t114 = (x457!=((x458^x459)!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = INT64_MIN;
	int64_t x462 = 1205777964347123007LL;
	uint64_t x463 = 1259308199879073966LLU;
	volatile int16_t x464 = INT16_MIN;

    t115 = (x461!=((x462^x463)!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = INT32_MIN;
	int64_t x467 = INT64_MIN;

    t116 = (x465!=((x466^x467)!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x469 = -1;
	int8_t x470 = 4;
	uint64_t x471 = UINT64_MAX;
	int64_t x472 = INT64_MAX;
	volatile int32_t t117 = -2442;

    t117 = (x469!=((x470^x471)!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	int8_t x474 = 14;
	int16_t x475 = INT16_MIN;
	volatile int32_t x476 = INT32_MIN;
	int32_t t118 = 46635;

    t118 = (x473!=((x474^x475)!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = INT64_MIN;
	uint32_t x479 = 3955490U;
	int32_t x480 = -14;
	volatile int32_t t119 = -1;

    t119 = (x477!=((x478^x479)!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x482 = INT64_MIN;
	static int8_t x483 = INT8_MIN;
	int64_t x484 = -446703450250022805LL;
	volatile int32_t t120 = 74635;

    t120 = (x481!=((x482^x483)!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x486 = -325;
	static uint16_t x487 = 303U;
	int32_t x488 = INT32_MIN;
	volatile int32_t t121 = 0;

    t121 = (x485!=((x486^x487)!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = INT64_MIN;
	uint32_t x491 = 70339U;
	static uint32_t x492 = 1614728U;
	volatile int32_t t122 = -5;

    t122 = (x489!=((x490^x491)!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = -3;
	int64_t x495 = -998334631117723919LL;
	static int64_t x496 = -1LL;
	int32_t t123 = 124;

    t123 = (x493!=((x494^x495)!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 1396;
	volatile int32_t x498 = -1;
	volatile uint8_t x499 = 3U;
	int32_t x500 = -1;

    t124 = (x497!=((x498^x499)!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	int64_t x502 = 138593926610496408LL;
	int32_t x504 = INT32_MIN;
	int32_t t125 = -1;

    t125 = (x501!=((x502^x503)!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -102723882907LL;
	int32_t x506 = INT32_MIN;
	int32_t x507 = -6022;
	int16_t x508 = -1;

    t126 = (x505!=((x506^x507)!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -2872LL;
	int64_t x510 = -1LL;
	int16_t x511 = INT16_MIN;

    t127 = (x509!=((x510^x511)!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x514 = UINT8_MAX;
	int8_t x515 = 59;
	static uint32_t x516 = UINT32_MAX;
	int32_t t128 = -29;

    t128 = (x513!=((x514^x515)!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -300836;
	uint32_t x518 = 118U;
	static uint32_t x519 = 26U;
	uint64_t x520 = UINT64_MAX;
	volatile int32_t t129 = -42267536;

    t129 = (x517!=((x518^x519)!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = -21;
	uint8_t x523 = 1U;
	int32_t t130 = -1983;

    t130 = (x521!=((x522^x523)!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x525 = 14U;
	uint64_t x526 = UINT64_MAX;
	uint16_t x527 = UINT16_MAX;
	int32_t x528 = INT32_MIN;
	int32_t t131 = 0;

    t131 = (x525!=((x526^x527)!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x530 = INT8_MIN;
	int64_t x531 = -1LL;
	static int8_t x532 = -1;

    t132 = (x529!=((x530^x531)!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 367U;
	int16_t x534 = -2;
	static int64_t x535 = INT64_MAX;
	volatile uint8_t x536 = 1U;
	int32_t t133 = -518631;

    t133 = (x533!=((x534^x535)!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	int32_t x538 = -1;
	uint16_t x539 = 1U;
	uint16_t x540 = 7564U;
	int32_t t134 = -349;

    t134 = (x537!=((x538^x539)!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 7321559U;
	static int64_t x542 = INT64_MAX;
	static int64_t x544 = INT64_MIN;
	volatile int32_t t135 = -92831;

    t135 = (x541!=((x542^x543)!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x545 = 31411U;
	volatile int64_t x546 = -31548668125344666LL;
	uint32_t x547 = 1521U;
	uint64_t x548 = 1820LLU;

    t136 = (x545!=((x546^x547)!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 116106927;
	int16_t x551 = -41;
	volatile int32_t x552 = INT32_MAX;
	int32_t t137 = -670;

    t137 = (x549!=((x550^x551)!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = 0;
	int8_t x555 = -1;
	int64_t x556 = INT64_MIN;
	volatile int32_t t138 = 1704;

    t138 = (x553!=((x554^x555)!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	volatile uint16_t x560 = UINT16_MAX;
	volatile int32_t t139 = -1588;

    t139 = (x557!=((x558^x559)!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = 5407807;
	int16_t x562 = 68;
	volatile int32_t x563 = INT32_MIN;
	volatile int32_t t140 = -7;

    t140 = (x561!=((x562^x563)!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = 65181058894736418LL;
	int16_t x566 = INT16_MIN;
	volatile int32_t x567 = -15907;
	int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -2455;

    t141 = (x565!=((x566^x567)!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MAX;
	int64_t x570 = -49656231993617974LL;
	int16_t x572 = -1;
	volatile int32_t t142 = 18;

    t142 = (x569!=((x570^x571)!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MAX;
	volatile uint32_t x575 = UINT32_MAX;
	int64_t x576 = -20214086064532421LL;
	int32_t t143 = -30184187;

    t143 = (x573!=((x574^x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = UINT64_MAX;
	int16_t x578 = -5;
	int8_t x579 = 47;
	uint64_t x580 = 779395LLU;
	int32_t t144 = 1;

    t144 = (x577!=((x578^x579)!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = INT16_MIN;
	int8_t x582 = INT8_MAX;
	uint64_t x584 = 72LLU;
	static volatile int32_t t145 = -30021;

    t145 = (x581!=((x582^x583)!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 39137829030LLU;
	int16_t x586 = INT16_MIN;
	int8_t x587 = INT8_MAX;
	volatile int32_t t146 = 363905405;

    t146 = (x585!=((x586^x587)!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x589 = 6350140923103LLU;
	int16_t x590 = -1;
	uint8_t x592 = UINT8_MAX;
	volatile int32_t t147 = -3068;

    t147 = (x589!=((x590^x591)!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = 846;
	uint16_t x594 = 890U;
	volatile uint64_t x596 = UINT64_MAX;
	int32_t t148 = -17262;

    t148 = (x593!=((x594^x595)!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -656;
	int32_t x598 = INT32_MIN;
	int32_t x599 = -1;
	int16_t x600 = INT16_MIN;
	static int32_t t149 = 14443275;

    t149 = (x597!=((x598^x599)!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MAX;
	int64_t x602 = 49LL;
	int16_t x603 = INT16_MIN;
	static volatile int32_t t150 = -23563;

    t150 = (x601!=((x602^x603)!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MAX;
	volatile int64_t x607 = 650997240111588167LL;
	volatile int32_t x608 = -152574216;
	volatile int32_t t151 = 488082170;

    t151 = (x605!=((x606^x607)!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = INT64_MIN;
	static volatile int64_t x611 = INT64_MIN;
	uint64_t x612 = UINT64_MAX;
	static int32_t t152 = -232610208;

    t152 = (x609!=((x610^x611)!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = -13LL;
	static int32_t x614 = INT32_MIN;
	static volatile uint8_t x616 = 0U;
	volatile int32_t t153 = 4;

    t153 = (x613!=((x614^x615)!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MAX;
	int8_t x620 = INT8_MIN;
	volatile int32_t t154 = -520416857;

    t154 = (x617!=((x618^x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x622 = -177860;
	int16_t x623 = 4414;
	int32_t x624 = INT32_MAX;
	static volatile int32_t t155 = -2;

    t155 = (x621!=((x622^x623)!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -3;
	static volatile int8_t x626 = INT8_MIN;
	int32_t x627 = -1;
	int32_t t156 = 27517;

    t156 = (x625!=((x626^x627)!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 8500U;
	volatile int16_t x630 = -1;
	static volatile int32_t t157 = 370285;

    t157 = (x629!=((x630^x631)!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = INT32_MIN;
	int8_t x635 = -1;
	volatile int64_t x636 = -4175799LL;
	volatile int32_t t158 = 1;

    t158 = (x633!=((x634^x635)!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x637 = INT16_MIN;
	uint64_t x638 = UINT64_MAX;
	int8_t x639 = 38;
	volatile uint16_t x640 = 108U;
	static volatile int32_t t159 = 173951;

    t159 = (x637!=((x638^x639)!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	int8_t x642 = -25;
	volatile uint16_t x643 = 113U;
	int8_t x644 = 1;

    t160 = (x641!=((x642^x643)!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x646 = 41U;
	int32_t x647 = INT32_MIN;
	int32_t t161 = -716620370;

    t161 = (x645!=((x646^x647)!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	int16_t x650 = INT16_MIN;
	int8_t x651 = -1;
	int8_t x652 = INT8_MIN;
	int32_t t162 = 37166813;

    t162 = (x649!=((x650^x651)!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 20U;
	int64_t x655 = INT64_MAX;
	volatile int32_t x656 = INT32_MIN;
	volatile int32_t t163 = 1033;

    t163 = (x653!=((x654^x655)!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x657 = INT8_MIN;
	uint32_t x658 = UINT32_MAX;
	uint64_t x659 = 7635395988LLU;
	int8_t x660 = INT8_MAX;
	volatile int32_t t164 = -3247;

    t164 = (x657!=((x658^x659)!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = UINT8_MAX;
	volatile uint32_t x663 = UINT32_MAX;
	uint8_t x664 = 6U;
	int32_t t165 = 68226200;

    t165 = (x661!=((x662^x663)!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = -1LL;
	volatile int16_t x666 = 0;
	volatile int8_t x667 = INT8_MIN;
	int64_t x668 = INT64_MAX;
	volatile int32_t t166 = 5489489;

    t166 = (x665!=((x666^x667)!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = -1;
	uint32_t x670 = 4562219U;
	uint8_t x672 = 8U;

    t167 = (x669!=((x670^x671)!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = -1LL;
	static int64_t x674 = -1LL;
	static uint32_t x675 = UINT32_MAX;
	static int16_t x676 = INT16_MAX;
	int32_t t168 = 385511;

    t168 = (x673!=((x674^x675)!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = 3141557LL;
	uint16_t x678 = 5U;
	int16_t x679 = -1;

    t169 = (x677!=((x678^x679)!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = -1;
	uint64_t x682 = 1727592934513442739LLU;
	uint8_t x683 = UINT8_MAX;
	int16_t x684 = -1;
	int32_t t170 = -291766;

    t170 = (x681!=((x682^x683)!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	uint8_t x686 = 13U;
	int16_t x687 = INT16_MIN;
	static int16_t x688 = INT16_MAX;
	static volatile int32_t t171 = 155311;

    t171 = (x685!=((x686^x687)!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 6254U;
	static volatile int8_t x690 = INT8_MIN;
	volatile int64_t x692 = -7518LL;
	volatile int32_t t172 = -21326;

    t172 = (x689!=((x690^x691)!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	volatile uint32_t x695 = 4559U;
	int32_t x696 = 1460536;
	volatile int32_t t173 = 18892;

    t173 = (x693!=((x694^x695)!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -8068;
	int8_t x699 = INT8_MIN;
	int16_t x700 = -1;
	volatile int32_t t174 = 99;

    t174 = (x697!=((x698^x699)!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x701 = 4U;
	volatile int16_t x702 = INT16_MIN;
	uint16_t x703 = 5U;
	static uint32_t x704 = UINT32_MAX;

    t175 = (x701!=((x702^x703)!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = INT8_MIN;
	uint8_t x706 = 1U;
	volatile int32_t x707 = INT32_MIN;
	volatile int32_t x708 = INT32_MIN;

    t176 = (x705!=((x706^x707)!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = INT16_MIN;
	static uint16_t x710 = 30U;
	int8_t x711 = INT8_MIN;
	int32_t x712 = -42898;
	int32_t t177 = -66;

    t177 = (x709!=((x710^x711)!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x713 = -1;
	uint8_t x714 = 45U;
	uint32_t x715 = UINT32_MAX;
	uint32_t x716 = 7811U;
	volatile int32_t t178 = 21247621;

    t178 = (x713!=((x714^x715)!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 120U;
	static volatile int16_t x718 = INT16_MIN;
	uint16_t x719 = UINT16_MAX;
	static uint16_t x720 = UINT16_MAX;
	int32_t t179 = 0;

    t179 = (x717!=((x718^x719)!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	uint32_t x723 = 111U;
	uint8_t x724 = 0U;
	volatile int32_t t180 = 23;

    t180 = (x721!=((x722^x723)!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x726 = 2U;
	volatile int16_t x727 = INT16_MIN;
	static volatile int32_t t181 = -4;

    t181 = (x725!=((x726^x727)!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = 28;
	static int8_t x731 = -1;
	int8_t x732 = INT8_MIN;
	int32_t t182 = -1;

    t182 = (x729!=((x730^x731)!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -1;
	int32_t x734 = INT32_MAX;
	int32_t x735 = -1;
	volatile int32_t x736 = INT32_MIN;
	volatile int32_t t183 = -124643;

    t183 = (x733!=((x734^x735)!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = -420809009;
	int64_t x738 = -1LL;
	static int16_t x739 = INT16_MAX;
	static int8_t x740 = -1;
	int32_t t184 = 1961449;

    t184 = (x737!=((x738^x739)!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 27843U;
	int16_t x742 = INT16_MIN;
	int8_t x743 = INT8_MAX;
	int32_t x744 = INT32_MIN;
	volatile int32_t t185 = -14;

    t185 = (x741!=((x742^x743)!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 11387211161LLU;
	int32_t x747 = INT32_MIN;
	int8_t x748 = 1;

    t186 = (x745!=((x746^x747)!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint8_t x749 = 0U;
	int16_t x750 = 2;
	static uint32_t x752 = UINT32_MAX;
	volatile int32_t t187 = -58427;

    t187 = (x749!=((x750^x751)!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	static uint64_t x755 = 5LLU;
	int16_t x756 = 11;
	int32_t t188 = 9460;

    t188 = (x753!=((x754^x755)!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MAX;
	int32_t x758 = 8191855;
	int32_t x759 = -1;
	int16_t x760 = -1;
	int32_t t189 = -15;

    t189 = (x757!=((x758^x759)!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x761 = 49U;
	int64_t x763 = INT64_MIN;
	int32_t t190 = -26266336;

    t190 = (x761!=((x762^x763)!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	int64_t x766 = -35147925933LL;
	int32_t x767 = 2047433;
	uint32_t x768 = 253U;
	static int32_t t191 = -439;

    t191 = (x765!=((x766^x767)!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = -1;
	int8_t x772 = -49;
	int32_t t192 = -15034;

    t192 = (x769!=((x770^x771)!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = -92345;
	volatile int16_t x774 = INT16_MIN;
	uint64_t x776 = UINT64_MAX;
	volatile int32_t t193 = -87;

    t193 = (x773!=((x774^x775)!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x777 = INT16_MAX;
	int32_t x778 = -1;
	int32_t x779 = INT32_MIN;
	static int32_t x780 = INT32_MIN;

    t194 = (x777!=((x778^x779)!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 0U;
	volatile int32_t x783 = INT32_MIN;
	int64_t x784 = INT64_MIN;

    t195 = (x781!=((x782^x783)!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	int16_t x786 = 13123;
	int64_t x787 = INT64_MIN;
	uint64_t x788 = UINT64_MAX;

    t196 = (x785!=((x786^x787)!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = INT32_MAX;
	static volatile int8_t x790 = INT8_MAX;
	int8_t x792 = INT8_MIN;
	volatile int32_t t197 = -14492396;

    t197 = (x789!=((x790^x791)!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = INT16_MIN;
	int32_t x794 = INT32_MIN;
	int64_t x795 = INT64_MIN;
	int64_t x796 = 3476750367LL;
	volatile int32_t t198 = 108249;

    t198 = (x793!=((x794^x795)!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = 6;
	int32_t x799 = INT32_MIN;
	volatile int32_t t199 = 24348;

    t199 = (x797!=((x798^x799)!=x800));

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

