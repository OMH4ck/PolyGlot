
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

int64_t x1 = 3199786112LL;
uint32_t x4 = 1784U;
int64_t x5 = 1507327041LL;
int32_t t1 = -2208;
int16_t x9 = 16203;
int16_t x13 = INT16_MIN;
volatile int8_t x16 = INT8_MIN;
volatile uint64_t x21 = 849083997048668LLU;
static int64_t x25 = INT64_MIN;
volatile int64_t x26 = -130676637906916LL;
uint8_t x29 = 8U;
int32_t x30 = INT32_MIN;
int64_t x32 = 1031782460355392LL;
volatile int32_t t7 = 745;
static int16_t x34 = 3;
int32_t x35 = -1;
static int16_t x36 = INT16_MIN;
int32_t t9 = 157814584;
int32_t x42 = INT32_MAX;
int16_t x56 = -1;
volatile int32_t t12 = 1;
static uint64_t x58 = UINT64_MAX;
volatile int32_t t13 = 10094;
int64_t x62 = 483822LL;
volatile int32_t t14 = 900968217;
static int16_t x72 = INT16_MIN;
int64_t x80 = -682LL;
static volatile int64_t x85 = INT64_MAX;
static int16_t x88 = INT16_MAX;
int32_t t20 = -586;
volatile int16_t x90 = INT16_MAX;
static int32_t t21 = 64774806;
int64_t x94 = INT64_MIN;
volatile uint64_t x95 = UINT64_MAX;
static volatile int32_t t22 = -507;
volatile int32_t t23 = 143;
int16_t x101 = INT16_MIN;
volatile int32_t t24 = -1012723715;
volatile uint32_t x106 = 6U;
static uint16_t x107 = 860U;
static volatile int8_t x108 = -1;
static volatile int32_t t25 = 200168;
int64_t x110 = -1LL;
int8_t x111 = INT8_MAX;
int16_t x112 = INT16_MAX;
static uint32_t x113 = UINT32_MAX;
int64_t x115 = -16054LL;
volatile int16_t x119 = INT16_MAX;
static int16_t x122 = INT16_MIN;
volatile int64_t x124 = -1LL;
static uint64_t x127 = 447452839026602962LLU;
uint64_t x141 = 9855765107110175LLU;
int32_t t34 = 24194133;
volatile uint32_t x145 = 763157U;
int32_t x147 = INT32_MIN;
static volatile int64_t x151 = -1LL;
static uint32_t x166 = 293657U;
volatile int32_t x171 = 1;
int32_t t42 = -169;
uint8_t x182 = 2U;
static int8_t x188 = 1;
static volatile int8_t x193 = INT8_MIN;
int64_t x196 = INT64_MAX;
volatile int32_t t46 = 1453;
volatile int32_t x200 = INT32_MAX;
static volatile int32_t t47 = 138713193;
uint32_t x201 = UINT32_MAX;
static uint16_t x203 = 8725U;
int16_t x206 = 1;
int16_t x209 = INT16_MIN;
int8_t x211 = INT8_MIN;
uint64_t x213 = 167LLU;
static int32_t x218 = INT32_MAX;
volatile int64_t x219 = INT64_MIN;
static int64_t x222 = INT64_MIN;
static uint8_t x223 = 37U;
int32_t t53 = 11246294;
int32_t x235 = -1;
uint32_t x238 = 13790516U;
int16_t x241 = INT16_MIN;
uint32_t x244 = 94737U;
volatile int8_t x255 = INT8_MIN;
static volatile uint32_t x259 = UINT32_MAX;
int8_t x261 = INT8_MIN;
static volatile int32_t t63 = 0;
static int8_t x271 = -3;
int8_t x283 = 51;
int64_t x286 = -11657446LL;
static int16_t x287 = INT16_MAX;
volatile int32_t t69 = 8035;
uint32_t x295 = 55U;
int64_t x308 = -1LL;
uint64_t x309 = 30358866300166569LLU;
int32_t t75 = 109011188;
int64_t x315 = INT64_MAX;
int32_t t76 = 13151;
volatile uint64_t x318 = 231421LLU;
volatile int32_t t77 = -84538360;
int64_t x323 = -8LL;
volatile uint8_t x332 = 6U;
int32_t t80 = 251978;
static volatile int16_t x338 = -7118;
int32_t x340 = 17;
volatile int32_t t81 = -102250986;
volatile int8_t x341 = -22;
int8_t x343 = INT8_MAX;
volatile int32_t x346 = -1;
static int32_t t83 = -925;
int64_t x357 = -1LL;
int32_t x360 = INT32_MAX;
static int32_t x361 = 0;
uint16_t x362 = 0U;
volatile int32_t t87 = 180049;
volatile int32_t t88 = 1353;
volatile uint8_t x390 = 3U;
uint64_t x392 = 3209LLU;
int32_t t92 = 3;
volatile uint64_t x394 = 247963639066937LLU;
volatile int32_t t94 = -31;
static uint64_t x409 = UINT64_MAX;
static volatile int32_t t97 = -464622;
int16_t x423 = 16358;
int8_t x428 = 26;
volatile int32_t t103 = 1009;
volatile int32_t x440 = -12414084;
volatile int16_t x442 = -7;
uint64_t x443 = UINT64_MAX;
static uint32_t x449 = 10155U;
uint8_t x452 = 1U;
int32_t t108 = -9;
uint8_t x457 = 3U;
int32_t x462 = INT32_MAX;
int16_t x472 = 3985;
static int32_t t112 = 1933774;
int16_t x476 = 3829;
uint16_t x477 = UINT16_MAX;
volatile int16_t x479 = INT16_MIN;
int64_t x488 = INT64_MAX;
int16_t x491 = INT16_MIN;
int8_t x493 = -1;
uint8_t x495 = 2U;
volatile int64_t x496 = 209LL;
volatile int32_t t118 = -977144636;
int8_t x504 = -1;
static int32_t t119 = -1506133;
static int32_t t120 = 0;
uint64_t x512 = UINT64_MAX;
volatile int32_t t121 = 38;
int64_t x515 = INT64_MIN;
static int32_t x517 = INT32_MIN;
uint16_t x518 = UINT16_MAX;
static uint16_t x520 = 1399U;
int32_t t123 = 8032123;
int16_t x524 = INT16_MIN;
uint16_t x528 = 124U;
static int32_t t125 = 3797;
int32_t x530 = 3;
static int32_t t127 = -349730;
int16_t x547 = INT16_MAX;
static int64_t x554 = INT64_MIN;
volatile uint64_t x558 = 12693184LLU;
uint16_t x559 = UINT16_MAX;
static uint64_t x572 = UINT64_MAX;
int16_t x574 = 51;
int16_t x575 = 563;
volatile int16_t x591 = -7530;
volatile int32_t t141 = 47;
int64_t x600 = 18453120097969146LL;
uint64_t x603 = 36306752252808004LLU;
volatile uint8_t x606 = 0U;
static int32_t x607 = 4;
int16_t x611 = 4;
int16_t x627 = INT16_MIN;
static volatile uint16_t x629 = 26563U;
int8_t x639 = -1;
uint64_t x643 = 75470509718479094LLU;
uint16_t x648 = UINT16_MAX;
int32_t x650 = INT32_MAX;
volatile uint16_t x653 = 6998U;
int8_t x662 = INT8_MIN;
volatile int32_t t158 = 4;
int32_t t159 = 1338;
volatile uint64_t x676 = UINT64_MAX;
volatile int64_t x680 = INT64_MIN;
int32_t t162 = -51359378;
int8_t x686 = INT8_MIN;
int32_t t164 = -6736704;
static uint64_t x694 = UINT64_MAX;
volatile int32_t t165 = -29;
volatile uint8_t x701 = UINT8_MAX;
static uint32_t x708 = 14082517U;
int32_t x710 = INT32_MIN;
int64_t x711 = INT64_MIN;
int8_t x722 = 7;
int64_t x724 = INT64_MAX;
static int32_t t172 = -874717;
int32_t x731 = -1;
int64_t x732 = INT64_MIN;
static int16_t x733 = 11273;
volatile int32_t t175 = 533;
volatile uint8_t x746 = UINT8_MAX;
static int32_t x749 = INT32_MAX;
int32_t x750 = INT32_MAX;
int32_t t179 = 1212439;
volatile int32_t t181 = -8;
int8_t x765 = INT8_MIN;
int8_t x773 = 1;
int32_t t184 = 1;
int64_t x781 = INT64_MAX;
int32_t x784 = -1;
static volatile int8_t x803 = 34;
uint64_t x804 = 310635LLU;
uint32_t x806 = 10368177U;
volatile int32_t x808 = -1;
int16_t x812 = 2;
static int64_t x821 = INT64_MIN;
int32_t x827 = -222310809;
int8_t x828 = INT8_MAX;
static volatile int32_t t196 = -378686;
static int32_t t197 = -1876953;
volatile int8_t x833 = -1;
int16_t x835 = -1;
int8_t x837 = 6;


void f0(void) {
    	int16_t x2 = INT16_MAX;
	int16_t x3 = -1;
	volatile int32_t t0 = 4731;

    t0 = (x1!=((x2%x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -1LL;
	uint32_t x7 = UINT32_MAX;
	uint64_t x8 = 12803LLU;

    t1 = (x5!=((x6%x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 3128904LLU;
	int8_t x11 = -2;
	uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = 849;

    t2 = (x9!=((x10%x11)%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = 29;
	static int32_t x15 = 13343757;
	int32_t t3 = 79748514;

    t3 = (x13!=((x14%x15)%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int16_t x18 = -1;
	volatile uint8_t x19 = 55U;
	int16_t x20 = INT16_MAX;
	static int32_t t4 = -399690;

    t4 = (x17!=((x18%x19)%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x22 = 76283466577707963LL;
	static int8_t x23 = INT8_MIN;
	uint8_t x24 = 120U;
	volatile int32_t t5 = -305408257;

    t5 = (x21!=((x22%x23)%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x27 = -1LL;
	int64_t x28 = INT64_MIN;
	int32_t t6 = 13844729;

    t6 = (x25!=((x26%x27)%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x31 = INT32_MIN;

    t7 = (x29!=((x30%x31)%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = -5;
	volatile int32_t t8 = -16;

    t8 = (x33!=((x34%x35)%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = UINT16_MAX;
	int16_t x38 = INT16_MIN;
	volatile uint8_t x39 = 13U;
	volatile int64_t x40 = -58640844069604LL;

    t9 = (x37!=((x38%x39)%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	int16_t x43 = INT16_MIN;
	volatile uint64_t x44 = UINT64_MAX;
	volatile int32_t t10 = -7169;

    t10 = (x41!=((x42%x43)%x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = 83134U;
	int64_t x46 = -1LL;
	volatile int32_t x47 = INT32_MIN;
	static int16_t x48 = -8;
	int32_t t11 = 2579;

    t11 = (x45!=((x46%x47)%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MIN;
	uint16_t x54 = 321U;
	volatile int16_t x55 = INT16_MIN;

    t12 = (x53!=((x54%x55)%x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MAX;
	static int64_t x59 = -1LL;
	static int64_t x60 = INT64_MIN;

    t13 = (x57!=((x58%x59)%x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MIN;
	volatile int32_t x63 = -30;
	int64_t x64 = -1LL;

    t14 = (x61!=((x62%x63)%x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = 5;
	static int64_t x66 = 478000354LL;
	volatile int64_t x67 = 2940019292302LL;
	uint8_t x68 = UINT8_MAX;
	int32_t t15 = -447874;

    t15 = (x65!=((x66%x67)%x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = 42137U;
	uint64_t x70 = 15462LLU;
	int64_t x71 = -5830LL;
	int32_t t16 = 5;

    t16 = (x69!=((x70%x71)%x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = 6958;
	volatile int32_t x74 = -87465;
	int8_t x75 = INT8_MIN;
	int8_t x76 = -3;
	int32_t t17 = 11;

    t17 = (x73!=((x74%x75)%x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MAX;
	uint32_t x78 = 23960U;
	volatile int16_t x79 = -25;
	volatile int32_t t18 = -336;

    t18 = (x77!=((x78%x79)%x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = UINT32_MAX;
	int32_t x82 = INT32_MIN;
	int32_t x83 = -8342;
	int64_t x84 = -22442003LL;
	int32_t t19 = 267;

    t19 = (x81!=((x82%x83)%x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x86 = 3U;
	int16_t x87 = INT16_MIN;

    t20 = (x85!=((x86%x87)%x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x89 = -1;
	int8_t x91 = INT8_MAX;
	volatile int32_t x92 = -1;

    t21 = (x89!=((x90%x91)%x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = INT64_MIN;
	uint8_t x96 = UINT8_MAX;

    t22 = (x93!=((x94%x95)%x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -1;
	int64_t x98 = INT64_MIN;
	uint64_t x99 = 233474083787696977LLU;
	int32_t x100 = INT32_MIN;

    t23 = (x97!=((x98%x99)%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x102 = UINT16_MAX;
	int16_t x103 = INT16_MIN;
	static uint64_t x104 = 30432301860LLU;

    t24 = (x101!=((x102%x103)%x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -9472223952LL;

    t25 = (x105!=((x106%x107)%x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = UINT64_MAX;
	static int32_t t26 = -3;

    t26 = (x109!=((x110%x111)%x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x114 = 4U;
	volatile int8_t x116 = INT8_MAX;
	static int32_t t27 = -124287;

    t27 = (x113!=((x114%x115)%x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x117 = 31U;
	int16_t x118 = -1;
	static volatile int16_t x120 = -1736;
	static volatile int32_t t28 = -783355444;

    t28 = (x117!=((x118%x119)%x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x121 = INT8_MIN;
	int16_t x123 = -1;
	int32_t t29 = 13445065;

    t29 = (x121!=((x122%x123)%x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x125 = INT16_MIN;
	static uint8_t x126 = UINT8_MAX;
	uint64_t x128 = UINT64_MAX;
	static volatile int32_t t30 = -2;

    t30 = (x125!=((x126%x127)%x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x129 = INT16_MAX;
	int16_t x130 = INT16_MAX;
	static int16_t x131 = -1;
	int16_t x132 = 9707;
	int32_t t31 = -2193170;

    t31 = (x129!=((x130%x131)%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = 1;
	int8_t x134 = 1;
	static volatile int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MAX;
	volatile int32_t t32 = 2;

    t32 = (x133!=((x134%x135)%x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = 87121LLU;
	volatile int16_t x138 = 1;
	static uint16_t x139 = 50U;
	int8_t x140 = -1;
	static int32_t t33 = 6;

    t33 = (x137!=((x138%x139)%x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x142 = 836LLU;
	static int8_t x143 = -60;
	uint64_t x144 = 186640306779506654LLU;

    t34 = (x141!=((x142%x143)%x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x146 = -10432357;
	volatile uint32_t x148 = 2U;
	volatile int32_t t35 = -10167;

    t35 = (x145!=((x146%x147)%x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x149 = 6050727080038LLU;
	int32_t x150 = INT32_MIN;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t36 = -147;

    t36 = (x149!=((x150%x151)%x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x153 = 7245U;
	static uint64_t x154 = UINT64_MAX;
	static int16_t x155 = 5;
	volatile int32_t x156 = -46372539;
	volatile int32_t t37 = 2;

    t37 = (x153!=((x154%x155)%x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = INT32_MIN;
	volatile int8_t x158 = -1;
	volatile int8_t x159 = 1;
	int16_t x160 = 24;
	static volatile int32_t t38 = -37;

    t38 = (x157!=((x158%x159)%x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x165 = INT64_MAX;
	int32_t x167 = 55604;
	int8_t x168 = -1;
	int32_t t39 = -6681;

    t39 = (x165!=((x166%x167)%x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x169 = 7725U;
	int64_t x170 = 493371122012945LL;
	uint64_t x172 = 1093534654966771LLU;
	volatile int32_t t40 = 108;

    t40 = (x169!=((x170%x171)%x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = INT8_MAX;
	volatile uint16_t x174 = 1474U;
	static volatile int16_t x175 = -1;
	int64_t x176 = INT64_MIN;
	int32_t t41 = -220072211;

    t41 = (x173!=((x174%x175)%x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x177 = INT16_MIN;
	int32_t x178 = -1;
	volatile int16_t x179 = INT16_MIN;
	int64_t x180 = -1LL;

    t42 = (x177!=((x178%x179)%x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = -3912485581780437186LL;
	volatile int8_t x183 = -10;
	static int16_t x184 = -6395;
	volatile int32_t t43 = -126144090;

    t43 = (x181!=((x182%x183)%x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x185 = 35U;
	uint32_t x186 = 1U;
	int32_t x187 = 1;
	static volatile int32_t t44 = 3;

    t44 = (x185!=((x186%x187)%x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = 47U;
	volatile int16_t x190 = 4168;
	int8_t x191 = INT8_MAX;
	int32_t x192 = -11770672;
	int32_t t45 = -1767419;

    t45 = (x189!=((x190%x191)%x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x194 = -4684510;
	int8_t x195 = INT8_MIN;

    t46 = (x193!=((x194%x195)%x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x197 = 0U;
	int32_t x198 = -1;
	int16_t x199 = INT16_MIN;

    t47 = (x197!=((x198%x199)%x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x202 = INT32_MAX;
	static int16_t x204 = INT16_MAX;
	int32_t t48 = -50314;

    t48 = (x201!=((x202%x203)%x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x205 = 34674U;
	volatile int8_t x207 = INT8_MIN;
	uint64_t x208 = UINT64_MAX;
	int32_t t49 = -3408356;

    t49 = (x205!=((x206%x207)%x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x210 = 1840050120546822LLU;
	int8_t x212 = INT8_MAX;
	int32_t t50 = 56531927;

    t50 = (x209!=((x210%x211)%x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x214 = 6585261857LLU;
	static volatile uint16_t x215 = 9120U;
	static volatile uint32_t x216 = 11U;
	volatile int32_t t51 = -8985469;

    t51 = (x213!=((x214%x215)%x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x217 = UINT32_MAX;
	int32_t x220 = 14879325;
	volatile int32_t t52 = 7204;

    t52 = (x217!=((x218%x219)%x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	static volatile int64_t x224 = -402935718872483977LL;

    t53 = (x221!=((x222%x223)%x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = -24;
	int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MIN;
	int64_t x228 = 2696464600044LL;
	volatile int32_t t54 = 1080;

    t54 = (x225!=((x226%x227)%x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = INT64_MIN;
	uint8_t x230 = 10U;
	int16_t x231 = 3;
	int8_t x232 = 1;
	int32_t t55 = -1;

    t55 = (x229!=((x230%x231)%x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x233 = 0;
	static int32_t x234 = 13941;
	int64_t x236 = 12667074LL;
	volatile int32_t t56 = -1493;

    t56 = (x233!=((x234%x235)%x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x237 = UINT32_MAX;
	static int16_t x239 = -1591;
	static uint32_t x240 = 138564557U;
	int32_t t57 = 62;

    t57 = (x237!=((x238%x239)%x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x242 = 15U;
	int64_t x243 = INT64_MIN;
	volatile int32_t t58 = -23;

    t58 = (x241!=((x242%x243)%x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x245 = 0U;
	static uint16_t x246 = 493U;
	static int32_t x247 = -1;
	static volatile int8_t x248 = -12;
	volatile int32_t t59 = -1561;

    t59 = (x245!=((x246%x247)%x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x249 = 29125948721404LL;
	uint8_t x250 = 88U;
	int16_t x251 = INT16_MAX;
	int64_t x252 = 1056LL;
	int32_t t60 = -19276;

    t60 = (x249!=((x250%x251)%x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x253 = 2U;
	static volatile uint16_t x254 = 21U;
	static int8_t x256 = -6;
	static volatile int32_t t61 = -725350;

    t61 = (x253!=((x254%x255)%x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x257 = 545044407U;
	int8_t x258 = INT8_MIN;
	uint32_t x260 = 792U;
	int32_t t62 = -2056492;

    t62 = (x257!=((x258%x259)%x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x262 = INT32_MAX;
	volatile int64_t x263 = -2817098646582346805LL;
	static int32_t x264 = INT32_MAX;

    t63 = (x261!=((x262%x263)%x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = 154044959;
	static uint8_t x266 = 31U;
	volatile int64_t x267 = INT64_MIN;
	uint32_t x268 = 38U;
	int32_t t64 = -2869;

    t64 = (x265!=((x266%x267)%x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x269 = 1582447U;
	uint32_t x270 = 29048U;
	static uint32_t x272 = UINT32_MAX;
	volatile int32_t t65 = -36069348;

    t65 = (x269!=((x270%x271)%x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x273 = 944U;
	volatile int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MAX;
	volatile uint8_t x276 = UINT8_MAX;
	int32_t t66 = 0;

    t66 = (x273!=((x274%x275)%x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = -745;
	static int16_t x278 = INT16_MAX;
	uint16_t x279 = 1579U;
	static uint8_t x280 = 10U;
	static int32_t t67 = 0;

    t67 = (x277!=((x278%x279)%x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = INT16_MIN;
	volatile int64_t x282 = 690615797LL;
	static int16_t x284 = INT16_MIN;
	int32_t t68 = -110608;

    t68 = (x281!=((x282%x283)%x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x285 = INT32_MIN;
	volatile int32_t x288 = -1;

    t69 = (x285!=((x286%x287)%x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x289 = UINT8_MAX;
	int8_t x290 = 1;
	int64_t x291 = 7LL;
	int64_t x292 = INT64_MAX;
	int32_t t70 = -224369091;

    t70 = (x289!=((x290%x291)%x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x293 = INT64_MAX;
	int32_t x294 = INT32_MAX;
	static volatile int16_t x296 = -1;
	int32_t t71 = 100841511;

    t71 = (x293!=((x294%x295)%x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x297 = 13053655912740120LL;
	volatile int8_t x298 = -41;
	int8_t x299 = -14;
	int16_t x300 = INT16_MAX;
	static volatile int32_t t72 = 129858106;

    t72 = (x297!=((x298%x299)%x300));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = 0;
	int32_t x302 = -1;
	int32_t x303 = -1;
	int32_t x304 = INT32_MIN;
	volatile int32_t t73 = 1470739;

    t73 = (x301!=((x302%x303)%x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x305 = UINT32_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	uint8_t x307 = UINT8_MAX;
	volatile int32_t t74 = 14578;

    t74 = (x305!=((x306%x307)%x308));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x310 = INT32_MIN;
	static int32_t x311 = -462;
	static uint8_t x312 = UINT8_MAX;

    t75 = (x309!=((x310%x311)%x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = INT8_MAX;
	volatile int32_t x314 = -1;
	static volatile uint64_t x316 = 105907889613811056LLU;

    t76 = (x313!=((x314%x315)%x316));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = -1LL;
	volatile uint64_t x319 = 257047334LLU;
	int32_t x320 = -1;

    t77 = (x317!=((x318%x319)%x320));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MIN;
	int64_t x324 = -56029274LL;
	volatile int32_t t78 = -1163339;

    t78 = (x321!=((x322%x323)%x324));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = 4934U;
	int16_t x326 = -11;
	int16_t x327 = -5043;
	int32_t x328 = -1;
	static int32_t t79 = -47;

    t79 = (x325!=((x326%x327)%x328));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x329 = -1312289;
	int32_t x330 = 6;
	int16_t x331 = -2746;

    t80 = (x329!=((x330%x331)%x332));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = -1;
	volatile int8_t x339 = INT8_MIN;

    t81 = (x337!=((x338%x339)%x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x342 = -2;
	int32_t x344 = INT32_MAX;
	int32_t t82 = -1963224;

    t82 = (x341!=((x342%x343)%x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = INT8_MAX;
	int16_t x347 = -3;
	int16_t x348 = INT16_MIN;

    t83 = (x345!=((x346%x347)%x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x349 = 95U;
	int16_t x350 = -1;
	static uint32_t x351 = 1919413183U;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t84 = -437196;

    t84 = (x349!=((x350%x351)%x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x353 = UINT32_MAX;
	int64_t x354 = -1LL;
	int16_t x355 = INT16_MIN;
	static volatile uint64_t x356 = 3526052655LLU;
	int32_t t85 = 0;

    t85 = (x353!=((x354%x355)%x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x358 = INT32_MIN;
	static int32_t x359 = -629;
	volatile int32_t t86 = -529010260;

    t86 = (x357!=((x358%x359)%x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x363 = 13U;
	static int8_t x364 = INT8_MIN;

    t87 = (x361!=((x362%x363)%x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x365 = 12;
	static int32_t x366 = -1;
	uint32_t x367 = UINT32_MAX;
	uint64_t x368 = UINT64_MAX;

    t88 = (x365!=((x366%x367)%x368));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x369 = -1;
	int8_t x370 = -1;
	uint8_t x371 = UINT8_MAX;
	volatile uint64_t x372 = 34889342887708LLU;
	int32_t t89 = -30202;

    t89 = (x369!=((x370%x371)%x372));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x377 = INT64_MIN;
	volatile int64_t x378 = INT64_MAX;
	int16_t x379 = -1;
	int32_t x380 = -963;
	volatile int32_t t90 = 1;

    t90 = (x377!=((x378%x379)%x380));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x381 = -1;
	static uint8_t x382 = 1U;
	volatile int32_t x383 = INT32_MIN;
	static int8_t x384 = 4;
	volatile int32_t t91 = 55925584;

    t91 = (x381!=((x382%x383)%x384));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x389 = 25U;
	static int32_t x391 = -1;

    t92 = (x389!=((x390%x391)%x392));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x393 = INT16_MIN;
	int32_t x395 = -1;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t93 = -2243841;

    t93 = (x393!=((x394%x395)%x396));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x397 = INT64_MAX;
	volatile uint32_t x398 = 6U;
	int64_t x399 = 4598184893LL;
	int32_t x400 = 50;

    t94 = (x397!=((x398%x399)%x400));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x401 = 7938U;
	int32_t x402 = INT32_MAX;
	volatile uint16_t x403 = 4699U;
	uint8_t x404 = 5U;
	static int32_t t95 = 1;

    t95 = (x401!=((x402%x403)%x404));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x405 = INT64_MAX;
	volatile int32_t x406 = 19016;
	volatile int64_t x407 = -1LL;
	uint16_t x408 = 27090U;
	volatile int32_t t96 = 25420601;

    t96 = (x405!=((x406%x407)%x408));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x410 = -21170736;
	volatile int16_t x411 = INT16_MIN;
	int32_t x412 = -62855342;

    t97 = (x409!=((x410%x411)%x412));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x413 = -1;
	static uint8_t x414 = 30U;
	int32_t x415 = -8853;
	uint32_t x416 = 15U;
	volatile int32_t t98 = -7947;

    t98 = (x413!=((x414%x415)%x416));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x417 = 151848064;
	static int16_t x418 = INT16_MIN;
	uint16_t x419 = 24U;
	volatile uint64_t x420 = 42435LLU;
	volatile int32_t t99 = -1;

    t99 = (x417!=((x418%x419)%x420));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x421 = 71U;
	int32_t x422 = -1;
	uint64_t x424 = UINT64_MAX;
	int32_t t100 = -180;

    t100 = (x421!=((x422%x423)%x424));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x425 = 3766U;
	int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	volatile int32_t t101 = -242;

    t101 = (x425!=((x426%x427)%x428));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x429 = 44;
	uint8_t x430 = 27U;
	volatile int64_t x431 = -2189LL;
	int8_t x432 = INT8_MAX;
	volatile int32_t t102 = 75;

    t102 = (x429!=((x430%x431)%x432));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x433 = INT8_MIN;
	int64_t x434 = 97528079LL;
	static int32_t x435 = -1;
	int8_t x436 = -1;

    t103 = (x433!=((x434%x435)%x436));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x437 = -1;
	int8_t x438 = INT8_MIN;
	uint64_t x439 = 166747LLU;
	volatile int32_t t104 = 365734955;

    t104 = (x437!=((x438%x439)%x440));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x441 = 494314344LLU;
	uint8_t x444 = 4U;
	static volatile int32_t t105 = -4;

    t105 = (x441!=((x442%x443)%x444));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x445 = 491435070U;
	uint16_t x446 = 3U;
	uint8_t x447 = UINT8_MAX;
	int8_t x448 = -1;
	int32_t t106 = 354482150;

    t106 = (x445!=((x446%x447)%x448));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x450 = -1LL;
	int32_t x451 = -810941292;
	volatile int32_t t107 = -21286;

    t107 = (x449!=((x450%x451)%x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = INT64_MIN;
	static uint32_t x454 = 282U;
	int8_t x455 = INT8_MIN;
	int32_t x456 = INT32_MIN;

    t108 = (x453!=((x454%x455)%x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x458 = -1;
	uint16_t x459 = 612U;
	int8_t x460 = INT8_MIN;
	int32_t t109 = 2;

    t109 = (x457!=((x458%x459)%x460));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x461 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	volatile int16_t x464 = -1488;
	volatile int32_t t110 = 227933;

    t110 = (x461!=((x462%x463)%x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x465 = -252845198862LL;
	uint64_t x466 = UINT64_MAX;
	int32_t x467 = INT32_MIN;
	int32_t x468 = -36747097;
	volatile int32_t t111 = -21465;

    t111 = (x465!=((x466%x467)%x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = -1LL;
	int8_t x470 = INT8_MIN;
	uint8_t x471 = 7U;

    t112 = (x469!=((x470%x471)%x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x473 = 17U;
	static uint16_t x474 = UINT16_MAX;
	int64_t x475 = INT64_MIN;
	volatile int32_t t113 = 453;

    t113 = (x473!=((x474%x475)%x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x478 = INT32_MIN;
	uint64_t x480 = UINT64_MAX;
	int32_t t114 = 5;

    t114 = (x477!=((x478%x479)%x480));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x481 = 5U;
	int8_t x482 = INT8_MIN;
	volatile uint16_t x483 = 6U;
	int32_t x484 = INT32_MIN;
	int32_t t115 = 98286;

    t115 = (x481!=((x482%x483)%x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x485 = -1;
	volatile int32_t x486 = 348547124;
	volatile int16_t x487 = INT16_MAX;
	int32_t t116 = 14207;

    t116 = (x485!=((x486%x487)%x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x489 = -1;
	uint64_t x490 = 1056746724LLU;
	volatile int16_t x492 = -2978;
	volatile int32_t t117 = -3828458;

    t117 = (x489!=((x490%x491)%x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x494 = UINT64_MAX;

    t118 = (x493!=((x494%x495)%x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x501 = 3U;
	int8_t x502 = -3;
	uint16_t x503 = 11806U;

    t119 = (x501!=((x502%x503)%x504));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x505 = INT32_MIN;
	uint16_t x506 = 1U;
	uint8_t x507 = 1U;
	uint64_t x508 = 1629555LLU;

    t120 = (x505!=((x506%x507)%x508));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x509 = INT64_MIN;
	uint8_t x510 = UINT8_MAX;
	static uint16_t x511 = 253U;

    t121 = (x509!=((x510%x511)%x512));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x513 = INT8_MAX;
	int64_t x514 = INT64_MAX;
	static int32_t x516 = INT32_MIN;
	volatile int32_t t122 = 1915732;

    t122 = (x513!=((x514%x515)%x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x519 = 507720055U;

    t123 = (x517!=((x518%x519)%x520));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x521 = UINT8_MAX;
	uint32_t x522 = 3U;
	static int16_t x523 = 1;
	volatile int32_t t124 = -42;

    t124 = (x521!=((x522%x523)%x524));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x525 = 43052059339LL;
	int32_t x526 = INT32_MIN;
	static int64_t x527 = INT64_MIN;

    t125 = (x525!=((x526%x527)%x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x529 = UINT64_MAX;
	uint64_t x531 = 3LLU;
	int16_t x532 = INT16_MAX;
	volatile int32_t t126 = 0;

    t126 = (x529!=((x530%x531)%x532));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x533 = 7U;
	int8_t x534 = 9;
	volatile int32_t x535 = -35866206;
	int32_t x536 = -1;

    t127 = (x533!=((x534%x535)%x536));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x537 = INT8_MIN;
	static int16_t x538 = -1;
	volatile int16_t x539 = INT16_MAX;
	static int64_t x540 = INT64_MIN;
	int32_t t128 = 1152190;

    t128 = (x537!=((x538%x539)%x540));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x541 = INT32_MAX;
	volatile uint32_t x542 = UINT32_MAX;
	int64_t x543 = -949844034751LL;
	uint16_t x544 = UINT16_MAX;
	volatile int32_t t129 = -1;

    t129 = (x541!=((x542%x543)%x544));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x545 = 2LLU;
	volatile int16_t x546 = INT16_MIN;
	static int32_t x548 = 56903753;
	int32_t t130 = 0;

    t130 = (x545!=((x546%x547)%x548));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x549 = INT64_MAX;
	static int8_t x550 = INT8_MIN;
	int64_t x551 = 13947850997139LL;
	int8_t x552 = 61;
	volatile int32_t t131 = -122;

    t131 = (x549!=((x550%x551)%x552));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x553 = INT16_MIN;
	int8_t x555 = -6;
	int16_t x556 = INT16_MAX;
	volatile int32_t t132 = 8943;

    t132 = (x553!=((x554%x555)%x556));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x557 = 21;
	int32_t x560 = INT32_MAX;
	volatile int32_t t133 = 4297;

    t133 = (x557!=((x558%x559)%x560));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x561 = -193281828432256912LL;
	int32_t x562 = INT32_MAX;
	int8_t x563 = 3;
	volatile int8_t x564 = INT8_MAX;
	int32_t t134 = 8111;

    t134 = (x561!=((x562%x563)%x564));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x565 = -1;
	int64_t x566 = INT64_MIN;
	volatile int32_t x567 = INT32_MIN;
	uint64_t x568 = UINT64_MAX;
	int32_t t135 = -191503;

    t135 = (x565!=((x566%x567)%x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x569 = INT16_MIN;
	int64_t x570 = INT64_MAX;
	int16_t x571 = INT16_MIN;
	volatile int32_t t136 = -62;

    t136 = (x569!=((x570%x571)%x572));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x573 = INT16_MAX;
	int8_t x576 = 3;
	int32_t t137 = 2838721;

    t137 = (x573!=((x574%x575)%x576));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x577 = INT16_MIN;
	static volatile int16_t x578 = -1;
	int8_t x579 = -1;
	int8_t x580 = 47;
	int32_t t138 = 210051;

    t138 = (x577!=((x578%x579)%x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x581 = UINT32_MAX;
	volatile int64_t x582 = -8086LL;
	static int8_t x583 = INT8_MAX;
	int16_t x584 = INT16_MIN;
	volatile int32_t t139 = -1;

    t139 = (x581!=((x582%x583)%x584));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x585 = 17;
	int8_t x586 = -5;
	volatile int32_t x587 = INT32_MIN;
	volatile int8_t x588 = INT8_MIN;
	volatile int32_t t140 = 76564;

    t140 = (x585!=((x586%x587)%x588));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x589 = INT8_MIN;
	int64_t x590 = INT64_MIN;
	uint64_t x592 = UINT64_MAX;

    t141 = (x589!=((x590%x591)%x592));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x593 = INT16_MIN;
	int16_t x594 = 108;
	static int8_t x595 = 47;
	uint8_t x596 = 11U;
	int32_t t142 = -125;

    t142 = (x593!=((x594%x595)%x596));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x597 = -1;
	volatile int16_t x598 = INT16_MIN;
	int32_t x599 = 78498;
	volatile int32_t t143 = 240602;

    t143 = (x597!=((x598%x599)%x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x601 = 48;
	uint8_t x602 = 115U;
	int16_t x604 = -1;
	volatile int32_t t144 = 14509011;

    t144 = (x601!=((x602%x603)%x604));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x605 = 1U;
	int32_t x608 = INT32_MIN;
	volatile int32_t t145 = -122;

    t145 = (x605!=((x606%x607)%x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x609 = 10349410U;
	static volatile int64_t x610 = INT64_MAX;
	uint32_t x612 = 3459609U;
	static int32_t t146 = -1;

    t146 = (x609!=((x610%x611)%x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x613 = -20609801637LL;
	uint16_t x614 = UINT16_MAX;
	int16_t x615 = 1686;
	static int32_t x616 = INT32_MAX;
	int32_t t147 = -425632;

    t147 = (x613!=((x614%x615)%x616));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x617 = 235619LLU;
	int64_t x618 = INT64_MIN;
	int64_t x619 = INT64_MAX;
	int32_t x620 = 6147;
	static int32_t t148 = -1404704;

    t148 = (x617!=((x618%x619)%x620));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x621 = -1;
	static int8_t x622 = INT8_MAX;
	int8_t x623 = INT8_MIN;
	int8_t x624 = -13;
	int32_t t149 = 510123280;

    t149 = (x621!=((x622%x623)%x624));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x625 = 422U;
	static int32_t x626 = INT32_MIN;
	volatile int64_t x628 = -533316988613765LL;
	volatile int32_t t150 = -6364133;

    t150 = (x625!=((x626%x627)%x628));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x630 = INT16_MIN;
	volatile uint16_t x631 = UINT16_MAX;
	uint16_t x632 = UINT16_MAX;
	static volatile int32_t t151 = 868417046;

    t151 = (x629!=((x630%x631)%x632));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x637 = UINT64_MAX;
	volatile int8_t x638 = INT8_MIN;
	uint8_t x640 = 3U;
	int32_t t152 = 213560;

    t152 = (x637!=((x638%x639)%x640));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x641 = 3;
	volatile uint32_t x642 = 885018496U;
	uint64_t x644 = 195669959376765783LLU;
	volatile int32_t t153 = -9582;

    t153 = (x641!=((x642%x643)%x644));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x645 = INT64_MIN;
	int8_t x646 = INT8_MIN;
	uint32_t x647 = 5582U;
	static int32_t t154 = -102271;

    t154 = (x645!=((x646%x647)%x648));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x649 = 0U;
	volatile uint16_t x651 = 5U;
	uint16_t x652 = 18326U;
	int32_t t155 = -79001807;

    t155 = (x649!=((x650%x651)%x652));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x654 = -1;
	static int16_t x655 = -1;
	int8_t x656 = -1;
	static int32_t t156 = -3504;

    t156 = (x653!=((x654%x655)%x656));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x657 = INT64_MIN;
	int32_t x658 = -1735074;
	int16_t x659 = -1;
	static int16_t x660 = INT16_MAX;
	static volatile int32_t t157 = 2;

    t157 = (x657!=((x658%x659)%x660));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x661 = INT8_MIN;
	int16_t x663 = -177;
	int32_t x664 = INT32_MAX;

    t158 = (x661!=((x662%x663)%x664));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x669 = -30;
	static uint32_t x670 = UINT32_MAX;
	uint8_t x671 = 1U;
	int32_t x672 = INT32_MAX;

    t159 = (x669!=((x670%x671)%x672));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x673 = -1;
	int32_t x674 = INT32_MAX;
	int32_t x675 = INT32_MIN;
	static int32_t t160 = 0;

    t160 = (x673!=((x674%x675)%x676));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x677 = INT32_MAX;
	static volatile int32_t x678 = INT32_MIN;
	volatile int16_t x679 = INT16_MIN;
	volatile int32_t t161 = 776082056;

    t161 = (x677!=((x678%x679)%x680));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x681 = INT64_MAX;
	volatile uint32_t x682 = 8U;
	static int16_t x683 = -1;
	volatile int8_t x684 = INT8_MIN;

    t162 = (x681!=((x682%x683)%x684));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x685 = 1282U;
	volatile int32_t x687 = INT32_MIN;
	int32_t x688 = -1;
	volatile int32_t t163 = 39;

    t163 = (x685!=((x686%x687)%x688));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x689 = UINT16_MAX;
	int16_t x690 = INT16_MIN;
	int16_t x691 = INT16_MAX;
	uint32_t x692 = 79629U;

    t164 = (x689!=((x690%x691)%x692));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x693 = INT8_MIN;
	uint16_t x695 = 54U;
	volatile int32_t x696 = -1;

    t165 = (x693!=((x694%x695)%x696));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x697 = INT32_MIN;
	static volatile int8_t x698 = INT8_MIN;
	int8_t x699 = INT8_MAX;
	volatile int32_t x700 = -1;
	static int32_t t166 = 69220136;

    t166 = (x697!=((x698%x699)%x700));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x702 = INT16_MIN;
	int16_t x703 = 3;
	uint32_t x704 = 65840421U;
	int32_t t167 = 5651;

    t167 = (x701!=((x702%x703)%x704));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x705 = INT32_MIN;
	static int16_t x706 = 13;
	volatile uint8_t x707 = UINT8_MAX;
	volatile int32_t t168 = -44;

    t168 = (x705!=((x706%x707)%x708));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x712 = 2038243LL;
	volatile int32_t t169 = 0;

    t169 = (x709!=((x710%x711)%x712));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x713 = -1LL;
	uint64_t x714 = UINT64_MAX;
	int8_t x715 = 1;
	volatile int32_t x716 = INT32_MAX;
	static volatile int32_t t170 = -18;

    t170 = (x713!=((x714%x715)%x716));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x717 = 79420U;
	int8_t x718 = INT8_MAX;
	int64_t x719 = -1LL;
	int16_t x720 = INT16_MIN;
	static volatile int32_t t171 = 43;

    t171 = (x717!=((x718%x719)%x720));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x721 = UINT32_MAX;
	static int16_t x723 = 3160;

    t172 = (x721!=((x722%x723)%x724));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x725 = UINT16_MAX;
	int8_t x726 = INT8_MIN;
	uint16_t x727 = UINT16_MAX;
	int32_t x728 = 1;
	int32_t t173 = -367096688;

    t173 = (x725!=((x726%x727)%x728));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x729 = 2U;
	uint64_t x730 = 99451296830341968LLU;
	int32_t t174 = 5264;

    t174 = (x729!=((x730%x731)%x732));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x734 = UINT8_MAX;
	int8_t x735 = 3;
	static int64_t x736 = -15314352LL;

    t175 = (x733!=((x734%x735)%x736));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x737 = 10165;
	int16_t x738 = INT16_MIN;
	uint64_t x739 = UINT64_MAX;
	uint16_t x740 = 141U;
	static int32_t t176 = 27;

    t176 = (x737!=((x738%x739)%x740));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x741 = 991;
	static int16_t x742 = INT16_MIN;
	int32_t x743 = 13237342;
	static uint64_t x744 = UINT64_MAX;
	volatile int32_t t177 = 402;

    t177 = (x741!=((x742%x743)%x744));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x745 = INT8_MAX;
	volatile uint64_t x747 = 120665249LLU;
	uint32_t x748 = UINT32_MAX;
	volatile int32_t t178 = 5;

    t178 = (x745!=((x746%x747)%x748));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x751 = INT32_MIN;
	volatile int64_t x752 = INT64_MIN;

    t179 = (x749!=((x750%x751)%x752));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x753 = UINT32_MAX;
	volatile uint8_t x754 = 1U;
	int16_t x755 = INT16_MIN;
	static volatile int8_t x756 = INT8_MAX;
	volatile int32_t t180 = -1;

    t180 = (x753!=((x754%x755)%x756));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x757 = 58LLU;
	int16_t x758 = INT16_MAX;
	uint32_t x759 = UINT32_MAX;
	int8_t x760 = INT8_MIN;

    t181 = (x757!=((x758%x759)%x760));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x766 = 227663U;
	int8_t x767 = 12;
	int8_t x768 = -1;
	int32_t t182 = -8;

    t182 = (x765!=((x766%x767)%x768));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x769 = UINT32_MAX;
	int32_t x770 = INT32_MIN;
	int64_t x771 = -156LL;
	int8_t x772 = -63;
	static int32_t t183 = -33631;

    t183 = (x769!=((x770%x771)%x772));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x774 = 161608576U;
	int16_t x775 = INT16_MIN;
	int16_t x776 = 9290;

    t184 = (x773!=((x774%x775)%x776));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x777 = -1;
	uint64_t x778 = UINT64_MAX;
	int8_t x779 = -1;
	int64_t x780 = -558869789485796LL;
	volatile int32_t t185 = 47041;

    t185 = (x777!=((x778%x779)%x780));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x782 = 11819070950256LLU;
	volatile uint32_t x783 = 123309U;
	volatile int32_t t186 = 2;

    t186 = (x781!=((x782%x783)%x784));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x789 = -1;
	int32_t x790 = INT32_MIN;
	volatile int32_t x791 = INT32_MAX;
	static int32_t x792 = INT32_MIN;
	int32_t t187 = -854;

    t187 = (x789!=((x790%x791)%x792));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x793 = INT32_MIN;
	uint64_t x794 = UINT64_MAX;
	static int16_t x795 = -4;
	static volatile uint64_t x796 = UINT64_MAX;
	volatile int32_t t188 = 105627;

    t188 = (x793!=((x794%x795)%x796));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x797 = 13U;
	int8_t x798 = INT8_MIN;
	volatile int64_t x799 = INT64_MAX;
	uint16_t x800 = 64U;
	volatile int32_t t189 = 26;

    t189 = (x797!=((x798%x799)%x800));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x801 = INT16_MIN;
	int32_t x802 = INT32_MIN;
	volatile int32_t t190 = -93352929;

    t190 = (x801!=((x802%x803)%x804));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x805 = 3419807;
	uint8_t x807 = 36U;
	int32_t t191 = -641;

    t191 = (x805!=((x806%x807)%x808));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x809 = 244LL;
	uint8_t x810 = 21U;
	int16_t x811 = -1;
	int32_t t192 = -29379;

    t192 = (x809!=((x810%x811)%x812));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x813 = -1;
	int64_t x814 = 27LL;
	static int16_t x815 = INT16_MIN;
	static uint32_t x816 = UINT32_MAX;
	int32_t t193 = -1127049;

    t193 = (x813!=((x814%x815)%x816));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x817 = 1;
	uint16_t x818 = 8U;
	uint64_t x819 = 17592629LLU;
	volatile int32_t x820 = INT32_MIN;
	volatile int32_t t194 = -128003667;

    t194 = (x817!=((x818%x819)%x820));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x822 = UINT64_MAX;
	uint64_t x823 = 218668312738LLU;
	int8_t x824 = -3;
	volatile int32_t t195 = -524;

    t195 = (x821!=((x822%x823)%x824));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x825 = INT16_MIN;
	int8_t x826 = -15;

    t196 = (x825!=((x826%x827)%x828));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x829 = -1;
	volatile int8_t x830 = INT8_MIN;
	uint8_t x831 = UINT8_MAX;
	int32_t x832 = -1259;

    t197 = (x829!=((x830%x831)%x832));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x834 = 0;
	int32_t x836 = 1;
	volatile int32_t t198 = -698305;

    t198 = (x833!=((x834%x835)%x836));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x838 = 0U;
	static volatile uint32_t x839 = 16U;
	int8_t x840 = INT8_MAX;
	int32_t t199 = -1;

    t199 = (x837!=((x838%x839)%x840));

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

