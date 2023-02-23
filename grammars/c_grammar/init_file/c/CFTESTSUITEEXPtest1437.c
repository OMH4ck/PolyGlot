
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

int8_t x2 = INT8_MAX;
static uint16_t x4 = 13U;
int32_t x6 = INT32_MAX;
static volatile uint32_t x10 = 1333135057U;
volatile uint8_t x12 = 56U;
volatile int32_t t3 = 3;
uint64_t x17 = UINT64_MAX;
static int32_t x19 = INT32_MAX;
volatile uint64_t x22 = 103989LLU;
int32_t t5 = -3;
static int32_t x25 = INT32_MAX;
volatile int32_t t7 = -219203413;
int64_t x38 = -2021401LL;
int16_t x51 = 5143;
int32_t t11 = -3;
int32_t x53 = -511182509;
volatile int32_t t12 = 3651;
static volatile uint16_t x61 = 662U;
uint32_t x64 = UINT32_MAX;
static volatile int32_t x65 = INT32_MIN;
int64_t x76 = INT64_MAX;
volatile int16_t x82 = INT16_MIN;
volatile uint32_t x91 = 240961U;
volatile uint8_t x93 = 1U;
volatile int64_t x100 = INT64_MAX;
int16_t x101 = INT16_MIN;
int16_t x108 = INT16_MAX;
uint64_t x109 = 72935138LLU;
int8_t x111 = INT8_MAX;
volatile uint64_t x114 = 64025383875LLU;
int16_t x122 = -1;
static volatile int32_t t29 = 2029;
uint32_t x125 = 734U;
volatile int8_t x130 = -1;
volatile uint32_t x134 = 1734441006U;
volatile int16_t x147 = -1;
uint32_t x155 = 1136950U;
static volatile int32_t t38 = -744868;
static uint16_t x168 = 28571U;
uint64_t x169 = UINT64_MAX;
uint64_t x174 = 146LLU;
static int8_t x190 = INT8_MAX;
volatile int8_t x197 = INT8_MAX;
volatile int32_t t48 = 28065454;
static volatile int8_t x201 = INT8_MIN;
volatile uint16_t x202 = 5601U;
uint32_t x203 = 38355U;
volatile int32_t t50 = -3568815;
volatile int32_t x216 = INT32_MAX;
volatile int32_t t52 = -18528462;
int16_t x223 = -1;
static int16_t x243 = INT16_MAX;
int32_t t60 = -44;
int32_t t61 = 215307;
uint16_t x264 = 2U;
uint16_t x267 = 3014U;
int64_t x269 = INT64_MAX;
volatile int8_t x271 = INT8_MIN;
volatile int32_t x283 = -1897;
int64_t x285 = INT64_MAX;
static volatile int16_t x293 = 24;
int32_t t72 = -5775867;
volatile int16_t x297 = INT16_MAX;
static uint16_t x298 = UINT16_MAX;
static volatile int32_t t73 = -206539;
static int64_t x305 = 106738463LL;
int64_t x318 = INT64_MIN;
static int8_t x320 = -1;
volatile int16_t x327 = INT16_MAX;
static volatile int32_t t80 = -249033;
int8_t x334 = 0;
int8_t x338 = -1;
static uint8_t x343 = UINT8_MAX;
static int32_t t84 = -13015;
uint16_t x349 = UINT16_MAX;
int32_t x354 = -329058;
int64_t x363 = INT64_MAX;
volatile int64_t x367 = -1LL;
int8_t x377 = INT8_MIN;
static int16_t x382 = -72;
static uint16_t x383 = UINT16_MAX;
uint64_t x400 = 22340516659315LLU;
int32_t t97 = -46;
int32_t x403 = 17;
static volatile int64_t x404 = INT64_MAX;
int8_t x409 = -14;
static int8_t x412 = INT8_MIN;
int32_t x413 = INT32_MIN;
uint64_t x415 = 29719405743643LLU;
int8_t x427 = -50;
static int8_t x434 = INT8_MAX;
uint8_t x445 = 122U;
uint16_t x446 = 44U;
int16_t x469 = -1;
int64_t x472 = 400675596167778551LL;
volatile int32_t t115 = -63183547;
int16_t x475 = 56;
int32_t t116 = 2065;
uint64_t x478 = 1503759358498751264LLU;
int32_t t118 = 91919252;
uint8_t x485 = UINT8_MAX;
volatile int16_t x489 = -1;
int16_t x490 = INT16_MIN;
volatile uint32_t x495 = UINT32_MAX;
int32_t t121 = -63;
uint64_t x497 = UINT64_MAX;
static uint8_t x498 = UINT8_MAX;
volatile int8_t x501 = -1;
int16_t x503 = 2;
volatile uint32_t x504 = UINT32_MAX;
static int64_t x510 = -12826860458162LL;
volatile int32_t t125 = -15;
uint32_t x519 = 48802576U;
volatile uint8_t x521 = 0U;
static volatile int32_t t130 = 0;
int32_t x545 = -75;
volatile uint32_t x558 = 93U;
int8_t x559 = -1;
int32_t x566 = -1;
int8_t x574 = INT8_MAX;
int32_t t140 = -1040;
int8_t x585 = 60;
static int64_t x587 = -58904LL;
static volatile int32_t t142 = 1;
static volatile int64_t x595 = INT64_MAX;
volatile uint32_t x597 = 397847048U;
volatile uint8_t x600 = 1U;
uint8_t x601 = 1U;
uint64_t x604 = 9971LLU;
int32_t x611 = INT32_MIN;
static uint32_t x625 = 14U;
int16_t x634 = -2;
volatile int32_t x635 = INT32_MIN;
uint64_t x638 = 149139658597LLU;
int32_t x641 = -2621;
static volatile int32_t t157 = -5164;
volatile int32_t t159 = -1670;
volatile int32_t t160 = -253170292;
uint16_t x661 = UINT16_MAX;
uint8_t x665 = 1U;
int32_t t162 = -4380;
uint16_t x674 = UINT16_MAX;
static uint64_t x685 = 951LLU;
uint8_t x692 = 48U;
uint8_t x694 = 2U;
int32_t t169 = 235;
volatile uint64_t x700 = 120110002796002859LLU;
volatile int32_t t170 = -7;
static uint64_t x706 = 2459552LLU;
int32_t t172 = -1266;
volatile uint8_t x716 = UINT8_MAX;
int32_t t175 = -70343;
static volatile uint16_t x728 = UINT16_MAX;
volatile int32_t t177 = 0;
uint32_t x730 = 521023U;
volatile uint32_t x732 = 135U;
int64_t x736 = 423223LL;
static int8_t x743 = 1;
int16_t x744 = INT16_MIN;
int64_t x746 = -1LL;
int64_t x752 = INT64_MIN;
volatile uint64_t x753 = UINT64_MAX;
uint64_t x764 = 2016692LLU;
volatile int32_t t187 = 0;
uint32_t x769 = 931984588U;
uint16_t x770 = UINT16_MAX;
uint16_t x780 = UINT16_MAX;
int8_t x781 = INT8_MIN;
int64_t x788 = -122549129LL;
int8_t x797 = -1;
static int32_t x800 = INT32_MIN;
static uint64_t x801 = 1106614768625361250LLU;
int8_t x805 = -1;
static volatile int64_t x807 = INT64_MIN;
int32_t t197 = -1;
static int8_t x811 = 1;
static volatile int16_t x812 = INT16_MIN;
int8_t x813 = INT8_MIN;


void f0(void) {
    	int32_t x1 = -67734112;
	int64_t x3 = INT64_MAX;
	int32_t t0 = 0;

    t0 = (x1>((x2==x3)%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	volatile int64_t x7 = -1LL;
	int64_t x8 = -1LL;
	int32_t t1 = -343739;

    t1 = (x5>((x6==x7)%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 60U;
	int16_t x11 = 42;
	static int32_t t2 = 223524922;

    t2 = (x9>((x10==x11)%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 424;
	int8_t x14 = 28;
	static uint64_t x15 = UINT64_MAX;
	volatile int64_t x16 = INT64_MIN;

    t3 = (x13>((x14==x15)%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = 746U;
	int64_t x20 = -1LL;
	int32_t t4 = 22;

    t4 = (x17>((x18==x19)%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 2714;
	int16_t x23 = 14708;
	int64_t x24 = 14602291260947LL;

    t5 = (x21>((x22==x23)%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MAX;
	uint8_t x28 = UINT8_MAX;
	static int32_t t6 = -50;

    t6 = (x25>((x26==x27)%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MAX;
	uint8_t x35 = 12U;
	static uint32_t x36 = UINT32_MAX;

    t7 = (x33>((x34==x35)%x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x37 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	static int8_t x40 = -1;
	volatile int32_t t8 = 142;

    t8 = (x37>((x38==x39)%x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = 5U;
	int64_t x42 = INT64_MIN;
	int16_t x43 = -1;
	uint8_t x44 = 6U;
	static int32_t t9 = -173592871;

    t9 = (x41>((x42==x43)%x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x45 = 6901492261609LLU;
	int8_t x46 = INT8_MIN;
	uint32_t x47 = 19240973U;
	uint64_t x48 = UINT64_MAX;
	int32_t t10 = -307911;

    t10 = (x45>((x46==x47)%x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x49 = 0;
	int8_t x50 = INT8_MAX;
	int32_t x52 = -1;

    t11 = (x49>((x50==x51)%x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x54 = UINT16_MAX;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;

    t12 = (x53>((x54==x55)%x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = 2U;
	int16_t x58 = INT16_MIN;
	volatile int16_t x59 = INT16_MAX;
	volatile int8_t x60 = INT8_MIN;
	static int32_t t13 = 101482;

    t13 = (x57>((x58==x59)%x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x62 = INT64_MIN;
	volatile int64_t x63 = INT64_MAX;
	int32_t t14 = 441;

    t14 = (x61>((x62==x63)%x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x66 = UINT16_MAX;
	uint32_t x67 = 1721928U;
	int64_t x68 = INT64_MAX;
	volatile int32_t t15 = 13675835;

    t15 = (x65>((x66==x67)%x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = 964239166;
	int8_t x70 = INT8_MIN;
	int64_t x71 = -1LL;
	uint8_t x72 = UINT8_MAX;
	int32_t t16 = 11648;

    t16 = (x69>((x70==x71)%x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x73 = 10U;
	volatile uint64_t x74 = 4586756377755302366LLU;
	int16_t x75 = -1;
	int32_t t17 = -14008734;

    t17 = (x73>((x74==x75)%x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MIN;
	volatile int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MAX;
	int64_t x80 = 6381314LL;
	int32_t t18 = 2492816;

    t18 = (x77>((x78==x79)%x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	volatile int64_t x84 = INT64_MIN;
	volatile int32_t t19 = 232639;

    t19 = (x81>((x82==x83)%x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -350115;
	volatile int8_t x86 = -46;
	static int8_t x87 = -14;
	volatile int8_t x88 = -1;
	static volatile int32_t t20 = -91;

    t20 = (x85>((x86==x87)%x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	int32_t x92 = -1;
	static volatile int32_t t21 = 1658478;

    t21 = (x89>((x90==x91)%x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x94 = INT32_MIN;
	uint64_t x95 = 845600387LLU;
	int8_t x96 = INT8_MIN;
	static int32_t t22 = -8030;

    t22 = (x93>((x94==x95)%x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = 50;
	volatile int32_t x98 = INT32_MIN;
	int32_t x99 = -1;
	int32_t t23 = 33;

    t23 = (x97>((x98==x99)%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x102 = 29506U;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = 771;
	int32_t t24 = 1746;

    t24 = (x101>((x102==x103)%x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = 3739782U;
	static volatile int32_t t25 = -2;

    t25 = (x105>((x106==x107)%x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x110 = INT16_MIN;
	uint16_t x112 = 12194U;
	volatile int32_t t26 = 0;

    t26 = (x109>((x110==x111)%x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	uint64_t x115 = UINT64_MAX;
	static volatile int64_t x116 = INT64_MAX;
	int32_t t27 = -24;

    t27 = (x113>((x114==x115)%x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = 117U;
	uint32_t x118 = 151506U;
	int32_t x119 = 0;
	volatile int64_t x120 = INT64_MIN;
	int32_t t28 = -29810;

    t28 = (x117>((x118==x119)%x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x121 = INT16_MIN;
	int8_t x123 = -1;
	static int8_t x124 = INT8_MAX;

    t29 = (x121>((x122==x123)%x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x126 = 14U;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t30 = -4502;

    t30 = (x125>((x126==x127)%x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = 19U;
	static int8_t x131 = INT8_MIN;
	int64_t x132 = -1LL;
	static volatile int32_t t31 = -7301;

    t31 = (x129>((x130==x131)%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x133 = INT64_MAX;
	int32_t x135 = INT32_MAX;
	int16_t x136 = -1;
	int32_t t32 = 0;

    t32 = (x133>((x134==x135)%x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x137 = INT32_MIN;
	uint32_t x138 = UINT32_MAX;
	volatile uint32_t x139 = 6U;
	int16_t x140 = INT16_MAX;
	volatile int32_t t33 = 1;

    t33 = (x137>((x138==x139)%x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x141 = 10564876280368599LLU;
	static int16_t x142 = -1;
	uint32_t x143 = 170U;
	static int32_t x144 = INT32_MIN;
	static volatile int32_t t34 = 0;

    t34 = (x141>((x142==x143)%x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x145 = 214590996952055LLU;
	int8_t x146 = 2;
	volatile int16_t x148 = INT16_MAX;
	int32_t t35 = 24741856;

    t35 = (x145>((x146==x147)%x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x149 = 6495427568752514391LLU;
	int16_t x150 = -251;
	uint64_t x151 = UINT64_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t36 = 3841561;

    t36 = (x149>((x150==x151)%x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = 22U;
	uint32_t x154 = 837247134U;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t37 = -944585757;

    t37 = (x153>((x154==x155)%x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x157 = INT8_MIN;
	int64_t x158 = 201748039LL;
	int64_t x159 = -1LL;
	uint16_t x160 = UINT16_MAX;

    t38 = (x157>((x158==x159)%x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	volatile int16_t x162 = INT16_MIN;
	uint16_t x163 = UINT16_MAX;
	uint8_t x164 = 5U;
	static int32_t t39 = -25078129;

    t39 = (x161>((x162==x163)%x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MIN;
	volatile int8_t x167 = -1;
	volatile int32_t t40 = 0;

    t40 = (x165>((x166==x167)%x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x170 = INT32_MAX;
	uint8_t x171 = 102U;
	int8_t x172 = INT8_MIN;
	static int32_t t41 = -35928496;

    t41 = (x169>((x170==x171)%x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = 19;
	int16_t x175 = INT16_MAX;
	static int32_t x176 = 644453698;
	static int32_t t42 = -12604391;

    t42 = (x173>((x174==x175)%x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = INT32_MIN;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = 6LLU;
	int16_t x180 = INT16_MAX;
	int32_t t43 = 81202279;

    t43 = (x177>((x178==x179)%x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x181 = UINT8_MAX;
	int32_t x182 = 8;
	int64_t x183 = INT64_MIN;
	static uint32_t x184 = UINT32_MAX;
	volatile int32_t t44 = 49205151;

    t44 = (x181>((x182==x183)%x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x185 = 0U;
	uint8_t x186 = 52U;
	uint64_t x187 = 1457577LLU;
	int32_t x188 = -1;
	int32_t t45 = -51196;

    t45 = (x185>((x186==x187)%x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x189 = UINT32_MAX;
	int16_t x191 = -1;
	int64_t x192 = INT64_MAX;
	volatile int32_t t46 = -187964534;

    t46 = (x189>((x190==x191)%x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = -18;
	int64_t x194 = INT64_MIN;
	uint32_t x195 = 196896295U;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t47 = -47141790;

    t47 = (x193>((x194==x195)%x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x198 = UINT8_MAX;
	int64_t x199 = 9341814601621178LL;
	int16_t x200 = -1;

    t48 = (x197>((x198==x199)%x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x204 = INT16_MAX;
	int32_t t49 = 1;

    t49 = (x201>((x202==x203)%x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x205 = -1599341295154342LL;
	static int16_t x206 = -1;
	volatile uint8_t x207 = 5U;
	int16_t x208 = INT16_MIN;

    t50 = (x205>((x206==x207)%x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x209 = INT32_MAX;
	uint8_t x210 = 1U;
	int8_t x211 = INT8_MAX;
	static volatile uint32_t x212 = 1485U;
	volatile int32_t t51 = 0;

    t51 = (x209>((x210==x211)%x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x213 = 120;
	int16_t x214 = INT16_MIN;
	static int16_t x215 = -2;

    t52 = (x213>((x214==x215)%x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x217 = -1;
	volatile uint64_t x218 = UINT64_MAX;
	int32_t x219 = INT32_MIN;
	volatile uint8_t x220 = 3U;
	volatile int32_t t53 = 291755;

    t53 = (x217>((x218==x219)%x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = 0;
	int32_t x222 = -1;
	static uint64_t x224 = 704836549779253LLU;
	volatile int32_t t54 = 12787405;

    t54 = (x221>((x222==x223)%x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x225 = INT64_MIN;
	int8_t x226 = -1;
	int16_t x227 = -1;
	static int16_t x228 = -1;
	int32_t t55 = -1696985;

    t55 = (x225>((x226==x227)%x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = 918995130940LL;
	static int32_t x230 = INT32_MIN;
	static volatile uint32_t x231 = 47250U;
	int32_t x232 = -208701;
	volatile int32_t t56 = -1;

    t56 = (x229>((x230==x231)%x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x233 = INT64_MIN;
	int64_t x234 = 68504432043LL;
	int32_t x235 = 71616;
	volatile int8_t x236 = -1;
	int32_t t57 = 1777;

    t57 = (x233>((x234==x235)%x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = -1;
	volatile int16_t x238 = INT16_MAX;
	uint32_t x239 = UINT32_MAX;
	int64_t x240 = 1848503235657247308LL;
	int32_t t58 = -220;

    t58 = (x237>((x238==x239)%x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x241 = 66U;
	volatile int64_t x242 = -1LL;
	int8_t x244 = INT8_MAX;
	volatile int32_t t59 = 128882394;

    t59 = (x241>((x242==x243)%x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x245 = 30U;
	static int32_t x246 = -1;
	int32_t x247 = INT32_MAX;
	static int64_t x248 = INT64_MIN;

    t60 = (x245>((x246==x247)%x248));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MAX;
	uint64_t x252 = 484990871LLU;

    t61 = (x249>((x250==x251)%x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x253 = 2U;
	int8_t x254 = -1;
	volatile uint16_t x255 = 6U;
	uint64_t x256 = 3124373112LLU;
	static int32_t t62 = -17;

    t62 = (x253>((x254==x255)%x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x257 = 868U;
	static int32_t x258 = INT32_MIN;
	uint16_t x259 = 63U;
	int8_t x260 = 55;
	volatile int32_t t63 = 5966405;

    t63 = (x257>((x258==x259)%x260));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = -37635529;
	int64_t x262 = INT64_MIN;
	uint16_t x263 = 120U;
	int32_t t64 = 3409;

    t64 = (x261>((x262==x263)%x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MIN;
	uint8_t x268 = 111U;
	int32_t t65 = 2526682;

    t65 = (x265>((x266==x267)%x268));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x270 = INT16_MIN;
	int64_t x272 = 88132998178480LL;
	int32_t t66 = 60303;

    t66 = (x269>((x270==x271)%x272));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x273 = 13;
	static volatile int32_t x274 = 25125;
	static int32_t x275 = -1;
	uint32_t x276 = 755479050U;
	int32_t t67 = -599964351;

    t67 = (x273>((x274==x275)%x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = INT64_MIN;
	int32_t x278 = INT32_MIN;
	int64_t x279 = -31575577LL;
	static uint32_t x280 = UINT32_MAX;
	volatile int32_t t68 = -21;

    t68 = (x277>((x278==x279)%x280));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = -16;
	volatile int64_t x282 = INT64_MAX;
	volatile int64_t x284 = INT64_MAX;
	int32_t t69 = -116;

    t69 = (x281>((x282==x283)%x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x286 = 123U;
	int16_t x287 = -1;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t70 = -1364451;

    t70 = (x285>((x286==x287)%x288));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x289 = 96U;
	static uint64_t x290 = 511366657700657LLU;
	static int64_t x291 = 96642577193LL;
	int64_t x292 = -1LL;
	volatile int32_t t71 = -189;

    t71 = (x289>((x290==x291)%x292));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x294 = 12938934LLU;
	static int64_t x295 = INT64_MAX;
	static volatile int16_t x296 = -114;

    t72 = (x293>((x294==x295)%x296));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x299 = 3684652LLU;
	int32_t x300 = -1;

    t73 = (x297>((x298==x299)%x300));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = 3;
	static int16_t x302 = -1;
	uint8_t x303 = 20U;
	volatile int32_t x304 = INT32_MAX;
	static volatile int32_t t74 = -334320770;

    t74 = (x301>((x302==x303)%x304));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x306 = -90245783;
	uint64_t x307 = 734LLU;
	static int64_t x308 = INT64_MIN;
	volatile int32_t t75 = 536312505;

    t75 = (x305>((x306==x307)%x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x309 = INT32_MAX;
	static int64_t x310 = -1LL;
	int32_t x311 = 85429;
	int16_t x312 = 1774;
	int32_t t76 = 1;

    t76 = (x309>((x310==x311)%x312));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x313 = UINT64_MAX;
	static int8_t x314 = -28;
	static volatile int32_t x315 = INT32_MIN;
	static int16_t x316 = INT16_MIN;
	int32_t t77 = 12291259;

    t77 = (x313>((x314==x315)%x316));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x317 = 4223LL;
	int8_t x319 = 51;
	volatile int32_t t78 = -493889;

    t78 = (x317>((x318==x319)%x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x321 = UINT32_MAX;
	volatile int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MIN;
	static int32_t x324 = -54106;
	int32_t t79 = 22175190;

    t79 = (x321>((x322==x323)%x324));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = INT16_MAX;
	uint32_t x326 = 1704U;
	int16_t x328 = 314;

    t80 = (x325>((x326==x327)%x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x333 = 20;
	uint16_t x335 = 4041U;
	static int8_t x336 = -1;
	volatile int32_t t81 = 68421;

    t81 = (x333>((x334==x335)%x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = -1;
	uint16_t x339 = 1336U;
	int16_t x340 = INT16_MIN;
	static int32_t t82 = 15;

    t82 = (x337>((x338==x339)%x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x341 = UINT64_MAX;
	volatile int64_t x342 = -9106593LL;
	int16_t x344 = 242;
	volatile int32_t t83 = 439797193;

    t83 = (x341>((x342==x343)%x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = INT8_MAX;
	int8_t x346 = -5;
	int64_t x347 = INT64_MIN;
	static int16_t x348 = -3;

    t84 = (x345>((x346==x347)%x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x350 = INT64_MIN;
	int16_t x351 = -10;
	uint64_t x352 = 33883341LLU;
	volatile int32_t t85 = 8847;

    t85 = (x349>((x350==x351)%x352));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x353 = 4U;
	uint8_t x355 = 6U;
	int64_t x356 = 1778346147LL;
	volatile int32_t t86 = -3880;

    t86 = (x353>((x354==x355)%x356));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = 3;
	int32_t t87 = 594;

    t87 = (x357>((x358==x359)%x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x361 = 2U;
	static uint16_t x362 = UINT16_MAX;
	uint64_t x364 = 22671324544344595LLU;
	int32_t t88 = -53;

    t88 = (x361>((x362==x363)%x364));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x365 = -2300676939060763131LL;
	int64_t x366 = INT64_MIN;
	volatile int8_t x368 = INT8_MAX;
	volatile int32_t t89 = -1;

    t89 = (x365>((x366==x367)%x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	int8_t x371 = 40;
	uint16_t x372 = 10U;
	int32_t t90 = -11;

    t90 = (x369>((x370==x371)%x372));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MIN;
	volatile int32_t x375 = 510337;
	static int64_t x376 = -9LL;
	volatile int32_t t91 = -1144737;

    t91 = (x373>((x374==x375)%x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MAX;
	volatile int32_t t92 = 56616638;

    t92 = (x377>((x378==x379)%x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = -1;
	int8_t x384 = INT8_MAX;
	volatile int32_t t93 = 876594;

    t93 = (x381>((x382==x383)%x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x385 = UINT32_MAX;
	static volatile int16_t x386 = -1615;
	uint32_t x387 = UINT32_MAX;
	static int32_t x388 = -186269058;
	static volatile int32_t t94 = -436;

    t94 = (x385>((x386==x387)%x388));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x389 = INT32_MIN;
	uint8_t x390 = 0U;
	static uint32_t x391 = 16433U;
	int64_t x392 = -569426974027996830LL;
	int32_t t95 = 280898660;

    t95 = (x389>((x390==x391)%x392));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x393 = UINT32_MAX;
	int64_t x394 = INT64_MIN;
	volatile int8_t x395 = INT8_MAX;
	volatile uint64_t x396 = 154987387763308808LLU;
	static int32_t t96 = 438026576;

    t96 = (x393>((x394==x395)%x396));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x397 = -1;
	static uint8_t x398 = 60U;
	volatile uint64_t x399 = 2841280LLU;

    t97 = (x397>((x398==x399)%x400));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x401 = 49U;
	volatile uint64_t x402 = 1089934121959LLU;
	volatile int32_t t98 = 166117487;

    t98 = (x401>((x402==x403)%x404));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x405 = -1LL;
	static int64_t x406 = -4001LL;
	static volatile uint8_t x407 = UINT8_MAX;
	static int32_t x408 = 17;
	volatile int32_t t99 = -1525647;

    t99 = (x405>((x406==x407)%x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x410 = INT64_MIN;
	static int8_t x411 = 39;
	volatile int32_t t100 = 43;

    t100 = (x409>((x410==x411)%x412));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x414 = 3887889U;
	int8_t x416 = INT8_MIN;
	static volatile int32_t t101 = 9;

    t101 = (x413>((x414==x415)%x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x417 = UINT32_MAX;
	uint32_t x418 = UINT32_MAX;
	static volatile uint16_t x419 = UINT16_MAX;
	int32_t x420 = INT32_MAX;
	volatile int32_t t102 = 3216992;

    t102 = (x417>((x418==x419)%x420));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x421 = INT16_MIN;
	int32_t x422 = INT32_MIN;
	int16_t x423 = -1;
	volatile int16_t x424 = INT16_MAX;
	int32_t t103 = -524173;

    t103 = (x421>((x422==x423)%x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x425 = 519;
	int8_t x426 = INT8_MIN;
	int64_t x428 = 1471733659368272LL;
	int32_t t104 = -32;

    t104 = (x425>((x426==x427)%x428));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x429 = -1;
	volatile uint32_t x430 = 2490U;
	int64_t x431 = INT64_MAX;
	static int32_t x432 = INT32_MAX;
	int32_t t105 = 5884;

    t105 = (x429>((x430==x431)%x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x433 = -1;
	int64_t x435 = INT64_MIN;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t106 = 10803957;

    t106 = (x433>((x434==x435)%x436));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = -1;
	static int64_t x438 = 30270842681835LL;
	static volatile int64_t x439 = INT64_MIN;
	uint32_t x440 = 442302843U;
	volatile int32_t t107 = 61;

    t107 = (x437>((x438==x439)%x440));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x441 = 14170640U;
	volatile int8_t x442 = -25;
	int8_t x443 = INT8_MIN;
	int32_t x444 = -1;
	int32_t t108 = 1032185;

    t108 = (x441>((x442==x443)%x444));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x447 = 0;
	static uint16_t x448 = UINT16_MAX;
	volatile int32_t t109 = 115750248;

    t109 = (x445>((x446==x447)%x448));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x449 = 491;
	uint32_t x450 = 11263U;
	static int16_t x451 = INT16_MAX;
	int64_t x452 = INT64_MIN;
	volatile int32_t t110 = 0;

    t110 = (x449>((x450==x451)%x452));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x453 = INT8_MIN;
	int64_t x454 = -1LL;
	int32_t x455 = INT32_MIN;
	int16_t x456 = 14;
	volatile int32_t t111 = 5647581;

    t111 = (x453>((x454==x455)%x456));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x457 = 34U;
	static volatile int64_t x458 = INT64_MIN;
	int16_t x459 = INT16_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t112 = -308178;

    t112 = (x457>((x458==x459)%x460));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x461 = 7U;
	int64_t x462 = -1LL;
	volatile int32_t x463 = -1;
	int16_t x464 = INT16_MAX;
	int32_t t113 = 209754094;

    t113 = (x461>((x462==x463)%x464));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x465 = -4953LL;
	int32_t x466 = -244751668;
	int64_t x467 = INT64_MIN;
	uint16_t x468 = UINT16_MAX;
	static volatile int32_t t114 = 102626946;

    t114 = (x465>((x466==x467)%x468));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x470 = 124U;
	int32_t x471 = INT32_MIN;

    t115 = (x469>((x470==x471)%x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x473 = -6064;
	static int16_t x474 = -1;
	int64_t x476 = INT64_MIN;

    t116 = (x473>((x474==x475)%x476));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = -1;
	uint8_t x479 = 42U;
	uint32_t x480 = UINT32_MAX;
	static int32_t t117 = 66266;

    t117 = (x477>((x478==x479)%x480));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x481 = INT16_MIN;
	int8_t x482 = 1;
	static int16_t x483 = INT16_MIN;
	uint8_t x484 = 42U;

    t118 = (x481>((x482==x483)%x484));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x486 = -1;
	int64_t x487 = 617856948145608LL;
	static int8_t x488 = INT8_MIN;
	volatile int32_t t119 = 13;

    t119 = (x485>((x486==x487)%x488));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x491 = UINT32_MAX;
	volatile uint16_t x492 = 2361U;
	int32_t t120 = -54;

    t120 = (x489>((x490==x491)%x492));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x493 = INT32_MAX;
	static volatile int64_t x494 = INT64_MIN;
	int32_t x496 = INT32_MIN;

    t121 = (x493>((x494==x495)%x496));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x499 = INT8_MIN;
	uint32_t x500 = 61327U;
	int32_t t122 = -18022274;

    t122 = (x497>((x498==x499)%x500));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x502 = UINT8_MAX;
	volatile int32_t t123 = 191077531;

    t123 = (x501>((x502==x503)%x504));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x505 = -1LL;
	static int8_t x506 = INT8_MIN;
	int32_t x507 = -2368;
	uint64_t x508 = UINT64_MAX;
	int32_t t124 = -6463479;

    t124 = (x505>((x506==x507)%x508));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x509 = 11U;
	volatile uint16_t x511 = 312U;
	uint32_t x512 = 793166U;

    t125 = (x509>((x510==x511)%x512));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x513 = INT64_MIN;
	int16_t x514 = INT16_MIN;
	volatile uint16_t x515 = 146U;
	int32_t x516 = INT32_MAX;
	volatile int32_t t126 = -321;

    t126 = (x513>((x514==x515)%x516));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x517 = UINT32_MAX;
	volatile int16_t x518 = -1;
	static int8_t x520 = -1;
	volatile int32_t t127 = 190172823;

    t127 = (x517>((x518==x519)%x520));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x522 = INT8_MIN;
	int16_t x523 = INT16_MIN;
	volatile int16_t x524 = 1890;
	int32_t t128 = 3;

    t128 = (x521>((x522==x523)%x524));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x529 = INT64_MIN;
	static uint32_t x530 = 23276631U;
	static volatile int16_t x531 = INT16_MIN;
	int64_t x532 = INT64_MIN;
	volatile int32_t t129 = 37;

    t129 = (x529>((x530==x531)%x532));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x533 = INT32_MIN;
	int32_t x534 = INT32_MAX;
	volatile int32_t x535 = INT32_MIN;
	int32_t x536 = -1;

    t130 = (x533>((x534==x535)%x536));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x541 = INT16_MAX;
	int64_t x542 = -120866428966247LL;
	int64_t x543 = -40LL;
	static int32_t x544 = INT32_MAX;
	int32_t t131 = -12;

    t131 = (x541>((x542==x543)%x544));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x546 = INT32_MAX;
	static uint16_t x547 = UINT16_MAX;
	uint32_t x548 = 2938424U;
	volatile int32_t t132 = -2363643;

    t132 = (x545>((x546==x547)%x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x549 = 186U;
	uint64_t x550 = UINT64_MAX;
	int64_t x551 = -1LL;
	int32_t x552 = -1;
	volatile int32_t t133 = 27079;

    t133 = (x549>((x550==x551)%x552));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x553 = INT64_MIN;
	uint64_t x554 = 164302707195645297LLU;
	volatile int8_t x555 = 48;
	volatile int8_t x556 = INT8_MIN;
	volatile int32_t t134 = -386147;

    t134 = (x553>((x554==x555)%x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x557 = -1;
	int32_t x560 = -1;
	volatile int32_t t135 = -8628;

    t135 = (x557>((x558==x559)%x560));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x561 = 3U;
	volatile int32_t x562 = 30;
	uint8_t x563 = 39U;
	int64_t x564 = INT64_MIN;
	volatile int32_t t136 = -3;

    t136 = (x561>((x562==x563)%x564));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = INT16_MAX;
	static volatile int32_t x567 = -101;
	uint16_t x568 = 2U;
	volatile int32_t t137 = 0;

    t137 = (x565>((x566==x567)%x568));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = INT8_MIN;
	int16_t x570 = -1;
	volatile uint64_t x571 = 823821185348LLU;
	int32_t x572 = INT32_MIN;
	int32_t t138 = 436;

    t138 = (x569>((x570==x571)%x572));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = -10485;
	volatile int64_t x575 = INT64_MIN;
	int16_t x576 = 2;
	volatile int32_t t139 = -151123;

    t139 = (x573>((x574==x575)%x576));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = INT32_MIN;
	int64_t x578 = INT64_MAX;
	int32_t x579 = INT32_MAX;
	int16_t x580 = -15;

    t140 = (x577>((x578==x579)%x580));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x581 = INT16_MIN;
	int64_t x582 = -4842LL;
	uint64_t x583 = 693LLU;
	uint32_t x584 = UINT32_MAX;
	volatile int32_t t141 = -3669;

    t141 = (x581>((x582==x583)%x584));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x586 = -1;
	static int16_t x588 = INT16_MAX;

    t142 = (x585>((x586==x587)%x588));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x589 = INT16_MAX;
	volatile int32_t x590 = INT32_MIN;
	int64_t x591 = INT64_MIN;
	static uint64_t x592 = 896936LLU;
	volatile int32_t t143 = -1403788;

    t143 = (x589>((x590==x591)%x592));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x593 = 19947LL;
	volatile int8_t x594 = INT8_MIN;
	int8_t x596 = INT8_MAX;
	volatile int32_t t144 = 4877467;

    t144 = (x593>((x594==x595)%x596));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x598 = UINT64_MAX;
	volatile uint64_t x599 = 810653064336001LLU;
	int32_t t145 = -1026260762;

    t145 = (x597>((x598==x599)%x600));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x602 = 1992483123870195LLU;
	uint64_t x603 = UINT64_MAX;
	volatile int32_t t146 = 1;

    t146 = (x601>((x602==x603)%x604));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint32_t x605 = UINT32_MAX;
	int16_t x606 = INT16_MIN;
	static uint16_t x607 = 1U;
	int8_t x608 = -1;
	int32_t t147 = -59359832;

    t147 = (x605>((x606==x607)%x608));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x609 = UINT32_MAX;
	int8_t x610 = 15;
	static uint16_t x612 = 10627U;
	int32_t t148 = -1;

    t148 = (x609>((x610==x611)%x612));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x613 = -1LL;
	uint16_t x614 = 463U;
	int16_t x615 = -1;
	int8_t x616 = 2;
	volatile int32_t t149 = -3962962;

    t149 = (x613>((x614==x615)%x616));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x617 = -1;
	int32_t x618 = INT32_MAX;
	static uint16_t x619 = 123U;
	volatile uint8_t x620 = UINT8_MAX;
	volatile int32_t t150 = 0;

    t150 = (x617>((x618==x619)%x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x621 = -16610;
	uint8_t x622 = 10U;
	static int32_t x623 = INT32_MIN;
	int64_t x624 = 59785960LL;
	volatile int32_t t151 = -15;

    t151 = (x621>((x622==x623)%x624));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x626 = -170232475;
	int32_t x627 = 44778;
	int8_t x628 = INT8_MAX;
	volatile int32_t t152 = -438246;

    t152 = (x625>((x626==x627)%x628));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x629 = INT32_MIN;
	static uint32_t x630 = 956814243U;
	uint16_t x631 = 304U;
	int8_t x632 = -29;
	int32_t t153 = 2544;

    t153 = (x629>((x630==x631)%x632));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x633 = 185LLU;
	uint8_t x636 = 1U;
	int32_t t154 = 801505098;

    t154 = (x633>((x634==x635)%x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x637 = -172;
	int64_t x639 = 1995404LL;
	volatile int16_t x640 = INT16_MIN;
	volatile int32_t t155 = -214653442;

    t155 = (x637>((x638==x639)%x640));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x642 = -47623027;
	int8_t x643 = INT8_MIN;
	static volatile int32_t x644 = INT32_MIN;
	int32_t t156 = 64336;

    t156 = (x641>((x642==x643)%x644));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x645 = 3U;
	uint8_t x646 = 1U;
	int16_t x647 = INT16_MAX;
	int16_t x648 = INT16_MAX;

    t157 = (x645>((x646==x647)%x648));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x649 = 25459U;
	uint8_t x650 = 124U;
	static volatile int32_t x651 = -1;
	uint32_t x652 = 12501U;
	volatile int32_t t158 = 11;

    t158 = (x649>((x650==x651)%x652));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x653 = UINT16_MAX;
	static uint8_t x654 = 8U;
	static int8_t x655 = -1;
	uint16_t x656 = UINT16_MAX;

    t159 = (x653>((x654==x655)%x656));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x657 = -69205609;
	int16_t x658 = 8874;
	int8_t x659 = INT8_MIN;
	int32_t x660 = INT32_MIN;

    t160 = (x657>((x658==x659)%x660));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x662 = INT16_MAX;
	int64_t x663 = INT64_MAX;
	int8_t x664 = INT8_MIN;
	static volatile int32_t t161 = -1;

    t161 = (x661>((x662==x663)%x664));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x666 = 15114;
	volatile int64_t x667 = INT64_MAX;
	int8_t x668 = INT8_MAX;

    t162 = (x665>((x666==x667)%x668));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x669 = 3U;
	volatile int64_t x670 = -1LL;
	int64_t x671 = 128537973LL;
	int16_t x672 = -1;
	int32_t t163 = -89595834;

    t163 = (x669>((x670==x671)%x672));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x673 = INT64_MIN;
	int8_t x675 = -1;
	volatile uint32_t x676 = UINT32_MAX;
	int32_t t164 = 1012;

    t164 = (x673>((x674==x675)%x676));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x677 = INT16_MAX;
	int16_t x678 = -1;
	int8_t x679 = -1;
	int8_t x680 = INT8_MAX;
	static int32_t t165 = 66;

    t165 = (x677>((x678==x679)%x680));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x681 = INT64_MAX;
	int16_t x682 = -287;
	static volatile int16_t x683 = -27;
	int32_t x684 = INT32_MIN;
	int32_t t166 = -108865372;

    t166 = (x681>((x682==x683)%x684));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x686 = -8349206724898396LL;
	int16_t x687 = INT16_MIN;
	uint8_t x688 = 85U;
	static int32_t t167 = -1398;

    t167 = (x685>((x686==x687)%x688));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = 33457050;
	static uint8_t x690 = UINT8_MAX;
	volatile uint16_t x691 = UINT16_MAX;
	volatile int32_t t168 = -12583;

    t168 = (x689>((x690==x691)%x692));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x693 = INT64_MAX;
	int16_t x695 = -3;
	int64_t x696 = -1LL;

    t169 = (x693>((x694==x695)%x696));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x697 = UINT32_MAX;
	uint32_t x698 = 2197180U;
	static volatile uint64_t x699 = 546911634990033283LLU;

    t170 = (x697>((x698==x699)%x700));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x701 = 6U;
	uint8_t x702 = 49U;
	static uint16_t x703 = UINT16_MAX;
	int16_t x704 = INT16_MAX;
	int32_t t171 = -785023;

    t171 = (x701>((x702==x703)%x704));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x705 = INT64_MIN;
	uint16_t x707 = UINT16_MAX;
	uint16_t x708 = 3393U;

    t172 = (x705>((x706==x707)%x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x709 = 6653724658866660096LLU;
	static int16_t x710 = INT16_MIN;
	int8_t x711 = -1;
	int64_t x712 = 254864LL;
	int32_t t173 = 853934;

    t173 = (x709>((x710==x711)%x712));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x713 = INT64_MIN;
	volatile int8_t x714 = INT8_MIN;
	volatile int32_t x715 = INT32_MIN;
	volatile int32_t t174 = 241508793;

    t174 = (x713>((x714==x715)%x716));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x717 = 7685U;
	volatile int8_t x718 = 1;
	uint8_t x719 = 3U;
	volatile uint8_t x720 = 7U;

    t175 = (x717>((x718==x719)%x720));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x721 = 68U;
	int64_t x722 = -1LL;
	uint16_t x723 = 322U;
	static int8_t x724 = -31;
	int32_t t176 = -11178321;

    t176 = (x721>((x722==x723)%x724));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x725 = -1;
	int64_t x726 = -1LL;
	uint8_t x727 = 1U;

    t177 = (x725>((x726==x727)%x728));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x729 = -1;
	volatile int8_t x731 = -1;
	static volatile int32_t t178 = 35;

    t178 = (x729>((x730==x731)%x732));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x733 = INT64_MIN;
	int16_t x734 = -1;
	static int16_t x735 = INT16_MIN;
	volatile int32_t t179 = 0;

    t179 = (x733>((x734==x735)%x736));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x737 = 1;
	static int8_t x738 = 5;
	int64_t x739 = INT64_MIN;
	static int32_t x740 = -1;
	volatile int32_t t180 = 419;

    t180 = (x737>((x738==x739)%x740));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x741 = INT8_MIN;
	int16_t x742 = INT16_MIN;
	int32_t t181 = 134;

    t181 = (x741>((x742==x743)%x744));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x745 = 115U;
	int16_t x747 = INT16_MIN;
	static uint32_t x748 = UINT32_MAX;
	int32_t t182 = 15116723;

    t182 = (x745>((x746==x747)%x748));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x749 = -1;
	static int8_t x750 = INT8_MIN;
	static uint32_t x751 = UINT32_MAX;
	int32_t t183 = 1;

    t183 = (x749>((x750==x751)%x752));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x754 = INT64_MIN;
	int8_t x755 = -41;
	uint32_t x756 = 412082U;
	volatile int32_t t184 = -62027;

    t184 = (x753>((x754==x755)%x756));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x757 = INT8_MAX;
	int32_t x758 = INT32_MIN;
	int16_t x759 = -269;
	volatile int8_t x760 = INT8_MIN;
	int32_t t185 = -116181;

    t185 = (x757>((x758==x759)%x760));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x761 = 6124U;
	int16_t x762 = INT16_MIN;
	int64_t x763 = 1892LL;
	static int32_t t186 = -101531035;

    t186 = (x761>((x762==x763)%x764));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x765 = -1;
	static uint16_t x766 = UINT16_MAX;
	static int64_t x767 = INT64_MIN;
	static int64_t x768 = 493310034724244LL;

    t187 = (x765>((x766==x767)%x768));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x771 = INT64_MIN;
	volatile int8_t x772 = 1;
	static int32_t t188 = 5;

    t188 = (x769>((x770==x771)%x772));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x773 = 31;
	static int16_t x774 = INT16_MIN;
	volatile int16_t x775 = -1;
	int8_t x776 = 43;
	int32_t t189 = -197350271;

    t189 = (x773>((x774==x775)%x776));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x777 = -91;
	static uint8_t x778 = 6U;
	int32_t x779 = 191623620;
	static volatile int32_t t190 = -24518247;

    t190 = (x777>((x778==x779)%x780));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x782 = -1;
	int32_t x783 = 7062556;
	static int8_t x784 = INT8_MIN;
	int32_t t191 = -1;

    t191 = (x781>((x782==x783)%x784));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	int32_t x786 = -1;
	int16_t x787 = INT16_MAX;
	int32_t t192 = -2972814;

    t192 = (x785>((x786==x787)%x788));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x789 = INT8_MIN;
	int8_t x790 = -15;
	volatile uint32_t x791 = 113103982U;
	static uint16_t x792 = UINT16_MAX;
	int32_t t193 = -2860747;

    t193 = (x789>((x790==x791)%x792));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x793 = INT8_MIN;
	int8_t x794 = INT8_MIN;
	int8_t x795 = INT8_MIN;
	uint64_t x796 = 3179460831665679880LLU;
	int32_t t194 = -409267;

    t194 = (x793>((x794==x795)%x796));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x798 = 1;
	volatile int16_t x799 = -1;
	int32_t t195 = 0;

    t195 = (x797>((x798==x799)%x800));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x802 = -2;
	uint16_t x803 = 346U;
	static int64_t x804 = INT64_MIN;
	volatile int32_t t196 = -23136;

    t196 = (x801>((x802==x803)%x804));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x806 = INT32_MIN;
	uint8_t x808 = 21U;

    t197 = (x805>((x806==x807)%x808));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x809 = INT32_MAX;
	uint64_t x810 = 5LLU;
	int32_t t198 = -9952322;

    t198 = (x809>((x810==x811)%x812));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x814 = -40;
	uint64_t x815 = UINT64_MAX;
	int8_t x816 = -23;
	volatile int32_t t199 = -247;

    t199 = (x813>((x814==x815)%x816));

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

