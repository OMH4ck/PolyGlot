
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

uint16_t x2 = UINT16_MAX;
uint32_t x3 = 1U;
int32_t x4 = INT32_MIN;
volatile int64_t x9 = -3775681296674140625LL;
static int16_t x11 = -1;
int16_t x19 = INT16_MIN;
int8_t x24 = -58;
int64_t x27 = INT64_MAX;
uint32_t x32 = UINT32_MAX;
int64_t x46 = INT64_MIN;
static volatile uint32_t x48 = UINT32_MAX;
int8_t x52 = INT8_MAX;
int16_t x61 = -1;
static int32_t x65 = INT32_MIN;
volatile uint64_t x68 = UINT64_MAX;
volatile int16_t x70 = INT16_MIN;
uint8_t x74 = 77U;
int8_t x77 = INT8_MIN;
volatile int32_t x85 = INT32_MIN;
static int32_t t22 = -3807;
int8_t x95 = INT8_MAX;
uint64_t x96 = UINT64_MAX;
static int32_t t23 = -2567952;
static volatile int64_t x103 = INT64_MAX;
int16_t x105 = 32;
int8_t x110 = INT8_MIN;
uint64_t x111 = 1916099123289880LLU;
volatile int8_t x118 = 25;
volatile int64_t t29 = INT64_MIN;
int8_t x123 = 42;
static int16_t x124 = -1;
static uint32_t x126 = UINT32_MAX;
static int64_t x127 = INT64_MIN;
uint64_t x130 = UINT64_MAX;
int8_t x140 = -1;
volatile int32_t t35 = 536670685;
int32_t x148 = INT32_MAX;
int16_t x151 = -129;
volatile int32_t x153 = -1;
volatile int32_t t38 = 2;
uint64_t x161 = 132667681259LLU;
int8_t x163 = INT8_MIN;
static int64_t x164 = INT64_MIN;
volatile int32_t t41 = 849;
uint8_t x169 = UINT8_MAX;
int16_t x173 = -3;
static int64_t x184 = INT64_MAX;
volatile uint8_t x187 = 62U;
int32_t t47 = 3523;
uint64_t x194 = UINT64_MAX;
volatile uint64_t x195 = UINT64_MAX;
uint8_t x196 = UINT8_MAX;
uint64_t x199 = 530087608883143025LLU;
volatile int32_t t51 = 85968968;
int64_t x211 = INT64_MAX;
static uint16_t x216 = 58U;
uint8_t x218 = 4U;
volatile uint8_t x219 = 0U;
static volatile int32_t t54 = 17930;
volatile uint16_t x221 = UINT16_MAX;
int16_t x222 = -1;
int32_t t55 = -63615;
uint8_t x232 = 17U;
int64_t x242 = -2920375LL;
int16_t x244 = INT16_MAX;
int64_t t63 = INT64_MIN;
uint16_t x257 = 6429U;
uint16_t x258 = 0U;
int8_t x259 = 3;
static int8_t x260 = 0;
int64_t x261 = -1LL;
int32_t x263 = 223642448;
int32_t t66 = -78483310;
int64_t x269 = -1LL;
volatile uint32_t x272 = 5U;
int16_t x275 = -163;
int64_t x281 = INT64_MIN;
volatile int64_t x282 = INT64_MIN;
volatile int64_t x286 = INT64_MIN;
int32_t x289 = 52546;
volatile uint16_t x290 = 2U;
volatile int64_t x292 = INT64_MAX;
int64_t x299 = -1LL;
int8_t x300 = INT8_MIN;
volatile uint32_t t74 = UINT32_MAX;
int32_t x301 = INT32_MAX;
static volatile int32_t x303 = INT32_MIN;
volatile int32_t t75 = 349996753;
int32_t x307 = INT32_MAX;
volatile int64_t x311 = INT64_MIN;
int64_t x312 = -239762LL;
volatile uint64_t t77 = 2429802735LLU;
int64_t x316 = INT64_MAX;
int8_t x319 = -14;
volatile uint16_t x323 = 51U;
uint64_t x326 = 43054224076LLU;
int64_t x330 = INT64_MIN;
uint32_t x341 = 41549U;
static int8_t x344 = INT8_MIN;
static uint32_t t85 = 241U;
int8_t x351 = -1;
volatile uint32_t x353 = 1649246770U;
int8_t x354 = -39;
int16_t x355 = INT16_MAX;
volatile int32_t t89 = 46612480;
int32_t t90 = 1;
int32_t t92 = -522;
int16_t x381 = INT16_MAX;
int16_t x385 = INT16_MIN;
int64_t x391 = INT64_MAX;
int8_t x397 = INT8_MAX;
uint8_t x398 = UINT8_MAX;
uint64_t x399 = 203341LLU;
static uint32_t x401 = UINT32_MAX;
volatile int8_t x405 = 0;
static int32_t t101 = -192702545;
int64_t x416 = INT64_MIN;
volatile int32_t t104 = 1;
int16_t x423 = -83;
volatile uint64_t x424 = 45385LLU;
int32_t x435 = -1;
volatile int32_t t109 = 5990;
static uint32_t x443 = 1887175652U;
int16_t x445 = INT16_MAX;
volatile uint64_t x452 = 48506166349551878LLU;
static uint16_t x453 = 13U;
static volatile int32_t x458 = INT32_MIN;
int64_t x460 = INT64_MAX;
uint8_t x465 = 8U;
static volatile uint64_t x469 = 1067879342LLU;
static int16_t x470 = -12217;
int32_t x478 = INT32_MIN;
int64_t x481 = INT64_MIN;
static int16_t x483 = -163;
int32_t x489 = INT32_MAX;
uint64_t x490 = 58800792LLU;
int16_t x491 = INT16_MIN;
int16_t x497 = -1929;
static volatile uint16_t x500 = UINT16_MAX;
static uint64_t x501 = 19985LLU;
int32_t x503 = INT32_MIN;
int32_t x507 = 104439;
uint32_t x508 = UINT32_MAX;
int32_t x509 = INT32_MIN;
volatile int8_t x511 = -2;
int64_t x515 = INT64_MIN;
uint32_t x520 = UINT32_MAX;
uint64_t x524 = 1567164756LLU;
volatile int32_t t130 = 117099703;
int32_t x526 = INT32_MAX;
int8_t x529 = 0;
volatile int32_t t132 = 45501;
int16_t x533 = INT16_MIN;
uint32_t x534 = 34041202U;
volatile int64_t x536 = -106813LL;
static uint8_t x537 = 1U;
int32_t x538 = INT32_MIN;
int8_t x544 = INT8_MAX;
volatile uint64_t t135 = UINT64_MAX;
static uint64_t x550 = 1156297346318336LLU;
uint8_t x553 = 3U;
static int8_t x554 = INT8_MAX;
static int32_t t138 = -10461;
static volatile uint64_t x557 = 368876258997593LLU;
static int16_t x563 = INT16_MIN;
uint64_t x564 = 107145LLU;
int16_t x565 = 5;
uint32_t x566 = 3387193U;
int8_t x573 = INT8_MAX;
uint16_t x575 = UINT16_MAX;
int64_t t144 = 113152LL;
static int32_t x590 = 35;
uint32_t x593 = 8U;
volatile int8_t x598 = -9;
int16_t x602 = -1;
volatile int8_t x608 = INT8_MIN;
volatile uint32_t x611 = 228920U;
int16_t x617 = INT16_MIN;
int8_t x621 = INT8_MAX;
int16_t x622 = 12360;
uint8_t x624 = UINT8_MAX;
uint16_t x627 = 514U;
int16_t x651 = 34;
int32_t x669 = 807;
int32_t x670 = -1;
int32_t x671 = -3517399;
int16_t x672 = -1;
volatile int16_t x679 = INT16_MIN;
uint8_t x683 = UINT8_MAX;
int8_t x696 = INT8_MAX;
static int64_t x700 = INT64_MAX;
int32_t x707 = 25638;
static volatile int8_t x710 = INT8_MIN;
volatile int32_t t177 = -11285496;
int8_t x715 = -1;
volatile int64_t x718 = -1LL;
int64_t x719 = 6944811072649LL;
volatile int64_t t181 = -4327108LL;
static int32_t t184 = 190090;
static volatile int32_t t185 = 529;
volatile uint8_t x747 = UINT8_MAX;
volatile uint32_t x752 = UINT32_MAX;
static int32_t x753 = -5204456;
volatile uint16_t x762 = 8U;
volatile uint64_t t190 = 1548LLU;
volatile int32_t x766 = 1230;
int8_t x767 = INT8_MAX;
static volatile int32_t x770 = 106;
int8_t x773 = INT8_MIN;
uint64_t t194 = 135894LLU;
int8_t x792 = -42;
int64_t t197 = 294572660957LL;
int8_t x797 = INT8_MIN;
uint32_t x800 = UINT32_MAX;
volatile int32_t t199 = -3;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	static volatile int32_t t0 = 1;

    t0 = (x1*((x2|x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	uint32_t x6 = 47236U;
	static int32_t x7 = 1;
	uint8_t x8 = 3U;
	static volatile int32_t t1 = -3734233;

    t1 = (x5*((x6|x7)>x8));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x10 = INT32_MIN;
	volatile int32_t x12 = INT32_MIN;
	volatile int64_t t2 = -422520238978LL;

    t2 = (x9*((x10|x11)>x12));

    if (t2 != -3775681296674140625LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 5U;
	int16_t x14 = INT16_MAX;
	static int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -536355196;

    t3 = (x13*((x14|x15)>x16));

    if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 4802320702408070LLU;
	int32_t x18 = INT32_MIN;
	volatile int64_t x20 = INT64_MIN;
	static uint64_t t4 = 5162LLU;

    t4 = (x17*((x18|x19)>x20));

    if (t4 != 4802320702408070LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int16_t x22 = -6377;
	static uint32_t x23 = 3U;
	volatile uint64_t t5 = 49244776748105350LLU;

    t5 = (x21*((x22|x23)>x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	uint32_t x26 = UINT32_MAX;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t6 = 1710;

    t6 = (x25*((x26|x27)>x28));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = 675LL;
	uint8_t x30 = 0U;
	static volatile int16_t x31 = 3381;
	volatile int64_t t7 = -325895LL;

    t7 = (x29*((x30|x31)>x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1U;
	uint32_t x34 = 5387U;
	int8_t x35 = INT8_MIN;
	volatile uint8_t x36 = 50U;
	static int32_t t8 = -42;

    t8 = (x33*((x34|x35)>x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	uint16_t x38 = 1U;
	static uint8_t x39 = 0U;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = 20;

    t9 = (x37*((x38|x39)>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	volatile uint16_t x42 = 8U;
	int8_t x43 = INT8_MAX;
	int16_t x44 = -7;
	volatile uint64_t t10 = UINT64_MAX;

    t10 = (x41*((x42|x43)>x44));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 115159272U;
	int32_t x47 = INT32_MIN;
	uint32_t t11 = 261885337U;

    t11 = (x45*((x46|x47)>x48));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MAX;
	uint64_t x50 = 204179022047170138LLU;
	volatile int16_t x51 = INT16_MAX;
	static volatile int32_t t12 = 2;

    t12 = (x49*((x50|x51)>x52));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = INT8_MIN;
	uint16_t x54 = UINT16_MAX;
	volatile int32_t x55 = INT32_MIN;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 50870685;

    t13 = (x53*((x54|x55)>x56));

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = INT32_MAX;
	uint16_t x58 = 436U;
	static uint8_t x59 = 12U;
	volatile int32_t x60 = -1;
	volatile int32_t t14 = INT32_MAX;

    t14 = (x57*((x58|x59)>x60));

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = 11494U;
	static uint8_t x63 = 6U;
	volatile uint64_t x64 = 3513702354284LLU;
	static int32_t t15 = -13073705;

    t15 = (x61*((x62|x63)>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 1U;
	int8_t x67 = 49;
	volatile int32_t t16 = -12;

    t16 = (x65*((x66|x67)>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = INT64_MIN;
	int32_t x71 = -1;
	uint16_t x72 = UINT16_MAX;
	int64_t t17 = -562LL;

    t17 = (x69*((x70|x71)>x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	int16_t x75 = INT16_MIN;
	int16_t x76 = -854;
	volatile int32_t t18 = 184308342;

    t18 = (x73*((x74|x75)>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x78 = INT32_MIN;
	uint32_t x79 = UINT32_MAX;
	static int64_t x80 = -1317972LL;
	volatile int32_t t19 = 3249681;

    t19 = (x77*((x78|x79)>x80));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -195;
	volatile int8_t x82 = INT8_MIN;
	int32_t x83 = -1;
	int8_t x84 = INT8_MAX;
	int32_t t20 = 89;

    t20 = (x81*((x82|x83)>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = UINT32_MAX;
	int8_t x87 = -1;
	static volatile int64_t x88 = -1LL;
	int32_t t21 = INT32_MIN;

    t21 = (x85*((x86|x87)>x88));

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -12400631;
	int8_t x90 = INT8_MIN;
	volatile uint64_t x91 = UINT64_MAX;
	uint64_t x92 = UINT64_MAX;

    t22 = (x89*((x90|x91)>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	int8_t x94 = -38;

    t23 = (x93*((x94|x95)>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 598346732U;
	uint16_t x98 = 21U;
	int64_t x99 = INT64_MAX;
	int8_t x100 = INT8_MAX;
	volatile uint32_t t24 = 193388581U;

    t24 = (x97*((x98|x99)>x100));

    if (t24 != 598346732U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x101 = 13166683842LLU;
	int16_t x102 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	uint64_t t25 = 101444191013593436LLU;

    t25 = (x101*((x102|x103)>x104));

    if (t25 != 13166683842LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MIN;
	static uint16_t x107 = UINT16_MAX;
	int32_t x108 = INT32_MAX;
	int32_t t26 = -1;

    t26 = (x105*((x106|x107)>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 2U;
	static int8_t x112 = -1;
	volatile int32_t t27 = -88789652;

    t27 = (x109*((x110|x111)>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint16_t x113 = UINT16_MAX;
	int8_t x114 = INT8_MIN;
	int32_t x115 = 1777;
	int64_t x116 = 87LL;
	volatile int32_t t28 = -57;

    t28 = (x113*((x114|x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x117 = INT64_MIN;
	static int64_t x119 = -1LL;
	int8_t x120 = INT8_MIN;

    t29 = (x117*((x118|x119)>x120));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MAX;
	uint16_t x122 = UINT16_MAX;
	static volatile int32_t t30 = 2;

    t30 = (x121*((x122|x123)>x124));

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int16_t x128 = 34;
	int64_t t31 = -1LL;

    t31 = (x125*((x126|x127)>x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = UINT32_MAX;
	int8_t x131 = INT8_MIN;
	static volatile int8_t x132 = INT8_MAX;
	uint32_t t32 = UINT32_MAX;

    t32 = (x129*((x130|x131)>x132));

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MIN;
	uint8_t x134 = UINT8_MAX;
	uint8_t x135 = 1U;
	uint16_t x136 = 1401U;
	int32_t t33 = -15416329;

    t33 = (x133*((x134|x135)>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 115LLU;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 166U;
	uint64_t t34 = 2LLU;

    t34 = (x137*((x138|x139)>x140));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = INT32_MIN;
	int8_t x142 = 1;
	int64_t x143 = -9549011032876LL;
	int64_t x144 = -1LL;

    t35 = (x141*((x142|x143)>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 23686362345527LL;
	int32_t x146 = -46791;
	uint16_t x147 = 128U;
	volatile int64_t t36 = -3124LL;

    t36 = (x145*((x146|x147)>x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -9;
	volatile int8_t x150 = 0;
	volatile uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = 1;

    t37 = (x149*((x150|x151)>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x154 = 10826672597LL;
	int32_t x155 = INT32_MIN;
	volatile uint32_t x156 = 20U;

    t38 = (x153*((x154|x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x157 = UINT8_MAX;
	volatile int64_t x158 = -1LL;
	static int64_t x159 = INT64_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t39 = -44;

    t39 = (x157*((x158|x159)>x160));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 26U;
	volatile uint64_t t40 = 747215LLU;

    t40 = (x161*((x162|x163)>x164));

    if (t40 != 132667681259LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 0U;
	int8_t x166 = INT8_MIN;
	static volatile int32_t x167 = INT32_MIN;
	static volatile int32_t x168 = INT32_MIN;

    t41 = (x165*((x166|x167)>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = 11LLU;
	volatile int32_t t42 = -108;

    t42 = (x169*((x170|x171)>x172));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x174 = INT64_MAX;
	uint32_t x175 = 27172123U;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 4325;

    t43 = (x173*((x174|x175)>x176));

    if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = INT32_MAX;
	int16_t x178 = INT16_MIN;
	volatile int16_t x179 = 2561;
	static uint64_t x180 = UINT64_MAX;
	int32_t t44 = -38;

    t44 = (x177*((x178|x179)>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -24;
	static uint32_t x182 = 34U;
	static int8_t x183 = INT8_MAX;
	static volatile int32_t t45 = 127495136;

    t45 = (x181*((x182|x183)>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x185 = 9508U;
	int16_t x186 = INT16_MAX;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = -683542;

    t46 = (x185*((x186|x187)>x188));

    if (t46 != 9508) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1730;
	int32_t x190 = -1;
	int64_t x191 = -1LL;
	int8_t x192 = INT8_MIN;

    t47 = (x189*((x190|x191)>x192));

    if (t47 != -1730) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x193 = INT16_MIN;
	static volatile int32_t t48 = 310550133;

    t48 = (x193*((x194|x195)>x196));

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 272LL;
	int32_t x198 = INT32_MAX;
	static volatile uint32_t x200 = 1U;
	static volatile int64_t t49 = 226090828735323844LL;

    t49 = (x197*((x198|x199)>x200));

    if (t49 != 272LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = 661550222U;
	static int16_t x202 = 28;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	volatile uint32_t t50 = 10482U;

    t50 = (x201*((x202|x203)>x204));

    if (t50 != 661550222U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 40U;
	volatile int8_t x206 = INT8_MIN;
	static int16_t x207 = -6074;
	int16_t x208 = 339;

    t51 = (x205*((x206|x207)>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	int32_t x210 = 185515739;
	int32_t x212 = INT32_MIN;
	uint32_t t52 = UINT32_MAX;

    t52 = (x209*((x210|x211)>x212));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MAX;
	static int8_t x214 = 0;
	int64_t x215 = -1LL;
	int32_t t53 = -217;

    t53 = (x213*((x214|x215)>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -307;
	int64_t x220 = 6664LL;

    t54 = (x217*((x218|x219)>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x223 = -1LL;
	volatile uint64_t x224 = 6368298092553585LLU;

    t55 = (x221*((x222|x223)>x224));

    if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	int64_t x226 = 232356LL;
	volatile int8_t x227 = 1;
	uint8_t x228 = 61U;
	volatile uint64_t t56 = UINT64_MAX;

    t56 = (x225*((x226|x227)>x228));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int16_t x230 = -1;
	int32_t x231 = 54;
	volatile int32_t t57 = -120715298;

    t57 = (x229*((x230|x231)>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	uint8_t x234 = UINT8_MAX;
	uint16_t x235 = 0U;
	static int16_t x236 = -1;
	int32_t t58 = -4;

    t58 = (x233*((x234|x235)>x236));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 1U;
	volatile int8_t x238 = INT8_MAX;
	volatile int64_t x239 = INT64_MAX;
	uint32_t x240 = 44258U;
	volatile int32_t t59 = 94;

    t59 = (x237*((x238|x239)>x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = 0;
	int8_t x243 = -1;
	volatile int32_t t60 = -1;

    t60 = (x241*((x242|x243)>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	volatile int32_t x247 = INT32_MAX;
	volatile uint8_t x248 = 6U;
	static int64_t t61 = 24LL;

    t61 = (x245*((x246|x247)>x248));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	static uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -2;
	int32_t t62 = -69746403;

    t62 = (x249*((x250|x251)>x252));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x253 = INT64_MIN;
	int16_t x254 = -1;
	int8_t x255 = INT8_MIN;
	uint32_t x256 = 813510066U;

    t63 = (x253*((x254|x255)>x256));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t t64 = -40264954;

    t64 = (x257*((x258|x259)>x260));

    if (t64 != 6429) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x262 = 648142566595LLU;
	uint8_t x264 = UINT8_MAX;
	int64_t t65 = 2171661357973341LL;

    t65 = (x261*((x262|x263)>x264));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x265 = 385U;
	static volatile int16_t x266 = INT16_MIN;
	uint32_t x267 = 681116477U;
	volatile int32_t x268 = INT32_MIN;

    t66 = (x265*((x266|x267)>x268));

    if (t66 != 385) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x270 = INT16_MIN;
	int32_t x271 = 27;
	int64_t t67 = -45538578123LL;

    t67 = (x269*((x270|x271)>x272));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MAX;
	int64_t x276 = INT64_MIN;
	uint64_t t68 = UINT64_MAX;

    t68 = (x273*((x274|x275)>x276));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x277 = 0U;
	static int32_t x278 = INT32_MIN;
	static uint64_t x279 = 1542141LLU;
	int8_t x280 = -1;
	volatile int32_t t69 = 218;

    t69 = (x277*((x278|x279)>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x283 = INT8_MAX;
	volatile int32_t x284 = -1;
	int64_t t70 = 8970700523478721LL;

    t70 = (x281*((x282|x283)>x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x285 = 93U;
	int64_t x287 = INT64_MIN;
	static int64_t x288 = -1LL;
	int32_t t71 = 38141;

    t71 = (x285*((x286|x287)>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x291 = 68396786;
	int32_t t72 = -3323;

    t72 = (x289*((x290|x291)>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x293 = 235712542U;
	static int16_t x294 = INT16_MAX;
	volatile int16_t x295 = INT16_MIN;
	static uint32_t x296 = 14565167U;
	volatile uint32_t t73 = 910572547U;

    t73 = (x293*((x294|x295)>x296));

    if (t73 != 235712542U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = UINT32_MAX;
	uint8_t x298 = 0U;

    t74 = (x297*((x298|x299)>x300));

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x302 = 1U;
	uint16_t x304 = UINT16_MAX;

    t75 = (x301*((x302|x303)>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -3;
	static int64_t x306 = INT64_MAX;
	volatile int16_t x308 = INT16_MIN;
	int32_t t76 = 383540341;

    t76 = (x305*((x306|x307)>x308));

    if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 3362396019452644853LLU;
	uint64_t x310 = 807586781081LLU;

    t77 = (x309*((x310|x311)>x312));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	uint8_t x314 = 3U;
	int8_t x315 = INT8_MAX;
	volatile int32_t t78 = 246854;

    t78 = (x313*((x314|x315)>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 7102694;
	uint8_t x318 = 122U;
	volatile int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 16939355;

    t79 = (x317*((x318|x319)>x320));

    if (t79 != 7102694) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MAX;
	int32_t x324 = 13;
	int32_t t80 = 6619335;

    t80 = (x321*((x322|x323)>x324));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MAX;
	int64_t x327 = INT64_MAX;
	static int32_t x328 = INT32_MIN;
	int32_t t81 = -1;

    t81 = (x325*((x326|x327)>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = INT16_MIN;
	int64_t x331 = -1LL;
	volatile int8_t x332 = INT8_MAX;
	static int32_t t82 = 0;

    t82 = (x329*((x330|x331)>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = -1272;
	static uint16_t x334 = 2486U;
	int8_t x335 = INT8_MAX;
	volatile int16_t x336 = INT16_MIN;
	int32_t t83 = -150586140;

    t83 = (x333*((x334|x335)>x336));

    if (t83 != -1272) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	int64_t x338 = 1478540520057262428LL;
	int8_t x339 = -1;
	static int8_t x340 = 45;
	volatile int32_t t84 = -1;

    t84 = (x337*((x338|x339)>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = -2;
	static int8_t x343 = INT8_MAX;

    t85 = (x341*((x342|x343)>x344));

    if (t85 != 41549U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	static int16_t x346 = -1657;
	int32_t x347 = -1;
	uint64_t x348 = 12LLU;
	volatile int32_t t86 = 29380096;

    t86 = (x345*((x346|x347)>x348));

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x349 = INT8_MIN;
	int16_t x350 = -6111;
	int64_t x352 = INT64_MAX;
	int32_t t87 = 37846839;

    t87 = (x349*((x350|x351)>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x356 = -93541296;
	uint32_t t88 = 121619363U;

    t88 = (x353*((x354|x355)>x356));

    if (t88 != 1649246770U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -11767594;
	int32_t x358 = 674040;
	volatile uint64_t x359 = UINT64_MAX;
	uint32_t x360 = 2063145U;

    t89 = (x357*((x358|x359)>x360));

    if (t89 != -11767594) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	uint8_t x362 = 3U;
	int64_t x363 = 385133703547LL;
	uint64_t x364 = 9140000712728068932LLU;

    t90 = (x361*((x362|x363)>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	uint8_t x366 = UINT8_MAX;
	static uint8_t x367 = 15U;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = -53;

    t91 = (x365*((x366|x367)>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = UINT8_MAX;
	int16_t x370 = -13138;
	static int16_t x371 = -1;
	int32_t x372 = -3748835;

    t92 = (x369*((x370|x371)>x372));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -206381;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = -1;
	uint16_t x376 = 8752U;
	static volatile int32_t t93 = -22229;

    t93 = (x373*((x374|x375)>x376));

    if (t93 != -206381) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1LL;
	uint8_t x378 = 0U;
	static int64_t x379 = INT64_MAX;
	int8_t x380 = INT8_MIN;
	int64_t t94 = 69328855281026290LL;

    t94 = (x377*((x378|x379)>x380));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x382 = UINT64_MAX;
	uint8_t x383 = 119U;
	static int64_t x384 = INT64_MIN;
	int32_t t95 = -1736;

    t95 = (x381*((x382|x383)>x384));

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint8_t x386 = 0U;
	int64_t x387 = INT64_MAX;
	int64_t x388 = INT64_MAX;
	static volatile int32_t t96 = 24746831;

    t96 = (x385*((x386|x387)>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = 34;
	uint32_t x390 = 1999U;
	uint32_t x392 = 60U;
	volatile int32_t t97 = 31440;

    t97 = (x389*((x390|x391)>x392));

    if (t97 != 34) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = 6;
	volatile int8_t x394 = INT8_MAX;
	static int8_t x395 = 33;
	volatile int8_t x396 = 6;
	int32_t t98 = -771302466;

    t98 = (x393*((x394|x395)>x396));

    if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x400 = -1LL;
	int32_t t99 = 869;

    t99 = (x397*((x398|x399)>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x402 = 692;
	int16_t x403 = 26;
	uint32_t x404 = 249372U;
	uint32_t t100 = 172066U;

    t100 = (x401*((x402|x403)>x404));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x406 = -1LL;
	uint16_t x407 = 1622U;
	int32_t x408 = -1;

    t101 = (x405*((x406|x407)>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = UINT64_MAX;
	int16_t x410 = INT16_MIN;
	uint32_t x411 = UINT32_MAX;
	uint16_t x412 = UINT16_MAX;
	volatile uint64_t t102 = UINT64_MAX;

    t102 = (x409*((x410|x411)>x412));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MAX;
	int32_t x414 = INT32_MIN;
	volatile int32_t x415 = 1;
	int32_t t103 = INT32_MAX;

    t103 = (x413*((x414|x415)>x416));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 805U;
	volatile int64_t x418 = INT64_MAX;
	int8_t x419 = INT8_MAX;
	static uint8_t x420 = 96U;

    t104 = (x417*((x418|x419)>x420));

    if (t104 != 805) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint16_t x421 = UINT16_MAX;
	uint64_t x422 = UINT64_MAX;
	int32_t t105 = 50912418;

    t105 = (x421*((x422|x423)>x424));

    if (t105 != 65535) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int8_t x426 = -17;
	uint16_t x427 = 15964U;
	uint16_t x428 = UINT16_MAX;
	int64_t t106 = 2076LL;

    t106 = (x425*((x426|x427)>x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x429 = 205U;
	int16_t x430 = INT16_MAX;
	int32_t x431 = -1;
	int8_t x432 = -41;
	int32_t t107 = -19622643;

    t107 = (x429*((x430|x431)>x432));

    if (t107 != 205) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	static uint8_t x434 = UINT8_MAX;
	uint64_t x436 = 88278LLU;
	uint32_t t108 = UINT32_MAX;

    t108 = (x433*((x434|x435)>x436));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -6;
	int64_t x438 = 8LL;
	static int32_t x439 = INT32_MIN;
	uint64_t x440 = UINT64_MAX;

    t109 = (x437*((x438|x439)>x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = -11254LL;
	uint32_t x442 = 1374558412U;
	volatile uint32_t x444 = UINT32_MAX;
	volatile int64_t t110 = -127048912977LL;

    t110 = (x441*((x442|x443)>x444));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = 1;
	int32_t x447 = 53166144;
	int64_t x448 = -176570383804154130LL;
	int32_t t111 = -819;

    t111 = (x445*((x446|x447)>x448));

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	uint64_t x450 = 7310882865567LLU;
	volatile int64_t x451 = INT64_MAX;
	int32_t t112 = INT32_MIN;

    t112 = (x449*((x450|x451)>x452));

    if (t112 != INT32_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x454 = 0;
	volatile int32_t x455 = INT32_MAX;
	int16_t x456 = 2;
	int32_t t113 = 124;

    t113 = (x453*((x454|x455)>x456));

    if (t113 != 13) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x457 = 451U;
	int32_t x459 = -18231340;
	volatile int32_t t114 = -1;

    t114 = (x457*((x458|x459)>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -12;
	int8_t x462 = INT8_MIN;
	uint8_t x463 = 0U;
	int32_t x464 = INT32_MAX;
	static int32_t t115 = 28495;

    t115 = (x461*((x462|x463)>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = -1;
	int32_t x467 = -1;
	int8_t x468 = -39;
	int32_t t116 = -2078;

    t116 = (x465*((x466|x467)>x468));

    if (t116 != 8) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int32_t x471 = -1;
	int64_t x472 = INT64_MIN;
	volatile uint64_t t117 = 13244312LLU;

    t117 = (x469*((x470|x471)>x472));

    if (t117 != 1067879342LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = 109U;
	int64_t x474 = -1LL;
	uint64_t x475 = 2851165LLU;
	uint64_t x476 = UINT64_MAX;
	volatile uint32_t t118 = 1U;

    t118 = (x473*((x474|x475)>x476));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -18;
	volatile int16_t x479 = INT16_MIN;
	static int8_t x480 = INT8_MIN;
	static volatile int32_t t119 = 803;

    t119 = (x477*((x478|x479)>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x482 = INT64_MIN;
	int32_t x484 = -52824778;
	int64_t t120 = INT64_MIN;

    t120 = (x481*((x482|x483)>x484));

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = INT16_MIN;
	static uint8_t x486 = 7U;
	int32_t x487 = 4010;
	volatile uint64_t x488 = UINT64_MAX;
	static int32_t t121 = -43691766;

    t121 = (x485*((x486|x487)>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x492 = INT16_MIN;
	volatile int32_t t122 = INT32_MAX;

    t122 = (x489*((x490|x491)>x492));

    if (t122 != INT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x493 = -51858334410935LL;
	int32_t x494 = 3932;
	int64_t x495 = INT64_MIN;
	int8_t x496 = -1;
	volatile int64_t t123 = 1796LL;

    t123 = (x493*((x494|x495)>x496));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x498 = 26734U;
	volatile int32_t x499 = 1025;
	static int32_t t124 = 296242;

    t124 = (x497*((x498|x499)>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x502 = UINT64_MAX;
	uint64_t x504 = 788501958413684280LLU;
	uint64_t t125 = 45LLU;

    t125 = (x501*((x502|x503)>x504));

    if (t125 != 19985LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = 894;
	int32_t t126 = 1;

    t126 = (x505*((x506|x507)>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x510 = 0;
	int32_t x512 = INT32_MIN;
	static volatile int32_t t127 = INT32_MIN;

    t127 = (x509*((x510|x511)>x512));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -14;
	int32_t x514 = INT32_MIN;
	int64_t x516 = INT64_MIN;
	volatile int32_t t128 = -4298167;

    t128 = (x513*((x514|x515)>x516));

    if (t128 != -14) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int8_t x517 = INT8_MIN;
	volatile int64_t x518 = 1462734LL;
	static uint16_t x519 = 418U;
	int32_t t129 = -7089;

    t129 = (x517*((x518|x519)>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	int16_t x522 = -1;
	uint8_t x523 = 0U;

    t130 = (x521*((x522|x523)>x524));

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = INT16_MAX;
	uint16_t x527 = 21U;
	static int8_t x528 = -1;
	volatile int32_t t131 = -469426785;

    t131 = (x525*((x526|x527)>x528));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MAX;
	static uint64_t x531 = 171038641LLU;
	uint16_t x532 = 8U;

    t132 = (x529*((x530|x531)>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x535 = INT32_MAX;
	volatile int32_t t133 = -6;

    t133 = (x533*((x534|x535)>x536));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x539 = INT16_MIN;
	static int16_t x540 = -1;
	int32_t t134 = 33;

    t134 = (x537*((x538|x539)>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x541 = UINT64_MAX;
	static uint32_t x542 = 1650U;
	int64_t x543 = INT64_MAX;

    t135 = (x541*((x542|x543)>x544));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 0U;
	volatile int64_t x546 = -8LL;
	volatile int32_t x547 = INT32_MIN;
	volatile uint32_t x548 = 16U;
	int32_t t136 = -23;

    t136 = (x545*((x546|x547)>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x549 = -1;
	int8_t x551 = 0;
	volatile uint16_t x552 = 7U;
	volatile int32_t t137 = 319393;

    t137 = (x549*((x550|x551)>x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x555 = -1;
	static int8_t x556 = INT8_MIN;

    t138 = (x553*((x554|x555)>x556));

    if (t138 != 3) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x558 = UINT64_MAX;
	int32_t x559 = INT32_MIN;
	static volatile int8_t x560 = -1;
	uint64_t t139 = 26864LLU;

    t139 = (x557*((x558|x559)>x560));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x561 = UINT64_MAX;
	volatile int32_t x562 = INT32_MIN;
	uint64_t t140 = UINT64_MAX;

    t140 = (x561*((x562|x563)>x564));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x567 = INT8_MIN;
	int16_t x568 = INT16_MIN;
	int32_t t141 = -3202;

    t141 = (x565*((x566|x567)>x568));

    if (t141 != 5) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	int32_t x570 = INT32_MIN;
	int64_t x571 = INT64_MAX;
	int32_t x572 = -1033240657;
	volatile int32_t t142 = 710;

    t142 = (x569*((x570|x571)>x572));

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = 12;
	int32_t x576 = INT32_MIN;
	int32_t t143 = -1928093;

    t143 = (x573*((x574|x575)>x576));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x577 = -1LL;
	static uint64_t x578 = UINT64_MAX;
	static int64_t x579 = INT64_MAX;
	static volatile uint32_t x580 = UINT32_MAX;

    t144 = (x577*((x578|x579)>x580));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 2;
	static volatile uint64_t x582 = 1531627076889265LLU;
	uint8_t x583 = 2U;
	int16_t x584 = -29;
	volatile int32_t t145 = 12;

    t145 = (x581*((x582|x583)>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 79U;
	uint64_t x586 = UINT64_MAX;
	uint16_t x587 = 229U;
	int16_t x588 = INT16_MAX;
	volatile int32_t t146 = -24517;

    t146 = (x585*((x586|x587)>x588));

    if (t146 != 79) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int8_t x591 = INT8_MIN;
	int32_t x592 = -1;
	int32_t t147 = -2676320;

    t147 = (x589*((x590|x591)>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = INT16_MIN;
	static int32_t x595 = -272196047;
	static int16_t x596 = -1934;
	volatile uint32_t t148 = 10694U;

    t148 = (x593*((x594|x595)>x596));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = INT32_MIN;
	int32_t x599 = INT32_MIN;
	int64_t x600 = 5584454LL;
	volatile int32_t t149 = 788330;

    t149 = (x597*((x598|x599)>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x601 = -1;
	static uint8_t x603 = 0U;
	uint32_t x604 = 0U;
	int32_t t150 = -512680;

    t150 = (x601*((x602|x603)>x604));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	uint16_t x606 = 548U;
	volatile uint32_t x607 = 112112U;
	static volatile int32_t t151 = -1021076673;

    t151 = (x605*((x606|x607)>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int16_t x609 = INT16_MIN;
	int16_t x610 = INT16_MIN;
	int64_t x612 = INT64_MAX;
	volatile int32_t t152 = 16;

    t152 = (x609*((x610|x611)>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x613 = UINT8_MAX;
	volatile uint64_t x614 = UINT64_MAX;
	int64_t x615 = INT64_MAX;
	volatile int16_t x616 = INT16_MIN;
	int32_t t153 = -1129752;

    t153 = (x613*((x614|x615)>x616));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = -1549357340659361504LL;
	uint8_t x619 = 32U;
	int16_t x620 = -1;
	static volatile int32_t t154 = -48;

    t154 = (x617*((x618|x619)>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x623 = -515721865816LL;
	int32_t t155 = 23299066;

    t155 = (x621*((x622|x623)>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 0U;
	int8_t x626 = 3;
	volatile int8_t x628 = -1;
	volatile int32_t t156 = -1;

    t156 = (x625*((x626|x627)>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = 1;
	static volatile int8_t x630 = INT8_MIN;
	static volatile int32_t x631 = INT32_MAX;
	static int32_t x632 = INT32_MIN;
	volatile int32_t t157 = 2439;

    t157 = (x629*((x630|x631)>x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	static uint64_t x634 = 810784847596LLU;
	int32_t x635 = -1;
	int8_t x636 = INT8_MAX;
	int32_t t158 = -12213;

    t158 = (x633*((x634|x635)>x636));

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x637 = INT16_MIN;
	uint32_t x638 = 0U;
	int64_t x639 = -1LL;
	int32_t x640 = -309;
	int32_t t159 = 21752;

    t159 = (x637*((x638|x639)>x640));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = INT16_MIN;
	volatile int32_t x642 = INT32_MIN;
	static int16_t x643 = INT16_MIN;
	uint16_t x644 = UINT16_MAX;
	volatile int32_t t160 = -306625;

    t160 = (x641*((x642|x643)>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 250733801573LLU;
	static volatile int32_t x646 = INT32_MAX;
	static volatile uint64_t x647 = 428295512LLU;
	int64_t x648 = INT64_MAX;
	uint64_t t161 = 22090177596LLU;

    t161 = (x645*((x646|x647)>x648));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = 61;
	int16_t x650 = 2;
	volatile uint32_t x652 = UINT32_MAX;
	int32_t t162 = 493;

    t162 = (x649*((x650|x651)>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 28U;
	volatile uint16_t x654 = 719U;
	volatile int8_t x655 = -1;
	int16_t x656 = INT16_MIN;
	uint32_t t163 = 164639865U;

    t163 = (x653*((x654|x655)>x656));

    if (t163 != 28U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	uint8_t x658 = 2U;
	int8_t x659 = INT8_MIN;
	uint8_t x660 = 5U;
	volatile uint64_t t164 = 4091497537LLU;

    t164 = (x657*((x658|x659)>x660));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = -10748;
	int32_t x662 = 52463;
	int8_t x663 = -1;
	int16_t x664 = INT16_MIN;
	int32_t t165 = 0;

    t165 = (x661*((x662|x663)>x664));

    if (t165 != -10748) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x665 = 1349U;
	int32_t x666 = INT32_MIN;
	int16_t x667 = INT16_MIN;
	int8_t x668 = INT8_MIN;
	uint32_t t166 = 116U;

    t166 = (x665*((x666|x667)>x668));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t t167 = -1;

    t167 = (x669*((x670|x671)>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x673 = 21U;
	static int16_t x674 = 45;
	int64_t x675 = INT64_MIN;
	int64_t x676 = 7995LL;
	volatile int32_t t168 = 180305006;

    t168 = (x673*((x674|x675)>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	static int16_t x678 = -1;
	uint64_t x680 = 1438206963011793050LLU;
	static volatile int32_t t169 = 11008987;

    t169 = (x677*((x678|x679)>x680));

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x681 = 7387U;
	static int8_t x682 = -10;
	volatile int16_t x684 = INT16_MIN;
	uint32_t t170 = 1930744006U;

    t170 = (x681*((x682|x683)>x684));

    if (t170 != 7387U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = -1;
	volatile int32_t x686 = -1;
	int16_t x687 = INT16_MIN;
	int32_t x688 = INT32_MAX;
	int32_t t171 = 763;

    t171 = (x685*((x686|x687)>x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	int8_t x690 = 13;
	int8_t x691 = INT8_MIN;
	int64_t x692 = INT64_MAX;
	int32_t t172 = -360;

    t172 = (x689*((x690|x691)>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 0U;
	uint16_t x694 = 3U;
	uint64_t x695 = 18048206816LLU;
	int32_t t173 = -27348125;

    t173 = (x693*((x694|x695)>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MAX;
	int8_t x698 = INT8_MAX;
	int32_t x699 = INT32_MIN;
	int32_t t174 = 1;

    t174 = (x697*((x698|x699)>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = -11487598086LL;
	volatile int64_t x702 = INT64_MIN;
	int32_t x703 = -1761;
	static int32_t x704 = INT32_MIN;
	int64_t t175 = -669LL;

    t175 = (x701*((x702|x703)>x704));

    if (t175 != -11487598086LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -1;
	uint32_t x706 = UINT32_MAX;
	int32_t x708 = -1;
	static int32_t t176 = 3729531;

    t176 = (x705*((x706|x707)>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	volatile uint64_t x711 = 11598383926561781LLU;
	volatile int64_t x712 = INT64_MIN;

    t177 = (x709*((x710|x711)>x712));

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 11U;
	int64_t x714 = 814118LL;
	int16_t x716 = INT16_MIN;
	int32_t t178 = 187910;

    t178 = (x713*((x714|x715)>x716));

    if (t178 != 11) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = 1;
	static uint32_t x720 = 1U;
	volatile int32_t t179 = -527939269;

    t179 = (x717*((x718|x719)>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = 0;
	uint64_t x722 = 17062332610303LLU;
	volatile uint16_t x723 = 231U;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t180 = 320271;

    t180 = (x721*((x722|x723)>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	int8_t x726 = INT8_MIN;
	volatile int16_t x727 = INT16_MIN;
	uint16_t x728 = 322U;

    t181 = (x725*((x726|x727)>x728));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	int32_t x730 = INT32_MAX;
	volatile uint8_t x731 = 1U;
	volatile int8_t x732 = -4;
	volatile int64_t t182 = INT64_MIN;

    t182 = (x729*((x730|x731)>x732));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x733 = UINT64_MAX;
	int16_t x734 = INT16_MIN;
	uint64_t x735 = 27LLU;
	uint16_t x736 = 1U;
	static uint64_t t183 = UINT64_MAX;

    t183 = (x733*((x734|x735)>x736));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = UINT16_MAX;
	static int32_t x738 = 1040223995;
	int32_t x739 = -3442213;
	int64_t x740 = INT64_MAX;

    t184 = (x737*((x738|x739)>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 1U;
	int64_t x742 = INT64_MIN;
	volatile uint16_t x743 = 1U;
	int8_t x744 = -38;

    t185 = (x741*((x742|x743)>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x745 = 34U;
	int8_t x746 = -1;
	uint32_t x748 = 1048340044U;
	int32_t t186 = 1;

    t186 = (x745*((x746|x747)>x748));

    if (t186 != 34) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint64_t x749 = UINT64_MAX;
	volatile int64_t x750 = 620834217692844LL;
	static uint16_t x751 = 20U;
	volatile uint64_t t187 = UINT64_MAX;

    t187 = (x749*((x750|x751)>x752));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x754 = -397145016797136LL;
	volatile uint8_t x755 = 20U;
	volatile int8_t x756 = INT8_MIN;
	int32_t t188 = -1;

    t188 = (x753*((x754|x755)>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x757 = UINT16_MAX;
	static uint16_t x758 = 4U;
	static int16_t x759 = -200;
	uint8_t x760 = 42U;
	volatile int32_t t189 = -37997212;

    t189 = (x757*((x758|x759)>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 70782917LLU;
	int16_t x763 = -1;
	int16_t x764 = -1;

    t190 = (x761*((x762|x763)>x764));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = 0;
	int8_t x768 = INT8_MIN;
	int32_t t191 = 1;

    t191 = (x765*((x766|x767)>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	volatile int8_t x771 = 1;
	volatile int32_t x772 = INT32_MAX;
	static volatile int32_t t192 = 40535;

    t192 = (x769*((x770|x771)>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = INT8_MIN;
	int8_t x775 = -13;
	int8_t x776 = INT8_MAX;
	int32_t t193 = -255;

    t193 = (x773*((x774|x775)>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 2406038458989886235LLU;
	volatile int64_t x778 = INT64_MIN;
	int64_t x779 = INT64_MIN;
	int32_t x780 = INT32_MAX;

    t194 = (x777*((x778|x779)>x780));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	uint32_t x782 = UINT32_MAX;
	int64_t x783 = -1LL;
	static volatile int16_t x784 = -1;
	volatile uint32_t t195 = 227385U;

    t195 = (x781*((x782|x783)>x784));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -21433801063LL;
	int32_t x786 = INT32_MIN;
	int64_t x787 = INT64_MAX;
	uint16_t x788 = 0U;
	volatile int64_t t196 = 55LL;

    t196 = (x785*((x786|x787)>x788));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -27129394232504278LL;
	volatile int16_t x790 = INT16_MIN;
	volatile uint32_t x791 = UINT32_MAX;

    t197 = (x789*((x790|x791)>x792));

    if (t197 != -27129394232504278LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = INT8_MAX;
	static int64_t x795 = INT64_MAX;
	int64_t x796 = INT64_MAX;
	int32_t t198 = 15191295;

    t198 = (x793*((x794|x795)>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x798 = INT64_MIN;
	static uint64_t x799 = UINT64_MAX;

    t199 = (x797*((x798|x799)>x800));

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

