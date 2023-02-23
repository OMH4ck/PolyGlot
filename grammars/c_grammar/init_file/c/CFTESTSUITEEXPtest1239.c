
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

static int32_t x6 = -375397;
static int32_t x8 = 8;
volatile int32_t t1 = 1;
int32_t t2 = 890;
volatile int32_t t4 = -60;
int64_t x23 = INT64_MIN;
int64_t x28 = -1LL;
static int64_t x36 = -122LL;
int16_t x37 = -1;
uint64_t x39 = UINT64_MAX;
int8_t x44 = INT8_MAX;
uint32_t x45 = 29253468U;
static volatile uint16_t x51 = 25244U;
uint64_t x55 = UINT64_MAX;
int32_t t13 = 2589348;
int16_t x62 = INT16_MIN;
uint32_t x68 = 45292U;
volatile int64_t x70 = INT64_MIN;
int8_t x83 = INT8_MIN;
int32_t t19 = 1108;
int32_t x86 = -1;
volatile int64_t x93 = INT64_MIN;
volatile int8_t x94 = INT8_MIN;
volatile int64_t x96 = 33187674676LL;
uint32_t x99 = 808U;
int64_t x104 = 14091279231004514LL;
int64_t x111 = INT64_MIN;
static volatile int32_t t26 = 0;
int64_t x116 = INT64_MIN;
int16_t x122 = INT16_MAX;
volatile uint16_t x127 = 3697U;
volatile int32_t t30 = 0;
int8_t x142 = 53;
int16_t x146 = -1;
volatile int32_t t35 = -29985834;
int64_t x155 = -1LL;
uint64_t x162 = UINT64_MAX;
static int32_t t40 = 536926;
int32_t x173 = 104;
uint64_t x185 = 424319512897LLU;
static uint16_t x190 = 1U;
int32_t x194 = -16272979;
uint8_t x202 = 3U;
uint64_t x205 = 17LLU;
volatile int32_t x206 = INT32_MAX;
static int32_t t50 = 4;
volatile int64_t x219 = -1LL;
int8_t x229 = 10;
static uint64_t x232 = 2226538580295280689LLU;
static uint32_t x239 = 8592U;
int32_t t56 = -601805;
uint64_t x247 = 71LLU;
int32_t x255 = INT32_MIN;
static int16_t x258 = -11;
int8_t x261 = 42;
volatile int32_t x263 = INT32_MIN;
static volatile int8_t x265 = -1;
int8_t x267 = INT8_MIN;
volatile uint32_t x272 = 1778592U;
int8_t x275 = INT8_MIN;
int16_t x283 = -837;
int32_t t66 = 79188;
volatile int32_t t67 = 355571;
static int8_t x296 = INT8_MIN;
int8_t x308 = -1;
int64_t x309 = INT64_MAX;
int64_t x320 = INT64_MIN;
volatile int32_t t75 = 7344;
int8_t x326 = INT8_MAX;
static volatile int16_t x327 = INT16_MAX;
static int8_t x330 = INT8_MIN;
static int64_t x332 = INT64_MAX;
static uint64_t x334 = 67338347748931LLU;
uint64_t x337 = UINT64_MAX;
static volatile int16_t x344 = INT16_MIN;
volatile int16_t x346 = INT16_MIN;
volatile uint64_t x355 = 241LLU;
volatile int64_t x359 = 280LL;
uint32_t x360 = 62006U;
int64_t x367 = -113LL;
static uint64_t x370 = 7706147091954873LLU;
int32_t x373 = INT32_MAX;
int16_t x374 = 1665;
static volatile int32_t t88 = 24108;
int32_t x377 = INT32_MIN;
static int16_t x382 = -1;
int32_t t90 = 16060;
int8_t x390 = -52;
static uint64_t x391 = 602977098797431931LLU;
int64_t x395 = 560214635051474LL;
int32_t t94 = 359174055;
uint8_t x401 = 56U;
volatile int32_t t96 = -1;
static int8_t x409 = INT8_MIN;
volatile int32_t t99 = 1970558;
int16_t x425 = INT16_MAX;
int64_t x430 = 5671LL;
uint64_t x432 = 3406153779755LLU;
volatile int16_t x438 = INT16_MAX;
uint32_t x440 = 344U;
uint8_t x442 = 41U;
uint8_t x443 = 66U;
volatile int32_t t107 = -368098;
uint32_t x453 = 4U;
int16_t x456 = -96;
uint64_t x464 = 23798712LLU;
uint32_t x470 = 12U;
int8_t x473 = -1;
static uint32_t x476 = UINT32_MAX;
int32_t t114 = 37;
int16_t x488 = 2;
int32_t t115 = -97;
int64_t x490 = -1LL;
volatile uint32_t x492 = 51760U;
volatile int32_t x495 = -1;
static int64_t x496 = -1LL;
int32_t t117 = 163;
static volatile int16_t x501 = INT16_MIN;
int8_t x506 = -1;
static int64_t x514 = INT64_MAX;
static int32_t x518 = -1;
uint8_t x526 = UINT8_MAX;
volatile int32_t t125 = -331126289;
volatile int16_t x530 = -15;
volatile uint8_t x531 = 60U;
int32_t x533 = 405301;
static int64_t x538 = -785LL;
int64_t x542 = INT64_MIN;
volatile uint16_t x543 = 30879U;
int32_t t129 = 831337030;
int32_t t130 = -1;
uint16_t x553 = 1999U;
static int8_t x554 = INT8_MIN;
uint32_t x557 = UINT32_MAX;
int16_t x559 = INT16_MIN;
int64_t x561 = INT64_MIN;
int8_t x570 = -60;
volatile int64_t x572 = -1LL;
volatile int32_t t135 = 235960157;
int64_t x573 = 22418916293624LL;
static volatile int16_t x579 = -1;
volatile int32_t t138 = -167;
int64_t x585 = INT64_MIN;
static uint64_t x592 = 1918807095026277843LLU;
volatile int32_t t140 = 25809271;
static int32_t t141 = -1;
static uint64_t x600 = 328790230831LLU;
static int64_t x601 = INT64_MAX;
uint64_t x602 = UINT64_MAX;
int64_t x612 = INT64_MIN;
uint32_t x614 = 34714U;
int16_t x616 = INT16_MIN;
volatile int16_t x620 = INT16_MIN;
static volatile uint32_t x621 = 53892U;
static volatile int8_t x623 = INT8_MIN;
int32_t x624 = -1;
int16_t x628 = 1;
int8_t x629 = INT8_MIN;
volatile int16_t x633 = -1;
int64_t x635 = -280LL;
uint64_t x643 = 3910435170976297775LLU;
uint8_t x645 = 67U;
int32_t t155 = -175650;
static uint16_t x656 = 2495U;
uint8_t x665 = 124U;
int32_t t160 = -12705;
volatile uint64_t x680 = 60820390024LLU;
static int8_t x682 = 0;
uint64_t x692 = UINT64_MAX;
static int32_t t166 = -270;
int32_t x700 = INT32_MIN;
int16_t x706 = INT16_MIN;
uint64_t x712 = 17204456575772LLU;
int32_t t170 = -45063731;
int32_t x714 = -1;
uint32_t x716 = UINT32_MAX;
volatile int32_t t171 = 145936;
int8_t x720 = INT8_MIN;
int32_t t172 = 1;
static uint16_t x721 = 7889U;
static volatile int8_t x724 = INT8_MAX;
int32_t x730 = INT32_MIN;
int16_t x736 = -593;
uint16_t x738 = 1U;
static volatile int64_t x741 = INT64_MAX;
static volatile int8_t x743 = -1;
volatile int32_t t179 = -82;
static int32_t t180 = 976971315;
uint8_t x757 = 3U;
uint16_t x759 = UINT16_MAX;
int32_t x764 = -1;
volatile int16_t x771 = INT16_MAX;
int8_t x776 = -1;
volatile int32_t x795 = INT32_MAX;
uint32_t x797 = 19631U;
static int32_t t193 = 119628;
uint32_t x813 = UINT32_MAX;
int64_t x816 = -164926LL;
static uint8_t x818 = 102U;
int8_t x822 = -1;


void f0(void) {
    	int8_t x1 = 0;
	volatile int8_t x2 = INT8_MIN;
	uint8_t x3 = 1U;
	uint32_t x4 = 2U;
	int32_t t0 = -8382531;

    t0 = (x1!=((x2!=x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = -1LL;
	int64_t x7 = -1LL;

    t1 = (x5!=((x6!=x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 30U;
	volatile uint64_t x10 = 2759LLU;
	int64_t x11 = -41186727446329063LL;
	static uint32_t x12 = UINT32_MAX;

    t2 = (x9!=((x10!=x11)%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int64_t x14 = -4294742304474166671LL;
	volatile int8_t x15 = INT8_MIN;
	volatile int16_t x16 = -10680;
	int32_t t3 = -4021994;

    t3 = (x13!=((x14!=x15)%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = UINT8_MAX;
	volatile int32_t x18 = INT32_MIN;
	static volatile uint32_t x19 = UINT32_MAX;
	uint8_t x20 = UINT8_MAX;

    t4 = (x17!=((x18!=x19)%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	static uint64_t x22 = 0LLU;
	int64_t x24 = INT64_MIN;
	int32_t t5 = -251636;

    t5 = (x21!=((x22!=x23)%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MAX;
	volatile int32_t t6 = -3421250;

    t6 = (x25!=((x26!=x27)%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 11698U;
	int16_t x30 = -13272;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	static int32_t t7 = 1045370;

    t7 = (x29!=((x30!=x31)%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	static int16_t x35 = INT16_MAX;
	volatile int32_t t8 = -12287496;

    t8 = (x33!=((x34!=x35)%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = INT32_MIN;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -9206252;

    t9 = (x37!=((x38!=x39)%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 0U;
	uint8_t x42 = 1U;
	static int64_t x43 = INT64_MIN;
	volatile int32_t t10 = 5;

    t10 = (x41!=((x42!=x43)%x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = 53U;
	int64_t x47 = INT64_MIN;
	int8_t x48 = 1;
	volatile int32_t t11 = -107261335;

    t11 = (x45!=((x46!=x47)%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	volatile uint16_t x50 = UINT16_MAX;
	int32_t x52 = -1;
	volatile int32_t t12 = -1979018;

    t12 = (x49!=((x50!=x51)%x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 43941377LLU;
	int8_t x54 = INT8_MAX;
	int16_t x56 = -1;

    t13 = (x53!=((x54!=x55)%x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 3;
	static int64_t x58 = INT64_MAX;
	int32_t x59 = INT32_MAX;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 30081044;

    t14 = (x57!=((x58!=x59)%x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int64_t x63 = INT64_MIN;
	static int64_t x64 = -1LL;
	static int32_t t15 = -441466;

    t15 = (x61!=((x62!=x63)%x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x65 = 1255U;
	static int32_t x66 = INT32_MAX;
	uint32_t x67 = 65U;
	static volatile int32_t t16 = -415633;

    t16 = (x65!=((x66!=x67)%x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 26U;
	int64_t x71 = 10245713989951550LL;
	int64_t x72 = INT64_MIN;
	static int32_t t17 = -365192;

    t17 = (x69!=((x70!=x71)%x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MAX;
	uint8_t x78 = UINT8_MAX;
	static volatile uint16_t x79 = 2U;
	int16_t x80 = INT16_MIN;
	volatile int32_t t18 = 237025280;

    t18 = (x77!=((x78!=x79)%x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = 711;
	int32_t x82 = INT32_MIN;
	int16_t x84 = -7;

    t19 = (x81!=((x82!=x83)%x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = -7;
	volatile int64_t x87 = 117523748306LL;
	static volatile int32_t x88 = INT32_MIN;
	int32_t t20 = -1715;

    t20 = (x85!=((x86!=x87)%x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = INT32_MIN;
	uint16_t x90 = 319U;
	static uint16_t x91 = 6669U;
	int64_t x92 = -8668534LL;
	int32_t t21 = 1586954;

    t21 = (x89!=((x90!=x91)%x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x95 = INT64_MIN;
	volatile int32_t t22 = -33681;

    t22 = (x93!=((x94!=x95)%x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x97 = INT8_MAX;
	uint16_t x98 = 545U;
	volatile int64_t x100 = INT64_MIN;
	int32_t t23 = 33069;

    t23 = (x97!=((x98!=x99)%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x101 = INT64_MAX;
	volatile uint8_t x102 = 42U;
	uint16_t x103 = 781U;
	static volatile int32_t t24 = 1;

    t24 = (x101!=((x102!=x103)%x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x105 = 5642U;
	volatile int16_t x106 = INT16_MIN;
	uint16_t x107 = UINT16_MAX;
	static int8_t x108 = -1;
	volatile int32_t t25 = 186645040;

    t25 = (x105!=((x106!=x107)%x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x109 = INT32_MAX;
	int16_t x110 = INT16_MIN;
	int32_t x112 = INT32_MIN;

    t26 = (x109!=((x110!=x111)%x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MAX;
	uint8_t x114 = UINT8_MAX;
	int32_t x115 = 964032;
	int32_t t27 = -16312;

    t27 = (x113!=((x114!=x115)%x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x117 = 0U;
	uint8_t x118 = 33U;
	int16_t x119 = INT16_MAX;
	int16_t x120 = -1;
	int32_t t28 = -90;

    t28 = (x117!=((x118!=x119)%x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x121 = -1;
	volatile int32_t x123 = 5273;
	static int16_t x124 = -2;
	volatile int32_t t29 = 208786353;

    t29 = (x121!=((x122!=x123)%x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x125 = -1;
	int64_t x126 = -1LL;
	uint32_t x128 = UINT32_MAX;

    t30 = (x125!=((x126!=x127)%x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x129 = INT32_MIN;
	int32_t x130 = 20;
	uint32_t x131 = 1086890444U;
	int16_t x132 = INT16_MIN;
	volatile int32_t t31 = -5;

    t31 = (x129!=((x130!=x131)%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = 9790U;
	int32_t x134 = 917989737;
	int64_t x135 = 367657445LL;
	int32_t x136 = INT32_MIN;
	int32_t t32 = -156393824;

    t32 = (x133!=((x134!=x135)%x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = INT64_MIN;
	static volatile int16_t x143 = INT16_MIN;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t33 = 435200;

    t33 = (x141!=((x142!=x143)%x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x145 = 2U;
	static int32_t x147 = INT32_MAX;
	int8_t x148 = -1;
	static int32_t t34 = 6;

    t34 = (x145!=((x146!=x147)%x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x149 = INT32_MAX;
	uint64_t x150 = UINT64_MAX;
	int64_t x151 = -29561229595948505LL;
	int8_t x152 = INT8_MIN;

    t35 = (x149!=((x150!=x151)%x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x153 = INT8_MIN;
	int16_t x154 = INT16_MIN;
	static int16_t x156 = INT16_MIN;
	int32_t t36 = -24129;

    t36 = (x153!=((x154!=x155)%x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x157 = UINT8_MAX;
	uint64_t x158 = 4932718LLU;
	volatile int64_t x159 = 62646558224LL;
	uint32_t x160 = 129984503U;
	volatile int32_t t37 = 43512513;

    t37 = (x157!=((x158!=x159)%x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = -1;
	int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MAX;
	volatile int32_t t38 = -1047318508;

    t38 = (x161!=((x162!=x163)%x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x165 = 1;
	uint16_t x166 = 586U;
	uint8_t x167 = UINT8_MAX;
	int8_t x168 = -1;
	int32_t t39 = -7036855;

    t39 = (x165!=((x166!=x167)%x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x169 = UINT64_MAX;
	uint64_t x170 = 1361470667LLU;
	static int8_t x171 = -27;
	uint16_t x172 = 7201U;

    t40 = (x169!=((x170!=x171)%x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x174 = 63490513957333LLU;
	int64_t x175 = -3LL;
	int8_t x176 = 1;
	int32_t t41 = 1;

    t41 = (x173!=((x174!=x175)%x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 29LLU;
	int64_t x178 = -89LL;
	volatile int64_t x179 = -59541070088777LL;
	int8_t x180 = 4;
	int32_t t42 = -56573133;

    t42 = (x177!=((x178!=x179)%x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x181 = -1;
	static int8_t x182 = INT8_MIN;
	int8_t x183 = 1;
	int32_t x184 = -3;
	volatile int32_t t43 = -5520106;

    t43 = (x181!=((x182!=x183)%x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x186 = INT32_MAX;
	volatile int32_t x187 = -43;
	static int8_t x188 = -1;
	int32_t t44 = 837439466;

    t44 = (x185!=((x186!=x187)%x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = UINT32_MAX;
	uint32_t x191 = 347952U;
	uint32_t x192 = 182079U;
	volatile int32_t t45 = -330008;

    t45 = (x189!=((x190!=x191)%x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x193 = 5U;
	uint8_t x195 = UINT8_MAX;
	volatile int16_t x196 = -1;
	int32_t t46 = 939150596;

    t46 = (x193!=((x194!=x195)%x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = -1;
	int16_t x198 = INT16_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile uint32_t x200 = 51U;
	static volatile int32_t t47 = -5165721;

    t47 = (x197!=((x198!=x199)%x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = INT8_MAX;
	volatile int8_t x203 = -1;
	int16_t x204 = -1;
	static int32_t t48 = -501894;

    t48 = (x201!=((x202!=x203)%x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x207 = UINT32_MAX;
	volatile int16_t x208 = 11;
	volatile int32_t t49 = 130210397;

    t49 = (x205!=((x206!=x207)%x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x209 = 9882415445192LL;
	uint16_t x210 = 104U;
	uint64_t x211 = UINT64_MAX;
	static int8_t x212 = -1;

    t50 = (x209!=((x210!=x211)%x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x213 = INT8_MIN;
	uint16_t x214 = 869U;
	uint64_t x215 = UINT64_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t51 = 4;

    t51 = (x213!=((x214!=x215)%x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x217 = 21941U;
	volatile int8_t x218 = -1;
	uint64_t x220 = 1867778584LLU;
	volatile int32_t t52 = -30;

    t52 = (x217!=((x218!=x219)%x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x221 = INT16_MAX;
	int16_t x222 = 200;
	uint8_t x223 = 5U;
	static uint8_t x224 = UINT8_MAX;
	int32_t t53 = -13;

    t53 = (x221!=((x222!=x223)%x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x225 = INT16_MIN;
	static int16_t x226 = 6;
	static int32_t x227 = -1;
	static uint32_t x228 = UINT32_MAX;
	int32_t t54 = -12551089;

    t54 = (x225!=((x226!=x227)%x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x230 = INT16_MIN;
	static int8_t x231 = INT8_MIN;
	static volatile int32_t t55 = -4002591;

    t55 = (x229!=((x230!=x231)%x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x237 = UINT16_MAX;
	int8_t x238 = INT8_MAX;
	int64_t x240 = 9336861LL;

    t56 = (x237!=((x238!=x239)%x240));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x245 = INT64_MAX;
	uint16_t x246 = 0U;
	int16_t x248 = INT16_MIN;
	volatile int32_t t57 = -42981;

    t57 = (x245!=((x246!=x247)%x248));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x249 = 2;
	static int32_t x250 = -1;
	uint32_t x251 = UINT32_MAX;
	volatile uint32_t x252 = UINT32_MAX;
	volatile int32_t t58 = -18306092;

    t58 = (x249!=((x250!=x251)%x252));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x253 = INT8_MAX;
	static uint16_t x254 = UINT16_MAX;
	int8_t x256 = INT8_MIN;
	volatile int32_t t59 = -162048254;

    t59 = (x253!=((x254!=x255)%x256));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x257 = INT8_MIN;
	volatile uint16_t x259 = 16U;
	uint16_t x260 = 253U;
	int32_t t60 = 8;

    t60 = (x257!=((x258!=x259)%x260));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x262 = 4441U;
	int8_t x264 = INT8_MAX;
	int32_t t61 = 892636;

    t61 = (x261!=((x262!=x263)%x264));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x266 = INT16_MIN;
	uint32_t x268 = 629554U;
	volatile int32_t t62 = 5;

    t62 = (x265!=((x266!=x267)%x268));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x269 = INT8_MIN;
	int64_t x270 = -1LL;
	uint64_t x271 = 2150878275985LLU;
	int32_t t63 = 3440389;

    t63 = (x269!=((x270!=x271)%x272));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x273 = INT64_MIN;
	int16_t x274 = -1;
	static uint32_t x276 = UINT32_MAX;
	int32_t t64 = -3392364;

    t64 = (x273!=((x274!=x275)%x276));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = INT64_MIN;
	int32_t x278 = 5;
	int16_t x279 = INT16_MAX;
	uint64_t x280 = UINT64_MAX;
	int32_t t65 = -22005279;

    t65 = (x277!=((x278!=x279)%x280));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x281 = -29;
	int64_t x282 = INT64_MIN;
	static volatile int8_t x284 = -1;

    t66 = (x281!=((x282!=x283)%x284));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x285 = INT8_MAX;
	volatile int32_t x286 = -1;
	volatile uint32_t x287 = 21298279U;
	volatile int64_t x288 = INT64_MAX;

    t67 = (x285!=((x286!=x287)%x288));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = -688546LL;
	volatile uint16_t x290 = 2U;
	volatile int32_t x291 = INT32_MIN;
	static int64_t x292 = INT64_MAX;
	volatile int32_t t68 = 9321;

    t68 = (x289!=((x290!=x291)%x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x293 = INT32_MIN;
	uint16_t x294 = 15U;
	int64_t x295 = INT64_MIN;
	int32_t t69 = 3;

    t69 = (x293!=((x294!=x295)%x296));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x297 = 4824667LL;
	int64_t x298 = 252108705456918292LL;
	int64_t x299 = -210402465079LL;
	uint8_t x300 = 3U;
	volatile int32_t t70 = -599863397;

    t70 = (x297!=((x298!=x299)%x300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x301 = -1LL;
	uint8_t x302 = 1U;
	int16_t x303 = INT16_MAX;
	int32_t x304 = -1;
	static volatile int32_t t71 = -1025;

    t71 = (x301!=((x302!=x303)%x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x305 = UINT64_MAX;
	volatile uint8_t x306 = UINT8_MAX;
	volatile int32_t x307 = 13;
	static volatile int32_t t72 = 1;

    t72 = (x305!=((x306!=x307)%x308));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x310 = INT16_MAX;
	int8_t x311 = INT8_MAX;
	static int64_t x312 = INT64_MIN;
	static int32_t t73 = -115524377;

    t73 = (x309!=((x310!=x311)%x312));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x313 = 6U;
	int64_t x314 = 10046LL;
	int8_t x315 = -1;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t74 = 520;

    t74 = (x313!=((x314!=x315)%x316));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x317 = UINT8_MAX;
	int64_t x318 = -1LL;
	volatile int64_t x319 = -13833400731490LL;

    t75 = (x317!=((x318!=x319)%x320));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x321 = INT16_MAX;
	static int64_t x322 = -6734LL;
	static int64_t x323 = INT64_MIN;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t76 = 0;

    t76 = (x321!=((x322!=x323)%x324));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x325 = 133077U;
	uint32_t x328 = 7753U;
	volatile int32_t t77 = -785;

    t77 = (x325!=((x326!=x327)%x328));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x331 = INT8_MIN;
	int32_t t78 = 174873735;

    t78 = (x329!=((x330!=x331)%x332));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x333 = 110032;
	uint32_t x335 = UINT32_MAX;
	uint8_t x336 = 47U;
	volatile int32_t t79 = 7;

    t79 = (x333!=((x334!=x335)%x336));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x338 = -40;
	int8_t x339 = -1;
	int64_t x340 = -17521788LL;
	static int32_t t80 = 49;

    t80 = (x337!=((x338!=x339)%x340));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x341 = 5U;
	int64_t x342 = -150832465LL;
	int8_t x343 = INT8_MIN;
	volatile int32_t t81 = -6;

    t81 = (x341!=((x342!=x343)%x344));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x345 = 6037U;
	int16_t x347 = -1;
	uint32_t x348 = 7U;
	static int32_t t82 = 6848198;

    t82 = (x345!=((x346!=x347)%x348));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x349 = -1;
	int16_t x350 = INT16_MIN;
	volatile int16_t x351 = -19;
	volatile uint64_t x352 = 65535911LLU;
	int32_t t83 = 0;

    t83 = (x349!=((x350!=x351)%x352));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x353 = -243;
	static volatile int64_t x354 = INT64_MIN;
	static volatile uint16_t x356 = UINT16_MAX;
	volatile int32_t t84 = -15459;

    t84 = (x353!=((x354!=x355)%x356));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MAX;
	volatile int32_t t85 = 491873308;

    t85 = (x357!=((x358!=x359)%x360));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x365 = -203578981;
	int64_t x366 = -178219928677196799LL;
	uint32_t x368 = 68U;
	volatile int32_t t86 = -3;

    t86 = (x365!=((x366!=x367)%x368));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x369 = 0;
	int32_t x371 = INT32_MIN;
	int32_t x372 = 14495058;
	volatile int32_t t87 = 41344;

    t87 = (x369!=((x370!=x371)%x372));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x375 = 1812709423U;
	uint8_t x376 = UINT8_MAX;

    t88 = (x373!=((x374!=x375)%x376));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x378 = INT8_MIN;
	static int32_t x379 = INT32_MIN;
	int16_t x380 = -699;
	volatile int32_t t89 = -163818;

    t89 = (x377!=((x378!=x379)%x380));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x381 = 0U;
	int32_t x383 = 7613;
	static uint64_t x384 = UINT64_MAX;

    t90 = (x381!=((x382!=x383)%x384));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x385 = -214;
	int64_t x386 = -1LL;
	static uint8_t x387 = 3U;
	int32_t x388 = -1;
	int32_t t91 = -2239;

    t91 = (x385!=((x386!=x387)%x388));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x389 = INT64_MIN;
	volatile int16_t x392 = -6;
	volatile int32_t t92 = -112770;

    t92 = (x389!=((x390!=x391)%x392));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x393 = 68U;
	int32_t x394 = INT32_MIN;
	static int32_t x396 = INT32_MAX;
	int32_t t93 = -5684;

    t93 = (x393!=((x394!=x395)%x396));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x397 = INT32_MIN;
	int16_t x398 = 2228;
	static int8_t x399 = -3;
	int64_t x400 = INT64_MIN;

    t94 = (x397!=((x398!=x399)%x400));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x402 = -1;
	uint64_t x403 = 198LLU;
	volatile int32_t x404 = INT32_MIN;
	volatile int32_t t95 = 8452;

    t95 = (x401!=((x402!=x403)%x404));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x405 = 367;
	static int16_t x406 = 12433;
	int64_t x407 = INT64_MIN;
	int16_t x408 = INT16_MAX;

    t96 = (x405!=((x406!=x407)%x408));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x410 = 198U;
	volatile int8_t x411 = 9;
	int16_t x412 = -59;
	static int32_t t97 = -518137593;

    t97 = (x409!=((x410!=x411)%x412));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x413 = -1;
	int16_t x414 = -1;
	int8_t x415 = -1;
	int32_t x416 = 19727;
	int32_t t98 = -509;

    t98 = (x413!=((x414!=x415)%x416));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x417 = 1LLU;
	int32_t x418 = INT32_MAX;
	int32_t x419 = 15;
	int16_t x420 = INT16_MIN;

    t99 = (x417!=((x418!=x419)%x420));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x421 = INT8_MAX;
	int16_t x422 = INT16_MIN;
	volatile uint32_t x423 = 8741183U;
	int32_t x424 = -562853;
	static volatile int32_t t100 = -7479331;

    t100 = (x421!=((x422!=x423)%x424));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x426 = -1293048570395142LL;
	volatile int32_t x427 = -21650069;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t101 = 4279295;

    t101 = (x425!=((x426!=x427)%x428));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x429 = UINT16_MAX;
	volatile int16_t x431 = INT16_MIN;
	int32_t t102 = 850;

    t102 = (x429!=((x430!=x431)%x432));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x433 = INT32_MIN;
	int8_t x434 = -1;
	static uint16_t x435 = UINT16_MAX;
	int16_t x436 = 1780;
	static volatile int32_t t103 = 0;

    t103 = (x433!=((x434!=x435)%x436));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x437 = INT8_MAX;
	int64_t x439 = INT64_MIN;
	int32_t t104 = 481721944;

    t104 = (x437!=((x438!=x439)%x440));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x441 = UINT16_MAX;
	int16_t x444 = INT16_MIN;
	volatile int32_t t105 = 34;

    t105 = (x441!=((x442!=x443)%x444));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x445 = 1035623U;
	uint64_t x446 = 2121174958723LLU;
	int16_t x447 = INT16_MIN;
	int32_t x448 = 178934;
	int32_t t106 = -10772;

    t106 = (x445!=((x446!=x447)%x448));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x449 = 1U;
	uint8_t x450 = UINT8_MAX;
	uint32_t x451 = 1571U;
	uint8_t x452 = 1U;

    t107 = (x449!=((x450!=x451)%x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x454 = -1;
	int8_t x455 = -1;
	volatile int32_t t108 = -9;

    t108 = (x453!=((x454!=x455)%x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x457 = 736U;
	int64_t x458 = 1598452322LL;
	int32_t x459 = INT32_MIN;
	int32_t x460 = -1;
	volatile int32_t t109 = -64410194;

    t109 = (x457!=((x458!=x459)%x460));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = INT64_MIN;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	static volatile int32_t t110 = -224;

    t110 = (x461!=((x462!=x463)%x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x469 = INT16_MIN;
	int16_t x471 = 1;
	uint32_t x472 = UINT32_MAX;
	volatile int32_t t111 = -2;

    t111 = (x469!=((x470!=x471)%x472));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x474 = -1;
	int16_t x475 = INT16_MIN;
	static int32_t t112 = 5841;

    t112 = (x473!=((x474!=x475)%x476));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x477 = INT16_MIN;
	int16_t x478 = INT16_MIN;
	volatile uint64_t x479 = 3161630LLU;
	static int32_t x480 = -1;
	int32_t t113 = -2629;

    t113 = (x477!=((x478!=x479)%x480));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x481 = -1;
	uint64_t x482 = 1067530694LLU;
	uint64_t x483 = UINT64_MAX;
	uint16_t x484 = 3030U;

    t114 = (x481!=((x482!=x483)%x484));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x485 = INT32_MIN;
	volatile uint64_t x486 = UINT64_MAX;
	uint64_t x487 = 11447804324267250LLU;

    t115 = (x485!=((x486!=x487)%x488));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x489 = INT8_MIN;
	uint16_t x491 = 69U;
	static volatile int32_t t116 = 638493664;

    t116 = (x489!=((x490!=x491)%x492));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x493 = INT64_MAX;
	volatile int64_t x494 = INT64_MAX;

    t117 = (x493!=((x494!=x495)%x496));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x497 = INT64_MAX;
	static int32_t x498 = -1;
	static volatile int8_t x499 = -1;
	uint8_t x500 = 80U;
	int32_t t118 = -78394732;

    t118 = (x497!=((x498!=x499)%x500));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x502 = UINT32_MAX;
	volatile int64_t x503 = INT64_MIN;
	volatile uint32_t x504 = UINT32_MAX;
	volatile int32_t t119 = 318067363;

    t119 = (x501!=((x502!=x503)%x504));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x505 = 5073U;
	static int64_t x507 = INT64_MIN;
	static int64_t x508 = INT64_MIN;
	int32_t t120 = -365446807;

    t120 = (x505!=((x506!=x507)%x508));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x509 = INT32_MAX;
	volatile uint16_t x510 = 8855U;
	int32_t x511 = INT32_MIN;
	int16_t x512 = INT16_MIN;
	volatile int32_t t121 = 196;

    t121 = (x509!=((x510!=x511)%x512));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x513 = 5U;
	int16_t x515 = INT16_MAX;
	static int8_t x516 = INT8_MAX;
	int32_t t122 = 18854732;

    t122 = (x513!=((x514!=x515)%x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x517 = 2357U;
	int8_t x519 = -4;
	int16_t x520 = INT16_MIN;
	int32_t t123 = -10792;

    t123 = (x517!=((x518!=x519)%x520));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x521 = INT64_MIN;
	uint8_t x522 = 5U;
	static uint64_t x523 = 24833120LLU;
	int16_t x524 = -1;
	static int32_t t124 = -126489058;

    t124 = (x521!=((x522!=x523)%x524));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x525 = 94U;
	int32_t x527 = -1;
	uint8_t x528 = 76U;

    t125 = (x525!=((x526!=x527)%x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x529 = -1LL;
	volatile int64_t x532 = INT64_MIN;
	static volatile int32_t t126 = 8265712;

    t126 = (x529!=((x530!=x531)%x532));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x534 = INT8_MAX;
	int64_t x535 = INT64_MAX;
	int32_t x536 = 1416;
	int32_t t127 = -39;

    t127 = (x533!=((x534!=x535)%x536));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x537 = INT16_MAX;
	static volatile int64_t x539 = 136804067761877804LL;
	int64_t x540 = -1LL;
	int32_t t128 = 2490;

    t128 = (x537!=((x538!=x539)%x540));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x541 = 1;
	int32_t x544 = 580;

    t129 = (x541!=((x542!=x543)%x544));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x549 = -1;
	volatile int8_t x550 = 4;
	uint16_t x551 = UINT16_MAX;
	volatile int16_t x552 = INT16_MAX;

    t130 = (x549!=((x550!=x551)%x552));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x555 = INT64_MAX;
	int32_t x556 = -496014;
	static int32_t t131 = 30593120;

    t131 = (x553!=((x554!=x555)%x556));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x558 = -927;
	uint8_t x560 = 19U;
	int32_t t132 = 951380400;

    t132 = (x557!=((x558!=x559)%x560));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x562 = INT32_MAX;
	int8_t x563 = INT8_MAX;
	uint64_t x564 = 2758496234LLU;
	volatile int32_t t133 = -635893;

    t133 = (x561!=((x562!=x563)%x564));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x565 = 148485028LLU;
	static volatile int16_t x566 = INT16_MIN;
	static volatile int8_t x567 = INT8_MAX;
	int32_t x568 = -1426512;
	volatile int32_t t134 = 7294;

    t134 = (x565!=((x566!=x567)%x568));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x569 = -203;
	static int64_t x571 = 57854079784LL;

    t135 = (x569!=((x570!=x571)%x572));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x574 = INT64_MAX;
	static int32_t x575 = INT32_MIN;
	uint16_t x576 = 997U;
	static volatile int32_t t136 = -232124038;

    t136 = (x573!=((x574!=x575)%x576));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x577 = INT64_MIN;
	uint8_t x578 = 1U;
	uint32_t x580 = UINT32_MAX;
	volatile int32_t t137 = -4966837;

    t137 = (x577!=((x578!=x579)%x580));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x581 = UINT32_MAX;
	static int64_t x582 = INT64_MAX;
	uint16_t x583 = 27788U;
	int32_t x584 = INT32_MIN;

    t138 = (x581!=((x582!=x583)%x584));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x586 = 1951U;
	int64_t x587 = INT64_MAX;
	uint8_t x588 = 20U;
	int32_t t139 = 156576685;

    t139 = (x585!=((x586!=x587)%x588));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x589 = UINT8_MAX;
	static int16_t x590 = 6;
	int8_t x591 = INT8_MIN;

    t140 = (x589!=((x590!=x591)%x592));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x593 = -2427822561256603573LL;
	int64_t x594 = INT64_MIN;
	int32_t x595 = -1;
	uint8_t x596 = UINT8_MAX;

    t141 = (x593!=((x594!=x595)%x596));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x597 = -2;
	uint64_t x598 = 3550968LLU;
	uint8_t x599 = 1U;
	static int32_t t142 = 272640;

    t142 = (x597!=((x598!=x599)%x600));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x603 = 56U;
	static volatile int64_t x604 = -1LL;
	volatile int32_t t143 = 1;

    t143 = (x601!=((x602!=x603)%x604));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x605 = UINT32_MAX;
	uint16_t x606 = 12U;
	int64_t x607 = -1LL;
	volatile uint32_t x608 = UINT32_MAX;
	volatile int32_t t144 = -124941;

    t144 = (x605!=((x606!=x607)%x608));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x609 = INT16_MIN;
	volatile uint64_t x610 = 137581642191878LLU;
	volatile int16_t x611 = INT16_MIN;
	int32_t t145 = 2783;

    t145 = (x609!=((x610!=x611)%x612));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x613 = INT64_MIN;
	uint16_t x615 = 2433U;
	volatile int32_t t146 = 234;

    t146 = (x613!=((x614!=x615)%x616));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x617 = -1;
	uint32_t x618 = UINT32_MAX;
	static int8_t x619 = INT8_MAX;
	int32_t t147 = 18;

    t147 = (x617!=((x618!=x619)%x620));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x622 = 18;
	volatile int32_t t148 = -181132;

    t148 = (x621!=((x622!=x623)%x624));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x625 = -1;
	static int32_t x626 = INT32_MAX;
	int8_t x627 = -1;
	volatile int32_t t149 = 1;

    t149 = (x625!=((x626!=x627)%x628));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x630 = UINT32_MAX;
	int64_t x631 = INT64_MIN;
	int16_t x632 = INT16_MAX;
	int32_t t150 = 1;

    t150 = (x629!=((x630!=x631)%x632));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x634 = 0U;
	static int32_t x636 = 31;
	int32_t t151 = -1;

    t151 = (x633!=((x634!=x635)%x636));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x637 = UINT8_MAX;
	int16_t x638 = 23;
	static volatile int64_t x639 = 25449751362849847LL;
	uint64_t x640 = 9534LLU;
	static volatile int32_t t152 = 49;

    t152 = (x637!=((x638!=x639)%x640));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x641 = 399;
	volatile int8_t x642 = 0;
	static int32_t x644 = INT32_MIN;
	int32_t t153 = -51379799;

    t153 = (x641!=((x642!=x643)%x644));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x646 = UINT16_MAX;
	volatile int16_t x647 = INT16_MIN;
	static int32_t x648 = INT32_MIN;
	static volatile int32_t t154 = 10210;

    t154 = (x645!=((x646!=x647)%x648));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x649 = -1;
	int8_t x650 = 40;
	int64_t x651 = INT64_MIN;
	static int32_t x652 = -61125;

    t155 = (x649!=((x650!=x651)%x652));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x653 = 5106205LL;
	static uint64_t x654 = UINT64_MAX;
	uint32_t x655 = 3988U;
	int32_t t156 = -825;

    t156 = (x653!=((x654!=x655)%x656));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x657 = INT64_MAX;
	uint8_t x658 = 51U;
	int8_t x659 = INT8_MIN;
	int64_t x660 = -733LL;
	int32_t t157 = 0;

    t157 = (x657!=((x658!=x659)%x660));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x661 = INT16_MIN;
	volatile int64_t x662 = INT64_MIN;
	static int16_t x663 = -1;
	int8_t x664 = -18;
	volatile int32_t t158 = 111;

    t158 = (x661!=((x662!=x663)%x664));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x666 = 34;
	int32_t x667 = -1;
	static int64_t x668 = INT64_MIN;
	volatile int32_t t159 = -5923;

    t159 = (x665!=((x666!=x667)%x668));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x669 = INT64_MIN;
	int32_t x670 = INT32_MIN;
	int8_t x671 = INT8_MIN;
	int16_t x672 = -1;

    t160 = (x669!=((x670!=x671)%x672));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x673 = 9484298U;
	int32_t x674 = 1;
	int64_t x675 = -4600311307LL;
	int8_t x676 = -1;
	volatile int32_t t161 = -121;

    t161 = (x673!=((x674!=x675)%x676));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x677 = INT32_MIN;
	static int64_t x678 = -1LL;
	int64_t x679 = 12103714126LL;
	static volatile int32_t t162 = 15553;

    t162 = (x677!=((x678!=x679)%x680));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x681 = INT64_MIN;
	static volatile int64_t x683 = INT64_MAX;
	volatile int32_t x684 = INT32_MIN;
	volatile int32_t t163 = 4;

    t163 = (x681!=((x682!=x683)%x684));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x685 = INT64_MIN;
	volatile int16_t x686 = INT16_MIN;
	uint16_t x687 = 26U;
	static int32_t x688 = -3;
	int32_t t164 = 2;

    t164 = (x685!=((x686!=x687)%x688));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x689 = -1;
	int64_t x690 = -1LL;
	volatile int64_t x691 = INT64_MIN;
	volatile int32_t t165 = 0;

    t165 = (x689!=((x690!=x691)%x692));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x693 = 8603515714LLU;
	int32_t x694 = -1;
	int64_t x695 = -713719715LL;
	int8_t x696 = INT8_MAX;

    t166 = (x693!=((x694!=x695)%x696));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x697 = INT16_MIN;
	uint8_t x698 = UINT8_MAX;
	uint8_t x699 = 0U;
	int32_t t167 = -64501723;

    t167 = (x697!=((x698!=x699)%x700));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x701 = -1;
	int32_t x702 = INT32_MIN;
	int32_t x703 = INT32_MIN;
	int64_t x704 = 391969LL;
	static int32_t t168 = -711;

    t168 = (x701!=((x702!=x703)%x704));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x705 = -1LL;
	static int16_t x707 = INT16_MAX;
	int16_t x708 = INT16_MAX;
	volatile int32_t t169 = 98;

    t169 = (x705!=((x706!=x707)%x708));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x709 = UINT64_MAX;
	uint8_t x710 = UINT8_MAX;
	static volatile int8_t x711 = INT8_MIN;

    t170 = (x709!=((x710!=x711)%x712));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x713 = 1094022U;
	int16_t x715 = -1;

    t171 = (x713!=((x714!=x715)%x716));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	int64_t x718 = INT64_MAX;
	int16_t x719 = INT16_MIN;

    t172 = (x717!=((x718!=x719)%x720));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x722 = INT8_MIN;
	static int64_t x723 = INT64_MAX;
	volatile int32_t t173 = -266;

    t173 = (x721!=((x722!=x723)%x724));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x725 = -1LL;
	int8_t x726 = INT8_MAX;
	static uint32_t x727 = UINT32_MAX;
	uint64_t x728 = 16LLU;
	volatile int32_t t174 = -5494;

    t174 = (x725!=((x726!=x727)%x728));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x729 = INT8_MAX;
	int64_t x731 = INT64_MIN;
	volatile uint32_t x732 = UINT32_MAX;
	static volatile int32_t t175 = 30527938;

    t175 = (x729!=((x730!=x731)%x732));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x733 = 872111U;
	volatile int64_t x734 = INT64_MIN;
	int16_t x735 = INT16_MIN;
	static int32_t t176 = 0;

    t176 = (x733!=((x734!=x735)%x736));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x737 = INT8_MIN;
	int16_t x739 = INT16_MIN;
	int16_t x740 = 3;
	static int32_t t177 = -2431;

    t177 = (x737!=((x738!=x739)%x740));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x742 = UINT32_MAX;
	uint32_t x744 = UINT32_MAX;
	volatile int32_t t178 = -349;

    t178 = (x741!=((x742!=x743)%x744));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x745 = INT16_MIN;
	int32_t x746 = -543931744;
	int8_t x747 = INT8_MAX;
	int8_t x748 = INT8_MAX;

    t179 = (x745!=((x746!=x747)%x748));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x749 = 22818;
	uint8_t x750 = 1U;
	static uint8_t x751 = 0U;
	volatile int64_t x752 = INT64_MAX;

    t180 = (x749!=((x750!=x751)%x752));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x753 = INT32_MAX;
	uint16_t x754 = UINT16_MAX;
	int64_t x755 = -136LL;
	int32_t x756 = -1;
	int32_t t181 = -1;

    t181 = (x753!=((x754!=x755)%x756));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x758 = 1032671786LL;
	static int32_t x760 = 3597;
	volatile int32_t t182 = 12458;

    t182 = (x757!=((x758!=x759)%x760));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x761 = INT32_MAX;
	volatile int16_t x762 = -1;
	volatile int16_t x763 = -1;
	volatile int32_t t183 = 149;

    t183 = (x761!=((x762!=x763)%x764));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x765 = INT64_MAX;
	int16_t x766 = INT16_MAX;
	uint16_t x767 = 2U;
	static volatile int32_t x768 = INT32_MAX;
	volatile int32_t t184 = -108;

    t184 = (x765!=((x766!=x767)%x768));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x769 = -1;
	int64_t x770 = INT64_MAX;
	static uint32_t x772 = 659970U;
	volatile int32_t t185 = 3815681;

    t185 = (x769!=((x770!=x771)%x772));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint32_t x773 = 21747U;
	uint32_t x774 = 112U;
	uint16_t x775 = 20U;
	static volatile int32_t t186 = -4713849;

    t186 = (x773!=((x774!=x775)%x776));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x777 = 808978U;
	int16_t x778 = 6405;
	int16_t x779 = -1;
	int8_t x780 = -30;
	volatile int32_t t187 = -14;

    t187 = (x777!=((x778!=x779)%x780));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x781 = INT16_MIN;
	int8_t x782 = -62;
	int64_t x783 = 1619685272LL;
	uint64_t x784 = UINT64_MAX;
	volatile int32_t t188 = -1;

    t188 = (x781!=((x782!=x783)%x784));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	uint16_t x786 = UINT16_MAX;
	int32_t x787 = -1;
	int64_t x788 = INT64_MIN;
	int32_t t189 = -9975315;

    t189 = (x785!=((x786!=x787)%x788));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x789 = -7;
	uint8_t x790 = 6U;
	volatile int8_t x791 = INT8_MIN;
	static volatile int64_t x792 = INT64_MIN;
	int32_t t190 = -2115343;

    t190 = (x789!=((x790!=x791)%x792));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = INT8_MIN;
	int8_t x794 = 0;
	volatile int32_t x796 = INT32_MIN;
	static volatile int32_t t191 = 1564721;

    t191 = (x793!=((x794!=x795)%x796));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x798 = UINT32_MAX;
	volatile int32_t x799 = -4;
	int8_t x800 = -7;
	volatile int32_t t192 = -11;

    t192 = (x797!=((x798!=x799)%x800));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x801 = 168;
	int32_t x802 = 14540;
	volatile int32_t x803 = INT32_MAX;
	static int32_t x804 = INT32_MIN;

    t193 = (x801!=((x802!=x803)%x804));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x805 = UINT16_MAX;
	int16_t x806 = 13287;
	static int16_t x807 = INT16_MAX;
	int64_t x808 = INT64_MIN;
	volatile int32_t t194 = 26649;

    t194 = (x805!=((x806!=x807)%x808));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x809 = 8U;
	int16_t x810 = INT16_MIN;
	static int64_t x811 = INT64_MAX;
	int16_t x812 = 109;
	volatile int32_t t195 = 43917035;

    t195 = (x809!=((x810!=x811)%x812));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x814 = INT8_MIN;
	int16_t x815 = INT16_MAX;
	static int32_t t196 = 45279;

    t196 = (x813!=((x814!=x815)%x816));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x817 = 13U;
	static uint64_t x819 = 419LLU;
	static uint8_t x820 = 9U;
	volatile int32_t t197 = -1;

    t197 = (x817!=((x818!=x819)%x820));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x821 = 6972U;
	int32_t x823 = -5365190;
	volatile int64_t x824 = 115146529307LL;
	volatile int32_t t198 = 871984670;

    t198 = (x821!=((x822!=x823)%x824));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x825 = UINT16_MAX;
	static int64_t x826 = -1LL;
	int8_t x827 = 0;
	int32_t x828 = INT32_MIN;
	volatile int32_t t199 = -147746624;

    t199 = (x825!=((x826!=x827)%x828));

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

