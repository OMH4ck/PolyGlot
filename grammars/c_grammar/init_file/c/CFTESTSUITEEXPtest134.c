
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

int8_t x5 = -23;
int8_t x6 = INT8_MIN;
static uint16_t x12 = UINT16_MAX;
int16_t x18 = INT16_MAX;
int8_t x19 = INT8_MIN;
uint16_t x22 = UINT16_MAX;
int64_t x23 = 3500341LL;
int16_t x25 = INT16_MAX;
volatile int16_t x27 = INT16_MIN;
int8_t x29 = 6;
int16_t x43 = 38;
int16_t x46 = 2163;
volatile int32_t t8 = 10;
uint16_t x50 = 1419U;
int32_t t9 = 1795282;
int32_t x55 = INT32_MAX;
uint32_t x60 = 4484U;
int64_t x61 = -1LL;
volatile int8_t x63 = INT8_MIN;
volatile int32_t t12 = -846;
uint32_t x89 = 35215U;
uint8_t x90 = 13U;
static uint64_t x93 = UINT64_MAX;
int8_t x102 = -1;
static volatile int32_t t25 = -3069;
volatile int32_t t27 = -1;
uint32_t x141 = 9042237U;
int32_t t31 = -516126390;
volatile int32_t x154 = INT32_MIN;
int16_t x156 = INT16_MIN;
static volatile int64_t x158 = INT64_MAX;
int64_t x174 = -1LL;
int16_t x176 = INT16_MIN;
int32_t t37 = -90;
int8_t x183 = 2;
static int64_t x189 = INT64_MIN;
uint8_t x191 = 74U;
static int16_t x193 = -1;
volatile int64_t x201 = 163930898180240LL;
int32_t x202 = -1;
static int64_t x212 = INT64_MIN;
uint64_t x214 = UINT64_MAX;
uint8_t x218 = 61U;
volatile int64_t x220 = -1LL;
int32_t t46 = -1;
volatile int16_t x223 = -1;
volatile int32_t t47 = -48153902;
uint16_t x231 = 476U;
uint16_t x233 = 19U;
static int64_t x243 = INT64_MIN;
int32_t x255 = -1;
int32_t t56 = -1465;
volatile int8_t x272 = -9;
int32_t t59 = 3781;
int64_t x279 = -1LL;
static volatile int32_t t60 = 373288;
uint8_t x285 = UINT8_MAX;
int8_t x297 = INT8_MIN;
volatile uint16_t x299 = 57U;
static uint32_t x306 = UINT32_MAX;
static volatile int32_t t64 = -98;
volatile uint8_t x313 = UINT8_MAX;
int64_t x314 = -1LL;
volatile uint64_t x317 = 177927717053183LLU;
volatile int32_t t70 = -175706;
volatile int32_t t71 = -20;
volatile uint32_t x346 = 56U;
int16_t x356 = -1;
int32_t t75 = -10890;
int32_t t80 = 2862;
int8_t x379 = 0;
int16_t x380 = -1;
int32_t x389 = -1;
volatile int8_t x390 = INT8_MAX;
int8_t x399 = -1;
static volatile int16_t x420 = -14176;
volatile int32_t t90 = -46195815;
uint64_t x421 = UINT64_MAX;
uint8_t x422 = 3U;
int16_t x423 = INT16_MIN;
int8_t x427 = INT8_MIN;
static uint64_t x432 = 134LLU;
int8_t x433 = INT8_MIN;
volatile uint64_t x435 = UINT64_MAX;
uint16_t x441 = 2021U;
volatile uint8_t x449 = 6U;
volatile int16_t x455 = INT16_MAX;
static uint32_t x468 = UINT32_MAX;
static uint16_t x471 = 2453U;
volatile int32_t t103 = 60929;
int64_t x479 = -3278048586363219904LL;
int64_t x490 = INT64_MAX;
static volatile uint64_t x501 = 488238186LLU;
int32_t x507 = -14779;
uint64_t x508 = 48694859LLU;
static int32_t t112 = 118;
int32_t x513 = INT32_MAX;
int64_t x519 = -1LL;
int64_t x520 = 5LL;
static int32_t t114 = 444031;
int64_t x532 = -18232798512LL;
int16_t x533 = -15;
int32_t x544 = -1;
uint32_t x545 = 718275662U;
uint8_t x546 = 109U;
static int32_t x550 = -1;
uint32_t x567 = 3U;
uint64_t x586 = 123110268LLU;
uint64_t x593 = UINT64_MAX;
static int8_t x596 = INT8_MIN;
uint32_t x598 = UINT32_MAX;
int16_t x607 = INT16_MIN;
int8_t x611 = -3;
static uint8_t x613 = UINT8_MAX;
int64_t x614 = INT64_MAX;
int32_t x617 = -1;
static volatile int32_t t136 = 573292;
volatile int32_t t137 = -45432;
int8_t x626 = -37;
volatile int32_t t138 = 56213231;
static int32_t x631 = INT32_MAX;
int32_t t139 = 4;
int32_t x633 = INT32_MIN;
int16_t x636 = INT16_MIN;
int32_t x639 = INT32_MIN;
int32_t t141 = 0;
static int64_t x642 = -7LL;
volatile uint8_t x644 = UINT8_MAX;
uint32_t x646 = 6340U;
static uint8_t x649 = UINT8_MAX;
uint64_t x652 = 2238867698593909LLU;
int16_t x659 = -1023;
int16_t x664 = INT16_MIN;
static uint32_t x667 = UINT32_MAX;
int8_t x672 = INT8_MAX;
int32_t t149 = -108;
volatile int8_t x673 = INT8_MIN;
int16_t x686 = INT16_MAX;
int64_t x689 = 100LL;
static uint8_t x692 = 5U;
volatile int16_t x709 = -1;
static uint64_t x719 = 4255576451388865LLU;
uint64_t x732 = 25532649LLU;
uint16_t x737 = 2U;
static int8_t x738 = -1;
uint8_t x742 = 3U;
uint32_t x745 = 453U;
static uint64_t x748 = UINT64_MAX;
int32_t t165 = 500454;
volatile int64_t x762 = 10522170LL;
volatile uint32_t x763 = 29679U;
uint32_t x768 = 382230391U;
volatile int32_t t171 = 160;
uint64_t x773 = 3923216LLU;
uint32_t x774 = 1264103460U;
static volatile int32_t t172 = 24;
static uint32_t x777 = 721918203U;
int16_t x779 = -1;
volatile int64_t x787 = -1LL;
volatile int32_t t175 = 123323;
int16_t x789 = -1;
int32_t x790 = INT32_MIN;
int32_t t176 = -15010167;
uint8_t x800 = 62U;
volatile int8_t x802 = INT8_MIN;
int64_t x804 = -4397098042154LL;
static int32_t t180 = 1;
int64_t x810 = INT64_MIN;
volatile uint64_t x811 = 605470702025280LLU;
int64_t x812 = INT64_MIN;
int32_t t182 = -472071329;
volatile int64_t x817 = INT64_MIN;
static int8_t x818 = INT8_MIN;
static uint64_t x824 = 8843651532129LLU;
int32_t t185 = -192;
int64_t x847 = -66466LL;
uint16_t x858 = 6U;
int8_t x874 = INT8_MIN;
int32_t x876 = INT32_MAX;
static int32_t t195 = -15;
int32_t t196 = 1;
int32_t x881 = INT32_MAX;
static int32_t t197 = 18;
int32_t x889 = INT32_MAX;
uint32_t x892 = 3U;
int32_t t199 = 8314102;


void f0(void) {
    	static volatile int16_t x7 = INT16_MIN;
	static uint8_t x8 = UINT8_MAX;
	volatile int32_t t0 = -420;

    t0 = (x5==((x6+x7)<=x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x9 = -1;
	static int64_t x10 = -21525LL;
	int16_t x11 = 1707;
	int32_t t1 = -5;

    t1 = (x9==((x10+x11)<=x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	int32_t t2 = -531456;

    t2 = (x17==((x18+x19)<=x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = -970148460580LL;
	uint16_t x24 = 721U;
	volatile int32_t t3 = -4050;

    t3 = (x21==((x22+x23)<=x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x26 = -1LL;
	int64_t x28 = 521997LL;
	volatile int32_t t4 = 0;

    t4 = (x25==((x26+x27)<=x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x30 = 78456874422794681LLU;
	int64_t x31 = 887LL;
	int8_t x32 = 1;
	static int32_t t5 = -129121531;

    t5 = (x29==((x30+x31)<=x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x33 = UINT64_MAX;
	static uint32_t x34 = 23U;
	uint32_t x35 = 331504504U;
	uint64_t x36 = 17742733427838LLU;
	volatile int32_t t6 = -1418254;

    t6 = (x33==((x34+x35)<=x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x41 = 1LLU;
	int32_t x42 = -1;
	int64_t x44 = 1014990LL;
	int32_t t7 = -987206552;

    t7 = (x41==((x42+x43)<=x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x45 = INT8_MAX;
	int8_t x47 = INT8_MAX;
	int64_t x48 = INT64_MIN;

    t8 = (x45==((x46+x47)<=x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x49 = UINT16_MAX;
	static int8_t x51 = -1;
	int32_t x52 = 133381;

    t9 = (x49==((x50+x51)<=x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = UINT32_MAX;
	int8_t x54 = -1;
	int64_t x56 = INT64_MIN;
	volatile int32_t t10 = 195;

    t10 = (x53==((x54+x55)<=x56));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x57 = INT64_MIN;
	static volatile uint64_t x58 = 255733322862144LLU;
	int16_t x59 = -14795;
	int32_t t11 = -58;

    t11 = (x57==((x58+x59)<=x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x62 = 6108572751LL;
	volatile int64_t x64 = -146438495468272LL;

    t12 = (x61==((x62+x63)<=x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x65 = -1;
	int32_t x66 = -62978350;
	uint32_t x67 = UINT32_MAX;
	static uint64_t x68 = 6LLU;
	int32_t t13 = 223848;

    t13 = (x65==((x66+x67)<=x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = INT32_MAX;
	uint8_t x70 = 14U;
	uint32_t x71 = 1861U;
	static int32_t x72 = 131591409;
	volatile int32_t t14 = -384862;

    t14 = (x69==((x70+x71)<=x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = INT32_MIN;
	uint32_t x74 = 64U;
	int64_t x75 = INT64_MIN;
	volatile int16_t x76 = INT16_MIN;
	static int32_t t15 = -84284305;

    t15 = (x73==((x74+x75)<=x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x77 = INT8_MIN;
	uint32_t x78 = 1526088U;
	int32_t x79 = 174;
	int32_t x80 = -1681;
	int32_t t16 = -101854777;

    t16 = (x77==((x78+x79)<=x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	static int32_t x83 = 48694829;
	int8_t x84 = 3;
	static int32_t t17 = -1389;

    t17 = (x81==((x82+x83)<=x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x91 = 0U;
	int32_t x92 = -1;
	volatile int32_t t18 = 160146;

    t18 = (x89==((x90+x91)<=x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x94 = 0;
	uint64_t x95 = 21639688247249LLU;
	int8_t x96 = INT8_MAX;
	int32_t t19 = 303807;

    t19 = (x93==((x94+x95)<=x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x97 = 2634786042301603236LLU;
	uint64_t x98 = 14351000137340918LLU;
	volatile int16_t x99 = 1541;
	uint16_t x100 = 1U;
	volatile int32_t t20 = -625;

    t20 = (x97==((x98+x99)<=x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x101 = -1LL;
	uint64_t x103 = UINT64_MAX;
	volatile int32_t x104 = INT32_MAX;
	volatile int32_t t21 = -2769536;

    t21 = (x101==((x102+x103)<=x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x109 = -1;
	volatile int8_t x110 = INT8_MAX;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;
	volatile int32_t t22 = 1588618;

    t22 = (x109==((x110+x111)<=x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x113 = -58;
	int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MAX;
	volatile uint16_t x116 = 0U;
	volatile int32_t t23 = 191821;

    t23 = (x113==((x114+x115)<=x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x117 = -16226761862134153LL;
	static int64_t x118 = -16085119682LL;
	int32_t x119 = INT32_MIN;
	static volatile int16_t x120 = -1;
	volatile int32_t t24 = -1;

    t24 = (x117==((x118+x119)<=x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x121 = -9320;
	int64_t x122 = -1LL;
	int64_t x123 = -1LL;
	int8_t x124 = -4;

    t25 = (x121==((x122+x123)<=x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x129 = UINT32_MAX;
	int32_t x130 = 15;
	uint8_t x131 = 100U;
	static int32_t x132 = 22717266;
	volatile int32_t t26 = 1678;

    t26 = (x129==((x130+x131)<=x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x133 = INT32_MIN;
	volatile int32_t x134 = INT32_MIN;
	volatile uint16_t x135 = 391U;
	volatile uint8_t x136 = UINT8_MAX;

    t27 = (x133==((x134+x135)<=x136));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x137 = 12645;
	int16_t x138 = INT16_MIN;
	uint8_t x139 = 10U;
	volatile uint32_t x140 = UINT32_MAX;
	volatile int32_t t28 = -135459;

    t28 = (x137==((x138+x139)<=x140));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x142 = INT32_MIN;
	volatile uint64_t x143 = 246157272329038353LLU;
	int16_t x144 = INT16_MIN;
	volatile int32_t t29 = -12938639;

    t29 = (x141==((x142+x143)<=x144));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint8_t x145 = 10U;
	int16_t x146 = -4;
	uint32_t x147 = 63693U;
	static volatile int16_t x148 = INT16_MAX;
	volatile int32_t t30 = 388777120;

    t30 = (x145==((x146+x147)<=x148));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x149 = 32487828U;
	static int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MAX;
	int16_t x152 = INT16_MIN;

    t31 = (x149==((x150+x151)<=x152));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x153 = 36U;
	uint32_t x155 = 482U;
	int32_t t32 = 13;

    t32 = (x153==((x154+x155)<=x156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x157 = 24U;
	static volatile int32_t x159 = -1;
	int32_t x160 = INT32_MIN;
	int32_t t33 = -437;

    t33 = (x157==((x158+x159)<=x160));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x161 = INT16_MIN;
	static uint16_t x162 = UINT16_MAX;
	int8_t x163 = -5;
	volatile int32_t x164 = INT32_MAX;
	volatile int32_t t34 = -5114423;

    t34 = (x161==((x162+x163)<=x164));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x165 = -1;
	volatile int8_t x166 = INT8_MIN;
	uint16_t x167 = 52U;
	static volatile int16_t x168 = INT16_MIN;
	volatile int32_t t35 = -472;

    t35 = (x165==((x166+x167)<=x168));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x169 = 49U;
	int64_t x170 = -300179LL;
	int8_t x171 = -2;
	int16_t x172 = INT16_MAX;
	volatile int32_t t36 = 26411044;

    t36 = (x169==((x170+x171)<=x172));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x173 = UINT32_MAX;
	int16_t x175 = -16;

    t37 = (x173==((x174+x175)<=x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x181 = INT8_MAX;
	static int16_t x182 = -1;
	volatile int32_t x184 = INT32_MIN;
	int32_t t38 = -3632;

    t38 = (x181==((x182+x183)<=x184));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x185 = INT8_MAX;
	int64_t x186 = INT64_MIN;
	uint32_t x187 = UINT32_MAX;
	static int16_t x188 = INT16_MAX;
	static int32_t t39 = 480;

    t39 = (x185==((x186+x187)<=x188));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x190 = -1;
	volatile uint16_t x192 = UINT16_MAX;
	static volatile int32_t t40 = -3536;

    t40 = (x189==((x190+x191)<=x192));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x194 = 217U;
	uint32_t x195 = UINT32_MAX;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t41 = -41512;

    t41 = (x193==((x194+x195)<=x196));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x203 = 130935190001LLU;
	int64_t x204 = -8404890474LL;
	int32_t t42 = 131545390;

    t42 = (x201==((x202+x203)<=x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x205 = -89;
	uint16_t x206 = UINT16_MAX;
	static int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MAX;
	int32_t t43 = 263327344;

    t43 = (x205==((x206+x207)<=x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x209 = 2U;
	int32_t x210 = 135;
	volatile uint64_t x211 = 6530016816607789LLU;
	volatile int32_t t44 = 26586;

    t44 = (x209==((x210+x211)<=x212));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x213 = INT64_MAX;
	volatile uint64_t x215 = 293821023784380LLU;
	int64_t x216 = INT64_MIN;
	volatile int32_t t45 = -1;

    t45 = (x213==((x214+x215)<=x216));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x217 = INT64_MIN;
	uint32_t x219 = 362U;

    t46 = (x217==((x218+x219)<=x220));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x221 = 62U;
	int16_t x222 = -6;
	volatile int16_t x224 = INT16_MIN;

    t47 = (x221==((x222+x223)<=x224));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x225 = UINT16_MAX;
	int32_t x226 = -196093;
	int64_t x227 = -1LL;
	volatile int64_t x228 = 3705642419318484LL;
	volatile int32_t t48 = 4664367;

    t48 = (x225==((x226+x227)<=x228));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x229 = 2655353391312LLU;
	int32_t x230 = -101;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t49 = -429124097;

    t49 = (x229==((x230+x231)<=x232));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x234 = 107U;
	uint32_t x235 = 40517U;
	int16_t x236 = -3;
	volatile int32_t t50 = -30;

    t50 = (x233==((x234+x235)<=x236));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x237 = UINT8_MAX;
	int8_t x238 = INT8_MAX;
	uint32_t x239 = 1684667725U;
	static volatile int16_t x240 = 13141;
	volatile int32_t t51 = 14176091;

    t51 = (x237==((x238+x239)<=x240));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x241 = -1;
	uint64_t x242 = 241LLU;
	int8_t x244 = -1;
	volatile int32_t t52 = -159685538;

    t52 = (x241==((x242+x243)<=x244));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x245 = INT16_MIN;
	static int32_t x246 = 1070536;
	int32_t x247 = INT32_MIN;
	uint32_t x248 = UINT32_MAX;
	int32_t t53 = -26796;

    t53 = (x245==((x246+x247)<=x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x249 = INT32_MIN;
	uint64_t x250 = 7612LLU;
	int32_t x251 = 1;
	static int8_t x252 = 1;
	static volatile int32_t t54 = 3;

    t54 = (x249==((x250+x251)<=x252));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x253 = -230993697397LL;
	static uint32_t x254 = UINT32_MAX;
	uint8_t x256 = 2U;
	int32_t t55 = 208367691;

    t55 = (x253==((x254+x255)<=x256));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x257 = 2U;
	int8_t x258 = INT8_MIN;
	volatile int16_t x259 = 49;
	int64_t x260 = -3382254LL;

    t56 = (x257==((x258+x259)<=x260));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x261 = 53676;
	int64_t x262 = 543162798424LL;
	int16_t x263 = INT16_MIN;
	static int64_t x264 = -1LL;
	volatile int32_t t57 = -7;

    t57 = (x261==((x262+x263)<=x264));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x269 = INT64_MAX;
	volatile uint16_t x270 = UINT16_MAX;
	volatile int32_t x271 = -1;
	volatile int32_t t58 = -1;

    t58 = (x269==((x270+x271)<=x272));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x273 = 5387U;
	volatile uint16_t x274 = UINT16_MAX;
	uint16_t x275 = 908U;
	int16_t x276 = 0;

    t59 = (x273==((x274+x275)<=x276));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x277 = INT16_MAX;
	int16_t x278 = 782;
	static uint16_t x280 = 65U;

    t60 = (x277==((x278+x279)<=x280));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x286 = 107U;
	volatile int32_t x287 = -1;
	uint64_t x288 = 35076561906LLU;
	static volatile int32_t t61 = 0;

    t61 = (x285==((x286+x287)<=x288));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x293 = 377545551U;
	volatile int16_t x294 = 9746;
	static uint64_t x295 = UINT64_MAX;
	uint16_t x296 = UINT16_MAX;
	int32_t t62 = 39;

    t62 = (x293==((x294+x295)<=x296));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x298 = 0;
	volatile int16_t x300 = INT16_MIN;
	volatile int32_t t63 = 1038653886;

    t63 = (x297==((x298+x299)<=x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x305 = 24;
	volatile int8_t x307 = INT8_MAX;
	int8_t x308 = INT8_MIN;

    t64 = (x305==((x306+x307)<=x308));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x309 = -1LL;
	volatile int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MAX;
	static int16_t x312 = INT16_MIN;
	int32_t t65 = -309;

    t65 = (x309==((x310+x311)<=x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x315 = 227552684U;
	int8_t x316 = INT8_MIN;
	int32_t t66 = 753542;

    t66 = (x313==((x314+x315)<=x316));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x318 = INT8_MAX;
	uint8_t x319 = 21U;
	static int8_t x320 = INT8_MIN;
	int32_t t67 = -224810;

    t67 = (x317==((x318+x319)<=x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x321 = -1;
	int64_t x322 = INT64_MAX;
	int32_t x323 = -11954691;
	uint64_t x324 = UINT64_MAX;
	int32_t t68 = 0;

    t68 = (x321==((x322+x323)<=x324));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x325 = 4U;
	int32_t x326 = -1;
	int8_t x327 = INT8_MIN;
	uint8_t x328 = 1U;
	int32_t t69 = 655406;

    t69 = (x325==((x326+x327)<=x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x333 = 1;
	int16_t x334 = INT16_MIN;
	int16_t x335 = -888;
	static uint8_t x336 = UINT8_MAX;

    t70 = (x333==((x334+x335)<=x336));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x337 = 2U;
	volatile int16_t x338 = 162;
	static volatile int16_t x339 = INT16_MIN;
	int16_t x340 = 1723;

    t71 = (x337==((x338+x339)<=x340));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x341 = INT16_MIN;
	int64_t x342 = -1LL;
	uint32_t x343 = 125414U;
	volatile uint8_t x344 = 4U;
	int32_t t72 = -725820335;

    t72 = (x341==((x342+x343)<=x344));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x345 = INT64_MAX;
	volatile int32_t x347 = INT32_MAX;
	volatile uint8_t x348 = 1U;
	int32_t t73 = 13357276;

    t73 = (x345==((x346+x347)<=x348));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x349 = INT8_MIN;
	static int64_t x350 = 998753995LL;
	static int32_t x351 = -12756;
	int8_t x352 = -16;
	static int32_t t74 = 2;

    t74 = (x349==((x350+x351)<=x352));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x353 = INT8_MAX;
	uint32_t x354 = 138254809U;
	int8_t x355 = INT8_MIN;

    t75 = (x353==((x354+x355)<=x356));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x357 = -1LL;
	static uint16_t x358 = UINT16_MAX;
	static int8_t x359 = INT8_MIN;
	volatile uint8_t x360 = 7U;
	int32_t t76 = 3711;

    t76 = (x357==((x358+x359)<=x360));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x361 = INT32_MAX;
	int16_t x362 = -1;
	int8_t x363 = INT8_MAX;
	int64_t x364 = 1LL;
	int32_t t77 = 192;

    t77 = (x361==((x362+x363)<=x364));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x365 = 1629583662U;
	int64_t x366 = -346102LL;
	int16_t x367 = INT16_MAX;
	int8_t x368 = -1;
	int32_t t78 = -17007;

    t78 = (x365==((x366+x367)<=x368));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x369 = INT32_MAX;
	static uint8_t x370 = 109U;
	static volatile uint8_t x371 = UINT8_MAX;
	int64_t x372 = INT64_MAX;
	static int32_t t79 = 84;

    t79 = (x369==((x370+x371)<=x372));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x373 = 0U;
	static int32_t x374 = -1;
	int8_t x375 = -1;
	int32_t x376 = -24;

    t80 = (x373==((x374+x375)<=x376));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x377 = INT32_MIN;
	uint8_t x378 = 31U;
	static volatile int32_t t81 = 28;

    t81 = (x377==((x378+x379)<=x380));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x381 = INT8_MIN;
	static uint32_t x382 = UINT32_MAX;
	int32_t x383 = INT32_MIN;
	int16_t x384 = 29;
	volatile int32_t t82 = -839985058;

    t82 = (x381==((x382+x383)<=x384));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x385 = 1U;
	int16_t x386 = 1633;
	volatile uint64_t x387 = 1192LLU;
	int16_t x388 = INT16_MAX;
	volatile int32_t t83 = 667;

    t83 = (x385==((x386+x387)<=x388));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x391 = -1LL;
	volatile int64_t x392 = -1LL;
	int32_t t84 = 11001;

    t84 = (x389==((x390+x391)<=x392));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x393 = -108738144717063851LL;
	int8_t x394 = INT8_MAX;
	int32_t x395 = -1;
	uint16_t x396 = 8U;
	int32_t t85 = -6467;

    t85 = (x393==((x394+x395)<=x396));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x397 = INT8_MIN;
	int32_t x398 = -1;
	int64_t x400 = INT64_MAX;
	volatile int32_t t86 = 8602052;

    t86 = (x397==((x398+x399)<=x400));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x405 = 14874351;
	int16_t x406 = INT16_MIN;
	static int16_t x407 = INT16_MIN;
	int64_t x408 = INT64_MAX;
	volatile int32_t t87 = -2032595;

    t87 = (x405==((x406+x407)<=x408));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x409 = INT32_MAX;
	int16_t x410 = -580;
	int8_t x411 = INT8_MAX;
	volatile int32_t x412 = -4038566;
	int32_t t88 = 0;

    t88 = (x409==((x410+x411)<=x412));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x413 = INT32_MIN;
	static int32_t x414 = 259185;
	static uint8_t x415 = 52U;
	static uint64_t x416 = 33133788055096912LLU;
	int32_t t89 = -101;

    t89 = (x413==((x414+x415)<=x416));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x417 = INT64_MAX;
	uint8_t x418 = UINT8_MAX;
	volatile uint64_t x419 = 7402031389LLU;

    t90 = (x417==((x418+x419)<=x420));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x424 = INT16_MAX;
	int32_t t91 = -13026349;

    t91 = (x421==((x422+x423)<=x424));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x425 = 2;
	static volatile uint16_t x426 = 3788U;
	int32_t x428 = -1;
	int32_t t92 = -2533559;

    t92 = (x425==((x426+x427)<=x428));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x429 = 2U;
	volatile uint32_t x430 = UINT32_MAX;
	uint32_t x431 = 15683U;
	volatile int32_t t93 = -2998580;

    t93 = (x429==((x430+x431)<=x432));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x434 = 78U;
	uint8_t x436 = 3U;
	volatile int32_t t94 = -1369749;

    t94 = (x433==((x434+x435)<=x436));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x437 = 1;
	uint64_t x438 = 197997756LLU;
	volatile int64_t x439 = INT64_MIN;
	int8_t x440 = INT8_MAX;
	static int32_t t95 = 118;

    t95 = (x437==((x438+x439)<=x440));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x442 = 14817U;
	int8_t x443 = -1;
	static volatile uint32_t x444 = UINT32_MAX;
	int32_t t96 = 7734;

    t96 = (x441==((x442+x443)<=x444));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x450 = 1LLU;
	int64_t x451 = -529063205LL;
	int32_t x452 = INT32_MAX;
	int32_t t97 = -36179762;

    t97 = (x449==((x450+x451)<=x452));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x453 = INT16_MIN;
	static volatile int16_t x454 = INT16_MAX;
	uint32_t x456 = 3334U;
	volatile int32_t t98 = -7;

    t98 = (x453==((x454+x455)<=x456));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int64_t x457 = -1LL;
	uint16_t x458 = 160U;
	int16_t x459 = -1;
	int64_t x460 = INT64_MIN;
	static int32_t t99 = 795183817;

    t99 = (x457==((x458+x459)<=x460));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x461 = 6U;
	int32_t x462 = INT32_MIN;
	static int16_t x463 = 4;
	uint64_t x464 = UINT64_MAX;
	int32_t t100 = 1;

    t100 = (x461==((x462+x463)<=x464));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x465 = INT16_MIN;
	int32_t x466 = -4124;
	uint64_t x467 = 248752LLU;
	int32_t t101 = -2;

    t101 = (x465==((x466+x467)<=x468));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x469 = 2465U;
	static volatile int32_t x470 = INT32_MIN;
	uint16_t x472 = UINT16_MAX;
	static int32_t t102 = 3;

    t102 = (x469==((x470+x471)<=x472));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x473 = 1U;
	uint32_t x474 = 770004734U;
	int64_t x475 = -10409614LL;
	uint16_t x476 = 20184U;

    t103 = (x473==((x474+x475)<=x476));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = INT16_MIN;
	uint8_t x480 = 9U;
	volatile int32_t t104 = -397665031;

    t104 = (x477==((x478+x479)<=x480));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x481 = 7U;
	volatile int64_t x482 = -3776584166735LL;
	uint8_t x483 = 6U;
	int16_t x484 = INT16_MIN;
	int32_t t105 = -19089;

    t105 = (x481==((x482+x483)<=x484));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x485 = INT8_MIN;
	int64_t x486 = -11LL;
	uint8_t x487 = 0U;
	int16_t x488 = INT16_MIN;
	volatile int32_t t106 = 112042232;

    t106 = (x485==((x486+x487)<=x488));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x489 = INT32_MIN;
	static int32_t x491 = 0;
	static volatile int16_t x492 = 6;
	int32_t t107 = 1;

    t107 = (x489==((x490+x491)<=x492));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x493 = UINT32_MAX;
	uint64_t x494 = UINT64_MAX;
	static uint64_t x495 = 161252LLU;
	int32_t x496 = INT32_MIN;
	volatile int32_t t108 = -305041;

    t108 = (x493==((x494+x495)<=x496));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x497 = INT16_MAX;
	static int16_t x498 = 0;
	volatile int8_t x499 = INT8_MIN;
	int64_t x500 = 60LL;
	int32_t t109 = 15587816;

    t109 = (x497==((x498+x499)<=x500));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x502 = UINT16_MAX;
	uint64_t x503 = 80912475LLU;
	volatile uint16_t x504 = 160U;
	int32_t t110 = 3;

    t110 = (x501==((x502+x503)<=x504));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x505 = INT8_MAX;
	int16_t x506 = 6;
	int32_t t111 = -1;

    t111 = (x505==((x506+x507)<=x508));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x509 = -11;
	int32_t x510 = -52;
	int8_t x511 = INT8_MIN;
	volatile int8_t x512 = -5;

    t112 = (x509==((x510+x511)<=x512));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x514 = 0;
	volatile int16_t x515 = INT16_MIN;
	uint8_t x516 = UINT8_MAX;
	int32_t t113 = 0;

    t113 = (x513==((x514+x515)<=x516));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x517 = INT32_MIN;
	int16_t x518 = 286;

    t114 = (x517==((x518+x519)<=x520));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x521 = 153U;
	uint64_t x522 = UINT64_MAX;
	static int32_t x523 = -1;
	uint8_t x524 = 41U;
	static int32_t t115 = 1494197;

    t115 = (x521==((x522+x523)<=x524));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x525 = 156;
	uint8_t x526 = 13U;
	static volatile int32_t x527 = INT32_MIN;
	volatile uint8_t x528 = UINT8_MAX;
	static volatile int32_t t116 = 8492;

    t116 = (x525==((x526+x527)<=x528));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x529 = UINT8_MAX;
	int16_t x530 = 0;
	static int32_t x531 = -1;
	int32_t t117 = 12297984;

    t117 = (x529==((x530+x531)<=x532));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x534 = 1;
	volatile uint8_t x535 = 0U;
	uint64_t x536 = 1123301290015LLU;
	volatile int32_t t118 = -171859432;

    t118 = (x533==((x534+x535)<=x536));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x537 = INT64_MAX;
	int32_t x538 = -1051088073;
	int16_t x539 = INT16_MIN;
	int32_t x540 = INT32_MIN;
	volatile int32_t t119 = -12575;

    t119 = (x537==((x538+x539)<=x540));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x541 = UINT16_MAX;
	int16_t x542 = -1;
	uint64_t x543 = UINT64_MAX;
	static volatile int32_t t120 = -60;

    t120 = (x541==((x542+x543)<=x544));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x547 = 0U;
	volatile int16_t x548 = -259;
	volatile int32_t t121 = -7;

    t121 = (x545==((x546+x547)<=x548));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x549 = -1;
	uint16_t x551 = 27752U;
	int8_t x552 = 1;
	volatile int32_t t122 = -111682809;

    t122 = (x549==((x550+x551)<=x552));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x553 = -1;
	uint8_t x554 = 0U;
	int8_t x555 = -3;
	int8_t x556 = 35;
	int32_t t123 = 31284;

    t123 = (x553==((x554+x555)<=x556));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x557 = 25U;
	volatile int8_t x558 = -1;
	static uint16_t x559 = 469U;
	int64_t x560 = INT64_MIN;
	volatile int32_t t124 = -861643091;

    t124 = (x557==((x558+x559)<=x560));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x565 = UINT16_MAX;
	volatile int16_t x566 = 1;
	static volatile int16_t x568 = -1;
	volatile int32_t t125 = -418;

    t125 = (x565==((x566+x567)<=x568));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x569 = INT32_MIN;
	int16_t x570 = 6483;
	static uint8_t x571 = 120U;
	uint8_t x572 = 0U;
	volatile int32_t t126 = 622488;

    t126 = (x569==((x570+x571)<=x572));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x577 = INT64_MIN;
	int8_t x578 = -1;
	uint64_t x579 = 259330LLU;
	volatile int32_t x580 = INT32_MIN;
	volatile int32_t t127 = 13328;

    t127 = (x577==((x578+x579)<=x580));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x585 = -1;
	static uint8_t x587 = 3U;
	int16_t x588 = INT16_MAX;
	int32_t t128 = 244672;

    t128 = (x585==((x586+x587)<=x588));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x589 = 3;
	int32_t x590 = -266;
	uint64_t x591 = 16885619365390061LLU;
	int8_t x592 = -15;
	volatile int32_t t129 = -21748;

    t129 = (x589==((x590+x591)<=x592));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x594 = INT8_MIN;
	uint64_t x595 = 1481902867LLU;
	static volatile int32_t t130 = 323853;

    t130 = (x593==((x594+x595)<=x596));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x597 = -5;
	static int16_t x599 = INT16_MAX;
	int32_t x600 = 894;
	int32_t t131 = -26009154;

    t131 = (x597==((x598+x599)<=x600));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x601 = UINT16_MAX;
	volatile uint32_t x602 = 749U;
	volatile int32_t x603 = INT32_MIN;
	int16_t x604 = -1;
	volatile int32_t t132 = 19330660;

    t132 = (x601==((x602+x603)<=x604));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x605 = 1U;
	int32_t x606 = -1;
	int64_t x608 = INT64_MAX;
	volatile int32_t t133 = 1;

    t133 = (x605==((x606+x607)<=x608));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x609 = INT32_MIN;
	uint16_t x610 = 124U;
	int32_t x612 = -62172797;
	int32_t t134 = -32227428;

    t134 = (x609==((x610+x611)<=x612));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x615 = INT32_MIN;
	volatile int16_t x616 = INT16_MIN;
	static int32_t t135 = 654566251;

    t135 = (x613==((x614+x615)<=x616));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x618 = 1;
	int8_t x619 = -5;
	volatile uint32_t x620 = 14257U;

    t136 = (x617==((x618+x619)<=x620));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x621 = INT8_MAX;
	uint8_t x622 = UINT8_MAX;
	int32_t x623 = INT32_MIN;
	int64_t x624 = -1LL;

    t137 = (x621==((x622+x623)<=x624));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x625 = INT16_MAX;
	volatile int16_t x627 = -1;
	uint64_t x628 = 117413LLU;

    t138 = (x625==((x626+x627)<=x628));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x629 = -24011871;
	volatile int64_t x630 = INT64_MIN;
	static int64_t x632 = INT64_MAX;

    t139 = (x629==((x630+x631)<=x632));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x634 = -1;
	uint8_t x635 = 113U;
	volatile int32_t t140 = -49867;

    t140 = (x633==((x634+x635)<=x636));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x637 = INT16_MIN;
	static int8_t x638 = 0;
	static int64_t x640 = INT64_MAX;

    t141 = (x637==((x638+x639)<=x640));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x641 = INT16_MIN;
	int32_t x643 = -28926188;
	volatile int32_t t142 = 66348;

    t142 = (x641==((x642+x643)<=x644));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x645 = -153742599950LL;
	volatile uint64_t x647 = 4423596062024180LLU;
	uint32_t x648 = 63257595U;
	int32_t t143 = -2532;

    t143 = (x645==((x646+x647)<=x648));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x650 = 527976183U;
	static int32_t x651 = INT32_MAX;
	volatile int32_t t144 = -308095183;

    t144 = (x649==((x650+x651)<=x652));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x653 = INT8_MIN;
	static uint32_t x654 = 14076483U;
	int32_t x655 = INT32_MIN;
	int64_t x656 = -1LL;
	static int32_t t145 = -244464;

    t145 = (x653==((x654+x655)<=x656));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x657 = INT32_MIN;
	volatile uint16_t x658 = UINT16_MAX;
	int32_t x660 = INT32_MIN;
	volatile int32_t t146 = -363959;

    t146 = (x657==((x658+x659)<=x660));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x661 = 434534413684362216LLU;
	static int8_t x662 = INT8_MAX;
	int16_t x663 = -1844;
	volatile int32_t t147 = 0;

    t147 = (x661==((x662+x663)<=x664));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x665 = 279U;
	volatile uint16_t x666 = UINT16_MAX;
	int16_t x668 = -5;
	static volatile int32_t t148 = 25;

    t148 = (x665==((x666+x667)<=x668));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x669 = 114903652LLU;
	volatile uint16_t x670 = 0U;
	static uint8_t x671 = 0U;

    t149 = (x669==((x670+x671)<=x672));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x674 = 7415484503197436LLU;
	uint32_t x675 = 978908U;
	int32_t x676 = INT32_MIN;
	volatile int32_t t150 = -165376;

    t150 = (x673==((x674+x675)<=x676));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x677 = 62U;
	uint16_t x678 = UINT16_MAX;
	int16_t x679 = INT16_MIN;
	int32_t x680 = -1;
	static volatile int32_t t151 = 50946;

    t151 = (x677==((x678+x679)<=x680));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x685 = 470LLU;
	static uint8_t x687 = 12U;
	uint64_t x688 = 8950049LLU;
	volatile int32_t t152 = -246;

    t152 = (x685==((x686+x687)<=x688));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x690 = UINT8_MAX;
	uint16_t x691 = 834U;
	int32_t t153 = -89746954;

    t153 = (x689==((x690+x691)<=x692));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x693 = -739234;
	volatile uint8_t x694 = 8U;
	static int32_t x695 = -82671881;
	int32_t x696 = INT32_MIN;
	volatile int32_t t154 = 1556963;

    t154 = (x693==((x694+x695)<=x696));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x697 = INT16_MAX;
	uint8_t x698 = UINT8_MAX;
	uint64_t x699 = 2LLU;
	int16_t x700 = INT16_MIN;
	int32_t t155 = 1;

    t155 = (x697==((x698+x699)<=x700));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x701 = -1LL;
	uint32_t x702 = 6U;
	static int32_t x703 = INT32_MIN;
	static uint16_t x704 = 6U;
	volatile int32_t t156 = -64;

    t156 = (x701==((x702+x703)<=x704));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x710 = -1LL;
	int16_t x711 = 7305;
	uint64_t x712 = 66966810LLU;
	int32_t t157 = -369705;

    t157 = (x709==((x710+x711)<=x712));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x717 = 0U;
	int32_t x718 = INT32_MIN;
	uint64_t x720 = UINT64_MAX;
	static int32_t t158 = -678;

    t158 = (x717==((x718+x719)<=x720));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint64_t x721 = UINT64_MAX;
	int32_t x722 = -1;
	volatile uint32_t x723 = 1040058230U;
	int16_t x724 = INT16_MIN;
	volatile int32_t t159 = 57837;

    t159 = (x721==((x722+x723)<=x724));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x725 = 2008038U;
	int64_t x726 = 3230020964905LL;
	int16_t x727 = INT16_MIN;
	uint64_t x728 = 1034241LLU;
	static volatile int32_t t160 = -16021027;

    t160 = (x725==((x726+x727)<=x728));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x729 = 858U;
	volatile uint64_t x730 = 281737745002LLU;
	uint8_t x731 = UINT8_MAX;
	volatile int32_t t161 = -4750;

    t161 = (x729==((x730+x731)<=x732));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x733 = INT32_MIN;
	volatile uint64_t x734 = UINT64_MAX;
	static int32_t x735 = INT32_MIN;
	int8_t x736 = INT8_MIN;
	int32_t t162 = -2;

    t162 = (x733==((x734+x735)<=x736));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x739 = 15516;
	static volatile int16_t x740 = INT16_MIN;
	static volatile int32_t t163 = -231369796;

    t163 = (x737==((x738+x739)<=x740));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x741 = INT32_MIN;
	static uint16_t x743 = UINT16_MAX;
	int8_t x744 = -10;
	static int32_t t164 = 1609829;

    t164 = (x741==((x742+x743)<=x744));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x746 = 6U;
	static int64_t x747 = INT64_MIN;

    t165 = (x745==((x746+x747)<=x748));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x749 = -481;
	int64_t x750 = -1LL;
	int16_t x751 = INT16_MAX;
	int8_t x752 = -1;
	volatile int32_t t166 = 5936708;

    t166 = (x749==((x750+x751)<=x752));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x753 = 74526;
	int64_t x754 = -1254326061495145939LL;
	volatile int16_t x755 = INT16_MAX;
	int64_t x756 = -1LL;
	volatile int32_t t167 = -1236;

    t167 = (x753==((x754+x755)<=x756));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x757 = INT32_MAX;
	int16_t x758 = INT16_MIN;
	uint8_t x759 = 1U;
	volatile uint8_t x760 = UINT8_MAX;
	int32_t t168 = -194936;

    t168 = (x757==((x758+x759)<=x760));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x761 = 2LLU;
	int8_t x764 = INT8_MAX;
	volatile int32_t t169 = 30;

    t169 = (x761==((x762+x763)<=x764));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x765 = INT8_MAX;
	int32_t x766 = INT32_MIN;
	int64_t x767 = -1LL;
	volatile int32_t t170 = -7440;

    t170 = (x765==((x766+x767)<=x768));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x769 = INT32_MAX;
	int64_t x770 = -233948587441594LL;
	static volatile int16_t x771 = INT16_MIN;
	int32_t x772 = 119973;

    t171 = (x769==((x770+x771)<=x772));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x775 = 5564854LLU;
	int32_t x776 = -1;

    t172 = (x773==((x774+x775)<=x776));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x778 = 3U;
	int16_t x780 = -1;
	volatile int32_t t173 = 10;

    t173 = (x777==((x778+x779)<=x780));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x781 = -1;
	int64_t x782 = -3366803558LL;
	volatile uint16_t x783 = 5363U;
	uint64_t x784 = UINT64_MAX;
	volatile int32_t t174 = -343569;

    t174 = (x781==((x782+x783)<=x784));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x785 = 12U;
	int64_t x786 = -1LL;
	uint32_t x788 = UINT32_MAX;

    t175 = (x785==((x786+x787)<=x788));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x791 = 2049980;
	volatile uint16_t x792 = 56U;

    t176 = (x789==((x790+x791)<=x792));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x793 = INT16_MIN;
	int64_t x794 = -1LL;
	int32_t x795 = -1;
	int64_t x796 = -1LL;
	volatile int32_t t177 = -8;

    t177 = (x793==((x794+x795)<=x796));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x797 = INT16_MAX;
	int16_t x798 = INT16_MIN;
	int16_t x799 = INT16_MIN;
	int32_t t178 = 211;

    t178 = (x797==((x798+x799)<=x800));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x801 = 157177397649731381LLU;
	volatile int16_t x803 = -1;
	static int32_t t179 = 661526900;

    t179 = (x801==((x802+x803)<=x804));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x805 = 7512967U;
	static int8_t x806 = INT8_MIN;
	uint8_t x807 = UINT8_MAX;
	uint64_t x808 = 663553084603492097LLU;

    t180 = (x805==((x806+x807)<=x808));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x809 = 15U;
	int32_t t181 = 3858978;

    t181 = (x809==((x810+x811)<=x812));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x813 = 470LLU;
	volatile int16_t x814 = 946;
	int16_t x815 = 0;
	uint32_t x816 = UINT32_MAX;

    t182 = (x813==((x814+x815)<=x816));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x819 = -539678;
	static volatile uint8_t x820 = 2U;
	static volatile int32_t t183 = 16549354;

    t183 = (x817==((x818+x819)<=x820));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x821 = -1;
	int16_t x822 = 2;
	static int64_t x823 = INT64_MIN;
	int32_t t184 = -43048;

    t184 = (x821==((x822+x823)<=x824));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x825 = -1;
	uint8_t x826 = 1U;
	uint16_t x827 = 2U;
	volatile int32_t x828 = 3;

    t185 = (x825==((x826+x827)<=x828));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x829 = -1;
	static uint64_t x830 = UINT64_MAX;
	int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MIN;
	volatile int32_t t186 = 63;

    t186 = (x829==((x830+x831)<=x832));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x833 = -1LL;
	int16_t x834 = INT16_MIN;
	int64_t x835 = 119640902170613LL;
	uint16_t x836 = UINT16_MAX;
	static volatile int32_t t187 = 21570;

    t187 = (x833==((x834+x835)<=x836));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x837 = 2216;
	uint64_t x838 = UINT64_MAX;
	uint64_t x839 = UINT64_MAX;
	int8_t x840 = INT8_MIN;
	int32_t t188 = 941217;

    t188 = (x837==((x838+x839)<=x840));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x841 = 30560664U;
	int16_t x842 = INT16_MAX;
	int32_t x843 = INT32_MIN;
	uint32_t x844 = 3U;
	int32_t t189 = 43326342;

    t189 = (x841==((x842+x843)<=x844));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x845 = -1034703451014912053LL;
	static uint32_t x846 = 19478516U;
	int32_t x848 = 26569144;
	static int32_t t190 = -45774;

    t190 = (x845==((x846+x847)<=x848));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x853 = INT64_MIN;
	uint32_t x854 = 1U;
	int16_t x855 = INT16_MIN;
	volatile uint32_t x856 = 15462413U;
	static int32_t t191 = 1833325;

    t191 = (x853==((x854+x855)<=x856));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x857 = INT64_MAX;
	volatile uint32_t x859 = UINT32_MAX;
	int64_t x860 = -60LL;
	volatile int32_t t192 = -3;

    t192 = (x857==((x858+x859)<=x860));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x865 = INT8_MIN;
	int8_t x866 = -2;
	volatile int8_t x867 = -44;
	int8_t x868 = -1;
	int32_t t193 = 1;

    t193 = (x865==((x866+x867)<=x868));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x869 = INT16_MIN;
	static int64_t x870 = INT64_MIN;
	uint16_t x871 = 13U;
	int8_t x872 = -1;
	volatile int32_t t194 = -27274;

    t194 = (x869==((x870+x871)<=x872));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x873 = 89095292144958858LLU;
	int16_t x875 = INT16_MIN;

    t195 = (x873==((x874+x875)<=x876));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x877 = 14U;
	volatile int8_t x878 = INT8_MIN;
	volatile uint16_t x879 = 21026U;
	volatile int8_t x880 = INT8_MIN;

    t196 = (x877==((x878+x879)<=x880));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x882 = INT8_MIN;
	volatile int32_t x883 = 1737;
	static int8_t x884 = INT8_MIN;

    t197 = (x881==((x882+x883)<=x884));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x885 = INT64_MAX;
	volatile int32_t x886 = INT32_MIN;
	static int16_t x887 = 4;
	int64_t x888 = -1LL;
	static volatile int32_t t198 = 812850489;

    t198 = (x885==((x886+x887)<=x888));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x890 = -13;
	uint64_t x891 = 34091LLU;

    t199 = (x889==((x890+x891)<=x892));

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

