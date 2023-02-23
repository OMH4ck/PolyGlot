
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

volatile int64_t x5 = INT64_MIN;
int8_t x15 = 0;
static int8_t x20 = -1;
int16_t x21 = INT16_MIN;
volatile int32_t t5 = 46031;
static volatile int32_t x25 = INT32_MIN;
static int8_t x27 = INT8_MIN;
static volatile int16_t x28 = -1016;
int64_t x30 = INT64_MAX;
uint32_t t7 = 101170101U;
int8_t x44 = INT8_MAX;
uint8_t x45 = 0U;
int32_t x48 = -44291845;
volatile int32_t t11 = -14070249;
int8_t x58 = INT8_MIN;
int8_t x62 = 0;
static int32_t x68 = -1;
int32_t x76 = INT32_MIN;
int16_t x81 = -1;
volatile int32_t x93 = -52142;
uint64_t x98 = 102LLU;
int64_t x101 = INT64_MAX;
int16_t x102 = INT16_MIN;
int64_t t25 = 1065505956799LL;
static int16_t x106 = 9;
volatile int64_t x110 = 1LL;
int16_t x116 = -13309;
volatile uint64_t x118 = UINT64_MAX;
uint8_t x123 = 81U;
int32_t t30 = 246139763;
int64_t t31 = -247677960850851LL;
volatile int64_t t32 = -794436LL;
uint64_t x135 = 1582LLU;
int32_t x136 = -1;
uint8_t x140 = 42U;
static uint64_t x144 = 149LLU;
volatile int64_t x145 = INT64_MIN;
uint32_t x153 = 474913U;
int8_t x154 = 0;
static int32_t x156 = INT32_MAX;
volatile uint32_t t38 = 95U;
int64_t t39 = -42154LL;
static uint32_t x165 = 1407582462U;
static volatile uint32_t x171 = 6U;
volatile int32_t x172 = INT32_MAX;
volatile int32_t t44 = -127248293;
int32_t x183 = 385;
int32_t x192 = INT32_MIN;
volatile uint64_t x196 = UINT64_MAX;
int32_t x202 = INT32_MAX;
uint64_t x209 = UINT64_MAX;
static int8_t x214 = -12;
int16_t x220 = INT16_MIN;
uint32_t x222 = 2334U;
uint8_t x225 = 51U;
uint64_t x230 = UINT64_MAX;
int16_t x233 = INT16_MAX;
int16_t x241 = INT16_MAX;
volatile int32_t x248 = INT32_MIN;
int32_t x256 = INT32_MIN;
static uint64_t x257 = 61133358826312LLU;
volatile uint64_t t64 = 682LLU;
uint64_t x262 = 693972222929043730LLU;
int32_t x264 = INT32_MIN;
volatile int16_t x272 = 25;
int8_t x274 = -10;
volatile uint16_t x277 = 47U;
volatile uint32_t x278 = 10088398U;
uint32_t x279 = 25291164U;
static int16_t x293 = -1;
static volatile int32_t t76 = 124877148;
int32_t t78 = 336;
int32_t x321 = -128352902;
int32_t x322 = INT32_MIN;
int64_t x327 = INT64_MAX;
volatile uint64_t t81 = 13LLU;
uint8_t x334 = 3U;
int64_t x335 = -438683079LL;
int64_t t84 = 4852346277661443LL;
int32_t x341 = INT32_MIN;
static int32_t x344 = 1;
uint64_t x345 = 4102893658LLU;
uint16_t x347 = 0U;
uint16_t x348 = 33U;
volatile uint64_t t86 = 56LLU;
uint16_t x351 = 511U;
int16_t x354 = 7;
volatile int32_t t90 = 7122131;
int64_t x365 = INT64_MIN;
int16_t x373 = INT16_MIN;
volatile int32_t x374 = -1;
int8_t x378 = INT8_MAX;
volatile uint64_t x380 = 1LLU;
int8_t x394 = 0;
int32_t t97 = -574192;
int32_t t102 = 8908;
static volatile int64_t x418 = -69197470651251608LL;
volatile int32_t t104 = 25365;
uint64_t x425 = UINT64_MAX;
int16_t x428 = INT16_MIN;
int8_t x429 = -1;
int32_t x431 = INT32_MAX;
uint64_t t106 = 4LLU;
int64_t x433 = INT64_MAX;
int32_t x438 = -1;
int64_t t108 = -14LL;
int64_t x444 = -1320894631871LL;
uint16_t x446 = UINT16_MAX;
int8_t x449 = INT8_MIN;
int8_t x452 = 8;
int32_t x454 = INT32_MAX;
volatile int8_t x455 = INT8_MIN;
volatile int8_t x456 = 2;
volatile uint16_t x463 = 99U;
int16_t x468 = -1;
uint64_t x472 = 537804LLU;
int32_t x479 = INT32_MIN;
int8_t x500 = -6;
uint8_t x502 = UINT8_MAX;
static uint8_t x504 = UINT8_MAX;
volatile int32_t t124 = -691068;
volatile int32_t t125 = 29246788;
static volatile int32_t t129 = -947;
uint8_t x531 = UINT8_MAX;
uint64_t x542 = 4849523394LLU;
int32_t t135 = 313850;
int16_t x551 = 166;
volatile int64_t x557 = INT64_MAX;
uint8_t x558 = 1U;
uint64_t t138 = 1189603LLU;
static int16_t x570 = INT16_MAX;
int32_t x572 = -382569;
static int8_t x581 = INT8_MAX;
int32_t x583 = INT32_MIN;
int16_t x586 = -3;
int32_t x590 = -1;
volatile int32_t x596 = -1;
uint8_t x609 = 0U;
volatile int16_t x611 = -1;
static volatile int32_t t151 = 217;
static uint32_t x618 = 1335233U;
int32_t x619 = INT32_MAX;
int32_t t153 = 253736;
int8_t x624 = -1;
uint32_t x634 = 98872879U;
uint32_t x635 = 3204U;
int32_t x637 = INT32_MAX;
volatile int32_t t158 = -12;
int64_t x647 = 94621LL;
volatile int32_t x648 = INT32_MAX;
static volatile int8_t x651 = INT8_MAX;
int16_t x665 = INT16_MAX;
int64_t x670 = 20703LL;
int16_t x674 = INT16_MIN;
static int8_t x677 = INT8_MIN;
volatile int32_t t168 = -578756;
uint32_t x681 = 778295U;
uint8_t x682 = 22U;
uint64_t x688 = 168074884809LLU;
static uint64_t t170 = 48LLU;
int64_t x691 = -483643728161LL;
int64_t x699 = 517588728674LL;
volatile int32_t t173 = -421983;
volatile int16_t x702 = -1;
int64_t x705 = 5776750146485LL;
int8_t x709 = INT8_MAX;
int8_t x710 = 1;
volatile uint8_t x713 = UINT8_MAX;
int8_t x714 = INT8_MIN;
int8_t x717 = -29;
volatile int32_t t178 = 9226090;
static int64_t x724 = INT64_MAX;
volatile int8_t x726 = INT8_MAX;
uint16_t x728 = UINT16_MAX;
int16_t x730 = INT16_MAX;
int64_t x732 = INT64_MIN;
int32_t x736 = INT32_MIN;
int32_t x737 = -1;
uint8_t x739 = 1U;
int16_t x740 = 8260;
int16_t x741 = -1;
int16_t x747 = INT16_MIN;
volatile uint8_t x751 = UINT8_MAX;
volatile uint8_t x753 = 1U;
uint16_t x760 = 853U;
volatile int32_t t188 = -275403;
static volatile uint32_t t190 = 46472662U;
static int8_t x775 = -1;
static uint8_t x776 = UINT8_MAX;
volatile int32_t x781 = INT32_MAX;
int32_t t193 = 138;
static uint8_t x789 = 43U;
int64_t x803 = -1LL;
uint32_t x805 = 2044U;


void f0(void) {
    	static volatile uint64_t x1 = 6891793939LLU;
	uint32_t x2 = 54718U;
	uint32_t x3 = UINT32_MAX;
	int64_t x4 = INT64_MAX;
	static volatile uint64_t t0 = 613316959989LLU;

    t0 = (x1&((x2>x3)/x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x6 = INT16_MIN;
	static uint32_t x7 = UINT32_MAX;
	int32_t x8 = -1;
	volatile int64_t t1 = 1LL;

    t1 = (x5&((x6>x7)/x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -6368652;
	static volatile int32_t x10 = -100149045;
	int8_t x11 = INT8_MIN;
	int64_t x12 = -3LL;
	int64_t t2 = -1947758488492833605LL;

    t2 = (x9&((x10>x11)/x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x13 = 0U;
	static volatile int64_t x14 = INT64_MIN;
	static volatile int32_t x16 = INT32_MIN;
	int32_t t3 = 147;

    t3 = (x13&((x14>x15)/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = INT16_MAX;
	int32_t x18 = 5583;
	int8_t x19 = INT8_MAX;
	volatile int32_t t4 = 1;

    t4 = (x17&((x18>x19)/x20));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 5U;
	uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MIN;

    t5 = (x21&((x22>x23)/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -1;
	volatile int32_t t6 = -155;

    t6 = (x25&((x26>x27)/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 6U;
	static volatile uint8_t x31 = 12U;
	uint32_t x32 = 33149U;

    t7 = (x29&((x30>x31)/x32));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 302U;
	int64_t x34 = INT64_MIN;
	uint16_t x35 = UINT16_MAX;
	volatile uint64_t x36 = 11890528678449341LLU;
	static volatile uint64_t t8 = 647761908967364532LLU;

    t8 = (x33&((x34>x35)/x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int64_t x38 = -1LL;
	volatile int16_t x39 = INT16_MIN;
	uint16_t x40 = UINT16_MAX;
	int64_t t9 = 65542517588658622LL;

    t9 = (x37&((x38>x39)/x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 9719692LLU;
	int16_t x42 = -1;
	int16_t x43 = INT16_MIN;
	uint64_t t10 = 7LLU;

    t10 = (x41&((x42>x43)/x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = 160627;
	static int32_t x47 = -1;

    t11 = (x45&((x46>x47)/x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = INT8_MAX;
	int64_t x50 = -1LL;
	uint32_t x51 = 2017073252U;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = 11611;

    t12 = (x49&((x50>x51)/x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	static int32_t x54 = INT32_MAX;
	uint16_t x55 = 5U;
	uint32_t x56 = 420076U;
	static volatile int64_t t13 = -2697832742LL;

    t13 = (x53&((x54>x55)/x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = 1;
	int8_t x59 = INT8_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t14 = -1911;

    t14 = (x57&((x58>x59)/x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = 11;
	volatile uint32_t x63 = UINT32_MAX;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 0;

    t15 = (x61&((x62>x63)/x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 5756418U;
	int8_t x66 = -1;
	int64_t x67 = -1LL;
	volatile uint32_t t16 = 15839U;

    t16 = (x65&((x66>x67)/x68));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	int32_t x70 = INT32_MIN;
	static int64_t x71 = -562009951106454463LL;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = 1;

    t17 = (x69&((x70>x71)/x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	static volatile int8_t x74 = INT8_MIN;
	static uint32_t x75 = 4659286U;
	int32_t t18 = -18109;

    t18 = (x73&((x74>x75)/x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	uint8_t x78 = 7U;
	uint8_t x79 = 0U;
	static uint64_t x80 = 1LLU;
	uint64_t t19 = 360874762095LLU;

    t19 = (x77&((x78>x79)/x80));

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x82 = -7469;
	int32_t x83 = INT32_MIN;
	volatile int8_t x84 = INT8_MIN;
	int32_t t20 = 996665470;

    t20 = (x81&((x82>x83)/x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -416581318;
	int8_t x86 = -40;
	int16_t x87 = INT16_MIN;
	int64_t x88 = -216408LL;
	volatile int64_t t21 = -30128641955058576LL;

    t21 = (x85&((x86>x87)/x88));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -721385LL;
	uint32_t x90 = UINT32_MAX;
	volatile int64_t x91 = -1LL;
	static int64_t x92 = -180961LL;
	int64_t t22 = 241299LL;

    t22 = (x89&((x90>x91)/x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = 5882;

    t23 = (x93&((x94>x95)/x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = INT64_MAX;
	static volatile int64_t x99 = INT64_MIN;
	uint64_t x100 = UINT64_MAX;
	static volatile uint64_t t24 = 8101305122LLU;

    t24 = (x97&((x98>x99)/x100));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x103 = 120;
	int8_t x104 = -1;

    t25 = (x101&((x102>x103)/x104));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int64_t x107 = -1980981593006LL;
	int8_t x108 = -1;
	volatile int32_t t26 = 2470;

    t26 = (x105&((x106>x107)/x108));

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -173420;
	static uint8_t x111 = UINT8_MAX;
	uint8_t x112 = UINT8_MAX;
	static volatile int32_t t27 = 1679546;

    t27 = (x109&((x110>x111)/x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = UINT16_MAX;
	int64_t x114 = INT64_MIN;
	static int8_t x115 = 0;
	volatile int32_t t28 = 5;

    t28 = (x113&((x114>x115)/x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int64_t x119 = -1617081376LL;
	int8_t x120 = INT8_MIN;
	int64_t t29 = 6306958LL;

    t29 = (x117&((x118>x119)/x120));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 17;
	volatile uint8_t x122 = UINT8_MAX;
	uint8_t x124 = 14U;

    t30 = (x121&((x122>x123)/x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	uint64_t x126 = 345741090442LLU;
	int32_t x127 = -24864;
	volatile uint8_t x128 = 1U;

    t31 = (x125&((x126>x127)/x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	static int16_t x130 = 126;
	static uint32_t x131 = UINT32_MAX;
	static int16_t x132 = -1;

    t32 = (x129&((x130>x131)/x132));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = UINT16_MAX;
	static uint16_t x134 = 7377U;
	volatile int32_t t33 = 0;

    t33 = (x133&((x134>x135)/x136));

    if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	static int64_t x139 = INT64_MIN;
	static int32_t t34 = 1683;

    t34 = (x137&((x138>x139)/x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 8;
	static int64_t x142 = -22130897501456LL;
	uint16_t x143 = 0U;
	volatile uint64_t t35 = 187708359346117LLU;

    t35 = (x141&((x142>x143)/x144));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x146 = UINT16_MAX;
	int64_t x147 = 351554840LL;
	int16_t x148 = INT16_MAX;
	static volatile int64_t t36 = -250007717922579LL;

    t36 = (x145&((x146>x147)/x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint64_t x149 = 50LLU;
	volatile uint64_t x150 = 47414941136913LLU;
	int16_t x151 = INT16_MIN;
	static uint32_t x152 = UINT32_MAX;
	uint64_t t37 = 11845125LLU;

    t37 = (x149&((x150>x151)/x152));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x155 = INT8_MIN;

    t38 = (x153&((x154>x155)/x156));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = -1;
	int32_t x158 = 505683;
	volatile int32_t x159 = INT32_MAX;
	int64_t x160 = -1LL;

    t39 = (x157&((x158>x159)/x160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	int16_t x162 = -1;
	int64_t x163 = INT64_MIN;
	int8_t x164 = -1;
	static int64_t t40 = INT64_MIN;

    t40 = (x161&((x162>x163)/x164));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = -1;
	int32_t x167 = -1094;
	static uint64_t x168 = 11440432708LLU;
	uint64_t t41 = 40107687465311828LLU;

    t41 = (x165&((x166>x167)/x168));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -1LL;
	uint64_t x170 = UINT64_MAX;
	int64_t t42 = 147932129354198LL;

    t42 = (x169&((x170>x171)/x172));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	volatile int16_t x174 = 116;
	static volatile uint16_t x175 = 2757U;
	volatile uint16_t x176 = 15U;
	static volatile int32_t t43 = -6;

    t43 = (x173&((x174>x175)/x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 4984;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = INT16_MIN;
	static volatile int32_t x180 = -17565;

    t44 = (x177&((x178>x179)/x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	static int16_t x182 = 21;
	static uint32_t x184 = UINT32_MAX;
	volatile int64_t t45 = -1702LL;

    t45 = (x181&((x182>x183)/x184));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = -8;
	int32_t x186 = INT32_MIN;
	uint32_t x187 = 9480U;
	int32_t x188 = INT32_MIN;
	int32_t t46 = -52;

    t46 = (x185&((x186>x187)/x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = 2026262116485579511LL;
	int64_t x190 = -4240LL;
	int32_t x191 = -1;
	int64_t t47 = -20832683LL;

    t47 = (x189&((x190>x191)/x192));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 480U;
	int32_t x194 = INT32_MIN;
	static uint64_t x195 = 927474378800531574LLU;
	volatile uint64_t t48 = 30LLU;

    t48 = (x193&((x194>x195)/x196));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 277U;
	volatile uint16_t x198 = 613U;
	int8_t x199 = INT8_MIN;
	volatile int64_t x200 = INT64_MIN;
	volatile int64_t t49 = -9944LL;

    t49 = (x197&((x198>x199)/x200));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	int8_t x204 = 10;
	int32_t t50 = 50;

    t50 = (x201&((x202>x203)/x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	volatile int8_t x206 = INT8_MIN;
	static volatile uint64_t x207 = UINT64_MAX;
	int32_t x208 = INT32_MIN;
	int32_t t51 = 63;

    t51 = (x205&((x206>x207)/x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x210 = 2U;
	uint32_t x211 = 782525395U;
	int16_t x212 = INT16_MIN;
	uint64_t t52 = 12LLU;

    t52 = (x209&((x210>x211)/x212));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	static int32_t x215 = INT32_MIN;
	uint16_t x216 = 7U;
	volatile int32_t t53 = 260855298;

    t53 = (x213&((x214>x215)/x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x217 = 32385U;
	volatile uint64_t x218 = UINT64_MAX;
	int8_t x219 = -2;
	volatile int32_t t54 = -229516;

    t54 = (x217&((x218>x219)/x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = 1LLU;
	int64_t x223 = INT64_MIN;
	static int16_t x224 = -1;
	uint64_t t55 = 85906LLU;

    t55 = (x221&((x222>x223)/x224));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x226 = INT16_MIN;
	uint8_t x227 = UINT8_MAX;
	static int16_t x228 = -11137;
	int32_t t56 = 12778;

    t56 = (x225&((x226>x227)/x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 48;
	uint64_t x231 = 1501607919588LLU;
	int16_t x232 = INT16_MIN;
	int32_t t57 = 1;

    t57 = (x229&((x230>x231)/x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x234 = -306169LL;
	int32_t x235 = -1;
	static int32_t x236 = INT32_MAX;
	volatile int32_t t58 = -16306;

    t58 = (x233&((x234>x235)/x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	uint8_t x239 = 28U;
	uint64_t x240 = 319172LLU;
	uint64_t t59 = 1005317LLU;

    t59 = (x237&((x238>x239)/x240));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x242 = INT16_MIN;
	int64_t x243 = -1LL;
	int8_t x244 = -2;
	volatile int32_t t60 = 86;

    t60 = (x241&((x242>x243)/x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	uint32_t x246 = 3914532U;
	static int64_t x247 = INT64_MAX;
	volatile int32_t t61 = -6414;

    t61 = (x245&((x246>x247)/x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x249 = 157556U;
	uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 1U;
	int8_t x252 = INT8_MAX;
	static volatile uint32_t t62 = 874259U;

    t62 = (x249&((x250>x251)/x252));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 36310381U;
	int64_t x254 = INT64_MIN;
	static int8_t x255 = INT8_MAX;
	static uint32_t t63 = 993U;

    t63 = (x253&((x254>x255)/x256));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = -1;
	int16_t x259 = INT16_MIN;
	volatile uint32_t x260 = 22941U;

    t64 = (x257&((x258>x259)/x260));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	int64_t x263 = -1LL;
	int64_t t65 = -13803308079050992LL;

    t65 = (x261&((x262>x263)/x264));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x265 = INT32_MAX;
	int64_t x266 = -1LL;
	static int8_t x267 = -18;
	uint64_t x268 = 12956245931480240LLU;
	uint64_t t66 = 108702656915LLU;

    t66 = (x265&((x266>x267)/x268));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x269 = INT16_MIN;
	volatile int32_t x270 = INT32_MIN;
	volatile int16_t x271 = INT16_MIN;
	int32_t t67 = -9471;

    t67 = (x269&((x270>x271)/x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	uint32_t x275 = 181881U;
	static uint32_t x276 = UINT32_MAX;
	volatile uint32_t t68 = 57096317U;

    t68 = (x273&((x274>x275)/x276));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 39;

    t69 = (x277&((x278>x279)/x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x281 = 1338186477518283313LLU;
	volatile uint32_t x282 = 7159U;
	int16_t x283 = -1;
	uint16_t x284 = UINT16_MAX;
	uint64_t t70 = 318196003195303910LLU;

    t70 = (x281&((x282>x283)/x284));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	volatile uint64_t x286 = 50784LLU;
	uint8_t x287 = 3U;
	int8_t x288 = 21;
	int32_t t71 = 0;

    t71 = (x285&((x286>x287)/x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	int32_t x290 = 812;
	int16_t x291 = INT16_MIN;
	static volatile int64_t x292 = INT64_MIN;
	int64_t t72 = 533341479005435LL;

    t72 = (x289&((x290>x291)/x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x294 = 1774U;
	int8_t x295 = INT8_MIN;
	volatile uint8_t x296 = 26U;
	int32_t t73 = 1798178;

    t73 = (x293&((x294>x295)/x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MIN;
	int16_t x298 = INT16_MIN;
	static int16_t x299 = -1;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = -1112400;

    t74 = (x297&((x298>x299)/x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x301 = INT16_MIN;
	uint32_t x302 = 4U;
	volatile int64_t x303 = INT64_MIN;
	static int64_t x304 = INT64_MIN;
	volatile int64_t t75 = -78842708921612608LL;

    t75 = (x301&((x302>x303)/x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	volatile uint32_t x306 = 134318200U;
	int8_t x307 = -1;
	static uint8_t x308 = 4U;

    t76 = (x305&((x306>x307)/x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x309 = -169506994295306581LL;
	static int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;
	static int64_t t77 = 91803073217057LL;

    t77 = (x309&((x310>x311)/x312));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -1;
	int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	uint8_t x316 = 4U;

    t78 = (x313&((x314>x315)/x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	volatile int64_t x318 = -1LL;
	uint64_t x319 = 155068812995795LLU;
	uint64_t x320 = 25266LLU;
	uint64_t t79 = 16296608LLU;

    t79 = (x317&((x318>x319)/x320));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x323 = INT16_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t80 = 130460U;

    t80 = (x321&((x322>x323)/x324));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	int32_t x326 = INT32_MAX;
	static volatile int8_t x328 = INT8_MIN;

    t81 = (x325&((x326>x327)/x328));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 94696LLU;
	uint32_t x330 = 1768U;
	volatile uint64_t x331 = 896260LLU;
	uint8_t x332 = 3U;
	uint64_t t82 = 1652462576981LLU;

    t82 = (x329&((x330>x331)/x332));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	static uint64_t x336 = 25439LLU;
	uint64_t t83 = 1072463LLU;

    t83 = (x333&((x334>x335)/x336));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 2209775931104614206LL;
	static uint8_t x338 = UINT8_MAX;
	uint64_t x339 = 5014264130226657953LLU;
	int16_t x340 = -1;

    t84 = (x337&((x338>x339)/x340));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x342 = 0;
	int32_t x343 = INT32_MIN;
	volatile int32_t t85 = -478;

    t85 = (x341&((x342>x343)/x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x346 = 193216983111717LLU;

    t86 = (x345&((x346>x347)/x348));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = 41614431767337LL;
	int64_t x350 = INT64_MIN;
	uint16_t x352 = UINT16_MAX;
	static int64_t t87 = 2LL;

    t87 = (x349&((x350>x351)/x352));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 41U;
	volatile int32_t x355 = INT32_MAX;
	int16_t x356 = -1;
	volatile int32_t t88 = 91558889;

    t88 = (x353&((x354>x355)/x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 2074247727LLU;
	volatile uint16_t x358 = 2742U;
	uint32_t x359 = UINT32_MAX;
	static volatile int32_t x360 = -61682367;
	volatile uint64_t t89 = 15790240342894836LLU;

    t89 = (x357&((x358>x359)/x360));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x361 = 22U;
	int8_t x362 = 34;
	static uint8_t x363 = 51U;
	int32_t x364 = -35440963;

    t90 = (x361&((x362>x363)/x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x366 = INT16_MIN;
	static int32_t x367 = INT32_MIN;
	static volatile int64_t x368 = INT64_MAX;
	int64_t t91 = -7606662852458LL;

    t91 = (x365&((x366>x367)/x368));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = 82343626752LL;
	int32_t x372 = -1;
	static volatile int32_t t92 = -82101;

    t92 = (x369&((x370>x371)/x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x375 = INT8_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t93 = 7658873LL;

    t93 = (x373&((x374>x375)/x376));

    if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -33;
	uint16_t x379 = 111U;
	volatile uint64_t t94 = 247524697LLU;

    t94 = (x377&((x378>x379)/x380));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = 108999700U;
	int8_t x382 = 9;
	static uint64_t x383 = 377294712394366LLU;
	static int8_t x384 = INT8_MIN;
	uint32_t t95 = 11902U;

    t95 = (x381&((x382>x383)/x384));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x389 = 436;
	int16_t x390 = INT16_MIN;
	uint64_t x391 = 387LLU;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t96 = 15824LLU;

    t96 = (x389&((x390>x391)/x392));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x393 = INT8_MIN;
	uint16_t x395 = 1318U;
	static volatile int16_t x396 = INT16_MAX;

    t97 = (x393&((x394>x395)/x396));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x397 = -1;
	int8_t x398 = -1;
	static int8_t x399 = 0;
	uint16_t x400 = 946U;
	volatile int32_t t98 = -2;

    t98 = (x397&((x398>x399)/x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x401 = 623471609U;
	int32_t x402 = -1;
	static int32_t x403 = -1;
	int8_t x404 = -41;
	uint32_t t99 = 131709U;

    t99 = (x401&((x402>x403)/x404));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x405 = 170;
	static int16_t x406 = -7;
	static int8_t x407 = INT8_MAX;
	uint8_t x408 = 6U;
	int32_t t100 = 289832375;

    t100 = (x405&((x406>x407)/x408));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x409 = INT64_MAX;
	volatile int16_t x410 = -46;
	static uint32_t x411 = UINT32_MAX;
	static int64_t x412 = 208934LL;
	int64_t t101 = 13119750748LL;

    t101 = (x409&((x410>x411)/x412));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x413 = 1;
	int8_t x414 = INT8_MIN;
	static int64_t x415 = 47281LL;
	int8_t x416 = INT8_MIN;

    t102 = (x413&((x414>x415)/x416));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x417 = UINT32_MAX;
	uint16_t x419 = 18U;
	volatile int8_t x420 = INT8_MIN;
	uint32_t t103 = 21089507U;

    t103 = (x417&((x418>x419)/x420));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x421 = INT32_MAX;
	static int8_t x422 = -1;
	volatile int8_t x423 = -5;
	int16_t x424 = INT16_MAX;

    t104 = (x421&((x422>x423)/x424));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x426 = -1;
	int64_t x427 = -716LL;
	volatile uint64_t t105 = 1590025LLU;

    t105 = (x425&((x426>x427)/x428));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x430 = INT32_MIN;
	static uint64_t x432 = UINT64_MAX;

    t106 = (x429&((x430>x431)/x432));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MIN;
	static int16_t x436 = INT16_MAX;
	static volatile int64_t t107 = -64337249552996LL;

    t107 = (x433&((x434>x435)/x436));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x437 = UINT16_MAX;
	int16_t x439 = 7503;
	int64_t x440 = INT64_MAX;

    t108 = (x437&((x438>x439)/x440));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x441 = INT16_MAX;
	static uint16_t x442 = 1U;
	uint16_t x443 = UINT16_MAX;
	static int64_t t109 = 163318070127LL;

    t109 = (x441&((x442>x443)/x444));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x445 = -5429299530LL;
	int16_t x447 = INT16_MAX;
	volatile int8_t x448 = INT8_MIN;
	volatile int64_t t110 = -21429727647442LL;

    t110 = (x445&((x446>x447)/x448));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x450 = -1;
	int64_t x451 = INT64_MIN;
	volatile int32_t t111 = 266298;

    t111 = (x449&((x450>x451)/x452));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x453 = 6U;
	volatile int32_t t112 = 721500503;

    t112 = (x453&((x454>x455)/x456));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x457 = INT16_MIN;
	int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MIN;
	int16_t x460 = INT16_MIN;
	static int32_t t113 = 117250;

    t113 = (x457&((x458>x459)/x460));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x461 = INT64_MIN;
	int32_t x462 = -1;
	int8_t x464 = -1;
	int64_t t114 = -6547331LL;

    t114 = (x461&((x462>x463)/x464));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = -1;
	uint16_t x466 = UINT16_MAX;
	static uint64_t x467 = UINT64_MAX;
	volatile int32_t t115 = 13620;

    t115 = (x465&((x466>x467)/x468));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x469 = 797974;
	int16_t x470 = -513;
	static volatile uint64_t x471 = UINT64_MAX;
	volatile uint64_t t116 = 579560092772118092LLU;

    t116 = (x469&((x470>x471)/x472));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x473 = INT16_MIN;
	int8_t x474 = 4;
	static int32_t x475 = 0;
	int8_t x476 = -1;
	static volatile int32_t t117 = -61752925;

    t117 = (x473&((x474>x475)/x476));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x477 = INT8_MIN;
	volatile int16_t x478 = -3103;
	uint32_t x480 = UINT32_MAX;
	volatile uint32_t t118 = 1U;

    t118 = (x477&((x478>x479)/x480));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x481 = -50;
	volatile uint64_t x482 = 1822567LLU;
	int8_t x483 = -1;
	uint32_t x484 = 7U;
	uint32_t t119 = 31292141U;

    t119 = (x481&((x482>x483)/x484));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x485 = INT16_MAX;
	static volatile uint64_t x486 = 3795412876LLU;
	volatile int16_t x487 = 7118;
	volatile int64_t x488 = INT64_MAX;
	static int64_t t120 = -194941076916802907LL;

    t120 = (x485&((x486>x487)/x488));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x489 = INT8_MIN;
	int64_t x490 = -1680367084969LL;
	int8_t x491 = -1;
	volatile uint16_t x492 = UINT16_MAX;
	int32_t t121 = -59702;

    t121 = (x489&((x490>x491)/x492));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x493 = 103U;
	volatile uint64_t x494 = 396366490673449545LLU;
	volatile int32_t x495 = INT32_MIN;
	int32_t x496 = -1;
	volatile uint32_t t122 = 3169591U;

    t122 = (x493&((x494>x495)/x496));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x497 = 4U;
	volatile uint64_t x498 = 3235867196661903LLU;
	volatile int64_t x499 = -2092295106284739226LL;
	int32_t t123 = -45976828;

    t123 = (x497&((x498>x499)/x500));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x501 = 0U;
	static int8_t x503 = INT8_MIN;

    t124 = (x501&((x502>x503)/x504));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x505 = INT32_MAX;
	static int64_t x506 = -1LL;
	static int32_t x507 = INT32_MAX;
	int8_t x508 = INT8_MIN;

    t125 = (x505&((x506>x507)/x508));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x509 = INT8_MAX;
	static volatile int16_t x510 = INT16_MIN;
	int8_t x511 = INT8_MIN;
	static int8_t x512 = INT8_MAX;
	int32_t t126 = 5;

    t126 = (x509&((x510>x511)/x512));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x513 = INT16_MIN;
	uint8_t x514 = UINT8_MAX;
	int16_t x515 = -1;
	int8_t x516 = INT8_MIN;
	static volatile int32_t t127 = -1600;

    t127 = (x513&((x514>x515)/x516));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x517 = -29052235;
	int8_t x518 = INT8_MAX;
	int8_t x519 = INT8_MIN;
	int64_t x520 = -199820368705LL;
	int64_t t128 = -4159714156788LL;

    t128 = (x517&((x518>x519)/x520));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x521 = 7U;
	int64_t x522 = -45366014528LL;
	volatile uint16_t x523 = 30U;
	uint16_t x524 = 6U;

    t129 = (x521&((x522>x523)/x524));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x525 = -16;
	static int16_t x526 = -1;
	volatile uint16_t x527 = 145U;
	volatile uint32_t x528 = UINT32_MAX;
	uint32_t t130 = 6892059U;

    t130 = (x525&((x526>x527)/x528));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x529 = 3U;
	volatile int16_t x530 = -3;
	int8_t x532 = INT8_MIN;
	int32_t t131 = 3744238;

    t131 = (x529&((x530>x531)/x532));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x533 = UINT32_MAX;
	static volatile int64_t x534 = 654452192044LL;
	int32_t x535 = -1;
	uint16_t x536 = UINT16_MAX;
	uint32_t t132 = 1U;

    t132 = (x533&((x534>x535)/x536));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x537 = INT64_MIN;
	int64_t x538 = -3966LL;
	static volatile int64_t x539 = -1690982835422LL;
	static uint64_t x540 = UINT64_MAX;
	uint64_t t133 = 1083LLU;

    t133 = (x537&((x538>x539)/x540));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x541 = 175U;
	volatile int32_t x543 = -5085;
	uint8_t x544 = 9U;
	volatile uint32_t t134 = 375546U;

    t134 = (x541&((x542>x543)/x544));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x545 = -1;
	uint16_t x546 = UINT16_MAX;
	int16_t x547 = -3;
	volatile uint8_t x548 = UINT8_MAX;

    t135 = (x545&((x546>x547)/x548));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x549 = -1;
	uint8_t x550 = UINT8_MAX;
	uint32_t x552 = 1090405U;
	uint32_t t136 = 765U;

    t136 = (x549&((x550>x551)/x552));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x553 = -757863190767LL;
	uint32_t x554 = 6U;
	int64_t x555 = INT64_MIN;
	uint32_t x556 = 1841123689U;
	volatile int64_t t137 = 2LL;

    t137 = (x553&((x554>x555)/x556));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x559 = 35;
	uint64_t x560 = 5127714220798LLU;

    t138 = (x557&((x558>x559)/x560));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint16_t x561 = 948U;
	volatile uint8_t x562 = 14U;
	int64_t x563 = INT64_MIN;
	volatile int32_t x564 = -1;
	volatile int32_t t139 = -18667062;

    t139 = (x561&((x562>x563)/x564));

    if (t139 != 948) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x565 = 1U;
	volatile uint32_t x566 = UINT32_MAX;
	int64_t x567 = INT64_MIN;
	int16_t x568 = INT16_MAX;
	int32_t t140 = 2735;

    t140 = (x565&((x566>x567)/x568));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x569 = 55297529U;
	int16_t x571 = INT16_MIN;
	volatile uint32_t t141 = 1009450U;

    t141 = (x569&((x570>x571)/x572));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x573 = INT8_MIN;
	int8_t x574 = INT8_MIN;
	volatile int64_t x575 = INT64_MIN;
	volatile int64_t x576 = -1LL;
	static volatile int64_t t142 = 44463340656967LL;

    t142 = (x573&((x574>x575)/x576));

    if (t142 != -128LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x577 = UINT64_MAX;
	int16_t x578 = -1;
	volatile int16_t x579 = -1;
	uint32_t x580 = 4413U;
	static uint64_t t143 = 1271LLU;

    t143 = (x577&((x578>x579)/x580));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x582 = -1;
	volatile uint64_t x584 = 777LLU;
	uint64_t t144 = 31661510923053LLU;

    t144 = (x581&((x582>x583)/x584));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x585 = -1;
	static int32_t x587 = INT32_MAX;
	int16_t x588 = 12860;
	int32_t t145 = -6983205;

    t145 = (x585&((x586>x587)/x588));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x589 = -288266733953926LL;
	int8_t x591 = INT8_MIN;
	int16_t x592 = -1;
	int64_t t146 = -126536869831364LL;

    t146 = (x589&((x590>x591)/x592));

    if (t146 != -288266733953926LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x593 = INT16_MIN;
	int32_t x594 = 0;
	int32_t x595 = -378;
	int32_t t147 = -3861;

    t147 = (x593&((x594>x595)/x596));

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x597 = INT64_MIN;
	int64_t x598 = -366031LL;
	uint8_t x599 = UINT8_MAX;
	int32_t x600 = INT32_MAX;
	int64_t t148 = 2374047867152542487LL;

    t148 = (x597&((x598>x599)/x600));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x601 = 3683U;
	int16_t x602 = INT16_MAX;
	volatile int16_t x603 = INT16_MIN;
	volatile uint32_t x604 = 5334U;
	uint32_t t149 = 5U;

    t149 = (x601&((x602>x603)/x604));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x605 = UINT8_MAX;
	volatile int16_t x606 = -1;
	int32_t x607 = INT32_MIN;
	int32_t x608 = -1;
	int32_t t150 = -2;

    t150 = (x605&((x606>x607)/x608));

    if (t150 != 255) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x610 = 1U;
	int32_t x612 = -1;

    t151 = (x609&((x610>x611)/x612));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x613 = INT8_MIN;
	int16_t x614 = -1;
	int32_t x615 = 5635;
	int64_t x616 = INT64_MIN;
	volatile int64_t t152 = -43472028LL;

    t152 = (x613&((x614>x615)/x616));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x617 = -1;
	uint16_t x620 = 4995U;

    t153 = (x617&((x618>x619)/x620));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x621 = 2;
	int16_t x622 = INT16_MIN;
	uint8_t x623 = 19U;
	int32_t t154 = -21098;

    t154 = (x621&((x622>x623)/x624));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x625 = -518LL;
	uint32_t x626 = UINT32_MAX;
	volatile uint8_t x627 = UINT8_MAX;
	static int16_t x628 = -1;
	volatile int64_t t155 = 23LL;

    t155 = (x625&((x626>x627)/x628));

    if (t155 != -518LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x629 = INT32_MIN;
	uint8_t x630 = UINT8_MAX;
	volatile int64_t x631 = -40129LL;
	int8_t x632 = INT8_MIN;
	volatile int32_t t156 = 2;

    t156 = (x629&((x630>x631)/x632));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x633 = INT32_MAX;
	static int64_t x636 = -192040609114LL;
	static volatile int64_t t157 = -196LL;

    t157 = (x633&((x634>x635)/x636));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x638 = -1LL;
	static volatile int16_t x639 = -91;
	int8_t x640 = 3;

    t158 = (x637&((x638>x639)/x640));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x641 = -964511500;
	int16_t x642 = -323;
	int8_t x643 = INT8_MAX;
	uint16_t x644 = 1162U;
	volatile int32_t t159 = 6167611;

    t159 = (x641&((x642>x643)/x644));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x645 = INT64_MAX;
	static int16_t x646 = 583;
	volatile int64_t t160 = 1714578699707LL;

    t160 = (x645&((x646>x647)/x648));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x649 = 2201093749108190LL;
	volatile int32_t x650 = 124344533;
	uint32_t x652 = 6903503U;
	int64_t t161 = 211LL;

    t161 = (x649&((x650>x651)/x652));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x653 = INT64_MIN;
	uint16_t x654 = 8U;
	volatile int64_t x655 = -1LL;
	static int32_t x656 = -763497;
	volatile int64_t t162 = 58616544867064LL;

    t162 = (x653&((x654>x655)/x656));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x657 = -1;
	static int16_t x658 = INT16_MAX;
	static volatile int16_t x659 = INT16_MAX;
	int32_t x660 = -1;
	int32_t t163 = 512686492;

    t163 = (x657&((x658>x659)/x660));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x661 = 3U;
	int64_t x662 = INT64_MIN;
	volatile uint16_t x663 = 1U;
	volatile int32_t x664 = INT32_MAX;
	volatile int32_t t164 = 32073615;

    t164 = (x661&((x662>x663)/x664));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x666 = -1;
	volatile int64_t x667 = INT64_MIN;
	uint64_t x668 = 16808459689228211LLU;
	uint64_t t165 = 12LLU;

    t165 = (x665&((x666>x667)/x668));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x669 = 49U;
	int16_t x671 = -1;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t166 = 3233264120LLU;

    t166 = (x669&((x670>x671)/x672));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x673 = UINT16_MAX;
	uint32_t x675 = 1792684U;
	volatile int64_t x676 = -16403496LL;
	int64_t t167 = -1494009290697907LL;

    t167 = (x673&((x674>x675)/x676));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x678 = INT16_MIN;
	int16_t x679 = INT16_MAX;
	int16_t x680 = INT16_MAX;

    t168 = (x677&((x678>x679)/x680));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x683 = 5947057551819LL;
	int16_t x684 = INT16_MIN;
	volatile uint32_t t169 = 1U;

    t169 = (x681&((x682>x683)/x684));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x685 = INT64_MAX;
	static volatile int32_t x686 = -1;
	static int8_t x687 = INT8_MIN;

    t170 = (x685&((x686>x687)/x688));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x689 = INT64_MIN;
	int64_t x690 = -977914788LL;
	int16_t x692 = -2;
	int64_t t171 = -27673397LL;

    t171 = (x689&((x690>x691)/x692));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x693 = INT64_MIN;
	int32_t x694 = 3;
	uint32_t x695 = UINT32_MAX;
	uint16_t x696 = 68U;
	static int64_t t172 = 0LL;

    t172 = (x693&((x694>x695)/x696));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x697 = 423U;
	static volatile int32_t x698 = INT32_MIN;
	int32_t x700 = INT32_MIN;

    t173 = (x697&((x698>x699)/x700));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x701 = INT8_MIN;
	int8_t x703 = 1;
	int64_t x704 = -1LL;
	int64_t t174 = 1274511818346022LL;

    t174 = (x701&((x702>x703)/x704));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x706 = -1316;
	uint32_t x707 = 10974872U;
	volatile uint32_t x708 = 1561218U;
	volatile int64_t t175 = -110191751075139LL;

    t175 = (x705&((x706>x707)/x708));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x711 = 0;
	static int16_t x712 = 3302;
	int32_t t176 = 36401;

    t176 = (x709&((x710>x711)/x712));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x715 = INT32_MIN;
	int64_t x716 = 263521LL;
	volatile int64_t t177 = 2167803625259049LL;

    t177 = (x713&((x714>x715)/x716));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x718 = 52007U;
	volatile int64_t x719 = INT64_MIN;
	volatile uint16_t x720 = UINT16_MAX;

    t178 = (x717&((x718>x719)/x720));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x721 = 1;
	static volatile uint8_t x722 = 10U;
	int16_t x723 = 251;
	static int64_t t179 = 28LL;

    t179 = (x721&((x722>x723)/x724));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x725 = INT8_MIN;
	static uint32_t x727 = UINT32_MAX;
	static int32_t t180 = 24246657;

    t180 = (x725&((x726>x727)/x728));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x729 = 1U;
	uint32_t x731 = 1U;
	int64_t t181 = -225308330535LL;

    t181 = (x729&((x730>x731)/x732));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x733 = -1LL;
	volatile int8_t x734 = INT8_MIN;
	uint32_t x735 = 284U;
	int64_t t182 = 3265675821548726LL;

    t182 = (x733&((x734>x735)/x736));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x738 = INT8_MAX;
	static int32_t t183 = 104;

    t183 = (x737&((x738>x739)/x740));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x742 = INT8_MIN;
	volatile int16_t x743 = INT16_MAX;
	int8_t x744 = 5;
	volatile int32_t t184 = 2599;

    t184 = (x741&((x742>x743)/x744));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x745 = INT64_MAX;
	static int16_t x746 = 0;
	int32_t x748 = -1;
	volatile int64_t t185 = INT64_MAX;

    t185 = (x745&((x746>x747)/x748));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x749 = 699LL;
	uint8_t x750 = 6U;
	static uint64_t x752 = UINT64_MAX;
	uint64_t t186 = 751679931028024114LLU;

    t186 = (x749&((x750>x751)/x752));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x754 = INT32_MIN;
	volatile uint64_t x755 = UINT64_MAX;
	int16_t x756 = INT16_MIN;
	volatile int32_t t187 = 2114888;

    t187 = (x753&((x754>x755)/x756));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x757 = 11648U;
	int32_t x758 = INT32_MAX;
	int64_t x759 = INT64_MIN;

    t188 = (x757&((x758>x759)/x760));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x765 = -1;
	int8_t x766 = INT8_MIN;
	uint64_t x767 = 4LLU;
	uint16_t x768 = UINT16_MAX;
	static volatile int32_t t189 = 233177346;

    t189 = (x765&((x766>x767)/x768));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x769 = 1993655U;
	uint32_t x770 = 13796U;
	uint32_t x771 = 1U;
	volatile int16_t x772 = -1;

    t190 = (x769&((x770>x771)/x772));

    if (t190 != 1993655U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x773 = INT64_MIN;
	int32_t x774 = -24811129;
	static int64_t t191 = 724134488415553LL;

    t191 = (x773&((x774>x775)/x776));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x777 = INT32_MAX;
	static int8_t x778 = 26;
	int32_t x779 = -901947645;
	int8_t x780 = INT8_MAX;
	volatile int32_t t192 = 680853431;

    t192 = (x777&((x778>x779)/x780));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x782 = 411011109849828843LLU;
	int32_t x783 = INT32_MIN;
	uint16_t x784 = UINT16_MAX;

    t193 = (x781&((x782>x783)/x784));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x785 = 202788847U;
	int8_t x786 = INT8_MIN;
	volatile int32_t x787 = INT32_MIN;
	int8_t x788 = INT8_MAX;
	static volatile uint32_t t194 = 267696507U;

    t194 = (x785&((x786>x787)/x788));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x790 = INT32_MAX;
	uint8_t x791 = UINT8_MAX;
	uint32_t x792 = 2122U;
	volatile uint32_t t195 = 197402148U;

    t195 = (x789&((x790>x791)/x792));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x793 = INT64_MIN;
	int8_t x794 = -1;
	static int8_t x795 = -59;
	int16_t x796 = -6;
	volatile int64_t t196 = 1126933264333926701LL;

    t196 = (x793&((x794>x795)/x796));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x797 = -1;
	uint16_t x798 = UINT16_MAX;
	int32_t x799 = 246;
	int16_t x800 = INT16_MAX;
	int32_t t197 = -118664443;

    t197 = (x797&((x798>x799)/x800));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x801 = UINT8_MAX;
	int32_t x802 = -1;
	uint64_t x804 = UINT64_MAX;
	volatile uint64_t t198 = 34LLU;

    t198 = (x801&((x802>x803)/x804));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x806 = 1;
	int64_t x807 = INT64_MIN;
	volatile int32_t x808 = INT32_MAX;
	volatile uint32_t t199 = 726521U;

    t199 = (x805&((x806>x807)/x808));

    if (t199 != 0U) { NG(); } else { ; }
	
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

