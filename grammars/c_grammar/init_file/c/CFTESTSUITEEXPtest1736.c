
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

static volatile int32_t x4 = 16;
int32_t t0 = 11;
uint32_t x13 = UINT32_MAX;
int16_t x25 = 1;
int64_t t7 = 4092LL;
int32_t t9 = -2;
static volatile uint16_t x50 = 6733U;
int16_t x52 = 61;
volatile int32_t t12 = -1;
uint32_t x55 = 178U;
static int32_t x56 = -68;
int64_t x59 = 43LL;
uint16_t x61 = 331U;
int16_t x63 = INT16_MIN;
int32_t t15 = -216;
static volatile int16_t x68 = INT16_MIN;
static volatile int16_t x71 = INT16_MAX;
static uint64_t x80 = 124187708601487818LLU;
volatile int64_t x85 = INT64_MAX;
int8_t x88 = 1;
int64_t x101 = INT64_MIN;
int32_t x105 = INT32_MIN;
static int32_t t26 = INT32_MIN;
int32_t x113 = 0;
volatile uint8_t x117 = 10U;
int8_t x118 = INT8_MIN;
static int32_t x119 = INT32_MIN;
static volatile int32_t t29 = -6481767;
uint32_t t30 = 256192251U;
uint8_t x128 = UINT8_MAX;
volatile int32_t x129 = INT32_MIN;
volatile int32_t t32 = INT32_MIN;
int16_t x141 = -27;
int64_t x145 = -1LL;
static uint8_t x146 = UINT8_MAX;
int32_t x147 = INT32_MAX;
uint8_t x154 = 0U;
int32_t x157 = INT32_MIN;
int16_t x159 = 1;
volatile int32_t t40 = 4978351;
volatile int16_t x166 = -1;
int8_t x172 = INT8_MAX;
static volatile int32_t t42 = 6;
volatile uint8_t x183 = 46U;
uint8_t x189 = 1U;
static uint16_t x197 = 27U;
int16_t x198 = 230;
volatile int32_t t50 = 2797;
volatile int64_t x207 = 1290028438372700013LL;
int32_t t51 = -4055;
volatile int32_t x214 = INT32_MIN;
static uint64_t x216 = 158648434910LLU;
int8_t x218 = -1;
volatile int8_t x220 = INT8_MIN;
int8_t x222 = INT8_MIN;
volatile int32_t t59 = -8;
volatile int16_t x243 = 6606;
volatile int32_t t60 = -773288;
volatile int8_t x245 = -1;
volatile int8_t x255 = -8;
int8_t x262 = INT8_MIN;
int32_t x266 = -114043;
int64_t x270 = -38996555LL;
uint32_t x277 = 6073U;
volatile uint32_t t69 = 1294U;
static int8_t x285 = INT8_MIN;
uint64_t x290 = 49011266LLU;
int64_t t72 = INT64_MAX;
uint8_t x296 = UINT8_MAX;
int8_t x302 = INT8_MIN;
int64_t x306 = INT64_MIN;
static uint64_t x308 = 402352LLU;
volatile uint64_t t76 = 82447756LLU;
static int32_t x309 = INT32_MIN;
uint8_t x315 = UINT8_MAX;
static int32_t x316 = INT32_MIN;
static uint32_t t78 = 407863U;
static uint64_t x323 = 162232316LLU;
static int64_t t80 = INT64_MAX;
int32_t x326 = -31;
volatile uint32_t x328 = 1453506481U;
volatile int16_t x334 = -7564;
uint32_t x339 = 15972793U;
static volatile int64_t x341 = -1LL;
int8_t x346 = INT8_MAX;
uint8_t x351 = UINT8_MAX;
int64_t x355 = 497473476LL;
static int32_t x358 = -1;
uint32_t x368 = UINT32_MAX;
int64_t t91 = 92836518485LL;
static int16_t x373 = INT16_MAX;
static uint16_t x383 = UINT16_MAX;
int16_t x385 = INT16_MIN;
static uint64_t x386 = 142LLU;
int8_t x387 = -1;
uint16_t x388 = 23U;
int64_t x389 = INT64_MAX;
static volatile int64_t x391 = -3993732473849947LL;
static int32_t t98 = 31;
uint64_t x401 = UINT64_MAX;
static int8_t x402 = -1;
static int8_t x403 = INT8_MIN;
uint64_t t100 = UINT64_MAX;
volatile int32_t x407 = INT32_MAX;
int8_t x409 = 1;
static int16_t x410 = INT16_MIN;
int32_t t102 = -2793;
volatile int32_t t103 = 13154;
int8_t x432 = -3;
uint16_t x435 = UINT16_MAX;
int16_t x437 = 465;
int16_t x454 = -1;
static int8_t x463 = INT8_MAX;
uint8_t x465 = 10U;
int8_t x466 = -9;
int16_t x473 = -2224;
int8_t x489 = INT8_MIN;
int32_t t122 = 7;
int8_t x496 = INT8_MIN;
uint64_t x498 = UINT64_MAX;
int64_t x499 = -1LL;
int32_t x500 = INT32_MIN;
int32_t t124 = -1344044;
volatile int32_t t125 = 322;
int16_t x506 = INT16_MIN;
volatile int16_t x507 = INT16_MIN;
int32_t x509 = 8083;
int64_t x512 = INT64_MIN;
int64_t x517 = -1LL;
volatile uint32_t t130 = 10658837U;
int32_t x527 = 1954447;
int32_t x529 = 1891;
int16_t x530 = 0;
static volatile uint32_t x533 = 45834U;
volatile int32_t t134 = 0;
volatile uint8_t x542 = 0U;
uint64_t x550 = UINT64_MAX;
static volatile uint8_t x553 = 121U;
uint8_t x554 = 6U;
int8_t x555 = INT8_MIN;
volatile int32_t t138 = 1;
int16_t x560 = INT16_MAX;
volatile int16_t x562 = -4;
uint64_t t141 = 7624098444533LLU;
uint8_t x570 = 91U;
volatile int64_t x582 = -10956378799117LL;
int16_t x583 = 47;
volatile int64_t t145 = 20LL;
uint32_t x588 = 65616460U;
static volatile uint32_t t146 = 6885725U;
volatile int32_t x589 = INT32_MIN;
static int16_t x592 = INT16_MIN;
uint16_t x612 = UINT16_MAX;
int64_t t153 = 2993437929LL;
int16_t x627 = INT16_MIN;
static int64_t x629 = 289382350LL;
int64_t t157 = 290955524433093LL;
static int32_t t158 = -13935;
int32_t x638 = INT32_MIN;
int8_t x641 = INT8_MIN;
uint32_t x646 = 0U;
int64_t x647 = INT64_MIN;
uint64_t t162 = 65157483LLU;
int16_t x653 = INT16_MIN;
int8_t x654 = -1;
volatile int32_t x655 = INT32_MAX;
int16_t x656 = -1;
int64_t x664 = -1024620LL;
static uint32_t x669 = UINT32_MAX;
int64_t x671 = -5471517234020630LL;
volatile int64_t t167 = 75LL;
volatile int64_t x673 = INT64_MIN;
volatile int8_t x674 = -12;
int64_t x679 = INT64_MIN;
int16_t x680 = -6;
volatile int32_t t169 = -1549;
static uint16_t x685 = 429U;
static int32_t t171 = 54063590;
static int16_t x690 = 0;
int32_t x695 = 946;
int8_t x698 = INT8_MIN;
volatile int8_t x704 = INT8_MIN;
int32_t x706 = INT32_MIN;
static int8_t x707 = -1;
static int32_t x708 = INT32_MAX;
int32_t x711 = -4643;
volatile uint32_t x712 = 118U;
volatile int32_t x716 = INT32_MIN;
uint16_t x718 = 20U;
uint8_t x720 = UINT8_MAX;
volatile uint32_t t182 = 471373777U;
volatile uint64_t x737 = 140409859938LLU;
volatile int32_t t185 = -648134156;
int64_t t186 = INT64_MIN;
static uint8_t x749 = 8U;
volatile int32_t x750 = INT32_MIN;
int32_t x753 = -1;
static uint16_t x757 = UINT16_MAX;
int8_t x758 = 41;
uint8_t x760 = 87U;
volatile int32_t t189 = 15669640;
static volatile int32_t t190 = 113649;
uint64_t x766 = 190LLU;
int32_t x770 = INT32_MIN;
static volatile int64_t x773 = INT64_MAX;
int32_t x778 = INT32_MIN;
uint8_t x791 = UINT8_MAX;
uint32_t x796 = 1U;
int64_t t199 = INT64_MIN;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int32_t x2 = INT32_MIN;
	int64_t x3 = 2656843231777LL;

    t0 = (x1^((x2>x3)&x4));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	int64_t x6 = -1LL;
	static volatile uint8_t x7 = UINT8_MAX;
	volatile int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -319361;

    t1 = (x5^((x6>x7)&x8));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	volatile uint32_t x10 = 614975599U;
	int32_t x11 = INT32_MAX;
	volatile int8_t x12 = 1;
	int32_t t2 = -163;

    t2 = (x9^((x10>x11)&x12));

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 5U;
	static int8_t x15 = -1;
	volatile uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 2211188LLU;

    t3 = (x13^((x14>x15)&x16));

    if (t3 != 4294967294LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 1205U;
	volatile int32_t t4 = -1652;

    t4 = (x17^((x18>x19)&x20));

    if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MAX;
	volatile int32_t x23 = -1;
	uint16_t x24 = 7U;
	static volatile uint64_t t5 = 106510LLU;

    t5 = (x21^((x22>x23)&x24));

    if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MAX;
	int8_t x27 = INT8_MIN;
	int16_t x28 = -2;
	int32_t t6 = -304;

    t6 = (x25^((x26>x27)&x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 1968U;
	uint8_t x30 = 13U;
	int32_t x31 = -9754;
	int64_t x32 = INT64_MIN;

    t7 = (x29^((x30>x31)&x32));

    if (t7 != 1968LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	int64_t x35 = -3937017LL;
	int16_t x36 = 5670;
	volatile int32_t t8 = 1;

    t8 = (x33^((x34>x35)&x36));

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -2818;
	uint32_t x38 = UINT32_MAX;
	int16_t x39 = INT16_MIN;
	int8_t x40 = 0;

    t9 = (x37^((x38>x39)&x40));

    if (t9 != -2818) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	volatile uint16_t x42 = UINT16_MAX;
	uint32_t x43 = UINT32_MAX;
	int16_t x44 = -3;
	volatile int32_t t10 = 4;

    t10 = (x41^((x42>x43)&x44));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	static uint16_t x46 = 1U;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 746801;

    t11 = (x45^((x46>x47)&x48));

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -67;
	int32_t x51 = INT32_MAX;

    t12 = (x49^((x50>x51)&x52));

    if (t12 != -67) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -1;
	int32_t x54 = INT32_MIN;
	static int32_t t13 = 1;

    t13 = (x53^((x54>x55)&x56));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = 8839;
	uint16_t x58 = 6924U;
	int16_t x60 = -1;
	volatile int32_t t14 = 543495;

    t14 = (x57^((x58>x59)&x60));

    if (t14 != 8838) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = -9969;
	int16_t x64 = 0;

    t15 = (x61^((x62>x63)&x64));

    if (t15 != 331) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	int8_t x66 = INT8_MIN;
	int32_t x67 = 1984575;
	volatile uint64_t t16 = UINT64_MAX;

    t16 = (x65^((x66>x67)&x68));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	uint64_t x70 = 477143836LLU;
	static int8_t x72 = -15;
	static int64_t t17 = -5005LL;

    t17 = (x69^((x70>x71)&x72));

    if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -14766325260LL;
	static uint16_t x74 = 53U;
	int8_t x75 = INT8_MIN;
	int64_t x76 = 1742488103031867671LL;
	volatile int64_t t18 = 259404504613311LL;

    t18 = (x73^((x74>x75)&x76));

    if (t18 != -14766325259LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = 3U;
	int64_t x78 = 112980821561LL;
	uint64_t x79 = UINT64_MAX;
	volatile uint64_t t19 = 46241188470158453LLU;

    t19 = (x77^((x78>x79)&x80));

    if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	volatile int32_t x82 = 444919502;
	int16_t x83 = INT16_MIN;
	static volatile int16_t x84 = -1;
	static int64_t t20 = 5203LL;

    t20 = (x81^((x82>x83)&x84));

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x86 = UINT8_MAX;
	volatile uint64_t x87 = 36630LLU;
	static int64_t t21 = INT64_MAX;

    t21 = (x85^((x86>x87)&x88));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int8_t x90 = -1;
	volatile int64_t x91 = -999965756507176295LL;
	int32_t x92 = 18486523;
	int32_t t22 = 14;

    t22 = (x89^((x90>x91)&x92));

    if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 328200622U;
	volatile uint8_t x94 = UINT8_MAX;
	int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MAX;
	volatile uint32_t t23 = 180U;

    t23 = (x93^((x94>x95)&x96));

    if (t23 != 328200622U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MAX;
	int16_t x100 = -100;
	static uint64_t t24 = UINT64_MAX;

    t24 = (x97^((x98>x99)&x100));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x102 = UINT8_MAX;
	int16_t x103 = 2;
	uint32_t x104 = 7484U;
	static volatile int64_t t25 = INT64_MIN;

    t25 = (x101^((x102>x103)&x104));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = 1029510155U;
	volatile uint32_t x107 = UINT32_MAX;
	int8_t x108 = INT8_MIN;

    t26 = (x105^((x106>x107)&x108));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -305;
	volatile int16_t x110 = -11785;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = 4849342491244LLU;
	static volatile uint64_t t27 = 133612245LLU;

    t27 = (x109^((x110>x111)&x112));

    if (t27 != 18446744073709551311LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x114 = 1;
	int16_t x115 = INT16_MAX;
	int64_t x116 = INT64_MIN;
	int64_t t28 = 319311983969LL;

    t28 = (x113^((x114>x115)&x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x120 = 24336;

    t29 = (x117^((x118>x119)&x120));

    if (t29 != 10) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = INT16_MAX;
	int16_t x122 = -6354;
	int16_t x123 = -3;
	uint32_t x124 = 1422294U;

    t30 = (x121^((x122>x123)&x124));

    if (t30 != 32767U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 2606238U;
	int16_t x126 = INT16_MAX;
	uint16_t x127 = 0U;
	volatile uint32_t t31 = 39188U;

    t31 = (x125^((x126>x127)&x128));

    if (t31 != 2606239U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = INT64_MIN;
	static volatile int8_t x131 = INT8_MIN;
	int8_t x132 = 19;

    t32 = (x129^((x130>x131)&x132));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = UINT64_MAX;
	static int8_t x136 = INT8_MIN;
	int32_t t33 = -85044;

    t33 = (x133^((x134>x135)&x136));

    if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -9791078;
	int64_t x138 = INT64_MIN;
	uint32_t x139 = UINT32_MAX;
	static int8_t x140 = -4;
	volatile int32_t t34 = 5028435;

    t34 = (x137^((x138>x139)&x140));

    if (t34 != -9791078) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint8_t x142 = UINT8_MAX;
	uint64_t x143 = UINT64_MAX;
	uint8_t x144 = 2U;
	int32_t t35 = 15;

    t35 = (x141^((x142>x143)&x144));

    if (t35 != -27) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x148 = INT8_MIN;
	volatile int64_t t36 = 4022LL;

    t36 = (x145^((x146>x147)&x148));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	volatile uint32_t x150 = UINT32_MAX;
	static uint8_t x151 = UINT8_MAX;
	uint32_t x152 = 116033U;
	uint32_t t37 = 23998958U;

    t37 = (x149^((x150>x151)&x152));

    if (t37 != 4294934529U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x153 = 68980286687706LLU;
	int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	uint64_t t38 = 3603429128540144890LLU;

    t38 = (x153^((x154>x155)&x156));

    if (t38 != 68980286687706LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x158 = 282195741950191215LLU;
	int64_t x160 = 10LL;
	volatile int64_t t39 = 57544LL;

    t39 = (x157^((x158>x159)&x160));

    if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x161 = 627U;
	static uint16_t x162 = UINT16_MAX;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 18U;

    t40 = (x161^((x162>x163)&x164));

    if (t40 != 627) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	int32_t x167 = -1;
	volatile uint32_t x168 = 38748U;
	uint32_t t41 = 1U;

    t41 = (x165^((x166>x167)&x168));

    if (t41 != 4294967168U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x169 = -1;
	uint32_t x170 = 56729977U;
	int32_t x171 = 99724;

    t42 = (x169^((x170>x171)&x172));

    if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MAX;
	int64_t x175 = INT64_MIN;
	volatile int64_t x176 = INT64_MAX;
	int64_t t43 = -290994196LL;

    t43 = (x173^((x174>x175)&x176));

    if (t43 != -32767LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -3684;
	int8_t x178 = -1;
	volatile uint8_t x179 = 9U;
	volatile uint8_t x180 = 61U;
	int32_t t44 = 621;

    t44 = (x177^((x178>x179)&x180));

    if (t44 != -3684) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	volatile int16_t x182 = INT16_MIN;
	int16_t x184 = INT16_MAX;
	static volatile int32_t t45 = 26981;

    t45 = (x181^((x182>x183)&x184));

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = 11011;
	volatile uint8_t x186 = 10U;
	uint32_t x187 = UINT32_MAX;
	int32_t x188 = 57684;
	volatile int32_t t46 = 9;

    t46 = (x185^((x186>x187)&x188));

    if (t46 != 11011) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x190 = 25U;
	int16_t x191 = INT16_MIN;
	static int16_t x192 = -1;
	static volatile int32_t t47 = -261498250;

    t47 = (x189^((x190>x191)&x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = INT64_MAX;
	uint64_t x194 = 1773894070LLU;
	uint8_t x195 = 16U;
	int16_t x196 = INT16_MIN;
	int64_t t48 = INT64_MAX;

    t48 = (x193^((x194>x195)&x196));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x199 = 15315362U;
	uint16_t x200 = 932U;
	static volatile int32_t t49 = -9;

    t49 = (x197^((x198>x199)&x200));

    if (t49 != 27) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MAX;
	uint16_t x202 = 1U;
	static volatile uint32_t x203 = 3U;
	int32_t x204 = INT32_MAX;

    t50 = (x201^((x202>x203)&x204));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	static uint32_t x206 = 789413128U;
	int8_t x208 = INT8_MAX;

    t51 = (x205^((x206>x207)&x208));

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	static int8_t x210 = INT8_MAX;
	uint16_t x211 = UINT16_MAX;
	static uint32_t x212 = 106U;
	uint32_t t52 = UINT32_MAX;

    t52 = (x209^((x210>x211)&x212));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = 0;
	volatile int64_t x215 = INT64_MIN;
	volatile uint64_t t53 = 1009917LLU;

    t53 = (x213^((x214>x215)&x216));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	static int64_t x219 = -1LL;
	static int32_t t54 = 2;

    t54 = (x217^((x218>x219)&x220));

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	int64_t x223 = INT64_MIN;
	static volatile int16_t x224 = -1;
	volatile int32_t t55 = 2;

    t55 = (x221^((x222>x223)&x224));

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 21454U;
	uint16_t x226 = UINT16_MAX;
	uint8_t x227 = 1U;
	int64_t x228 = INT64_MAX;
	volatile int64_t t56 = -439344LL;

    t56 = (x225^((x226>x227)&x228));

    if (t56 != 21455LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 930U;
	int8_t x230 = -1;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = 1U;
	uint32_t t57 = 12U;

    t57 = (x229^((x230>x231)&x232));

    if (t57 != 931U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	int8_t x234 = -1;
	int32_t x235 = INT32_MIN;
	static int32_t x236 = 204444;
	static uint64_t t58 = UINT64_MAX;

    t58 = (x233^((x234>x235)&x236));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 5U;
	int32_t x238 = INT32_MAX;
	int64_t x239 = INT64_MIN;
	static int16_t x240 = -1187;

    t59 = (x237^((x238>x239)&x240));

    if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = 176;
	volatile int32_t x242 = -574876;
	uint16_t x244 = 24735U;

    t60 = (x241^((x242>x243)&x244));

    if (t60 != 176) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = INT32_MIN;
	int32_t x247 = 12006;
	int64_t x248 = INT64_MIN;
	volatile int64_t t61 = -176195317LL;

    t61 = (x245^((x246>x247)&x248));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x249 = 1959253936U;
	static int32_t x250 = -1;
	volatile int8_t x251 = INT8_MAX;
	int32_t x252 = -1;
	static uint32_t t62 = 9U;

    t62 = (x249^((x250>x251)&x252));

    if (t62 != 1959253936U) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	int8_t x256 = 6;
	int32_t t63 = 0;

    t63 = (x253^((x254>x255)&x256));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -1;
	int64_t x258 = INT64_MIN;
	int64_t x259 = -1LL;
	static int8_t x260 = INT8_MAX;
	volatile int32_t t64 = 1004355;

    t64 = (x257^((x258>x259)&x260));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = -90823529277025LL;
	int32_t x263 = INT32_MIN;
	int8_t x264 = 2;
	static volatile int64_t t65 = -354LL;

    t65 = (x261^((x262>x263)&x264));

    if (t65 != -90823529277025LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -43723835567LL;
	volatile int8_t x267 = -1;
	volatile int64_t x268 = INT64_MIN;
	int64_t t66 = -9562879972802573LL;

    t66 = (x265^((x266>x267)&x268));

    if (t66 != -43723835567LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x269 = UINT8_MAX;
	int64_t x271 = INT64_MAX;
	static int32_t x272 = -276027;
	volatile int32_t t67 = -1438875;

    t67 = (x269^((x270>x271)&x272));

    if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = INT8_MAX;
	volatile uint8_t x274 = 41U;
	int16_t x275 = -14051;
	volatile uint8_t x276 = UINT8_MAX;
	int32_t t68 = -2241968;

    t68 = (x273^((x274>x275)&x276));

    if (t68 != 126) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x278 = 27U;
	int8_t x279 = INT8_MIN;
	static volatile uint32_t x280 = 0U;

    t69 = (x277^((x278>x279)&x280));

    if (t69 != 6073U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = INT32_MIN;
	uint16_t x282 = 14339U;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = 495897374LLU;
	uint64_t t70 = 228852815LLU;

    t70 = (x281^((x282>x283)&x284));

    if (t70 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x286 = UINT16_MAX;
	int16_t x287 = 85;
	int8_t x288 = INT8_MAX;
	int32_t t71 = -728810174;

    t71 = (x285^((x286>x287)&x288));

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = INT64_MAX;
	uint8_t x291 = 47U;
	int16_t x292 = INT16_MIN;

    t72 = (x289^((x290>x291)&x292));

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	int8_t x294 = -1;
	static int64_t x295 = -1LL;
	int32_t t73 = -51;

    t73 = (x293^((x294>x295)&x296));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	static int32_t x298 = INT32_MAX;
	int16_t x299 = INT16_MAX;
	volatile uint8_t x300 = 20U;
	volatile int32_t t74 = 397834759;

    t74 = (x297^((x298>x299)&x300));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = 9;
	static volatile uint32_t x303 = 25U;
	volatile uint8_t x304 = 2U;
	volatile int32_t t75 = -97727;

    t75 = (x301^((x302>x303)&x304));

    if (t75 != 9) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 9U;
	int16_t x307 = -1;

    t76 = (x305^((x306>x307)&x308));

    if (t76 != 9LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x310 = 3;
	int16_t x311 = INT16_MIN;
	uint8_t x312 = 0U;
	int32_t t77 = INT32_MIN;

    t77 = (x309^((x310>x311)&x312));

    if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x313 = 72309845U;
	int8_t x314 = INT8_MIN;

    t78 = (x313^((x314>x315)&x316));

    if (t78 != 72309845U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = -1;
	volatile int16_t x318 = INT16_MIN;
	volatile int32_t x319 = INT32_MIN;
	int8_t x320 = 11;
	static int32_t t79 = 2008;

    t79 = (x317^((x318>x319)&x320));

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MAX;
	uint8_t x322 = 87U;
	static int8_t x324 = INT8_MIN;

    t80 = (x321^((x322>x323)&x324));

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = -1;
	uint32_t x327 = 179860U;
	volatile uint32_t t81 = 123598U;

    t81 = (x325^((x326>x327)&x328));

    if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = UINT8_MAX;
	static volatile int16_t x330 = 63;
	uint32_t x331 = UINT32_MAX;
	int8_t x332 = INT8_MAX;
	int32_t t82 = -12892;

    t82 = (x329^((x330>x331)&x332));

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = -1;
	int8_t x335 = 2;
	volatile uint64_t x336 = 3187128362733072LLU;
	static volatile uint64_t t83 = UINT64_MAX;

    t83 = (x333^((x334>x335)&x336));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = 3;
	int32_t x338 = INT32_MIN;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t84 = -1139121;

    t84 = (x337^((x338>x339)&x340));

    if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = INT64_MIN;
	static int64_t x343 = -183373LL;
	int32_t x344 = 51862;
	volatile int64_t t85 = -31LL;

    t85 = (x341^((x342>x343)&x344));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x345 = 475U;
	int16_t x347 = -1;
	int16_t x348 = -1;
	volatile int32_t t86 = -7198;

    t86 = (x345^((x346>x347)&x348));

    if (t86 != 474) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = UINT8_MAX;
	volatile int64_t x350 = INT64_MAX;
	int8_t x352 = 35;
	static volatile int32_t t87 = -7;

    t87 = (x349^((x350>x351)&x352));

    if (t87 != 254) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 1U;
	uint32_t x354 = UINT32_MAX;
	int64_t x356 = INT64_MIN;
	static volatile int64_t t88 = 128LL;

    t88 = (x353^((x354>x355)&x356));

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x357 = UINT16_MAX;
	static int64_t x359 = INT64_MAX;
	uint16_t x360 = UINT16_MAX;
	int32_t t89 = 1;

    t89 = (x357^((x358>x359)&x360));

    if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = INT32_MIN;
	volatile int16_t x362 = INT16_MIN;
	volatile int64_t x363 = 1028216255476262282LL;
	int8_t x364 = -1;
	volatile int32_t t90 = INT32_MIN;

    t90 = (x361^((x362>x363)&x364));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -935828387600LL;
	int64_t x366 = 16982721719819590LL;
	static uint16_t x367 = 32638U;

    t91 = (x365^((x366>x367)&x368));

    if (t91 != -935828387599LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 14U;
	int32_t x370 = -1;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = -1;
	int32_t t92 = 1268;

    t92 = (x369^((x370>x371)&x372));

    if (t92 != 14) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x374 = INT8_MAX;
	uint32_t x375 = 161800228U;
	static int8_t x376 = -1;
	volatile int32_t t93 = 329524791;

    t93 = (x373^((x374>x375)&x376));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = -1;
	static int32_t x378 = 70852;
	uint32_t x379 = 13662U;
	uint32_t x380 = UINT32_MAX;
	static volatile uint32_t t94 = 369913970U;

    t94 = (x377^((x378>x379)&x380));

    if (t94 != 4294967294U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -3636539;
	static volatile int64_t x382 = 2LL;
	volatile int16_t x384 = INT16_MIN;
	int32_t t95 = -34525;

    t95 = (x381^((x382>x383)&x384));

    if (t95 != -3636539) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t t96 = 27493;

    t96 = (x385^((x386>x387)&x388));

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x390 = UINT16_MAX;
	int32_t x392 = 22116;
	int64_t t97 = INT64_MAX;

    t97 = (x389^((x390>x391)&x392));

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	volatile int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MIN;
	int16_t x396 = -16;

    t98 = (x393^((x394>x395)&x396));

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	uint64_t x398 = 10268067LLU;
	uint16_t x399 = UINT16_MAX;
	int8_t x400 = -6;
	int32_t t99 = INT32_MIN;

    t99 = (x397^((x398>x399)&x400));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x404 = 1762;

    t100 = (x401^((x402>x403)&x404));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x405 = 985368438687LLU;
	uint8_t x406 = 17U;
	volatile uint8_t x408 = UINT8_MAX;
	uint64_t t101 = 2719772615LLU;

    t101 = (x405^((x406>x407)&x408));

    if (t101 != 985368438687LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x411 = INT32_MIN;
	int32_t x412 = -1;

    t102 = (x409^((x410>x411)&x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -37;
	int8_t x414 = -24;
	int32_t x415 = INT32_MIN;
	uint8_t x416 = UINT8_MAX;

    t103 = (x413^((x414>x415)&x416));

    if (t103 != -38) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = 2U;
	uint64_t x418 = 301363690LLU;
	int16_t x419 = 10;
	int16_t x420 = INT16_MIN;
	int32_t t104 = 10142;

    t104 = (x417^((x418>x419)&x420));

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -64998955LL;
	int32_t x422 = INT32_MAX;
	int32_t x423 = INT32_MIN;
	int8_t x424 = INT8_MIN;
	volatile int64_t t105 = -1645LL;

    t105 = (x421^((x422>x423)&x424));

    if (t105 != -64998955LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int8_t x426 = -1;
	int64_t x427 = -1LL;
	static volatile int16_t x428 = INT16_MIN;
	volatile int64_t t106 = INT64_MIN;

    t106 = (x425^((x426>x427)&x428));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 0U;
	int32_t x430 = 58223;
	int8_t x431 = INT8_MAX;
	int32_t t107 = -236596;

    t107 = (x429^((x430>x431)&x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MAX;
	int16_t x434 = -127;
	volatile int8_t x436 = INT8_MIN;
	volatile int32_t t108 = INT32_MAX;

    t108 = (x433^((x434>x435)&x436));

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = -1LL;
	int32_t x439 = INT32_MAX;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t109 = -58180667;

    t109 = (x437^((x438>x439)&x440));

    if (t109 != 465) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	int8_t x442 = INT8_MIN;
	volatile uint64_t x443 = UINT64_MAX;
	int16_t x444 = INT16_MIN;
	volatile int32_t t110 = INT32_MIN;

    t110 = (x441^((x442>x443)&x444));

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -330632286187LL;
	int16_t x446 = INT16_MAX;
	static volatile int16_t x447 = INT16_MIN;
	volatile uint8_t x448 = 0U;
	volatile int64_t t111 = -897LL;

    t111 = (x445^((x446>x447)&x448));

    if (t111 != -330632286187LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = INT16_MAX;
	static uint32_t x450 = 226863228U;
	int32_t x451 = INT32_MIN;
	static int16_t x452 = INT16_MAX;
	volatile int32_t t112 = 464;

    t112 = (x449^((x450>x451)&x452));

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x453 = 0U;
	volatile int16_t x455 = INT16_MIN;
	int16_t x456 = INT16_MAX;
	static int32_t t113 = -226234387;

    t113 = (x453^((x454>x455)&x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 0U;
	uint32_t x458 = UINT32_MAX;
	int64_t x459 = INT64_MIN;
	static int64_t x460 = 1255734605732379LL;
	volatile int64_t t114 = 11040725LL;

    t114 = (x457^((x458>x459)&x460));

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	uint16_t x462 = 0U;
	static int32_t x464 = INT32_MIN;
	int32_t t115 = 317854103;

    t115 = (x461^((x462>x463)&x464));

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x467 = INT8_MIN;
	int8_t x468 = INT8_MIN;
	static volatile int32_t t116 = 16;

    t116 = (x465^((x466>x467)&x468));

    if (t116 != 10) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int16_t x470 = -22;
	uint64_t x471 = UINT64_MAX;
	uint64_t x472 = UINT64_MAX;
	static volatile uint64_t t117 = UINT64_MAX;

    t117 = (x469^((x470>x471)&x472));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x474 = UINT8_MAX;
	volatile int8_t x475 = -19;
	volatile uint16_t x476 = 4275U;
	static int32_t t118 = 122644;

    t118 = (x473^((x474>x475)&x476));

    if (t118 != -2223) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	int8_t x478 = INT8_MIN;
	static int16_t x479 = -1;
	volatile int8_t x480 = 5;
	int32_t t119 = -106468978;

    t119 = (x477^((x478>x479)&x480));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = UINT32_MAX;
	volatile int8_t x482 = 0;
	int32_t x483 = INT32_MIN;
	int32_t x484 = INT32_MAX;
	uint32_t t120 = 1611725U;

    t120 = (x481^((x482>x483)&x484));

    if (t120 != 4294967294U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	uint32_t x486 = 55293618U;
	uint8_t x487 = UINT8_MAX;
	volatile uint64_t x488 = UINT64_MAX;
	uint64_t t121 = 1829823900131724894LLU;

    t121 = (x485^((x486>x487)&x488));

    if (t121 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = INT64_MIN;
	volatile int64_t x491 = -225288934926109550LL;
	volatile int8_t x492 = INT8_MIN;

    t122 = (x489^((x490>x491)&x492));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = -1;
	int8_t x494 = INT8_MIN;
	uint8_t x495 = UINT8_MAX;
	int32_t t123 = 414;

    t123 = (x493^((x494>x495)&x496));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = 12359189;

    t124 = (x497^((x498>x499)&x500));

    if (t124 != 12359189) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	uint64_t x502 = UINT64_MAX;
	uint32_t x503 = 39034U;
	volatile uint8_t x504 = UINT8_MAX;

    t125 = (x501^((x502>x503)&x504));

    if (t125 != 126) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MAX;
	int16_t x508 = -1893;
	static int32_t t126 = 3;

    t126 = (x505^((x506>x507)&x508));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x510 = 1;
	uint16_t x511 = 1U;
	volatile int64_t t127 = -5660109888LL;

    t127 = (x509^((x510>x511)&x512));

    if (t127 != 8083LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 161803353U;
	static volatile uint16_t x514 = UINT16_MAX;
	int32_t x515 = INT32_MIN;
	static volatile int8_t x516 = INT8_MAX;
	uint32_t t128 = 5U;

    t128 = (x513^((x514>x515)&x516));

    if (t128 != 161803352U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x518 = 100114700LLU;
	uint16_t x519 = 32498U;
	volatile int32_t x520 = -35;
	int64_t t129 = -39LL;

    t129 = (x517^((x518>x519)&x520));

    if (t129 != -2LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	volatile uint32_t x522 = UINT32_MAX;
	int16_t x523 = INT16_MIN;
	uint32_t x524 = UINT32_MAX;

    t130 = (x521^((x522>x523)&x524));

    if (t130 != 4294934529U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -1LL;
	static volatile int8_t x526 = INT8_MIN;
	uint32_t x528 = 1688904268U;
	volatile int64_t t131 = 1691430771311341LL;

    t131 = (x525^((x526>x527)&x528));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x531 = 1650150838521216LLU;
	int8_t x532 = INT8_MIN;
	volatile int32_t t132 = -35;

    t132 = (x529^((x530>x531)&x532));

    if (t132 != 1891) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x534 = INT16_MIN;
	uint16_t x535 = 230U;
	volatile uint8_t x536 = 8U;
	static volatile uint32_t t133 = 0U;

    t133 = (x533^((x534>x535)&x536));

    if (t133 != 45834U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 0U;
	static int64_t x538 = 319849855253LL;
	static int64_t x539 = INT64_MAX;
	int32_t x540 = 1;

    t134 = (x537^((x538>x539)&x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 4061197U;
	int8_t x543 = -1;
	int64_t x544 = -1LL;
	volatile int64_t t135 = 78236344LL;

    t135 = (x541^((x542>x543)&x544));

    if (t135 != 4061196LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x545 = 246U;
	int64_t x546 = INT64_MAX;
	uint64_t x547 = UINT64_MAX;
	int64_t x548 = INT64_MAX;
	static volatile int64_t t136 = -34105256LL;

    t136 = (x545^((x546>x547)&x548));

    if (t136 != 246LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = 122919964U;
	int64_t x551 = INT64_MAX;
	int8_t x552 = INT8_MIN;
	uint32_t t137 = 21198U;

    t137 = (x549^((x550>x551)&x552));

    if (t137 != 122919964U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x556 = 0U;

    t138 = (x553^((x554>x555)&x556));

    if (t138 != 121) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = -1;
	uint32_t x558 = 455573U;
	int8_t x559 = -1;
	int32_t t139 = -2174674;

    t139 = (x557^((x558>x559)&x560));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x561 = 1817576102206236558LLU;
	int16_t x563 = -1;
	int8_t x564 = 12;
	volatile uint64_t t140 = 3LLU;

    t140 = (x561^((x562>x563)&x564));

    if (t140 != 1817576102206236558LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MAX;
	volatile uint8_t x566 = 11U;
	uint32_t x567 = UINT32_MAX;
	uint64_t x568 = 368967243395LLU;

    t141 = (x565^((x566>x567)&x568));

    if (t141 != 127LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 377107645500LLU;
	uint32_t x571 = 1809461U;
	int16_t x572 = -1;
	uint64_t t142 = 918377664458864LLU;

    t142 = (x569^((x570>x571)&x572));

    if (t142 != 377107645500LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x573 = UINT8_MAX;
	int64_t x574 = INT64_MAX;
	static uint32_t x575 = 404757U;
	int16_t x576 = INT16_MAX;
	volatile int32_t t143 = 3;

    t143 = (x573^((x574>x575)&x576));

    if (t143 != 254) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 74U;
	int32_t x578 = INT32_MIN;
	uint64_t x579 = 346LLU;
	uint16_t x580 = 1U;
	volatile int32_t t144 = -3797493;

    t144 = (x577^((x578>x579)&x580));

    if (t144 != 75) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 42U;
	int64_t x584 = -3226476455977615LL;

    t145 = (x581^((x582>x583)&x584));

    if (t145 != 42LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = 107;
	volatile int16_t x586 = -159;
	uint16_t x587 = 0U;

    t146 = (x585^((x586>x587)&x588));

    if (t146 != 107U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x590 = 7;
	static volatile int32_t x591 = -1;
	int32_t t147 = INT32_MIN;

    t147 = (x589^((x590>x591)&x592));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	int32_t x594 = -645;
	int32_t x595 = -783232574;
	int8_t x596 = -60;
	int64_t t148 = -70272LL;

    t148 = (x593^((x594>x595)&x596));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint64_t x597 = 1265894LLU;
	static int16_t x598 = -1;
	uint32_t x599 = UINT32_MAX;
	volatile int16_t x600 = INT16_MIN;
	volatile uint64_t t149 = 76LLU;

    t149 = (x597^((x598>x599)&x600));

    if (t149 != 1265894LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x601 = 3U;
	int32_t x602 = -11073;
	int16_t x603 = INT16_MIN;
	int8_t x604 = -44;
	int32_t t150 = 1;

    t150 = (x601^((x602>x603)&x604));

    if (t150 != 3) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x605 = UINT16_MAX;
	int32_t x606 = 105303;
	static volatile int64_t x607 = INT64_MIN;
	int64_t x608 = INT64_MIN;
	int64_t t151 = 31186810154026LL;

    t151 = (x605^((x606>x607)&x608));

    if (t151 != 65535LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = -1LL;
	int32_t x610 = INT32_MAX;
	int8_t x611 = INT8_MAX;
	volatile int64_t t152 = -271390362577815LL;

    t152 = (x609^((x610>x611)&x612));

    if (t152 != -2LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -305981951199376038LL;
	int64_t x614 = -1LL;
	volatile int16_t x615 = INT16_MIN;
	volatile uint16_t x616 = 13U;

    t153 = (x613^((x614>x615)&x616));

    if (t153 != -305981951199376037LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MAX;
	volatile uint16_t x618 = UINT16_MAX;
	static int64_t x619 = INT64_MAX;
	uint8_t x620 = 3U;
	volatile int64_t t154 = INT64_MAX;

    t154 = (x617^((x618>x619)&x620));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -50634698;
	volatile uint16_t x622 = UINT16_MAX;
	static int64_t x623 = -1LL;
	volatile int16_t x624 = INT16_MIN;
	int32_t t155 = 50;

    t155 = (x621^((x622>x623)&x624));

    if (t155 != -50634698) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MAX;
	static uint64_t x626 = 46992539334525LLU;
	volatile int8_t x628 = INT8_MIN;
	static volatile int32_t t156 = 103;

    t156 = (x625^((x626>x627)&x628));

    if (t156 != 32767) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x630 = INT16_MIN;
	static int64_t x631 = 25218282869LL;
	int16_t x632 = INT16_MIN;

    t157 = (x629^((x630>x631)&x632));

    if (t157 != 289382350LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = UINT8_MAX;
	int16_t x634 = INT16_MIN;
	static int8_t x635 = INT8_MAX;
	int32_t x636 = -1;

    t158 = (x633^((x634>x635)&x636));

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 86U;
	static int32_t x639 = -1;
	int8_t x640 = INT8_MIN;
	volatile int32_t t159 = -3058;

    t159 = (x637^((x638>x639)&x640));

    if (t159 != 86) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x642 = 0;
	volatile int8_t x643 = INT8_MIN;
	volatile int32_t x644 = INT32_MIN;
	volatile int32_t t160 = 7861704;

    t160 = (x641^((x642>x643)&x644));

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -2;
	volatile uint32_t x648 = 12856U;
	static uint32_t t161 = 1002885034U;

    t161 = (x645^((x646>x647)&x648));

    if (t161 != 4294967294U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 0LLU;
	int64_t x650 = -1LL;
	volatile int32_t x651 = 77;
	volatile int32_t x652 = 128739;

    t162 = (x649^((x650>x651)&x652));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t t163 = 8710365;

    t163 = (x653^((x654>x655)&x656));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = UINT32_MAX;
	uint8_t x658 = 3U;
	static int64_t x659 = INT64_MAX;
	static int64_t x660 = -1LL;
	volatile int64_t t164 = 1809223992728LL;

    t164 = (x657^((x658>x659)&x660));

    if (t164 != 4294967295LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int16_t x662 = 18;
	int8_t x663 = -10;
	volatile int64_t t165 = INT64_MIN;

    t165 = (x661^((x662>x663)&x664));

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	int8_t x666 = INT8_MIN;
	int8_t x667 = INT8_MIN;
	uint64_t x668 = 1LLU;
	volatile uint64_t t166 = 12157279741LLU;

    t166 = (x665^((x666>x667)&x668));

    if (t166 != 127LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x670 = -1;
	volatile int64_t x672 = INT64_MAX;

    t167 = (x669^((x670>x671)&x672));

    if (t167 != 4294967294LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x675 = -1;
	int16_t x676 = INT16_MIN;
	volatile int64_t t168 = INT64_MIN;

    t168 = (x673^((x674>x675)&x676));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = 438946318;
	int8_t x678 = INT8_MIN;

    t169 = (x677^((x678>x679)&x680));

    if (t169 != 438946318) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 1;
	int16_t x682 = INT16_MIN;
	int8_t x683 = 19;
	int32_t x684 = INT32_MAX;
	volatile int32_t t170 = -869;

    t170 = (x681^((x682>x683)&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x686 = INT8_MAX;
	static volatile int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MIN;

    t171 = (x685^((x686>x687)&x688));

    if (t171 != 429) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -3812;
	uint16_t x691 = 1U;
	int8_t x692 = -1;
	static volatile int32_t t172 = -287539;

    t172 = (x689^((x690>x691)&x692));

    if (t172 != -3812) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MAX;
	volatile int16_t x694 = -1;
	int32_t x696 = INT32_MIN;
	int32_t t173 = INT32_MAX;

    t173 = (x693^((x694>x695)&x696));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = -953735635LL;
	uint64_t x699 = 226195LLU;
	static int64_t x700 = -1LL;
	static volatile int64_t t174 = -40172LL;

    t174 = (x697^((x698>x699)&x700));

    if (t174 != -953735636LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -1;
	volatile uint64_t x702 = UINT64_MAX;
	static uint16_t x703 = 890U;
	volatile int32_t t175 = 32575;

    t175 = (x701^((x702>x703)&x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint32_t x705 = 73009U;
	static volatile uint32_t t176 = 60976119U;

    t176 = (x705^((x706>x707)&x708));

    if (t176 != 73009U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = INT8_MIN;
	int8_t x710 = INT8_MAX;
	uint32_t t177 = 234U;

    t177 = (x709^((x710>x711)&x712));

    if (t177 != 4294967168U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = UINT64_MAX;
	static volatile uint64_t x714 = 853613364394620499LLU;
	int64_t x715 = INT64_MIN;
	uint64_t t178 = UINT64_MAX;

    t178 = (x713^((x714>x715)&x716));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x717 = UINT64_MAX;
	int32_t x719 = -1;
	uint64_t t179 = 15999510LLU;

    t179 = (x717^((x718>x719)&x720));

    if (t179 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = 3;
	int16_t x722 = -39;
	int16_t x723 = INT16_MIN;
	uint8_t x724 = UINT8_MAX;
	int32_t t180 = 9301156;

    t180 = (x721^((x722>x723)&x724));

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = UINT8_MAX;
	int64_t x726 = INT64_MIN;
	static int64_t x727 = INT64_MAX;
	int8_t x728 = INT8_MAX;
	volatile int32_t t181 = 73787495;

    t181 = (x725^((x726>x727)&x728));

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 17U;
	int64_t x730 = 1450569LL;
	static int16_t x731 = 3;
	uint32_t x732 = 483U;

    t182 = (x729^((x730>x731)&x732));

    if (t182 != 16U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = 1;
	volatile uint64_t x734 = UINT64_MAX;
	uint16_t x735 = 23U;
	static volatile int8_t x736 = INT8_MIN;
	int32_t t183 = -93961151;

    t183 = (x733^((x734>x735)&x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x738 = INT16_MIN;
	int64_t x739 = INT64_MIN;
	int16_t x740 = -246;
	uint64_t t184 = 426932456758LLU;

    t184 = (x737^((x738>x739)&x740));

    if (t184 != 140409859938LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	static volatile uint64_t x742 = 321253390LLU;
	int16_t x743 = 1;
	int8_t x744 = INT8_MIN;

    t185 = (x741^((x742>x743)&x744));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	volatile int64_t x746 = INT64_MIN;
	static int64_t x747 = -873318142300LL;
	static int8_t x748 = INT8_MIN;

    t186 = (x745^((x746>x747)&x748));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x751 = -1LL;
	int64_t x752 = 2268LL;
	int64_t t187 = -1LL;

    t187 = (x749^((x750>x751)&x752));

    if (t187 != 8LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x754 = UINT16_MAX;
	volatile int16_t x755 = -1;
	int8_t x756 = -1;
	volatile int32_t t188 = -1;

    t188 = (x753^((x754>x755)&x756));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x759 = 22;

    t189 = (x757^((x758>x759)&x760));

    if (t189 != 65534) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	int8_t x762 = -12;
	int16_t x763 = 948;
	int16_t x764 = -14306;

    t190 = (x761^((x762>x763)&x764));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MIN;
	int64_t x767 = -15814839295410555LL;
	uint16_t x768 = UINT16_MAX;
	static int32_t t191 = -32885038;

    t191 = (x765^((x766>x767)&x768));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x769 = 605U;
	uint16_t x771 = 18046U;
	uint64_t x772 = UINT64_MAX;
	uint64_t t192 = 9LLU;

    t192 = (x769^((x770>x771)&x772));

    if (t192 != 605LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x774 = -1LL;
	static int64_t x775 = INT64_MIN;
	int16_t x776 = 0;
	volatile int64_t t193 = INT64_MAX;

    t193 = (x773^((x774>x775)&x776));

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	static uint16_t x779 = 6U;
	uint16_t x780 = 470U;
	volatile int32_t t194 = 16;

    t194 = (x777^((x778>x779)&x780));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	uint8_t x782 = 2U;
	int8_t x783 = INT8_MIN;
	volatile int32_t x784 = 1934;
	int32_t t195 = -1615514;

    t195 = (x781^((x782>x783)&x784));

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MAX;
	int64_t x786 = INT64_MIN;
	uint8_t x787 = UINT8_MAX;
	int16_t x788 = -1;
	int32_t t196 = INT32_MAX;

    t196 = (x785^((x786>x787)&x788));

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 130329249097321LLU;
	static uint16_t x790 = UINT16_MAX;
	volatile int64_t x792 = INT64_MIN;
	uint64_t t197 = 7447865511848318886LLU;

    t197 = (x789^((x790>x791)&x792));

    if (t197 != 130329249097321LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1;
	static uint64_t x794 = UINT64_MAX;
	int16_t x795 = -1;
	volatile uint32_t t198 = UINT32_MAX;

    t198 = (x793^((x794>x795)&x796));

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	volatile int16_t x798 = 9;
	volatile int32_t x799 = 1885;
	int32_t x800 = 2254;

    t199 = (x797^((x798>x799)&x800));

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

