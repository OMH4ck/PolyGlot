
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

static int8_t x2 = -1;
static uint64_t x4 = UINT64_MAX;
static int8_t x6 = INT8_MIN;
int16_t x8 = 832;
int8_t x16 = INT8_MIN;
volatile int8_t x20 = -1;
volatile int16_t x31 = -1;
int8_t x36 = 0;
volatile int32_t t8 = -702739;
volatile int16_t x38 = INT16_MIN;
int8_t x40 = INT8_MIN;
volatile int32_t t9 = -904;
int32_t t10 = -340;
volatile uint64_t x54 = 18185571361LLU;
int64_t x63 = -1LL;
int8_t x67 = INT8_MAX;
uint8_t x72 = 6U;
static int32_t t19 = 1;
static uint64_t x87 = 1282LLU;
int8_t x91 = -1;
int32_t t22 = -63;
uint8_t x94 = 12U;
int64_t x95 = -1LL;
volatile int32_t t23 = -352825575;
int64_t x101 = -1LL;
static volatile uint8_t x102 = 13U;
volatile int16_t x103 = -899;
int8_t x106 = INT8_MAX;
int16_t x107 = -1;
uint64_t x112 = 834LLU;
int32_t x113 = INT32_MAX;
volatile int8_t x114 = INT8_MAX;
int32_t x115 = INT32_MAX;
volatile int16_t x125 = 13;
volatile int32_t t32 = 15641;
int32_t t35 = -298;
int16_t x149 = 16;
int16_t x155 = -1;
volatile uint16_t x163 = 10944U;
volatile int32_t t39 = 494895;
volatile uint64_t x166 = UINT64_MAX;
uint32_t x167 = 4041U;
static uint32_t x170 = 62026U;
int32_t t41 = -128154;
int64_t x184 = INT64_MAX;
int64_t x188 = 185LL;
int8_t x189 = INT8_MIN;
volatile int32_t t47 = 687;
uint8_t x202 = UINT8_MAX;
int64_t x209 = INT64_MIN;
int32_t x210 = -967189621;
int8_t x213 = INT8_MAX;
volatile int32_t t53 = 7889;
static uint64_t x235 = UINT64_MAX;
static volatile uint32_t x239 = 2239433U;
int32_t x240 = -1;
uint16_t x243 = UINT16_MAX;
volatile int64_t x246 = INT64_MAX;
static volatile int32_t t61 = 92826;
volatile int16_t x255 = INT16_MAX;
uint8_t x256 = 0U;
uint16_t x259 = 12470U;
volatile int32_t t63 = 0;
static int16_t x264 = 2942;
volatile int32_t t64 = 15838;
volatile int32_t t65 = 117625;
uint64_t x270 = 1807LLU;
static volatile int8_t x272 = INT8_MAX;
volatile int32_t t67 = 90;
int8_t x279 = -5;
volatile int32_t t68 = -610;
int8_t x295 = INT8_MIN;
uint8_t x296 = 0U;
int8_t x297 = INT8_MAX;
uint16_t x298 = UINT16_MAX;
int16_t x303 = -1523;
static int32_t x306 = INT32_MAX;
volatile uint16_t x307 = 28007U;
static volatile int8_t x308 = -6;
static int64_t x310 = -1LL;
uint16_t x311 = 5738U;
int32_t x312 = INT32_MIN;
volatile int64_t x313 = 19950LL;
volatile int64_t x314 = INT64_MIN;
int16_t x324 = -1;
uint16_t x329 = 21708U;
int16_t x333 = INT16_MIN;
uint64_t x336 = UINT64_MAX;
static int32_t t82 = 282673;
int16_t x340 = -1;
int16_t x345 = INT16_MIN;
volatile int32_t x347 = 844601;
uint64_t x348 = 16030991LLU;
int16_t x367 = INT16_MIN;
static int16_t x368 = INT16_MIN;
int32_t t92 = 31469278;
volatile int32_t t93 = 6;
int32_t t94 = 46285;
int8_t x391 = INT8_MAX;
int8_t x392 = INT8_MIN;
uint32_t x398 = UINT32_MAX;
volatile int32_t t98 = 1441190;
int8_t x401 = -1;
volatile uint64_t x404 = 3818486781595LLU;
int32_t t99 = 61938;
static int8_t x410 = INT8_MIN;
int16_t x413 = 3743;
uint16_t x415 = UINT16_MAX;
volatile int64_t x421 = 6526069395LL;
int16_t x432 = 0;
volatile int16_t x446 = INT16_MIN;
uint32_t x447 = 2U;
static volatile int32_t t108 = 59372;
static int8_t x453 = 0;
uint8_t x459 = 4U;
volatile int16_t x460 = INT16_MAX;
int8_t x470 = INT8_MIN;
volatile uint64_t x473 = 75259962484LLU;
volatile int8_t x474 = -18;
static volatile int32_t t116 = -897245;
volatile int16_t x484 = -1;
volatile int32_t t117 = -3;
int8_t x492 = INT8_MAX;
static volatile uint8_t x493 = UINT8_MAX;
volatile int32_t t121 = 1227434;
int64_t x501 = INT64_MAX;
uint8_t x506 = UINT8_MAX;
uint32_t x515 = 364U;
volatile int64_t x522 = INT64_MAX;
int64_t x523 = -19998311551328010LL;
uint8_t x527 = UINT8_MAX;
uint64_t x528 = UINT64_MAX;
int64_t x529 = -153LL;
uint64_t x531 = 9319469040948LLU;
uint32_t x533 = 5614U;
volatile int32_t x537 = -1;
int32_t x541 = 106;
int64_t x548 = -34LL;
volatile int32_t t132 = -129562;
int8_t x550 = -3;
volatile int32_t t133 = -198;
volatile int32_t t134 = -22267;
volatile int16_t x559 = INT16_MIN;
int32_t t135 = -4378229;
static int32_t t136 = 161;
uint8_t x565 = 1U;
uint32_t x568 = 112514U;
uint8_t x574 = 28U;
int32_t x580 = INT32_MIN;
int8_t x588 = 30;
int16_t x592 = INT16_MAX;
volatile int16_t x593 = 5;
volatile uint8_t x595 = 29U;
int16_t x600 = INT16_MIN;
uint32_t x603 = 1682053919U;
static int32_t t145 = 18;
static int8_t x607 = INT8_MAX;
int8_t x608 = -7;
int32_t t146 = -388361;
int32_t t147 = -15960;
int32_t x616 = -1;
int64_t x617 = -254LL;
uint32_t x618 = UINT32_MAX;
uint16_t x622 = 21168U;
volatile int64_t x625 = INT64_MIN;
int16_t x627 = 4227;
static int32_t t151 = -1;
uint32_t x632 = UINT32_MAX;
static int32_t x635 = -10;
static uint16_t x637 = 29403U;
uint8_t x642 = UINT8_MAX;
int8_t x651 = INT8_MIN;
static int32_t x656 = 0;
int8_t x662 = INT8_MAX;
volatile int32_t x664 = INT32_MAX;
uint8_t x678 = 29U;
uint64_t x679 = 48482077609LLU;
int32_t t163 = -410205744;
int64_t x691 = INT64_MIN;
volatile int8_t x692 = INT8_MIN;
volatile int16_t x696 = INT16_MIN;
int64_t x698 = INT64_MAX;
static volatile int64_t x707 = -521995738277LL;
static uint8_t x723 = 33U;
static int32_t x752 = 438;
static int32_t x756 = INT32_MIN;
volatile int32_t t179 = 0;
volatile int64_t x758 = -1LL;
volatile int32_t t180 = 256916;
static int64_t x764 = -566045827731987468LL;
int32_t t183 = -1017;
int32_t t184 = 837;
volatile int16_t x784 = INT16_MAX;
uint8_t x786 = 65U;
uint16_t x790 = UINT16_MAX;
volatile uint64_t x793 = UINT64_MAX;
uint16_t x794 = 47U;
int16_t x796 = INT16_MIN;
uint16_t x798 = UINT16_MAX;
int8_t x802 = INT8_MAX;
uint64_t x806 = 579227545LLU;
static volatile int32_t t192 = 30723466;
volatile uint64_t x813 = 7202048200156249627LLU;
volatile uint32_t x815 = UINT32_MAX;
uint64_t x823 = UINT64_MAX;
static int32_t t196 = -13438;
volatile int16_t x825 = -1;
int32_t t197 = -218217;
uint16_t x832 = 44U;
volatile uint64_t x835 = UINT64_MAX;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	volatile int64_t x3 = 137242623877729LL;
	static volatile int32_t t0 = -1210;

    t0 = (x1!=((x2/x3)>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	volatile int32_t x7 = -30185;
	int32_t t1 = -6200;

    t1 = (x5!=((x6/x7)>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = 676475425484961260LL;
	volatile int16_t x10 = -1;
	int16_t x11 = -1;
	uint16_t x12 = 0U;
	int32_t t2 = -58106504;

    t2 = (x9!=((x10/x11)>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int8_t x14 = INT8_MIN;
	uint8_t x15 = UINT8_MAX;
	int32_t t3 = 596687884;

    t3 = (x13!=((x14/x15)>x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	static volatile uint16_t x18 = 173U;
	volatile int64_t x19 = INT64_MIN;
	volatile int32_t t4 = 496486;

    t4 = (x17!=((x18/x19)>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	static uint16_t x22 = 382U;
	volatile int64_t x23 = INT64_MIN;
	uint16_t x24 = 13624U;
	int32_t t5 = 853071;

    t5 = (x21!=((x22/x23)>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	static uint8_t x26 = UINT8_MAX;
	int32_t x27 = -1;
	uint16_t x28 = 29334U;
	volatile int32_t t6 = 218;

    t6 = (x25!=((x26/x27)>x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	volatile int8_t x30 = INT8_MIN;
	int16_t x32 = INT16_MAX;
	int32_t t7 = 49667;

    t7 = (x29!=((x30/x31)>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = 18U;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = UINT32_MAX;

    t8 = (x33!=((x34/x35)>x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = UINT64_MAX;
	volatile int32_t x39 = INT32_MIN;

    t9 = (x37!=((x38/x39)>x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 6987;
	uint64_t x42 = 12466043754461483LLU;
	int8_t x43 = 5;
	static volatile uint16_t x44 = 6571U;

    t10 = (x41!=((x42/x43)>x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 0U;
	int32_t x46 = -102636;
	volatile uint64_t x47 = 323236LLU;
	uint16_t x48 = 25U;
	volatile int32_t t11 = -2;

    t11 = (x45!=((x46/x47)>x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 6830U;
	int16_t x50 = INT16_MIN;
	static int32_t x51 = INT32_MIN;
	int32_t x52 = INT32_MIN;
	int32_t t12 = 7;

    t12 = (x49!=((x50/x51)>x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -168;
	static int32_t t13 = -13981338;

    t13 = (x53!=((x54/x55)>x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = -129047;
	static uint64_t x58 = UINT64_MAX;
	int16_t x59 = 12;
	uint32_t x60 = 321832935U;
	volatile int32_t t14 = -110879444;

    t14 = (x57!=((x58/x59)>x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	int64_t x62 = 2775552102LL;
	int64_t x64 = INT64_MIN;
	int32_t t15 = -407019075;

    t15 = (x61!=((x62/x63)>x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	static uint8_t x66 = 48U;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = 894326601;

    t16 = (x65!=((x66/x67)>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	int8_t x70 = -1;
	int8_t x71 = INT8_MIN;
	static volatile int32_t t17 = 21969;

    t17 = (x69!=((x70/x71)>x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int16_t x74 = 45;
	int32_t x75 = 28806;
	uint16_t x76 = 0U;
	int32_t t18 = -46593;

    t18 = (x73!=((x74/x75)>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	volatile int8_t x79 = INT8_MIN;
	int16_t x80 = 0;

    t19 = (x77!=((x78/x79)>x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	static volatile uint8_t x82 = 56U;
	static uint32_t x83 = 58398U;
	int16_t x84 = INT16_MIN;
	int32_t t20 = -3666733;

    t20 = (x81!=((x82/x83)>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 346U;
	static int32_t x86 = INT32_MAX;
	int16_t x88 = INT16_MAX;
	static volatile int32_t t21 = 1;

    t21 = (x85!=((x86/x87)>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x89 = 4558244876573881510LLU;
	int16_t x90 = -2003;
	int16_t x92 = -1;

    t22 = (x89!=((x90/x91)>x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	static uint8_t x96 = 28U;

    t23 = (x93!=((x94/x95)>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x104 = -1;
	int32_t t24 = -11;

    t24 = (x101!=((x102/x103)>x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = 992914U;
	static int64_t x108 = -1LL;
	volatile int32_t t25 = 20;

    t25 = (x105!=((x106/x107)>x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x109 = UINT16_MAX;
	static int16_t x110 = -1;
	volatile int32_t x111 = INT32_MIN;
	int32_t t26 = -111826;

    t26 = (x109!=((x110/x111)>x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x116 = -1;
	int32_t t27 = 560194;

    t27 = (x113!=((x114/x115)>x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 8U;
	uint32_t x118 = 578147301U;
	int8_t x119 = -4;
	int8_t x120 = INT8_MAX;
	volatile int32_t t28 = -960;

    t28 = (x117!=((x118/x119)>x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x121 = UINT64_MAX;
	int64_t x122 = -1LL;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = UINT8_MAX;
	static int32_t t29 = -696799318;

    t29 = (x121!=((x122/x123)>x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x126 = 73U;
	int8_t x127 = INT8_MIN;
	static uint16_t x128 = 3U;
	volatile int32_t t30 = 40681370;

    t30 = (x125!=((x126/x127)>x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = INT64_MAX;
	uint8_t x130 = 9U;
	uint16_t x131 = 3U;
	int32_t x132 = INT32_MIN;
	int32_t t31 = -2;

    t31 = (x129!=((x130/x131)>x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MAX;
	int8_t x134 = -13;
	static uint8_t x135 = 4U;
	int8_t x136 = INT8_MIN;

    t32 = (x133!=((x134/x135)>x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -1;
	int16_t x138 = INT16_MAX;
	volatile int16_t x139 = 5;
	int64_t x140 = INT64_MAX;
	int32_t t33 = -227;

    t33 = (x137!=((x138/x139)>x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x141 = 54;
	int16_t x142 = -4;
	static int8_t x143 = INT8_MIN;
	int32_t x144 = -1;
	volatile int32_t t34 = -1159731;

    t34 = (x141!=((x142/x143)>x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x145 = INT32_MIN;
	int32_t x146 = -3195558;
	static uint64_t x147 = UINT64_MAX;
	int32_t x148 = INT32_MIN;

    t35 = (x145!=((x146/x147)>x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x150 = 25U;
	volatile int8_t x151 = INT8_MAX;
	int64_t x152 = INT64_MIN;
	volatile int32_t t36 = 14982;

    t36 = (x149!=((x150/x151)>x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = INT16_MIN;
	static volatile int32_t x154 = INT32_MAX;
	int8_t x156 = -8;
	volatile int32_t t37 = 14123;

    t37 = (x153!=((x154/x155)>x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x157 = -1;
	int16_t x158 = INT16_MIN;
	int16_t x159 = 5104;
	uint8_t x160 = 78U;
	int32_t t38 = 1046382;

    t38 = (x157!=((x158/x159)>x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = 57206;
	uint32_t x162 = UINT32_MAX;
	uint16_t x164 = UINT16_MAX;

    t39 = (x161!=((x162/x163)>x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MIN;
	uint16_t x168 = UINT16_MAX;
	int32_t t40 = 58993444;

    t40 = (x165!=((x166/x167)>x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 3049672990390904092LLU;
	int8_t x171 = INT8_MIN;
	static int32_t x172 = -1;

    t41 = (x169!=((x170/x171)>x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = INT64_MIN;
	volatile int8_t x174 = -4;
	int16_t x175 = -1647;
	int32_t x176 = INT32_MIN;
	volatile int32_t t42 = -345263;

    t42 = (x173!=((x174/x175)>x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = -1;
	int16_t x178 = -59;
	int64_t x179 = INT64_MIN;
	int64_t x180 = -1LL;
	volatile int32_t t43 = 500737;

    t43 = (x177!=((x178/x179)>x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = 0U;
	volatile int64_t x182 = INT64_MAX;
	volatile uint64_t x183 = UINT64_MAX;
	int32_t t44 = -463374826;

    t44 = (x181!=((x182/x183)>x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = 49636LL;
	int16_t x186 = 5;
	volatile uint64_t x187 = UINT64_MAX;
	volatile int32_t t45 = 188517359;

    t45 = (x185!=((x186/x187)>x188));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x190 = INT16_MIN;
	static int8_t x191 = 12;
	uint64_t x192 = 2712066828599551LLU;
	int32_t t46 = -37252;

    t46 = (x189!=((x190/x191)>x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = -1;
	int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MAX;
	static uint64_t x196 = 779905603944456481LLU;

    t47 = (x193!=((x194/x195)>x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x197 = 121527LL;
	int16_t x198 = -1;
	uint8_t x199 = UINT8_MAX;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t48 = -949488;

    t48 = (x197!=((x198/x199)>x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = -1;
	int64_t x203 = 115205440LL;
	int16_t x204 = INT16_MAX;
	int32_t t49 = 6334329;

    t49 = (x201!=((x202/x203)>x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = 1912078966780LLU;
	int16_t x206 = INT16_MIN;
	static int8_t x207 = -1;
	static uint64_t x208 = UINT64_MAX;
	int32_t t50 = -1;

    t50 = (x205!=((x206/x207)>x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MAX;
	volatile int32_t t51 = 279;

    t51 = (x209!=((x210/x211)>x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x214 = 17U;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;
	volatile int32_t t52 = -16408;

    t52 = (x213!=((x214/x215)>x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = INT16_MIN;
	static uint8_t x218 = 1U;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;

    t53 = (x217!=((x218/x219)>x220));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	static volatile int8_t x223 = INT8_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t54 = 1;

    t54 = (x221!=((x222/x223)>x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x225 = UINT8_MAX;
	volatile int16_t x226 = 7;
	volatile int64_t x227 = INT64_MIN;
	int16_t x228 = INT16_MIN;
	volatile int32_t t55 = -25;

    t55 = (x225!=((x226/x227)>x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x229 = UINT32_MAX;
	volatile uint8_t x230 = UINT8_MAX;
	int16_t x231 = INT16_MIN;
	int16_t x232 = -813;
	static volatile int32_t t56 = -97;

    t56 = (x229!=((x230/x231)>x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = INT8_MAX;
	static int64_t x234 = -1LL;
	volatile uint64_t x236 = UINT64_MAX;
	volatile int32_t t57 = -1820;

    t57 = (x233!=((x234/x235)>x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x237 = INT32_MIN;
	uint64_t x238 = 9457097940LLU;
	int32_t t58 = 31422631;

    t58 = (x237!=((x238/x239)>x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x241 = -1;
	uint16_t x242 = 13U;
	static volatile uint64_t x244 = 16137879071LLU;
	volatile int32_t t59 = -9;

    t59 = (x241!=((x242/x243)>x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x245 = -1LL;
	uint8_t x247 = 8U;
	int16_t x248 = -11;
	volatile int32_t t60 = -23904;

    t60 = (x245!=((x246/x247)>x248));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = -1;
	static int32_t x250 = 89037132;
	int8_t x251 = INT8_MIN;
	static int8_t x252 = -1;

    t61 = (x249!=((x250/x251)>x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x253 = 4188U;
	int8_t x254 = 0;
	static int32_t t62 = -1869323;

    t62 = (x253!=((x254/x255)>x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x257 = -706892638;
	static int8_t x258 = INT8_MIN;
	int8_t x260 = INT8_MIN;

    t63 = (x257!=((x258/x259)>x260));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x261 = -1LL;
	int8_t x262 = INT8_MAX;
	volatile int32_t x263 = 409742;

    t64 = (x261!=((x262/x263)>x264));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x265 = 36;
	volatile uint16_t x266 = 14U;
	static int16_t x267 = -1;
	volatile int32_t x268 = -1335602;

    t65 = (x265!=((x266/x267)>x268));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x269 = INT64_MIN;
	int16_t x271 = INT16_MIN;
	int32_t t66 = 139892;

    t66 = (x269!=((x270/x271)>x272));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x273 = -1LL;
	int64_t x274 = 578189LL;
	int8_t x275 = -1;
	static volatile int64_t x276 = -6080LL;

    t67 = (x273!=((x274/x275)>x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x277 = 1U;
	int16_t x278 = -4142;
	volatile int64_t x280 = INT64_MAX;

    t68 = (x277!=((x278/x279)>x280));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MIN;
	static int64_t x283 = -1LL;
	int16_t x284 = 0;
	int32_t t69 = -117756385;

    t69 = (x281!=((x282/x283)>x284));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x285 = 1136U;
	static volatile int16_t x286 = -10414;
	int8_t x287 = 47;
	uint64_t x288 = 938213325227LLU;
	static volatile int32_t t70 = -724321;

    t70 = (x285!=((x286/x287)>x288));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x289 = INT8_MIN;
	static volatile int64_t x290 = INT64_MIN;
	volatile int16_t x291 = -343;
	static int8_t x292 = INT8_MAX;
	int32_t t71 = 0;

    t71 = (x289!=((x290/x291)>x292));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = -3LL;
	uint64_t x294 = 1191892378604594765LLU;
	volatile int32_t t72 = 1;

    t72 = (x293!=((x294/x295)>x296));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x299 = 9U;
	volatile int32_t x300 = 7444;
	volatile int32_t t73 = 2;

    t73 = (x297!=((x298/x299)>x300));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x301 = 1;
	int32_t x302 = 220489;
	int16_t x304 = -1894;
	static int32_t t74 = -106297;

    t74 = (x301!=((x302/x303)>x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x305 = -1;
	volatile int32_t t75 = 6540061;

    t75 = (x305!=((x306/x307)>x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x309 = -1LL;
	int32_t t76 = -4767;

    t76 = (x309!=((x310/x311)>x312));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x315 = 23036U;
	static int32_t x316 = INT32_MIN;
	static volatile int32_t t77 = 1811;

    t77 = (x313!=((x314/x315)>x316));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x317 = 5U;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = 18;
	int32_t x320 = INT32_MAX;
	volatile int32_t t78 = -23265;

    t78 = (x317!=((x318/x319)>x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x321 = -1;
	volatile int16_t x322 = -35;
	static int64_t x323 = INT64_MIN;
	int32_t t79 = -130471891;

    t79 = (x321!=((x322/x323)>x324));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = -1;
	static int32_t x326 = -498213;
	static volatile int32_t x327 = -1534;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t80 = -34;

    t80 = (x325!=((x326/x327)>x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x330 = 8118366583969856LL;
	int8_t x331 = INT8_MAX;
	int16_t x332 = 1;
	static int32_t t81 = -11598521;

    t81 = (x329!=((x330/x331)>x332));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x334 = UINT64_MAX;
	static int16_t x335 = -1;

    t82 = (x333!=((x334/x335)>x336));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MAX;
	volatile int32_t t83 = 212;

    t83 = (x337!=((x338/x339)>x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x341 = 6792821108319256543LLU;
	int16_t x342 = INT16_MIN;
	int8_t x343 = 1;
	int64_t x344 = -1LL;
	volatile int32_t t84 = 100234;

    t84 = (x341!=((x342/x343)>x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x346 = INT16_MIN;
	volatile int32_t t85 = -38;

    t85 = (x345!=((x346/x347)>x348));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x349 = UINT64_MAX;
	uint16_t x350 = 179U;
	int16_t x351 = 1537;
	volatile int16_t x352 = -6;
	static int32_t t86 = -324;

    t86 = (x349!=((x350/x351)>x352));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x353 = UINT16_MAX;
	int32_t x354 = -216330945;
	int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t87 = 3897;

    t87 = (x353!=((x354/x355)>x356));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = INT16_MIN;
	int32_t x358 = INT32_MIN;
	int64_t x359 = -32287706LL;
	int16_t x360 = 1;
	volatile int32_t t88 = -5346268;

    t88 = (x357!=((x358/x359)>x360));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MIN;
	volatile int16_t x363 = INT16_MIN;
	uint8_t x364 = 101U;
	int32_t t89 = 143;

    t89 = (x361!=((x362/x363)>x364));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x365 = 1U;
	static int16_t x366 = INT16_MIN;
	volatile int32_t t90 = -7;

    t90 = (x365!=((x366/x367)>x368));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x369 = 344U;
	volatile int64_t x370 = -1LL;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = -7;
	volatile int32_t t91 = 116;

    t91 = (x369!=((x370/x371)>x372));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x373 = INT16_MIN;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 78U;
	volatile uint8_t x376 = UINT8_MAX;

    t92 = (x373!=((x374/x375)>x376));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x377 = INT16_MIN;
	static uint8_t x378 = 1U;
	int16_t x379 = INT16_MAX;
	uint64_t x380 = UINT64_MAX;

    t93 = (x377!=((x378/x379)>x380));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x381 = 1255701194875180513LLU;
	static int64_t x382 = INT64_MIN;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = INT16_MIN;

    t94 = (x381!=((x382/x383)>x384));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x385 = -1;
	int8_t x386 = 31;
	uint8_t x387 = 48U;
	static uint16_t x388 = 15U;
	volatile int32_t t95 = 39273961;

    t95 = (x385!=((x386/x387)>x388));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x389 = 3229U;
	static int8_t x390 = INT8_MAX;
	volatile int32_t t96 = 26765;

    t96 = (x389!=((x390/x391)>x392));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x393 = UINT64_MAX;
	int16_t x394 = INT16_MIN;
	int32_t x395 = 995;
	volatile uint16_t x396 = 26615U;
	int32_t t97 = -106;

    t97 = (x393!=((x394/x395)>x396));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x397 = 911U;
	uint16_t x399 = 20U;
	int16_t x400 = 3;

    t98 = (x397!=((x398/x399)>x400));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x402 = 0;
	static uint8_t x403 = 1U;

    t99 = (x401!=((x402/x403)>x404));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x409 = 3453U;
	int16_t x411 = INT16_MIN;
	static volatile int8_t x412 = 10;
	int32_t t100 = 23;

    t100 = (x409!=((x410/x411)>x412));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x414 = UINT64_MAX;
	uint8_t x416 = 1U;
	int32_t t101 = -303;

    t101 = (x413!=((x414/x415)>x416));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x417 = UINT16_MAX;
	int8_t x418 = 3;
	int64_t x419 = -1LL;
	int64_t x420 = INT64_MIN;
	volatile int32_t t102 = 1699;

    t102 = (x417!=((x418/x419)>x420));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x422 = INT32_MIN;
	static uint16_t x423 = UINT16_MAX;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t103 = 6191;

    t103 = (x421!=((x422/x423)>x424));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x425 = INT32_MIN;
	uint64_t x426 = UINT64_MAX;
	int64_t x427 = -1LL;
	int64_t x428 = -412827668LL;
	static volatile int32_t t104 = -5;

    t104 = (x425!=((x426/x427)>x428));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x430 = -1;
	int8_t x431 = -3;
	volatile int32_t t105 = 113598;

    t105 = (x429!=((x430/x431)>x432));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x437 = INT32_MIN;
	volatile uint32_t x438 = 287U;
	int16_t x439 = INT16_MIN;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t106 = -6617708;

    t106 = (x437!=((x438/x439)>x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x441 = -1;
	static uint64_t x442 = UINT64_MAX;
	uint8_t x443 = 12U;
	volatile int8_t x444 = INT8_MIN;
	static volatile int32_t t107 = 3737393;

    t107 = (x441!=((x442/x443)>x444));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x445 = INT16_MIN;
	volatile int16_t x448 = -1;

    t108 = (x445!=((x446/x447)>x448));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = -47;
	volatile int32_t x450 = INT32_MAX;
	static uint32_t x451 = UINT32_MAX;
	int8_t x452 = 10;
	volatile int32_t t109 = -111;

    t109 = (x449!=((x450/x451)>x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x454 = INT16_MAX;
	volatile uint64_t x455 = UINT64_MAX;
	int16_t x456 = INT16_MIN;
	volatile int32_t t110 = 464782988;

    t110 = (x453!=((x454/x455)>x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = INT16_MIN;
	int64_t x458 = 1568552251LL;
	volatile int32_t t111 = -563;

    t111 = (x457!=((x458/x459)>x460));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x461 = INT64_MIN;
	static int8_t x462 = INT8_MIN;
	int64_t x463 = -28177514LL;
	static uint16_t x464 = UINT16_MAX;
	volatile int32_t t112 = -223;

    t112 = (x461!=((x462/x463)>x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x465 = -11;
	uint8_t x466 = 1U;
	int8_t x467 = -1;
	uint8_t x468 = UINT8_MAX;
	static volatile int32_t t113 = 7;

    t113 = (x465!=((x466/x467)>x468));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x469 = INT32_MAX;
	int32_t x471 = INT32_MIN;
	static volatile uint64_t x472 = 1LLU;
	static int32_t t114 = -30724;

    t114 = (x469!=((x470/x471)>x472));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x475 = 6;
	uint8_t x476 = 120U;
	int32_t t115 = 1024565618;

    t115 = (x473!=((x474/x475)>x476));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x477 = UINT32_MAX;
	static int8_t x478 = 30;
	uint16_t x479 = UINT16_MAX;
	uint8_t x480 = 0U;

    t116 = (x477!=((x478/x479)>x480));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x481 = 57228LLU;
	volatile int16_t x482 = 1;
	volatile int32_t x483 = -219246154;

    t117 = (x481!=((x482/x483)>x484));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x485 = 320296817U;
	int32_t x486 = INT32_MIN;
	uint32_t x487 = 277616U;
	uint8_t x488 = UINT8_MAX;
	static volatile int32_t t118 = -863;

    t118 = (x485!=((x486/x487)>x488));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x489 = -1;
	static int32_t x490 = -282999040;
	uint64_t x491 = UINT64_MAX;
	volatile int32_t t119 = 185491;

    t119 = (x489!=((x490/x491)>x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x494 = 1356214660132304LLU;
	int8_t x495 = INT8_MAX;
	static int64_t x496 = INT64_MAX;
	int32_t t120 = -1;

    t120 = (x493!=((x494/x495)>x496));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x497 = UINT8_MAX;
	static uint16_t x498 = UINT16_MAX;
	int64_t x499 = 3060LL;
	uint16_t x500 = UINT16_MAX;

    t121 = (x497!=((x498/x499)>x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x502 = INT8_MIN;
	static uint8_t x503 = 1U;
	int64_t x504 = 16820945364LL;
	static int32_t t122 = 416;

    t122 = (x501!=((x502/x503)>x504));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x505 = INT32_MAX;
	uint32_t x507 = 76063166U;
	int8_t x508 = -14;
	volatile int32_t t123 = -43319;

    t123 = (x505!=((x506/x507)>x508));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x513 = 716447666U;
	uint16_t x514 = 4761U;
	uint64_t x516 = 33LLU;
	static volatile int32_t t124 = 0;

    t124 = (x513!=((x514/x515)>x516));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x517 = INT64_MIN;
	uint16_t x518 = 4U;
	int8_t x519 = INT8_MAX;
	int8_t x520 = INT8_MAX;
	static volatile int32_t t125 = 252;

    t125 = (x517!=((x518/x519)>x520));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x521 = INT64_MIN;
	static uint16_t x524 = 63U;
	volatile int32_t t126 = 1;

    t126 = (x521!=((x522/x523)>x524));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x525 = 994756649260LLU;
	int8_t x526 = INT8_MIN;
	int32_t t127 = 491351856;

    t127 = (x525!=((x526/x527)>x528));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x530 = 3597U;
	static uint64_t x532 = 1LLU;
	int32_t t128 = -1889;

    t128 = (x529!=((x530/x531)>x532));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x534 = 28U;
	int32_t x535 = INT32_MIN;
	int32_t x536 = 1;
	int32_t t129 = 28;

    t129 = (x533!=((x534/x535)>x536));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x538 = -9;
	uint32_t x539 = 154U;
	volatile uint8_t x540 = 0U;
	int32_t t130 = -141448951;

    t130 = (x537!=((x538/x539)>x540));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x542 = 1053374662LLU;
	static int16_t x543 = INT16_MIN;
	static int16_t x544 = -1;
	static volatile int32_t t131 = 587;

    t131 = (x541!=((x542/x543)>x544));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x545 = 255324094158990LLU;
	uint8_t x546 = 1U;
	static int64_t x547 = -16LL;

    t132 = (x545!=((x546/x547)>x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x549 = INT8_MIN;
	int8_t x551 = -1;
	uint8_t x552 = UINT8_MAX;

    t133 = (x549!=((x550/x551)>x552));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x553 = 0U;
	int32_t x554 = 2851;
	volatile uint32_t x555 = 65369757U;
	int64_t x556 = -1LL;

    t134 = (x553!=((x554/x555)>x556));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x557 = INT32_MAX;
	int64_t x558 = INT64_MIN;
	int16_t x560 = 1293;

    t135 = (x557!=((x558/x559)>x560));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x561 = 1;
	int16_t x562 = INT16_MIN;
	int8_t x563 = -17;
	int8_t x564 = -1;

    t136 = (x561!=((x562/x563)>x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x566 = 1;
	uint64_t x567 = 35209553799467182LLU;
	int32_t t137 = -58139;

    t137 = (x565!=((x566/x567)>x568));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = INT8_MIN;
	int16_t x570 = INT16_MIN;
	uint64_t x571 = 7903LLU;
	static int16_t x572 = INT16_MIN;
	int32_t t138 = -754;

    t138 = (x569!=((x570/x571)>x572));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x573 = INT32_MAX;
	static volatile int64_t x575 = -4320LL;
	static int32_t x576 = INT32_MAX;
	static int32_t t139 = 214784235;

    t139 = (x573!=((x574/x575)>x576));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = 2;
	int8_t x578 = INT8_MAX;
	uint16_t x579 = 5483U;
	volatile int32_t t140 = -33844;

    t140 = (x577!=((x578/x579)>x580));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x585 = -1;
	volatile int64_t x586 = -1LL;
	static int64_t x587 = INT64_MAX;
	int32_t t141 = 0;

    t141 = (x585!=((x586/x587)>x588));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x589 = 3U;
	static volatile int8_t x590 = INT8_MAX;
	volatile int16_t x591 = INT16_MAX;
	volatile int32_t t142 = -213350868;

    t142 = (x589!=((x590/x591)>x592));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x594 = INT32_MIN;
	uint64_t x596 = 10078358LLU;
	volatile int32_t t143 = -5547;

    t143 = (x593!=((x594/x595)>x596));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x597 = -1;
	uint64_t x598 = 6403533302202631LLU;
	uint32_t x599 = 1547454U;
	int32_t t144 = -1;

    t144 = (x597!=((x598/x599)>x600));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x601 = 14U;
	int8_t x602 = INT8_MIN;
	static int32_t x604 = INT32_MAX;

    t145 = (x601!=((x602/x603)>x604));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x605 = UINT32_MAX;
	uint16_t x606 = 7261U;

    t146 = (x605!=((x606/x607)>x608));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x609 = UINT16_MAX;
	int8_t x610 = -2;
	int8_t x611 = -1;
	volatile int8_t x612 = -1;

    t147 = (x609!=((x610/x611)>x612));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x613 = 10U;
	volatile int16_t x614 = INT16_MAX;
	volatile int8_t x615 = INT8_MIN;
	int32_t t148 = 184126007;

    t148 = (x613!=((x614/x615)>x616));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x619 = 2U;
	static int32_t x620 = INT32_MAX;
	volatile int32_t t149 = 956701045;

    t149 = (x617!=((x618/x619)>x620));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = -1;
	uint64_t x623 = UINT64_MAX;
	int8_t x624 = INT8_MAX;
	int32_t t150 = -5694;

    t150 = (x621!=((x622/x623)>x624));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x626 = 7U;
	int16_t x628 = -2308;

    t151 = (x625!=((x626/x627)>x628));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x629 = 1U;
	int64_t x630 = INT64_MAX;
	uint64_t x631 = UINT64_MAX;
	int32_t t152 = 743246;

    t152 = (x629!=((x630/x631)>x632));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x633 = UINT32_MAX;
	uint16_t x634 = 1583U;
	volatile int32_t x636 = INT32_MIN;
	int32_t t153 = 337444;

    t153 = (x633!=((x634/x635)>x636));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x638 = 293LLU;
	int32_t x639 = -146470;
	int16_t x640 = INT16_MIN;
	int32_t t154 = -148;

    t154 = (x637!=((x638/x639)>x640));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x641 = UINT8_MAX;
	uint32_t x643 = 700146532U;
	uint32_t x644 = 10U;
	static int32_t t155 = -1;

    t155 = (x641!=((x642/x643)>x644));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x645 = 5828U;
	int64_t x646 = -44LL;
	int8_t x647 = INT8_MAX;
	int64_t x648 = INT64_MIN;
	volatile int32_t t156 = -22;

    t156 = (x645!=((x646/x647)>x648));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x649 = INT64_MIN;
	int32_t x650 = -1;
	uint8_t x652 = UINT8_MAX;
	volatile int32_t t157 = 5242762;

    t157 = (x649!=((x650/x651)>x652));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x653 = INT32_MIN;
	volatile int64_t x654 = -1LL;
	int8_t x655 = -31;
	int32_t t158 = 19;

    t158 = (x653!=((x654/x655)>x656));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x661 = -1;
	int16_t x663 = -1;
	int32_t t159 = 14556115;

    t159 = (x661!=((x662/x663)>x664));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x665 = INT64_MIN;
	static uint8_t x666 = UINT8_MAX;
	volatile int8_t x667 = -7;
	uint32_t x668 = UINT32_MAX;
	static int32_t t160 = 2;

    t160 = (x665!=((x666/x667)>x668));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x669 = INT8_MIN;
	uint8_t x670 = 95U;
	uint8_t x671 = 16U;
	uint16_t x672 = UINT16_MAX;
	volatile int32_t t161 = 1745901;

    t161 = (x669!=((x670/x671)>x672));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x673 = 5;
	volatile int64_t x674 = INT64_MIN;
	volatile uint64_t x675 = 63930589396812688LLU;
	int64_t x676 = INT64_MIN;
	int32_t t162 = 0;

    t162 = (x673!=((x674/x675)>x676));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x677 = 10U;
	int64_t x680 = INT64_MIN;

    t163 = (x677!=((x678/x679)>x680));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x681 = -1;
	uint16_t x682 = 758U;
	volatile int8_t x683 = -1;
	volatile uint16_t x684 = UINT16_MAX;
	volatile int32_t t164 = 28439;

    t164 = (x681!=((x682/x683)>x684));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x689 = INT64_MIN;
	static int8_t x690 = INT8_MIN;
	volatile int32_t t165 = 0;

    t165 = (x689!=((x690/x691)>x692));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x693 = 0U;
	static int16_t x694 = INT16_MIN;
	int32_t x695 = INT32_MAX;
	int32_t t166 = -112723;

    t166 = (x693!=((x694/x695)>x696));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x697 = 312;
	uint32_t x699 = 4194U;
	int32_t x700 = INT32_MAX;
	int32_t t167 = 26;

    t167 = (x697!=((x698/x699)>x700));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x701 = 155802032605LLU;
	volatile int8_t x702 = -43;
	int8_t x703 = 7;
	volatile int32_t x704 = 94;
	static int32_t t168 = 2;

    t168 = (x701!=((x702/x703)>x704));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x705 = INT64_MIN;
	static int64_t x706 = INT64_MAX;
	static int32_t x708 = -11390;
	volatile int32_t t169 = 2766566;

    t169 = (x705!=((x706/x707)>x708));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x709 = 35;
	static int64_t x710 = INT64_MIN;
	int32_t x711 = -25;
	int32_t x712 = INT32_MIN;
	volatile int32_t t170 = -51352320;

    t170 = (x709!=((x710/x711)>x712));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x713 = 108;
	uint64_t x714 = UINT64_MAX;
	int8_t x715 = -2;
	volatile int8_t x716 = -1;
	volatile int32_t t171 = -6878453;

    t171 = (x713!=((x714/x715)>x716));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x717 = -1;
	int32_t x718 = -1;
	int32_t x719 = INT32_MAX;
	uint64_t x720 = 6070713665381628LLU;
	volatile int32_t t172 = -1;

    t172 = (x717!=((x718/x719)>x720));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x721 = INT16_MIN;
	int8_t x722 = -13;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t173 = 313972;

    t173 = (x721!=((x722/x723)>x724));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x725 = 537325708U;
	uint16_t x726 = 1540U;
	uint8_t x727 = 2U;
	int32_t x728 = -1;
	volatile int32_t t174 = -37843;

    t174 = (x725!=((x726/x727)>x728));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int8_t x729 = 0;
	uint32_t x730 = 1U;
	static int8_t x731 = 2;
	int32_t x732 = -1;
	volatile int32_t t175 = -95495;

    t175 = (x729!=((x730/x731)>x732));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x733 = INT8_MIN;
	uint32_t x734 = 11U;
	int64_t x735 = -118411608LL;
	static int8_t x736 = 26;
	int32_t t176 = -353;

    t176 = (x733!=((x734/x735)>x736));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x741 = -1LL;
	int8_t x742 = INT8_MIN;
	static volatile uint16_t x743 = 3U;
	uint64_t x744 = 143335201235763LLU;
	int32_t t177 = -840;

    t177 = (x741!=((x742/x743)>x744));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x749 = INT8_MAX;
	static uint64_t x750 = 2565592650LLU;
	int16_t x751 = INT16_MIN;
	int32_t t178 = 15;

    t178 = (x749!=((x750/x751)>x752));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x753 = 1;
	uint32_t x754 = 74997229U;
	static int32_t x755 = INT32_MIN;

    t179 = (x753!=((x754/x755)>x756));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x757 = 46U;
	volatile int8_t x759 = -1;
	static uint32_t x760 = 7789U;

    t180 = (x757!=((x758/x759)>x760));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x761 = INT8_MIN;
	uint8_t x762 = 1U;
	int64_t x763 = -1LL;
	int32_t t181 = 20841;

    t181 = (x761!=((x762/x763)>x764));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x765 = UINT32_MAX;
	uint32_t x766 = 2U;
	int64_t x767 = -1LL;
	volatile int64_t x768 = -1LL;
	static int32_t t182 = -5806;

    t182 = (x765!=((x766/x767)>x768));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x769 = -2;
	uint16_t x770 = UINT16_MAX;
	volatile uint16_t x771 = 27U;
	volatile int16_t x772 = 109;

    t183 = (x769!=((x770/x771)>x772));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x773 = UINT32_MAX;
	uint64_t x774 = 22319448LLU;
	volatile int16_t x775 = -1;
	volatile uint16_t x776 = 1U;

    t184 = (x773!=((x774/x775)>x776));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x777 = 2U;
	uint64_t x778 = UINT64_MAX;
	int8_t x779 = -1;
	uint16_t x780 = 13655U;
	int32_t t185 = -5368;

    t185 = (x777!=((x778/x779)>x780));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x781 = UINT32_MAX;
	int32_t x782 = -1;
	int32_t x783 = -1;
	int32_t t186 = 111413;

    t186 = (x781!=((x782/x783)>x784));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x785 = INT16_MIN;
	int8_t x787 = -2;
	static uint32_t x788 = 24522U;
	int32_t t187 = -7;

    t187 = (x785!=((x786/x787)>x788));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x789 = INT64_MIN;
	static int64_t x791 = -3711LL;
	int64_t x792 = INT64_MIN;
	volatile int32_t t188 = 0;

    t188 = (x789!=((x790/x791)>x792));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x795 = 3939381641LL;
	volatile int32_t t189 = -3369;

    t189 = (x793!=((x794/x795)>x796));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x797 = INT32_MAX;
	uint16_t x799 = UINT16_MAX;
	uint64_t x800 = 61858653933068707LLU;
	volatile int32_t t190 = -194629;

    t190 = (x797!=((x798/x799)>x800));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x801 = INT16_MIN;
	static volatile uint16_t x803 = 672U;
	static int32_t x804 = 1622;
	int32_t t191 = 57591630;

    t191 = (x801!=((x802/x803)>x804));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x805 = INT64_MIN;
	uint64_t x807 = 125LLU;
	int8_t x808 = -4;

    t192 = (x805!=((x806/x807)>x808));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x809 = -3862LL;
	static volatile uint32_t x810 = 1088U;
	int64_t x811 = INT64_MAX;
	uint32_t x812 = 1U;
	volatile int32_t t193 = 464967294;

    t193 = (x809!=((x810/x811)>x812));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x814 = -655005891LL;
	static int64_t x816 = 198LL;
	static volatile int32_t t194 = 4016558;

    t194 = (x813!=((x814/x815)>x816));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x817 = UINT8_MAX;
	uint8_t x818 = UINT8_MAX;
	volatile uint8_t x819 = 1U;
	int16_t x820 = 31;
	int32_t t195 = -2875;

    t195 = (x817!=((x818/x819)>x820));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x821 = 2463827564688745LLU;
	int64_t x822 = INT64_MIN;
	volatile uint32_t x824 = 28986U;

    t196 = (x821!=((x822/x823)>x824));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x826 = UINT16_MAX;
	static uint16_t x827 = 200U;
	volatile int16_t x828 = INT16_MIN;

    t197 = (x825!=((x826/x827)>x828));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x829 = INT16_MIN;
	static uint16_t x830 = UINT16_MAX;
	int32_t x831 = -1;
	volatile int32_t t198 = -117;

    t198 = (x829!=((x830/x831)>x832));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x833 = INT8_MIN;
	int16_t x834 = INT16_MIN;
	volatile int16_t x836 = INT16_MIN;
	volatile int32_t t199 = -203;

    t199 = (x833!=((x834/x835)>x836));

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

