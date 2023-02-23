
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

uint8_t x4 = 7U;
uint8_t x6 = UINT8_MAX;
int8_t x8 = 42;
uint32_t x10 = 9U;
int32_t t3 = -62;
volatile int16_t x20 = INT16_MAX;
volatile int32_t t6 = 1;
int16_t x35 = 2826;
volatile int8_t x36 = 44;
int32_t t8 = -119;
int16_t x37 = 15;
int32_t x38 = -1;
static uint64_t x39 = UINT64_MAX;
static int32_t t9 = 81215895;
int32_t x42 = INT32_MAX;
static uint16_t x45 = 7U;
volatile uint16_t x46 = 31360U;
int32_t x48 = INT32_MIN;
int8_t x49 = -49;
uint16_t x50 = UINT16_MAX;
int32_t t14 = 2479;
int64_t x63 = INT64_MIN;
static uint8_t x64 = 7U;
volatile int32_t x67 = -3697832;
uint32_t x70 = UINT32_MAX;
int32_t t18 = 506;
uint32_t x80 = 116065U;
volatile int16_t x82 = INT16_MAX;
static volatile int64_t x85 = INT64_MAX;
int8_t x87 = INT8_MAX;
int8_t x90 = INT8_MIN;
uint64_t x92 = 23032169179LLU;
static volatile int32_t t23 = -87965040;
int32_t t24 = 175972190;
static int32_t x102 = INT32_MIN;
volatile int16_t x109 = -1;
static uint32_t x116 = 11527717U;
volatile int32_t t31 = -55142;
int64_t x133 = 2312LL;
static volatile uint16_t x141 = UINT16_MAX;
int8_t x146 = -38;
volatile uint8_t x149 = 62U;
uint8_t x157 = UINT8_MAX;
int32_t x158 = 15;
int8_t x162 = 2;
int32_t t41 = -3038;
uint8_t x172 = 2U;
volatile int32_t x173 = INT32_MIN;
volatile uint64_t x175 = 7778LLU;
int8_t x176 = -1;
static uint32_t x177 = 29797U;
int16_t x178 = -1;
static int32_t x186 = 5;
int64_t x187 = INT64_MIN;
static uint64_t x192 = UINT64_MAX;
volatile int32_t t47 = 5;
uint64_t x193 = 323268955LLU;
int32_t t48 = 724144267;
uint8_t x202 = 1U;
int32_t t50 = 3;
volatile int8_t x205 = 6;
int32_t t51 = 45;
int32_t x220 = -1;
volatile int32_t t54 = 4675068;
static volatile int32_t t55 = 1;
uint64_t x244 = 1854232LLU;
uint64_t x246 = 13LLU;
static int32_t x247 = -102005108;
static int16_t x258 = INT16_MIN;
int32_t x261 = -13223;
int8_t x262 = INT8_MAX;
static int64_t x263 = -1LL;
static volatile int16_t x264 = INT16_MIN;
int32_t t65 = 1;
uint32_t x267 = 69U;
uint32_t x268 = UINT32_MAX;
int8_t x275 = INT8_MAX;
int8_t x277 = -58;
volatile int32_t t70 = 1961242;
int32_t t71 = 3;
volatile int32_t t72 = 2585;
int64_t x294 = INT64_MIN;
volatile int16_t x296 = INT16_MIN;
static uint16_t x299 = 1U;
int16_t x300 = INT16_MIN;
uint8_t x302 = 10U;
uint32_t x304 = 21068U;
uint32_t x310 = 38U;
uint8_t x312 = 126U;
int64_t x316 = 30456064LL;
int32_t t80 = 3829843;
volatile int8_t x325 = INT8_MIN;
int8_t x329 = -1;
volatile uint8_t x331 = UINT8_MAX;
int32_t x332 = INT32_MAX;
volatile int8_t x337 = INT8_MIN;
int16_t x340 = 21;
int16_t x347 = INT16_MAX;
int32_t t88 = 234950;
volatile int16_t x369 = INT16_MIN;
uint64_t x370 = 189LLU;
int32_t x372 = 103310;
uint64_t x375 = UINT64_MAX;
int32_t t93 = -9;
uint16_t x381 = UINT16_MAX;
static int8_t x390 = INT8_MAX;
volatile int8_t x391 = INT8_MIN;
static uint8_t x394 = 0U;
static int32_t x397 = 1;
int8_t x398 = 13;
static int8_t x404 = -3;
uint8_t x405 = 49U;
int32_t t101 = -944633661;
uint64_t x416 = 70LLU;
int32_t x420 = INT32_MIN;
volatile int32_t t104 = 5325;
uint16_t x421 = 31367U;
int16_t x427 = -1;
static int64_t x436 = INT64_MIN;
int32_t t108 = 0;
int32_t t110 = 25910456;
int64_t x448 = INT64_MIN;
int8_t x449 = -1;
int64_t x450 = INT64_MIN;
int32_t t112 = -956471497;
static int32_t x458 = INT32_MIN;
static uint32_t x461 = 312917U;
static uint8_t x465 = 2U;
volatile int32_t x472 = 3;
int8_t x475 = -1;
uint16_t x476 = 650U;
volatile int8_t x477 = INT8_MIN;
static volatile uint16_t x486 = 27287U;
int8_t x492 = -1;
int32_t t122 = 0;
uint16_t x501 = 13082U;
int16_t x504 = INT16_MAX;
int32_t x507 = INT32_MIN;
int32_t t126 = -485994;
volatile uint32_t x516 = UINT32_MAX;
volatile int8_t x522 = INT8_MAX;
int32_t x526 = 0;
int16_t x527 = -1;
uint32_t x535 = 167232U;
static int32_t t133 = 45;
int32_t x537 = -1;
static int32_t x538 = 2933922;
int32_t x539 = 3525;
volatile int32_t t134 = 3775;
uint64_t x541 = 1833582552556809955LLU;
volatile int16_t x544 = 1;
uint32_t x549 = 5361U;
static int64_t x550 = 1LL;
int32_t x551 = INT32_MIN;
volatile int16_t x552 = INT16_MAX;
int64_t x554 = 2101LL;
int16_t x556 = INT16_MIN;
volatile int16_t x558 = INT16_MIN;
int16_t x566 = INT16_MAX;
static int8_t x569 = INT8_MIN;
static int64_t x575 = -1LL;
int32_t t143 = 6;
volatile int32_t x578 = INT32_MIN;
static volatile int64_t x582 = INT64_MIN;
static volatile int32_t t145 = 914665074;
static uint32_t x587 = UINT32_MAX;
uint16_t x590 = UINT16_MAX;
int32_t x591 = -111;
volatile int32_t t148 = 193403765;
uint32_t x604 = 169566U;
uint8_t x609 = 1U;
volatile int8_t x611 = INT8_MIN;
int32_t t152 = 59751810;
int16_t x613 = INT16_MAX;
int8_t x619 = INT8_MAX;
uint8_t x620 = UINT8_MAX;
static int32_t t155 = 419;
volatile uint16_t x634 = 29U;
static uint8_t x641 = 3U;
uint64_t x643 = 11191873930LLU;
int32_t x646 = -1439;
int8_t x649 = INT8_MIN;
static int16_t x653 = 21;
volatile uint16_t x656 = 453U;
uint64_t x666 = 8572602126163LLU;
volatile int16_t x672 = 1417;
int32_t t167 = 3200;
int16_t x673 = -6;
int32_t x686 = -1;
int16_t x687 = INT16_MAX;
volatile int32_t t171 = 16112737;
uint16_t x689 = UINT16_MAX;
static int64_t x690 = -3425LL;
static int16_t x694 = INT16_MIN;
int16_t x700 = INT16_MAX;
int8_t x705 = INT8_MIN;
volatile int16_t x706 = 392;
uint64_t x707 = 3069LLU;
volatile int32_t x710 = -1;
volatile int32_t t180 = -14189643;
static int32_t x725 = -1;
uint16_t x731 = 1U;
int8_t x733 = -14;
int16_t x742 = 0;
int32_t x743 = INT32_MIN;
int64_t x751 = INT64_MIN;
int32_t x758 = -287689;
volatile uint16_t x760 = 4041U;
volatile int32_t t189 = 611;
uint32_t x764 = 4557367U;
int32_t t191 = 120;
int8_t x771 = INT8_MIN;
int32_t t193 = 57120801;
static volatile uint8_t x777 = UINT8_MAX;
int64_t x778 = INT64_MIN;
volatile int32_t t194 = -114396;
static volatile int64_t x784 = -13859768693277LL;
int32_t t196 = 63;
volatile int32_t t197 = 36237159;
int64_t x795 = INT64_MAX;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	static uint16_t x2 = 1U;
	int32_t x3 = INT32_MIN;
	int32_t t0 = 19;

    t0 = (x1>((x2!=x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -1;
	int64_t x7 = INT64_MIN;
	volatile int32_t t1 = -1063;

    t1 = (x5>((x6!=x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -2;
	int16_t x11 = 1;
	static int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -1071;

    t2 = (x9>((x10!=x11)<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = 0;
	int32_t x14 = INT32_MAX;
	uint16_t x15 = 2U;
	int8_t x16 = -1;

    t3 = (x13>((x14!=x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 590560U;
	static uint16_t x18 = 1U;
	volatile uint8_t x19 = UINT8_MAX;
	int32_t t4 = -26;

    t4 = (x17>((x18!=x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	static volatile int8_t x22 = -42;
	int64_t x23 = 2012254678790506LL;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 480706019;

    t5 = (x21>((x22!=x23)<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -1LL;
	int8_t x26 = 0;
	volatile uint64_t x27 = 124186244691LLU;
	int64_t x28 = INT64_MIN;

    t6 = (x25>((x26!=x27)<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = UINT16_MAX;
	int16_t x30 = 30;
	uint16_t x31 = 18329U;
	int8_t x32 = -1;
	static int32_t t7 = 29445;

    t7 = (x29>((x30!=x31)<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 5;
	static uint16_t x34 = UINT16_MAX;

    t8 = (x33>((x34!=x35)<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x40 = UINT8_MAX;

    t9 = (x37>((x38!=x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = -42;
	uint32_t x43 = 802711U;
	int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = 14;

    t10 = (x41>((x42!=x43)<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x47 = INT32_MIN;
	volatile int32_t t11 = -126828;

    t11 = (x45>((x46!=x47)<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x51 = INT64_MAX;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 157550645;

    t12 = (x49>((x50!=x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = -171;
	int32_t x54 = INT32_MAX;
	int8_t x55 = INT8_MAX;
	uint32_t x56 = 1653790U;
	volatile int32_t t13 = 4;

    t13 = (x53>((x54!=x55)<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = -1;
	uint16_t x58 = 1U;
	uint16_t x59 = UINT16_MAX;
	static uint64_t x60 = UINT64_MAX;

    t14 = (x57>((x58!=x59)<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x61 = -1;
	int32_t x62 = INT32_MIN;
	static volatile int32_t t15 = -7;

    t15 = (x61>((x62!=x63)<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = 1;
	volatile uint64_t x66 = 5676256913120LLU;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = -878595;

    t16 = (x65>((x66!=x67)<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 916U;
	static uint8_t x71 = 1U;
	uint8_t x72 = 31U;
	int32_t t17 = -62;

    t17 = (x69>((x70!=x71)<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 55U;
	volatile int16_t x74 = 3060;
	int16_t x75 = -6;
	int8_t x76 = 0;

    t18 = (x73>((x74!=x75)<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	volatile uint16_t x78 = UINT16_MAX;
	int32_t x79 = 12;
	volatile int32_t t19 = 12076711;

    t19 = (x77>((x78!=x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = 0U;
	static volatile int16_t x83 = INT16_MIN;
	static uint8_t x84 = UINT8_MAX;
	int32_t t20 = 79;

    t20 = (x81>((x82!=x83)<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = INT8_MIN;
	int8_t x88 = 31;
	volatile int32_t t21 = 134975;

    t21 = (x85>((x86!=x87)<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MAX;
	volatile int64_t x91 = -664971627LL;
	int32_t t22 = 801364;

    t22 = (x89>((x90!=x91)<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -846748;
	uint32_t x94 = UINT32_MAX;
	volatile int64_t x95 = INT64_MIN;
	int8_t x96 = 12;

    t23 = (x93>((x94!=x95)<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -1LL;
	int16_t x98 = INT16_MIN;
	static volatile int32_t x99 = 907254;
	uint64_t x100 = 105901942LLU;

    t24 = (x97>((x98!=x99)<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	uint32_t x103 = UINT32_MAX;
	volatile uint32_t x104 = UINT32_MAX;
	volatile int32_t t25 = -1;

    t25 = (x101>((x102!=x103)<=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 876021903226820LL;
	uint32_t x106 = 499333U;
	static uint16_t x107 = 252U;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 0;

    t26 = (x105>((x106!=x107)<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x110 = -1LL;
	volatile uint16_t x111 = UINT16_MAX;
	int8_t x112 = -40;
	volatile int32_t t27 = -6;

    t27 = (x109>((x110!=x111)<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	static int8_t x114 = -2;
	int16_t x115 = -376;
	volatile int32_t t28 = -769;

    t28 = (x113>((x114!=x115)<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x117 = 48U;
	uint16_t x118 = 1096U;
	int32_t x119 = -1;
	static int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 883773356;

    t29 = (x117>((x118!=x119)<=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	static int8_t x122 = 1;
	static volatile int64_t x123 = INT64_MIN;
	static uint32_t x124 = 11U;
	int32_t t30 = -2814420;

    t30 = (x121>((x122!=x123)<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 11496;
	volatile int16_t x126 = INT16_MAX;
	volatile int32_t x127 = INT32_MAX;
	int32_t x128 = -1;

    t31 = (x125>((x126!=x127)<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	uint8_t x130 = 6U;
	static volatile uint64_t x131 = UINT64_MAX;
	int8_t x132 = 1;
	int32_t t32 = -4643;

    t32 = (x129>((x130!=x131)<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = INT16_MIN;
	static int64_t x135 = -7120316LL;
	static int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -30633206;

    t33 = (x133>((x134!=x135)<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	volatile int64_t x138 = INT64_MIN;
	static int16_t x139 = INT16_MIN;
	int8_t x140 = -1;
	int32_t t34 = 244;

    t34 = (x137>((x138!=x139)<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = 8;
	static int64_t x143 = 11280LL;
	static uint32_t x144 = 507U;
	volatile int32_t t35 = -5858258;

    t35 = (x141>((x142!=x143)<=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	int32_t x147 = INT32_MAX;
	uint16_t x148 = UINT16_MAX;
	int32_t t36 = -182;

    t36 = (x145>((x146!=x147)<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = -1;
	int64_t x151 = -3LL;
	static uint16_t x152 = 54U;
	int32_t t37 = 1974;

    t37 = (x149>((x150!=x151)<=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -32828;
	int64_t x154 = INT64_MAX;
	static volatile int8_t x155 = -1;
	static volatile int8_t x156 = -1;
	volatile int32_t t38 = 369276509;

    t38 = (x153>((x154!=x155)<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x159 = INT8_MAX;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t39 = 281;

    t39 = (x157>((x158!=x159)<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x161 = 0;
	int64_t x163 = INT64_MIN;
	int16_t x164 = -2;
	static int32_t t40 = -15276925;

    t40 = (x161>((x162!=x163)<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = INT16_MAX;
	uint8_t x166 = 8U;
	volatile uint64_t x167 = 162859036266145532LLU;
	int64_t x168 = INT64_MIN;

    t41 = (x165>((x166!=x167)<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	static uint8_t x170 = 4U;
	uint16_t x171 = 218U;
	volatile int32_t t42 = 10562;

    t42 = (x169>((x170!=x171)<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x174 = 0U;
	volatile int32_t t43 = 16055;

    t43 = (x173>((x174!=x175)<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x179 = 344822542U;
	static uint8_t x180 = UINT8_MAX;
	int32_t t44 = 187213370;

    t44 = (x177>((x178!=x179)<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	volatile int8_t x182 = 0;
	volatile int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MAX;
	static volatile int32_t t45 = 129032133;

    t45 = (x181>((x182!=x183)<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t46 = -21048476;

    t46 = (x185>((x186!=x187)<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	uint8_t x190 = 0U;
	int16_t x191 = INT16_MAX;

    t47 = (x189>((x190!=x191)<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x194 = UINT8_MAX;
	volatile int64_t x195 = 11LL;
	int16_t x196 = 7;

    t48 = (x193>((x194!=x195)<=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = 982491866;
	int16_t x198 = INT16_MAX;
	uint8_t x199 = UINT8_MAX;
	uint16_t x200 = 504U;
	int32_t t49 = -112;

    t49 = (x197>((x198!=x199)<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -1;
	static int8_t x203 = 1;
	uint32_t x204 = 3U;

    t50 = (x201>((x202!=x203)<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x206 = 10U;
	uint16_t x207 = 605U;
	int64_t x208 = -1LL;

    t51 = (x205>((x206!=x207)<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -2;
	static volatile int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 52162;

    t52 = (x209>((x210!=x211)<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int8_t x214 = -17;
	uint64_t x215 = UINT64_MAX;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = 3962406;

    t53 = (x213>((x214!=x215)<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	int16_t x218 = INT16_MIN;
	volatile int8_t x219 = INT8_MAX;

    t54 = (x217>((x218!=x219)<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MIN;
	int16_t x222 = 15187;
	uint16_t x223 = 3U;
	int64_t x224 = -1LL;

    t55 = (x221>((x222!=x223)<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 64469988U;
	uint8_t x226 = 94U;
	static uint32_t x227 = 19850569U;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t56 = -92899;

    t56 = (x225>((x226!=x227)<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	int8_t x230 = INT8_MIN;
	volatile uint16_t x231 = 0U;
	int8_t x232 = -1;
	volatile int32_t t57 = 475;

    t57 = (x229>((x230!=x231)<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MAX;
	volatile int8_t x236 = -11;
	volatile int32_t t58 = 5269;

    t58 = (x233>((x234!=x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 555;
	static int16_t x238 = INT16_MAX;
	static volatile uint16_t x239 = 1937U;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 1;

    t59 = (x237>((x238!=x239)<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	static int8_t x242 = INT8_MAX;
	volatile int32_t x243 = INT32_MIN;
	static int32_t t60 = 740679;

    t60 = (x241>((x242!=x243)<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = 844450839LL;
	static volatile int32_t x248 = -1;
	int32_t t61 = -14;

    t61 = (x245>((x246!=x247)<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = 0LLU;
	int32_t t62 = 33;

    t62 = (x249>((x250!=x251)<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MAX;
	uint16_t x254 = 3513U;
	int8_t x255 = -1;
	uint64_t x256 = 1220392417481038359LLU;
	int32_t t63 = 695306389;

    t63 = (x253>((x254!=x255)<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x257 = 21191827U;
	uint16_t x259 = 12U;
	int8_t x260 = -51;
	volatile int32_t t64 = 336;

    t64 = (x257>((x258!=x259)<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    

    t65 = (x261>((x262!=x263)<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = -1LL;
	uint16_t x266 = 361U;
	int32_t t66 = -239;

    t66 = (x265>((x266!=x267)<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	uint64_t x270 = 3153522808LLU;
	int64_t x271 = INT64_MIN;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t67 = -274;

    t67 = (x269>((x270!=x271)<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int32_t x274 = -2411;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t68 = 785059965;

    t68 = (x273>((x274!=x275)<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x278 = INT8_MIN;
	static int16_t x279 = INT16_MIN;
	uint16_t x280 = 7U;
	volatile int32_t t69 = -978511;

    t69 = (x277>((x278!=x279)<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	static int32_t x283 = INT32_MIN;
	uint16_t x284 = 8U;

    t70 = (x281>((x282!=x283)<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	uint8_t x286 = UINT8_MAX;
	uint16_t x287 = 1123U;
	static int16_t x288 = 32;

    t71 = (x285>((x286!=x287)<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = -1LL;
	uint64_t x290 = 14407273LLU;
	static int64_t x291 = INT64_MAX;
	int32_t x292 = INT32_MAX;

    t72 = (x289>((x290!=x291)<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = 6;
	volatile int32_t x295 = -1;
	int32_t t73 = 1;

    t73 = (x293>((x294!=x295)<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = 11;
	volatile uint8_t x298 = UINT8_MAX;
	static volatile int32_t t74 = 73334242;

    t74 = (x297>((x298!=x299)<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	int64_t x303 = -181391175696LL;
	int32_t t75 = 1;

    t75 = (x301>((x302!=x303)<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x305 = 1219U;
	static volatile uint64_t x306 = UINT64_MAX;
	int16_t x307 = -9;
	int64_t x308 = -1LL;
	volatile int32_t t76 = 6167;

    t76 = (x305>((x306!=x307)<=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -92808154;
	int32_t x311 = -1;
	static volatile int32_t t77 = -67885669;

    t77 = (x309>((x310!=x311)<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x313 = 9U;
	static uint32_t x314 = 988760U;
	uint64_t x315 = UINT64_MAX;
	volatile int32_t t78 = 1535393;

    t78 = (x313>((x314!=x315)<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -213;
	int16_t x318 = 4986;
	uint64_t x319 = 48LLU;
	int64_t x320 = -1LL;
	volatile int32_t t79 = -13188637;

    t79 = (x317>((x318!=x319)<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = UINT8_MAX;
	int64_t x322 = -107LL;
	int8_t x323 = INT8_MAX;
	int8_t x324 = -1;

    t80 = (x321>((x322!=x323)<=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x326 = UINT16_MAX;
	int32_t x327 = INT32_MIN;
	uint8_t x328 = UINT8_MAX;
	static int32_t t81 = -67399;

    t81 = (x325>((x326!=x327)<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x330 = -57;
	int32_t t82 = -147104854;

    t82 = (x329>((x330!=x331)<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MAX;
	int64_t x335 = 150082652LL;
	uint16_t x336 = UINT16_MAX;
	static volatile int32_t t83 = 3382715;

    t83 = (x333>((x334!=x335)<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x338 = 3U;
	int16_t x339 = INT16_MIN;
	volatile int32_t t84 = 62;

    t84 = (x337>((x338!=x339)<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	static uint64_t x342 = UINT64_MAX;
	static int64_t x343 = -1LL;
	int64_t x344 = INT64_MIN;
	int32_t t85 = -90392509;

    t85 = (x341>((x342!=x343)<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	volatile uint16_t x346 = UINT16_MAX;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = -1014;

    t86 = (x345>((x346!=x347)<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	int64_t x350 = INT64_MIN;
	static uint16_t x351 = 933U;
	int64_t x352 = -212149229968156343LL;
	int32_t t87 = -5;

    t87 = (x349>((x350!=x351)<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x353 = 964LLU;
	int8_t x354 = -7;
	volatile uint64_t x355 = UINT64_MAX;
	static int8_t x356 = INT8_MIN;

    t88 = (x353>((x354!=x355)<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 14166864LLU;
	volatile int64_t x358 = -740411266850302LL;
	int16_t x359 = -1;
	volatile int32_t x360 = -1;
	volatile int32_t t89 = -1;

    t89 = (x357>((x358!=x359)<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	static volatile int8_t x362 = -21;
	uint16_t x363 = 27279U;
	uint16_t x364 = UINT16_MAX;
	static int32_t t90 = -59211121;

    t90 = (x361>((x362!=x363)<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 6;
	int64_t x366 = 41LL;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = 247;

    t91 = (x365>((x366!=x367)<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x371 = INT32_MIN;
	static volatile int32_t t92 = -139913527;

    t92 = (x369>((x370!=x371)<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 687U;
	static int64_t x374 = -233640464LL;
	int32_t x376 = -2;

    t93 = (x373>((x374!=x375)<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 120136U;
	volatile uint64_t x378 = 3LLU;
	static int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t94 = 1582303;

    t94 = (x377>((x378!=x379)<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = INT8_MIN;
	uint32_t x383 = 37U;
	int64_t x384 = -1LL;
	volatile int32_t t95 = 32542;

    t95 = (x381>((x382!=x383)<=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = 95U;
	uint8_t x388 = 12U;
	volatile int32_t t96 = 7;

    t96 = (x385>((x386!=x387)<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x389 = 340U;
	static int16_t x392 = -1;
	int32_t t97 = -78014;

    t97 = (x389>((x390!=x391)<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = -348890085462935LL;
	int32_t x395 = INT32_MIN;
	volatile int32_t x396 = -1;
	int32_t t98 = -2048;

    t98 = (x393>((x394!=x395)<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x399 = INT8_MAX;
	int32_t x400 = -14835;
	volatile int32_t t99 = 9;

    t99 = (x397>((x398!=x399)<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	uint32_t x402 = UINT32_MAX;
	volatile int8_t x403 = INT8_MAX;
	int32_t t100 = 22144248;

    t100 = (x401>((x402!=x403)<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x406 = UINT64_MAX;
	volatile uint16_t x407 = 33U;
	int8_t x408 = -5;

    t101 = (x405>((x406!=x407)<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	volatile int64_t x410 = INT64_MAX;
	int32_t x411 = INT32_MIN;
	static uint16_t x412 = 609U;
	static int32_t t102 = -16174632;

    t102 = (x409>((x410!=x411)<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 450LLU;
	int16_t x414 = INT16_MAX;
	int64_t x415 = 44276LL;
	volatile int32_t t103 = 41271;

    t103 = (x413>((x414!=x415)<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x417 = UINT32_MAX;
	int8_t x418 = INT8_MAX;
	volatile int8_t x419 = 47;

    t104 = (x417>((x418!=x419)<=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = INT16_MAX;
	int64_t x423 = -1LL;
	int32_t x424 = INT32_MIN;
	volatile int32_t t105 = -4;

    t105 = (x421>((x422!=x423)<=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 243084LLU;
	uint64_t x426 = 16225172919901970LLU;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t106 = -350507;

    t106 = (x425>((x426!=x427)<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 45;
	int16_t x430 = 217;
	uint16_t x431 = 43U;
	uint64_t x432 = 64611LLU;
	volatile int32_t t107 = 34569;

    t107 = (x429>((x430!=x431)<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 84912U;
	int32_t x434 = 1;
	static int32_t x435 = INT32_MAX;

    t108 = (x433>((x434!=x435)<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int32_t x438 = INT32_MIN;
	uint8_t x439 = 2U;
	static uint8_t x440 = UINT8_MAX;
	static int32_t t109 = 3865;

    t109 = (x437>((x438!=x439)<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -23694843;
	static uint64_t x442 = 10130237LLU;
	uint32_t x443 = UINT32_MAX;
	uint16_t x444 = 8U;

    t110 = (x441>((x442!=x443)<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 53U;
	static uint8_t x446 = UINT8_MAX;
	volatile int64_t x447 = INT64_MIN;
	volatile int32_t t111 = -6313;

    t111 = (x445>((x446!=x447)<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x451 = INT32_MAX;
	static uint8_t x452 = 13U;

    t112 = (x449>((x450!=x451)<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 929009461417716573LLU;
	int8_t x454 = 4;
	int8_t x455 = 11;
	static int16_t x456 = -1;
	int32_t t113 = 7872;

    t113 = (x453>((x454!=x455)<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x457 = 321U;
	int64_t x459 = INT64_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t114 = -1;

    t114 = (x457>((x458!=x459)<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x462 = 8U;
	int32_t x463 = INT32_MAX;
	uint16_t x464 = UINT16_MAX;
	int32_t t115 = -28183;

    t115 = (x461>((x462!=x463)<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = INT8_MIN;
	static uint8_t x467 = UINT8_MAX;
	int32_t x468 = INT32_MAX;
	int32_t t116 = -1;

    t116 = (x465>((x466!=x467)<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = 588;
	static int16_t x470 = 0;
	int16_t x471 = INT16_MIN;
	volatile int32_t t117 = 235292832;

    t117 = (x469>((x470!=x471)<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int64_t x474 = INT64_MAX;
	static int32_t t118 = -771;

    t118 = (x473>((x474!=x475)<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x478 = -1;
	int16_t x479 = 4;
	int8_t x480 = INT8_MIN;
	int32_t t119 = 1;

    t119 = (x477>((x478!=x479)<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	uint16_t x482 = 15968U;
	static uint32_t x483 = UINT32_MAX;
	int64_t x484 = INT64_MIN;
	volatile int32_t t120 = 161902;

    t120 = (x481>((x482!=x483)<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -1LL;
	uint8_t x487 = UINT8_MAX;
	int64_t x488 = 6275305186LL;
	int32_t t121 = -1560436;

    t121 = (x485>((x486!=x487)<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = 3512;
	volatile int16_t x490 = -1;
	static int32_t x491 = 59;

    t122 = (x489>((x490!=x491)<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 194U;
	static int16_t x494 = INT16_MAX;
	int8_t x495 = INT8_MIN;
	int16_t x496 = INT16_MIN;
	int32_t t123 = 1117;

    t123 = (x493>((x494!=x495)<=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	int8_t x498 = -13;
	int8_t x499 = INT8_MIN;
	static volatile int16_t x500 = INT16_MIN;
	int32_t t124 = 0;

    t124 = (x497>((x498!=x499)<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x502 = INT16_MAX;
	static volatile int8_t x503 = -1;
	volatile int32_t t125 = -875981;

    t125 = (x501>((x502!=x503)<=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	int32_t x506 = 33722233;
	uint32_t x508 = 5U;

    t126 = (x505>((x506!=x507)<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -1LL;
	int64_t x510 = -1LL;
	int16_t x511 = 0;
	static volatile uint8_t x512 = 15U;
	static volatile int32_t t127 = 1;

    t127 = (x509>((x510!=x511)<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	int16_t x514 = -26;
	int32_t x515 = INT32_MIN;
	int32_t t128 = 2916629;

    t128 = (x513>((x514!=x515)<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = 2976;
	static int32_t x518 = 4;
	volatile uint16_t x519 = 244U;
	int32_t x520 = INT32_MIN;
	static int32_t t129 = 287574;

    t129 = (x517>((x518!=x519)<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = 1;
	int8_t x523 = INT8_MIN;
	static int64_t x524 = INT64_MIN;
	volatile int32_t t130 = 1;

    t130 = (x521>((x522!=x523)<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	int32_t x528 = -1;
	volatile int32_t t131 = -1;

    t131 = (x525>((x526!=x527)<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	volatile int8_t x530 = INT8_MIN;
	volatile int16_t x531 = INT16_MAX;
	static int32_t x532 = INT32_MAX;
	volatile int32_t t132 = 1;

    t132 = (x529>((x530!=x531)<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x533 = -1;
	int64_t x534 = INT64_MAX;
	int32_t x536 = INT32_MIN;

    t133 = (x533>((x534!=x535)<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x540 = INT64_MIN;

    t134 = (x537>((x538!=x539)<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = -157311;
	uint32_t x543 = UINT32_MAX;
	int32_t t135 = 30924;

    t135 = (x541>((x542!=x543)<=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 1321799570LLU;
	int64_t x546 = -19734622591500406LL;
	uint8_t x547 = UINT8_MAX;
	int64_t x548 = -1LL;
	int32_t t136 = -405862;

    t136 = (x545>((x546!=x547)<=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t t137 = 1011410;

    t137 = (x549>((x550!=x551)<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	uint16_t x555 = UINT16_MAX;
	volatile int32_t t138 = 69107;

    t138 = (x553>((x554!=x555)<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = INT8_MAX;
	int32_t x559 = -2910104;
	int32_t x560 = 31539171;
	volatile int32_t t139 = -13544628;

    t139 = (x557>((x558!=x559)<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = -1;
	uint16_t x562 = 9U;
	static uint32_t x563 = 242U;
	static uint64_t x564 = 140985488798280607LLU;
	int32_t t140 = 283206298;

    t140 = (x561>((x562!=x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 2;
	int8_t x567 = INT8_MIN;
	int64_t x568 = 112156401755LL;
	int32_t t141 = -42359035;

    t141 = (x565>((x566!=x567)<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x570 = INT8_MAX;
	int64_t x571 = -1LL;
	volatile int64_t x572 = -4268661962802LL;
	volatile int32_t t142 = 2159611;

    t142 = (x569>((x570!=x571)<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	uint8_t x574 = 114U;
	static int32_t x576 = 1;

    t143 = (x573>((x574!=x575)<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 8798;
	int8_t x579 = -24;
	uint16_t x580 = 25U;
	volatile int32_t t144 = -1;

    t144 = (x577>((x578!=x579)<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	static int64_t x583 = INT64_MIN;
	int64_t x584 = -22195266LL;

    t145 = (x581>((x582!=x583)<=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 414U;
	int64_t x586 = -1LL;
	int16_t x588 = INT16_MIN;
	int32_t t146 = -260381965;

    t146 = (x585>((x586!=x587)<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MAX;
	int8_t x592 = INT8_MIN;
	int32_t t147 = 3607;

    t147 = (x589>((x590!=x591)<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = INT32_MIN;
	int16_t x594 = INT16_MIN;
	static uint16_t x595 = 460U;
	static volatile int8_t x596 = 1;

    t148 = (x593>((x594!=x595)<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 1U;
	volatile int16_t x598 = -1;
	uint32_t x599 = 3796U;
	int32_t x600 = -490915;
	int32_t t149 = -95;

    t149 = (x597>((x598!=x599)<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = INT8_MAX;
	int8_t x602 = INT8_MAX;
	volatile int16_t x603 = 682;
	int32_t t150 = -42020;

    t150 = (x601>((x602!=x603)<=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 12672U;
	uint16_t x606 = 1U;
	uint8_t x607 = 17U;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t151 = 16;

    t151 = (x605>((x606!=x607)<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x610 = INT32_MIN;
	static int8_t x612 = -1;

    t152 = (x609>((x610!=x611)<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x614 = UINT16_MAX;
	static int64_t x615 = INT64_MAX;
	static volatile uint8_t x616 = UINT8_MAX;
	volatile int32_t t153 = -624759579;

    t153 = (x613>((x614!=x615)<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 15082;
	int8_t x618 = -1;
	volatile int32_t t154 = 0;

    t154 = (x617>((x618!=x619)<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MAX;
	static uint8_t x622 = 10U;
	int8_t x623 = 37;
	uint32_t x624 = 2156U;

    t155 = (x621>((x622!=x623)<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x625 = INT8_MIN;
	int32_t x626 = -15;
	static int32_t x627 = -329;
	static int32_t x628 = -3492433;
	int32_t t156 = -805117855;

    t156 = (x625>((x626!=x627)<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = INT64_MIN;
	uint8_t x630 = 117U;
	int64_t x631 = INT64_MIN;
	int64_t x632 = INT64_MIN;
	volatile int32_t t157 = 395;

    t157 = (x629>((x630!=x631)<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = INT64_MAX;
	int8_t x635 = -1;
	int8_t x636 = -20;
	volatile int32_t t158 = 100;

    t158 = (x633>((x634!=x635)<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = 1590504LL;
	volatile int16_t x638 = INT16_MIN;
	volatile int16_t x639 = -1;
	volatile int32_t x640 = 203765;
	static int32_t t159 = -26910;

    t159 = (x637>((x638!=x639)<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x642 = 351U;
	int32_t x644 = INT32_MIN;
	static int32_t t160 = -306;

    t160 = (x641>((x642!=x643)<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = 17;
	uint8_t x647 = 49U;
	static uint16_t x648 = 3U;
	volatile int32_t t161 = 11739;

    t161 = (x645>((x646!=x647)<=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x650 = 511U;
	int32_t x651 = 3397983;
	int8_t x652 = -1;
	volatile int32_t t162 = -19;

    t162 = (x649>((x650!=x651)<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x654 = INT32_MIN;
	int16_t x655 = INT16_MIN;
	int32_t t163 = 2653347;

    t163 = (x653>((x654!=x655)<=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x657 = UINT16_MAX;
	int8_t x658 = -5;
	uint64_t x659 = 13LLU;
	static uint64_t x660 = 3306215LLU;
	volatile int32_t t164 = -31372078;

    t164 = (x657>((x658!=x659)<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MAX;
	uint64_t x662 = 0LLU;
	uint32_t x663 = UINT32_MAX;
	volatile int32_t x664 = INT32_MAX;
	int32_t t165 = -9773204;

    t165 = (x661>((x662!=x663)<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = INT16_MIN;
	int32_t x667 = INT32_MAX;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t166 = 7;

    t166 = (x665>((x666!=x667)<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = -1802226418295LL;
	static int8_t x670 = INT8_MAX;
	uint64_t x671 = 6516053206706271893LLU;

    t167 = (x669>((x670!=x671)<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = 0;
	static volatile int32_t x675 = INT32_MIN;
	static int8_t x676 = INT8_MAX;
	int32_t t168 = 21706;

    t168 = (x673>((x674!=x675)<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = 61;
	int64_t x678 = INT64_MIN;
	static int64_t x679 = INT64_MIN;
	int8_t x680 = 3;
	static int32_t t169 = -7;

    t169 = (x677>((x678!=x679)<=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 7U;
	static int8_t x682 = 1;
	static int64_t x683 = INT64_MIN;
	int64_t x684 = -1960069956LL;
	int32_t t170 = 162;

    t170 = (x681>((x682!=x683)<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -1;
	static volatile int32_t x688 = -8104971;

    t171 = (x685>((x686!=x687)<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x691 = UINT32_MAX;
	volatile int8_t x692 = 1;
	int32_t t172 = -6764935;

    t172 = (x689>((x690!=x691)<=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 2636U;
	static uint64_t x695 = UINT64_MAX;
	uint8_t x696 = 6U;
	volatile int32_t t173 = -386;

    t173 = (x693>((x694!=x695)<=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 190158706LLU;
	uint32_t x698 = 18324202U;
	int16_t x699 = -494;
	static volatile int32_t t174 = -51601;

    t174 = (x697>((x698!=x699)<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -123;
	volatile int16_t x702 = -1;
	int8_t x703 = INT8_MAX;
	volatile int32_t x704 = -1;
	int32_t t175 = -12860186;

    t175 = (x701>((x702!=x703)<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x708 = 2042U;
	int32_t t176 = -40166;

    t176 = (x705>((x706!=x707)<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	uint64_t x711 = 3731218036LLU;
	static int16_t x712 = -106;
	volatile int32_t t177 = 0;

    t177 = (x709>((x710!=x711)<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -11711;
	volatile int16_t x714 = -1;
	int32_t x715 = INT32_MIN;
	int64_t x716 = -13765591722116LL;
	volatile int32_t t178 = 629506;

    t178 = (x713>((x714!=x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -1;
	volatile uint8_t x718 = UINT8_MAX;
	static int16_t x719 = INT16_MIN;
	uint16_t x720 = UINT16_MAX;
	int32_t t179 = -5071476;

    t179 = (x717>((x718!=x719)<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = INT32_MIN;
	static int32_t x722 = INT32_MIN;
	volatile uint64_t x723 = UINT64_MAX;
	int16_t x724 = 151;

    t180 = (x721>((x722!=x723)<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = -1;
	uint64_t x727 = UINT64_MAX;
	int16_t x728 = 3156;
	volatile int32_t t181 = -234;

    t181 = (x725>((x726!=x727)<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x729 = INT32_MIN;
	static int64_t x730 = INT64_MIN;
	int16_t x732 = 7;
	int32_t t182 = 4112;

    t182 = (x729>((x730!=x731)<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x734 = 45399LL;
	uint16_t x735 = 444U;
	uint32_t x736 = 213919U;
	volatile int32_t t183 = -253205;

    t183 = (x733>((x734!=x735)<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = -1;
	volatile uint8_t x738 = 2U;
	volatile int64_t x739 = INT64_MIN;
	int8_t x740 = -1;
	int32_t t184 = -27949180;

    t184 = (x737>((x738!=x739)<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = 358;
	volatile int8_t x744 = INT8_MAX;
	static volatile int32_t t185 = -15609;

    t185 = (x741>((x742!=x743)<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	int64_t x746 = INT64_MIN;
	uint8_t x747 = 7U;
	uint32_t x748 = 0U;
	volatile int32_t t186 = 2383;

    t186 = (x745>((x746!=x747)<=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	uint8_t x750 = 1U;
	static int32_t x752 = INT32_MIN;
	volatile int32_t t187 = -1;

    t187 = (x749>((x750!=x751)<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x753 = 28156253LLU;
	int32_t x754 = INT32_MAX;
	int16_t x755 = INT16_MIN;
	int16_t x756 = INT16_MIN;
	int32_t t188 = -1;

    t188 = (x753>((x754!=x755)<=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 54U;
	static int32_t x759 = INT32_MIN;

    t189 = (x757>((x758!=x759)<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = -2;
	int64_t x762 = INT64_MIN;
	volatile uint8_t x763 = UINT8_MAX;
	volatile int32_t t190 = 2;

    t190 = (x761>((x762!=x763)<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	int8_t x766 = INT8_MAX;
	uint32_t x767 = 57451370U;
	volatile int8_t x768 = INT8_MIN;

    t191 = (x765>((x766!=x767)<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	int8_t x770 = 1;
	int8_t x772 = -1;
	static volatile int32_t t192 = 64141598;

    t192 = (x769>((x770!=x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = INT32_MIN;
	int32_t x774 = INT32_MIN;
	int16_t x775 = -128;
	int8_t x776 = -4;

    t193 = (x773>((x774!=x775)<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x779 = INT8_MIN;
	int16_t x780 = -1;

    t194 = (x777>((x778!=x779)<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = 1;
	volatile int16_t x782 = -1;
	int32_t x783 = INT32_MIN;
	int32_t t195 = -12795074;

    t195 = (x781>((x782!=x783)<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint64_t x785 = UINT64_MAX;
	volatile int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MIN;
	static int8_t x788 = INT8_MIN;

    t196 = (x785>((x786!=x787)<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 3;
	int16_t x790 = INT16_MIN;
	int32_t x791 = INT32_MIN;
	int64_t x792 = INT64_MIN;

    t197 = (x789>((x790!=x791)<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MAX;
	static int8_t x794 = -1;
	static uint32_t x796 = UINT32_MAX;
	int32_t t198 = 495;

    t198 = (x793>((x794!=x795)<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = INT8_MIN;
	volatile int64_t x798 = INT64_MIN;
	int32_t x799 = -679;
	uint8_t x800 = 24U;
	int32_t t199 = -3230971;

    t199 = (x797>((x798!=x799)<=x800));

    if (t199 != 0) { NG(); } else { ; }
	
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

