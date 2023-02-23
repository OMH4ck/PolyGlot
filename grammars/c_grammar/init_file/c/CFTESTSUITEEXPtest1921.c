
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

int32_t x9 = INT32_MIN;
uint32_t x11 = 223688830U;
int32_t x14 = -4036621;
int8_t x15 = -1;
int32_t x16 = -1;
uint32_t t3 = 40281U;
uint8_t x34 = UINT8_MAX;
static int64_t x35 = INT64_MAX;
volatile int64_t t9 = -3939369205799751249LL;
int64_t x47 = INT64_MIN;
int32_t x50 = INT32_MIN;
int8_t x51 = INT8_MAX;
volatile int64_t x52 = -217065LL;
static uint8_t x61 = UINT8_MAX;
uint16_t x68 = UINT16_MAX;
volatile uint8_t x72 = UINT8_MAX;
int32_t t17 = 1861;
uint32_t x74 = 207841U;
volatile uint16_t x85 = 1210U;
static volatile uint32_t x97 = UINT32_MAX;
int32_t x100 = INT32_MIN;
uint8_t x109 = UINT8_MAX;
static uint16_t x111 = UINT16_MAX;
static int8_t x119 = INT8_MIN;
static volatile uint16_t x132 = 22622U;
int16_t x133 = -1;
int32_t x137 = INT32_MAX;
volatile uint32_t t34 = 4063U;
static uint16_t x156 = 12157U;
volatile int32_t t38 = -949;
volatile int8_t x162 = INT8_MIN;
volatile int32_t t40 = -1070739;
static int16_t x166 = INT16_MIN;
int8_t x172 = INT8_MAX;
uint8_t x175 = UINT8_MAX;
volatile int64_t t43 = 41557019978217LL;
uint16_t x178 = 9781U;
int32_t x181 = INT32_MIN;
volatile int64_t x184 = -1LL;
int16_t x185 = INT16_MAX;
uint8_t x196 = UINT8_MAX;
int16_t x197 = -1;
int8_t x198 = INT8_MIN;
int64_t x199 = 3926636LL;
uint64_t x202 = UINT64_MAX;
static volatile int32_t t50 = -33038;
static int16_t x211 = -1;
volatile int32_t x213 = INT32_MIN;
int8_t x217 = INT8_MAX;
int32_t t55 = 63;
int64_t x228 = -1LL;
int16_t x229 = 0;
int16_t x231 = INT16_MIN;
int32_t x239 = 79;
volatile uint64_t t61 = 81036806898055LLU;
volatile int32_t t63 = 973;
uint64_t x257 = 84190571819LLU;
volatile int16_t x265 = INT16_MIN;
uint64_t x272 = 2109013942LLU;
int32_t x282 = INT32_MIN;
int16_t x283 = 13;
volatile int64_t x297 = INT64_MIN;
int16_t x299 = INT16_MAX;
volatile int64_t t74 = 27LL;
volatile uint8_t x301 = 18U;
static volatile int32_t t76 = -4;
int16_t x309 = INT16_MIN;
int32_t x311 = INT32_MAX;
static volatile int16_t x313 = -5270;
volatile int16_t x315 = 1;
static int16_t x322 = INT16_MIN;
uint8_t x326 = 85U;
static uint32_t x329 = UINT32_MAX;
int64_t x333 = INT64_MAX;
int64_t x342 = INT64_MIN;
uint8_t x343 = UINT8_MAX;
volatile uint64_t t85 = 1458035961103LLU;
volatile int64_t t87 = 3146522665056LL;
static int64_t x358 = INT64_MAX;
int16_t x361 = -1;
uint16_t x367 = 1U;
volatile int32_t t93 = -1374;
static int16_t x388 = -1;
volatile int32_t x400 = INT32_MIN;
volatile int32_t t99 = 9;
int16_t x402 = -1;
volatile int8_t x403 = 0;
uint64_t t100 = 132348399015722LLU;
static uint64_t x406 = 92994359957171LLU;
int8_t x408 = INT8_MIN;
uint8_t x413 = UINT8_MAX;
int64_t x429 = 31701397061725LL;
uint32_t x433 = 7560U;
uint32_t x440 = UINT32_MAX;
int64_t x445 = -1LL;
int16_t x446 = INT16_MAX;
int32_t x455 = INT32_MAX;
static volatile int32_t t113 = 10698;
int16_t x463 = -1;
int32_t t115 = -48539;
static int8_t x468 = INT8_MIN;
int16_t x470 = 10;
volatile int8_t x472 = INT8_MIN;
int16_t x477 = 3683;
int8_t x479 = INT8_MIN;
int64_t x491 = -1LL;
int32_t t122 = 7703;
static int8_t x497 = 48;
int32_t x499 = INT32_MAX;
int16_t x504 = INT16_MAX;
volatile uint32_t x505 = 1809090484U;
int64_t x515 = 406069210708LL;
volatile int8_t x516 = INT8_MIN;
int8_t x517 = INT8_MIN;
int32_t x518 = -1770;
int32_t x523 = INT32_MAX;
uint16_t x528 = UINT16_MAX;
int32_t t131 = -245704150;
uint64_t x537 = UINT64_MAX;
static int32_t x539 = -1;
volatile int8_t x543 = 0;
int64_t x544 = INT64_MIN;
int16_t x560 = INT16_MAX;
uint64_t x561 = 384043627893995558LLU;
volatile uint64_t t140 = 2525455376552LLU;
int64_t x567 = INT64_MAX;
volatile uint16_t x573 = 3681U;
int32_t x575 = 61;
volatile uint16_t x577 = 0U;
int8_t x578 = -2;
volatile uint16_t x580 = 1U;
int32_t t144 = -31777;
static volatile int8_t x582 = -13;
static int64_t x583 = 3237655568252LL;
volatile int32_t t148 = 785;
volatile uint32_t t149 = 473057U;
volatile int32_t x601 = INT32_MIN;
volatile int64_t x604 = INT64_MAX;
int16_t x611 = INT16_MAX;
volatile int32_t t153 = -844297295;
volatile uint64_t x617 = 866293055781788LLU;
uint8_t x624 = 54U;
int64_t x625 = -1548759835LL;
int64_t t156 = -97620LL;
int16_t x639 = 659;
int64_t t159 = 698276935LL;
int64_t x642 = -1LL;
static volatile int64_t t160 = 2713554337LL;
int8_t x651 = -1;
uint8_t x655 = 8U;
int32_t t163 = 3272042;
int64_t x658 = INT64_MIN;
uint32_t x665 = UINT32_MAX;
int64_t t166 = -18856618601971665LL;
int64_t x673 = INT64_MAX;
static volatile int64_t x678 = -1192LL;
int64_t x681 = -1LL;
int64_t t170 = 62838503LL;
volatile int32_t x687 = 46016;
static int64_t x691 = INT64_MAX;
int32_t x694 = INT32_MIN;
int8_t x696 = INT8_MIN;
int32_t x698 = INT32_MAX;
int32_t t174 = -54094853;
volatile int32_t x712 = -1;
static int32_t x714 = INT32_MIN;
static uint16_t x721 = 30U;
uint32_t x722 = 1077200U;
volatile int32_t t181 = 1;
uint8_t x734 = 8U;
volatile uint64_t x736 = 532434289338LLU;
volatile int64_t t184 = -7661705034405743LL;
uint32_t x744 = 1987U;
uint64_t x746 = 0LLU;
uint16_t x748 = 19439U;
int64_t t186 = INT64_MIN;
static uint8_t x756 = 6U;
int8_t x759 = INT8_MAX;
volatile uint64_t t192 = 0LLU;
uint8_t x774 = 34U;
static int32_t x776 = INT32_MAX;
int16_t x779 = INT16_MIN;
static uint32_t x783 = UINT32_MAX;
volatile uint32_t x790 = 105584U;
int64_t x792 = INT64_MIN;
uint32_t x795 = 8444U;
volatile uint16_t x797 = 31U;
static volatile uint64_t x799 = UINT64_MAX;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int32_t x2 = -1;
	static volatile uint8_t x3 = 5U;
	int8_t x4 = -1;
	static volatile int64_t t0 = INT64_MAX;

    t0 = (x1*((x2<=x3)&x4));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MAX;
	uint16_t x6 = 3U;
	static int8_t x7 = -2;
	int8_t x8 = 11;
	int32_t t1 = -129103676;

    t1 = (x5*((x6<=x7)&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x10 = 247;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = 1LL;

    t2 = (x9*((x10<=x11)&x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 561U;

    t3 = (x13*((x14<=x15)&x16));

    if (t3 != 561U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MIN;
	int8_t x19 = INT8_MIN;
	static int16_t x20 = -2531;
	volatile int32_t t4 = -1185778;

    t4 = (x17*((x18<=x19)&x20));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -3;
	int32_t x22 = 148;
	int32_t x23 = INT32_MAX;
	uint32_t x24 = 7630U;
	static volatile uint32_t t5 = 2465U;

    t5 = (x21*((x22<=x23)&x24));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 2U;
	uint16_t x26 = 719U;
	int64_t x27 = INT64_MIN;
	uint8_t x28 = 1U;
	volatile int32_t t6 = 118;

    t6 = (x25*((x26<=x27)&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	uint64_t x30 = UINT64_MAX;
	uint64_t x31 = UINT64_MAX;
	uint32_t x32 = 17096568U;
	uint32_t t7 = 5089371U;

    t7 = (x29*((x30<=x31)&x32));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x33 = UINT8_MAX;
	uint16_t x36 = 169U;
	int32_t t8 = -2;

    t8 = (x33*((x34<=x35)&x36));

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -11161465262LL;
	int8_t x38 = 0;
	int32_t x39 = INT32_MAX;
	uint16_t x40 = 1760U;

    t9 = (x37*((x38<=x39)&x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int64_t x42 = 290734708LL;
	int16_t x43 = -94;
	int64_t x44 = -1LL;
	volatile int64_t t10 = -43294LL;

    t10 = (x41*((x42<=x43)&x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x45 = INT16_MAX;
	int64_t x46 = -1LL;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = 1;

    t11 = (x45*((x46<=x47)&x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	static volatile int64_t t12 = 1567201741102173LL;

    t12 = (x49*((x50<=x51)&x52));

    if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = INT16_MIN;
	int32_t x54 = 1319097;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = 0;
	volatile int32_t t13 = 142977;

    t13 = (x53*((x54<=x55)&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x57 = 3LLU;
	static int32_t x58 = INT32_MIN;
	uint64_t x59 = 15664566189698LLU;
	int64_t x60 = INT64_MIN;
	uint64_t t14 = 104100484403424103LLU;

    t14 = (x57*((x58<=x59)&x60));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x62 = UINT8_MAX;
	int64_t x63 = -270233753169618LL;
	static uint16_t x64 = 55U;
	int32_t t15 = 999646;

    t15 = (x61*((x62<=x63)&x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = -25;
	int32_t x66 = INT32_MIN;
	volatile uint64_t x67 = UINT64_MAX;
	volatile int32_t t16 = 2355;

    t16 = (x65*((x66<=x67)&x68));

    if (t16 != -25) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = -1;
	uint32_t x70 = 74U;
	uint32_t x71 = 28190964U;

    t17 = (x69*((x70<=x71)&x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	int8_t x75 = 9;
	volatile uint64_t x76 = 3993LLU;
	static uint64_t t18 = 76185LLU;

    t18 = (x73*((x74<=x75)&x76));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 61U;
	int32_t x78 = -42077962;
	int64_t x79 = -34695033209859LL;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = 0;

    t19 = (x77*((x78<=x79)&x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	static int8_t x82 = INT8_MAX;
	int8_t x83 = 48;
	uint8_t x84 = 5U;
	int64_t t20 = -224944LL;

    t20 = (x81*((x82<=x83)&x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x86 = UINT64_MAX;
	uint16_t x87 = UINT16_MAX;
	static int8_t x88 = INT8_MAX;
	static volatile int32_t t21 = 0;

    t21 = (x85*((x86<=x87)&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = UINT32_MAX;
	static volatile uint8_t x90 = 51U;
	static int8_t x91 = INT8_MIN;
	uint16_t x92 = 233U;
	volatile uint32_t t22 = 46428U;

    t22 = (x89*((x90<=x91)&x92));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 5U;
	static int16_t x94 = -1;
	int16_t x95 = -1860;
	int32_t x96 = -248718;
	int32_t t23 = -462;

    t23 = (x93*((x94<=x95)&x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x98 = INT16_MIN;
	volatile uint64_t x99 = 60968LLU;
	uint32_t t24 = 1397436910U;

    t24 = (x97*((x98<=x99)&x100));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x101 = 1998921U;
	volatile uint16_t x102 = UINT16_MAX;
	volatile int8_t x103 = -1;
	volatile uint8_t x104 = 4U;
	volatile uint32_t t25 = 209034587U;

    t25 = (x101*((x102<=x103)&x104));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 23820363325794LL;
	static volatile int32_t x106 = -1;
	int8_t x107 = -6;
	uint8_t x108 = UINT8_MAX;
	int64_t t26 = -1820LL;

    t26 = (x105*((x106<=x107)&x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x110 = 2753397U;
	static int8_t x112 = 1;
	int32_t t27 = -24;

    t27 = (x109*((x110<=x111)&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	static int32_t x114 = INT32_MIN;
	static uint16_t x115 = UINT16_MAX;
	volatile uint16_t x116 = UINT16_MAX;
	int32_t t28 = 24686472;

    t28 = (x113*((x114<=x115)&x116));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int8_t x120 = -1;
	volatile int32_t t29 = 1091812;

    t29 = (x117*((x118<=x119)&x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 3726LL;
	volatile uint16_t x122 = 5638U;
	volatile int16_t x123 = -3;
	static uint64_t x124 = 17077LLU;
	volatile uint64_t t30 = 2527428974988LLU;

    t30 = (x121*((x122<=x123)&x124));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -75;
	int32_t x126 = -1;
	int8_t x127 = -1;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -453499355;

    t31 = (x125*((x126<=x127)&x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 3581117LL;
	int32_t x130 = -1;
	int32_t x131 = -1;
	int64_t t32 = 25476828700747454LL;

    t32 = (x129*((x130<=x131)&x132));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x134 = INT64_MIN;
	uint8_t x135 = 0U;
	uint32_t x136 = 9500087U;
	uint32_t t33 = UINT32_MAX;

    t33 = (x133*((x134<=x135)&x136));

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = INT16_MIN;
	uint8_t x139 = 3U;
	uint32_t x140 = 11819842U;

    t34 = (x137*((x138<=x139)&x140));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 0;
	uint64_t x142 = 1589801859155662LLU;
	static uint8_t x143 = 13U;
	int8_t x144 = -5;
	static volatile int32_t t35 = 2;

    t35 = (x141*((x142<=x143)&x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	static int32_t x146 = INT32_MAX;
	int16_t x147 = -1232;
	int16_t x148 = -15;
	int32_t t36 = -264214862;

    t36 = (x145*((x146<=x147)&x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x149 = INT16_MAX;
	int32_t x150 = -2;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = 0;
	volatile int32_t t37 = -16173;

    t37 = (x149*((x150<=x151)&x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x153 = 0U;
	int64_t x154 = INT64_MIN;
	static uint16_t x155 = 16747U;

    t38 = (x153*((x154<=x155)&x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = 1829U;
	volatile uint64_t x158 = UINT64_MAX;
	int16_t x159 = 11;
	volatile int16_t x160 = INT16_MIN;
	volatile uint32_t t39 = 121U;

    t39 = (x157*((x158<=x159)&x160));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = INT16_MIN;
	uint32_t x163 = 1348598U;
	volatile uint8_t x164 = 2U;

    t40 = (x161*((x162<=x163)&x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 951383529748948591LLU;
	int32_t x167 = 828293789;
	uint16_t x168 = 316U;
	uint64_t t41 = 1841559641LLU;

    t41 = (x165*((x166<=x167)&x168));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MAX;
	int64_t t42 = INT64_MAX;

    t42 = (x169*((x170<=x171)&x172));

    if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -4004764024LL;
	int16_t x174 = 458;
	volatile int8_t x176 = -1;

    t43 = (x173*((x174<=x175)&x176));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	static int64_t x179 = 13463LL;
	volatile uint8_t x180 = 71U;
	volatile int32_t t44 = 459;

    t44 = (x177*((x178<=x179)&x180));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x182 = -1LL;
	uint16_t x183 = 342U;
	int64_t t45 = 2LL;

    t45 = (x181*((x182<=x183)&x184));

    if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x186 = UINT8_MAX;
	uint32_t x187 = UINT32_MAX;
	volatile int16_t x188 = -1;
	int32_t t46 = 1;

    t46 = (x185*((x186<=x187)&x188));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1364;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = 117;
	volatile uint32_t x192 = 30U;
	volatile uint32_t t47 = 43U;

    t47 = (x189*((x190<=x191)&x192));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 19U;
	static uint8_t x194 = 2U;
	volatile uint16_t x195 = 3301U;
	uint32_t t48 = 1764U;

    t48 = (x193*((x194<=x195)&x196));

    if (t48 != 19U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x200 = 72606U;
	volatile uint32_t t49 = 232707U;

    t49 = (x197*((x198<=x199)&x200));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x201 = 2U;
	volatile int8_t x203 = INT8_MAX;
	int16_t x204 = INT16_MAX;

    t50 = (x201*((x202<=x203)&x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	uint8_t x206 = 0U;
	int64_t x207 = INT64_MAX;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = 50206;

    t51 = (x205*((x206<=x207)&x208));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MAX;
	volatile uint16_t x212 = 589U;
	int64_t t52 = -439LL;

    t52 = (x209*((x210<=x211)&x212));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = 7;
	static int64_t x215 = INT64_MIN;
	int8_t x216 = 9;
	volatile int32_t t53 = 8187984;

    t53 = (x213*((x214<=x215)&x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x218 = -1;
	uint16_t x219 = UINT16_MAX;
	static int64_t x220 = INT64_MAX;
	volatile int64_t t54 = -16704199LL;

    t54 = (x217*((x218<=x219)&x220));

    if (t54 != 127LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MAX;
	uint8_t x222 = UINT8_MAX;
	uint16_t x223 = UINT16_MAX;
	uint8_t x224 = 18U;

    t55 = (x221*((x222<=x223)&x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MIN;
	static int16_t x226 = INT16_MIN;
	volatile int16_t x227 = 0;
	int64_t t56 = -5LL;

    t56 = (x225*((x226<=x227)&x228));

    if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = INT16_MAX;
	volatile int16_t x232 = 0;
	volatile int32_t t57 = -1358;

    t57 = (x229*((x230<=x231)&x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	uint64_t x234 = UINT64_MAX;
	static int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MIN;
	int64_t t58 = 4676LL;

    t58 = (x233*((x234<=x235)&x236));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	static volatile int16_t x238 = -1;
	static int8_t x240 = -1;
	int32_t t59 = 238184552;

    t59 = (x237*((x238<=x239)&x240));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	static int64_t x242 = -1LL;
	static int16_t x243 = -8;
	static int8_t x244 = INT8_MIN;
	int32_t t60 = 3771;

    t60 = (x241*((x242<=x243)&x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x245 = 6339312521891975491LLU;
	int8_t x246 = INT8_MIN;
	int64_t x247 = -263034381082310947LL;
	uint8_t x248 = UINT8_MAX;

    t61 = (x245*((x246<=x247)&x248));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = -667276397017166LL;
	volatile int16_t x250 = -1;
	static volatile uint32_t x251 = 341421108U;
	uint64_t x252 = UINT64_MAX;
	uint64_t t62 = 21388159410LLU;

    t62 = (x249*((x250<=x251)&x252));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 2U;
	uint8_t x254 = UINT8_MAX;
	volatile int8_t x255 = INT8_MAX;
	static uint8_t x256 = 5U;

    t63 = (x253*((x254<=x255)&x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x258 = INT16_MAX;
	int16_t x259 = 11;
	int64_t x260 = -1LL;
	uint64_t t64 = 56954LLU;

    t64 = (x257*((x258<=x259)&x260));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 53U;
	uint16_t x262 = UINT16_MAX;
	static int8_t x263 = -1;
	uint8_t x264 = UINT8_MAX;
	volatile uint32_t t65 = 58951U;

    t65 = (x261*((x262<=x263)&x264));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x266 = UINT16_MAX;
	volatile uint16_t x267 = UINT16_MAX;
	int64_t x268 = INT64_MAX;
	int64_t t66 = 5991474866LL;

    t66 = (x265*((x266<=x267)&x268));

    if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = INT16_MAX;
	volatile uint16_t x270 = UINT16_MAX;
	static uint32_t x271 = 24828U;
	volatile uint64_t t67 = 663681LLU;

    t67 = (x269*((x270<=x271)&x272));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -6442;
	static int8_t x274 = 61;
	static uint16_t x275 = UINT16_MAX;
	int64_t x276 = INT64_MIN;
	volatile int64_t t68 = 9184LL;

    t68 = (x273*((x274<=x275)&x276));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	int32_t x278 = INT32_MAX;
	static int32_t x279 = 337994016;
	int32_t x280 = INT32_MAX;
	int64_t t69 = 13628655131496525LL;

    t69 = (x277*((x278<=x279)&x280));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 1;
	int64_t x284 = 204806992952289427LL;
	volatile int64_t t70 = -2203823616672LL;

    t70 = (x281*((x282<=x283)&x284));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x285 = 12U;
	int64_t x286 = INT64_MAX;
	uint64_t x287 = UINT64_MAX;
	static int64_t x288 = 414571711LL;
	int64_t t71 = -7733963700991468LL;

    t71 = (x285*((x286<=x287)&x288));

    if (t71 != 12LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 3648567007LL;
	volatile uint16_t x290 = 1U;
	static volatile int32_t x291 = -1;
	int16_t x292 = INT16_MIN;
	static volatile int64_t t72 = -69LL;

    t72 = (x289*((x290<=x291)&x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = -1;
	volatile int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;
	int16_t x296 = -1428;
	static int32_t t73 = 317915111;

    t73 = (x293*((x294<=x295)&x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x298 = 11;
	int64_t x300 = INT64_MIN;

    t74 = (x297*((x298<=x299)&x300));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MAX;
	volatile int64_t x304 = -1LL;
	volatile int64_t t75 = -17728816LL;

    t75 = (x301*((x302<=x303)&x304));

    if (t75 != 18LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 398U;
	uint16_t x306 = 1U;
	volatile int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MAX;

    t76 = (x305*((x306<=x307)&x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x310 = UINT8_MAX;
	uint16_t x312 = UINT16_MAX;
	int32_t t77 = -11658;

    t77 = (x309*((x310<=x311)&x312));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = 501;
	static volatile int16_t x316 = 16284;
	int32_t t78 = -43;

    t78 = (x313*((x314<=x315)&x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	volatile int8_t x320 = -1;
	static int32_t t79 = -914125821;

    t79 = (x317*((x318<=x319)&x320));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = -1;
	int32_t x323 = -1;
	volatile int16_t x324 = -1;
	static volatile int32_t t80 = 29299;

    t80 = (x321*((x322<=x323)&x324));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	uint64_t x327 = 958696510LLU;
	int64_t x328 = 614564172LL;
	volatile uint64_t t81 = 3LLU;

    t81 = (x325*((x326<=x327)&x328));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x330 = INT32_MIN;
	static int8_t x331 = INT8_MIN;
	volatile int16_t x332 = INT16_MAX;
	volatile uint32_t t82 = UINT32_MAX;

    t82 = (x329*((x330<=x331)&x332));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = -15471189760163726LL;
	uint16_t x335 = 2U;
	volatile int32_t x336 = INT32_MIN;
	volatile int64_t t83 = 2530270LL;

    t83 = (x333*((x334<=x335)&x336));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = INT32_MIN;
	volatile int8_t x338 = INT8_MAX;
	volatile uint8_t x339 = 32U;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t84 = 72;

    t84 = (x337*((x338<=x339)&x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 15877439787815LLU;
	int8_t x344 = INT8_MIN;

    t85 = (x341*((x342<=x343)&x344));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	static int64_t x346 = INT64_MIN;
	int16_t x347 = -10013;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 96839271;

    t86 = (x345*((x346<=x347)&x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = -148056;
	static uint64_t x350 = 2161309193812267786LLU;
	int16_t x351 = 2350;
	volatile int64_t x352 = -32101229610LL;

    t87 = (x349*((x350<=x351)&x352));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = INT8_MIN;
	volatile uint32_t x354 = 271306U;
	uint64_t x355 = 165304852856LLU;
	uint32_t x356 = 126505U;
	volatile uint32_t t88 = 691131U;

    t88 = (x353*((x354<=x355)&x356));

    if (t88 != 4294967168U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	volatile int16_t x359 = 987;
	uint64_t x360 = 1529968LLU;
	volatile uint64_t t89 = 63925994186105LLU;

    t89 = (x357*((x358<=x359)&x360));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x362 = -1;
	int8_t x363 = 36;
	int8_t x364 = -9;
	static volatile int32_t t90 = -701190457;

    t90 = (x361*((x362<=x363)&x364));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x365 = 947073LLU;
	int64_t x366 = 223550220854643832LL;
	static uint8_t x368 = 113U;
	uint64_t t91 = 1327156LLU;

    t91 = (x365*((x366<=x367)&x368));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	volatile uint8_t x370 = 2U;
	uint16_t x371 = 14U;
	uint64_t x372 = 5046LLU;
	uint64_t t92 = 1119LLU;

    t92 = (x369*((x370<=x371)&x372));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x373 = UINT16_MAX;
	int64_t x374 = INT64_MAX;
	volatile uint64_t x375 = 17501394437058LLU;
	static int16_t x376 = INT16_MIN;

    t93 = (x373*((x374<=x375)&x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 1;
	uint8_t x378 = 1U;
	int16_t x379 = INT16_MAX;
	static int8_t x380 = INT8_MIN;
	static int32_t t94 = 731384104;

    t94 = (x377*((x378<=x379)&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	int8_t x382 = 0;
	int16_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	static int32_t t95 = 0;

    t95 = (x381*((x382<=x383)&x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -11041639;
	volatile uint8_t x386 = 3U;
	static int32_t x387 = -489;
	volatile int32_t t96 = -15626;

    t96 = (x385*((x386<=x387)&x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = INT16_MIN;
	volatile uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 94U;
	volatile int32_t t97 = -3028873;

    t97 = (x389*((x390<=x391)&x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -4793012;
	uint32_t x394 = UINT32_MAX;
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t98 = -1736808980873430LL;

    t98 = (x393*((x394<=x395)&x396));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = -1;
	volatile int32_t x398 = INT32_MAX;
	int8_t x399 = 1;

    t99 = (x397*((x398<=x399)&x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 28385407394LLU;
	volatile int16_t x404 = 1;

    t100 = (x401*((x402<=x403)&x404));

    if (t100 != 28385407394LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x405 = 31U;
	volatile int16_t x407 = -1;
	volatile int32_t t101 = 254944;

    t101 = (x405*((x406<=x407)&x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 10302U;
	int32_t x410 = INT32_MIN;
	uint32_t x411 = 67250041U;
	volatile int16_t x412 = 0;
	int32_t t102 = -3;

    t102 = (x409*((x410<=x411)&x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = INT8_MIN;
	static uint64_t x415 = UINT64_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t103 = 9;

    t103 = (x413*((x414<=x415)&x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x417 = INT8_MAX;
	int64_t x418 = -16184089679912LL;
	int32_t x419 = -1;
	int8_t x420 = -5;
	volatile int32_t t104 = 7864;

    t104 = (x417*((x418<=x419)&x420));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	static int8_t x422 = INT8_MAX;
	int16_t x423 = INT16_MIN;
	int32_t x424 = INT32_MIN;
	volatile int32_t t105 = -30247530;

    t105 = (x421*((x422<=x423)&x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1LL;
	uint32_t x426 = 498098944U;
	static volatile uint32_t x427 = 1028874U;
	volatile uint64_t x428 = UINT64_MAX;
	volatile uint64_t t106 = 212875LLU;

    t106 = (x425*((x426<=x427)&x428));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x430 = 29070214458214105LLU;
	int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;
	int64_t t107 = 204LL;

    t107 = (x429*((x430<=x431)&x432));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = -1602;
	static int16_t x435 = INT16_MIN;
	int32_t x436 = -1;
	volatile uint32_t t108 = 1197489U;

    t108 = (x433*((x434<=x435)&x436));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = UINT16_MAX;
	volatile int16_t x438 = INT16_MAX;
	int16_t x439 = INT16_MAX;
	static uint32_t t109 = 136229U;

    t109 = (x437*((x438<=x439)&x440));

    if (t109 != 65535U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	int16_t x442 = 1;
	static int64_t x443 = INT64_MIN;
	static volatile uint32_t x444 = 1808U;
	uint32_t t110 = 3U;

    t110 = (x441*((x442<=x443)&x444));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x447 = 1LLU;
	int32_t x448 = 0;
	volatile int64_t t111 = 1LL;

    t111 = (x445*((x446<=x447)&x448));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 111914U;
	int32_t x450 = INT32_MAX;
	int32_t x451 = -1;
	int64_t x452 = -203040LL;
	static int64_t t112 = 19282648LL;

    t112 = (x449*((x450<=x451)&x452));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x453 = 18U;
	volatile int8_t x454 = 3;
	static int8_t x456 = -1;

    t113 = (x453*((x454<=x455)&x456));

    if (t113 != 18) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1LL;
	static volatile uint16_t x458 = UINT16_MAX;
	int64_t x459 = -982052934105LL;
	uint32_t x460 = 1910208U;
	static int64_t t114 = 997961358LL;

    t114 = (x457*((x458<=x459)&x460));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -141;
	int32_t x462 = INT32_MIN;
	int8_t x464 = 1;

    t115 = (x461*((x462<=x463)&x464));

    if (t115 != -141) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	int16_t x466 = INT16_MAX;
	uint32_t x467 = 8524095U;
	int32_t t116 = -1401322;

    t116 = (x465*((x466<=x467)&x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 1U;
	static int8_t x471 = INT8_MIN;
	volatile int32_t t117 = 88;

    t117 = (x469*((x470<=x471)&x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	static int16_t x474 = INT16_MIN;
	int16_t x475 = -2;
	static int64_t x476 = -123998243634228LL;
	volatile int64_t t118 = 499997LL;

    t118 = (x473*((x474<=x475)&x476));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = INT16_MIN;
	volatile int16_t x480 = INT16_MIN;
	int32_t t119 = -21;

    t119 = (x477*((x478<=x479)&x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 4U;
	volatile int8_t x482 = INT8_MAX;
	volatile uint64_t x483 = UINT64_MAX;
	int64_t x484 = 253685867LL;
	int64_t t120 = 83LL;

    t120 = (x481*((x482<=x483)&x484));

    if (t120 != 4LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = 44405;
	int8_t x486 = -1;
	int32_t x487 = -5878;
	int32_t x488 = -1;
	int32_t t121 = -924;

    t121 = (x485*((x486<=x487)&x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = UINT8_MAX;
	uint8_t x490 = UINT8_MAX;
	int16_t x492 = 14;

    t122 = (x489*((x490<=x491)&x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -31;
	int16_t x494 = INT16_MAX;
	static uint16_t x495 = 11U;
	volatile int8_t x496 = -22;
	int32_t t123 = 6;

    t123 = (x493*((x494<=x495)&x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x498 = 6U;
	static uint8_t x500 = UINT8_MAX;
	int32_t t124 = -346;

    t124 = (x497*((x498<=x499)&x500));

    if (t124 != 48) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	uint32_t x502 = UINT32_MAX;
	int32_t x503 = INT32_MIN;
	int32_t t125 = -11909411;

    t125 = (x501*((x502<=x503)&x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x506 = -1;
	int8_t x507 = INT8_MIN;
	int8_t x508 = -11;
	volatile uint32_t t126 = 953U;

    t126 = (x505*((x506<=x507)&x508));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	uint8_t x510 = 0U;
	volatile int16_t x511 = -1;
	int64_t x512 = INT64_MAX;
	int64_t t127 = -48147589015LL;

    t127 = (x509*((x510<=x511)&x512));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 241U;
	int8_t x514 = 3;
	volatile uint32_t t128 = 37863654U;

    t128 = (x513*((x514<=x515)&x516));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x519 = INT8_MIN;
	int16_t x520 = -1;
	volatile int32_t t129 = 1;

    t129 = (x517*((x518<=x519)&x520));

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x521 = INT64_MIN;
	uint8_t x522 = 15U;
	int64_t x524 = -1LL;
	int64_t t130 = INT64_MIN;

    t130 = (x521*((x522<=x523)&x524));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 992U;
	int64_t x526 = -1LL;
	uint32_t x527 = UINT32_MAX;

    t131 = (x525*((x526<=x527)&x528));

    if (t131 != 992) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x529 = UINT64_MAX;
	static volatile int64_t x530 = 113255020LL;
	int32_t x531 = -1349224;
	int16_t x532 = INT16_MAX;
	volatile uint64_t t132 = 13611918743LLU;

    t132 = (x529*((x530<=x531)&x532));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MIN;
	int32_t x534 = INT32_MIN;
	static int16_t x535 = -2394;
	volatile int64_t x536 = 227LL;
	volatile int64_t t133 = -2883LL;

    t133 = (x533*((x534<=x535)&x536));

    if (t133 != -32768LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = -1;
	uint8_t x540 = UINT8_MAX;
	uint64_t t134 = UINT64_MAX;

    t134 = (x537*((x538<=x539)&x540));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MAX;
	int32_t x542 = -9246;
	int64_t t135 = -5796LL;

    t135 = (x541*((x542<=x543)&x544));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 2542U;
	int64_t x546 = -142797LL;
	int64_t x547 = 379412174647052LL;
	static int32_t x548 = -1;
	int32_t t136 = -37941320;

    t136 = (x545*((x546<=x547)&x548));

    if (t136 != 2542) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MAX;
	uint32_t x550 = 1948U;
	uint32_t x551 = UINT32_MAX;
	int32_t x552 = 629;
	int32_t t137 = -14131;

    t137 = (x549*((x550<=x551)&x552));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 0U;
	int8_t x554 = INT8_MIN;
	uint32_t x555 = 0U;
	static int16_t x556 = 6;
	volatile uint32_t t138 = 342818885U;

    t138 = (x553*((x554<=x555)&x556));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = INT8_MIN;
	volatile uint8_t x558 = UINT8_MAX;
	uint16_t x559 = 36U;
	volatile int32_t t139 = 125;

    t139 = (x557*((x558<=x559)&x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = -14335;
	int8_t x563 = INT8_MIN;
	volatile int64_t x564 = INT64_MIN;

    t140 = (x561*((x562<=x563)&x564));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x565 = UINT64_MAX;
	static int16_t x566 = 462;
	int64_t x568 = INT64_MIN;
	uint64_t t141 = 73LLU;

    t141 = (x565*((x566<=x567)&x568));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 5299U;
	volatile int32_t x570 = -1;
	int32_t x571 = -4019;
	int64_t x572 = -3046998314309LL;
	int64_t t142 = 66058723LL;

    t142 = (x569*((x570<=x571)&x572));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x574 = INT32_MIN;
	int8_t x576 = 28;
	volatile int32_t t143 = 9038;

    t143 = (x573*((x574<=x575)&x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x579 = 1U;

    t144 = (x577*((x578<=x579)&x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	volatile int64_t x584 = -9587566511LL;
	volatile int64_t t145 = 336LL;

    t145 = (x581*((x582<=x583)&x584));

    if (t145 != -128LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = INT64_MIN;
	int64_t x586 = -54588437LL;
	static int64_t x587 = -1LL;
	static uint32_t x588 = 6311656U;
	volatile int64_t t146 = -51454837142LL;

    t146 = (x585*((x586<=x587)&x588));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1346885;
	volatile uint64_t x590 = 43048453451497LLU;
	uint64_t x591 = 0LLU;
	int32_t x592 = INT32_MAX;
	volatile int32_t t147 = -104833793;

    t147 = (x589*((x590<=x591)&x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 1U;
	int64_t x594 = 9968039503690867LL;
	uint32_t x595 = 1U;
	volatile int32_t x596 = INT32_MAX;

    t148 = (x593*((x594<=x595)&x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -7;
	volatile int16_t x598 = -1;
	int32_t x599 = INT32_MIN;
	uint32_t x600 = UINT32_MAX;

    t149 = (x597*((x598<=x599)&x600));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 1U;
	static uint32_t x603 = 30U;
	int64_t t150 = -502LL;

    t150 = (x601*((x602<=x603)&x604));

    if (t150 != -2147483648LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int16_t x606 = INT16_MIN;
	uint64_t x607 = 8048716106061LLU;
	uint64_t x608 = 9118002116107935432LLU;
	volatile uint64_t t151 = 746851LLU;

    t151 = (x605*((x606<=x607)&x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	static int16_t x610 = 3;
	volatile int32_t x612 = INT32_MIN;
	static int32_t t152 = -1174;

    t152 = (x609*((x610<=x611)&x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x613 = 0U;
	int8_t x614 = -1;
	static uint16_t x615 = 1U;
	int16_t x616 = -134;

    t153 = (x613*((x614<=x615)&x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x618 = 3U;
	volatile int8_t x619 = -1;
	int8_t x620 = -1;
	uint64_t t154 = 154907LLU;

    t154 = (x617*((x618<=x619)&x620));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x621 = 6U;
	static int8_t x622 = -1;
	int16_t x623 = -1;
	volatile int32_t t155 = 46390918;

    t155 = (x621*((x622<=x623)&x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x626 = INT8_MIN;
	uint32_t x627 = 403588355U;
	volatile int8_t x628 = -1;

    t156 = (x625*((x626<=x627)&x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 1509U;
	static uint8_t x630 = 0U;
	uint16_t x631 = UINT16_MAX;
	uint32_t x632 = 12781U;
	volatile uint32_t t157 = 119U;

    t157 = (x629*((x630<=x631)&x632));

    if (t157 != 1509U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -1;
	uint16_t x634 = UINT16_MAX;
	int8_t x635 = INT8_MIN;
	uint8_t x636 = 41U;
	volatile int32_t t158 = -1665638;

    t158 = (x633*((x634<=x635)&x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	uint8_t x638 = 19U;
	static int32_t x640 = INT32_MIN;

    t159 = (x637*((x638<=x639)&x640));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = -1847988LL;
	int16_t x643 = INT16_MIN;
	static uint16_t x644 = UINT16_MAX;

    t160 = (x641*((x642<=x643)&x644));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	int32_t x646 = -2623;
	uint32_t x647 = UINT32_MAX;
	static volatile int64_t x648 = -1LL;
	volatile int64_t t161 = 154867LL;

    t161 = (x645*((x646<=x647)&x648));

    if (t161 != 4294967295LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1;
	int32_t x650 = INT32_MIN;
	int8_t x652 = 5;
	static volatile int32_t t162 = -57309134;

    t162 = (x649*((x650<=x651)&x652));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = 62078754;
	uint64_t x654 = 63300925332169LLU;
	volatile int16_t x656 = INT16_MIN;

    t163 = (x653*((x654<=x655)&x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = -1LL;
	uint32_t x659 = 258U;
	int64_t x660 = INT64_MIN;
	volatile int64_t t164 = 58LL;

    t164 = (x657*((x658<=x659)&x660));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	static int8_t x662 = 14;
	static int32_t x663 = INT32_MIN;
	int8_t x664 = INT8_MIN;
	volatile int32_t t165 = 1;

    t165 = (x661*((x662<=x663)&x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = INT64_MIN;
	uint8_t x667 = 0U;
	static int64_t x668 = INT64_MIN;

    t166 = (x665*((x666<=x667)&x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	volatile int32_t x670 = -28;
	int32_t x671 = -1;
	static int8_t x672 = INT8_MIN;
	static int32_t t167 = -144;

    t167 = (x669*((x670<=x671)&x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = INT8_MIN;
	int8_t x675 = 5;
	static int16_t x676 = INT16_MIN;
	volatile int64_t t168 = -479364LL;

    t168 = (x673*((x674<=x675)&x676));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = INT64_MIN;
	static volatile uint64_t x679 = 30253754LLU;
	uint8_t x680 = UINT8_MAX;
	int64_t t169 = 8LL;

    t169 = (x677*((x678<=x679)&x680));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = 3;
	uint64_t x683 = 27313413LLU;
	int16_t x684 = -1;

    t170 = (x681*((x682<=x683)&x684));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = 3945773;
	static int64_t x686 = INT64_MIN;
	int32_t x688 = 13;
	volatile int32_t t171 = 26;

    t171 = (x685*((x686<=x687)&x688));

    if (t171 != 3945773) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x689 = 2248;
	int64_t x690 = -1LL;
	static int64_t x692 = -1LL;
	int64_t t172 = -17741LL;

    t172 = (x689*((x690<=x691)&x692));

    if (t172 != 2248LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 2918U;
	static volatile int32_t x695 = INT32_MAX;
	volatile uint32_t t173 = 473604529U;

    t173 = (x693*((x694<=x695)&x696));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	int8_t x699 = -1;
	int8_t x700 = INT8_MAX;

    t174 = (x697*((x698<=x699)&x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x701 = 7LLU;
	uint8_t x702 = UINT8_MAX;
	volatile int8_t x703 = INT8_MAX;
	int16_t x704 = -3;
	volatile uint64_t t175 = 24LLU;

    t175 = (x701*((x702<=x703)&x704));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 500U;
	static int8_t x706 = 1;
	volatile int16_t x707 = INT16_MIN;
	int16_t x708 = 47;
	int32_t t176 = -6605;

    t176 = (x705*((x706<=x707)&x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = UINT16_MAX;
	int64_t x710 = INT64_MAX;
	static uint64_t x711 = UINT64_MAX;
	volatile int32_t t177 = 3;

    t177 = (x709*((x710<=x711)&x712));

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = 9;
	uint8_t x715 = 39U;
	static int64_t x716 = -1LL;
	int64_t t178 = 4614321167330LL;

    t178 = (x713*((x714<=x715)&x716));

    if (t178 != 9LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = UINT16_MAX;
	uint8_t x718 = 27U;
	int16_t x719 = INT16_MIN;
	int8_t x720 = INT8_MIN;
	static volatile int32_t t179 = -352;

    t179 = (x717*((x718<=x719)&x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x723 = INT16_MIN;
	volatile uint64_t x724 = 226LLU;
	volatile uint64_t t180 = 192525992664841LLU;

    t180 = (x721*((x722<=x723)&x724));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = 10749713;
	uint64_t x726 = UINT64_MAX;
	int64_t x727 = INT64_MIN;
	int8_t x728 = -40;

    t181 = (x725*((x726<=x727)&x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -42;
	int8_t x730 = INT8_MIN;
	static uint16_t x731 = 3U;
	static int32_t x732 = 1010960967;
	volatile int32_t t182 = -1;

    t182 = (x729*((x730<=x731)&x732));

    if (t182 != -42) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	int64_t x735 = INT64_MIN;
	uint64_t t183 = 6986042661LLU;

    t183 = (x733*((x734<=x735)&x736));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = 20U;
	uint16_t x738 = UINT16_MAX;
	static int16_t x739 = INT16_MAX;
	int64_t x740 = 1031026823LL;

    t184 = (x737*((x738<=x739)&x740));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = -1;
	int16_t x742 = INT16_MIN;
	int16_t x743 = INT16_MAX;
	volatile uint32_t t185 = UINT32_MAX;

    t185 = (x741*((x742<=x743)&x744));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x745 = INT64_MIN;
	static int8_t x747 = INT8_MIN;

    t186 = (x745*((x746<=x747)&x748));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 8U;
	uint16_t x750 = UINT16_MAX;
	int8_t x751 = -1;
	volatile int64_t x752 = INT64_MIN;
	int64_t t187 = 1LL;

    t187 = (x749*((x750<=x751)&x752));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = 3;
	uint8_t x754 = UINT8_MAX;
	volatile int32_t x755 = INT32_MIN;
	static int32_t t188 = -2;

    t188 = (x753*((x754<=x755)&x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	static volatile int16_t x758 = INT16_MIN;
	static uint16_t x760 = UINT16_MAX;
	volatile int64_t t189 = INT64_MIN;

    t189 = (x757*((x758<=x759)&x760));

    if (t189 != INT64_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	volatile uint32_t x762 = 16119U;
	uint16_t x763 = UINT16_MAX;
	uint32_t x764 = UINT32_MAX;
	static volatile int64_t t190 = INT64_MAX;

    t190 = (x761*((x762<=x763)&x764));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = INT64_MAX;
	static int16_t x766 = -47;
	volatile uint16_t x767 = 186U;
	uint32_t x768 = 133854U;
	volatile int64_t t191 = 11064039LL;

    t191 = (x765*((x766<=x767)&x768));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	int8_t x770 = INT8_MAX;
	uint32_t x771 = UINT32_MAX;
	static uint64_t x772 = UINT64_MAX;

    t192 = (x769*((x770<=x771)&x772));

    if (t192 != 32767LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	static int8_t x775 = 0;
	static int32_t t193 = -423;

    t193 = (x773*((x774<=x775)&x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	volatile int64_t x778 = INT64_MIN;
	static int32_t x780 = INT32_MIN;
	int32_t t194 = 583;

    t194 = (x777*((x778<=x779)&x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x781 = -1;
	uint8_t x782 = UINT8_MAX;
	int64_t x784 = -3106935665878LL;
	static int64_t t195 = -72665LL;

    t195 = (x781*((x782<=x783)&x784));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -909LL;
	int64_t x786 = INT64_MIN;
	volatile uint32_t x787 = 202408U;
	int32_t x788 = -1;
	static int64_t t196 = -8044LL;

    t196 = (x785*((x786<=x787)&x788));

    if (t196 != -909LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x789 = 1U;
	int16_t x791 = INT16_MAX;
	volatile int64_t t197 = -67LL;

    t197 = (x789*((x790<=x791)&x792));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = 0;
	static volatile uint64_t x794 = UINT64_MAX;
	int64_t x796 = 40656947168378086LL;
	static volatile int64_t t198 = -176710007511LL;

    t198 = (x793*((x794<=x795)&x796));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = INT8_MIN;
	int8_t x800 = INT8_MAX;
	int32_t t199 = -812392;

    t199 = (x797*((x798<=x799)&x800));

    if (t199 != 31) { NG(); } else { ; }
	
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

