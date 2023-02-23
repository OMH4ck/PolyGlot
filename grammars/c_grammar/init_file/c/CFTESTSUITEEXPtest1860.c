
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

int8_t x1 = -1;
volatile int32_t t1 = 42;
uint16_t x11 = 1U;
uint64_t x14 = 68968761222LLU;
static volatile int8_t x17 = -1;
uint64_t x19 = 3358335919LLU;
int16_t x22 = 19;
volatile int64_t x32 = -1LL;
int32_t t8 = 0;
int8_t x37 = -1;
int8_t x39 = 4;
static volatile int16_t x40 = INT16_MIN;
int32_t x42 = 303;
uint16_t x47 = 2667U;
volatile int32_t t11 = 133;
static int16_t x54 = INT16_MAX;
int32_t x57 = -1;
static int32_t t15 = 163789066;
volatile int8_t x66 = -1;
static int32_t x71 = 1;
int16_t x77 = -12;
static int64_t x82 = INT64_MAX;
uint64_t x83 = 16638505461LLU;
int16_t x84 = 2;
static int32_t x87 = INT32_MIN;
volatile uint32_t t23 = 11400U;
volatile int16_t x97 = INT16_MIN;
int16_t x99 = -1;
volatile uint8_t x100 = UINT8_MAX;
uint32_t t25 = 0U;
static int8_t x106 = -1;
int64_t x108 = -198253LL;
int32_t t27 = -40;
uint64_t x116 = 2407541526LLU;
volatile uint16_t x128 = 23906U;
volatile int32_t t31 = -1;
uint8_t x132 = 3U;
volatile uint64_t t32 = 3656919LLU;
int16_t x136 = 30;
int32_t t34 = -615;
int64_t x145 = -1LL;
uint32_t x146 = 3152579U;
int64_t t36 = 4420212905LL;
int32_t x151 = INT32_MIN;
int32_t x153 = -598394901;
volatile uint32_t x155 = 2546417U;
int8_t x159 = INT8_MAX;
int8_t x161 = 18;
int64_t x163 = INT64_MAX;
int32_t x164 = INT32_MIN;
volatile int32_t t40 = -100945;
uint16_t x166 = UINT16_MAX;
static uint32_t x171 = 8044U;
int32_t x176 = INT32_MIN;
int64_t x180 = INT64_MIN;
int16_t x185 = -2967;
volatile int32_t t47 = 97468563;
volatile int64_t x193 = INT64_MAX;
volatile int32_t x194 = INT32_MIN;
uint64_t x196 = 598LLU;
uint64_t x197 = UINT64_MAX;
static uint16_t x199 = 1023U;
uint64_t t49 = 2628LLU;
int64_t x205 = 885094477455447407LL;
static int32_t x212 = INT32_MIN;
int32_t t52 = 1;
int8_t x213 = INT8_MAX;
int8_t x214 = INT8_MIN;
uint64_t x218 = UINT64_MAX;
uint8_t x221 = UINT8_MAX;
int32_t x222 = -1;
int8_t x231 = -1;
uint64_t x235 = 3795LLU;
uint8_t x239 = 5U;
int16_t x240 = -14;
static uint32_t x247 = 1321814949U;
uint8_t x249 = 5U;
int64_t x253 = 17515170767372431LL;
int64_t x258 = -1LL;
int8_t x268 = INT8_MIN;
int8_t x269 = -1;
int8_t x270 = -1;
int16_t x271 = 729;
int64_t x274 = INT64_MIN;
volatile int32_t t68 = 2678865;
uint16_t x278 = UINT16_MAX;
int32_t t70 = -248865339;
int8_t x285 = 0;
static int16_t x287 = INT16_MIN;
int32_t x288 = INT32_MIN;
int16_t x289 = -1;
int8_t x298 = INT8_MIN;
volatile int64_t x300 = INT64_MAX;
int64_t t74 = -26737LL;
int16_t x302 = INT16_MIN;
volatile int64_t t76 = -386655191193LL;
int16_t x309 = -1;
volatile uint16_t x312 = 44U;
int8_t x314 = -1;
int32_t t79 = -59668;
uint64_t x324 = 14499468400LLU;
volatile int64_t t81 = 136698LL;
uint8_t x334 = UINT8_MAX;
static int32_t x336 = -253434808;
volatile int32_t t83 = -181;
int32_t x337 = INT32_MIN;
uint8_t x346 = 7U;
uint32_t x350 = UINT32_MAX;
static uint8_t x353 = 25U;
uint8_t x359 = 73U;
int32_t x364 = -5424;
volatile uint32_t t90 = 7U;
static uint8_t x373 = 2U;
int32_t x379 = -1;
int64_t x380 = -1LL;
static volatile int32_t t94 = -3;
static uint8_t x382 = 124U;
volatile int32_t x383 = -3581;
volatile int32_t x385 = -7337;
int32_t t96 = 262933584;
static volatile int16_t x389 = -1;
int16_t x404 = -13061;
volatile int32_t t100 = 0;
int16_t x410 = -740;
int32_t x413 = INT32_MAX;
int8_t x416 = INT8_MIN;
int16_t x417 = INT16_MIN;
int32_t x421 = INT32_MIN;
uint8_t x423 = 0U;
volatile int32_t t105 = 20901;
static int32_t x425 = 86;
uint32_t x426 = 1058861U;
int8_t x427 = -1;
int32_t x434 = -9;
volatile int32_t x435 = -13052;
volatile int32_t t108 = 0;
volatile int32_t x439 = INT32_MAX;
static uint8_t x461 = 85U;
static int16_t x467 = -4557;
int32_t t116 = -63633488;
uint32_t x472 = UINT32_MAX;
volatile int32_t t117 = -50500;
volatile int64_t x485 = 56LL;
int8_t x487 = INT8_MIN;
int64_t x488 = -66002391925LL;
int16_t x495 = INT16_MIN;
int16_t x501 = INT16_MAX;
volatile int32_t x506 = 0;
volatile int32_t x513 = 64596;
static volatile int32_t t128 = -227;
volatile int64_t x522 = 63689LL;
volatile int32_t x524 = INT32_MAX;
uint16_t x530 = 6190U;
volatile int8_t x538 = INT8_MAX;
uint32_t x555 = UINT32_MAX;
volatile int32_t t138 = 350;
int16_t x560 = 3606;
static int32_t t139 = 4013384;
uint16_t x575 = 2054U;
int32_t x578 = 1167;
int16_t x585 = INT16_MIN;
uint64_t x588 = 139828LLU;
uint32_t x597 = UINT32_MAX;
static volatile uint16_t x603 = 356U;
static volatile int32_t t150 = -1337262;
int8_t x609 = -1;
volatile int32_t x610 = -53367;
uint64_t x619 = UINT64_MAX;
volatile int16_t x620 = 1331;
uint16_t x630 = 244U;
int64_t x632 = INT64_MIN;
static int32_t x636 = 241;
static int32_t x637 = -1;
int8_t x639 = -1;
int32_t t159 = -34575;
static volatile uint64_t x641 = UINT64_MAX;
int8_t x648 = -1;
int32_t x650 = INT32_MIN;
volatile int32_t x654 = INT32_MIN;
static uint16_t x658 = UINT16_MAX;
uint64_t x662 = UINT64_MAX;
static uint8_t x663 = UINT8_MAX;
int8_t x672 = -1;
int32_t t167 = 64051;
volatile int64_t x674 = -1LL;
int16_t x686 = -1;
static int64_t t172 = -2775236201530644057LL;
int64_t x699 = INT64_MIN;
static volatile int8_t x701 = INT8_MAX;
int8_t x708 = INT8_MIN;
volatile int32_t t179 = -17180;
int16_t x721 = INT16_MAX;
volatile uint64_t t181 = 489949265501721464LLU;
int32_t x729 = INT32_MIN;
volatile int32_t x738 = INT32_MIN;
uint16_t x740 = 0U;
static int8_t x752 = INT8_MAX;
uint8_t x760 = 0U;
int64_t x761 = INT64_MIN;
int16_t x762 = INT16_MAX;
uint64_t x763 = 190216582983LLU;
static volatile int64_t t190 = -37675696LL;
volatile int8_t x765 = INT8_MIN;
uint64_t x767 = UINT64_MAX;
uint16_t x772 = 303U;
int32_t t192 = 2910102;
int8_t x774 = -1;
volatile uint64_t t195 = 1913820230080418LLU;
static int64_t x797 = 25342093162040857LL;


void f0(void) {
    	static int64_t x2 = -1LL;
	uint8_t x3 = 123U;
	int32_t x4 = -1;
	volatile int32_t t0 = -1776335;

    t0 = (x1&((x2<=x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int16_t x6 = INT16_MIN;
	int64_t x7 = -1LL;
	volatile int16_t x8 = -1;

    t1 = (x5&((x6<=x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 1731;
	static uint64_t x10 = UINT64_MAX;
	volatile uint8_t x12 = 14U;
	volatile int32_t t2 = -67;

    t2 = (x9&((x10<=x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -1;
	uint64_t x15 = 1416374LLU;
	int8_t x16 = -1;
	int32_t t3 = 952;

    t3 = (x13&((x14<=x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x18 = UINT32_MAX;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = -143303;

    t4 = (x17&((x18<=x19)!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = 11;
	int64_t x23 = INT64_MIN;
	int32_t x24 = 62397035;
	static int32_t t5 = 15344;

    t5 = (x21&((x22<=x23)!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	uint32_t x26 = 10402U;
	int32_t x27 = INT32_MAX;
	uint64_t x28 = 6694237041LLU;
	int32_t t6 = -1;

    t6 = (x25&((x26<=x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	static volatile int8_t x30 = 1;
	uint16_t x31 = 2U;
	volatile int32_t t7 = 81781256;

    t7 = (x29&((x30<=x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MAX;
	uint32_t x35 = 1U;
	int8_t x36 = INT8_MAX;

    t8 = (x33&((x34<=x35)!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = 8063;
	int32_t t9 = -1;

    t9 = (x37&((x38<=x39)!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MIN;
	int64_t x43 = INT64_MIN;
	volatile int16_t x44 = INT16_MAX;
	int32_t t10 = 1;

    t10 = (x41&((x42<=x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	int8_t x46 = INT8_MIN;
	uint16_t x48 = 21U;

    t11 = (x45&((x46<=x47)!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 118936U;
	int64_t x50 = INT64_MAX;
	uint8_t x51 = 27U;
	int64_t x52 = -19597LL;
	static volatile uint32_t t12 = 57533U;

    t12 = (x49&((x50<=x51)!=x52));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	int32_t x55 = -1;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -8156;

    t13 = (x53&((x54<=x55)!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = -1;
	volatile uint64_t x59 = 199764311762941776LLU;
	uint64_t x60 = 123216455105LLU;
	int32_t t14 = -43200;

    t14 = (x57&((x58<=x59)!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = 1;
	uint64_t x62 = 22540033LLU;
	volatile uint8_t x63 = 9U;
	int32_t x64 = 12929366;

    t15 = (x61&((x62<=x63)!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = UINT8_MAX;
	int32_t x67 = INT32_MAX;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -531451443;

    t16 = (x65&((x66<=x67)!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = 1019517U;
	int8_t x70 = INT8_MAX;
	uint32_t x72 = 34798U;
	static uint32_t t17 = 1264U;

    t17 = (x69&((x70<=x71)!=x72));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 156559694534LLU;
	static volatile uint64_t x74 = 128LLU;
	int32_t x75 = INT32_MIN;
	int8_t x76 = 42;
	volatile uint64_t t18 = 333139LLU;

    t18 = (x73&((x74<=x75)!=x76));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x78 = 39696U;
	static volatile uint16_t x79 = UINT16_MAX;
	static uint8_t x80 = 5U;
	volatile int32_t t19 = -62697;

    t19 = (x77&((x78<=x79)!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MIN;
	static int64_t t20 = 315579396LL;

    t20 = (x81&((x82<=x83)!=x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = 1U;
	int16_t x86 = INT16_MAX;
	volatile int8_t x88 = -13;
	int32_t t21 = -18126354;

    t21 = (x85&((x86<=x87)!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = 22LLU;
	volatile uint16_t x90 = 10916U;
	uint64_t x91 = UINT64_MAX;
	uint64_t x92 = 3LLU;
	static volatile uint64_t t22 = 6937LLU;

    t22 = (x89&((x90<=x91)!=x92));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	uint8_t x94 = UINT8_MAX;
	int32_t x95 = INT32_MAX;
	int64_t x96 = INT64_MIN;

    t23 = (x93&((x94<=x95)!=x96));

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x98 = INT32_MIN;
	volatile int32_t t24 = -94281;

    t24 = (x97&((x98<=x99)!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x101 = 4352702U;
	int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MAX;
	int16_t x104 = INT16_MIN;

    t25 = (x101&((x102<=x103)!=x104));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	static int32_t x107 = -121;
	static int64_t t26 = -170182780LL;

    t26 = (x105&((x106<=x107)!=x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 30833U;
	int8_t x110 = INT8_MIN;
	static int32_t x111 = -1;
	uint32_t x112 = 113780U;

    t27 = (x109&((x110<=x111)!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int64_t x114 = -1LL;
	volatile uint64_t x115 = 0LLU;
	volatile int32_t t28 = 171370001;

    t28 = (x113&((x114<=x115)!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = -1;
	int32_t x118 = INT32_MAX;
	int16_t x119 = 576;
	static int16_t x120 = INT16_MIN;
	volatile int32_t t29 = -1;

    t29 = (x117&((x118<=x119)!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	static uint32_t x122 = 181299U;
	volatile uint32_t x123 = 17771803U;
	static int64_t x124 = INT64_MIN;
	uint32_t t30 = 1010730U;

    t30 = (x121&((x122<=x123)!=x124));

    if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 193U;
	uint64_t x126 = 165247492841205LLU;
	static volatile int8_t x127 = 40;

    t31 = (x125&((x126<=x127)!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 13609LLU;
	int8_t x130 = INT8_MIN;
	static int32_t x131 = 219058;

    t32 = (x129&((x130<=x131)!=x132));

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	static uint64_t x134 = UINT64_MAX;
	static uint8_t x135 = 0U;
	static int32_t t33 = -50;

    t33 = (x133&((x134<=x135)!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = -9;
	int8_t x138 = 0;
	volatile int32_t x139 = INT32_MIN;
	int32_t x140 = -1;

    t34 = (x137&((x138<=x139)!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x141 = 241U;
	uint64_t x142 = 249486LLU;
	int64_t x143 = INT64_MIN;
	int8_t x144 = -1;
	volatile int32_t t35 = -244;

    t35 = (x141&((x142<=x143)!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x147 = 34;
	static volatile int16_t x148 = -1;

    t36 = (x145&((x146<=x147)!=x148));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	int32_t x150 = 26841910;
	static uint16_t x152 = UINT16_MAX;
	volatile int32_t t37 = -960290;

    t37 = (x149&((x150<=x151)!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x154 = 104LL;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = 65;

    t38 = (x153&((x154<=x155)!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	int64_t x158 = -4758491523LL;
	static int16_t x160 = 3972;
	static volatile int64_t t39 = 0LL;

    t39 = (x157&((x158<=x159)!=x160));

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x162 = UINT64_MAX;

    t40 = (x161&((x162<=x163)!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	volatile int8_t x167 = -1;
	int16_t x168 = INT16_MIN;
	static int64_t t41 = 1461789285LL;

    t41 = (x165&((x166<=x167)!=x168));

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	volatile int32_t x170 = INT32_MAX;
	volatile int32_t x172 = -1;
	int64_t t42 = 14LL;

    t42 = (x169&((x170<=x171)!=x172));

    if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x173 = 62U;
	int64_t x174 = INT64_MIN;
	int16_t x175 = -992;
	volatile int32_t t43 = -1;

    t43 = (x173&((x174<=x175)!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	int32_t x178 = INT32_MIN;
	volatile uint8_t x179 = 8U;
	volatile int64_t t44 = 1218510LL;

    t44 = (x177&((x178<=x179)!=x180));

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 25;
	uint8_t x182 = 1U;
	int16_t x183 = INT16_MIN;
	volatile uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = -208658597;

    t45 = (x181&((x182<=x183)!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x186 = UINT32_MAX;
	static uint64_t x187 = 1757857484473LLU;
	volatile int32_t x188 = INT32_MAX;
	volatile int32_t t46 = -670255341;

    t46 = (x185&((x186<=x187)!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	static int8_t x190 = -1;
	uint8_t x191 = 0U;
	uint16_t x192 = 15657U;

    t47 = (x189&((x190<=x191)!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x195 = INT64_MIN;
	int64_t t48 = 0LL;

    t48 = (x193&((x194<=x195)!=x196));

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = -1;
	uint64_t x200 = 7570005053840415LLU;

    t49 = (x197&((x198<=x199)!=x200));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint8_t x201 = 87U;
	int32_t x202 = INT32_MIN;
	int64_t x203 = 49783697673411716LL;
	static int8_t x204 = 0;
	int32_t t50 = -4283933;

    t50 = (x201&((x202<=x203)!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int16_t x206 = INT16_MIN;
	static uint8_t x207 = 18U;
	volatile int32_t x208 = INT32_MIN;
	static volatile int64_t t51 = -31504071143LL;

    t51 = (x205&((x206<=x207)!=x208));

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x209 = UINT8_MAX;
	int32_t x210 = -117123;
	volatile uint8_t x211 = 1U;

    t52 = (x209&((x210<=x211)!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x215 = -204086559518125234LL;
	volatile int32_t x216 = -19598707;
	volatile int32_t t53 = 429415;

    t53 = (x213&((x214<=x215)!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	uint8_t x219 = 8U;
	volatile int16_t x220 = -1;
	volatile int32_t t54 = 71206376;

    t54 = (x217&((x218<=x219)!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x223 = 1;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t55 = -986860;

    t55 = (x221&((x222<=x223)!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = -681;
	int64_t x226 = 352652820889693716LL;
	int8_t x227 = INT8_MIN;
	uint16_t x228 = 466U;
	volatile int32_t t56 = 246167;

    t56 = (x225&((x226<=x227)!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MAX;
	static uint8_t x230 = 1U;
	int8_t x232 = -1;
	int32_t t57 = -306762;

    t57 = (x229&((x230<=x231)!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 324273096651401LLU;
	int16_t x236 = 791;
	volatile int32_t t58 = 56100;

    t58 = (x233&((x234<=x235)!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x237 = -1;
	volatile uint64_t x238 = 2222687242961LLU;
	static int32_t t59 = -928303458;

    t59 = (x237&((x238<=x239)!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	volatile uint32_t x242 = 217539U;
	static int64_t x243 = INT64_MAX;
	int8_t x244 = -2;
	static int32_t t60 = 222512911;

    t60 = (x241&((x242<=x243)!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = -1LL;
	volatile uint16_t x246 = 23505U;
	int32_t x248 = INT32_MIN;
	volatile int64_t t61 = -1148581074957280LL;

    t61 = (x245&((x246<=x247)!=x248));

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x250 = 11U;
	int8_t x251 = INT8_MIN;
	int64_t x252 = INT64_MAX;
	int32_t t62 = -178093160;

    t62 = (x249&((x250<=x251)!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x254 = INT64_MIN;
	int64_t x255 = -470781149LL;
	static int32_t x256 = -1;
	static int64_t t63 = -47624148994LL;

    t63 = (x253&((x254<=x255)!=x256));

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	volatile uint64_t x259 = UINT64_MAX;
	static volatile uint8_t x260 = 2U;
	volatile int32_t t64 = -91731;

    t64 = (x257&((x258<=x259)!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = 128514;
	uint32_t x262 = 45090449U;
	static int8_t x263 = 22;
	int64_t x264 = -1LL;
	int32_t t65 = 635124947;

    t65 = (x261&((x262<=x263)!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -4;
	static int64_t x266 = -1LL;
	int16_t x267 = -1783;
	int32_t t66 = -1718975;

    t66 = (x265&((x266<=x267)!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x272 = 698U;
	volatile int32_t t67 = 3;

    t67 = (x269&((x270<=x271)!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = UINT8_MAX;
	uint8_t x275 = 28U;
	int8_t x276 = INT8_MAX;

    t68 = (x273&((x274<=x275)!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MAX;
	volatile int32_t t69 = 9725649;

    t69 = (x277&((x278<=x279)!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	static int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	static volatile int64_t x284 = -1LL;

    t70 = (x281&((x282<=x283)!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x286 = INT8_MAX;
	volatile int32_t t71 = -22;

    t71 = (x285&((x286<=x287)!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MIN;
	uint64_t x291 = UINT64_MAX;
	static volatile int64_t x292 = INT64_MIN;
	volatile int32_t t72 = 152801;

    t72 = (x289&((x290<=x291)!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MIN;
	int64_t x295 = INT64_MAX;
	static int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = -767;

    t73 = (x293&((x294<=x295)!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int32_t x299 = INT32_MIN;

    t74 = (x297&((x298<=x299)!=x300));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint32_t x301 = 2920067U;
	uint16_t x303 = 6059U;
	int8_t x304 = -1;
	volatile uint32_t t75 = 4344U;

    t75 = (x301&((x302<=x303)!=x304));

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = INT64_MAX;
	volatile uint16_t x306 = UINT16_MAX;
	static volatile int8_t x307 = 33;
	static uint32_t x308 = UINT32_MAX;

    t76 = (x305&((x306<=x307)!=x308));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = INT64_MIN;
	uint16_t x311 = UINT16_MAX;
	int32_t t77 = 21498784;

    t77 = (x309&((x310<=x311)!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 313977288U;
	uint64_t x315 = 750LLU;
	static int16_t x316 = INT16_MAX;
	uint32_t t78 = 708562031U;

    t78 = (x313&((x314<=x315)!=x316));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = INT16_MIN;
	uint8_t x318 = 0U;
	static int16_t x319 = 34;
	int8_t x320 = -1;

    t79 = (x317&((x318<=x319)!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 0U;
	int32_t x322 = -1359927;
	static int32_t x323 = INT32_MAX;
	int32_t t80 = 8329110;

    t80 = (x321&((x322<=x323)!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MAX;
	static int8_t x328 = INT8_MIN;

    t81 = (x325&((x326<=x327)!=x328));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 2156U;
	int64_t x330 = INT64_MIN;
	int8_t x331 = -1;
	uint32_t x332 = 70411361U;
	volatile int32_t t82 = -38054793;

    t82 = (x329&((x330<=x331)!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	volatile int32_t x335 = -1982;

    t83 = (x333&((x334<=x335)!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x338 = -1;
	volatile int32_t x339 = INT32_MIN;
	uint16_t x340 = 19270U;
	int32_t t84 = -474;

    t84 = (x337&((x338<=x339)!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 3569735;
	static int16_t x342 = INT16_MIN;
	uint16_t x343 = UINT16_MAX;
	static uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = -27;

    t85 = (x341&((x342<=x343)!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = -1LL;
	int8_t x347 = -1;
	static volatile int64_t x348 = -1LL;
	static int64_t t86 = -16339548518985765LL;

    t86 = (x345&((x346<=x347)!=x348));

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -1;
	int64_t x351 = -1158715814LL;
	uint8_t x352 = 1U;
	int32_t t87 = 1834;

    t87 = (x349&((x350<=x351)!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = INT8_MAX;
	int64_t x355 = INT64_MIN;
	int64_t x356 = -494664LL;
	volatile int32_t t88 = 777408322;

    t88 = (x353&((x354<=x355)!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 23U;
	static uint32_t x358 = 1692U;
	int8_t x360 = -25;
	static volatile int32_t t89 = -5810;

    t89 = (x357&((x358<=x359)!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 70324159U;
	int8_t x362 = INT8_MAX;
	uint32_t x363 = 25U;

    t90 = (x361&((x362<=x363)!=x364));

    if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -1LL;
	int8_t x366 = INT8_MIN;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = 0;
	static int64_t t91 = 109427810731LL;

    t91 = (x365&((x366<=x367)!=x368));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -1;
	int32_t x370 = -1;
	int64_t x371 = -17532LL;
	int32_t x372 = INT32_MIN;
	int32_t t92 = 46958;

    t92 = (x369&((x370<=x371)!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x374 = INT64_MAX;
	uint32_t x375 = 42U;
	static int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -1152252;

    t93 = (x373&((x374<=x375)!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x377 = 0U;
	uint32_t x378 = UINT32_MAX;

    t94 = (x377&((x378<=x379)!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = UINT32_MAX;
	uint32_t x384 = UINT32_MAX;
	static uint32_t t95 = 506961623U;

    t95 = (x381&((x382<=x383)!=x384));

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x386 = UINT64_MAX;
	int64_t x387 = INT64_MAX;
	volatile int16_t x388 = INT16_MAX;

    t96 = (x385&((x386<=x387)!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x390 = -3LL;
	int8_t x391 = INT8_MAX;
	int8_t x392 = -1;
	static int32_t t97 = -254013;

    t97 = (x389&((x390<=x391)!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = UINT32_MAX;
	uint64_t x394 = UINT64_MAX;
	int64_t x395 = -1LL;
	int32_t x396 = 1833780;
	uint32_t t98 = 3949U;

    t98 = (x393&((x394<=x395)!=x396));

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = 1;
	static int16_t x398 = -1;
	int16_t x399 = -1;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = -57319333;

    t99 = (x397&((x398<=x399)!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = INT16_MIN;
	int64_t x402 = 361LL;
	static int8_t x403 = INT8_MIN;

    t100 = (x401&((x402<=x403)!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 12U;
	uint8_t x406 = 5U;
	int16_t x407 = INT16_MAX;
	int16_t x408 = INT16_MAX;
	static volatile int32_t t101 = 1747;

    t101 = (x405&((x406<=x407)!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -1LL;
	uint16_t x411 = 293U;
	int32_t x412 = INT32_MIN;
	volatile int64_t t102 = 15584590LL;

    t102 = (x409&((x410<=x411)!=x412));

    if (t102 != 1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x414 = 0U;
	int16_t x415 = INT16_MIN;
	volatile int32_t t103 = 6956621;

    t103 = (x413&((x414<=x415)!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x418 = INT8_MAX;
	static int32_t x419 = -1;
	uint8_t x420 = 3U;
	volatile int32_t t104 = -830126;

    t104 = (x417&((x418<=x419)!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x422 = INT64_MIN;
	int64_t x424 = INT64_MIN;

    t105 = (x421&((x422<=x423)!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x428 = 5388836U;
	int32_t t106 = -2;

    t106 = (x425&((x426<=x427)!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	volatile int16_t x430 = -1;
	static int8_t x431 = INT8_MIN;
	uint8_t x432 = UINT8_MAX;
	static volatile int64_t t107 = 18351405325LL;

    t107 = (x429&((x430<=x431)!=x432));

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	volatile int16_t x436 = INT16_MAX;

    t108 = (x433&((x434<=x435)!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 1;
	int64_t x438 = INT64_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t109 = 7584286;

    t109 = (x437&((x438<=x439)!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 5U;
	volatile uint64_t x442 = UINT64_MAX;
	int64_t x443 = -1LL;
	int64_t x444 = INT64_MAX;
	volatile int32_t t110 = -125270;

    t110 = (x441&((x442<=x443)!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -1;
	volatile int8_t x446 = INT8_MIN;
	static uint16_t x447 = 1U;
	static int16_t x448 = -55;
	int32_t t111 = 1771;

    t111 = (x445&((x446<=x447)!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = INT16_MAX;
	int8_t x450 = INT8_MAX;
	static volatile int16_t x451 = 0;
	volatile uint64_t x452 = 902805LLU;
	int32_t t112 = 130227006;

    t112 = (x449&((x450<=x451)!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	int64_t x454 = -1LL;
	volatile uint16_t x455 = UINT16_MAX;
	uint32_t x456 = 1369703527U;
	static int32_t t113 = -62515660;

    t113 = (x453&((x454<=x455)!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MIN;
	int16_t x458 = 10;
	int8_t x459 = -5;
	static volatile int8_t x460 = -1;
	int64_t t114 = 539067LL;

    t114 = (x457&((x458<=x459)!=x460));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = -23;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = UINT8_MAX;
	static volatile int32_t t115 = -35;

    t115 = (x461&((x462<=x463)!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 66U;
	int32_t x466 = 22425;
	int64_t x468 = 2108072656871344100LL;

    t116 = (x465&((x466<=x467)!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	static int8_t x470 = -59;
	static volatile int16_t x471 = -99;

    t117 = (x469&((x470<=x471)!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = INT32_MIN;
	uint8_t x474 = 1U;
	int64_t x475 = -1LL;
	uint32_t x476 = 2374U;
	int32_t t118 = -53306;

    t118 = (x473&((x474<=x475)!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x477 = 1U;
	volatile int16_t x478 = INT16_MIN;
	int32_t x479 = INT32_MIN;
	int32_t x480 = -1;
	static volatile int32_t t119 = -1;

    t119 = (x477&((x478<=x479)!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = INT8_MIN;
	volatile int8_t x482 = INT8_MIN;
	uint16_t x483 = 115U;
	int16_t x484 = INT16_MIN;
	volatile int32_t t120 = -1064906523;

    t120 = (x481&((x482<=x483)!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x486 = INT64_MIN;
	int64_t t121 = -242822283LL;

    t121 = (x485&((x486<=x487)!=x488));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = INT64_MAX;
	int32_t x490 = INT32_MIN;
	volatile uint32_t x491 = 5U;
	int8_t x492 = INT8_MAX;
	int64_t t122 = -2924159837419873538LL;

    t122 = (x489&((x490<=x491)!=x492));

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 405;
	static int32_t x494 = -2;
	volatile int32_t x496 = INT32_MIN;
	volatile int32_t t123 = 15669;

    t123 = (x493&((x494<=x495)!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int8_t x498 = -1;
	uint32_t x499 = 46U;
	int64_t x500 = INT64_MAX;
	volatile int32_t t124 = -48;

    t124 = (x497&((x498<=x499)!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x502 = INT16_MIN;
	int64_t x503 = 22696LL;
	int16_t x504 = INT16_MAX;
	volatile int32_t t125 = 4115894;

    t125 = (x501&((x502<=x503)!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = 0;
	volatile int32_t x507 = -1;
	static volatile int64_t x508 = INT64_MIN;
	static volatile int32_t t126 = 8;

    t126 = (x505&((x506<=x507)!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	volatile uint16_t x510 = UINT16_MAX;
	volatile int32_t x511 = -1;
	int8_t x512 = -1;
	static volatile int32_t t127 = -12697;

    t127 = (x509&((x510<=x511)!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x514 = UINT32_MAX;
	int16_t x515 = INT16_MIN;
	int8_t x516 = -7;

    t128 = (x513&((x514<=x515)!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	static volatile uint16_t x518 = 3022U;
	volatile int8_t x519 = INT8_MIN;
	static volatile uint64_t x520 = 306LLU;
	static int64_t t129 = -4039741LL;

    t129 = (x517&((x518<=x519)!=x520));

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 50313232373089LLU;
	int32_t x523 = INT32_MIN;
	static uint64_t t130 = 7111331439349710444LLU;

    t130 = (x521&((x522<=x523)!=x524));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = INT16_MIN;
	static uint16_t x526 = 7357U;
	int64_t x527 = INT64_MAX;
	int32_t x528 = INT32_MIN;
	static int32_t t131 = -19171;

    t131 = (x525&((x526<=x527)!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = 22;
	int32_t x531 = INT32_MAX;
	volatile int16_t x532 = 173;
	int32_t t132 = -61;

    t132 = (x529&((x530<=x531)!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 1U;
	volatile int16_t x534 = -1;
	static int64_t x535 = -27565556066137LL;
	volatile uint8_t x536 = 58U;
	int32_t t133 = -296153254;

    t133 = (x533&((x534<=x535)!=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = INT32_MIN;
	uint64_t x539 = UINT64_MAX;
	int64_t x540 = INT64_MIN;
	int32_t t134 = -785811124;

    t134 = (x537&((x538<=x539)!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x541 = 35U;
	int32_t x542 = -1;
	uint8_t x543 = UINT8_MAX;
	int16_t x544 = INT16_MIN;
	volatile uint32_t t135 = 2U;

    t135 = (x541&((x542<=x543)!=x544));

    if (t135 != 1U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = -1LL;
	static uint64_t x546 = 326LLU;
	static int64_t x547 = INT64_MIN;
	volatile int64_t x548 = -103827993410268840LL;
	static volatile int64_t t136 = -33231695281175133LL;

    t136 = (x545&((x546<=x547)!=x548));

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x549 = -23701478609029439LL;
	uint8_t x550 = 49U;
	int64_t x551 = 206LL;
	int64_t x552 = 93933104043LL;
	volatile int64_t t137 = -4468LL;

    t137 = (x549&((x550<=x551)!=x552));

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	int16_t x554 = -2;
	int64_t x556 = INT64_MIN;

    t138 = (x553&((x554<=x555)!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -1;
	uint64_t x558 = UINT64_MAX;
	static volatile int16_t x559 = INT16_MIN;

    t139 = (x557&((x558<=x559)!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x561 = 30096U;
	uint16_t x562 = 457U;
	int64_t x563 = 20LL;
	uint32_t x564 = 12746667U;
	volatile uint32_t t140 = 387309963U;

    t140 = (x561&((x562<=x563)!=x564));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 1;
	volatile int64_t x566 = 41256368927LL;
	int8_t x567 = INT8_MIN;
	uint8_t x568 = 1U;
	int32_t t141 = -5588225;

    t141 = (x565&((x566<=x567)!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x569 = UINT16_MAX;
	static int8_t x570 = -21;
	int8_t x571 = INT8_MIN;
	volatile uint8_t x572 = UINT8_MAX;
	int32_t t142 = 16;

    t142 = (x569&((x570<=x571)!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 31U;
	int8_t x574 = 0;
	int8_t x576 = INT8_MIN;
	int32_t t143 = 14692878;

    t143 = (x573&((x574<=x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	int64_t x579 = INT64_MAX;
	int32_t x580 = INT32_MAX;
	volatile int32_t t144 = 15036385;

    t144 = (x577&((x578<=x579)!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	uint16_t x582 = 28U;
	int64_t x583 = INT64_MAX;
	uint16_t x584 = 0U;
	volatile int32_t t145 = 57;

    t145 = (x581&((x582<=x583)!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x586 = INT32_MIN;
	uint64_t x587 = 80279LLU;
	int32_t t146 = -214689;

    t146 = (x585&((x586<=x587)!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = 1;
	static uint8_t x590 = UINT8_MAX;
	volatile int64_t x591 = -136288094925127749LL;
	int8_t x592 = -4;
	volatile int32_t t147 = 463;

    t147 = (x589&((x590<=x591)!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x593 = INT8_MIN;
	int8_t x594 = 0;
	int32_t x595 = 661182;
	uint8_t x596 = 19U;
	int32_t t148 = -162068;

    t148 = (x593&((x594<=x595)!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x598 = INT16_MIN;
	int32_t x599 = -981523582;
	uint16_t x600 = UINT16_MAX;
	uint32_t t149 = 12U;

    t149 = (x597&((x598<=x599)!=x600));

    if (t149 != 1U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MIN;
	int32_t x602 = INT32_MIN;
	int64_t x604 = INT64_MAX;

    t150 = (x601&((x602<=x603)!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	int16_t x606 = INT16_MIN;
	volatile int8_t x607 = INT8_MIN;
	volatile int16_t x608 = INT16_MIN;
	int32_t t151 = -38;

    t151 = (x605&((x606<=x607)!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x611 = 8LLU;
	uint16_t x612 = UINT16_MAX;
	volatile int32_t t152 = -44883;

    t152 = (x609&((x610<=x611)!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x613 = -1;
	static uint32_t x614 = UINT32_MAX;
	volatile uint16_t x615 = UINT16_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t153 = -6301;

    t153 = (x613&((x614<=x615)!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x617 = UINT8_MAX;
	uint8_t x618 = 46U;
	volatile int32_t t154 = -57718;

    t154 = (x617&((x618<=x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -6496212;
	int16_t x622 = -5025;
	int32_t x623 = 3;
	int32_t x624 = INT32_MIN;
	int32_t t155 = 104059910;

    t155 = (x621&((x622<=x623)!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -2511386440LL;
	int64_t x626 = -1LL;
	int64_t x627 = INT64_MIN;
	uint32_t x628 = 4822U;
	volatile int64_t t156 = 34LL;

    t156 = (x625&((x626<=x627)!=x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	static uint8_t x631 = 27U;
	int32_t t157 = 10899;

    t157 = (x629&((x630<=x631)!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	int16_t x634 = INT16_MIN;
	int8_t x635 = INT8_MAX;
	int32_t t158 = 520620279;

    t158 = (x633&((x634<=x635)!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x638 = INT8_MIN;
	int8_t x640 = INT8_MAX;

    t159 = (x637&((x638<=x639)!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = INT32_MAX;
	volatile uint16_t x643 = 7U;
	volatile uint8_t x644 = 1U;
	uint64_t t160 = 40432091594LLU;

    t160 = (x641&((x642<=x643)!=x644));

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MAX;
	uint8_t x646 = 7U;
	volatile uint32_t x647 = 8117553U;
	volatile int32_t t161 = 2;

    t161 = (x645&((x646<=x647)!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x649 = 367U;
	int32_t x651 = -1;
	volatile int32_t x652 = -489701;
	uint32_t t162 = 465U;

    t162 = (x649&((x650<=x651)!=x652));

    if (t162 != 1U) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x653 = -1;
	static volatile int64_t x655 = -522273504289970LL;
	volatile uint8_t x656 = 7U;
	static int32_t t163 = -1111760;

    t163 = (x653&((x654<=x655)!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 12LL;
	int16_t x659 = INT16_MAX;
	static int32_t x660 = 6;
	int64_t t164 = 54042845624LL;

    t164 = (x657&((x658<=x659)!=x660));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int16_t x664 = INT16_MAX;
	int64_t t165 = -30605443880LL;

    t165 = (x661&((x662<=x663)!=x664));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -3058688;
	int16_t x666 = INT16_MAX;
	int8_t x667 = 0;
	volatile int64_t x668 = INT64_MIN;
	static int32_t t166 = -172;

    t166 = (x665&((x666<=x667)!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = -1;
	int16_t x670 = INT16_MAX;
	int64_t x671 = INT64_MIN;

    t167 = (x669&((x670<=x671)!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 1U;
	int64_t x675 = INT64_MIN;
	uint64_t x676 = 4LLU;
	int32_t t168 = 13;

    t168 = (x673&((x674<=x675)!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	int8_t x678 = INT8_MAX;
	volatile int64_t x679 = -1LL;
	static int64_t x680 = INT64_MAX;
	volatile int32_t t169 = -613753009;

    t169 = (x677&((x678<=x679)!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MIN;
	volatile uint32_t x682 = UINT32_MAX;
	int8_t x683 = 3;
	int8_t x684 = 14;
	volatile int64_t t170 = 277994LL;

    t170 = (x681&((x682<=x683)!=x684));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -13;
	volatile uint8_t x687 = UINT8_MAX;
	volatile int32_t x688 = INT32_MAX;
	int32_t t171 = -49;

    t171 = (x685&((x686<=x687)!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = INT64_MIN;
	static uint8_t x690 = 1U;
	volatile uint16_t x691 = 3U;
	volatile int8_t x692 = 0;

    t172 = (x689&((x690<=x691)!=x692));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MAX;
	uint8_t x694 = UINT8_MAX;
	int32_t x695 = INT32_MIN;
	int32_t x696 = INT32_MAX;
	volatile int32_t t173 = 75;

    t173 = (x693&((x694<=x695)!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x697 = -1;
	volatile int16_t x698 = INT16_MIN;
	int64_t x700 = INT64_MIN;
	static int32_t t174 = 16667;

    t174 = (x697&((x698<=x699)!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x702 = -3006497LL;
	static int16_t x703 = -1;
	int64_t x704 = -6301286733015LL;
	int32_t t175 = -5210;

    t175 = (x701&((x702<=x703)!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	int16_t x706 = -195;
	static uint8_t x707 = UINT8_MAX;
	int64_t t176 = 13115LL;

    t176 = (x705&((x706<=x707)!=x708));

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	static int64_t x710 = INT64_MIN;
	int64_t x711 = INT64_MIN;
	static uint16_t x712 = 778U;
	volatile int32_t t177 = -349;

    t177 = (x709&((x710<=x711)!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	static int32_t x714 = INT32_MIN;
	int8_t x715 = -1;
	int64_t x716 = INT64_MIN;
	volatile int32_t t178 = 1472578;

    t178 = (x713&((x714<=x715)!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = 19;
	int32_t x718 = INT32_MIN;
	int8_t x719 = INT8_MAX;
	uint32_t x720 = 9U;

    t179 = (x717&((x718<=x719)!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = INT32_MAX;
	uint8_t x723 = 54U;
	static int64_t x724 = -1LL;
	volatile int32_t t180 = 714;

    t180 = (x721&((x722<=x723)!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 167866LLU;
	static uint8_t x726 = UINT8_MAX;
	static int8_t x727 = INT8_MIN;
	int32_t x728 = INT32_MIN;

    t181 = (x725&((x726<=x727)!=x728));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x730 = 9914207LLU;
	volatile int32_t x731 = INT32_MIN;
	int16_t x732 = INT16_MIN;
	static int32_t t182 = -11559081;

    t182 = (x729&((x730<=x731)!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	uint8_t x734 = 21U;
	static volatile int8_t x735 = -1;
	int64_t x736 = INT64_MIN;
	volatile int64_t t183 = -24992440026LL;

    t183 = (x733&((x734<=x735)!=x736));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	uint32_t x739 = 39037195U;
	volatile uint64_t t184 = 7577876324247724LLU;

    t184 = (x737&((x738<=x739)!=x740));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = 0;
	int8_t x742 = INT8_MIN;
	int64_t x743 = 539039LL;
	uint32_t x744 = 120182U;
	int32_t t185 = 57467164;

    t185 = (x741&((x742<=x743)!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	int32_t x746 = -1;
	int64_t x747 = INT64_MAX;
	volatile int8_t x748 = -2;
	volatile int32_t t186 = -83;

    t186 = (x745&((x746<=x747)!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	int32_t x750 = -1;
	int64_t x751 = INT64_MIN;
	uint32_t t187 = 1070U;

    t187 = (x749&((x750<=x751)!=x752));

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = 0U;
	volatile uint32_t x754 = 47U;
	int16_t x755 = INT16_MIN;
	static int32_t x756 = INT32_MIN;
	int32_t t188 = -85069448;

    t188 = (x753&((x754<=x755)!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -1;
	uint32_t x758 = 102513U;
	static int8_t x759 = INT8_MIN;
	volatile int32_t t189 = -1863;

    t189 = (x757&((x758<=x759)!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x764 = -32518275;

    t190 = (x761&((x762<=x763)!=x764));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = INT8_MAX;
	volatile int8_t x768 = -1;
	static int32_t t191 = 120265;

    t191 = (x765&((x766<=x767)!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = INT8_MIN;
	volatile int32_t x770 = INT32_MAX;
	int16_t x771 = 17;

    t192 = (x769&((x770<=x771)!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 613U;
	int8_t x775 = INT8_MIN;
	uint64_t x776 = 1LLU;
	uint32_t t193 = 216880U;

    t193 = (x773&((x774<=x775)!=x776));

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 59U;
	int64_t x778 = 91260LL;
	static int32_t x779 = INT32_MIN;
	int16_t x780 = -1;
	int32_t t194 = -25;

    t194 = (x777&((x778<=x779)!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 338802LLU;
	volatile uint16_t x782 = 196U;
	int16_t x783 = -1;
	int8_t x784 = -1;

    t195 = (x781&((x782<=x783)!=x784));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -2329787525LL;
	int8_t x786 = -8;
	static int8_t x787 = INT8_MAX;
	static uint8_t x788 = 0U;
	int64_t t196 = -4474767902762923067LL;

    t196 = (x785&((x786<=x787)!=x788));

    if (t196 != 1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x789 = 0;
	static uint16_t x790 = 137U;
	static int32_t x791 = 478228;
	volatile uint64_t x792 = 9128633897658LLU;
	volatile int32_t t197 = -587111950;

    t197 = (x789&((x790<=x791)!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 1878U;
	static volatile int64_t x794 = -1LL;
	uint32_t x795 = 81171085U;
	uint32_t x796 = 64U;
	volatile int32_t t198 = 261276095;

    t198 = (x793&((x794<=x795)!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x798 = -1;
	uint64_t x799 = UINT64_MAX;
	int16_t x800 = -1;
	int64_t t199 = 5LL;

    t199 = (x797&((x798<=x799)!=x800));

    if (t199 != 1LL) { NG(); } else { ; }
	
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

