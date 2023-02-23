
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

int32_t x1 = INT32_MIN;
volatile int32_t x10 = -7;
int16_t x16 = INT16_MIN;
int32_t x19 = INT32_MIN;
uint16_t x23 = 5396U;
volatile int32_t t5 = -7968;
int16_t x25 = 1584;
static uint64_t x33 = UINT64_MAX;
volatile int32_t t9 = -38644347;
volatile int32_t t10 = 848777348;
static int16_t x45 = INT16_MIN;
int32_t x57 = -23;
volatile int32_t x77 = 489;
volatile uint8_t x78 = 2U;
uint16_t x79 = 1U;
int16_t x81 = INT16_MAX;
uint8_t x83 = 8U;
volatile int32_t x87 = -1;
static volatile int32_t t21 = 26978205;
int16_t x91 = INT16_MIN;
static volatile int16_t x96 = 1;
int16_t x97 = INT16_MIN;
uint8_t x98 = UINT8_MAX;
volatile int32_t t24 = -73790674;
int64_t x102 = -12408153LL;
volatile int32_t x103 = 194;
uint8_t x105 = 41U;
int16_t x121 = INT16_MAX;
volatile int32_t t30 = 13553235;
int64_t x125 = INT64_MIN;
int32_t t31 = 30258;
int8_t x132 = -1;
static int64_t x136 = 13123286803059LL;
volatile int32_t x138 = -1;
static int16_t x148 = INT16_MAX;
int32_t t36 = 17678;
int8_t x150 = 1;
uint8_t x155 = UINT8_MAX;
volatile int32_t t38 = 85907;
uint16_t x165 = 36U;
int64_t x166 = -4043528783LL;
int32_t t42 = 57;
int32_t t43 = 49039;
uint32_t x189 = UINT32_MAX;
int16_t x190 = -169;
uint16_t x196 = 25U;
int16_t x199 = -1;
int8_t x203 = 1;
volatile uint8_t x208 = UINT8_MAX;
volatile int32_t t52 = 1;
uint8_t x219 = UINT8_MAX;
int32_t t55 = -1064;
uint8_t x232 = 9U;
volatile int8_t x234 = INT8_MIN;
int32_t x235 = INT32_MIN;
int16_t x236 = -6021;
volatile int32_t t58 = -60;
static volatile int16_t x242 = INT16_MIN;
int8_t x245 = INT8_MIN;
int16_t x247 = -182;
uint64_t x248 = UINT64_MAX;
int8_t x255 = INT8_MAX;
static int8_t x264 = -15;
volatile int16_t x267 = 3;
int32_t t66 = 17626;
int64_t x272 = -1LL;
volatile int8_t x273 = 0;
static int64_t x276 = -2LL;
volatile int32_t t70 = 433;
uint8_t x288 = UINT8_MAX;
volatile int32_t t72 = -552180936;
volatile int32_t t73 = -68548486;
int32_t x298 = -196913923;
int16_t x299 = -2980;
int8_t x306 = INT8_MIN;
volatile int8_t x309 = -1;
int32_t t77 = 2748;
uint16_t x319 = UINT16_MAX;
volatile int32_t t80 = 42;
uint16_t x328 = 1975U;
int32_t x338 = -1;
static int32_t x343 = INT32_MIN;
static int16_t x344 = INT16_MAX;
static int32_t x346 = INT32_MIN;
static volatile int32_t x351 = INT32_MIN;
int8_t x358 = -1;
volatile int32_t x359 = INT32_MIN;
int8_t x363 = INT8_MIN;
uint32_t x367 = UINT32_MAX;
int32_t t91 = 132624;
uint16_t x370 = 8578U;
uint32_t x376 = 3746U;
volatile int32_t t94 = -782495791;
int8_t x381 = INT8_MAX;
int16_t x382 = -1;
int32_t x399 = 8;
volatile uint32_t x404 = 156U;
int32_t x406 = -1;
volatile uint16_t x410 = UINT16_MAX;
volatile int64_t x412 = -1LL;
int32_t x418 = -16048087;
int8_t x421 = INT8_MIN;
int16_t x433 = INT16_MAX;
volatile int32_t t108 = -1222;
static int32_t x437 = INT32_MIN;
uint32_t x443 = UINT32_MAX;
int8_t x447 = -1;
int32_t t111 = 66661938;
int8_t x452 = 54;
static uint32_t x455 = 175433U;
volatile int32_t t113 = -2678439;
int16_t x458 = INT16_MIN;
uint16_t x470 = 1420U;
int8_t x477 = INT8_MIN;
static uint8_t x478 = 111U;
int32_t x479 = INT32_MIN;
volatile uint8_t x480 = 0U;
int8_t x481 = INT8_MIN;
int16_t x484 = 1;
static int8_t x491 = INT8_MIN;
static int8_t x502 = INT8_MIN;
static int32_t t125 = -2543;
volatile int32_t t127 = 73;
static int16_t x521 = -1;
static int8_t x527 = 37;
int16_t x529 = -1;
uint8_t x532 = UINT8_MAX;
int8_t x535 = -15;
volatile int8_t x542 = INT8_MIN;
static int32_t x545 = INT32_MIN;
int16_t x547 = -8171;
int32_t x551 = 9680;
int8_t x552 = INT8_MIN;
static uint32_t x554 = UINT32_MAX;
int64_t x562 = -3LL;
volatile int32_t t141 = 1053554257;
volatile int32_t t142 = -1;
uint16_t x573 = 51U;
volatile uint32_t x575 = 525238306U;
volatile int16_t x581 = 494;
int64_t x583 = INT64_MIN;
int64_t x589 = INT64_MIN;
uint16_t x593 = 531U;
int32_t x602 = INT32_MIN;
int32_t x604 = -8534;
volatile int16_t x605 = 7958;
int64_t x614 = -1LL;
int8_t x616 = INT8_MIN;
int64_t x619 = INT64_MIN;
static int64_t x620 = -365912503753710LL;
static volatile int32_t t155 = -2834;
static uint16_t x631 = UINT16_MAX;
uint32_t x632 = 10U;
uint64_t x639 = 8177540313846423277LLU;
volatile uint8_t x643 = 9U;
int32_t t161 = 66329533;
volatile uint16_t x649 = 7U;
int64_t x659 = INT64_MAX;
uint16_t x668 = 31U;
static volatile int32_t t166 = -487194950;
volatile int32_t t167 = -828044418;
int16_t x674 = -1;
static volatile uint32_t x676 = UINT32_MAX;
volatile int32_t t168 = -9412;
uint64_t x679 = UINT64_MAX;
int16_t x681 = 1;
int16_t x685 = -6320;
int64_t x689 = INT64_MAX;
static int32_t x692 = -222146;
static volatile int32_t t173 = -35;
int32_t x700 = INT32_MAX;
uint16_t x701 = UINT16_MAX;
static volatile int8_t x703 = -1;
int32_t t175 = -1957592;
int8_t x712 = INT8_MAX;
uint16_t x713 = 125U;
int8_t x718 = 46;
uint16_t x721 = UINT16_MAX;
int8_t x722 = -1;
static int32_t t180 = -17;
int16_t x729 = -1;
volatile int16_t x731 = INT16_MIN;
int8_t x733 = INT8_MIN;
volatile uint32_t x734 = UINT32_MAX;
int16_t x737 = -3469;
uint64_t x741 = UINT64_MAX;
volatile int8_t x744 = -2;
int8_t x746 = -1;
volatile int32_t t188 = 1;
static int16_t x759 = 421;
static uint64_t x760 = 31059113LLU;
int32_t x766 = 13909790;
int8_t x769 = INT8_MIN;
int16_t x773 = INT16_MIN;
uint8_t x778 = 6U;
uint32_t x784 = 44U;
static volatile int64_t x786 = -1LL;
int32_t t197 = -7807;
volatile int32_t x793 = INT32_MIN;
volatile uint8_t x800 = UINT8_MAX;


void f0(void) {
    	int16_t x2 = 1;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = 3U;
	int32_t t0 = -59;

    t0 = (x1<=((x2!=x3)<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 21U;
	uint16_t x6 = 0U;
	static int8_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 581594491;

    t1 = (x5<=((x6!=x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	static int16_t x11 = -126;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -3;

    t2 = (x9<=((x10!=x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	uint16_t x14 = 224U;
	int64_t x15 = INT64_MAX;
	static volatile int32_t t3 = 42;

    t3 = (x13<=((x14!=x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	int64_t x18 = -1LL;
	static uint8_t x20 = UINT8_MAX;
	int32_t t4 = 1;

    t4 = (x17<=((x18!=x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int16_t x22 = INT16_MIN;
	int16_t x24 = -1;

    t5 = (x21<=((x22!=x23)<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -7454865;

    t6 = (x25<=((x26!=x27)<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 1841380025173880190LL;
	uint64_t x30 = 187352043527751LLU;
	uint16_t x31 = 3U;
	int16_t x32 = -9401;
	int32_t t7 = -103906;

    t7 = (x29<=((x30!=x31)<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x34 = 1697LLU;
	static int32_t x35 = -1;
	int8_t x36 = 50;
	int32_t t8 = -249773552;

    t8 = (x33<=((x34!=x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -19;
	int16_t x38 = -5328;
	uint8_t x39 = 53U;
	uint16_t x40 = 924U;

    t9 = (x37<=((x38!=x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -20;
	int16_t x42 = -1;
	int64_t x43 = -876990LL;
	uint16_t x44 = 0U;

    t10 = (x41<=((x42!=x43)<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 19LLU;
	volatile int16_t x47 = INT16_MAX;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = 21977837;

    t11 = (x45<=((x46!=x47)<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = UINT32_MAX;
	uint16_t x50 = 4U;
	volatile uint16_t x51 = 15670U;
	uint8_t x52 = 19U;
	volatile int32_t t12 = 0;

    t12 = (x49<=((x50!=x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = 55;
	static uint32_t x54 = 69937U;
	static uint16_t x55 = UINT16_MAX;
	int8_t x56 = INT8_MAX;
	static int32_t t13 = 1446848;

    t13 = (x53<=((x54!=x55)<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x58 = INT64_MIN;
	static uint16_t x59 = 195U;
	int64_t x60 = -61LL;
	volatile int32_t t14 = -64;

    t14 = (x57<=((x58!=x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -26306LL;
	static uint32_t x62 = 30497U;
	static int64_t x63 = INT64_MIN;
	static volatile int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -101692;

    t15 = (x61<=((x62!=x63)<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = INT16_MIN;
	int8_t x66 = 19;
	int32_t x67 = INT32_MAX;
	int32_t x68 = 37;
	volatile int32_t t16 = -4035270;

    t16 = (x65<=((x66!=x67)<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	int16_t x70 = INT16_MIN;
	int32_t x71 = -1;
	uint16_t x72 = 5172U;
	volatile int32_t t17 = -1;

    t17 = (x69<=((x70!=x71)<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	uint32_t x74 = 244580934U;
	int32_t x75 = INT32_MAX;
	int8_t x76 = 26;
	volatile int32_t t18 = -4230140;

    t18 = (x73<=((x74!=x75)<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x80 = INT16_MAX;
	volatile int32_t t19 = 0;

    t19 = (x77<=((x78!=x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = 0;
	static volatile int64_t x84 = INT64_MIN;
	int32_t t20 = 0;

    t20 = (x81<=((x82!=x83)<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MIN;
	volatile int32_t x86 = INT32_MIN;
	static volatile int8_t x88 = INT8_MIN;

    t21 = (x85<=((x86!=x87)<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	volatile int8_t x90 = -2;
	int16_t x92 = INT16_MIN;
	static int32_t t22 = 0;

    t22 = (x89<=((x90!=x91)<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int32_t x94 = INT32_MAX;
	uint8_t x95 = 0U;
	volatile int32_t t23 = -159096818;

    t23 = (x93<=((x94!=x95)<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x99 = INT64_MIN;
	int16_t x100 = INT16_MAX;

    t24 = (x97<=((x98!=x99)<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -116015805295LL;
	uint64_t x104 = 2079481168352LLU;
	int32_t t25 = 3;

    t25 = (x101<=((x102!=x103)<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x106 = 0U;
	static uint8_t x107 = UINT8_MAX;
	volatile int16_t x108 = 332;
	static int32_t t26 = -67;

    t26 = (x105<=((x106!=x107)<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = UINT32_MAX;
	uint8_t x110 = UINT8_MAX;
	static uint16_t x111 = 4283U;
	int16_t x112 = INT16_MAX;
	int32_t t27 = 49366137;

    t27 = (x109<=((x110!=x111)<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint16_t x113 = UINT16_MAX;
	int16_t x114 = 3429;
	static uint32_t x115 = 6U;
	static volatile int16_t x116 = INT16_MIN;
	int32_t t28 = -15;

    t28 = (x113<=((x114!=x115)<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x117 = 246U;
	static uint64_t x118 = 29995732911LLU;
	int16_t x119 = 12914;
	uint32_t x120 = 327574881U;
	static int32_t t29 = -22200334;

    t29 = (x117<=((x118!=x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x122 = UINT16_MAX;
	int8_t x123 = -6;
	static int64_t x124 = INT64_MIN;

    t30 = (x121<=((x122!=x123)<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x126 = UINT8_MAX;
	volatile int64_t x127 = -41667854741LL;
	volatile int16_t x128 = INT16_MIN;

    t31 = (x125<=((x126!=x127)<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	static int32_t x130 = 17;
	uint8_t x131 = 19U;
	volatile int32_t t32 = 2260769;

    t32 = (x129<=((x130!=x131)<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	uint8_t x134 = 105U;
	static uint16_t x135 = 1349U;
	int32_t t33 = -1365134;

    t33 = (x133<=((x134!=x135)<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MAX;
	uint16_t x139 = 379U;
	static uint32_t x140 = 3286U;
	volatile int32_t t34 = -50278054;

    t34 = (x137<=((x138!=x139)<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MAX;
	int32_t x142 = INT32_MIN;
	volatile int32_t x143 = INT32_MIN;
	static volatile int16_t x144 = INT16_MIN;
	int32_t t35 = -5888;

    t35 = (x141<=((x142!=x143)<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = -1LL;
	int64_t x146 = INT64_MIN;
	static int32_t x147 = -845314;

    t36 = (x145<=((x146!=x147)<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MAX;
	static int8_t x151 = -1;
	int32_t x152 = -3014295;
	volatile int32_t t37 = 126489;

    t37 = (x149<=((x150!=x151)<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	uint32_t x154 = 3404U;
	static int8_t x156 = INT8_MIN;

    t38 = (x153<=((x154!=x155)<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x157 = UINT16_MAX;
	uint8_t x158 = UINT8_MAX;
	volatile int32_t x159 = INT32_MIN;
	int32_t x160 = -1;
	static int32_t t39 = 1920135;

    t39 = (x157<=((x158!=x159)<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	int32_t x162 = -7582359;
	int64_t x163 = INT64_MAX;
	int16_t x164 = -1;
	static volatile int32_t t40 = -285338;

    t40 = (x161<=((x162!=x163)<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x167 = -1;
	volatile int64_t x168 = -1LL;
	int32_t t41 = 5;

    t41 = (x165<=((x166!=x167)<=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = -1;
	uint16_t x170 = 34U;
	volatile int16_t x171 = -369;
	uint16_t x172 = 1445U;

    t42 = (x169<=((x170!=x171)<=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	static uint64_t x175 = 276622337LLU;
	volatile int64_t x176 = 1LL;

    t43 = (x173<=((x174!=x175)<=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = INT64_MIN;
	static volatile int8_t x178 = 1;
	volatile uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 190057;

    t44 = (x177<=((x178!=x179)<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	int16_t x182 = 56;
	int32_t x183 = -27;
	volatile int16_t x184 = 5306;
	int32_t t45 = 684897;

    t45 = (x181<=((x182!=x183)<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	volatile int8_t x188 = 2;
	int32_t t46 = 61540;

    t46 = (x185<=((x186!=x187)<=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x191 = -1;
	volatile uint64_t x192 = UINT64_MAX;
	int32_t t47 = -3;

    t47 = (x189<=((x190!=x191)<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x194 = -1;
	static uint8_t x195 = UINT8_MAX;
	volatile int32_t t48 = 5133648;

    t48 = (x193<=((x194!=x195)<=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	volatile uint32_t x200 = UINT32_MAX;
	int32_t t49 = 224350;

    t49 = (x197<=((x198!=x199)<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MAX;
	static int64_t x202 = INT64_MIN;
	int8_t x204 = -1;
	volatile int32_t t50 = 4209;

    t50 = (x201<=((x202!=x203)<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x205 = 48615182U;
	int16_t x206 = 1366;
	uint16_t x207 = 683U;
	int32_t t51 = -7846417;

    t51 = (x205<=((x206!=x207)<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	static uint64_t x210 = 84LLU;
	int8_t x211 = INT8_MIN;
	int64_t x212 = -28863157869118496LL;

    t52 = (x209<=((x210!=x211)<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -207LL;
	int64_t x214 = INT64_MIN;
	static uint16_t x215 = 13U;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 349638;

    t53 = (x213<=((x214!=x215)<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 133004156071LLU;
	static volatile int64_t x218 = -1LL;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = -472;

    t54 = (x217<=((x218!=x219)<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 5307702U;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = 172;
	uint16_t x224 = 5U;

    t55 = (x221<=((x222!=x223)<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	volatile uint64_t x226 = 1LLU;
	int32_t x227 = INT32_MAX;
	int64_t x228 = -1LL;
	static int32_t t56 = -1;

    t56 = (x225<=((x226!=x227)<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	volatile int32_t t57 = -1314;

    t57 = (x229<=((x230!=x231)<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 31125723632306LL;

    t58 = (x233<=((x234!=x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MAX;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MIN;
	volatile int16_t x240 = INT16_MIN;
	static int32_t t59 = -228267;

    t59 = (x237<=((x238!=x239)<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	uint8_t x243 = 3U;
	int32_t x244 = INT32_MIN;
	static volatile int32_t t60 = -9;

    t60 = (x241<=((x242!=x243)<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x246 = INT64_MIN;
	int32_t t61 = -116136482;

    t61 = (x245<=((x246!=x247)<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int16_t x250 = -48;
	static int64_t x251 = INT64_MIN;
	volatile uint64_t x252 = 169529LLU;
	int32_t t62 = -3346391;

    t62 = (x249<=((x250!=x251)<=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	uint64_t x254 = 349017765LLU;
	int16_t x256 = 7716;
	volatile int32_t t63 = 8;

    t63 = (x253<=((x254!=x255)<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	int16_t x258 = -1;
	int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t64 = -771856;

    t64 = (x257<=((x258!=x259)<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	int16_t x262 = -4608;
	static int16_t x263 = 0;
	static int32_t t65 = -988;

    t65 = (x261<=((x262!=x263)<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x265 = INT16_MAX;
	static volatile uint64_t x266 = 400984259LLU;
	static int32_t x268 = -3;

    t66 = (x265<=((x266!=x267)<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 3;
	int64_t x270 = INT64_MAX;
	int32_t x271 = INT32_MAX;
	volatile int32_t t67 = 1;

    t67 = (x269<=((x270!=x271)<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = INT8_MIN;
	int64_t x275 = INT64_MAX;
	volatile int32_t t68 = -1103;

    t68 = (x273<=((x274!=x275)<=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = -1;
	static uint16_t x278 = 11780U;
	volatile int32_t x279 = INT32_MAX;
	static int64_t x280 = 12LL;
	volatile int32_t t69 = -223;

    t69 = (x277<=((x278!=x279)<=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 256841022448412LLU;
	int32_t x282 = -90995958;
	uint64_t x283 = 318744016LLU;
	static int16_t x284 = -2;

    t70 = (x281<=((x282!=x283)<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 24037832;
	static uint32_t x286 = 301407U;
	volatile uint32_t x287 = 52U;
	int32_t t71 = 1;

    t71 = (x285<=((x286!=x287)<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x289 = 0;
	int16_t x290 = -196;
	volatile int64_t x291 = -85429LL;
	int16_t x292 = INT16_MIN;

    t72 = (x289<=((x290!=x291)<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x293 = 5698U;
	int64_t x294 = -700734549462LL;
	volatile uint16_t x295 = UINT16_MAX;
	volatile uint16_t x296 = 3543U;

    t73 = (x293<=((x294!=x295)<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = INT8_MIN;
	volatile int16_t x300 = INT16_MAX;
	volatile int32_t t74 = 1628841;

    t74 = (x297<=((x298!=x299)<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MAX;
	int8_t x302 = -1;
	uint32_t x303 = 1092718141U;
	int64_t x304 = -122499LL;
	int32_t t75 = -1831179;

    t75 = (x301<=((x302!=x303)<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = UINT16_MAX;
	uint16_t x307 = 118U;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 414141960;

    t76 = (x305<=((x306!=x307)<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = -1LL;
	volatile uint8_t x311 = 17U;
	int64_t x312 = INT64_MIN;

    t77 = (x309<=((x310!=x311)<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x313 = INT16_MAX;
	int16_t x314 = INT16_MIN;
	uint8_t x315 = 0U;
	int16_t x316 = 1;
	int32_t t78 = 644;

    t78 = (x313<=((x314!=x315)<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = INT64_MIN;
	static volatile int32_t x318 = INT32_MIN;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = -31406;

    t79 = (x317<=((x318!=x319)<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 5U;
	uint16_t x322 = UINT16_MAX;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = UINT32_MAX;

    t80 = (x321<=((x322!=x323)<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = 1;
	static int64_t x326 = -1LL;
	volatile uint16_t x327 = UINT16_MAX;
	int32_t t81 = -4503;

    t81 = (x325<=((x326!=x327)<=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = -1;
	static volatile uint64_t x330 = UINT64_MAX;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t82 = 179549;

    t82 = (x329<=((x330!=x331)<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 3U;
	uint64_t x334 = 724290048721LLU;
	uint16_t x335 = UINT16_MAX;
	int8_t x336 = 2;
	int32_t t83 = 14;

    t83 = (x333<=((x334!=x335)<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	int32_t x339 = INT32_MIN;
	uint8_t x340 = 15U;
	volatile int32_t t84 = -151;

    t84 = (x337<=((x338!=x339)<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = 29;
	static int16_t x342 = INT16_MAX;
	static volatile int32_t t85 = 488932727;

    t85 = (x341<=((x342!=x343)<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	volatile int64_t x347 = -1LL;
	int64_t x348 = 2594346LL;
	int32_t t86 = 2;

    t86 = (x345<=((x346!=x347)<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = -1LL;
	int64_t x350 = -65784249LL;
	int8_t x352 = 11;
	volatile int32_t t87 = 3609645;

    t87 = (x349<=((x350!=x351)<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	volatile uint16_t x354 = 73U;
	int8_t x355 = INT8_MIN;
	static int32_t x356 = -47;
	int32_t t88 = 9;

    t88 = (x353<=((x354!=x355)<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	int8_t x360 = INT8_MAX;
	int32_t t89 = 2333763;

    t89 = (x357<=((x358!=x359)<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 115LLU;
	static volatile int64_t x362 = INT64_MIN;
	int64_t x364 = -1128659LL;
	int32_t t90 = 289213;

    t90 = (x361<=((x362!=x363)<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -1;
	volatile uint64_t x366 = 38532LLU;
	uint32_t x368 = 33045486U;

    t91 = (x365<=((x366!=x367)<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	int64_t x371 = -1LL;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t92 = -22;

    t92 = (x369<=((x370!=x371)<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -1LL;
	int16_t x374 = -1;
	uint32_t x375 = 14760U;
	static volatile int32_t t93 = 1069027832;

    t93 = (x373<=((x374!=x375)<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = -548LL;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = -40377124587840036LL;

    t94 = (x377<=((x378!=x379)<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x383 = -833257;
	volatile uint8_t x384 = 1U;
	volatile int32_t t95 = 14;

    t95 = (x381<=((x382!=x383)<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x385 = 4115LLU;
	int8_t x386 = INT8_MAX;
	int8_t x387 = INT8_MIN;
	uint32_t x388 = 2015U;
	int32_t t96 = 68479315;

    t96 = (x385<=((x386!=x387)<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 2662LLU;
	int32_t x390 = 1;
	static int16_t x391 = 1184;
	volatile int8_t x392 = INT8_MIN;
	int32_t t97 = 28091739;

    t97 = (x389<=((x390!=x391)<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = 0;
	int32_t x394 = INT32_MAX;
	uint8_t x395 = UINT8_MAX;
	int64_t x396 = INT64_MIN;
	int32_t t98 = 832071;

    t98 = (x393<=((x394!=x395)<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 113429379072900LLU;
	uint32_t x398 = 1U;
	uint64_t x400 = 3955859997LLU;
	int32_t t99 = -384341;

    t99 = (x397<=((x398!=x399)<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -11;
	uint8_t x402 = 0U;
	int8_t x403 = -1;
	volatile int32_t t100 = 0;

    t100 = (x401<=((x402!=x403)<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	static int64_t x407 = -1704103LL;
	int16_t x408 = 6233;
	volatile int32_t t101 = -269;

    t101 = (x405<=((x406!=x407)<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	int32_t t102 = -1;

    t102 = (x409<=((x410!=x411)<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MAX;
	uint32_t x416 = 36U;
	volatile int32_t t103 = -39;

    t103 = (x413<=((x414!=x415)<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = 1U;
	int32_t x419 = 3815;
	int16_t x420 = -1;
	volatile int32_t t104 = 50;

    t104 = (x417<=((x418!=x419)<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x422 = 8552879040LL;
	int8_t x423 = -1;
	int16_t x424 = INT16_MIN;
	int32_t t105 = 84;

    t105 = (x421<=((x422!=x423)<=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x425 = 42449U;
	int8_t x426 = INT8_MIN;
	volatile uint32_t x427 = 25047164U;
	int32_t x428 = -5;
	int32_t t106 = 835845041;

    t106 = (x425<=((x426!=x427)<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x429 = 24257LLU;
	int8_t x430 = INT8_MAX;
	volatile uint64_t x431 = 1227LLU;
	uint32_t x432 = 477U;
	volatile int32_t t107 = 470;

    t107 = (x429<=((x430!=x431)<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x434 = INT8_MIN;
	static int16_t x435 = INT16_MAX;
	int32_t x436 = -1;

    t108 = (x433<=((x434!=x435)<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x438 = INT8_MIN;
	int64_t x439 = -1LL;
	volatile int32_t x440 = INT32_MIN;
	static volatile int32_t t109 = -1;

    t109 = (x437<=((x438!=x439)<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = 3U;
	int32_t x442 = -12097;
	int64_t x444 = -13LL;
	volatile int32_t t110 = 0;

    t110 = (x441<=((x442!=x443)<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 1LL;
	volatile int64_t x446 = 2369402782LL;
	int64_t x448 = -324685948317106117LL;

    t111 = (x445<=((x446!=x447)<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = 34730018U;
	static int16_t x450 = INT16_MIN;
	uint32_t x451 = 188U;
	volatile int32_t t112 = 6340693;

    t112 = (x449<=((x450!=x451)<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	static int32_t x454 = -260131;
	static int64_t x456 = INT64_MAX;

    t113 = (x453<=((x454!=x455)<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = -121;
	uint32_t x459 = 332938371U;
	int64_t x460 = -5675651390360922LL;
	volatile int32_t t114 = 525;

    t114 = (x457<=((x458!=x459)<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = 116LL;
	static volatile int64_t x462 = -1LL;
	int16_t x463 = 74;
	int8_t x464 = INT8_MIN;
	volatile int32_t t115 = 196605;

    t115 = (x461<=((x462!=x463)<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MAX;
	int64_t x466 = -1LL;
	int32_t x467 = -10;
	int32_t x468 = INT32_MIN;
	int32_t t116 = 9244;

    t116 = (x465<=((x466!=x467)<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x469 = 1509LLU;
	uint8_t x471 = 3U;
	uint8_t x472 = UINT8_MAX;
	static volatile int32_t t117 = -486539;

    t117 = (x469<=((x470!=x471)<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 83076472686722119LL;
	int16_t x474 = INT16_MIN;
	int16_t x475 = -63;
	volatile int32_t x476 = -1432;
	int32_t t118 = -3;

    t118 = (x473<=((x474!=x475)<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t t119 = 1804;

    t119 = (x477<=((x478!=x479)<=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x482 = INT64_MAX;
	int32_t x483 = INT32_MAX;
	static volatile int32_t t120 = -12;

    t120 = (x481<=((x482!=x483)<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -61;
	int64_t x486 = INT64_MIN;
	int32_t x487 = -1;
	int64_t x488 = -1LL;
	volatile int32_t t121 = 4;

    t121 = (x485<=((x486!=x487)<=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1;
	int64_t x490 = INT64_MIN;
	int8_t x492 = INT8_MAX;
	int32_t t122 = 3309567;

    t122 = (x489<=((x490!=x491)<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x493 = 2;
	int32_t x494 = INT32_MIN;
	static int8_t x495 = INT8_MIN;
	volatile int32_t x496 = INT32_MIN;
	int32_t t123 = 174342;

    t123 = (x493<=((x494!=x495)<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x497 = INT64_MIN;
	int16_t x498 = -1;
	int64_t x499 = INT64_MAX;
	int32_t x500 = INT32_MIN;
	int32_t t124 = 31;

    t124 = (x497<=((x498!=x499)<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 2U;
	static int16_t x503 = 15652;
	static int64_t x504 = INT64_MIN;

    t125 = (x501<=((x502!=x503)<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = INT64_MIN;
	int32_t x506 = 1761421;
	uint64_t x507 = UINT64_MAX;
	volatile int16_t x508 = INT16_MAX;
	static int32_t t126 = -93;

    t126 = (x505<=((x506!=x507)<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x509 = 1347;
	static uint8_t x510 = 58U;
	volatile uint32_t x511 = UINT32_MAX;
	volatile uint16_t x512 = UINT16_MAX;

    t127 = (x509<=((x510!=x511)<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = 1126LL;
	volatile int64_t x514 = -14838000689900329LL;
	volatile uint32_t x515 = 270804594U;
	uint64_t x516 = 5042882202668249881LLU;
	static int32_t t128 = -16;

    t128 = (x513<=((x514!=x515)<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -13;
	uint16_t x518 = 55U;
	uint16_t x519 = UINT16_MAX;
	volatile uint64_t x520 = UINT64_MAX;
	volatile int32_t t129 = -45626;

    t129 = (x517<=((x518!=x519)<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = -509;
	int8_t x523 = -13;
	static uint16_t x524 = UINT16_MAX;
	volatile int32_t t130 = -33679;

    t130 = (x521<=((x522!=x523)<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = UINT32_MAX;
	int32_t x526 = -1;
	int8_t x528 = -1;
	int32_t t131 = -11447;

    t131 = (x525<=((x526!=x527)<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x530 = INT8_MAX;
	int8_t x531 = 5;
	int32_t t132 = -1841658;

    t132 = (x529<=((x530!=x531)<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 1U;
	volatile uint8_t x534 = 88U;
	int16_t x536 = -1;
	volatile int32_t t133 = 297865;

    t133 = (x533<=((x534!=x535)<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x537 = 1808LLU;
	int16_t x538 = INT16_MIN;
	uint16_t x539 = UINT16_MAX;
	uint16_t x540 = UINT16_MAX;
	int32_t t134 = -8464748;

    t134 = (x537<=((x538!=x539)<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = INT32_MIN;
	int8_t x543 = -1;
	volatile uint32_t x544 = 826800U;
	int32_t t135 = -1252;

    t135 = (x541<=((x542!=x543)<=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x546 = 24U;
	int8_t x548 = -1;
	volatile int32_t t136 = -2530;

    t136 = (x545<=((x546!=x547)<=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = -1;
	uint16_t x550 = UINT16_MAX;
	volatile int32_t t137 = -3;

    t137 = (x549<=((x550!=x551)<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x553 = 1223771U;
	static uint16_t x555 = UINT16_MAX;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t138 = 723277116;

    t138 = (x553<=((x554!=x555)<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -1;
	int16_t x558 = INT16_MIN;
	volatile int16_t x559 = -1;
	int8_t x560 = INT8_MIN;
	int32_t t139 = 11652432;

    t139 = (x557<=((x558!=x559)<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -1;
	static int64_t x563 = INT64_MAX;
	int16_t x564 = -1;
	volatile int32_t t140 = -151783;

    t140 = (x561<=((x562!=x563)<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -6;
	volatile int8_t x566 = 61;
	static int64_t x567 = -1LL;
	static int16_t x568 = -1;

    t141 = (x565<=((x566!=x567)<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	uint64_t x570 = 1LLU;
	int32_t x571 = INT32_MIN;
	volatile int32_t x572 = INT32_MIN;

    t142 = (x569<=((x570!=x571)<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = INT32_MIN;
	static uint8_t x576 = 20U;
	static int32_t t143 = 29;

    t143 = (x573<=((x574!=x575)<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MAX;
	volatile int8_t x578 = INT8_MAX;
	int8_t x579 = INT8_MAX;
	static int64_t x580 = INT64_MIN;
	static int32_t t144 = -1;

    t144 = (x577<=((x578!=x579)<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = -1;
	volatile int64_t x584 = INT64_MIN;
	static int32_t t145 = 3366203;

    t145 = (x581<=((x582!=x583)<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x585 = 25U;
	volatile int8_t x586 = -1;
	volatile int8_t x587 = -2;
	volatile int32_t x588 = INT32_MIN;
	volatile int32_t t146 = -11767588;

    t146 = (x585<=((x586!=x587)<=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x590 = 32872731868LLU;
	static uint64_t x591 = 11482953780069816LLU;
	int8_t x592 = INT8_MIN;
	volatile int32_t t147 = 12;

    t147 = (x589<=((x590!=x591)<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x594 = 105641995416064785LLU;
	volatile uint64_t x595 = 7LLU;
	int32_t x596 = INT32_MIN;
	volatile int32_t t148 = -138540;

    t148 = (x593<=((x594!=x595)<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int64_t x598 = INT64_MAX;
	int16_t x599 = INT16_MIN;
	int32_t x600 = 2;
	static int32_t t149 = -7588;

    t149 = (x597<=((x598!=x599)<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MAX;
	volatile int32_t x603 = 88704;
	int32_t t150 = -440974;

    t150 = (x601<=((x602!=x603)<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = 9216U;
	uint64_t x607 = 108LLU;
	int16_t x608 = -1;
	int32_t t151 = -12;

    t151 = (x605<=((x606!=x607)<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = 161670;
	static uint64_t x610 = 233774639165598589LLU;
	volatile uint32_t x611 = 5918U;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t152 = -901776;

    t152 = (x609<=((x610!=x611)<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	int16_t x615 = INT16_MAX;
	volatile int32_t t153 = 2;

    t153 = (x613<=((x614!=x615)<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MAX;
	int64_t x618 = 0LL;
	int32_t t154 = 14281;

    t154 = (x617<=((x618!=x619)<=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = -32205137LL;
	int32_t x622 = 48;
	volatile uint64_t x623 = UINT64_MAX;
	volatile int16_t x624 = 17;

    t155 = (x621<=((x622!=x623)<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = -759;
	int16_t x626 = 0;
	volatile int32_t x627 = INT32_MIN;
	volatile int16_t x628 = INT16_MIN;
	volatile int32_t t156 = -1963;

    t156 = (x625<=((x626!=x627)<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -11817LL;
	uint64_t x630 = 2015169372169503029LLU;
	volatile int32_t t157 = -15;

    t157 = (x629<=((x630!=x631)<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 7U;
	uint32_t x634 = 748514U;
	volatile int16_t x635 = 1863;
	int8_t x636 = INT8_MIN;
	int32_t t158 = 844377;

    t158 = (x633<=((x634!=x635)<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	uint16_t x638 = 1U;
	uint32_t x640 = 42225U;
	volatile int32_t t159 = 83;

    t159 = (x637<=((x638!=x639)<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	static int64_t x642 = INT64_MAX;
	int8_t x644 = INT8_MIN;
	volatile int32_t t160 = -25;

    t160 = (x641<=((x642!=x643)<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x645 = 7U;
	volatile int16_t x646 = -1;
	int16_t x647 = 4;
	uint64_t x648 = 87800546LLU;

    t161 = (x645<=((x646!=x647)<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x650 = INT32_MIN;
	volatile uint16_t x651 = 0U;
	uint64_t x652 = 262616073121LLU;
	volatile int32_t t162 = 370738571;

    t162 = (x649<=((x650!=x651)<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	uint64_t x654 = 644511137735233021LLU;
	uint32_t x655 = 420596821U;
	int16_t x656 = 1817;
	volatile int32_t t163 = 14006;

    t163 = (x653<=((x654!=x655)<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 28688982243LLU;
	static uint16_t x658 = UINT16_MAX;
	int8_t x660 = INT8_MIN;
	int32_t t164 = 693914058;

    t164 = (x657<=((x658!=x659)<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	static int8_t x662 = -2;
	static volatile int16_t x663 = 1633;
	int32_t x664 = INT32_MIN;
	volatile int32_t t165 = 928232;

    t165 = (x661<=((x662!=x663)<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x665 = 1954LLU;
	uint8_t x666 = 2U;
	int64_t x667 = -2279LL;

    t166 = (x665<=((x666!=x667)<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	uint8_t x670 = UINT8_MAX;
	static int32_t x671 = INT32_MIN;
	static int64_t x672 = INT64_MIN;

    t167 = (x669<=((x670!=x671)<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	int32_t x675 = 1857;

    t168 = (x673<=((x674!=x675)<=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -899;
	uint32_t x678 = 424754U;
	int64_t x680 = 1315388LL;
	int32_t t169 = -14;

    t169 = (x677<=((x678!=x679)<=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x682 = 0U;
	uint8_t x683 = 64U;
	volatile int16_t x684 = -334;
	int32_t t170 = 117394089;

    t170 = (x681<=((x682!=x683)<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = -109889LL;
	int64_t x687 = 0LL;
	uint8_t x688 = 1U;
	volatile int32_t t171 = 1;

    t171 = (x685<=((x686!=x687)<=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x690 = INT32_MAX;
	volatile int64_t x691 = INT64_MIN;
	static int32_t t172 = 3751772;

    t172 = (x689<=((x690!=x691)<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x693 = INT64_MIN;
	static int8_t x694 = 1;
	int16_t x695 = INT16_MAX;
	volatile int16_t x696 = 234;

    t173 = (x693<=((x694!=x695)<=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = UINT32_MAX;
	uint32_t x698 = UINT32_MAX;
	volatile int64_t x699 = INT64_MAX;
	static volatile int32_t t174 = 246407;

    t174 = (x697<=((x698!=x699)<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x702 = INT16_MAX;
	volatile int64_t x704 = INT64_MIN;

    t175 = (x701<=((x702!=x703)<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = UINT32_MAX;
	int32_t x706 = INT32_MIN;
	int64_t x707 = -1LL;
	int32_t x708 = INT32_MIN;
	int32_t t176 = 0;

    t176 = (x705<=((x706!=x707)<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = 2626;
	static int16_t x710 = -3;
	volatile int64_t x711 = INT64_MIN;
	volatile int32_t t177 = 394147661;

    t177 = (x709<=((x710!=x711)<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x714 = 59449LLU;
	uint16_t x715 = UINT16_MAX;
	int64_t x716 = -1LL;
	volatile int32_t t178 = -2402;

    t178 = (x713<=((x714!=x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x717 = UINT32_MAX;
	uint16_t x719 = UINT16_MAX;
	volatile uint64_t x720 = 1837LLU;
	volatile int32_t t179 = 0;

    t179 = (x717<=((x718!=x719)<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x723 = 89202;
	static volatile uint8_t x724 = UINT8_MAX;

    t180 = (x721<=((x722!=x723)<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	int8_t x726 = 13;
	static int16_t x727 = -1871;
	static int8_t x728 = INT8_MIN;
	static volatile int32_t t181 = 10;

    t181 = (x725<=((x726!=x727)<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x730 = 57;
	static int64_t x732 = -1LL;
	volatile int32_t t182 = 27621;

    t182 = (x729<=((x730!=x731)<=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x735 = INT8_MIN;
	int16_t x736 = 1;
	volatile int32_t t183 = -29293;

    t183 = (x733<=((x734!=x735)<=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x738 = 6U;
	static int64_t x739 = 753832940654020LL;
	int64_t x740 = -1LL;
	static volatile int32_t t184 = -467274;

    t184 = (x737<=((x738!=x739)<=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = INT32_MIN;
	uint32_t x743 = 2457153U;
	int32_t t185 = 1237;

    t185 = (x741<=((x742!=x743)<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	uint8_t x747 = 74U;
	uint64_t x748 = UINT64_MAX;
	int32_t t186 = -5094;

    t186 = (x745<=((x746!=x747)<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	volatile int16_t x750 = -5494;
	static int8_t x751 = INT8_MIN;
	int8_t x752 = INT8_MIN;
	int32_t t187 = 1069994;

    t187 = (x749<=((x750!=x751)<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MAX;
	static int8_t x754 = -63;
	int64_t x755 = INT64_MIN;
	static int16_t x756 = INT16_MAX;

    t188 = (x753<=((x754!=x755)<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	static int64_t x758 = -32096919970953LL;
	volatile int32_t t189 = 0;

    t189 = (x757<=((x758!=x759)<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = UINT8_MAX;
	int8_t x762 = INT8_MIN;
	int64_t x763 = INT64_MIN;
	static uint8_t x764 = 19U;
	int32_t t190 = -20176;

    t190 = (x761<=((x762!=x763)<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	uint64_t x767 = 1139646792493888246LLU;
	int64_t x768 = -1LL;
	int32_t t191 = 231;

    t191 = (x765<=((x766!=x767)<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x770 = INT64_MIN;
	uint8_t x771 = 77U;
	int8_t x772 = INT8_MIN;
	volatile int32_t t192 = 1;

    t192 = (x769<=((x770!=x771)<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = INT8_MAX;
	uint32_t x775 = 0U;
	int8_t x776 = -1;
	volatile int32_t t193 = 123945;

    t193 = (x773<=((x774!=x775)<=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	int8_t x779 = INT8_MIN;
	static uint16_t x780 = 3U;
	volatile int32_t t194 = 7975;

    t194 = (x777<=((x778!=x779)<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 925123128U;
	volatile int32_t x782 = INT32_MIN;
	static uint64_t x783 = UINT64_MAX;
	int32_t t195 = 1;

    t195 = (x781<=((x782!=x783)<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = 1;
	int16_t x787 = 7;
	int8_t x788 = -1;
	volatile int32_t t196 = -511683;

    t196 = (x785<=((x786!=x787)<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = 169775;
	static volatile uint8_t x790 = UINT8_MAX;
	uint16_t x791 = 443U;
	volatile int64_t x792 = -1LL;

    t197 = (x789<=((x790!=x791)<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x794 = INT8_MAX;
	int32_t x795 = INT32_MIN;
	int64_t x796 = -952081435217020847LL;
	int32_t t198 = 15838;

    t198 = (x793<=((x794!=x795)<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -2;
	static volatile int64_t x798 = INT64_MAX;
	uint8_t x799 = 1U;
	volatile int32_t t199 = 1;

    t199 = (x797<=((x798!=x799)<=x800));

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

