
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

uint64_t x1 = UINT64_MAX;
int32_t x4 = INT32_MIN;
volatile int64_t x10 = -305LL;
uint8_t x11 = UINT8_MAX;
static int64_t x12 = INT64_MAX;
static int64_t x14 = INT64_MIN;
int32_t t4 = -8;
volatile int32_t x22 = INT32_MIN;
volatile uint8_t x27 = UINT8_MAX;
volatile uint16_t x28 = 2U;
int32_t x30 = INT32_MIN;
uint32_t x32 = UINT32_MAX;
uint8_t x35 = 3U;
int32_t x36 = INT32_MAX;
int32_t t8 = 88884;
uint8_t x37 = UINT8_MAX;
volatile int32_t t10 = 212843;
int8_t x46 = -1;
uint32_t x50 = 36U;
volatile int8_t x56 = INT8_MIN;
volatile int32_t t14 = 1334639;
volatile int32_t t15 = 171653;
int8_t x65 = 21;
static int64_t x69 = -1LL;
int64_t x71 = INT64_MAX;
uint16_t x76 = 46U;
volatile int32_t t18 = 9023;
volatile int32_t t19 = -2258;
int8_t x82 = INT8_MIN;
static uint64_t x83 = 899LLU;
uint64_t x84 = 11LLU;
static volatile int32_t t25 = 425610;
volatile uint16_t x116 = 11637U;
int16_t x119 = INT16_MAX;
uint64_t x123 = UINT64_MAX;
int32_t t28 = 1413;
int64_t x125 = INT64_MAX;
int8_t x135 = 1;
static int16_t x142 = INT16_MIN;
int32_t x143 = -3050;
uint64_t x146 = 6925545123433455549LLU;
uint32_t x149 = 49U;
int32_t t35 = 151;
static uint16_t x154 = 109U;
volatile int32_t t37 = 6285067;
volatile uint8_t x164 = UINT8_MAX;
volatile int16_t x173 = 2698;
int32_t x174 = -1;
static uint16_t x185 = UINT16_MAX;
static int8_t x186 = -1;
int64_t x188 = INT64_MIN;
int32_t x189 = 1;
uint64_t x192 = UINT64_MAX;
static volatile uint8_t x194 = UINT8_MAX;
int8_t x197 = INT8_MIN;
uint16_t x216 = UINT16_MAX;
static int8_t x217 = INT8_MIN;
int16_t x218 = -13;
uint32_t x224 = UINT32_MAX;
int8_t x228 = -1;
volatile int64_t x235 = 28610600LL;
int32_t x237 = INT32_MIN;
uint16_t x242 = UINT16_MAX;
int8_t x243 = INT8_MIN;
static volatile int32_t t57 = -12531694;
int64_t x250 = -1LL;
uint64_t x254 = 189252LLU;
int64_t x258 = -22571867579LL;
uint16_t x265 = UINT16_MAX;
int32_t x272 = INT32_MIN;
int32_t t64 = 511788069;
uint64_t x275 = UINT64_MAX;
int32_t x282 = 24;
uint16_t x291 = 61U;
int32_t t69 = -55561;
uint32_t x299 = 561U;
int16_t x307 = -1;
int64_t x312 = INT64_MAX;
int32_t t73 = 966811804;
int16_t x313 = INT16_MIN;
uint16_t x318 = UINT16_MAX;
int64_t x320 = 1307341009718585LL;
static uint8_t x327 = UINT8_MAX;
uint16_t x331 = 397U;
static uint16_t x336 = 70U;
static volatile int32_t t80 = 1170271;
uint32_t x351 = 3642U;
static int8_t x355 = INT8_MIN;
volatile uint16_t x357 = 13238U;
uint32_t x359 = UINT32_MAX;
volatile int16_t x364 = -1;
volatile int32_t t86 = 294581;
uint8_t x367 = UINT8_MAX;
volatile int8_t x375 = INT8_MIN;
static int32_t t91 = 22;
int16_t x399 = 1;
uint8_t x400 = UINT8_MAX;
volatile int32_t t95 = -1793;
int16_t x401 = -1;
int32_t t96 = 13503632;
static int64_t x405 = INT64_MIN;
volatile int8_t x406 = 2;
int32_t x407 = INT32_MIN;
int32_t t97 = 71;
int64_t x410 = INT64_MIN;
int32_t x412 = INT32_MIN;
uint8_t x415 = 4U;
static int64_t x422 = INT64_MIN;
uint16_t x431 = 6U;
uint8_t x432 = 88U;
uint8_t x435 = UINT8_MAX;
int32_t x440 = 1;
static uint64_t x448 = 7304914LLU;
int16_t x449 = INT16_MAX;
int32_t x454 = -1;
int32_t t108 = 166253353;
uint32_t x459 = 66788U;
uint16_t x463 = 90U;
static volatile int16_t x467 = INT16_MIN;
int16_t x469 = 176;
volatile int8_t x473 = INT8_MIN;
uint32_t x483 = 5677944U;
uint64_t x488 = UINT64_MAX;
volatile int32_t t116 = 947119388;
uint16_t x495 = 15959U;
static volatile uint32_t x496 = UINT32_MAX;
volatile int16_t x497 = -1;
int32_t x499 = INT32_MAX;
int16_t x500 = -1;
volatile int32_t t120 = -1;
int64_t x517 = -1LL;
int32_t x522 = -16580;
uint8_t x525 = UINT8_MAX;
int64_t x530 = -1LL;
static int64_t x532 = -44232072731LL;
int16_t x533 = INT16_MIN;
static int8_t x542 = -1;
uint64_t x543 = UINT64_MAX;
int64_t x544 = INT64_MIN;
int32_t x550 = -431;
volatile int32_t x559 = -1;
int32_t t134 = 118;
static int16_t x569 = -1;
int64_t x570 = INT64_MIN;
uint64_t x574 = 863871404209677329LLU;
volatile int8_t x578 = INT8_MIN;
volatile int16_t x580 = INT16_MIN;
int32_t t137 = 15395085;
int64_t x594 = -1LL;
int32_t t140 = 351;
uint32_t x604 = 131773968U;
int8_t x606 = INT8_MAX;
uint64_t x609 = 9LLU;
static int32_t x610 = -17417384;
volatile int32_t t144 = -910;
uint32_t x616 = UINT32_MAX;
uint8_t x630 = 0U;
volatile uint8_t x653 = 25U;
uint64_t x657 = UINT64_MAX;
volatile uint64_t x660 = 67918818743346655LLU;
int64_t x666 = INT64_MIN;
static int64_t x668 = -1LL;
uint16_t x683 = 16752U;
volatile int8_t x687 = INT8_MAX;
volatile int16_t x688 = 15039;
int32_t t164 = 219928655;
int8_t x697 = -3;
int32_t x701 = INT32_MIN;
int32_t t166 = -1;
int32_t x705 = 2;
int32_t t167 = 1542484;
int8_t x710 = INT8_MAX;
int32_t t168 = 175263414;
int16_t x715 = INT16_MIN;
uint32_t x717 = 18U;
int64_t x723 = 1703948756701LL;
static volatile uint32_t x729 = 4U;
volatile int16_t x732 = -1;
volatile int32_t t174 = 5972254;
volatile int8_t x737 = INT8_MAX;
int64_t x738 = -1LL;
uint8_t x742 = 4U;
int8_t x744 = -16;
int32_t x745 = INT32_MIN;
static int8_t x751 = INT8_MAX;
static int64_t x752 = INT64_MIN;
volatile uint64_t x755 = UINT64_MAX;
volatile int64_t x765 = -1LL;
int8_t x768 = INT8_MAX;
int32_t t182 = 7361729;
int8_t x773 = 30;
static uint64_t x786 = 62823553849028320LLU;
uint64_t x788 = UINT64_MAX;
volatile uint64_t x790 = 56112867LLU;
int64_t x797 = 13873LL;
volatile uint16_t x800 = 28563U;
static int64_t x805 = INT64_MAX;
volatile int64_t x806 = INT64_MAX;
static int16_t x807 = -716;
int64_t x811 = -1LL;
volatile int32_t t195 = -3287296;
volatile int32_t t196 = -45349232;
uint8_t x828 = 9U;
int32_t x833 = 122962688;


void f0(void) {
    	static uint16_t x2 = 2862U;
	static int64_t x3 = INT64_MIN;
	volatile int32_t t0 = -422200063;

    t0 = (x1!=((x2/x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1522229391859268282LL;
	static int16_t x6 = INT16_MAX;
	int16_t x7 = 1;
	uint64_t x8 = 42LLU;
	volatile int32_t t1 = -2;

    t1 = (x5!=((x6/x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 2563382184547433543LLU;
	int32_t t2 = 733947224;

    t2 = (x9!=((x10/x11)%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 4U;
	static int16_t x15 = 7;
	volatile uint8_t x16 = 2U;
	static int32_t t3 = -28407;

    t3 = (x13!=((x14/x15)%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -49;
	static volatile int32_t x18 = -1;
	volatile int64_t x19 = -212LL;
	volatile int32_t x20 = -1;

    t4 = (x17!=((x18/x19)%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -151765997525LL;
	static int16_t x23 = -1110;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = 66574706;

    t5 = (x21!=((x22/x23)%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = UINT8_MAX;
	static uint64_t x26 = 7479394422308469LLU;
	volatile int32_t t6 = -29903;

    t6 = (x25!=((x26/x27)%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	static volatile int16_t x31 = INT16_MIN;
	volatile int32_t t7 = -516928654;

    t7 = (x29!=((x30/x31)%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x33 = INT64_MIN;
	static uint32_t x34 = 63U;

    t8 = (x33!=((x34/x35)%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x38 = 14U;
	int32_t x39 = 896683582;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 0;

    t9 = (x37!=((x38/x39)%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = 4;
	int8_t x42 = INT8_MIN;
	static int32_t x43 = INT32_MIN;
	static uint32_t x44 = 84U;

    t10 = (x41!=((x42/x43)%x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = INT16_MIN;
	static int8_t x47 = 1;
	int64_t x48 = INT64_MIN;
	volatile int32_t t11 = 14773956;

    t11 = (x45!=((x46/x47)%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = 182851229LLU;
	int16_t x51 = 6;
	int8_t x52 = INT8_MAX;
	int32_t t12 = 2586;

    t12 = (x49!=((x50/x51)%x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -2;
	int8_t x54 = -1;
	static volatile uint32_t x55 = UINT32_MAX;
	volatile int32_t t13 = -51;

    t13 = (x53!=((x54/x55)%x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 2;
	int8_t x58 = -1;
	volatile int16_t x59 = -1443;
	uint8_t x60 = UINT8_MAX;

    t14 = (x57!=((x58/x59)%x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	static uint16_t x62 = 0U;
	uint64_t x63 = UINT64_MAX;
	volatile int16_t x64 = -3;

    t15 = (x61!=((x62/x63)%x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = UINT64_MAX;
	int16_t x67 = INT16_MIN;
	volatile uint64_t x68 = UINT64_MAX;
	int32_t t16 = 30368377;

    t16 = (x65!=((x66/x67)%x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = INT64_MIN;
	uint16_t x72 = 14U;
	int32_t t17 = 6684;

    t17 = (x69!=((x70/x71)%x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	static int64_t x74 = INT64_MAX;
	int32_t x75 = INT32_MAX;

    t18 = (x73!=((x74/x75)%x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MIN;
	volatile int16_t x80 = 831;

    t19 = (x77!=((x78/x79)%x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x81 = 34U;
	volatile int32_t t20 = -131397;

    t20 = (x81!=((x82/x83)%x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 26511U;
	static uint16_t x86 = 62U;
	volatile int32_t x87 = 54;
	uint8_t x88 = 7U;
	int32_t t21 = 1;

    t21 = (x85!=((x86/x87)%x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 47U;
	int8_t x90 = INT8_MIN;
	volatile uint32_t x91 = UINT32_MAX;
	static uint16_t x92 = 1422U;
	int32_t t22 = 2663269;

    t22 = (x89!=((x90/x91)%x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MIN;
	int64_t x98 = 154475976785845LL;
	static uint8_t x99 = 17U;
	int32_t x100 = -4;
	static int32_t t23 = -12;

    t23 = (x97!=((x98/x99)%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = UINT16_MAX;
	static volatile uint64_t x102 = 41998206057581146LLU;
	static int32_t x103 = INT32_MAX;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t24 = 1677;

    t24 = (x101!=((x102/x103)%x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	volatile uint64_t x106 = 161099247212878044LLU;
	volatile int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;

    t25 = (x105!=((x106/x107)%x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x113 = INT16_MIN;
	volatile int64_t x114 = -1634511171212350553LL;
	volatile int8_t x115 = 1;
	volatile int32_t t26 = -6740;

    t26 = (x113!=((x114/x115)%x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	static int32_t x120 = INT32_MIN;
	int32_t t27 = 4;

    t27 = (x117!=((x118/x119)%x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x121 = UINT32_MAX;
	int8_t x122 = INT8_MIN;
	int8_t x124 = INT8_MAX;

    t28 = (x121!=((x122/x123)%x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x126 = -1;
	volatile int32_t x127 = 40814;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t29 = -12595954;

    t29 = (x125!=((x126/x127)%x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x129 = INT64_MIN;
	uint32_t x130 = UINT32_MAX;
	volatile uint64_t x131 = 38472465021847135LLU;
	volatile int16_t x132 = INT16_MIN;
	int32_t t30 = 2;

    t30 = (x129!=((x130/x131)%x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = UINT16_MAX;
	int64_t x134 = 520833LL;
	int8_t x136 = INT8_MIN;
	int32_t t31 = -13592943;

    t31 = (x133!=((x134/x135)%x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x137 = INT16_MIN;
	volatile uint64_t x138 = 15LLU;
	static int64_t x139 = INT64_MIN;
	static int64_t x140 = -436745130276LL;
	int32_t t32 = -5155523;

    t32 = (x137!=((x138/x139)%x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x141 = -728;
	int8_t x144 = -1;
	volatile int32_t t33 = -3;

    t33 = (x141!=((x142/x143)%x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = UINT64_MAX;
	static int32_t x147 = 1;
	int8_t x148 = INT8_MIN;
	static int32_t t34 = -7;

    t34 = (x145!=((x146/x147)%x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x150 = -39;
	uint16_t x151 = 1359U;
	static uint16_t x152 = 523U;

    t35 = (x149!=((x150/x151)%x152));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x153 = 1U;
	int32_t x155 = 974985;
	uint64_t x156 = 25LLU;
	static volatile int32_t t36 = 0;

    t36 = (x153!=((x154/x155)%x156));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x157 = -1170012LL;
	int8_t x158 = -19;
	int64_t x159 = INT64_MAX;
	uint16_t x160 = UINT16_MAX;

    t37 = (x157!=((x158/x159)%x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = 2184LLU;
	int16_t x162 = -2;
	static int16_t x163 = INT16_MIN;
	volatile int32_t t38 = -21795;

    t38 = (x161!=((x162/x163)%x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x169 = INT32_MIN;
	static uint32_t x170 = UINT32_MAX;
	int32_t x171 = INT32_MAX;
	static int32_t x172 = 246689991;
	volatile int32_t t39 = -11279834;

    t39 = (x169!=((x170/x171)%x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x175 = INT8_MIN;
	int8_t x176 = 5;
	int32_t t40 = -8;

    t40 = (x173!=((x174/x175)%x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x177 = INT16_MIN;
	int8_t x178 = -1;
	static int32_t x179 = INT32_MIN;
	uint16_t x180 = 24U;
	volatile int32_t t41 = -183;

    t41 = (x177!=((x178/x179)%x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x181 = 3U;
	uint16_t x182 = 58U;
	static int32_t x183 = -1;
	static int64_t x184 = -1LL;
	int32_t t42 = -41;

    t42 = (x181!=((x182/x183)%x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x187 = UINT32_MAX;
	int32_t t43 = 8306;

    t43 = (x185!=((x186/x187)%x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x190 = INT8_MAX;
	int16_t x191 = 20;
	int32_t t44 = -80442;

    t44 = (x189!=((x190/x191)%x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = 1044030296LL;
	int64_t x195 = INT64_MAX;
	static int64_t x196 = -1LL;
	volatile int32_t t45 = 22074;

    t45 = (x193!=((x194/x195)%x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x198 = 25U;
	int16_t x199 = -176;
	static uint16_t x200 = 35U;
	volatile int32_t t46 = 974160413;

    t46 = (x197!=((x198/x199)%x200));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = 4512021LL;
	volatile int16_t x202 = -5623;
	int32_t x203 = INT32_MIN;
	volatile int8_t x204 = 1;
	volatile int32_t t47 = -1489606;

    t47 = (x201!=((x202/x203)%x204));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x205 = 214U;
	static int32_t x206 = -1;
	volatile uint16_t x207 = 109U;
	uint8_t x208 = UINT8_MAX;
	int32_t t48 = -9;

    t48 = (x205!=((x206/x207)%x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x209 = 7692604U;
	int16_t x210 = INT16_MIN;
	static int16_t x211 = -4181;
	static uint8_t x212 = UINT8_MAX;
	volatile int32_t t49 = 3790;

    t49 = (x209!=((x210/x211)%x212));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x213 = UINT16_MAX;
	uint64_t x214 = 191832617LLU;
	uint16_t x215 = 31U;
	static volatile int32_t t50 = 244;

    t50 = (x213!=((x214/x215)%x216));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x219 = UINT16_MAX;
	int64_t x220 = INT64_MIN;
	int32_t t51 = -7;

    t51 = (x217!=((x218/x219)%x220));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = INT8_MIN;
	uint32_t x222 = 207U;
	static int16_t x223 = -2151;
	int32_t t52 = -71;

    t52 = (x221!=((x222/x223)%x224));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = INT16_MIN;
	static int64_t x226 = INT64_MIN;
	volatile int16_t x227 = INT16_MIN;
	int32_t t53 = -10054787;

    t53 = (x225!=((x226/x227)%x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x229 = INT32_MAX;
	static uint32_t x230 = UINT32_MAX;
	uint16_t x231 = UINT16_MAX;
	static int16_t x232 = INT16_MAX;
	static volatile int32_t t54 = -1;

    t54 = (x229!=((x230/x231)%x232));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint8_t x233 = 9U;
	static int16_t x234 = -9755;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t55 = 679;

    t55 = (x233!=((x234/x235)%x236));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x238 = -1;
	volatile int32_t x239 = INT32_MIN;
	int16_t x240 = -1;
	volatile int32_t t56 = 0;

    t56 = (x237!=((x238/x239)%x240));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x241 = 26;
	int32_t x244 = INT32_MIN;

    t57 = (x241!=((x242/x243)%x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint32_t x245 = 549148U;
	int64_t x246 = -1LL;
	int8_t x247 = -1;
	volatile int8_t x248 = INT8_MIN;
	int32_t t58 = 4965;

    t58 = (x245!=((x246/x247)%x248));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MIN;
	uint8_t x251 = 31U;
	int64_t x252 = INT64_MIN;
	int32_t t59 = 1579247;

    t59 = (x249!=((x250/x251)%x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = INT8_MAX;
	uint8_t x255 = 11U;
	static uint8_t x256 = 99U;
	static int32_t t60 = -856462;

    t60 = (x253!=((x254/x255)%x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = INT16_MIN;
	uint8_t x259 = 54U;
	volatile int16_t x260 = 1;
	volatile int32_t t61 = -777271;

    t61 = (x257!=((x258/x259)%x260));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x261 = 23616LLU;
	static volatile uint32_t x262 = 2928095U;
	volatile int64_t x263 = -1LL;
	int16_t x264 = -1;
	int32_t t62 = -66585368;

    t62 = (x261!=((x262/x263)%x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x266 = -1;
	static int64_t x267 = INT64_MAX;
	volatile uint16_t x268 = UINT16_MAX;
	static volatile int32_t t63 = 5630;

    t63 = (x265!=((x266/x267)%x268));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x269 = INT32_MAX;
	uint8_t x270 = UINT8_MAX;
	volatile uint32_t x271 = 14960109U;

    t64 = (x269!=((x270/x271)%x272));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x273 = INT16_MIN;
	volatile int8_t x274 = -58;
	int32_t x276 = INT32_MAX;
	int32_t t65 = 191810565;

    t65 = (x273!=((x274/x275)%x276));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x281 = INT64_MIN;
	int16_t x283 = INT16_MAX;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t66 = 0;

    t66 = (x281!=((x282/x283)%x284));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x285 = UINT8_MAX;
	static uint32_t x286 = 47U;
	int16_t x287 = INT16_MIN;
	int8_t x288 = -1;
	static int32_t t67 = 1;

    t67 = (x285!=((x286/x287)%x288));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x289 = UINT8_MAX;
	uint32_t x290 = UINT32_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t68 = -5787076;

    t68 = (x289!=((x290/x291)%x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x293 = UINT64_MAX;
	static int16_t x294 = 4276;
	int8_t x295 = INT8_MIN;
	static volatile int32_t x296 = INT32_MIN;

    t69 = (x293!=((x294/x295)%x296));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x297 = -1;
	int32_t x298 = INT32_MIN;
	int8_t x300 = INT8_MIN;
	int32_t t70 = -51376294;

    t70 = (x297!=((x298/x299)%x300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x301 = -1;
	static uint16_t x302 = 172U;
	int8_t x303 = 1;
	int8_t x304 = INT8_MIN;
	int32_t t71 = -585;

    t71 = (x301!=((x302/x303)%x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x305 = -526419890033407LL;
	uint64_t x306 = UINT64_MAX;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t72 = -501610;

    t72 = (x305!=((x306/x307)%x308));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x309 = 452172307LLU;
	int64_t x310 = INT64_MIN;
	uint8_t x311 = 18U;

    t73 = (x309!=((x310/x311)%x312));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x314 = 210151501899583LLU;
	int8_t x315 = INT8_MIN;
	static int8_t x316 = 17;
	int32_t t74 = -10001;

    t74 = (x313!=((x314/x315)%x316));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x317 = INT64_MIN;
	static int16_t x319 = INT16_MIN;
	int32_t t75 = 8700406;

    t75 = (x317!=((x318/x319)%x320));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x321 = 91U;
	int32_t x322 = -1;
	uint32_t x323 = 98744946U;
	uint16_t x324 = 2U;
	static volatile int32_t t76 = 2778;

    t76 = (x321!=((x322/x323)%x324));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x325 = UINT32_MAX;
	static uint32_t x326 = UINT32_MAX;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t77 = -9323;

    t77 = (x325!=((x326/x327)%x328));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x329 = -1;
	static int64_t x330 = -1LL;
	static int16_t x332 = 629;
	int32_t t78 = 1;

    t78 = (x329!=((x330/x331)%x332));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x333 = 2U;
	int16_t x334 = INT16_MIN;
	int64_t x335 = -1LL;
	int32_t t79 = -12228992;

    t79 = (x333!=((x334/x335)%x336));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x337 = -1;
	int32_t x338 = -1;
	static uint16_t x339 = 76U;
	static volatile int32_t x340 = INT32_MAX;

    t80 = (x337!=((x338/x339)%x340));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x341 = -1;
	uint16_t x342 = UINT16_MAX;
	static uint32_t x343 = UINT32_MAX;
	volatile int32_t x344 = INT32_MIN;
	static volatile int32_t t81 = 53397677;

    t81 = (x341!=((x342/x343)%x344));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x346 = -1;
	uint64_t x347 = 23LLU;
	volatile int32_t x348 = INT32_MIN;
	static int32_t t82 = 7;

    t82 = (x345!=((x346/x347)%x348));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x349 = UINT64_MAX;
	uint64_t x350 = UINT64_MAX;
	uint8_t x352 = UINT8_MAX;
	static int32_t t83 = 575332665;

    t83 = (x349!=((x350/x351)%x352));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x353 = INT32_MAX;
	static uint16_t x354 = UINT16_MAX;
	volatile int16_t x356 = -1;
	volatile int32_t t84 = -374505;

    t84 = (x353!=((x354/x355)%x356));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x358 = 57462261303461722LLU;
	static volatile uint16_t x360 = UINT16_MAX;
	static int32_t t85 = -2058824;

    t85 = (x357!=((x358/x359)%x360));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x361 = INT8_MIN;
	uint64_t x362 = UINT64_MAX;
	int32_t x363 = -151;

    t86 = (x361!=((x362/x363)%x364));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x365 = UINT32_MAX;
	int32_t x366 = INT32_MAX;
	int64_t x368 = INT64_MAX;
	int32_t t87 = -52279;

    t87 = (x365!=((x366/x367)%x368));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MIN;
	int8_t x371 = -1;
	static int8_t x372 = 2;
	int32_t t88 = -2973019;

    t88 = (x369!=((x370/x371)%x372));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x373 = 22841U;
	static uint8_t x374 = 34U;
	int32_t x376 = -1;
	volatile int32_t t89 = 33196;

    t89 = (x373!=((x374/x375)%x376));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = -731;
	int64_t x378 = -1LL;
	int8_t x379 = 2;
	static int16_t x380 = INT16_MAX;
	static volatile int32_t t90 = -30297;

    t90 = (x377!=((x378/x379)%x380));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	volatile int64_t x383 = INT64_MIN;
	int64_t x384 = -1LL;

    t91 = (x381!=((x382/x383)%x384));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = -3965;
	int8_t x386 = INT8_MAX;
	volatile int8_t x387 = -42;
	static int8_t x388 = 5;
	int32_t t92 = 4459597;

    t92 = (x385!=((x386/x387)%x388));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x389 = 5479U;
	static int64_t x390 = INT64_MIN;
	static int16_t x391 = 229;
	static int64_t x392 = -130725312059LL;
	int32_t t93 = -15799;

    t93 = (x389!=((x390/x391)%x392));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x393 = 36868254U;
	uint16_t x394 = 5U;
	uint32_t x395 = 5U;
	int64_t x396 = INT64_MAX;
	volatile int32_t t94 = -1770;

    t94 = (x393!=((x394/x395)%x396));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x397 = -1;
	volatile uint32_t x398 = 5079647U;

    t95 = (x397!=((x398/x399)%x400));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x402 = 30U;
	static int8_t x403 = -1;
	volatile int32_t x404 = INT32_MAX;

    t96 = (x401!=((x402/x403)%x404));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x408 = 5843297600683006039LLU;

    t97 = (x405!=((x406/x407)%x408));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x409 = -1;
	static int64_t x411 = INT64_MIN;
	volatile int32_t t98 = 247;

    t98 = (x409!=((x410/x411)%x412));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x413 = 98LLU;
	volatile uint8_t x414 = 1U;
	int16_t x416 = 298;
	int32_t t99 = -1947423;

    t99 = (x413!=((x414/x415)%x416));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x417 = 6689U;
	static int16_t x418 = INT16_MIN;
	int64_t x419 = -1LL;
	int16_t x420 = INT16_MAX;
	volatile int32_t t100 = -1;

    t100 = (x417!=((x418/x419)%x420));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x421 = 25U;
	uint64_t x423 = 224LLU;
	int64_t x424 = -1LL;
	int32_t t101 = -3490500;

    t101 = (x421!=((x422/x423)%x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x425 = 0U;
	int8_t x426 = INT8_MIN;
	int16_t x427 = -1;
	volatile int64_t x428 = 429354LL;
	volatile int32_t t102 = -98286272;

    t102 = (x425!=((x426/x427)%x428));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x429 = INT64_MAX;
	static volatile int16_t x430 = -1;
	static volatile int32_t t103 = 137880091;

    t103 = (x429!=((x430/x431)%x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x433 = 42;
	int16_t x434 = -1;
	int32_t x436 = 16;
	volatile int32_t t104 = 7;

    t104 = (x433!=((x434/x435)%x436));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = INT32_MAX;
	static int8_t x438 = -1;
	int64_t x439 = INT64_MIN;
	volatile int32_t t105 = -62526876;

    t105 = (x437!=((x438/x439)%x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x445 = INT32_MAX;
	uint32_t x446 = 7U;
	static volatile uint8_t x447 = UINT8_MAX;
	int32_t t106 = 38086996;

    t106 = (x445!=((x446/x447)%x448));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x450 = INT16_MAX;
	volatile uint16_t x451 = 1731U;
	int16_t x452 = INT16_MIN;
	int32_t t107 = 5111;

    t107 = (x449!=((x450/x451)%x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x453 = INT32_MAX;
	static volatile int32_t x455 = INT32_MIN;
	int16_t x456 = INT16_MAX;

    t108 = (x453!=((x454/x455)%x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x457 = INT8_MIN;
	int64_t x458 = INT64_MIN;
	static volatile uint32_t x460 = UINT32_MAX;
	volatile int32_t t109 = -13;

    t109 = (x457!=((x458/x459)%x460));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x461 = INT32_MIN;
	uint16_t x462 = UINT16_MAX;
	uint32_t x464 = UINT32_MAX;
	static volatile int32_t t110 = -672;

    t110 = (x461!=((x462/x463)%x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x465 = INT64_MIN;
	static volatile uint8_t x466 = UINT8_MAX;
	volatile int32_t x468 = -4;
	volatile int32_t t111 = 437;

    t111 = (x465!=((x466/x467)%x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x470 = INT32_MIN;
	int64_t x471 = -12185664362364811LL;
	int32_t x472 = INT32_MIN;
	int32_t t112 = -1;

    t112 = (x469!=((x470/x471)%x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x474 = UINT32_MAX;
	int16_t x475 = -1;
	int16_t x476 = -1;
	int32_t t113 = -1;

    t113 = (x473!=((x474/x475)%x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x481 = 0LLU;
	int8_t x482 = INT8_MIN;
	volatile uint32_t x484 = UINT32_MAX;
	int32_t t114 = 35862807;

    t114 = (x481!=((x482/x483)%x484));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x485 = INT16_MAX;
	int16_t x486 = 117;
	int16_t x487 = -1;
	int32_t t115 = 14296;

    t115 = (x485!=((x486/x487)%x488));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x489 = INT16_MAX;
	uint64_t x490 = 5847525847077LLU;
	int32_t x491 = INT32_MIN;
	int32_t x492 = INT32_MIN;

    t116 = (x489!=((x490/x491)%x492));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x493 = 590;
	uint64_t x494 = 80LLU;
	volatile int32_t t117 = -91330;

    t117 = (x493!=((x494/x495)%x496));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x498 = 13657LL;
	int32_t t118 = -80319;

    t118 = (x497!=((x498/x499)%x500));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x501 = INT16_MIN;
	volatile uint8_t x502 = 3U;
	volatile int16_t x503 = INT16_MIN;
	volatile uint16_t x504 = 1U;
	volatile int32_t t119 = -216;

    t119 = (x501!=((x502/x503)%x504));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x505 = 16324U;
	uint8_t x506 = 45U;
	volatile int64_t x507 = 30505731916069LL;
	uint8_t x508 = UINT8_MAX;

    t120 = (x505!=((x506/x507)%x508));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x509 = -15343;
	int8_t x510 = INT8_MIN;
	volatile int8_t x511 = INT8_MIN;
	volatile int8_t x512 = INT8_MAX;
	int32_t t121 = 1;

    t121 = (x509!=((x510/x511)%x512));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x513 = INT32_MIN;
	int64_t x514 = INT64_MIN;
	int32_t x515 = INT32_MAX;
	volatile uint64_t x516 = UINT64_MAX;
	int32_t t122 = -2561;

    t122 = (x513!=((x514/x515)%x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x518 = 337875827LL;
	int32_t x519 = 1;
	int32_t x520 = INT32_MIN;
	volatile int32_t t123 = -112660773;

    t123 = (x517!=((x518/x519)%x520));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x521 = INT32_MIN;
	static uint32_t x523 = UINT32_MAX;
	int16_t x524 = -2;
	volatile int32_t t124 = 14124944;

    t124 = (x521!=((x522/x523)%x524));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x526 = 109;
	static int64_t x527 = -104905259227906LL;
	static int32_t x528 = -1;
	static int32_t t125 = -11;

    t125 = (x525!=((x526/x527)%x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x529 = 1U;
	int16_t x531 = INT16_MAX;
	volatile int32_t t126 = -5;

    t126 = (x529!=((x530/x531)%x532));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x534 = INT64_MIN;
	static int16_t x535 = INT16_MIN;
	static int16_t x536 = -1294;
	volatile int32_t t127 = -5;

    t127 = (x533!=((x534/x535)%x536));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x541 = INT64_MAX;
	volatile int32_t t128 = -8009;

    t128 = (x541!=((x542/x543)%x544));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x545 = INT32_MIN;
	int32_t x546 = -2;
	static int16_t x547 = 30;
	uint8_t x548 = UINT8_MAX;
	volatile int32_t t129 = -2879;

    t129 = (x545!=((x546/x547)%x548));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x549 = 3374495038101LLU;
	static int16_t x551 = 1;
	static int8_t x552 = INT8_MIN;
	int32_t t130 = 6;

    t130 = (x549!=((x550/x551)%x552));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x553 = INT8_MIN;
	int8_t x554 = INT8_MAX;
	static int16_t x555 = -1;
	volatile int16_t x556 = 1;
	static volatile int32_t t131 = 2165;

    t131 = (x553!=((x554/x555)%x556));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x557 = -1;
	uint32_t x558 = UINT32_MAX;
	int8_t x560 = 29;
	int32_t t132 = -46;

    t132 = (x557!=((x558/x559)%x560));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x561 = INT16_MIN;
	uint16_t x562 = 14105U;
	int16_t x563 = INT16_MAX;
	static int16_t x564 = 525;
	volatile int32_t t133 = 999;

    t133 = (x561!=((x562/x563)%x564));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x565 = INT8_MIN;
	uint16_t x566 = UINT16_MAX;
	int16_t x567 = -17;
	int8_t x568 = 10;

    t134 = (x565!=((x566/x567)%x568));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x571 = 1U;
	uint16_t x572 = UINT16_MAX;
	volatile int32_t t135 = 26950;

    t135 = (x569!=((x570/x571)%x572));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x573 = INT64_MAX;
	uint16_t x575 = 11U;
	int16_t x576 = -65;
	static int32_t t136 = -1;

    t136 = (x573!=((x574/x575)%x576));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x577 = 412812204512705863LLU;
	uint64_t x579 = 237843557LLU;

    t137 = (x577!=((x578/x579)%x580));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x585 = INT16_MIN;
	volatile uint64_t x586 = UINT64_MAX;
	int32_t x587 = INT32_MAX;
	static uint16_t x588 = 1947U;
	volatile int32_t t138 = -29966732;

    t138 = (x585!=((x586/x587)%x588));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x589 = INT64_MIN;
	static int8_t x590 = 4;
	static int16_t x591 = INT16_MIN;
	static int16_t x592 = 266;
	volatile int32_t t139 = -2466;

    t139 = (x589!=((x590/x591)%x592));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x593 = 0U;
	static int32_t x595 = -6135575;
	int32_t x596 = 15;

    t140 = (x593!=((x594/x595)%x596));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x597 = UINT32_MAX;
	static volatile uint16_t x598 = 1U;
	uint16_t x599 = UINT16_MAX;
	int64_t x600 = INT64_MAX;
	volatile int32_t t141 = -11;

    t141 = (x597!=((x598/x599)%x600));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x601 = INT64_MIN;
	volatile uint16_t x602 = UINT16_MAX;
	int8_t x603 = -1;
	volatile int32_t t142 = -13034446;

    t142 = (x601!=((x602/x603)%x604));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x605 = -4113955LL;
	uint8_t x607 = 2U;
	int8_t x608 = 1;
	static volatile int32_t t143 = 1;

    t143 = (x605!=((x606/x607)%x608));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x611 = 15444170;
	static uint8_t x612 = 3U;

    t144 = (x609!=((x610/x611)%x612));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x613 = UINT8_MAX;
	volatile uint32_t x614 = 7U;
	volatile int32_t x615 = INT32_MIN;
	int32_t t145 = -48;

    t145 = (x613!=((x614/x615)%x616));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x617 = INT16_MIN;
	volatile int64_t x618 = -1LL;
	static volatile int32_t x619 = INT32_MAX;
	uint64_t x620 = UINT64_MAX;
	int32_t t146 = 0;

    t146 = (x617!=((x618/x619)%x620));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x621 = 1;
	uint64_t x622 = 1063430177205LLU;
	uint32_t x623 = UINT32_MAX;
	uint8_t x624 = UINT8_MAX;
	volatile int32_t t147 = 46;

    t147 = (x621!=((x622/x623)%x624));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x625 = INT64_MAX;
	static int16_t x626 = INT16_MIN;
	int64_t x627 = INT64_MAX;
	uint16_t x628 = 21U;
	static volatile int32_t t148 = -100181;

    t148 = (x625!=((x626/x627)%x628));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x629 = INT64_MIN;
	int32_t x631 = 2690;
	volatile uint16_t x632 = 58U;
	volatile int32_t t149 = 415053329;

    t149 = (x629!=((x630/x631)%x632));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x633 = 14317663U;
	uint16_t x634 = 56U;
	volatile uint8_t x635 = 74U;
	int64_t x636 = -917025042131LL;
	int32_t t150 = -72;

    t150 = (x633!=((x634/x635)%x636));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x637 = INT16_MAX;
	int8_t x638 = 20;
	uint16_t x639 = UINT16_MAX;
	int64_t x640 = -33893379649714LL;
	int32_t t151 = -151647;

    t151 = (x637!=((x638/x639)%x640));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x641 = UINT8_MAX;
	volatile uint64_t x642 = 612724837629467LLU;
	static volatile int32_t x643 = INT32_MIN;
	int32_t x644 = INT32_MIN;
	int32_t t152 = 123264792;

    t152 = (x641!=((x642/x643)%x644));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x645 = -3763LL;
	static int32_t x646 = INT32_MAX;
	int64_t x647 = 385640463636748LL;
	uint32_t x648 = 1625982U;
	static int32_t t153 = -1;

    t153 = (x645!=((x646/x647)%x648));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x649 = -1;
	int16_t x650 = 1;
	int8_t x651 = -38;
	uint16_t x652 = 592U;
	int32_t t154 = 110616;

    t154 = (x649!=((x650/x651)%x652));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x654 = INT32_MIN;
	volatile uint64_t x655 = 56069304049469174LLU;
	volatile int64_t x656 = INT64_MIN;
	static int32_t t155 = -16053;

    t155 = (x653!=((x654/x655)%x656));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x658 = INT64_MIN;
	static uint64_t x659 = 8865217LLU;
	int32_t t156 = 77453;

    t156 = (x657!=((x658/x659)%x660));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x661 = 0U;
	int32_t x662 = -95266;
	static volatile int8_t x663 = INT8_MIN;
	static volatile int16_t x664 = -8;
	int32_t t157 = 3231599;

    t157 = (x661!=((x662/x663)%x664));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x665 = -1LL;
	int8_t x667 = INT8_MIN;
	static volatile int32_t t158 = -2;

    t158 = (x665!=((x666/x667)%x668));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x669 = 7330U;
	uint64_t x670 = 22984LLU;
	volatile int64_t x671 = INT64_MAX;
	static volatile int16_t x672 = -1;
	int32_t t159 = 46997;

    t159 = (x669!=((x670/x671)%x672));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x677 = 30;
	int32_t x678 = -1;
	int16_t x679 = INT16_MIN;
	volatile int64_t x680 = INT64_MIN;
	volatile int32_t t160 = 3118141;

    t160 = (x677!=((x678/x679)%x680));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x681 = INT8_MAX;
	static int32_t x682 = INT32_MIN;
	uint32_t x684 = 439U;
	volatile int32_t t161 = 407865627;

    t161 = (x681!=((x682/x683)%x684));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x685 = -683582;
	int32_t x686 = -1;
	int32_t t162 = 96073425;

    t162 = (x685!=((x686/x687)%x688));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x689 = 3167414993857LLU;
	uint8_t x690 = 12U;
	int64_t x691 = INT64_MIN;
	int32_t x692 = INT32_MAX;
	int32_t t163 = 11;

    t163 = (x689!=((x690/x691)%x692));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x693 = 1U;
	int64_t x694 = INT64_MIN;
	int32_t x695 = INT32_MAX;
	volatile int32_t x696 = -3894;

    t164 = (x693!=((x694/x695)%x696));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x698 = 174165329LLU;
	int32_t x699 = INT32_MIN;
	int16_t x700 = 13;
	int32_t t165 = -13489930;

    t165 = (x697!=((x698/x699)%x700));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x702 = INT16_MIN;
	int32_t x703 = -1;
	uint32_t x704 = 2453U;

    t166 = (x701!=((x702/x703)%x704));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x706 = UINT64_MAX;
	uint8_t x707 = UINT8_MAX;
	int32_t x708 = 278246;

    t167 = (x705!=((x706/x707)%x708));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x709 = INT32_MAX;
	static uint64_t x711 = UINT64_MAX;
	volatile int32_t x712 = INT32_MIN;

    t168 = (x709!=((x710/x711)%x712));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x713 = INT64_MAX;
	int16_t x714 = INT16_MIN;
	static volatile int16_t x716 = -954;
	static volatile int32_t t169 = 18938538;

    t169 = (x713!=((x714/x715)%x716));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x718 = INT32_MAX;
	static int16_t x719 = INT16_MIN;
	int32_t x720 = INT32_MIN;
	static int32_t t170 = 39286380;

    t170 = (x717!=((x718/x719)%x720));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x721 = UINT32_MAX;
	volatile int32_t x722 = INT32_MIN;
	int64_t x724 = 65292657774LL;
	int32_t t171 = 2569;

    t171 = (x721!=((x722/x723)%x724));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x725 = -1;
	int64_t x726 = INT64_MAX;
	int8_t x727 = INT8_MAX;
	volatile int32_t x728 = INT32_MIN;
	int32_t t172 = -24449;

    t172 = (x725!=((x726/x727)%x728));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x730 = INT8_MAX;
	static int64_t x731 = INT64_MIN;
	volatile int32_t t173 = -2;

    t173 = (x729!=((x730/x731)%x732));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x733 = -1;
	static int16_t x734 = -1;
	int32_t x735 = INT32_MIN;
	int8_t x736 = 31;

    t174 = (x733!=((x734/x735)%x736));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x739 = -1LL;
	uint16_t x740 = 598U;
	int32_t t175 = 7;

    t175 = (x737!=((x738/x739)%x740));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x741 = INT32_MIN;
	volatile int32_t x743 = INT32_MAX;
	int32_t t176 = 164545;

    t176 = (x741!=((x742/x743)%x744));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x746 = INT64_MIN;
	int32_t x747 = -2955;
	int32_t x748 = -1;
	volatile int32_t t177 = 3847;

    t177 = (x745!=((x746/x747)%x748));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	int64_t x750 = INT64_MIN;
	int32_t t178 = 73963468;

    t178 = (x749!=((x750/x751)%x752));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x753 = INT64_MAX;
	uint8_t x754 = 99U;
	static int8_t x756 = INT8_MIN;
	volatile int32_t t179 = -151475383;

    t179 = (x753!=((x754/x755)%x756));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x757 = 6347;
	volatile uint8_t x758 = 2U;
	volatile int64_t x759 = INT64_MIN;
	int8_t x760 = 5;
	volatile int32_t t180 = 70;

    t180 = (x757!=((x758/x759)%x760));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x761 = INT16_MAX;
	int64_t x762 = INT64_MAX;
	int64_t x763 = INT64_MAX;
	volatile uint8_t x764 = UINT8_MAX;
	volatile int32_t t181 = 695;

    t181 = (x761!=((x762/x763)%x764));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x766 = 1;
	int64_t x767 = INT64_MIN;

    t182 = (x765!=((x766/x767)%x768));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x769 = 7U;
	static int8_t x770 = INT8_MAX;
	int16_t x771 = INT16_MAX;
	static int16_t x772 = INT16_MIN;
	volatile int32_t t183 = 18030203;

    t183 = (x769!=((x770/x771)%x772));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x774 = INT16_MAX;
	static int64_t x775 = -1710250843206088LL;
	uint32_t x776 = 657U;
	static int32_t t184 = -10352;

    t184 = (x773!=((x774/x775)%x776));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x777 = INT64_MAX;
	uint16_t x778 = UINT16_MAX;
	int8_t x779 = INT8_MAX;
	int64_t x780 = INT64_MAX;
	volatile int32_t t185 = -13894;

    t185 = (x777!=((x778/x779)%x780));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x781 = UINT16_MAX;
	int16_t x782 = -3010;
	int32_t x783 = INT32_MIN;
	uint32_t x784 = UINT32_MAX;
	volatile int32_t t186 = 30867702;

    t186 = (x781!=((x782/x783)%x784));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x785 = INT32_MIN;
	static int8_t x787 = INT8_MIN;
	volatile int32_t t187 = 0;

    t187 = (x785!=((x786/x787)%x788));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x789 = INT16_MAX;
	int32_t x791 = -472;
	int8_t x792 = -1;
	volatile int32_t t188 = 4;

    t188 = (x789!=((x790/x791)%x792));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x794 = -47;
	int16_t x795 = -7056;
	int32_t x796 = INT32_MAX;
	volatile int32_t t189 = -1;

    t189 = (x793!=((x794/x795)%x796));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x798 = 10;
	static int16_t x799 = INT16_MIN;
	int32_t t190 = 2594;

    t190 = (x797!=((x798/x799)%x800));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x801 = UINT64_MAX;
	int32_t x802 = 3038499;
	int32_t x803 = -33;
	int32_t x804 = -59083;
	volatile int32_t t191 = -28337605;

    t191 = (x801!=((x802/x803)%x804));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x808 = 4U;
	volatile int32_t t192 = -8990207;

    t192 = (x805!=((x806/x807)%x808));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x809 = 1;
	int16_t x810 = 3;
	uint16_t x812 = 6955U;
	int32_t t193 = -36;

    t193 = (x809!=((x810/x811)%x812));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x813 = INT64_MIN;
	volatile uint16_t x814 = 96U;
	int8_t x815 = 25;
	int16_t x816 = -602;
	static volatile int32_t t194 = 790924347;

    t194 = (x813!=((x814/x815)%x816));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x817 = -1;
	int64_t x818 = INT64_MIN;
	uint8_t x819 = 21U;
	int32_t x820 = INT32_MIN;

    t195 = (x817!=((x818/x819)%x820));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x821 = 3;
	int64_t x822 = INT64_MAX;
	uint32_t x823 = UINT32_MAX;
	int16_t x824 = -101;

    t196 = (x821!=((x822/x823)%x824));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x825 = 5469634U;
	int16_t x826 = -2118;
	uint64_t x827 = UINT64_MAX;
	int32_t t197 = 6904;

    t197 = (x825!=((x826/x827)%x828));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x829 = 354LL;
	static volatile int16_t x830 = 19;
	volatile uint32_t x831 = 16U;
	volatile int8_t x832 = 19;
	volatile int32_t t198 = -123849396;

    t198 = (x829!=((x830/x831)%x832));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x834 = INT16_MIN;
	int32_t x835 = INT32_MIN;
	int32_t x836 = INT32_MIN;
	int32_t t199 = -721999900;

    t199 = (x833!=((x834/x835)%x836));

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

