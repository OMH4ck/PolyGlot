
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

static uint32_t t0 = 5481416U;
int16_t x16 = -1;
volatile int8_t x17 = -9;
volatile int64_t x21 = INT64_MIN;
int16_t x40 = 1487;
volatile int64_t x41 = -177942LL;
int32_t x44 = INT32_MIN;
int8_t x48 = -6;
volatile int32_t t11 = -33111383;
volatile int16_t x53 = -57;
static volatile int32_t t13 = 72631828;
int32_t x59 = -1;
static int32_t x60 = INT32_MIN;
int32_t t14 = 3441735;
int32_t x63 = -1;
uint64_t x68 = 10529741LLU;
static volatile int32_t x71 = -1;
int16_t x73 = 1924;
int32_t t18 = 188069341;
uint64_t x82 = 10186382268420821LLU;
volatile int8_t x86 = -7;
int32_t x88 = INT32_MIN;
volatile int32_t t21 = -449449340;
volatile uint8_t x89 = 69U;
static volatile int64_t x90 = -1LL;
uint32_t x91 = 270629775U;
volatile int32_t t24 = 109619;
int32_t x103 = 0;
volatile int8_t x106 = INT8_MAX;
int16_t x107 = 8;
volatile int64_t t26 = 80046889LL;
volatile int64_t x112 = INT64_MAX;
uint8_t x113 = UINT8_MAX;
int8_t x115 = 7;
int32_t t29 = 61;
int16_t x121 = -1;
volatile int8_t x125 = INT8_MIN;
int32_t t31 = -2;
int8_t x129 = -1;
uint16_t x134 = UINT16_MAX;
volatile uint16_t x136 = 11U;
int8_t x138 = 10;
uint16_t x144 = 0U;
static volatile int64_t t35 = -1028744LL;
uint32_t x145 = 4835U;
uint8_t x154 = UINT8_MAX;
static int16_t x170 = INT16_MIN;
volatile int64_t x171 = INT64_MIN;
int8_t x177 = INT8_MIN;
int16_t x180 = INT16_MIN;
int32_t x181 = -4138001;
static int8_t x183 = -1;
static int32_t x187 = INT32_MIN;
volatile int64_t t46 = INT64_MIN;
static int8_t x191 = -1;
uint32_t x212 = 262U;
volatile uint16_t x216 = UINT16_MAX;
volatile int32_t t54 = -5;
static int8_t x221 = -1;
volatile int32_t x222 = 1391822;
uint64_t x223 = 194440LLU;
volatile int16_t x224 = 26;
int32_t t56 = -27051;
int32_t x229 = 3320911;
int8_t x233 = INT8_MIN;
static volatile uint32_t x239 = 1U;
int8_t x240 = INT8_MAX;
int32_t t59 = INT32_MIN;
static int8_t x242 = -1;
static uint16_t x243 = UINT16_MAX;
int16_t x250 = -499;
uint64_t x255 = UINT64_MAX;
volatile int32_t t63 = -9595714;
uint8_t x258 = UINT8_MAX;
int64_t x263 = INT64_MIN;
int64_t x269 = INT64_MAX;
uint32_t x271 = 2750U;
int64_t x278 = INT64_MIN;
uint16_t x288 = 4195U;
int32_t t71 = INT32_MIN;
int8_t x300 = -3;
int8_t x301 = 0;
int32_t x308 = -63685430;
static volatile int32_t x309 = -1;
int16_t x316 = INT16_MIN;
static volatile uint64_t x319 = 7907847LLU;
volatile int32_t t81 = 92811015;
uint8_t x329 = UINT8_MAX;
uint32_t x340 = 1552886U;
int32_t t84 = 357;
uint16_t x343 = 7U;
int32_t x346 = 3;
volatile int64_t x350 = INT64_MIN;
static uint32_t x351 = UINT32_MAX;
uint32_t x356 = 6461U;
uint16_t x360 = 1U;
static int32_t x366 = INT32_MIN;
static int32_t x369 = INT32_MAX;
int8_t x370 = INT8_MIN;
static int8_t x372 = INT8_MIN;
volatile int64_t x379 = 2302073989591113700LL;
int32_t x381 = INT32_MIN;
int8_t x384 = INT8_MIN;
volatile int64_t x385 = INT64_MIN;
uint8_t x403 = 7U;
volatile uint64_t x412 = 467206893LLU;
volatile int64_t x414 = INT64_MIN;
static volatile int32_t x415 = -1;
static int32_t x418 = -1;
int16_t x426 = 56;
int64_t x430 = -1LL;
int16_t x431 = INT16_MIN;
uint32_t t109 = 41U;
int16_t x448 = INT16_MIN;
static uint32_t x450 = 16324U;
static int64_t x458 = INT64_MIN;
volatile int32_t x459 = -29961996;
static int8_t x465 = 0;
volatile int16_t x466 = 830;
int16_t x470 = -1;
int32_t x474 = INT32_MIN;
int8_t x475 = -18;
int64_t x478 = INT64_MAX;
static int8_t x481 = -1;
static volatile int32_t x489 = INT32_MIN;
int64_t x491 = INT64_MAX;
static uint64_t x492 = 809256478LLU;
volatile uint16_t x496 = 2U;
int32_t x498 = -1;
int64_t x499 = INT64_MAX;
int32_t x501 = INT32_MIN;
int8_t x504 = -29;
static uint64_t x509 = 80377499562747LLU;
static int64_t x517 = 11460372LL;
uint32_t x519 = 2803666U;
int16_t x524 = INT16_MIN;
volatile int32_t t130 = 101226;
int16_t x526 = INT16_MAX;
int64_t x527 = INT64_MIN;
volatile int16_t x531 = -1;
static uint64_t x532 = 4LLU;
static int16_t x533 = INT16_MIN;
int32_t t133 = 686;
int64_t t135 = -154597351LL;
int32_t x552 = -1021;
int32_t x553 = INT32_MIN;
volatile int32_t t138 = INT32_MIN;
int8_t x567 = 1;
uint16_t x575 = UINT16_MAX;
int32_t t143 = -1055373;
static uint16_t x579 = 278U;
volatile int8_t x585 = INT8_MAX;
static int32_t t147 = -212728942;
int8_t x600 = INT8_MIN;
int64_t x602 = INT64_MIN;
int32_t x612 = INT32_MIN;
int8_t x623 = -2;
volatile int64_t t155 = 100693550LL;
uint64_t x628 = 12807601LLU;
uint64_t t156 = 9LLU;
int64_t x630 = INT64_MIN;
uint16_t x637 = 0U;
int8_t x638 = 4;
int64_t x641 = -224LL;
int16_t x643 = -1;
int64_t t160 = 187459978LL;
static int16_t x651 = INT16_MIN;
int16_t x653 = 265;
int16_t x661 = 12651;
uint32_t x662 = 3U;
int8_t x664 = -1;
uint8_t x666 = 3U;
static int16_t x669 = INT16_MIN;
uint8_t x670 = UINT8_MAX;
int64_t x686 = INT64_MIN;
int8_t x691 = -1;
uint16_t x692 = 241U;
uint8_t x705 = UINT8_MAX;
volatile int64_t x707 = INT64_MIN;
int8_t x708 = INT8_MIN;
int32_t t176 = -13;
int64_t x711 = INT64_MIN;
uint16_t x712 = 45U;
uint64_t t177 = 25169563289072LLU;
volatile int64_t x715 = INT64_MAX;
int32_t x717 = 43;
uint16_t x719 = 22U;
int32_t t179 = -14633404;
static int32_t t181 = 14;
static volatile int16_t x729 = 1077;
uint64_t x732 = UINT64_MAX;
uint8_t x735 = UINT8_MAX;
int8_t x736 = INT8_MIN;
int8_t x737 = 0;
int32_t x739 = INT32_MIN;
int16_t x742 = INT16_MAX;
volatile int8_t x743 = INT8_MAX;
static uint32_t x747 = UINT32_MAX;
int32_t x748 = INT32_MAX;
int64_t x751 = -1LL;
volatile int8_t x754 = INT8_MAX;
volatile uint32_t t190 = UINT32_MAX;
static uint64_t x765 = 13176135572LLU;
int64_t x768 = INT64_MIN;
uint64_t x772 = 9485LLU;
volatile uint32_t t192 = 6472955U;
static int16_t x778 = -1;
volatile int8_t x780 = -1;
static int16_t x784 = -1;
int8_t x786 = -10;
uint16_t x791 = 3U;
static int32_t t197 = -10764769;
static uint32_t x798 = 233455513U;


void f0(void) {
    	volatile uint32_t x1 = 13863U;
	int8_t x2 = -1;
	uint16_t x3 = 7U;
	int16_t x4 = INT16_MIN;

    t0 = (x1|((x2<=x3)>x4));

    if (t0 != 13863U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	uint64_t x6 = 1613237227LLU;
	int32_t x7 = INT32_MAX;
	static volatile int16_t x8 = -1;
	volatile int64_t t1 = -146517LL;

    t1 = (x5|((x6<=x7)>x8));

    if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = UINT16_MAX;
	int8_t x10 = 2;
	uint8_t x11 = 15U;
	int16_t x12 = -1096;
	int32_t t2 = -25650182;

    t2 = (x9|((x10<=x11)>x12));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	uint32_t x14 = 47247176U;
	uint8_t x15 = 26U;
	int32_t t3 = -784;

    t3 = (x13|((x14<=x15)>x16));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x18 = INT8_MIN;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = 62581510LL;
	int32_t t4 = -3610829;

    t4 = (x17|((x18<=x19)>x20));

    if (t4 != -9) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = UINT32_MAX;
	int16_t x23 = -9528;
	uint32_t x24 = 1675U;
	volatile int64_t t5 = INT64_MIN;

    t5 = (x21|((x22<=x23)>x24));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MIN;
	volatile uint32_t x26 = 1763821325U;
	int8_t x27 = 15;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -60358331;

    t6 = (x25|((x26<=x27)>x28));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	volatile int64_t x30 = -1LL;
	int32_t x31 = INT32_MIN;
	static volatile int8_t x32 = -1;
	int32_t t7 = 10566;

    t7 = (x29|((x30<=x31)>x32));

    if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 16094U;
	int8_t x34 = INT8_MAX;
	static int64_t x35 = INT64_MAX;
	uint64_t x36 = 27842426377632280LLU;
	int32_t t8 = 0;

    t8 = (x33|((x34<=x35)>x36));

    if (t8 != 16094) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MAX;
	int64_t x38 = -1LL;
	volatile int32_t x39 = INT32_MIN;
	volatile int64_t t9 = INT64_MAX;

    t9 = (x37|((x38<=x39)>x40));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x42 = -2680157146565LL;
	int64_t x43 = INT64_MIN;
	static volatile int64_t t10 = 3908508401662894585LL;

    t10 = (x41|((x42<=x43)>x44));

    if (t10 != -177941LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	static int16_t x46 = INT16_MIN;
	uint16_t x47 = 12U;

    t11 = (x45|((x46<=x47)>x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MAX;
	int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MAX;
	int32_t t12 = 1588;

    t12 = (x49|((x50<=x51)>x52));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x54 = 88630541303563LL;
	int64_t x55 = -22LL;
	volatile int16_t x56 = -92;

    t13 = (x53|((x54<=x55)>x56));

    if (t13 != -57) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -35;
	uint64_t x58 = UINT64_MAX;

    t14 = (x57|((x58<=x59)>x60));

    if (t14 != -35) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MAX;
	volatile int64_t x64 = -1LL;
	int32_t t15 = 896761722;

    t15 = (x61|((x62<=x63)>x64));

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	static int8_t x66 = INT8_MAX;
	int32_t x67 = INT32_MIN;
	uint64_t t16 = UINT64_MAX;

    t16 = (x65|((x66<=x67)>x68));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	volatile int8_t x70 = -1;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = 13;

    t17 = (x69|((x70<=x71)>x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x74 = 3214542388606165LL;
	uint64_t x75 = 78105855209913LLU;
	volatile int32_t x76 = INT32_MAX;

    t18 = (x73|((x74<=x75)>x76));

    if (t18 != 1924) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 87U;
	uint8_t x78 = UINT8_MAX;
	static volatile int64_t x79 = INT64_MIN;
	volatile uint32_t x80 = 8123U;
	volatile int32_t t19 = 73393;

    t19 = (x77|((x78<=x79)>x80));

    if (t19 != 87) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x81 = 2U;
	static volatile int64_t x83 = INT64_MIN;
	uint32_t x84 = 23217676U;
	static volatile int32_t t20 = -60;

    t20 = (x81|((x82<=x83)>x84));

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	int8_t x87 = 0;

    t21 = (x85|((x86<=x87)>x88));

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x92 = 74U;
	int32_t t22 = -6;

    t22 = (x89|((x90<=x91)>x92));

    if (t22 != 69) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 4U;
	uint16_t x94 = 247U;
	volatile int8_t x95 = -46;
	uint64_t x96 = 48297LLU;
	volatile int32_t t23 = 1255019;

    t23 = (x93|((x94<=x95)>x96));

    if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 66957158U;
	int8_t x100 = -1;

    t24 = (x97|((x98<=x99)>x100));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	int8_t x102 = -15;
	static int16_t x104 = INT16_MAX;
	static int32_t t25 = -1;

    t25 = (x101|((x102<=x103)>x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 31577LL;
	int64_t x108 = INT64_MIN;

    t26 = (x105|((x106<=x107)>x108));

    if (t26 != 31577LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	uint64_t x110 = UINT64_MAX;
	int8_t x111 = -62;
	static volatile int32_t t27 = -327;

    t27 = (x109|((x110<=x111)>x112));

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x114 = -1LL;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 7667498;

    t28 = (x113|((x114<=x115)>x116));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	int8_t x118 = INT8_MAX;
	uint16_t x119 = UINT16_MAX;
	volatile uint8_t x120 = 68U;

    t29 = (x117|((x118<=x119)>x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x122 = 54241676;
	int16_t x123 = -62;
	int32_t x124 = INT32_MIN;
	static int32_t t30 = 12;

    t30 = (x121|((x122<=x123)>x124));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x126 = 3153U;
	static int64_t x127 = INT64_MIN;
	int32_t x128 = -428664;

    t31 = (x125|((x126<=x127)>x128));

    if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x130 = 157LLU;
	volatile uint64_t x131 = 22642182612063707LLU;
	uint32_t x132 = 3U;
	volatile int32_t t32 = 5808;

    t32 = (x129|((x130<=x131)>x132));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	uint16_t x135 = UINT16_MAX;
	int32_t t33 = 16088;

    t33 = (x133|((x134<=x135)>x136));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = 0;
	uint32_t x139 = 5U;
	int64_t x140 = 2421LL;
	int32_t t34 = -36986416;

    t34 = (x137|((x138<=x139)>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = 3126744097LL;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MIN;

    t35 = (x141|((x142<=x143)>x144));

    if (t35 != 3126744097LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = 4507U;
	int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MIN;
	uint32_t t36 = 93103U;

    t36 = (x145|((x146<=x147)>x148));

    if (t36 != 4835U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 0;
	uint8_t x150 = 0U;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	volatile int32_t t37 = 0;

    t37 = (x149|((x150<=x151)>x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	int32_t x156 = -1;
	int32_t t38 = -61626;

    t38 = (x153|((x154<=x155)>x156));

    if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	static int8_t x158 = INT8_MAX;
	uint64_t x159 = 1LLU;
	int32_t x160 = INT32_MIN;
	int32_t t39 = -30902;

    t39 = (x157|((x158<=x159)>x160));

    if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = INT16_MIN;
	int32_t x162 = -343;
	volatile int16_t x163 = -1;
	static int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -15774136;

    t40 = (x161|((x162<=x163)>x164));

    if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	uint64_t x166 = UINT64_MAX;
	int8_t x167 = INT8_MIN;
	int64_t x168 = -1LL;
	volatile int64_t t41 = 182227378LL;

    t41 = (x165|((x166<=x167)>x168));

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = -1;
	static int64_t x172 = INT64_MAX;
	volatile int32_t t42 = -2;

    t42 = (x169|((x170<=x171)>x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	volatile int32_t x174 = INT32_MIN;
	uint16_t x175 = 3U;
	volatile int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 62;

    t43 = (x173|((x174<=x175)>x176));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = -285475564;
	int16_t x179 = INT16_MIN;
	volatile int32_t t44 = -4;

    t44 = (x177|((x178<=x179)>x180));

    if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MIN;
	int8_t x184 = 7;
	volatile int32_t t45 = 1;

    t45 = (x181|((x182<=x183)>x184));

    if (t45 != -4138001) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = INT64_MIN;
	static uint64_t x186 = UINT64_MAX;
	volatile int64_t x188 = INT64_MAX;

    t46 = (x185|((x186<=x187)>x188));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 32U;
	int64_t x190 = INT64_MIN;
	static int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 273;

    t47 = (x189|((x190<=x191)>x192));

    if (t47 != 32) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	static volatile int32_t x194 = 385;
	int16_t x195 = INT16_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t48 = 64187099;

    t48 = (x193|((x194<=x195)>x196));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -77;
	int16_t x198 = INT16_MAX;
	uint32_t x199 = 5U;
	volatile uint32_t x200 = 934151U;
	int32_t t49 = 962838;

    t49 = (x197|((x198<=x199)>x200));

    if (t49 != -77) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 25411064253LLU;
	uint32_t x202 = UINT32_MAX;
	int32_t x203 = 45;
	int32_t x204 = 26483;
	uint64_t t50 = 17072538818LLU;

    t50 = (x201|((x202<=x203)>x204));

    if (t50 != 25411064253LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x205 = INT64_MIN;
	int64_t x206 = -1LL;
	volatile int16_t x207 = INT16_MAX;
	volatile int64_t x208 = 3375092261395816259LL;
	volatile int64_t t51 = INT64_MIN;

    t51 = (x205|((x206<=x207)>x208));

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	uint64_t x210 = UINT64_MAX;
	volatile int8_t x211 = INT8_MIN;
	volatile int64_t t52 = -964187449LL;

    t52 = (x209|((x210<=x211)>x212));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = INT16_MAX;
	volatile int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MIN;
	int32_t t53 = 1011425;

    t53 = (x213|((x214<=x215)>x216));

    if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 2U;
	static uint64_t x218 = 614452LLU;
	int8_t x219 = INT8_MIN;
	int16_t x220 = -3733;

    t54 = (x217|((x218<=x219)>x220));

    if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t t55 = 5;

    t55 = (x221|((x222<=x223)>x224));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MIN;
	static int16_t x227 = -1;
	uint8_t x228 = 102U;

    t56 = (x225|((x226<=x227)>x228));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x230 = INT64_MAX;
	static int16_t x231 = -1;
	uint32_t x232 = 213999678U;
	volatile int32_t t57 = -1;

    t57 = (x229|((x230<=x231)>x232));

    if (t57 != 3320911) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = INT32_MIN;
	int8_t x235 = -6;
	int64_t x236 = 25426877369LL;
	volatile int32_t t58 = -34849129;

    t58 = (x233|((x234<=x235)>x236));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = INT32_MIN;
	int8_t x238 = INT8_MIN;

    t59 = (x237|((x238<=x239)>x240));

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	static int32_t x244 = INT32_MIN;
	int32_t t60 = -2640901;

    t60 = (x241|((x242<=x243)>x244));

    if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MIN;
	uint32_t x246 = 23227U;
	uint32_t x247 = 51450U;
	volatile uint8_t x248 = UINT8_MAX;
	int32_t t61 = INT32_MIN;

    t61 = (x245|((x246<=x247)>x248));

    if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	uint16_t x251 = 8U;
	int16_t x252 = INT16_MAX;
	int32_t t62 = INT32_MIN;

    t62 = (x249|((x250<=x251)>x252));

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MIN;
	uint64_t x256 = UINT64_MAX;

    t63 = (x253|((x254<=x255)>x256));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = INT32_MIN;
	int8_t x259 = 0;
	int16_t x260 = -1;
	int32_t t64 = 1;

    t64 = (x257|((x258<=x259)>x260));

    if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = -1;
	int8_t x262 = INT8_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 1109919;

    t65 = (x261|((x262<=x263)>x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x265 = UINT8_MAX;
	static volatile int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = -1;

    t66 = (x265|((x266<=x267)>x268));

    if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x270 = UINT64_MAX;
	int16_t x272 = -1;
	static int64_t t67 = INT64_MAX;

    t67 = (x269|((x270<=x271)>x272));

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	int16_t x275 = -174;
	int64_t x276 = -1LL;
	int32_t t68 = 968611;

    t68 = (x273|((x274<=x275)>x276));

    if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 0U;
	int8_t x279 = INT8_MAX;
	int8_t x280 = -1;
	volatile int32_t t69 = -318;

    t69 = (x277|((x278<=x279)>x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	static uint16_t x282 = 305U;
	static volatile uint64_t x283 = 421217770953LLU;
	volatile int64_t x284 = -1LL;
	int64_t t70 = INT64_MAX;

    t70 = (x281|((x282<=x283)>x284));

    if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	static uint64_t x286 = 19944807757825LLU;
	volatile int8_t x287 = INT8_MIN;

    t71 = (x285|((x286<=x287)>x288));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	int16_t x291 = INT16_MIN;
	static int32_t x292 = 95;
	int32_t t72 = -1099;

    t72 = (x289|((x290<=x291)>x292));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 189280853799419LLU;
	int8_t x294 = INT8_MIN;
	uint64_t x295 = 31887623240624512LLU;
	volatile int64_t x296 = 109LL;
	uint64_t t73 = 0LLU;

    t73 = (x293|((x294<=x295)>x296));

    if (t73 != 189280853799419LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -1LL;
	uint8_t x298 = UINT8_MAX;
	static volatile int32_t x299 = 1351958;
	int64_t t74 = 1227555164148173LL;

    t74 = (x297|((x298<=x299)>x300));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x302 = 2659567;
	int64_t x303 = -121089LL;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = -736307446;

    t75 = (x301|((x302<=x303)>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = -1LL;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = 6487U;
	volatile int64_t t76 = 743279455039LL;

    t76 = (x305|((x306<=x307)>x308));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = -1;
	int16_t x311 = 0;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -12;

    t77 = (x309|((x310<=x311)>x312));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -1;
	uint16_t x314 = 115U;
	int64_t x315 = 283242446340418LL;
	static int32_t t78 = -3618;

    t78 = (x313|((x314<=x315)>x316));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 19148694U;
	static int8_t x318 = INT8_MAX;
	volatile int32_t x320 = INT32_MIN;
	uint32_t t79 = 6073999U;

    t79 = (x317|((x318<=x319)>x320));

    if (t79 != 19148695U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1015588290LL;
	uint16_t x322 = 205U;
	uint64_t x323 = 0LLU;
	int16_t x324 = 31;
	static int64_t t80 = -45166LL;

    t80 = (x321|((x322<=x323)>x324));

    if (t80 != -1015588290LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 864U;
	int16_t x326 = 1;
	int8_t x327 = -15;
	volatile int16_t x328 = INT16_MIN;

    t81 = (x325|((x326<=x327)>x328));

    if (t81 != 865) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x330 = INT8_MIN;
	int32_t x331 = -1;
	int16_t x332 = -1;
	int32_t t82 = 52000157;

    t82 = (x329|((x330<=x331)>x332));

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	int32_t x334 = -1470;
	int16_t x335 = 1;
	uint64_t x336 = UINT64_MAX;
	int32_t t83 = 607722698;

    t83 = (x333|((x334<=x335)>x336));

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -11;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;

    t84 = (x337|((x338<=x339)>x340));

    if (t84 != -11) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 484255U;
	volatile int64_t x342 = INT64_MIN;
	static int8_t x344 = INT8_MIN;
	uint32_t t85 = 2U;

    t85 = (x341|((x342<=x343)>x344));

    if (t85 != 484255U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 4198936U;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = UINT32_MAX;
	uint32_t t86 = 214769453U;

    t86 = (x345|((x346<=x347)>x348));

    if (t86 != 4198936U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	volatile int32_t x352 = -1;
	int32_t t87 = 34956;

    t87 = (x349|((x350<=x351)>x352));

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = -1;
	uint32_t x354 = 28053U;
	static int64_t x355 = INT64_MIN;
	volatile int32_t t88 = -30;

    t88 = (x353|((x354<=x355)>x356));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 0;
	uint8_t x358 = 21U;
	static volatile int64_t x359 = INT64_MIN;
	int32_t t89 = 2;

    t89 = (x357|((x358<=x359)>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = INT16_MIN;
	uint8_t x362 = 16U;
	volatile uint16_t x363 = UINT16_MAX;
	int8_t x364 = -1;
	static volatile int32_t t90 = -127;

    t90 = (x361|((x362<=x363)>x364));

    if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	int32_t x368 = -1;
	volatile int32_t t91 = 96;

    t91 = (x365|((x366<=x367)>x368));

    if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x371 = 2977LLU;
	int32_t t92 = INT32_MAX;

    t92 = (x369|((x370<=x371)>x372));

    if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = INT16_MIN;
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = INT64_MIN;
	volatile uint8_t x376 = 63U;
	volatile int32_t t93 = -2072700;

    t93 = (x373|((x374<=x375)>x376));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x377 = 39;
	static int8_t x378 = INT8_MIN;
	uint64_t x380 = UINT64_MAX;
	int32_t t94 = 14830770;

    t94 = (x377|((x378<=x379)>x380));

    if (t94 != 39) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = INT32_MIN;
	int16_t x383 = -32;
	volatile int32_t t95 = -38192;

    t95 = (x381|((x382<=x383)>x384));

    if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	uint32_t x388 = 32315U;
	static volatile int64_t t96 = INT64_MIN;

    t96 = (x385|((x386<=x387)>x388));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	int32_t x390 = 412;
	int64_t x391 = INT64_MAX;
	volatile int16_t x392 = -54;
	int32_t t97 = 68190601;

    t97 = (x389|((x390<=x391)>x392));

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 258U;
	int32_t x394 = -1;
	uint8_t x395 = 59U;
	static int8_t x396 = -1;
	volatile int32_t t98 = 6580302;

    t98 = (x393|((x394<=x395)>x396));

    if (t98 != 259) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x397 = 962U;
	volatile uint16_t x398 = 15U;
	int8_t x399 = INT8_MAX;
	uint8_t x400 = 13U;
	static int32_t t99 = -335055037;

    t99 = (x397|((x398<=x399)>x400));

    if (t99 != 962) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = INT16_MIN;
	int8_t x402 = 0;
	static volatile int8_t x404 = INT8_MIN;
	volatile int32_t t100 = 0;

    t100 = (x401|((x402<=x403)>x404));

    if (t100 != -32767) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	volatile uint8_t x406 = 71U;
	static int16_t x407 = 95;
	int64_t x408 = INT64_MAX;
	static int32_t t101 = INT32_MIN;

    t101 = (x405|((x406<=x407)>x408));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -1;
	uint16_t x410 = 14416U;
	static int16_t x411 = -1;
	static volatile int32_t t102 = 660895;

    t102 = (x409|((x410<=x411)>x412));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = -1LL;
	int8_t x416 = -22;
	int64_t t103 = 54356178466LL;

    t103 = (x413|((x414<=x415)>x416));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = 0;
	volatile uint8_t x419 = UINT8_MAX;
	int64_t x420 = 77179546237792091LL;
	volatile int32_t t104 = -22;

    t104 = (x417|((x418<=x419)>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	int16_t x422 = 1;
	static volatile uint64_t x423 = 8641095874546576919LLU;
	uint32_t x424 = 557U;
	volatile int32_t t105 = 136613659;

    t105 = (x421|((x422<=x423)>x424));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x425 = -1;
	int64_t x427 = 883017424011LL;
	int32_t x428 = -637523;
	int32_t t106 = -3;

    t106 = (x425|((x426<=x427)>x428));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 7904;
	static uint8_t x432 = UINT8_MAX;
	volatile int32_t t107 = -3;

    t107 = (x429|((x430<=x431)>x432));

    if (t107 != 7904) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 8U;
	volatile uint16_t x434 = UINT16_MAX;
	volatile int64_t x435 = -1LL;
	int8_t x436 = -30;
	volatile int32_t t108 = 13272070;

    t108 = (x433|((x434<=x435)>x436));

    if (t108 != 9) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = 894222099U;
	uint32_t x438 = 16U;
	volatile uint8_t x439 = 0U;
	int64_t x440 = INT64_MAX;

    t109 = (x437|((x438<=x439)>x440));

    if (t109 != 894222099U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x441 = UINT32_MAX;
	int64_t x442 = 478914113953562LL;
	static uint8_t x443 = 0U;
	volatile int16_t x444 = INT16_MAX;
	volatile uint32_t t110 = UINT32_MAX;

    t110 = (x441|((x442<=x443)>x444));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x445 = 113U;
	uint64_t x446 = 612337LLU;
	int16_t x447 = INT16_MIN;
	volatile int32_t t111 = -39182;

    t111 = (x445|((x446<=x447)>x448));

    if (t111 != 113) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	volatile uint16_t x451 = UINT16_MAX;
	int64_t x452 = 844455LL;
	volatile int64_t t112 = INT64_MIN;

    t112 = (x449|((x450<=x451)>x452));

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	uint8_t x454 = UINT8_MAX;
	uint64_t x455 = 790054178899436LLU;
	uint8_t x456 = 2U;
	volatile int32_t t113 = 2;

    t113 = (x453|((x454<=x455)>x456));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x457 = -1;
	int8_t x460 = 3;
	volatile int32_t t114 = -1;

    t114 = (x457|((x458<=x459)>x460));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 10790358;
	int64_t x462 = INT64_MIN;
	uint32_t x463 = UINT32_MAX;
	int16_t x464 = 124;
	int32_t t115 = 0;

    t115 = (x461|((x462<=x463)>x464));

    if (t115 != 10790358) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x467 = INT32_MIN;
	uint16_t x468 = 3051U;
	volatile int32_t t116 = 2328;

    t116 = (x465|((x466<=x467)>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = -7604;
	static uint8_t x471 = UINT8_MAX;
	int16_t x472 = INT16_MAX;
	volatile int32_t t117 = 1822507;

    t117 = (x469|((x470<=x471)>x472));

    if (t117 != -7604) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 7;
	int16_t x476 = 1;
	volatile int32_t t118 = 262708631;

    t118 = (x473|((x474<=x475)>x476));

    if (t118 != 7) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x477 = 8442U;
	int64_t x479 = -1LL;
	static int32_t x480 = -3;
	int32_t t119 = 1;

    t119 = (x477|((x478<=x479)>x480));

    if (t119 != 8443) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x482 = UINT16_MAX;
	int32_t x483 = INT32_MIN;
	static volatile int32_t x484 = -12375;
	static int32_t t120 = -1432053;

    t120 = (x481|((x482<=x483)>x484));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 1;
	static int8_t x486 = INT8_MIN;
	int32_t x487 = 979;
	int32_t x488 = INT32_MIN;
	int32_t t121 = -8;

    t121 = (x485|((x486<=x487)>x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x490 = INT64_MAX;
	volatile int32_t t122 = INT32_MIN;

    t122 = (x489|((x490<=x491)>x492));

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	volatile int64_t x494 = INT64_MIN;
	uint64_t x495 = 2739923070278LLU;
	volatile int64_t t123 = INT64_MIN;

    t123 = (x493|((x494<=x495)>x496));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 90U;
	int16_t x500 = -1;
	static volatile int32_t t124 = 2913;

    t124 = (x497|((x498<=x499)>x500));

    if (t124 != 91) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = -1;
	int32_t x503 = -242;
	volatile int32_t t125 = 552;

    t125 = (x501|((x502<=x503)>x504));

    if (t125 != -2147483647) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = 7281974005LL;
	volatile int32_t x506 = INT32_MIN;
	uint8_t x507 = 38U;
	volatile int32_t x508 = INT32_MAX;
	static volatile int64_t t126 = 1995275892937LL;

    t126 = (x505|((x506<=x507)>x508));

    if (t126 != 7281974005LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x510 = INT16_MIN;
	int8_t x511 = -1;
	volatile uint16_t x512 = 1U;
	static uint64_t t127 = 291381LLU;

    t127 = (x509|((x510<=x511)>x512));

    if (t127 != 80377499562747LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -6702283LL;
	uint32_t x514 = UINT32_MAX;
	int8_t x515 = 0;
	volatile int16_t x516 = 2086;
	int64_t t128 = -516742075318LL;

    t128 = (x513|((x514<=x515)>x516));

    if (t128 != -6702283LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x518 = 614;
	uint16_t x520 = 75U;
	static volatile int64_t t129 = 50LL;

    t129 = (x517|((x518<=x519)>x520));

    if (t129 != 11460372LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = UINT8_MAX;
	uint32_t x522 = 14U;
	static uint8_t x523 = UINT8_MAX;

    t130 = (x521|((x522<=x523)>x524));

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 69U;
	int8_t x528 = -2;
	volatile uint32_t t131 = 170941U;

    t131 = (x525|((x526<=x527)>x528));

    if (t131 != 69U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -711;
	static uint16_t x530 = 231U;
	volatile int32_t t132 = -2;

    t132 = (x529|((x530<=x531)>x532));

    if (t132 != -711) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = INT64_MIN;
	static volatile uint8_t x535 = 50U;
	int32_t x536 = INT32_MAX;

    t133 = (x533|((x534<=x535)>x536));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = INT8_MIN;
	int16_t x538 = 7327;
	uint8_t x539 = 35U;
	int8_t x540 = -47;
	volatile int32_t t134 = 926;

    t134 = (x537|((x538<=x539)>x540));

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = -52647LL;
	uint32_t x542 = 17149274U;
	volatile uint16_t x543 = 14U;
	int8_t x544 = INT8_MAX;

    t135 = (x541|((x542<=x543)>x544));

    if (t135 != -52647LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	volatile int32_t x546 = -1;
	int16_t x547 = INT16_MIN;
	uint16_t x548 = UINT16_MAX;
	volatile int32_t t136 = -1;

    t136 = (x545|((x546<=x547)>x548));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 1265073592060681LL;
	static volatile int8_t x550 = INT8_MIN;
	static int64_t x551 = INT64_MIN;
	volatile int64_t t137 = 1LL;

    t137 = (x549|((x550<=x551)>x552));

    if (t137 != 1265073592060681LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x554 = 14709U;
	uint64_t x555 = UINT64_MAX;
	static int64_t x556 = INT64_MAX;

    t138 = (x553|((x554<=x555)>x556));

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MAX;
	static volatile int64_t x560 = INT64_MIN;
	int32_t t139 = -4930;

    t139 = (x557|((x558<=x559)>x560));

    if (t139 != -127) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 12U;
	uint64_t x562 = UINT64_MAX;
	volatile uint16_t x563 = 388U;
	int16_t x564 = -1;
	int32_t t140 = 112170;

    t140 = (x561|((x562<=x563)>x564));

    if (t140 != 13) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = -16;
	static uint32_t x566 = 100309982U;
	uint64_t x568 = UINT64_MAX;
	int32_t t141 = 0;

    t141 = (x565|((x566<=x567)>x568));

    if (t141 != -16) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = -996;
	static int8_t x570 = INT8_MAX;
	volatile int64_t x571 = INT64_MAX;
	uint32_t x572 = UINT32_MAX;
	int32_t t142 = 1;

    t142 = (x569|((x570<=x571)>x572));

    if (t142 != -996) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = INT16_MIN;
	int32_t x574 = INT32_MAX;
	static volatile uint8_t x576 = 10U;

    t143 = (x573|((x574<=x575)>x576));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = UINT64_MAX;
	uint16_t x578 = 12U;
	int8_t x580 = -2;
	uint64_t t144 = UINT64_MAX;

    t144 = (x577|((x578<=x579)>x580));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -4;
	static uint64_t x582 = 707LLU;
	static int8_t x583 = -37;
	uint8_t x584 = UINT8_MAX;
	static volatile int32_t t145 = -13037;

    t145 = (x581|((x582<=x583)>x584));

    if (t145 != -4) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = INT32_MAX;
	volatile uint64_t x587 = UINT64_MAX;
	static int64_t x588 = INT64_MAX;
	int32_t t146 = -429;

    t146 = (x585|((x586<=x587)>x588));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = 120;
	uint16_t x590 = 3614U;
	int16_t x591 = -1;
	uint32_t x592 = UINT32_MAX;

    t147 = (x589|((x590<=x591)>x592));

    if (t147 != 120) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = UINT8_MAX;
	int16_t x594 = INT16_MAX;
	uint32_t x595 = UINT32_MAX;
	int16_t x596 = INT16_MAX;
	static volatile int32_t t148 = 156192995;

    t148 = (x593|((x594<=x595)>x596));

    if (t148 != 255) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 1U;
	static volatile int32_t x598 = INT32_MIN;
	int8_t x599 = INT8_MIN;
	int32_t t149 = -65337639;

    t149 = (x597|((x598<=x599)>x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MIN;
	volatile uint32_t x603 = 117800537U;
	int32_t x604 = -53528;
	volatile int32_t t150 = -371;

    t150 = (x601|((x602<=x603)>x604));

    if (t150 != -32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -82LL;
	int8_t x606 = INT8_MIN;
	int8_t x607 = INT8_MIN;
	int32_t x608 = -869;
	int64_t t151 = 2LL;

    t151 = (x605|((x606<=x607)>x608));

    if (t151 != -81LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x609 = 5748;
	int64_t x610 = -1LL;
	volatile uint8_t x611 = 29U;
	volatile int32_t t152 = -6974;

    t152 = (x609|((x610<=x611)>x612));

    if (t152 != 5749) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = -1LL;
	static int16_t x614 = -6;
	static uint8_t x615 = UINT8_MAX;
	int64_t x616 = INT64_MAX;
	int64_t t153 = 0LL;

    t153 = (x613|((x614<=x615)>x616));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = 1436;
	static int64_t x618 = INT64_MIN;
	volatile int16_t x619 = INT16_MIN;
	uint16_t x620 = UINT16_MAX;
	int32_t t154 = 16668960;

    t154 = (x617|((x618<=x619)>x620));

    if (t154 != 1436) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 13537LL;
	volatile int32_t x622 = 434686447;
	int32_t x624 = -5540736;

    t155 = (x621|((x622<=x623)>x624));

    if (t155 != 13537LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 9182911277LLU;
	int64_t x626 = -1LL;
	int8_t x627 = -1;

    t156 = (x625|((x626<=x627)>x628));

    if (t156 != 9182911277LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	int32_t x631 = INT32_MIN;
	uint8_t x632 = 8U;
	static volatile int32_t t157 = 46;

    t157 = (x629|((x630<=x631)>x632));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x633 = INT16_MIN;
	static int8_t x634 = INT8_MIN;
	int8_t x635 = -2;
	uint64_t x636 = 5LLU;
	volatile int32_t t158 = -110;

    t158 = (x633|((x634<=x635)>x636));

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x639 = 27054U;
	int16_t x640 = INT16_MIN;
	int32_t t159 = -269;

    t159 = (x637|((x638<=x639)>x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = 3;
	volatile uint64_t x644 = 1LLU;

    t160 = (x641|((x642<=x643)>x644));

    if (t160 != -224LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = 1848;
	volatile int32_t x646 = -9;
	uint8_t x647 = 4U;
	uint16_t x648 = UINT16_MAX;
	int32_t t161 = 6;

    t161 = (x645|((x646<=x647)>x648));

    if (t161 != 1848) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int8_t x650 = INT8_MAX;
	int32_t x652 = INT32_MIN;
	static volatile int64_t t162 = -4403693114256705LL;

    t162 = (x649|((x650<=x651)>x652));

    if (t162 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x654 = UINT8_MAX;
	static int64_t x655 = -1LL;
	static int64_t x656 = -118LL;
	int32_t t163 = -188;

    t163 = (x653|((x654<=x655)>x656));

    if (t163 != 265) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	volatile uint8_t x658 = 49U;
	static uint64_t x659 = 1414031704211LLU;
	int32_t x660 = INT32_MAX;
	int32_t t164 = 0;

    t164 = (x657|((x658<=x659)>x660));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x663 = 504;
	int32_t t165 = 14875586;

    t165 = (x661|((x662<=x663)>x664));

    if (t165 != 12651) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = 4;
	int8_t x667 = INT8_MIN;
	volatile uint8_t x668 = 2U;
	volatile int32_t t166 = -49737617;

    t166 = (x665|((x666<=x667)>x668));

    if (t166 != 4) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x671 = 1017U;
	int64_t x672 = -27044LL;
	int32_t t167 = 5705;

    t167 = (x669|((x670<=x671)>x672));

    if (t167 != -32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	int16_t x674 = INT16_MIN;
	uint8_t x675 = UINT8_MAX;
	int64_t x676 = INT64_MAX;
	int64_t t168 = 63155942LL;

    t168 = (x673|((x674<=x675)>x676));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	volatile int16_t x678 = -1975;
	static volatile uint16_t x679 = UINT16_MAX;
	int8_t x680 = -1;
	volatile int32_t t169 = -642721152;

    t169 = (x677|((x678<=x679)>x680));

    if (t169 != -32767) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = UINT16_MAX;
	static int64_t x682 = -1LL;
	int32_t x683 = INT32_MIN;
	int64_t x684 = 29596406072LL;
	volatile int32_t t170 = 5;

    t170 = (x681|((x682<=x683)>x684));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = -1;
	uint16_t x687 = 1U;
	int16_t x688 = INT16_MIN;
	static volatile int32_t t171 = -15;

    t171 = (x685|((x686<=x687)>x688));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -1;
	static int64_t x690 = INT64_MAX;
	int32_t t172 = -7;

    t172 = (x689|((x690<=x691)>x692));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	static uint16_t x694 = UINT16_MAX;
	int64_t x695 = -1LL;
	int8_t x696 = 13;
	static volatile int64_t t173 = -65975LL;

    t173 = (x693|((x694<=x695)>x696));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	volatile int8_t x698 = INT8_MIN;
	volatile int8_t x699 = 0;
	volatile int16_t x700 = 3214;
	volatile int32_t t174 = 3;

    t174 = (x697|((x698<=x699)>x700));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = 7;
	uint16_t x702 = 41U;
	int8_t x703 = 42;
	int32_t x704 = 2800;
	static volatile int32_t t175 = 1;

    t175 = (x701|((x702<=x703)>x704));

    if (t175 != 7) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x706 = 22433378U;

    t176 = (x705|((x706<=x707)>x708));

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 109214454LLU;
	int32_t x710 = 41;

    t177 = (x709|((x710<=x711)>x712));

    if (t177 != 109214454LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	uint16_t x714 = 2165U;
	int64_t x716 = INT64_MAX;
	volatile int32_t t178 = -76180;

    t178 = (x713|((x714<=x715)>x716));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x718 = -3886;
	int32_t x720 = INT32_MIN;

    t179 = (x717|((x718<=x719)>x720));

    if (t179 != 43) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = -1LL;
	static volatile int16_t x722 = INT16_MAX;
	static int64_t x723 = INT64_MIN;
	volatile uint8_t x724 = 12U;
	static int64_t t180 = 533291724630952825LL;

    t180 = (x721|((x722<=x723)>x724));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint16_t x725 = 3U;
	volatile int8_t x726 = INT8_MIN;
	int8_t x727 = -35;
	uint32_t x728 = 125645U;

    t181 = (x725|((x726<=x727)>x728));

    if (t181 != 3) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x730 = 30032670LLU;
	uint64_t x731 = UINT64_MAX;
	int32_t t182 = 483519644;

    t182 = (x729|((x730<=x731)>x732));

    if (t182 != 1077) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = 15333657754326525LL;
	uint32_t x734 = 178U;
	static volatile int64_t t183 = -7573076869306607LL;

    t183 = (x733|((x734<=x735)>x736));

    if (t183 != 15333657754326525LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x738 = INT16_MAX;
	int8_t x740 = INT8_MIN;
	static int32_t t184 = -3;

    t184 = (x737|((x738<=x739)>x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = -1;
	uint16_t x744 = 58U;
	volatile int32_t t185 = -322731742;

    t185 = (x741|((x742<=x743)>x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = 2261;
	int64_t x746 = INT64_MAX;
	static int32_t t186 = -4;

    t186 = (x745|((x746<=x747)>x748));

    if (t186 != 2261) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	static uint16_t x750 = UINT16_MAX;
	int8_t x752 = -1;
	uint64_t t187 = UINT64_MAX;

    t187 = (x749|((x750<=x751)>x752));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = 0;
	uint16_t x755 = 45U;
	int16_t x756 = 33;
	volatile int32_t t188 = -5;

    t188 = (x753|((x754<=x755)>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 0U;
	volatile uint8_t x758 = UINT8_MAX;
	int64_t x759 = -1LL;
	int64_t x760 = -1LL;
	int32_t t189 = 17;

    t189 = (x757|((x758<=x759)>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MIN;
	uint32_t x763 = UINT32_MAX;
	volatile int64_t x764 = 9389365009950751LL;

    t190 = (x761|((x762<=x763)>x764));

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = INT16_MIN;
	uint16_t x767 = UINT16_MAX;
	static uint64_t t191 = 132569234349LLU;

    t191 = (x765|((x766<=x767)>x768));

    if (t191 != 13176135573LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 148131U;
	int8_t x770 = -1;
	int8_t x771 = INT8_MAX;

    t192 = (x769|((x770<=x771)>x772));

    if (t192 != 148131U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = UINT8_MAX;
	uint16_t x774 = 0U;
	int8_t x775 = -1;
	static uint32_t x776 = 23U;
	volatile int32_t t193 = -61966095;

    t193 = (x773|((x774<=x775)>x776));

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = -1;
	volatile int32_t x779 = INT32_MIN;
	volatile int32_t t194 = -792901748;

    t194 = (x777|((x778<=x779)>x780));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	int8_t x782 = INT8_MAX;
	uint32_t x783 = UINT32_MAX;
	int32_t t195 = 25;

    t195 = (x781|((x782<=x783)>x784));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x785 = INT8_MIN;
	uint32_t x787 = 832896U;
	static int16_t x788 = INT16_MAX;
	volatile int32_t t196 = -9317;

    t196 = (x785|((x786<=x787)>x788));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	volatile int32_t x790 = -67;
	int32_t x792 = -27902663;

    t197 = (x789|((x790<=x791)>x792));

    if (t197 != -127) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x793 = 1437440067124686573LLU;
	static int8_t x794 = INT8_MIN;
	int8_t x795 = -1;
	uint32_t x796 = 193980998U;
	uint64_t t198 = 1740686330745LLU;

    t198 = (x793|((x794<=x795)>x796));

    if (t198 != 1437440067124686573LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = UINT16_MAX;
	static uint64_t x799 = 12461LLU;
	volatile uint16_t x800 = 2839U;
	volatile int32_t t199 = 49;

    t199 = (x797|((x798<=x799)>x800));

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

