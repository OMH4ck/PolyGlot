
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

static volatile int64_t x2 = INT64_MAX;
int32_t x5 = 39647942;
int64_t x7 = -24651335404LL;
volatile int32_t x8 = -362268207;
volatile int32_t t2 = 1;
volatile int32_t t3 = -11083;
volatile uint8_t x27 = 67U;
int16_t x32 = INT16_MIN;
int16_t x33 = -42;
int64_t x37 = 216923579360254216LL;
uint8_t x41 = 20U;
int64_t x44 = INT64_MAX;
static int32_t t10 = 223338974;
uint32_t x46 = UINT32_MAX;
uint8_t x50 = UINT8_MAX;
static uint16_t x53 = UINT16_MAX;
volatile int32_t t13 = 0;
uint64_t x78 = 100733791994LLU;
int8_t x79 = INT8_MAX;
static int16_t x84 = 11;
volatile int32_t x85 = 15538;
int8_t x95 = INT8_MAX;
int16_t x102 = -2;
int16_t x108 = INT16_MAX;
int64_t x109 = 71LL;
volatile int16_t x112 = INT16_MIN;
uint8_t x114 = 88U;
int32_t x115 = 192084;
int16_t x119 = INT16_MAX;
int64_t x121 = -1LL;
int32_t x122 = -1;
int16_t x127 = INT16_MAX;
uint64_t x132 = UINT64_MAX;
static int8_t x135 = INT8_MIN;
int8_t x139 = -1;
int32_t x140 = INT32_MIN;
uint8_t x141 = 13U;
int64_t x147 = INT64_MIN;
int64_t x148 = -2LL;
volatile int32_t x151 = -1;
int16_t x153 = INT16_MIN;
int16_t x156 = INT16_MIN;
volatile int64_t x162 = INT64_MIN;
int8_t x163 = -24;
volatile int8_t x175 = INT8_MAX;
volatile int32_t t42 = -50662;
int64_t x177 = INT64_MIN;
uint8_t x179 = 22U;
volatile int32_t t43 = -606585;
uint8_t x185 = 0U;
static int16_t x188 = 18;
int32_t t45 = -16716;
int16_t x189 = -1;
volatile int32_t x192 = INT32_MAX;
volatile uint8_t x193 = 1U;
int16_t x198 = INT16_MIN;
int8_t x199 = INT8_MIN;
int32_t t49 = -854;
int8_t x208 = -1;
int16_t x209 = INT16_MAX;
int8_t x215 = -4;
volatile int32_t t52 = -182296540;
volatile uint16_t x220 = UINT16_MAX;
int32_t x224 = INT32_MIN;
int8_t x231 = 0;
uint8_t x239 = UINT8_MAX;
int64_t x252 = INT64_MIN;
int32_t t60 = -6;
static volatile int32_t x255 = 24;
static uint16_t x262 = 6U;
static volatile uint32_t x263 = 402U;
uint32_t x265 = UINT32_MAX;
volatile int32_t x279 = INT32_MAX;
int8_t x288 = INT8_MAX;
static int64_t x294 = -1LL;
int32_t x300 = INT32_MIN;
volatile int16_t x301 = INT16_MAX;
int16_t x309 = -1;
int32_t t75 = 309862961;
uint16_t x325 = 14U;
volatile int32_t t80 = 66;
static int8_t x333 = INT8_MAX;
int8_t x338 = INT8_MAX;
volatile uint16_t x342 = 12U;
int16_t x346 = INT16_MIN;
volatile int16_t x355 = INT16_MAX;
int32_t t86 = 13;
uint64_t x357 = 171237824780924021LLU;
volatile int32_t t88 = -117670123;
int8_t x370 = INT8_MIN;
int8_t x377 = -27;
int16_t x381 = -84;
volatile int32_t x388 = INT32_MAX;
volatile int64_t x393 = 118390320LL;
uint32_t x399 = 5635962U;
static volatile int32_t t97 = 5;
uint16_t x401 = 32U;
uint8_t x402 = 2U;
int32_t x404 = INT32_MIN;
volatile int8_t x405 = INT8_MAX;
int16_t x406 = -88;
int16_t x413 = 1;
uint64_t x414 = 10743LLU;
uint8_t x416 = 41U;
volatile int32_t t101 = 5;
volatile int32_t x417 = -1;
volatile uint64_t x418 = UINT64_MAX;
volatile int64_t x421 = 117973LL;
int64_t x429 = INT64_MIN;
uint16_t x431 = UINT16_MAX;
int32_t x435 = 3316;
uint8_t x440 = 122U;
uint8_t x441 = 28U;
uint8_t x442 = UINT8_MAX;
volatile int32_t t109 = 267859953;
int8_t x453 = INT8_MAX;
static volatile int32_t x455 = -1;
int32_t t110 = 4;
int16_t x463 = INT16_MAX;
uint16_t x472 = UINT16_MAX;
volatile int32_t t113 = 189;
int32_t x474 = INT32_MAX;
int32_t x475 = -1;
int32_t t117 = 372230;
uint64_t x489 = 455224687159LLU;
int16_t x492 = INT16_MIN;
int32_t t120 = -88691;
int8_t x502 = -1;
static int32_t x508 = INT32_MIN;
int8_t x513 = 1;
int8_t x518 = INT8_MIN;
int32_t x519 = INT32_MIN;
volatile int16_t x526 = INT16_MAX;
int8_t x527 = INT8_MAX;
int32_t t127 = 68752545;
static int32_t t128 = 200;
uint64_t x541 = UINT64_MAX;
int16_t x543 = INT16_MIN;
int32_t x547 = INT32_MIN;
volatile int32_t t131 = -2024;
int16_t x554 = INT16_MAX;
static int16_t x556 = 9845;
static volatile int64_t x564 = -1LL;
uint8_t x566 = 0U;
static int64_t x571 = INT64_MIN;
int32_t x572 = INT32_MAX;
uint16_t x576 = 12754U;
int64_t x577 = INT64_MAX;
int16_t x580 = INT16_MAX;
int32_t x582 = -556;
int32_t t140 = 1;
int64_t x585 = INT64_MIN;
int32_t x588 = -443988;
volatile int32_t t141 = 60290;
static int32_t x589 = INT32_MAX;
int32_t x603 = -1;
volatile uint16_t x604 = 389U;
int32_t x605 = INT32_MIN;
volatile int8_t x609 = 39;
int16_t x610 = INT16_MIN;
int16_t x615 = 15858;
int16_t x622 = -14251;
volatile uint64_t x631 = 36782672418183LLU;
uint8_t x638 = UINT8_MAX;
uint32_t x639 = 1469U;
int16_t x641 = -2672;
volatile int32_t x642 = INT32_MIN;
volatile int64_t x648 = 686479536891LL;
int16_t x668 = INT16_MIN;
uint16_t x675 = 1U;
int8_t x677 = -4;
volatile uint64_t x682 = UINT64_MAX;
uint64_t x684 = UINT64_MAX;
static volatile int8_t x703 = -3;
volatile uint32_t x708 = 28U;
volatile uint16_t x709 = UINT16_MAX;
volatile uint16_t x713 = 2U;
int8_t x714 = 3;
volatile int32_t x716 = INT32_MIN;
static int64_t x717 = -2LL;
int32_t t174 = 3365;
int32_t x731 = INT32_MIN;
volatile int64_t x734 = INT64_MIN;
volatile int32_t t178 = -1650;
int8_t x742 = INT8_MAX;
uint16_t x753 = 3739U;
int16_t x754 = INT16_MIN;
int16_t x756 = -12586;
static volatile uint16_t x757 = 37U;
volatile int64_t x763 = INT64_MAX;
static volatile int16_t x780 = -1;
volatile int64_t x787 = INT64_MAX;
int16_t x793 = INT16_MIN;
int8_t x795 = -1;
int32_t t190 = 1843808;
int16_t x801 = -1;
int32_t t192 = 452541;
int8_t x810 = INT8_MIN;
static int32_t x814 = -8379603;
int16_t x820 = INT16_MIN;
volatile uint8_t x823 = UINT8_MAX;
static volatile int8_t x827 = -53;
volatile int32_t t198 = -3;


void f0(void) {
    	static int16_t x1 = 58;
	volatile int8_t x3 = -14;
	int32_t x4 = -1;
	static volatile int32_t t0 = 245863466;

    t0 = (x1>((x2<=x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x6 = -4;
	int32_t t1 = 15568;

    t1 = (x5>((x6<=x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int8_t x10 = -1;
	static int64_t x11 = 7050679837257LL;
	int32_t x12 = INT32_MIN;

    t2 = (x9>((x10<=x11)%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 9;
	int16_t x14 = INT16_MIN;
	volatile int64_t x15 = -13107828848186762LL;
	uint64_t x16 = UINT64_MAX;

    t3 = (x13>((x14<=x15)%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = -410807677521LL;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -270921021;

    t4 = (x17>((x18<=x19)%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -22;
	volatile int8_t x22 = -1;
	volatile uint8_t x23 = 14U;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -1255;

    t5 = (x21>((x22<=x23)%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -15;
	static volatile uint16_t x26 = UINT16_MAX;
	volatile int32_t x28 = -1;
	static volatile int32_t t6 = 102469;

    t6 = (x25>((x26<=x27)%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	int32_t x30 = INT32_MAX;
	volatile uint32_t x31 = 0U;
	static volatile int32_t t7 = -162519419;

    t7 = (x29>((x30<=x31)%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	uint16_t x35 = 20U;
	volatile int8_t x36 = 6;
	volatile int32_t t8 = 3676;

    t8 = (x33>((x34<=x35)%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = 1;
	int16_t x39 = INT16_MIN;
	int8_t x40 = 14;
	volatile int32_t t9 = -164;

    t9 = (x37>((x38<=x39)%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = -1;
	int64_t x43 = INT64_MIN;

    t10 = (x41>((x42<=x43)%x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = 236LLU;
	int64_t x47 = INT64_MAX;
	uint16_t x48 = 44U;
	int32_t t11 = -28;

    t11 = (x45>((x46<=x47)%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 16892020LLU;
	static int32_t x51 = -28;
	int8_t x52 = 6;
	volatile int32_t t12 = -7192;

    t12 = (x49>((x50<=x51)%x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = 19U;
	uint16_t x55 = 0U;
	int32_t x56 = INT32_MIN;

    t13 = (x53>((x54<=x55)%x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = -1LL;
	int16_t x58 = -1;
	static int32_t x59 = INT32_MIN;
	uint64_t x60 = UINT64_MAX;
	static int32_t t14 = -1025400516;

    t14 = (x57>((x58<=x59)%x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = 8152775LL;
	int64_t x62 = -1LL;
	uint16_t x63 = UINT16_MAX;
	uint32_t x64 = 109501441U;
	static int32_t t15 = -48662459;

    t15 = (x61>((x62<=x63)%x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 1U;
	uint8_t x66 = 52U;
	uint64_t x67 = 193446739316900LLU;
	int32_t x68 = -1;
	volatile int32_t t16 = 168426630;

    t16 = (x65>((x66<=x67)%x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 32644746138509LLU;
	static uint8_t x70 = 86U;
	int64_t x71 = INT64_MIN;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t17 = 108249;

    t17 = (x69>((x70<=x71)%x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = INT8_MIN;
	int16_t x74 = -1;
	int32_t x75 = 6305572;
	static volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = 185828964;

    t18 = (x73>((x74<=x75)%x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	uint16_t x80 = 13U;
	volatile int32_t t19 = -13981;

    t19 = (x77>((x78<=x79)%x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static int64_t x82 = INT64_MAX;
	volatile int16_t x83 = -1;
	volatile int32_t t20 = 262910279;

    t20 = (x81>((x82<=x83)%x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x86 = 23U;
	int8_t x87 = -1;
	uint16_t x88 = 5795U;
	int32_t t21 = 422015;

    t21 = (x85>((x86<=x87)%x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = UINT16_MAX;
	uint16_t x94 = 606U;
	static int64_t x96 = 1204872848LL;
	int32_t t22 = -2414;

    t22 = (x93>((x94<=x95)%x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MIN;
	int32_t x98 = INT32_MIN;
	int32_t x99 = -967041681;
	volatile int32_t x100 = 21644;
	volatile int32_t t23 = -223;

    t23 = (x97>((x98<=x99)%x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x101 = 3U;
	int8_t x103 = INT8_MIN;
	static int8_t x104 = -1;
	static int32_t t24 = -1777;

    t24 = (x101>((x102<=x103)%x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x105 = 6396507722388LLU;
	int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	int32_t t25 = -91470;

    t25 = (x105>((x106<=x107)%x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x110 = 10U;
	uint32_t x111 = UINT32_MAX;
	volatile int32_t t26 = -67858;

    t26 = (x109>((x110<=x111)%x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -673LL;
	uint32_t x116 = 1948067124U;
	int32_t t27 = 0;

    t27 = (x113>((x114<=x115)%x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = 55;
	static volatile int8_t x118 = INT8_MIN;
	int32_t x120 = INT32_MIN;
	volatile int32_t t28 = -50579;

    t28 = (x117>((x118<=x119)%x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x123 = 0;
	volatile int32_t x124 = 896;
	int32_t t29 = -1012329143;

    t29 = (x121>((x122<=x123)%x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MIN;
	volatile int32_t x128 = INT32_MIN;
	int32_t t30 = -1392977;

    t30 = (x125>((x126<=x127)%x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x129 = -1;
	volatile int64_t x130 = 5195307810LL;
	static int16_t x131 = -1;
	volatile int32_t t31 = 1096155;

    t31 = (x129>((x130<=x131)%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	int64_t x134 = -147618235283284370LL;
	int16_t x136 = INT16_MIN;
	volatile int32_t t32 = -82463738;

    t32 = (x133>((x134<=x135)%x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	static int64_t x138 = 667329109642LL;
	int32_t t33 = -29548374;

    t33 = (x137>((x138<=x139)%x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x142 = INT16_MIN;
	static int8_t x143 = 0;
	int8_t x144 = INT8_MIN;
	volatile int32_t t34 = 252;

    t34 = (x141>((x142<=x143)%x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x145 = UINT8_MAX;
	volatile int16_t x146 = INT16_MAX;
	int32_t t35 = 8;

    t35 = (x145>((x146<=x147)%x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x149 = 3477U;
	int16_t x150 = -1;
	static volatile uint64_t x152 = 1029661710087LLU;
	volatile int32_t t36 = -4990879;

    t36 = (x149>((x150<=x151)%x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x154 = -1;
	volatile int8_t x155 = INT8_MIN;
	int32_t t37 = 406133;

    t37 = (x153>((x154<=x155)%x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x157 = INT32_MIN;
	static volatile int8_t x158 = 38;
	static uint8_t x159 = 4U;
	static volatile uint8_t x160 = 15U;
	volatile int32_t t38 = -30797699;

    t38 = (x157>((x158<=x159)%x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = -3;
	volatile int64_t x164 = INT64_MIN;
	volatile int32_t t39 = 322;

    t39 = (x161>((x162<=x163)%x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	int64_t x167 = 18715772LL;
	int32_t x168 = -3;
	int32_t t40 = 195332687;

    t40 = (x165>((x166<=x167)%x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 109884282080493811LLU;
	int16_t x170 = -159;
	static int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MIN;
	int32_t t41 = 5281;

    t41 = (x169>((x170<=x171)%x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x173 = 11186698947968533LLU;
	uint32_t x174 = UINT32_MAX;
	uint32_t x176 = 1587U;

    t42 = (x173>((x174<=x175)%x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x178 = UINT16_MAX;
	int16_t x180 = INT16_MIN;

    t43 = (x177>((x178<=x179)%x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x181 = 1U;
	int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MIN;
	volatile int32_t x184 = 1;
	int32_t t44 = -1157;

    t44 = (x181>((x182<=x183)%x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x186 = UINT64_MAX;
	static int32_t x187 = -1;

    t45 = (x185>((x186<=x187)%x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x190 = INT64_MIN;
	static int8_t x191 = INT8_MAX;
	volatile int32_t t46 = -314901659;

    t46 = (x189>((x190<=x191)%x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x194 = -5742363;
	volatile int8_t x195 = 31;
	volatile int16_t x196 = INT16_MIN;
	int32_t t47 = -6994854;

    t47 = (x193>((x194<=x195)%x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x197 = 54537LLU;
	int16_t x200 = -1;
	int32_t t48 = 2;

    t48 = (x197>((x198<=x199)%x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = -3240337;
	int32_t x202 = -212;
	static int16_t x203 = INT16_MAX;
	uint16_t x204 = UINT16_MAX;

    t49 = (x201>((x202<=x203)%x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x205 = INT32_MIN;
	volatile int64_t x206 = -2706LL;
	int32_t x207 = INT32_MIN;
	int32_t t50 = -2;

    t50 = (x205>((x206<=x207)%x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x210 = INT64_MAX;
	uint64_t x211 = 8303529116661353LLU;
	static uint32_t x212 = 20307U;
	int32_t t51 = -3641;

    t51 = (x209>((x210<=x211)%x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x213 = INT32_MAX;
	int32_t x214 = -26993;
	volatile uint16_t x216 = 19452U;

    t52 = (x213>((x214<=x215)%x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x217 = 829U;
	uint64_t x218 = 407169207LLU;
	int8_t x219 = -1;
	int32_t t53 = 176;

    t53 = (x217>((x218<=x219)%x220));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = 3990;
	int64_t x222 = INT64_MIN;
	uint16_t x223 = UINT16_MAX;
	int32_t t54 = 1;

    t54 = (x221>((x222<=x223)%x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x225 = INT16_MIN;
	uint64_t x226 = 96737963904497LLU;
	volatile int8_t x227 = 34;
	volatile int64_t x228 = INT64_MIN;
	int32_t t55 = 26567;

    t55 = (x225>((x226<=x227)%x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = 10626;
	uint32_t x230 = 65064U;
	static int64_t x232 = -1LL;
	int32_t t56 = -264;

    t56 = (x229>((x230<=x231)%x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x237 = INT32_MAX;
	int32_t x238 = INT32_MIN;
	uint16_t x240 = 360U;
	static volatile int32_t t57 = 0;

    t57 = (x237>((x238<=x239)%x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x241 = INT16_MAX;
	int8_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	int32_t x244 = -1;
	static int32_t t58 = -55;

    t58 = (x241>((x242<=x243)%x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = -1LL;
	int64_t x246 = -1LL;
	int32_t x247 = INT32_MIN;
	uint8_t x248 = 71U;
	volatile int32_t t59 = -1;

    t59 = (x245>((x246<=x247)%x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = 146U;
	volatile int16_t x250 = INT16_MIN;
	volatile uint64_t x251 = 788767533409726LLU;

    t60 = (x249>((x250<=x251)%x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = 9;
	static int64_t x254 = 1596512808758651LL;
	int8_t x256 = 3;
	int32_t t61 = -906;

    t61 = (x253>((x254<=x255)%x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MIN;
	static int32_t x259 = -1;
	static int64_t x260 = INT64_MIN;
	int32_t t62 = 138285;

    t62 = (x257>((x258<=x259)%x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = INT32_MIN;
	volatile int16_t x264 = 3400;
	static volatile int32_t t63 = 87;

    t63 = (x261>((x262<=x263)%x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x266 = INT8_MIN;
	volatile uint32_t x267 = 5U;
	int32_t x268 = -1;
	static volatile int32_t t64 = -955550337;

    t64 = (x265>((x266<=x267)%x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x269 = UINT32_MAX;
	static uint64_t x270 = 2366494919730798LLU;
	int64_t x271 = INT64_MIN;
	int8_t x272 = -36;
	static volatile int32_t t65 = 1;

    t65 = (x269>((x270<=x271)%x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x273 = 1;
	int8_t x274 = INT8_MIN;
	int8_t x275 = -1;
	static volatile int16_t x276 = INT16_MIN;
	volatile int32_t t66 = 20580395;

    t66 = (x273>((x274<=x275)%x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = 8807862;
	volatile int64_t x278 = INT64_MAX;
	volatile int16_t x280 = INT16_MIN;
	volatile int32_t t67 = 2;

    t67 = (x277>((x278<=x279)%x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x281 = 581675641012LLU;
	uint16_t x282 = 115U;
	uint8_t x283 = UINT8_MAX;
	int8_t x284 = -1;
	volatile int32_t t68 = 14;

    t68 = (x281>((x282<=x283)%x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x285 = 3508U;
	volatile uint64_t x286 = UINT64_MAX;
	volatile int16_t x287 = INT16_MAX;
	int32_t t69 = 0;

    t69 = (x285>((x286<=x287)%x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MAX;
	int8_t x292 = INT8_MAX;
	int32_t t70 = 51;

    t70 = (x289>((x290<=x291)%x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x293 = 144982743U;
	uint16_t x295 = 55U;
	static int8_t x296 = INT8_MAX;
	int32_t t71 = 1706;

    t71 = (x293>((x294<=x295)%x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 118U;
	int32_t x298 = -1;
	uint32_t x299 = 34U;
	int32_t t72 = -53;

    t72 = (x297>((x298<=x299)%x300));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x302 = -1;
	int64_t x303 = 0LL;
	volatile int16_t x304 = -1;
	int32_t t73 = -4;

    t73 = (x301>((x302<=x303)%x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = -148332LL;
	uint8_t x306 = 13U;
	static int16_t x307 = -17;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t74 = -747736055;

    t74 = (x305>((x306<=x307)%x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x310 = 951;
	volatile uint64_t x311 = 51146LLU;
	static int16_t x312 = INT16_MIN;

    t75 = (x309>((x310<=x311)%x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x313 = -25;
	volatile int16_t x314 = INT16_MIN;
	int8_t x315 = 1;
	uint64_t x316 = 6985LLU;
	volatile int32_t t76 = -7;

    t76 = (x313>((x314<=x315)%x316));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = INT64_MIN;
	static uint64_t x318 = 45484LLU;
	int64_t x319 = -2097169125LL;
	int16_t x320 = INT16_MAX;
	int32_t t77 = 535830758;

    t77 = (x317>((x318<=x319)%x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = 79U;
	volatile int64_t x322 = INT64_MAX;
	static int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t78 = -891443361;

    t78 = (x321>((x322<=x323)%x324));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x326 = 5541528891959103498LLU;
	uint8_t x327 = 49U;
	uint16_t x328 = 21U;
	volatile int32_t t79 = -5;

    t79 = (x325>((x326<=x327)%x328));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x329 = 689;
	uint8_t x330 = 0U;
	int64_t x331 = INT64_MIN;
	static volatile uint8_t x332 = 65U;

    t80 = (x329>((x330<=x331)%x332));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x334 = INT64_MAX;
	static uint8_t x335 = UINT8_MAX;
	static uint16_t x336 = 878U;
	int32_t t81 = -6772515;

    t81 = (x333>((x334<=x335)%x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x337 = -1;
	int16_t x339 = -1;
	int64_t x340 = -1LL;
	volatile int32_t t82 = 0;

    t82 = (x337>((x338<=x339)%x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x341 = INT64_MIN;
	static volatile int64_t x343 = 1012LL;
	int8_t x344 = -1;
	static int32_t t83 = -1;

    t83 = (x341>((x342<=x343)%x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = INT8_MAX;
	uint32_t x347 = 20079U;
	int16_t x348 = -366;
	volatile int32_t t84 = 56962342;

    t84 = (x345>((x346<=x347)%x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = INT32_MIN;
	int32_t x350 = 1080;
	volatile uint64_t x351 = UINT64_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t85 = 329;

    t85 = (x349>((x350<=x351)%x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x353 = UINT64_MAX;
	int64_t x354 = 2043958LL;
	uint8_t x356 = 12U;

    t86 = (x353>((x354<=x355)%x356));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x358 = INT32_MAX;
	int16_t x359 = INT16_MIN;
	uint8_t x360 = 11U;
	volatile int32_t t87 = -413;

    t87 = (x357>((x358<=x359)%x360));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x361 = INT32_MAX;
	uint16_t x362 = UINT16_MAX;
	static uint64_t x363 = 726253175703LLU;
	uint8_t x364 = UINT8_MAX;

    t88 = (x361>((x362<=x363)%x364));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = -54319193730337LL;
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MAX;
	static volatile uint32_t x368 = UINT32_MAX;
	volatile int32_t t89 = 60915534;

    t89 = (x365>((x366<=x367)%x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x369 = -564896;
	volatile int16_t x371 = -1;
	int16_t x372 = INT16_MIN;
	volatile int32_t t90 = -2079724;

    t90 = (x369>((x370<=x371)%x372));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x373 = UINT16_MAX;
	volatile int32_t x374 = INT32_MAX;
	static uint16_t x375 = UINT16_MAX;
	int32_t x376 = -1;
	static int32_t t91 = 4538;

    t91 = (x373>((x374<=x375)%x376));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x378 = -1;
	int8_t x379 = 40;
	static int8_t x380 = -1;
	static volatile int32_t t92 = 725219;

    t92 = (x377>((x378<=x379)%x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x382 = INT16_MIN;
	uint8_t x383 = 55U;
	static int8_t x384 = INT8_MIN;
	int32_t t93 = -44365;

    t93 = (x381>((x382<=x383)%x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x385 = 108425LLU;
	static int16_t x386 = INT16_MIN;
	static int64_t x387 = 3824138025832257392LL;
	volatile int32_t t94 = 1131256;

    t94 = (x385>((x386<=x387)%x388));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x389 = INT32_MIN;
	uint64_t x390 = 1471LLU;
	int64_t x391 = -1LL;
	uint32_t x392 = 202714825U;
	int32_t t95 = -66980298;

    t95 = (x389>((x390<=x391)%x392));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x394 = -1;
	int64_t x395 = 246143589LL;
	volatile uint16_t x396 = 41U;
	int32_t t96 = 43826847;

    t96 = (x393>((x394<=x395)%x396));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x397 = 36970770070069047LLU;
	int64_t x398 = 257661LL;
	static int16_t x400 = -1;

    t97 = (x397>((x398<=x399)%x400));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x403 = UINT32_MAX;
	volatile int32_t t98 = -41912274;

    t98 = (x401>((x402<=x403)%x404));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x407 = -1;
	uint64_t x408 = 202572LLU;
	volatile int32_t t99 = 3;

    t99 = (x405>((x406<=x407)%x408));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x409 = UINT64_MAX;
	static int64_t x410 = INT64_MIN;
	uint8_t x411 = 0U;
	int32_t x412 = INT32_MIN;
	volatile int32_t t100 = 45;

    t100 = (x409>((x410<=x411)%x412));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x415 = UINT64_MAX;

    t101 = (x413>((x414<=x415)%x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x419 = INT16_MAX;
	int8_t x420 = INT8_MAX;
	int32_t t102 = -7765;

    t102 = (x417>((x418<=x419)%x420));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x422 = -1LL;
	volatile uint16_t x423 = 252U;
	int32_t x424 = 8737;
	int32_t t103 = 0;

    t103 = (x421>((x422<=x423)%x424));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x430 = -1;
	static uint16_t x432 = 9156U;
	static int32_t t104 = -129513;

    t104 = (x429>((x430<=x431)%x432));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x433 = INT32_MIN;
	int32_t x434 = INT32_MIN;
	static int64_t x436 = INT64_MAX;
	volatile int32_t t105 = -176108;

    t105 = (x433>((x434<=x435)%x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x437 = UINT32_MAX;
	static int16_t x438 = 4051;
	int8_t x439 = -1;
	int32_t t106 = 329046165;

    t106 = (x437>((x438<=x439)%x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x443 = -1LL;
	static int32_t x444 = INT32_MIN;
	volatile int32_t t107 = 1;

    t107 = (x441>((x442<=x443)%x444));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x445 = 195985210049LLU;
	uint16_t x446 = 18775U;
	int16_t x447 = -226;
	uint32_t x448 = 376550U;
	int32_t t108 = 129629;

    t108 = (x445>((x446<=x447)%x448));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x449 = -1LL;
	uint8_t x450 = UINT8_MAX;
	volatile int8_t x451 = INT8_MAX;
	uint64_t x452 = UINT64_MAX;

    t109 = (x449>((x450<=x451)%x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x454 = 31U;
	volatile int32_t x456 = INT32_MAX;

    t110 = (x453>((x454<=x455)%x456));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x461 = -1;
	static int16_t x462 = INT16_MIN;
	uint32_t x464 = 238824U;
	volatile int32_t t111 = -12149;

    t111 = (x461>((x462<=x463)%x464));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x465 = INT64_MIN;
	int16_t x466 = INT16_MIN;
	uint8_t x467 = UINT8_MAX;
	volatile uint64_t x468 = 4138802154LLU;
	int32_t t112 = 5280920;

    t112 = (x465>((x466<=x467)%x468));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = 297LL;
	int16_t x470 = -482;
	int16_t x471 = INT16_MIN;

    t113 = (x469>((x470<=x471)%x472));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x473 = UINT64_MAX;
	int16_t x476 = 1;
	int32_t t114 = 3339;

    t114 = (x473>((x474<=x475)%x476));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x477 = UINT16_MAX;
	static int8_t x478 = 0;
	int16_t x479 = INT16_MAX;
	volatile int16_t x480 = INT16_MIN;
	volatile int32_t t115 = -239;

    t115 = (x477>((x478<=x479)%x480));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x481 = 499U;
	volatile int32_t x482 = 26369;
	static int16_t x483 = INT16_MIN;
	volatile int8_t x484 = -17;
	int32_t t116 = 1;

    t116 = (x481>((x482<=x483)%x484));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x485 = 7772;
	int8_t x486 = INT8_MIN;
	static int64_t x487 = INT64_MIN;
	volatile int8_t x488 = INT8_MIN;

    t117 = (x485>((x486<=x487)%x488));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x490 = INT16_MIN;
	uint8_t x491 = 4U;
	int32_t t118 = -2;

    t118 = (x489>((x490<=x491)%x492));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x493 = -1871LL;
	volatile uint64_t x494 = 1119694493323659LLU;
	volatile uint16_t x495 = UINT16_MAX;
	int8_t x496 = INT8_MIN;
	volatile int32_t t119 = -60275347;

    t119 = (x493>((x494<=x495)%x496));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x497 = 1200;
	int16_t x498 = -83;
	volatile uint64_t x499 = 3205191938544LLU;
	volatile int8_t x500 = INT8_MIN;

    t120 = (x497>((x498<=x499)%x500));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x501 = UINT8_MAX;
	static volatile uint64_t x503 = UINT64_MAX;
	static volatile uint64_t x504 = 310715LLU;
	static int32_t t121 = 451703277;

    t121 = (x501>((x502<=x503)%x504));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x505 = INT64_MAX;
	volatile int64_t x506 = INT64_MIN;
	uint16_t x507 = UINT16_MAX;
	volatile int32_t t122 = 8107630;

    t122 = (x505>((x506<=x507)%x508));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x509 = 1U;
	int8_t x510 = -3;
	volatile int16_t x511 = INT16_MAX;
	int32_t x512 = -1;
	int32_t t123 = 42298;

    t123 = (x509>((x510<=x511)%x512));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x514 = INT64_MIN;
	volatile int64_t x515 = INT64_MIN;
	volatile int32_t x516 = INT32_MAX;
	static int32_t t124 = -476401007;

    t124 = (x513>((x514<=x515)%x516));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = 675722930;
	int8_t x520 = INT8_MAX;
	static volatile int32_t t125 = 30466;

    t125 = (x517>((x518<=x519)%x520));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x525 = INT32_MAX;
	static uint16_t x528 = 2U;
	static int32_t t126 = -1554830;

    t126 = (x525>((x526<=x527)%x528));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x529 = 459888543413186LL;
	volatile int8_t x530 = 0;
	uint32_t x531 = UINT32_MAX;
	int16_t x532 = INT16_MAX;

    t127 = (x529>((x530<=x531)%x532));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x533 = -265305051366230958LL;
	int8_t x534 = INT8_MIN;
	static uint32_t x535 = 72865U;
	int8_t x536 = INT8_MIN;

    t128 = (x533>((x534<=x535)%x536));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x537 = 4U;
	uint64_t x538 = 2909939953546535129LLU;
	uint64_t x539 = 30091059363123LLU;
	int64_t x540 = INT64_MAX;
	int32_t t129 = -5244;

    t129 = (x537>((x538<=x539)%x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x542 = 697LLU;
	uint64_t x544 = 11868197456111LLU;
	volatile int32_t t130 = -120017904;

    t130 = (x541>((x542<=x543)%x544));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x545 = 1344U;
	int16_t x546 = 0;
	int32_t x548 = -185695;

    t131 = (x545>((x546<=x547)%x548));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x549 = 1121U;
	int8_t x550 = INT8_MAX;
	int64_t x551 = INT64_MIN;
	int8_t x552 = -1;
	volatile int32_t t132 = 429;

    t132 = (x549>((x550<=x551)%x552));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x555 = INT64_MAX;
	static int32_t t133 = -14794;

    t133 = (x553>((x554<=x555)%x556));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x557 = -1;
	int16_t x558 = INT16_MIN;
	static uint16_t x559 = 0U;
	volatile int32_t x560 = -584908249;
	volatile int32_t t134 = 0;

    t134 = (x557>((x558<=x559)%x560));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x561 = INT32_MAX;
	uint32_t x562 = 2U;
	int32_t x563 = INT32_MIN;
	volatile int32_t t135 = -70721661;

    t135 = (x561>((x562<=x563)%x564));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x565 = 28012U;
	int64_t x567 = -1LL;
	int16_t x568 = -223;
	volatile int32_t t136 = -4695072;

    t136 = (x565>((x566<=x567)%x568));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint32_t x569 = 40726779U;
	int32_t x570 = INT32_MAX;
	int32_t t137 = 234;

    t137 = (x569>((x570<=x571)%x572));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x573 = UINT8_MAX;
	int64_t x574 = -1LL;
	uint64_t x575 = 1850629419416340LLU;
	volatile int32_t t138 = -8417962;

    t138 = (x573>((x574<=x575)%x576));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x578 = 0U;
	uint32_t x579 = 498631U;
	int32_t t139 = 97;

    t139 = (x577>((x578<=x579)%x580));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x581 = UINT16_MAX;
	int16_t x583 = INT16_MAX;
	volatile int32_t x584 = -6154133;

    t140 = (x581>((x582<=x583)%x584));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x586 = INT8_MIN;
	volatile int64_t x587 = 657971LL;

    t141 = (x585>((x586<=x587)%x588));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x590 = UINT32_MAX;
	uint32_t x591 = 157U;
	volatile int8_t x592 = -1;
	volatile int32_t t142 = 764763323;

    t142 = (x589>((x590<=x591)%x592));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x593 = 61U;
	static int32_t x594 = -1;
	int32_t x595 = -46;
	volatile int16_t x596 = INT16_MIN;
	int32_t t143 = -714461;

    t143 = (x593>((x594<=x595)%x596));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x597 = UINT64_MAX;
	volatile int16_t x598 = INT16_MIN;
	int8_t x599 = -1;
	int64_t x600 = 23975262591LL;
	volatile int32_t t144 = 0;

    t144 = (x597>((x598<=x599)%x600));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x601 = INT32_MAX;
	int8_t x602 = INT8_MAX;
	int32_t t145 = -13402;

    t145 = (x601>((x602<=x603)%x604));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x606 = 1054108550223LLU;
	uint16_t x607 = 19069U;
	uint8_t x608 = 124U;
	volatile int32_t t146 = -368266;

    t146 = (x605>((x606<=x607)%x608));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x611 = INT8_MIN;
	static volatile int32_t x612 = 99531;
	int32_t t147 = 6;

    t147 = (x609>((x610<=x611)%x612));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x613 = 117830U;
	uint8_t x614 = 0U;
	int16_t x616 = -1;
	int32_t t148 = -2;

    t148 = (x613>((x614<=x615)%x616));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x617 = 78U;
	uint8_t x618 = UINT8_MAX;
	static int8_t x619 = -1;
	uint32_t x620 = UINT32_MAX;
	volatile int32_t t149 = -474;

    t149 = (x617>((x618<=x619)%x620));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x621 = 336U;
	int16_t x623 = -5692;
	int64_t x624 = INT64_MIN;
	int32_t t150 = 50054;

    t150 = (x621>((x622<=x623)%x624));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x625 = -1;
	int16_t x626 = INT16_MIN;
	volatile uint64_t x627 = 2495LLU;
	int64_t x628 = INT64_MIN;
	volatile int32_t t151 = 190;

    t151 = (x625>((x626<=x627)%x628));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x629 = -1;
	int64_t x630 = INT64_MIN;
	int16_t x632 = -1;
	int32_t t152 = -1;

    t152 = (x629>((x630<=x631)%x632));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x633 = UINT32_MAX;
	int8_t x634 = -1;
	uint8_t x635 = 3U;
	int32_t x636 = INT32_MIN;
	int32_t t153 = -6;

    t153 = (x633>((x634<=x635)%x636));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x637 = UINT64_MAX;
	int64_t x640 = INT64_MIN;
	volatile int32_t t154 = 9625258;

    t154 = (x637>((x638<=x639)%x640));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x643 = 252942346711192378LLU;
	int32_t x644 = -1;
	int32_t t155 = -585760;

    t155 = (x641>((x642<=x643)%x644));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x645 = UINT64_MAX;
	uint32_t x646 = 49482U;
	uint32_t x647 = 3U;
	int32_t t156 = -230881;

    t156 = (x645>((x646<=x647)%x648));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x649 = INT8_MAX;
	uint64_t x650 = UINT64_MAX;
	uint8_t x651 = 3U;
	int16_t x652 = INT16_MIN;
	volatile int32_t t157 = -850168857;

    t157 = (x649>((x650<=x651)%x652));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x653 = INT32_MAX;
	static int64_t x654 = INT64_MIN;
	volatile int16_t x655 = 1;
	volatile int32_t x656 = -1762328;
	volatile int32_t t158 = 3682444;

    t158 = (x653>((x654<=x655)%x656));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x661 = -1;
	uint64_t x662 = 439712509288198LLU;
	uint32_t x663 = 0U;
	static int8_t x664 = INT8_MIN;
	int32_t t159 = 114;

    t159 = (x661>((x662<=x663)%x664));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x665 = 5327008913477437730LLU;
	uint32_t x666 = UINT32_MAX;
	volatile int16_t x667 = INT16_MIN;
	int32_t t160 = -166556470;

    t160 = (x665>((x666<=x667)%x668));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x669 = UINT64_MAX;
	int64_t x670 = INT64_MAX;
	uint64_t x671 = 4606LLU;
	volatile int16_t x672 = INT16_MIN;
	int32_t t161 = -6188539;

    t161 = (x669>((x670<=x671)%x672));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x673 = UINT64_MAX;
	static int32_t x674 = 0;
	static volatile uint8_t x676 = UINT8_MAX;
	int32_t t162 = -202116972;

    t162 = (x673>((x674<=x675)%x676));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x678 = UINT32_MAX;
	int16_t x679 = -766;
	int64_t x680 = INT64_MIN;
	int32_t t163 = -12;

    t163 = (x677>((x678<=x679)%x680));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x681 = 250;
	int8_t x683 = 49;
	int32_t t164 = 0;

    t164 = (x681>((x682<=x683)%x684));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x685 = INT16_MIN;
	static volatile int16_t x686 = -1;
	volatile int16_t x687 = -121;
	volatile int8_t x688 = -1;
	static volatile int32_t t165 = -2;

    t165 = (x685>((x686<=x687)%x688));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x689 = 30;
	volatile uint8_t x690 = 10U;
	int64_t x691 = INT64_MIN;
	volatile uint64_t x692 = 857717459757LLU;
	static int32_t t166 = 51;

    t166 = (x689>((x690<=x691)%x692));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x693 = INT8_MIN;
	int16_t x694 = 1775;
	int16_t x695 = 237;
	static uint8_t x696 = UINT8_MAX;
	int32_t t167 = 1;

    t167 = (x693>((x694<=x695)%x696));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x697 = -1;
	uint8_t x698 = UINT8_MAX;
	int8_t x699 = INT8_MIN;
	volatile int16_t x700 = -4055;
	int32_t t168 = -2038922;

    t168 = (x697>((x698<=x699)%x700));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x701 = 44U;
	volatile int16_t x702 = INT16_MAX;
	int64_t x704 = -3LL;
	int32_t t169 = 2143;

    t169 = (x701>((x702<=x703)%x704));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x705 = 23377LLU;
	int64_t x706 = -1LL;
	volatile uint64_t x707 = 325124732501246661LLU;
	volatile int32_t t170 = 30;

    t170 = (x705>((x706<=x707)%x708));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x710 = INT32_MAX;
	static int16_t x711 = -43;
	uint32_t x712 = 4648397U;
	int32_t t171 = -5;

    t171 = (x709>((x710<=x711)%x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x715 = INT32_MAX;
	volatile int32_t t172 = -1243;

    t172 = (x713>((x714<=x715)%x716));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x718 = 1024436LL;
	uint8_t x719 = 2U;
	volatile int32_t x720 = INT32_MAX;
	static int32_t t173 = 1;

    t173 = (x717>((x718<=x719)%x720));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x721 = UINT8_MAX;
	int8_t x722 = 1;
	int8_t x723 = -1;
	int64_t x724 = INT64_MIN;

    t174 = (x721>((x722<=x723)%x724));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x725 = UINT16_MAX;
	int16_t x726 = INT16_MIN;
	static int16_t x727 = -1;
	volatile int8_t x728 = -13;
	int32_t t175 = -2;

    t175 = (x725>((x726<=x727)%x728));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x729 = 126541U;
	static volatile int8_t x730 = INT8_MIN;
	int16_t x732 = INT16_MIN;
	int32_t t176 = 6303489;

    t176 = (x729>((x730<=x731)%x732));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x733 = 18191767LL;
	int32_t x735 = INT32_MIN;
	volatile uint8_t x736 = UINT8_MAX;
	volatile int32_t t177 = -774;

    t177 = (x733>((x734<=x735)%x736));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x737 = -1;
	int8_t x738 = INT8_MIN;
	uint16_t x739 = 786U;
	static int16_t x740 = -1;

    t178 = (x737>((x738<=x739)%x740));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x741 = INT32_MIN;
	volatile uint32_t x743 = UINT32_MAX;
	int8_t x744 = -3;
	int32_t t179 = 304065;

    t179 = (x741>((x742<=x743)%x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x745 = -1;
	uint32_t x746 = 334329U;
	int8_t x747 = 22;
	uint8_t x748 = UINT8_MAX;
	int32_t t180 = 22;

    t180 = (x745>((x746<=x747)%x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x749 = -1LL;
	static int16_t x750 = -1;
	uint64_t x751 = 88LLU;
	int32_t x752 = INT32_MAX;
	int32_t t181 = 3300744;

    t181 = (x749>((x750<=x751)%x752));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x755 = 1978066U;
	int32_t t182 = 173844;

    t182 = (x753>((x754<=x755)%x756));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x758 = INT16_MIN;
	static uint16_t x759 = 30729U;
	int32_t x760 = -1;
	volatile int32_t t183 = 96158;

    t183 = (x757>((x758<=x759)%x760));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x761 = 1U;
	int8_t x762 = 0;
	volatile int32_t x764 = INT32_MAX;
	static volatile int32_t t184 = -63389;

    t184 = (x761>((x762<=x763)%x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x769 = UINT8_MAX;
	int32_t x770 = INT32_MIN;
	int8_t x771 = 0;
	volatile int32_t x772 = INT32_MIN;
	int32_t t185 = 699;

    t185 = (x769>((x770<=x771)%x772));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x773 = 0U;
	static uint16_t x774 = UINT16_MAX;
	static int8_t x775 = INT8_MAX;
	uint32_t x776 = UINT32_MAX;
	volatile int32_t t186 = 691209;

    t186 = (x773>((x774<=x775)%x776));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x777 = 0U;
	uint16_t x778 = UINT16_MAX;
	uint16_t x779 = 670U;
	volatile int32_t t187 = -1547921;

    t187 = (x777>((x778<=x779)%x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x781 = UINT32_MAX;
	int64_t x782 = INT64_MIN;
	int64_t x783 = -1LL;
	static volatile int64_t x784 = INT64_MIN;
	int32_t t188 = -2;

    t188 = (x781>((x782<=x783)%x784));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x785 = 12U;
	uint16_t x786 = 4343U;
	int8_t x788 = INT8_MIN;
	int32_t t189 = 61690378;

    t189 = (x785>((x786<=x787)%x788));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x794 = UINT16_MAX;
	int16_t x796 = -1;

    t190 = (x793>((x794<=x795)%x796));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x797 = 15010LL;
	volatile int64_t x798 = -329LL;
	int32_t x799 = 31769541;
	static volatile int64_t x800 = INT64_MAX;
	volatile int32_t t191 = -5240;

    t191 = (x797>((x798<=x799)%x800));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x802 = -10498550LL;
	int64_t x803 = -1783LL;
	volatile uint32_t x804 = 78025698U;

    t192 = (x801>((x802<=x803)%x804));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x805 = 1;
	int32_t x806 = -1;
	volatile uint64_t x807 = 831LLU;
	int16_t x808 = INT16_MIN;
	int32_t t193 = 366;

    t193 = (x805>((x806<=x807)%x808));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x809 = -28086;
	volatile uint64_t x811 = 7063512596LLU;
	int8_t x812 = INT8_MAX;
	int32_t t194 = 0;

    t194 = (x809>((x810<=x811)%x812));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x813 = 363213LLU;
	int8_t x815 = INT8_MIN;
	int16_t x816 = -449;
	volatile int32_t t195 = 417483;

    t195 = (x813>((x814<=x815)%x816));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x817 = INT16_MIN;
	uint8_t x818 = 0U;
	static int8_t x819 = INT8_MIN;
	volatile int32_t t196 = -60544;

    t196 = (x817>((x818<=x819)%x820));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x821 = 64U;
	volatile int64_t x822 = 249555244672LL;
	uint64_t x824 = 271246561LLU;
	volatile int32_t t197 = 3;

    t197 = (x821>((x822<=x823)%x824));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x825 = UINT16_MAX;
	volatile int32_t x826 = -83646;
	volatile int8_t x828 = -1;

    t198 = (x825>((x826<=x827)%x828));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x829 = UINT8_MAX;
	int64_t x830 = INT64_MAX;
	static uint32_t x831 = 1875654U;
	volatile int32_t x832 = -1;
	int32_t t199 = -360;

    t199 = (x829>((x830<=x831)%x832));

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

