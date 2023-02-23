
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

uint16_t x1 = UINT16_MAX;
int32_t x8 = INT32_MIN;
uint32_t x9 = UINT32_MAX;
uint64_t x18 = 306170LLU;
uint32_t x21 = 1691158908U;
static int64_t x25 = INT64_MAX;
int64_t x28 = INT64_MIN;
int16_t x30 = INT16_MIN;
int16_t x31 = -6605;
int64_t x33 = 10349832LL;
uint64_t x34 = 518738624040500LLU;
int32_t t7 = -112;
int32_t t9 = 10178225;
int64_t x49 = -1LL;
int32_t x51 = 2769;
int32_t x55 = INT32_MIN;
static volatile int32_t t11 = -1304;
uint8_t x67 = 19U;
volatile int32_t t16 = 2321;
volatile int32_t x78 = INT32_MIN;
int8_t x85 = 0;
int32_t t20 = 1827;
static int64_t x97 = -1LL;
static int64_t x103 = INT64_MAX;
int64_t x105 = -1LL;
uint64_t x106 = 2196515940650991885LLU;
int32_t t24 = 75773353;
int8_t x122 = 1;
int64_t x136 = INT64_MAX;
int16_t x143 = -11298;
uint8_t x151 = 39U;
uint16_t x159 = 3553U;
int8_t x164 = INT8_MIN;
int64_t x165 = INT64_MIN;
int32_t t35 = 741005;
static int64_t x200 = INT64_MIN;
uint32_t x205 = UINT32_MAX;
int8_t x207 = INT8_MIN;
int32_t t43 = -525821;
uint16_t x225 = 1U;
int64_t x226 = INT64_MIN;
volatile int32_t t46 = 0;
uint16_t x246 = 685U;
int32_t x251 = INT32_MIN;
static uint32_t x255 = UINT32_MAX;
int32_t t54 = 41516;
uint8_t x271 = 0U;
int8_t x273 = -1;
int16_t x274 = INT16_MIN;
static int16_t x278 = -1;
static volatile int16_t x291 = -7458;
int32_t t59 = -821600;
int16_t x299 = INT16_MIN;
static volatile int64_t x302 = INT64_MAX;
volatile uint16_t x307 = UINT16_MAX;
int8_t x309 = INT8_MIN;
volatile int32_t t66 = -79514162;
static uint8_t x328 = 14U;
int64_t x334 = -37168677008LL;
int64_t x337 = -6528LL;
uint64_t x342 = 137677LLU;
int32_t t71 = -30;
int8_t x347 = 0;
int32_t t73 = -819;
int64_t x354 = -585827497LL;
volatile uint32_t x356 = 11313733U;
volatile int32_t t74 = 26287;
int32_t x357 = -447680;
volatile int32_t t75 = 135;
uint8_t x363 = 23U;
int32_t t77 = 2072;
int32_t t78 = -381560;
uint8_t x379 = UINT8_MAX;
int16_t x383 = -1;
int8_t x405 = INT8_MIN;
int32_t x406 = INT32_MIN;
uint32_t x424 = UINT32_MAX;
static uint32_t x425 = UINT32_MAX;
int16_t x429 = -1;
uint8_t x433 = UINT8_MAX;
volatile uint16_t x442 = 144U;
volatile int16_t x443 = -153;
int32_t x444 = INT32_MIN;
int64_t x454 = 4175122605036991LL;
int16_t x462 = 366;
int64_t x474 = INT64_MAX;
int64_t x477 = -1LL;
volatile int32_t t96 = 2012;
static uint32_t x491 = UINT32_MAX;
int32_t t98 = 998601;
static uint64_t x494 = UINT64_MAX;
uint32_t x496 = UINT32_MAX;
int32_t t99 = -1;
static uint32_t x500 = UINT32_MAX;
static int32_t x506 = -102844;
volatile int32_t t103 = -255;
int16_t x517 = INT16_MAX;
uint8_t x520 = 1U;
int32_t x524 = 810458539;
int16_t x525 = -1;
int16_t x531 = INT16_MIN;
uint16_t x539 = 31U;
uint64_t x541 = 8800737787504LLU;
volatile int32_t x542 = 1116026;
static volatile uint64_t x543 = 3217316758845LLU;
int8_t x544 = -1;
static int8_t x551 = INT8_MIN;
int32_t t114 = 96006031;
static int16_t x558 = INT16_MAX;
uint8_t x564 = UINT8_MAX;
int64_t x569 = INT64_MIN;
static uint8_t x573 = UINT8_MAX;
int32_t x577 = INT32_MIN;
uint8_t x578 = 5U;
int32_t t120 = -36;
volatile uint8_t x589 = 24U;
int64_t x591 = INT64_MIN;
volatile int32_t t123 = -563176956;
int8_t x600 = INT8_MIN;
volatile int32_t t124 = -1028229;
int16_t x604 = INT16_MAX;
int32_t x612 = INT32_MIN;
static volatile int16_t x614 = INT16_MIN;
int32_t x617 = 11;
int8_t x620 = -1;
volatile int32_t t130 = 2833;
int8_t x625 = INT8_MAX;
volatile uint8_t x628 = 35U;
int32_t t131 = 0;
static volatile int8_t x635 = -3;
static volatile int32_t t133 = 50;
volatile int32_t t134 = -4306;
volatile int32_t t136 = 624237;
int16_t x659 = -6642;
volatile int32_t t138 = -38021;
int32_t x663 = INT32_MIN;
static int64_t x665 = INT64_MAX;
int64_t x668 = -1LL;
int64_t x696 = 1255LL;
int32_t t143 = 832;
static int32_t t144 = -107;
int32_t t148 = 2160453;
uint32_t x735 = UINT32_MAX;
volatile int32_t t151 = -2857;
int32_t x744 = 447133530;
int32_t t152 = -967;
volatile int8_t x751 = 2;
int64_t x752 = 1984392LL;
static int32_t x759 = -2568;
volatile int32_t t156 = 50865;
volatile uint64_t x778 = 780718324403012142LLU;
int32_t x784 = -14464;
int8_t x788 = INT8_MIN;
uint32_t x791 = 27606U;
uint64_t x795 = 3778289585880324LLU;
volatile int8_t x803 = INT8_MAX;
volatile uint64_t x804 = 146226LLU;
volatile uint16_t x821 = UINT16_MAX;
int8_t x839 = 56;
static int8_t x840 = 60;
static uint8_t x846 = 99U;
volatile int64_t x852 = INT64_MIN;
int32_t t177 = -41802327;
int16_t x866 = -1;
static int32_t t179 = -8789;
uint8_t x873 = UINT8_MAX;
int32_t t180 = -58;
uint16_t x878 = 9320U;
uint32_t x895 = UINT32_MAX;
int64_t x906 = INT64_MAX;
volatile int16_t x909 = 2;
uint8_t x912 = UINT8_MAX;
int64_t x927 = -1LL;
int32_t x932 = INT32_MIN;
uint32_t x934 = 108U;
uint16_t x938 = 2935U;
int16_t x940 = INT16_MIN;
int32_t t193 = 535;
int64_t x941 = 287256402324824579LL;
volatile int64_t x943 = INT64_MIN;
volatile int16_t x949 = 1705;
uint64_t x951 = 1972794368732LLU;
int32_t t195 = -20875328;
int8_t x955 = INT8_MIN;
int8_t x962 = INT8_MIN;
int64_t x971 = INT64_MIN;
int64_t x972 = -1LL;


void f0(void) {
    	uint16_t x2 = 2880U;
	volatile uint16_t x3 = 2U;
	int16_t x4 = 124;
	volatile int32_t t0 = 840;

    t0 = (x1!=((x2+x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = UINT32_MAX;
	static int8_t x6 = INT8_MIN;
	uint64_t x7 = 12461585540097568LLU;
	volatile int32_t t1 = 6;

    t1 = (x5!=((x6+x7)!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MIN;
	static uint16_t x11 = 26683U;
	uint32_t x12 = 54947199U;
	int32_t t2 = -170118976;

    t2 = (x9!=((x10+x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	int8_t x19 = INT8_MIN;
	int32_t x20 = 6470399;
	int32_t t3 = 446;

    t3 = (x17!=((x18+x19)!=x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = -18;
	int16_t x23 = -1;
	int32_t x24 = 77;
	int32_t t4 = -168;

    t4 = (x21!=((x22+x23)!=x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x26 = INT64_MIN;
	int32_t x27 = INT32_MAX;
	static volatile int32_t t5 = 90;

    t5 = (x25!=((x26+x27)!=x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	static uint16_t x32 = 3752U;
	static int32_t t6 = 203678998;

    t6 = (x29!=((x30+x31)!=x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x35 = 34578LL;
	volatile int32_t x36 = INT32_MIN;

    t7 = (x33!=((x34+x35)!=x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MAX;
	int64_t x38 = INT64_MIN;
	static uint16_t x39 = 26260U;
	uint8_t x40 = 2U;
	int32_t t8 = -2;

    t8 = (x37!=((x38+x39)!=x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	int32_t x42 = INT32_MIN;
	int16_t x43 = 7;
	uint16_t x44 = 782U;

    t9 = (x41!=((x42+x43)!=x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x50 = INT64_MIN;
	static uint32_t x52 = UINT32_MAX;
	int32_t t10 = -75723414;

    t10 = (x49!=((x50+x51)!=x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x53 = UINT64_MAX;
	static volatile uint8_t x54 = 4U;
	int8_t x56 = -7;

    t11 = (x53!=((x54+x55)!=x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = UINT64_MAX;
	volatile int8_t x58 = INT8_MIN;
	int32_t x59 = -626267659;
	int64_t x60 = -9820LL;
	int32_t t12 = 20259654;

    t12 = (x57!=((x58+x59)!=x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x61 = UINT8_MAX;
	static volatile int16_t x62 = -6;
	static uint8_t x63 = UINT8_MAX;
	volatile int8_t x64 = -1;
	volatile int32_t t13 = 54863811;

    t13 = (x61!=((x62+x63)!=x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x65 = -9;
	int64_t x66 = -1LL;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t14 = -85198894;

    t14 = (x65!=((x66+x67)!=x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = -1;
	int16_t x70 = INT16_MIN;
	static uint8_t x71 = 10U;
	int8_t x72 = INT8_MIN;
	volatile int32_t t15 = 18;

    t15 = (x69!=((x70+x71)!=x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x73 = UINT64_MAX;
	static uint64_t x74 = 1742541LLU;
	int16_t x75 = INT16_MIN;
	int8_t x76 = INT8_MIN;

    t16 = (x73!=((x74+x75)!=x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = -1;
	static uint32_t x79 = UINT32_MAX;
	int8_t x80 = 11;
	int32_t t17 = 144235846;

    t17 = (x77!=((x78+x79)!=x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x81 = UINT8_MAX;
	int32_t x82 = 23276601;
	volatile int64_t x83 = -1LL;
	int16_t x84 = 1;
	volatile int32_t t18 = -6;

    t18 = (x81!=((x82+x83)!=x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x86 = INT32_MIN;
	uint64_t x87 = 464746325LLU;
	static int16_t x88 = INT16_MIN;
	int32_t t19 = 7;

    t19 = (x85!=((x86+x87)!=x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = 13;
	static volatile uint64_t x90 = 84LLU;
	int16_t x91 = INT16_MIN;
	int8_t x92 = -1;

    t20 = (x89!=((x90+x91)!=x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x93 = UINT32_MAX;
	static uint16_t x94 = 157U;
	int32_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int32_t t21 = -86400;

    t21 = (x93!=((x94+x95)!=x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x98 = UINT64_MAX;
	uint16_t x99 = UINT16_MAX;
	static volatile uint16_t x100 = 20021U;
	volatile int32_t t22 = -6;

    t22 = (x97!=((x98+x99)!=x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = -1;
	int32_t x102 = INT32_MIN;
	uint64_t x104 = 11502838LLU;
	static volatile int32_t t23 = 0;

    t23 = (x101!=((x102+x103)!=x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x107 = 246123824U;
	int64_t x108 = -1LL;

    t24 = (x105!=((x106+x107)!=x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = INT32_MIN;
	int16_t x110 = -9899;
	int8_t x111 = INT8_MAX;
	int32_t x112 = INT32_MAX;
	volatile int32_t t25 = 6;

    t25 = (x109!=((x110+x111)!=x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x121 = -111833;
	static volatile int32_t x123 = -1;
	int8_t x124 = 0;
	static volatile int32_t t26 = -7130666;

    t26 = (x121!=((x122+x123)!=x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	int64_t x135 = -4113684050084578LL;
	int32_t t27 = -2;

    t27 = (x133!=((x134+x135)!=x136));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x137 = -100LL;
	int64_t x138 = 1271071407215725963LL;
	static volatile uint8_t x139 = 24U;
	int64_t x140 = INT64_MIN;
	int32_t t28 = 297756643;

    t28 = (x137!=((x138+x139)!=x140));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x141 = 6964U;
	volatile int16_t x142 = INT16_MAX;
	int16_t x144 = -1;
	volatile int32_t t29 = 0;

    t29 = (x141!=((x142+x143)!=x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x145 = 0;
	int8_t x146 = INT8_MAX;
	volatile int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MAX;
	volatile int32_t t30 = -334809172;

    t30 = (x145!=((x146+x147)!=x148));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x149 = UINT16_MAX;
	static uint16_t x150 = 20U;
	uint64_t x152 = 651535278047LLU;
	int32_t t31 = 858901;

    t31 = (x149!=((x150+x151)!=x152));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x157 = INT8_MIN;
	uint16_t x158 = UINT16_MAX;
	int32_t x160 = INT32_MIN;
	int32_t t32 = 21877;

    t32 = (x157!=((x158+x159)!=x160));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x161 = INT16_MAX;
	int64_t x162 = INT64_MIN;
	volatile uint16_t x163 = UINT16_MAX;
	static volatile int32_t t33 = 677;

    t33 = (x161!=((x162+x163)!=x164));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x166 = 2LLU;
	static int64_t x167 = INT64_MAX;
	int8_t x168 = 1;
	volatile int32_t t34 = 2242;

    t34 = (x165!=((x166+x167)!=x168));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x169 = 287204754672LL;
	int16_t x170 = -1;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MAX;

    t35 = (x169!=((x170+x171)!=x172));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x173 = 14783407;
	int64_t x174 = 32214194067803539LL;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	static int32_t t36 = -187;

    t36 = (x173!=((x174+x175)!=x176));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = -9128077548254LL;
	volatile uint16_t x178 = 3999U;
	static int8_t x179 = INT8_MIN;
	volatile int32_t x180 = 5;
	int32_t t37 = -54297136;

    t37 = (x177!=((x178+x179)!=x180));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 773U;
	int64_t x184 = 32762755LL;
	volatile int32_t t38 = -678536;

    t38 = (x181!=((x182+x183)!=x184));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x185 = UINT8_MAX;
	volatile int8_t x186 = INT8_MAX;
	uint32_t x187 = 220004U;
	uint8_t x188 = UINT8_MAX;
	int32_t t39 = -23346006;

    t39 = (x185!=((x186+x187)!=x188));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x189 = INT16_MIN;
	int16_t x190 = -315;
	static volatile int16_t x191 = INT16_MIN;
	volatile int64_t x192 = INT64_MIN;
	int32_t t40 = 4940;

    t40 = (x189!=((x190+x191)!=x192));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x197 = -1LL;
	volatile int16_t x198 = -14;
	static int16_t x199 = 12;
	int32_t t41 = 4;

    t41 = (x197!=((x198+x199)!=x200));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x206 = -1;
	uint16_t x208 = UINT16_MAX;
	int32_t t42 = -108221;

    t42 = (x205!=((x206+x207)!=x208));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x209 = -1;
	uint8_t x210 = 51U;
	int8_t x211 = -1;
	uint64_t x212 = 133902827029790798LLU;

    t43 = (x209!=((x210+x211)!=x212));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x213 = 146U;
	uint32_t x214 = 22194U;
	uint8_t x215 = 13U;
	int8_t x216 = INT8_MAX;
	volatile int32_t t44 = -125342145;

    t44 = (x213!=((x214+x215)!=x216));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x217 = INT64_MIN;
	static uint8_t x218 = UINT8_MAX;
	volatile int8_t x219 = 11;
	int64_t x220 = INT64_MIN;
	volatile int32_t t45 = 48364233;

    t45 = (x217!=((x218+x219)!=x220));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x227 = INT16_MAX;
	volatile uint64_t x228 = UINT64_MAX;

    t46 = (x225!=((x226+x227)!=x228));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x237 = -14;
	int64_t x238 = -537765957470LL;
	int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t47 = 2;

    t47 = (x237!=((x238+x239)!=x240));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x241 = 20U;
	uint32_t x242 = 383470428U;
	uint64_t x243 = 17119781613959775LLU;
	int32_t x244 = INT32_MIN;
	volatile int32_t t48 = -1981;

    t48 = (x241!=((x242+x243)!=x244));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x245 = 11;
	uint8_t x247 = 3U;
	volatile int64_t x248 = -1LL;
	int32_t t49 = 145968;

    t49 = (x245!=((x246+x247)!=x248));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x249 = UINT16_MAX;
	uint32_t x250 = UINT32_MAX;
	volatile uint16_t x252 = UINT16_MAX;
	int32_t t50 = -761395066;

    t50 = (x249!=((x250+x251)!=x252));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x253 = 2031U;
	static volatile uint64_t x254 = 99093310034908LLU;
	int16_t x256 = INT16_MIN;
	int32_t t51 = -1835551;

    t51 = (x253!=((x254+x255)!=x256));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x257 = -3621211021389638435LL;
	volatile uint8_t x258 = UINT8_MAX;
	volatile int32_t x259 = 1;
	int32_t x260 = INT32_MAX;
	int32_t t52 = -109;

    t52 = (x257!=((x258+x259)!=x260));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x261 = 1;
	volatile int64_t x262 = 1296368375812123LL;
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = INT64_MIN;
	volatile int32_t t53 = -878482;

    t53 = (x261!=((x262+x263)!=x264));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x265 = INT16_MIN;
	volatile int8_t x266 = INT8_MAX;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 381614U;

    t54 = (x265!=((x266+x267)!=x268));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x269 = -15;
	int16_t x270 = INT16_MIN;
	static volatile uint32_t x272 = 390U;
	int32_t t55 = 1488107;

    t55 = (x269!=((x270+x271)!=x272));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MIN;
	int32_t t56 = 9;

    t56 = (x273!=((x274+x275)!=x276));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x277 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	volatile uint32_t x280 = 10785U;
	int32_t t57 = 24814;

    t57 = (x277!=((x278+x279)!=x280));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MIN;
	int64_t x288 = INT64_MIN;
	volatile int32_t t58 = 658;

    t58 = (x285!=((x286+x287)!=x288));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x289 = INT8_MAX;
	uint32_t x290 = UINT32_MAX;
	uint8_t x292 = 0U;

    t59 = (x289!=((x290+x291)!=x292));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x293 = 1;
	volatile int16_t x294 = 6;
	int64_t x295 = INT64_MIN;
	static volatile uint8_t x296 = 32U;
	static int32_t t60 = -37153;

    t60 = (x293!=((x294+x295)!=x296));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x297 = INT8_MIN;
	int8_t x298 = -1;
	int64_t x300 = -1LL;
	volatile int32_t t61 = 413047;

    t61 = (x297!=((x298+x299)!=x300));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x301 = 27236991938LLU;
	uint64_t x303 = UINT64_MAX;
	static int32_t x304 = -3170964;
	volatile int32_t t62 = 151;

    t62 = (x301!=((x302+x303)!=x304));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x305 = 42060U;
	int16_t x306 = 74;
	static int8_t x308 = -1;
	volatile int32_t t63 = -905140;

    t63 = (x305!=((x306+x307)!=x308));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x310 = INT16_MIN;
	static uint8_t x311 = UINT8_MAX;
	static volatile int64_t x312 = INT64_MIN;
	int32_t t64 = -409721356;

    t64 = (x309!=((x310+x311)!=x312));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x313 = 0;
	volatile int8_t x314 = 0;
	static int32_t x315 = 1;
	int16_t x316 = INT16_MIN;
	volatile int32_t t65 = 204871;

    t65 = (x313!=((x314+x315)!=x316));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x321 = 22761U;
	int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MIN;
	static int64_t x324 = -1LL;

    t66 = (x321!=((x322+x323)!=x324));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x325 = INT16_MIN;
	volatile int64_t x326 = -909745272129LL;
	static volatile uint8_t x327 = UINT8_MAX;
	volatile int32_t t67 = 528626123;

    t67 = (x325!=((x326+x327)!=x328));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x329 = 52;
	volatile uint32_t x330 = 318U;
	int16_t x331 = 14;
	uint16_t x332 = 1791U;
	static int32_t t68 = 10;

    t68 = (x329!=((x330+x331)!=x332));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x333 = 15U;
	volatile int64_t x335 = 103724849344012LL;
	int16_t x336 = -1;
	int32_t t69 = 4813;

    t69 = (x333!=((x334+x335)!=x336));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x338 = INT16_MIN;
	volatile int8_t x339 = INT8_MIN;
	static int8_t x340 = -1;
	int32_t t70 = -24108849;

    t70 = (x337!=((x338+x339)!=x340));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x341 = 27217U;
	int8_t x343 = -1;
	int8_t x344 = -1;

    t71 = (x341!=((x342+x343)!=x344));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x345 = INT32_MAX;
	int16_t x346 = -546;
	volatile int64_t x348 = INT64_MIN;
	volatile int32_t t72 = -1;

    t72 = (x345!=((x346+x347)!=x348));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x349 = INT8_MIN;
	int64_t x350 = -15700513957063791LL;
	volatile int16_t x351 = 119;
	uint16_t x352 = 0U;

    t73 = (x349!=((x350+x351)!=x352));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x353 = INT32_MIN;
	uint8_t x355 = UINT8_MAX;

    t74 = (x353!=((x354+x355)!=x356));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x358 = -1;
	uint16_t x359 = UINT16_MAX;
	uint64_t x360 = 1025105719623LLU;

    t75 = (x357!=((x358+x359)!=x360));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x361 = -10867;
	static uint64_t x362 = 188LLU;
	int16_t x364 = INT16_MIN;
	int32_t t76 = -5064;

    t76 = (x361!=((x362+x363)!=x364));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x365 = -1;
	static int32_t x366 = INT32_MIN;
	int64_t x367 = -28LL;
	volatile int16_t x368 = INT16_MIN;

    t77 = (x365!=((x366+x367)!=x368));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	uint16_t x375 = 3875U;
	int64_t x376 = INT64_MIN;

    t78 = (x373!=((x374+x375)!=x376));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x377 = UINT16_MAX;
	int16_t x378 = -20;
	static int8_t x380 = -1;
	static volatile int32_t t79 = 319233;

    t79 = (x377!=((x378+x379)!=x380));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x381 = INT32_MAX;
	int8_t x382 = INT8_MAX;
	static uint64_t x384 = 84889723LLU;
	volatile int32_t t80 = -20196;

    t80 = (x381!=((x382+x383)!=x384));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x389 = -47;
	int64_t x390 = -1LL;
	int8_t x391 = -1;
	volatile int16_t x392 = -3;
	int32_t t81 = 7225723;

    t81 = (x389!=((x390+x391)!=x392));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x401 = INT32_MIN;
	int32_t x402 = 89294957;
	uint32_t x403 = 7U;
	uint64_t x404 = 6968LLU;
	static volatile int32_t t82 = 67894313;

    t82 = (x401!=((x402+x403)!=x404));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x407 = -28827128561853130LL;
	uint16_t x408 = 1U;
	volatile int32_t t83 = -3;

    t83 = (x405!=((x406+x407)!=x408));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x413 = INT64_MAX;
	int8_t x414 = INT8_MAX;
	int64_t x415 = -1858194403748LL;
	static int64_t x416 = INT64_MIN;
	volatile int32_t t84 = -3544931;

    t84 = (x413!=((x414+x415)!=x416));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x417 = 2688179LLU;
	volatile uint64_t x418 = 14144945508623951LLU;
	int8_t x419 = 1;
	int8_t x420 = INT8_MAX;
	int32_t t85 = 1;

    t85 = (x417!=((x418+x419)!=x420));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x421 = -2560989153821225069LL;
	uint32_t x422 = 4472355U;
	int32_t x423 = 837129;
	volatile int32_t t86 = -83;

    t86 = (x421!=((x422+x423)!=x424));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x426 = 0;
	volatile int32_t x427 = -1;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t87 = 0;

    t87 = (x425!=((x426+x427)!=x428));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x430 = -1069351642;
	int64_t x431 = 326322LL;
	uint8_t x432 = 12U;
	volatile int32_t t88 = 252238;

    t88 = (x429!=((x430+x431)!=x432));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x434 = 22552814LLU;
	int16_t x435 = 936;
	static uint32_t x436 = UINT32_MAX;
	volatile int32_t t89 = -21737820;

    t89 = (x433!=((x434+x435)!=x436));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x437 = -1;
	int8_t x438 = -1;
	volatile int8_t x439 = 0;
	int64_t x440 = INT64_MIN;
	int32_t t90 = 25;

    t90 = (x437!=((x438+x439)!=x440));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x441 = 2LLU;
	volatile int32_t t91 = -7951;

    t91 = (x441!=((x442+x443)!=x444));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x453 = 0;
	static uint16_t x455 = UINT16_MAX;
	static uint64_t x456 = 31061444LLU;
	int32_t t92 = 1;

    t92 = (x453!=((x454+x455)!=x456));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x461 = INT8_MIN;
	int32_t x463 = -1;
	uint8_t x464 = UINT8_MAX;
	int32_t t93 = -14836;

    t93 = (x461!=((x462+x463)!=x464));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x469 = -187;
	int8_t x470 = INT8_MIN;
	int16_t x471 = INT16_MIN;
	uint32_t x472 = 2170U;
	int32_t t94 = -5;

    t94 = (x469!=((x470+x471)!=x472));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x473 = INT8_MIN;
	int32_t x475 = -1;
	static uint32_t x476 = 550318994U;
	volatile int32_t t95 = -753701;

    t95 = (x473!=((x474+x475)!=x476));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x478 = INT8_MIN;
	static volatile int8_t x479 = INT8_MIN;
	volatile uint32_t x480 = 161U;

    t96 = (x477!=((x478+x479)!=x480));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x485 = INT64_MAX;
	int16_t x486 = INT16_MIN;
	volatile int16_t x487 = INT16_MAX;
	int64_t x488 = 10LL;
	int32_t t97 = -158;

    t97 = (x485!=((x486+x487)!=x488));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x489 = 0;
	int16_t x490 = -1;
	volatile uint32_t x492 = 106610396U;

    t98 = (x489!=((x490+x491)!=x492));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x493 = 3630824;
	static volatile int16_t x495 = -1833;

    t99 = (x493!=((x494+x495)!=x496));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x497 = -98;
	static uint8_t x498 = 30U;
	static uint8_t x499 = 2U;
	volatile int32_t t100 = -17;

    t100 = (x497!=((x498+x499)!=x500));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x501 = 127U;
	volatile int64_t x502 = -1LL;
	int64_t x503 = INT64_MAX;
	static volatile uint8_t x504 = 96U;
	static int32_t t101 = 1;

    t101 = (x501!=((x502+x503)!=x504));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x505 = 19;
	volatile uint64_t x507 = UINT64_MAX;
	uint32_t x508 = 235U;
	int32_t t102 = -27908;

    t102 = (x505!=((x506+x507)!=x508));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x509 = INT32_MIN;
	volatile int64_t x510 = INT64_MIN;
	uint32_t x511 = UINT32_MAX;
	int64_t x512 = 178159656937902LL;

    t103 = (x509!=((x510+x511)!=x512));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x513 = INT8_MIN;
	static int32_t x514 = -1;
	int64_t x515 = -1LL;
	volatile int8_t x516 = 0;
	static volatile int32_t t104 = 2489;

    t104 = (x513!=((x514+x515)!=x516));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x518 = -271952LL;
	uint64_t x519 = 14LLU;
	volatile int32_t t105 = 59864;

    t105 = (x517!=((x518+x519)!=x520));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x521 = INT64_MIN;
	static int16_t x522 = -1;
	int16_t x523 = 0;
	int32_t t106 = -6;

    t106 = (x521!=((x522+x523)!=x524));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x526 = -1LL;
	static int64_t x527 = INT64_MAX;
	static volatile int64_t x528 = INT64_MAX;
	volatile int32_t t107 = 271605;

    t107 = (x525!=((x526+x527)!=x528));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x529 = -63;
	uint16_t x530 = UINT16_MAX;
	uint64_t x532 = 128006910937LLU;
	volatile int32_t t108 = -9342941;

    t108 = (x529!=((x530+x531)!=x532));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x533 = INT64_MAX;
	volatile uint8_t x534 = UINT8_MAX;
	uint8_t x535 = UINT8_MAX;
	uint8_t x536 = 0U;
	volatile int32_t t109 = 461;

    t109 = (x533!=((x534+x535)!=x536));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x537 = INT8_MIN;
	volatile uint16_t x538 = 0U;
	static int64_t x540 = INT64_MAX;
	int32_t t110 = -1;

    t110 = (x537!=((x538+x539)!=x540));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t t111 = 266757354;

    t111 = (x541!=((x542+x543)!=x544));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x545 = 120U;
	volatile uint64_t x546 = 5457217344977336LLU;
	volatile int16_t x547 = 569;
	uint32_t x548 = 2U;
	static volatile int32_t t112 = -8152;

    t112 = (x545!=((x546+x547)!=x548));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x549 = 35U;
	static uint8_t x550 = UINT8_MAX;
	uint8_t x552 = UINT8_MAX;
	static int32_t t113 = 104;

    t113 = (x549!=((x550+x551)!=x552));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x553 = INT32_MAX;
	uint32_t x554 = 3U;
	uint16_t x555 = UINT16_MAX;
	int32_t x556 = INT32_MIN;

    t114 = (x553!=((x554+x555)!=x556));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x557 = 8452U;
	int32_t x559 = INT32_MIN;
	static int16_t x560 = INT16_MIN;
	volatile int32_t t115 = -578;

    t115 = (x557!=((x558+x559)!=x560));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x561 = -1;
	uint16_t x562 = 1658U;
	uint16_t x563 = UINT16_MAX;
	volatile int32_t t116 = -1;

    t116 = (x561!=((x562+x563)!=x564));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x565 = UINT64_MAX;
	static volatile uint16_t x566 = UINT16_MAX;
	static int16_t x567 = INT16_MIN;
	volatile int16_t x568 = 744;
	int32_t t117 = 64723012;

    t117 = (x565!=((x566+x567)!=x568));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x570 = -1;
	uint8_t x571 = UINT8_MAX;
	int16_t x572 = 30;
	int32_t t118 = -88978551;

    t118 = (x569!=((x570+x571)!=x572));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x574 = UINT8_MAX;
	volatile uint16_t x575 = 485U;
	static int64_t x576 = 5LL;
	volatile int32_t t119 = -244381;

    t119 = (x573!=((x574+x575)!=x576));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x579 = 107U;
	uint8_t x580 = 10U;

    t120 = (x577!=((x578+x579)!=x580));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x581 = INT8_MIN;
	uint8_t x582 = 0U;
	int16_t x583 = -36;
	int16_t x584 = -922;
	int32_t t121 = -1;

    t121 = (x581!=((x582+x583)!=x584));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x585 = -1LL;
	volatile int64_t x586 = INT64_MIN;
	static volatile int64_t x587 = 586393531639LL;
	int32_t x588 = INT32_MIN;
	static int32_t t122 = -1727;

    t122 = (x585!=((x586+x587)!=x588));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x590 = UINT32_MAX;
	int8_t x592 = INT8_MAX;

    t123 = (x589!=((x590+x591)!=x592));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x597 = INT16_MAX;
	uint8_t x598 = UINT8_MAX;
	static int64_t x599 = -41480060601556LL;

    t124 = (x597!=((x598+x599)!=x600));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x601 = 106U;
	volatile uint16_t x602 = 13U;
	uint16_t x603 = UINT16_MAX;
	volatile int32_t t125 = -1;

    t125 = (x601!=((x602+x603)!=x604));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x605 = -26748143128948LL;
	uint16_t x606 = UINT16_MAX;
	uint16_t x607 = 5061U;
	int64_t x608 = INT64_MIN;
	int32_t t126 = 555550500;

    t126 = (x605!=((x606+x607)!=x608));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x609 = INT64_MAX;
	int16_t x610 = 114;
	volatile int8_t x611 = INT8_MIN;
	volatile int32_t t127 = 11;

    t127 = (x609!=((x610+x611)!=x612));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x613 = INT32_MIN;
	volatile int16_t x615 = -1;
	volatile int16_t x616 = INT16_MIN;
	int32_t t128 = 10636800;

    t128 = (x613!=((x614+x615)!=x616));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x618 = 1352688762979LL;
	static uint64_t x619 = UINT64_MAX;
	static volatile int32_t t129 = 5308836;

    t129 = (x617!=((x618+x619)!=x620));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x621 = -8451920;
	volatile uint64_t x622 = 3750226524LLU;
	int64_t x623 = -17LL;
	int8_t x624 = -61;

    t130 = (x621!=((x622+x623)!=x624));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x626 = 3LL;
	static int8_t x627 = INT8_MIN;

    t131 = (x625!=((x626+x627)!=x628));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x629 = 12435383935321074LL;
	volatile int16_t x630 = INT16_MIN;
	uint32_t x631 = 7013U;
	int64_t x632 = INT64_MAX;
	volatile int32_t t132 = 21;

    t132 = (x629!=((x630+x631)!=x632));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x633 = UINT8_MAX;
	volatile int16_t x634 = -1;
	int8_t x636 = -1;

    t133 = (x633!=((x634+x635)!=x636));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x637 = -1;
	int16_t x638 = 12921;
	int32_t x639 = -132;
	int64_t x640 = -1092207746314356902LL;

    t134 = (x637!=((x638+x639)!=x640));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x641 = 26U;
	static volatile int32_t x642 = -1;
	volatile int32_t x643 = INT32_MAX;
	uint8_t x644 = 69U;
	int32_t t135 = -10486476;

    t135 = (x641!=((x642+x643)!=x644));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x649 = INT64_MIN;
	uint32_t x650 = 377978U;
	static uint8_t x651 = 1U;
	int32_t x652 = 9003;

    t136 = (x649!=((x650+x651)!=x652));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x653 = -1LL;
	uint64_t x654 = UINT64_MAX;
	int32_t x655 = INT32_MIN;
	uint64_t x656 = 2666646639863867LLU;
	int32_t t137 = -657821;

    t137 = (x653!=((x654+x655)!=x656));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x657 = INT64_MIN;
	int16_t x658 = INT16_MIN;
	int64_t x660 = INT64_MIN;

    t138 = (x657!=((x658+x659)!=x660));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x661 = INT32_MIN;
	static uint64_t x662 = UINT64_MAX;
	int64_t x664 = INT64_MIN;
	int32_t t139 = -330802394;

    t139 = (x661!=((x662+x663)!=x664));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x666 = 1;
	static int8_t x667 = INT8_MIN;
	static volatile int32_t t140 = -3;

    t140 = (x665!=((x666+x667)!=x668));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x669 = 253307LLU;
	int8_t x670 = INT8_MIN;
	uint32_t x671 = 1905866U;
	volatile int32_t x672 = INT32_MIN;
	volatile int32_t t141 = -259058005;

    t141 = (x669!=((x670+x671)!=x672));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x693 = 112627;
	uint32_t x694 = 9U;
	int64_t x695 = -1LL;
	int32_t t142 = -11969;

    t142 = (x693!=((x694+x695)!=x696));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x697 = INT16_MIN;
	int32_t x698 = INT32_MAX;
	int64_t x699 = -1LL;
	uint64_t x700 = 114828937LLU;

    t143 = (x697!=((x698+x699)!=x700));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x701 = INT16_MAX;
	static int16_t x702 = INT16_MAX;
	int8_t x703 = INT8_MIN;
	int32_t x704 = -1;

    t144 = (x701!=((x702+x703)!=x704));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x705 = 255667716LL;
	int32_t x706 = INT32_MIN;
	uint8_t x707 = 69U;
	int16_t x708 = 1;
	volatile int32_t t145 = -45982;

    t145 = (x705!=((x706+x707)!=x708));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x713 = -1LL;
	uint64_t x714 = UINT64_MAX;
	int64_t x715 = -1LL;
	int8_t x716 = -36;
	volatile int32_t t146 = 181848132;

    t146 = (x713!=((x714+x715)!=x716));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x717 = 2U;
	static int64_t x718 = -6284987LL;
	static uint32_t x719 = 1U;
	uint8_t x720 = 97U;
	volatile int32_t t147 = -13478531;

    t147 = (x717!=((x718+x719)!=x720));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x725 = 54148248404375LLU;
	int32_t x726 = 97079;
	int32_t x727 = 13968749;
	volatile int16_t x728 = 767;

    t148 = (x725!=((x726+x727)!=x728));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x729 = INT64_MIN;
	int16_t x730 = INT16_MIN;
	uint32_t x731 = UINT32_MAX;
	uint16_t x732 = 14U;
	volatile int32_t t149 = -5440330;

    t149 = (x729!=((x730+x731)!=x732));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x733 = -54;
	int64_t x734 = INT64_MIN;
	int32_t x736 = INT32_MIN;
	int32_t t150 = 65;

    t150 = (x733!=((x734+x735)!=x736));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x737 = 1008U;
	int64_t x738 = -1LL;
	uint32_t x739 = UINT32_MAX;
	int64_t x740 = INT64_MIN;

    t151 = (x737!=((x738+x739)!=x740));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x741 = INT64_MAX;
	uint8_t x742 = UINT8_MAX;
	volatile int8_t x743 = INT8_MIN;

    t152 = (x741!=((x742+x743)!=x744));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x745 = 140LLU;
	int32_t x746 = INT32_MIN;
	volatile uint64_t x747 = 195535821439003LLU;
	uint64_t x748 = 342704LLU;
	volatile int32_t t153 = 103977;

    t153 = (x745!=((x746+x747)!=x748));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x749 = INT8_MAX;
	uint8_t x750 = 7U;
	volatile int32_t t154 = -12;

    t154 = (x749!=((x750+x751)!=x752));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x753 = INT8_MAX;
	volatile int8_t x754 = INT8_MAX;
	volatile int32_t x755 = 1188226;
	uint8_t x756 = 1U;
	int32_t t155 = -1;

    t155 = (x753!=((x754+x755)!=x756));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x757 = 300032257;
	volatile int8_t x758 = 41;
	int16_t x760 = INT16_MAX;

    t156 = (x757!=((x758+x759)!=x760));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x765 = INT16_MAX;
	volatile int16_t x766 = -227;
	static volatile int8_t x767 = INT8_MAX;
	int64_t x768 = -355502018595LL;
	int32_t t157 = -14482385;

    t157 = (x765!=((x766+x767)!=x768));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x769 = -1;
	int32_t x770 = INT32_MIN;
	int16_t x771 = 7;
	int16_t x772 = INT16_MIN;
	static int32_t t158 = -554644571;

    t158 = (x769!=((x770+x771)!=x772));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x773 = -3;
	volatile int64_t x774 = 11LL;
	int32_t x775 = -1;
	volatile uint32_t x776 = 0U;
	volatile int32_t t159 = 714883;

    t159 = (x773!=((x774+x775)!=x776));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x777 = -26556LL;
	static volatile uint32_t x779 = 455U;
	static uint64_t x780 = UINT64_MAX;
	int32_t t160 = -1;

    t160 = (x777!=((x778+x779)!=x780));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x781 = INT8_MIN;
	int16_t x782 = INT16_MIN;
	uint32_t x783 = UINT32_MAX;
	volatile int32_t t161 = -798;

    t161 = (x781!=((x782+x783)!=x784));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x785 = 532121563409585836LLU;
	int64_t x786 = INT64_MIN;
	static uint32_t x787 = UINT32_MAX;
	volatile int32_t t162 = -5481;

    t162 = (x785!=((x786+x787)!=x788));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x789 = INT8_MIN;
	int16_t x790 = 194;
	int16_t x792 = INT16_MIN;
	volatile int32_t t163 = 2;

    t163 = (x789!=((x790+x791)!=x792));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x793 = INT8_MIN;
	static int32_t x794 = INT32_MIN;
	volatile uint8_t x796 = 3U;
	int32_t t164 = -5484;

    t164 = (x793!=((x794+x795)!=x796));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x797 = INT32_MIN;
	uint16_t x798 = 0U;
	int16_t x799 = INT16_MIN;
	int8_t x800 = INT8_MIN;
	int32_t t165 = 28;

    t165 = (x797!=((x798+x799)!=x800));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x801 = 0;
	int16_t x802 = INT16_MIN;
	int32_t t166 = 27791;

    t166 = (x801!=((x802+x803)!=x804));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x805 = INT16_MIN;
	uint16_t x806 = UINT16_MAX;
	int8_t x807 = 2;
	volatile int8_t x808 = INT8_MIN;
	int32_t t167 = 79784;

    t167 = (x805!=((x806+x807)!=x808));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x809 = UINT32_MAX;
	int64_t x810 = INT64_MIN;
	uint32_t x811 = 0U;
	int64_t x812 = INT64_MIN;
	static volatile int32_t t168 = 91229199;

    t168 = (x809!=((x810+x811)!=x812));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x817 = INT32_MIN;
	int8_t x818 = -1;
	volatile int32_t x819 = 520681078;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t169 = 32896;

    t169 = (x817!=((x818+x819)!=x820));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x822 = -52286472;
	int64_t x823 = INT64_MAX;
	int32_t x824 = INT32_MIN;
	volatile int32_t t170 = 485025630;

    t170 = (x821!=((x822+x823)!=x824));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x825 = INT64_MIN;
	uint16_t x826 = UINT16_MAX;
	int32_t x827 = -1;
	static int64_t x828 = INT64_MIN;
	int32_t t171 = 5;

    t171 = (x825!=((x826+x827)!=x828));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x833 = 496045U;
	int8_t x834 = 1;
	static int64_t x835 = -1LL;
	int32_t x836 = INT32_MIN;
	int32_t t172 = -923;

    t172 = (x833!=((x834+x835)!=x836));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x837 = -1;
	int16_t x838 = INT16_MAX;
	int32_t t173 = -842453;

    t173 = (x837!=((x838+x839)!=x840));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x845 = 0;
	uint64_t x847 = 1891693LLU;
	int64_t x848 = INT64_MIN;
	static int32_t t174 = 0;

    t174 = (x845!=((x846+x847)!=x848));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x849 = 10458283U;
	static int8_t x850 = 24;
	int16_t x851 = -156;
	int32_t t175 = 234;

    t175 = (x849!=((x850+x851)!=x852));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x853 = UINT16_MAX;
	uint32_t x854 = UINT32_MAX;
	int8_t x855 = INT8_MIN;
	static int32_t x856 = INT32_MIN;
	static volatile int32_t t176 = 50154864;

    t176 = (x853!=((x854+x855)!=x856));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x857 = 6U;
	uint32_t x858 = UINT32_MAX;
	uint16_t x859 = 112U;
	static int16_t x860 = 416;

    t177 = (x857!=((x858+x859)!=x860));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x865 = INT8_MIN;
	static volatile int16_t x867 = 0;
	int8_t x868 = INT8_MAX;
	int32_t t178 = 1855921;

    t178 = (x865!=((x866+x867)!=x868));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x869 = 19408757401LLU;
	static int16_t x870 = -1;
	int8_t x871 = -30;
	static int16_t x872 = -1;

    t179 = (x869!=((x870+x871)!=x872));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x874 = INT8_MIN;
	int64_t x875 = 1611LL;
	static int32_t x876 = -1;

    t180 = (x873!=((x874+x875)!=x876));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x877 = INT8_MIN;
	static volatile int8_t x879 = -18;
	int32_t x880 = -414765;
	int32_t t181 = 45821;

    t181 = (x877!=((x878+x879)!=x880));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x881 = INT32_MAX;
	int32_t x882 = INT32_MIN;
	int8_t x883 = INT8_MAX;
	volatile uint64_t x884 = 57LLU;
	volatile int32_t t182 = -1571;

    t182 = (x881!=((x882+x883)!=x884));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x885 = UINT32_MAX;
	static uint8_t x886 = 4U;
	int32_t x887 = INT32_MIN;
	volatile uint64_t x888 = 17LLU;
	int32_t t183 = -20120;

    t183 = (x885!=((x886+x887)!=x888));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x889 = -637LL;
	volatile uint8_t x890 = 0U;
	int16_t x891 = INT16_MAX;
	volatile int64_t x892 = INT64_MAX;
	volatile int32_t t184 = 272;

    t184 = (x889!=((x890+x891)!=x892));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x893 = 1;
	volatile int64_t x894 = INT64_MIN;
	volatile int8_t x896 = -3;
	volatile int32_t t185 = -113873133;

    t185 = (x893!=((x894+x895)!=x896));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x905 = INT64_MIN;
	volatile int8_t x907 = -1;
	volatile uint16_t x908 = 7U;
	volatile int32_t t186 = 14414;

    t186 = (x905!=((x906+x907)!=x908));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x910 = 4618473LLU;
	int32_t x911 = -1;
	int32_t t187 = 0;

    t187 = (x909!=((x910+x911)!=x912));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x913 = 22U;
	int16_t x914 = -1;
	volatile uint8_t x915 = 78U;
	int8_t x916 = INT8_MIN;
	volatile int32_t t188 = -7;

    t188 = (x913!=((x914+x915)!=x916));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x917 = INT8_MAX;
	static int32_t x918 = INT32_MIN;
	uint32_t x919 = UINT32_MAX;
	static volatile uint64_t x920 = 14218LLU;
	int32_t t189 = -744;

    t189 = (x917!=((x918+x919)!=x920));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x925 = 3691984LL;
	int32_t x926 = INT32_MIN;
	int64_t x928 = INT64_MAX;
	volatile int32_t t190 = 10335979;

    t190 = (x925!=((x926+x927)!=x928));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x929 = UINT32_MAX;
	uint16_t x930 = 30764U;
	uint64_t x931 = UINT64_MAX;
	int32_t t191 = 246475816;

    t191 = (x929!=((x930+x931)!=x932));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x933 = UINT16_MAX;
	volatile int32_t x935 = INT32_MIN;
	static int16_t x936 = -859;
	volatile int32_t t192 = 0;

    t192 = (x933!=((x934+x935)!=x936));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x937 = INT16_MAX;
	int8_t x939 = -1;

    t193 = (x937!=((x938+x939)!=x940));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x942 = INT8_MAX;
	int32_t x944 = -450812;
	static volatile int32_t t194 = 64535;

    t194 = (x941!=((x942+x943)!=x944));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x950 = -29;
	volatile int16_t x952 = 669;

    t195 = (x949!=((x950+x951)!=x952));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x953 = INT32_MAX;
	static int16_t x954 = -1;
	static uint64_t x956 = 3282674983368LLU;
	static volatile int32_t t196 = 28234;

    t196 = (x953!=((x954+x955)!=x956));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x957 = -1;
	int8_t x958 = -10;
	volatile uint16_t x959 = 42U;
	int16_t x960 = INT16_MAX;
	int32_t t197 = 2359;

    t197 = (x957!=((x958+x959)!=x960));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x961 = INT8_MAX;
	static uint8_t x963 = 3U;
	volatile uint16_t x964 = 5U;
	volatile int32_t t198 = 56872856;

    t198 = (x961!=((x962+x963)!=x964));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x969 = 68259037U;
	uint32_t x970 = 3631418U;
	static int32_t t199 = -14;

    t199 = (x969!=((x970+x971)!=x972));

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

