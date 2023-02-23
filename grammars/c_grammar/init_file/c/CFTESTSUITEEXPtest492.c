
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

static int8_t x16 = 1;
uint64_t t2 = UINT64_MAX;
int8_t x17 = INT8_MIN;
static uint32_t x22 = UINT32_MAX;
int32_t t4 = 25573;
uint64_t x26 = 2356062847137721LLU;
static int64_t x27 = INT64_MAX;
uint16_t x29 = 17503U;
volatile int32_t x43 = INT32_MAX;
int32_t x45 = -1;
int8_t x48 = -1;
volatile int32_t t9 = 2623;
static uint64_t x55 = UINT64_MAX;
static int16_t x57 = INT16_MIN;
int32_t t13 = -12872;
int64_t x65 = -1LL;
static uint64_t x83 = 0LLU;
int64_t x84 = INT64_MAX;
int32_t x93 = INT32_MAX;
int16_t x95 = INT16_MAX;
int16_t x101 = INT16_MIN;
static int16_t x112 = INT16_MAX;
volatile int32_t t24 = -184;
static int8_t x119 = INT8_MIN;
static uint8_t x121 = 2U;
uint16_t x124 = UINT16_MAX;
uint32_t x125 = 2347878U;
uint16_t x128 = UINT16_MAX;
int8_t x135 = -1;
uint64_t t28 = 5LLU;
int8_t x142 = 0;
volatile uint64_t t30 = 9018426561LLU;
uint8_t x161 = 103U;
volatile uint64_t x168 = 2087413164651531308LLU;
volatile int16_t x177 = -141;
volatile uint8_t x179 = 26U;
static int64_t x191 = -1LL;
int8_t x195 = -1;
int8_t x202 = -1;
uint64_t t39 = 3093754LLU;
int8_t x208 = -3;
static volatile int32_t t41 = 5459433;
int32_t x216 = -56512297;
int32_t t42 = -2;
volatile uint32_t x228 = 3703255U;
int8_t x235 = INT8_MIN;
int16_t x249 = INT16_MIN;
int64_t x250 = -325278912158LL;
uint64_t x251 = 496LLU;
int32_t x252 = INT32_MIN;
int8_t x253 = 0;
uint8_t x254 = 121U;
volatile int64_t x259 = INT64_MIN;
volatile int32_t t51 = 1909437;
static volatile uint8_t x264 = 34U;
static volatile uint32_t t52 = 157652140U;
int8_t x281 = -1;
int32_t x309 = -1;
uint32_t x315 = 72U;
static uint8_t x323 = 0U;
volatile int8_t x324 = INT8_MAX;
uint32_t x329 = UINT32_MAX;
uint8_t x341 = 0U;
static uint16_t x344 = 5626U;
volatile int32_t t73 = 3;
uint64_t x386 = 54998887238081LLU;
int16_t x401 = INT16_MIN;
uint16_t x403 = UINT16_MAX;
volatile int32_t t76 = -461334;
uint32_t x405 = 1346889U;
static int16_t x410 = INT16_MIN;
int16_t x411 = -1;
uint64_t x417 = 6LLU;
int32_t t81 = -1;
int16_t x436 = INT16_MAX;
volatile int32_t t82 = 1294;
int64_t x439 = -51984561705LL;
int64_t x445 = INT64_MIN;
uint16_t x450 = 7U;
int8_t x466 = INT8_MAX;
volatile uint32_t t89 = 252U;
static uint32_t t90 = 7545770U;
int64_t x479 = -1LL;
int32_t x487 = -145;
int16_t x491 = -1;
uint64_t t93 = UINT64_MAX;
int32_t x499 = -1;
int32_t t98 = 217874514;
static volatile int32_t t99 = 0;
int32_t x539 = -17839107;
int8_t x541 = 1;
int8_t x544 = -21;
int32_t t103 = 1373;
int16_t x547 = INT16_MIN;
uint8_t x548 = 10U;
int64_t x550 = INT64_MIN;
uint32_t x552 = UINT32_MAX;
int8_t x553 = 45;
volatile int32_t x555 = -1;
static volatile int32_t t106 = -91074475;
int16_t x560 = -1;
int16_t x563 = -1;
volatile uint64_t t108 = UINT64_MAX;
uint64_t x572 = 1630349LLU;
static volatile uint64_t x579 = UINT64_MAX;
volatile int32_t t111 = 67052248;
uint32_t x594 = 28590U;
int16_t x598 = -5;
uint16_t x599 = 19U;
volatile int8_t x601 = INT8_MIN;
int16_t x603 = 1900;
uint16_t x604 = 21U;
int16_t x605 = INT16_MAX;
int32_t t117 = 30587;
uint64_t x617 = 8LLU;
int16_t x624 = INT16_MIN;
volatile int32_t t119 = -29;
int32_t x627 = -1;
static volatile uint16_t x643 = 64U;
int32_t x656 = INT32_MIN;
uint32_t x657 = UINT32_MAX;
int32_t x665 = -1;
volatile int16_t x666 = -7594;
uint32_t x668 = 391349U;
volatile int32_t x679 = -1;
volatile int64_t x680 = INT64_MIN;
int32_t t127 = INT32_MIN;
int32_t x688 = INT32_MIN;
uint16_t x691 = 222U;
int32_t t130 = -3794;
volatile int32_t x708 = 605;
int32_t x714 = INT32_MAX;
int16_t x718 = -1;
volatile int64_t x720 = 56301905378550LL;
uint16_t x733 = 1694U;
int64_t x753 = INT64_MAX;
volatile uint16_t x770 = UINT16_MAX;
int32_t x774 = 246;
int64_t x777 = -107973976722LL;
int16_t x780 = INT16_MIN;
volatile int64_t t142 = 26142683799795LL;
uint8_t x796 = UINT8_MAX;
int32_t x801 = INT32_MAX;
int16_t x804 = 10;
int32_t t146 = INT32_MAX;
int32_t t147 = INT32_MAX;
uint8_t x864 = 57U;
volatile int64_t t153 = -30769336856508302LL;
volatile int8_t x870 = -1;
uint8_t x871 = 1U;
uint8_t x872 = UINT8_MAX;
int32_t x873 = INT32_MAX;
uint16_t x876 = 184U;
int64_t x878 = -1LL;
static int32_t x881 = INT32_MIN;
int32_t t157 = INT32_MIN;
volatile int32_t x888 = 10690827;
int32_t t158 = INT32_MIN;
volatile int16_t x905 = INT16_MIN;
int32_t x908 = -1;
uint16_t x909 = 25465U;
volatile int16_t x913 = INT16_MIN;
int32_t t163 = -231328;
int32_t x923 = INT32_MAX;
int16_t x949 = -1;
static uint8_t x954 = 7U;
static uint64_t x966 = UINT64_MAX;
int8_t x976 = INT8_MIN;
int16_t x977 = -1;
static uint64_t x982 = UINT64_MAX;
volatile int32_t t175 = 159996;
volatile int64_t x985 = INT64_MIN;
volatile int16_t x988 = -1;
uint64_t x994 = UINT64_MAX;
int64_t t177 = -724723LL;
static volatile uint8_t x1001 = 1U;
int64_t x1004 = INT64_MAX;
int32_t x1012 = 5545;
volatile int16_t x1014 = -4067;
volatile int64_t t181 = INT64_MIN;
int32_t t183 = -1861336;
static int8_t x1042 = -3;
int8_t x1050 = INT8_MIN;
uint8_t x1051 = 6U;
volatile int64_t x1052 = INT64_MIN;
int16_t x1054 = -2342;
int32_t t190 = -96017685;
uint32_t x1067 = 38872U;
int32_t x1081 = -1;
static int16_t x1085 = 359;
volatile int16_t x1087 = INT16_MAX;
volatile int16_t x1103 = 10769;


void f0(void) {
    	uint64_t x5 = UINT64_MAX;
	uint64_t x6 = 96288LLU;
	int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	volatile uint64_t t0 = UINT64_MAX;

    t0 = (x5-((x6*x7)==x8));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 2678574629147994410LLU;
	uint8_t x10 = 1U;
	int16_t x11 = 1;
	int16_t x12 = 0;
	uint64_t t1 = 277LLU;

    t1 = (x9-((x10*x11)==x12));

    if (t1 != 2678574629147994410LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = UINT64_MAX;
	uint16_t x14 = 1U;
	volatile int64_t x15 = INT64_MIN;

    t2 = (x13-((x14*x15)==x16));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x18 = INT64_MAX;
	int8_t x19 = -1;
	static int16_t x20 = INT16_MIN;
	static int32_t t3 = -927995686;

    t3 = (x17-((x18*x19)==x20));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x21 = INT16_MIN;
	uint32_t x23 = UINT32_MAX;
	volatile uint32_t x24 = UINT32_MAX;

    t4 = (x21-((x22*x23)==x24));

    if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -1;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t5 = -187;

    t5 = (x25-((x26*x27)==x28));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = 105067LL;
	uint64_t x31 = UINT64_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t6 = -77597;

    t6 = (x29-((x30*x31)==x32));

    if (t6 != 17503) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = -232LL;
	static uint8_t x34 = UINT8_MAX;
	int64_t x35 = 3827378169040302LL;
	int16_t x36 = INT16_MIN;
	int64_t t7 = -1828482LL;

    t7 = (x33-((x34*x35)==x36));

    if (t7 != -232LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x41 = -7297162193686LL;
	static int32_t x42 = 0;
	int8_t x44 = 8;
	int64_t t8 = -18811049055856270LL;

    t8 = (x41-((x42*x43)==x44));

    if (t8 != -7297162193686LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x46 = 14121206U;
	int32_t x47 = INT32_MIN;

    t9 = (x45-((x46*x47)==x48));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = 22U;
	int8_t x50 = 0;
	uint64_t x51 = 7248835847696762036LLU;
	int32_t x52 = -202360;
	static int32_t t10 = 8;

    t10 = (x49-((x50*x51)==x52));

    if (t10 != 22) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x53 = INT8_MIN;
	uint32_t x54 = 17U;
	static uint32_t x56 = 0U;
	volatile int32_t t11 = 577981;

    t11 = (x53-((x54*x55)==x56));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x58 = 22U;
	uint32_t x59 = 49298U;
	static int32_t x60 = -1;
	volatile int32_t t12 = 63981021;

    t12 = (x57-((x58*x59)==x60));

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = 2U;
	int8_t x62 = 0;
	int8_t x63 = INT8_MIN;
	static uint64_t x64 = 568282569LLU;

    t13 = (x61-((x62*x63)==x64));

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x66 = INT16_MAX;
	int8_t x67 = -1;
	volatile int32_t x68 = -12188;
	volatile int64_t t14 = 34391280215649628LL;

    t14 = (x65-((x66*x67)==x68));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x73 = 112909U;
	int64_t x74 = -1LL;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = -1;
	volatile uint32_t t15 = 70216U;

    t15 = (x73-((x74*x75)==x76));

    if (t15 != 112909U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = -1;
	int64_t x78 = -697847LL;
	uint64_t x79 = 787050427LLU;
	volatile uint32_t x80 = 872U;
	int32_t t16 = 2381;

    t16 = (x77-((x78*x79)==x80));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x81 = UINT8_MAX;
	int32_t x82 = INT32_MAX;
	volatile int32_t t17 = 43310387;

    t17 = (x81-((x82*x83)==x84));

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x85 = -1LL;
	int16_t x86 = INT16_MAX;
	volatile uint32_t x87 = 106U;
	int64_t x88 = INT64_MAX;
	int64_t t18 = -242628118957757239LL;

    t18 = (x85-((x86*x87)==x88));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x89 = INT64_MIN;
	int8_t x90 = -1;
	volatile int64_t x91 = INT64_MAX;
	int16_t x92 = -68;
	int64_t t19 = INT64_MIN;

    t19 = (x89-((x90*x91)==x92));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x94 = INT8_MIN;
	int32_t x96 = -1;
	int32_t t20 = INT32_MAX;

    t20 = (x93-((x94*x95)==x96));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x97 = INT64_MAX;
	static uint64_t x98 = UINT64_MAX;
	uint8_t x99 = 59U;
	uint32_t x100 = 47598327U;
	int64_t t21 = INT64_MAX;

    t21 = (x97-((x98*x99)==x100));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x102 = 1;
	static int8_t x103 = -55;
	volatile int64_t x104 = -1LL;
	volatile int32_t t22 = 3593753;

    t22 = (x101-((x102*x103)==x104));

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = -3;
	int32_t x110 = INT32_MIN;
	uint32_t x111 = 5507961U;
	int32_t t23 = 402;

    t23 = (x109-((x110*x111)==x112));

    if (t23 != -3) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x113 = INT8_MIN;
	static volatile int16_t x114 = INT16_MIN;
	volatile int8_t x115 = 0;
	int8_t x116 = 40;

    t24 = (x113-((x114*x115)==x116));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x117 = 1640636466684761LLU;
	uint32_t x118 = UINT32_MAX;
	int32_t x120 = INT32_MAX;
	uint64_t t25 = 946996049LLU;

    t25 = (x117-((x118*x119)==x120));

    if (t25 != 1640636466684761LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x122 = INT16_MIN;
	static uint64_t x123 = UINT64_MAX;
	volatile int32_t t26 = -3;

    t26 = (x121-((x122*x123)==x124));

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x126 = 686541LL;
	uint64_t x127 = 7497892438539LLU;
	static uint32_t t27 = 8U;

    t27 = (x125-((x126*x127)==x128));

    if (t27 != 2347878U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x133 = 136440209576LLU;
	int8_t x134 = INT8_MAX;
	int16_t x136 = -240;

    t28 = (x133-((x134*x135)==x136));

    if (t28 != 136440209576LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x137 = -727;
	int8_t x138 = -1;
	int32_t x139 = -1;
	uint16_t x140 = 103U;
	volatile int32_t t29 = -118;

    t29 = (x137-((x138*x139)==x140));

    if (t29 != -727) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x141 = 0LLU;
	int16_t x143 = -760;
	int16_t x144 = INT16_MIN;

    t30 = (x141-((x142*x143)==x144));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x145 = 765U;
	int64_t x146 = 2585LL;
	int8_t x147 = 11;
	static int32_t x148 = INT32_MAX;
	volatile int32_t t31 = 29;

    t31 = (x145-((x146*x147)==x148));

    if (t31 != 765) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x162 = 0U;
	int16_t x163 = INT16_MIN;
	int64_t x164 = -1LL;
	volatile int32_t t32 = -502;

    t32 = (x161-((x162*x163)==x164));

    if (t32 != 103) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x165 = -1;
	static int32_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	volatile int32_t t33 = 1908905;

    t33 = (x165-((x166*x167)==x168));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x173 = INT64_MIN;
	static uint8_t x174 = 1U;
	uint8_t x175 = 10U;
	int64_t x176 = -15304997980887LL;
	static int64_t t34 = INT64_MIN;

    t34 = (x173-((x174*x175)==x176));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x178 = -57;
	int16_t x180 = INT16_MAX;
	static volatile int32_t t35 = 20385166;

    t35 = (x177-((x178*x179)==x180));

    if (t35 != -141) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x181 = 7557U;
	uint16_t x182 = 124U;
	uint8_t x183 = 1U;
	int64_t x184 = -17692156LL;
	uint32_t t36 = 1086U;

    t36 = (x181-((x182*x183)==x184));

    if (t36 != 7557U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x189 = INT16_MAX;
	int8_t x190 = 0;
	int32_t x192 = 3203282;
	int32_t t37 = 13164133;

    t37 = (x189-((x190*x191)==x192));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x193 = INT16_MIN;
	int8_t x194 = -1;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t38 = -2;

    t38 = (x193-((x194*x195)==x196));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x201 = 636LLU;
	uint64_t x203 = UINT64_MAX;
	int8_t x204 = -1;

    t39 = (x201-((x202*x203)==x204));

    if (t39 != 636LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x205 = -1727263025278LL;
	int16_t x206 = 1701;
	int16_t x207 = INT16_MAX;
	volatile int64_t t40 = -375948LL;

    t40 = (x205-((x206*x207)==x208));

    if (t40 != -1727263025278LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x209 = 11U;
	volatile int8_t x210 = 16;
	uint16_t x211 = 683U;
	static int8_t x212 = -54;

    t41 = (x209-((x210*x211)==x212));

    if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x213 = INT16_MIN;
	static volatile uint8_t x214 = UINT8_MAX;
	static uint32_t x215 = UINT32_MAX;

    t42 = (x213-((x214*x215)==x216));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x217 = INT8_MIN;
	uint8_t x218 = 70U;
	uint64_t x219 = UINT64_MAX;
	uint8_t x220 = 109U;
	volatile int32_t t43 = 282439420;

    t43 = (x217-((x218*x219)==x220));

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x221 = INT16_MIN;
	int64_t x222 = 25164118LL;
	int32_t x223 = -1;
	int64_t x224 = INT64_MIN;
	static int32_t t44 = 9079489;

    t44 = (x221-((x222*x223)==x224));

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x225 = UINT32_MAX;
	uint8_t x226 = 0U;
	uint32_t x227 = 1U;
	volatile uint32_t t45 = UINT32_MAX;

    t45 = (x225-((x226*x227)==x228));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x229 = INT32_MAX;
	static uint32_t x230 = 29089684U;
	int32_t x231 = 0;
	volatile int64_t x232 = -296778959630535191LL;
	int32_t t46 = INT32_MAX;

    t46 = (x229-((x230*x231)==x232));

    if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x233 = -1;
	static int32_t x234 = -708;
	uint64_t x236 = 83763LLU;
	volatile int32_t t47 = 306051682;

    t47 = (x233-((x234*x235)==x236));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x245 = INT64_MIN;
	int64_t x246 = 4356015153838LL;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -2;
	volatile int64_t t48 = INT64_MIN;

    t48 = (x245-((x246*x247)==x248));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t t49 = 1;

    t49 = (x249-((x250*x251)==x252));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x255 = 3U;
	static int64_t x256 = INT64_MIN;
	volatile int32_t t50 = -2354300;

    t50 = (x253-((x254*x255)==x256));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x257 = 15997;
	uint64_t x258 = UINT64_MAX;
	static int64_t x260 = INT64_MIN;

    t51 = (x257-((x258*x259)==x260));

    if (t51 != 15996) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x261 = 1884U;
	uint16_t x262 = UINT16_MAX;
	int16_t x263 = 33;

    t52 = (x261-((x262*x263)==x264));

    if (t52 != 1884U) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x269 = 59U;
	static int8_t x270 = INT8_MAX;
	int16_t x271 = INT16_MAX;
	static int64_t x272 = INT64_MAX;
	int32_t t53 = -898599201;

    t53 = (x269-((x270*x271)==x272));

    if (t53 != 59) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x277 = -1;
	int16_t x278 = INT16_MAX;
	uint64_t x279 = 927022099487752LLU;
	int8_t x280 = -1;
	volatile int32_t t54 = -31;

    t54 = (x277-((x278*x279)==x280));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x282 = 30454170LL;
	int64_t x283 = -1LL;
	int8_t x284 = -45;
	volatile int32_t t55 = 4175992;

    t55 = (x281-((x282*x283)==x284));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x285 = INT16_MAX;
	uint64_t x286 = 72512630199LLU;
	int64_t x287 = INT64_MAX;
	int64_t x288 = INT64_MAX;
	int32_t t56 = -99605;

    t56 = (x285-((x286*x287)==x288));

    if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x293 = 442U;
	uint64_t x294 = 8443122085895LLU;
	int64_t x295 = INT64_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t57 = -6;

    t57 = (x293-((x294*x295)==x296));

    if (t57 != 442) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x297 = 2U;
	uint8_t x298 = 4U;
	uint16_t x299 = UINT16_MAX;
	uint64_t x300 = UINT64_MAX;
	int32_t t58 = -613156518;

    t58 = (x297-((x298*x299)==x300));

    if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x305 = INT16_MIN;
	int16_t x306 = 1;
	int32_t x307 = -1;
	int8_t x308 = INT8_MIN;
	volatile int32_t t59 = -466;

    t59 = (x305-((x306*x307)==x308));

    if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x310 = 44353081LL;
	int16_t x311 = INT16_MAX;
	volatile int32_t x312 = INT32_MAX;
	volatile int32_t t60 = -2018225;

    t60 = (x309-((x310*x311)==x312));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x313 = -1;
	int16_t x314 = -1;
	int32_t x316 = INT32_MAX;
	int32_t t61 = 662;

    t61 = (x313-((x314*x315)==x316));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x321 = INT16_MIN;
	volatile int32_t x322 = -9100;
	volatile int32_t t62 = -62219;

    t62 = (x321-((x322*x323)==x324));

    if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x325 = 5336292152LLU;
	uint8_t x326 = 3U;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MAX;
	uint64_t t63 = 170740469985751LLU;

    t63 = (x325-((x326*x327)==x328));

    if (t63 != 5336292152LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x330 = 217;
	int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MIN;
	static volatile uint32_t t64 = UINT32_MAX;

    t64 = (x329-((x330*x331)==x332));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x333 = UINT64_MAX;
	int8_t x334 = INT8_MIN;
	int32_t x335 = 78;
	uint8_t x336 = UINT8_MAX;
	volatile uint64_t t65 = UINT64_MAX;

    t65 = (x333-((x334*x335)==x336));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x337 = -3;
	static int16_t x338 = INT16_MAX;
	uint16_t x339 = 13847U;
	int8_t x340 = -14;
	int32_t t66 = 22843151;

    t66 = (x337-((x338*x339)==x340));

    if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x342 = UINT16_MAX;
	uint16_t x343 = 0U;
	volatile int32_t t67 = 17;

    t67 = (x341-((x342*x343)==x344));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x345 = INT32_MIN;
	uint16_t x346 = UINT16_MAX;
	uint64_t x347 = UINT64_MAX;
	uint8_t x348 = 0U;
	volatile int32_t t68 = INT32_MIN;

    t68 = (x345-((x346*x347)==x348));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x361 = INT64_MIN;
	uint32_t x362 = 463U;
	int32_t x363 = -9887;
	volatile int8_t x364 = INT8_MIN;
	int64_t t69 = INT64_MIN;

    t69 = (x361-((x362*x363)==x364));

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x365 = INT16_MIN;
	static int32_t x366 = -1;
	uint32_t x367 = 151123U;
	uint8_t x368 = 3U;
	volatile int32_t t70 = -8712;

    t70 = (x365-((x366*x367)==x368));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x373 = 42;
	int32_t x374 = -1;
	static uint8_t x375 = UINT8_MAX;
	uint32_t x376 = 1438U;
	volatile int32_t t71 = -30346;

    t71 = (x373-((x374*x375)==x376));

    if (t71 != 42) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x377 = INT8_MAX;
	volatile int64_t x378 = -12535074529048LL;
	volatile uint8_t x379 = 17U;
	static int16_t x380 = 165;
	static volatile int32_t t72 = 0;

    t72 = (x377-((x378*x379)==x380));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x381 = -22;
	uint64_t x382 = 45078677670920321LLU;
	static volatile uint8_t x383 = UINT8_MAX;
	volatile int8_t x384 = -21;

    t73 = (x381-((x382*x383)==x384));

    if (t73 != -22) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x385 = 7979LLU;
	int64_t x387 = INT64_MAX;
	uint8_t x388 = 21U;
	uint64_t t74 = 47148675339LLU;

    t74 = (x385-((x386*x387)==x388));

    if (t74 != 7979LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x397 = INT32_MAX;
	int64_t x398 = -1LL;
	int16_t x399 = -1;
	static uint8_t x400 = UINT8_MAX;
	volatile int32_t t75 = INT32_MAX;

    t75 = (x397-((x398*x399)==x400));

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x402 = 26LLU;
	int32_t x404 = -748;

    t76 = (x401-((x402*x403)==x404));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x406 = INT8_MIN;
	uint16_t x407 = 21632U;
	volatile int8_t x408 = -1;
	uint32_t t77 = 12693U;

    t77 = (x405-((x406*x407)==x408));

    if (t77 != 1346889U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x409 = 71U;
	int64_t x412 = INT64_MIN;
	volatile int32_t t78 = -28;

    t78 = (x409-((x410*x411)==x412));

    if (t78 != 71) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x418 = INT16_MAX;
	static int16_t x419 = INT16_MIN;
	int32_t x420 = INT32_MAX;
	uint64_t t79 = 28LLU;

    t79 = (x417-((x418*x419)==x420));

    if (t79 != 6LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x421 = -1;
	int16_t x422 = -938;
	int8_t x423 = 5;
	int64_t x424 = INT64_MIN;
	int32_t t80 = 16;

    t80 = (x421-((x422*x423)==x424));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x425 = 0U;
	static int16_t x426 = INT16_MIN;
	int8_t x427 = -58;
	static int16_t x428 = INT16_MIN;

    t81 = (x425-((x426*x427)==x428));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x433 = INT16_MAX;
	int16_t x434 = -7141;
	static volatile int64_t x435 = 1337LL;

    t82 = (x433-((x434*x435)==x436));

    if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x437 = INT8_MIN;
	volatile int64_t x438 = -1LL;
	int32_t x440 = -928706;
	int32_t t83 = 33;

    t83 = (x437-((x438*x439)==x440));

    if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x441 = 3703LL;
	static uint64_t x442 = 541298LLU;
	uint64_t x443 = 2062427331064020LLU;
	static uint64_t x444 = 130747548448235LLU;
	volatile int64_t t84 = 1684162LL;

    t84 = (x441-((x442*x443)==x444));

    if (t84 != 3703LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x446 = INT8_MAX;
	int32_t x447 = -982561;
	uint64_t x448 = 19194107LLU;
	int64_t t85 = INT64_MIN;

    t85 = (x445-((x446*x447)==x448));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x449 = 255076LL;
	uint16_t x451 = UINT16_MAX;
	uint8_t x452 = 0U;
	static int64_t t86 = -16705915029041140LL;

    t86 = (x449-((x450*x451)==x452));

    if (t86 != 255076LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x453 = -37343;
	int8_t x454 = INT8_MAX;
	int8_t x455 = 2;
	int64_t x456 = 354634081004656193LL;
	int32_t t87 = 807703515;

    t87 = (x453-((x454*x455)==x456));

    if (t87 != -37343) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x461 = 1996;
	int16_t x462 = INT16_MIN;
	uint8_t x463 = 88U;
	uint32_t x464 = 1074U;
	volatile int32_t t88 = -9942614;

    t88 = (x461-((x462*x463)==x464));

    if (t88 != 1996) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x465 = 12736U;
	volatile int8_t x467 = -1;
	volatile int32_t x468 = INT32_MAX;

    t89 = (x465-((x466*x467)==x468));

    if (t89 != 12736U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x469 = 0U;
	static uint16_t x470 = UINT16_MAX;
	uint16_t x471 = 23U;
	uint64_t x472 = UINT64_MAX;

    t90 = (x469-((x470*x471)==x472));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x477 = -1;
	volatile uint8_t x478 = 1U;
	uint16_t x480 = 524U;
	static int32_t t91 = 31;

    t91 = (x477-((x478*x479)==x480));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x485 = 24LL;
	static int64_t x486 = 6LL;
	volatile int64_t x488 = INT64_MIN;
	static volatile int64_t t92 = 362234LL;

    t92 = (x485-((x486*x487)==x488));

    if (t92 != 24LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int16_t x490 = INT16_MIN;
	int32_t x492 = INT32_MIN;

    t93 = (x489-((x490*x491)==x492));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x497 = -1;
	uint8_t x498 = 0U;
	static int8_t x500 = -1;
	static volatile int32_t t94 = -1;

    t94 = (x497-((x498*x499)==x500));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x501 = UINT8_MAX;
	int64_t x502 = INT64_MAX;
	int16_t x503 = -1;
	static int32_t x504 = INT32_MIN;
	int32_t t95 = 9651708;

    t95 = (x501-((x502*x503)==x504));

    if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x505 = 367375LL;
	int64_t x506 = -1823465LL;
	int32_t x507 = -1;
	int32_t x508 = INT32_MIN;
	volatile int64_t t96 = 290LL;

    t96 = (x505-((x506*x507)==x508));

    if (t96 != 367375LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x509 = INT16_MAX;
	int8_t x510 = -1;
	int8_t x511 = 3;
	int64_t x512 = -67289LL;
	volatile int32_t t97 = -439;

    t97 = (x509-((x510*x511)==x512));

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x513 = INT16_MIN;
	volatile int32_t x514 = -1;
	uint16_t x515 = UINT16_MAX;
	static int16_t x516 = -1;

    t98 = (x513-((x514*x515)==x516));

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x517 = 2U;
	int32_t x518 = INT32_MAX;
	uint32_t x519 = UINT32_MAX;
	uint32_t x520 = 3196058U;

    t99 = (x517-((x518*x519)==x520));

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x521 = 72910851U;
	int64_t x522 = -475484LL;
	volatile int32_t x523 = -78757756;
	uint64_t x524 = 1378LLU;
	volatile uint32_t t100 = 17360579U;

    t100 = (x521-((x522*x523)==x524));

    if (t100 != 72910851U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x529 = INT8_MAX;
	uint64_t x530 = 49LLU;
	uint32_t x531 = 2738926U;
	int16_t x532 = -1;
	volatile int32_t t101 = 4338963;

    t101 = (x529-((x530*x531)==x532));

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x537 = -42;
	static uint32_t x538 = 3826776U;
	int32_t x540 = 103152775;
	static int32_t t102 = 36715326;

    t102 = (x537-((x538*x539)==x540));

    if (t102 != -42) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x542 = 3049U;
	uint16_t x543 = UINT16_MAX;

    t103 = (x541-((x542*x543)==x544));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x545 = -3357;
	uint64_t x546 = 1996614LLU;
	volatile int32_t t104 = -365;

    t104 = (x545-((x546*x547)==x548));

    if (t104 != -3357) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x549 = -1903953;
	uint64_t x551 = UINT64_MAX;
	static int32_t t105 = 1;

    t105 = (x549-((x550*x551)==x552));

    if (t105 != -1903953) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x554 = INT64_MAX;
	uint32_t x556 = UINT32_MAX;

    t106 = (x553-((x554*x555)==x556));

    if (t106 != 45) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x557 = -1;
	uint64_t x558 = UINT64_MAX;
	int64_t x559 = 38131453162LL;
	int32_t t107 = 319189806;

    t107 = (x557-((x558*x559)==x560));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x561 = UINT64_MAX;
	int8_t x562 = 16;
	int32_t x564 = INT32_MIN;

    t108 = (x561-((x562*x563)==x564));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x569 = UINT32_MAX;
	static int8_t x570 = 0;
	int64_t x571 = 159593499LL;
	uint32_t t109 = UINT32_MAX;

    t109 = (x569-((x570*x571)==x572));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x577 = 4U;
	int16_t x578 = INT16_MIN;
	static int32_t x580 = INT32_MAX;
	int32_t t110 = 44898289;

    t110 = (x577-((x578*x579)==x580));

    if (t110 != 4) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x581 = -454;
	volatile uint16_t x582 = 5257U;
	int32_t x583 = -12;
	volatile int32_t x584 = INT32_MIN;

    t111 = (x581-((x582*x583)==x584));

    if (t111 != -454) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x585 = -1;
	int8_t x586 = 2;
	int32_t x587 = -288562;
	uint8_t x588 = UINT8_MAX;
	int32_t t112 = -275;

    t112 = (x585-((x586*x587)==x588));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x589 = 4965397004382713LLU;
	static int8_t x590 = -1;
	volatile int32_t x591 = -1;
	int8_t x592 = INT8_MIN;
	static volatile uint64_t t113 = 1230707067031212LLU;

    t113 = (x589-((x590*x591)==x592));

    if (t113 != 4965397004382713LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x593 = INT32_MIN;
	uint16_t x595 = UINT16_MAX;
	uint16_t x596 = UINT16_MAX;
	int32_t t114 = INT32_MIN;

    t114 = (x593-((x594*x595)==x596));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x597 = UINT8_MAX;
	int32_t x600 = INT32_MIN;
	int32_t t115 = -2;

    t115 = (x597-((x598*x599)==x600));

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x602 = -1;
	int32_t t116 = 158;

    t116 = (x601-((x602*x603)==x604));

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x606 = INT16_MIN;
	int8_t x607 = INT8_MIN;
	uint64_t x608 = 10821LLU;

    t117 = (x605-((x606*x607)==x608));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x618 = -1LL;
	uint16_t x619 = 1U;
	static int8_t x620 = -2;
	static volatile uint64_t t118 = 590767969200868LLU;

    t118 = (x617-((x618*x619)==x620));

    if (t118 != 8LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x621 = -1;
	volatile int32_t x622 = -2949543;
	static uint64_t x623 = 5034289310044562LLU;

    t119 = (x621-((x622*x623)==x624));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x625 = -4;
	uint32_t x626 = UINT32_MAX;
	volatile uint8_t x628 = 53U;
	volatile int32_t t120 = 14058;

    t120 = (x625-((x626*x627)==x628));

    if (t120 != -4) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x637 = INT16_MAX;
	int64_t x638 = INT64_MAX;
	int32_t x639 = -1;
	int32_t x640 = INT32_MAX;
	static int32_t t121 = -267;

    t121 = (x637-((x638*x639)==x640));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x641 = 201590220361699LLU;
	int8_t x642 = INT8_MAX;
	int16_t x644 = INT16_MIN;
	volatile uint64_t t122 = 3609794145LLU;

    t122 = (x641-((x642*x643)==x644));

    if (t122 != 201590220361699LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x653 = 24064;
	int32_t x654 = -38;
	static volatile uint32_t x655 = 410967U;
	volatile int32_t t123 = -1918195;

    t123 = (x653-((x654*x655)==x656));

    if (t123 != 24064) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x658 = INT16_MIN;
	uint32_t x659 = 124886U;
	volatile int16_t x660 = -11;
	uint32_t t124 = UINT32_MAX;

    t124 = (x657-((x658*x659)==x660));

    if (t124 != UINT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x667 = 247687993U;
	int32_t t125 = -1;

    t125 = (x665-((x666*x667)==x668));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x677 = INT16_MAX;
	volatile int64_t x678 = -1LL;
	static volatile int32_t t126 = -287;

    t126 = (x677-((x678*x679)==x680));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x681 = INT32_MIN;
	uint16_t x682 = 7641U;
	int16_t x683 = INT16_MAX;
	volatile uint16_t x684 = 10766U;

    t127 = (x681-((x682*x683)==x684));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x685 = INT64_MAX;
	static uint64_t x686 = 835LLU;
	static int32_t x687 = INT32_MAX;
	int64_t t128 = INT64_MAX;

    t128 = (x685-((x686*x687)==x688));

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x689 = UINT16_MAX;
	static volatile uint64_t x690 = UINT64_MAX;
	volatile int16_t x692 = -6;
	volatile int32_t t129 = 14;

    t129 = (x689-((x690*x691)==x692));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	uint16_t x698 = 5190U;
	static uint16_t x699 = 2060U;
	static int8_t x700 = INT8_MIN;

    t130 = (x697-((x698*x699)==x700));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x705 = INT8_MIN;
	volatile uint64_t x706 = UINT64_MAX;
	uint32_t x707 = 13U;
	int32_t t131 = 18353681;

    t131 = (x705-((x706*x707)==x708));

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x713 = INT32_MAX;
	int32_t x715 = -1;
	int8_t x716 = INT8_MAX;
	int32_t t132 = INT32_MAX;

    t132 = (x713-((x714*x715)==x716));

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x717 = 553803036LLU;
	volatile int16_t x719 = -1;
	uint64_t t133 = 28LLU;

    t133 = (x717-((x718*x719)==x720));

    if (t133 != 553803036LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x721 = 81U;
	volatile int16_t x722 = -3823;
	int8_t x723 = INT8_MIN;
	volatile int16_t x724 = INT16_MIN;
	static volatile int32_t t134 = 536297394;

    t134 = (x721-((x722*x723)==x724));

    if (t134 != 81) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x729 = 24118297LL;
	int16_t x730 = INT16_MIN;
	uint16_t x731 = 1U;
	static uint64_t x732 = 95805888LLU;
	int64_t t135 = -1LL;

    t135 = (x729-((x730*x731)==x732));

    if (t135 != 24118297LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x734 = 1698;
	int16_t x735 = INT16_MIN;
	static int32_t x736 = INT32_MAX;
	int32_t t136 = 0;

    t136 = (x733-((x734*x735)==x736));

    if (t136 != 1694) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x745 = -26971;
	volatile int16_t x746 = INT16_MIN;
	static int16_t x747 = INT16_MAX;
	static uint8_t x748 = 14U;
	int32_t t137 = -228377480;

    t137 = (x745-((x746*x747)==x748));

    if (t137 != -26971) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x754 = INT16_MIN;
	uint64_t x755 = 38LLU;
	uint8_t x756 = 20U;
	static int64_t t138 = INT64_MAX;

    t138 = (x753-((x754*x755)==x756));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x757 = INT64_MAX;
	uint64_t x758 = 103216379042LLU;
	uint32_t x759 = 0U;
	volatile int64_t x760 = INT64_MIN;
	int64_t t139 = INT64_MAX;

    t139 = (x757-((x758*x759)==x760));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x769 = UINT16_MAX;
	int8_t x771 = INT8_MIN;
	int8_t x772 = -1;
	int32_t t140 = -8;

    t140 = (x769-((x770*x771)==x772));

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	uint16_t x775 = 2129U;
	int16_t x776 = INT16_MIN;
	static int32_t t141 = -16003320;

    t141 = (x773-((x774*x775)==x776));

    if (t141 != 255) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x778 = -21193091LL;
	int32_t x779 = INT32_MAX;

    t142 = (x777-((x778*x779)==x780));

    if (t142 != -107973976722LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x789 = INT16_MIN;
	static uint32_t x790 = 173U;
	uint32_t x791 = 86480U;
	static uint64_t x792 = 130427250265135238LLU;
	volatile int32_t t143 = -26;

    t143 = (x789-((x790*x791)==x792));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x793 = INT64_MIN;
	static int64_t x794 = -476129546087639LL;
	static int16_t x795 = -5;
	volatile int64_t t144 = INT64_MIN;

    t144 = (x793-((x794*x795)==x796));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x797 = 61145;
	int8_t x798 = INT8_MIN;
	int8_t x799 = -62;
	uint64_t x800 = 15LLU;
	int32_t t145 = -46380551;

    t145 = (x797-((x798*x799)==x800));

    if (t145 != 61145) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x802 = INT8_MIN;
	int8_t x803 = INT8_MIN;

    t146 = (x801-((x802*x803)==x804));

    if (t146 != INT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x805 = INT32_MAX;
	uint16_t x806 = 6192U;
	int8_t x807 = INT8_MIN;
	uint32_t x808 = UINT32_MAX;

    t147 = (x805-((x806*x807)==x808));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x813 = INT8_MIN;
	int64_t x814 = -95665469441437LL;
	uint8_t x815 = 2U;
	static volatile int16_t x816 = -1;
	volatile int32_t t148 = 79309;

    t148 = (x813-((x814*x815)==x816));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x833 = 29U;
	int16_t x834 = INT16_MAX;
	uint32_t x835 = 21105U;
	static int16_t x836 = INT16_MIN;
	volatile int32_t t149 = -16855168;

    t149 = (x833-((x834*x835)==x836));

    if (t149 != 29) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x837 = INT8_MIN;
	int64_t x838 = INT64_MIN;
	static uint16_t x839 = 0U;
	static uint32_t x840 = UINT32_MAX;
	volatile int32_t t150 = -77;

    t150 = (x837-((x838*x839)==x840));

    if (t150 != -128) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x849 = 4U;
	int8_t x850 = INT8_MIN;
	int16_t x851 = INT16_MAX;
	volatile int64_t x852 = INT64_MIN;
	static volatile int32_t t151 = -427;

    t151 = (x849-((x850*x851)==x852));

    if (t151 != 4) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x857 = 6902309432960LL;
	static int8_t x858 = -8;
	static int8_t x859 = INT8_MAX;
	int16_t x860 = INT16_MIN;
	int64_t t152 = -98913992070632LL;

    t152 = (x857-((x858*x859)==x860));

    if (t152 != 6902309432960LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x861 = -1LL;
	int8_t x862 = -1;
	int64_t x863 = -1LL;

    t153 = (x861-((x862*x863)==x864));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x869 = 1LL;
	volatile int64_t t154 = 988090156LL;

    t154 = (x869-((x870*x871)==x872));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x874 = 0;
	volatile uint64_t x875 = UINT64_MAX;
	static volatile int32_t t155 = INT32_MAX;

    t155 = (x873-((x874*x875)==x876));

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x877 = INT16_MIN;
	uint8_t x879 = UINT8_MAX;
	uint32_t x880 = 685U;
	static volatile int32_t t156 = -90425059;

    t156 = (x877-((x878*x879)==x880));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x882 = INT32_MAX;
	int16_t x883 = -1;
	static int32_t x884 = 626764;

    t157 = (x881-((x882*x883)==x884));

    if (t157 != INT32_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x885 = INT32_MIN;
	int16_t x886 = INT16_MAX;
	static int8_t x887 = -1;

    t158 = (x885-((x886*x887)==x888));

    if (t158 != INT32_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint8_t x893 = UINT8_MAX;
	static int64_t x894 = -1LL;
	static int64_t x895 = -1442LL;
	volatile int64_t x896 = -637LL;
	int32_t t159 = -158234;

    t159 = (x893-((x894*x895)==x896));

    if (t159 != 255) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x901 = INT16_MIN;
	volatile int64_t x902 = -6432LL;
	uint64_t x903 = 3810497LLU;
	uint16_t x904 = UINT16_MAX;
	static volatile int32_t t160 = 1;

    t160 = (x901-((x902*x903)==x904));

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x906 = UINT16_MAX;
	uint64_t x907 = 16359LLU;
	static int32_t t161 = -249433934;

    t161 = (x905-((x906*x907)==x908));

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x910 = -29;
	int16_t x911 = INT16_MIN;
	uint16_t x912 = UINT16_MAX;
	static int32_t t162 = -1;

    t162 = (x909-((x910*x911)==x912));

    if (t162 != 25465) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x914 = UINT32_MAX;
	uint8_t x915 = UINT8_MAX;
	static uint8_t x916 = UINT8_MAX;

    t163 = (x913-((x914*x915)==x916));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x921 = -222728679LL;
	static volatile uint64_t x922 = UINT64_MAX;
	int8_t x924 = INT8_MIN;
	int64_t t164 = 1051548LL;

    t164 = (x921-((x922*x923)==x924));

    if (t164 != -222728679LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x929 = 24U;
	int16_t x930 = -1;
	int64_t x931 = 1377777LL;
	uint64_t x932 = 345462152464193199LLU;
	static int32_t t165 = 59033525;

    t165 = (x929-((x930*x931)==x932));

    if (t165 != 24) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x941 = -1LL;
	uint32_t x942 = UINT32_MAX;
	static int8_t x943 = INT8_MAX;
	int16_t x944 = INT16_MIN;
	volatile int64_t t166 = -29863014280902LL;

    t166 = (x941-((x942*x943)==x944));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x950 = 16821LLU;
	uint8_t x951 = 66U;
	int32_t x952 = 29;
	int32_t t167 = -9532;

    t167 = (x949-((x950*x951)==x952));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x953 = INT64_MIN;
	int16_t x955 = -1;
	int16_t x956 = INT16_MIN;
	volatile int64_t t168 = INT64_MIN;

    t168 = (x953-((x954*x955)==x956));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x957 = INT32_MIN;
	uint8_t x958 = 1U;
	int32_t x959 = -1;
	uint16_t x960 = UINT16_MAX;
	volatile int32_t t169 = INT32_MIN;

    t169 = (x957-((x958*x959)==x960));

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x961 = -1;
	uint8_t x962 = 24U;
	uint64_t x963 = 13383LLU;
	static int16_t x964 = INT16_MAX;
	volatile int32_t t170 = -1421529;

    t170 = (x961-((x962*x963)==x964));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x965 = INT16_MIN;
	volatile int8_t x967 = -3;
	int64_t x968 = INT64_MIN;
	volatile int32_t t171 = -53284;

    t171 = (x965-((x966*x967)==x968));

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x969 = INT32_MIN;
	int16_t x970 = INT16_MIN;
	int32_t x971 = -1;
	static int32_t x972 = INT32_MIN;
	volatile int32_t t172 = INT32_MIN;

    t172 = (x969-((x970*x971)==x972));

    if (t172 != INT32_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x973 = 23LLU;
	uint16_t x974 = 82U;
	int64_t x975 = 178LL;
	uint64_t t173 = 198315LLU;

    t173 = (x973-((x974*x975)==x976));

    if (t173 != 23LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x978 = INT16_MIN;
	uint32_t x979 = 57U;
	int16_t x980 = 467;
	volatile int32_t t174 = 0;

    t174 = (x977-((x978*x979)==x980));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x981 = 0;
	static volatile int32_t x983 = INT32_MIN;
	uint64_t x984 = UINT64_MAX;

    t175 = (x981-((x982*x983)==x984));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x986 = 6333320020302758LLU;
	uint64_t x987 = UINT64_MAX;
	int64_t t176 = INT64_MIN;

    t176 = (x985-((x986*x987)==x988));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x993 = -920469LL;
	volatile int16_t x995 = -1;
	int32_t x996 = 4635;

    t177 = (x993-((x994*x995)==x996));

    if (t177 != -920469LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x997 = INT64_MAX;
	int16_t x998 = 1;
	uint16_t x999 = 1837U;
	int8_t x1000 = INT8_MIN;
	static int64_t t178 = INT64_MAX;

    t178 = (x997-((x998*x999)==x1000));

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1002 = -1LL;
	volatile uint8_t x1003 = 36U;
	int32_t t179 = -4132451;

    t179 = (x1001-((x1002*x1003)==x1004));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1009 = INT8_MAX;
	int8_t x1010 = -6;
	static int8_t x1011 = -8;
	static volatile int32_t t180 = -525756732;

    t180 = (x1009-((x1010*x1011)==x1012));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1013 = INT64_MIN;
	int64_t x1015 = -16075434LL;
	static int16_t x1016 = -119;

    t181 = (x1013-((x1014*x1015)==x1016));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1017 = INT8_MIN;
	volatile int8_t x1018 = INT8_MIN;
	uint16_t x1019 = UINT16_MAX;
	uint32_t x1020 = UINT32_MAX;
	volatile int32_t t182 = 46292646;

    t182 = (x1017-((x1018*x1019)==x1020));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x1025 = 1U;
	volatile uint32_t x1026 = UINT32_MAX;
	volatile int32_t x1027 = INT32_MIN;
	int32_t x1028 = INT32_MIN;

    t183 = (x1025-((x1026*x1027)==x1028));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1029 = INT8_MIN;
	static volatile int64_t x1030 = -1LL;
	static int16_t x1031 = -362;
	int8_t x1032 = INT8_MAX;
	int32_t t184 = 150279261;

    t184 = (x1029-((x1030*x1031)==x1032));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1037 = INT32_MAX;
	volatile int64_t x1038 = -2LL;
	uint16_t x1039 = UINT16_MAX;
	static uint8_t x1040 = 2U;
	static volatile int32_t t185 = INT32_MAX;

    t185 = (x1037-((x1038*x1039)==x1040));

    if (t185 != INT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1041 = -1LL;
	volatile uint64_t x1043 = 44901647LLU;
	uint8_t x1044 = UINT8_MAX;
	int64_t t186 = 13924408315LL;

    t186 = (x1041-((x1042*x1043)==x1044));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1045 = 160674103U;
	int64_t x1046 = -25289128321982343LL;
	int8_t x1047 = INT8_MIN;
	static uint8_t x1048 = 1U;
	volatile uint32_t t187 = 113906U;

    t187 = (x1045-((x1046*x1047)==x1048));

    if (t187 != 160674103U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1049 = INT32_MIN;
	int32_t t188 = INT32_MIN;

    t188 = (x1049-((x1050*x1051)==x1052));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1053 = -120663;
	int64_t x1055 = -1LL;
	int32_t x1056 = -6698944;
	static volatile int32_t t189 = 1;

    t189 = (x1053-((x1054*x1055)==x1056));

    if (t189 != -120663) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1057 = -1;
	uint32_t x1058 = 1U;
	uint64_t x1059 = 1284332791LLU;
	static uint16_t x1060 = 5194U;

    t190 = (x1057-((x1058*x1059)==x1060));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1065 = 1481339047648227656LL;
	int8_t x1066 = -14;
	int16_t x1068 = INT16_MIN;
	volatile int64_t t191 = -1LL;

    t191 = (x1065-((x1066*x1067)==x1068));

    if (t191 != 1481339047648227656LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1073 = UINT64_MAX;
	int8_t x1074 = 3;
	int16_t x1075 = -1;
	uint16_t x1076 = 4U;
	volatile uint64_t t192 = UINT64_MAX;

    t192 = (x1073-((x1074*x1075)==x1076));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1077 = UINT8_MAX;
	int64_t x1078 = 843958989447LL;
	uint16_t x1079 = UINT16_MAX;
	static int64_t x1080 = -1LL;
	volatile int32_t t193 = 46737340;

    t193 = (x1077-((x1078*x1079)==x1080));

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1082 = 2U;
	volatile int8_t x1083 = -1;
	static int32_t x1084 = 7470;
	int32_t t194 = 1;

    t194 = (x1081-((x1082*x1083)==x1084));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1086 = 2U;
	uint16_t x1088 = 0U;
	int32_t t195 = 13;

    t195 = (x1085-((x1086*x1087)==x1088));

    if (t195 != 359) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1089 = INT8_MIN;
	volatile int8_t x1090 = -13;
	int16_t x1091 = INT16_MIN;
	uint64_t x1092 = UINT64_MAX;
	int32_t t196 = -29315597;

    t196 = (x1089-((x1090*x1091)==x1092));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1093 = 4552233064LLU;
	uint8_t x1094 = 4U;
	uint64_t x1095 = UINT64_MAX;
	int64_t x1096 = -254030785234275888LL;
	uint64_t t197 = 250890646580947LLU;

    t197 = (x1093-((x1094*x1095)==x1096));

    if (t197 != 4552233064LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1097 = -1LL;
	static uint8_t x1098 = 4U;
	static int8_t x1099 = 27;
	volatile uint32_t x1100 = 22U;
	static int64_t t198 = 46LL;

    t198 = (x1097-((x1098*x1099)==x1100));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1101 = -338LL;
	int16_t x1102 = INT16_MAX;
	uint32_t x1104 = 12U;
	volatile int64_t t199 = 7879LL;

    t199 = (x1101-((x1102*x1103)==x1104));

    if (t199 != -338LL) { NG(); } else { ; }
	
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

