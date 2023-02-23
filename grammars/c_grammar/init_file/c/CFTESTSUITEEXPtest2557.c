
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

int16_t x1 = INT16_MAX;
int16_t x4 = INT16_MIN;
int8_t x5 = INT8_MIN;
static uint16_t x8 = 85U;
static volatile int8_t x9 = -1;
static int16_t x14 = INT16_MIN;
static volatile int16_t x20 = 152;
static uint8_t x21 = UINT8_MAX;
int8_t x27 = 0;
int16_t x28 = 3023;
int32_t x31 = 1;
int32_t x39 = -422;
int32_t x46 = INT32_MAX;
static int16_t x47 = INT16_MIN;
static int8_t x48 = INT8_MAX;
int16_t x51 = 0;
int64_t x53 = -24450209257LL;
uint8_t x55 = 69U;
int32_t t12 = -126;
int8_t x57 = INT8_MIN;
uint8_t x60 = 7U;
int32_t x61 = -1;
volatile uint8_t x69 = 14U;
int32_t x71 = INT32_MIN;
volatile int8_t x87 = -51;
uint64_t x94 = 370026203752252182LLU;
int8_t x96 = -1;
uint16_t x102 = 1999U;
volatile int32_t t22 = -47097743;
uint32_t x105 = UINT32_MAX;
uint32_t x108 = 152704491U;
volatile uint8_t x128 = UINT8_MAX;
uint8_t x131 = 86U;
static uint32_t x132 = UINT32_MAX;
int16_t x136 = 1;
volatile int64_t x140 = INT64_MIN;
volatile uint64_t x143 = UINT64_MAX;
uint16_t x145 = UINT16_MAX;
static uint64_t x148 = UINT64_MAX;
int8_t x150 = INT8_MIN;
int16_t x151 = INT16_MIN;
int8_t x152 = INT8_MIN;
uint32_t x153 = UINT32_MAX;
volatile int64_t x165 = INT64_MAX;
uint16_t x167 = 721U;
int64_t x174 = -1LL;
int16_t x175 = INT16_MIN;
int64_t x176 = INT64_MIN;
int64_t x186 = 407254074118199738LL;
int16_t x198 = -60;
int8_t x204 = INT8_MIN;
uint64_t x208 = 2853580113715161227LLU;
int16_t x218 = INT16_MIN;
volatile int64_t x219 = INT64_MIN;
int16_t x220 = INT16_MIN;
static int32_t t51 = -55;
static int8_t x229 = INT8_MIN;
volatile int64_t x231 = -3330008262028659613LL;
int16_t x236 = INT16_MAX;
int64_t x237 = 3018469LL;
static uint32_t x241 = 10416431U;
volatile int32_t x242 = INT32_MIN;
int8_t x245 = -1;
int64_t x246 = 135466770828LL;
uint32_t x247 = 1212U;
int64_t x250 = -1LL;
static int8_t x252 = 12;
int32_t t57 = 433;
uint8_t x263 = UINT8_MAX;
int32_t t60 = 1932130;
uint8_t x266 = 1U;
uint8_t x269 = 65U;
int8_t x270 = -1;
volatile int32_t x276 = -1;
static uint64_t x279 = 3780LLU;
int64_t x281 = -1LL;
int8_t x292 = INT8_MIN;
int32_t t67 = -17;
static volatile int32_t x297 = INT32_MIN;
int32_t x311 = INT32_MIN;
volatile uint16_t x319 = 126U;
int16_t x332 = -1;
int64_t x336 = -2460LL;
uint16_t x338 = UINT16_MAX;
volatile int32_t t78 = 10300392;
int8_t x342 = INT8_MIN;
int64_t x343 = INT64_MIN;
static int16_t x345 = INT16_MAX;
static uint64_t x346 = 872596811894104LLU;
volatile int32_t t80 = -245000;
int64_t x351 = INT64_MIN;
int16_t x353 = -1;
uint8_t x355 = 124U;
int32_t t86 = 1918;
uint64_t x379 = 27227LLU;
uint16_t x380 = UINT16_MAX;
static int64_t x385 = INT64_MAX;
static int64_t x386 = -1LL;
uint16_t x387 = 9U;
uint16_t x388 = 133U;
volatile int32_t t92 = 230;
int16_t x402 = 101;
uint16_t x404 = 27145U;
int8_t x409 = -22;
int8_t x413 = INT8_MIN;
uint8_t x415 = UINT8_MAX;
int32_t t95 = -119758;
volatile uint32_t x421 = 517U;
volatile uint64_t x428 = 12448808475653LLU;
volatile uint32_t x438 = 1000476U;
uint64_t x441 = 1167509851081093803LLU;
static volatile int32_t t103 = 11;
uint64_t x452 = UINT64_MAX;
volatile int32_t t105 = 11311;
static volatile int32_t x458 = -1;
uint32_t x461 = 385135U;
int16_t x466 = 11;
uint8_t x470 = UINT8_MAX;
int32_t x481 = INT32_MIN;
uint8_t x483 = 4U;
int16_t x490 = INT16_MIN;
int32_t t115 = 127424770;
int32_t t116 = -284;
int32_t x501 = INT32_MIN;
static int8_t x502 = INT8_MIN;
uint8_t x503 = UINT8_MAX;
static volatile int16_t x512 = INT16_MIN;
int32_t t121 = -1785933;
uint16_t x526 = 25U;
static int32_t x528 = 1663529;
static int8_t x529 = INT8_MAX;
static int64_t x535 = INT64_MAX;
int32_t x537 = INT32_MAX;
static int8_t x541 = INT8_MIN;
int64_t x543 = INT64_MIN;
volatile int8_t x550 = -11;
int16_t x554 = -10459;
volatile int32_t t129 = -221822;
uint16_t x560 = UINT16_MAX;
volatile uint64_t x568 = 60119920022909LLU;
static volatile int32_t x574 = INT32_MAX;
uint32_t x587 = 4U;
int32_t t139 = 8826;
volatile int8_t x613 = 1;
static int64_t x614 = -1LL;
int64_t x615 = -1LL;
int32_t t143 = -82723629;
int32_t x622 = INT32_MIN;
volatile int16_t x623 = -1;
volatile uint8_t x626 = UINT8_MAX;
volatile int32_t t145 = -345;
int32_t x629 = INT32_MIN;
int32_t x636 = 22469;
int8_t x638 = INT8_MIN;
uint32_t x640 = 993684U;
uint16_t x649 = UINT16_MAX;
int32_t x650 = -1;
int64_t x654 = -131553027042617659LL;
int64_t x655 = 2189LL;
static volatile int8_t x658 = -1;
uint32_t x664 = 1513645U;
static int32_t t153 = 51144161;
int64_t x669 = -1LL;
volatile int16_t x671 = INT16_MAX;
int8_t x683 = 33;
volatile int64_t x688 = 4789345680447LL;
int8_t x690 = INT8_MAX;
static int16_t x695 = INT16_MAX;
int32_t t161 = 4754936;
int16_t x703 = INT16_MIN;
int32_t x704 = INT32_MIN;
int16_t x707 = -2;
static int32_t t163 = 245531065;
volatile int32_t t164 = -10450382;
int32_t x718 = INT32_MIN;
uint32_t x721 = 132552564U;
static volatile int32_t t167 = -42;
volatile int32_t t168 = -60;
int8_t x740 = -13;
uint8_t x741 = UINT8_MAX;
static uint16_t x742 = UINT16_MAX;
int32_t t171 = 192033672;
uint32_t x755 = 4359390U;
int32_t x756 = -1;
volatile uint8_t x758 = 121U;
static int32_t x759 = -1;
int32_t x760 = -1;
uint8_t x762 = 58U;
volatile int8_t x763 = 15;
int8_t x771 = -1;
uint16_t x772 = 506U;
uint8_t x783 = 27U;
static int32_t t178 = -40369276;
static int32_t t183 = -12;
uint64_t x812 = UINT64_MAX;
int32_t x813 = INT32_MIN;
uint16_t x814 = 232U;
static int64_t x829 = INT64_MIN;
int8_t x830 = INT8_MIN;
int64_t x831 = -9256694LL;
static int32_t x834 = -5;
volatile int32_t x837 = 2215101;
volatile int32_t t188 = 0;
volatile int32_t x842 = INT32_MIN;
static int8_t x846 = -1;
volatile int32_t t191 = 28611;
uint32_t x863 = 435U;
volatile int32_t t196 = -222056691;
volatile int64_t x882 = -14LL;
int16_t x883 = INT16_MAX;
uint16_t x884 = 11U;
uint8_t x888 = UINT8_MAX;
int8_t x889 = -1;
uint64_t x890 = UINT64_MAX;
uint64_t x892 = 448424229LLU;


void f0(void) {
    	uint64_t x2 = 191LLU;
	int64_t x3 = -1LL;
	static int32_t t0 = -25763;

    t0 = (x1>((x2^x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -16260;
	int64_t x7 = 455067039LL;
	int32_t t1 = 14442;

    t1 = (x5>((x6^x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = 30674U;
	int8_t x11 = -1;
	int8_t x12 = -1;
	int32_t t2 = -47543761;

    t2 = (x9>((x10^x11)+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	static int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 1047204;

    t3 = (x13>((x14^x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 1422676U;
	int64_t x18 = -35002743324248265LL;
	volatile int8_t x19 = INT8_MIN;
	volatile int32_t t4 = 2000;

    t4 = (x17>((x18^x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x22 = UINT8_MAX;
	static volatile int16_t x23 = 62;
	uint8_t x24 = 0U;
	static volatile int32_t t5 = 63;

    t5 = (x21>((x22^x23)+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = 376U;
	uint32_t x26 = 3U;
	int32_t t6 = -39829;

    t6 = (x25>((x26^x27)+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -1;
	int32_t x30 = -30349725;
	int64_t x32 = 11149086582627LL;
	volatile int32_t t7 = 2;

    t7 = (x29>((x30^x31)+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 133563459U;
	int8_t x38 = INT8_MIN;
	static int64_t x40 = -1LL;
	int32_t t8 = -10465;

    t8 = (x37>((x38^x39)+x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = 204U;
	uint64_t x42 = 3745779432363487LLU;
	volatile uint32_t x43 = UINT32_MAX;
	static uint64_t x44 = 28159847847877803LLU;
	volatile int32_t t9 = -3031289;

    t9 = (x41>((x42^x43)+x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = UINT32_MAX;
	volatile int32_t t10 = 192426;

    t10 = (x45>((x46^x47)+x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 1806418573U;
	static int64_t x50 = INT64_MIN;
	static int32_t x52 = INT32_MAX;
	int32_t t11 = 12;

    t11 = (x49>((x50^x51)+x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x54 = INT64_MIN;
	int8_t x56 = 11;

    t12 = (x53>((x54^x55)+x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x58 = -1;
	int64_t x59 = -1LL;
	static volatile int32_t t13 = 473512;

    t13 = (x57>((x58^x59)+x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x62 = 7170419LLU;
	int32_t x63 = -1049072606;
	volatile int32_t x64 = 60;
	static int32_t t14 = 477;

    t14 = (x61>((x62^x63)+x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x70 = -1;
	int32_t x72 = -1;
	int32_t t15 = 619254716;

    t15 = (x69>((x70^x71)+x72));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = 448150934LL;
	static int64_t x74 = 9800606595405258LL;
	uint16_t x75 = 225U;
	int8_t x76 = -4;
	int32_t t16 = 55709558;

    t16 = (x73>((x74^x75)+x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = INT64_MIN;
	uint16_t x78 = UINT16_MAX;
	static volatile int16_t x79 = INT16_MIN;
	uint64_t x80 = 32LLU;
	static volatile int32_t t17 = -43574292;

    t17 = (x77>((x78^x79)+x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x81 = UINT64_MAX;
	int64_t x82 = INT64_MIN;
	int16_t x83 = -1;
	static int64_t x84 = INT64_MIN;
	int32_t t18 = -258109985;

    t18 = (x81>((x82^x83)+x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = 0;
	int8_t x86 = -1;
	static int8_t x88 = -28;
	int32_t t19 = 51189;

    t19 = (x85>((x86^x87)+x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = -5543510382368LL;
	volatile int8_t x95 = INT8_MIN;
	volatile int32_t t20 = -15;

    t20 = (x93>((x94^x95)+x96));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = -9;
	volatile int16_t x98 = INT16_MIN;
	int32_t x99 = -1;
	int64_t x100 = -4130224LL;
	volatile int32_t t21 = -524253;

    t21 = (x97>((x98^x99)+x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x101 = -1;
	volatile int64_t x103 = -1855LL;
	volatile int8_t x104 = -1;

    t22 = (x101>((x102^x103)+x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x106 = UINT32_MAX;
	int64_t x107 = INT64_MIN;
	static int32_t t23 = -155684;

    t23 = (x105>((x106^x107)+x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 7079571356658LLU;
	static uint8_t x110 = UINT8_MAX;
	static uint32_t x111 = UINT32_MAX;
	static int16_t x112 = INT16_MAX;
	volatile int32_t t24 = -839027177;

    t24 = (x109>((x110^x111)+x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x121 = UINT8_MAX;
	int32_t x122 = INT32_MAX;
	int64_t x123 = INT64_MAX;
	int32_t x124 = 235810651;
	int32_t t25 = 4174;

    t25 = (x121>((x122^x123)+x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x125 = 111;
	int8_t x126 = -1;
	volatile int32_t x127 = 39974;
	volatile int32_t t26 = -41;

    t26 = (x125>((x126^x127)+x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = -1LL;
	static int8_t x130 = INT8_MIN;
	int32_t t27 = 3566229;

    t27 = (x129>((x130^x131)+x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x133 = -1045;
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = INT8_MIN;
	int32_t t28 = -551;

    t28 = (x133>((x134^x135)+x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x137 = 123037;
	int32_t x138 = 1;
	uint8_t x139 = UINT8_MAX;
	int32_t t29 = 7888;

    t29 = (x137>((x138^x139)+x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x141 = -15713LL;
	uint32_t x142 = UINT32_MAX;
	int32_t x144 = 41;
	volatile int32_t t30 = 974;

    t30 = (x141>((x142^x143)+x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint8_t x146 = 3U;
	int64_t x147 = INT64_MIN;
	int32_t t31 = 1363980;

    t31 = (x145>((x146^x147)+x148));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x149 = INT8_MIN;
	int32_t t32 = 5347;

    t32 = (x149>((x150^x151)+x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x154 = INT16_MIN;
	int8_t x155 = 1;
	int16_t x156 = 10550;
	volatile int32_t t33 = -14612;

    t33 = (x153>((x154^x155)+x156));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x157 = 64LL;
	static uint32_t x158 = UINT32_MAX;
	uint8_t x159 = UINT8_MAX;
	uint16_t x160 = 157U;
	int32_t t34 = 30;

    t34 = (x157>((x158^x159)+x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x161 = 7151090U;
	volatile int8_t x162 = -12;
	int16_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	int32_t t35 = 79;

    t35 = (x161>((x162^x163)+x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x166 = 11U;
	uint32_t x168 = 54U;
	int32_t t36 = 22901731;

    t36 = (x165>((x166^x167)+x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x169 = 2239U;
	volatile int8_t x170 = -1;
	uint32_t x171 = 1U;
	int64_t x172 = -1LL;
	volatile int32_t t37 = 6890007;

    t37 = (x169>((x170^x171)+x172));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x173 = UINT8_MAX;
	int32_t t38 = 125919;

    t38 = (x173>((x174^x175)+x176));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x177 = INT32_MIN;
	volatile int16_t x178 = -27;
	uint32_t x179 = UINT32_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t39 = 22312;

    t39 = (x177>((x178^x179)+x180));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x181 = 9662305280907959LLU;
	volatile uint64_t x182 = UINT64_MAX;
	int16_t x183 = -1;
	volatile int8_t x184 = INT8_MAX;
	static int32_t t40 = -25268283;

    t40 = (x181>((x182^x183)+x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x185 = -1;
	volatile uint32_t x187 = UINT32_MAX;
	int8_t x188 = -1;
	static volatile int32_t t41 = -47146823;

    t41 = (x185>((x186^x187)+x188));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MIN;
	static int32_t x190 = -1;
	int32_t x191 = INT32_MIN;
	static int64_t x192 = -2371433673682790624LL;
	int32_t t42 = -11761253;

    t42 = (x189>((x190^x191)+x192));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x193 = -15393LL;
	uint16_t x194 = 435U;
	static int64_t x195 = -1LL;
	int8_t x196 = INT8_MIN;
	volatile int32_t t43 = -4233551;

    t43 = (x193>((x194^x195)+x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x197 = 1;
	int8_t x199 = -1;
	volatile uint16_t x200 = UINT16_MAX;
	int32_t t44 = 0;

    t44 = (x197>((x198^x199)+x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x201 = UINT16_MAX;
	volatile uint64_t x202 = 1LLU;
	int64_t x203 = 1LL;
	int32_t t45 = -27360;

    t45 = (x201>((x202^x203)+x204));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x205 = 1U;
	int32_t x206 = INT32_MIN;
	int8_t x207 = 6;
	static volatile int32_t t46 = 1044;

    t46 = (x205>((x206^x207)+x208));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MAX;
	int32_t x210 = INT32_MIN;
	uint16_t x211 = 20889U;
	int8_t x212 = INT8_MIN;
	volatile int32_t t47 = 125023565;

    t47 = (x209>((x210^x211)+x212));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MIN;
	int16_t x215 = -1;
	volatile int16_t x216 = INT16_MIN;
	int32_t t48 = -1756389;

    t48 = (x213>((x214^x215)+x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x217 = 4432U;
	volatile int32_t t49 = -1150;

    t49 = (x217>((x218^x219)+x220));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x221 = 14U;
	int32_t x222 = -1;
	uint16_t x223 = 189U;
	int64_t x224 = -1LL;
	int32_t t50 = -1095548;

    t50 = (x221>((x222^x223)+x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x225 = 398U;
	volatile int16_t x226 = -5;
	int32_t x227 = INT32_MIN;
	static uint64_t x228 = 53LLU;

    t51 = (x225>((x226^x227)+x228));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x230 = 8666LLU;
	volatile uint8_t x232 = UINT8_MAX;
	static int32_t t52 = 14947405;

    t52 = (x229>((x230^x231)+x232));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x234 = -127393480;
	int16_t x235 = INT16_MAX;
	volatile int32_t t53 = -8643;

    t53 = (x233>((x234^x235)+x236));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x238 = 3U;
	int8_t x239 = INT8_MAX;
	int8_t x240 = 0;
	static int32_t t54 = 1010312;

    t54 = (x237>((x238^x239)+x240));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x243 = -19;
	int32_t x244 = -916;
	volatile int32_t t55 = -8283025;

    t55 = (x241>((x242^x243)+x244));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x248 = 17U;
	volatile int32_t t56 = -2895;

    t56 = (x245>((x246^x247)+x248));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x249 = 12U;
	uint64_t x251 = UINT64_MAX;

    t57 = (x249>((x250^x251)+x252));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x253 = 0;
	int8_t x254 = INT8_MAX;
	static int8_t x255 = -20;
	int8_t x256 = INT8_MIN;
	static int32_t t58 = -1884780;

    t58 = (x253>((x254^x255)+x256));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x257 = 8788777U;
	int32_t x258 = INT32_MAX;
	static int64_t x259 = 63736LL;
	int32_t x260 = INT32_MIN;
	static volatile int32_t t59 = -31781;

    t59 = (x257>((x258^x259)+x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x261 = -523374;
	int8_t x262 = INT8_MIN;
	int64_t x264 = INT64_MAX;

    t60 = (x261>((x262^x263)+x264));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x265 = INT16_MAX;
	uint32_t x267 = 5439U;
	int32_t x268 = INT32_MIN;
	volatile int32_t t61 = -512217931;

    t61 = (x265>((x266^x267)+x268));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x271 = -1;
	int64_t x272 = INT64_MAX;
	int32_t t62 = -3;

    t62 = (x269>((x270^x271)+x272));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x273 = 498990962167448679LLU;
	volatile int64_t x274 = INT64_MAX;
	int8_t x275 = INT8_MAX;
	static int32_t t63 = 117;

    t63 = (x273>((x274^x275)+x276));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x277 = INT16_MAX;
	int64_t x278 = 37446LL;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t64 = -7;

    t64 = (x277>((x278^x279)+x280));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x282 = -1;
	int8_t x283 = -1;
	int8_t x284 = -2;
	int32_t t65 = -13936;

    t65 = (x281>((x282^x283)+x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x289 = 912389503842LLU;
	uint16_t x290 = 191U;
	int16_t x291 = INT16_MAX;
	volatile int32_t t66 = -1;

    t66 = (x289>((x290^x291)+x292));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x293 = 68987095LLU;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = 201U;
	uint32_t x296 = 6U;

    t67 = (x293>((x294^x295)+x296));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x298 = 23398U;
	static int64_t x299 = -357422596184LL;
	int32_t x300 = INT32_MAX;
	static int32_t t68 = -25918275;

    t68 = (x297>((x298^x299)+x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x301 = INT16_MAX;
	int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MAX;
	static volatile int64_t x304 = INT64_MAX;
	int32_t t69 = -37;

    t69 = (x301>((x302^x303)+x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x305 = 809751888817LLU;
	int32_t x306 = 5483;
	int32_t x307 = INT32_MIN;
	static uint16_t x308 = 636U;
	static int32_t t70 = 31371;

    t70 = (x305>((x306^x307)+x308));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x309 = 24499604776379LLU;
	volatile int8_t x310 = INT8_MAX;
	int64_t x312 = 1481LL;
	static int32_t t71 = -12660;

    t71 = (x309>((x310^x311)+x312));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x313 = -649;
	int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t72 = 55;

    t72 = (x313>((x314^x315)+x316));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x317 = INT16_MAX;
	volatile uint32_t x318 = 1643U;
	int16_t x320 = INT16_MAX;
	static int32_t t73 = 26;

    t73 = (x317>((x318^x319)+x320));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x321 = -76;
	int16_t x322 = INT16_MIN;
	int64_t x323 = -1LL;
	volatile int64_t x324 = -69642155561005757LL;
	volatile int32_t t74 = 4870103;

    t74 = (x321>((x322^x323)+x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x325 = 34;
	uint8_t x326 = 5U;
	uint64_t x327 = 298145193493LLU;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t75 = -179;

    t75 = (x325>((x326^x327)+x328));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x329 = 109LLU;
	int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MIN;
	volatile int32_t t76 = 0;

    t76 = (x329>((x330^x331)+x332));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x333 = 358321584007189LLU;
	volatile int32_t x334 = INT32_MIN;
	volatile int8_t x335 = INT8_MAX;
	static volatile int32_t t77 = -115955477;

    t77 = (x333>((x334^x335)+x336));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x337 = -1068;
	volatile uint64_t x339 = 30782087273LLU;
	volatile int64_t x340 = INT64_MAX;

    t78 = (x337>((x338^x339)+x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x341 = INT32_MIN;
	uint8_t x344 = 3U;
	volatile int32_t t79 = -905877;

    t79 = (x341>((x342^x343)+x344));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x347 = INT32_MAX;
	static uint64_t x348 = 122569675833083136LLU;

    t80 = (x345>((x346^x347)+x348));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x349 = 62409U;
	volatile uint8_t x350 = UINT8_MAX;
	volatile uint16_t x352 = UINT16_MAX;
	int32_t t81 = -236832;

    t81 = (x349>((x350^x351)+x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x354 = -1;
	int64_t x356 = INT64_MAX;
	int32_t t82 = 285156;

    t82 = (x353>((x354^x355)+x356));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MIN;
	static int64_t x359 = -1LL;
	volatile int16_t x360 = INT16_MIN;
	volatile int32_t t83 = 391;

    t83 = (x357>((x358^x359)+x360));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x361 = INT64_MIN;
	int16_t x362 = -1;
	volatile uint32_t x363 = UINT32_MAX;
	static int32_t x364 = -1;
	volatile int32_t t84 = 7;

    t84 = (x361>((x362^x363)+x364));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x365 = 12569U;
	int32_t x366 = -1;
	static volatile int32_t x367 = -1;
	int64_t x368 = -1LL;
	volatile int32_t t85 = -51;

    t85 = (x365>((x366^x367)+x368));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x369 = 70007551729208LLU;
	static int64_t x370 = INT64_MIN;
	int32_t x371 = 26836484;
	int32_t x372 = INT32_MAX;

    t86 = (x369>((x370^x371)+x372));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x373 = 0U;
	uint64_t x374 = 3691916351LLU;
	int32_t x375 = INT32_MIN;
	static uint8_t x376 = 10U;
	volatile int32_t t87 = -841481859;

    t87 = (x373>((x374^x375)+x376));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int32_t t88 = 41494;

    t88 = (x377>((x378^x379)+x380));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x381 = 88322068521LLU;
	int64_t x382 = 529481556127434107LL;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = 4U;
	int32_t t89 = -15;

    t89 = (x381>((x382^x383)+x384));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t t90 = 14;

    t90 = (x385>((x386^x387)+x388));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x389 = 3U;
	int8_t x390 = -1;
	volatile int32_t x391 = INT32_MAX;
	volatile int16_t x392 = INT16_MAX;
	static volatile int32_t t91 = 4508098;

    t91 = (x389>((x390^x391)+x392));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x397 = -10;
	uint16_t x398 = 3U;
	static int32_t x399 = -1;
	uint16_t x400 = 138U;

    t92 = (x397>((x398^x399)+x400));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x401 = INT64_MIN;
	static int16_t x403 = -1;
	int32_t t93 = 15;

    t93 = (x401>((x402^x403)+x404));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x410 = INT64_MIN;
	int64_t x411 = 33024LL;
	uint32_t x412 = UINT32_MAX;
	volatile int32_t t94 = 57787;

    t94 = (x409>((x410^x411)+x412));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x414 = 1U;
	static int32_t x416 = INT32_MIN;

    t95 = (x413>((x414^x415)+x416));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x417 = 63415U;
	int16_t x418 = 7;
	volatile uint8_t x419 = 6U;
	volatile int16_t x420 = 4;
	volatile int32_t t96 = 10719;

    t96 = (x417>((x418^x419)+x420));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x422 = -240868163;
	static int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t97 = 14765348;

    t97 = (x421>((x422^x423)+x424));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x425 = -2;
	int16_t x426 = INT16_MIN;
	static int32_t x427 = INT32_MIN;
	volatile int32_t t98 = 274031761;

    t98 = (x425>((x426^x427)+x428));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x429 = 32625212647927LLU;
	int64_t x430 = 1LL;
	int64_t x431 = INT64_MAX;
	int32_t x432 = INT32_MIN;
	static int32_t t99 = 1835;

    t99 = (x429>((x430^x431)+x432));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x433 = 9U;
	volatile int64_t x434 = 5778LL;
	static int16_t x435 = INT16_MAX;
	uint16_t x436 = UINT16_MAX;
	static int32_t t100 = -657;

    t100 = (x433>((x434^x435)+x436));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x437 = -2;
	static uint32_t x439 = UINT32_MAX;
	int32_t x440 = INT32_MIN;
	int32_t t101 = -240961;

    t101 = (x437>((x438^x439)+x440));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MAX;
	uint16_t x444 = 1U;
	volatile int32_t t102 = -219;

    t102 = (x441>((x442^x443)+x444));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x445 = 12U;
	uint32_t x446 = UINT32_MAX;
	int32_t x447 = INT32_MAX;
	int32_t x448 = INT32_MIN;

    t103 = (x445>((x446^x447)+x448));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x449 = INT64_MAX;
	int16_t x450 = -1;
	int64_t x451 = INT64_MIN;
	int32_t t104 = -237451697;

    t104 = (x449>((x450^x451)+x452));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x453 = INT32_MIN;
	int64_t x454 = 2LL;
	int32_t x455 = -1;
	uint8_t x456 = 39U;

    t105 = (x453>((x454^x455)+x456));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x457 = -3;
	uint64_t x459 = 3411330LLU;
	int64_t x460 = INT64_MAX;
	int32_t t106 = 0;

    t106 = (x457>((x458^x459)+x460));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x462 = -2;
	static volatile uint16_t x463 = UINT16_MAX;
	uint32_t x464 = 1137U;
	int32_t t107 = 5358310;

    t107 = (x461>((x462^x463)+x464));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x465 = -1;
	volatile int8_t x467 = -1;
	uint16_t x468 = 3304U;
	volatile int32_t t108 = -12;

    t108 = (x465>((x466^x467)+x468));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x469 = INT8_MIN;
	int64_t x471 = 11429639463LL;
	int64_t x472 = INT64_MIN;
	static volatile int32_t t109 = -183;

    t109 = (x469>((x470^x471)+x472));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x473 = 10824047U;
	volatile int32_t x474 = INT32_MIN;
	int64_t x475 = INT64_MAX;
	volatile uint8_t x476 = 3U;
	volatile int32_t t110 = -1;

    t110 = (x473>((x474^x475)+x476));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x477 = INT8_MAX;
	uint16_t x478 = UINT16_MAX;
	static int64_t x479 = INT64_MIN;
	int8_t x480 = 1;
	volatile int32_t t111 = -646;

    t111 = (x477>((x478^x479)+x480));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x482 = INT32_MAX;
	int8_t x484 = -6;
	int32_t t112 = 23179;

    t112 = (x481>((x482^x483)+x484));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x485 = -1;
	static uint8_t x486 = UINT8_MAX;
	volatile uint8_t x487 = 2U;
	static int16_t x488 = -6;
	volatile int32_t t113 = 481;

    t113 = (x485>((x486^x487)+x488));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x489 = INT32_MIN;
	static uint32_t x491 = 53741U;
	int64_t x492 = INT64_MIN;
	volatile int32_t t114 = -1;

    t114 = (x489>((x490^x491)+x492));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x493 = UINT32_MAX;
	int16_t x494 = INT16_MIN;
	int8_t x495 = INT8_MIN;
	int32_t x496 = INT32_MIN;

    t115 = (x493>((x494^x495)+x496));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x497 = INT16_MAX;
	static int32_t x498 = -1;
	int8_t x499 = INT8_MAX;
	static int64_t x500 = -10591LL;

    t116 = (x497>((x498^x499)+x500));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x504 = UINT16_MAX;
	static int32_t t117 = -189;

    t117 = (x501>((x502^x503)+x504));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x505 = UINT32_MAX;
	volatile int32_t x506 = INT32_MAX;
	volatile int32_t x507 = INT32_MAX;
	int16_t x508 = -1;
	int32_t t118 = 9566404;

    t118 = (x505>((x506^x507)+x508));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x509 = 4605049U;
	int8_t x510 = -1;
	int8_t x511 = INT8_MAX;
	static int32_t t119 = -3450;

    t119 = (x509>((x510^x511)+x512));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x513 = -1;
	int16_t x514 = -1941;
	volatile int16_t x515 = -1;
	static uint32_t x516 = UINT32_MAX;
	volatile int32_t t120 = -1995554;

    t120 = (x513>((x514^x515)+x516));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x517 = INT32_MIN;
	volatile uint8_t x518 = UINT8_MAX;
	int16_t x519 = INT16_MIN;
	uint8_t x520 = 10U;

    t121 = (x517>((x518^x519)+x520));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x525 = 3U;
	uint64_t x527 = 80159143845532LLU;
	volatile int32_t t122 = -45;

    t122 = (x525>((x526^x527)+x528));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x530 = 0;
	int16_t x531 = INT16_MAX;
	uint8_t x532 = 29U;
	static volatile int32_t t123 = -177844;

    t123 = (x529>((x530^x531)+x532));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x533 = -1;
	int64_t x534 = INT64_MIN;
	volatile int64_t x536 = 2621LL;
	static int32_t t124 = 1;

    t124 = (x533>((x534^x535)+x536));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x538 = INT16_MIN;
	uint8_t x539 = UINT8_MAX;
	static int64_t x540 = 12LL;
	int32_t t125 = 30694446;

    t125 = (x537>((x538^x539)+x540));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x542 = INT8_MIN;
	int32_t x544 = -1;
	int32_t t126 = 1169;

    t126 = (x541>((x542^x543)+x544));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x545 = INT16_MAX;
	int64_t x546 = INT64_MAX;
	int8_t x547 = INT8_MIN;
	int8_t x548 = -1;
	int32_t t127 = 212032;

    t127 = (x545>((x546^x547)+x548));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x549 = 95U;
	volatile int16_t x551 = -3521;
	uint16_t x552 = 722U;
	static int32_t t128 = -36542;

    t128 = (x549>((x550^x551)+x552));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x553 = -1LL;
	uint64_t x555 = 245767231LLU;
	int32_t x556 = -53770;

    t129 = (x553>((x554^x555)+x556));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x557 = UINT32_MAX;
	int16_t x558 = INT16_MIN;
	int64_t x559 = -68281LL;
	volatile int32_t t130 = 25373;

    t130 = (x557>((x558^x559)+x560));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x561 = INT16_MIN;
	int64_t x562 = INT64_MIN;
	int16_t x563 = INT16_MAX;
	int16_t x564 = 46;
	int32_t t131 = 0;

    t131 = (x561>((x562^x563)+x564));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x565 = UINT8_MAX;
	int8_t x566 = -1;
	int32_t x567 = INT32_MAX;
	static int32_t t132 = 132750609;

    t132 = (x565>((x566^x567)+x568));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x569 = INT8_MIN;
	static int8_t x570 = -27;
	uint32_t x571 = 3514U;
	uint16_t x572 = 4288U;
	static volatile int32_t t133 = 798;

    t133 = (x569>((x570^x571)+x572));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x573 = UINT32_MAX;
	volatile int64_t x575 = 46427390LL;
	static volatile int8_t x576 = INT8_MAX;
	volatile int32_t t134 = -1664;

    t134 = (x573>((x574^x575)+x576));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x577 = -1;
	volatile int32_t x578 = -12;
	static volatile int16_t x579 = -1;
	volatile int16_t x580 = INT16_MIN;
	int32_t t135 = 2;

    t135 = (x577>((x578^x579)+x580));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x581 = INT32_MAX;
	volatile uint16_t x582 = 871U;
	uint8_t x583 = 76U;
	uint8_t x584 = 78U;
	volatile int32_t t136 = -254;

    t136 = (x581>((x582^x583)+x584));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x585 = -725315894070859420LL;
	int16_t x586 = -1;
	uint64_t x588 = 584185191655LLU;
	volatile int32_t t137 = -323;

    t137 = (x585>((x586^x587)+x588));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x593 = INT8_MAX;
	uint16_t x594 = 597U;
	volatile uint8_t x595 = 20U;
	static uint64_t x596 = 104LLU;
	volatile int32_t t138 = -10475985;

    t138 = (x593>((x594^x595)+x596));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x601 = UINT8_MAX;
	int16_t x602 = -1;
	uint8_t x603 = UINT8_MAX;
	uint16_t x604 = 0U;

    t139 = (x601>((x602^x603)+x604));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x605 = INT64_MIN;
	static int32_t x606 = 53876398;
	int32_t x607 = -1;
	volatile int8_t x608 = INT8_MIN;
	static int32_t t140 = 234848;

    t140 = (x605>((x606^x607)+x608));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x609 = INT16_MIN;
	int32_t x610 = -1;
	volatile int64_t x611 = 21LL;
	int8_t x612 = INT8_MIN;
	volatile int32_t t141 = 419894852;

    t141 = (x609>((x610^x611)+x612));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x616 = 61670813067801LLU;
	static volatile int32_t t142 = -4521447;

    t142 = (x613>((x614^x615)+x616));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x617 = INT64_MIN;
	static uint8_t x618 = 6U;
	static uint8_t x619 = UINT8_MAX;
	static int16_t x620 = INT16_MIN;

    t143 = (x617>((x618^x619)+x620));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x621 = INT16_MAX;
	int64_t x624 = INT64_MIN;
	volatile int32_t t144 = -112331;

    t144 = (x621>((x622^x623)+x624));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x625 = INT32_MIN;
	int64_t x627 = 112941246404LL;
	int16_t x628 = INT16_MIN;

    t145 = (x625>((x626^x627)+x628));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x630 = 5U;
	int64_t x631 = -1LL;
	uint16_t x632 = UINT16_MAX;
	static int32_t t146 = 7;

    t146 = (x629>((x630^x631)+x632));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x633 = -336;
	int8_t x634 = 1;
	int32_t x635 = INT32_MIN;
	int32_t t147 = 1;

    t147 = (x633>((x634^x635)+x636));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x637 = -81753320;
	int16_t x639 = 11;
	static int32_t t148 = -323721602;

    t148 = (x637>((x638^x639)+x640));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x651 = INT32_MIN;
	int32_t x652 = INT32_MIN;
	volatile int32_t t149 = 16299937;

    t149 = (x649>((x650^x651)+x652));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x653 = -1;
	int8_t x656 = 41;
	int32_t t150 = 0;

    t150 = (x653>((x654^x655)+x656));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x657 = UINT32_MAX;
	uint16_t x659 = 3344U;
	volatile int32_t x660 = 48;
	volatile int32_t t151 = 21162820;

    t151 = (x657>((x658^x659)+x660));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x661 = 1;
	int64_t x662 = -1LL;
	int32_t x663 = -1;
	volatile int32_t t152 = 510617;

    t152 = (x661>((x662^x663)+x664));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x665 = INT32_MIN;
	uint64_t x666 = 1267136084627435064LLU;
	volatile uint16_t x667 = 29332U;
	int8_t x668 = -42;

    t153 = (x665>((x666^x667)+x668));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x670 = INT32_MIN;
	int16_t x672 = -888;
	int32_t t154 = 1335;

    t154 = (x669>((x670^x671)+x672));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x673 = -25139;
	volatile int64_t x674 = INT64_MIN;
	static int32_t x675 = -65840611;
	int8_t x676 = INT8_MIN;
	static volatile int32_t t155 = 335;

    t155 = (x673>((x674^x675)+x676));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x677 = -7844LL;
	static int32_t x678 = INT32_MAX;
	int8_t x679 = INT8_MAX;
	uint32_t x680 = UINT32_MAX;
	volatile int32_t t156 = -8252043;

    t156 = (x677>((x678^x679)+x680));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x681 = -1;
	int64_t x682 = -1LL;
	int32_t x684 = -92957570;
	volatile int32_t t157 = -28700;

    t157 = (x681>((x682^x683)+x684));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x685 = 1585722U;
	int16_t x686 = INT16_MIN;
	int16_t x687 = INT16_MIN;
	int32_t t158 = -177245199;

    t158 = (x685>((x686^x687)+x688));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x689 = 6U;
	volatile int16_t x691 = 30;
	int32_t x692 = 23803;
	int32_t t159 = -7005097;

    t159 = (x689>((x690^x691)+x692));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x693 = 3;
	uint8_t x694 = 0U;
	uint16_t x696 = UINT16_MAX;
	volatile int32_t t160 = 3633846;

    t160 = (x693>((x694^x695)+x696));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x697 = 207176;
	uint16_t x698 = 622U;
	static uint64_t x699 = 201545687011267873LLU;
	static int16_t x700 = 22;

    t161 = (x697>((x698^x699)+x700));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x701 = -1263054674609177659LL;
	static volatile int32_t x702 = -188;
	int32_t t162 = -61890;

    t162 = (x701>((x702^x703)+x704));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x705 = INT32_MIN;
	int32_t x706 = INT32_MAX;
	volatile uint16_t x708 = 1U;

    t163 = (x705>((x706^x707)+x708));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x710 = INT64_MIN;
	uint64_t x711 = 1729LLU;
	int8_t x712 = INT8_MIN;

    t164 = (x709>((x710^x711)+x712));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x713 = -2107;
	volatile int64_t x714 = INT64_MAX;
	static int8_t x715 = INT8_MIN;
	int8_t x716 = 0;
	int32_t t165 = 167300;

    t165 = (x713>((x714^x715)+x716));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x717 = INT32_MIN;
	int16_t x719 = -1;
	int32_t x720 = -1;
	volatile int32_t t166 = 1301;

    t166 = (x717>((x718^x719)+x720));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x722 = INT64_MAX;
	int16_t x723 = INT16_MAX;
	int64_t x724 = -1LL;

    t167 = (x721>((x722^x723)+x724));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x725 = INT32_MIN;
	static int64_t x726 = -1047006847738LL;
	int8_t x727 = -1;
	volatile int16_t x728 = INT16_MAX;

    t168 = (x725>((x726^x727)+x728));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	int64_t x738 = -9LL;
	uint16_t x739 = 0U;
	static int32_t t169 = -709;

    t169 = (x737>((x738^x739)+x740));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x743 = -1;
	int32_t x744 = -1;
	volatile int32_t t170 = -29;

    t170 = (x741>((x742^x743)+x744));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x745 = UINT64_MAX;
	volatile uint8_t x746 = 5U;
	uint16_t x747 = 87U;
	uint64_t x748 = 23705400275LLU;

    t171 = (x745>((x746^x747)+x748));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x749 = 419U;
	uint8_t x750 = 40U;
	static uint64_t x751 = UINT64_MAX;
	int16_t x752 = -78;
	volatile int32_t t172 = -62790;

    t172 = (x749>((x750^x751)+x752));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x753 = INT16_MAX;
	int32_t x754 = -1;
	volatile int32_t t173 = 294005614;

    t173 = (x753>((x754^x755)+x756));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x757 = INT64_MIN;
	static int32_t t174 = 0;

    t174 = (x757>((x758^x759)+x760));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x761 = INT8_MIN;
	static uint32_t x764 = 372092U;
	int32_t t175 = 12985773;

    t175 = (x761>((x762^x763)+x764));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x765 = INT16_MIN;
	uint16_t x766 = 33U;
	uint32_t x767 = UINT32_MAX;
	int8_t x768 = INT8_MIN;
	int32_t t176 = -34904641;

    t176 = (x765>((x766^x767)+x768));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x769 = -13;
	volatile int16_t x770 = -1;
	int32_t t177 = 3130922;

    t177 = (x769>((x770^x771)+x772));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x781 = INT8_MIN;
	int64_t x782 = 851196LL;
	uint32_t x784 = UINT32_MAX;

    t178 = (x781>((x782^x783)+x784));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x785 = 225413U;
	volatile int16_t x786 = INT16_MIN;
	static volatile int32_t x787 = -1;
	int16_t x788 = -1;
	volatile int32_t t179 = 22;

    t179 = (x785>((x786^x787)+x788));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x789 = INT32_MIN;
	static volatile uint16_t x790 = UINT16_MAX;
	uint8_t x791 = 1U;
	int16_t x792 = INT16_MIN;
	volatile int32_t t180 = -724669;

    t180 = (x789>((x790^x791)+x792));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x793 = -15514;
	volatile uint32_t x794 = UINT32_MAX;
	int32_t x795 = -1;
	int16_t x796 = INT16_MAX;
	volatile int32_t t181 = 92179;

    t181 = (x793>((x794^x795)+x796));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x797 = 59;
	int16_t x798 = 104;
	uint16_t x799 = UINT16_MAX;
	int16_t x800 = INT16_MIN;
	volatile int32_t t182 = -665829;

    t182 = (x797>((x798^x799)+x800));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x801 = -1;
	int16_t x802 = INT16_MAX;
	int64_t x803 = 59996044530513LL;
	static int64_t x804 = 3177LL;

    t183 = (x801>((x802^x803)+x804));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x809 = -3;
	int8_t x810 = 1;
	volatile int16_t x811 = -1;
	volatile int32_t t184 = -1;

    t184 = (x809>((x810^x811)+x812));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x815 = -1LL;
	static volatile int8_t x816 = 1;
	static int32_t t185 = -380;

    t185 = (x813>((x814^x815)+x816));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x832 = INT16_MIN;
	volatile int32_t t186 = 206;

    t186 = (x829>((x830^x831)+x832));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x833 = 3U;
	uint8_t x835 = 88U;
	uint32_t x836 = UINT32_MAX;
	int32_t t187 = -3;

    t187 = (x833>((x834^x835)+x836));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x838 = UINT8_MAX;
	static int16_t x839 = INT16_MAX;
	int32_t x840 = 38500;

    t188 = (x837>((x838^x839)+x840));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x841 = 2155170678233206085LL;
	int64_t x843 = INT64_MAX;
	int16_t x844 = -1;
	static volatile int32_t t189 = 138;

    t189 = (x841>((x842^x843)+x844));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x845 = 1578LL;
	volatile int64_t x847 = -1LL;
	int64_t x848 = INT64_MIN;
	int32_t t190 = -395101026;

    t190 = (x845>((x846^x847)+x848));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x849 = 35U;
	static int8_t x850 = -1;
	int8_t x851 = INT8_MIN;
	static uint16_t x852 = 4U;

    t191 = (x849>((x850^x851)+x852));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x853 = UINT16_MAX;
	int16_t x854 = 2693;
	static int16_t x855 = INT16_MAX;
	volatile uint16_t x856 = 4507U;
	volatile int32_t t192 = 3;

    t192 = (x853>((x854^x855)+x856));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x861 = INT32_MAX;
	static int32_t x862 = -3487;
	int64_t x864 = -316LL;
	int32_t t193 = 7089;

    t193 = (x861>((x862^x863)+x864));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x869 = -32;
	int16_t x870 = INT16_MAX;
	volatile int32_t x871 = -49496;
	uint32_t x872 = UINT32_MAX;
	volatile int32_t t194 = -928102940;

    t194 = (x869>((x870^x871)+x872));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x873 = INT64_MIN;
	int64_t x874 = 32240159428473312LL;
	static int16_t x875 = INT16_MIN;
	volatile int64_t x876 = -1LL;
	int32_t t195 = -371954;

    t195 = (x873>((x874^x875)+x876));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x877 = -484279;
	uint64_t x878 = 939874336567945LLU;
	int16_t x879 = INT16_MIN;
	int32_t x880 = 0;

    t196 = (x877>((x878^x879)+x880));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x881 = 10647245705LLU;
	static volatile int32_t t197 = -80567;

    t197 = (x881>((x882^x883)+x884));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x885 = INT64_MAX;
	uint64_t x886 = 6LLU;
	int64_t x887 = -1LL;
	int32_t t198 = 7266;

    t198 = (x885>((x886^x887)+x888));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x891 = -1;
	int32_t t199 = -34693;

    t199 = (x889>((x890^x891)+x892));

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

