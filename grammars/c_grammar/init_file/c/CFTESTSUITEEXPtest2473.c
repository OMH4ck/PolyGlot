
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

int8_t x2 = INT8_MIN;
int8_t x9 = -3;
volatile int32_t t2 = 1201;
int32_t x16 = INT32_MAX;
static int32_t t3 = -86;
int16_t x22 = -1;
volatile uint8_t x28 = UINT8_MAX;
static int32_t x37 = -1;
int32_t x51 = -1;
int8_t x56 = INT8_MIN;
static int64_t x60 = -1LL;
int32_t t14 = 146;
int8_t x67 = INT8_MAX;
int16_t x69 = -537;
int8_t x76 = INT8_MIN;
uint32_t x80 = UINT32_MAX;
volatile int32_t x88 = INT32_MIN;
int32_t t21 = 1;
int16_t x91 = 1;
volatile int32_t t22 = -809340;
int8_t x95 = INT8_MIN;
volatile uint64_t x104 = 70LLU;
int32_t t25 = -741821938;
volatile int64_t x110 = -8474066LL;
static int16_t x111 = INT16_MIN;
int32_t x116 = -1;
int32_t t29 = -1;
int64_t x127 = INT64_MIN;
int8_t x129 = -1;
volatile uint32_t x131 = 206U;
uint32_t x136 = 1U;
volatile int64_t x139 = INT64_MAX;
volatile int32_t x140 = INT32_MIN;
int32_t x149 = INT32_MIN;
static int16_t x155 = INT16_MIN;
uint16_t x159 = UINT16_MAX;
uint16_t x164 = 681U;
volatile int64_t x168 = INT64_MAX;
int8_t x170 = INT8_MIN;
static int64_t x179 = 4976LL;
volatile int64_t x180 = INT64_MIN;
static int32_t x188 = INT32_MIN;
static uint32_t x192 = 5117086U;
uint32_t x209 = 0U;
static uint8_t x213 = UINT8_MAX;
int16_t x215 = INT16_MIN;
volatile int32_t t53 = -32096083;
int32_t x222 = 227814;
static int32_t x223 = INT32_MIN;
uint32_t x226 = 497U;
int32_t x229 = -1;
int64_t x232 = 333709652139907LL;
uint8_t x234 = 3U;
static int32_t t58 = 1;
int64_t x238 = INT64_MIN;
int32_t x239 = -4428625;
static uint16_t x252 = 56U;
int32_t t62 = 41563849;
uint16_t x253 = 11678U;
int8_t x256 = 5;
static int8_t x257 = -1;
volatile int8_t x258 = -1;
uint8_t x259 = 1U;
volatile int32_t t64 = 440707553;
static int32_t x262 = INT32_MIN;
int8_t x264 = INT8_MIN;
int16_t x277 = INT16_MAX;
volatile int64_t x283 = -3631836LL;
int64_t x286 = 214500197794508LL;
volatile int32_t t71 = 44;
int32_t x300 = INT32_MIN;
static int32_t x301 = INT32_MIN;
int64_t x311 = -241985461781LL;
static volatile uint32_t x313 = UINT32_MAX;
int64_t x316 = 711634112325LL;
volatile int32_t t78 = -308589572;
static int32_t x317 = INT32_MIN;
volatile int32_t x323 = -433;
int32_t t82 = -2820434;
static uint8_t x333 = 2U;
volatile uint8_t x335 = UINT8_MAX;
int8_t x338 = -37;
int64_t x342 = -170566942LL;
uint32_t x344 = 64038810U;
uint64_t x345 = 16LLU;
volatile int32_t t87 = 360263;
int32_t t89 = 32;
static int64_t x367 = -1LL;
uint64_t x372 = 2015796191LLU;
int16_t x373 = -1;
volatile int32_t t94 = 1;
uint16_t x383 = UINT16_MAX;
static int64_t x384 = -1127849205075640790LL;
int16_t x388 = -15;
int16_t x393 = INT16_MIN;
static int32_t t98 = 6257659;
int32_t x404 = INT32_MAX;
int64_t x409 = -498LL;
int16_t x418 = -448;
int32_t t104 = 1;
int32_t x421 = INT32_MIN;
uint16_t x423 = UINT16_MAX;
int64_t x428 = -181404678166689LL;
static volatile int32_t t106 = 0;
int8_t x431 = INT8_MAX;
int64_t x432 = -1LL;
volatile int32_t t108 = -2171264;
int64_t x443 = INT64_MIN;
volatile int8_t x444 = -1;
uint16_t x454 = UINT16_MAX;
static uint64_t x458 = 763985845893383LLU;
static int32_t x461 = 27518;
volatile int32_t t115 = 1;
uint32_t x471 = 1582690505U;
uint8_t x475 = UINT8_MAX;
static uint8_t x491 = UINT8_MAX;
int64_t x492 = INT64_MAX;
static volatile int32_t t122 = 59254;
int32_t x494 = INT32_MIN;
volatile int32_t t123 = 1519;
int64_t x497 = INT64_MAX;
volatile int32_t t124 = -4134026;
static int16_t x504 = -1;
static int64_t x512 = 28433608823LL;
int8_t x519 = INT8_MIN;
uint8_t x522 = UINT8_MAX;
uint16_t x530 = 38U;
int64_t x534 = 247363082567LL;
int32_t x543 = INT32_MIN;
static uint64_t x547 = 150097229529LLU;
static int64_t x555 = INT64_MAX;
static volatile int32_t t141 = 9738430;
uint32_t x583 = UINT32_MAX;
int32_t t146 = 109;
int8_t x594 = INT8_MIN;
volatile int32_t x596 = INT32_MAX;
int16_t x598 = 37;
static int8_t x599 = INT8_MIN;
int64_t x603 = INT64_MAX;
uint8_t x604 = 48U;
static int8_t x607 = -11;
int16_t x612 = -1;
static int32_t t152 = -8183;
uint64_t x614 = 130005LLU;
volatile int32_t x615 = 16;
int8_t x623 = INT8_MIN;
static volatile int16_t x628 = INT16_MIN;
static int32_t x633 = -72528234;
int64_t x634 = -1LL;
static volatile int32_t x635 = INT32_MAX;
uint8_t x636 = 2U;
static int64_t x637 = INT64_MIN;
int64_t x638 = INT64_MIN;
uint16_t x640 = 30555U;
uint16_t x645 = 1009U;
static volatile uint16_t x646 = UINT16_MAX;
int32_t t161 = -3684852;
int32_t x657 = INT32_MAX;
int32_t x660 = -1;
volatile int32_t t164 = -1034075303;
volatile int32_t t165 = 40;
int64_t x667 = -1LL;
static int16_t x675 = 0;
static int64_t x680 = INT64_MIN;
int64_t x682 = INT64_MIN;
static volatile int8_t x685 = 26;
static volatile int8_t x686 = INT8_MIN;
int16_t x689 = INT16_MAX;
int64_t x692 = -167LL;
static volatile int32_t t174 = -9;
volatile int16_t x701 = INT16_MIN;
int8_t x705 = -63;
uint64_t x706 = 15LLU;
static int16_t x708 = -1;
volatile int16_t x717 = INT16_MAX;
volatile int32_t t180 = 586491292;
uint32_t x726 = UINT32_MAX;
static uint64_t x739 = 1026757665LLU;
int8_t x745 = 6;
int32_t x748 = -65907;
int64_t x751 = INT64_MIN;
uint8_t x758 = UINT8_MAX;
int32_t t189 = 244822223;
int32_t t190 = -1012374;
volatile int64_t x772 = INT64_MIN;
uint64_t x786 = UINT64_MAX;
int32_t x790 = -1;
volatile int32_t t197 = 20128653;
uint16_t x795 = 10U;


void f0(void) {
    	uint8_t x1 = 15U;
	uint32_t x3 = 5113U;
	int32_t x4 = -1;
	volatile int32_t t0 = -117558624;

    t0 = (x1>((x2|x3)>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MIN;
	volatile uint16_t x6 = 7888U;
	int64_t x7 = INT64_MAX;
	uint8_t x8 = 0U;
	int32_t t1 = 14;

    t1 = (x5>((x6|x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x10 = 56U;
	int8_t x11 = INT8_MAX;
	int16_t x12 = 733;

    t2 = (x9>((x10|x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x13 = 5;
	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MAX;

    t3 = (x13>((x14|x15)>x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 1LLU;
	volatile int8_t x18 = INT8_MIN;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 24;

    t4 = (x17>((x18|x19)>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = -1;
	int16_t x23 = INT16_MIN;
	static volatile uint32_t x24 = 104275727U;
	volatile int32_t t5 = -69051211;

    t5 = (x21>((x22|x23)>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 713000U;
	uint32_t x26 = 88353U;
	static int64_t x27 = -1LL;
	volatile int32_t t6 = -564095659;

    t6 = (x25>((x26|x27)>x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	static volatile uint64_t x30 = 408591LLU;
	volatile int32_t x31 = 2;
	int64_t x32 = -508150059844144LL;
	int32_t t7 = -666125;

    t7 = (x29>((x30|x31)>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 134934690U;
	int8_t x34 = INT8_MAX;
	int64_t x35 = -1LL;
	static int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = 537;

    t8 = (x33>((x34|x35)>x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	uint64_t x40 = 1122986020LLU;
	static volatile int32_t t9 = 33;

    t9 = (x37>((x38|x39)>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MIN;
	volatile int32_t x42 = INT32_MIN;
	static int16_t x43 = 1;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -532841658;

    t10 = (x41>((x42|x43)>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	volatile int8_t x46 = INT8_MAX;
	int64_t x47 = -12340549LL;
	int8_t x48 = INT8_MAX;
	int32_t t11 = -85952;

    t11 = (x45>((x46|x47)>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	volatile int64_t x50 = 38258328817484LL;
	int32_t x52 = -1;
	volatile int32_t t12 = 255982;

    t12 = (x49>((x50|x51)>x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = 52U;
	int64_t x54 = -1202535919LL;
	int32_t x55 = INT32_MIN;
	volatile int32_t t13 = 405476;

    t13 = (x53>((x54|x55)>x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int64_t x58 = -1LL;
	int64_t x59 = -2975LL;

    t14 = (x57>((x58|x59)>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	uint16_t x62 = 175U;
	int8_t x63 = INT8_MAX;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = -26738531;

    t15 = (x61>((x62|x63)>x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 15735U;
	int16_t x66 = INT16_MIN;
	static int8_t x68 = -1;
	int32_t t16 = 6;

    t16 = (x65>((x66|x67)>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x70 = UINT8_MAX;
	int32_t x71 = INT32_MIN;
	int64_t x72 = 25LL;
	volatile int32_t t17 = 6582;

    t17 = (x69>((x70|x71)>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 50U;
	static uint8_t x74 = 18U;
	int8_t x75 = INT8_MAX;
	static int32_t t18 = -161;

    t18 = (x73>((x74|x75)>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = -6;
	int8_t x78 = INT8_MIN;
	int64_t x79 = 12885620319083LL;
	volatile int32_t t19 = -19534419;

    t19 = (x77>((x78|x79)>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 14U;
	volatile uint16_t x82 = UINT16_MAX;
	volatile uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -1485;

    t20 = (x81>((x82|x83)>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = 20U;
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = -11;

    t21 = (x85>((x86|x87)>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MIN;
	static int8_t x90 = INT8_MIN;
	int32_t x92 = INT32_MIN;

    t22 = (x89>((x90|x91)>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	static int32_t t23 = 18;

    t23 = (x93>((x94|x95)>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	int8_t x99 = 1;
	int16_t x100 = -177;
	volatile int32_t t24 = -12281;

    t24 = (x97>((x98|x99)>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 1092U;
	uint16_t x102 = UINT16_MAX;
	volatile int8_t x103 = -1;

    t25 = (x101>((x102|x103)>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = UINT32_MAX;
	int64_t x106 = -1LL;
	int16_t x107 = 2;
	int8_t x108 = INT8_MAX;
	int32_t t26 = -3;

    t26 = (x105>((x106|x107)>x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	volatile int16_t x112 = INT16_MIN;
	static int32_t t27 = 24360;

    t27 = (x109>((x110|x111)>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	volatile int64_t x114 = 292LL;
	volatile int64_t x115 = -1LL;
	volatile int32_t t28 = -1892;

    t28 = (x113>((x114|x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	uint32_t x118 = UINT32_MAX;
	static int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MIN;

    t29 = (x117>((x118|x119)>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MAX;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = -1;
	static volatile int32_t t30 = 1045192;

    t30 = (x121>((x122|x123)>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	int32_t x126 = -1;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -511733;

    t31 = (x125>((x126|x127)>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = -1LL;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = 107704959;

    t32 = (x129>((x130|x131)>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MAX;
	int32_t x135 = INT32_MIN;
	volatile int32_t t33 = -962375;

    t33 = (x133>((x134|x135)>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = INT8_MIN;
	static uint8_t x138 = UINT8_MAX;
	static int32_t t34 = 72780;

    t34 = (x137>((x138|x139)>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = -1;
	static int8_t x142 = 0;
	int32_t x143 = -10673270;
	static uint16_t x144 = 10U;
	volatile int32_t t35 = 23158;

    t35 = (x141>((x142|x143)>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x145 = UINT64_MAX;
	volatile int64_t x146 = INT64_MIN;
	volatile int64_t x147 = 27084909LL;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -6;

    t36 = (x145>((x146|x147)>x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = 2686750;
	uint64_t x151 = 15763LLU;
	volatile int8_t x152 = 1;
	int32_t t37 = 106839;

    t37 = (x149>((x150|x151)>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int16_t x154 = -1;
	static int32_t x156 = -1;
	int32_t t38 = 232583;

    t38 = (x153>((x154|x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	volatile int8_t x160 = -1;
	int32_t t39 = -1;

    t39 = (x157>((x158|x159)>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x161 = 46261950LLU;
	volatile int32_t x162 = -21;
	uint16_t x163 = UINT16_MAX;
	static volatile int32_t t40 = -980662457;

    t40 = (x161>((x162|x163)>x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = 1LL;
	volatile int16_t x166 = INT16_MIN;
	int16_t x167 = -1;
	static int32_t t41 = -992;

    t41 = (x165>((x166|x167)>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	static uint32_t x171 = UINT32_MAX;
	uint64_t x172 = UINT64_MAX;
	static int32_t t42 = 41;

    t42 = (x169>((x170|x171)>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x173 = 8090846U;
	int16_t x174 = -1;
	uint8_t x175 = UINT8_MAX;
	static int8_t x176 = INT8_MIN;
	int32_t t43 = -1459;

    t43 = (x173>((x174|x175)>x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x177 = UINT16_MAX;
	volatile int8_t x178 = 3;
	static volatile int32_t t44 = -375873;

    t44 = (x177>((x178|x179)>x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x181 = 59076429674LLU;
	uint64_t x182 = 808849LLU;
	uint64_t x183 = 361736LLU;
	static int16_t x184 = -1;
	volatile int32_t t45 = 23236;

    t45 = (x181>((x182|x183)>x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = -51520953731373LL;
	int32_t x186 = INT32_MAX;
	int16_t x187 = INT16_MIN;
	static int32_t t46 = -3244;

    t46 = (x185>((x186|x187)>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 176U;
	int16_t x190 = INT16_MAX;
	int32_t x191 = INT32_MIN;
	int32_t t47 = -2175;

    t47 = (x189>((x190|x191)>x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 2847669LLU;
	uint32_t x194 = 519632U;
	volatile int32_t x195 = 1;
	int8_t x196 = -1;
	static volatile int32_t t48 = -3;

    t48 = (x193>((x194|x195)>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 0U;
	static volatile int16_t x198 = INT16_MIN;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t49 = 255822;

    t49 = (x197>((x198|x199)>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	static int32_t x202 = 3251198;
	int64_t x203 = -1LL;
	volatile int8_t x204 = INT8_MIN;
	int32_t t50 = 202381264;

    t50 = (x201>((x202|x203)>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	static uint8_t x207 = 0U;
	static uint64_t x208 = 1600890012584560LLU;
	static int32_t t51 = 7041;

    t51 = (x205>((x206|x207)>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = INT64_MAX;
	static int16_t x211 = -1;
	int32_t x212 = INT32_MAX;
	int32_t t52 = -16748;

    t52 = (x209>((x210|x211)>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x214 = -1;
	int32_t x216 = INT32_MAX;

    t53 = (x213>((x214|x215)>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = 582;
	int8_t x218 = 44;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = 1U;
	int32_t t54 = 675354;

    t54 = (x217>((x218|x219)>x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 3U;
	static int64_t x224 = INT64_MIN;
	int32_t t55 = -52549;

    t55 = (x221>((x222|x223)>x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MAX;
	int64_t x227 = -1LL;
	int32_t x228 = -1103;
	int32_t t56 = 53723733;

    t56 = (x225>((x226|x227)>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MIN;
	static int64_t x231 = -5137074943LL;
	volatile int32_t t57 = -60;

    t57 = (x229>((x230|x231)>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	static int16_t x235 = 1;
	uint32_t x236 = 261134392U;

    t58 = (x233>((x234|x235)>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 15570LL;
	volatile int32_t x240 = 690789520;
	int32_t t59 = 470521430;

    t59 = (x237>((x238|x239)>x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MAX;
	int32_t x243 = INT32_MIN;
	int64_t x244 = INT64_MIN;
	int32_t t60 = 165850;

    t60 = (x241>((x242|x243)>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x245 = UINT32_MAX;
	static int8_t x246 = INT8_MAX;
	int32_t x247 = 6;
	static int32_t x248 = -1;
	volatile int32_t t61 = -154808;

    t61 = (x245>((x246|x247)>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 1U;
	int64_t x250 = -12625596484646LL;
	int32_t x251 = 2;

    t62 = (x249>((x250|x251)>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = -875237814LL;
	static volatile int8_t x255 = INT8_MIN;
	int32_t t63 = 29626975;

    t63 = (x253>((x254|x255)>x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x260 = INT16_MAX;

    t64 = (x257>((x258|x259)>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x261 = UINT32_MAX;
	int16_t x263 = INT16_MIN;
	static volatile int32_t t65 = -587280215;

    t65 = (x261>((x262|x263)>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MAX;
	volatile uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MIN;
	uint8_t x268 = 11U;
	volatile int32_t t66 = 390719;

    t66 = (x265>((x266|x267)>x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 3620;
	static int64_t x270 = INT64_MAX;
	int16_t x271 = -8;
	int32_t x272 = -1;
	volatile int32_t t67 = -8731042;

    t67 = (x269>((x270|x271)>x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1LL;
	int8_t x274 = INT8_MIN;
	uint64_t x275 = 509569787579648LLU;
	int64_t x276 = -1LL;
	int32_t t68 = -3920;

    t68 = (x273>((x274|x275)>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x278 = 0;
	uint64_t x279 = UINT64_MAX;
	int8_t x280 = INT8_MIN;
	static int32_t t69 = 165489108;

    t69 = (x277>((x278|x279)>x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 25316U;
	uint64_t x282 = 10866692LLU;
	int16_t x284 = 1;
	int32_t t70 = -3763;

    t70 = (x281>((x282|x283)>x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = INT16_MIN;
	uint8_t x287 = 100U;
	int16_t x288 = INT16_MIN;

    t71 = (x285>((x286|x287)>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 71U;
	volatile int64_t x290 = 7010885LL;
	static int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = -2327;

    t72 = (x289>((x290|x291)>x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MAX;
	int32_t x295 = -195;
	int32_t x296 = 3849575;
	volatile int32_t t73 = -34;

    t73 = (x293>((x294|x295)>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = 4;
	int32_t x298 = 55;
	uint64_t x299 = 32224430LLU;
	static volatile int32_t t74 = -3970;

    t74 = (x297>((x298|x299)>x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = 3126LL;
	volatile int8_t x303 = -1;
	static int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 0;

    t75 = (x301>((x302|x303)>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x305 = -169;
	static volatile int64_t x306 = INT64_MAX;
	static uint64_t x307 = UINT64_MAX;
	volatile int64_t x308 = 6LL;
	volatile int32_t t76 = 5;

    t76 = (x305>((x306|x307)>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 7U;
	int32_t x310 = INT32_MIN;
	uint8_t x312 = 11U;
	static volatile int32_t t77 = 4;

    t77 = (x309>((x310|x311)>x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x314 = INT64_MIN;
	uint64_t x315 = UINT64_MAX;

    t78 = (x313>((x314|x315)>x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = -1;
	static int16_t x319 = INT16_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = -21;

    t79 = (x317>((x318|x319)>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MIN;
	static uint32_t x322 = UINT32_MAX;
	int64_t x324 = -1LL;
	int32_t t80 = 849352972;

    t80 = (x321>((x322|x323)>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x325 = 1532U;
	static int16_t x326 = INT16_MIN;
	int64_t x327 = -1LL;
	static int64_t x328 = 18LL;
	volatile int32_t t81 = 113;

    t81 = (x325>((x326|x327)>x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x329 = 31878LLU;
	int8_t x330 = INT8_MAX;
	uint32_t x331 = 7U;
	volatile int32_t x332 = -1;

    t82 = (x329>((x330|x331)>x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = INT16_MIN;
	uint64_t x336 = 18159LLU;
	volatile int32_t t83 = -164524632;

    t83 = (x333>((x334|x335)>x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = INT32_MIN;
	uint32_t x339 = 655506U;
	int8_t x340 = -1;
	volatile int32_t t84 = -1346;

    t84 = (x337>((x338|x339)>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 30874U;
	volatile int64_t x343 = INT64_MAX;
	int32_t t85 = -499;

    t85 = (x341>((x342|x343)>x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x346 = INT64_MIN;
	int32_t x347 = -1107;
	static uint8_t x348 = UINT8_MAX;
	static volatile int32_t t86 = 88;

    t86 = (x345>((x346|x347)>x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 5U;
	int8_t x350 = INT8_MIN;
	int16_t x351 = -1;
	uint32_t x352 = 606160U;

    t87 = (x349>((x350|x351)>x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 18844187306767055LLU;
	static uint16_t x354 = 390U;
	volatile int8_t x355 = 15;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 1;

    t88 = (x353>((x354|x355)>x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x357 = 1;
	int64_t x358 = -66510061558101LL;
	volatile int8_t x359 = -1;
	int32_t x360 = 1740289;

    t89 = (x357>((x358|x359)>x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 11LLU;
	int8_t x362 = 54;
	volatile int16_t x363 = INT16_MIN;
	static int64_t x364 = -1LL;
	volatile int32_t t90 = -70;

    t90 = (x361>((x362|x363)>x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = -1;
	static uint8_t x366 = 15U;
	uint64_t x368 = 68015619LLU;
	volatile int32_t t91 = -483229;

    t91 = (x365>((x366|x367)>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MIN;
	int8_t x371 = INT8_MIN;
	volatile int32_t t92 = 8;

    t92 = (x369>((x370|x371)>x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint8_t x374 = 5U;
	int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MIN;
	int32_t t93 = -8;

    t93 = (x373>((x374|x375)>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	int32_t x378 = 12;
	static int8_t x379 = INT8_MIN;
	int32_t x380 = -1146349;

    t94 = (x377>((x378|x379)>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	volatile int64_t x382 = INT64_MIN;
	int32_t t95 = -7984;

    t95 = (x381>((x382|x383)>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -4;
	uint8_t x386 = 114U;
	int32_t x387 = -1;
	int32_t t96 = -5078;

    t96 = (x385>((x386|x387)>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1;
	int64_t x390 = INT64_MIN;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = -46716515LL;
	volatile int32_t t97 = 944;

    t97 = (x389>((x390|x391)>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = UINT16_MAX;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t x396 = 297158301316952626LLU;

    t98 = (x393>((x394|x395)>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -10;
	int16_t x398 = INT16_MIN;
	int64_t x399 = 233873050LL;
	uint32_t x400 = 14U;
	int32_t t99 = -121328453;

    t99 = (x397>((x398|x399)>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x401 = 3720255162859138LLU;
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = -1;
	static int32_t t100 = 439;

    t100 = (x401>((x402|x403)>x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 334360;
	static int8_t x406 = -1;
	static int16_t x407 = -1;
	int64_t x408 = -1LL;
	int32_t t101 = 5260465;

    t101 = (x405>((x406|x407)>x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = INT32_MIN;
	volatile uint8_t x411 = 1U;
	int64_t x412 = -1LL;
	int32_t t102 = 35948;

    t102 = (x409>((x410|x411)>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 271211294826257436LLU;
	volatile int8_t x414 = INT8_MIN;
	static uint16_t x415 = 140U;
	static int8_t x416 = -26;
	volatile int32_t t103 = -505;

    t103 = (x413>((x414|x415)>x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = 33U;
	volatile uint8_t x419 = 12U;
	int32_t x420 = -5;

    t104 = (x417>((x418|x419)>x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x422 = 3U;
	uint8_t x424 = 8U;
	volatile int32_t t105 = -38419653;

    t105 = (x421>((x422|x423)>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	uint32_t x426 = 1021948573U;
	int32_t x427 = INT32_MIN;

    t106 = (x425>((x426|x427)>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 4065U;
	int16_t x430 = -1;
	volatile int32_t t107 = -408483967;

    t107 = (x429>((x430|x431)>x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	int64_t x434 = INT64_MAX;
	int32_t x435 = -1;
	volatile int8_t x436 = -5;

    t108 = (x433>((x434|x435)>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 7U;
	int32_t x438 = INT32_MIN;
	volatile uint16_t x439 = 210U;
	uint16_t x440 = 3471U;
	static int32_t t109 = 1;

    t109 = (x437>((x438|x439)>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x441 = 62U;
	static int32_t x442 = -1;
	static volatile int32_t t110 = 248;

    t110 = (x441>((x442|x443)>x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	int32_t x446 = -1;
	uint16_t x447 = 378U;
	uint16_t x448 = 4056U;
	static int32_t t111 = 818398;

    t111 = (x445>((x446|x447)>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 6160891U;
	int32_t x450 = -19549;
	int16_t x451 = -1;
	int64_t x452 = INT64_MIN;
	volatile int32_t t112 = 0;

    t112 = (x449>((x450|x451)>x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	volatile int64_t x455 = INT64_MAX;
	uint8_t x456 = UINT8_MAX;
	volatile int32_t t113 = 7;

    t113 = (x453>((x454|x455)>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	volatile int32_t x459 = 184227;
	int16_t x460 = INT16_MIN;
	volatile int32_t t114 = 30;

    t114 = (x457>((x458|x459)>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x462 = 874367985235LLU;
	int16_t x463 = -1;
	int8_t x464 = -10;

    t115 = (x461>((x462|x463)>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	uint64_t x466 = 191809115566405LLU;
	int16_t x467 = INT16_MIN;
	int64_t x468 = INT64_MIN;
	int32_t t116 = 642225693;

    t116 = (x465>((x466|x467)>x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 43U;
	static int16_t x470 = INT16_MIN;
	volatile uint8_t x472 = 11U;
	static int32_t t117 = 1241;

    t117 = (x469>((x470|x471)>x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = 491400280;
	volatile int32_t x474 = -1;
	uint32_t x476 = 15U;
	static volatile int32_t t118 = -1665;

    t118 = (x473>((x474|x475)>x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = 1972LL;
	int32_t x478 = INT32_MAX;
	int64_t x479 = INT64_MAX;
	int32_t x480 = INT32_MIN;
	volatile int32_t t119 = -49;

    t119 = (x477>((x478|x479)>x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = -1;
	uint64_t x482 = 4LLU;
	volatile uint64_t x483 = 51287095832790237LLU;
	static volatile int32_t x484 = INT32_MIN;
	volatile int32_t t120 = -1357;

    t120 = (x481>((x482|x483)>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	int8_t x486 = INT8_MIN;
	int64_t x487 = INT64_MAX;
	static int32_t x488 = INT32_MAX;
	int32_t t121 = 1244;

    t121 = (x485>((x486|x487)>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	static uint8_t x490 = 1U;

    t122 = (x489>((x490|x491)>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x493 = 199;
	int32_t x495 = -1;
	int64_t x496 = 19479631819455563LL;

    t123 = (x493>((x494|x495)>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x498 = 13U;
	int8_t x499 = INT8_MIN;
	volatile uint8_t x500 = 1U;

    t124 = (x497>((x498|x499)>x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = INT64_MAX;
	uint16_t x502 = 1U;
	int64_t x503 = -1LL;
	int32_t t125 = 1;

    t125 = (x501>((x502|x503)>x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = INT16_MAX;
	int16_t x506 = -1;
	int64_t x507 = INT64_MIN;
	int8_t x508 = INT8_MIN;
	static int32_t t126 = 0;

    t126 = (x505>((x506|x507)>x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x509 = UINT16_MAX;
	uint8_t x510 = UINT8_MAX;
	static volatile int32_t x511 = INT32_MIN;
	int32_t t127 = -179;

    t127 = (x509>((x510|x511)>x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = 16245405LL;
	uint32_t x514 = 237454076U;
	uint64_t x515 = 200365738671752LLU;
	int32_t x516 = INT32_MAX;
	int32_t t128 = -1;

    t128 = (x513>((x514|x515)>x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	static volatile int32_t x518 = 6526;
	volatile uint32_t x520 = UINT32_MAX;
	int32_t t129 = 36624;

    t129 = (x517>((x518|x519)>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 1;
	int8_t x523 = INT8_MAX;
	int32_t x524 = INT32_MAX;
	volatile int32_t t130 = 218191856;

    t130 = (x521>((x522|x523)>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 315U;
	int32_t x526 = -1;
	volatile int8_t x527 = INT8_MAX;
	volatile int16_t x528 = INT16_MIN;
	static volatile int32_t t131 = -171118;

    t131 = (x525>((x526|x527)>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	static int64_t x531 = 645910LL;
	uint16_t x532 = UINT16_MAX;
	static int32_t t132 = -44;

    t132 = (x529>((x530|x531)>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = UINT32_MAX;
	int8_t x535 = 1;
	int8_t x536 = -7;
	int32_t t133 = 1856853;

    t133 = (x533>((x534|x535)>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = UINT8_MAX;
	int32_t x538 = INT32_MAX;
	int16_t x539 = INT16_MIN;
	int64_t x540 = 45LL;
	int32_t t134 = -1;

    t134 = (x537>((x538|x539)>x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	uint64_t x542 = UINT64_MAX;
	uint8_t x544 = 0U;
	static volatile int32_t t135 = -767;

    t135 = (x541>((x542|x543)>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x545 = 61U;
	static uint8_t x546 = 39U;
	int16_t x548 = INT16_MIN;
	static volatile int32_t t136 = 607690177;

    t136 = (x545>((x546|x547)>x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = -1;
	uint32_t x550 = 975081436U;
	static int64_t x551 = -198736639083216LL;
	static int32_t x552 = 2418;
	static int32_t t137 = -258808;

    t137 = (x549>((x550|x551)>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 1473;
	uint16_t x554 = UINT16_MAX;
	static int16_t x556 = INT16_MIN;
	volatile int32_t t138 = 969955810;

    t138 = (x553>((x554|x555)>x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -1;
	volatile int64_t x558 = 634732798688194080LL;
	int64_t x559 = 1LL;
	static uint16_t x560 = UINT16_MAX;
	int32_t t139 = -3028450;

    t139 = (x557>((x558|x559)>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x561 = 17LLU;
	int16_t x562 = INT16_MIN;
	uint64_t x563 = UINT64_MAX;
	uint32_t x564 = 76641744U;
	int32_t t140 = 3;

    t140 = (x561>((x562|x563)>x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = INT8_MIN;
	uint8_t x566 = 33U;
	uint32_t x567 = 101U;
	int16_t x568 = -113;

    t141 = (x565>((x566|x567)>x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x569 = UINT8_MAX;
	volatile uint16_t x570 = UINT16_MAX;
	int32_t x571 = INT32_MAX;
	static int16_t x572 = 19;
	static volatile int32_t t142 = 97863;

    t142 = (x569>((x570|x571)>x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = 593;
	static uint8_t x574 = 44U;
	uint32_t x575 = UINT32_MAX;
	uint32_t x576 = 31755U;
	volatile int32_t t143 = 41434238;

    t143 = (x573>((x574|x575)>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x577 = -1;
	int32_t x578 = INT32_MAX;
	uint32_t x579 = 96U;
	int8_t x580 = -1;
	int32_t t144 = -426184;

    t144 = (x577>((x578|x579)>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	volatile uint8_t x582 = 34U;
	uint64_t x584 = 27867488417LLU;
	int32_t t145 = -1417412;

    t145 = (x581>((x582|x583)>x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int64_t x586 = INT64_MIN;
	int32_t x587 = -1;
	uint32_t x588 = UINT32_MAX;

    t146 = (x585>((x586|x587)>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = 1;
	int64_t x590 = 526150132985093064LL;
	int32_t x591 = INT32_MIN;
	volatile int32_t x592 = INT32_MIN;
	volatile int32_t t147 = -2;

    t147 = (x589>((x590|x591)>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 71U;
	int32_t x595 = 894;
	int32_t t148 = -1;

    t148 = (x593>((x594|x595)>x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int16_t x600 = -1;
	int32_t t149 = 12706;

    t149 = (x597>((x598|x599)>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x601 = INT32_MIN;
	int64_t x602 = INT64_MIN;
	volatile int32_t t150 = -9478;

    t150 = (x601>((x602|x603)>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	static uint32_t x606 = UINT32_MAX;
	int8_t x608 = INT8_MAX;
	static volatile int32_t t151 = 819852505;

    t151 = (x605>((x606|x607)>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 2215U;
	int8_t x610 = INT8_MAX;
	int8_t x611 = -1;

    t152 = (x609>((x610|x611)>x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 130737U;
	uint32_t x616 = 54U;
	volatile int32_t t153 = 94077;

    t153 = (x613>((x614|x615)>x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MIN;
	uint32_t x618 = UINT32_MAX;
	static int16_t x619 = INT16_MIN;
	int64_t x620 = -42LL;
	static volatile int32_t t154 = -243751262;

    t154 = (x617>((x618|x619)>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MIN;
	uint16_t x622 = 5U;
	int64_t x624 = INT64_MIN;
	volatile int32_t t155 = 10214981;

    t155 = (x621>((x622|x623)>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -4;
	volatile int64_t x626 = INT64_MIN;
	volatile uint32_t x627 = 1000035646U;
	int32_t t156 = -955243;

    t156 = (x625>((x626|x627)>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	uint8_t x630 = 14U;
	int16_t x631 = -310;
	static int8_t x632 = -1;
	static volatile int32_t t157 = 191807083;

    t157 = (x629>((x630|x631)>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t t158 = -16435405;

    t158 = (x633>((x634|x635)>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x639 = INT64_MIN;
	int32_t t159 = -1;

    t159 = (x637>((x638|x639)>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -9473;
	static int16_t x642 = -1;
	static uint8_t x643 = UINT8_MAX;
	static int32_t x644 = -1;
	volatile int32_t t160 = -11528;

    t160 = (x641>((x642|x643)>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x647 = 34416LLU;
	int32_t x648 = 1;

    t161 = (x645>((x646|x647)>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x649 = 1U;
	uint32_t x650 = UINT32_MAX;
	uint64_t x651 = 1471742922899LLU;
	int64_t x652 = -1359713547LL;
	int32_t t162 = -25265;

    t162 = (x649>((x650|x651)>x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = INT32_MIN;
	uint32_t x654 = 153U;
	uint8_t x655 = 16U;
	static uint32_t x656 = 56U;
	volatile int32_t t163 = 27071849;

    t163 = (x653>((x654|x655)>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x658 = INT64_MIN;
	volatile int32_t x659 = INT32_MIN;

    t164 = (x657>((x658|x659)>x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = UINT32_MAX;
	volatile int8_t x662 = INT8_MIN;
	volatile uint8_t x663 = 23U;
	volatile int16_t x664 = 11190;

    t165 = (x661>((x662|x663)>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x665 = 182LLU;
	volatile int16_t x666 = INT16_MAX;
	int8_t x668 = INT8_MIN;
	int32_t t166 = -1;

    t166 = (x665>((x666|x667)>x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x669 = UINT64_MAX;
	uint64_t x670 = 432604LLU;
	static volatile int16_t x671 = -1;
	int32_t x672 = -1;
	volatile int32_t t167 = -148848;

    t167 = (x669>((x670|x671)>x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = 2;
	int32_t x674 = INT32_MAX;
	int8_t x676 = INT8_MIN;
	int32_t t168 = 3648;

    t168 = (x673>((x674|x675)>x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x677 = INT16_MIN;
	int64_t x678 = INT64_MIN;
	static int16_t x679 = 0;
	volatile int32_t t169 = -1507244;

    t169 = (x677>((x678|x679)>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x681 = 402848269830419LLU;
	volatile uint16_t x683 = 10U;
	int8_t x684 = 28;
	int32_t t170 = 174;

    t170 = (x681>((x682|x683)>x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x687 = INT64_MIN;
	uint64_t x688 = 2886958333LLU;
	volatile int32_t t171 = -31399046;

    t171 = (x685>((x686|x687)>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = 2U;
	static int16_t x691 = -1;
	volatile int32_t t172 = -237;

    t172 = (x689>((x690|x691)>x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 14U;
	int32_t x694 = -21800826;
	uint16_t x695 = UINT16_MAX;
	int8_t x696 = INT8_MAX;
	static int32_t t173 = 8;

    t173 = (x693>((x694|x695)>x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = 1089U;
	static int32_t x698 = INT32_MIN;
	static int32_t x699 = -4;
	static uint64_t x700 = 3802631610446LLU;

    t174 = (x697>((x698|x699)>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x702 = INT64_MIN;
	static int8_t x703 = 6;
	uint16_t x704 = UINT16_MAX;
	volatile int32_t t175 = -30709047;

    t175 = (x701>((x702|x703)>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x707 = 0;
	volatile int32_t t176 = -9;

    t176 = (x705>((x706|x707)>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = INT16_MAX;
	static volatile int32_t x710 = 364846567;
	static int64_t x711 = INT64_MIN;
	int8_t x712 = 1;
	int32_t t177 = -4;

    t177 = (x709>((x710|x711)>x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 28347238531579LLU;
	int16_t x714 = INT16_MIN;
	uint8_t x715 = 8U;
	static int8_t x716 = -1;
	volatile int32_t t178 = 323071495;

    t178 = (x713>((x714|x715)>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x718 = INT32_MIN;
	uint32_t x719 = 197101U;
	volatile int32_t x720 = INT32_MIN;
	static int32_t t179 = 91;

    t179 = (x717>((x718|x719)>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	volatile int32_t x722 = -1;
	int64_t x723 = INT64_MIN;
	uint16_t x724 = 1737U;

    t180 = (x721>((x722|x723)>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = INT64_MIN;
	int32_t x727 = INT32_MIN;
	int64_t x728 = -1LL;
	int32_t t181 = -94;

    t181 = (x725>((x726|x727)>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = 1;
	int32_t x730 = -1;
	uint16_t x731 = 1317U;
	int16_t x732 = 3653;
	volatile int32_t t182 = 12297;

    t182 = (x729>((x730|x731)>x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = -1;
	int32_t x734 = INT32_MIN;
	int8_t x735 = 12;
	int16_t x736 = INT16_MIN;
	volatile int32_t t183 = -1053380367;

    t183 = (x733>((x734|x735)>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MAX;
	uint16_t x738 = 198U;
	int16_t x740 = -1;
	int32_t t184 = 16;

    t184 = (x737>((x738|x739)>x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 13U;
	uint64_t x742 = UINT64_MAX;
	int64_t x743 = INT64_MAX;
	uint32_t x744 = 32991669U;
	volatile int32_t t185 = 12;

    t185 = (x741>((x742|x743)>x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x746 = UINT16_MAX;
	int16_t x747 = -50;
	static volatile int32_t t186 = -991527;

    t186 = (x745>((x746|x747)>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -914;
	int16_t x750 = INT16_MIN;
	uint8_t x752 = 95U;
	volatile int32_t t187 = -1359;

    t187 = (x749>((x750|x751)>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	uint16_t x754 = 2301U;
	static int8_t x755 = 27;
	int8_t x756 = INT8_MAX;
	static volatile int32_t t188 = -37346893;

    t188 = (x753>((x754|x755)>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = INT16_MAX;
	static uint16_t x759 = 0U;
	int16_t x760 = -1;

    t189 = (x757>((x758|x759)>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	static volatile uint32_t x762 = UINT32_MAX;
	int16_t x763 = -1994;
	volatile uint8_t x764 = UINT8_MAX;

    t190 = (x761>((x762|x763)>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x765 = 13U;
	uint32_t x766 = 107U;
	int64_t x767 = INT64_MAX;
	volatile uint32_t x768 = UINT32_MAX;
	int32_t t191 = -1;

    t191 = (x765>((x766|x767)>x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MAX;
	static int64_t x770 = -1LL;
	uint64_t x771 = 41984530980LLU;
	static volatile int32_t t192 = 1;

    t192 = (x769>((x770|x771)>x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 211U;
	int16_t x774 = 2979;
	static volatile int64_t x775 = 2479690285042050LL;
	volatile uint64_t x776 = UINT64_MAX;
	int32_t t193 = -30;

    t193 = (x773>((x774|x775)>x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = -1LL;
	int8_t x778 = -10;
	int8_t x779 = INT8_MAX;
	int16_t x780 = INT16_MIN;
	volatile int32_t t194 = 404892;

    t194 = (x777>((x778|x779)>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	volatile int32_t x782 = INT32_MIN;
	int16_t x783 = 28;
	volatile int32_t x784 = -34;
	static int32_t t195 = -515253815;

    t195 = (x781>((x782|x783)>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -5;
	uint8_t x787 = 0U;
	int8_t x788 = INT8_MIN;
	volatile int32_t t196 = -444778;

    t196 = (x785>((x786|x787)>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = 2750;
	static int64_t x791 = -1LL;
	int32_t x792 = INT32_MAX;

    t197 = (x789>((x790|x791)>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	static volatile uint64_t x794 = 12024258656615LLU;
	int16_t x796 = INT16_MAX;
	static int32_t t198 = 800146043;

    t198 = (x793>((x794|x795)>x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	int8_t x798 = INT8_MAX;
	uint8_t x799 = 1U;
	volatile uint8_t x800 = 0U;
	int32_t t199 = 912201044;

    t199 = (x797>((x798|x799)>x800));

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

