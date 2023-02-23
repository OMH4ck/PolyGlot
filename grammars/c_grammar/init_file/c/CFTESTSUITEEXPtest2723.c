
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

static volatile int32_t x2 = 0;
int16_t x3 = -1;
volatile int8_t x7 = INT8_MIN;
static volatile uint8_t x12 = 3U;
volatile int16_t x18 = -58;
volatile int32_t x19 = INT32_MIN;
int16_t x20 = INT16_MIN;
volatile int32_t t4 = 14;
int64_t x21 = -4099937882LL;
volatile int32_t t5 = -236;
static int64_t x29 = INT64_MIN;
int32_t t7 = 9605952;
int16_t x33 = INT16_MAX;
int32_t t8 = -407;
volatile uint64_t x38 = UINT64_MAX;
static int16_t x46 = 1;
int16_t x47 = 210;
int32_t x49 = INT32_MIN;
volatile int32_t t12 = 30933814;
int16_t x55 = INT16_MIN;
volatile int8_t x61 = 19;
uint16_t x62 = UINT16_MAX;
int8_t x67 = -1;
uint8_t x74 = 0U;
volatile int8_t x76 = -1;
int32_t t18 = 2688734;
uint32_t x78 = 490727742U;
int64_t x87 = INT64_MIN;
int16_t x90 = INT16_MIN;
int64_t x97 = INT64_MIN;
uint64_t x100 = UINT64_MAX;
uint8_t x111 = UINT8_MAX;
int8_t x114 = 16;
uint8_t x116 = UINT8_MAX;
uint64_t x130 = UINT64_MAX;
uint16_t x132 = UINT16_MAX;
int32_t x138 = INT32_MAX;
int8_t x140 = 0;
static uint32_t x144 = 812U;
int64_t x156 = 723529838705502115LL;
int32_t t38 = -8;
volatile int64_t x159 = INT64_MIN;
uint64_t x165 = 29382LLU;
static int64_t x166 = -6134LL;
uint64_t x167 = 38485092LLU;
int16_t x169 = INT16_MAX;
static int16_t x172 = INT16_MIN;
uint64_t x184 = 28LLU;
int32_t t45 = -23;
uint32_t x186 = 251014975U;
int32_t x192 = 4054;
static uint16_t x197 = 12713U;
int16_t x204 = INT16_MAX;
static uint64_t x211 = UINT64_MAX;
volatile int32_t t52 = -1231713;
int8_t x220 = INT8_MAX;
static int8_t x221 = INT8_MAX;
int64_t x222 = INT64_MAX;
uint64_t x224 = 223174LLU;
static int8_t x227 = -15;
int32_t t56 = 341068196;
static volatile int32_t t57 = -1669;
int8_t x233 = INT8_MIN;
int64_t x235 = 1077LL;
static int32_t x239 = 123404;
int32_t x244 = INT32_MIN;
int64_t x246 = INT64_MIN;
static volatile int32_t t63 = -5756233;
uint8_t x263 = 59U;
int64_t x265 = 1LL;
static int8_t x270 = -1;
int8_t x275 = INT8_MIN;
uint64_t x276 = UINT64_MAX;
volatile uint64_t x281 = 66116213029411335LLU;
int32_t t70 = -1603541;
static int8_t x288 = INT8_MIN;
volatile int64_t x290 = -1LL;
int64_t x292 = INT64_MIN;
int16_t x296 = 10;
int8_t x297 = -1;
int32_t x299 = INT32_MAX;
static uint32_t x302 = UINT32_MAX;
uint8_t x305 = 11U;
int16_t x313 = INT16_MIN;
int16_t x314 = INT16_MIN;
int16_t x316 = -1;
static int32_t t80 = -35224;
int8_t x330 = -3;
static int32_t x333 = INT32_MAX;
static uint64_t x337 = 891998587LLU;
int64_t x343 = -1LL;
int32_t t85 = -3007;
static int32_t x346 = 295;
int64_t x347 = -1LL;
int16_t x355 = INT16_MIN;
uint16_t x362 = 0U;
uint8_t x375 = UINT8_MAX;
volatile int64_t x378 = -1LL;
volatile uint16_t x379 = 90U;
static volatile uint64_t x384 = UINT64_MAX;
int16_t x386 = 1;
static volatile int32_t t96 = 36;
int8_t x392 = INT8_MIN;
static uint32_t x394 = 33760258U;
static volatile int16_t x407 = -1;
static int64_t x411 = INT64_MIN;
uint64_t x422 = 12290807167368LLU;
int32_t t105 = -1;
int8_t x429 = -1;
int32_t t108 = 212;
static volatile int16_t x439 = INT16_MIN;
int64_t x444 = INT64_MIN;
int16_t x450 = INT16_MIN;
static int32_t x451 = -838;
static volatile int32_t t113 = 1660;
uint32_t x457 = UINT32_MAX;
uint8_t x473 = UINT8_MAX;
uint64_t x481 = 2014678942038LLU;
volatile int32_t t121 = 3;
int8_t x496 = 3;
int16_t x500 = 13;
volatile int8_t x501 = 1;
int32_t x512 = -241635104;
uint64_t x516 = 34799677LLU;
static volatile int32_t t129 = -21262;
static int64_t x523 = -3LL;
int32_t x525 = -1;
volatile uint16_t x526 = 687U;
static volatile uint32_t x531 = UINT32_MAX;
static int64_t x547 = -1LL;
int8_t x558 = INT8_MAX;
volatile int64_t x561 = 1058325281LL;
volatile int64_t x569 = INT64_MIN;
static int32_t x572 = INT32_MIN;
volatile int64_t x583 = INT64_MIN;
static int8_t x595 = INT8_MIN;
volatile int32_t t148 = 6;
int64_t x597 = INT64_MIN;
int32_t x598 = -18;
int16_t x603 = 240;
static int8_t x609 = INT8_MIN;
static int16_t x611 = INT16_MIN;
static int16_t x617 = -1;
static int8_t x618 = -7;
uint32_t x621 = UINT32_MAX;
int8_t x623 = INT8_MIN;
volatile int64_t x630 = 12785703LL;
static int8_t x649 = INT8_MIN;
static int16_t x655 = INT16_MAX;
int16_t x659 = INT16_MAX;
uint8_t x660 = 19U;
static uint16_t x662 = 23U;
int32_t t165 = 1;
int8_t x665 = -1;
int64_t x667 = 63LL;
uint8_t x670 = UINT8_MAX;
int32_t x672 = -84185605;
static int16_t x674 = -1;
int32_t x678 = -203;
volatile int32_t t169 = -3124184;
static uint32_t x682 = 20U;
int8_t x687 = 25;
static int64_t x688 = -1LL;
int8_t x690 = INT8_MIN;
int64_t x695 = INT64_MIN;
static uint64_t x696 = 13990021687621950LLU;
static int16_t x699 = INT16_MIN;
static int8_t x700 = INT8_MIN;
volatile int32_t t174 = 7;
int64_t x702 = -2239219LL;
uint16_t x707 = 7376U;
static uint32_t x715 = UINT32_MAX;
int8_t x722 = INT8_MAX;
int64_t x731 = INT64_MAX;
int32_t x732 = 2;
volatile int16_t x733 = INT16_MIN;
uint32_t x738 = UINT32_MAX;
static int8_t x739 = -29;
uint8_t x746 = 3U;
int64_t x750 = INT64_MIN;
int32_t x752 = INT32_MAX;
int64_t x759 = 1364514LL;
uint32_t x760 = 2U;
uint8_t x761 = 30U;
volatile int32_t t190 = 46;
volatile int64_t x778 = INT64_MIN;
static uint8_t x781 = 11U;
static uint16_t x782 = UINT16_MAX;
uint8_t x791 = UINT8_MAX;
int8_t x792 = INT8_MAX;
static int32_t t197 = 27;
int8_t x795 = 1;
uint64_t x797 = 165394LLU;


void f0(void) {
    	volatile uint16_t x1 = 398U;
	volatile uint64_t x4 = 526LLU;
	int32_t t0 = 516244822;

    t0 = (x1!=((x2^x3)|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x5 = INT64_MIN;
	int32_t x6 = INT32_MAX;
	int16_t x8 = -52;
	volatile int32_t t1 = 1941376;

    t1 = (x5!=((x6^x7)|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -8354129173286227LL;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 67U;
	volatile int32_t t2 = 66204613;

    t2 = (x9!=((x10^x11)|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int8_t x14 = -1;
	static int64_t x15 = 23286727654706524LL;
	uint32_t x16 = 248576U;
	int32_t t3 = 100215;

    t3 = (x13!=((x14^x15)|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = 112;

    t4 = (x17!=((x18^x19)|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x22 = 462LLU;
	static int64_t x23 = INT64_MIN;
	int64_t x24 = -1LL;

    t5 = (x21!=((x22^x23)|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	uint8_t x26 = 3U;
	int8_t x27 = -1;
	volatile int16_t x28 = -1;
	volatile int32_t t6 = 10248;

    t6 = (x25!=((x26^x27)|x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MIN;
	uint64_t x31 = 2509309501489504477LLU;
	static int8_t x32 = -1;

    t7 = (x29!=((x30^x31)|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = -5725045;
	volatile int8_t x35 = INT8_MIN;
	uint16_t x36 = UINT16_MAX;

    t8 = (x33!=((x34^x35)|x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x37 = UINT8_MAX;
	static volatile uint64_t x39 = UINT64_MAX;
	uint64_t x40 = UINT64_MAX;
	static int32_t t9 = 281811913;

    t9 = (x37!=((x38^x39)|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint32_t x42 = 345672U;
	int64_t x43 = INT64_MIN;
	int64_t x44 = -1LL;
	static volatile int32_t t10 = -774347;

    t10 = (x41!=((x42^x43)|x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = -1;
	static int64_t x48 = INT64_MIN;
	int32_t t11 = 8261;

    t11 = (x45!=((x46^x47)|x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = -59744;
	int16_t x51 = -1;
	int64_t x52 = INT64_MIN;

    t12 = (x49!=((x50^x51)|x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 48864392LLU;
	int16_t x54 = -1;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -57990394;

    t13 = (x53!=((x54^x55)|x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	static volatile int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MAX;
	int64_t x60 = 587201390707455742LL;
	static int32_t t14 = 16040;

    t14 = (x57!=((x58^x59)|x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x63 = -17;
	uint16_t x64 = 59U;
	int32_t t15 = -150;

    t15 = (x61!=((x62^x63)|x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	static int16_t x66 = INT16_MIN;
	static int16_t x68 = 0;
	static int32_t t16 = -887821303;

    t16 = (x65!=((x66^x67)|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MAX;
	uint8_t x70 = UINT8_MAX;
	int16_t x71 = -6;
	int32_t x72 = -1;
	int32_t t17 = -67117;

    t17 = (x69!=((x70^x71)|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 7U;
	static volatile int32_t x75 = INT32_MIN;

    t18 = (x73!=((x74^x75)|x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -47908415448880030LL;
	static uint64_t x79 = UINT64_MAX;
	static int16_t x80 = INT16_MIN;
	int32_t t19 = -140;

    t19 = (x77!=((x78^x79)|x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MAX;
	uint16_t x82 = 1U;
	static int32_t x83 = INT32_MAX;
	uint32_t x84 = UINT32_MAX;
	static int32_t t20 = -1;

    t20 = (x81!=((x82^x83)|x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MIN;
	int16_t x86 = -1;
	int64_t x88 = -64LL;
	volatile int32_t t21 = 272150015;

    t21 = (x85!=((x86^x87)|x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = -15;
	volatile int8_t x91 = 0;
	uint64_t x92 = 11841342896LLU;
	static volatile int32_t t22 = -282;

    t22 = (x89!=((x90^x91)|x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x93 = INT32_MIN;
	uint8_t x94 = 5U;
	uint16_t x95 = UINT16_MAX;
	uint16_t x96 = 12762U;
	volatile int32_t t23 = -30;

    t23 = (x93!=((x94^x95)|x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x98 = 10U;
	static int64_t x99 = 9686588835LL;
	volatile int32_t t24 = 0;

    t24 = (x97!=((x98^x99)|x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -183;
	volatile int32_t x102 = -1;
	volatile int8_t x103 = 31;
	static int64_t x104 = INT64_MIN;
	static int32_t t25 = -431;

    t25 = (x101!=((x102^x103)|x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = 0;
	int32_t x106 = -1;
	volatile int32_t x107 = INT32_MAX;
	int8_t x108 = INT8_MAX;
	int32_t t26 = 157293;

    t26 = (x105!=((x106^x107)|x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x109 = 17LLU;
	uint64_t x110 = UINT64_MAX;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -111956;

    t27 = (x109!=((x110^x111)|x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	int16_t x115 = INT16_MIN;
	volatile int32_t t28 = 31328;

    t28 = (x113!=((x114^x115)|x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	static int8_t x118 = INT8_MIN;
	volatile int64_t x119 = 687059LL;
	uint32_t x120 = 41U;
	static volatile int32_t t29 = -30389530;

    t29 = (x117!=((x118^x119)|x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	volatile int32_t x122 = 1637498;
	static uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MIN;
	volatile int32_t t30 = 2;

    t30 = (x121!=((x122^x123)|x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	volatile int32_t x126 = -1;
	static uint8_t x127 = UINT8_MAX;
	int16_t x128 = -1;
	static int32_t t31 = 34;

    t31 = (x125!=((x126^x127)|x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -33117509141283975LL;
	volatile int32_t x131 = INT32_MIN;
	int32_t t32 = 16150;

    t32 = (x129!=((x130^x131)|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 214594LL;
	static int64_t x134 = INT64_MAX;
	volatile int64_t x135 = INT64_MAX;
	uint32_t x136 = 1U;
	volatile int32_t t33 = 94139031;

    t33 = (x133!=((x134^x135)|x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = INT32_MIN;
	int32_t x139 = -1;
	static int32_t t34 = -227;

    t34 = (x137!=((x138^x139)|x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = -1;
	static int8_t x142 = INT8_MIN;
	volatile uint64_t x143 = 4336LLU;
	int32_t t35 = 383960133;

    t35 = (x141!=((x142^x143)|x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 14040518780451569LLU;
	static int8_t x146 = INT8_MIN;
	uint64_t x147 = 11999258299062LLU;
	int32_t x148 = -1;
	volatile int32_t t36 = -1;

    t36 = (x145!=((x146^x147)|x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 569U;
	int64_t x150 = INT64_MIN;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = INT32_MIN;
	static int32_t t37 = 13419;

    t37 = (x149!=((x150^x151)|x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MIN;

    t38 = (x153!=((x154^x155)|x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x157 = 7U;
	volatile uint8_t x158 = 8U;
	int64_t x160 = -1LL;
	volatile int32_t t39 = 384983;

    t39 = (x157!=((x158^x159)|x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	static uint16_t x162 = UINT16_MAX;
	int32_t x163 = -1;
	int16_t x164 = INT16_MAX;
	int32_t t40 = -7;

    t40 = (x161!=((x162^x163)|x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x168 = INT8_MIN;
	int32_t t41 = 12;

    t41 = (x165!=((x166^x167)|x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x170 = 189;
	uint16_t x171 = UINT16_MAX;
	int32_t t42 = -32674184;

    t42 = (x169!=((x170^x171)|x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	uint8_t x174 = 1U;
	static int64_t x175 = -6342682318479LL;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = -515405197;

    t43 = (x173!=((x174^x175)|x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 0U;
	int16_t x178 = INT16_MIN;
	static int8_t x179 = INT8_MAX;
	static int32_t x180 = INT32_MIN;
	int32_t t44 = -500;

    t44 = (x177!=((x178^x179)|x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MIN;
	static volatile int8_t x182 = -5;
	uint8_t x183 = UINT8_MAX;

    t45 = (x181!=((x182^x183)|x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	uint16_t x187 = 203U;
	static int16_t x188 = -1;
	int32_t t46 = 2531547;

    t46 = (x185!=((x186^x187)|x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x189 = 135LLU;
	static int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MAX;
	int32_t t47 = 68226;

    t47 = (x189!=((x190^x191)|x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -1LL;
	volatile uint64_t x194 = 202319160050LLU;
	int8_t x195 = 1;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = -24999;

    t48 = (x193!=((x194^x195)|x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x198 = INT64_MAX;
	static int16_t x199 = 12;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = -441581536;

    t49 = (x197!=((x198^x199)|x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 0U;
	static int16_t x202 = -1;
	uint8_t x203 = 62U;
	int32_t t50 = -1;

    t50 = (x201!=((x202^x203)|x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	static int16_t x206 = INT16_MAX;
	volatile uint32_t x207 = UINT32_MAX;
	uint8_t x208 = 1U;
	static int32_t t51 = -495367961;

    t51 = (x205!=((x206^x207)|x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	uint64_t x210 = UINT64_MAX;
	static int16_t x212 = -5;

    t52 = (x209!=((x210^x211)|x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	uint16_t x215 = 12U;
	volatile int64_t x216 = INT64_MIN;
	int32_t t53 = 102;

    t53 = (x213!=((x214^x215)|x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	int16_t x218 = 24;
	static int8_t x219 = -1;
	int32_t t54 = 4;

    t54 = (x217!=((x218^x219)|x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x223 = -1121457;
	volatile int32_t t55 = -259110623;

    t55 = (x221!=((x222^x223)|x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 3U;
	volatile uint8_t x226 = 8U;
	volatile uint64_t x228 = UINT64_MAX;

    t56 = (x225!=((x226^x227)|x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	int32_t x230 = 13672942;
	volatile int32_t x231 = INT32_MIN;
	static uint32_t x232 = UINT32_MAX;

    t57 = (x229!=((x230^x231)|x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = INT64_MIN;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = -3860327;

    t58 = (x233!=((x234^x235)|x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = 28162U;
	static int32_t x238 = 30;
	int16_t x240 = -1;
	int32_t t59 = 868912416;

    t59 = (x237!=((x238^x239)|x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = -37;
	uint8_t x242 = 115U;
	int8_t x243 = INT8_MIN;
	int32_t t60 = -34;

    t60 = (x241!=((x242^x243)|x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 15U;
	int32_t x247 = -1;
	int8_t x248 = INT8_MAX;
	volatile int32_t t61 = -10240146;

    t61 = (x245!=((x246^x247)|x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MAX;
	uint16_t x250 = 178U;
	int8_t x251 = INT8_MAX;
	int8_t x252 = -1;
	volatile int32_t t62 = 0;

    t62 = (x249!=((x250^x251)|x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	static int8_t x254 = -1;
	int8_t x255 = 0;
	int64_t x256 = INT64_MIN;

    t63 = (x253!=((x254^x255)|x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = INT32_MIN;
	uint16_t x258 = 5U;
	int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MAX;
	int32_t t64 = 1;

    t64 = (x257!=((x258^x259)|x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MIN;
	int64_t x264 = INT64_MAX;
	volatile int32_t t65 = -1;

    t65 = (x261!=((x262^x263)|x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x266 = INT16_MIN;
	static uint8_t x267 = 115U;
	uint8_t x268 = 0U;
	static int32_t t66 = -12;

    t66 = (x265!=((x266^x267)|x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 160689020617LLU;
	int8_t x271 = -23;
	uint32_t x272 = 14U;
	static int32_t t67 = 15181;

    t67 = (x269!=((x270^x271)|x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = 27;
	uint8_t x274 = UINT8_MAX;
	volatile int32_t t68 = -6;

    t68 = (x273!=((x274^x275)|x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MAX;
	int32_t x278 = -76945;
	volatile int8_t x279 = INT8_MAX;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -5989854;

    t69 = (x277!=((x278^x279)|x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x282 = 3328260348LLU;
	uint16_t x283 = UINT16_MAX;
	int64_t x284 = -1LL;

    t70 = (x281!=((x282^x283)|x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	static int8_t x286 = INT8_MIN;
	volatile int8_t x287 = INT8_MIN;
	int32_t t71 = -455336507;

    t71 = (x285!=((x286^x287)|x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = 1;
	uint8_t x291 = UINT8_MAX;
	int32_t t72 = 23623;

    t72 = (x289!=((x290^x291)|x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	uint16_t x294 = 63U;
	uint64_t x295 = 56132545064213524LLU;
	volatile int32_t t73 = -1726;

    t73 = (x293!=((x294^x295)|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x298 = -1;
	static int32_t x300 = -203878573;
	int32_t t74 = 0;

    t74 = (x297!=((x298^x299)|x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = -1;
	int32_t t75 = 416602018;

    t75 = (x301!=((x302^x303)|x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x306 = 24;
	uint8_t x307 = 13U;
	uint16_t x308 = UINT16_MAX;
	int32_t t76 = -17;

    t76 = (x305!=((x306^x307)|x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	int64_t x311 = INT64_MIN;
	volatile int8_t x312 = INT8_MIN;
	static int32_t t77 = 6465984;

    t77 = (x309!=((x310^x311)|x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x315 = UINT32_MAX;
	int32_t t78 = 200254;

    t78 = (x313!=((x314^x315)|x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = INT64_MIN;
	volatile int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;
	int32_t t79 = -55;

    t79 = (x317!=((x318^x319)|x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	uint16_t x322 = UINT16_MAX;
	static volatile int8_t x323 = -27;
	static volatile int8_t x324 = -1;

    t80 = (x321!=((x322^x323)|x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 19U;
	int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	int8_t x328 = 1;
	int32_t t81 = -3;

    t81 = (x325!=((x326^x327)|x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x329 = 9661970U;
	int16_t x331 = INT16_MAX;
	int16_t x332 = -1;
	int32_t t82 = 1576723;

    t82 = (x329!=((x330^x331)|x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = -1;
	static uint16_t x335 = 0U;
	uint64_t x336 = 101404272474LLU;
	int32_t t83 = 4756398;

    t83 = (x333!=((x334^x335)|x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x338 = -1LL;
	int64_t x339 = -634246516253731937LL;
	int64_t x340 = 18603690LL;
	volatile int32_t t84 = -883604791;

    t84 = (x337!=((x338^x339)|x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -29;
	int16_t x342 = INT16_MIN;
	uint64_t x344 = UINT64_MAX;

    t85 = (x341!=((x342^x343)|x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 59U;
	uint32_t x348 = 68U;
	static int32_t t86 = 1701;

    t86 = (x345!=((x346^x347)|x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -419;
	int32_t x350 = -1;
	int16_t x351 = INT16_MIN;
	volatile int64_t x352 = 1LL;
	volatile int32_t t87 = -98;

    t87 = (x349!=((x350^x351)|x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	static int8_t x354 = INT8_MAX;
	uint32_t x356 = 3120U;
	int32_t t88 = -45293;

    t88 = (x353!=((x354^x355)|x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	volatile uint32_t x358 = UINT32_MAX;
	int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 3;

    t89 = (x357!=((x358^x359)|x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = UINT16_MAX;
	static int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t90 = -42777951;

    t90 = (x361!=((x362^x363)|x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = -2858551454LL;
	int16_t x366 = INT16_MAX;
	int64_t x367 = INT64_MAX;
	int32_t x368 = INT32_MAX;
	volatile int32_t t91 = 2;

    t91 = (x365!=((x366^x367)|x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MAX;
	uint32_t x370 = 30U;
	volatile int8_t x371 = INT8_MAX;
	volatile int8_t x372 = -1;
	int32_t t92 = -1770148;

    t92 = (x369!=((x370^x371)|x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 25400134148LLU;
	uint16_t x374 = 366U;
	volatile uint64_t x376 = UINT64_MAX;
	int32_t t93 = -112177;

    t93 = (x373!=((x374^x375)|x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 102237U;
	uint16_t x380 = 3788U;
	static int32_t t94 = 209496050;

    t94 = (x377!=((x378^x379)|x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 96U;
	int16_t x382 = 6;
	uint32_t x383 = 62909451U;
	volatile int32_t t95 = 7;

    t95 = (x381!=((x382^x383)|x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 62398792380911LL;
	volatile int32_t x387 = -1;
	uint16_t x388 = 3U;

    t96 = (x385!=((x386^x387)|x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 130U;
	volatile int64_t x390 = -11984608LL;
	static int32_t x391 = INT32_MIN;
	static int32_t t97 = -560;

    t97 = (x389!=((x390^x391)|x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x393 = 871U;
	static uint16_t x395 = UINT16_MAX;
	uint32_t x396 = UINT32_MAX;
	static volatile int32_t t98 = -26;

    t98 = (x393!=((x394^x395)|x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = UINT32_MAX;
	volatile uint8_t x398 = 2U;
	int32_t x399 = -90108796;
	volatile int8_t x400 = -1;
	volatile int32_t t99 = -61709591;

    t99 = (x397!=((x398^x399)|x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 5U;
	int64_t x402 = INT64_MAX;
	int8_t x403 = -1;
	uint8_t x404 = 107U;
	int32_t t100 = -781822;

    t100 = (x401!=((x402^x403)|x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 1U;
	int8_t x406 = -2;
	uint32_t x408 = 3551U;
	int32_t t101 = 1512;

    t101 = (x405!=((x406^x407)|x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -53;
	int16_t x410 = INT16_MIN;
	uint16_t x412 = 645U;
	int32_t t102 = 112928078;

    t102 = (x409!=((x410^x411)|x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = 356959371557582LL;
	uint16_t x414 = UINT16_MAX;
	uint8_t x415 = 0U;
	uint64_t x416 = UINT64_MAX;
	int32_t t103 = 74014;

    t103 = (x413!=((x414^x415)|x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MIN;
	uint64_t x419 = UINT64_MAX;
	uint8_t x420 = 0U;
	int32_t t104 = -853534;

    t104 = (x417!=((x418^x419)|x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = -1;
	static uint8_t x423 = 0U;
	uint64_t x424 = 131099743302915293LLU;

    t105 = (x421!=((x422^x423)|x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x425 = 31863022570LL;
	volatile int64_t x426 = INT64_MIN;
	int8_t x427 = -2;
	int16_t x428 = INT16_MIN;
	int32_t t106 = -1;

    t106 = (x425!=((x426^x427)|x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x430 = INT64_MIN;
	uint16_t x431 = 0U;
	int8_t x432 = INT8_MIN;
	int32_t t107 = 945376;

    t107 = (x429!=((x430^x431)|x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 3559LLU;
	int8_t x434 = INT8_MAX;
	uint32_t x435 = 100624342U;
	volatile uint32_t x436 = UINT32_MAX;

    t108 = (x433!=((x434^x435)|x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -1;
	uint8_t x438 = 84U;
	int16_t x440 = INT16_MIN;
	int32_t t109 = -83;

    t109 = (x437!=((x438^x439)|x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MIN;
	uint32_t x442 = UINT32_MAX;
	uint32_t x443 = UINT32_MAX;
	volatile int32_t t110 = -1948;

    t110 = (x441!=((x442^x443)|x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x445 = -1;
	int32_t x446 = 90;
	int8_t x447 = -1;
	int16_t x448 = -1;
	volatile int32_t t111 = -691870;

    t111 = (x445!=((x446^x447)|x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 13359LL;
	uint8_t x452 = 2U;
	volatile int32_t t112 = -70100184;

    t112 = (x449!=((x450^x451)|x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 123U;
	int8_t x454 = 4;
	volatile int32_t x455 = -1;
	int16_t x456 = INT16_MAX;

    t113 = (x453!=((x454^x455)|x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x458 = 600U;
	static volatile uint64_t x459 = UINT64_MAX;
	static uint64_t x460 = 8739558980LLU;
	volatile int32_t t114 = -7997375;

    t114 = (x457!=((x458^x459)|x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -323LL;
	static int64_t x462 = 1LL;
	int8_t x463 = -1;
	int32_t x464 = INT32_MAX;
	int32_t t115 = -3818745;

    t115 = (x461!=((x462^x463)|x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = INT16_MIN;
	int64_t x466 = -1LL;
	uint64_t x467 = 1LLU;
	volatile uint8_t x468 = 0U;
	volatile int32_t t116 = -8454638;

    t116 = (x465!=((x466^x467)|x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x469 = UINT8_MAX;
	uint8_t x470 = 1U;
	int16_t x471 = INT16_MIN;
	static int32_t x472 = INT32_MIN;
	volatile int32_t t117 = 12035;

    t117 = (x469!=((x470^x471)|x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x474 = UINT16_MAX;
	int64_t x475 = 39LL;
	static volatile int64_t x476 = 146151149406673123LL;
	volatile int32_t t118 = 21119352;

    t118 = (x473!=((x474^x475)|x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	volatile int64_t x478 = INT64_MIN;
	static int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	volatile int32_t t119 = 28;

    t119 = (x477!=((x478^x479)|x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x482 = 5164LL;
	uint32_t x483 = 1U;
	int64_t x484 = INT64_MIN;
	static volatile int32_t t120 = -39707;

    t120 = (x481!=((x482^x483)|x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 1U;
	int32_t x486 = INT32_MIN;
	uint16_t x487 = 1U;
	uint16_t x488 = 1U;

    t121 = (x485!=((x486^x487)|x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = -26;
	int64_t x490 = 16770027805505118LL;
	int32_t x491 = -1;
	uint8_t x492 = 65U;
	int32_t t122 = 0;

    t122 = (x489!=((x490^x491)|x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	int16_t x494 = INT16_MIN;
	volatile int32_t x495 = -10;
	volatile int32_t t123 = 121334;

    t123 = (x493!=((x494^x495)|x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 10U;
	int16_t x498 = -9;
	int8_t x499 = INT8_MAX;
	int32_t t124 = -2;

    t124 = (x497!=((x498^x499)|x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = -7;
	int64_t x503 = 121803082906LL;
	volatile uint64_t x504 = UINT64_MAX;
	volatile int32_t t125 = -110182;

    t125 = (x501!=((x502^x503)|x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	int32_t x506 = INT32_MIN;
	volatile int8_t x507 = -1;
	static uint32_t x508 = 0U;
	static int32_t t126 = -79237;

    t126 = (x505!=((x506^x507)|x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 7654181LLU;
	int8_t x510 = 51;
	int16_t x511 = -1;
	int32_t t127 = 41;

    t127 = (x509!=((x510^x511)|x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint64_t x513 = 11957439382720LLU;
	volatile int8_t x514 = INT8_MIN;
	volatile int32_t x515 = INT32_MIN;
	int32_t t128 = 1820;

    t128 = (x513!=((x514^x515)|x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 5U;
	static volatile int8_t x518 = 1;
	uint64_t x519 = UINT64_MAX;
	static uint32_t x520 = 13U;

    t129 = (x517!=((x518^x519)|x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 8U;
	uint16_t x522 = 12158U;
	static volatile int8_t x524 = INT8_MAX;
	int32_t t130 = 31873;

    t130 = (x521!=((x522^x523)|x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x527 = 2U;
	int8_t x528 = INT8_MIN;
	volatile int32_t t131 = 7913;

    t131 = (x525!=((x526^x527)|x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 1023LLU;
	int64_t x530 = INT64_MAX;
	int64_t x532 = INT64_MIN;
	int32_t t132 = -806789;

    t132 = (x529!=((x530^x531)|x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	uint16_t x534 = 19U;
	int8_t x535 = INT8_MIN;
	uint32_t x536 = 9829917U;
	volatile int32_t t133 = 278481422;

    t133 = (x533!=((x534^x535)|x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	uint8_t x538 = 4U;
	volatile int8_t x539 = -1;
	uint8_t x540 = 7U;
	volatile int32_t t134 = -1636;

    t134 = (x537!=((x538^x539)|x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x541 = 1058464685825LLU;
	uint16_t x542 = 3919U;
	static uint8_t x543 = UINT8_MAX;
	static int32_t x544 = INT32_MIN;
	int32_t t135 = -1;

    t135 = (x541!=((x542^x543)|x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x545 = 1033891LLU;
	int16_t x546 = 1;
	volatile int64_t x548 = INT64_MIN;
	int32_t t136 = 1007810;

    t136 = (x545!=((x546^x547)|x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	uint8_t x550 = UINT8_MAX;
	static volatile uint8_t x551 = UINT8_MAX;
	static int32_t x552 = 933076;
	volatile int32_t t137 = -267684841;

    t137 = (x549!=((x550^x551)|x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = -1;
	int16_t x554 = INT16_MAX;
	int32_t x555 = INT32_MIN;
	int64_t x556 = -1259LL;
	int32_t t138 = 4;

    t138 = (x553!=((x554^x555)|x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 4914U;
	int16_t x559 = INT16_MIN;
	int32_t x560 = -1;
	volatile int32_t t139 = -47373;

    t139 = (x557!=((x558^x559)|x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x562 = INT8_MIN;
	int64_t x563 = -1LL;
	static int64_t x564 = INT64_MIN;
	int32_t t140 = -60974;

    t140 = (x561!=((x562^x563)|x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int32_t x565 = INT32_MIN;
	static uint16_t x566 = 25U;
	uint64_t x567 = UINT64_MAX;
	uint8_t x568 = 31U;
	int32_t t141 = -490604;

    t141 = (x565!=((x566^x567)|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x570 = 118U;
	volatile uint32_t x571 = UINT32_MAX;
	int32_t t142 = -147728;

    t142 = (x569!=((x570^x571)|x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = 12;
	int16_t x574 = INT16_MAX;
	static uint16_t x575 = UINT16_MAX;
	uint8_t x576 = 2U;
	volatile int32_t t143 = 24;

    t143 = (x573!=((x574^x575)|x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x577 = UINT32_MAX;
	volatile int16_t x578 = INT16_MIN;
	uint16_t x579 = 117U;
	static uint8_t x580 = 49U;
	static int32_t t144 = 851608;

    t144 = (x577!=((x578^x579)|x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 248;
	int32_t x582 = -1;
	static volatile int32_t x584 = INT32_MIN;
	int32_t t145 = -17;

    t145 = (x581!=((x582^x583)|x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x585 = UINT8_MAX;
	static int32_t x586 = INT32_MAX;
	uint16_t x587 = UINT16_MAX;
	uint8_t x588 = 6U;
	volatile int32_t t146 = -1;

    t146 = (x585!=((x586^x587)|x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = 1;
	static int16_t x590 = INT16_MIN;
	uint64_t x591 = 1512130207LLU;
	int16_t x592 = INT16_MIN;
	volatile int32_t t147 = 1328853;

    t147 = (x589!=((x590^x591)|x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 1029686836LLU;
	int32_t x594 = 665;
	static volatile int16_t x596 = INT16_MIN;

    t148 = (x593!=((x594^x595)|x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x599 = UINT16_MAX;
	int8_t x600 = INT8_MIN;
	volatile int32_t t149 = 14;

    t149 = (x597!=((x598^x599)|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = UINT32_MAX;
	int32_t x602 = -184367;
	int8_t x604 = INT8_MIN;
	int32_t t150 = -1276;

    t150 = (x601!=((x602^x603)|x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	volatile int8_t x606 = INT8_MAX;
	volatile uint8_t x607 = UINT8_MAX;
	uint64_t x608 = UINT64_MAX;
	static volatile int32_t t151 = 805;

    t151 = (x605!=((x606^x607)|x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x610 = 7;
	uint32_t x612 = 17576U;
	int32_t t152 = 12131727;

    t152 = (x609!=((x610^x611)|x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -1;
	static volatile int16_t x614 = INT16_MIN;
	int8_t x615 = 0;
	int8_t x616 = INT8_MAX;
	int32_t t153 = -20;

    t153 = (x613!=((x614^x615)|x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x619 = -1;
	static int16_t x620 = 2654;
	int32_t t154 = 854486;

    t154 = (x617!=((x618^x619)|x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x622 = UINT32_MAX;
	int32_t x624 = 49626529;
	int32_t t155 = -63;

    t155 = (x621!=((x622^x623)|x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x625 = 35164646062839LLU;
	volatile int64_t x626 = INT64_MIN;
	int32_t x627 = -1049;
	int16_t x628 = -6;
	int32_t t156 = 41878;

    t156 = (x625!=((x626^x627)|x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	int32_t x631 = 27743;
	int8_t x632 = 16;
	volatile int32_t t157 = -190136880;

    t157 = (x629!=((x630^x631)|x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = INT64_MIN;
	uint64_t x634 = 256127863318LLU;
	int16_t x635 = -339;
	int64_t x636 = INT64_MAX;
	static volatile int32_t t158 = -99777822;

    t158 = (x633!=((x634^x635)|x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = INT64_MAX;
	int8_t x638 = INT8_MAX;
	uint64_t x639 = 1049580920LLU;
	uint64_t x640 = 3627656517079676LLU;
	static volatile int32_t t159 = 439400123;

    t159 = (x637!=((x638^x639)|x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = -1;
	int32_t x642 = -2;
	uint16_t x643 = UINT16_MAX;
	int64_t x644 = 220777397LL;
	volatile int32_t t160 = -7305484;

    t160 = (x641!=((x642^x643)|x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x645 = 14LL;
	int64_t x646 = INT64_MIN;
	static int64_t x647 = -5775370152533340LL;
	uint32_t x648 = 229520286U;
	volatile int32_t t161 = -450073022;

    t161 = (x645!=((x646^x647)|x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x650 = 18644992LLU;
	uint64_t x651 = 33359998564533LLU;
	static uint32_t x652 = UINT32_MAX;
	int32_t t162 = -74259;

    t162 = (x649!=((x650^x651)|x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = UINT32_MAX;
	volatile uint16_t x654 = 0U;
	uint32_t x656 = UINT32_MAX;
	static int32_t t163 = 11;

    t163 = (x653!=((x654^x655)|x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = -1;
	int64_t x658 = INT64_MAX;
	int32_t t164 = -4844;

    t164 = (x657!=((x658^x659)|x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	static uint16_t x663 = 23275U;
	static uint32_t x664 = 181320U;

    t165 = (x661!=((x662^x663)|x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x666 = 1U;
	int64_t x668 = -1LL;
	int32_t t166 = -616179168;

    t166 = (x665!=((x666^x667)|x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 4U;
	static uint64_t x671 = 3298216866957142LLU;
	volatile int32_t t167 = -1592;

    t167 = (x669!=((x670^x671)|x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = -1;
	volatile uint32_t x675 = 5835912U;
	volatile int16_t x676 = INT16_MAX;
	volatile int32_t t168 = -6976840;

    t168 = (x673!=((x674^x675)|x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -6276687700LL;
	static volatile uint64_t x679 = UINT64_MAX;
	static int8_t x680 = INT8_MIN;

    t169 = (x677!=((x678^x679)|x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int16_t x683 = INT16_MIN;
	uint32_t x684 = 24980782U;
	int32_t t170 = 0;

    t170 = (x681!=((x682^x683)|x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	volatile int16_t x686 = -1;
	static int32_t t171 = -2821;

    t171 = (x685!=((x686^x687)|x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = UINT32_MAX;
	volatile int8_t x691 = -1;
	int64_t x692 = -7615138610LL;
	int32_t t172 = 5;

    t172 = (x689!=((x690^x691)|x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = 4;
	static int16_t x694 = INT16_MIN;
	int32_t t173 = -1;

    t173 = (x693!=((x694^x695)|x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	uint32_t x698 = UINT32_MAX;

    t174 = (x697!=((x698^x699)|x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -1;
	int16_t x703 = 26;
	int16_t x704 = INT16_MIN;
	volatile int32_t t175 = 1656140;

    t175 = (x701!=((x702^x703)|x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 24730LLU;
	int8_t x706 = INT8_MIN;
	int32_t x708 = -1;
	volatile int32_t t176 = -9;

    t176 = (x705!=((x706^x707)|x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x709 = INT16_MIN;
	volatile int16_t x710 = -1;
	int8_t x711 = INT8_MAX;
	volatile int64_t x712 = 1LL;
	static int32_t t177 = -23;

    t177 = (x709!=((x710^x711)|x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -19877;
	uint16_t x714 = 5U;
	uint16_t x716 = 20U;
	volatile int32_t t178 = -1;

    t178 = (x713!=((x714^x715)|x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	int8_t x718 = -1;
	int16_t x719 = INT16_MAX;
	int16_t x720 = INT16_MIN;
	int32_t t179 = -129001804;

    t179 = (x717!=((x718^x719)|x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x721 = -1;
	int32_t x723 = INT32_MIN;
	static int64_t x724 = INT64_MIN;
	int32_t t180 = -1431072;

    t180 = (x721!=((x722^x723)|x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 108U;
	volatile int64_t x726 = 5LL;
	static int16_t x727 = 46;
	static uint16_t x728 = 107U;
	int32_t t181 = -375;

    t181 = (x725!=((x726^x727)|x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x729 = 12005629LLU;
	int16_t x730 = -1;
	volatile int32_t t182 = -1;

    t182 = (x729!=((x730^x731)|x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x734 = 1U;
	int32_t x735 = -1;
	int16_t x736 = 6;
	int32_t t183 = -3825;

    t183 = (x733!=((x734^x735)|x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = 25;
	int16_t x740 = INT16_MIN;
	volatile int32_t t184 = -243949;

    t184 = (x737!=((x738^x739)|x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x741 = 0U;
	int8_t x742 = -28;
	volatile int64_t x743 = INT64_MIN;
	int64_t x744 = INT64_MAX;
	volatile int32_t t185 = 942060;

    t185 = (x741!=((x742^x743)|x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	int16_t x747 = -761;
	volatile int32_t x748 = INT32_MAX;
	volatile int32_t t186 = -16952935;

    t186 = (x745!=((x746^x747)|x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MAX;
	static int8_t x751 = INT8_MAX;
	int32_t t187 = 909471;

    t187 = (x749!=((x750^x751)|x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = UINT16_MAX;
	static int8_t x754 = INT8_MIN;
	static int8_t x755 = INT8_MIN;
	uint16_t x756 = 33U;
	volatile int32_t t188 = -8;

    t188 = (x753!=((x754^x755)|x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = 939861777LL;
	int8_t x758 = INT8_MIN;
	static volatile int32_t t189 = 0;

    t189 = (x757!=((x758^x759)|x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x762 = -26;
	int16_t x763 = INT16_MIN;
	static uint8_t x764 = UINT8_MAX;

    t190 = (x761!=((x762^x763)|x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MAX;
	int16_t x766 = -3;
	uint16_t x767 = UINT16_MAX;
	uint64_t x768 = 0LLU;
	int32_t t191 = -1430;

    t191 = (x765!=((x766^x767)|x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x769 = UINT64_MAX;
	static int64_t x770 = -224139386LL;
	uint32_t x771 = UINT32_MAX;
	uint16_t x772 = UINT16_MAX;
	static volatile int32_t t192 = 62795495;

    t192 = (x769!=((x770^x771)|x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	uint16_t x774 = 26U;
	volatile int32_t x775 = -18;
	static int64_t x776 = INT64_MIN;
	volatile int32_t t193 = -2;

    t193 = (x773!=((x774^x775)|x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = UINT32_MAX;
	int64_t x779 = -1LL;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t194 = 1;

    t194 = (x777!=((x778^x779)|x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x783 = INT8_MIN;
	uint16_t x784 = 51U;
	volatile int32_t t195 = 263530;

    t195 = (x781!=((x782^x783)|x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	static uint32_t x786 = 305U;
	int64_t x787 = INT64_MIN;
	int64_t x788 = INT64_MIN;
	volatile int32_t t196 = -7973693;

    t196 = (x785!=((x786^x787)|x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MIN;
	int8_t x790 = INT8_MAX;

    t197 = (x789!=((x790^x791)|x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MAX;
	int32_t x794 = INT32_MAX;
	static int16_t x796 = -1;
	int32_t t198 = -50627;

    t198 = (x793!=((x794^x795)|x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x798 = INT64_MIN;
	int32_t x799 = -5;
	int16_t x800 = -2;
	int32_t t199 = 95053587;

    t199 = (x797!=((x798^x799)|x800));

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

