
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

static int32_t x7 = -1;
int32_t x14 = 1;
volatile uint16_t x15 = 53U;
static volatile uint16_t x19 = 19U;
int8_t x25 = INT8_MIN;
uint16_t x27 = UINT16_MAX;
int32_t t6 = -6;
uint64_t x32 = 5LLU;
int32_t t7 = -174732106;
static int8_t x37 = -5;
int8_t x40 = INT8_MIN;
int16_t x46 = -5173;
static volatile int32_t t10 = -944314;
static volatile int16_t x49 = INT16_MIN;
uint64_t x61 = 1029046LLU;
volatile uint16_t x78 = 24U;
int8_t x82 = INT8_MIN;
int64_t x84 = -1LL;
uint16_t x85 = 59U;
int16_t x89 = -4;
int8_t x91 = -42;
uint16_t x95 = UINT16_MAX;
int32_t x97 = -19;
int64_t x99 = -1LL;
volatile uint8_t x108 = UINT8_MAX;
volatile int32_t t24 = -435330;
volatile int64_t x109 = INT64_MIN;
volatile int32_t t25 = 38402155;
static int32_t x114 = -33;
volatile int16_t x132 = INT16_MAX;
volatile int32_t x141 = 1;
int32_t x146 = INT32_MAX;
volatile int32_t x148 = -2257;
static int32_t x150 = 172170;
int64_t x153 = -1LL;
int16_t x156 = INT16_MIN;
int32_t t37 = 3377;
volatile int32_t t38 = -1;
int8_t x165 = INT8_MAX;
static volatile int32_t t39 = 258027601;
volatile uint32_t x173 = 2U;
static volatile int32_t t41 = -119;
int8_t x189 = 6;
volatile int8_t x194 = INT8_MIN;
static volatile int32_t t46 = 195956714;
uint32_t x202 = 1392333U;
volatile int32_t t48 = 883233540;
volatile int32_t t49 = -285062215;
int32_t x209 = -1;
uint8_t x213 = UINT8_MAX;
static int32_t x215 = -114051502;
static uint16_t x217 = 0U;
volatile int32_t t53 = 339935;
int8_t x225 = INT8_MIN;
static uint16_t x227 = 48U;
int32_t x237 = 242140;
static int32_t t57 = 129676;
volatile int8_t x255 = -11;
int8_t x271 = -1;
volatile int16_t x279 = INT16_MAX;
int16_t x280 = 719;
int64_t x284 = -30LL;
volatile int32_t x285 = INT32_MIN;
int8_t x291 = INT8_MIN;
int32_t t70 = -5414;
int16_t x298 = -1;
uint32_t x299 = 3851341U;
int32_t t72 = -1;
int64_t x301 = INT64_MIN;
int32_t x325 = 1862;
static int16_t x328 = -370;
volatile int16_t x329 = -1;
uint16_t x334 = 6U;
int64_t x336 = INT64_MAX;
int32_t x337 = -1;
uint64_t x340 = 32650705726975601LLU;
uint16_t x343 = 105U;
int32_t t84 = 1012902;
static uint32_t x356 = 61591U;
uint64_t x366 = 17LLU;
uint32_t x370 = 574U;
volatile int32_t t90 = 151682928;
uint64_t x377 = UINT64_MAX;
int16_t x378 = -1;
static int8_t x381 = INT8_MIN;
uint64_t x384 = 354973LLU;
uint64_t x396 = UINT64_MAX;
volatile int32_t t95 = 18069;
int16_t x398 = INT16_MAX;
static uint16_t x402 = UINT16_MAX;
int16_t x420 = -28;
int32_t t102 = -606127;
volatile int64_t x438 = INT64_MIN;
static volatile int32_t t108 = 431612122;
uint16_t x449 = 483U;
int8_t x456 = 0;
static int32_t x457 = INT32_MAX;
uint8_t x463 = UINT8_MAX;
volatile uint32_t x464 = UINT32_MAX;
int32_t x469 = INT32_MAX;
int8_t x471 = -1;
static uint64_t x482 = UINT64_MAX;
int64_t x497 = 1162LL;
int64_t x501 = INT64_MIN;
int64_t x503 = -124581970LL;
int64_t x510 = -1LL;
int64_t x514 = INT64_MAX;
uint16_t x524 = UINT16_MAX;
volatile int32_t t128 = 6520772;
int16_t x529 = INT16_MAX;
int32_t x532 = INT32_MAX;
volatile int32_t t130 = 1107;
static int32_t x540 = -78;
uint16_t x544 = 654U;
int32_t t132 = 57165;
static int16_t x545 = -81;
volatile uint64_t x547 = 8183313083961138853LLU;
uint32_t x548 = UINT32_MAX;
int32_t t134 = 22;
int32_t x554 = 186158714;
volatile int32_t t135 = -171881232;
int64_t x561 = -1LL;
int16_t x575 = INT16_MAX;
int16_t x576 = INT16_MIN;
int16_t x579 = INT16_MIN;
int32_t t142 = -168608642;
int32_t x588 = INT32_MIN;
int16_t x589 = -1;
int16_t x591 = INT16_MIN;
static volatile int16_t x602 = -2209;
static int32_t x606 = -8;
volatile int64_t x608 = -939LL;
static volatile uint32_t x611 = 371950228U;
int32_t x613 = -27648;
volatile int8_t x614 = 17;
volatile uint64_t x627 = UINT64_MAX;
int64_t x629 = INT64_MIN;
static int8_t x630 = 0;
static uint64_t x631 = UINT64_MAX;
int32_t t154 = -255797042;
static uint32_t x633 = UINT32_MAX;
volatile int32_t t155 = 833;
int64_t x639 = INT64_MIN;
volatile int64_t x644 = -14048770LL;
int32_t t161 = 4;
int64_t x661 = INT64_MIN;
int32_t t162 = 132085496;
int16_t x671 = -2;
static int16_t x683 = INT16_MIN;
uint16_t x684 = UINT16_MAX;
static volatile int32_t t168 = 244;
int32_t x689 = 121948325;
uint32_t x709 = 120746U;
volatile int32_t t173 = 446182;
int16_t x715 = -1;
int32_t t174 = -5;
static int64_t x720 = 4239673073175782223LL;
static uint16_t x724 = 14433U;
static volatile int32_t t176 = -19311;
int32_t x726 = INT32_MAX;
volatile int32_t t177 = 2081110;
uint32_t x737 = 1320669583U;
int16_t x747 = -1;
int16_t x748 = -1;
volatile int32_t t182 = -10654;
static int16_t x755 = INT16_MIN;
volatile uint16_t x763 = 30U;
static int16_t x764 = INT16_MAX;
static volatile uint64_t x765 = 2327126874301766810LLU;
static uint16_t x772 = 204U;
int8_t x778 = INT8_MIN;
int64_t x781 = -1LL;
int8_t x784 = -1;
uint32_t x791 = UINT32_MAX;
uint32_t x793 = 67566464U;
volatile int16_t x796 = INT16_MIN;
volatile int32_t t194 = 1563450;
static int32_t x799 = INT32_MIN;
uint32_t x807 = 2217U;
int8_t x814 = -29;


void f0(void) {
    	uint64_t x1 = 1403830475162632LLU;
	static volatile uint8_t x2 = 9U;
	volatile int8_t x3 = -3;
	int16_t x4 = -1;
	static volatile int32_t t0 = 6978;

    t0 = (x1>((x2%x3)<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	static int16_t x6 = -1;
	int8_t x8 = -1;
	static volatile int32_t t1 = 94;

    t1 = (x5>((x6%x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	int32_t x10 = -172436;
	uint8_t x11 = 6U;
	int8_t x12 = -1;
	int32_t t2 = -3319;

    t2 = (x9>((x10%x11)<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int16_t x16 = -13938;
	int32_t t3 = 2677425;

    t3 = (x13>((x14%x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = 30;
	int32_t x18 = -1;
	int16_t x20 = INT16_MAX;
	static volatile int32_t t4 = 281113226;

    t4 = (x17>((x18%x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	int8_t x22 = 0;
	volatile uint16_t x23 = 1160U;
	int64_t x24 = INT64_MIN;
	int32_t t5 = -156885984;

    t5 = (x21>((x22%x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x26 = INT16_MIN;
	volatile int8_t x28 = -6;

    t6 = (x25>((x26%x27)<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 3062U;
	int16_t x30 = -17;
	int8_t x31 = INT8_MIN;

    t7 = (x29>((x30%x31)<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x38 = INT32_MAX;
	uint32_t x39 = 1766U;
	int32_t t8 = -2836026;

    t8 = (x37>((x38%x39)<=x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MIN;
	volatile int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	int64_t x44 = 1959LL;
	static int32_t t9 = 6;

    t9 = (x41>((x42%x43)<=x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MAX;
	volatile uint16_t x47 = 6412U;
	int8_t x48 = INT8_MIN;

    t10 = (x45>((x46%x47)<=x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x50 = -39791;
	int8_t x51 = INT8_MIN;
	int32_t x52 = -1698;
	volatile int32_t t11 = 1;

    t11 = (x49>((x50%x51)<=x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MIN;
	static uint16_t x55 = UINT16_MAX;
	volatile int8_t x56 = 0;
	volatile int32_t t12 = 17793;

    t12 = (x53>((x54%x55)<=x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x57 = INT8_MAX;
	static uint8_t x58 = UINT8_MAX;
	int64_t x59 = -53527920LL;
	int32_t x60 = INT32_MAX;
	static int32_t t13 = 7963746;

    t13 = (x57>((x58%x59)<=x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x62 = UINT8_MAX;
	uint16_t x63 = 10999U;
	uint64_t x64 = 44LLU;
	int32_t t14 = 581183;

    t14 = (x61>((x62%x63)<=x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	uint16_t x66 = UINT16_MAX;
	int8_t x67 = INT8_MAX;
	static uint8_t x68 = 3U;
	static int32_t t15 = 7;

    t15 = (x65>((x66%x67)<=x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x69 = 37;
	uint8_t x70 = 109U;
	int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t16 = 87594069;

    t16 = (x69>((x70%x71)<=x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	volatile uint64_t x75 = UINT64_MAX;
	uint64_t x76 = 28910218050LLU;
	volatile int32_t t17 = 260;

    t17 = (x73>((x74%x75)<=x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MIN;
	volatile uint8_t x79 = UINT8_MAX;
	uint8_t x80 = UINT8_MAX;
	int32_t t18 = -1464;

    t18 = (x77>((x78%x79)<=x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = 479;
	int32_t x83 = -454;
	volatile int32_t t19 = 368836;

    t19 = (x81>((x82%x83)<=x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x86 = INT32_MAX;
	static volatile uint16_t x87 = 6U;
	static int8_t x88 = -1;
	static int32_t t20 = 140293;

    t20 = (x85>((x86%x87)<=x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x90 = UINT64_MAX;
	volatile uint16_t x92 = 13U;
	volatile int32_t t21 = 0;

    t21 = (x89>((x90%x91)<=x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = 3;
	int32_t x94 = INT32_MIN;
	int64_t x96 = INT64_MIN;
	volatile int32_t t22 = 67;

    t22 = (x93>((x94%x95)<=x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint16_t x98 = 321U;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t23 = -19696537;

    t23 = (x97>((x98%x99)<=x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = 229U;
	static int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MAX;

    t24 = (x105>((x106%x107)<=x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x110 = 35LL;
	static int16_t x111 = INT16_MIN;
	static int32_t x112 = 272516701;

    t25 = (x109>((x110%x111)<=x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x113 = UINT8_MAX;
	static int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t26 = 1;

    t26 = (x113>((x114%x115)<=x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = -17541664307869089LL;
	int64_t x118 = -1LL;
	uint16_t x119 = 45U;
	volatile int16_t x120 = INT16_MIN;
	static volatile int32_t t27 = -5270;

    t27 = (x117>((x118%x119)<=x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x121 = -113457440;
	int16_t x122 = -1;
	int8_t x123 = -1;
	int64_t x124 = -1963178735738LL;
	static volatile int32_t t28 = -706010063;

    t28 = (x121>((x122%x123)<=x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MIN;
	uint32_t x126 = UINT32_MAX;
	int32_t x127 = INT32_MIN;
	volatile uint32_t x128 = 1157285U;
	volatile int32_t t29 = 781155970;

    t29 = (x125>((x126%x127)<=x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = INT32_MIN;
	volatile uint16_t x130 = 14385U;
	volatile int64_t x131 = -14752095671523LL;
	int32_t t30 = -9502;

    t30 = (x129>((x130%x131)<=x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MIN;
	int32_t x135 = -1;
	uint64_t x136 = 207346LLU;
	volatile int32_t t31 = -1012;

    t31 = (x133>((x134%x135)<=x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x137 = 1U;
	volatile uint8_t x138 = UINT8_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	uint64_t x140 = 3LLU;
	static int32_t t32 = 7;

    t32 = (x137>((x138%x139)<=x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x142 = -1;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	volatile int32_t t33 = 2;

    t33 = (x141>((x142%x143)<=x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x145 = -105;
	int64_t x147 = -1LL;
	volatile int32_t t34 = 4312724;

    t34 = (x145>((x146%x147)<=x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = -26;
	static volatile int16_t x151 = -1;
	int64_t x152 = INT64_MIN;
	volatile int32_t t35 = 30;

    t35 = (x149>((x150%x151)<=x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x154 = -1LL;
	int16_t x155 = -1;
	int32_t t36 = -96;

    t36 = (x153>((x154%x155)<=x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MAX;
	volatile int32_t x158 = INT32_MIN;
	uint8_t x159 = UINT8_MAX;
	uint16_t x160 = 412U;

    t37 = (x157>((x158%x159)<=x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = INT16_MAX;
	uint16_t x162 = 14059U;
	volatile int64_t x163 = INT64_MAX;
	static int64_t x164 = -1LL;

    t38 = (x161>((x162%x163)<=x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x166 = 14008U;
	static int16_t x167 = 13;
	int8_t x168 = 6;

    t39 = (x165>((x166%x167)<=x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x169 = INT32_MAX;
	static int32_t x170 = INT32_MIN;
	int8_t x171 = 1;
	int8_t x172 = -1;
	static int32_t t40 = -24499;

    t40 = (x169>((x170%x171)<=x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x174 = -1LL;
	volatile uint8_t x175 = UINT8_MAX;
	volatile int32_t x176 = -1094374;

    t41 = (x173>((x174%x175)<=x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = INT64_MIN;
	int16_t x178 = 0;
	static int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t42 = -638456;

    t42 = (x177>((x178%x179)<=x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x181 = 56;
	uint32_t x182 = UINT32_MAX;
	volatile int8_t x183 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;
	int32_t t43 = 511978;

    t43 = (x181>((x182%x183)<=x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x185 = UINT64_MAX;
	int32_t x186 = INT32_MIN;
	volatile int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t44 = -6;

    t44 = (x185>((x186%x187)<=x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x190 = 8014U;
	int8_t x191 = 15;
	int32_t x192 = -1;
	volatile int32_t t45 = -3;

    t45 = (x189>((x190%x191)<=x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x193 = -1;
	static volatile int32_t x195 = -1;
	volatile int16_t x196 = -495;

    t46 = (x193>((x194%x195)<=x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	int64_t x200 = -132406152737577LL;
	volatile int32_t t47 = 11072;

    t47 = (x197>((x198%x199)<=x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x203 = -1LL;
	int8_t x204 = 13;

    t48 = (x201>((x202%x203)<=x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x205 = -1;
	int8_t x206 = INT8_MAX;
	int32_t x207 = INT32_MAX;
	int32_t x208 = INT32_MAX;

    t49 = (x205>((x206%x207)<=x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x210 = 44;
	uint64_t x211 = UINT64_MAX;
	volatile int64_t x212 = INT64_MAX;
	static int32_t t50 = -94;

    t50 = (x209>((x210%x211)<=x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x214 = UINT8_MAX;
	uint16_t x216 = 4019U;
	static volatile int32_t t51 = 1;

    t51 = (x213>((x214%x215)<=x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x218 = 7U;
	static uint64_t x219 = 12399136803543717LLU;
	uint64_t x220 = 61311804972452LLU;
	int32_t t52 = 3479;

    t52 = (x217>((x218%x219)<=x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x221 = INT16_MIN;
	volatile int64_t x222 = INT64_MIN;
	static uint8_t x223 = 95U;
	int32_t x224 = INT32_MIN;

    t53 = (x221>((x222%x223)<=x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x226 = 1292U;
	volatile uint32_t x228 = 6462U;
	static volatile int32_t t54 = -650;

    t54 = (x225>((x226%x227)<=x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x229 = -1LL;
	int32_t x230 = -1;
	static int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t55 = 67;

    t55 = (x229>((x230%x231)<=x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = 0;
	uint16_t x234 = 466U;
	uint16_t x235 = UINT16_MAX;
	volatile int16_t x236 = 1;
	int32_t t56 = -66;

    t56 = (x233>((x234%x235)<=x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x238 = UINT8_MAX;
	int64_t x239 = INT64_MIN;
	static int32_t x240 = INT32_MIN;

    t57 = (x237>((x238%x239)<=x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x241 = 68915727U;
	uint16_t x242 = 0U;
	volatile int8_t x243 = -56;
	uint8_t x244 = 3U;
	volatile int32_t t58 = 2;

    t58 = (x241>((x242%x243)<=x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = -854;
	int16_t x246 = INT16_MIN;
	int64_t x247 = 9853612686335LL;
	int32_t x248 = 242;
	volatile int32_t t59 = -1199785;

    t59 = (x245>((x246%x247)<=x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x249 = UINT32_MAX;
	volatile int16_t x250 = INT16_MAX;
	int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MAX;
	static int32_t t60 = -433229140;

    t60 = (x249>((x250%x251)<=x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x253 = 0U;
	static int16_t x254 = 927;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t61 = 138099;

    t61 = (x253>((x254%x255)<=x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = INT32_MIN;
	int16_t x258 = INT16_MIN;
	volatile int64_t x259 = 887LL;
	volatile uint8_t x260 = UINT8_MAX;
	int32_t t62 = -32281979;

    t62 = (x257>((x258%x259)<=x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	uint32_t x262 = 47396U;
	volatile int8_t x263 = 20;
	int64_t x264 = 4375885434681LL;
	int32_t t63 = 1892377;

    t63 = (x261>((x262%x263)<=x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x265 = UINT32_MAX;
	int64_t x266 = INT64_MIN;
	int8_t x267 = INT8_MIN;
	int32_t x268 = -1;
	volatile int32_t t64 = -26;

    t64 = (x265>((x266%x267)<=x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x269 = UINT64_MAX;
	int32_t x270 = -11;
	int64_t x272 = 2015754789962685LL;
	int32_t t65 = -125714199;

    t65 = (x269>((x270%x271)<=x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x273 = INT16_MAX;
	int16_t x274 = INT16_MAX;
	uint32_t x275 = UINT32_MAX;
	static uint64_t x276 = UINT64_MAX;
	static volatile int32_t t66 = 531878047;

    t66 = (x273>((x274%x275)<=x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x277 = -1LL;
	static uint8_t x278 = 0U;
	int32_t t67 = 276896369;

    t67 = (x277>((x278%x279)<=x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = 0U;
	static int8_t x282 = -1;
	static volatile uint16_t x283 = 8359U;
	volatile int32_t t68 = 26853387;

    t68 = (x281>((x282%x283)<=x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x286 = 4U;
	int8_t x287 = 11;
	int32_t x288 = 60;
	static int32_t t69 = -42598639;

    t69 = (x285>((x286%x287)<=x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = 12086399LL;
	uint16_t x290 = 601U;
	int16_t x292 = INT16_MIN;

    t70 = (x289>((x290%x291)<=x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x293 = 1;
	int64_t x294 = -1LL;
	int64_t x295 = -7276682LL;
	int8_t x296 = -2;
	volatile int32_t t71 = -1;

    t71 = (x293>((x294%x295)<=x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = INT64_MIN;
	static int8_t x300 = INT8_MIN;

    t72 = (x297>((x298%x299)<=x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x302 = 881577U;
	uint64_t x303 = UINT64_MAX;
	static int64_t x304 = INT64_MAX;
	int32_t t73 = 61719392;

    t73 = (x301>((x302%x303)<=x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = INT64_MIN;
	uint32_t x306 = 305368875U;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	volatile int32_t t74 = -50193;

    t74 = (x305>((x306%x307)<=x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x309 = -1;
	int64_t x310 = 11952LL;
	uint16_t x311 = 3356U;
	static uint16_t x312 = 106U;
	volatile int32_t t75 = -2158278;

    t75 = (x309>((x310%x311)<=x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = -1LL;
	int64_t x314 = INT64_MIN;
	static int16_t x315 = INT16_MIN;
	int64_t x316 = -1LL;
	int32_t t76 = 134975;

    t76 = (x313>((x314%x315)<=x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x317 = 56324905U;
	int32_t x318 = -1;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	volatile int32_t t77 = 0;

    t77 = (x317>((x318%x319)<=x320));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x326 = 11598;
	int64_t x327 = INT64_MIN;
	int32_t t78 = -2;

    t78 = (x325>((x326%x327)<=x328));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x330 = -1;
	int8_t x331 = -1;
	int8_t x332 = INT8_MIN;
	volatile int32_t t79 = 150889;

    t79 = (x329>((x330%x331)<=x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = INT64_MIN;
	int16_t x335 = INT16_MIN;
	int32_t t80 = 339419;

    t80 = (x333>((x334%x335)<=x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	static int32_t t81 = -2622678;

    t81 = (x337>((x338%x339)<=x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = 99940;
	int64_t x342 = INT64_MIN;
	int16_t x344 = -1;
	int32_t t82 = 29860;

    t82 = (x341>((x342%x343)<=x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = INT32_MIN;
	int8_t x346 = INT8_MAX;
	static int32_t x347 = INT32_MIN;
	int16_t x348 = 7;
	static int32_t t83 = -130845067;

    t83 = (x345>((x346%x347)<=x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = -1LL;
	uint64_t x350 = 1LLU;
	int8_t x351 = -1;
	uint32_t x352 = 949687U;

    t84 = (x349>((x350%x351)<=x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x353 = 204U;
	static uint64_t x354 = UINT64_MAX;
	static int8_t x355 = INT8_MIN;
	int32_t t85 = 91624449;

    t85 = (x353>((x354%x355)<=x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x357 = 678;
	static int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MAX;
	volatile int32_t t86 = 2;

    t86 = (x357>((x358%x359)<=x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x361 = 190U;
	uint16_t x362 = UINT16_MAX;
	uint64_t x363 = 39341410582938764LLU;
	int16_t x364 = INT16_MAX;
	volatile int32_t t87 = 479;

    t87 = (x361>((x362%x363)<=x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x365 = 9U;
	int64_t x367 = -471529607188633LL;
	uint64_t x368 = UINT64_MAX;
	int32_t t88 = -2892;

    t88 = (x365>((x366%x367)<=x368));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x369 = 104U;
	uint16_t x371 = 8273U;
	int16_t x372 = INT16_MIN;
	volatile int32_t t89 = 109460531;

    t89 = (x369>((x370%x371)<=x372));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	int16_t x374 = 0;
	int64_t x375 = INT64_MIN;
	volatile int32_t x376 = INT32_MIN;

    t90 = (x373>((x374%x375)<=x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x379 = 471410293LLU;
	static uint16_t x380 = 297U;
	int32_t t91 = 0;

    t91 = (x377>((x378%x379)<=x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x382 = -1;
	int8_t x383 = INT8_MIN;
	int32_t t92 = -2;

    t92 = (x381>((x382%x383)<=x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = INT32_MAX;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 47U;
	static volatile uint16_t x388 = 1U;
	static int32_t t93 = 1;

    t93 = (x385>((x386%x387)<=x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = -9;
	int8_t x390 = 39;
	int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t94 = 49862;

    t94 = (x389>((x390%x391)<=x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x393 = INT64_MIN;
	int32_t x394 = INT32_MIN;
	int64_t x395 = -13423LL;

    t95 = (x393>((x394%x395)<=x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x397 = 5771U;
	static uint64_t x399 = 21133046426639LLU;
	volatile int64_t x400 = INT64_MIN;
	static volatile int32_t t96 = -14283978;

    t96 = (x397>((x398%x399)<=x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x401 = 47064U;
	int16_t x403 = 721;
	volatile int16_t x404 = 2979;
	volatile int32_t t97 = -38;

    t97 = (x401>((x402%x403)<=x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x405 = INT32_MAX;
	uint32_t x406 = 2851009U;
	int16_t x407 = INT16_MIN;
	static int16_t x408 = -1;
	int32_t t98 = 15;

    t98 = (x405>((x406%x407)<=x408));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x409 = 0;
	int16_t x410 = -13;
	static uint32_t x411 = UINT32_MAX;
	static int16_t x412 = INT16_MIN;
	int32_t t99 = -9363653;

    t99 = (x409>((x410%x411)<=x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x413 = INT32_MIN;
	uint64_t x414 = 15973LLU;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	volatile int32_t t100 = 413483539;

    t100 = (x413>((x414%x415)<=x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x417 = -1LL;
	int64_t x418 = INT64_MAX;
	int64_t x419 = 314126280951336LL;
	volatile int32_t t101 = -6;

    t101 = (x417>((x418%x419)<=x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = -1;
	int32_t x422 = 3427872;
	uint8_t x423 = UINT8_MAX;
	int8_t x424 = INT8_MIN;

    t102 = (x421>((x422%x423)<=x424));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x425 = -1;
	uint64_t x426 = UINT64_MAX;
	uint32_t x427 = 7616U;
	int64_t x428 = INT64_MIN;
	static int32_t t103 = -15800;

    t103 = (x425>((x426%x427)<=x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x429 = 22734;
	uint32_t x430 = 43554227U;
	static int16_t x431 = -529;
	int8_t x432 = 7;
	volatile int32_t t104 = 784;

    t104 = (x429>((x430%x431)<=x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x433 = UINT64_MAX;
	static int8_t x434 = INT8_MIN;
	uint32_t x435 = 44620U;
	uint64_t x436 = 229878079313122334LLU;
	int32_t t105 = 95;

    t105 = (x433>((x434%x435)<=x436));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x437 = -1;
	int32_t x439 = INT32_MIN;
	int16_t x440 = INT16_MAX;
	volatile int32_t t106 = -15174;

    t106 = (x437>((x438%x439)<=x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x441 = 1U;
	int64_t x442 = INT64_MAX;
	uint32_t x443 = 768U;
	int32_t x444 = INT32_MIN;
	volatile int32_t t107 = 127;

    t107 = (x441>((x442%x443)<=x444));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x445 = INT16_MIN;
	static int64_t x446 = -1LL;
	int16_t x447 = -25;
	static volatile int32_t x448 = -255;

    t108 = (x445>((x446%x447)<=x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x450 = 24;
	volatile int64_t x451 = INT64_MIN;
	int8_t x452 = INT8_MIN;
	int32_t t109 = 10;

    t109 = (x449>((x450%x451)<=x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x453 = 0;
	int64_t x454 = INT64_MIN;
	static int32_t x455 = 89;
	int32_t t110 = 227103;

    t110 = (x453>((x454%x455)<=x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x458 = INT32_MAX;
	int8_t x459 = INT8_MIN;
	uint64_t x460 = 67895LLU;
	volatile int32_t t111 = 8451880;

    t111 = (x457>((x458%x459)<=x460));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x461 = -1;
	int8_t x462 = INT8_MAX;
	volatile int32_t t112 = -150;

    t112 = (x461>((x462%x463)<=x464));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = INT32_MIN;
	int16_t x466 = -277;
	int8_t x467 = -1;
	int64_t x468 = INT64_MAX;
	static int32_t t113 = -349;

    t113 = (x465>((x466%x467)<=x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x470 = 105468U;
	int8_t x472 = INT8_MIN;
	volatile int32_t t114 = 31335358;

    t114 = (x469>((x470%x471)<=x472));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = 82374007193953LL;
	static uint8_t x474 = 3U;
	uint32_t x475 = 1922U;
	static uint8_t x476 = 3U;
	volatile int32_t t115 = 235718;

    t115 = (x473>((x474%x475)<=x476));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x477 = 1;
	uint8_t x478 = 24U;
	uint32_t x479 = 1334U;
	volatile int32_t x480 = INT32_MIN;
	int32_t t116 = 13174;

    t116 = (x477>((x478%x479)<=x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x481 = -1LL;
	static int32_t x483 = INT32_MIN;
	int32_t x484 = INT32_MIN;
	volatile int32_t t117 = 1;

    t117 = (x481>((x482%x483)<=x484));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x485 = INT64_MIN;
	volatile uint32_t x486 = UINT32_MAX;
	int8_t x487 = INT8_MIN;
	int32_t x488 = INT32_MAX;
	volatile int32_t t118 = 0;

    t118 = (x485>((x486%x487)<=x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x489 = 3U;
	uint8_t x490 = 0U;
	uint32_t x491 = 4775U;
	int8_t x492 = 10;
	volatile int32_t t119 = -13381341;

    t119 = (x489>((x490%x491)<=x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x493 = UINT8_MAX;
	int16_t x494 = INT16_MIN;
	int16_t x495 = INT16_MIN;
	uint64_t x496 = UINT64_MAX;
	static volatile int32_t t120 = -3804;

    t120 = (x493>((x494%x495)<=x496));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint8_t x498 = 6U;
	int16_t x499 = INT16_MIN;
	int64_t x500 = INT64_MIN;
	volatile int32_t t121 = -2434;

    t121 = (x497>((x498%x499)<=x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x502 = INT32_MIN;
	volatile int8_t x504 = INT8_MIN;
	int32_t t122 = -3;

    t122 = (x501>((x502%x503)<=x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x505 = UINT16_MAX;
	volatile int32_t x506 = -1;
	volatile uint64_t x507 = 3751LLU;
	int16_t x508 = INT16_MIN;
	int32_t t123 = -162305107;

    t123 = (x505>((x506%x507)<=x508));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = -114481849877205LL;
	volatile int32_t x511 = -1;
	int16_t x512 = -29;
	int32_t t124 = 164150648;

    t124 = (x509>((x510%x511)<=x512));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x513 = -7;
	int32_t x515 = INT32_MAX;
	volatile uint16_t x516 = 302U;
	int32_t t125 = -128;

    t125 = (x513>((x514%x515)<=x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x517 = -2721236;
	static uint64_t x518 = 6175488LLU;
	int64_t x519 = -1LL;
	int64_t x520 = INT64_MIN;
	volatile int32_t t126 = 12919763;

    t126 = (x517>((x518%x519)<=x520));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x521 = INT32_MIN;
	volatile uint8_t x522 = UINT8_MAX;
	static int64_t x523 = 81439055310888LL;
	volatile int32_t t127 = 517;

    t127 = (x521>((x522%x523)<=x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x525 = UINT64_MAX;
	int8_t x526 = 4;
	static int64_t x527 = -165LL;
	int32_t x528 = INT32_MIN;

    t128 = (x525>((x526%x527)<=x528));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x530 = -1;
	volatile int64_t x531 = -13LL;
	volatile int32_t t129 = -106296;

    t129 = (x529>((x530%x531)<=x532));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x533 = UINT32_MAX;
	uint16_t x534 = 58U;
	static int64_t x535 = 17639649LL;
	uint8_t x536 = 30U;

    t130 = (x533>((x534%x535)<=x536));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x537 = INT64_MAX;
	uint16_t x538 = 46U;
	int16_t x539 = -6110;
	int32_t t131 = -19344637;

    t131 = (x537>((x538%x539)<=x540));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x541 = 3U;
	int32_t x542 = INT32_MAX;
	int8_t x543 = INT8_MAX;

    t132 = (x541>((x542%x543)<=x544));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x546 = -1;
	volatile int32_t t133 = 439;

    t133 = (x545>((x546%x547)<=x548));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x549 = INT64_MIN;
	int64_t x550 = INT64_MIN;
	uint16_t x551 = 31434U;
	int32_t x552 = INT32_MAX;

    t134 = (x549>((x550%x551)<=x552));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x553 = INT64_MIN;
	uint32_t x555 = 961985928U;
	int64_t x556 = -1LL;

    t135 = (x553>((x554%x555)<=x556));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x557 = 4822203U;
	uint64_t x558 = 67761362171196048LLU;
	uint64_t x559 = UINT64_MAX;
	int16_t x560 = INT16_MIN;
	static int32_t t136 = -26;

    t136 = (x557>((x558%x559)<=x560));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x562 = INT64_MIN;
	int32_t x563 = INT32_MIN;
	static int16_t x564 = 709;
	int32_t t137 = 2;

    t137 = (x561>((x562%x563)<=x564));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x565 = INT32_MAX;
	volatile int64_t x566 = 111520LL;
	volatile uint16_t x567 = UINT16_MAX;
	int32_t x568 = INT32_MAX;
	volatile int32_t t138 = 30533902;

    t138 = (x565>((x566%x567)<=x568));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x569 = -1;
	int16_t x570 = INT16_MAX;
	int32_t x571 = INT32_MAX;
	int16_t x572 = 1;
	int32_t t139 = -2977;

    t139 = (x569>((x570%x571)<=x572));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x573 = 15604U;
	static int8_t x574 = INT8_MIN;
	int32_t t140 = 117412804;

    t140 = (x573>((x574%x575)<=x576));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x577 = 46U;
	uint64_t x578 = UINT64_MAX;
	int16_t x580 = -1;
	int32_t t141 = -608;

    t141 = (x577>((x578%x579)<=x580));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x581 = INT32_MAX;
	int16_t x582 = -2;
	int16_t x583 = 2820;
	static uint8_t x584 = 28U;

    t142 = (x581>((x582%x583)<=x584));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x585 = INT16_MIN;
	static int32_t x586 = -1;
	static int64_t x587 = INT64_MAX;
	volatile int32_t t143 = 154;

    t143 = (x585>((x586%x587)<=x588));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x590 = 6400864573715LLU;
	int64_t x592 = INT64_MIN;
	int32_t t144 = -240;

    t144 = (x589>((x590%x591)<=x592));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x593 = INT32_MAX;
	uint64_t x594 = 2148928870551LLU;
	static uint16_t x595 = 14195U;
	int16_t x596 = -2064;
	int32_t t145 = -64432;

    t145 = (x593>((x594%x595)<=x596));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x597 = INT8_MIN;
	static volatile int8_t x598 = INT8_MAX;
	int32_t x599 = INT32_MAX;
	static int32_t x600 = INT32_MIN;
	static int32_t t146 = -335543;

    t146 = (x597>((x598%x599)<=x600));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x601 = UINT32_MAX;
	int16_t x603 = INT16_MIN;
	volatile uint16_t x604 = 2122U;
	static int32_t t147 = -1593;

    t147 = (x601>((x602%x603)<=x604));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x605 = 111742351LLU;
	static volatile int64_t x607 = 456787982LL;
	int32_t t148 = -19979;

    t148 = (x605>((x606%x607)<=x608));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x609 = 260U;
	static int32_t x610 = INT32_MAX;
	static int64_t x612 = -9820949LL;
	volatile int32_t t149 = 68970319;

    t149 = (x609>((x610%x611)<=x612));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x615 = 80U;
	uint32_t x616 = 228U;
	volatile int32_t t150 = -816;

    t150 = (x613>((x614%x615)<=x616));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x617 = UINT16_MAX;
	uint64_t x618 = 163813033LLU;
	int32_t x619 = 235337598;
	static int32_t x620 = -1;
	static volatile int32_t t151 = 0;

    t151 = (x617>((x618%x619)<=x620));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x621 = 24;
	uint16_t x622 = 1548U;
	uint32_t x623 = 22559U;
	int32_t x624 = 2441672;
	static volatile int32_t t152 = -1;

    t152 = (x621>((x622%x623)<=x624));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x625 = UINT64_MAX;
	static int8_t x626 = -1;
	static int32_t x628 = 10163426;
	volatile int32_t t153 = 214;

    t153 = (x625>((x626%x627)<=x628));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x632 = 15381U;

    t154 = (x629>((x630%x631)<=x632));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x634 = INT64_MAX;
	static volatile int32_t x635 = INT32_MIN;
	volatile int64_t x636 = INT64_MIN;

    t155 = (x633>((x634%x635)<=x636));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x637 = -59886;
	uint16_t x638 = 16U;
	static int32_t x640 = -1063572510;
	static volatile int32_t t156 = 181;

    t156 = (x637>((x638%x639)<=x640));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x641 = INT16_MAX;
	volatile int64_t x642 = INT64_MIN;
	uint64_t x643 = UINT64_MAX;
	volatile int32_t t157 = -28183584;

    t157 = (x641>((x642%x643)<=x644));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x645 = INT16_MIN;
	int8_t x646 = 0;
	static volatile uint32_t x647 = UINT32_MAX;
	int16_t x648 = 118;
	int32_t t158 = -93252261;

    t158 = (x645>((x646%x647)<=x648));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x649 = INT8_MAX;
	uint8_t x650 = 50U;
	int8_t x651 = 1;
	static int16_t x652 = -17;
	int32_t t159 = 846848248;

    t159 = (x649>((x650%x651)<=x652));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x653 = UINT8_MAX;
	int64_t x654 = -121229573LL;
	volatile uint16_t x655 = UINT16_MAX;
	uint64_t x656 = UINT64_MAX;
	volatile int32_t t160 = -69016706;

    t160 = (x653>((x654%x655)<=x656));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x657 = INT64_MAX;
	static int32_t x658 = -39938916;
	static uint64_t x659 = 595763LLU;
	int16_t x660 = INT16_MIN;

    t161 = (x657>((x658%x659)<=x660));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x662 = 2;
	int64_t x663 = -1LL;
	int16_t x664 = -1;

    t162 = (x661>((x662%x663)<=x664));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x665 = -1;
	static int8_t x666 = -3;
	int32_t x667 = INT32_MIN;
	static int32_t x668 = INT32_MIN;
	volatile int32_t t163 = -24;

    t163 = (x665>((x666%x667)<=x668));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x669 = INT16_MIN;
	uint32_t x670 = UINT32_MAX;
	int16_t x672 = INT16_MIN;
	volatile int32_t t164 = 1;

    t164 = (x669>((x670%x671)<=x672));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x673 = 1U;
	static int8_t x674 = -1;
	uint32_t x675 = UINT32_MAX;
	static int16_t x676 = INT16_MAX;
	int32_t t165 = -462299500;

    t165 = (x673>((x674%x675)<=x676));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x677 = -1LL;
	volatile int16_t x678 = INT16_MAX;
	static int64_t x679 = 748357512LL;
	volatile int64_t x680 = -1LL;
	int32_t t166 = -38338952;

    t166 = (x677>((x678%x679)<=x680));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x681 = 503U;
	int16_t x682 = INT16_MIN;
	volatile int32_t t167 = -204643351;

    t167 = (x681>((x682%x683)<=x684));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x685 = -188;
	int16_t x686 = -1;
	static int64_t x687 = -29019651835LL;
	uint32_t x688 = 152122277U;

    t168 = (x685>((x686%x687)<=x688));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x690 = INT8_MIN;
	uint8_t x691 = 39U;
	int32_t x692 = INT32_MIN;
	int32_t t169 = 84;

    t169 = (x689>((x690%x691)<=x692));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x693 = 9U;
	volatile int16_t x694 = -1;
	static int8_t x695 = INT8_MIN;
	uint32_t x696 = UINT32_MAX;
	volatile int32_t t170 = -5250627;

    t170 = (x693>((x694%x695)<=x696));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x697 = UINT64_MAX;
	int32_t x698 = -53263505;
	int32_t x699 = -395;
	static int32_t x700 = INT32_MAX;
	volatile int32_t t171 = -2325;

    t171 = (x697>((x698%x699)<=x700));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x701 = 33U;
	uint8_t x702 = UINT8_MAX;
	int32_t x703 = -1;
	volatile int16_t x704 = INT16_MAX;
	int32_t t172 = -1;

    t172 = (x701>((x702%x703)<=x704));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x710 = INT32_MAX;
	static volatile int64_t x711 = -1LL;
	int8_t x712 = INT8_MIN;

    t173 = (x709>((x710%x711)<=x712));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x713 = INT32_MAX;
	static int32_t x714 = -262;
	static volatile int16_t x716 = -1;

    t174 = (x713>((x714%x715)<=x716));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x717 = 114U;
	int64_t x718 = INT64_MIN;
	volatile int8_t x719 = -11;
	int32_t t175 = 2915;

    t175 = (x717>((x718%x719)<=x720));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x721 = INT16_MIN;
	int16_t x722 = INT16_MAX;
	int8_t x723 = INT8_MAX;

    t176 = (x721>((x722%x723)<=x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x725 = 26353287U;
	int16_t x727 = 1;
	uint32_t x728 = UINT32_MAX;

    t177 = (x725>((x726%x727)<=x728));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x729 = 0U;
	int32_t x730 = INT32_MIN;
	int16_t x731 = 1748;
	uint16_t x732 = 51U;
	volatile int32_t t178 = -1898531;

    t178 = (x729>((x730%x731)<=x732));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x733 = -1LL;
	int64_t x734 = INT64_MIN;
	int8_t x735 = -4;
	volatile int8_t x736 = 12;
	int32_t t179 = -1767;

    t179 = (x733>((x734%x735)<=x736));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x738 = INT8_MIN;
	int8_t x739 = INT8_MIN;
	uint32_t x740 = 1U;
	int32_t t180 = -21707622;

    t180 = (x737>((x738%x739)<=x740));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x741 = 0LLU;
	int16_t x742 = -1;
	uint8_t x743 = UINT8_MAX;
	uint64_t x744 = 10227547537649138LLU;
	volatile int32_t t181 = 25929;

    t181 = (x741>((x742%x743)<=x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x745 = INT32_MAX;
	uint16_t x746 = 0U;

    t182 = (x745>((x746%x747)<=x748));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x749 = INT16_MIN;
	volatile uint32_t x750 = UINT32_MAX;
	int64_t x751 = INT64_MAX;
	static uint32_t x752 = 162U;
	int32_t t183 = -239381833;

    t183 = (x749>((x750%x751)<=x752));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x753 = UINT8_MAX;
	uint32_t x754 = UINT32_MAX;
	int32_t x756 = -1;
	static int32_t t184 = -14581;

    t184 = (x753>((x754%x755)<=x756));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x757 = 404542089U;
	int32_t x758 = 4356;
	int16_t x759 = -1394;
	int64_t x760 = INT64_MIN;
	volatile int32_t t185 = -32;

    t185 = (x757>((x758%x759)<=x760));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x761 = INT8_MIN;
	int32_t x762 = INT32_MAX;
	static volatile int32_t t186 = 1796;

    t186 = (x761>((x762%x763)<=x764));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x766 = INT32_MIN;
	int16_t x767 = INT16_MIN;
	uint32_t x768 = 6817U;
	int32_t t187 = 163451;

    t187 = (x765>((x766%x767)<=x768));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x769 = 2183955717189LL;
	int32_t x770 = INT32_MAX;
	int16_t x771 = INT16_MAX;
	static int32_t t188 = 11697668;

    t188 = (x769>((x770%x771)<=x772));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x773 = UINT32_MAX;
	int64_t x774 = INT64_MIN;
	int16_t x775 = INT16_MIN;
	volatile uint64_t x776 = UINT64_MAX;
	int32_t t189 = 49034;

    t189 = (x773>((x774%x775)<=x776));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x777 = 2;
	uint8_t x779 = UINT8_MAX;
	uint64_t x780 = UINT64_MAX;
	int32_t t190 = 3331622;

    t190 = (x777>((x778%x779)<=x780));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x782 = -1;
	volatile int8_t x783 = INT8_MIN;
	int32_t t191 = -40;

    t191 = (x781>((x782%x783)<=x784));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x785 = 23U;
	uint32_t x786 = UINT32_MAX;
	static int32_t x787 = INT32_MAX;
	int32_t x788 = -876596;
	static volatile int32_t t192 = -807918;

    t192 = (x785>((x786%x787)<=x788));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x789 = 784;
	uint16_t x790 = UINT16_MAX;
	static int8_t x792 = INT8_MIN;
	volatile int32_t t193 = -167645;

    t193 = (x789>((x790%x791)<=x792));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x794 = -1LL;
	uint16_t x795 = UINT16_MAX;

    t194 = (x793>((x794%x795)<=x796));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x797 = -1;
	int16_t x798 = INT16_MIN;
	int64_t x800 = -1LL;
	int32_t t195 = 0;

    t195 = (x797>((x798%x799)<=x800));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x801 = -1;
	int16_t x802 = INT16_MAX;
	uint16_t x803 = UINT16_MAX;
	volatile int32_t x804 = 60;
	static int32_t t196 = -13065211;

    t196 = (x801>((x802%x803)<=x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x805 = 9966LLU;
	int32_t x806 = INT32_MIN;
	int64_t x808 = INT64_MIN;
	int32_t t197 = -1;

    t197 = (x805>((x806%x807)<=x808));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x809 = INT16_MIN;
	int64_t x810 = INT64_MIN;
	int8_t x811 = INT8_MAX;
	static int16_t x812 = -190;
	volatile int32_t t198 = -1;

    t198 = (x809>((x810%x811)<=x812));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x813 = INT64_MAX;
	static uint64_t x815 = UINT64_MAX;
	static volatile uint64_t x816 = 1931LLU;
	static volatile int32_t t199 = -26;

    t199 = (x813>((x814%x815)<=x816));

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

