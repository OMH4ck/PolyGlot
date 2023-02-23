
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

volatile uint32_t x8 = 234717U;
uint32_t x16 = 70370U;
uint8_t x23 = UINT8_MAX;
int32_t x24 = -424843;
volatile int32_t t4 = -7289939;
static int32_t t5 = 1;
volatile int32_t t6 = -23918;
uint32_t x38 = 7669U;
int32_t x39 = -1;
int32_t x45 = INT32_MAX;
int32_t t12 = -159499;
volatile uint16_t x62 = UINT16_MAX;
int64_t x82 = INT64_MAX;
int16_t x83 = -1;
uint8_t x96 = UINT8_MAX;
uint32_t x98 = 13295191U;
static volatile int32_t t21 = 32135718;
int32_t x112 = INT32_MAX;
int32_t x113 = INT32_MAX;
volatile int16_t x120 = -51;
static int16_t x123 = 3310;
int32_t t26 = -134830077;
int8_t x130 = INT8_MIN;
int32_t x133 = -1;
int64_t x135 = -1LL;
int8_t x138 = -30;
int32_t x141 = INT32_MIN;
static int32_t x142 = INT32_MIN;
int8_t x155 = 5;
volatile uint32_t x159 = 2U;
int8_t x160 = INT8_MIN;
volatile int64_t x163 = -4401123156LL;
int32_t t36 = 146542467;
uint64_t x171 = 11322321061LLU;
volatile int32_t x173 = INT32_MAX;
int32_t x174 = 551427378;
volatile int32_t t41 = -418030;
volatile int32_t x206 = INT32_MIN;
uint32_t x209 = 207202U;
uint8_t x213 = 49U;
int16_t x216 = -1;
int64_t x217 = INT64_MAX;
static uint32_t x218 = 8U;
volatile int32_t x226 = INT32_MIN;
uint8_t x232 = 7U;
int32_t t50 = 1247;
uint64_t x234 = 27827754724818952LLU;
volatile int64_t x235 = INT64_MIN;
int8_t x236 = 1;
static volatile int32_t t52 = -6296;
int8_t x253 = INT8_MIN;
uint64_t x256 = 93788280699LLU;
static int16_t x264 = INT16_MAX;
int32_t t57 = 4073;
volatile uint8_t x266 = UINT8_MAX;
int64_t x273 = 83701070119334LL;
static int8_t x274 = INT8_MIN;
int8_t x276 = INT8_MIN;
static int32_t t61 = -3076;
static uint16_t x290 = UINT16_MAX;
int64_t x292 = -437943LL;
static int32_t x295 = 3208298;
uint16_t x298 = UINT16_MAX;
int8_t x300 = INT8_MIN;
int32_t x304 = INT32_MIN;
static uint8_t x306 = UINT8_MAX;
uint16_t x308 = 23109U;
static volatile int32_t x312 = INT32_MIN;
int16_t x319 = -341;
volatile int32_t x320 = 96359774;
int32_t t72 = 868278954;
int8_t x329 = INT8_MAX;
uint8_t x334 = UINT8_MAX;
static int8_t x337 = -1;
uint8_t x339 = 0U;
int64_t x343 = INT64_MAX;
uint32_t x344 = 227121976U;
uint64_t x364 = 131009LLU;
int16_t x377 = -9;
static int64_t x382 = INT64_MAX;
int64_t x383 = INT64_MIN;
int8_t x384 = 1;
int64_t x389 = INT64_MAX;
static int64_t x391 = -60729LL;
int64_t x395 = -1LL;
volatile int16_t x399 = -1;
volatile uint64_t x408 = 35339691072658089LLU;
uint32_t x410 = 57945235U;
volatile int32_t t90 = -1789;
int32_t t91 = -13;
uint32_t x425 = UINT32_MAX;
static uint32_t x426 = UINT32_MAX;
volatile int8_t x433 = INT8_MIN;
int64_t x434 = -1LL;
int64_t x454 = -351327234184329LL;
int8_t x466 = INT8_MAX;
int64_t x469 = INT64_MIN;
static int64_t x472 = -1LL;
int64_t x480 = -27516925417LL;
int16_t x493 = INT16_MIN;
uint64_t x505 = 85476196183648LLU;
int64_t x519 = -44347LL;
int64_t x528 = INT64_MAX;
uint8_t x530 = 101U;
int32_t t118 = 49021;
static int8_t x542 = INT8_MAX;
static int64_t x550 = -1LL;
static uint8_t x558 = 1U;
static int8_t x559 = INT8_MIN;
volatile int64_t x560 = 4268549586708LL;
int64_t x577 = INT64_MIN;
uint32_t x581 = 15U;
volatile uint64_t x588 = 56652LLU;
uint64_t x598 = UINT64_MAX;
static volatile int32_t t132 = 250;
int16_t x605 = INT16_MIN;
uint8_t x611 = 3U;
int16_t x613 = INT16_MAX;
uint8_t x617 = 1U;
static int64_t x623 = -1LL;
int64_t x626 = INT64_MIN;
static uint8_t x627 = UINT8_MAX;
volatile int32_t t138 = 1873018;
uint64_t x630 = 34413069377019480LLU;
volatile int32_t t140 = -19;
int32_t t142 = -717426;
int32_t t143 = -152;
uint8_t x652 = 0U;
volatile int32_t t150 = 0;
volatile int32_t t151 = 15;
int16_t x687 = -1;
static volatile int64_t x701 = 449LL;
int32_t t157 = 6;
volatile int8_t x709 = 12;
uint16_t x712 = UINT16_MAX;
static int16_t x715 = 2384;
int64_t x720 = INT64_MAX;
int8_t x741 = -1;
int32_t t164 = -1879231;
int8_t x753 = INT8_MAX;
uint32_t x756 = UINT32_MAX;
uint64_t x759 = 3204276383LLU;
int16_t x761 = INT16_MIN;
int64_t x768 = INT64_MIN;
volatile int32_t t170 = -712;
static uint16_t x776 = UINT16_MAX;
static int32_t t171 = -631723588;
static int64_t x777 = 8168466375LL;
static uint8_t x778 = 29U;
int32_t t172 = -7;
static volatile int32_t x790 = INT32_MIN;
int32_t t176 = -14;
volatile uint64_t x803 = UINT64_MAX;
uint64_t x806 = 762952967319LLU;
int16_t x816 = INT16_MAX;
volatile uint8_t x819 = UINT8_MAX;
uint32_t x824 = 224354621U;
int32_t x827 = INT32_MIN;
static int16_t x829 = INT16_MAX;
int64_t x846 = INT64_MIN;
uint16_t x851 = 6U;
uint16_t x853 = 2U;
int16_t x860 = INT16_MIN;
uint32_t x861 = 109U;
volatile int32_t t191 = 1;
int16_t x869 = INT16_MIN;
uint16_t x872 = UINT16_MAX;
int32_t t196 = -1;
int8_t x889 = -1;
int8_t x890 = INT8_MIN;
volatile int8_t x891 = INT8_MIN;
volatile int16_t x893 = INT16_MIN;
uint64_t x894 = 48LLU;
static int32_t x895 = -3509026;
int8_t x897 = -1;
volatile uint8_t x900 = UINT8_MAX;


void f0(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	int64_t x6 = 1345532LL;
	static int8_t x7 = INT8_MIN;
	int32_t t0 = -11110;

    t0 = (x5<=((x6+x7)==x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x9 = -12549481;
	int8_t x10 = 6;
	volatile uint64_t x11 = 466442559530111LLU;
	int16_t x12 = -1;
	volatile int32_t t1 = -2895720;

    t1 = (x9<=((x10+x11)==x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = UINT8_MAX;
	static uint32_t x14 = UINT32_MAX;
	uint32_t x15 = 49973U;
	volatile int32_t t2 = 0;

    t2 = (x13<=((x14+x15)==x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x17 = 0U;
	int16_t x18 = 119;
	static volatile int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = 1;

    t3 = (x17<=((x18+x19)==x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = 21564181104261299LL;
	int32_t x22 = INT32_MIN;

    t4 = (x21<=((x22+x23)==x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x25 = 3961402U;
	uint16_t x26 = 38U;
	volatile int64_t x27 = -1LL;
	int8_t x28 = INT8_MAX;

    t5 = (x25<=((x26+x27)==x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	uint32_t x30 = 6269U;
	int8_t x31 = -1;
	volatile int8_t x32 = 58;

    t6 = (x29<=((x30+x31)==x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = 0;
	static int32_t x34 = INT32_MAX;
	int32_t x35 = INT32_MIN;
	volatile uint64_t x36 = 6LLU;
	int32_t t7 = -5156653;

    t7 = (x33<=((x34+x35)==x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = UINT16_MAX;
	int8_t x40 = -1;
	volatile int32_t t8 = 119663;

    t8 = (x37<=((x38+x39)==x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x46 = -5858;
	static int8_t x47 = -1;
	static int64_t x48 = INT64_MIN;
	int32_t t9 = -446;

    t9 = (x45<=((x46+x47)==x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x49 = INT32_MAX;
	uint8_t x50 = 12U;
	int8_t x51 = -1;
	uint8_t x52 = UINT8_MAX;
	int32_t t10 = 9356;

    t10 = (x49<=((x50+x51)==x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x53 = UINT8_MAX;
	uint64_t x54 = 35LLU;
	volatile int64_t x55 = -1LL;
	int8_t x56 = 6;
	volatile int32_t t11 = -1031844638;

    t11 = (x53<=((x54+x55)==x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x57 = -1;
	volatile int8_t x58 = -4;
	volatile uint8_t x59 = UINT8_MAX;
	int32_t x60 = INT32_MIN;

    t12 = (x57<=((x58+x59)==x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = -2;
	int64_t x63 = INT64_MIN;
	uint16_t x64 = 79U;
	volatile int32_t t13 = -14821;

    t13 = (x61<=((x62+x63)==x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = INT32_MIN;
	static int16_t x70 = -10203;
	volatile uint32_t x71 = 355U;
	int32_t x72 = -10567540;
	int32_t t14 = -56044374;

    t14 = (x69<=((x70+x71)==x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = INT16_MIN;
	volatile int8_t x74 = INT8_MAX;
	uint16_t x75 = UINT16_MAX;
	volatile int64_t x76 = INT64_MIN;
	volatile int32_t t15 = -7;

    t15 = (x73<=((x74+x75)==x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = 456184LLU;
	uint32_t x78 = UINT32_MAX;
	static volatile int32_t x79 = 6036;
	int8_t x80 = INT8_MIN;
	volatile int32_t t16 = -161361226;

    t16 = (x77<=((x78+x79)==x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x81 = UINT16_MAX;
	uint16_t x84 = 335U;
	volatile int32_t t17 = 50;

    t17 = (x81<=((x82+x83)==x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x89 = 62U;
	int8_t x90 = INT8_MIN;
	static uint8_t x91 = 3U;
	int16_t x92 = INT16_MIN;
	int32_t t18 = 24062331;

    t18 = (x89<=((x90+x91)==x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x93 = -1;
	static volatile int8_t x94 = -1;
	int32_t x95 = INT32_MAX;
	volatile int32_t t19 = -98039057;

    t19 = (x93<=((x94+x95)==x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = 1;
	int16_t x99 = 1;
	int32_t x100 = -2070;
	volatile int32_t t20 = -1;

    t20 = (x97<=((x98+x99)==x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x101 = 0;
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = 13813610388538980LLU;

    t21 = (x101<=((x102+x103)==x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x105 = INT32_MIN;
	uint32_t x106 = UINT32_MAX;
	volatile int64_t x107 = -1LL;
	int64_t x108 = INT64_MIN;
	int32_t t22 = -765473;

    t22 = (x105<=((x106+x107)==x108));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = 54928607;
	volatile uint16_t x110 = 2544U;
	int16_t x111 = -1;
	volatile int32_t t23 = 180139742;

    t23 = (x109<=((x110+x111)==x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x114 = INT32_MIN;
	static uint16_t x115 = UINT16_MAX;
	static uint8_t x116 = UINT8_MAX;
	volatile int32_t t24 = 47;

    t24 = (x113<=((x114+x115)==x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = 1088046604LL;
	uint8_t x118 = 19U;
	int16_t x119 = 1;
	static volatile int32_t t25 = 20663345;

    t25 = (x117<=((x118+x119)==x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x121 = 0;
	uint16_t x122 = 19U;
	int16_t x124 = INT16_MAX;

    t26 = (x121<=((x122+x123)==x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = INT8_MIN;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = -1;
	uint8_t x128 = 56U;
	static volatile int32_t t27 = 64805186;

    t27 = (x125<=((x126+x127)==x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x129 = INT16_MIN;
	uint8_t x131 = UINT8_MAX;
	int8_t x132 = -57;
	volatile int32_t t28 = -648;

    t28 = (x129<=((x130+x131)==x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x134 = -35;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t29 = -1;

    t29 = (x133<=((x134+x135)==x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = INT32_MAX;
	int32_t x139 = INT32_MAX;
	uint8_t x140 = 118U;
	static volatile int32_t t30 = 62024415;

    t30 = (x137<=((x138+x139)==x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x143 = 0;
	volatile int16_t x144 = INT16_MIN;
	int32_t t31 = -61936;

    t31 = (x141<=((x142+x143)==x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x145 = 371139U;
	int8_t x146 = INT8_MIN;
	static int16_t x147 = -602;
	uint16_t x148 = UINT16_MAX;
	int32_t t32 = 26;

    t32 = (x145<=((x146+x147)==x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x149 = -2;
	uint16_t x150 = 888U;
	uint32_t x151 = UINT32_MAX;
	static uint32_t x152 = 1637715U;
	volatile int32_t t33 = -6767746;

    t33 = (x149<=((x150+x151)==x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x153 = INT8_MAX;
	volatile int16_t x154 = INT16_MIN;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t34 = -786300810;

    t34 = (x153<=((x154+x155)==x156));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = -1;
	int64_t x158 = -6LL;
	int32_t t35 = -868;

    t35 = (x157<=((x158+x159)==x160));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x161 = 582938U;
	int64_t x162 = -1LL;
	int16_t x164 = -1;

    t36 = (x161<=((x162+x163)==x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = INT32_MIN;
	volatile uint32_t x166 = UINT32_MAX;
	volatile int32_t x167 = -1;
	int64_t x168 = INT64_MIN;
	int32_t t37 = -1;

    t37 = (x165<=((x166+x167)==x168));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x169 = -1;
	int8_t x170 = INT8_MIN;
	int64_t x172 = -1427242213LL;
	int32_t t38 = 1;

    t38 = (x169<=((x170+x171)==x172));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x175 = 5697;
	static int16_t x176 = INT16_MAX;
	volatile int32_t t39 = -4035250;

    t39 = (x173<=((x174+x175)==x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x181 = 1689LL;
	volatile int16_t x182 = INT16_MIN;
	volatile int16_t x183 = -2091;
	uint8_t x184 = 112U;
	int32_t t40 = -4576;

    t40 = (x181<=((x182+x183)==x184));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x185 = UINT64_MAX;
	int32_t x186 = 56875597;
	static volatile int32_t x187 = -3043566;
	volatile int8_t x188 = 1;

    t41 = (x185<=((x186+x187)==x188));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x189 = -1;
	uint32_t x190 = 1991827U;
	volatile int32_t x191 = INT32_MIN;
	uint64_t x192 = 24208913LLU;
	int32_t t42 = -4526109;

    t42 = (x189<=((x190+x191)==x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x193 = UINT64_MAX;
	uint16_t x194 = 7761U;
	int32_t x195 = INT32_MIN;
	int64_t x196 = INT64_MIN;
	int32_t t43 = 106;

    t43 = (x193<=((x194+x195)==x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x197 = -1;
	int32_t x198 = 821;
	uint8_t x199 = UINT8_MAX;
	static uint32_t x200 = 29091623U;
	int32_t t44 = 6893;

    t44 = (x197<=((x198+x199)==x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x205 = UINT16_MAX;
	uint32_t x207 = UINT32_MAX;
	static uint32_t x208 = 13629U;
	static int32_t t45 = -31784;

    t45 = (x205<=((x206+x207)==x208));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x210 = 41;
	int8_t x211 = -1;
	int16_t x212 = -1;
	static volatile int32_t t46 = 20645;

    t46 = (x209<=((x210+x211)==x212));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x214 = INT64_MAX;
	int8_t x215 = INT8_MIN;
	static int32_t t47 = 3812288;

    t47 = (x213<=((x214+x215)==x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x219 = INT8_MAX;
	uint16_t x220 = 31U;
	int32_t t48 = 0;

    t48 = (x217<=((x218+x219)==x220));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x225 = 449;
	uint64_t x227 = UINT64_MAX;
	uint8_t x228 = 6U;
	volatile int32_t t49 = 3110137;

    t49 = (x225<=((x226+x227)==x228));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x229 = UINT32_MAX;
	int64_t x230 = INT64_MIN;
	static uint64_t x231 = 5285775562LLU;

    t50 = (x229<=((x230+x231)==x232));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x233 = UINT32_MAX;
	static int32_t t51 = -13;

    t51 = (x233<=((x234+x235)==x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x237 = -1;
	int64_t x238 = INT64_MIN;
	uint64_t x239 = UINT64_MAX;
	uint32_t x240 = 3U;

    t52 = (x237<=((x238+x239)==x240));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = INT32_MIN;
	uint64_t x242 = 6742260124131LLU;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t53 = 52;

    t53 = (x241<=((x242+x243)==x244));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x245 = 24U;
	static uint64_t x246 = UINT64_MAX;
	volatile int32_t x247 = INT32_MIN;
	volatile uint64_t x248 = 388340412LLU;
	int32_t t54 = -606741;

    t54 = (x245<=((x246+x247)==x248));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x249 = 0;
	uint32_t x250 = 1129536U;
	static int32_t x251 = 17;
	int8_t x252 = 1;
	volatile int32_t t55 = -3;

    t55 = (x249<=((x250+x251)==x252));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x254 = INT32_MAX;
	int32_t x255 = INT32_MIN;
	volatile int32_t t56 = -925076802;

    t56 = (x253<=((x254+x255)==x256));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x261 = 3U;
	int16_t x262 = 26;
	int16_t x263 = INT16_MIN;

    t57 = (x261<=((x262+x263)==x264));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x265 = -488338;
	static int32_t x267 = -18170880;
	int32_t x268 = -1;
	int32_t t58 = 0;

    t58 = (x265<=((x266+x267)==x268));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x269 = 5U;
	uint64_t x270 = UINT64_MAX;
	volatile int8_t x271 = -1;
	static int64_t x272 = INT64_MIN;
	int32_t t59 = 1762036;

    t59 = (x269<=((x270+x271)==x272));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x275 = INT16_MIN;
	int32_t t60 = 64258;

    t60 = (x273<=((x274+x275)==x276));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x277 = 9;
	uint32_t x278 = 729283U;
	int16_t x279 = INT16_MAX;
	volatile uint8_t x280 = 3U;

    t61 = (x277<=((x278+x279)==x280));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x281 = -591;
	uint8_t x282 = UINT8_MAX;
	static volatile int64_t x283 = -25642972LL;
	uint32_t x284 = UINT32_MAX;
	int32_t t62 = 2407617;

    t62 = (x281<=((x282+x283)==x284));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x289 = INT64_MIN;
	int64_t x291 = -71710411332813LL;
	static volatile int32_t t63 = -3226163;

    t63 = (x289<=((x290+x291)==x292));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x293 = 2;
	static uint8_t x294 = 1U;
	int16_t x296 = INT16_MAX;
	static volatile int32_t t64 = 232;

    t64 = (x293<=((x294+x295)==x296));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x297 = -1LL;
	static int8_t x299 = -1;
	int32_t t65 = -86402603;

    t65 = (x297<=((x298+x299)==x300));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x301 = INT8_MAX;
	volatile uint8_t x302 = 86U;
	static int16_t x303 = -4;
	int32_t t66 = -162743;

    t66 = (x301<=((x302+x303)==x304));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x305 = 951U;
	volatile int16_t x307 = -1;
	volatile int32_t t67 = 900;

    t67 = (x305<=((x306+x307)==x308));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x309 = INT64_MIN;
	int32_t x310 = -925451271;
	static uint16_t x311 = UINT16_MAX;
	volatile int32_t t68 = 26;

    t68 = (x309<=((x310+x311)==x312));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x313 = UINT64_MAX;
	volatile int8_t x314 = INT8_MAX;
	int16_t x315 = -1;
	int64_t x316 = -1LL;
	int32_t t69 = 309;

    t69 = (x313<=((x314+x315)==x316));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x317 = 60;
	static volatile uint8_t x318 = 6U;
	int32_t t70 = -1945188;

    t70 = (x317<=((x318+x319)==x320));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x321 = -2;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MAX;
	int16_t x324 = 32;
	volatile int32_t t71 = -499195384;

    t71 = (x321<=((x322+x323)==x324));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x325 = INT8_MAX;
	int32_t x326 = INT32_MIN;
	uint8_t x327 = 94U;
	uint32_t x328 = 48204234U;

    t72 = (x325<=((x326+x327)==x328));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	int16_t x332 = 5;
	int32_t t73 = -104942;

    t73 = (x329<=((x330+x331)==x332));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x333 = 14U;
	uint16_t x335 = 3U;
	uint64_t x336 = 832269385823LLU;
	int32_t t74 = 91056;

    t74 = (x333<=((x334+x335)==x336));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x338 = -1;
	int32_t x340 = 4587929;
	int32_t t75 = 9;

    t75 = (x337<=((x338+x339)==x340));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x341 = UINT64_MAX;
	uint64_t x342 = UINT64_MAX;
	static volatile int32_t t76 = -3;

    t76 = (x341<=((x342+x343)==x344));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x345 = -8674029694143983LL;
	int8_t x346 = 1;
	volatile uint8_t x347 = 8U;
	int64_t x348 = -1LL;
	int32_t t77 = -6813;

    t77 = (x345<=((x346+x347)==x348));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x349 = UINT64_MAX;
	static int8_t x350 = -1;
	static volatile uint8_t x351 = 26U;
	int16_t x352 = INT16_MIN;
	int32_t t78 = 116;

    t78 = (x349<=((x350+x351)==x352));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x361 = 7407057355366102694LLU;
	int16_t x362 = INT16_MAX;
	volatile uint16_t x363 = UINT16_MAX;
	static int32_t t79 = -61952219;

    t79 = (x361<=((x362+x363)==x364));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x365 = 11U;
	uint32_t x366 = UINT32_MAX;
	static int32_t x367 = -9404969;
	uint16_t x368 = 1290U;
	int32_t t80 = 319;

    t80 = (x365<=((x366+x367)==x368));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x373 = 2862320U;
	uint8_t x374 = UINT8_MAX;
	volatile int64_t x375 = -1006LL;
	volatile uint16_t x376 = 3U;
	int32_t t81 = -42744829;

    t81 = (x373<=((x374+x375)==x376));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x378 = INT32_MIN;
	uint8_t x379 = 10U;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t82 = 124;

    t82 = (x377<=((x378+x379)==x380));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x381 = INT16_MIN;
	volatile int32_t t83 = 9739;

    t83 = (x381<=((x382+x383)==x384));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x385 = 30453U;
	uint64_t x386 = 4LLU;
	uint16_t x387 = 196U;
	int16_t x388 = INT16_MIN;
	int32_t t84 = -2;

    t84 = (x385<=((x386+x387)==x388));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x390 = -3LL;
	int16_t x392 = -8075;
	int32_t t85 = 0;

    t85 = (x389<=((x390+x391)==x392));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x393 = UINT32_MAX;
	static int16_t x394 = INT16_MAX;
	int32_t x396 = INT32_MAX;
	volatile int32_t t86 = -955916;

    t86 = (x393<=((x394+x395)==x396));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x397 = 11233;
	uint16_t x398 = UINT16_MAX;
	static volatile int32_t x400 = 770368;
	static int32_t t87 = 0;

    t87 = (x397<=((x398+x399)==x400));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x405 = -222;
	volatile uint8_t x406 = 12U;
	uint8_t x407 = UINT8_MAX;
	volatile int32_t t88 = -10943077;

    t88 = (x405<=((x406+x407)==x408));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x409 = -6679220028757353LL;
	static uint32_t x411 = 2367U;
	volatile uint32_t x412 = 6623248U;
	static int32_t t89 = -15665;

    t89 = (x409<=((x410+x411)==x412));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x413 = INT32_MAX;
	volatile int8_t x414 = -57;
	uint32_t x415 = UINT32_MAX;
	int8_t x416 = INT8_MIN;

    t90 = (x413<=((x414+x415)==x416));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x417 = INT16_MAX;
	int32_t x418 = -2013108;
	volatile uint8_t x419 = 18U;
	int16_t x420 = INT16_MAX;

    t91 = (x417<=((x418+x419)==x420));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x421 = -179895916434LL;
	static int16_t x422 = INT16_MIN;
	int8_t x423 = -24;
	int8_t x424 = 0;
	static volatile int32_t t92 = 84615;

    t92 = (x421<=((x422+x423)==x424));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x427 = -1LL;
	int8_t x428 = INT8_MAX;
	int32_t t93 = -1806182;

    t93 = (x425<=((x426+x427)==x428));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x429 = INT32_MIN;
	uint32_t x430 = 6U;
	int64_t x431 = INT64_MIN;
	int64_t x432 = INT64_MAX;
	int32_t t94 = 2390;

    t94 = (x429<=((x430+x431)==x432));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x435 = -1;
	uint8_t x436 = 105U;
	static int32_t t95 = -239818;

    t95 = (x433<=((x434+x435)==x436));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x437 = 5225;
	static uint64_t x438 = 297573303846LLU;
	volatile int8_t x439 = 24;
	int8_t x440 = -11;
	volatile int32_t t96 = 4;

    t96 = (x437<=((x438+x439)==x440));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x441 = 78;
	volatile int8_t x442 = INT8_MIN;
	uint16_t x443 = 1487U;
	int64_t x444 = 7593340611133263LL;
	int32_t t97 = 11340615;

    t97 = (x441<=((x442+x443)==x444));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x445 = 2U;
	int64_t x446 = -427531043503LL;
	int64_t x447 = -1LL;
	int64_t x448 = 16853555LL;
	int32_t t98 = 1;

    t98 = (x445<=((x446+x447)==x448));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x453 = INT64_MIN;
	int8_t x455 = INT8_MAX;
	static volatile uint64_t x456 = 10697764363LLU;
	volatile int32_t t99 = -29399;

    t99 = (x453<=((x454+x455)==x456));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x457 = UINT32_MAX;
	static int64_t x458 = -1LL;
	int8_t x459 = INT8_MIN;
	static int8_t x460 = INT8_MIN;
	int32_t t100 = 29;

    t100 = (x457<=((x458+x459)==x460));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x465 = INT8_MIN;
	uint8_t x467 = 105U;
	uint64_t x468 = UINT64_MAX;
	int32_t t101 = 16593874;

    t101 = (x465<=((x466+x467)==x468));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x470 = INT64_MAX;
	int16_t x471 = -1;
	volatile int32_t t102 = 184374710;

    t102 = (x469<=((x470+x471)==x472));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x473 = UINT8_MAX;
	static uint16_t x474 = UINT16_MAX;
	volatile int64_t x475 = -1LL;
	int64_t x476 = -1LL;
	static int32_t t103 = 255287065;

    t103 = (x473<=((x474+x475)==x476));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x477 = INT16_MIN;
	volatile int8_t x478 = INT8_MAX;
	int8_t x479 = INT8_MIN;
	static int32_t t104 = -126047312;

    t104 = (x477<=((x478+x479)==x480));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x485 = INT16_MIN;
	int8_t x486 = -3;
	uint8_t x487 = 12U;
	static int64_t x488 = INT64_MIN;
	int32_t t105 = 15151669;

    t105 = (x485<=((x486+x487)==x488));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x489 = 1;
	uint8_t x490 = UINT8_MAX;
	uint64_t x491 = 12988425021804913LLU;
	int32_t x492 = 3594204;
	static volatile int32_t t106 = 29;

    t106 = (x489<=((x490+x491)==x492));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x494 = 7950315536205LL;
	static int64_t x495 = -1LL;
	volatile int32_t x496 = INT32_MAX;
	volatile int32_t t107 = 993;

    t107 = (x493<=((x494+x495)==x496));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x497 = INT64_MAX;
	int8_t x498 = 0;
	static int8_t x499 = INT8_MIN;
	volatile int16_t x500 = -1;
	int32_t t108 = 1426557;

    t108 = (x497<=((x498+x499)==x500));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x501 = 40U;
	static uint8_t x502 = 6U;
	int32_t x503 = 27359998;
	volatile int8_t x504 = 1;
	int32_t t109 = -4532;

    t109 = (x501<=((x502+x503)==x504));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x506 = 501976;
	int32_t x507 = -1;
	volatile uint8_t x508 = 81U;
	int32_t t110 = -115;

    t110 = (x505<=((x506+x507)==x508));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x509 = -1;
	uint8_t x510 = 7U;
	int32_t x511 = INT32_MIN;
	int32_t x512 = 74062;
	int32_t t111 = 25;

    t111 = (x509<=((x510+x511)==x512));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x513 = -414329171237374381LL;
	int32_t x514 = 1;
	int8_t x515 = -1;
	volatile int32_t x516 = -1;
	int32_t t112 = -130332314;

    t112 = (x513<=((x514+x515)==x516));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x517 = 1U;
	volatile int16_t x518 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	volatile int32_t t113 = -121601174;

    t113 = (x517<=((x518+x519)==x520));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x521 = INT64_MAX;
	uint8_t x522 = 2U;
	uint32_t x523 = UINT32_MAX;
	static int16_t x524 = -1;
	static int32_t t114 = 87592324;

    t114 = (x521<=((x522+x523)==x524));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x525 = 1106396239452LL;
	int32_t x526 = -1;
	uint32_t x527 = UINT32_MAX;
	volatile int32_t t115 = 526367;

    t115 = (x525<=((x526+x527)==x528));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x529 = 1084006LL;
	int8_t x531 = -1;
	volatile uint64_t x532 = 495260708217LLU;
	volatile int32_t t116 = 1;

    t116 = (x529<=((x530+x531)==x532));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x533 = 2263905;
	int32_t x534 = INT32_MIN;
	volatile uint64_t x535 = 50515599LLU;
	static int16_t x536 = -291;
	int32_t t117 = -1;

    t117 = (x533<=((x534+x535)==x536));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x537 = -2219LL;
	int64_t x538 = -3146955796LL;
	uint16_t x539 = UINT16_MAX;
	volatile uint8_t x540 = UINT8_MAX;

    t118 = (x537<=((x538+x539)==x540));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x541 = 31;
	int8_t x543 = INT8_MAX;
	volatile uint16_t x544 = 0U;
	volatile int32_t t119 = 1;

    t119 = (x541<=((x542+x543)==x544));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x545 = 2795U;
	int8_t x546 = INT8_MAX;
	uint16_t x547 = UINT16_MAX;
	int8_t x548 = -1;
	volatile int32_t t120 = -936222306;

    t120 = (x545<=((x546+x547)==x548));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x549 = INT8_MIN;
	static volatile int32_t x551 = 496104106;
	uint8_t x552 = 28U;
	int32_t t121 = -42924;

    t121 = (x549<=((x550+x551)==x552));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x557 = UINT16_MAX;
	volatile int32_t t122 = -35282;

    t122 = (x557<=((x558+x559)==x560));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int32_t x561 = -1;
	int16_t x562 = -438;
	uint16_t x563 = 197U;
	static int16_t x564 = INT16_MIN;
	static volatile int32_t t123 = -1092;

    t123 = (x561<=((x562+x563)==x564));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x569 = 33U;
	uint64_t x570 = UINT64_MAX;
	uint16_t x571 = 27U;
	int64_t x572 = INT64_MIN;
	volatile int32_t t124 = 749636245;

    t124 = (x569<=((x570+x571)==x572));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x573 = 12;
	static int32_t x574 = -1;
	int32_t x575 = -254581872;
	uint32_t x576 = 239244021U;
	int32_t t125 = 0;

    t125 = (x573<=((x574+x575)==x576));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x578 = 1;
	uint8_t x579 = 1U;
	uint16_t x580 = 5166U;
	volatile int32_t t126 = -85834598;

    t126 = (x577<=((x578+x579)==x580));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x582 = -1LL;
	int64_t x583 = -4597018LL;
	int64_t x584 = -3944475227139419448LL;
	int32_t t127 = 848937;

    t127 = (x581<=((x582+x583)==x584));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x585 = INT8_MIN;
	int64_t x586 = INT64_MAX;
	static int32_t x587 = -1;
	volatile int32_t t128 = 1795;

    t128 = (x585<=((x586+x587)==x588));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x589 = UINT16_MAX;
	volatile uint16_t x590 = 828U;
	volatile int64_t x591 = INT64_MIN;
	static int16_t x592 = INT16_MIN;
	static volatile int32_t t129 = -787784;

    t129 = (x589<=((x590+x591)==x592));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x593 = -1;
	int16_t x594 = INT16_MAX;
	int8_t x595 = INT8_MIN;
	static int16_t x596 = INT16_MIN;
	int32_t t130 = 1;

    t130 = (x593<=((x594+x595)==x596));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x597 = -809836971;
	static int64_t x599 = -2266570LL;
	static int64_t x600 = INT64_MIN;
	volatile int32_t t131 = 2;

    t131 = (x597<=((x598+x599)==x600));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x601 = 11;
	uint32_t x602 = UINT32_MAX;
	int8_t x603 = 12;
	static volatile int16_t x604 = -1;

    t132 = (x601<=((x602+x603)==x604));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x606 = 1071631U;
	uint32_t x607 = 5U;
	uint16_t x608 = 53U;
	int32_t t133 = 3486;

    t133 = (x605<=((x606+x607)==x608));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x609 = 2LLU;
	uint64_t x610 = UINT64_MAX;
	volatile int32_t x612 = 32514;
	int32_t t134 = -930952934;

    t134 = (x609<=((x610+x611)==x612));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x614 = INT8_MAX;
	int8_t x615 = INT8_MIN;
	int16_t x616 = -74;
	volatile int32_t t135 = -128731973;

    t135 = (x613<=((x614+x615)==x616));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x618 = 116LLU;
	uint8_t x619 = 4U;
	int16_t x620 = INT16_MIN;
	int32_t t136 = -8667751;

    t136 = (x617<=((x618+x619)==x620));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x621 = INT8_MAX;
	static volatile int8_t x622 = 2;
	int8_t x624 = INT8_MAX;
	static volatile int32_t t137 = -85;

    t137 = (x621<=((x622+x623)==x624));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x625 = UINT32_MAX;
	static uint8_t x628 = 19U;

    t138 = (x625<=((x626+x627)==x628));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x629 = 6U;
	uint64_t x631 = UINT64_MAX;
	uint16_t x632 = 3U;
	int32_t t139 = 337;

    t139 = (x629<=((x630+x631)==x632));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x633 = 127LLU;
	uint16_t x634 = 2U;
	int8_t x635 = INT8_MIN;
	volatile int8_t x636 = INT8_MIN;

    t140 = (x633<=((x634+x635)==x636));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x637 = 6U;
	static int8_t x638 = INT8_MIN;
	int8_t x639 = -2;
	volatile uint64_t x640 = UINT64_MAX;
	volatile int32_t t141 = -5;

    t141 = (x637<=((x638+x639)==x640));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x641 = INT64_MIN;
	int16_t x642 = INT16_MIN;
	int32_t x643 = 10424856;
	int64_t x644 = -3LL;

    t142 = (x641<=((x642+x643)==x644));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x645 = INT16_MIN;
	int32_t x646 = INT32_MIN;
	uint8_t x647 = UINT8_MAX;
	int8_t x648 = 0;

    t143 = (x645<=((x646+x647)==x648));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x649 = 7870U;
	int8_t x650 = INT8_MIN;
	int8_t x651 = 23;
	static int32_t t144 = 645001922;

    t144 = (x649<=((x650+x651)==x652));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x653 = 1;
	int32_t x654 = INT32_MIN;
	static uint8_t x655 = 69U;
	uint8_t x656 = 1U;
	static int32_t t145 = 204;

    t145 = (x653<=((x654+x655)==x656));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x657 = 0;
	int32_t x658 = 1012;
	int64_t x659 = -4498026199277LL;
	int32_t x660 = INT32_MIN;
	int32_t t146 = -62;

    t146 = (x657<=((x658+x659)==x660));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x661 = INT16_MAX;
	int32_t x662 = INT32_MIN;
	int16_t x663 = INT16_MAX;
	volatile uint16_t x664 = 6464U;
	static int32_t t147 = -28519;

    t147 = (x661<=((x662+x663)==x664));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x665 = INT32_MAX;
	int32_t x666 = -56418858;
	int8_t x667 = -5;
	static int32_t x668 = INT32_MIN;
	int32_t t148 = 493419856;

    t148 = (x665<=((x666+x667)==x668));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x669 = 5394072U;
	uint32_t x670 = UINT32_MAX;
	uint16_t x671 = UINT16_MAX;
	int16_t x672 = INT16_MIN;
	int32_t t149 = 105896;

    t149 = (x669<=((x670+x671)==x672));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x677 = 14319U;
	static int32_t x678 = 1;
	uint16_t x679 = UINT16_MAX;
	static uint8_t x680 = 9U;

    t150 = (x677<=((x678+x679)==x680));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x681 = 1U;
	int16_t x682 = INT16_MAX;
	static int8_t x683 = 2;
	uint32_t x684 = 240454U;

    t151 = (x681<=((x682+x683)==x684));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x685 = INT8_MAX;
	int8_t x686 = -1;
	int32_t x688 = INT32_MIN;
	volatile int32_t t152 = 0;

    t152 = (x685<=((x686+x687)==x688));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x689 = -1;
	int16_t x690 = 51;
	volatile uint32_t x691 = UINT32_MAX;
	int8_t x692 = -51;
	int32_t t153 = -2858356;

    t153 = (x689<=((x690+x691)==x692));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x693 = 267575668463LLU;
	static uint8_t x694 = UINT8_MAX;
	volatile int64_t x695 = -2919857LL;
	int16_t x696 = -1;
	volatile int32_t t154 = 1422;

    t154 = (x693<=((x694+x695)==x696));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x697 = -1;
	volatile int32_t x698 = 2355177;
	int8_t x699 = -1;
	volatile int64_t x700 = 1LL;
	volatile int32_t t155 = 1089484;

    t155 = (x697<=((x698+x699)==x700));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x702 = INT8_MIN;
	uint16_t x703 = 863U;
	uint16_t x704 = UINT16_MAX;
	int32_t t156 = -135;

    t156 = (x701<=((x702+x703)==x704));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x705 = INT16_MAX;
	int32_t x706 = INT32_MIN;
	static uint64_t x707 = UINT64_MAX;
	static int32_t x708 = -1;

    t157 = (x705<=((x706+x707)==x708));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x710 = INT32_MAX;
	volatile int64_t x711 = -1LL;
	volatile int32_t t158 = -5144;

    t158 = (x709<=((x710+x711)==x712));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x713 = INT16_MAX;
	int64_t x714 = 3225038531291531844LL;
	uint32_t x716 = 33017692U;
	int32_t t159 = -32641;

    t159 = (x713<=((x714+x715)==x716));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x717 = 196104231945308035LL;
	uint64_t x718 = 157514071813035821LLU;
	volatile int64_t x719 = -1LL;
	int32_t t160 = 1242;

    t160 = (x717<=((x718+x719)==x720));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint32_t x721 = 1002176667U;
	int16_t x722 = -996;
	uint64_t x723 = 34174910916LLU;
	volatile int16_t x724 = INT16_MAX;
	static volatile int32_t t161 = 1533641;

    t161 = (x721<=((x722+x723)==x724));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x729 = -1LL;
	int8_t x730 = INT8_MAX;
	uint64_t x731 = 84860497237LLU;
	int64_t x732 = INT64_MAX;
	static int32_t t162 = -230460573;

    t162 = (x729<=((x730+x731)==x732));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x733 = INT32_MIN;
	int8_t x734 = INT8_MIN;
	static int16_t x735 = 2817;
	uint64_t x736 = 1755231592633LLU;
	int32_t t163 = 2151239;

    t163 = (x733<=((x734+x735)==x736));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x742 = 103U;
	static volatile uint8_t x743 = UINT8_MAX;
	int64_t x744 = INT64_MIN;

    t164 = (x741<=((x742+x743)==x744));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x745 = INT16_MIN;
	volatile int16_t x746 = INT16_MIN;
	volatile uint64_t x747 = UINT64_MAX;
	uint64_t x748 = 648215908LLU;
	volatile int32_t t165 = -305722906;

    t165 = (x745<=((x746+x747)==x748));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x754 = 13485U;
	int16_t x755 = INT16_MIN;
	static int32_t t166 = -247473;

    t166 = (x753<=((x754+x755)==x756));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x757 = 0;
	int64_t x758 = 125751LL;
	volatile uint32_t x760 = UINT32_MAX;
	static volatile int32_t t167 = -133;

    t167 = (x757<=((x758+x759)==x760));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x762 = -1LL;
	volatile int8_t x763 = -1;
	int16_t x764 = 5601;
	volatile int32_t t168 = 472260304;

    t168 = (x761<=((x762+x763)==x764));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x765 = UINT64_MAX;
	int16_t x766 = -2;
	int16_t x767 = INT16_MIN;
	int32_t t169 = -13;

    t169 = (x765<=((x766+x767)==x768));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x769 = 11417U;
	static uint16_t x770 = 6285U;
	int64_t x771 = 26714277989531LL;
	int64_t x772 = -1LL;

    t170 = (x769<=((x770+x771)==x772));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x773 = INT16_MIN;
	int8_t x774 = 11;
	static uint64_t x775 = 6046LLU;

    t171 = (x773<=((x774+x775)==x776));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x779 = 1;
	int16_t x780 = -3;

    t172 = (x777<=((x778+x779)==x780));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x781 = UINT16_MAX;
	int64_t x782 = -12019345352486752LL;
	int64_t x783 = -5907LL;
	uint64_t x784 = UINT64_MAX;
	static int32_t t173 = 1;

    t173 = (x781<=((x782+x783)==x784));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x785 = INT8_MIN;
	static uint16_t x786 = 1787U;
	int8_t x787 = 0;
	int32_t x788 = 6;
	int32_t t174 = 27205;

    t174 = (x785<=((x786+x787)==x788));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x789 = 184U;
	uint16_t x791 = UINT16_MAX;
	uint8_t x792 = 15U;
	int32_t t175 = -19610820;

    t175 = (x789<=((x790+x791)==x792));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x793 = UINT8_MAX;
	uint64_t x794 = UINT64_MAX;
	static int16_t x795 = 8;
	volatile int64_t x796 = -11LL;

    t176 = (x793<=((x794+x795)==x796));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x797 = -56822887;
	int32_t x798 = -1;
	volatile uint64_t x799 = 3177LLU;
	volatile int64_t x800 = INT64_MIN;
	volatile int32_t t177 = -745435;

    t177 = (x797<=((x798+x799)==x800));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x801 = 326;
	volatile uint32_t x802 = UINT32_MAX;
	static volatile int64_t x804 = 13752LL;
	volatile int32_t t178 = -95;

    t178 = (x801<=((x802+x803)==x804));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x805 = UINT8_MAX;
	int32_t x807 = INT32_MAX;
	int32_t x808 = INT32_MIN;
	static int32_t t179 = -3;

    t179 = (x805<=((x806+x807)==x808));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x813 = 11526688LL;
	static int8_t x814 = INT8_MIN;
	uint16_t x815 = UINT16_MAX;
	static int32_t t180 = -393172647;

    t180 = (x813<=((x814+x815)==x816));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x817 = INT64_MAX;
	int8_t x818 = -1;
	volatile int64_t x820 = -1LL;
	int32_t t181 = 248275076;

    t181 = (x817<=((x818+x819)==x820));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x821 = INT8_MAX;
	static uint32_t x822 = UINT32_MAX;
	int16_t x823 = INT16_MAX;
	volatile int32_t t182 = 1;

    t182 = (x821<=((x822+x823)==x824));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x825 = INT64_MIN;
	static volatile uint32_t x826 = UINT32_MAX;
	int64_t x828 = 7111LL;
	int32_t t183 = 1257485;

    t183 = (x825<=((x826+x827)==x828));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x830 = 4U;
	int16_t x831 = INT16_MIN;
	uint8_t x832 = UINT8_MAX;
	static volatile int32_t t184 = 172163621;

    t184 = (x829<=((x830+x831)==x832));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x837 = 121;
	int64_t x838 = INT64_MAX;
	int8_t x839 = -28;
	uint8_t x840 = UINT8_MAX;
	int32_t t185 = -291;

    t185 = (x837<=((x838+x839)==x840));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x845 = -4007LL;
	uint16_t x847 = 28U;
	int16_t x848 = INT16_MIN;
	static int32_t t186 = 111;

    t186 = (x845<=((x846+x847)==x848));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x849 = 32986LL;
	int32_t x850 = -35;
	volatile uint16_t x852 = 16U;
	static int32_t t187 = 916542116;

    t187 = (x849<=((x850+x851)==x852));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x854 = -2203030996074745272LL;
	int32_t x855 = 0;
	uint8_t x856 = 9U;
	int32_t t188 = -78;

    t188 = (x853<=((x854+x855)==x856));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x857 = INT64_MIN;
	static int16_t x858 = -1;
	volatile uint64_t x859 = 8453415995819LLU;
	volatile int32_t t189 = -27540;

    t189 = (x857<=((x858+x859)==x860));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x862 = INT64_MAX;
	static int32_t x863 = INT32_MIN;
	uint8_t x864 = 33U;
	volatile int32_t t190 = 129;

    t190 = (x861<=((x862+x863)==x864));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x865 = UINT32_MAX;
	uint64_t x866 = UINT64_MAX;
	uint64_t x867 = 554617351408LLU;
	int16_t x868 = INT16_MIN;

    t191 = (x865<=((x866+x867)==x868));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x870 = UINT8_MAX;
	int8_t x871 = -1;
	volatile int32_t t192 = 1;

    t192 = (x869<=((x870+x871)==x872));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x873 = INT32_MIN;
	int64_t x874 = -1LL;
	int32_t x875 = 2;
	int32_t x876 = INT32_MIN;
	int32_t t193 = 27;

    t193 = (x873<=((x874+x875)==x876));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x877 = INT64_MAX;
	static int16_t x878 = INT16_MAX;
	int8_t x879 = INT8_MIN;
	int16_t x880 = 1371;
	volatile int32_t t194 = -3;

    t194 = (x877<=((x878+x879)==x880));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x881 = 442798U;
	uint8_t x882 = 36U;
	int8_t x883 = INT8_MIN;
	int32_t x884 = INT32_MAX;
	int32_t t195 = -961472775;

    t195 = (x881<=((x882+x883)==x884));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x885 = INT64_MAX;
	volatile uint8_t x886 = UINT8_MAX;
	uint64_t x887 = 2376146709LLU;
	uint32_t x888 = UINT32_MAX;

    t196 = (x885<=((x886+x887)==x888));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x892 = -4LL;
	static int32_t t197 = 17516531;

    t197 = (x889<=((x890+x891)==x892));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x896 = 1U;
	int32_t t198 = 247200072;

    t198 = (x893<=((x894+x895)==x896));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x898 = -3;
	uint64_t x899 = UINT64_MAX;
	volatile int32_t t199 = 19583428;

    t199 = (x897<=((x898+x899)==x900));

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

