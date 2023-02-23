
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

static int32_t x2 = -1;
volatile int16_t x12 = INT16_MIN;
int32_t x14 = INT32_MIN;
int64_t x18 = INT64_MIN;
int8_t x26 = INT8_MIN;
static int64_t x30 = 1845680292835586LL;
static int64_t x35 = -13960080LL;
uint8_t x44 = UINT8_MAX;
uint16_t x46 = 13U;
static int16_t x48 = 1;
static volatile int8_t x50 = INT8_MIN;
volatile int32_t t12 = -2160864;
uint64_t x56 = 71941932277593LLU;
int16_t x58 = INT16_MAX;
static uint32_t x69 = UINT32_MAX;
uint16_t x74 = 217U;
int32_t t19 = -32009103;
volatile int64_t x82 = 0LL;
volatile int32_t t22 = 40492841;
static int8_t x94 = -7;
volatile int64_t x100 = -11844415LL;
uint8_t x102 = 4U;
uint8_t x107 = 65U;
int8_t x108 = 1;
static int32_t x121 = INT32_MIN;
int32_t x124 = -22;
int32_t t30 = 16151466;
int32_t x125 = INT32_MIN;
int8_t x129 = INT8_MAX;
volatile uint8_t x134 = 28U;
static int64_t x141 = 44462LL;
uint32_t x142 = 116U;
int32_t t35 = 41916;
int16_t x149 = INT16_MIN;
int16_t x151 = INT16_MIN;
uint32_t x166 = 0U;
static int32_t t41 = -3874011;
int8_t x170 = 1;
int32_t x172 = INT32_MIN;
static uint16_t x178 = 17U;
int64_t x179 = 8976140265330LL;
static int8_t x183 = INT8_MAX;
int8_t x186 = INT8_MIN;
int16_t x193 = 146;
int32_t x205 = INT32_MIN;
int16_t x206 = 24;
uint8_t x214 = UINT8_MAX;
uint64_t x217 = 1302600LLU;
int8_t x218 = INT8_MIN;
volatile int32_t t54 = -3824421;
static int8_t x223 = INT8_MIN;
static int32_t t55 = -30717836;
int8_t x231 = INT8_MAX;
int8_t x234 = INT8_MIN;
volatile int32_t t58 = 97393;
int32_t t60 = -4489;
uint64_t x254 = UINT64_MAX;
int32_t t63 = -11318632;
static uint64_t x258 = UINT64_MAX;
int16_t x272 = INT16_MIN;
int64_t x276 = INT64_MIN;
int16_t x283 = INT16_MAX;
int32_t t71 = 0;
volatile int32_t t74 = -1;
static int64_t x301 = -1LL;
static int16_t x302 = INT16_MIN;
static int64_t x306 = -184867LL;
volatile uint16_t x316 = 6U;
uint16_t x320 = 2U;
int16_t x321 = 290;
static uint8_t x322 = 11U;
uint16_t x323 = UINT16_MAX;
uint32_t x327 = UINT32_MAX;
volatile int8_t x329 = 0;
static uint32_t x332 = UINT32_MAX;
int16_t x333 = -57;
int32_t x340 = INT32_MIN;
static volatile int32_t t85 = -246669131;
int16_t x348 = -10;
static volatile int16_t x349 = INT16_MIN;
static int32_t x355 = INT32_MAX;
uint32_t x361 = 145389U;
uint64_t x363 = UINT64_MAX;
volatile int32_t t91 = -473091516;
volatile int8_t x372 = 1;
int64_t x374 = INT64_MIN;
static volatile int16_t x375 = -1;
static int32_t t93 = 21612;
int32_t x378 = INT32_MAX;
int32_t t95 = -1637;
uint16_t x385 = UINT16_MAX;
static uint16_t x388 = 3U;
volatile int64_t x396 = INT64_MIN;
int64_t x399 = -463186971LL;
volatile int32_t t99 = -103;
uint8_t x406 = 4U;
volatile int32_t x407 = -1;
volatile int16_t x416 = INT16_MIN;
static volatile int32_t t103 = 1;
volatile int64_t x417 = 26661483551LL;
volatile int32_t t104 = 447525;
int32_t x427 = INT32_MIN;
int32_t t108 = 173;
uint32_t x438 = 3585244U;
static uint32_t x441 = 755U;
uint16_t x445 = UINT16_MAX;
uint8_t x455 = UINT8_MAX;
static int64_t x457 = INT64_MIN;
uint32_t x460 = UINT32_MAX;
static int8_t x464 = INT8_MAX;
static int32_t t119 = -10502;
int16_t x482 = -1896;
static uint64_t x483 = UINT64_MAX;
volatile int16_t x490 = INT16_MIN;
int64_t x495 = INT64_MAX;
int64_t x507 = INT64_MIN;
static int32_t x513 = -1;
static int32_t x514 = INT32_MIN;
volatile int32_t t128 = 112244;
static uint64_t x525 = 4572757940340LLU;
int8_t x533 = -1;
int64_t x534 = 6955LL;
static int32_t x535 = INT32_MAX;
int16_t x539 = 1446;
static int64_t x540 = INT64_MAX;
volatile int32_t t134 = -114455739;
int32_t x541 = -1;
int32_t t135 = 35;
int64_t x546 = INT64_MIN;
uint8_t x562 = 20U;
int32_t x563 = INT32_MAX;
int8_t x565 = -1;
uint16_t x569 = 0U;
volatile uint32_t x570 = 68U;
volatile uint8_t x572 = UINT8_MAX;
int8_t x575 = -1;
volatile uint16_t x583 = 3U;
int8_t x584 = 11;
volatile int32_t t145 = 1724354;
int64_t x586 = 30442128LL;
int32_t t147 = -235688;
uint64_t x593 = 254011LLU;
uint16_t x594 = 235U;
volatile int32_t t150 = 130;
static volatile uint8_t x607 = 2U;
static int32_t t151 = -21;
static int32_t x610 = 3108;
static volatile int32_t t153 = 470706;
volatile int8_t x617 = 5;
volatile int32_t t154 = -1;
int8_t x622 = INT8_MIN;
volatile int32_t x623 = 17;
uint8_t x626 = 0U;
int64_t x627 = INT64_MIN;
static int32_t x630 = 422249284;
uint64_t x631 = 88714928657393920LLU;
int16_t x642 = INT16_MIN;
static int32_t x644 = INT32_MAX;
static int64_t x649 = 4479860230893LL;
static int32_t x651 = INT32_MIN;
int8_t x652 = INT8_MAX;
static uint16_t x663 = 0U;
static int16_t x668 = -16070;
static int64_t x669 = INT64_MIN;
int8_t x671 = INT8_MIN;
uint32_t x673 = UINT32_MAX;
uint64_t x679 = UINT64_MAX;
volatile int32_t t169 = -2;
int32_t t170 = 0;
static uint32_t x688 = UINT32_MAX;
static uint8_t x689 = 1U;
volatile int16_t x696 = 3;
int32_t t173 = 10;
volatile uint32_t x697 = UINT32_MAX;
int64_t x703 = -3631589LL;
volatile int32_t t175 = -219013926;
volatile int8_t x710 = 4;
int8_t x720 = INT8_MIN;
int32_t t179 = -1;
int32_t x723 = -1;
static uint8_t x724 = UINT8_MAX;
int32_t x725 = -1;
int64_t x728 = INT64_MIN;
uint64_t x730 = 1726349583572LLU;
uint32_t x732 = 790U;
int32_t t183 = -146120;
static int64_t x737 = -2LL;
int64_t x739 = -1LL;
static uint32_t x740 = 3819U;
int8_t x747 = INT8_MIN;
static int16_t x750 = 1;
static volatile uint8_t x752 = 110U;
int16_t x754 = INT16_MAX;
int32_t x755 = INT32_MIN;
volatile int32_t t188 = 1;
int32_t x760 = 0;
int32_t t189 = 16;
static uint16_t x766 = 11U;
static volatile int64_t x767 = -1LL;
volatile uint16_t x770 = UINT16_MAX;
int16_t x779 = -1;
static int32_t t194 = 82226213;
int16_t x781 = 122;
volatile int32_t x788 = INT32_MIN;
static volatile int32_t t197 = -2;
int16_t x794 = 1862;
volatile uint16_t x796 = 21460U;
int32_t t198 = 62533;
int32_t x799 = INT32_MIN;


void f0(void) {
    	static int8_t x1 = -1;
	int8_t x3 = -1;
	static uint64_t x4 = 26928184696131LLU;
	volatile int32_t t0 = -28352912;

    t0 = (x1==((x2<=x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 1;
	int16_t x6 = INT16_MIN;
	volatile uint32_t x7 = UINT32_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 17812975;

    t1 = (x5==((x6<=x7)>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -124027570055144LL;
	volatile uint8_t x10 = UINT8_MAX;
	int32_t x11 = INT32_MIN;
	static int32_t t2 = 2;

    t2 = (x9==((x10<=x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int16_t x15 = INT16_MAX;
	static uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 433;

    t3 = (x13==((x14<=x15)>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	volatile uint32_t x19 = 69818423U;
	uint64_t x20 = 46482390238656LLU;
	volatile int32_t t4 = -46431651;

    t4 = (x17==((x18<=x19)>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 1;
	uint64_t x22 = 56419357195512LLU;
	int16_t x23 = -1;
	int32_t x24 = -1;
	volatile int32_t t5 = -6;

    t5 = (x21==((x22<=x23)>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = 6;
	static int64_t x27 = -1LL;
	volatile int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = -1;

    t6 = (x25==((x26<=x27)>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 26;
	uint8_t x31 = 5U;
	int32_t x32 = 15661120;
	int32_t t7 = -1;

    t7 = (x29==((x30<=x31)>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x33 = UINT8_MAX;
	int64_t x34 = INT64_MIN;
	uint32_t x36 = 6316565U;
	volatile int32_t t8 = 132063699;

    t8 = (x33==((x34<=x35)>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	int64_t x38 = 505357852662022793LL;
	int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 122;

    t9 = (x37==((x38<=x39)>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 2U;
	static volatile uint16_t x42 = 2155U;
	int16_t x43 = INT16_MIN;
	static volatile int32_t t10 = 16330754;

    t10 = (x41==((x42<=x43)>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int32_t x47 = -1;
	static int32_t t11 = 50;

    t11 = (x45==((x46<=x47)>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -5075;
	static int8_t x51 = 1;
	int32_t x52 = INT32_MIN;

    t12 = (x49==((x50<=x51)>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	static volatile uint8_t x54 = UINT8_MAX;
	volatile uint32_t x55 = 10U;
	static int32_t t13 = -142710952;

    t13 = (x53==((x54<=x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 39;
	uint64_t x59 = 862366LLU;
	uint64_t x60 = UINT64_MAX;
	int32_t t14 = -96051;

    t14 = (x57==((x58<=x59)>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -261;
	uint8_t x62 = 7U;
	static uint8_t x63 = 67U;
	uint16_t x64 = 67U;
	volatile int32_t t15 = -1793;

    t15 = (x61==((x62<=x63)>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = -844;
	int32_t x66 = INT32_MIN;
	int32_t x67 = 57979;
	int64_t x68 = -7653LL;
	volatile int32_t t16 = 759446026;

    t16 = (x65==((x66<=x67)>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MIN;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -337333247;

    t17 = (x69==((x70<=x71)>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 1517U;
	static volatile uint32_t x75 = UINT32_MAX;
	int16_t x76 = INT16_MAX;
	static int32_t t18 = 396;

    t18 = (x73==((x74<=x75)>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 0U;
	volatile int8_t x78 = INT8_MAX;
	int16_t x79 = 0;
	volatile uint64_t x80 = 1550015074356065359LLU;

    t19 = (x77==((x78<=x79)>x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	volatile int32_t x83 = -1;
	uint32_t x84 = UINT32_MAX;
	static int32_t t20 = 2049795;

    t20 = (x81==((x82<=x83)>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = -1;
	int64_t x86 = INT64_MIN;
	static int64_t x87 = INT64_MIN;
	int32_t x88 = -52860;
	int32_t t21 = 4;

    t21 = (x85==((x86<=x87)>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = INT32_MIN;
	int64_t x90 = 58661115155LL;
	volatile uint64_t x91 = UINT64_MAX;
	volatile uint64_t x92 = 1021302935LLU;

    t22 = (x89==((x90<=x91)>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x93 = 241176111LL;
	int8_t x95 = -1;
	static int64_t x96 = -1LL;
	int32_t t23 = -14675971;

    t23 = (x93==((x94<=x95)>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 0U;
	uint32_t x98 = 977858U;
	volatile uint8_t x99 = 77U;
	volatile int32_t t24 = 55717;

    t24 = (x97==((x98<=x99)>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x101 = -62;
	int8_t x103 = 1;
	static uint8_t x104 = 0U;
	volatile int32_t t25 = -65698;

    t25 = (x101==((x102<=x103)>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	int8_t x106 = -1;
	int32_t t26 = -647;

    t26 = (x105==((x106<=x107)>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 1LL;
	int8_t x110 = -28;
	uint16_t x111 = UINT16_MAX;
	static uint32_t x112 = UINT32_MAX;
	int32_t t27 = -803737496;

    t27 = (x109==((x110<=x111)>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	int64_t x114 = INT64_MIN;
	static int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t28 = -251;

    t28 = (x113==((x114<=x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -1LL;
	int32_t x118 = -1;
	int64_t x119 = -1LL;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = -46421;

    t29 = (x117==((x118<=x119)>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = INT32_MIN;
	uint64_t x123 = UINT64_MAX;

    t30 = (x121==((x122<=x123)>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = -1;
	int64_t x127 = INT64_MIN;
	int16_t x128 = 6874;
	int32_t t31 = -25801957;

    t31 = (x125==((x126<=x127)>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x130 = INT16_MAX;
	volatile int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t32 = 21;

    t32 = (x129==((x130<=x131)>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -1;
	int8_t x135 = INT8_MAX;
	int16_t x136 = -688;
	volatile int32_t t33 = 0;

    t33 = (x133==((x134<=x135)>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = 15932U;
	uint64_t x138 = 5252987322LLU;
	int64_t x139 = -1LL;
	int32_t x140 = -1;
	int32_t t34 = 24151111;

    t34 = (x137==((x138<=x139)>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x143 = 358U;
	int8_t x144 = 0;

    t35 = (x141==((x142<=x143)>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	int8_t x146 = 6;
	static uint64_t x147 = 1661LLU;
	static int16_t x148 = INT16_MAX;
	static volatile int32_t t36 = 11606;

    t36 = (x145==((x146<=x147)>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x150 = 41U;
	volatile int64_t x152 = INT64_MAX;
	static volatile int32_t t37 = 129367894;

    t37 = (x149==((x150<=x151)>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	static int8_t x154 = 17;
	int64_t x155 = -4114121223LL;
	int64_t x156 = -1LL;
	volatile int32_t t38 = -1110933;

    t38 = (x153==((x154<=x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = -398LL;
	int8_t x158 = -1;
	uint32_t x159 = 1649309U;
	volatile int16_t x160 = INT16_MAX;
	static volatile int32_t t39 = -1;

    t39 = (x157==((x158<=x159)>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x161 = UINT64_MAX;
	int64_t x162 = -10558LL;
	uint8_t x163 = 1U;
	uint16_t x164 = 30884U;
	volatile int32_t t40 = 123484;

    t40 = (x161==((x162<=x163)>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -14;
	uint32_t x167 = 3757U;
	int64_t x168 = -8961LL;

    t41 = (x165==((x166<=x167)>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	volatile int32_t t42 = -1027125414;

    t42 = (x169==((x170<=x171)>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	static int16_t x174 = -7;
	volatile uint32_t x175 = 40U;
	uint8_t x176 = 4U;
	volatile int32_t t43 = -5819;

    t43 = (x173==((x174<=x175)>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 1738610040U;
	static uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = 21;

    t44 = (x177==((x178<=x179)>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	static int32_t x182 = INT32_MIN;
	static int32_t x184 = INT32_MIN;
	static int32_t t45 = 961;

    t45 = (x181==((x182<=x183)>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 5U;
	int64_t x187 = -1LL;
	uint16_t x188 = 4333U;
	int32_t t46 = 98799109;

    t46 = (x185==((x186<=x187)>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = 31018;
	static volatile uint32_t x190 = 9U;
	int64_t x191 = 11LL;
	int64_t x192 = -1LL;
	static volatile int32_t t47 = -2892769;

    t47 = (x189==((x190<=x191)>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = -3;
	static int32_t x195 = INT32_MIN;
	int16_t x196 = -1;
	volatile int32_t t48 = 201224;

    t48 = (x193==((x194<=x195)>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = INT8_MAX;
	int64_t x198 = 6159122621LL;
	int32_t x199 = -1;
	uint16_t x200 = 9U;
	int32_t t49 = -3755165;

    t49 = (x197==((x198<=x199)>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = 7;
	static uint16_t x202 = UINT16_MAX;
	static int64_t x203 = -1LL;
	static int64_t x204 = INT64_MIN;
	volatile int32_t t50 = -1;

    t50 = (x201==((x202<=x203)>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x207 = INT64_MIN;
	static volatile uint16_t x208 = 1U;
	static volatile int32_t t51 = 25685;

    t51 = (x205==((x206<=x207)>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = 1;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MAX;
	int64_t x212 = INT64_MAX;
	static int32_t t52 = -417472212;

    t52 = (x209==((x210<=x211)>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 426855LL;
	int8_t x215 = 3;
	volatile uint8_t x216 = 2U;
	static int32_t t53 = -8;

    t53 = (x213==((x214<=x215)>x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x219 = 3U;
	int16_t x220 = -1711;

    t54 = (x217==((x218<=x219)>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	int32_t x222 = -150918418;
	uint16_t x224 = UINT16_MAX;

    t55 = (x221==((x222<=x223)>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = -1;
	int32_t x226 = INT32_MAX;
	static int16_t x227 = -278;
	static uint32_t x228 = UINT32_MAX;
	int32_t t56 = -102192;

    t56 = (x225==((x226<=x227)>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = INT8_MIN;
	static volatile int64_t x230 = 87473713504572LL;
	int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 1241;

    t57 = (x229==((x230<=x231)>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = -1;
	int64_t x235 = INT64_MIN;
	uint16_t x236 = UINT16_MAX;

    t58 = (x233==((x234<=x235)>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x237 = 2779413407231LLU;
	int64_t x238 = INT64_MAX;
	int32_t x239 = INT32_MAX;
	int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 270399;

    t59 = (x237==((x238<=x239)>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 2668467LLU;
	static int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MAX;
	volatile uint8_t x244 = UINT8_MAX;

    t60 = (x241==((x242<=x243)>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 67U;
	int64_t x246 = -890LL;
	volatile uint8_t x247 = 34U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 14;

    t61 = (x245==((x246<=x247)>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int8_t x250 = INT8_MAX;
	static int32_t x251 = 16261;
	static int64_t x252 = INT64_MIN;
	int32_t t62 = 4069;

    t62 = (x249==((x250<=x251)>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x253 = 6941U;
	int64_t x255 = -2890791397361579LL;
	volatile int8_t x256 = INT8_MAX;

    t63 = (x253==((x254<=x255)>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	static volatile int32_t x260 = INT32_MIN;
	static volatile int32_t t64 = 10232043;

    t64 = (x257==((x258<=x259)>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 129LLU;
	uint64_t x262 = 3996374539909897573LLU;
	uint32_t x263 = 973U;
	uint8_t x264 = 3U;
	volatile int32_t t65 = 128637;

    t65 = (x261==((x262<=x263)>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int16_t x266 = -1;
	int32_t x267 = INT32_MIN;
	volatile uint64_t x268 = 3761730753643765682LLU;
	static volatile int32_t t66 = -14;

    t66 = (x265==((x266<=x267)>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 4;
	int64_t x270 = INT64_MAX;
	int16_t x271 = INT16_MIN;
	volatile int32_t t67 = 12927;

    t67 = (x269==((x270<=x271)>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	int32_t x274 = -14819;
	uint16_t x275 = 389U;
	int32_t t68 = 240732437;

    t68 = (x273==((x274<=x275)>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MAX;
	int8_t x278 = -1;
	uint32_t x279 = 46844134U;
	int32_t x280 = -4;
	static int32_t t69 = 0;

    t69 = (x277==((x278<=x279)>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x281 = 3171U;
	static int32_t x282 = 14;
	int64_t x284 = INT64_MIN;
	static int32_t t70 = 0;

    t70 = (x281==((x282<=x283)>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 71U;
	volatile int32_t x286 = INT32_MAX;
	int8_t x287 = INT8_MAX;
	static int64_t x288 = INT64_MAX;

    t71 = (x285==((x286<=x287)>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	static uint64_t x290 = UINT64_MAX;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 424U;
	volatile int32_t t72 = 566;

    t72 = (x289==((x290<=x291)>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = 11U;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -29276;

    t73 = (x293==((x294<=x295)>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = UINT16_MAX;
	static int16_t x298 = -57;
	uint16_t x299 = 62U;
	int64_t x300 = INT64_MIN;

    t74 = (x297==((x298<=x299)>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 18;

    t75 = (x301==((x302<=x303)>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	uint8_t x307 = 2U;
	int16_t x308 = INT16_MIN;
	static int32_t t76 = -1982816;

    t76 = (x305==((x306<=x307)>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 1408160222836421576LLU;
	int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MAX;
	volatile int64_t x312 = INT64_MIN;
	int32_t t77 = 3251;

    t77 = (x309==((x310<=x311)>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 26807U;
	volatile uint32_t x314 = 7350U;
	int64_t x315 = -1LL;
	volatile int32_t t78 = -3;

    t78 = (x313==((x314<=x315)>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x317 = UINT32_MAX;
	static int32_t x318 = 111;
	int64_t x319 = INT64_MIN;
	volatile int32_t t79 = 4;

    t79 = (x317==((x318<=x319)>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x324 = INT64_MIN;
	int32_t t80 = 911806790;

    t80 = (x321==((x322<=x323)>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = 52;
	volatile int32_t x326 = INT32_MAX;
	volatile int16_t x328 = INT16_MIN;
	int32_t t81 = -46;

    t81 = (x325==((x326<=x327)>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x330 = 1U;
	int32_t x331 = -1;
	static volatile int32_t t82 = -1796470;

    t82 = (x329==((x330<=x331)>x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = INT64_MAX;
	int8_t x335 = -1;
	uint8_t x336 = 10U;
	volatile int32_t t83 = 0;

    t83 = (x333==((x334<=x335)>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MAX;
	int64_t x339 = -13831LL;
	int32_t t84 = 3162009;

    t84 = (x337==((x338<=x339)>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MIN;
	uint32_t x343 = 0U;
	uint8_t x344 = 1U;

    t85 = (x341==((x342<=x343)>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	uint64_t x346 = 8597217026439243LLU;
	int16_t x347 = INT16_MAX;
	int32_t t86 = -57946;

    t86 = (x345==((x346<=x347)>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x350 = 56474LL;
	int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MIN;
	int32_t t87 = -15;

    t87 = (x349==((x350<=x351)>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = -1LL;
	int32_t x354 = 3390709;
	int64_t x356 = -1LL;
	volatile int32_t t88 = 5717;

    t88 = (x353==((x354<=x355)>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = INT64_MIN;
	static int32_t x358 = 136706;
	uint32_t x359 = UINT32_MAX;
	int64_t x360 = INT64_MIN;
	int32_t t89 = 23519;

    t89 = (x357==((x358<=x359)>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = INT8_MIN;
	int64_t x364 = -10703980042LL;
	int32_t t90 = 1394;

    t90 = (x361==((x362<=x363)>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	volatile uint64_t x366 = UINT64_MAX;
	uint32_t x367 = UINT32_MAX;
	int64_t x368 = INT64_MIN;

    t91 = (x365==((x366<=x367)>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MAX;
	int64_t x370 = -16317779131454992LL;
	uint32_t x371 = 1880849375U;
	volatile int32_t t92 = 16539319;

    t92 = (x369==((x370<=x371)>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	uint64_t x376 = 731580LLU;

    t93 = (x373==((x374<=x375)>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -18;
	static uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -1272;

    t94 = (x377==((x378<=x379)>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x381 = 3U;
	int64_t x382 = INT64_MAX;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = -1;

    t95 = (x381==((x382<=x383)>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x386 = -5331;
	static int8_t x387 = -27;
	int32_t t96 = 3;

    t96 = (x385==((x386<=x387)>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	uint32_t x390 = 19072U;
	int16_t x391 = 1;
	int16_t x392 = -799;
	volatile int32_t t97 = 26960;

    t97 = (x389==((x390<=x391)>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 16U;
	int64_t x394 = 322LL;
	int16_t x395 = INT16_MIN;
	int32_t t98 = -7161643;

    t98 = (x393==((x394<=x395)>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = -1LL;
	volatile int64_t x398 = -1LL;
	int8_t x400 = INT8_MIN;

    t99 = (x397==((x398<=x399)>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = UINT16_MAX;
	volatile int8_t x402 = -1;
	volatile uint64_t x403 = 8959197476180583878LLU;
	uint32_t x404 = 3155281U;
	static int32_t t100 = -589;

    t100 = (x401==((x402<=x403)>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	volatile int32_t x408 = -1;
	volatile int32_t t101 = -36;

    t101 = (x405==((x406<=x407)>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -1LL;
	uint64_t x410 = UINT64_MAX;
	static int64_t x411 = 121090539LL;
	static uint32_t x412 = UINT32_MAX;
	int32_t t102 = -1210;

    t102 = (x409==((x410<=x411)>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -30;
	int64_t x414 = INT64_MAX;
	uint8_t x415 = UINT8_MAX;

    t103 = (x413==((x414<=x415)>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x418 = UINT32_MAX;
	volatile uint8_t x419 = 0U;
	volatile int64_t x420 = INT64_MIN;

    t104 = (x417==((x418<=x419)>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -1135;
	uint32_t x422 = 1539664888U;
	static int16_t x423 = -1;
	uint8_t x424 = 2U;
	int32_t t105 = -1821;

    t105 = (x421==((x422<=x423)>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 22237U;
	volatile uint8_t x426 = 10U;
	uint8_t x428 = UINT8_MAX;
	int32_t t106 = 41;

    t106 = (x425==((x426<=x427)>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = INT64_MIN;
	static volatile int32_t x430 = 22;
	uint8_t x431 = 13U;
	static int16_t x432 = 8949;
	volatile int32_t t107 = -364;

    t107 = (x429==((x430<=x431)>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x433 = INT64_MIN;
	int32_t x434 = 1;
	uint16_t x435 = UINT16_MAX;
	static int16_t x436 = INT16_MAX;

    t108 = (x433==((x434<=x435)>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x437 = 6U;
	int64_t x439 = -137LL;
	static int64_t x440 = 2681545856097LL;
	int32_t t109 = 1633;

    t109 = (x437==((x438<=x439)>x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x442 = 1U;
	static int16_t x443 = INT16_MIN;
	int64_t x444 = 1561132060163178948LL;
	volatile int32_t t110 = 12479;

    t110 = (x441==((x442<=x443)>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x446 = 451477U;
	int8_t x447 = -15;
	volatile uint8_t x448 = 21U;
	int32_t t111 = -70134567;

    t111 = (x445==((x446<=x447)>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	int32_t x450 = INT32_MIN;
	volatile int64_t x451 = -1LL;
	uint64_t x452 = UINT64_MAX;
	static volatile int32_t t112 = -6;

    t112 = (x449==((x450<=x451)>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x453 = 3;
	uint32_t x454 = UINT32_MAX;
	int64_t x456 = 14495521LL;
	volatile int32_t t113 = -1812970;

    t113 = (x453==((x454<=x455)>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x458 = -1;
	volatile uint32_t x459 = 95534456U;
	volatile int32_t t114 = -2332;

    t114 = (x457==((x458<=x459)>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	volatile uint32_t x462 = 2010011798U;
	int64_t x463 = 1LL;
	int32_t t115 = 354872197;

    t115 = (x461==((x462<=x463)>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 80859444U;
	static int8_t x466 = INT8_MIN;
	uint8_t x467 = UINT8_MAX;
	volatile int32_t x468 = INT32_MIN;
	volatile int32_t t116 = 64887;

    t116 = (x465==((x466<=x467)>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = INT8_MAX;
	volatile int64_t x470 = INT64_MIN;
	int8_t x471 = -57;
	int64_t x472 = -1LL;
	volatile int32_t t117 = 7980;

    t117 = (x469==((x470<=x471)>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x473 = INT8_MAX;
	volatile uint64_t x474 = UINT64_MAX;
	int32_t x475 = INT32_MAX;
	int8_t x476 = 2;
	static int32_t t118 = -1;

    t118 = (x473==((x474<=x475)>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	volatile uint64_t x478 = 7052024545816LLU;
	volatile uint32_t x479 = 64U;
	static int8_t x480 = -1;

    t119 = (x477==((x478<=x479)>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	static uint32_t x484 = UINT32_MAX;
	int32_t t120 = -3983751;

    t120 = (x481==((x482<=x483)>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 11U;
	uint8_t x486 = UINT8_MAX;
	uint8_t x487 = 10U;
	uint16_t x488 = 2243U;
	volatile int32_t t121 = 1335499;

    t121 = (x485==((x486<=x487)>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -23;
	int64_t x491 = INT64_MAX;
	int64_t x492 = -50229238816526126LL;
	volatile int32_t t122 = 8062;

    t122 = (x489==((x490<=x491)>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = INT32_MAX;
	uint32_t x494 = 3045857U;
	int8_t x496 = -1;
	int32_t t123 = -1;

    t123 = (x493==((x494<=x495)>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	int8_t x498 = -51;
	uint16_t x499 = UINT16_MAX;
	uint16_t x500 = 3586U;
	static int32_t t124 = 24684;

    t124 = (x497==((x498<=x499)>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	uint8_t x502 = UINT8_MAX;
	int8_t x503 = INT8_MIN;
	volatile int32_t x504 = 74505;
	volatile int32_t t125 = -30924850;

    t125 = (x501==((x502<=x503)>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MAX;
	int64_t x506 = INT64_MIN;
	uint32_t x508 = 12429940U;
	static volatile int32_t t126 = -636225;

    t126 = (x505==((x506<=x507)>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x509 = UINT8_MAX;
	static int32_t x510 = INT32_MAX;
	int8_t x511 = -2;
	uint64_t x512 = 8211748856165LLU;
	volatile int32_t t127 = -1;

    t127 = (x509==((x510<=x511)>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x515 = -1;
	uint8_t x516 = UINT8_MAX;

    t128 = (x513==((x514<=x515)>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 504375U;
	static int8_t x518 = INT8_MIN;
	int64_t x519 = -1LL;
	static int16_t x520 = INT16_MIN;
	static int32_t t129 = -48;

    t129 = (x517==((x518<=x519)>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -1;
	int8_t x522 = -1;
	volatile int8_t x523 = INT8_MIN;
	static uint16_t x524 = 96U;
	volatile int32_t t130 = 1452977;

    t130 = (x521==((x522<=x523)>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = INT16_MIN;
	static volatile int8_t x527 = 12;
	volatile int32_t x528 = -10;
	volatile int32_t t131 = 1;

    t131 = (x525==((x526<=x527)>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MIN;
	static int8_t x530 = -1;
	int64_t x531 = 3307242LL;
	int8_t x532 = INT8_MAX;
	int32_t t132 = 15859442;

    t132 = (x529==((x530<=x531)>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x536 = INT8_MIN;
	volatile int32_t t133 = 215;

    t133 = (x533==((x534<=x535)>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = 967891951386LL;
	int64_t x538 = -25LL;

    t134 = (x537==((x538<=x539)>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = -1;
	uint32_t x543 = 210U;
	uint32_t x544 = 518U;

    t135 = (x541==((x542<=x543)>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 30452U;
	volatile int32_t x547 = -1;
	static uint64_t x548 = 88956035LLU;
	volatile int32_t t136 = 131;

    t136 = (x545==((x546<=x547)>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 109U;
	volatile uint8_t x550 = UINT8_MAX;
	static int16_t x551 = INT16_MIN;
	int64_t x552 = INT64_MAX;
	static volatile int32_t t137 = -994706998;

    t137 = (x549==((x550<=x551)>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 14U;
	static int32_t x554 = -952;
	int8_t x555 = INT8_MIN;
	uint64_t x556 = 3694747LLU;
	volatile int32_t t138 = -4;

    t138 = (x553==((x554<=x555)>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 377U;
	static int32_t x558 = INT32_MAX;
	volatile uint32_t x559 = UINT32_MAX;
	volatile int32_t x560 = INT32_MIN;
	volatile int32_t t139 = -270945;

    t139 = (x557==((x558<=x559)>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 2618841982183LL;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t140 = -5020;

    t140 = (x561==((x562<=x563)>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x566 = -97942899393LL;
	int64_t x567 = INT64_MIN;
	volatile int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -3826235;

    t141 = (x565==((x566<=x567)>x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x571 = INT64_MAX;
	int32_t t142 = 11345097;

    t142 = (x569==((x570<=x571)>x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	uint32_t x574 = 195U;
	volatile int64_t x576 = INT64_MAX;
	volatile int32_t t143 = -22674;

    t143 = (x573==((x574<=x575)>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = UINT64_MAX;
	int16_t x578 = 25;
	int32_t x579 = INT32_MAX;
	uint16_t x580 = 67U;
	int32_t t144 = 553;

    t144 = (x577==((x578<=x579)>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MAX;
	int16_t x582 = 251;

    t145 = (x581==((x582<=x583)>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -11;
	volatile uint64_t x587 = 73303288LLU;
	uint32_t x588 = UINT32_MAX;
	volatile int32_t t146 = 160838982;

    t146 = (x585==((x586<=x587)>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	int16_t x590 = INT16_MIN;
	static int64_t x591 = INT64_MIN;
	int8_t x592 = INT8_MAX;

    t147 = (x589==((x590<=x591)>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x595 = 1U;
	static int32_t x596 = 177;
	int32_t t148 = 203358;

    t148 = (x593==((x594<=x595)>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = INT8_MAX;
	int8_t x598 = INT8_MIN;
	volatile int32_t x599 = -1097159;
	uint64_t x600 = 232692669LLU;
	static int32_t t149 = -856546578;

    t149 = (x597==((x598<=x599)>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 147124069U;
	volatile uint64_t x602 = UINT64_MAX;
	uint8_t x603 = 1U;
	int8_t x604 = INT8_MIN;

    t150 = (x601==((x602<=x603)>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	static int32_t x606 = -1;
	int16_t x608 = INT16_MAX;

    t151 = (x605==((x606<=x607)>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = INT64_MIN;
	uint8_t x611 = 51U;
	volatile uint32_t x612 = 13802U;
	int32_t t152 = 122;

    t152 = (x609==((x610<=x611)>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = INT64_MIN;
	uint8_t x614 = 6U;
	volatile uint64_t x615 = 29875668783889915LLU;
	int8_t x616 = INT8_MIN;

    t153 = (x613==((x614<=x615)>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x618 = -1;
	static int16_t x619 = 10712;
	int32_t x620 = -1;

    t154 = (x617==((x618<=x619)>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	static uint32_t x624 = 272U;
	static int32_t t155 = 396515;

    t155 = (x621==((x622<=x623)>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = -1398;
	volatile int64_t x628 = -1LL;
	static volatile int32_t t156 = 8;

    t156 = (x625==((x626<=x627)>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = 4LLU;
	int16_t x632 = -191;
	int32_t t157 = 4;

    t157 = (x629==((x630<=x631)>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = 3529474LL;
	int32_t x634 = INT32_MIN;
	int8_t x635 = INT8_MAX;
	int32_t x636 = INT32_MIN;
	int32_t t158 = 0;

    t158 = (x633==((x634<=x635)>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	int32_t x638 = INT32_MIN;
	static int16_t x639 = 510;
	static volatile int32_t x640 = INT32_MIN;
	int32_t t159 = 40;

    t159 = (x637==((x638<=x639)>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = INT8_MAX;
	int32_t x643 = INT32_MIN;
	int32_t t160 = -7600;

    t160 = (x641==((x642<=x643)>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 404267LL;
	volatile int8_t x646 = INT8_MAX;
	uint64_t x647 = 14LLU;
	int16_t x648 = INT16_MIN;
	int32_t t161 = -24;

    t161 = (x645==((x646<=x647)>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x650 = -1;
	static volatile int32_t t162 = 159;

    t162 = (x649==((x650<=x651)>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = 255957235098319480LL;
	int64_t x654 = 3201369581758897503LL;
	int32_t x655 = INT32_MIN;
	int16_t x656 = INT16_MAX;
	volatile int32_t t163 = 4182936;

    t163 = (x653==((x654<=x655)>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 2739770LLU;
	int16_t x658 = -27;
	int16_t x659 = INT16_MAX;
	int32_t x660 = INT32_MIN;
	volatile int32_t t164 = 1;

    t164 = (x657==((x658<=x659)>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 1U;
	volatile int16_t x662 = 63;
	volatile uint64_t x664 = 38621951LLU;
	static volatile int32_t t165 = -1765438;

    t165 = (x661==((x662<=x663)>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -4585;
	int8_t x666 = 34;
	uint64_t x667 = 956416193250451980LLU;
	static volatile int32_t t166 = 3770972;

    t166 = (x665==((x666<=x667)>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x670 = -1;
	static volatile int32_t x672 = INT32_MIN;
	static int32_t t167 = 635317707;

    t167 = (x669==((x670<=x671)>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x674 = INT16_MIN;
	static int16_t x675 = INT16_MAX;
	int8_t x676 = 20;
	static int32_t t168 = -2583723;

    t168 = (x673==((x674<=x675)>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = INT64_MAX;
	uint32_t x678 = UINT32_MAX;
	int16_t x680 = INT16_MIN;

    t169 = (x677==((x678<=x679)>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	volatile int16_t x682 = -1;
	static uint64_t x683 = 83LLU;
	uint8_t x684 = 14U;

    t170 = (x681==((x682<=x683)>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -1;
	int64_t x686 = INT64_MAX;
	int16_t x687 = -1;
	volatile int32_t t171 = 84725669;

    t171 = (x685==((x686<=x687)>x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x690 = 220281LL;
	int8_t x691 = -1;
	int32_t x692 = 11;
	static int32_t t172 = 2042;

    t172 = (x689==((x690<=x691)>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	int64_t x694 = INT64_MAX;
	int8_t x695 = -17;

    t173 = (x693==((x694<=x695)>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = UINT8_MAX;
	uint8_t x699 = UINT8_MAX;
	uint64_t x700 = 1085999496105283LLU;
	int32_t t174 = -4;

    t174 = (x697==((x698<=x699)>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x701 = UINT32_MAX;
	int64_t x702 = -1LL;
	uint64_t x704 = UINT64_MAX;

    t175 = (x701==((x702<=x703)>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = INT16_MIN;
	static uint8_t x706 = 0U;
	int64_t x707 = INT64_MAX;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t176 = 4;

    t176 = (x705==((x706<=x707)>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x709 = 11403U;
	static uint64_t x711 = 5771801LLU;
	int16_t x712 = 12376;
	static volatile int32_t t177 = 6;

    t177 = (x709==((x710<=x711)>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 3519U;
	static uint16_t x714 = 27251U;
	uint16_t x715 = UINT16_MAX;
	static int16_t x716 = -15152;
	int32_t t178 = -172560;

    t178 = (x713==((x714<=x715)>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -108;
	volatile uint8_t x718 = UINT8_MAX;
	static volatile int64_t x719 = INT64_MIN;

    t179 = (x717==((x718<=x719)>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 1334U;
	int64_t x722 = INT64_MAX;
	int32_t t180 = 1;

    t180 = (x721==((x722<=x723)>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = INT16_MIN;
	volatile int64_t x727 = -1LL;
	int32_t t181 = -10;

    t181 = (x725==((x726<=x727)>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = UINT16_MAX;
	uint8_t x731 = 1U;
	volatile int32_t t182 = -562;

    t182 = (x729==((x730<=x731)>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint32_t x733 = 987U;
	int32_t x734 = -11;
	uint16_t x735 = 1706U;
	uint32_t x736 = 2047U;

    t183 = (x733==((x734<=x735)>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x738 = 247U;
	int32_t t184 = 2;

    t184 = (x737==((x738<=x739)>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x741 = INT32_MAX;
	static uint8_t x742 = 3U;
	static uint8_t x743 = UINT8_MAX;
	int32_t x744 = -466628;
	static volatile int32_t t185 = 30;

    t185 = (x741==((x742<=x743)>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x745 = -1LL;
	uint16_t x746 = UINT16_MAX;
	uint16_t x748 = 97U;
	static volatile int32_t t186 = 460568;

    t186 = (x745==((x746<=x747)>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 73693U;
	uint64_t x751 = 287341825958802LLU;
	int32_t t187 = -32155830;

    t187 = (x749==((x750<=x751)>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MIN;
	volatile int8_t x756 = 24;

    t188 = (x753==((x754<=x755)>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x757 = UINT32_MAX;
	int8_t x758 = INT8_MAX;
	uint8_t x759 = UINT8_MAX;

    t189 = (x757==((x758<=x759)>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	static uint32_t x762 = UINT32_MAX;
	uint16_t x763 = 3U;
	int32_t x764 = -1;
	static volatile int32_t t190 = 30;

    t190 = (x761==((x762<=x763)>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	static volatile int32_t x768 = INT32_MIN;
	volatile int32_t t191 = 25279;

    t191 = (x765==((x766<=x767)>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -1;
	int16_t x771 = 1;
	uint32_t x772 = 31U;
	int32_t t192 = -39203;

    t192 = (x769==((x770<=x771)>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = INT64_MIN;
	int32_t x774 = -8;
	int16_t x775 = -715;
	int8_t x776 = INT8_MAX;
	int32_t t193 = -1;

    t193 = (x773==((x774<=x775)>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	int16_t x778 = INT16_MIN;
	int16_t x780 = 1;

    t194 = (x777==((x778<=x779)>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x782 = 19;
	int8_t x783 = -1;
	volatile int64_t x784 = -3375153LL;
	int32_t t195 = 648035;

    t195 = (x781==((x782<=x783)>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -2;
	static volatile int32_t x786 = 114081;
	int32_t x787 = -1;
	int32_t t196 = 14;

    t196 = (x785==((x786<=x787)>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -1;
	uint32_t x790 = 15266585U;
	int16_t x791 = -9;
	volatile uint32_t x792 = 3U;

    t197 = (x789==((x790<=x791)>x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -130;
	int16_t x795 = INT16_MIN;

    t198 = (x793==((x794<=x795)>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 159U;
	static volatile int8_t x798 = INT8_MAX;
	volatile int16_t x800 = 2480;
	volatile int32_t t199 = -243016;

    t199 = (x797==((x798<=x799)>x800));

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

