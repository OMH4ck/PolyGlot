
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

static int32_t x6 = -5;
volatile int32_t x20 = -1;
uint64_t x23 = 650LLU;
static int32_t t5 = 3082336;
uint64_t x28 = 1540929LLU;
static uint32_t x35 = 2U;
int64_t x37 = INT64_MIN;
int16_t x39 = -1;
uint32_t x40 = UINT32_MAX;
int32_t x42 = INT32_MIN;
uint32_t x44 = UINT32_MAX;
static int8_t x59 = INT8_MAX;
uint8_t x66 = 1U;
int32_t t16 = 239502876;
static int8_t x76 = INT8_MIN;
static volatile int32_t x77 = INT32_MIN;
volatile int32_t x86 = INT32_MAX;
volatile int32_t t21 = 29;
uint32_t x90 = UINT32_MAX;
static int32_t x92 = -1;
int8_t x94 = 3;
int64_t x99 = INT64_MAX;
uint16_t x115 = UINT16_MAX;
uint8_t x116 = 36U;
static int64_t x117 = -1LL;
volatile uint16_t x123 = 7U;
int8_t x139 = -1;
static volatile int8_t x143 = -1;
int32_t t35 = 14953993;
volatile int64_t x145 = INT64_MIN;
int8_t x147 = INT8_MIN;
int8_t x151 = -1;
uint16_t x152 = 3U;
int16_t x156 = INT16_MIN;
int64_t x158 = INT64_MIN;
volatile int32_t t39 = 0;
int32_t t42 = 0;
static volatile int8_t x176 = 26;
int16_t x177 = 3;
int64_t x182 = INT64_MIN;
int8_t x184 = INT8_MAX;
static int16_t x188 = 0;
int64_t x193 = INT64_MIN;
static int8_t x196 = 8;
uint16_t x198 = 2105U;
int32_t t49 = 214;
uint64_t x203 = UINT64_MAX;
volatile int32_t t50 = 9;
volatile int16_t x216 = -1;
uint32_t x219 = 4U;
static int8_t x226 = 0;
uint8_t x231 = UINT8_MAX;
volatile int32_t x240 = 382;
uint64_t x244 = UINT64_MAX;
int16_t x256 = INT16_MAX;
int64_t x258 = 1254627521LL;
static uint16_t x262 = 206U;
int8_t x264 = INT8_MIN;
int64_t x271 = INT64_MIN;
static uint16_t x274 = 106U;
int16_t x276 = -10882;
volatile int16_t x279 = -41;
volatile int32_t x282 = -1442004;
uint16_t x287 = 54U;
int32_t x291 = INT32_MIN;
uint8_t x296 = 17U;
int32_t x300 = INT32_MAX;
uint8_t x306 = UINT8_MAX;
uint16_t x312 = 9U;
static int8_t x313 = INT8_MIN;
int32_t x314 = 24559;
static volatile int8_t x316 = INT8_MIN;
volatile uint8_t x317 = 0U;
volatile int8_t x319 = INT8_MAX;
static int32_t x320 = INT32_MIN;
volatile uint32_t x321 = UINT32_MAX;
uint32_t x323 = 12300448U;
int32_t x324 = INT32_MIN;
int16_t x328 = -1;
int32_t t81 = -57698;
volatile uint8_t x329 = UINT8_MAX;
uint8_t x331 = 5U;
int16_t x337 = INT16_MIN;
volatile int32_t t84 = 28;
int64_t x343 = 334328LL;
uint32_t x344 = 21791U;
static volatile int32_t t85 = -257;
uint8_t x346 = 1U;
static uint32_t x350 = 1872176U;
static int16_t x352 = INT16_MAX;
volatile uint16_t x356 = 3U;
volatile int32_t t88 = 14317270;
int64_t x358 = INT64_MIN;
int16_t x367 = 11418;
static int8_t x373 = INT8_MIN;
static int16_t x375 = -1;
int32_t x378 = -1;
static int32_t x383 = -1;
uint16_t x384 = 2464U;
volatile int32_t t95 = -1;
uint16_t x387 = 4239U;
int32_t x398 = INT32_MAX;
int16_t x399 = INT16_MIN;
int8_t x401 = INT8_MIN;
int32_t t103 = 2;
int32_t x418 = -1;
volatile int32_t t104 = 0;
uint64_t x422 = 8331604988LLU;
volatile int32_t t107 = -1;
uint32_t x437 = UINT32_MAX;
uint32_t x439 = 57U;
int8_t x458 = -1;
int64_t x462 = INT64_MIN;
uint64_t x469 = UINT64_MAX;
volatile int32_t t117 = -146;
int64_t x474 = -1LL;
int16_t x475 = INT16_MIN;
int32_t x477 = INT32_MIN;
static int64_t x482 = INT64_MIN;
volatile uint64_t x486 = 19LLU;
static volatile int32_t t122 = -2787830;
int8_t x498 = INT8_MAX;
volatile int64_t x499 = INT64_MAX;
static int16_t x501 = INT16_MAX;
int8_t x502 = 22;
uint32_t x504 = 20U;
int32_t x505 = INT32_MIN;
static int16_t x509 = 3;
static int16_t x513 = -1;
uint16_t x517 = UINT16_MAX;
int16_t x526 = INT16_MIN;
volatile int64_t x528 = -28LL;
static int32_t x532 = INT32_MIN;
int32_t x534 = INT32_MAX;
static uint16_t x539 = 97U;
static uint32_t x541 = 221379U;
volatile int32_t t139 = 71;
volatile int8_t x564 = -1;
volatile int32_t t140 = 2098990;
uint8_t x565 = 0U;
static uint8_t x567 = 109U;
int32_t t141 = -27554718;
volatile int32_t t143 = 18942538;
static int8_t x578 = 6;
int16_t x582 = INT16_MAX;
int32_t t145 = 21663189;
static int8_t x585 = INT8_MAX;
volatile int32_t t146 = 127057;
static int32_t t148 = 23749;
static volatile int32_t t152 = 58119;
static int16_t x626 = INT16_MAX;
int8_t x627 = -5;
static uint32_t x632 = 38U;
int32_t x636 = -14;
int64_t x648 = INT64_MIN;
int16_t x650 = -1;
static volatile int64_t x653 = INT64_MIN;
static int8_t x661 = 1;
static int64_t x662 = 2232900514450868LL;
static int16_t x669 = -1;
int8_t x685 = INT8_MIN;
static uint64_t x687 = 2139629513LLU;
int8_t x688 = -15;
int8_t x689 = INT8_MIN;
volatile int16_t x692 = INT16_MAX;
int32_t x694 = INT32_MAX;
uint16_t x698 = 3398U;
int32_t t174 = -7449295;
volatile int32_t t175 = -2918391;
volatile uint8_t x710 = 12U;
volatile int32_t t178 = 61479275;
int8_t x719 = INT8_MIN;
int64_t x726 = INT64_MIN;
volatile int16_t x736 = INT16_MIN;
volatile int32_t x737 = INT32_MAX;
static uint32_t x743 = 206U;
int32_t t185 = 1594549;
static volatile int32_t t186 = -65273517;
static int8_t x751 = -63;
volatile int32_t t188 = -11406;
uint32_t x762 = UINT32_MAX;
volatile int32_t t191 = 64;
int64_t x769 = INT64_MIN;
static int32_t x774 = -1;
int64_t x781 = INT64_MIN;
static int64_t x786 = INT64_MAX;
static uint8_t x794 = UINT8_MAX;
int8_t x798 = INT8_MAX;


void f0(void) {
    	static uint64_t x1 = 127632LLU;
	uint8_t x2 = UINT8_MAX;
	uint8_t x3 = 0U;
	uint64_t x4 = 332344850524049225LLU;
	volatile int32_t t0 = -322;

    t0 = (x1!=((x2>x3)==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int16_t x7 = 12670;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = -2175767;

    t1 = (x5!=((x6>x7)==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int16_t x10 = -1;
	int32_t x11 = -1;
	uint16_t x12 = UINT16_MAX;
	static volatile int32_t t2 = -20842895;

    t2 = (x9!=((x10>x11)==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 24913LLU;
	uint8_t x14 = 7U;
	uint8_t x15 = 36U;
	int16_t x16 = 345;
	static int32_t t3 = 3135987;

    t3 = (x13!=((x14>x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 421;
	static uint8_t x18 = 127U;
	static int8_t x19 = INT8_MIN;
	volatile int32_t t4 = 3194840;

    t4 = (x17!=((x18>x19)==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	static volatile uint8_t x22 = 50U;
	int64_t x24 = INT64_MIN;

    t5 = (x21!=((x22>x23)==x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = -483914316418368LL;
	int32_t x26 = -1;
	volatile int32_t x27 = INT32_MAX;
	volatile int32_t t6 = -12;

    t6 = (x25!=((x26>x27)==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 3U;
	int8_t x30 = INT8_MIN;
	volatile int8_t x31 = -1;
	static volatile uint8_t x32 = UINT8_MAX;
	int32_t t7 = 22;

    t7 = (x29!=((x30>x31)==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x33 = -1;
	static volatile uint16_t x34 = 2U;
	static uint32_t x36 = 8860318U;
	int32_t t8 = -18610499;

    t8 = (x33!=((x34>x35)==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -1;
	int32_t t9 = -15447788;

    t9 = (x37!=((x38>x39)==x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x41 = 80767512U;
	uint32_t x43 = UINT32_MAX;
	static volatile int32_t t10 = 21;

    t10 = (x41!=((x42>x43)==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -22;
	int32_t x46 = 0;
	uint32_t x47 = UINT32_MAX;
	static volatile uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = 115;

    t11 = (x45!=((x46>x47)==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = -1LL;
	int8_t x50 = INT8_MIN;
	int64_t x51 = -1LL;
	int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 6460538;

    t12 = (x49!=((x50>x51)==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	static int64_t x54 = INT64_MAX;
	int16_t x55 = INT16_MIN;
	volatile int32_t x56 = INT32_MIN;
	int32_t t13 = 6049340;

    t13 = (x53!=((x54>x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = 619855130;
	int32_t x58 = -686220811;
	int16_t x60 = 3;
	volatile int32_t t14 = -332;

    t14 = (x57!=((x58>x59)==x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	uint64_t x62 = UINT64_MAX;
	int8_t x63 = INT8_MIN;
	uint64_t x64 = 164207580LLU;
	volatile int32_t t15 = 365357;

    t15 = (x61!=((x62>x63)==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 13054885;
	int16_t x67 = 184;
	volatile uint32_t x68 = 144610U;

    t16 = (x65!=((x66>x67)==x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 1U;
	int16_t x70 = INT16_MIN;
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = -1LL;
	volatile int32_t t17 = 3035994;

    t17 = (x69!=((x70>x71)==x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = -1LL;
	int16_t x74 = INT16_MAX;
	int32_t x75 = INT32_MIN;
	static volatile int32_t t18 = 64675623;

    t18 = (x73!=((x74>x75)==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	static volatile int16_t x80 = INT16_MIN;
	int32_t t19 = 7969;

    t19 = (x77!=((x78>x79)==x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int8_t x82 = 1;
	int8_t x83 = 6;
	static int16_t x84 = -3;
	volatile int32_t t20 = 36;

    t20 = (x81!=((x82>x83)==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	int32_t x87 = 347;
	int32_t x88 = INT32_MIN;

    t21 = (x85!=((x86>x87)==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	static volatile int32_t x91 = -1;
	int32_t t22 = -41089;

    t22 = (x89!=((x90>x91)==x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	int64_t x95 = -1LL;
	volatile int8_t x96 = 61;
	static volatile int32_t t23 = -508510022;

    t23 = (x93!=((x94>x95)==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 9;
	uint64_t x98 = 894LLU;
	uint64_t x100 = 2756051877184052463LLU;
	int32_t t24 = -1969;

    t24 = (x97!=((x98>x99)==x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 2617614U;
	uint16_t x102 = UINT16_MAX;
	volatile int8_t x103 = INT8_MIN;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = -1;

    t25 = (x101!=((x102>x103)==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -6606531LL;
	static uint16_t x106 = UINT16_MAX;
	int64_t x107 = INT64_MAX;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = -207780;

    t26 = (x105!=((x106>x107)==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = UINT32_MAX;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = 214U;
	int32_t t27 = 8890;

    t27 = (x109!=((x110>x111)==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MAX;
	uint32_t x114 = 954U;
	static int32_t t28 = -23599;

    t28 = (x113!=((x114>x115)==x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MIN;
	int32_t x119 = -84;
	static volatile int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -23;

    t29 = (x117!=((x118>x119)==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x121 = INT16_MIN;
	volatile int32_t x122 = INT32_MIN;
	int64_t x124 = INT64_MAX;
	int32_t t30 = -8618753;

    t30 = (x121!=((x122>x123)==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	volatile int32_t x126 = -1;
	static int16_t x127 = -4;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = 1;

    t31 = (x125!=((x126>x127)==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 39290U;
	static int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;
	volatile int32_t t32 = 1;

    t32 = (x129!=((x130>x131)==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = -1LL;
	uint8_t x134 = 2U;
	static volatile int8_t x135 = INT8_MIN;
	uint8_t x136 = 30U;
	volatile int32_t t33 = 497;

    t33 = (x133!=((x134>x135)==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	volatile uint8_t x138 = 115U;
	static int16_t x140 = INT16_MAX;
	int32_t t34 = 5113264;

    t34 = (x137!=((x138>x139)==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 1605U;
	static int16_t x142 = -46;
	static volatile int32_t x144 = -3;

    t35 = (x141!=((x142>x143)==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = 93;
	volatile int16_t x148 = -1;
	volatile int32_t t36 = 181303;

    t36 = (x145!=((x146>x147)==x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static uint16_t x150 = UINT16_MAX;
	volatile int32_t t37 = -716155442;

    t37 = (x149!=((x150>x151)==x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x153 = UINT64_MAX;
	int8_t x154 = -1;
	int8_t x155 = INT8_MAX;
	int32_t t38 = 149671193;

    t38 = (x153!=((x154>x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -36;
	int64_t x159 = INT64_MAX;
	int32_t x160 = INT32_MIN;

    t39 = (x157!=((x158>x159)==x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -1;
	volatile int32_t x162 = INT32_MIN;
	uint8_t x163 = 8U;
	int8_t x164 = INT8_MAX;
	static int32_t t40 = 8571;

    t40 = (x161!=((x162>x163)==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MIN;
	uint64_t x166 = 1151277658LLU;
	int64_t x167 = INT64_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -430325256;

    t41 = (x165!=((x166>x167)==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 1;
	static int16_t x170 = -1;
	static uint16_t x171 = 106U;
	volatile int32_t x172 = INT32_MIN;

    t42 = (x169!=((x170>x171)==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -1LL;
	int64_t x174 = -1LL;
	volatile int32_t x175 = INT32_MIN;
	volatile int32_t t43 = 2;

    t43 = (x173!=((x174>x175)==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x178 = -1631;
	int32_t x179 = -19;
	uint64_t x180 = 7LLU;
	int32_t t44 = -2297183;

    t44 = (x177!=((x178>x179)==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -376412807695581LL;
	uint64_t x183 = 2065911822133LLU;
	static volatile int32_t t45 = -127899569;

    t45 = (x181!=((x182>x183)==x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	uint16_t x186 = 1U;
	static uint64_t x187 = 4355118992563482LLU;
	int32_t t46 = -12174125;

    t46 = (x185!=((x186>x187)==x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = 1;
	static int8_t x190 = 6;
	int32_t x191 = INT32_MIN;
	int64_t x192 = 7669LL;
	volatile int32_t t47 = -9;

    t47 = (x189!=((x190>x191)==x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x194 = 72U;
	volatile int32_t x195 = -1;
	volatile int32_t t48 = 1;

    t48 = (x193!=((x194>x195)==x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 7U;
	int16_t x199 = -464;
	uint32_t x200 = 55894344U;

    t49 = (x197!=((x198>x199)==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	uint64_t x204 = 31859112LLU;

    t50 = (x201!=((x202>x203)==x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	uint32_t x206 = 255151U;
	int8_t x207 = INT8_MAX;
	uint16_t x208 = 447U;
	volatile int32_t t51 = 66069899;

    t51 = (x205!=((x206>x207)==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 1U;
	volatile int16_t x210 = -169;
	int8_t x211 = -1;
	volatile uint64_t x212 = UINT64_MAX;
	volatile int32_t t52 = 0;

    t52 = (x209!=((x210>x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -5;
	int64_t x214 = 10LL;
	int8_t x215 = INT8_MIN;
	volatile int32_t t53 = -31350393;

    t53 = (x213!=((x214>x215)==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 20U;
	static volatile uint8_t x218 = 0U;
	int32_t x220 = INT32_MIN;
	static int32_t t54 = -374;

    t54 = (x217!=((x218>x219)==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = UINT8_MAX;
	int32_t x222 = INT32_MIN;
	uint8_t x223 = 0U;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = -86448;

    t55 = (x221!=((x222>x223)==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 0;
	static int32_t x227 = INT32_MIN;
	int32_t x228 = -88;
	int32_t t56 = 0;

    t56 = (x225!=((x226>x227)==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MIN;
	static int64_t x232 = -164570LL;
	volatile int32_t t57 = -683361708;

    t57 = (x229!=((x230>x231)==x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = 1716854625029LL;
	int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	int32_t t58 = -14269936;

    t58 = (x233!=((x234>x235)==x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x237 = 4114989302514LL;
	int32_t x238 = INT32_MAX;
	static int32_t x239 = INT32_MIN;
	static int32_t t59 = 987423729;

    t59 = (x237!=((x238>x239)==x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x241 = -1LL;
	volatile uint32_t x242 = 174702671U;
	int64_t x243 = INT64_MAX;
	int32_t t60 = 357;

    t60 = (x241!=((x242>x243)==x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 3149;
	static volatile int8_t x246 = 1;
	uint8_t x247 = 25U;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = 194059;

    t61 = (x245!=((x246>x247)==x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x249 = INT8_MIN;
	static uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 23U;
	uint32_t x252 = UINT32_MAX;
	int32_t t62 = 28183;

    t62 = (x249!=((x250>x251)==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	uint16_t x254 = 57U;
	uint32_t x255 = 340U;
	static int32_t t63 = -3058493;

    t63 = (x253!=((x254>x255)==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	volatile int16_t x259 = INT16_MIN;
	static int64_t x260 = INT64_MIN;
	volatile int32_t t64 = 625;

    t64 = (x257!=((x258>x259)==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	volatile uint16_t x263 = UINT16_MAX;
	static int32_t t65 = 69;

    t65 = (x261!=((x262>x263)==x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	uint8_t x266 = 1U;
	uint32_t x267 = 246U;
	uint64_t x268 = 4172823875LLU;
	int32_t t66 = 20522189;

    t66 = (x265!=((x266>x267)==x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	int16_t x270 = INT16_MIN;
	static int32_t x272 = -163285;
	volatile int32_t t67 = 288941596;

    t67 = (x269!=((x270>x271)==x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	int32_t x275 = -1;
	volatile int32_t t68 = -250;

    t68 = (x273!=((x274>x275)==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = -1;
	static int16_t x278 = -1;
	volatile int64_t x280 = -23893474123562477LL;
	int32_t t69 = 5;

    t69 = (x277!=((x278>x279)==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 0;
	static uint8_t x283 = 2U;
	volatile uint64_t x284 = 1964098LLU;
	volatile int32_t t70 = 28483294;

    t70 = (x281!=((x282>x283)==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x285 = -422;
	volatile uint8_t x286 = 21U;
	volatile int16_t x288 = -1;
	int32_t t71 = -234678312;

    t71 = (x285!=((x286>x287)==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 2U;
	volatile int8_t x290 = -7;
	volatile int8_t x292 = -1;
	volatile int32_t t72 = 941;

    t72 = (x289!=((x290>x291)==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x293 = INT16_MAX;
	volatile uint8_t x294 = UINT8_MAX;
	uint16_t x295 = 84U;
	int32_t t73 = -1578;

    t73 = (x293!=((x294>x295)==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = 604;
	volatile uint32_t x298 = 7731U;
	uint32_t x299 = UINT32_MAX;
	volatile int32_t t74 = -87854;

    t74 = (x297!=((x298>x299)==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	static int8_t x302 = 1;
	int32_t x303 = -6;
	int16_t x304 = -1;
	volatile int32_t t75 = 1;

    t75 = (x301!=((x302>x303)==x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -13;
	volatile uint64_t x307 = UINT64_MAX;
	uint16_t x308 = 4386U;
	volatile int32_t t76 = 2299092;

    t76 = (x305!=((x306>x307)==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x309 = INT64_MAX;
	volatile int64_t x310 = -1LL;
	volatile int8_t x311 = 0;
	int32_t t77 = -13719153;

    t77 = (x309!=((x310>x311)==x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x315 = INT8_MAX;
	int32_t t78 = -7101;

    t78 = (x313!=((x314>x315)==x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = -1;
	int32_t t79 = -89;

    t79 = (x317!=((x318>x319)==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x322 = 18U;
	volatile int32_t t80 = -1;

    t80 = (x321!=((x322>x323)==x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	uint8_t x326 = 61U;
	int32_t x327 = INT32_MIN;

    t81 = (x325!=((x326>x327)==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = 3770880395042468LL;
	static uint8_t x332 = 95U;
	int32_t t82 = 461561;

    t82 = (x329!=((x330>x331)==x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 3328384647124837539LL;
	int8_t x334 = 1;
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MAX;
	static int32_t t83 = -182177;

    t83 = (x333!=((x334>x335)==x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = UINT64_MAX;
	uint8_t x340 = UINT8_MAX;

    t84 = (x337!=((x338>x339)==x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MAX;
	int8_t x342 = 0;

    t85 = (x341!=((x342>x343)==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = 101LL;
	uint8_t x347 = 13U;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = -1;

    t86 = (x345!=((x346>x347)==x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 26698823LLU;
	int8_t x351 = INT8_MAX;
	volatile int32_t t87 = -179531;

    t87 = (x349!=((x350>x351)==x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x353 = 71U;
	uint64_t x354 = 2072450761LLU;
	int16_t x355 = -1;

    t88 = (x353!=((x354>x355)==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint8_t x357 = 49U;
	int8_t x359 = -1;
	int16_t x360 = -1;
	volatile int32_t t89 = -63755;

    t89 = (x357!=((x358>x359)==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MAX;
	int8_t x363 = INT8_MAX;
	int32_t x364 = -53600486;
	volatile int32_t t90 = -778179180;

    t90 = (x361!=((x362>x363)==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 48U;
	uint8_t x366 = 24U;
	uint8_t x368 = UINT8_MAX;
	static volatile int32_t t91 = -17147;

    t91 = (x365!=((x366>x367)==x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = 293;
	static volatile int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	int64_t x372 = -18LL;
	int32_t t92 = -8;

    t92 = (x369!=((x370>x371)==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x374 = 624556254LLU;
	int16_t x376 = INT16_MAX;
	int32_t t93 = -19908;

    t93 = (x373!=((x374>x375)==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	volatile uint16_t x379 = 12U;
	int64_t x380 = -67757215LL;
	volatile int32_t t94 = -14998328;

    t94 = (x377!=((x378>x379)==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = -1;
	static uint64_t x382 = 242LLU;

    t95 = (x381!=((x382>x383)==x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x385 = 56152408608LLU;
	static int16_t x386 = -1;
	uint8_t x388 = 19U;
	volatile int32_t t96 = 9;

    t96 = (x385!=((x386>x387)==x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MAX;
	int16_t x390 = INT16_MIN;
	volatile int8_t x391 = -1;
	int8_t x392 = -1;
	int32_t t97 = -28915;

    t97 = (x389!=((x390>x391)==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MIN;
	int8_t x394 = 9;
	volatile uint32_t x395 = 13352489U;
	static int32_t x396 = INT32_MAX;
	static int32_t t98 = -3720;

    t98 = (x393!=((x394>x395)==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = 24LL;
	uint32_t x400 = 2710U;
	static volatile int32_t t99 = -86519;

    t99 = (x397!=((x398>x399)==x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x402 = 20;
	volatile uint8_t x403 = 33U;
	uint32_t x404 = 1232002230U;
	int32_t t100 = -736271060;

    t100 = (x401!=((x402>x403)==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 2033687107LLU;
	volatile int64_t x406 = INT64_MAX;
	int64_t x407 = 0LL;
	uint64_t x408 = 65256LLU;
	int32_t t101 = -33052672;

    t101 = (x405!=((x406>x407)==x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x409 = 105247016096LLU;
	static int16_t x410 = INT16_MIN;
	int64_t x411 = -1LL;
	static uint32_t x412 = 139U;
	volatile int32_t t102 = -472397662;

    t102 = (x409!=((x410>x411)==x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	uint32_t x414 = UINT32_MAX;
	uint32_t x415 = 837199200U;
	volatile int64_t x416 = INT64_MIN;

    t103 = (x413!=((x414>x415)==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	static uint32_t x419 = UINT32_MAX;
	int8_t x420 = -4;

    t104 = (x417!=((x418>x419)==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	int16_t x423 = INT16_MIN;
	int64_t x424 = INT64_MAX;
	volatile int32_t t105 = -362586;

    t105 = (x421!=((x422>x423)==x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 131743104U;
	static int64_t x426 = -1LL;
	volatile uint32_t x427 = UINT32_MAX;
	uint32_t x428 = 4225U;
	volatile int32_t t106 = -2;

    t106 = (x425!=((x426>x427)==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	static int8_t x430 = INT8_MIN;
	volatile int16_t x431 = INT16_MAX;
	int64_t x432 = -1360607700678106664LL;

    t107 = (x429!=((x430>x431)==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = 0;
	int64_t x434 = -1LL;
	int8_t x435 = -23;
	int64_t x436 = 19986LL;
	int32_t t108 = 9779278;

    t108 = (x433!=((x434>x435)==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = 63690LL;
	volatile int64_t x440 = -1163868262767682LL;
	volatile int32_t t109 = 0;

    t109 = (x437!=((x438>x439)==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x441 = INT8_MAX;
	volatile int32_t x442 = INT32_MIN;
	int8_t x443 = -1;
	volatile int64_t x444 = 193392268LL;
	volatile int32_t t110 = -27245;

    t110 = (x441!=((x442>x443)==x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	uint64_t x446 = 6217LLU;
	int16_t x447 = INT16_MAX;
	uint8_t x448 = 9U;
	volatile int32_t t111 = 16020;

    t111 = (x445!=((x446>x447)==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MIN;
	int64_t x451 = INT64_MIN;
	int8_t x452 = INT8_MIN;
	int32_t t112 = 995361;

    t112 = (x449!=((x450>x451)==x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x453 = 1U;
	int16_t x454 = -1;
	uint8_t x455 = 0U;
	uint8_t x456 = UINT8_MAX;
	int32_t t113 = -29094079;

    t113 = (x453!=((x454>x455)==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = INT8_MIN;
	uint16_t x459 = UINT16_MAX;
	int32_t x460 = -11182818;
	int32_t t114 = -1220713;

    t114 = (x457!=((x458>x459)==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = 2832281;
	static int32_t x463 = INT32_MAX;
	volatile int64_t x464 = -1LL;
	int32_t t115 = 511902771;

    t115 = (x461!=((x462>x463)==x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = INT32_MIN;
	int8_t x466 = -1;
	volatile int64_t x467 = INT64_MIN;
	int16_t x468 = -1;
	int32_t t116 = 2271;

    t116 = (x465!=((x466>x467)==x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x470 = INT64_MIN;
	int64_t x471 = 196780305LL;
	uint64_t x472 = UINT64_MAX;

    t117 = (x469!=((x470>x471)==x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -13464;
	volatile int64_t x476 = INT64_MIN;
	static volatile int32_t t118 = -16388;

    t118 = (x473!=((x474>x475)==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x478 = 3571270U;
	int8_t x479 = INT8_MIN;
	int64_t x480 = INT64_MIN;
	int32_t t119 = -1001;

    t119 = (x477!=((x478>x479)==x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	static int16_t x483 = -24;
	int64_t x484 = INT64_MAX;
	volatile int32_t t120 = 764984;

    t120 = (x481!=((x482>x483)==x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	uint32_t x487 = 41755U;
	uint64_t x488 = UINT64_MAX;
	volatile int32_t t121 = -50;

    t121 = (x485!=((x486>x487)==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -60;
	int8_t x490 = INT8_MIN;
	int16_t x491 = -1;
	uint32_t x492 = UINT32_MAX;

    t122 = (x489!=((x490>x491)==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	uint32_t x494 = UINT32_MAX;
	int64_t x495 = INT64_MIN;
	static uint64_t x496 = 11LLU;
	int32_t t123 = -16699;

    t123 = (x493!=((x494>x495)==x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x497 = 249364LLU;
	static uint16_t x500 = UINT16_MAX;
	volatile int32_t t124 = 206;

    t124 = (x497!=((x498>x499)==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x503 = 60969634501901LLU;
	int32_t t125 = -3;

    t125 = (x501!=((x502>x503)==x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x506 = INT64_MIN;
	uint64_t x507 = 1037LLU;
	int16_t x508 = -1;
	volatile int32_t t126 = 99;

    t126 = (x505!=((x506>x507)==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x510 = 1U;
	volatile int8_t x511 = -40;
	static int8_t x512 = 4;
	int32_t t127 = 133967;

    t127 = (x509!=((x510>x511)==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = -1LL;
	static int8_t x515 = -4;
	volatile int32_t x516 = INT32_MAX;
	int32_t t128 = 984;

    t128 = (x513!=((x514>x515)==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x518 = INT32_MIN;
	int8_t x519 = -1;
	int8_t x520 = INT8_MAX;
	volatile int32_t t129 = -204140;

    t129 = (x517!=((x518>x519)==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = 1;
	volatile uint16_t x522 = 63U;
	int16_t x523 = -1;
	int16_t x524 = INT16_MAX;
	int32_t t130 = -250235;

    t130 = (x521!=((x522>x523)==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x525 = 10505U;
	static volatile int8_t x527 = 31;
	int32_t t131 = 69397067;

    t131 = (x525!=((x526>x527)==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 1117U;
	uint32_t x530 = 896122U;
	uint16_t x531 = 3U;
	static volatile int32_t t132 = 535097758;

    t132 = (x529!=((x530>x531)==x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 659U;
	uint16_t x535 = UINT16_MAX;
	static uint16_t x536 = UINT16_MAX;
	volatile int32_t t133 = 0;

    t133 = (x533!=((x534>x535)==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 54U;
	uint64_t x538 = 208066LLU;
	int8_t x540 = -11;
	volatile int32_t t134 = -2910085;

    t134 = (x537!=((x538>x539)==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = -1036;
	static int8_t x543 = INT8_MIN;
	int64_t x544 = -1LL;
	int32_t t135 = 11244;

    t135 = (x541!=((x542>x543)==x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	uint8_t x546 = 0U;
	static uint8_t x547 = 16U;
	int64_t x548 = INT64_MAX;
	int32_t t136 = -6805320;

    t136 = (x545!=((x546>x547)==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = UINT16_MAX;
	volatile uint8_t x550 = 0U;
	static volatile int16_t x551 = INT16_MAX;
	uint32_t x552 = 1U;
	volatile int32_t t137 = 2548;

    t137 = (x549!=((x550>x551)==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = 42;
	int32_t x554 = 1387753;
	int16_t x555 = INT16_MIN;
	static int32_t x556 = INT32_MIN;
	volatile int32_t t138 = -1;

    t138 = (x553!=((x554>x555)==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = 0;
	int32_t x558 = INT32_MIN;
	uint64_t x559 = UINT64_MAX;
	int64_t x560 = INT64_MIN;

    t139 = (x557!=((x558>x559)==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = -1;
	int32_t x562 = INT32_MIN;
	int64_t x563 = -1LL;

    t140 = (x561!=((x562>x563)==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x566 = INT16_MIN;
	uint32_t x568 = 61128213U;

    t141 = (x565!=((x566>x567)==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x569 = -199003470;
	int64_t x570 = 104819904762325LL;
	volatile int8_t x571 = INT8_MIN;
	uint8_t x572 = 56U;
	int32_t t142 = 0;

    t142 = (x569!=((x570>x571)==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x573 = INT32_MAX;
	volatile int32_t x574 = 15904080;
	int8_t x575 = INT8_MIN;
	int8_t x576 = INT8_MAX;

    t143 = (x573!=((x574>x575)==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	static uint8_t x579 = 25U;
	int16_t x580 = INT16_MIN;
	int32_t t144 = -821159697;

    t144 = (x577!=((x578>x579)==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	static uint32_t x583 = 101205363U;
	volatile int32_t x584 = INT32_MAX;

    t145 = (x581!=((x582>x583)==x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = INT8_MAX;
	int8_t x587 = 1;
	int16_t x588 = -173;

    t146 = (x585!=((x586>x587)==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x589 = 2;
	uint8_t x590 = UINT8_MAX;
	uint8_t x591 = UINT8_MAX;
	volatile uint32_t x592 = 70388684U;
	volatile int32_t t147 = -7871;

    t147 = (x589!=((x590>x591)==x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -8LL;
	uint8_t x594 = 0U;
	int32_t x595 = 3;
	int8_t x596 = 3;

    t148 = (x593!=((x594>x595)==x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 51457976365706140LL;
	volatile int64_t x598 = INT64_MAX;
	int64_t x599 = INT64_MIN;
	int32_t x600 = -1;
	int32_t t149 = 505441;

    t149 = (x597!=((x598>x599)==x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x601 = 1LLU;
	static int32_t x602 = -64768;
	uint16_t x603 = UINT16_MAX;
	volatile uint16_t x604 = UINT16_MAX;
	int32_t t150 = -426088;

    t150 = (x601!=((x602>x603)==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 3271457815815886LLU;
	static int64_t x606 = -1LL;
	int32_t x607 = INT32_MIN;
	int64_t x608 = INT64_MAX;
	volatile int32_t t151 = -168993;

    t151 = (x605!=((x606>x607)==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = INT64_MAX;
	volatile int16_t x610 = -429;
	int16_t x611 = 780;
	int16_t x612 = INT16_MIN;

    t152 = (x609!=((x610>x611)==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MAX;
	int32_t x614 = INT32_MAX;
	volatile int8_t x615 = INT8_MIN;
	uint32_t x616 = 106608U;
	volatile int32_t t153 = 15;

    t153 = (x613!=((x614>x615)==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	int16_t x618 = INT16_MIN;
	uint64_t x619 = UINT64_MAX;
	int16_t x620 = 1030;
	int32_t t154 = -2085;

    t154 = (x617!=((x618>x619)==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -280631099943073LL;
	static uint32_t x622 = 20U;
	volatile uint16_t x623 = 3U;
	static volatile int64_t x624 = 438268218736LL;
	volatile int32_t t155 = -374918808;

    t155 = (x621!=((x622>x623)==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 9647;
	int64_t x628 = 3502181825LL;
	int32_t t156 = -119;

    t156 = (x625!=((x626>x627)==x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 1;
	volatile int8_t x630 = -22;
	uint16_t x631 = UINT16_MAX;
	static volatile int32_t t157 = 118575;

    t157 = (x629!=((x630>x631)==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	uint16_t x634 = UINT16_MAX;
	static uint16_t x635 = 2U;
	volatile int32_t t158 = 64140;

    t158 = (x633!=((x634>x635)==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = -117;
	static volatile uint8_t x638 = 15U;
	static int32_t x639 = INT32_MIN;
	int64_t x640 = INT64_MIN;
	volatile int32_t t159 = 244326940;

    t159 = (x637!=((x638>x639)==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = -400;
	int16_t x642 = -1;
	uint16_t x643 = 27549U;
	static volatile int32_t x644 = -1;
	int32_t t160 = 7735766;

    t160 = (x641!=((x642>x643)==x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -2167276728533LL;
	uint64_t x646 = 30848LLU;
	static volatile uint32_t x647 = 3U;
	int32_t t161 = 7;

    t161 = (x645!=((x646>x647)==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x649 = UINT8_MAX;
	volatile int64_t x651 = INT64_MIN;
	int8_t x652 = 14;
	int32_t t162 = -30;

    t162 = (x649!=((x650>x651)==x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = 17089905218987LL;
	uint16_t x655 = UINT16_MAX;
	int32_t x656 = INT32_MAX;
	volatile int32_t t163 = -14848255;

    t163 = (x653!=((x654>x655)==x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -60;
	int16_t x658 = -178;
	int16_t x659 = INT16_MAX;
	static int64_t x660 = -26474866LL;
	volatile int32_t t164 = -215882323;

    t164 = (x657!=((x658>x659)==x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x663 = INT16_MIN;
	volatile int32_t x664 = -1;
	int32_t t165 = 0;

    t165 = (x661!=((x662>x663)==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	int8_t x666 = INT8_MIN;
	int8_t x667 = 0;
	uint32_t x668 = UINT32_MAX;
	static volatile int32_t t166 = 295;

    t166 = (x665!=((x666>x667)==x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x670 = INT16_MAX;
	static int16_t x671 = 0;
	uint64_t x672 = 2713LLU;
	static volatile int32_t t167 = 1016;

    t167 = (x669!=((x670>x671)==x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x673 = 1U;
	volatile int8_t x674 = INT8_MIN;
	volatile int16_t x675 = INT16_MIN;
	int16_t x676 = -1;
	static volatile int32_t t168 = 235;

    t168 = (x673!=((x674>x675)==x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x677 = 52U;
	int32_t x678 = INT32_MAX;
	int32_t x679 = INT32_MIN;
	int16_t x680 = INT16_MIN;
	volatile int32_t t169 = -1;

    t169 = (x677!=((x678>x679)==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 53;
	int8_t x682 = INT8_MIN;
	uint64_t x683 = 19LLU;
	uint32_t x684 = 58U;
	static volatile int32_t t170 = 472252096;

    t170 = (x681!=((x682>x683)==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x686 = UINT32_MAX;
	volatile int32_t t171 = -130030;

    t171 = (x685!=((x686>x687)==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x690 = 106722105477LLU;
	int64_t x691 = INT64_MIN;
	int32_t t172 = -84;

    t172 = (x689!=((x690>x691)==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	int8_t x695 = -7;
	int16_t x696 = INT16_MIN;
	volatile int32_t t173 = -4065;

    t173 = (x693!=((x694>x695)==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	uint8_t x699 = UINT8_MAX;
	volatile uint8_t x700 = UINT8_MAX;

    t174 = (x697!=((x698>x699)==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 1;
	static volatile int8_t x702 = -1;
	volatile int8_t x703 = 3;
	static uint32_t x704 = 14339016U;

    t175 = (x701!=((x702>x703)==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 6297455163308579093LLU;
	volatile int8_t x706 = -1;
	int32_t x707 = INT32_MIN;
	static int64_t x708 = INT64_MIN;
	int32_t t176 = -416912276;

    t176 = (x705!=((x706>x707)==x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = INT16_MIN;
	int16_t x711 = INT16_MAX;
	static int8_t x712 = -3;
	static volatile int32_t t177 = 3;

    t177 = (x709!=((x710>x711)==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -1LL;
	int32_t x714 = INT32_MIN;
	int32_t x715 = -1;
	uint32_t x716 = UINT32_MAX;

    t178 = (x713!=((x714>x715)==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint8_t x717 = 0U;
	static int16_t x718 = -7221;
	int64_t x720 = INT64_MIN;
	volatile int32_t t179 = -182392;

    t179 = (x717!=((x718>x719)==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = 15;
	int8_t x722 = INT8_MIN;
	static int32_t x723 = -1;
	int16_t x724 = 15641;
	int32_t t180 = 57359840;

    t180 = (x721!=((x722>x723)==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = 11530;
	static volatile int8_t x727 = -10;
	uint8_t x728 = UINT8_MAX;
	static int32_t t181 = -11528393;

    t181 = (x725!=((x726>x727)==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MAX;
	volatile int32_t x730 = -5;
	int8_t x731 = -1;
	static uint8_t x732 = 22U;
	volatile int32_t t182 = 33745;

    t182 = (x729!=((x730>x731)==x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	uint8_t x734 = 7U;
	int32_t x735 = INT32_MAX;
	volatile int32_t t183 = -10968305;

    t183 = (x733!=((x734>x735)==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = INT64_MIN;
	uint16_t x739 = UINT16_MAX;
	static int64_t x740 = -93196399068791980LL;
	int32_t t184 = -22417371;

    t184 = (x737!=((x738>x739)==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	int64_t x742 = INT64_MAX;
	int64_t x744 = INT64_MIN;

    t185 = (x741!=((x742>x743)==x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MIN;
	static int16_t x746 = -1;
	static volatile int32_t x747 = 26495;
	volatile int32_t x748 = 3156670;

    t186 = (x745!=((x746>x747)==x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	int8_t x750 = INT8_MIN;
	static int16_t x752 = INT16_MIN;
	volatile int32_t t187 = -101531;

    t187 = (x749!=((x750>x751)==x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = INT8_MIN;
	static int8_t x754 = INT8_MAX;
	volatile uint32_t x755 = UINT32_MAX;
	int32_t x756 = INT32_MIN;

    t188 = (x753!=((x754>x755)==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = 35097187900979LL;
	int32_t x758 = 8;
	volatile uint32_t x759 = 3117477U;
	volatile uint16_t x760 = 8897U;
	volatile int32_t t189 = -719819;

    t189 = (x757!=((x758>x759)==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	uint64_t x763 = UINT64_MAX;
	volatile int64_t x764 = -59497LL;
	int32_t t190 = 204815;

    t190 = (x761!=((x762>x763)==x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MIN;
	int16_t x766 = -1;
	volatile int64_t x767 = INT64_MAX;
	int32_t x768 = INT32_MAX;

    t191 = (x765!=((x766>x767)==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = INT16_MIN;
	uint8_t x771 = 2U;
	uint64_t x772 = UINT64_MAX;
	static volatile int32_t t192 = -204;

    t192 = (x769!=((x770>x771)==x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	int8_t x775 = -55;
	volatile uint64_t x776 = UINT64_MAX;
	volatile int32_t t193 = 1007;

    t193 = (x773!=((x774>x775)==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x777 = -15930;
	static int32_t x778 = INT32_MIN;
	volatile uint16_t x779 = 24883U;
	int64_t x780 = -20212LL;
	volatile int32_t t194 = -1382027;

    t194 = (x777!=((x778>x779)==x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x782 = -6827123987960484LL;
	uint8_t x783 = UINT8_MAX;
	int16_t x784 = -1;
	static int32_t t195 = 74578;

    t195 = (x781!=((x782>x783)==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x785 = 135624864U;
	uint64_t x787 = 1681864LLU;
	uint16_t x788 = UINT16_MAX;
	static volatile int32_t t196 = 516095422;

    t196 = (x785!=((x786>x787)==x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	static int32_t x790 = 1007;
	uint32_t x791 = UINT32_MAX;
	uint8_t x792 = UINT8_MAX;
	int32_t t197 = -1642207;

    t197 = (x789!=((x790>x791)==x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 13604U;
	volatile int8_t x795 = 0;
	static int8_t x796 = -3;
	volatile int32_t t198 = -8406667;

    t198 = (x793!=((x794>x795)==x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x797 = INT64_MIN;
	volatile uint8_t x799 = 6U;
	volatile int32_t x800 = INT32_MAX;
	int32_t t199 = 462;

    t199 = (x797!=((x798>x799)==x800));

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

