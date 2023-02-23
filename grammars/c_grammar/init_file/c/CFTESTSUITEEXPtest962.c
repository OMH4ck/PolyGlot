
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

static int8_t x5 = INT8_MIN;
int8_t x6 = INT8_MIN;
int8_t x7 = -1;
int64_t x12 = 966159865LL;
int32_t t2 = -312022;
volatile int16_t x17 = INT16_MIN;
int16_t x19 = INT16_MIN;
int16_t x21 = 8;
volatile int16_t x24 = -1;
int8_t x25 = INT8_MAX;
int64_t x26 = INT64_MIN;
uint64_t x29 = UINT64_MAX;
uint32_t x35 = UINT32_MAX;
int8_t x37 = 0;
volatile uint32_t x47 = UINT32_MAX;
int8_t x51 = -1;
uint32_t x53 = UINT32_MAX;
int32_t x54 = -1;
int16_t x57 = INT16_MAX;
uint8_t x62 = UINT8_MAX;
static volatile int16_t x67 = INT16_MAX;
uint64_t x81 = 9779376LLU;
int16_t x82 = INT16_MIN;
int64_t x91 = INT64_MAX;
int32_t t21 = -26;
uint64_t x95 = UINT64_MAX;
uint8_t x104 = 21U;
volatile int8_t x105 = 42;
int16_t x109 = INT16_MIN;
uint8_t x115 = UINT8_MAX;
int32_t x121 = -1;
volatile int32_t t29 = 748179;
int8_t x131 = INT8_MIN;
int64_t x139 = -3566118283433LL;
uint8_t x140 = 7U;
volatile uint64_t x143 = UINT64_MAX;
volatile int32_t t34 = 1510;
uint8_t x152 = 1U;
static uint16_t x162 = 419U;
int32_t t40 = -2617;
int16_t x170 = -10;
int32_t x173 = INT32_MIN;
int16_t x180 = INT16_MIN;
int64_t x182 = 608LL;
int16_t x185 = INT16_MAX;
int16_t x188 = INT16_MIN;
volatile int8_t x197 = -1;
uint16_t x204 = UINT16_MAX;
static int16_t x208 = INT16_MIN;
int32_t t50 = -441283625;
int8_t x210 = INT8_MIN;
static int64_t x211 = INT64_MAX;
uint64_t x216 = 59681383043438LLU;
int8_t x221 = INT8_MIN;
static int32_t t54 = -119262559;
static uint64_t x231 = 16LLU;
static int8_t x233 = INT8_MAX;
volatile int32_t t60 = -1847;
uint64_t x252 = UINT64_MAX;
volatile int64_t x259 = 15LL;
int32_t x260 = -6714;
int64_t x261 = -17090360216LL;
int64_t x263 = INT64_MAX;
volatile int32_t t63 = 60;
uint64_t x277 = UINT64_MAX;
int32_t x289 = INT32_MAX;
int8_t x294 = INT8_MIN;
int32_t t74 = 101987765;
uint64_t x310 = 146970LLU;
static int8_t x313 = 5;
int16_t x320 = INT16_MIN;
volatile int32_t t77 = 22;
volatile uint16_t x322 = UINT16_MAX;
volatile int16_t x324 = -8050;
int8_t x328 = 6;
int32_t t79 = -3;
static uint8_t x345 = 40U;
int32_t x358 = INT32_MIN;
int32_t t87 = 2163538;
int32_t t88 = -934316;
uint16_t x368 = 7971U;
int16_t x370 = -1;
int32_t x373 = INT32_MAX;
int8_t x376 = 1;
int16_t x385 = INT16_MIN;
static int64_t x387 = INT64_MAX;
uint8_t x388 = 15U;
int8_t x402 = -17;
int32_t t97 = 1;
int8_t x408 = -1;
volatile int8_t x414 = -56;
static volatile uint8_t x415 = UINT8_MAX;
volatile int32_t t100 = -1798;
int64_t x420 = 542812623910835LL;
volatile int8_t x441 = 0;
int8_t x448 = -45;
uint8_t x449 = UINT8_MAX;
uint16_t x454 = 29599U;
static int16_t x459 = INT16_MIN;
int32_t x461 = -4122;
volatile int64_t x492 = INT64_MAX;
volatile int32_t t118 = 390452;
int32_t x499 = INT32_MAX;
uint8_t x502 = 2U;
static int32_t x504 = INT32_MIN;
int32_t t121 = -16495484;
int64_t x513 = INT64_MIN;
volatile int32_t t123 = 124979727;
uint16_t x518 = 6U;
static int32_t x519 = INT32_MIN;
static int8_t x521 = -1;
volatile int32_t t125 = -54001532;
uint64_t x526 = 2593803696612080179LLU;
int32_t x529 = 1934;
int32_t x536 = -1;
int16_t x540 = INT16_MIN;
static uint16_t x543 = 28414U;
int32_t t131 = 114004;
int64_t x556 = -978813965273936LL;
int32_t x561 = INT32_MIN;
int32_t t136 = 36415765;
int32_t t137 = -13726821;
uint16_t x575 = UINT16_MAX;
int32_t x577 = -1;
int32_t t139 = 1585121;
volatile int64_t x584 = INT64_MIN;
int16_t x585 = INT16_MIN;
static int64_t x588 = -233030912310749070LL;
volatile int32_t t141 = 68;
int64_t x598 = INT64_MIN;
volatile int32_t t145 = -3;
static int64_t x610 = -1LL;
int8_t x615 = -1;
volatile int16_t x617 = -1;
int16_t x620 = INT16_MIN;
int32_t x622 = INT32_MIN;
int8_t x626 = -1;
volatile int32_t t152 = 11;
int8_t x638 = -5;
static int8_t x641 = -1;
int8_t x643 = INT8_MAX;
static int64_t x645 = 67878755LL;
static uint32_t x648 = 46828501U;
uint8_t x649 = 6U;
int16_t x652 = INT16_MIN;
uint8_t x654 = 24U;
int8_t x658 = -1;
int8_t x660 = INT8_MIN;
static volatile int32_t t158 = 3;
static int8_t x662 = -56;
int8_t x663 = INT8_MIN;
volatile uint16_t x664 = UINT16_MAX;
static int32_t x666 = -1;
static int16_t x669 = -4;
static int32_t x670 = INT32_MIN;
volatile int32_t t161 = 6;
uint16_t x676 = 163U;
int32_t x681 = -104;
int64_t x697 = -1LL;
int8_t x706 = INT8_MIN;
volatile int8_t x708 = INT8_MIN;
int32_t t169 = 225;
int32_t t170 = -17180;
volatile int32_t x717 = INT32_MIN;
static uint8_t x725 = 3U;
int32_t x731 = -1;
int32_t x738 = -582693;
uint16_t x750 = 20253U;
static uint32_t x751 = 1848598845U;
volatile int8_t x756 = INT8_MAX;
int8_t x759 = INT8_MAX;
int64_t x766 = INT64_MIN;
int16_t x773 = INT16_MAX;
int64_t x783 = INT64_MIN;
int16_t x784 = -1;
int32_t t189 = 0;
volatile int64_t x798 = -1LL;
int8_t x799 = INT8_MIN;
int32_t x808 = -1;
static uint16_t x816 = UINT16_MAX;
uint64_t x822 = 3LLU;
int16_t x823 = -1;
int32_t t196 = -3771098;
static uint8_t x827 = 3U;
int32_t x828 = -36;
int32_t t199 = -27984143;


void f0(void) {
    	volatile uint32_t x8 = 950993U;
	volatile int32_t t0 = -18107673;

    t0 = (x5<=((x6%x7)|x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = -3324;
	int8_t x10 = 1;
	volatile int64_t x11 = INT64_MAX;
	volatile int32_t t1 = 688;

    t1 = (x9<=((x10%x11)|x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x13 = 1092845U;
	static int16_t x14 = INT16_MAX;
	volatile int64_t x15 = -1LL;
	int16_t x16 = -1;

    t2 = (x13<=((x14%x15)|x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x18 = 219626257U;
	volatile int32_t x20 = INT32_MIN;
	int32_t t3 = -3216527;

    t3 = (x17<=((x18%x19)|x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int32_t t4 = 1010906890;

    t4 = (x21<=((x22%x23)|x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x27 = -1;
	static int64_t x28 = INT64_MIN;
	volatile int32_t t5 = 8;

    t5 = (x25<=((x26%x27)|x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x30 = 7557U;
	int16_t x31 = -1;
	uint32_t x32 = 26U;
	int32_t t6 = 64756;

    t6 = (x29<=((x30%x31)|x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MAX;
	int32_t x36 = -37150;
	int32_t t7 = -2635962;

    t7 = (x33<=((x34%x35)|x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x38 = UINT64_MAX;
	int32_t x39 = -607665444;
	uint16_t x40 = 9746U;
	static volatile int32_t t8 = 1082;

    t8 = (x37<=((x38%x39)|x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	int8_t x42 = -1;
	uint64_t x43 = 29580852LLU;
	static uint64_t x44 = 323LLU;
	static int32_t t9 = 3065995;

    t9 = (x41<=((x42%x43)|x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MAX;
	static int32_t x46 = INT32_MAX;
	static volatile uint64_t x48 = 33457484LLU;
	static volatile int32_t t10 = -125;

    t10 = (x45<=((x46%x47)|x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = 8330546414349LL;
	uint32_t x50 = UINT32_MAX;
	int64_t x52 = -208837316LL;
	int32_t t11 = 162145;

    t11 = (x49<=((x50%x51)|x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x55 = INT8_MIN;
	uint8_t x56 = 6U;
	volatile int32_t t12 = -1670936;

    t12 = (x53<=((x54%x55)|x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x58 = 2U;
	int8_t x59 = -19;
	volatile int16_t x60 = -2;
	static int32_t t13 = 1;

    t13 = (x57<=((x58%x59)|x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -3210;
	int64_t x63 = 16256194788247350LL;
	static int8_t x64 = INT8_MIN;
	int32_t t14 = 18624;

    t14 = (x61<=((x62%x63)|x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x65 = -59;
	uint32_t x66 = 292811U;
	int16_t x68 = -1;
	static int32_t t15 = -2027;

    t15 = (x65<=((x66%x67)|x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = 17791800777605735LL;
	uint8_t x70 = 75U;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	static int32_t t16 = -1522;

    t16 = (x69<=((x70%x71)|x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -1;
	static int16_t x74 = 1954;
	volatile int32_t x75 = INT32_MIN;
	static volatile int8_t x76 = -1;
	int32_t t17 = -455;

    t17 = (x73<=((x74%x75)|x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x77 = INT64_MIN;
	int32_t x78 = 6995;
	int32_t x79 = INT32_MAX;
	uint16_t x80 = 8959U;
	int32_t t18 = 0;

    t18 = (x77<=((x78%x79)|x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x83 = INT32_MIN;
	static int64_t x84 = INT64_MIN;
	volatile int32_t t19 = -7;

    t19 = (x81<=((x82%x83)|x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = INT64_MAX;
	static uint64_t x86 = UINT64_MAX;
	int64_t x87 = INT64_MIN;
	int32_t x88 = 129594742;
	volatile int32_t t20 = -2159950;

    t20 = (x85<=((x86%x87)|x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 6789697010807LLU;
	volatile int16_t x90 = -9882;
	int64_t x92 = INT64_MIN;

    t21 = (x89<=((x90%x91)|x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 955U;
	static int8_t x94 = -15;
	int64_t x96 = 223638901076394945LL;
	volatile int32_t t22 = -917634805;

    t22 = (x93<=((x94%x95)|x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 210534LLU;
	int32_t x100 = INT32_MIN;
	static int32_t t23 = 219078173;

    t23 = (x97<=((x98%x99)|x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = 33;
	static int16_t x102 = -1;
	int64_t x103 = 15575235670LL;
	volatile int32_t t24 = 5196;

    t24 = (x101<=((x102%x103)|x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x106 = -1;
	volatile int64_t x107 = 121437461114882822LL;
	static uint32_t x108 = 42672U;
	int32_t t25 = -48;

    t25 = (x105<=((x106%x107)|x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x110 = INT32_MAX;
	int16_t x111 = -10862;
	int8_t x112 = INT8_MAX;
	int32_t t26 = 16;

    t26 = (x109<=((x110%x111)|x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = UINT8_MAX;
	static int64_t x114 = 35139883967216LL;
	int8_t x116 = -14;
	static volatile int32_t t27 = -10;

    t27 = (x113<=((x114%x115)|x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x117 = INT64_MIN;
	static uint64_t x118 = 3932900207356LLU;
	volatile int16_t x119 = -44;
	uint8_t x120 = 1U;
	volatile int32_t t28 = 815;

    t28 = (x117<=((x118%x119)|x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x122 = 0U;
	int64_t x123 = INT64_MIN;
	static volatile uint64_t x124 = 1663338962043427526LLU;

    t29 = (x121<=((x122%x123)|x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = INT8_MAX;
	int8_t x126 = -1;
	int16_t x127 = 3341;
	static uint8_t x128 = UINT8_MAX;
	volatile int32_t t30 = -60893163;

    t30 = (x125<=((x126%x127)|x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = -1LL;
	static int8_t x130 = 1;
	static int16_t x132 = -1207;
	volatile int32_t t31 = -13300713;

    t31 = (x129<=((x130%x131)|x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x133 = -53;
	static volatile int32_t x134 = INT32_MIN;
	volatile int64_t x135 = INT64_MIN;
	volatile uint64_t x136 = 477118LLU;
	int32_t t32 = 76;

    t32 = (x133<=((x134%x135)|x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x137 = 85U;
	uint8_t x138 = 53U;
	int32_t t33 = -206762;

    t33 = (x137<=((x138%x139)|x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x141 = -1LL;
	static int32_t x142 = INT32_MAX;
	static int16_t x144 = INT16_MAX;

    t34 = (x141<=((x142%x143)|x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = 0;
	static int8_t x146 = 8;
	static int64_t x147 = -1LL;
	volatile uint64_t x148 = 3820281725326772LLU;
	volatile int32_t t35 = 198263231;

    t35 = (x145<=((x146%x147)|x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = 306815206U;
	volatile uint8_t x150 = 0U;
	int32_t x151 = INT32_MAX;
	int32_t t36 = -221;

    t36 = (x149<=((x150%x151)|x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	static uint32_t x155 = 7140949U;
	volatile uint16_t x156 = 91U;
	int32_t t37 = 261317;

    t37 = (x153<=((x154%x155)|x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x157 = UINT32_MAX;
	int64_t x158 = INT64_MIN;
	uint16_t x159 = 8561U;
	static int16_t x160 = -1;
	int32_t t38 = 819063119;

    t38 = (x157<=((x158%x159)|x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = INT64_MAX;
	volatile uint16_t x163 = 2U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t39 = -3;

    t39 = (x161<=((x162%x163)|x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MIN;
	uint32_t x166 = 27791U;
	volatile uint8_t x167 = 33U;
	static volatile int8_t x168 = -1;

    t40 = (x165<=((x166%x167)|x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x169 = 11405U;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t41 = 7;

    t41 = (x169<=((x170%x171)|x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x174 = INT16_MAX;
	static int32_t x175 = -1;
	static volatile uint32_t x176 = UINT32_MAX;
	volatile int32_t t42 = 46679;

    t42 = (x173<=((x174%x175)|x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = -59;
	volatile uint16_t x178 = 22U;
	static int32_t x179 = INT32_MIN;
	volatile int32_t t43 = -685492;

    t43 = (x177<=((x178%x179)|x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = 7U;
	uint8_t x183 = 40U;
	volatile int32_t x184 = INT32_MIN;
	volatile int32_t t44 = 2618780;

    t44 = (x181<=((x182%x183)|x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x186 = 381204105507636LL;
	static int64_t x187 = -1LL;
	volatile int32_t t45 = -492;

    t45 = (x185<=((x186%x187)|x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x189 = UINT64_MAX;
	volatile int32_t x190 = INT32_MIN;
	int16_t x191 = -1;
	volatile int16_t x192 = INT16_MIN;
	int32_t t46 = -392;

    t46 = (x189<=((x190%x191)|x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x193 = 5U;
	int32_t x194 = INT32_MIN;
	int8_t x195 = INT8_MAX;
	int64_t x196 = -6188LL;
	volatile int32_t t47 = 16617162;

    t47 = (x193<=((x194%x195)|x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x198 = 2525U;
	int16_t x199 = 1;
	int64_t x200 = INT64_MIN;
	volatile int32_t t48 = -2;

    t48 = (x197<=((x198%x199)|x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = 841672;
	uint8_t x202 = UINT8_MAX;
	int64_t x203 = INT64_MAX;
	volatile int32_t t49 = -3212887;

    t49 = (x201<=((x202%x203)|x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x205 = INT64_MIN;
	volatile int32_t x206 = -35946532;
	int8_t x207 = -4;

    t50 = (x205<=((x206%x207)|x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = INT8_MAX;
	static int8_t x212 = -1;
	int32_t t51 = 125;

    t51 = (x209<=((x210%x211)|x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x213 = 104U;
	volatile int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MIN;
	static volatile int32_t t52 = -5401555;

    t52 = (x213<=((x214%x215)|x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x217 = 0LL;
	static int16_t x218 = -1;
	int32_t x219 = 86;
	volatile int16_t x220 = INT16_MAX;
	static int32_t t53 = -7;

    t53 = (x217<=((x218%x219)|x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x222 = 3205LLU;
	uint64_t x223 = 47371958817138463LLU;
	int32_t x224 = INT32_MIN;

    t54 = (x221<=((x222%x223)|x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MIN;
	volatile uint64_t x227 = 12564764885LLU;
	int16_t x228 = INT16_MAX;
	volatile int32_t t55 = 0;

    t55 = (x225<=((x226%x227)|x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = 2;
	volatile int16_t x230 = INT16_MAX;
	int64_t x232 = -1LL;
	static volatile int32_t t56 = -541027;

    t56 = (x229<=((x230%x231)|x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x234 = 30;
	int8_t x235 = -1;
	static int64_t x236 = INT64_MIN;
	volatile int32_t t57 = 964077162;

    t57 = (x233<=((x234%x235)|x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x237 = 23974U;
	volatile int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MIN;
	volatile uint32_t x240 = 27153U;
	int32_t t58 = 857646808;

    t58 = (x237<=((x238%x239)|x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = -358644;
	uint8_t x242 = 6U;
	uint8_t x243 = UINT8_MAX;
	uint64_t x244 = UINT64_MAX;
	int32_t t59 = -145;

    t59 = (x241<=((x242%x243)|x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = -277919154055442LL;
	static int64_t x246 = INT64_MAX;
	int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MIN;

    t60 = (x245<=((x246%x247)|x248));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x249 = 216LLU;
	uint8_t x250 = UINT8_MAX;
	int64_t x251 = -908429464969LL;
	static volatile int32_t t61 = 44;

    t61 = (x249<=((x250%x251)|x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x257 = UINT64_MAX;
	int32_t x258 = -1;
	static int32_t t62 = 8853;

    t62 = (x257<=((x258%x259)|x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x262 = 1200349LL;
	int16_t x264 = INT16_MAX;

    t63 = (x261<=((x262%x263)|x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x265 = INT8_MAX;
	static volatile uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 22836U;
	static int16_t x268 = INT16_MIN;
	int32_t t64 = -47869135;

    t64 = (x265<=((x266%x267)|x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x269 = 1969LLU;
	uint32_t x270 = UINT32_MAX;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	volatile int32_t t65 = -13583;

    t65 = (x269<=((x270%x271)|x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint64_t x273 = 5842239425397LLU;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MAX;
	static int8_t x276 = INT8_MAX;
	int32_t t66 = -3;

    t66 = (x273<=((x274%x275)|x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x278 = 2U;
	int16_t x279 = INT16_MIN;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t67 = -50497;

    t67 = (x277<=((x278%x279)|x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = UINT16_MAX;
	int64_t x282 = INT64_MIN;
	uint64_t x283 = 387470841230008LLU;
	int32_t x284 = INT32_MAX;
	volatile int32_t t68 = 1;

    t68 = (x281<=((x282%x283)|x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = INT8_MIN;
	int16_t x286 = -1048;
	static int16_t x287 = 2708;
	int32_t x288 = INT32_MAX;
	int32_t t69 = -165;

    t69 = (x285<=((x286%x287)|x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x290 = INT32_MAX;
	uint32_t x291 = UINT32_MAX;
	uint16_t x292 = 8U;
	volatile int32_t t70 = 5998;

    t70 = (x289<=((x290%x291)|x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = -54;
	uint64_t x295 = 512984163438422LLU;
	int8_t x296 = INT8_MAX;
	static volatile int32_t t71 = 346;

    t71 = (x293<=((x294%x295)|x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x297 = 61U;
	static volatile int32_t x298 = -1;
	static int64_t x299 = INT64_MAX;
	uint16_t x300 = 16957U;
	int32_t t72 = 1;

    t72 = (x297<=((x298%x299)|x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MIN;
	volatile uint32_t x302 = 15U;
	static uint64_t x303 = 869LLU;
	volatile uint64_t x304 = 42149937238LLU;
	int32_t t73 = 387409;

    t73 = (x301<=((x302%x303)|x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	int16_t x307 = -22;
	int32_t x308 = INT32_MAX;

    t74 = (x305<=((x306%x307)|x308));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = INT64_MIN;
	uint8_t x311 = 27U;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t75 = 0;

    t75 = (x309<=((x310%x311)|x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x314 = 726352800271LL;
	static int8_t x315 = INT8_MIN;
	volatile uint16_t x316 = 703U;
	int32_t t76 = -8;

    t76 = (x313<=((x314%x315)|x316));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x317 = INT64_MIN;
	int16_t x318 = -1;
	volatile uint16_t x319 = 1U;

    t77 = (x317<=((x318%x319)|x320));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x321 = 66U;
	int8_t x323 = -1;
	int32_t t78 = -832698;

    t78 = (x321<=((x322%x323)|x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x325 = INT8_MAX;
	volatile uint16_t x326 = 7U;
	static uint64_t x327 = 68422LLU;

    t79 = (x325<=((x326%x327)|x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x329 = -17;
	int32_t x330 = INT32_MAX;
	uint64_t x331 = 163375LLU;
	int16_t x332 = -1;
	volatile int32_t t80 = 60303267;

    t80 = (x329<=((x330%x331)|x332));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x333 = 2U;
	uint32_t x334 = UINT32_MAX;
	int64_t x335 = 203716587875919809LL;
	int32_t x336 = -1;
	volatile int32_t t81 = -99;

    t81 = (x333<=((x334%x335)|x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = -3;
	static int8_t x338 = -1;
	static int32_t x339 = INT32_MIN;
	int8_t x340 = 0;
	int32_t t82 = 153484;

    t82 = (x337<=((x338%x339)|x340));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = -12199;
	int8_t x342 = -5;
	int64_t x343 = INT64_MIN;
	volatile int64_t x344 = INT64_MIN;
	int32_t t83 = -1717122;

    t83 = (x341<=((x342%x343)|x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x346 = UINT16_MAX;
	uint32_t x347 = 50462U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t84 = 3897764;

    t84 = (x345<=((x346%x347)|x348));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x349 = INT64_MIN;
	volatile uint8_t x350 = UINT8_MAX;
	volatile int64_t x351 = INT64_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t85 = 652142472;

    t85 = (x349<=((x350%x351)|x352));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x353 = 10188486LLU;
	int64_t x354 = INT64_MAX;
	static int32_t x355 = -1;
	volatile int8_t x356 = INT8_MIN;
	int32_t t86 = -1032;

    t86 = (x353<=((x354%x355)|x356));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x357 = -723294193440723LL;
	int32_t x359 = -6;
	volatile int16_t x360 = -1;

    t87 = (x357<=((x358%x359)|x360));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x361 = 4662U;
	uint64_t x362 = 25973497930642LLU;
	uint8_t x363 = 11U;
	int32_t x364 = INT32_MIN;

    t88 = (x361<=((x362%x363)|x364));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x365 = -1;
	uint16_t x366 = 1U;
	volatile int16_t x367 = -4;
	volatile int32_t t89 = -239;

    t89 = (x365<=((x366%x367)|x368));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x369 = 739LL;
	volatile int32_t x371 = 118472440;
	int32_t x372 = 42550;
	int32_t t90 = -75350838;

    t90 = (x369<=((x370%x371)|x372));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x374 = -1;
	static uint16_t x375 = 12094U;
	volatile int32_t t91 = -235815883;

    t91 = (x373<=((x374%x375)|x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x377 = 3494U;
	int16_t x378 = -2767;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MAX;
	volatile int32_t t92 = 1;

    t92 = (x377<=((x378%x379)|x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x381 = INT64_MAX;
	static int32_t x382 = -1;
	uint16_t x383 = UINT16_MAX;
	uint32_t x384 = 216U;
	volatile int32_t t93 = 241;

    t93 = (x381<=((x382%x383)|x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x386 = INT64_MIN;
	static volatile int32_t t94 = 117012018;

    t94 = (x385<=((x386%x387)|x388));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x393 = 253039439609920LLU;
	int16_t x394 = INT16_MAX;
	static int16_t x395 = -731;
	int64_t x396 = -21668399734196247LL;
	static volatile int32_t t95 = -53;

    t95 = (x393<=((x394%x395)|x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = INT8_MIN;
	static int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	static volatile uint32_t x400 = UINT32_MAX;
	volatile int32_t t96 = -233;

    t96 = (x397<=((x398%x399)|x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x401 = INT8_MIN;
	int8_t x403 = -1;
	static int8_t x404 = -1;

    t97 = (x401<=((x402%x403)|x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = -37231510;
	int16_t x406 = 1;
	uint32_t x407 = 1112762U;
	volatile int32_t t98 = -57;

    t98 = (x405<=((x406%x407)|x408));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x409 = UINT32_MAX;
	volatile int8_t x410 = INT8_MIN;
	int64_t x411 = -1LL;
	uint64_t x412 = UINT64_MAX;
	int32_t t99 = -29735;

    t99 = (x409<=((x410%x411)|x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x413 = 2626;
	volatile int8_t x416 = -1;

    t100 = (x413<=((x414%x415)|x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x417 = INT16_MIN;
	uint64_t x418 = 457413449987298984LLU;
	int32_t x419 = -740;
	int32_t t101 = 9;

    t101 = (x417<=((x418%x419)|x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x421 = UINT32_MAX;
	int64_t x422 = -1LL;
	volatile int32_t x423 = 806932452;
	uint32_t x424 = 25U;
	volatile int32_t t102 = -4775312;

    t102 = (x421<=((x422%x423)|x424));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x425 = 254199771LLU;
	uint32_t x426 = 47530U;
	static volatile int8_t x427 = 1;
	volatile int16_t x428 = INT16_MIN;
	int32_t t103 = -2;

    t103 = (x425<=((x426%x427)|x428));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x433 = UINT8_MAX;
	int32_t x434 = -1;
	static uint8_t x435 = 13U;
	volatile uint16_t x436 = 3239U;
	static int32_t t104 = 1635016;

    t104 = (x433<=((x434%x435)|x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x442 = -1;
	static volatile int8_t x443 = 2;
	int64_t x444 = INT64_MIN;
	volatile int32_t t105 = -56;

    t105 = (x441<=((x442%x443)|x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x445 = 66U;
	int16_t x446 = -1;
	int64_t x447 = INT64_MIN;
	int32_t t106 = -45176803;

    t106 = (x445<=((x446%x447)|x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x450 = 3885LLU;
	uint32_t x451 = UINT32_MAX;
	volatile int32_t x452 = 1616122;
	volatile int32_t t107 = -1015147;

    t107 = (x449<=((x450%x451)|x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = INT16_MIN;
	static uint32_t x455 = UINT32_MAX;
	uint32_t x456 = UINT32_MAX;
	static int32_t t108 = -2315;

    t108 = (x453<=((x454%x455)|x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x457 = 7U;
	volatile int64_t x458 = 422811870219LL;
	int16_t x460 = 1;
	int32_t t109 = -982105;

    t109 = (x457<=((x458%x459)|x460));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x462 = 1U;
	uint8_t x463 = 74U;
	static int16_t x464 = 0;
	static int32_t t110 = -10;

    t110 = (x461<=((x462%x463)|x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = INT16_MAX;
	uint32_t x466 = UINT32_MAX;
	int64_t x467 = INT64_MAX;
	static volatile uint64_t x468 = UINT64_MAX;
	static volatile int32_t t111 = 244410596;

    t111 = (x465<=((x466%x467)|x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x469 = 27;
	static int32_t x470 = INT32_MAX;
	int32_t x471 = -1;
	volatile uint64_t x472 = 25746250309609LLU;
	static int32_t t112 = 482;

    t112 = (x469<=((x470%x471)|x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x473 = 6U;
	volatile int64_t x474 = -362LL;
	static volatile int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MAX;
	int32_t t113 = -10;

    t113 = (x473<=((x474%x475)|x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x477 = UINT8_MAX;
	int32_t x478 = -5825944;
	static int8_t x479 = INT8_MIN;
	int32_t x480 = INT32_MAX;
	static volatile int32_t t114 = 458155;

    t114 = (x477<=((x478%x479)|x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x481 = INT32_MIN;
	uint32_t x482 = 25U;
	static volatile uint16_t x483 = 293U;
	int16_t x484 = 8;
	static volatile int32_t t115 = 577;

    t115 = (x481<=((x482%x483)|x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x485 = 2988777;
	int64_t x486 = INT64_MIN;
	static uint16_t x487 = UINT16_MAX;
	static volatile uint8_t x488 = 6U;
	int32_t t116 = 8880;

    t116 = (x485<=((x486%x487)|x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x489 = UINT64_MAX;
	uint64_t x490 = 66499602LLU;
	int32_t x491 = -29;
	volatile int32_t t117 = -311614836;

    t117 = (x489<=((x490%x491)|x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x493 = INT64_MAX;
	static uint16_t x494 = UINT16_MAX;
	volatile int32_t x495 = INT32_MIN;
	volatile int16_t x496 = INT16_MIN;

    t118 = (x493<=((x494%x495)|x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x497 = 261081708834782597LL;
	static int32_t x498 = INT32_MAX;
	volatile uint32_t x500 = 293179263U;
	int32_t t119 = 3;

    t119 = (x497<=((x498%x499)|x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x501 = INT32_MIN;
	static uint8_t x503 = 10U;
	int32_t t120 = -825116;

    t120 = (x501<=((x502%x503)|x504));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x505 = INT32_MIN;
	volatile int64_t x506 = INT64_MIN;
	volatile int16_t x507 = INT16_MAX;
	int64_t x508 = -1LL;

    t121 = (x505<=((x506%x507)|x508));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = INT32_MAX;
	uint64_t x510 = 21199339LLU;
	volatile int32_t x511 = INT32_MIN;
	volatile int32_t x512 = -19852162;
	volatile int32_t t122 = -1848;

    t122 = (x509<=((x510%x511)|x512));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x514 = INT32_MIN;
	uint16_t x515 = 21392U;
	volatile int16_t x516 = -741;

    t123 = (x513<=((x514%x515)|x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x517 = INT64_MAX;
	int8_t x520 = 1;
	volatile int32_t t124 = -50119;

    t124 = (x517<=((x518%x519)|x520));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x522 = INT16_MIN;
	int8_t x523 = 38;
	int16_t x524 = -2;

    t125 = (x521<=((x522%x523)|x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x525 = UINT8_MAX;
	uint16_t x527 = 2U;
	int16_t x528 = INT16_MIN;
	volatile int32_t t126 = 709980792;

    t126 = (x525<=((x526%x527)|x528));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x530 = INT64_MIN;
	volatile int8_t x531 = INT8_MAX;
	int32_t x532 = INT32_MIN;
	int32_t t127 = -549;

    t127 = (x529<=((x530%x531)|x532));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x533 = -1722;
	int32_t x534 = INT32_MIN;
	volatile int16_t x535 = 4314;
	volatile int32_t t128 = -2748;

    t128 = (x533<=((x534%x535)|x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x537 = UINT16_MAX;
	int64_t x538 = INT64_MIN;
	int64_t x539 = -1LL;
	int32_t t129 = -2001;

    t129 = (x537<=((x538%x539)|x540));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x541 = 3U;
	uint8_t x542 = 4U;
	uint16_t x544 = 174U;
	static volatile int32_t t130 = -3750088;

    t130 = (x541<=((x542%x543)|x544));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x545 = INT8_MIN;
	uint16_t x546 = UINT16_MAX;
	static int64_t x547 = -14394358759LL;
	uint8_t x548 = UINT8_MAX;

    t131 = (x545<=((x546%x547)|x548));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x549 = UINT32_MAX;
	uint8_t x550 = UINT8_MAX;
	static uint32_t x551 = 179094U;
	volatile uint8_t x552 = 1U;
	volatile int32_t t132 = 29170;

    t132 = (x549<=((x550%x551)|x552));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x553 = 19U;
	volatile int8_t x554 = INT8_MIN;
	int64_t x555 = INT64_MIN;
	static int32_t t133 = 250940;

    t133 = (x553<=((x554%x555)|x556));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x557 = UINT16_MAX;
	uint64_t x558 = UINT64_MAX;
	volatile uint64_t x559 = 2597070654837648LLU;
	volatile int64_t x560 = INT64_MAX;
	volatile int32_t t134 = 3;

    t134 = (x557<=((x558%x559)|x560));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x562 = -1;
	volatile int8_t x563 = INT8_MIN;
	int16_t x564 = -1;
	volatile int32_t t135 = 8;

    t135 = (x561<=((x562%x563)|x564));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x565 = 661462223;
	volatile int32_t x566 = -5185;
	uint64_t x567 = UINT64_MAX;
	int16_t x568 = -1;

    t136 = (x565<=((x566%x567)|x568));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x570 = INT64_MAX;
	uint16_t x571 = UINT16_MAX;
	uint64_t x572 = UINT64_MAX;

    t137 = (x569<=((x570%x571)|x572));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x573 = -10672LL;
	int64_t x574 = 1244999010290533LL;
	static int32_t x576 = -116167523;
	volatile int32_t t138 = -48954;

    t138 = (x573<=((x574%x575)|x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x578 = INT32_MIN;
	int8_t x579 = 6;
	uint16_t x580 = 591U;

    t139 = (x577<=((x578%x579)|x580));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x581 = INT16_MIN;
	int16_t x582 = INT16_MIN;
	uint8_t x583 = UINT8_MAX;
	static volatile int32_t t140 = 207;

    t140 = (x581<=((x582%x583)|x584));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x586 = 65926707152279871LLU;
	int32_t x587 = INT32_MIN;

    t141 = (x585<=((x586%x587)|x588));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x589 = 20U;
	int16_t x590 = -1256;
	int64_t x591 = -1LL;
	int32_t x592 = -1;
	int32_t t142 = -77338;

    t142 = (x589<=((x590%x591)|x592));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x597 = -1;
	static volatile uint16_t x599 = UINT16_MAX;
	uint64_t x600 = 3990450546710LLU;
	int32_t t143 = 207966958;

    t143 = (x597<=((x598%x599)|x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int16_t x601 = 0;
	int32_t x602 = -1;
	uint8_t x603 = 7U;
	int8_t x604 = 0;
	static volatile int32_t t144 = -440867869;

    t144 = (x601<=((x602%x603)|x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x605 = INT64_MIN;
	int8_t x606 = INT8_MIN;
	int32_t x607 = INT32_MIN;
	uint64_t x608 = 5523324696898LLU;

    t145 = (x605<=((x606%x607)|x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x609 = INT16_MIN;
	int64_t x611 = INT64_MAX;
	static volatile uint16_t x612 = 70U;
	volatile int32_t t146 = 843;

    t146 = (x609<=((x610%x611)|x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x613 = UINT32_MAX;
	uint16_t x614 = 821U;
	int32_t x616 = 986560615;
	int32_t t147 = -7637;

    t147 = (x613<=((x614%x615)|x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x618 = INT8_MAX;
	static int64_t x619 = INT64_MIN;
	volatile int32_t t148 = -35243906;

    t148 = (x617<=((x618%x619)|x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x621 = -1;
	int64_t x623 = -860LL;
	int32_t x624 = 72958;
	int32_t t149 = 31394373;

    t149 = (x621<=((x622%x623)|x624));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x625 = UINT32_MAX;
	static volatile int32_t x627 = INT32_MIN;
	static int32_t x628 = -1;
	int32_t t150 = -1848;

    t150 = (x625<=((x626%x627)|x628));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x629 = INT64_MIN;
	uint16_t x630 = 4847U;
	static volatile int8_t x631 = INT8_MAX;
	static int64_t x632 = INT64_MIN;
	int32_t t151 = -1;

    t151 = (x629<=((x630%x631)|x632));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x633 = UINT8_MAX;
	int32_t x634 = INT32_MIN;
	int64_t x635 = -1LL;
	int16_t x636 = -1;

    t152 = (x633<=((x634%x635)|x636));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x637 = -1LL;
	int64_t x639 = 276773359390992921LL;
	int64_t x640 = INT64_MAX;
	volatile int32_t t153 = 1264;

    t153 = (x637<=((x638%x639)|x640));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x642 = INT32_MAX;
	volatile uint64_t x644 = UINT64_MAX;
	volatile int32_t t154 = 256076501;

    t154 = (x641<=((x642%x643)|x644));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x646 = -16205;
	volatile uint16_t x647 = 8280U;
	int32_t t155 = -5691;

    t155 = (x645<=((x646%x647)|x648));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x650 = 54292267LL;
	int32_t x651 = -2;
	int32_t t156 = -39275154;

    t156 = (x649<=((x650%x651)|x652));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x653 = 345LL;
	uint16_t x655 = 216U;
	int16_t x656 = 59;
	int32_t t157 = -2764584;

    t157 = (x653<=((x654%x655)|x656));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x657 = -1LL;
	int32_t x659 = INT32_MIN;

    t158 = (x657<=((x658%x659)|x660));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x661 = INT8_MIN;
	int32_t t159 = -637;

    t159 = (x661<=((x662%x663)|x664));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x665 = 4U;
	int32_t x667 = -1;
	uint16_t x668 = 1U;
	int32_t t160 = 51512;

    t160 = (x665<=((x666%x667)|x668));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x671 = -1;
	int64_t x672 = INT64_MIN;

    t161 = (x669<=((x670%x671)|x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x673 = UINT16_MAX;
	int32_t x674 = INT32_MAX;
	uint8_t x675 = 52U;
	volatile int32_t t162 = 193;

    t162 = (x673<=((x674%x675)|x676));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x682 = INT8_MIN;
	int64_t x683 = INT64_MIN;
	static int16_t x684 = -202;
	int32_t t163 = -7657;

    t163 = (x681<=((x682%x683)|x684));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x685 = -1;
	volatile int32_t x686 = INT32_MAX;
	static int32_t x687 = 121617;
	static int64_t x688 = INT64_MIN;
	volatile int32_t t164 = 47;

    t164 = (x685<=((x686%x687)|x688));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x689 = INT16_MAX;
	int64_t x690 = INT64_MAX;
	uint8_t x691 = 41U;
	int32_t x692 = -1;
	volatile int32_t t165 = -207442;

    t165 = (x689<=((x690%x691)|x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x693 = 5337086712999LLU;
	int8_t x694 = INT8_MIN;
	uint32_t x695 = UINT32_MAX;
	int16_t x696 = 9732;
	int32_t t166 = 21482142;

    t166 = (x693<=((x694%x695)|x696));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x698 = INT16_MAX;
	int64_t x699 = INT64_MIN;
	int32_t x700 = INT32_MAX;
	volatile int32_t t167 = 16;

    t167 = (x697<=((x698%x699)|x700));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x705 = INT32_MIN;
	volatile int64_t x707 = 1644068573676LL;
	volatile int32_t t168 = -145;

    t168 = (x705<=((x706%x707)|x708));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x709 = INT8_MIN;
	static volatile int32_t x710 = -1;
	int32_t x711 = INT32_MIN;
	static int8_t x712 = INT8_MAX;

    t169 = (x709<=((x710%x711)|x712));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x713 = INT32_MIN;
	volatile int16_t x714 = -1;
	int64_t x715 = INT64_MIN;
	volatile int64_t x716 = INT64_MAX;

    t170 = (x713<=((x714%x715)|x716));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x718 = INT32_MIN;
	int16_t x719 = -1;
	int16_t x720 = -687;
	int32_t t171 = -2833;

    t171 = (x717<=((x718%x719)|x720));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x721 = UINT16_MAX;
	uint64_t x722 = 261949LLU;
	uint64_t x723 = 461LLU;
	int8_t x724 = INT8_MIN;
	int32_t t172 = 3;

    t172 = (x721<=((x722%x723)|x724));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x726 = -78719680353431521LL;
	int8_t x727 = INT8_MAX;
	static int8_t x728 = -1;
	volatile int32_t t173 = -23;

    t173 = (x725<=((x726%x727)|x728));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x729 = -1;
	volatile uint32_t x730 = UINT32_MAX;
	int64_t x732 = INT64_MAX;
	int32_t t174 = 478;

    t174 = (x729<=((x730%x731)|x732));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x733 = UINT16_MAX;
	int64_t x734 = -3886517766104911408LL;
	int32_t x735 = INT32_MAX;
	volatile uint8_t x736 = 1U;
	int32_t t175 = 16772283;

    t175 = (x733<=((x734%x735)|x736));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x737 = 12483LL;
	int32_t x739 = -23417;
	int8_t x740 = INT8_MIN;
	int32_t t176 = -29325;

    t176 = (x737<=((x738%x739)|x740));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x741 = -1LL;
	int64_t x742 = INT64_MIN;
	uint64_t x743 = 2655958259594LLU;
	volatile uint16_t x744 = 11U;
	static volatile int32_t t177 = -29817082;

    t177 = (x741<=((x742%x743)|x744));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x745 = 479;
	int8_t x746 = 24;
	int16_t x747 = -1;
	volatile int16_t x748 = -1;
	volatile int32_t t178 = -496;

    t178 = (x745<=((x746%x747)|x748));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x749 = 7U;
	static int8_t x752 = INT8_MAX;
	volatile int32_t t179 = 64671242;

    t179 = (x749<=((x750%x751)|x752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x753 = 2209U;
	volatile int32_t x754 = INT32_MIN;
	int64_t x755 = 725334613456919LL;
	int32_t t180 = -9;

    t180 = (x753<=((x754%x755)|x756));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x757 = 840686028041LLU;
	int8_t x758 = -1;
	int16_t x760 = INT16_MIN;
	int32_t t181 = 150;

    t181 = (x757<=((x758%x759)|x760));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x761 = INT16_MIN;
	volatile int64_t x762 = INT64_MIN;
	volatile int16_t x763 = INT16_MIN;
	int32_t x764 = INT32_MAX;
	volatile int32_t t182 = 5763839;

    t182 = (x761<=((x762%x763)|x764));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x765 = -1;
	int8_t x767 = INT8_MAX;
	uint32_t x768 = 16337U;
	int32_t t183 = 1052802584;

    t183 = (x765<=((x766%x767)|x768));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint8_t x769 = UINT8_MAX;
	int16_t x770 = -1;
	static uint64_t x771 = 132470058LLU;
	static int64_t x772 = INT64_MAX;
	volatile int32_t t184 = -3698920;

    t184 = (x769<=((x770%x771)|x772));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x774 = 1U;
	volatile int32_t x775 = 4721873;
	uint8_t x776 = 1U;
	int32_t t185 = -5688;

    t185 = (x773<=((x774%x775)|x776));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x777 = -1LL;
	int32_t x778 = INT32_MIN;
	int32_t x779 = -1;
	static int8_t x780 = INT8_MAX;
	int32_t t186 = 1248048;

    t186 = (x777<=((x778%x779)|x780));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x781 = -1;
	int8_t x782 = INT8_MIN;
	int32_t t187 = -10;

    t187 = (x781<=((x782%x783)|x784));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x789 = 814U;
	int16_t x790 = 449;
	int8_t x791 = -1;
	int32_t x792 = 118672670;
	int32_t t188 = 1;

    t188 = (x789<=((x790%x791)|x792));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x793 = 151545142LL;
	static int16_t x794 = 45;
	int32_t x795 = INT32_MIN;
	static volatile int8_t x796 = INT8_MIN;

    t189 = (x793<=((x794%x795)|x796));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x797 = UINT64_MAX;
	int64_t x800 = -1LL;
	int32_t t190 = -503;

    t190 = (x797<=((x798%x799)|x800));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x801 = INT8_MIN;
	int32_t x802 = 1;
	uint16_t x803 = 6U;
	int16_t x804 = -1;
	volatile int32_t t191 = 4;

    t191 = (x801<=((x802%x803)|x804));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x805 = 1;
	volatile uint8_t x806 = 118U;
	uint64_t x807 = UINT64_MAX;
	int32_t t192 = -23088;

    t192 = (x805<=((x806%x807)|x808));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x809 = INT8_MIN;
	uint16_t x810 = UINT16_MAX;
	static int16_t x811 = INT16_MIN;
	static int8_t x812 = -1;
	static int32_t t193 = 982807741;

    t193 = (x809<=((x810%x811)|x812));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x813 = -264220;
	static int64_t x814 = -1LL;
	uint16_t x815 = 1765U;
	int32_t t194 = -542;

    t194 = (x813<=((x814%x815)|x816));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x817 = -1;
	volatile uint32_t x818 = 75U;
	uint64_t x819 = UINT64_MAX;
	uint16_t x820 = 9U;
	static int32_t t195 = 37095;

    t195 = (x817<=((x818%x819)|x820));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x821 = INT16_MIN;
	uint64_t x824 = 65378806585792LLU;

    t196 = (x821<=((x822%x823)|x824));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x825 = -1;
	uint32_t x826 = UINT32_MAX;
	volatile int32_t t197 = 394495;

    t197 = (x825<=((x826%x827)|x828));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x829 = -142;
	int8_t x830 = -1;
	int64_t x831 = INT64_MIN;
	int32_t x832 = -1;
	volatile int32_t t198 = -684675;

    t198 = (x829<=((x830%x831)|x832));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x833 = 50072079032950LLU;
	int16_t x834 = INT16_MIN;
	int8_t x835 = -1;
	int32_t x836 = INT32_MIN;

    t199 = (x833<=((x834%x835)|x836));

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

