
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

static int32_t x1 = -1604131;
static uint32_t x4 = 1627488U;
static int32_t x6 = INT32_MIN;
static int8_t x7 = -1;
int8_t x16 = 0;
volatile int32_t t3 = -28398;
volatile int32_t t4 = 3;
uint32_t x21 = 565U;
int8_t x23 = -11;
int8_t x26 = INT8_MIN;
volatile int16_t x32 = INT16_MIN;
int32_t t9 = 20966;
uint8_t x43 = 0U;
static volatile int32_t t13 = 32;
volatile int32_t t14 = 10725;
static int64_t x65 = INT64_MIN;
volatile int32_t x68 = -1;
static uint32_t x80 = 6939U;
static int8_t x86 = 0;
volatile int32_t t21 = 257449045;
int32_t t22 = -7601;
int16_t x93 = 2;
static volatile int32_t x96 = INT32_MIN;
volatile uint16_t x99 = 250U;
static volatile uint8_t x102 = 31U;
int32_t t26 = -6134;
int16_t x111 = 141;
int32_t x112 = -5421;
int64_t x114 = -22626LL;
int32_t t29 = 2632207;
static uint64_t x121 = 21960212LLU;
volatile int16_t x127 = -45;
int32_t t31 = 10859057;
int64_t x130 = -1758621872914LL;
volatile int32_t t32 = -77071715;
static int8_t x133 = -1;
uint16_t x135 = UINT16_MAX;
static int16_t x137 = INT16_MAX;
volatile int16_t x140 = -1;
static int32_t t34 = -15;
uint16_t x143 = UINT16_MAX;
int32_t x146 = -3710960;
static int32_t x147 = -969945978;
int32_t t36 = 89791726;
volatile int32_t t37 = -238050;
static int16_t x158 = INT16_MIN;
int16_t x159 = INT16_MAX;
static int8_t x164 = 17;
int32_t t40 = -60043414;
int32_t x166 = -1;
int16_t x179 = INT16_MIN;
int16_t x180 = 1;
static int16_t x181 = 4;
uint64_t x183 = 116LLU;
int32_t t45 = -21;
uint32_t x185 = 13U;
int64_t x188 = INT64_MAX;
volatile int8_t x191 = -4;
int64_t x192 = INT64_MIN;
static int64_t x195 = INT64_MAX;
uint32_t x197 = 879695949U;
volatile uint8_t x199 = 0U;
volatile int32_t t49 = -103;
uint64_t x202 = 20085367LLU;
int8_t x210 = -1;
static int32_t x213 = INT32_MIN;
int16_t x214 = 267;
int8_t x215 = 35;
int32_t t53 = -846117104;
static int16_t x217 = 6;
static volatile uint64_t x218 = 606LLU;
int8_t x219 = INT8_MIN;
int16_t x220 = INT16_MIN;
uint16_t x222 = UINT16_MAX;
static uint8_t x224 = 0U;
int32_t t57 = 0;
volatile uint64_t x233 = 377103976162050LLU;
int8_t x237 = 0;
int32_t t59 = -3321504;
int32_t t60 = 21;
volatile uint64_t x246 = UINT64_MAX;
int32_t t61 = 434576;
uint64_t x250 = 49710883LLU;
static int8_t x252 = -1;
int32_t t63 = -7496969;
int32_t x257 = -1;
static volatile uint64_t x258 = 29912174219LLU;
int16_t x259 = INT16_MAX;
static int32_t x260 = -24662491;
volatile int16_t x264 = INT16_MAX;
static int16_t x266 = 1;
int8_t x271 = INT8_MIN;
uint32_t x273 = 24U;
int8_t x282 = -1;
static volatile int16_t x283 = -1;
int64_t x284 = INT64_MIN;
volatile int32_t t72 = 9540;
volatile int64_t x293 = INT64_MIN;
uint32_t x294 = 6U;
uint16_t x302 = UINT16_MAX;
int8_t x304 = -1;
int32_t t75 = -11;
uint32_t x312 = 709651U;
int16_t x326 = -2;
static int32_t t84 = 127;
uint8_t x342 = 21U;
volatile int32_t t85 = -17430;
static uint32_t x347 = 2522575U;
volatile uint64_t x349 = 9730993LLU;
int16_t x350 = -6;
int64_t x354 = 12LL;
int32_t t89 = -270;
int8_t x361 = INT8_MAX;
uint32_t x368 = UINT32_MAX;
int16_t x369 = -1;
int64_t x372 = 1LL;
uint16_t x375 = UINT16_MAX;
volatile int32_t t93 = -79042500;
volatile int16_t x379 = -1;
int64_t x381 = -1LL;
int8_t x392 = INT8_MIN;
int16_t x393 = -4601;
int8_t x395 = INT8_MIN;
int8_t x399 = INT8_MAX;
int32_t t99 = 22039843;
volatile int64_t x410 = -1LL;
int64_t x411 = 526928245584LL;
int16_t x412 = INT16_MAX;
int32_t t103 = 27124;
volatile uint8_t x418 = 47U;
int32_t t104 = 6615056;
int8_t x427 = -1;
uint32_t x428 = 124775539U;
int32_t t106 = -6941874;
int16_t x438 = INT16_MIN;
static int16_t x441 = -1;
int8_t x443 = INT8_MIN;
int32_t x449 = -19786027;
int32_t t112 = 16627609;
volatile int32_t x456 = INT32_MAX;
uint8_t x457 = 4U;
static int64_t x462 = 4001397470LL;
int32_t t117 = -13475084;
uint8_t x478 = 2U;
int32_t t121 = 12555970;
volatile uint64_t x489 = 6498535791095LLU;
uint32_t x491 = 1U;
int16_t x500 = INT16_MAX;
static volatile uint16_t x501 = UINT16_MAX;
volatile int16_t x505 = -1;
uint64_t x507 = 296124003312184516LLU;
int8_t x512 = 1;
uint16_t x514 = 11642U;
static uint64_t x520 = 4795350299LLU;
volatile int32_t t131 = 70486416;
volatile int8_t x542 = -10;
volatile int64_t x548 = INT64_MAX;
volatile int32_t t139 = 5;
int8_t x564 = 0;
uint64_t x566 = 150LLU;
int64_t x568 = INT64_MIN;
volatile int64_t x570 = -13130000333933590LL;
static int64_t x573 = -9LL;
int64_t x579 = -482343696LL;
static uint8_t x585 = 2U;
int8_t x587 = -1;
static uint16_t x601 = UINT16_MAX;
uint8_t x602 = UINT8_MAX;
volatile int32_t t150 = 1550;
static int8_t x605 = INT8_MIN;
uint64_t x608 = 550LLU;
volatile int32_t t151 = -1808;
int32_t x618 = -1;
volatile int32_t t154 = -3;
volatile int32_t t155 = -11;
int32_t t156 = -1844;
static int32_t x629 = INT32_MIN;
static volatile int64_t x634 = INT64_MIN;
volatile uint16_t x635 = UINT16_MAX;
int8_t x644 = -1;
volatile int32_t t162 = 3475578;
static int16_t x655 = INT16_MIN;
static int64_t x656 = -136137966674011LL;
int16_t x662 = INT16_MAX;
volatile uint8_t x663 = UINT8_MAX;
volatile uint64_t x682 = 3683771066LLU;
volatile uint32_t x686 = UINT32_MAX;
int32_t t171 = 49880004;
volatile uint32_t x691 = 2030308U;
uint64_t x693 = 29940833LLU;
static int64_t x694 = INT64_MAX;
int32_t x709 = INT32_MIN;
static int8_t x714 = 0;
volatile int64_t x716 = INT64_MIN;
uint16_t x717 = 20250U;
int32_t t179 = 6942;
int16_t x722 = 10940;
uint8_t x725 = 1U;
int32_t x729 = INT32_MIN;
static volatile uint8_t x734 = 93U;
uint8_t x745 = 3U;
int8_t x746 = 14;
static int32_t x748 = -1;
volatile uint32_t x758 = 18U;
int16_t x761 = -1;
int32_t t190 = -534;
volatile uint16_t x765 = UINT16_MAX;
int8_t x766 = 0;
int32_t t192 = -207;
uint32_t x775 = 6639U;
int64_t x776 = 913597249325218LL;
volatile int32_t t196 = -1;
int16_t x792 = INT16_MAX;


void f0(void) {
    	volatile int16_t x2 = INT16_MIN;
	volatile uint32_t x3 = 18U;
	volatile int32_t t0 = 377540;

    t0 = (x1>((x2<=x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int8_t x8 = -1;
	volatile int32_t t1 = -470296;

    t1 = (x5>((x6<=x7)*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -4784LL;
	int64_t x10 = -1LL;
	int8_t x11 = -1;
	int8_t x12 = -1;
	static volatile int32_t t2 = -23;

    t2 = (x9>((x10<=x11)*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 12U;
	uint64_t x14 = 552894262966LLU;
	int8_t x15 = INT8_MIN;

    t3 = (x13>((x14<=x15)*x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	static uint32_t x18 = UINT32_MAX;
	int8_t x19 = -1;
	int16_t x20 = INT16_MIN;

    t4 = (x17>((x18<=x19)*x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 4U;
	int32_t x24 = -1;
	int32_t t5 = 3013584;

    t5 = (x21>((x22<=x23)*x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = 51U;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 0U;
	int32_t t6 = 91860;

    t6 = (x25>((x26<=x27)*x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	int8_t x30 = INT8_MIN;
	int32_t x31 = 47484300;
	volatile int32_t t7 = 1907993;

    t7 = (x29>((x30<=x31)*x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MIN;
	static volatile int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 123876;

    t8 = (x33>((x34<=x35)*x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = 16808U;
	int32_t x39 = -100;
	static int8_t x40 = INT8_MIN;

    t9 = (x37>((x38<=x39)*x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MAX;
	volatile uint16_t x44 = 14743U;
	static int32_t t10 = 8042412;

    t10 = (x41>((x42<=x43)*x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MIN;
	uint16_t x46 = 24U;
	int64_t x47 = INT64_MIN;
	volatile int32_t x48 = INT32_MAX;
	static int32_t t11 = -4;

    t11 = (x45>((x46<=x47)*x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -504835096;
	int32_t x50 = INT32_MAX;
	int64_t x51 = -12057237912LL;
	int32_t x52 = -76265472;
	static volatile int32_t t12 = -177615;

    t12 = (x49>((x50<=x51)*x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	volatile int32_t x54 = -7;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;

    t13 = (x53>((x54<=x55)*x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -48;
	volatile int64_t x58 = -987376LL;
	volatile int64_t x59 = INT64_MIN;
	uint32_t x60 = UINT32_MAX;

    t14 = (x57>((x58<=x59)*x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	static int32_t x62 = INT32_MAX;
	int16_t x63 = INT16_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t15 = -351125;

    t15 = (x61>((x62<=x63)*x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = -3367;
	uint32_t x67 = UINT32_MAX;
	volatile int32_t t16 = 436;

    t16 = (x65>((x66<=x67)*x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 12;
	static int16_t x70 = -1;
	volatile int8_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -1070342;

    t17 = (x69>((x70<=x71)*x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	static int32_t x74 = 1;
	int64_t x75 = INT64_MAX;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = -15681055;

    t18 = (x73>((x74<=x75)*x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 1;
	int16_t x78 = INT16_MIN;
	static int32_t x79 = INT32_MIN;
	static int32_t t19 = 2407;

    t19 = (x77>((x78<=x79)*x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = 29499069998020LL;
	int64_t x82 = 66443726LL;
	int16_t x83 = INT16_MIN;
	volatile uint32_t x84 = 870U;
	volatile int32_t t20 = -8837707;

    t20 = (x81>((x82<=x83)*x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -324443LL;
	volatile int8_t x87 = INT8_MAX;
	int32_t x88 = -1;

    t21 = (x85>((x86<=x87)*x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 529439610231971LL;
	static int8_t x90 = 3;
	static int64_t x91 = -1LL;
	int8_t x92 = 7;

    t22 = (x89>((x90<=x91)*x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x94 = UINT64_MAX;
	int32_t x95 = 5311;
	static volatile int32_t t23 = 56029;

    t23 = (x93>((x94<=x95)*x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	int32_t x98 = 417;
	uint8_t x100 = 6U;
	static int32_t t24 = 2624387;

    t24 = (x97>((x98<=x99)*x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 363717872U;
	int8_t x103 = 0;
	uint8_t x104 = 2U;
	int32_t t25 = 2923;

    t25 = (x101>((x102<=x103)*x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 167;
	int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	volatile int16_t x108 = -49;

    t26 = (x105>((x106<=x107)*x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint8_t x109 = 1U;
	int64_t x110 = -151997268491LL;
	int32_t t27 = 4185970;

    t27 = (x109>((x110<=x111)*x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = INT8_MAX;
	uint32_t x115 = 31U;
	static int64_t x116 = INT64_MAX;
	static int32_t t28 = 1;

    t28 = (x113>((x114<=x115)*x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 3148U;
	uint8_t x120 = 1U;

    t29 = (x117>((x118<=x119)*x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x122 = 17U;
	uint8_t x123 = 3U;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -40;

    t30 = (x121>((x122<=x123)*x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = INT32_MIN;
	int32_t x126 = 8108;
	int16_t x128 = 1008;

    t31 = (x125>((x126<=x127)*x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -17115849;
	uint16_t x131 = 6707U;
	uint64_t x132 = UINT64_MAX;

    t32 = (x129>((x130<=x131)*x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = INT8_MIN;
	static uint64_t x136 = 130LLU;
	static volatile int32_t t33 = -876944791;

    t33 = (x133>((x134<=x135)*x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x138 = INT32_MIN;
	static int64_t x139 = INT64_MIN;

    t34 = (x137>((x138<=x139)*x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	int8_t x142 = -1;
	volatile int64_t x144 = INT64_MIN;
	int32_t t35 = 794;

    t35 = (x141>((x142<=x143)*x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 62;
	int16_t x148 = INT16_MIN;

    t36 = (x145>((x146<=x147)*x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x149 = 105U;
	int16_t x150 = INT16_MIN;
	int8_t x151 = 1;
	int32_t x152 = INT32_MIN;

    t37 = (x149>((x150<=x151)*x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = -34683122LL;
	uint32_t x154 = 831556U;
	uint32_t x155 = 64U;
	int8_t x156 = -1;
	int32_t t38 = -8708927;

    t38 = (x153>((x154<=x155)*x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = INT32_MIN;
	uint8_t x160 = 7U;
	volatile int32_t t39 = -61;

    t39 = (x157>((x158<=x159)*x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MIN;
	uint8_t x163 = UINT8_MAX;

    t40 = (x161>((x162<=x163)*x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = 1914;
	int16_t x167 = INT16_MAX;
	int8_t x168 = -31;
	static int32_t t41 = -1;

    t41 = (x165>((x166<=x167)*x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = INT8_MIN;
	volatile uint8_t x170 = 3U;
	static volatile uint32_t x171 = 2U;
	static int64_t x172 = INT64_MAX;
	volatile int32_t t42 = 224578547;

    t42 = (x169>((x170<=x171)*x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	uint64_t x174 = 835072814899412177LLU;
	static int32_t x175 = 4480;
	static int64_t x176 = -1LL;
	int32_t t43 = 30;

    t43 = (x173>((x174<=x175)*x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 2U;
	int32_t x178 = -5964574;
	int32_t t44 = -211077;

    t44 = (x177>((x178<=x179)*x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x182 = UINT16_MAX;
	int16_t x184 = -992;

    t45 = (x181>((x182<=x183)*x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x186 = INT8_MAX;
	int32_t x187 = INT32_MAX;
	static volatile int32_t t46 = -65663981;

    t46 = (x185>((x186<=x187)*x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 441U;
	volatile int64_t x190 = INT64_MAX;
	volatile int32_t t47 = 17415;

    t47 = (x189>((x190<=x191)*x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MIN;
	int16_t x196 = INT16_MAX;
	int32_t t48 = -254764;

    t48 = (x193>((x194<=x195)*x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x198 = INT8_MIN;
	uint8_t x200 = UINT8_MAX;

    t49 = (x197>((x198<=x199)*x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	volatile int8_t x203 = INT8_MIN;
	static int32_t x204 = -58;
	static volatile int32_t t50 = -6;

    t50 = (x201>((x202<=x203)*x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 13U;
	int32_t x206 = 329944;
	int8_t x207 = -1;
	int8_t x208 = INT8_MIN;
	int32_t t51 = -22228;

    t51 = (x205>((x206<=x207)*x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 2045551192197894LLU;
	uint16_t x211 = 51U;
	int64_t x212 = -1687879680236LL;
	volatile int32_t t52 = -24;

    t52 = (x209>((x210<=x211)*x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x216 = INT32_MAX;

    t53 = (x213>((x214<=x215)*x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t t54 = 35;

    t54 = (x217>((x218<=x219)*x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	static int32_t x223 = 88144503;
	static int32_t t55 = -24586892;

    t55 = (x221>((x222<=x223)*x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	int64_t x226 = INT64_MAX;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 1013591498;

    t56 = (x225>((x226<=x227)*x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 9U;
	uint16_t x230 = 4289U;
	volatile uint32_t x231 = 0U;
	int8_t x232 = -1;

    t57 = (x229>((x230<=x231)*x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = 127;
	uint64_t x235 = UINT64_MAX;
	volatile int32_t x236 = -546708;
	int32_t t58 = 3964;

    t58 = (x233>((x234<=x235)*x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x238 = 8012U;
	int8_t x239 = -40;
	static int16_t x240 = INT16_MIN;

    t59 = (x237>((x238<=x239)*x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = 0;
	uint16_t x242 = 55U;
	volatile int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;

    t60 = (x241>((x242<=x243)*x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = 0;
	volatile int32_t x247 = -480;
	static uint64_t x248 = 9LLU;

    t61 = (x245>((x246<=x247)*x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	int32_t t62 = -1;

    t62 = (x249>((x250<=x251)*x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	static int16_t x254 = INT16_MIN;
	uint8_t x255 = 16U;
	uint64_t x256 = 32662065939LLU;

    t63 = (x253>((x254<=x255)*x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t t64 = -4119445;

    t64 = (x257>((x258<=x259)*x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	int16_t x262 = -1;
	static volatile uint64_t x263 = 931118LLU;
	int32_t t65 = -938;

    t65 = (x261>((x262<=x263)*x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -829524732;
	volatile int64_t x267 = -2000513LL;
	volatile uint64_t x268 = 5608889LLU;
	int32_t t66 = -9715;

    t66 = (x265>((x266<=x267)*x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -229896680940LL;
	int64_t x270 = INT64_MAX;
	int16_t x272 = 1;
	static volatile int32_t t67 = -1921;

    t67 = (x269>((x270<=x271)*x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MAX;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = -5718917;

    t68 = (x273>((x274<=x275)*x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	int8_t x278 = 1;
	int32_t x279 = INT32_MIN;
	int64_t x280 = -197087LL;
	int32_t t69 = 125874802;

    t69 = (x277>((x278<=x279)*x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 4U;
	int32_t t70 = 1;

    t70 = (x281>((x282<=x283)*x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -61;
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MIN;
	uint32_t x288 = 46U;
	volatile int32_t t71 = -725663097;

    t71 = (x285>((x286<=x287)*x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	static uint64_t x290 = 252536811LLU;
	static int8_t x291 = INT8_MAX;
	uint64_t x292 = 3428317867LLU;

    t72 = (x289>((x290<=x291)*x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x295 = -19;
	int64_t x296 = INT64_MIN;
	int32_t t73 = -1297585;

    t73 = (x293>((x294<=x295)*x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	static volatile int8_t x298 = INT8_MAX;
	static volatile int32_t x299 = 3151883;
	int64_t x300 = INT64_MIN;
	static volatile int32_t t74 = 1664;

    t74 = (x297>((x298<=x299)*x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 44U;
	uint32_t x303 = 392298U;

    t75 = (x301>((x302<=x303)*x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 220582594U;
	static int64_t x306 = -5128337738190LL;
	int16_t x307 = -98;
	uint32_t x308 = UINT32_MAX;
	static int32_t t76 = 1;

    t76 = (x305>((x306<=x307)*x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	uint32_t x310 = UINT32_MAX;
	int64_t x311 = INT64_MAX;
	volatile int32_t t77 = 1798968;

    t77 = (x309>((x310<=x311)*x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MAX;
	static int16_t x314 = -1;
	volatile int32_t x315 = INT32_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -5414409;

    t78 = (x313>((x314<=x315)*x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -1;
	volatile uint8_t x318 = UINT8_MAX;
	static int16_t x319 = -1;
	volatile int32_t x320 = -174;
	static volatile int32_t t79 = -4374762;

    t79 = (x317>((x318<=x319)*x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x321 = INT8_MAX;
	uint8_t x322 = 3U;
	static int8_t x323 = 1;
	int64_t x324 = INT64_MIN;
	int32_t t80 = 18;

    t80 = (x321>((x322<=x323)*x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 160952U;
	static int64_t x327 = -1LL;
	int8_t x328 = -55;
	int32_t t81 = -1;

    t81 = (x325>((x326<=x327)*x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	volatile int8_t x330 = INT8_MAX;
	int64_t x331 = INT64_MIN;
	static int16_t x332 = INT16_MIN;
	int32_t t82 = -128243466;

    t82 = (x329>((x330<=x331)*x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	volatile int16_t x336 = -2;
	volatile int32_t t83 = 224;

    t83 = (x333>((x334<=x335)*x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	uint64_t x338 = UINT64_MAX;
	static volatile int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;

    t84 = (x337>((x338<=x339)*x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = -1;
	static int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;

    t85 = (x341>((x342<=x343)*x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = -409LL;
	static int16_t x346 = -2;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = -45119884;

    t86 = (x345>((x346<=x347)*x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x351 = -425823449LL;
	volatile uint32_t x352 = 15U;
	static volatile int32_t t87 = 1;

    t87 = (x349>((x350<=x351)*x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 0U;
	int64_t x355 = INT64_MIN;
	static volatile int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 0;

    t88 = (x353>((x354<=x355)*x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	volatile uint8_t x359 = 10U;
	volatile int32_t x360 = -1;

    t89 = (x357>((x358<=x359)*x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MIN;
	int8_t x364 = -1;
	static int32_t t90 = -19124;

    t90 = (x361>((x362<=x363)*x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x365 = 18U;
	int32_t x366 = INT32_MIN;
	static uint16_t x367 = 1U;
	int32_t t91 = 332386;

    t91 = (x365>((x366<=x367)*x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = INT32_MIN;
	static volatile uint32_t x371 = 1U;
	int32_t t92 = -73380768;

    t92 = (x369>((x370<=x371)*x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	uint16_t x374 = 1201U;
	int32_t x376 = -1;

    t93 = (x373>((x374<=x375)*x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 1;
	uint32_t x378 = 445874U;
	static uint64_t x380 = UINT64_MAX;
	static volatile int32_t t94 = -15;

    t94 = (x377>((x378<=x379)*x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	int16_t x384 = -1;
	int32_t t95 = 0;

    t95 = (x381>((x382<=x383)*x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -108599655978LL;
	static int32_t x386 = INT32_MIN;
	volatile int8_t x387 = INT8_MIN;
	int16_t x388 = -1407;
	static int32_t t96 = 80;

    t96 = (x385>((x386<=x387)*x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	uint16_t x390 = UINT16_MAX;
	int64_t x391 = INT64_MAX;
	volatile int32_t t97 = 1;

    t97 = (x389>((x390<=x391)*x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = -321;
	uint32_t x396 = 42119004U;
	volatile int32_t t98 = 47;

    t98 = (x393>((x394<=x395)*x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -10060503;
	static uint8_t x398 = 1U;
	uint16_t x400 = 6572U;

    t99 = (x397>((x398<=x399)*x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x401 = 183U;
	int64_t x402 = INT64_MIN;
	static uint16_t x403 = 8524U;
	static int8_t x404 = -20;
	volatile int32_t t100 = 0;

    t100 = (x401>((x402<=x403)*x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	uint32_t x406 = 875017U;
	uint32_t x407 = UINT32_MAX;
	int64_t x408 = INT64_MIN;
	volatile int32_t t101 = 50080576;

    t101 = (x405>((x406<=x407)*x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	int32_t t102 = 13395;

    t102 = (x409>((x410<=x411)*x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x413 = 5976153U;
	uint16_t x414 = 16U;
	static volatile int64_t x415 = 42721946786128553LL;
	static volatile int64_t x416 = INT64_MIN;

    t103 = (x413>((x414<=x415)*x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MAX;
	int8_t x419 = INT8_MAX;
	uint8_t x420 = UINT8_MAX;

    t104 = (x417>((x418<=x419)*x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MAX;
	uint16_t x422 = 11U;
	volatile int16_t x423 = INT16_MIN;
	int64_t x424 = INT64_MIN;
	static int32_t t105 = 53;

    t105 = (x421>((x422<=x423)*x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = -148761908062LL;
	int8_t x426 = -1;

    t106 = (x425>((x426<=x427)*x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x429 = 1672U;
	int64_t x430 = INT64_MIN;
	volatile int8_t x431 = -1;
	int8_t x432 = INT8_MAX;
	volatile int32_t t107 = 11;

    t107 = (x429>((x430<=x431)*x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 7359U;
	volatile uint64_t x434 = UINT64_MAX;
	int16_t x435 = INT16_MAX;
	uint32_t x436 = 18990U;
	volatile int32_t t108 = 40;

    t108 = (x433>((x434<=x435)*x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x437 = -3LL;
	static uint8_t x439 = 127U;
	uint16_t x440 = UINT16_MAX;
	static int32_t t109 = -44168;

    t109 = (x437>((x438<=x439)*x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x442 = 6U;
	static volatile int64_t x444 = INT64_MAX;
	static int32_t t110 = 526;

    t110 = (x441>((x442<=x443)*x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MAX;
	static volatile int32_t x446 = INT32_MIN;
	volatile int32_t x447 = INT32_MIN;
	volatile uint32_t x448 = 435634U;
	volatile int32_t t111 = -68588030;

    t111 = (x445>((x446<=x447)*x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x450 = -29;
	volatile uint16_t x451 = UINT16_MAX;
	static uint64_t x452 = 223946693815531LLU;

    t112 = (x449>((x450<=x451)*x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = INT16_MAX;
	static int32_t x454 = -18045962;
	int8_t x455 = -3;
	int32_t t113 = -1609;

    t113 = (x453>((x454<=x455)*x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x458 = 4295U;
	uint64_t x459 = UINT64_MAX;
	static int16_t x460 = INT16_MIN;
	static volatile int32_t t114 = 126;

    t114 = (x457>((x458<=x459)*x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MAX;
	uint8_t x463 = 114U;
	int16_t x464 = 3;
	static int32_t t115 = -79513;

    t115 = (x461>((x462<=x463)*x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 20U;
	int32_t x466 = 10;
	int64_t x467 = -1722033907570385361LL;
	int64_t x468 = -1LL;
	int32_t t116 = 140;

    t116 = (x465>((x466<=x467)*x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	static uint32_t x470 = 548U;
	static int8_t x471 = INT8_MIN;
	int8_t x472 = INT8_MAX;

    t117 = (x469>((x470<=x471)*x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -1LL;
	uint32_t x474 = 324387992U;
	uint32_t x475 = 2U;
	int16_t x476 = INT16_MIN;
	int32_t t118 = 1029257800;

    t118 = (x473>((x474<=x475)*x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = UINT64_MAX;
	static uint8_t x479 = UINT8_MAX;
	uint16_t x480 = 6998U;
	int32_t t119 = -132208700;

    t119 = (x477>((x478<=x479)*x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x481 = 3237748U;
	static int16_t x482 = INT16_MIN;
	int32_t x483 = INT32_MAX;
	volatile int16_t x484 = -61;
	volatile int32_t t120 = -8;

    t120 = (x481>((x482<=x483)*x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	volatile int8_t x486 = INT8_MAX;
	volatile uint64_t x487 = 719LLU;
	uint32_t x488 = 18588903U;

    t121 = (x485>((x486<=x487)*x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x490 = INT8_MIN;
	static volatile uint8_t x492 = UINT8_MAX;
	volatile int32_t t122 = 1;

    t122 = (x489>((x490<=x491)*x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = INT16_MIN;
	int32_t x494 = -1;
	static uint64_t x495 = UINT64_MAX;
	uint32_t x496 = 6U;
	int32_t t123 = -6457006;

    t123 = (x493>((x494<=x495)*x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int8_t x498 = INT8_MIN;
	uint64_t x499 = 216786176471267LLU;
	volatile int32_t t124 = 2123378;

    t124 = (x497>((x498<=x499)*x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x502 = 575101;
	int8_t x503 = 26;
	static volatile int32_t x504 = -168;
	int32_t t125 = -1;

    t125 = (x501>((x502<=x503)*x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = -1;
	int16_t x508 = 0;
	volatile int32_t t126 = -997;

    t126 = (x505>((x506<=x507)*x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	int16_t x510 = -717;
	int64_t x511 = INT64_MIN;
	int32_t t127 = 5945670;

    t127 = (x509>((x510<=x511)*x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = 85;
	int16_t x515 = INT16_MIN;
	uint32_t x516 = 233U;
	static int32_t t128 = -1659696;

    t128 = (x513>((x514<=x515)*x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x517 = 25U;
	uint16_t x518 = UINT16_MAX;
	int8_t x519 = 12;
	volatile int32_t t129 = -1926149;

    t129 = (x517>((x518<=x519)*x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = 5119514;
	static volatile int32_t x522 = INT32_MIN;
	static int8_t x523 = 0;
	volatile uint16_t x524 = 9272U;
	volatile int32_t t130 = -17915992;

    t130 = (x521>((x522<=x523)*x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = -22;
	static int64_t x526 = 901707257207LL;
	static int64_t x527 = -1LL;
	volatile int16_t x528 = -1;

    t131 = (x525>((x526<=x527)*x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = -1LL;
	int16_t x530 = INT16_MIN;
	int64_t x531 = -556LL;
	int64_t x532 = -18LL;
	volatile int32_t t132 = 973;

    t132 = (x529>((x530<=x531)*x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x533 = INT32_MIN;
	uint64_t x534 = UINT64_MAX;
	int32_t x535 = -22333554;
	int8_t x536 = INT8_MIN;
	volatile int32_t t133 = 14;

    t133 = (x533>((x534<=x535)*x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = INT8_MAX;
	volatile int8_t x538 = INT8_MAX;
	volatile uint64_t x539 = UINT64_MAX;
	volatile uint64_t x540 = UINT64_MAX;
	volatile int32_t t134 = 53114017;

    t134 = (x537>((x538<=x539)*x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 1;
	static uint8_t x543 = 75U;
	int8_t x544 = INT8_MIN;
	int32_t t135 = 7597;

    t135 = (x541>((x542<=x543)*x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = -1;
	static volatile uint64_t x546 = 69924467308LLU;
	static int8_t x547 = INT8_MIN;
	volatile int32_t t136 = 2925447;

    t136 = (x545>((x546<=x547)*x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint64_t x549 = 1153LLU;
	int64_t x550 = INT64_MAX;
	int16_t x551 = INT16_MIN;
	static int64_t x552 = INT64_MIN;
	volatile int32_t t137 = 303;

    t137 = (x549>((x550<=x551)*x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = -114510120;
	static int64_t x554 = 20317228665132LL;
	static int8_t x555 = -11;
	int16_t x556 = INT16_MIN;
	static int32_t t138 = 14;

    t138 = (x553>((x554<=x555)*x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MAX;
	uint64_t x558 = 216964479LLU;
	uint8_t x559 = 9U;
	int32_t x560 = INT32_MIN;

    t139 = (x557>((x558<=x559)*x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = -1LL;
	static int32_t x562 = -1;
	uint8_t x563 = 31U;
	volatile int32_t t140 = -448490;

    t140 = (x561>((x562<=x563)*x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint32_t x567 = 1U;
	volatile int32_t t141 = 2080321;

    t141 = (x565>((x566<=x567)*x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	int64_t x571 = INT64_MIN;
	int8_t x572 = INT8_MIN;
	int32_t t142 = -802864;

    t142 = (x569>((x570<=x571)*x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = 99833733279625LL;
	volatile int32_t x575 = INT32_MIN;
	int16_t x576 = -22;
	volatile int32_t t143 = 18577;

    t143 = (x573>((x574<=x575)*x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x577 = UINT16_MAX;
	static volatile uint16_t x578 = 765U;
	int64_t x580 = 206236426318016795LL;
	int32_t t144 = -8733297;

    t144 = (x577>((x578<=x579)*x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	static int8_t x582 = INT8_MIN;
	volatile uint64_t x583 = 43LLU;
	volatile uint8_t x584 = UINT8_MAX;
	int32_t t145 = -1445;

    t145 = (x581>((x582<=x583)*x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = -1LL;
	int32_t x588 = INT32_MAX;
	int32_t t146 = 0;

    t146 = (x585>((x586<=x587)*x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x589 = -1;
	static int64_t x590 = -1LL;
	uint16_t x591 = UINT16_MAX;
	int64_t x592 = INT64_MAX;
	int32_t t147 = -335435536;

    t147 = (x589>((x590<=x591)*x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	volatile uint16_t x594 = UINT16_MAX;
	uint8_t x595 = 16U;
	volatile uint64_t x596 = 6638LLU;
	static volatile int32_t t148 = -7;

    t148 = (x593>((x594<=x595)*x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	int8_t x598 = INT8_MIN;
	volatile int64_t x599 = -85133LL;
	uint32_t x600 = 1544203573U;
	int32_t t149 = 119137382;

    t149 = (x597>((x598<=x599)*x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x603 = INT32_MIN;
	uint8_t x604 = 0U;

    t150 = (x601>((x602<=x603)*x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x606 = INT8_MIN;
	int32_t x607 = INT32_MAX;

    t151 = (x605>((x606<=x607)*x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1LL;
	int8_t x610 = 1;
	int32_t x611 = -1;
	static int16_t x612 = INT16_MAX;
	volatile int32_t t152 = 2177759;

    t152 = (x609>((x610<=x611)*x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	int64_t x614 = -8988372LL;
	volatile int32_t x615 = INT32_MAX;
	static int64_t x616 = INT64_MAX;
	int32_t t153 = -1059861;

    t153 = (x613>((x614<=x615)*x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = -31;
	volatile uint32_t x619 = 0U;
	static uint64_t x620 = UINT64_MAX;

    t154 = (x617>((x618<=x619)*x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = 121588689LL;
	int32_t x622 = 170716;
	int64_t x623 = 2888201908493215LL;
	int16_t x624 = INT16_MAX;

    t155 = (x621>((x622<=x623)*x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -1;
	int16_t x626 = INT16_MIN;
	static int64_t x627 = 15969260LL;
	int32_t x628 = INT32_MIN;

    t156 = (x625>((x626<=x627)*x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x630 = UINT64_MAX;
	volatile int64_t x631 = -18356LL;
	volatile uint16_t x632 = 8U;
	volatile int32_t t157 = -65;

    t157 = (x629>((x630<=x631)*x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	volatile uint8_t x636 = 0U;
	int32_t t158 = -2745;

    t158 = (x633>((x634<=x635)*x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 233U;
	uint8_t x638 = 2U;
	static volatile int64_t x639 = INT64_MIN;
	int32_t x640 = INT32_MIN;
	int32_t t159 = -172;

    t159 = (x637>((x638<=x639)*x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = -1;
	int32_t x642 = -396870703;
	uint64_t x643 = 3766060381LLU;
	volatile int32_t t160 = 1;

    t160 = (x641>((x642<=x643)*x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	static uint64_t x646 = 1035109LLU;
	int64_t x647 = 0LL;
	int64_t x648 = INT64_MIN;
	int32_t t161 = -7535342;

    t161 = (x645>((x646<=x647)*x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x649 = 2U;
	int8_t x650 = 0;
	uint16_t x651 = 13873U;
	uint64_t x652 = 110212LLU;

    t162 = (x649>((x650<=x651)*x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	int64_t x654 = INT64_MIN;
	volatile int32_t t163 = 6972;

    t163 = (x653>((x654<=x655)*x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	static uint32_t x658 = UINT32_MAX;
	static int64_t x659 = 1506094LL;
	static volatile uint8_t x660 = UINT8_MAX;
	volatile int32_t t164 = 4049;

    t164 = (x657>((x658<=x659)*x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = INT64_MIN;
	volatile int16_t x664 = 15193;
	int32_t t165 = 7761;

    t165 = (x661>((x662<=x663)*x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 0U;
	uint64_t x666 = UINT64_MAX;
	int64_t x667 = 390066332339LL;
	int8_t x668 = INT8_MAX;
	int32_t t166 = -9;

    t166 = (x665>((x666<=x667)*x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = -1;
	int8_t x670 = 0;
	int8_t x671 = -1;
	uint8_t x672 = UINT8_MAX;
	static int32_t t167 = 177;

    t167 = (x669>((x670<=x671)*x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 711492U;
	static uint8_t x674 = 1U;
	int32_t x675 = INT32_MIN;
	volatile int64_t x676 = INT64_MIN;
	int32_t t168 = -1009548912;

    t168 = (x673>((x674<=x675)*x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = UINT64_MAX;
	uint32_t x678 = 1U;
	static int16_t x679 = 1;
	int8_t x680 = INT8_MAX;
	int32_t t169 = -7983047;

    t169 = (x677>((x678<=x679)*x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 501466885202LLU;
	volatile uint64_t x683 = 23702LLU;
	uint8_t x684 = UINT8_MAX;
	static volatile int32_t t170 = -1;

    t170 = (x681>((x682<=x683)*x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x685 = UINT16_MAX;
	uint16_t x687 = UINT16_MAX;
	static int32_t x688 = -1;

    t171 = (x685>((x686<=x687)*x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = -1LL;
	uint32_t x690 = UINT32_MAX;
	int64_t x692 = INT64_MIN;
	int32_t t172 = -691453598;

    t172 = (x689>((x690<=x691)*x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x695 = 739U;
	int32_t x696 = INT32_MIN;
	int32_t t173 = -3394;

    t173 = (x693>((x694<=x695)*x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MAX;
	int16_t x698 = -13;
	uint16_t x699 = 1039U;
	int8_t x700 = 5;
	volatile int32_t t174 = 33614876;

    t174 = (x697>((x698<=x699)*x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 3754056277LLU;
	int64_t x702 = INT64_MAX;
	static int16_t x703 = INT16_MIN;
	static int8_t x704 = INT8_MAX;
	static int32_t t175 = -2217205;

    t175 = (x701>((x702<=x703)*x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 285052U;
	uint8_t x706 = 113U;
	int8_t x707 = 0;
	volatile int64_t x708 = 21578426741138494LL;
	static int32_t t176 = 914186;

    t176 = (x705>((x706<=x707)*x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x710 = INT16_MIN;
	int8_t x711 = INT8_MAX;
	static volatile int16_t x712 = -1;
	volatile int32_t t177 = 52510;

    t177 = (x709>((x710<=x711)*x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x713 = -4;
	int64_t x715 = -1LL;
	volatile int32_t t178 = 1044906709;

    t178 = (x713>((x714<=x715)*x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x718 = UINT8_MAX;
	static uint64_t x719 = UINT64_MAX;
	static int16_t x720 = -1;

    t179 = (x717>((x718<=x719)*x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x721 = 23U;
	int8_t x723 = INT8_MAX;
	static uint32_t x724 = 1U;
	int32_t t180 = 4773565;

    t180 = (x721>((x722<=x723)*x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = -33;
	int8_t x727 = -1;
	int8_t x728 = 16;
	volatile int32_t t181 = -2783;

    t181 = (x725>((x726<=x727)*x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x730 = 950U;
	int32_t x731 = -1;
	static uint64_t x732 = 521604LLU;
	volatile int32_t t182 = -43540;

    t182 = (x729>((x730<=x731)*x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	uint64_t x735 = 12441968LLU;
	static uint8_t x736 = UINT8_MAX;
	volatile int32_t t183 = 0;

    t183 = (x733>((x734<=x735)*x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x737 = INT16_MIN;
	int16_t x738 = INT16_MAX;
	static uint32_t x739 = 16U;
	int8_t x740 = INT8_MIN;
	int32_t t184 = 11562;

    t184 = (x737>((x738<=x739)*x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = -1LL;
	int8_t x742 = INT8_MIN;
	uint64_t x743 = 250783043LLU;
	int16_t x744 = INT16_MIN;
	volatile int32_t t185 = -183845262;

    t185 = (x741>((x742<=x743)*x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x747 = 176U;
	volatile int32_t t186 = 1;

    t186 = (x745>((x746<=x747)*x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x749 = 19;
	int8_t x750 = -13;
	uint16_t x751 = 26U;
	int32_t x752 = -181;
	int32_t t187 = -96;

    t187 = (x749>((x750<=x751)*x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	int32_t x754 = -1;
	int64_t x755 = -102LL;
	int64_t x756 = INT64_MIN;
	volatile int32_t t188 = -281688;

    t188 = (x753>((x754<=x755)*x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = -18;
	uint8_t x759 = 2U;
	int8_t x760 = INT8_MAX;
	int32_t t189 = -54262;

    t189 = (x757>((x758<=x759)*x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x762 = UINT8_MAX;
	static int8_t x763 = INT8_MAX;
	uint64_t x764 = 7807844LLU;

    t190 = (x761>((x762<=x763)*x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x767 = -8228;
	int64_t x768 = -11419LL;
	int32_t t191 = 642;

    t191 = (x765>((x766<=x767)*x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = 1;
	static int8_t x770 = INT8_MIN;
	int32_t x771 = INT32_MAX;
	int8_t x772 = 1;

    t192 = (x769>((x770<=x771)*x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	static volatile int64_t x774 = INT64_MIN;
	volatile int32_t t193 = -412;

    t193 = (x773>((x774<=x775)*x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MIN;
	volatile int64_t x778 = 855491719126LL;
	static volatile int64_t x779 = INT64_MIN;
	uint8_t x780 = 12U;
	volatile int32_t t194 = -150057750;

    t194 = (x777>((x778<=x779)*x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x781 = INT32_MIN;
	int32_t x782 = INT32_MIN;
	static int64_t x783 = INT64_MAX;
	int64_t x784 = INT64_MIN;
	int32_t t195 = -4;

    t195 = (x781>((x782<=x783)*x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = -23476565893LL;
	int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MAX;
	int16_t x788 = 126;

    t196 = (x785>((x786<=x787)*x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MAX;
	static int8_t x790 = 0;
	int16_t x791 = 62;
	static volatile int32_t t197 = -74;

    t197 = (x789>((x790<=x791)*x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x793 = 3053U;
	uint64_t x794 = UINT64_MAX;
	static int64_t x795 = INT64_MAX;
	volatile int8_t x796 = 1;
	volatile int32_t t198 = 10759;

    t198 = (x793>((x794<=x795)*x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = UINT64_MAX;
	volatile int64_t x798 = 416991LL;
	int32_t x799 = INT32_MIN;
	uint64_t x800 = 215992942350LLU;
	int32_t t199 = 0;

    t199 = (x797>((x798<=x799)*x800));

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

