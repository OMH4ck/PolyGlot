
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

static int32_t x1 = INT32_MIN;
static uint16_t x3 = 7987U;
static int32_t x32 = INT32_MAX;
int16_t x34 = INT16_MIN;
static int8_t x45 = 3;
int16_t x46 = -1;
int16_t x58 = INT16_MIN;
int8_t x65 = -1;
volatile int32_t t14 = -27078780;
int16_t x70 = 1;
volatile int32_t t18 = -822;
uint16_t x95 = 0U;
int8_t x99 = INT8_MIN;
static volatile int16_t x105 = -1;
volatile int8_t x110 = 35;
static int32_t t25 = 1;
volatile int64_t x118 = 936LL;
int32_t t28 = -85631749;
int8_t x129 = 0;
volatile int8_t x131 = -1;
static volatile int16_t x133 = INT16_MIN;
static uint64_t x135 = UINT64_MAX;
int64_t x148 = INT64_MIN;
int8_t x150 = INT8_MIN;
static volatile int8_t x160 = 0;
static volatile int32_t t37 = 704194014;
uint16_t x168 = 23055U;
volatile int64_t x173 = -1LL;
int32_t x175 = INT32_MIN;
static uint16_t x180 = 1577U;
static int8_t x183 = -1;
int32_t t42 = 10;
int16_t x191 = INT16_MAX;
static int16_t x192 = INT16_MIN;
volatile int32_t x208 = INT32_MIN;
static int16_t x213 = INT16_MAX;
int64_t x217 = -1LL;
volatile int64_t x221 = INT64_MIN;
uint64_t x240 = 2LLU;
int32_t t54 = 2882222;
volatile uint64_t x244 = 101676662570940LLU;
int32_t x249 = INT32_MIN;
uint16_t x252 = 645U;
static int16_t x259 = 0;
int64_t x261 = INT64_MAX;
static volatile int8_t x264 = 5;
int16_t x267 = 15626;
static int8_t x268 = INT8_MIN;
int32_t x275 = 159107668;
int32_t t60 = 243857806;
volatile int8_t x277 = INT8_MIN;
int8_t x280 = INT8_MIN;
uint32_t x291 = 54906U;
uint8_t x292 = UINT8_MAX;
int16_t x293 = 39;
int16_t x295 = INT16_MIN;
int32_t x296 = INT32_MIN;
int16_t x298 = INT16_MIN;
int8_t x299 = -1;
int8_t x304 = -1;
int64_t x310 = 59LL;
volatile int32_t t69 = -359920730;
int64_t x328 = INT64_MAX;
volatile int32_t t70 = 1;
int16_t x329 = INT16_MIN;
uint32_t x341 = 332U;
volatile int64_t x353 = -77LL;
static volatile int8_t x357 = INT8_MAX;
volatile int8_t x367 = INT8_MAX;
int8_t x368 = INT8_MIN;
static volatile int16_t x371 = INT16_MAX;
int32_t t79 = -1601;
int8_t x386 = INT8_MIN;
int32_t t82 = -54097;
uint32_t x396 = UINT32_MAX;
uint32_t x399 = 74924U;
uint8_t x403 = UINT8_MAX;
static volatile int64_t x405 = INT64_MIN;
uint64_t x408 = 293LLU;
volatile int32_t t88 = -2;
int64_t x415 = -1LL;
volatile int32_t x417 = -1;
int16_t x420 = -1374;
uint16_t x421 = 1U;
uint64_t x423 = UINT64_MAX;
int16_t x425 = -1;
volatile int32_t t93 = -205321494;
int32_t t95 = -395;
int32_t t96 = 2;
static uint32_t x446 = 479437884U;
uint16_t x450 = UINT16_MAX;
volatile int32_t x452 = -1;
volatile int32_t t99 = -13;
volatile int16_t x507 = -1;
uint16_t x517 = 373U;
int32_t t112 = 22;
static int64_t x525 = INT64_MAX;
int32_t x527 = INT32_MIN;
int16_t x528 = -1;
int32_t t114 = -8182887;
uint8_t x535 = 16U;
int32_t x536 = INT32_MIN;
int32_t x542 = INT32_MIN;
int32_t t119 = -838;
static volatile int32_t x553 = INT32_MIN;
static int8_t x555 = -1;
int64_t x558 = -93438231180486LL;
static int32_t t121 = 15;
volatile int32_t t122 = 418;
volatile int32_t t123 = 4528953;
static int64_t x577 = -296LL;
int16_t x579 = 10579;
int32_t t127 = -24801078;
int8_t x590 = 5;
uint32_t x592 = 172468U;
volatile uint64_t x597 = 13LLU;
volatile int32_t t130 = 176;
volatile int32_t t131 = 11387;
static int32_t x607 = -1846621;
int16_t x615 = INT16_MIN;
uint64_t x616 = 856LLU;
int16_t x618 = -1;
int32_t t135 = -2479955;
int16_t x623 = INT16_MIN;
int16_t x638 = INT16_MIN;
uint64_t x642 = 137LLU;
volatile int32_t t144 = -146770362;
uint32_t x659 = 431U;
static int32_t x660 = -899223;
static uint32_t x662 = 12U;
static volatile uint8_t x668 = 63U;
volatile int32_t t148 = 664767;
volatile int32_t x678 = 21666483;
volatile int64_t x682 = INT64_MAX;
static uint8_t x683 = UINT8_MAX;
static int32_t x692 = 22906;
volatile int32_t x697 = -1;
int64_t x714 = -1LL;
static uint32_t x715 = 119121U;
int16_t x717 = 12341;
int8_t x721 = INT8_MIN;
volatile int64_t x723 = 39LL;
uint8_t x727 = 0U;
uint16_t x731 = UINT16_MAX;
volatile uint64_t x734 = 58269997LLU;
volatile int32_t x739 = -1515;
uint32_t x744 = 9U;
volatile int32_t t162 = 114610651;
volatile int32_t x749 = -1;
uint64_t x752 = UINT64_MAX;
volatile int32_t t165 = 15;
static int32_t t166 = 1338373;
static int8_t x762 = INT8_MIN;
uint16_t x763 = 4816U;
int64_t x765 = -1LL;
int16_t x767 = -1;
static volatile uint32_t x768 = UINT32_MAX;
int32_t t168 = -98805;
uint8_t x770 = UINT8_MAX;
int32_t t169 = 5;
int16_t x776 = INT16_MIN;
volatile int8_t x778 = -1;
int8_t x788 = -1;
volatile uint8_t x793 = 1U;
int32_t x796 = -22;
uint32_t x800 = 1U;
volatile int64_t x806 = INT64_MIN;
int32_t t178 = -63756865;
int32_t x811 = INT32_MIN;
volatile int32_t t179 = 8310550;
int8_t x823 = INT8_MAX;
int32_t x824 = -13;
volatile int32_t t184 = -2974;
int64_t x837 = INT64_MIN;
int8_t x840 = 2;
static uint16_t x849 = UINT16_MAX;
static volatile int8_t x853 = INT8_MIN;
int8_t x855 = INT8_MAX;
int8_t x859 = 3;
volatile uint32_t x861 = 6493U;
static int32_t x863 = 1;
int32_t t191 = -963299389;
volatile int32_t x867 = -1;
int32_t x868 = INT32_MAX;
uint8_t x878 = 1U;
int32_t t194 = 0;
uint32_t x883 = 3090599U;
uint8_t x891 = UINT8_MAX;


void f0(void) {
    	int8_t x2 = -1;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -722577797;

    t0 = (x1>((x2-x3)|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 167412LL;
	int8_t x6 = 3;
	static uint32_t x7 = 148U;
	int16_t x8 = 4;
	static int32_t t1 = 223;

    t1 = (x5>((x6-x7)|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint32_t x10 = 7071U;
	int32_t x11 = INT32_MIN;
	uint8_t x12 = 40U;
	int32_t t2 = -387;

    t2 = (x9>((x10-x11)|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int32_t x14 = -526;
	int8_t x15 = -5;
	uint32_t x16 = 293770U;
	int32_t t3 = -4;

    t3 = (x13>((x14-x15)|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint16_t x18 = 1564U;
	volatile uint64_t x19 = 9LLU;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = 5536488;

    t4 = (x17>((x18-x19)|x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	uint16_t x26 = 46U;
	int32_t x27 = -1;
	int8_t x28 = INT8_MIN;
	static int32_t t5 = 108;

    t5 = (x25>((x26-x27)|x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MIN;
	int32_t x30 = -1;
	volatile int8_t x31 = INT8_MIN;
	int32_t t6 = -60348;

    t6 = (x29>((x30-x31)|x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x33 = INT8_MAX;
	static int16_t x35 = -51;
	int16_t x36 = INT16_MAX;
	int32_t t7 = -786;

    t7 = (x33>((x34-x35)|x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = UINT16_MAX;
	volatile int16_t x39 = INT16_MIN;
	uint16_t x40 = 3125U;
	static int32_t t8 = 3;

    t8 = (x37>((x38-x39)|x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = UINT16_MAX;
	int32_t x42 = -1;
	int8_t x43 = 21;
	volatile int8_t x44 = INT8_MIN;
	static int32_t t9 = 11335;

    t9 = (x41>((x42-x43)|x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x47 = 41;
	static int8_t x48 = 5;
	static int32_t t10 = 678489895;

    t10 = (x45>((x46-x47)|x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = INT64_MAX;
	static uint32_t x54 = UINT32_MAX;
	volatile uint16_t x55 = 16U;
	uint32_t x56 = UINT32_MAX;
	static int32_t t11 = 785328;

    t11 = (x53>((x54-x55)|x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = -1;
	static int64_t x59 = 12162LL;
	int32_t x60 = -98;
	int32_t t12 = -324136700;

    t12 = (x57>((x58-x59)|x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x61 = INT64_MIN;
	uint16_t x62 = 1U;
	uint8_t x63 = UINT8_MAX;
	uint8_t x64 = 3U;
	static volatile int32_t t13 = 23290;

    t13 = (x61>((x62-x63)|x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x66 = INT64_MAX;
	int32_t x67 = 418184566;
	volatile int16_t x68 = INT16_MIN;

    t14 = (x65>((x66-x67)|x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = 1468;
	uint8_t x71 = 0U;
	uint8_t x72 = UINT8_MAX;
	static volatile int32_t t15 = 62593;

    t15 = (x69>((x70-x71)|x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = 76159U;
	uint32_t x74 = UINT32_MAX;
	volatile int8_t x75 = -1;
	int32_t x76 = -1;
	volatile int32_t t16 = 0;

    t16 = (x73>((x74-x75)|x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x77 = -13;
	int8_t x78 = 3;
	volatile int16_t x79 = 93;
	static uint16_t x80 = 1U;
	int32_t t17 = 782;

    t17 = (x77>((x78-x79)|x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = INT8_MIN;
	static int16_t x82 = -6;
	static uint16_t x83 = UINT16_MAX;
	static uint8_t x84 = 41U;

    t18 = (x81>((x82-x83)|x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x89 = INT16_MAX;
	uint32_t x90 = 549160784U;
	static int32_t x91 = 1180;
	static int8_t x92 = INT8_MAX;
	volatile int32_t t19 = -1100886;

    t19 = (x89>((x90-x91)|x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = INT64_MIN;
	volatile int16_t x94 = INT16_MAX;
	int32_t x96 = 24;
	int32_t t20 = 1514383;

    t20 = (x93>((x94-x95)|x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MIN;
	volatile int32_t x98 = -1;
	int8_t x100 = INT8_MAX;
	int32_t t21 = -22140;

    t21 = (x97>((x98-x99)|x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = INT32_MAX;
	static uint8_t x102 = 23U;
	static int16_t x103 = 1056;
	static uint16_t x104 = UINT16_MAX;
	int32_t t22 = -134400632;

    t22 = (x101>((x102-x103)|x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = -351578;
	static int8_t x107 = INT8_MIN;
	static int32_t x108 = -35556994;
	volatile int32_t t23 = 2068;

    t23 = (x105>((x106-x107)|x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = -1;
	int64_t x111 = 2102341682LL;
	uint8_t x112 = 0U;
	int32_t t24 = 472864471;

    t24 = (x109>((x110-x111)|x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x113 = 1U;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = -1;
	volatile uint32_t x116 = 70U;

    t25 = (x113>((x114-x115)|x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = INT64_MIN;
	int32_t x119 = INT32_MAX;
	static uint64_t x120 = UINT64_MAX;
	int32_t t26 = 2834985;

    t26 = (x117>((x118-x119)|x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = -1LL;
	int64_t x122 = 123717301285787LL;
	uint64_t x123 = 52198621LLU;
	int64_t x124 = -1771552613367029192LL;
	int32_t t27 = -11136;

    t27 = (x121>((x122-x123)|x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x125 = INT32_MIN;
	static int32_t x126 = INT32_MAX;
	volatile int64_t x127 = 14776893586146LL;
	volatile uint8_t x128 = 5U;

    t28 = (x125>((x126-x127)|x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x130 = 25;
	int64_t x132 = -1LL;
	int32_t t29 = -29;

    t29 = (x129>((x130-x131)|x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x134 = INT16_MAX;
	uint16_t x136 = 455U;
	volatile int32_t t30 = -1238;

    t30 = (x133>((x134-x135)|x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = INT64_MIN;
	int8_t x138 = -1;
	int8_t x139 = 3;
	int16_t x140 = -1;
	int32_t t31 = 8;

    t31 = (x137>((x138-x139)|x140));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = 991;
	int32_t x142 = -1;
	uint32_t x143 = UINT32_MAX;
	uint64_t x144 = UINT64_MAX;
	int32_t t32 = -5626470;

    t32 = (x141>((x142-x143)|x144));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x145 = 1U;
	uint16_t x146 = 18155U;
	static int16_t x147 = INT16_MIN;
	int32_t t33 = 1;

    t33 = (x145>((x146-x147)|x148));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = INT64_MAX;
	volatile uint16_t x151 = 4078U;
	int32_t x152 = -1802984;
	volatile int32_t t34 = 1;

    t34 = (x149>((x150-x151)|x152));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	int8_t x155 = INT8_MIN;
	static volatile int8_t x156 = 3;
	static volatile int32_t t35 = -27946;

    t35 = (x153>((x154-x155)|x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x157 = INT16_MAX;
	uint32_t x158 = UINT32_MAX;
	int32_t x159 = INT32_MIN;
	volatile int32_t t36 = 26812;

    t36 = (x157>((x158-x159)|x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x161 = INT32_MAX;
	int16_t x162 = -1;
	uint8_t x163 = UINT8_MAX;
	static int64_t x164 = -1529901981242LL;

    t37 = (x161>((x162-x163)|x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = -1;
	static uint64_t x166 = 5953LLU;
	int16_t x167 = INT16_MIN;
	int32_t t38 = 42528117;

    t38 = (x165>((x166-x167)|x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x169 = UINT32_MAX;
	volatile uint32_t x170 = UINT32_MAX;
	static volatile int8_t x171 = -1;
	int64_t x172 = -2150863778743591LL;
	volatile int32_t t39 = -420074;

    t39 = (x169>((x170-x171)|x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x174 = -1;
	uint16_t x176 = 22268U;
	volatile int32_t t40 = -398;

    t40 = (x173>((x174-x175)|x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x177 = 58U;
	int16_t x178 = INT16_MAX;
	volatile int8_t x179 = 0;
	int32_t t41 = 45690;

    t41 = (x177>((x178-x179)|x180));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x181 = UINT16_MAX;
	int16_t x182 = -105;
	static int32_t x184 = 973591172;

    t42 = (x181>((x182-x183)|x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = INT32_MIN;
	volatile int16_t x186 = INT16_MIN;
	uint64_t x187 = 340799559079731LLU;
	int16_t x188 = 1;
	static int32_t t43 = 337963;

    t43 = (x185>((x186-x187)|x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x189 = INT64_MIN;
	uint16_t x190 = UINT16_MAX;
	int32_t t44 = -31;

    t44 = (x189>((x190-x191)|x192));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x193 = -3;
	int32_t x194 = -1;
	int16_t x195 = INT16_MAX;
	static int64_t x196 = 28LL;
	static volatile int32_t t45 = 252191;

    t45 = (x193>((x194-x195)|x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x197 = 9725U;
	uint32_t x198 = 6732642U;
	static uint16_t x199 = UINT16_MAX;
	int64_t x200 = 7838165786848LL;
	int32_t t46 = -40797;

    t46 = (x197>((x198-x199)|x200));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x201 = 50866338U;
	int8_t x202 = -1;
	static volatile int32_t x203 = 226;
	int32_t x204 = INT32_MAX;
	static volatile int32_t t47 = 15;

    t47 = (x201>((x202-x203)|x204));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x205 = UINT32_MAX;
	int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MAX;
	int32_t t48 = 91439918;

    t48 = (x205>((x206-x207)|x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x214 = 0LLU;
	int64_t x215 = INT64_MIN;
	static int8_t x216 = INT8_MAX;
	static int32_t t49 = 2;

    t49 = (x213>((x214-x215)|x216));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x218 = 367;
	int8_t x219 = -5;
	int16_t x220 = INT16_MIN;
	static int32_t t50 = -1128586;

    t50 = (x217>((x218-x219)|x220));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x222 = UINT8_MAX;
	static int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	volatile int32_t t51 = 46621;

    t51 = (x221>((x222-x223)|x224));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x229 = UINT16_MAX;
	uint8_t x230 = 1U;
	volatile uint8_t x231 = 3U;
	int16_t x232 = -7;
	int32_t t52 = -301682752;

    t52 = (x229>((x230-x231)|x232));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x233 = 0;
	int64_t x234 = 3229205LL;
	volatile uint8_t x235 = UINT8_MAX;
	int8_t x236 = INT8_MAX;
	int32_t t53 = -26267252;

    t53 = (x233>((x234-x235)|x236));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x237 = -1;
	int16_t x238 = -1;
	static int64_t x239 = INT64_MIN;

    t54 = (x237>((x238-x239)|x240));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x241 = 3304U;
	static volatile int8_t x242 = -4;
	int8_t x243 = 3;
	int32_t t55 = 29;

    t55 = (x241>((x242-x243)|x244));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MAX;
	volatile int32_t t56 = 12536;

    t56 = (x249>((x250-x251)|x252));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x257 = 4917LLU;
	int64_t x258 = INT64_MIN;
	uint16_t x260 = 0U;
	int32_t t57 = 63;

    t57 = (x257>((x258-x259)|x260));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x262 = -12064702;
	int64_t x263 = 69424735205661161LL;
	static volatile int32_t t58 = -184400;

    t58 = (x261>((x262-x263)|x264));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x265 = INT64_MIN;
	int32_t x266 = -4024;
	volatile int32_t t59 = 26;

    t59 = (x265>((x266-x267)|x268));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x273 = -1;
	static volatile int32_t x274 = -117860;
	static volatile int32_t x276 = INT32_MAX;

    t60 = (x273>((x274-x275)|x276));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x278 = INT64_MAX;
	int16_t x279 = 0;
	int32_t t61 = -13;

    t61 = (x277>((x278-x279)|x280));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x281 = INT32_MIN;
	static uint32_t x282 = 1540031U;
	int16_t x283 = -1395;
	int32_t x284 = -1;
	volatile int32_t t62 = 2410726;

    t62 = (x281>((x282-x283)|x284));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x289 = -1;
	volatile int32_t x290 = -1561590;
	int32_t t63 = 1334368;

    t63 = (x289>((x290-x291)|x292));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x294 = 24U;
	volatile int32_t t64 = 59036106;

    t64 = (x293>((x294-x295)|x296));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x297 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	volatile int32_t t65 = 6;

    t65 = (x297>((x298-x299)|x300));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x301 = INT64_MAX;
	int16_t x302 = INT16_MIN;
	int64_t x303 = 429073995367324293LL;
	volatile int32_t t66 = -10;

    t66 = (x301>((x302-x303)|x304));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x305 = -61;
	int16_t x306 = -2914;
	static volatile int16_t x307 = INT16_MAX;
	static int16_t x308 = 6649;
	int32_t t67 = -47;

    t67 = (x305>((x306-x307)|x308));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x309 = INT8_MAX;
	int8_t x311 = 3;
	uint8_t x312 = UINT8_MAX;
	static volatile int32_t t68 = 27627;

    t68 = (x309>((x310-x311)|x312));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x313 = 8707;
	int32_t x314 = 23030;
	int8_t x315 = INT8_MIN;
	uint8_t x316 = UINT8_MAX;

    t69 = (x313>((x314-x315)|x316));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x325 = 12U;
	int32_t x326 = INT32_MAX;
	static uint8_t x327 = 4U;

    t70 = (x325>((x326-x327)|x328));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x330 = UINT64_MAX;
	volatile int32_t x331 = INT32_MIN;
	uint8_t x332 = 36U;
	volatile int32_t t71 = 1;

    t71 = (x329>((x330-x331)|x332));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x333 = UINT16_MAX;
	static int16_t x334 = 4711;
	volatile uint16_t x335 = UINT16_MAX;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t72 = 2189408;

    t72 = (x333>((x334-x335)|x336));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x337 = INT8_MAX;
	int32_t x338 = INT32_MIN;
	uint64_t x339 = 495136749LLU;
	int32_t x340 = INT32_MIN;
	int32_t t73 = -602303;

    t73 = (x337>((x338-x339)|x340));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x342 = 16243;
	uint64_t x343 = UINT64_MAX;
	int64_t x344 = INT64_MIN;
	static int32_t t74 = 43;

    t74 = (x341>((x342-x343)|x344));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x349 = -1;
	static volatile int8_t x350 = INT8_MAX;
	int64_t x351 = INT64_MAX;
	int64_t x352 = INT64_MAX;
	int32_t t75 = 1507;

    t75 = (x349>((x350-x351)|x352));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x354 = UINT32_MAX;
	volatile uint64_t x355 = 5708357891338242501LLU;
	int8_t x356 = INT8_MAX;
	int32_t t76 = 215973091;

    t76 = (x353>((x354-x355)|x356));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x358 = UINT16_MAX;
	int8_t x359 = -9;
	uint32_t x360 = UINT32_MAX;
	int32_t t77 = 3;

    t77 = (x357>((x358-x359)|x360));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x365 = INT8_MAX;
	int16_t x366 = 14;
	volatile int32_t t78 = -76722;

    t78 = (x365>((x366-x367)|x368));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x369 = INT64_MAX;
	int8_t x370 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;

    t79 = (x369>((x370-x371)|x372));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x373 = -71776604296728LL;
	int64_t x374 = INT64_MIN;
	volatile int8_t x375 = INT8_MIN;
	int64_t x376 = -2358032230714LL;
	int32_t t80 = -2617241;

    t80 = (x373>((x374-x375)|x376));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x381 = UINT32_MAX;
	static volatile int8_t x382 = -1;
	volatile int16_t x383 = INT16_MIN;
	uint64_t x384 = UINT64_MAX;
	static volatile int32_t t81 = -12277;

    t81 = (x381>((x382-x383)|x384));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x385 = 280758482U;
	int32_t x387 = -792;
	int32_t x388 = INT32_MAX;

    t82 = (x385>((x386-x387)|x388));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint32_t x389 = 1258128U;
	uint8_t x390 = 41U;
	volatile int8_t x391 = 1;
	static uint32_t x392 = 132372U;
	volatile int32_t t83 = -30183;

    t83 = (x389>((x390-x391)|x392));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x393 = 7187U;
	static int8_t x394 = -7;
	static uint32_t x395 = UINT32_MAX;
	int32_t t84 = 0;

    t84 = (x393>((x394-x395)|x396));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x397 = UINT32_MAX;
	int16_t x398 = -1;
	int8_t x400 = INT8_MIN;
	int32_t t85 = -107621;

    t85 = (x397>((x398-x399)|x400));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x401 = -2009252;
	int32_t x402 = INT32_MAX;
	uint16_t x404 = 8U;
	int32_t t86 = -492282;

    t86 = (x401>((x402-x403)|x404));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x406 = -63;
	int16_t x407 = INT16_MIN;
	volatile int32_t t87 = 2176230;

    t87 = (x405>((x406-x407)|x408));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x409 = UINT16_MAX;
	static int16_t x410 = INT16_MIN;
	int16_t x411 = 716;
	volatile int16_t x412 = -1;

    t88 = (x409>((x410-x411)|x412));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x413 = 199;
	static volatile int16_t x414 = -1;
	int8_t x416 = INT8_MAX;
	volatile int32_t t89 = 17;

    t89 = (x413>((x414-x415)|x416));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x418 = 1;
	uint16_t x419 = UINT16_MAX;
	int32_t t90 = -4435;

    t90 = (x417>((x418-x419)|x420));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x422 = INT64_MAX;
	volatile int16_t x424 = 120;
	volatile int32_t t91 = -1101913;

    t91 = (x421>((x422-x423)|x424));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x426 = INT32_MAX;
	uint64_t x427 = 2451961192296555LLU;
	int32_t x428 = 240;
	volatile int32_t t92 = 4708;

    t92 = (x425>((x426-x427)|x428));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x429 = 5U;
	static volatile int8_t x430 = INT8_MIN;
	int64_t x431 = -1LL;
	int32_t x432 = 1458;

    t93 = (x429>((x430-x431)|x432));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x433 = 116U;
	volatile uint32_t x434 = 29U;
	volatile int64_t x435 = 333691737571LL;
	uint64_t x436 = 415784LLU;
	int32_t t94 = -884;

    t94 = (x433>((x434-x435)|x436));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x437 = 2;
	int64_t x438 = 1429302117321313506LL;
	int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MAX;

    t95 = (x437>((x438-x439)|x440));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x441 = INT32_MIN;
	uint64_t x442 = 2095664202613LLU;
	int32_t x443 = INT32_MIN;
	uint64_t x444 = 22607489602886639LLU;

    t96 = (x441>((x442-x443)|x444));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x445 = 8255438857907LL;
	uint16_t x447 = UINT16_MAX;
	uint32_t x448 = 32712U;
	static int32_t t97 = -8;

    t97 = (x445>((x446-x447)|x448));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x449 = INT32_MIN;
	static uint16_t x451 = UINT16_MAX;
	volatile int32_t t98 = -893;

    t98 = (x449>((x450-x451)|x452));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x457 = 8U;
	uint64_t x458 = UINT64_MAX;
	int32_t x459 = INT32_MAX;
	int64_t x460 = INT64_MIN;

    t99 = (x457>((x458-x459)|x460));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x461 = INT16_MAX;
	static uint64_t x462 = UINT64_MAX;
	int8_t x463 = INT8_MIN;
	uint8_t x464 = 8U;
	volatile int32_t t100 = -254126;

    t100 = (x461>((x462-x463)|x464));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x465 = INT16_MAX;
	uint16_t x466 = UINT16_MAX;
	uint8_t x467 = 2U;
	uint8_t x468 = 2U;
	volatile int32_t t101 = -68;

    t101 = (x465>((x466-x467)|x468));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x473 = 1492;
	uint64_t x474 = 1967093431117544242LLU;
	int16_t x475 = INT16_MIN;
	volatile uint8_t x476 = 15U;
	int32_t t102 = -55;

    t102 = (x473>((x474-x475)|x476));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x477 = INT16_MIN;
	int32_t x478 = -6721;
	static int32_t x479 = -1;
	int32_t x480 = INT32_MIN;
	int32_t t103 = -104;

    t103 = (x477>((x478-x479)|x480));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x485 = 2U;
	int64_t x486 = 36LL;
	uint32_t x487 = 3015201U;
	int64_t x488 = 1080924LL;
	int32_t t104 = -457;

    t104 = (x485>((x486-x487)|x488));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x489 = 2713727LL;
	uint16_t x490 = 1731U;
	uint16_t x491 = UINT16_MAX;
	int16_t x492 = INT16_MIN;
	int32_t t105 = 74233057;

    t105 = (x489>((x490-x491)|x492));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x493 = INT64_MIN;
	uint64_t x494 = 1LLU;
	int16_t x495 = INT16_MIN;
	volatile int8_t x496 = -10;
	volatile int32_t t106 = 2404;

    t106 = (x493>((x494-x495)|x496));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x497 = -4;
	uint16_t x498 = UINT16_MAX;
	int8_t x499 = -1;
	uint16_t x500 = 9373U;
	static volatile int32_t t107 = 20;

    t107 = (x497>((x498-x499)|x500));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x501 = -1;
	uint16_t x502 = 39U;
	static volatile int8_t x503 = 15;
	int64_t x504 = INT64_MIN;
	volatile int32_t t108 = 255316794;

    t108 = (x501>((x502-x503)|x504));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x505 = 6;
	int64_t x506 = 1669LL;
	static int8_t x508 = INT8_MIN;
	volatile int32_t t109 = 0;

    t109 = (x505>((x506-x507)|x508));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x513 = INT32_MIN;
	int8_t x514 = INT8_MAX;
	uint8_t x515 = UINT8_MAX;
	int64_t x516 = INT64_MIN;
	volatile int32_t t110 = 10277;

    t110 = (x513>((x514-x515)|x516));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint8_t x518 = UINT8_MAX;
	static int16_t x519 = 7;
	uint32_t x520 = 61398678U;
	volatile int32_t t111 = -1347;

    t111 = (x517>((x518-x519)|x520));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x521 = -17;
	volatile int64_t x522 = INT64_MIN;
	int8_t x523 = -3;
	int16_t x524 = INT16_MIN;

    t112 = (x521>((x522-x523)|x524));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x526 = 708LLU;
	int32_t t113 = 32808025;

    t113 = (x525>((x526-x527)|x528));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x529 = UINT64_MAX;
	int64_t x530 = -7667004LL;
	static int32_t x531 = INT32_MAX;
	uint16_t x532 = 35U;

    t114 = (x529>((x530-x531)|x532));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x533 = -1;
	uint16_t x534 = 2892U;
	volatile int32_t t115 = -3282;

    t115 = (x533>((x534-x535)|x536));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x537 = -1;
	int16_t x538 = INT16_MIN;
	static uint32_t x539 = 1360U;
	int16_t x540 = INT16_MAX;
	static volatile int32_t t116 = -47;

    t116 = (x537>((x538-x539)|x540));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x541 = -1;
	int64_t x543 = 0LL;
	uint32_t x544 = 0U;
	int32_t t117 = -11;

    t117 = (x541>((x542-x543)|x544));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x545 = -26;
	int64_t x546 = -3418700073242915845LL;
	int64_t x547 = INT64_MIN;
	uint64_t x548 = 268LLU;
	int32_t t118 = -85825;

    t118 = (x545>((x546-x547)|x548));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x549 = INT8_MAX;
	int16_t x550 = -1;
	int64_t x551 = INT64_MIN;
	int64_t x552 = INT64_MIN;

    t119 = (x549>((x550-x551)|x552));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x554 = INT64_MIN;
	uint64_t x556 = UINT64_MAX;
	int32_t t120 = 15;

    t120 = (x553>((x554-x555)|x556));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x557 = INT8_MIN;
	volatile uint32_t x559 = 2U;
	int8_t x560 = 14;

    t121 = (x557>((x558-x559)|x560));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x561 = INT8_MIN;
	uint8_t x562 = 21U;
	uint64_t x563 = 220514730011429LLU;
	uint8_t x564 = 7U;

    t122 = (x561>((x562-x563)|x564));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x565 = 309087623397LLU;
	volatile uint64_t x566 = 452385391658465LLU;
	uint32_t x567 = 3271533U;
	static int16_t x568 = INT16_MIN;

    t123 = (x565>((x566-x567)|x568));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x573 = INT64_MAX;
	int16_t x574 = -1;
	int32_t x575 = INT32_MIN;
	static int64_t x576 = -7170678LL;
	int32_t t124 = 783;

    t124 = (x573>((x574-x575)|x576));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x578 = 434;
	int8_t x580 = INT8_MIN;
	int32_t t125 = -609995;

    t125 = (x577>((x578-x579)|x580));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x581 = UINT8_MAX;
	uint32_t x582 = 1014U;
	uint8_t x583 = 0U;
	volatile int16_t x584 = INT16_MIN;
	int32_t t126 = -920668000;

    t126 = (x581>((x582-x583)|x584));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x585 = -1;
	volatile uint8_t x586 = 1U;
	uint64_t x587 = 484660662476405LLU;
	static int8_t x588 = INT8_MIN;

    t127 = (x585>((x586-x587)|x588));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x589 = -1;
	int16_t x591 = INT16_MIN;
	volatile int32_t t128 = -208403;

    t128 = (x589>((x590-x591)|x592));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x593 = 7;
	int16_t x594 = -49;
	uint64_t x595 = 48370576774576LLU;
	volatile int8_t x596 = 21;
	volatile int32_t t129 = 0;

    t129 = (x593>((x594-x595)|x596));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x598 = 407U;
	uint16_t x599 = 2551U;
	int8_t x600 = -1;

    t130 = (x597>((x598-x599)|x600));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x601 = INT32_MIN;
	volatile int64_t x602 = -1LL;
	uint32_t x603 = 102298040U;
	int8_t x604 = 6;

    t131 = (x601>((x602-x603)|x604));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x605 = 9705366966125638LL;
	volatile uint64_t x606 = UINT64_MAX;
	int8_t x608 = -2;
	volatile int32_t t132 = -1;

    t132 = (x605>((x606-x607)|x608));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x609 = UINT8_MAX;
	static int8_t x610 = 6;
	uint64_t x611 = UINT64_MAX;
	static int8_t x612 = INT8_MAX;
	int32_t t133 = 4007;

    t133 = (x609>((x610-x611)|x612));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x613 = 1;
	static int32_t x614 = 0;
	static volatile int32_t t134 = -991079345;

    t134 = (x613>((x614-x615)|x616));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x617 = INT16_MAX;
	static int16_t x619 = INT16_MAX;
	uint32_t x620 = 976133429U;

    t135 = (x617>((x618-x619)|x620));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x621 = -606;
	int64_t x622 = INT64_MIN;
	int8_t x624 = -1;
	static volatile int32_t t136 = -749;

    t136 = (x621>((x622-x623)|x624));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x625 = INT64_MIN;
	int32_t x626 = -4548834;
	uint16_t x627 = 1332U;
	int64_t x628 = INT64_MIN;
	volatile int32_t t137 = -1;

    t137 = (x625>((x626-x627)|x628));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x629 = 14015U;
	int16_t x630 = 1357;
	volatile uint32_t x631 = 189942U;
	int32_t x632 = INT32_MAX;
	int32_t t138 = -2;

    t138 = (x629>((x630-x631)|x632));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x633 = INT8_MAX;
	uint64_t x634 = 651638LLU;
	int8_t x635 = -1;
	int16_t x636 = INT16_MIN;
	int32_t t139 = 1;

    t139 = (x633>((x634-x635)|x636));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x637 = 33U;
	int8_t x639 = INT8_MIN;
	uint64_t x640 = 4258618750LLU;
	volatile int32_t t140 = 29667940;

    t140 = (x637>((x638-x639)|x640));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x641 = -1;
	int8_t x643 = INT8_MIN;
	int64_t x644 = -1LL;
	volatile int32_t t141 = 1;

    t141 = (x641>((x642-x643)|x644));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x645 = INT16_MIN;
	volatile int32_t x646 = 50;
	int32_t x647 = -435822306;
	uint8_t x648 = 1U;
	int32_t t142 = 29557191;

    t142 = (x645>((x646-x647)|x648));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x649 = -2781;
	static uint64_t x650 = UINT64_MAX;
	uint32_t x651 = 5897463U;
	volatile uint16_t x652 = 83U;
	volatile int32_t t143 = 13;

    t143 = (x649>((x650-x651)|x652));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x653 = INT8_MIN;
	uint8_t x654 = 28U;
	int8_t x655 = 0;
	uint32_t x656 = UINT32_MAX;

    t144 = (x653>((x654-x655)|x656));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x657 = UINT32_MAX;
	uint64_t x658 = 2454707849019LLU;
	int32_t t145 = -12335;

    t145 = (x657>((x658-x659)|x660));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x661 = INT32_MIN;
	int8_t x663 = -28;
	int8_t x664 = INT8_MIN;
	static int32_t t146 = 555;

    t146 = (x661>((x662-x663)|x664));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x665 = INT16_MIN;
	int64_t x666 = -165097483LL;
	static uint32_t x667 = 2U;
	int32_t t147 = 3201;

    t147 = (x665>((x666-x667)|x668));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x673 = 1U;
	uint64_t x674 = 966LLU;
	int32_t x675 = 5;
	volatile int16_t x676 = -1;

    t148 = (x673>((x674-x675)|x676));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x677 = 9U;
	uint16_t x679 = 0U;
	int8_t x680 = INT8_MIN;
	int32_t t149 = -26566;

    t149 = (x677>((x678-x679)|x680));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x681 = 0U;
	static int64_t x684 = INT64_MAX;
	volatile int32_t t150 = -437;

    t150 = (x681>((x682-x683)|x684));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x685 = INT64_MIN;
	uint32_t x686 = 63188U;
	int16_t x687 = INT16_MIN;
	int16_t x688 = -1;
	volatile int32_t t151 = -109;

    t151 = (x685>((x686-x687)|x688));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x689 = 8U;
	static volatile int8_t x690 = -1;
	uint16_t x691 = UINT16_MAX;
	volatile int32_t t152 = 4;

    t152 = (x689>((x690-x691)|x692));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x698 = 15209089080327827LLU;
	static uint16_t x699 = UINT16_MAX;
	int8_t x700 = -1;
	volatile int32_t t153 = 118430;

    t153 = (x697>((x698-x699)|x700));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x701 = 1LL;
	volatile int8_t x702 = INT8_MIN;
	int8_t x703 = INT8_MAX;
	int32_t x704 = INT32_MAX;
	static volatile int32_t t154 = 698728;

    t154 = (x701>((x702-x703)|x704));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x713 = 44278777;
	static volatile int64_t x716 = INT64_MIN;
	int32_t t155 = 1;

    t155 = (x713>((x714-x715)|x716));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x718 = 3060998686194LLU;
	uint16_t x719 = 4360U;
	volatile uint64_t x720 = UINT64_MAX;
	int32_t t156 = 3560046;

    t156 = (x717>((x718-x719)|x720));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x722 = INT32_MIN;
	static int32_t x724 = INT32_MAX;
	volatile int32_t t157 = 50702;

    t157 = (x721>((x722-x723)|x724));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x725 = 64U;
	int8_t x726 = INT8_MIN;
	int32_t x728 = 33;
	int32_t t158 = -6772;

    t158 = (x725>((x726-x727)|x728));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x729 = 118U;
	int32_t x730 = -1;
	int32_t x732 = INT32_MAX;
	int32_t t159 = -365264243;

    t159 = (x729>((x730-x731)|x732));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x733 = 1471159;
	int16_t x735 = -23;
	int64_t x736 = 1450687730692260LL;
	static volatile int32_t t160 = -12;

    t160 = (x733>((x734-x735)|x736));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x737 = INT8_MIN;
	int32_t x738 = -117537;
	uint64_t x740 = 2653646337520LLU;
	static volatile int32_t t161 = -304;

    t161 = (x737>((x738-x739)|x740));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x741 = 3U;
	volatile uint64_t x742 = 44431005869129LLU;
	int64_t x743 = -128232813061LL;

    t162 = (x741>((x742-x743)|x744));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x745 = 9098U;
	static int8_t x746 = 40;
	static int8_t x747 = INT8_MIN;
	int32_t x748 = INT32_MIN;
	static volatile int32_t t163 = -1401;

    t163 = (x745>((x746-x747)|x748));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x750 = 1U;
	static int32_t x751 = INT32_MAX;
	static volatile int32_t t164 = 35752262;

    t164 = (x749>((x750-x751)|x752));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x753 = INT32_MIN;
	uint64_t x754 = 1015902331870LLU;
	int16_t x755 = -117;
	int64_t x756 = INT64_MIN;

    t165 = (x753>((x754-x755)|x756));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x757 = UINT16_MAX;
	volatile uint32_t x758 = UINT32_MAX;
	int16_t x759 = -1;
	int32_t x760 = -1;

    t166 = (x757>((x758-x759)|x760));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x761 = INT32_MAX;
	uint8_t x764 = 17U;
	int32_t t167 = 571138952;

    t167 = (x761>((x762-x763)|x764));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x766 = INT16_MAX;

    t168 = (x765>((x766-x767)|x768));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x769 = INT64_MIN;
	int64_t x771 = INT64_MAX;
	int64_t x772 = INT64_MIN;

    t169 = (x769>((x770-x771)|x772));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x773 = INT64_MAX;
	volatile int8_t x774 = INT8_MAX;
	static volatile int8_t x775 = INT8_MIN;
	int32_t t170 = -44;

    t170 = (x773>((x774-x775)|x776));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x777 = 6U;
	uint64_t x779 = 2032745LLU;
	int32_t x780 = -1;
	volatile int32_t t171 = -2;

    t171 = (x777>((x778-x779)|x780));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x781 = INT64_MIN;
	volatile int16_t x782 = -1;
	int16_t x783 = INT16_MIN;
	static int64_t x784 = INT64_MIN;
	int32_t t172 = 84199142;

    t172 = (x781>((x782-x783)|x784));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x785 = 726293850U;
	uint64_t x786 = UINT64_MAX;
	uint16_t x787 = UINT16_MAX;
	volatile int32_t t173 = -20185;

    t173 = (x785>((x786-x787)|x788));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x789 = 7537182735374481104LLU;
	static uint16_t x790 = UINT16_MAX;
	static volatile int8_t x791 = INT8_MAX;
	static uint8_t x792 = UINT8_MAX;
	static volatile int32_t t174 = -1806;

    t174 = (x789>((x790-x791)|x792));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x794 = UINT64_MAX;
	volatile int32_t x795 = INT32_MIN;
	int32_t t175 = 0;

    t175 = (x793>((x794-x795)|x796));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x797 = INT16_MIN;
	volatile int64_t x798 = INT64_MAX;
	static uint64_t x799 = UINT64_MAX;
	int32_t t176 = -3606950;

    t176 = (x797>((x798-x799)|x800));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x801 = UINT8_MAX;
	int16_t x802 = 16315;
	volatile int16_t x803 = -1;
	static int16_t x804 = 1;
	int32_t t177 = -30938;

    t177 = (x801>((x802-x803)|x804));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x805 = -6791607812326812LL;
	int8_t x807 = -1;
	int8_t x808 = INT8_MIN;

    t178 = (x805>((x806-x807)|x808));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x809 = INT16_MIN;
	int8_t x810 = -1;
	int8_t x812 = INT8_MIN;

    t179 = (x809>((x810-x811)|x812));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x813 = 31;
	volatile int32_t x814 = 816629;
	int16_t x815 = -7815;
	static int8_t x816 = INT8_MAX;
	volatile int32_t t180 = 1;

    t180 = (x813>((x814-x815)|x816));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x817 = INT32_MIN;
	int16_t x818 = INT16_MIN;
	int32_t x819 = 114967;
	int32_t x820 = INT32_MIN;
	int32_t t181 = -72749;

    t181 = (x817>((x818-x819)|x820));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x821 = INT32_MIN;
	uint16_t x822 = UINT16_MAX;
	volatile int32_t t182 = 1;

    t182 = (x821>((x822-x823)|x824));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint16_t x825 = UINT16_MAX;
	volatile uint64_t x826 = 3468324LLU;
	int64_t x827 = -1LL;
	int16_t x828 = INT16_MIN;
	int32_t t183 = 3206;

    t183 = (x825>((x826-x827)|x828));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x829 = 3U;
	volatile int8_t x830 = INT8_MIN;
	uint8_t x831 = 48U;
	int32_t x832 = INT32_MIN;

    t184 = (x829>((x830-x831)|x832));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x838 = -1;
	static int8_t x839 = -1;
	static volatile int32_t t185 = -3;

    t185 = (x837>((x838-x839)|x840));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x841 = 17985U;
	static uint16_t x842 = UINT16_MAX;
	int16_t x843 = -1;
	volatile int16_t x844 = INT16_MIN;
	volatile int32_t t186 = 390311;

    t186 = (x841>((x842-x843)|x844));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x845 = -1LL;
	volatile int16_t x846 = INT16_MIN;
	int32_t x847 = INT32_MIN;
	int32_t x848 = INT32_MAX;
	int32_t t187 = 0;

    t187 = (x845>((x846-x847)|x848));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x850 = INT16_MIN;
	static uint8_t x851 = 0U;
	int64_t x852 = INT64_MIN;
	int32_t t188 = -1509;

    t188 = (x849>((x850-x851)|x852));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x854 = 7162371U;
	volatile int8_t x856 = INT8_MIN;
	int32_t t189 = -4;

    t189 = (x853>((x854-x855)|x856));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x857 = UINT64_MAX;
	int64_t x858 = 673443652340502LL;
	uint32_t x860 = UINT32_MAX;
	static int32_t t190 = 10721991;

    t190 = (x857>((x858-x859)|x860));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x862 = 11378697;
	int32_t x864 = 46623;

    t191 = (x861>((x862-x863)|x864));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x865 = INT8_MIN;
	uint8_t x866 = UINT8_MAX;
	volatile int32_t t192 = -604;

    t192 = (x865>((x866-x867)|x868));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x869 = 37801;
	int8_t x870 = -28;
	uint64_t x871 = UINT64_MAX;
	volatile uint8_t x872 = UINT8_MAX;
	int32_t t193 = 1688598;

    t193 = (x869>((x870-x871)|x872));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x877 = -1LL;
	int8_t x879 = 60;
	uint32_t x880 = 197518U;

    t194 = (x877>((x878-x879)|x880));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x881 = 778U;
	static int64_t x882 = INT64_MAX;
	static uint16_t x884 = 25U;
	int32_t t195 = 77709663;

    t195 = (x881>((x882-x883)|x884));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x889 = INT32_MIN;
	uint8_t x890 = 47U;
	int8_t x892 = 0;
	static volatile int32_t t196 = -2812;

    t196 = (x889>((x890-x891)|x892));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x893 = 2U;
	volatile int8_t x894 = -58;
	uint32_t x895 = 477691104U;
	static uint8_t x896 = UINT8_MAX;
	volatile int32_t t197 = -970;

    t197 = (x893>((x894-x895)|x896));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x897 = -1;
	volatile uint64_t x898 = 2759623757967LLU;
	static int8_t x899 = INT8_MAX;
	uint32_t x900 = UINT32_MAX;
	int32_t t198 = 10055260;

    t198 = (x897>((x898-x899)|x900));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x901 = -223405253;
	uint64_t x902 = UINT64_MAX;
	int16_t x903 = INT16_MAX;
	int16_t x904 = 12739;
	volatile int32_t t199 = 9751;

    t199 = (x901>((x902-x903)|x904));

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

