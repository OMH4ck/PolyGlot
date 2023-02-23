
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

int8_t x1 = 1;
int16_t x3 = -1;
static int16_t x5 = -10;
static volatile int8_t x23 = -6;
int32_t t5 = -487888809;
int32_t t6 = 2;
volatile int32_t t8 = 0;
int16_t x39 = -1;
int16_t x42 = -1;
uint8_t x46 = 63U;
volatile int8_t x54 = -1;
uint8_t x57 = 101U;
volatile int16_t x60 = INT16_MIN;
volatile int32_t t14 = -127;
uint16_t x63 = UINT16_MAX;
int64_t x67 = 33011359081804LL;
int32_t x72 = -1;
volatile int32_t t17 = -6;
int8_t x79 = -3;
uint64_t x84 = UINT64_MAX;
static uint64_t x89 = 15466670168826285LLU;
uint16_t x92 = 1U;
volatile int8_t x98 = -1;
volatile int64_t x105 = -1LL;
uint16_t x110 = UINT16_MAX;
volatile int8_t x112 = INT8_MIN;
int32_t x115 = INT32_MIN;
static volatile int32_t t27 = 1;
static int64_t x117 = -4635288LL;
int8_t x121 = INT8_MIN;
static volatile int32_t t29 = -89;
int8_t x126 = -1;
volatile uint16_t x128 = 448U;
static volatile int32_t t33 = -1;
uint64_t x144 = UINT64_MAX;
static int64_t x148 = INT64_MIN;
uint32_t x154 = 2777250U;
int32_t t37 = 76666;
volatile uint32_t x159 = 298606U;
volatile int32_t t39 = -13618;
int16_t x165 = -16;
uint8_t x174 = UINT8_MAX;
uint64_t x175 = 1550810960542733LLU;
uint16_t x183 = 27U;
int64_t x184 = 1019648LL;
static int32_t t45 = 3625620;
int16_t x189 = 0;
static int8_t x190 = INT8_MIN;
static volatile int16_t x204 = 0;
uint32_t x213 = 141U;
volatile int8_t x215 = INT8_MIN;
uint16_t x220 = 105U;
int16_t x222 = INT16_MIN;
int64_t x229 = -61LL;
uint32_t x234 = UINT32_MAX;
volatile int16_t x236 = INT16_MIN;
volatile uint8_t x237 = 57U;
static int64_t x249 = 0LL;
volatile int64_t x250 = -144937036498LL;
static int16_t x256 = -1;
int64_t x257 = INT64_MAX;
volatile int16_t x264 = -1;
int32_t t63 = -1;
static int8_t x266 = -1;
int64_t x272 = -42585627LL;
uint32_t x281 = 84359607U;
static int32_t x289 = -1;
volatile int64_t x292 = INT64_MIN;
static int32_t t70 = -99425418;
uint16_t x295 = 613U;
int32_t x299 = INT32_MIN;
uint8_t x300 = UINT8_MAX;
int64_t x310 = INT64_MIN;
static volatile int8_t x316 = INT8_MIN;
volatile int8_t x320 = INT8_MIN;
volatile int32_t x322 = INT32_MIN;
volatile int32_t t77 = 311367276;
static int16_t x326 = -1;
uint16_t x327 = UINT16_MAX;
static volatile int32_t t80 = 19251;
uint8_t x342 = 37U;
static volatile uint64_t x344 = 2713LLU;
int32_t x346 = INT32_MAX;
int8_t x352 = -1;
volatile int32_t t84 = -72323984;
uint32_t x356 = 16223742U;
int8_t x357 = INT8_MIN;
int32_t t86 = -189018561;
int16_t x364 = INT16_MIN;
int64_t x366 = -1LL;
static volatile uint16_t x368 = 9242U;
volatile int8_t x370 = 4;
int64_t x372 = INT64_MIN;
volatile int32_t t89 = -1745262;
volatile int8_t x375 = INT8_MAX;
int32_t x380 = INT32_MAX;
static int8_t x382 = -1;
volatile int32_t t92 = 902436991;
int32_t x389 = INT32_MIN;
uint64_t x390 = UINT64_MAX;
uint64_t x392 = 2454416675678691104LLU;
int64_t x395 = 836884610770LL;
int32_t t96 = 0;
static volatile uint16_t x405 = 344U;
int8_t x407 = INT8_MIN;
uint64_t x408 = UINT64_MAX;
int64_t x410 = INT64_MIN;
static uint8_t x415 = 0U;
static int32_t x416 = -260;
int64_t x420 = 75838743376219LL;
volatile int32_t t101 = -13;
static int16_t x424 = -21;
volatile uint32_t x427 = 957323U;
int16_t x430 = 3374;
uint8_t x433 = 74U;
int64_t x440 = -1LL;
int8_t x443 = -1;
int32_t t109 = 1;
uint64_t x464 = 173842795841810LLU;
volatile int32_t t112 = -32918087;
uint64_t x466 = 525303509LLU;
uint32_t x475 = 6710329U;
static int8_t x478 = INT8_MAX;
int8_t x480 = INT8_MAX;
int64_t x484 = INT64_MIN;
int32_t x485 = INT32_MIN;
static uint16_t x486 = 12135U;
int64_t x489 = INT64_MAX;
int32_t t122 = -3108043;
int64_t x506 = -412915038512928LL;
int8_t x520 = 2;
int32_t t128 = -211279;
int16_t x530 = INT16_MAX;
volatile int32_t t129 = -22314495;
static volatile uint64_t x535 = UINT64_MAX;
int32_t x543 = 127339;
uint16_t x547 = 7706U;
static volatile int32_t t133 = -132;
int32_t x549 = INT32_MIN;
int32_t x551 = INT32_MIN;
uint8_t x554 = 1U;
static volatile uint16_t x559 = UINT16_MAX;
static int8_t x560 = -1;
int32_t t136 = -127;
uint64_t x563 = 7439812089852LLU;
volatile uint8_t x566 = UINT8_MAX;
int32_t t138 = -1;
volatile int32_t x579 = -1;
volatile int16_t x580 = 14;
static int32_t x582 = INT32_MIN;
int8_t x583 = INT8_MIN;
volatile int8_t x588 = INT8_MIN;
static uint8_t x589 = 0U;
uint32_t x592 = 2286775U;
static volatile uint16_t x593 = 188U;
uint64_t x598 = UINT64_MAX;
uint64_t x601 = 3197LLU;
int16_t x611 = INT16_MIN;
static int16_t x612 = 7;
volatile int16_t x616 = INT16_MIN;
volatile int32_t x617 = INT32_MAX;
static uint16_t x618 = 0U;
int64_t x621 = INT64_MIN;
static int32_t x623 = -1;
static int64_t x633 = INT64_MAX;
volatile int16_t x635 = INT16_MAX;
int32_t x639 = INT32_MIN;
volatile int16_t x643 = INT16_MIN;
int16_t x659 = -1;
static int32_t x660 = INT32_MIN;
int8_t x670 = INT8_MIN;
uint64_t x671 = 433038213569725LLU;
static volatile int32_t t162 = 165109;
static volatile uint64_t x677 = 13417249347458LLU;
int32_t x679 = -3593094;
static volatile int8_t x682 = 7;
volatile uint32_t x697 = 24715361U;
int32_t t168 = 148;
volatile int32_t x705 = -29759288;
uint8_t x707 = 7U;
int64_t x720 = -235920210197456022LL;
static int16_t x724 = INT16_MAX;
uint32_t x725 = UINT32_MAX;
volatile int32_t t173 = -906165412;
volatile int32_t t174 = -765180;
static int64_t x742 = -1LL;
static uint8_t x743 = UINT8_MAX;
int32_t t176 = 13015;
uint16_t x745 = UINT16_MAX;
static volatile uint64_t x751 = UINT64_MAX;
volatile int8_t x758 = 0;
int8_t x766 = -1;
volatile int16_t x774 = INT16_MAX;
static int64_t x781 = -1LL;
int16_t x786 = -1;
static int64_t x787 = -1LL;
int32_t t187 = 3095897;
volatile uint8_t x794 = 35U;
int32_t x796 = INT32_MIN;
static uint64_t x806 = UINT64_MAX;
int32_t x810 = -304254675;
volatile int32_t t194 = -1;
int32_t x819 = -141;
volatile int32_t t195 = -2476081;
uint16_t x823 = 15768U;
uint64_t x827 = 31155LLU;
static int8_t x834 = 1;


void f0(void) {
    	static int16_t x2 = -1;
	volatile uint8_t x4 = 92U;
	volatile int32_t t0 = 604;

    t0 = (x1>((x2!=x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = UINT32_MAX;
	int64_t x7 = INT64_MAX;
	uint16_t x8 = 91U;
	volatile int32_t t1 = -2032;

    t1 = (x5>((x6!=x7)+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int8_t x10 = 16;
	uint64_t x11 = 327791836445277LLU;
	uint32_t x12 = 102550U;
	volatile int32_t t2 = 1;

    t2 = (x9>((x10!=x11)+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x13 = UINT8_MAX;
	int32_t x14 = INT32_MAX;
	uint32_t x15 = 22858U;
	static int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 57;

    t3 = (x13>((x14!=x15)+x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint8_t x18 = 3U;
	int32_t x19 = INT32_MIN;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = -228856;

    t4 = (x17>((x18!=x19)+x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 0;
	static uint8_t x22 = 127U;
	uint8_t x24 = UINT8_MAX;

    t5 = (x21>((x22!=x23)+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	int16_t x26 = -1;
	int64_t x27 = -1LL;
	uint16_t x28 = UINT16_MAX;

    t6 = (x25>((x26!=x27)+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	static uint8_t x30 = 1U;
	static int32_t x31 = INT32_MIN;
	int64_t x32 = 0LL;
	int32_t t7 = 1065;

    t7 = (x29>((x30!=x31)+x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = 1154U;
	volatile int32_t x34 = INT32_MIN;
	int64_t x35 = INT64_MIN;
	int16_t x36 = INT16_MIN;

    t8 = (x33>((x34!=x35)+x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = 1203179629U;
	int16_t x38 = INT16_MAX;
	int64_t x40 = 14954LL;
	volatile int32_t t9 = -14;

    t9 = (x37>((x38!=x39)+x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	uint32_t x43 = 383721652U;
	int16_t x44 = -332;
	volatile int32_t t10 = -158198539;

    t10 = (x41>((x42!=x43)+x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = 719374589139481554LLU;
	int8_t x47 = -1;
	uint32_t x48 = 663971578U;
	volatile int32_t t11 = -461493;

    t11 = (x45>((x46!=x47)+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	volatile uint64_t x50 = UINT64_MAX;
	uint64_t x51 = UINT64_MAX;
	uint32_t x52 = 8469U;
	static volatile int32_t t12 = 599;

    t12 = (x49>((x50!=x51)+x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -14;
	int16_t x55 = INT16_MIN;
	uint64_t x56 = 3540251LLU;
	int32_t t13 = 455;

    t13 = (x53>((x54!=x55)+x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = -9;
	int32_t x59 = 35130211;

    t14 = (x57>((x58!=x59)+x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MAX;
	volatile int8_t x62 = -1;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -92525;

    t15 = (x61>((x62!=x63)+x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MAX;
	volatile int64_t x66 = INT64_MIN;
	static uint32_t x68 = 1569U;
	static volatile int32_t t16 = 19;

    t16 = (x65>((x66!=x67)+x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = INT32_MAX;
	int32_t x70 = -1;
	uint8_t x71 = UINT8_MAX;

    t17 = (x69>((x70!=x71)+x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = -1LL;
	static int64_t x75 = -1LL;
	int64_t x76 = -178391950691327194LL;
	int32_t t18 = -26033346;

    t18 = (x73>((x74!=x75)+x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	int32_t x78 = INT32_MIN;
	int16_t x80 = 8;
	int32_t t19 = -61;

    t19 = (x77>((x78!=x79)+x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	int64_t x82 = INT64_MIN;
	static int16_t x83 = -1;
	volatile int32_t t20 = -1;

    t20 = (x81>((x82!=x83)+x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	int8_t x87 = INT8_MAX;
	uint8_t x88 = 1U;
	int32_t t21 = 8;

    t21 = (x85>((x86!=x87)+x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x90 = INT16_MAX;
	int16_t x91 = -1;
	volatile int32_t t22 = -1;

    t22 = (x89>((x90!=x91)+x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = -1;
	volatile uint64_t x99 = UINT64_MAX;
	uint16_t x100 = 2U;
	volatile int32_t t23 = 29;

    t23 = (x97>((x98!=x99)+x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x101 = INT64_MIN;
	int64_t x102 = -1792489207375616881LL;
	volatile uint32_t x103 = 114U;
	static int64_t x104 = -1LL;
	static volatile int32_t t24 = -6;

    t24 = (x101>((x102!=x103)+x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x106 = -1;
	int32_t x107 = INT32_MIN;
	int8_t x108 = -2;
	volatile int32_t t25 = -3;

    t25 = (x105>((x106!=x107)+x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x109 = -413194446LL;
	static uint64_t x111 = UINT64_MAX;
	volatile int32_t t26 = -368152;

    t26 = (x109>((x110!=x111)+x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x113 = INT16_MIN;
	static uint16_t x114 = UINT16_MAX;
	volatile uint8_t x116 = 1U;

    t27 = (x113>((x114!=x115)+x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x118 = UINT32_MAX;
	static uint16_t x119 = 90U;
	volatile uint8_t x120 = 11U;
	static int32_t t28 = -7232;

    t28 = (x117>((x118!=x119)+x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x122 = 9;
	static volatile uint32_t x123 = UINT32_MAX;
	volatile uint32_t x124 = 82679U;

    t29 = (x121>((x122!=x123)+x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x125 = 7138U;
	uint64_t x127 = 1LLU;
	static volatile int32_t t30 = -12518929;

    t30 = (x125>((x126!=x127)+x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x129 = 1700537921698246241LLU;
	uint16_t x130 = UINT16_MAX;
	volatile int64_t x131 = INT64_MIN;
	static int16_t x132 = INT16_MIN;
	int32_t t31 = 253;

    t31 = (x129>((x130!=x131)+x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = UINT32_MAX;
	volatile uint32_t x134 = UINT32_MAX;
	int32_t x135 = 129471750;
	uint8_t x136 = 14U;
	static int32_t t32 = 1920858;

    t32 = (x133>((x134!=x135)+x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x137 = -174119885190419471LL;
	volatile int64_t x138 = -1LL;
	uint64_t x139 = UINT64_MAX;
	static int32_t x140 = -13638409;

    t33 = (x137>((x138!=x139)+x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = INT8_MIN;
	int64_t x142 = -146961LL;
	volatile int8_t x143 = 60;
	int32_t t34 = -36;

    t34 = (x141>((x142!=x143)+x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x145 = INT16_MAX;
	uint16_t x146 = UINT16_MAX;
	uint32_t x147 = 618520929U;
	int32_t t35 = 2242837;

    t35 = (x145>((x146!=x147)+x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = 1;
	uint16_t x150 = UINT16_MAX;
	int16_t x151 = -1;
	int32_t x152 = -10859;
	int32_t t36 = 1;

    t36 = (x149>((x150!=x151)+x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x153 = 2;
	int16_t x155 = INT16_MAX;
	int8_t x156 = 0;

    t37 = (x153>((x154!=x155)+x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = UINT64_MAX;
	volatile int16_t x158 = INT16_MIN;
	uint16_t x160 = 1719U;
	int32_t t38 = -2;

    t38 = (x157>((x158!=x159)+x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = -1;
	int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MIN;
	int32_t x164 = -5401572;

    t39 = (x161>((x162!=x163)+x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x166 = -1;
	int8_t x167 = -1;
	int8_t x168 = INT8_MIN;
	static int32_t t40 = 1;

    t40 = (x165>((x166!=x167)+x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = 90U;
	int64_t x170 = INT64_MAX;
	uint8_t x171 = 1U;
	int64_t x172 = INT64_MIN;
	volatile int32_t t41 = 140540372;

    t41 = (x169>((x170!=x171)+x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = INT64_MIN;
	static int64_t x176 = 1679598951LL;
	volatile int32_t t42 = -385231896;

    t42 = (x173>((x174!=x175)+x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x177 = 3739991U;
	uint16_t x178 = 462U;
	static volatile int16_t x179 = 73;
	uint16_t x180 = 5789U;
	static int32_t t43 = 20221;

    t43 = (x177>((x178!=x179)+x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x181 = 32U;
	int8_t x182 = INT8_MIN;
	int32_t t44 = -1;

    t44 = (x181>((x182!=x183)+x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x185 = -19;
	static int32_t x186 = INT32_MIN;
	static int8_t x187 = 1;
	uint64_t x188 = UINT64_MAX;

    t45 = (x185>((x186!=x187)+x188));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x191 = -1;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t46 = -28;

    t46 = (x189>((x190!=x191)+x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x193 = 1U;
	int8_t x194 = INT8_MIN;
	static int16_t x195 = 11;
	int32_t x196 = -1;
	int32_t t47 = 165;

    t47 = (x193>((x194!=x195)+x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x197 = 270LL;
	int8_t x198 = 13;
	int16_t x199 = -365;
	uint16_t x200 = UINT16_MAX;
	int32_t t48 = 273;

    t48 = (x197>((x198!=x199)+x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = -1;
	int32_t x202 = 3170;
	uint16_t x203 = 30U;
	static volatile int32_t t49 = -4435;

    t49 = (x201>((x202!=x203)+x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = -1;
	volatile int16_t x210 = 1;
	int64_t x211 = 4347708029107399LL;
	int64_t x212 = INT64_MIN;
	int32_t t50 = 63;

    t50 = (x209>((x210!=x211)+x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x214 = 281;
	int8_t x216 = INT8_MIN;
	volatile int32_t t51 = -181;

    t51 = (x213>((x214!=x215)+x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = -1LL;
	volatile int64_t x218 = -44359924994581LL;
	static int64_t x219 = INT64_MIN;
	volatile int32_t t52 = -2692924;

    t52 = (x217>((x218!=x219)+x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = -1;
	int32_t x223 = 3143;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t53 = 31098602;

    t53 = (x221>((x222!=x223)+x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x225 = -1;
	uint64_t x226 = UINT64_MAX;
	uint16_t x227 = 13U;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t54 = 38;

    t54 = (x225>((x226!=x227)+x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x230 = -1;
	static int32_t x231 = 4022810;
	int16_t x232 = -1;
	static volatile int32_t t55 = -51;

    t55 = (x229>((x230!=x231)+x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = INT16_MIN;
	volatile int32_t x235 = INT32_MAX;
	int32_t t56 = 1731126;

    t56 = (x233>((x234!=x235)+x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x238 = -29297695;
	static int64_t x239 = INT64_MIN;
	int64_t x240 = 28215051LL;
	static volatile int32_t t57 = 7427410;

    t57 = (x237>((x238!=x239)+x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = -1;
	static volatile uint64_t x242 = 397LLU;
	int8_t x243 = -2;
	int16_t x244 = INT16_MIN;
	int32_t t58 = 148466472;

    t58 = (x241>((x242!=x243)+x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x245 = 484LL;
	static volatile int32_t x246 = 1;
	static int64_t x247 = -6725535LL;
	int8_t x248 = 57;
	static int32_t t59 = -4026;

    t59 = (x245>((x246!=x247)+x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x251 = -11;
	int32_t x252 = -1;
	int32_t t60 = -7333112;

    t60 = (x249>((x250!=x251)+x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = 1989632;
	uint8_t x254 = UINT8_MAX;
	uint16_t x255 = UINT16_MAX;
	static int32_t t61 = 3;

    t61 = (x253>((x254!=x255)+x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x258 = -1;
	int8_t x259 = -13;
	volatile int32_t x260 = -1;
	volatile int32_t t62 = 1429;

    t62 = (x257>((x258!=x259)+x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = INT32_MAX;
	int8_t x262 = 1;
	int8_t x263 = INT8_MIN;

    t63 = (x261>((x262!=x263)+x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x265 = 61U;
	uint64_t x267 = 6189188076317587090LLU;
	uint64_t x268 = UINT64_MAX;
	int32_t t64 = -9;

    t64 = (x265>((x266!=x267)+x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x269 = 12U;
	int8_t x270 = -1;
	int8_t x271 = -1;
	volatile int32_t t65 = 2186;

    t65 = (x269>((x270!=x271)+x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = -1;
	volatile int8_t x274 = -12;
	uint16_t x275 = 5996U;
	int32_t x276 = 3;
	volatile int32_t t66 = -26;

    t66 = (x273>((x274!=x275)+x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = -1;
	int64_t x278 = -2958268292073780160LL;
	int64_t x279 = INT64_MAX;
	volatile uint64_t x280 = 391182502943146617LLU;
	static int32_t t67 = 525;

    t67 = (x277>((x278!=x279)+x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x282 = UINT64_MAX;
	int32_t x283 = -1;
	int32_t x284 = INT32_MAX;
	volatile int32_t t68 = 939;

    t68 = (x281>((x282!=x283)+x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x285 = INT64_MAX;
	static int8_t x286 = -13;
	static int16_t x287 = INT16_MIN;
	int8_t x288 = 0;
	volatile int32_t t69 = 3623416;

    t69 = (x285>((x286!=x287)+x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x290 = INT64_MAX;
	static volatile int16_t x291 = 53;

    t70 = (x289>((x290!=x291)+x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x293 = INT8_MAX;
	int64_t x294 = -655340497854672LL;
	volatile uint64_t x296 = 289367607470218265LLU;
	volatile int32_t t71 = -4;

    t71 = (x293>((x294!=x295)+x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	int32_t t72 = -820;

    t72 = (x297>((x298!=x299)+x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x301 = UINT16_MAX;
	uint32_t x302 = UINT32_MAX;
	volatile int32_t x303 = -267938;
	int16_t x304 = 1;
	volatile int32_t t73 = 17400;

    t73 = (x301>((x302!=x303)+x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = INT8_MIN;
	int64_t x311 = 265991359210744LL;
	static volatile int32_t x312 = INT32_MIN;
	volatile int32_t t74 = 83402331;

    t74 = (x309>((x310!=x311)+x312));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = -21;
	uint16_t x314 = 27358U;
	int16_t x315 = 0;
	static volatile int32_t t75 = 1919703;

    t75 = (x313>((x314!=x315)+x316));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x317 = INT8_MIN;
	static int16_t x318 = INT16_MIN;
	int32_t x319 = -1;
	static volatile int32_t t76 = 4;

    t76 = (x317>((x318!=x319)+x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x321 = -489471855LL;
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;

    t77 = (x321>((x322!=x323)+x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = INT16_MIN;
	static uint16_t x328 = 6290U;
	int32_t t78 = -59;

    t78 = (x325>((x326!=x327)+x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x329 = UINT8_MAX;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = 0;
	uint64_t x332 = 154599LLU;
	int32_t t79 = -159997265;

    t79 = (x329>((x330!=x331)+x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = INT64_MAX;
	int8_t x334 = INT8_MIN;
	volatile uint32_t x335 = 16417238U;
	static int8_t x336 = 1;

    t80 = (x333>((x334!=x335)+x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x337 = 1U;
	int32_t x338 = INT32_MAX;
	static int8_t x339 = INT8_MIN;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t81 = -524574972;

    t81 = (x337>((x338!=x339)+x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x343 = 1;
	volatile int32_t t82 = -376;

    t82 = (x341>((x342!=x343)+x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x345 = 120U;
	static int8_t x347 = -1;
	int16_t x348 = INT16_MIN;
	volatile int32_t t83 = -5394363;

    t83 = (x345>((x346!=x347)+x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x349 = INT16_MAX;
	int16_t x350 = INT16_MIN;
	volatile uint32_t x351 = 5U;

    t84 = (x349>((x350!=x351)+x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = INT32_MAX;
	static uint32_t x354 = 0U;
	int8_t x355 = -1;
	int32_t t85 = -62616441;

    t85 = (x353>((x354!=x355)+x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x358 = -1;
	static volatile int64_t x359 = -1LL;
	int8_t x360 = 14;

    t86 = (x357>((x358!=x359)+x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = INT64_MIN;
	int32_t x362 = -480385925;
	int64_t x363 = 790511894757LL;
	int32_t t87 = 370262521;

    t87 = (x361>((x362!=x363)+x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x365 = UINT16_MAX;
	int16_t x367 = INT16_MIN;
	int32_t t88 = -22;

    t88 = (x365>((x366!=x367)+x368));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x369 = 5311U;
	int64_t x371 = 963886924946LL;

    t89 = (x369>((x370!=x371)+x372));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x373 = INT32_MIN;
	volatile int8_t x374 = -1;
	static int64_t x376 = -283822206710LL;
	int32_t t90 = -50;

    t90 = (x373>((x374!=x375)+x376));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x377 = INT32_MIN;
	volatile int8_t x378 = INT8_MIN;
	int8_t x379 = INT8_MIN;
	int32_t t91 = 3;

    t91 = (x377>((x378!=x379)+x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	int8_t x383 = INT8_MIN;
	static uint32_t x384 = 2113028U;

    t92 = (x381>((x382!=x383)+x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x385 = UINT64_MAX;
	int32_t x386 = -77442381;
	volatile int32_t x387 = 0;
	volatile uint64_t x388 = 249557978LLU;
	volatile int32_t t93 = -36;

    t93 = (x385>((x386!=x387)+x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x391 = INT16_MIN;
	volatile int32_t t94 = -1941;

    t94 = (x389>((x390!=x391)+x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MAX;
	int8_t x396 = -1;
	volatile int32_t t95 = 11;

    t95 = (x393>((x394!=x395)+x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x397 = 403639U;
	static int32_t x398 = INT32_MIN;
	int16_t x399 = -22;
	int16_t x400 = 4651;

    t96 = (x397>((x398!=x399)+x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x401 = INT32_MIN;
	volatile int64_t x402 = 552480908926455889LL;
	int32_t x403 = INT32_MAX;
	volatile uint8_t x404 = 0U;
	volatile int32_t t97 = -7;

    t97 = (x401>((x402!=x403)+x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x406 = INT64_MAX;
	static volatile int32_t t98 = -300574;

    t98 = (x405>((x406!=x407)+x408));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint32_t x409 = 9213693U;
	int32_t x411 = -382398;
	static int64_t x412 = INT64_MIN;
	static int32_t t99 = -9;

    t99 = (x409>((x410!=x411)+x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x413 = -1;
	uint16_t x414 = UINT16_MAX;
	static int32_t t100 = 315;

    t100 = (x413>((x414!=x415)+x416));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x417 = 8602U;
	uint64_t x418 = 964LLU;
	uint32_t x419 = 257168U;

    t101 = (x417>((x418!=x419)+x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x421 = -1;
	int64_t x422 = 3657112LL;
	volatile uint64_t x423 = UINT64_MAX;
	int32_t t102 = -475635;

    t102 = (x421>((x422!=x423)+x424));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = 11;
	static uint16_t x426 = 10459U;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t103 = 27;

    t103 = (x425>((x426!=x427)+x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x429 = INT8_MIN;
	uint32_t x431 = 3936U;
	static volatile int16_t x432 = INT16_MIN;
	volatile int32_t t104 = 1576;

    t104 = (x429>((x430!=x431)+x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x434 = 60U;
	int16_t x435 = 533;
	int16_t x436 = -1;
	int32_t t105 = -171571;

    t105 = (x433>((x434!=x435)+x436));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x437 = UINT16_MAX;
	uint16_t x438 = 7181U;
	int16_t x439 = -1;
	volatile int32_t t106 = -245760272;

    t106 = (x437>((x438!=x439)+x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x441 = INT32_MIN;
	static uint8_t x442 = 101U;
	int32_t x444 = 1646056;
	volatile int32_t t107 = 301;

    t107 = (x441>((x442!=x443)+x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x445 = 184655871057040013LL;
	uint8_t x446 = 1U;
	volatile int64_t x447 = 52450LL;
	volatile int8_t x448 = INT8_MIN;
	int32_t t108 = 0;

    t108 = (x445>((x446!=x447)+x448));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = 1;
	int64_t x450 = INT64_MIN;
	uint16_t x451 = 5U;
	uint64_t x452 = UINT64_MAX;

    t109 = (x449>((x450!=x451)+x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = INT64_MIN;
	volatile uint8_t x454 = 6U;
	static int64_t x455 = INT64_MIN;
	int64_t x456 = INT64_MIN;
	volatile int32_t t110 = -19608;

    t110 = (x453>((x454!=x455)+x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x457 = 9LLU;
	static int8_t x458 = -12;
	volatile int32_t x459 = 577923089;
	volatile uint32_t x460 = UINT32_MAX;
	static int32_t t111 = -5132834;

    t111 = (x457>((x458!=x459)+x460));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = INT8_MIN;
	static int8_t x462 = -1;
	volatile int8_t x463 = INT8_MIN;

    t112 = (x461>((x462!=x463)+x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x465 = INT16_MIN;
	uint64_t x467 = 364182845852779LLU;
	int8_t x468 = 59;
	volatile int32_t t113 = 649008714;

    t113 = (x465>((x466!=x467)+x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x469 = 41U;
	static int8_t x470 = INT8_MIN;
	int8_t x471 = INT8_MIN;
	int8_t x472 = 2;
	int32_t t114 = 1;

    t114 = (x469>((x470!=x471)+x472));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = -39283380054064LL;
	static int32_t x474 = INT32_MAX;
	int8_t x476 = 28;
	volatile int32_t t115 = -40841708;

    t115 = (x473>((x474!=x475)+x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x477 = 76U;
	volatile int16_t x479 = 102;
	static int32_t t116 = 64743158;

    t116 = (x477>((x478!=x479)+x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x481 = 2667361308959132LLU;
	uint32_t x482 = 125850464U;
	uint64_t x483 = UINT64_MAX;
	volatile int32_t t117 = -125042;

    t117 = (x481>((x482!=x483)+x484));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x487 = UINT32_MAX;
	static uint16_t x488 = 0U;
	volatile int32_t t118 = 49105015;

    t118 = (x485>((x486!=x487)+x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x490 = INT64_MIN;
	int8_t x491 = -1;
	int8_t x492 = INT8_MIN;
	volatile int32_t t119 = 354;

    t119 = (x489>((x490!=x491)+x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x493 = 1856865LLU;
	uint8_t x494 = 5U;
	volatile int8_t x495 = -1;
	static int32_t x496 = -1;
	int32_t t120 = -421979204;

    t120 = (x493>((x494!=x495)+x496));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x497 = UINT16_MAX;
	static int8_t x498 = 44;
	int8_t x499 = INT8_MAX;
	uint32_t x500 = UINT32_MAX;
	int32_t t121 = 9756771;

    t121 = (x497>((x498!=x499)+x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MAX;
	uint16_t x503 = 22609U;
	int16_t x504 = 226;

    t122 = (x501>((x502!=x503)+x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = -1LL;
	int16_t x507 = INT16_MIN;
	int16_t x508 = INT16_MIN;
	int32_t t123 = 0;

    t123 = (x505>((x506!=x507)+x508));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x509 = 1006U;
	static int16_t x510 = INT16_MIN;
	int32_t x511 = -1231;
	uint8_t x512 = UINT8_MAX;
	int32_t t124 = -14730998;

    t124 = (x509>((x510!=x511)+x512));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x513 = 4U;
	static int16_t x514 = INT16_MIN;
	uint64_t x515 = 8749606983304516LLU;
	volatile int32_t x516 = INT32_MIN;
	volatile int32_t t125 = 253661;

    t125 = (x513>((x514!=x515)+x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x517 = INT16_MAX;
	int32_t x518 = 910248;
	uint32_t x519 = UINT32_MAX;
	volatile int32_t t126 = -138114;

    t126 = (x517>((x518!=x519)+x520));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = 1351;
	uint16_t x522 = UINT16_MAX;
	int32_t x523 = 49277025;
	int64_t x524 = -6521134027559LL;
	int32_t t127 = -118066;

    t127 = (x521>((x522!=x523)+x524));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x525 = 178610U;
	volatile int32_t x526 = 257348;
	static int32_t x527 = -158321578;
	int64_t x528 = INT64_MIN;

    t128 = (x525>((x526!=x527)+x528));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x529 = 21;
	int8_t x531 = -1;
	int16_t x532 = INT16_MIN;

    t129 = (x529>((x530!=x531)+x532));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x533 = 2095727U;
	static int8_t x534 = 1;
	int8_t x536 = INT8_MIN;
	volatile int32_t t130 = -492528841;

    t130 = (x533>((x534!=x535)+x536));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x537 = INT16_MIN;
	uint64_t x538 = UINT64_MAX;
	uint16_t x539 = 3505U;
	int8_t x540 = -1;
	static volatile int32_t t131 = 4891539;

    t131 = (x537>((x538!=x539)+x540));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x541 = INT8_MIN;
	int16_t x542 = INT16_MIN;
	int8_t x544 = -1;
	volatile int32_t t132 = 387427991;

    t132 = (x541>((x542!=x543)+x544));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x545 = 942722413450LLU;
	volatile int8_t x546 = INT8_MAX;
	int16_t x548 = -795;

    t133 = (x545>((x546!=x547)+x548));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x550 = 109;
	static volatile uint32_t x552 = 0U;
	int32_t t134 = 23;

    t134 = (x549>((x550!=x551)+x552));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x553 = 1U;
	uint16_t x555 = 1U;
	int16_t x556 = 2;
	int32_t t135 = -1710299;

    t135 = (x553>((x554!=x555)+x556));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x557 = 7787U;
	int16_t x558 = 3247;

    t136 = (x557>((x558!=x559)+x560));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x561 = 2461595015LL;
	int16_t x562 = INT16_MIN;
	int16_t x564 = INT16_MIN;
	int32_t t137 = -335023895;

    t137 = (x561>((x562!=x563)+x564));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x565 = INT8_MIN;
	static int32_t x567 = INT32_MAX;
	static uint64_t x568 = 962514731LLU;

    t138 = (x565>((x566!=x567)+x568));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x569 = INT16_MAX;
	int8_t x570 = 6;
	static uint32_t x571 = 18697U;
	int16_t x572 = -1;
	volatile int32_t t139 = 5685;

    t139 = (x569>((x570!=x571)+x572));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x573 = UINT64_MAX;
	volatile int8_t x574 = INT8_MAX;
	int16_t x575 = 1;
	uint32_t x576 = 64354U;
	volatile int32_t t140 = 0;

    t140 = (x573>((x574!=x575)+x576));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x577 = 19U;
	volatile uint32_t x578 = UINT32_MAX;
	volatile int32_t t141 = 87919949;

    t141 = (x577>((x578!=x579)+x580));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x581 = 6U;
	uint8_t x584 = UINT8_MAX;
	int32_t t142 = 12;

    t142 = (x581>((x582!=x583)+x584));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x585 = 27;
	int32_t x586 = INT32_MIN;
	uint8_t x587 = 7U;
	volatile int32_t t143 = -226538;

    t143 = (x585>((x586!=x587)+x588));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x590 = 1;
	uint8_t x591 = 13U;
	volatile int32_t t144 = 56806232;

    t144 = (x589>((x590!=x591)+x592));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x594 = UINT16_MAX;
	uint16_t x595 = 292U;
	int64_t x596 = -862326LL;
	int32_t t145 = 24309090;

    t145 = (x593>((x594!=x595)+x596));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x597 = UINT32_MAX;
	uint8_t x599 = 0U;
	volatile int64_t x600 = INT64_MIN;
	volatile int32_t t146 = 235731;

    t146 = (x597>((x598!=x599)+x600));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x602 = UINT8_MAX;
	volatile uint16_t x603 = 1U;
	volatile uint8_t x604 = 1U;
	int32_t t147 = 0;

    t147 = (x601>((x602!=x603)+x604));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x609 = -1LL;
	static int64_t x610 = -59682597LL;
	volatile int32_t t148 = 18048586;

    t148 = (x609>((x610!=x611)+x612));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x613 = 3;
	static int8_t x614 = INT8_MIN;
	volatile uint64_t x615 = 127516249320999LLU;
	static int32_t t149 = -872472747;

    t149 = (x613>((x614!=x615)+x616));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x619 = 6;
	int32_t x620 = -1;
	volatile int32_t t150 = 0;

    t150 = (x617>((x618!=x619)+x620));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x622 = INT32_MIN;
	uint64_t x624 = UINT64_MAX;
	static int32_t t151 = -1344;

    t151 = (x621>((x622!=x623)+x624));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x625 = 12U;
	static volatile int32_t x626 = INT32_MAX;
	int8_t x627 = INT8_MIN;
	int32_t x628 = 252;
	int32_t t152 = 32431705;

    t152 = (x625>((x626!=x627)+x628));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x629 = INT32_MIN;
	int32_t x630 = 681;
	int8_t x631 = 39;
	uint8_t x632 = 43U;
	volatile int32_t t153 = 242157048;

    t153 = (x629>((x630!=x631)+x632));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x634 = INT16_MIN;
	uint16_t x636 = UINT16_MAX;
	static volatile int32_t t154 = 18436;

    t154 = (x633>((x634!=x635)+x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x637 = 223LLU;
	int8_t x638 = INT8_MIN;
	int8_t x640 = -25;
	volatile int32_t t155 = 16549749;

    t155 = (x637>((x638!=x639)+x640));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x641 = 1691U;
	volatile uint32_t x642 = 176275669U;
	static volatile uint64_t x644 = UINT64_MAX;
	volatile int32_t t156 = 235776864;

    t156 = (x641>((x642!=x643)+x644));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x645 = -84;
	int32_t x646 = 10;
	int64_t x647 = INT64_MAX;
	int16_t x648 = -997;
	static int32_t t157 = -7109460;

    t157 = (x645>((x646!=x647)+x648));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x649 = INT64_MAX;
	int32_t x650 = INT32_MIN;
	int64_t x651 = INT64_MIN;
	volatile uint64_t x652 = UINT64_MAX;
	volatile int32_t t158 = 131600;

    t158 = (x649>((x650!=x651)+x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x653 = -2;
	static int64_t x654 = INT64_MAX;
	static int16_t x655 = INT16_MAX;
	volatile int32_t x656 = -910047;
	int32_t t159 = -474727;

    t159 = (x653>((x654!=x655)+x656));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x657 = -1;
	int16_t x658 = INT16_MAX;
	volatile int32_t t160 = 4;

    t160 = (x657>((x658!=x659)+x660));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x665 = INT16_MIN;
	int8_t x666 = INT8_MIN;
	int32_t x667 = INT32_MAX;
	uint16_t x668 = 25U;
	volatile int32_t t161 = -1015;

    t161 = (x665>((x666!=x667)+x668));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x669 = 3U;
	uint32_t x672 = 110413969U;

    t162 = (x669>((x670!=x671)+x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x678 = 1314U;
	int64_t x680 = -1132960189282411702LL;
	volatile int32_t t163 = 161;

    t163 = (x677>((x678!=x679)+x680));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x681 = INT32_MIN;
	int16_t x683 = INT16_MIN;
	volatile int16_t x684 = INT16_MIN;
	int32_t t164 = 57;

    t164 = (x681>((x682!=x683)+x684));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x685 = UINT16_MAX;
	int16_t x686 = INT16_MIN;
	int8_t x687 = 13;
	int16_t x688 = INT16_MIN;
	static int32_t t165 = 29606764;

    t165 = (x685>((x686!=x687)+x688));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x689 = 0;
	static uint32_t x690 = UINT32_MAX;
	static uint64_t x691 = UINT64_MAX;
	volatile uint32_t x692 = 43572U;
	volatile int32_t t166 = -2;

    t166 = (x689>((x690!=x691)+x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x698 = INT8_MIN;
	int8_t x699 = -1;
	uint32_t x700 = 29U;
	volatile int32_t t167 = 315567;

    t167 = (x697>((x698!=x699)+x700));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x701 = -7449LL;
	int16_t x702 = INT16_MIN;
	volatile uint8_t x703 = 3U;
	uint32_t x704 = UINT32_MAX;

    t168 = (x701>((x702!=x703)+x704));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x706 = 54515LLU;
	volatile int32_t x708 = INT32_MIN;
	static volatile int32_t t169 = -29305;

    t169 = (x705>((x706!=x707)+x708));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = INT64_MIN;
	int32_t x710 = INT32_MIN;
	static int64_t x711 = INT64_MIN;
	volatile int8_t x712 = 18;
	int32_t t170 = 87;

    t170 = (x709>((x710!=x711)+x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x717 = 1;
	int16_t x718 = -3;
	static int8_t x719 = INT8_MIN;
	volatile int32_t t171 = 130627949;

    t171 = (x717>((x718!=x719)+x720));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x721 = 1LLU;
	uint8_t x722 = 5U;
	int64_t x723 = INT64_MIN;
	volatile int32_t t172 = -4309;

    t172 = (x721>((x722!=x723)+x724));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint64_t x726 = UINT64_MAX;
	static int8_t x727 = INT8_MIN;
	int16_t x728 = 46;

    t173 = (x725>((x726!=x727)+x728));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x729 = UINT16_MAX;
	uint16_t x730 = UINT16_MAX;
	uint32_t x731 = 1U;
	int16_t x732 = -1;

    t174 = (x729>((x730!=x731)+x732));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x733 = INT8_MAX;
	int16_t x734 = -1;
	uint16_t x735 = UINT16_MAX;
	int16_t x736 = INT16_MAX;
	static int32_t t175 = -38;

    t175 = (x733>((x734!=x735)+x736));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x741 = INT16_MIN;
	int16_t x744 = -1;

    t176 = (x741>((x742!=x743)+x744));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x746 = INT32_MAX;
	uint32_t x747 = 3U;
	volatile int16_t x748 = -1;
	int32_t t177 = -6848;

    t177 = (x745>((x746!=x747)+x748));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x749 = 2U;
	int64_t x750 = INT64_MIN;
	int64_t x752 = -1LL;
	volatile int32_t t178 = -82111;

    t178 = (x749>((x750!=x751)+x752));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x753 = 19LLU;
	static volatile int16_t x754 = INT16_MIN;
	volatile int64_t x755 = 46832178LL;
	int16_t x756 = 11;
	static volatile int32_t t179 = 13625947;

    t179 = (x753>((x754!=x755)+x756));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x757 = -12;
	int16_t x759 = INT16_MAX;
	static volatile int32_t x760 = -1;
	int32_t t180 = 502;

    t180 = (x757>((x758!=x759)+x760));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x761 = -1;
	volatile uint16_t x762 = UINT16_MAX;
	uint16_t x763 = 19642U;
	volatile uint32_t x764 = UINT32_MAX;
	volatile int32_t t181 = -18;

    t181 = (x761>((x762!=x763)+x764));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x765 = INT8_MIN;
	static volatile uint16_t x767 = 24U;
	volatile int32_t x768 = INT32_MIN;
	static volatile int32_t t182 = 464524;

    t182 = (x765>((x766!=x767)+x768));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x769 = -1LL;
	int32_t x770 = -1;
	static int16_t x771 = -9;
	int8_t x772 = INT8_MIN;
	int32_t t183 = -44217053;

    t183 = (x769>((x770!=x771)+x772));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x773 = 1143028LL;
	int64_t x775 = INT64_MIN;
	int16_t x776 = INT16_MIN;
	volatile int32_t t184 = 299445;

    t184 = (x773>((x774!=x775)+x776));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x777 = -3;
	int64_t x778 = -1LL;
	int16_t x779 = INT16_MIN;
	int32_t x780 = INT32_MIN;
	volatile int32_t t185 = -4;

    t185 = (x777>((x778!=x779)+x780));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x782 = INT32_MIN;
	static volatile int64_t x783 = -1LL;
	int16_t x784 = INT16_MAX;
	volatile int32_t t186 = -213805079;

    t186 = (x781>((x782!=x783)+x784));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x785 = INT8_MAX;
	int64_t x788 = INT64_MAX;

    t187 = (x785>((x786!=x787)+x788));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x789 = 6U;
	static volatile uint8_t x790 = 1U;
	int16_t x791 = 1166;
	static int64_t x792 = INT64_MIN;
	int32_t t188 = -7;

    t188 = (x789>((x790!=x791)+x792));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x793 = INT8_MIN;
	volatile int8_t x795 = INT8_MIN;
	volatile int32_t t189 = -28;

    t189 = (x793>((x794!=x795)+x796));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x797 = INT16_MAX;
	static int8_t x798 = INT8_MIN;
	static uint32_t x799 = 389U;
	volatile int16_t x800 = INT16_MIN;
	static int32_t t190 = 19180939;

    t190 = (x797>((x798!=x799)+x800));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x801 = INT32_MIN;
	uint8_t x802 = 1U;
	volatile int16_t x803 = INT16_MIN;
	int8_t x804 = INT8_MIN;
	static volatile int32_t t191 = 2494425;

    t191 = (x801>((x802!=x803)+x804));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x805 = INT8_MIN;
	int32_t x807 = -15;
	uint16_t x808 = UINT16_MAX;
	volatile int32_t t192 = -334368;

    t192 = (x805>((x806!=x807)+x808));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x809 = UINT64_MAX;
	int64_t x811 = -1LL;
	int64_t x812 = INT64_MIN;
	int32_t t193 = -1;

    t193 = (x809>((x810!=x811)+x812));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x813 = 1;
	static int8_t x814 = INT8_MAX;
	int32_t x815 = INT32_MIN;
	uint8_t x816 = UINT8_MAX;

    t194 = (x813>((x814!=x815)+x816));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x817 = INT8_MAX;
	int16_t x818 = -1;
	uint32_t x820 = 77U;

    t195 = (x817>((x818!=x819)+x820));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x821 = 2405;
	static int64_t x822 = -169054LL;
	uint8_t x824 = 51U;
	int32_t t196 = 3860294;

    t196 = (x821>((x822!=x823)+x824));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x825 = -11;
	int64_t x826 = 177364LL;
	uint32_t x828 = UINT32_MAX;
	volatile int32_t t197 = -1;

    t197 = (x825>((x826!=x827)+x828));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x829 = -1;
	int32_t x830 = -1;
	uint16_t x831 = 1U;
	uint64_t x832 = 107165839887LLU;
	int32_t t198 = -160;

    t198 = (x829>((x830!=x831)+x832));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x833 = -9;
	uint8_t x835 = UINT8_MAX;
	int16_t x836 = INT16_MIN;
	int32_t t199 = 1655271;

    t199 = (x833>((x834!=x835)+x836));

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

