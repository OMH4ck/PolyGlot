
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

int8_t x4 = 1;
static int32_t x10 = INT32_MAX;
static int32_t x19 = INT32_MIN;
int32_t x20 = -1;
static int64_t x28 = INT64_MIN;
uint16_t x37 = 12U;
uint32_t x44 = 235791834U;
int64_t t13 = 2306960090LL;
volatile int32_t x57 = 1;
volatile int16_t x64 = INT16_MAX;
static volatile int16_t x65 = -1;
volatile int32_t t16 = 44906975;
int16_t x74 = 2;
static int8_t x90 = INT8_MAX;
int64_t t23 = 3155768343151251LL;
uint32_t x103 = UINT32_MAX;
int32_t x104 = INT32_MAX;
volatile int16_t x107 = INT16_MIN;
static uint16_t x108 = UINT16_MAX;
uint32_t x113 = UINT32_MAX;
static int8_t x116 = 38;
static uint64_t x118 = 870421535723378LLU;
int16_t x120 = -1;
int32_t x128 = -1;
volatile int8_t x131 = INT8_MIN;
int8_t x138 = 31;
int32_t x139 = 16575;
int16_t x142 = INT16_MIN;
int8_t x145 = INT8_MIN;
static int64_t x151 = INT64_MIN;
int64_t x160 = -1LL;
uint16_t x161 = 10665U;
volatile int32_t t40 = 37593484;
int64_t x174 = INT64_MIN;
int32_t t43 = -138147;
uint8_t x179 = 1U;
static int32_t t44 = 449531;
int8_t x181 = -6;
volatile int32_t t45 = 3;
uint32_t x185 = 274211475U;
int16_t x192 = -1;
uint16_t x195 = 0U;
int32_t t48 = -233141;
volatile uint8_t x210 = UINT8_MAX;
int32_t x213 = INT32_MIN;
uint32_t x225 = 44895U;
volatile uint32_t t56 = 1U;
volatile int8_t x234 = -7;
int64_t x235 = -1LL;
int32_t x242 = -796;
volatile int32_t t60 = -54;
int8_t x250 = -1;
static volatile int64_t x253 = INT64_MIN;
int64_t x262 = INT64_MAX;
int32_t t65 = 1687227;
int32_t t66 = 1;
volatile uint16_t x272 = 380U;
static volatile uint64_t x275 = UINT64_MAX;
uint64_t x276 = 1776275927137LLU;
int8_t x280 = 8;
uint64_t x281 = 73LLU;
volatile uint64_t t70 = 11LLU;
int32_t x291 = INT32_MIN;
int16_t x311 = -7;
uint32_t x314 = UINT32_MAX;
int8_t x322 = 0;
static volatile uint64_t t80 = 25516883LLU;
int64_t x332 = -1LL;
uint32_t x336 = 37405432U;
int32_t x338 = -1;
int16_t x344 = -79;
static int8_t x347 = -49;
uint16_t x349 = 57U;
volatile int64_t t88 = INT64_MAX;
uint8_t x365 = 1U;
int32_t x370 = INT32_MIN;
int32_t x377 = 20780532;
volatile int8_t x378 = -17;
int32_t t95 = 49813251;
int8_t x385 = INT8_MIN;
uint64_t x386 = UINT64_MAX;
int16_t x388 = -1;
int16_t x389 = 2;
int64_t x392 = 6LL;
static int8_t x393 = INT8_MIN;
int16_t x395 = INT16_MIN;
int16_t x401 = INT16_MIN;
int8_t x409 = 0;
int64_t x413 = INT64_MAX;
int16_t x424 = INT16_MIN;
uint64_t x425 = 5173128LLU;
uint64_t t106 = 170438563LLU;
int32_t x432 = 499009550;
volatile uint16_t x433 = UINT16_MAX;
uint64_t x437 = UINT64_MAX;
volatile uint64_t t109 = UINT64_MAX;
static volatile int32_t t111 = 61057;
static volatile int8_t x460 = INT8_MAX;
int16_t x462 = -1;
static volatile int64_t x465 = 1704134LL;
int8_t x469 = -1;
uint64_t x471 = 5LLU;
int8_t x472 = -1;
int64_t x475 = INT64_MAX;
int8_t x476 = INT8_MAX;
uint64_t x482 = 75697012509065LLU;
static int32_t t120 = 421483;
static int32_t x489 = -1100;
int16_t x490 = INT16_MIN;
static volatile int32_t t122 = 1155;
int8_t x496 = INT8_MIN;
int64_t x497 = INT64_MAX;
static int8_t x506 = 4;
int64_t x511 = INT64_MIN;
int64_t t127 = INT64_MIN;
int64_t x521 = 1948583011LL;
volatile uint32_t x523 = 3349U;
volatile int32_t x532 = INT32_MIN;
volatile int64_t x539 = 151010810LL;
static int32_t t135 = -15;
static uint8_t x546 = UINT8_MAX;
int16_t x550 = INT16_MIN;
int32_t t137 = -110747891;
int64_t x558 = -3998347658468561LL;
int64_t x564 = -1LL;
static int32_t t140 = -781;
int16_t x566 = INT16_MIN;
int64_t x572 = -1LL;
uint32_t x580 = 42U;
volatile int16_t x583 = 94;
static int32_t x590 = 223314475;
static volatile int64_t x591 = INT64_MIN;
static int16_t x593 = -1;
volatile uint8_t x595 = 0U;
int64_t x599 = -3420573713680LL;
static int64_t x603 = INT64_MIN;
uint16_t x605 = 212U;
uint32_t x623 = 347166994U;
int64_t x625 = 290663LL;
uint64_t x628 = 140814106564026LLU;
int64_t t156 = 40249849868876LL;
volatile int64_t x629 = 468283836842330746LL;
uint32_t x631 = 280290754U;
int8_t x634 = INT8_MIN;
uint32_t x635 = 295288487U;
uint32_t x636 = 350U;
static uint16_t x637 = 688U;
volatile uint64_t x638 = 990727671325444LLU;
volatile int16_t x639 = INT16_MIN;
static volatile int32_t t159 = 1;
volatile int64_t t161 = -917586275LL;
uint16_t x649 = UINT16_MAX;
volatile int32_t t169 = -245;
volatile int32_t x682 = INT32_MIN;
int8_t x691 = -10;
static volatile int8_t x697 = INT8_MIN;
int16_t x698 = INT16_MIN;
volatile int64_t x704 = INT64_MIN;
int16_t x705 = INT16_MIN;
int8_t x711 = -1;
int16_t x712 = 3215;
int64_t x726 = INT64_MAX;
int64_t x729 = -1LL;
int16_t x734 = -1;
int32_t x736 = INT32_MIN;
volatile int64_t x744 = -1LL;
volatile int32_t t185 = 17301195;
int16_t x745 = INT16_MAX;
uint32_t x747 = UINT32_MAX;
volatile uint8_t x748 = 3U;
uint64_t x750 = UINT64_MAX;
int8_t x752 = INT8_MAX;
uint64_t x754 = 266774LLU;
int32_t x756 = 16;
volatile int32_t t188 = -571;
uint8_t x757 = UINT8_MAX;
uint32_t x759 = 1U;
uint16_t x765 = 29U;
int32_t x768 = -86767;
volatile int32_t x769 = -1;
uint32_t x771 = 186U;
volatile int64_t x772 = -1LL;
volatile uint64_t t193 = 110245221233LLU;
int16_t x778 = -1;
int16_t x782 = 26;
volatile uint64_t t196 = 11799938738LLU;
uint8_t x795 = 21U;
static volatile int8_t x797 = INT8_MIN;
static volatile uint32_t x800 = 186U;


void f0(void) {
    	volatile uint16_t x1 = 21813U;
	static int16_t x2 = -1;
	int64_t x3 = INT64_MIN;
	static volatile int32_t t0 = -7;

    t0 = (x1*((x2<=x3)<=x4));

    if (t0 != 21813) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -505250;
	int16_t x6 = INT16_MIN;
	int8_t x7 = -20;
	static int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = -158;

    t1 = (x5*((x6<=x7)<=x8));

    if (t1 != -505250) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -63;
	int64_t x11 = -479LL;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 1;

    t2 = (x9*((x10<=x11)<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 20;
	volatile uint8_t x14 = UINT8_MAX;
	uint32_t x15 = 0U;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 3;

    t3 = (x13*((x14<=x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 43211612U;
	int8_t x18 = -13;
	uint32_t t4 = 76U;

    t4 = (x17*((x18<=x19)<=x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -1;
	static int16_t x22 = INT16_MAX;
	static int32_t x23 = INT32_MIN;
	uint32_t x24 = 76U;
	volatile int32_t t5 = 84231981;

    t5 = (x21*((x22<=x23)<=x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	volatile uint8_t x26 = UINT8_MAX;
	static volatile int32_t x27 = INT32_MAX;
	int32_t t6 = -1;

    t6 = (x25*((x26<=x27)<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 47LLU;
	int64_t x30 = INT64_MIN;
	int64_t x31 = 662598431LL;
	volatile uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 50944608549837LLU;

    t7 = (x29*((x30<=x31)<=x32));

    if (t7 != 47LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	uint8_t x34 = 117U;
	int32_t x35 = INT32_MIN;
	volatile int32_t x36 = -714;
	int64_t t8 = -9607664098LL;

    t8 = (x33*((x34<=x35)<=x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MIN;
	uint8_t x39 = 11U;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -2464;

    t9 = (x37*((x38<=x39)<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	static int8_t x42 = -1;
	volatile int8_t x43 = 60;
	volatile int64_t t10 = INT64_MIN;

    t10 = (x41*((x42<=x43)<=x44));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 48U;
	int8_t x46 = INT8_MAX;
	int64_t x47 = INT64_MAX;
	int32_t x48 = -5190;
	static volatile int32_t t11 = -276;

    t11 = (x45*((x46<=x47)<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -7037;
	int32_t x50 = -152975;
	static int64_t x51 = 230LL;
	static int8_t x52 = -31;
	static int32_t t12 = -118;

    t12 = (x49*((x50<=x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 42738LL;
	uint64_t x54 = 59LLU;
	int32_t x55 = INT32_MIN;
	volatile int8_t x56 = -7;

    t13 = (x53*((x54<=x55)<=x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MAX;
	uint32_t x59 = 150328U;
	static uint8_t x60 = 102U;
	volatile int32_t t14 = -54762;

    t14 = (x57*((x58<=x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MAX;
	volatile int32_t t15 = -32305277;

    t15 = (x61*((x62<=x63)<=x64));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = -1;
	uint64_t x67 = UINT64_MAX;
	uint32_t x68 = 673356010U;

    t16 = (x65*((x66<=x67)<=x68));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	uint32_t x70 = 5U;
	static uint16_t x71 = 0U;
	int16_t x72 = INT16_MAX;
	volatile int32_t t17 = 476577;

    t17 = (x69*((x70<=x71)<=x72));

    if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	uint8_t x75 = 17U;
	static int16_t x76 = INT16_MIN;
	int32_t t18 = 269450;

    t18 = (x73*((x74<=x75)<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = -1;
	uint64_t x78 = 4808760416853855314LLU;
	uint16_t x79 = 3506U;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -263084;

    t19 = (x77*((x78<=x79)<=x80));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = INT64_MIN;
	int32_t x82 = INT32_MAX;
	volatile int32_t x83 = INT32_MAX;
	static int8_t x84 = INT8_MIN;
	int64_t t20 = -950LL;

    t20 = (x81*((x82<=x83)<=x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 26521U;
	int32_t x86 = 17062311;
	int16_t x87 = 21;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -194336196;

    t21 = (x85*((x86<=x87)<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MAX;
	int8_t x91 = INT8_MIN;
	static uint16_t x92 = UINT16_MAX;
	static volatile int64_t t22 = INT64_MAX;

    t22 = (x89*((x90<=x91)<=x92));

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -88220LL;
	int8_t x94 = -1;
	uint8_t x95 = 5U;
	uint16_t x96 = 621U;

    t23 = (x93*((x94<=x95)<=x96));

    if (t23 != -88220LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = -24LL;
	int64_t x98 = INT64_MAX;
	int64_t x99 = 3906588446625560LL;
	volatile uint32_t x100 = UINT32_MAX;
	int64_t t24 = -1LL;

    t24 = (x97*((x98<=x99)<=x100));

    if (t24 != -24LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 281167822912817172LL;
	volatile uint64_t x102 = 3939LLU;
	int64_t t25 = 979164845LL;

    t25 = (x101*((x102<=x103)<=x104));

    if (t25 != 281167822912817172LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = -1;
	static int8_t x106 = 1;
	static int32_t t26 = 15533;

    t26 = (x105*((x106<=x107)<=x108));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	uint8_t x110 = 1U;
	static uint16_t x111 = 15260U;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 12630;

    t27 = (x109*((x110<=x111)<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x114 = -1;
	volatile int64_t x115 = INT64_MIN;
	volatile uint32_t t28 = UINT32_MAX;

    t28 = (x113*((x114<=x115)<=x116));

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 1;
	int16_t x119 = INT16_MIN;
	static volatile int32_t t29 = -41;

    t29 = (x117*((x118<=x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x121 = INT32_MIN;
	uint64_t x122 = UINT64_MAX;
	static uint8_t x123 = UINT8_MAX;
	static uint32_t x124 = 19454U;
	int32_t t30 = INT32_MIN;

    t30 = (x121*((x122<=x123)<=x124));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = INT64_MIN;
	uint64_t x126 = 368144LLU;
	static int8_t x127 = 0;
	int64_t t31 = 1046164LL;

    t31 = (x125*((x126<=x127)<=x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	uint32_t x130 = 13189U;
	static volatile uint32_t x132 = 67U;
	int64_t t32 = INT64_MIN;

    t32 = (x129*((x130<=x131)<=x132));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 3;
	static uint32_t x134 = 437220264U;
	int16_t x135 = 0;
	volatile uint8_t x136 = 80U;
	int32_t t33 = 902580;

    t33 = (x133*((x134<=x135)<=x136));

    if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	uint64_t x140 = 452LLU;
	static int32_t t34 = INT32_MIN;

    t34 = (x137*((x138<=x139)<=x140));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	int64_t x143 = INT64_MAX;
	volatile uint64_t x144 = 5867125778419787LLU;
	int64_t t35 = 315LL;

    t35 = (x141*((x142<=x143)<=x144));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x146 = INT16_MIN;
	int64_t x147 = -3LL;
	volatile uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = -2;

    t36 = (x145*((x146<=x147)<=x148));

    if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -1;
	uint8_t x150 = 15U;
	uint16_t x152 = 46U;
	static volatile int32_t t37 = -127105;

    t37 = (x149*((x150<=x151)<=x152));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x153 = UINT64_MAX;
	static uint64_t x154 = 1269739LLU;
	volatile int64_t x155 = -3633LL;
	int32_t x156 = 2744;
	uint64_t t38 = UINT64_MAX;

    t38 = (x153*((x154<=x155)<=x156));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = 569;
	volatile int16_t x158 = 1637;
	uint32_t x159 = 0U;
	int32_t t39 = -199920;

    t39 = (x157*((x158<=x159)<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = INT32_MIN;
	volatile uint64_t x163 = 10397934415LLU;
	int8_t x164 = INT8_MIN;

    t40 = (x161*((x162<=x163)<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = -3132276891406LL;
	uint32_t x166 = 12932U;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MAX;
	volatile int64_t t41 = 180LL;

    t41 = (x165*((x166<=x167)<=x168));

    if (t41 != -3132276891406LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	static uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MIN;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t42 = 27603;

    t42 = (x169*((x170<=x171)<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -1161;
	int8_t x175 = -1;
	uint8_t x176 = 15U;

    t43 = (x173*((x174<=x175)<=x176));

    if (t43 != -1161) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	uint16_t x178 = 3U;
	static int8_t x180 = -1;

    t44 = (x177*((x178<=x179)<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = INT32_MIN;
	int16_t x183 = 2023;
	int32_t x184 = INT32_MAX;

    t45 = (x181*((x182<=x183)<=x184));

    if (t45 != -6) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = 7627131080880LLU;
	static int64_t x187 = 892726LL;
	uint8_t x188 = 10U;
	uint32_t t46 = 14227541U;

    t46 = (x185*((x186<=x187)<=x188));

    if (t46 != 274211475U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = 836LL;
	uint8_t x190 = 25U;
	volatile int32_t x191 = INT32_MIN;
	int64_t t47 = -3695LL;

    t47 = (x189*((x190<=x191)<=x192));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	uint8_t x194 = 2U;
	int16_t x196 = INT16_MIN;

    t48 = (x193*((x194<=x195)<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MAX;
	uint16_t x198 = 151U;
	int16_t x199 = -282;
	int64_t x200 = 10974LL;
	static volatile int32_t t49 = 3265;

    t49 = (x197*((x198<=x199)<=x200));

    if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = -44LL;
	int16_t x202 = -7;
	volatile int8_t x203 = -1;
	uint32_t x204 = 1004U;
	int64_t t50 = 1LL;

    t50 = (x201*((x202<=x203)<=x204));

    if (t50 != -44LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MAX;
	static volatile int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t51 = 912706;

    t51 = (x205*((x206<=x207)<=x208));

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -7;
	int64_t x211 = 4018995LL;
	uint32_t x212 = UINT32_MAX;
	int32_t t52 = -394683;

    t52 = (x209*((x210<=x211)<=x212));

    if (t52 != -7) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x214 = 75U;
	int8_t x215 = -1;
	int8_t x216 = 1;
	volatile int32_t t53 = INT32_MIN;

    t53 = (x213*((x214<=x215)<=x216));

    if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = -1;
	int8_t x218 = 2;
	int8_t x219 = -1;
	int16_t x220 = INT16_MIN;
	int32_t t54 = -54590;

    t54 = (x217*((x218<=x219)<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = -1;
	uint32_t x222 = 930U;
	volatile int16_t x223 = INT16_MIN;
	int64_t x224 = -83076169118044801LL;
	volatile int32_t t55 = -30;

    t55 = (x221*((x222<=x223)<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x226 = 1;
	int16_t x227 = 12;
	uint64_t x228 = 29LLU;

    t56 = (x225*((x226<=x227)<=x228));

    if (t56 != 44895U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	volatile int16_t x230 = 2295;
	int32_t x231 = 16416686;
	volatile int32_t x232 = -302867;
	static int32_t t57 = -3981074;

    t57 = (x229*((x230<=x231)<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = 113U;
	volatile int32_t x236 = INT32_MAX;
	int32_t t58 = -163879632;

    t58 = (x233*((x234<=x235)<=x236));

    if (t58 != 113) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	volatile int16_t x238 = -1;
	int16_t x239 = 5228;
	int32_t x240 = -5;
	volatile int32_t t59 = 6;

    t59 = (x237*((x238<=x239)<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = UINT16_MAX;
	uint64_t x243 = 64097LLU;
	static int8_t x244 = -1;

    t60 = (x241*((x242<=x243)<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 53;
	int8_t x246 = 6;
	uint32_t x247 = 7U;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 29383;

    t61 = (x245*((x246<=x247)<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -2;
	uint64_t x251 = 1912666558096042LLU;
	volatile uint32_t x252 = 107644479U;
	int32_t t62 = -199;

    t62 = (x249*((x250<=x251)<=x252));

    if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = 59U;
	static int8_t x255 = INT8_MIN;
	volatile int64_t x256 = INT64_MAX;
	int64_t t63 = INT64_MIN;

    t63 = (x253*((x254<=x255)<=x256));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x257 = UINT64_MAX;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = -1;
	uint64_t t64 = 304872742649LLU;

    t64 = (x257*((x258<=x259)<=x260));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = INT8_MAX;

    t65 = (x261*((x262<=x263)<=x264));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	uint64_t x266 = 821740990109895901LLU;
	volatile uint8_t x267 = 1U;
	uint16_t x268 = UINT16_MAX;

    t66 = (x265*((x266<=x267)<=x268));

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	uint32_t x270 = 444648208U;
	int8_t x271 = -24;
	int32_t t67 = -1361635;

    t67 = (x269*((x270<=x271)<=x272));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1607812745782LL;
	int64_t x274 = INT64_MAX;
	int64_t t68 = 8551129330995LL;

    t68 = (x273*((x274<=x275)<=x276));

    if (t68 != -1607812745782LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	static volatile int16_t x278 = INT16_MIN;
	uint32_t x279 = UINT32_MAX;
	int32_t t69 = INT32_MIN;

    t69 = (x277*((x278<=x279)<=x280));

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x282 = UINT16_MAX;
	volatile uint16_t x283 = 13U;
	uint16_t x284 = UINT16_MAX;

    t70 = (x281*((x282<=x283)<=x284));

    if (t70 != 73LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 26U;
	int16_t x286 = -8791;
	int8_t x287 = INT8_MAX;
	int64_t x288 = INT64_MAX;
	int32_t t71 = 566691302;

    t71 = (x285*((x286<=x287)<=x288));

    if (t71 != 26) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = INT8_MIN;
	static int16_t x290 = INT16_MIN;
	volatile uint8_t x292 = 10U;
	volatile int32_t t72 = 548;

    t72 = (x289*((x290<=x291)<=x292));

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x293 = UINT32_MAX;
	uint8_t x294 = 34U;
	int64_t x295 = -1LL;
	int64_t x296 = -1LL;
	uint32_t t73 = 3U;

    t73 = (x293*((x294<=x295)<=x296));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x297 = 0LLU;
	uint64_t x298 = UINT64_MAX;
	static int8_t x299 = -1;
	int64_t x300 = INT64_MAX;
	volatile uint64_t t74 = 303792014747416760LLU;

    t74 = (x297*((x298<=x299)<=x300));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 2U;
	int64_t x302 = 0LL;
	uint8_t x303 = 35U;
	uint64_t x304 = 618340753LLU;
	volatile int32_t t75 = -29331;

    t75 = (x301*((x302<=x303)<=x304));

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	static int8_t x306 = INT8_MIN;
	static int16_t x307 = INT16_MIN;
	volatile int64_t x308 = -1LL;
	volatile uint32_t t76 = 9U;

    t76 = (x305*((x306<=x307)<=x308));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -12;
	int32_t x310 = -23704;
	uint32_t x312 = 16734U;
	int32_t t77 = 1;

    t77 = (x309*((x310<=x311)<=x312));

    if (t77 != -12) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x313 = -1;
	int64_t x315 = -1LL;
	uint16_t x316 = 1925U;
	volatile int32_t t78 = 3368;

    t78 = (x313*((x314<=x315)<=x316));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = -1LL;
	int32_t x318 = INT32_MAX;
	int32_t x319 = INT32_MAX;
	int64_t x320 = 0LL;
	int64_t t79 = -225537267930LL;

    t79 = (x317*((x318<=x319)<=x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x321 = 57846193397132257LLU;
	volatile int64_t x323 = -1LL;
	int64_t x324 = -1LL;

    t80 = (x321*((x322<=x323)<=x324));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	volatile int32_t x326 = INT32_MAX;
	int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MAX;
	static volatile int32_t t81 = 1;

    t81 = (x325*((x326<=x327)<=x328));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x329 = UINT16_MAX;
	uint32_t x330 = 3389U;
	int16_t x331 = -1;
	static volatile int32_t t82 = 649;

    t82 = (x329*((x330<=x331)<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint32_t x333 = UINT32_MAX;
	int64_t x334 = INT64_MIN;
	int64_t x335 = 681464LL;
	volatile uint32_t t83 = UINT32_MAX;

    t83 = (x333*((x334<=x335)<=x336));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1LL;
	int64_t x339 = -857864LL;
	uint8_t x340 = 101U;
	volatile int64_t t84 = 51958315332188098LL;

    t84 = (x337*((x338<=x339)<=x340));

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	int8_t x342 = INT8_MIN;
	uint64_t x343 = UINT64_MAX;
	static volatile int64_t t85 = -2594639896LL;

    t85 = (x341*((x342<=x343)<=x344));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = INT16_MAX;
	int64_t x346 = -275LL;
	int32_t x348 = 7070;
	int32_t t86 = -1870;

    t86 = (x345*((x346<=x347)<=x348));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = INT8_MIN;
	uint32_t x351 = 425035U;
	static int32_t x352 = 966;
	int32_t t87 = 465188;

    t87 = (x349*((x350<=x351)<=x352));

    if (t87 != 57) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	static int8_t x354 = INT8_MAX;
	static int64_t x355 = INT64_MIN;
	static int16_t x356 = 117;

    t88 = (x353*((x354<=x355)<=x356));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MAX;
	uint64_t x358 = 120010753181333493LLU;
	static int32_t x359 = -1407;
	int64_t x360 = INT64_MIN;
	int32_t t89 = -6009;

    t89 = (x357*((x358<=x359)<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -435492001550LL;
	uint8_t x362 = 67U;
	volatile int32_t x363 = INT32_MIN;
	int32_t x364 = 47940;
	int64_t t90 = -222LL;

    t90 = (x361*((x362<=x363)<=x364));

    if (t90 != -435492001550LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = 11LL;
	int32_t x367 = INT32_MAX;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = 151;

    t91 = (x365*((x366<=x367)<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MAX;
	int16_t x371 = 69;
	int64_t x372 = -1LL;
	volatile int32_t t92 = -28863920;

    t92 = (x369*((x370<=x371)<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 0;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	volatile int64_t x376 = INT64_MAX;
	int32_t t93 = 54;

    t93 = (x373*((x374<=x375)<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x379 = INT32_MAX;
	uint32_t x380 = 1U;
	int32_t t94 = -607547;

    t94 = (x377*((x378<=x379)<=x380));

    if (t94 != 20780532) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MAX;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = UINT32_MAX;
	int64_t x384 = INT64_MIN;

    t95 = (x381*((x382<=x383)<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x387 = INT64_MIN;
	int32_t t96 = 1842435;

    t96 = (x385*((x386<=x387)<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x390 = 617311181241036LLU;
	static int32_t x391 = INT32_MIN;
	volatile int32_t t97 = -349;

    t97 = (x389*((x390<=x391)<=x392));

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = 22312U;
	uint32_t x396 = 3U;
	int32_t t98 = 126;

    t98 = (x393*((x394<=x395)<=x396));

    if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	volatile int32_t x398 = -1;
	int16_t x399 = INT16_MAX;
	volatile uint32_t x400 = 72511010U;
	int32_t t99 = -45;

    t99 = (x397*((x398<=x399)<=x400));

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x402 = INT8_MIN;
	volatile uint32_t x403 = 44456028U;
	volatile uint8_t x404 = 0U;
	volatile int32_t t100 = -212132151;

    t100 = (x401*((x402<=x403)<=x404));

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = 0;
	uint32_t x406 = UINT32_MAX;
	static int64_t x407 = -20585LL;
	int16_t x408 = INT16_MAX;
	volatile int32_t t101 = 1;

    t101 = (x405*((x406<=x407)<=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x410 = 16U;
	static uint8_t x411 = 78U;
	int64_t x412 = 49803LL;
	volatile int32_t t102 = 1;

    t102 = (x409*((x410<=x411)<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x414 = -1LL;
	uint16_t x415 = 24663U;
	volatile uint64_t x416 = 490657361387562LLU;
	int64_t t103 = INT64_MAX;

    t103 = (x413*((x414<=x415)<=x416));

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = 1360;
	int16_t x418 = 922;
	int32_t x419 = INT32_MIN;
	static int32_t x420 = -40387719;
	volatile int32_t t104 = 309;

    t104 = (x417*((x418<=x419)<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = INT32_MIN;
	static int64_t x422 = -1LL;
	int8_t x423 = INT8_MAX;
	volatile int32_t t105 = 0;

    t105 = (x421*((x422<=x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x426 = -1;
	uint8_t x427 = UINT8_MAX;
	int16_t x428 = -412;

    t106 = (x425*((x426<=x427)<=x428));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	static int16_t x430 = INT16_MIN;
	volatile uint32_t x431 = 9247105U;
	static int32_t t107 = 541920;

    t107 = (x429*((x430<=x431)<=x432));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x434 = 16225523775LLU;
	volatile int32_t x435 = -16516942;
	int32_t x436 = INT32_MIN;
	int32_t t108 = -62718;

    t108 = (x433*((x434<=x435)<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = INT64_MAX;
	int32_t x439 = -1;
	static volatile uint32_t x440 = 0U;

    t109 = (x437*((x438<=x439)<=x440));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x441 = -1;
	uint32_t x442 = 1229U;
	static uint64_t x443 = UINT64_MAX;
	uint32_t x444 = 1735094U;
	int32_t t110 = -410960327;

    t110 = (x441*((x442<=x443)<=x444));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 87U;
	int8_t x446 = 14;
	int64_t x447 = 190842LL;
	uint8_t x448 = UINT8_MAX;

    t111 = (x445*((x446<=x447)<=x448));

    if (t111 != 87) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 16U;
	int16_t x450 = -1;
	volatile int32_t x451 = -1;
	static volatile int32_t x452 = -11598;
	int32_t t112 = -109251;

    t112 = (x449*((x450<=x451)<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	uint32_t x454 = UINT32_MAX;
	int32_t x455 = INT32_MIN;
	uint8_t x456 = 31U;
	uint64_t t113 = UINT64_MAX;

    t113 = (x453*((x454<=x455)<=x456));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1352144789LL;
	int32_t x458 = INT32_MIN;
	static int16_t x459 = -1;
	static volatile int64_t t114 = -20259373LL;

    t114 = (x457*((x458<=x459)<=x460));

    if (t114 != -1352144789LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -548;
	volatile uint8_t x463 = 3U;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t115 = -7;

    t115 = (x461*((x462<=x463)<=x464));

    if (t115 != -548) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = INT32_MIN;
	static uint64_t x467 = UINT64_MAX;
	int64_t x468 = INT64_MAX;
	volatile int64_t t116 = -1LL;

    t116 = (x465*((x466<=x467)<=x468));

    if (t116 != 1704134LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = INT8_MAX;
	int32_t t117 = 1;

    t117 = (x469*((x470<=x471)<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = UINT64_MAX;
	int16_t x474 = INT16_MIN;
	volatile uint64_t t118 = UINT64_MAX;

    t118 = (x473*((x474<=x475)<=x476));

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -12;
	int64_t x478 = INT64_MIN;
	int16_t x479 = 287;
	volatile int16_t x480 = INT16_MIN;
	volatile int32_t t119 = -1882847;

    t119 = (x477*((x478<=x479)<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MAX;
	int32_t x483 = INT32_MIN;
	uint16_t x484 = 15254U;

    t120 = (x481*((x482<=x483)<=x484));

    if (t120 != 127) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	uint64_t x486 = 521LLU;
	volatile int32_t x487 = INT32_MIN;
	int64_t x488 = INT64_MAX;
	volatile int64_t t121 = INT64_MIN;

    t121 = (x485*((x486<=x487)<=x488));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x491 = UINT16_MAX;
	uint32_t x492 = 8U;

    t122 = (x489*((x490<=x491)<=x492));

    if (t122 != -1100) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = -1014;
	int8_t x494 = -1;
	uint32_t x495 = UINT32_MAX;
	static int32_t t123 = -46;

    t123 = (x493*((x494<=x495)<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x498 = 51;
	int32_t x499 = 558;
	int8_t x500 = 45;
	static int64_t t124 = INT64_MAX;

    t124 = (x497*((x498<=x499)<=x500));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = INT32_MAX;
	static volatile uint8_t x502 = 0U;
	uint16_t x503 = 20850U;
	int8_t x504 = -1;
	volatile int32_t t125 = -28947866;

    t125 = (x501*((x502<=x503)<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x505 = UINT64_MAX;
	int64_t x507 = 57300548686221LL;
	uint8_t x508 = 0U;
	static uint64_t t126 = 27322842787602202LLU;

    t126 = (x505*((x506<=x507)<=x508));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	static int32_t x510 = 656508;
	volatile uint64_t x512 = 257785532LLU;

    t127 = (x509*((x510<=x511)<=x512));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = INT64_MIN;
	static uint32_t x514 = 70046U;
	uint32_t x515 = 91247U;
	uint32_t x516 = UINT32_MAX;
	int64_t t128 = INT64_MIN;

    t128 = (x513*((x514<=x515)<=x516));

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = -5;
	uint16_t x518 = UINT16_MAX;
	int32_t x519 = INT32_MIN;
	int32_t x520 = -1;
	int32_t t129 = -4652672;

    t129 = (x517*((x518<=x519)<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = -1;
	uint64_t x524 = 524LLU;
	int64_t t130 = 15LL;

    t130 = (x521*((x522<=x523)<=x524));

    if (t130 != 1948583011LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1451800;
	static int64_t x526 = 53657LL;
	static int8_t x527 = INT8_MIN;
	int16_t x528 = -2;
	int32_t t131 = 2;

    t131 = (x525*((x526<=x527)<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1;
	int32_t x530 = -1;
	static int32_t x531 = INT32_MIN;
	int32_t t132 = 26;

    t132 = (x529*((x530<=x531)<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = -1;
	int8_t x534 = INT8_MIN;
	volatile uint8_t x535 = UINT8_MAX;
	uint32_t x536 = UINT32_MAX;
	volatile int32_t t133 = 64394569;

    t133 = (x533*((x534<=x535)<=x536));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 4214731U;
	int64_t x538 = INT64_MIN;
	static uint8_t x540 = UINT8_MAX;
	uint32_t t134 = 720603395U;

    t134 = (x537*((x538<=x539)<=x540));

    if (t134 != 4214731U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = INT16_MIN;
	int32_t x542 = INT32_MIN;
	uint32_t x543 = UINT32_MAX;
	static int8_t x544 = 52;

    t135 = (x541*((x542<=x543)<=x544));

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = -14;
	int64_t x547 = INT64_MAX;
	uint32_t x548 = UINT32_MAX;
	volatile int32_t t136 = 0;

    t136 = (x545*((x546<=x547)<=x548));

    if (t136 != -14) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MIN;
	int64_t x551 = INT64_MIN;
	static uint8_t x552 = 8U;

    t137 = (x549*((x550<=x551)<=x552));

    if (t137 != -32768) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = -28;
	int32_t x554 = -20;
	static int16_t x555 = -1;
	volatile uint32_t x556 = 45U;
	static volatile int32_t t138 = -3269;

    t138 = (x553*((x554<=x555)<=x556));

    if (t138 != -28) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MAX;
	int64_t x559 = 19711LL;
	int8_t x560 = INT8_MIN;
	int32_t t139 = 6;

    t139 = (x557*((x558<=x559)<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 0U;
	int64_t x562 = INT64_MIN;
	uint16_t x563 = 1402U;

    t140 = (x561*((x562<=x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -13533;
	static volatile int8_t x567 = INT8_MIN;
	int16_t x568 = INT16_MIN;
	static int32_t t141 = -147;

    t141 = (x565*((x566<=x567)<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = -1LL;
	static int16_t x570 = -1;
	int32_t x571 = INT32_MAX;
	volatile int64_t t142 = -3896352968150572166LL;

    t142 = (x569*((x570<=x571)<=x572));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x573 = INT8_MIN;
	int32_t x574 = -4934;
	int64_t x575 = INT64_MAX;
	volatile int16_t x576 = INT16_MIN;
	volatile int32_t t143 = -15028891;

    t143 = (x573*((x574<=x575)<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = -3661983;
	volatile int8_t x578 = -1;
	uint32_t x579 = 6481U;
	int32_t t144 = 1724433;

    t144 = (x577*((x578<=x579)<=x580));

    if (t144 != -3661983) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 744185273733833LLU;
	uint16_t x582 = UINT16_MAX;
	int64_t x584 = INT64_MIN;
	static uint64_t t145 = 65493LLU;

    t145 = (x581*((x582<=x583)<=x584));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	int64_t x586 = INT64_MIN;
	int8_t x587 = INT8_MIN;
	static int32_t x588 = INT32_MAX;
	int32_t t146 = -12076435;

    t146 = (x585*((x586<=x587)<=x588));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = INT64_MAX;
	static uint8_t x592 = 3U;
	volatile int64_t t147 = INT64_MAX;

    t147 = (x589*((x590<=x591)<=x592));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = -4;
	int64_t x596 = 2412192883838LL;
	static volatile int32_t t148 = -210;

    t148 = (x593*((x594<=x595)<=x596));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = INT64_MAX;
	uint16_t x598 = UINT16_MAX;
	static volatile int64_t x600 = -56807396847LL;
	volatile int64_t t149 = -155LL;

    t149 = (x597*((x598<=x599)<=x600));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	volatile uint16_t x602 = UINT16_MAX;
	static uint32_t x604 = 1977U;
	volatile int32_t t150 = -6528680;

    t150 = (x601*((x602<=x603)<=x604));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x606 = 12229;
	static uint64_t x607 = 1417143806205304226LLU;
	int16_t x608 = INT16_MIN;
	int32_t t151 = -27255707;

    t151 = (x605*((x606<=x607)<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x609 = UINT16_MAX;
	volatile int16_t x610 = -423;
	volatile uint16_t x611 = 44U;
	uint16_t x612 = 20U;
	int32_t t152 = -1978826;

    t152 = (x609*((x610<=x611)<=x612));

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = -1;
	volatile uint16_t x614 = 0U;
	uint32_t x615 = 420U;
	uint64_t x616 = UINT64_MAX;
	static int32_t t153 = -3;

    t153 = (x613*((x614<=x615)<=x616));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 483667148329305617LLU;
	static uint16_t x618 = 3U;
	static int8_t x619 = INT8_MIN;
	static volatile int16_t x620 = INT16_MAX;
	volatile uint64_t t154 = 3891435LLU;

    t154 = (x617*((x618<=x619)<=x620));

    if (t154 != 483667148329305617LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	int8_t x622 = -8;
	uint32_t x624 = UINT32_MAX;
	int32_t t155 = 6;

    t155 = (x621*((x622<=x623)<=x624));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x626 = 2;
	int64_t x627 = 15LL;

    t156 = (x625*((x626<=x627)<=x628));

    if (t156 != 290663LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = -2;
	int32_t x632 = -3626619;
	int64_t t157 = 133535696191169LL;

    t157 = (x629*((x630<=x631)<=x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1287397;
	static int32_t t158 = 349265131;

    t158 = (x633*((x634<=x635)<=x636));

    if (t158 != -1287397) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x640 = INT8_MIN;

    t159 = (x637*((x638<=x639)<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x641 = UINT16_MAX;
	volatile int16_t x642 = -4;
	int16_t x643 = 12;
	volatile uint64_t x644 = 15853987849362LLU;
	volatile int32_t t160 = 3;

    t160 = (x641*((x642<=x643)<=x644));

    if (t160 != 65535) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = INT64_MIN;
	uint8_t x646 = UINT8_MAX;
	int32_t x647 = -1;
	int64_t x648 = INT64_MIN;

    t161 = (x645*((x646<=x647)<=x648));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x650 = 12;
	volatile uint16_t x651 = UINT16_MAX;
	int16_t x652 = INT16_MAX;
	volatile int32_t t162 = -1630;

    t162 = (x649*((x650<=x651)<=x652));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = 4;
	int8_t x654 = INT8_MAX;
	uint64_t x655 = 829691651708206582LLU;
	int8_t x656 = INT8_MAX;
	int32_t t163 = -1891054;

    t163 = (x653*((x654<=x655)<=x656));

    if (t163 != 4) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	uint32_t x658 = 29129549U;
	uint32_t x659 = 3079U;
	static int64_t x660 = 443084573216130LL;
	static int32_t t164 = -1;

    t164 = (x657*((x658<=x659)<=x660));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	uint16_t x662 = 8674U;
	uint8_t x663 = 3U;
	volatile int64_t x664 = -649081LL;
	volatile int32_t t165 = -10;

    t165 = (x661*((x662<=x663)<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	uint64_t x666 = 661LLU;
	volatile uint16_t x667 = 1037U;
	static volatile int64_t x668 = INT64_MAX;
	volatile int32_t t166 = 1;

    t166 = (x665*((x666<=x667)<=x668));

    if (t166 != -128) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = INT32_MIN;
	int8_t x670 = INT8_MIN;
	int32_t x671 = INT32_MAX;
	int8_t x672 = -15;
	int32_t t167 = -22385;

    t167 = (x669*((x670<=x671)<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 221LLU;
	int16_t x674 = INT16_MIN;
	static uint64_t x675 = UINT64_MAX;
	int64_t x676 = INT64_MIN;
	volatile uint64_t t168 = 11555LLU;

    t168 = (x673*((x674<=x675)<=x676));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	volatile int8_t x678 = -20;
	int32_t x679 = INT32_MIN;
	uint64_t x680 = UINT64_MAX;

    t169 = (x677*((x678<=x679)<=x680));

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = 281913067962979LL;
	int64_t x683 = 4900165LL;
	int64_t x684 = INT64_MIN;
	volatile int64_t t170 = -186194056860982LL;

    t170 = (x681*((x682<=x683)<=x684));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = INT8_MIN;
	static int8_t x686 = INT8_MAX;
	int8_t x687 = INT8_MAX;
	volatile uint64_t x688 = UINT64_MAX;
	volatile int32_t t171 = -8480002;

    t171 = (x685*((x686<=x687)<=x688));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x689 = -2;
	int16_t x690 = INT16_MIN;
	uint32_t x692 = 464243U;
	volatile int32_t t172 = -232268;

    t172 = (x689*((x690<=x691)<=x692));

    if (t172 != -2) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	uint16_t x694 = 0U;
	int16_t x695 = -24;
	volatile int16_t x696 = INT16_MAX;
	int32_t t173 = -829;

    t173 = (x693*((x694<=x695)<=x696));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x699 = 28U;
	uint64_t x700 = 20182807651LLU;
	static volatile int32_t t174 = 97904;

    t174 = (x697*((x698<=x699)<=x700));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = UINT64_MAX;
	static int8_t x702 = INT8_MIN;
	volatile uint8_t x703 = 3U;
	static uint64_t t175 = 91402LLU;

    t175 = (x701*((x702<=x703)<=x704));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = 57088065745073347LL;
	volatile int64_t x707 = INT64_MIN;
	static int32_t x708 = INT32_MIN;
	volatile int32_t t176 = 6989234;

    t176 = (x705*((x706<=x707)<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = 7;
	uint16_t x710 = 8U;
	volatile int32_t t177 = -369;

    t177 = (x709*((x710<=x711)<=x712));

    if (t177 != 7) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = UINT64_MAX;
	int8_t x714 = INT8_MIN;
	int16_t x715 = 3497;
	static volatile int32_t x716 = -1;
	uint64_t t178 = 138501194179332268LLU;

    t178 = (x713*((x714<=x715)<=x716));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = INT16_MAX;
	int64_t x718 = -282361379831249426LL;
	int8_t x719 = INT8_MIN;
	int16_t x720 = INT16_MIN;
	int32_t t179 = 1;

    t179 = (x717*((x718<=x719)<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MAX;
	static uint64_t x722 = 6113279627LLU;
	int32_t x723 = -1;
	uint8_t x724 = 86U;
	volatile int32_t t180 = -58229;

    t180 = (x721*((x722<=x723)<=x724));

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MIN;
	int32_t x727 = 492440107;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t181 = INT32_MIN;

    t181 = (x725*((x726<=x727)<=x728));

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = -611561325004LL;
	int64_t x731 = 87911763815054LL;
	int64_t x732 = INT64_MAX;
	int64_t t182 = -3938790164LL;

    t182 = (x729*((x730<=x731)<=x732));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -14;
	int32_t x735 = -1;
	static volatile int32_t t183 = -4094;

    t183 = (x733*((x734<=x735)<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	volatile uint8_t x738 = 1U;
	int16_t x739 = INT16_MIN;
	int32_t x740 = -24704;
	volatile int64_t t184 = -56880374652993LL;

    t184 = (x737*((x738<=x739)<=x740));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = UINT16_MAX;
	uint64_t x742 = 30600429125LLU;
	int8_t x743 = INT8_MIN;

    t185 = (x741*((x742<=x743)<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x746 = INT8_MIN;
	volatile int32_t t186 = 120465522;

    t186 = (x745*((x746<=x747)<=x748));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x749 = UINT8_MAX;
	volatile int64_t x751 = INT64_MIN;
	volatile int32_t t187 = 4;

    t187 = (x749*((x750<=x751)<=x752));

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = UINT8_MAX;
	volatile int16_t x755 = -114;

    t188 = (x753*((x754<=x755)<=x756));

    if (t188 != 255) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x758 = UINT32_MAX;
	uint8_t x760 = UINT8_MAX;
	int32_t t189 = -285647;

    t189 = (x757*((x758<=x759)<=x760));

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	int16_t x762 = -1;
	uint8_t x763 = UINT8_MAX;
	static int16_t x764 = -1;
	volatile int64_t t190 = 41812161164340LL;

    t190 = (x761*((x762<=x763)<=x764));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x766 = 7U;
	volatile int32_t x767 = -1;
	static volatile int32_t t191 = -12;

    t191 = (x765*((x766<=x767)<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint8_t x770 = 5U;
	int32_t t192 = -4293850;

    t192 = (x769*((x770<=x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 32275914LLU;
	static volatile uint8_t x774 = UINT8_MAX;
	uint8_t x775 = 1U;
	volatile int64_t x776 = INT64_MIN;

    t193 = (x773*((x774<=x775)<=x776));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 53;
	uint32_t x779 = 1299157821U;
	volatile int32_t x780 = INT32_MIN;
	int32_t t194 = 101;

    t194 = (x777*((x778<=x779)<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x781 = INT8_MIN;
	int8_t x783 = INT8_MIN;
	static uint16_t x784 = UINT16_MAX;
	static volatile int32_t t195 = -1;

    t195 = (x781*((x782<=x783)<=x784));

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 57270489LLU;
	uint32_t x786 = 3303U;
	int64_t x787 = 4038076LL;
	static int8_t x788 = -4;

    t196 = (x785*((x786<=x787)<=x788));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	static volatile int64_t x790 = 24108745893LL;
	int8_t x791 = 0;
	volatile int8_t x792 = -1;
	volatile int32_t t197 = -1;

    t197 = (x789*((x790<=x791)<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	uint32_t x794 = UINT32_MAX;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = 117667537;

    t198 = (x793*((x794<=x795)<=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x798 = UINT32_MAX;
	static int8_t x799 = INT8_MIN;
	volatile int32_t t199 = -230114;

    t199 = (x797*((x798<=x799)<=x800));

    if (t199 != -128) { NG(); } else { ; }
	
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

