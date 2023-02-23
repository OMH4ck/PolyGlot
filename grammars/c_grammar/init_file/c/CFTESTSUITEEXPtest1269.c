
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

int64_t x4 = INT64_MIN;
uint8_t x7 = 0U;
int16_t x12 = INT16_MIN;
int64_t x16 = -1LL;
int32_t x17 = -1;
int64_t x23 = INT64_MAX;
int16_t x30 = -2236;
static volatile int32_t t8 = 1;
static int32_t t9 = 15222;
volatile uint8_t x43 = 0U;
volatile uint8_t x47 = 16U;
volatile int32_t t11 = 390;
int32_t x56 = INT32_MIN;
volatile int32_t t14 = -935638;
int32_t t15 = 3142;
static int32_t x65 = -1;
int32_t t16 = 3;
volatile uint64_t x75 = 27641310326337754LLU;
int32_t x78 = -1;
int32_t x81 = -89874407;
uint8_t x85 = UINT8_MAX;
static uint8_t x86 = UINT8_MAX;
volatile int32_t t21 = -149;
uint8_t x91 = UINT8_MAX;
uint16_t x97 = UINT16_MAX;
static int16_t x99 = INT16_MIN;
uint16_t x100 = 9U;
static volatile uint64_t x105 = 149630LLU;
int8_t x117 = -1;
int8_t x118 = -39;
int16_t x120 = -1;
int16_t x134 = 2;
int32_t t36 = 265758733;
uint64_t x153 = UINT64_MAX;
uint64_t x155 = 20435LLU;
int32_t x156 = -1;
uint8_t x157 = UINT8_MAX;
volatile uint64_t x165 = UINT64_MAX;
int16_t x166 = -1;
int16_t x167 = INT16_MIN;
int32_t t41 = 439138227;
uint8_t x169 = 4U;
static int16_t x171 = 986;
int8_t x174 = INT8_MIN;
static int8_t x176 = -1;
volatile int32_t t43 = 3975;
uint32_t x183 = 85984723U;
static int8_t x184 = INT8_MAX;
int32_t t46 = 157516;
int8_t x189 = -16;
int32_t x197 = INT32_MIN;
int32_t x198 = INT32_MIN;
uint32_t x200 = 163551649U;
uint64_t x201 = 2782588LLU;
volatile uint32_t x205 = 322941U;
int64_t x209 = -3695LL;
int32_t t52 = -301374669;
uint8_t x226 = 7U;
static int8_t x233 = 3;
uint64_t x234 = 118LLU;
uint16_t x235 = UINT16_MAX;
uint32_t x236 = UINT32_MAX;
uint64_t x238 = 16LLU;
int8_t x243 = 45;
int32_t x248 = INT32_MIN;
int16_t x251 = 5281;
int32_t t63 = 95302151;
int8_t x257 = -1;
static uint16_t x259 = 1976U;
uint16_t x260 = UINT16_MAX;
int8_t x262 = -1;
int32_t t65 = -7;
uint8_t x267 = UINT8_MAX;
static int32_t t66 = 119074038;
int16_t x269 = INT16_MIN;
static uint64_t x271 = 6LLU;
int8_t x272 = INT8_MAX;
uint64_t x279 = 1728737LLU;
int32_t t69 = -172776;
volatile uint64_t x283 = 1430457381839042LLU;
volatile int32_t t71 = -346;
static uint32_t x289 = 305U;
static int32_t t72 = -6;
int16_t x294 = INT16_MAX;
static volatile int64_t x300 = INT64_MIN;
uint8_t x301 = UINT8_MAX;
static uint32_t x308 = 242U;
volatile int64_t x310 = INT64_MAX;
int32_t t78 = 7307149;
int32_t x317 = INT32_MIN;
uint8_t x323 = 2U;
int64_t x329 = INT64_MAX;
static int8_t x330 = -6;
uint8_t x331 = 0U;
int32_t t82 = 986;
int8_t x334 = INT8_MAX;
int32_t t83 = 33424;
int64_t x338 = INT64_MAX;
volatile int32_t t84 = -570;
uint64_t x342 = 189848LLU;
int16_t x350 = INT16_MIN;
int8_t x357 = -2;
static uint32_t x358 = 202U;
uint16_t x359 = 7U;
int32_t x365 = -6;
int8_t x367 = -1;
static uint16_t x370 = 117U;
int32_t t93 = 57738;
int8_t x383 = INT8_MIN;
int8_t x395 = INT8_MIN;
int16_t x397 = INT16_MIN;
static int32_t x402 = -1;
static int32_t t101 = 9872369;
int8_t x415 = 1;
int32_t x416 = INT32_MIN;
int8_t x421 = INT8_MIN;
int16_t x422 = -1;
uint32_t x423 = 1384U;
volatile int32_t t106 = -743910;
volatile int64_t x430 = INT64_MIN;
uint8_t x431 = UINT8_MAX;
volatile uint16_t x440 = UINT16_MAX;
volatile int32_t t109 = 1058;
static int8_t x444 = -2;
uint8_t x445 = 5U;
int16_t x446 = INT16_MIN;
int16_t x452 = -3;
static int8_t x456 = -30;
int16_t x462 = INT16_MIN;
int16_t x466 = 283;
int8_t x472 = -1;
volatile int16_t x473 = INT16_MIN;
int8_t x476 = INT8_MIN;
static uint8_t x477 = UINT8_MAX;
static volatile int8_t x484 = INT8_MIN;
uint8_t x486 = UINT8_MAX;
volatile int32_t t121 = 7296;
uint32_t x489 = 8887508U;
static uint32_t x492 = 1807U;
int32_t t125 = -1676225;
volatile int64_t x505 = INT64_MIN;
uint16_t x506 = UINT16_MAX;
static int32_t t126 = -278;
volatile int32_t t127 = -322;
int8_t x515 = INT8_MIN;
volatile int32_t t128 = 225;
int16_t x519 = INT16_MIN;
int64_t x525 = 11851673857030LL;
static volatile int64_t x540 = INT64_MIN;
uint8_t x549 = 1U;
int8_t x550 = INT8_MIN;
int32_t x551 = INT32_MIN;
volatile int8_t x558 = INT8_MAX;
static int16_t x560 = INT16_MIN;
static int32_t t139 = -647;
static int64_t x561 = -1LL;
int64_t x569 = 49366LL;
int32_t x587 = INT32_MIN;
uint64_t x588 = 232060491031LLU;
static int8_t x591 = -1;
uint64_t x595 = 338LLU;
volatile int64_t x606 = INT64_MAX;
int32_t x618 = -1;
static int32_t x641 = INT32_MIN;
volatile int64_t x643 = INT64_MAX;
static int16_t x644 = INT16_MIN;
uint16_t x650 = 6078U;
int16_t x656 = INT16_MAX;
static volatile int32_t t163 = 4;
int64_t x662 = INT64_MIN;
uint32_t x663 = 30U;
uint8_t x666 = UINT8_MAX;
int16_t x669 = INT16_MIN;
volatile int8_t x671 = 10;
int32_t x676 = INT32_MIN;
static int32_t t168 = 246;
int32_t x679 = INT32_MAX;
volatile int16_t x680 = INT16_MIN;
int64_t x682 = INT64_MAX;
volatile int16_t x686 = -1;
static uint16_t x694 = UINT16_MAX;
int32_t t174 = -30244519;
volatile uint64_t x709 = 47423270974529LLU;
uint16_t x710 = 492U;
volatile int16_t x711 = INT16_MIN;
int16_t x718 = -145;
int8_t x722 = -1;
volatile int32_t x724 = -1;
int16_t x725 = 1;
uint8_t x742 = 56U;
int32_t t185 = -43;
static int16_t x747 = -1;
volatile int32_t t187 = -12879;
volatile int64_t x754 = INT64_MAX;
uint32_t x758 = 39065928U;
int16_t x763 = INT16_MIN;
int8_t x765 = -1;
uint64_t x766 = 362240088676LLU;
uint8_t x768 = UINT8_MAX;
int16_t x772 = INT16_MAX;
volatile uint64_t x773 = 1227340179278108LLU;
int16_t x774 = -15235;
int32_t t196 = -19995659;
uint64_t x789 = 43709LLU;
int8_t x792 = -2;
volatile int32_t t198 = -25;
static int16_t x799 = INT16_MIN;


void f0(void) {
    	int64_t x1 = -1138229017383321898LL;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = -1;
	int32_t t0 = 8925261;

    t0 = (x1>((x2!=x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = 3;
	static int8_t x6 = INT8_MAX;
	uint64_t x8 = 333156LLU;
	static int32_t t1 = 192397684;

    t1 = (x5>((x6!=x7)!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int32_t x10 = -1;
	static uint64_t x11 = 35121242449720937LLU;
	volatile int32_t t2 = 16;

    t2 = (x9>((x10!=x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 47369U;
	int16_t x14 = INT16_MIN;
	static volatile int64_t x15 = 6LL;
	volatile int32_t t3 = 0;

    t3 = (x13>((x14!=x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x18 = 3143U;
	uint8_t x19 = 86U;
	int16_t x20 = INT16_MAX;
	static volatile int32_t t4 = -1;

    t4 = (x17>((x18!=x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	uint8_t x22 = 3U;
	int32_t x24 = -1;
	int32_t t5 = 736;

    t5 = (x21>((x22!=x23)!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MAX;
	volatile uint64_t x26 = UINT64_MAX;
	int32_t x27 = 2;
	int16_t x28 = 7;
	int32_t t6 = 9951721;

    t6 = (x25>((x26!=x27)!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	static int32_t x31 = INT32_MIN;
	static int64_t x32 = 131693631174LL;
	volatile int32_t t7 = -17419;

    t7 = (x29>((x30!=x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 44;
	int64_t x34 = INT64_MAX;
	int64_t x35 = -16LL;
	uint32_t x36 = UINT32_MAX;

    t8 = (x33>((x34!=x35)!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = INT16_MIN;
	int16_t x40 = -1;

    t9 = (x37>((x38!=x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	uint32_t x42 = UINT32_MAX;
	int32_t x44 = -734459;
	volatile int32_t t10 = 306025;

    t10 = (x41>((x42!=x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 3825LL;
	int64_t x46 = INT64_MIN;
	int64_t x48 = INT64_MIN;

    t11 = (x45>((x46!=x47)!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 175;
	volatile int16_t x50 = INT16_MIN;
	int8_t x51 = 1;
	uint32_t x52 = 5889U;
	static int32_t t12 = -957426371;

    t12 = (x49>((x50!=x51)!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = 382068990;
	volatile int64_t x54 = INT64_MIN;
	volatile int32_t x55 = INT32_MAX;
	int32_t t13 = 1;

    t13 = (x53>((x54!=x55)!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = 3657;
	int16_t x58 = -1;
	uint8_t x59 = UINT8_MAX;
	volatile uint32_t x60 = 126U;

    t14 = (x57>((x58!=x59)!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 507;
	int64_t x62 = INT64_MIN;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MAX;

    t15 = (x61>((x62!=x63)!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = UINT64_MAX;
	static volatile uint32_t x67 = 427722947U;
	volatile int8_t x68 = 43;

    t16 = (x65>((x66!=x67)!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = 81;
	uint32_t x70 = 413U;
	int16_t x71 = -9255;
	static volatile int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 1;

    t17 = (x69>((x70!=x71)!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 31U;
	volatile int8_t x74 = -1;
	volatile uint8_t x76 = UINT8_MAX;
	int32_t t18 = 13263983;

    t18 = (x73>((x74!=x75)!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 31U;
	uint64_t x79 = UINT64_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -7279;

    t19 = (x77>((x78!=x79)!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x82 = 434U;
	static volatile uint64_t x83 = UINT64_MAX;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 3;

    t20 = (x81>((x82!=x83)!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x87 = INT64_MIN;
	static int8_t x88 = INT8_MIN;

    t21 = (x85>((x86!=x87)!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	static int32_t x92 = 19278419;
	int32_t t22 = -702014538;

    t22 = (x89>((x90!=x91)!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	int16_t x94 = -83;
	int32_t x95 = INT32_MAX;
	int16_t x96 = -1;
	int32_t t23 = -58;

    t23 = (x93>((x94!=x95)!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = 0;
	volatile int32_t t24 = 108590805;

    t24 = (x97>((x98!=x99)!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x101 = 3U;
	uint64_t x102 = 4273116941509LLU;
	uint32_t x103 = 11142U;
	int8_t x104 = -1;
	static volatile int32_t t25 = -611199;

    t25 = (x101>((x102!=x103)!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	int8_t x108 = 21;
	static int32_t t26 = -26;

    t26 = (x105>((x106!=x107)!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1;
	uint8_t x110 = 0U;
	static int8_t x111 = INT8_MIN;
	int16_t x112 = INT16_MAX;
	int32_t t27 = 9007;

    t27 = (x109>((x110!=x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	volatile int16_t x114 = INT16_MAX;
	uint32_t x115 = 2809905U;
	int8_t x116 = INT8_MAX;
	static int32_t t28 = -18;

    t28 = (x113>((x114!=x115)!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x119 = 12U;
	static int32_t t29 = -407197742;

    t29 = (x117>((x118!=x119)!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 0;
	int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	static int32_t x124 = -1;
	int32_t t30 = 112;

    t30 = (x121>((x122!=x123)!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = INT64_MIN;
	volatile uint64_t x126 = 1008048388654LLU;
	int16_t x127 = INT16_MIN;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 0;

    t31 = (x125>((x126!=x127)!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = 28568609741877LL;
	uint8_t x130 = 1U;
	static int64_t x131 = -6330327511400LL;
	static int16_t x132 = INT16_MIN;
	int32_t t32 = 57983;

    t32 = (x129>((x130!=x131)!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = -1;
	int64_t x135 = INT64_MAX;
	int64_t x136 = -1LL;
	volatile int32_t t33 = 24;

    t33 = (x133>((x134!=x135)!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	uint64_t x138 = 5802686407352372543LLU;
	uint32_t x139 = UINT32_MAX;
	static int8_t x140 = INT8_MIN;
	int32_t t34 = -112;

    t34 = (x137>((x138!=x139)!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = UINT8_MAX;
	static int16_t x142 = -224;
	static volatile int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 28;

    t35 = (x141>((x142!=x143)!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -1;
	int32_t x146 = -1;
	int16_t x147 = INT16_MIN;
	uint16_t x148 = 10U;

    t36 = (x145>((x146!=x147)!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	int8_t x150 = -1;
	volatile uint8_t x151 = UINT8_MAX;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 0;

    t37 = (x149>((x150!=x151)!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x154 = 862719U;
	int32_t t38 = -9902489;

    t38 = (x153>((x154!=x155)!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = INT32_MAX;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -80;

    t39 = (x157>((x158!=x159)!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = 1662;
	int8_t x162 = INT8_MIN;
	volatile int32_t x163 = -1;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 3956;

    t40 = (x161>((x162!=x163)!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x168 = INT32_MAX;

    t41 = (x165>((x166!=x167)!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x170 = INT16_MIN;
	uint32_t x172 = UINT32_MAX;
	int32_t t42 = 99566;

    t42 = (x169>((x170!=x171)!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = INT64_MAX;
	static int8_t x175 = INT8_MIN;

    t43 = (x173>((x174!=x175)!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 6U;
	uint8_t x178 = 28U;
	volatile int64_t x179 = INT64_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = 13405165;

    t44 = (x177>((x178!=x179)!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = INT8_MAX;
	int8_t x182 = INT8_MIN;
	static int32_t t45 = 25;

    t45 = (x181>((x182!=x183)!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 0U;
	volatile int16_t x186 = 13;
	uint16_t x187 = 2U;
	uint16_t x188 = 195U;

    t46 = (x185>((x186!=x187)!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = -1LL;
	uint64_t x191 = 50151968LLU;
	uint32_t x192 = 51986693U;
	int32_t t47 = -12482;

    t47 = (x189>((x190!=x191)!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 7207U;
	uint8_t x194 = 49U;
	int32_t x195 = INT32_MIN;
	static int32_t x196 = INT32_MAX;
	volatile int32_t t48 = -6066430;

    t48 = (x193>((x194!=x195)!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x199 = INT16_MIN;
	volatile int32_t t49 = -147493;

    t49 = (x197>((x198!=x199)!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = -1474LL;
	static uint32_t x203 = 95U;
	static uint8_t x204 = 7U;
	volatile int32_t t50 = 1;

    t50 = (x201>((x202!=x203)!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x206 = UINT64_MAX;
	static uint64_t x207 = 10908786290573249LLU;
	int8_t x208 = -2;
	static int32_t t51 = -26062;

    t51 = (x205>((x206!=x207)!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x210 = INT8_MIN;
	static int64_t x211 = -1LL;
	uint32_t x212 = 3U;

    t52 = (x209>((x210!=x211)!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x213 = 54619031166LLU;
	uint16_t x214 = 2356U;
	static int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	volatile int32_t t53 = -4765774;

    t53 = (x213>((x214!=x215)!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x217 = 7U;
	uint64_t x218 = 0LLU;
	int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	static int32_t t54 = -25293;

    t54 = (x217>((x218!=x219)!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -1LL;
	volatile int32_t x222 = -13205359;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t55 = -15401623;

    t55 = (x221>((x222!=x223)!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MAX;
	int32_t x227 = -1;
	static uint8_t x228 = 27U;
	int32_t t56 = -582151056;

    t56 = (x225>((x226!=x227)!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	uint16_t x230 = 60U;
	int64_t x231 = -534332644LL;
	int32_t x232 = -104432900;
	volatile int32_t t57 = -81970787;

    t57 = (x229>((x230!=x231)!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t t58 = 0;

    t58 = (x233>((x234!=x235)!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -19;
	uint16_t x239 = 13292U;
	uint64_t x240 = 3386968LLU;
	int32_t t59 = 3;

    t59 = (x237>((x238!=x239)!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -5420582LL;
	volatile int64_t x242 = 87721391803LL;
	uint32_t x244 = 1781863U;
	static volatile int32_t t60 = 20427997;

    t60 = (x241>((x242!=x243)!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MIN;
	volatile int16_t x247 = -164;
	int32_t t61 = -46966;

    t61 = (x245>((x246!=x247)!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x249 = 1658092773U;
	static volatile uint32_t x250 = 123996014U;
	volatile int64_t x252 = -1LL;
	static int32_t t62 = -1225;

    t62 = (x249>((x250!=x251)!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	uint32_t x254 = 2U;
	volatile int32_t x255 = INT32_MIN;
	static int32_t x256 = INT32_MIN;

    t63 = (x253>((x254!=x255)!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = UINT64_MAX;
	volatile int32_t t64 = -2;

    t64 = (x257>((x258!=x259)!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -19;
	volatile int32_t x263 = INT32_MAX;
	uint8_t x264 = 116U;

    t65 = (x261>((x262!=x263)!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int32_t x266 = 290;
	int8_t x268 = INT8_MIN;

    t66 = (x265>((x266!=x267)!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x270 = INT8_MIN;
	int32_t t67 = 196;

    t67 = (x269>((x270!=x271)!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MAX;
	static int8_t x274 = INT8_MIN;
	static int64_t x275 = -1LL;
	static int64_t x276 = -1LL;
	int32_t t68 = -23;

    t68 = (x273>((x274!=x275)!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 1460LL;
	static int32_t x278 = INT32_MIN;
	uint32_t x280 = UINT32_MAX;

    t69 = (x277>((x278!=x279)!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x281 = INT64_MIN;
	uint8_t x282 = 36U;
	uint8_t x284 = 2U;
	volatile int32_t t70 = 85165;

    t70 = (x281>((x282!=x283)!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 0;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 42U;
	static volatile int32_t x288 = INT32_MIN;

    t71 = (x285>((x286!=x287)!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x290 = INT16_MAX;
	volatile uint64_t x291 = 3070538LLU;
	int64_t x292 = INT64_MIN;

    t72 = (x289>((x290!=x291)!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x293 = 42U;
	int32_t x295 = INT32_MIN;
	uint16_t x296 = 14713U;
	volatile int32_t t73 = 14;

    t73 = (x293>((x294!=x295)!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MAX;
	volatile uint16_t x299 = 1U;
	volatile int32_t t74 = -149;

    t74 = (x297>((x298!=x299)!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x302 = INT16_MAX;
	uint16_t x303 = 82U;
	static int32_t x304 = INT32_MIN;
	volatile int32_t t75 = -163450021;

    t75 = (x301>((x302!=x303)!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MIN;
	int16_t x306 = 370;
	int8_t x307 = INT8_MIN;
	int32_t t76 = 60;

    t76 = (x305>((x306!=x307)!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	int8_t x311 = INT8_MIN;
	static uint64_t x312 = 13075261LLU;
	volatile int32_t t77 = 8095154;

    t77 = (x309>((x310!=x311)!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MAX;
	uint64_t x314 = 4121196678018785970LLU;
	static volatile int32_t x315 = 18;
	static int8_t x316 = INT8_MIN;

    t78 = (x313>((x314!=x315)!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x318 = -1;
	volatile int64_t x319 = INT64_MIN;
	int16_t x320 = -1;
	static volatile int32_t t79 = 576525642;

    t79 = (x317>((x318!=x319)!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 11U;
	static uint16_t x322 = 173U;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 32462;

    t80 = (x321>((x322!=x323)!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -16515;
	int16_t x326 = -1;
	volatile int8_t x327 = -7;
	uint64_t x328 = UINT64_MAX;
	int32_t t81 = 37;

    t81 = (x325>((x326!=x327)!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x332 = INT8_MIN;

    t82 = (x329>((x330!=x331)!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -404264331;
	static volatile int8_t x335 = -1;
	uint64_t x336 = UINT64_MAX;

    t83 = (x333>((x334!=x335)!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = 0;
	static uint16_t x339 = UINT16_MAX;
	int64_t x340 = INT64_MIN;

    t84 = (x337>((x338!=x339)!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int64_t x343 = 26013LL;
	int32_t x344 = -1;
	volatile int32_t t85 = 1;

    t85 = (x341>((x342!=x343)!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 19U;
	int32_t x346 = INT32_MAX;
	int32_t x347 = INT32_MAX;
	uint32_t x348 = 8060062U;
	static volatile int32_t t86 = -409;

    t86 = (x345>((x346!=x347)!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 52;
	int32_t x351 = -5652826;
	int8_t x352 = -8;
	volatile int32_t t87 = 44241376;

    t87 = (x349>((x350!=x351)!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x353 = 6U;
	volatile uint8_t x354 = 6U;
	uint32_t x355 = 488U;
	int64_t x356 = -14178243LL;
	int32_t t88 = -232;

    t88 = (x353>((x354!=x355)!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -1638;

    t89 = (x357>((x358!=x359)!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = INT32_MAX;
	volatile int8_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t90 = 40897;

    t90 = (x361>((x362!=x363)!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = -1;
	volatile uint16_t x368 = 15U;
	int32_t t91 = 16;

    t91 = (x365>((x366!=x367)!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MAX;
	volatile int16_t x371 = INT16_MIN;
	volatile int8_t x372 = -3;
	volatile int32_t t92 = 53412873;

    t92 = (x369>((x370!=x371)!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = INT16_MIN;
	uint64_t x374 = 4182741791009959LLU;
	int64_t x375 = INT64_MIN;
	volatile int32_t x376 = INT32_MIN;

    t93 = (x373>((x374!=x375)!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x377 = INT16_MAX;
	static volatile uint32_t x378 = UINT32_MAX;
	int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MIN;
	volatile int32_t t94 = -306700;

    t94 = (x377>((x378!=x379)!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x381 = INT32_MIN;
	static int64_t x382 = INT64_MIN;
	int64_t x384 = 25400733LL;
	volatile int32_t t95 = -976971;

    t95 = (x381>((x382!=x383)!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x385 = INT8_MAX;
	int64_t x386 = INT64_MIN;
	uint8_t x387 = 21U;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 8;

    t96 = (x385>((x386!=x387)!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -1LL;
	uint8_t x390 = 1U;
	static int32_t x391 = 36138198;
	int64_t x392 = INT64_MIN;
	static volatile int32_t t97 = 258111277;

    t97 = (x389>((x390!=x391)!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = UINT32_MAX;
	int16_t x394 = INT16_MIN;
	uint16_t x396 = 1366U;
	volatile int32_t t98 = 1;

    t98 = (x393>((x394!=x395)!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x398 = 348485559026LLU;
	uint64_t x399 = 16446561746552LLU;
	int8_t x400 = -5;
	static int32_t t99 = -309;

    t99 = (x397>((x398!=x399)!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x401 = 191061;
	int8_t x403 = INT8_MIN;
	int32_t x404 = INT32_MIN;
	volatile int32_t t100 = -33082;

    t100 = (x401>((x402!=x403)!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 1905092;
	static int16_t x406 = INT16_MIN;
	int64_t x407 = 116LL;
	uint8_t x408 = UINT8_MAX;

    t101 = (x405>((x406!=x407)!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	static int64_t x410 = INT64_MIN;
	int8_t x411 = 4;
	uint8_t x412 = 7U;
	int32_t t102 = 109567;

    t102 = (x409>((x410!=x411)!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 400U;
	int64_t x414 = INT64_MIN;
	volatile int32_t t103 = 23662;

    t103 = (x413>((x414!=x415)!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x417 = 17U;
	static int32_t x418 = -1;
	int64_t x419 = INT64_MIN;
	uint16_t x420 = 3U;
	int32_t t104 = -59697925;

    t104 = (x417>((x418!=x419)!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x424 = INT64_MAX;
	volatile int32_t t105 = -3215482;

    t105 = (x421>((x422!=x423)!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MAX;
	int32_t x426 = 27305;
	static int16_t x427 = INT16_MIN;
	int16_t x428 = INT16_MIN;

    t106 = (x425>((x426!=x427)!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = INT64_MIN;
	int8_t x432 = INT8_MAX;
	int32_t t107 = 12;

    t107 = (x429>((x430!=x431)!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 22;
	volatile int8_t x434 = 0;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = 3U;
	static volatile int32_t t108 = -6908;

    t108 = (x433>((x434!=x435)!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = 0;
	int8_t x438 = -3;
	volatile int8_t x439 = -2;

    t109 = (x437>((x438!=x439)!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 5U;
	int16_t x442 = -55;
	uint16_t x443 = 135U;
	volatile int32_t t110 = 294822909;

    t110 = (x441>((x442!=x443)!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x447 = INT64_MAX;
	volatile uint32_t x448 = 1013510180U;
	volatile int32_t t111 = 323;

    t111 = (x445>((x446!=x447)!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -1;
	int64_t x450 = INT64_MIN;
	uint8_t x451 = 1U;
	int32_t t112 = 26;

    t112 = (x449>((x450!=x451)!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	uint16_t x454 = UINT16_MAX;
	volatile uint64_t x455 = 82282513412598132LLU;
	volatile int32_t t113 = -859;

    t113 = (x453>((x454!=x455)!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = INT64_MAX;
	static int16_t x458 = INT16_MIN;
	static volatile uint64_t x459 = 2165693780123810LLU;
	uint8_t x460 = 1U;
	volatile int32_t t114 = -1435616;

    t114 = (x457>((x458!=x459)!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x461 = -1;
	int64_t x463 = INT64_MAX;
	static int8_t x464 = 5;
	volatile int32_t t115 = -36163782;

    t115 = (x461>((x462!=x463)!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = 0;
	uint8_t x467 = UINT8_MAX;
	uint32_t x468 = 163689U;
	volatile int32_t t116 = -3375;

    t116 = (x465>((x466!=x467)!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x469 = UINT64_MAX;
	int16_t x470 = INT16_MIN;
	static int64_t x471 = 235367245LL;
	int32_t t117 = 3878;

    t117 = (x469>((x470!=x471)!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x474 = UINT8_MAX;
	int16_t x475 = INT16_MIN;
	static volatile int32_t t118 = -5;

    t118 = (x473>((x474!=x475)!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x478 = INT64_MIN;
	volatile int32_t x479 = INT32_MAX;
	int16_t x480 = INT16_MIN;
	volatile int32_t t119 = -1;

    t119 = (x477>((x478!=x479)!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 1511859610346673821LLU;
	volatile uint64_t x482 = UINT64_MAX;
	int64_t x483 = 443148045LL;
	volatile int32_t t120 = -6;

    t120 = (x481>((x482!=x483)!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 1LLU;
	uint32_t x487 = 16U;
	int64_t x488 = INT64_MIN;

    t121 = (x485>((x486!=x487)!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x490 = 6704883U;
	uint16_t x491 = 9U;
	volatile int32_t t122 = 66512309;

    t122 = (x489>((x490!=x491)!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x493 = -1;
	int16_t x494 = INT16_MIN;
	int32_t x495 = INT32_MIN;
	uint8_t x496 = 1U;
	int32_t t123 = 1;

    t123 = (x493>((x494!=x495)!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	int64_t x498 = -25LL;
	int8_t x499 = -1;
	int8_t x500 = INT8_MAX;
	volatile int32_t t124 = -5022942;

    t124 = (x497>((x498!=x499)!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -20;
	int32_t x502 = INT32_MAX;
	static int8_t x503 = -1;
	uint16_t x504 = 125U;

    t125 = (x501>((x502!=x503)!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x507 = INT64_MIN;
	volatile int32_t x508 = INT32_MIN;

    t126 = (x505>((x506!=x507)!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x509 = UINT8_MAX;
	static uint64_t x510 = UINT64_MAX;
	int16_t x511 = INT16_MAX;
	static int8_t x512 = INT8_MIN;

    t127 = (x509>((x510!=x511)!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MAX;
	volatile uint32_t x514 = 9U;
	int8_t x516 = -34;

    t128 = (x513>((x514!=x515)!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	static volatile uint16_t x518 = UINT16_MAX;
	uint16_t x520 = 3U;
	int32_t t129 = -6969;

    t129 = (x517>((x518!=x519)!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	int64_t x522 = -1LL;
	int16_t x523 = INT16_MIN;
	int8_t x524 = INT8_MAX;
	static volatile int32_t t130 = 15329214;

    t130 = (x521>((x522!=x523)!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x526 = -1;
	static volatile int64_t x527 = INT64_MAX;
	uint32_t x528 = 21353843U;
	int32_t t131 = -379331007;

    t131 = (x525>((x526!=x527)!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	int32_t x530 = 121;
	int64_t x531 = INT64_MIN;
	int64_t x532 = INT64_MAX;
	int32_t t132 = -3793;

    t132 = (x529>((x530!=x531)!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -1LL;
	int32_t x534 = -1035708;
	int8_t x535 = INT8_MIN;
	int32_t x536 = -1;
	int32_t t133 = 3;

    t133 = (x533>((x534!=x535)!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = UINT64_MAX;
	int16_t x538 = INT16_MIN;
	static uint64_t x539 = UINT64_MAX;
	int32_t t134 = -14110;

    t134 = (x537>((x538!=x539)!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 23U;
	uint64_t x542 = 2950926790138955LLU;
	int16_t x543 = -94;
	int32_t x544 = INT32_MIN;
	volatile int32_t t135 = -20010258;

    t135 = (x541>((x542!=x543)!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint8_t x546 = 1U;
	uint8_t x547 = UINT8_MAX;
	int64_t x548 = INT64_MIN;
	int32_t t136 = -80;

    t136 = (x545>((x546!=x547)!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x552 = 4U;
	int32_t t137 = 2;

    t137 = (x549>((x550!=x551)!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = INT8_MIN;
	static int32_t x554 = -1;
	int64_t x555 = -1LL;
	int16_t x556 = 68;
	int32_t t138 = 0;

    t138 = (x553>((x554!=x555)!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MIN;
	volatile uint64_t x559 = UINT64_MAX;

    t139 = (x557>((x558!=x559)!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x562 = INT64_MIN;
	static int64_t x563 = INT64_MIN;
	int64_t x564 = 259143567848863LL;
	volatile int32_t t140 = -1;

    t140 = (x561>((x562!=x563)!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	static int8_t x566 = 38;
	volatile uint8_t x567 = UINT8_MAX;
	uint32_t x568 = 73U;
	int32_t t141 = -14;

    t141 = (x565>((x566!=x567)!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = 159;
	uint8_t x571 = 1U;
	int32_t x572 = INT32_MIN;
	static volatile int32_t t142 = -119861016;

    t142 = (x569>((x570!=x571)!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 12LLU;
	static int8_t x574 = INT8_MIN;
	uint8_t x575 = 1U;
	int16_t x576 = -11732;
	volatile int32_t t143 = -42353;

    t143 = (x573>((x574!=x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	int8_t x578 = -1;
	static volatile int64_t x579 = -2348768LL;
	volatile int16_t x580 = -1;
	int32_t t144 = -89668395;

    t144 = (x577>((x578!=x579)!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 7U;
	uint32_t x582 = UINT32_MAX;
	static int32_t x583 = INT32_MIN;
	uint8_t x584 = UINT8_MAX;
	volatile int32_t t145 = 24889;

    t145 = (x581>((x582!=x583)!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	volatile uint32_t x586 = 454U;
	volatile int32_t t146 = -244;

    t146 = (x585>((x586!=x587)!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	static uint32_t x590 = UINT32_MAX;
	static uint16_t x592 = UINT16_MAX;
	int32_t t147 = -192243;

    t147 = (x589>((x590!=x591)!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x593 = 1U;
	volatile uint64_t x594 = 64556LLU;
	int8_t x596 = INT8_MIN;
	volatile int32_t t148 = 36104150;

    t148 = (x593>((x594!=x595)!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x597 = 210982LLU;
	int8_t x598 = INT8_MIN;
	static volatile uint32_t x599 = 53639U;
	static uint16_t x600 = UINT16_MAX;
	static int32_t t149 = -6;

    t149 = (x597>((x598!=x599)!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x601 = INT64_MAX;
	uint64_t x602 = 11LLU;
	uint16_t x603 = 66U;
	static int16_t x604 = INT16_MIN;
	int32_t t150 = -56695380;

    t150 = (x601>((x602!=x603)!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 28649355201827LLU;
	uint16_t x607 = 1827U;
	static uint8_t x608 = UINT8_MAX;
	static int32_t t151 = 112;

    t151 = (x605>((x606!=x607)!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = INT64_MIN;
	static int8_t x610 = -1;
	static int16_t x611 = -26;
	uint16_t x612 = 272U;
	int32_t t152 = -28;

    t152 = (x609>((x610!=x611)!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x614 = 31;
	int32_t x615 = -1;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = -996673156;

    t153 = (x613>((x614!=x615)!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 2U;
	uint8_t x619 = 43U;
	static int32_t x620 = INT32_MAX;
	volatile int32_t t154 = -47;

    t154 = (x617>((x618!=x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 94U;
	static uint32_t x622 = 2005509U;
	volatile int64_t x623 = INT64_MIN;
	uint32_t x624 = 102562065U;
	int32_t t155 = -54576189;

    t155 = (x621>((x622!=x623)!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 824610LL;
	volatile int64_t x626 = INT64_MAX;
	int64_t x627 = -1LL;
	int8_t x628 = 7;
	int32_t t156 = 3;

    t156 = (x625>((x626!=x627)!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = INT32_MAX;
	volatile int64_t x630 = INT64_MIN;
	int16_t x631 = 7;
	static int16_t x632 = -1558;
	volatile int32_t t157 = -21587;

    t157 = (x629>((x630!=x631)!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x633 = 0U;
	volatile uint64_t x634 = 82077282879LLU;
	volatile int64_t x635 = INT64_MIN;
	static uint8_t x636 = 3U;
	volatile int32_t t158 = -145;

    t158 = (x633>((x634!=x635)!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 3U;
	int16_t x638 = -1;
	int64_t x639 = INT64_MIN;
	int16_t x640 = -11;
	int32_t t159 = -610847;

    t159 = (x637>((x638!=x639)!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x642 = INT32_MAX;
	int32_t t160 = 34;

    t160 = (x641>((x642!=x643)!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MAX;
	uint8_t x646 = 1U;
	uint32_t x647 = 165930624U;
	int32_t x648 = INT32_MIN;
	volatile int32_t t161 = 3720;

    t161 = (x645>((x646!=x647)!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	uint64_t x651 = 8277417622773LLU;
	int64_t x652 = INT64_MAX;
	int32_t t162 = 0;

    t162 = (x649>((x650!=x651)!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x653 = INT16_MIN;
	int64_t x654 = INT64_MIN;
	int64_t x655 = INT64_MIN;

    t163 = (x653>((x654!=x655)!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 9LLU;
	volatile int64_t x658 = 46162928606LL;
	int64_t x659 = -97839496763449137LL;
	static int32_t x660 = INT32_MAX;
	volatile int32_t t164 = -3766942;

    t164 = (x657>((x658!=x659)!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MAX;
	int32_t x664 = -1269063;
	int32_t t165 = -1;

    t165 = (x661>((x662!=x663)!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x665 = 3U;
	static int16_t x667 = INT16_MAX;
	volatile int64_t x668 = INT64_MIN;
	volatile int32_t t166 = -947263;

    t166 = (x665>((x666!=x667)!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = 100497675LL;
	int8_t x672 = -1;
	int32_t t167 = -6;

    t167 = (x669>((x670!=x671)!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int32_t x674 = -408;
	int8_t x675 = 56;

    t168 = (x673>((x674!=x675)!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MAX;
	uint32_t x678 = 2034551459U;
	volatile int32_t t169 = 19994167;

    t169 = (x677>((x678!=x679)!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MIN;
	volatile int32_t x683 = INT32_MIN;
	int8_t x684 = INT8_MAX;
	int32_t t170 = 49945324;

    t170 = (x681>((x682!=x683)!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -343220810;
	uint64_t x687 = UINT64_MAX;
	uint16_t x688 = 518U;
	int32_t t171 = -3;

    t171 = (x685>((x686!=x687)!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 13799882U;
	int8_t x690 = 0;
	uint64_t x691 = 588810835891341LLU;
	int32_t x692 = 1400921;
	volatile int32_t t172 = -37370123;

    t172 = (x689>((x690!=x691)!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = UINT8_MAX;
	int64_t x695 = INT64_MIN;
	int64_t x696 = INT64_MIN;
	volatile int32_t t173 = -5592;

    t173 = (x693>((x694!=x695)!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -11;
	uint16_t x698 = 9U;
	static int8_t x699 = INT8_MIN;
	uint8_t x700 = 62U;

    t174 = (x697>((x698!=x699)!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x701 = 37;
	static uint32_t x702 = 2U;
	static int8_t x703 = 6;
	volatile int32_t x704 = INT32_MIN;
	volatile int32_t t175 = -145742380;

    t175 = (x701>((x702!=x703)!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	int32_t x706 = INT32_MIN;
	uint16_t x707 = UINT16_MAX;
	static int32_t x708 = 3;
	volatile int32_t t176 = 59347815;

    t176 = (x705>((x706!=x707)!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x712 = 1U;
	volatile int32_t t177 = 2;

    t177 = (x709>((x710!=x711)!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	int8_t x714 = INT8_MAX;
	volatile uint16_t x715 = UINT16_MAX;
	static int64_t x716 = -1LL;
	volatile int32_t t178 = -43;

    t178 = (x713>((x714!=x715)!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -1;
	int16_t x719 = INT16_MAX;
	volatile int32_t x720 = 275424771;
	static volatile int32_t t179 = -1468;

    t179 = (x717>((x718!=x719)!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = -253;
	int64_t x723 = INT64_MAX;
	int32_t t180 = -2520823;

    t180 = (x721>((x722!=x723)!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = INT64_MAX;
	static uint16_t x727 = 11U;
	int64_t x728 = INT64_MIN;
	volatile int32_t t181 = 0;

    t181 = (x725>((x726!=x727)!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 15U;
	volatile uint64_t x730 = 1884LLU;
	int64_t x731 = -1LL;
	int32_t x732 = -4257;
	volatile int32_t t182 = -63;

    t182 = (x729>((x730!=x731)!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -1;
	int8_t x734 = INT8_MAX;
	uint16_t x735 = 23899U;
	uint16_t x736 = 11441U;
	static int32_t t183 = 624;

    t183 = (x733>((x734!=x735)!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 3879069U;
	static int64_t x738 = INT64_MIN;
	int8_t x739 = INT8_MIN;
	uint32_t x740 = 15U;
	int32_t t184 = -128681498;

    t184 = (x737>((x738!=x739)!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 189U;
	int8_t x743 = 4;
	uint16_t x744 = UINT16_MAX;

    t185 = (x741>((x742!=x743)!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	int16_t x746 = -1;
	uint32_t x748 = 243399U;
	volatile int32_t t186 = 16;

    t186 = (x745>((x746!=x747)!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = UINT16_MAX;
	volatile int64_t x750 = INT64_MAX;
	int32_t x751 = INT32_MIN;
	uint64_t x752 = 5LLU;

    t187 = (x749>((x750!=x751)!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MIN;
	uint32_t x755 = 455U;
	static int16_t x756 = INT16_MIN;
	volatile int32_t t188 = -278;

    t188 = (x753>((x754!=x755)!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x757 = 3LLU;
	uint64_t x759 = 95LLU;
	int32_t x760 = -1;
	int32_t t189 = 39;

    t189 = (x757>((x758!=x759)!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 2896U;
	static int16_t x762 = -1;
	int64_t x764 = INT64_MIN;
	volatile int32_t t190 = -4;

    t190 = (x761>((x762!=x763)!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x767 = 49048365981653LLU;
	int32_t t191 = 13353807;

    t191 = (x765>((x766!=x767)!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 3940339747LLU;
	volatile int32_t x770 = INT32_MAX;
	int32_t x771 = INT32_MIN;
	int32_t t192 = -115744;

    t192 = (x769>((x770!=x771)!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x775 = UINT16_MAX;
	volatile uint64_t x776 = 3947389838256445684LLU;
	int32_t t193 = 295019248;

    t193 = (x773>((x774!=x775)!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1LL;
	uint64_t x778 = 11321009019LLU;
	volatile int8_t x779 = 0;
	int16_t x780 = 164;
	volatile int32_t t194 = 10384940;

    t194 = (x777>((x778!=x779)!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	uint8_t x782 = 1U;
	int32_t x783 = INT32_MIN;
	uint8_t x784 = UINT8_MAX;
	int32_t t195 = 147122;

    t195 = (x781>((x782!=x783)!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x785 = UINT32_MAX;
	int64_t x786 = INT64_MIN;
	uint8_t x787 = 13U;
	static int16_t x788 = 0;

    t196 = (x785>((x786!=x787)!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x790 = INT32_MIN;
	static volatile int8_t x791 = -1;
	volatile int32_t t197 = -56463;

    t197 = (x789>((x790!=x791)!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	uint32_t x794 = 94883U;
	int32_t x795 = 3566767;
	volatile int32_t x796 = -194;

    t198 = (x793>((x794!=x795)!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = INT8_MAX;
	uint8_t x798 = UINT8_MAX;
	static int32_t x800 = INT32_MAX;
	volatile int32_t t199 = -33;

    t199 = (x797>((x798!=x799)!=x800));

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

