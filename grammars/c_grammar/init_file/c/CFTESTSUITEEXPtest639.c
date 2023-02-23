
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

static int32_t x5 = -1;
static int32_t t0 = 316;
static int32_t t1 = -1;
volatile uint32_t x15 = 62102U;
int32_t t2 = 523491404;
uint16_t x17 = 0U;
uint8_t x21 = 120U;
static int16_t x25 = -717;
uint32_t x28 = 1U;
int32_t x29 = -1;
uint16_t x32 = UINT16_MAX;
static int16_t x33 = INT16_MIN;
int16_t x37 = -124;
uint32_t x40 = 1372U;
int32_t t8 = 0;
uint64_t x53 = 2236124337822626LLU;
static uint32_t x54 = UINT32_MAX;
uint8_t x55 = 66U;
static int8_t x64 = -1;
volatile int32_t t12 = -1109;
volatile int8_t x67 = INT8_MIN;
volatile int32_t t14 = 5909962;
static uint16_t x73 = UINT16_MAX;
volatile int64_t x75 = INT64_MIN;
volatile int8_t x77 = -29;
volatile int64_t x79 = -1LL;
static int32_t x83 = -77745589;
volatile int32_t x84 = INT32_MIN;
static int32_t t17 = -1;
uint8_t x87 = 47U;
int32_t t18 = 20;
uint32_t x94 = 1271U;
int32_t t19 = -182232178;
int32_t x99 = INT32_MIN;
int64_t x101 = 53314244712623762LL;
int32_t x104 = 1492687;
volatile int32_t x108 = INT32_MIN;
uint64_t x109 = 357498946289374459LLU;
int64_t x110 = INT64_MIN;
int32_t t24 = -129639;
int8_t x122 = INT8_MIN;
int32_t x128 = INT32_MIN;
volatile int32_t t27 = 9314;
static int8_t x129 = 5;
int32_t t28 = 3093129;
int32_t t29 = -134648454;
int32_t t31 = -1352528;
static int64_t x145 = INT64_MIN;
static uint8_t x149 = UINT8_MAX;
volatile int16_t x153 = -1;
int16_t x155 = 1;
static int64_t x159 = INT64_MAX;
volatile int8_t x161 = INT8_MIN;
int16_t x162 = -7845;
volatile uint32_t x165 = 20926584U;
uint8_t x183 = 3U;
static int8_t x186 = -1;
volatile int32_t t42 = 1;
int16_t x191 = INT16_MIN;
int32_t t43 = -5972741;
int16_t x196 = 51;
volatile int8_t x207 = -1;
volatile int32_t t46 = 1449711;
volatile int32_t t47 = 893545128;
uint16_t x213 = UINT16_MAX;
volatile uint16_t x217 = 0U;
int8_t x219 = INT8_MAX;
static int16_t x220 = -1;
int32_t t49 = 2642;
static volatile int32_t t53 = 2;
int16_t x237 = INT16_MAX;
uint8_t x238 = UINT8_MAX;
static int8_t x243 = INT8_MIN;
int32_t t55 = 31;
volatile int8_t x248 = INT8_MAX;
int32_t t56 = 129968;
int32_t x253 = 72;
volatile int64_t x262 = INT64_MAX;
int32_t t59 = 494023482;
int32_t t60 = -7;
int32_t t62 = -11258;
uint16_t x288 = UINT16_MAX;
uint16_t x290 = 27U;
volatile int32_t x296 = INT32_MAX;
volatile int32_t x297 = INT32_MAX;
uint64_t x306 = UINT64_MAX;
int64_t x308 = INT64_MIN;
int16_t x310 = INT16_MIN;
int8_t x312 = INT8_MIN;
int32_t x313 = INT32_MIN;
int8_t x323 = INT8_MIN;
int16_t x326 = -1;
static int8_t x330 = -1;
int8_t x336 = INT8_MIN;
volatile int32_t t75 = 2343;
volatile int64_t x337 = INT64_MIN;
static volatile int16_t x353 = INT16_MAX;
volatile int64_t x360 = 103777571197779277LL;
int16_t x366 = 188;
volatile uint8_t x371 = 25U;
int64_t x372 = INT64_MIN;
static uint64_t x373 = 0LLU;
static int32_t x374 = INT32_MAX;
uint32_t x378 = UINT32_MAX;
int8_t x380 = 62;
int16_t x381 = INT16_MIN;
volatile int32_t t88 = -621464;
uint64_t x389 = 204967LLU;
static volatile uint64_t x394 = UINT64_MAX;
int32_t x396 = INT32_MAX;
volatile int32_t t90 = 3753;
int32_t t91 = 0;
int32_t t92 = -12221390;
static int16_t x412 = INT16_MIN;
volatile int32_t t93 = -1;
uint32_t x413 = UINT32_MAX;
int8_t x418 = 0;
static int64_t x420 = -4032304865646122LL;
uint16_t x426 = UINT16_MAX;
volatile int16_t x428 = INT16_MIN;
int16_t x430 = 5516;
int32_t x431 = -1;
volatile int32_t t98 = -45518804;
uint32_t x433 = 25294831U;
uint16_t x436 = 30U;
int32_t t99 = -675;
volatile int64_t x441 = INT64_MIN;
int32_t x443 = INT32_MIN;
static volatile int64_t x444 = INT64_MIN;
int8_t x446 = INT8_MAX;
uint8_t x447 = 3U;
volatile uint8_t x448 = 6U;
volatile uint32_t x449 = 1988U;
uint16_t x455 = 14591U;
static uint8_t x459 = 12U;
static int32_t x469 = -1;
volatile int16_t x470 = INT16_MAX;
volatile int8_t x477 = INT8_MAX;
int32_t x479 = -1;
static uint8_t x499 = 6U;
static int8_t x505 = INT8_MIN;
int32_t x513 = 487557;
volatile int32_t t117 = -3580749;
int16_t x524 = INT16_MAX;
volatile uint8_t x526 = 21U;
int16_t x543 = INT16_MIN;
int64_t x544 = INT64_MIN;
int64_t x550 = -1LL;
uint8_t x553 = 7U;
int32_t x567 = -17433555;
static uint32_t x573 = 1878197079U;
volatile int32_t t131 = -2317;
static int64_t x579 = INT64_MIN;
int16_t x585 = 3;
volatile int32_t x587 = -1;
volatile int32_t t134 = -507805;
volatile int32_t x589 = 15884606;
uint64_t x594 = 26569733759985777LLU;
uint64_t x605 = UINT64_MAX;
volatile int64_t x620 = INT64_MIN;
int64_t x625 = INT64_MAX;
int32_t x629 = -1;
int8_t x638 = -1;
int8_t x656 = -8;
volatile uint32_t x657 = 695283U;
int16_t x660 = -1;
int32_t t151 = 9825;
uint32_t x669 = 415U;
int64_t x681 = -24LL;
int32_t x684 = INT32_MAX;
static int8_t x685 = 9;
static uint8_t x695 = 27U;
int64_t x696 = INT64_MIN;
int32_t x699 = INT32_MIN;
volatile int64_t x703 = INT64_MIN;
static uint32_t x704 = 30465247U;
int8_t x706 = 0;
int8_t x708 = INT8_MAX;
int32_t x710 = INT32_MAX;
volatile int8_t x717 = INT8_MAX;
volatile int64_t x720 = INT64_MIN;
volatile int16_t x721 = -16;
int8_t x724 = 1;
volatile int32_t t165 = 118;
static int64_t x730 = INT64_MIN;
volatile int32_t t166 = 1861127;
int16_t x733 = -1;
volatile int32_t t167 = -660409;
static int16_t x740 = -1;
int32_t x741 = 1084;
static int16_t x742 = -1362;
static uint64_t x750 = 344151LLU;
int32_t x751 = INT32_MAX;
static uint32_t x755 = UINT32_MAX;
int32_t t172 = -1975;
int32_t x774 = -1;
int32_t t176 = -1987;
int32_t t183 = -249005424;
int8_t x806 = -14;
int32_t t184 = 6950424;
int8_t x811 = INT8_MAX;
int32_t x822 = INT32_MIN;
volatile int32_t t189 = -2022;
int64_t x831 = 4523980885706504786LL;
uint16_t x838 = 4U;
int32_t x839 = INT32_MIN;
int32_t t192 = -3673;
volatile int64_t x848 = -1LL;
static int32_t t195 = 311563747;
int8_t x854 = -1;
int16_t x855 = INT16_MAX;
uint16_t x857 = 2U;
uint8_t x861 = UINT8_MAX;
int32_t t198 = 0;
int64_t x868 = -1LL;


void f0(void) {
    	int64_t x6 = -1LL;
	static int16_t x7 = INT16_MAX;
	int64_t x8 = -1LL;

    t0 = (x5>((x6/x7)/x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x9 = UINT8_MAX;
	volatile uint16_t x10 = UINT16_MAX;
	volatile int16_t x11 = INT16_MAX;
	static int32_t x12 = 35671611;

    t1 = (x9>((x10/x11)/x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x13 = 1U;
	static uint16_t x14 = UINT16_MAX;
	uint64_t x16 = 113073406458833LLU;

    t2 = (x13>((x14/x15)/x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x18 = INT64_MIN;
	static uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	volatile int32_t t3 = -54;

    t3 = (x17>((x18/x19)/x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x22 = -765416333;
	uint32_t x23 = 30875U;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t4 = -245;

    t4 = (x21>((x22/x23)/x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x26 = 355450381769957801LLU;
	volatile int64_t x27 = -1LL;
	int32_t t5 = 1;

    t5 = (x25>((x26/x27)/x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x30 = INT64_MIN;
	uint16_t x31 = UINT16_MAX;
	static volatile int32_t t6 = 22;

    t6 = (x29>((x30/x31)/x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x34 = 27484U;
	int64_t x35 = 70436930589LL;
	int32_t x36 = INT32_MAX;
	volatile int32_t t7 = -11;

    t7 = (x33>((x34/x35)/x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x38 = -55551LL;
	static uint64_t x39 = 88506LLU;

    t8 = (x37>((x38/x39)/x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x41 = UINT16_MAX;
	volatile int8_t x42 = -1;
	volatile int8_t x43 = INT8_MIN;
	volatile uint32_t x44 = UINT32_MAX;
	int32_t t9 = 122153;

    t9 = (x41>((x42/x43)/x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x56 = 2003LLU;
	int32_t t10 = -1;

    t10 = (x53>((x54/x55)/x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x57 = 1140899LL;
	static int8_t x58 = 1;
	int64_t x59 = INT64_MIN;
	static int64_t x60 = INT64_MIN;
	static int32_t t11 = -945;

    t11 = (x57>((x58/x59)/x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MIN;
	uint64_t x62 = 250136187165LLU;
	static int16_t x63 = INT16_MIN;

    t12 = (x61>((x62/x63)/x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x65 = UINT64_MAX;
	uint64_t x66 = 453497380LLU;
	int64_t x68 = INT64_MIN;
	static int32_t t13 = -501430851;

    t13 = (x65>((x66/x67)/x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x69 = 1U;
	int32_t x70 = 269;
	uint16_t x71 = 6678U;
	uint32_t x72 = 471220U;

    t14 = (x69>((x70/x71)/x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x74 = INT8_MIN;
	int64_t x76 = INT64_MAX;
	static volatile int32_t t15 = -3;

    t15 = (x73>((x74/x75)/x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x78 = -1;
	static int64_t x80 = -1LL;
	int32_t t16 = -5;

    t16 = (x77>((x78/x79)/x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x81 = 3U;
	volatile int64_t x82 = INT64_MIN;

    t17 = (x81>((x82/x83)/x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x85 = -1LL;
	int8_t x86 = -1;
	static volatile uint64_t x88 = 261484646LLU;

    t18 = (x85>((x86/x87)/x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = INT16_MIN;
	int64_t x95 = INT64_MIN;
	int8_t x96 = -1;

    t19 = (x93>((x94/x95)/x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = 56;
	static uint8_t x98 = UINT8_MAX;
	int32_t x100 = -1;
	int32_t t20 = 52341;

    t20 = (x97>((x98/x99)/x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x102 = UINT8_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	static volatile int32_t t21 = 744;

    t21 = (x101>((x102/x103)/x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x105 = UINT64_MAX;
	volatile int32_t x106 = INT32_MIN;
	volatile uint32_t x107 = 1501U;
	static volatile int32_t t22 = 0;

    t22 = (x105>((x106/x107)/x108));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x111 = INT32_MIN;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t23 = 185183;

    t23 = (x109>((x110/x111)/x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x113 = 712U;
	uint64_t x114 = UINT64_MAX;
	int32_t x115 = INT32_MAX;
	int64_t x116 = INT64_MIN;

    t24 = (x113>((x114/x115)/x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x117 = 13U;
	int8_t x118 = 56;
	static uint8_t x119 = 127U;
	static int64_t x120 = -1LL;
	int32_t t25 = -1;

    t25 = (x117>((x118/x119)/x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x121 = INT8_MAX;
	static int16_t x123 = -5;
	int16_t x124 = -45;
	int32_t t26 = 7008708;

    t26 = (x121>((x122/x123)/x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = INT32_MIN;
	static int32_t x126 = INT32_MIN;
	int64_t x127 = 169813439898LL;

    t27 = (x125>((x126/x127)/x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x130 = UINT32_MAX;
	static int16_t x131 = INT16_MAX;
	static volatile uint32_t x132 = UINT32_MAX;

    t28 = (x129>((x130/x131)/x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x133 = 25U;
	static int64_t x134 = -1LL;
	uint32_t x135 = 3739645U;
	int16_t x136 = 152;

    t29 = (x133>((x134/x135)/x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = INT8_MAX;
	uint32_t x138 = UINT32_MAX;
	uint8_t x139 = 65U;
	static int8_t x140 = INT8_MAX;
	volatile int32_t t30 = -1367;

    t30 = (x137>((x138/x139)/x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x141 = -1;
	int16_t x142 = INT16_MIN;
	uint64_t x143 = 155129LLU;
	volatile int16_t x144 = -1;

    t31 = (x141>((x142/x143)/x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x146 = INT16_MAX;
	uint32_t x147 = 1000336U;
	int8_t x148 = INT8_MIN;
	int32_t t32 = 233525;

    t32 = (x145>((x146/x147)/x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x150 = INT64_MIN;
	static uint16_t x151 = 612U;
	uint16_t x152 = 3027U;
	int32_t t33 = 192662172;

    t33 = (x149>((x150/x151)/x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x154 = INT64_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t34 = -2780;

    t34 = (x153>((x154/x155)/x156));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x157 = 30;
	int8_t x158 = INT8_MAX;
	static uint8_t x160 = 1U;
	volatile int32_t t35 = -6059568;

    t35 = (x157>((x158/x159)/x160));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x163 = INT32_MIN;
	int32_t x164 = -1;
	volatile int32_t t36 = 114733050;

    t36 = (x161>((x162/x163)/x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x166 = INT32_MAX;
	static int16_t x167 = INT16_MIN;
	uint16_t x168 = 389U;
	static volatile int32_t t37 = -124;

    t37 = (x165>((x166/x167)/x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x169 = INT32_MIN;
	volatile int8_t x170 = -2;
	int16_t x171 = 2860;
	int8_t x172 = INT8_MIN;
	volatile int32_t t38 = -240339;

    t38 = (x169>((x170/x171)/x172));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = INT32_MIN;
	int8_t x174 = INT8_MAX;
	int32_t x175 = INT32_MIN;
	static int8_t x176 = -18;
	static volatile int32_t t39 = 256107;

    t39 = (x173>((x174/x175)/x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x177 = 13U;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = 183;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t40 = 58890696;

    t40 = (x177>((x178/x179)/x180));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x181 = -2;
	int16_t x182 = INT16_MAX;
	int8_t x184 = 25;
	int32_t t41 = -2451;

    t41 = (x181>((x182/x183)/x184));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x185 = 13U;
	uint16_t x187 = 1U;
	uint64_t x188 = 112254968539LLU;

    t42 = (x185>((x186/x187)/x188));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = 1;
	uint8_t x190 = UINT8_MAX;
	int32_t x192 = INT32_MAX;

    t43 = (x189>((x190/x191)/x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x193 = INT8_MIN;
	volatile int32_t x194 = -1;
	int16_t x195 = -1;
	int32_t t44 = -3714;

    t44 = (x193>((x194/x195)/x196));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x201 = INT64_MIN;
	int32_t x202 = INT32_MAX;
	int8_t x203 = -1;
	uint8_t x204 = 6U;
	static int32_t t45 = -1;

    t45 = (x201>((x202/x203)/x204));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x205 = 1U;
	static uint64_t x206 = 432592LLU;
	uint32_t x208 = UINT32_MAX;

    t46 = (x205>((x206/x207)/x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x209 = INT8_MIN;
	uint64_t x210 = UINT64_MAX;
	uint32_t x211 = 2178U;
	int32_t x212 = 11947;

    t47 = (x209>((x210/x211)/x212));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x214 = 10;
	int16_t x215 = -1;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t48 = 31;

    t48 = (x213>((x214/x215)/x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x218 = INT64_MAX;

    t49 = (x217>((x218/x219)/x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x221 = INT8_MAX;
	uint64_t x222 = 32492784603092601LLU;
	static int8_t x223 = INT8_MIN;
	volatile int16_t x224 = -30;
	volatile int32_t t50 = 15;

    t50 = (x221>((x222/x223)/x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = 13712360;
	int64_t x226 = -12921919683LL;
	static uint64_t x227 = 59857965537665LLU;
	volatile int16_t x228 = -1;
	volatile int32_t t51 = -1;

    t51 = (x225>((x226/x227)/x228));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x229 = -1LL;
	static uint8_t x230 = UINT8_MAX;
	uint8_t x231 = 1U;
	int16_t x232 = INT16_MIN;
	int32_t t52 = 106627869;

    t52 = (x229>((x230/x231)/x232));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x233 = UINT16_MAX;
	int64_t x234 = INT64_MIN;
	static volatile int16_t x235 = INT16_MIN;
	int8_t x236 = 2;

    t53 = (x233>((x234/x235)/x236));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x239 = INT8_MAX;
	volatile int64_t x240 = -27580796590943044LL;
	int32_t t54 = 19318383;

    t54 = (x237>((x238/x239)/x240));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MIN;
	uint32_t x244 = UINT32_MAX;

    t55 = (x241>((x242/x243)/x244));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = -260;
	uint16_t x246 = 20U;
	int8_t x247 = -9;

    t56 = (x245>((x246/x247)/x248));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x249 = 3720812755LLU;
	uint8_t x250 = 1U;
	uint32_t x251 = 1U;
	volatile uint16_t x252 = 176U;
	int32_t t57 = -309999027;

    t57 = (x249>((x250/x251)/x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x254 = 3510449987LL;
	int32_t x255 = INT32_MAX;
	static volatile int32_t x256 = -41;
	int32_t t58 = 7590088;

    t58 = (x253>((x254/x255)/x256));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x261 = 36206711U;
	int32_t x263 = INT32_MIN;
	volatile int8_t x264 = 11;

    t59 = (x261>((x262/x263)/x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	static int16_t x268 = INT16_MAX;

    t60 = (x265>((x266/x267)/x268));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x269 = UINT32_MAX;
	volatile int8_t x270 = INT8_MAX;
	static int32_t x271 = 31269843;
	volatile int8_t x272 = 50;
	int32_t t61 = 1;

    t61 = (x269>((x270/x271)/x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x281 = 9370801LL;
	int8_t x282 = -1;
	int64_t x283 = INT64_MIN;
	int64_t x284 = -56883705340203LL;

    t62 = (x281>((x282/x283)/x284));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x285 = 61U;
	uint16_t x286 = 738U;
	uint16_t x287 = UINT16_MAX;
	int32_t t63 = 4;

    t63 = (x285>((x286/x287)/x288));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x289 = INT32_MIN;
	volatile int32_t x291 = INT32_MAX;
	uint32_t x292 = 921123542U;
	static int32_t t64 = 0;

    t64 = (x289>((x290/x291)/x292));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x293 = 771U;
	static int8_t x294 = INT8_MAX;
	uint64_t x295 = 66932LLU;
	volatile int32_t t65 = 3;

    t65 = (x293>((x294/x295)/x296));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x298 = -25;
	uint64_t x299 = 49LLU;
	int64_t x300 = INT64_MIN;
	static int32_t t66 = 26;

    t66 = (x297>((x298/x299)/x300));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = 1;
	uint64_t x302 = 1LLU;
	uint64_t x303 = UINT64_MAX;
	volatile uint16_t x304 = 5U;
	volatile int32_t t67 = 450837865;

    t67 = (x301>((x302/x303)/x304));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x305 = -1LL;
	int64_t x307 = INT64_MAX;
	static int32_t t68 = -181;

    t68 = (x305>((x306/x307)/x308));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x309 = UINT8_MAX;
	static int64_t x311 = INT64_MIN;
	int32_t t69 = -16213361;

    t69 = (x309>((x310/x311)/x312));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x314 = INT16_MIN;
	int8_t x315 = 2;
	uint32_t x316 = 91726045U;
	static volatile int32_t t70 = 168962349;

    t70 = (x313>((x314/x315)/x316));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x317 = INT16_MAX;
	int32_t x318 = INT32_MAX;
	int32_t x319 = INT32_MIN;
	static int32_t x320 = 6825388;
	static int32_t t71 = -15801;

    t71 = (x317>((x318/x319)/x320));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x321 = -585;
	uint32_t x322 = UINT32_MAX;
	int8_t x324 = INT8_MAX;
	volatile int32_t t72 = -1;

    t72 = (x321>((x322/x323)/x324));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x325 = UINT8_MAX;
	uint16_t x327 = 33U;
	volatile int16_t x328 = INT16_MAX;
	int32_t t73 = 8036;

    t73 = (x325>((x326/x327)/x328));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x329 = INT32_MAX;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = INT64_MAX;
	int32_t t74 = 898205;

    t74 = (x329>((x330/x331)/x332));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	volatile uint8_t x335 = 107U;

    t75 = (x333>((x334/x335)/x336));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x338 = INT64_MAX;
	int64_t x339 = -1LL;
	static int8_t x340 = -1;
	static int32_t t76 = 12150369;

    t76 = (x337>((x338/x339)/x340));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x341 = INT16_MIN;
	int32_t x342 = -1;
	static volatile int8_t x343 = -2;
	int16_t x344 = INT16_MIN;
	int32_t t77 = 1;

    t77 = (x341>((x342/x343)/x344));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x345 = INT8_MIN;
	static int16_t x346 = -1;
	volatile int64_t x347 = INT64_MAX;
	int16_t x348 = 875;
	volatile int32_t t78 = -134074671;

    t78 = (x345>((x346/x347)/x348));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x349 = 716U;
	uint64_t x350 = 47442LLU;
	int8_t x351 = -1;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t79 = -5;

    t79 = (x349>((x350/x351)/x352));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x354 = INT16_MIN;
	volatile int16_t x355 = INT16_MIN;
	volatile int32_t x356 = -7921009;
	volatile int32_t t80 = 390993523;

    t80 = (x353>((x354/x355)/x356));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x357 = INT8_MIN;
	uint16_t x358 = 6U;
	static int16_t x359 = INT16_MAX;
	volatile int32_t t81 = -362893;

    t81 = (x357>((x358/x359)/x360));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x361 = -1;
	uint32_t x362 = 160732U;
	int32_t x363 = -7516;
	static int8_t x364 = -1;
	int32_t t82 = 1793;

    t82 = (x361>((x362/x363)/x364));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x365 = INT64_MAX;
	static volatile int64_t x367 = INT64_MAX;
	int8_t x368 = INT8_MAX;
	int32_t t83 = 120639;

    t83 = (x365>((x366/x367)/x368));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x369 = -1LL;
	int64_t x370 = INT64_MIN;
	volatile int32_t t84 = 436391659;

    t84 = (x369>((x370/x371)/x372));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x375 = INT8_MIN;
	int8_t x376 = 1;
	volatile int32_t t85 = -7997;

    t85 = (x373>((x374/x375)/x376));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x377 = 4;
	static int16_t x379 = -1;
	int32_t t86 = 34403;

    t86 = (x377>((x378/x379)/x380));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x382 = UINT64_MAX;
	static int32_t x383 = INT32_MAX;
	int8_t x384 = INT8_MAX;
	int32_t t87 = -379204347;

    t87 = (x381>((x382/x383)/x384));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x385 = -1;
	int16_t x386 = -1;
	static int8_t x387 = INT8_MIN;
	uint8_t x388 = 63U;

    t88 = (x385>((x386/x387)/x388));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x390 = 716LLU;
	int8_t x391 = -1;
	int64_t x392 = -1LL;
	volatile int32_t t89 = 203256;

    t89 = (x389>((x390/x391)/x392));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x393 = 3944U;
	static int32_t x395 = -2846;

    t90 = (x393>((x394/x395)/x396));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x401 = 1230U;
	uint64_t x402 = UINT64_MAX;
	static volatile int16_t x403 = -1;
	int32_t x404 = -99;

    t91 = (x401>((x402/x403)/x404));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x405 = 2321351U;
	int32_t x406 = INT32_MAX;
	uint64_t x407 = 13534867847968LLU;
	uint64_t x408 = 5931963621039780LLU;

    t92 = (x405>((x406/x407)/x408));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x409 = -316;
	static int16_t x410 = INT16_MAX;
	static uint16_t x411 = 183U;

    t93 = (x409>((x410/x411)/x412));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x414 = -45439712693LL;
	volatile int32_t x415 = -1;
	int16_t x416 = INT16_MIN;
	volatile int32_t t94 = 7606394;

    t94 = (x413>((x414/x415)/x416));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x417 = INT16_MAX;
	int16_t x419 = INT16_MIN;
	int32_t t95 = 0;

    t95 = (x417>((x418/x419)/x420));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x421 = 100U;
	static int64_t x422 = INT64_MIN;
	int32_t x423 = 508412;
	static uint16_t x424 = UINT16_MAX;
	static int32_t t96 = -6;

    t96 = (x421>((x422/x423)/x424));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x425 = 2068097035312993458LLU;
	static uint64_t x427 = UINT64_MAX;
	volatile int32_t t97 = -2476;

    t97 = (x425>((x426/x427)/x428));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x429 = 448127970300419LL;
	uint64_t x432 = 3409774LLU;

    t98 = (x429>((x430/x431)/x432));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x434 = INT64_MAX;
	int64_t x435 = 1187LL;

    t99 = (x433>((x434/x435)/x436));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x437 = INT16_MIN;
	volatile int16_t x438 = INT16_MIN;
	static uint16_t x439 = 12U;
	int32_t x440 = -1;
	int32_t t100 = 18719;

    t100 = (x437>((x438/x439)/x440));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x442 = -42865109LL;
	int32_t t101 = 382463;

    t101 = (x441>((x442/x443)/x444));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x445 = 5600066593LLU;
	volatile int32_t t102 = -624;

    t102 = (x445>((x446/x447)/x448));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x450 = 31545730U;
	int16_t x451 = INT16_MIN;
	int32_t x452 = 4259;
	int32_t t103 = 6094961;

    t103 = (x449>((x450/x451)/x452));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x453 = -1;
	uint8_t x454 = 15U;
	int64_t x456 = 26692065LL;
	volatile int32_t t104 = -867;

    t104 = (x453>((x454/x455)/x456));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MIN;
	volatile int16_t x460 = INT16_MIN;
	volatile int32_t t105 = 3059630;

    t105 = (x457>((x458/x459)/x460));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x461 = INT64_MIN;
	volatile uint32_t x462 = UINT32_MAX;
	uint8_t x463 = UINT8_MAX;
	uint8_t x464 = UINT8_MAX;
	int32_t t106 = 9938;

    t106 = (x461>((x462/x463)/x464));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x465 = UINT16_MAX;
	int32_t x466 = INT32_MIN;
	static uint32_t x467 = 24006299U;
	uint32_t x468 = 102U;
	int32_t t107 = -95892;

    t107 = (x465>((x466/x467)/x468));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x471 = INT32_MAX;
	int8_t x472 = INT8_MIN;
	int32_t t108 = -2012;

    t108 = (x469>((x470/x471)/x472));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x473 = INT32_MIN;
	uint16_t x474 = 26583U;
	static uint32_t x475 = UINT32_MAX;
	static int64_t x476 = -1LL;
	int32_t t109 = -29849;

    t109 = (x473>((x474/x475)/x476));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x478 = INT16_MIN;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t110 = -2;

    t110 = (x477>((x478/x479)/x480));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x481 = UINT16_MAX;
	int8_t x482 = INT8_MIN;
	uint16_t x483 = 25356U;
	int8_t x484 = INT8_MIN;
	volatile int32_t t111 = -227326;

    t111 = (x481>((x482/x483)/x484));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x485 = INT64_MAX;
	volatile uint64_t x486 = UINT64_MAX;
	int32_t x487 = INT32_MIN;
	int16_t x488 = INT16_MAX;
	volatile int32_t t112 = 1298746;

    t112 = (x485>((x486/x487)/x488));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x489 = INT16_MAX;
	uint64_t x490 = 15168284949614712LLU;
	uint64_t x491 = 2401132LLU;
	int8_t x492 = -1;
	int32_t t113 = 1;

    t113 = (x489>((x490/x491)/x492));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x497 = -1LL;
	volatile int8_t x498 = -17;
	volatile int8_t x500 = INT8_MIN;
	volatile int32_t t114 = 76058353;

    t114 = (x497>((x498/x499)/x500));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x501 = 3U;
	static int32_t x502 = -1644939;
	volatile uint8_t x503 = 106U;
	int8_t x504 = INT8_MAX;
	int32_t t115 = -3;

    t115 = (x501>((x502/x503)/x504));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x506 = UINT8_MAX;
	static int32_t x507 = -492370;
	static volatile uint32_t x508 = 310603U;
	volatile int32_t t116 = 38046243;

    t116 = (x505>((x506/x507)/x508));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x514 = 887575;
	int8_t x515 = INT8_MIN;
	int32_t x516 = INT32_MIN;

    t117 = (x513>((x514/x515)/x516));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x517 = INT32_MIN;
	static uint32_t x518 = 1800234793U;
	int64_t x519 = 5224271467LL;
	int16_t x520 = INT16_MAX;
	volatile int32_t t118 = -1;

    t118 = (x517>((x518/x519)/x520));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x521 = 5388U;
	int8_t x522 = 0;
	volatile int32_t x523 = -892404069;
	volatile int32_t t119 = 6633;

    t119 = (x521>((x522/x523)/x524));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x525 = 856;
	int64_t x527 = INT64_MIN;
	int64_t x528 = INT64_MAX;
	int32_t t120 = -365826;

    t120 = (x525>((x526/x527)/x528));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x533 = INT32_MAX;
	volatile int64_t x534 = 3316LL;
	static uint32_t x535 = 3U;
	int16_t x536 = 3;
	volatile int32_t t121 = -1;

    t121 = (x533>((x534/x535)/x536));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x537 = INT8_MAX;
	static int64_t x538 = INT64_MAX;
	int8_t x539 = INT8_MIN;
	uint16_t x540 = UINT16_MAX;
	static volatile int32_t t122 = 362094340;

    t122 = (x537>((x538/x539)/x540));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x541 = INT16_MIN;
	int8_t x542 = INT8_MAX;
	static volatile int32_t t123 = -1;

    t123 = (x541>((x542/x543)/x544));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x545 = UINT32_MAX;
	int8_t x546 = INT8_MIN;
	static uint16_t x547 = 52U;
	static int16_t x548 = 43;
	static int32_t t124 = 6842701;

    t124 = (x545>((x546/x547)/x548));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x549 = 5U;
	int64_t x551 = INT64_MIN;
	int32_t x552 = 111007483;
	volatile int32_t t125 = 1;

    t125 = (x549>((x550/x551)/x552));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x554 = INT64_MAX;
	static int64_t x555 = INT64_MIN;
	int8_t x556 = -1;
	int32_t t126 = 9;

    t126 = (x553>((x554/x555)/x556));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x557 = UINT8_MAX;
	int8_t x558 = INT8_MIN;
	volatile uint64_t x559 = 107918694274LLU;
	int8_t x560 = -1;
	volatile int32_t t127 = -2650;

    t127 = (x557>((x558/x559)/x560));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x561 = INT32_MIN;
	uint8_t x562 = 13U;
	uint16_t x563 = 4U;
	static uint64_t x564 = 11274096585645321LLU;
	static volatile int32_t t128 = 45981;

    t128 = (x561>((x562/x563)/x564));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x565 = INT8_MIN;
	int32_t x566 = INT32_MIN;
	static int64_t x568 = INT64_MAX;
	static volatile int32_t t129 = 85;

    t129 = (x565>((x566/x567)/x568));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x569 = INT32_MIN;
	uint8_t x570 = UINT8_MAX;
	int16_t x571 = -375;
	int64_t x572 = INT64_MIN;
	static volatile int32_t t130 = -538;

    t130 = (x569>((x570/x571)/x572));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x574 = INT16_MIN;
	uint64_t x575 = 1323622LLU;
	volatile int8_t x576 = -1;

    t131 = (x573>((x574/x575)/x576));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x577 = 0U;
	static uint32_t x578 = 479380U;
	static volatile int32_t x580 = INT32_MAX;
	static volatile int32_t t132 = -5;

    t132 = (x577>((x578/x579)/x580));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x581 = 3785U;
	int16_t x582 = 0;
	static volatile int32_t x583 = INT32_MAX;
	static uint32_t x584 = 12U;
	int32_t t133 = -781;

    t133 = (x581>((x582/x583)/x584));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint8_t x586 = 8U;
	int32_t x588 = -1;

    t134 = (x585>((x586/x587)/x588));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x590 = -5;
	int32_t x591 = -1320;
	int32_t x592 = -1;
	volatile int32_t t135 = -62818;

    t135 = (x589>((x590/x591)/x592));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x593 = -1;
	volatile int64_t x595 = INT64_MAX;
	int32_t x596 = -1;
	int32_t t136 = -99931;

    t136 = (x593>((x594/x595)/x596));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x601 = INT16_MAX;
	int16_t x602 = -31;
	static int8_t x603 = INT8_MIN;
	int16_t x604 = INT16_MAX;
	volatile int32_t t137 = -374617970;

    t137 = (x601>((x602/x603)/x604));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x606 = UINT32_MAX;
	static int64_t x607 = 29622188592LL;
	int64_t x608 = INT64_MIN;
	volatile int32_t t138 = 11385568;

    t138 = (x605>((x606/x607)/x608));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x609 = 3329LL;
	int8_t x610 = INT8_MAX;
	int32_t x611 = INT32_MIN;
	int8_t x612 = -1;
	static volatile int32_t t139 = -467024;

    t139 = (x609>((x610/x611)/x612));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x613 = INT16_MIN;
	volatile uint64_t x614 = 447936393479LLU;
	int8_t x615 = 44;
	volatile int64_t x616 = -32324924875LL;
	volatile int32_t t140 = -1092588;

    t140 = (x613>((x614/x615)/x616));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x617 = 1U;
	uint8_t x618 = UINT8_MAX;
	int32_t x619 = -265141771;
	int32_t t141 = -132366;

    t141 = (x617>((x618/x619)/x620));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x621 = 690310137600LLU;
	static int64_t x622 = -1LL;
	static volatile int16_t x623 = 14197;
	int64_t x624 = INT64_MIN;
	volatile int32_t t142 = 1991846;

    t142 = (x621>((x622/x623)/x624));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x626 = 25;
	int64_t x627 = INT64_MIN;
	uint64_t x628 = 43056408004074529LLU;
	static volatile int32_t t143 = -316381;

    t143 = (x625>((x626/x627)/x628));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x630 = INT64_MIN;
	int8_t x631 = INT8_MIN;
	volatile int32_t x632 = -1;
	volatile int32_t t144 = 56933139;

    t144 = (x629>((x630/x631)/x632));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x633 = -1;
	int64_t x634 = INT64_MIN;
	int16_t x635 = INT16_MIN;
	int64_t x636 = INT64_MIN;
	volatile int32_t t145 = 27;

    t145 = (x633>((x634/x635)/x636));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x637 = 0U;
	int16_t x639 = 11113;
	int16_t x640 = INT16_MIN;
	volatile int32_t t146 = 91;

    t146 = (x637>((x638/x639)/x640));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x641 = INT32_MAX;
	uint8_t x642 = UINT8_MAX;
	int16_t x643 = INT16_MIN;
	static uint8_t x644 = UINT8_MAX;
	static int32_t t147 = -5707420;

    t147 = (x641>((x642/x643)/x644));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x645 = INT16_MIN;
	int64_t x646 = INT64_MAX;
	int8_t x647 = INT8_MIN;
	volatile uint64_t x648 = 719044968114543LLU;
	int32_t t148 = 1;

    t148 = (x645>((x646/x647)/x648));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x653 = UINT64_MAX;
	int64_t x654 = -23655468960LL;
	int16_t x655 = INT16_MAX;
	int32_t t149 = 361304315;

    t149 = (x653>((x654/x655)/x656));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x658 = INT16_MIN;
	static int16_t x659 = 12834;
	volatile int32_t t150 = 3258;

    t150 = (x657>((x658/x659)/x660));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x661 = -1;
	uint16_t x662 = 271U;
	volatile uint64_t x663 = UINT64_MAX;
	uint32_t x664 = UINT32_MAX;

    t151 = (x661>((x662/x663)/x664));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x665 = 1;
	int8_t x666 = -1;
	static int16_t x667 = -39;
	static int16_t x668 = -6795;
	int32_t t152 = 24439;

    t152 = (x665>((x666/x667)/x668));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x670 = 16704170735574LL;
	static int64_t x671 = -1LL;
	uint8_t x672 = 26U;
	volatile int32_t t153 = 205;

    t153 = (x669>((x670/x671)/x672));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x673 = 21913496766459037LLU;
	int8_t x674 = 1;
	static int16_t x675 = INT16_MIN;
	static int32_t x676 = INT32_MIN;
	static int32_t t154 = 9;

    t154 = (x673>((x674/x675)/x676));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x682 = INT32_MAX;
	int16_t x683 = 9;
	volatile int32_t t155 = -7579;

    t155 = (x681>((x682/x683)/x684));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x686 = -1082463379930LL;
	volatile int64_t x687 = INT64_MAX;
	static volatile int64_t x688 = INT64_MIN;
	volatile int32_t t156 = -10985518;

    t156 = (x685>((x686/x687)/x688));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x693 = 489790177LL;
	int16_t x694 = INT16_MIN;
	volatile int32_t t157 = -51915687;

    t157 = (x693>((x694/x695)/x696));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x697 = 0U;
	uint8_t x698 = UINT8_MAX;
	int8_t x700 = INT8_MIN;
	static int32_t t158 = 146752;

    t158 = (x697>((x698/x699)/x700));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x701 = 1U;
	int32_t x702 = INT32_MAX;
	static int32_t t159 = 1067247;

    t159 = (x701>((x702/x703)/x704));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x705 = -26;
	static uint16_t x707 = 9U;
	volatile int32_t t160 = 1730;

    t160 = (x705>((x706/x707)/x708));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x709 = 365809121U;
	static int32_t x711 = 488378527;
	volatile uint8_t x712 = UINT8_MAX;
	int32_t t161 = -545298;

    t161 = (x709>((x710/x711)/x712));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x713 = INT16_MIN;
	int8_t x714 = INT8_MIN;
	int64_t x715 = -4385033886LL;
	int16_t x716 = INT16_MIN;
	static volatile int32_t t162 = 21449;

    t162 = (x713>((x714/x715)/x716));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x718 = -193557;
	int32_t x719 = INT32_MIN;
	int32_t t163 = 41;

    t163 = (x717>((x718/x719)/x720));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x722 = -1;
	static uint32_t x723 = 4U;
	volatile int32_t t164 = -1063;

    t164 = (x721>((x722/x723)/x724));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x725 = -18;
	uint64_t x726 = UINT64_MAX;
	uint16_t x727 = UINT16_MAX;
	volatile int32_t x728 = INT32_MAX;

    t165 = (x725>((x726/x727)/x728));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x729 = INT16_MIN;
	static int8_t x731 = 10;
	uint32_t x732 = UINT32_MAX;

    t166 = (x729>((x730/x731)/x732));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x734 = -1LL;
	int8_t x735 = INT8_MIN;
	static int32_t x736 = INT32_MAX;

    t167 = (x733>((x734/x735)/x736));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x737 = INT64_MAX;
	volatile int8_t x738 = INT8_MIN;
	volatile int8_t x739 = 14;
	volatile int32_t t168 = -81475135;

    t168 = (x737>((x738/x739)/x740));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x743 = 6;
	static uint64_t x744 = 176146121982LLU;
	int32_t t169 = -63018280;

    t169 = (x741>((x742/x743)/x744));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x745 = 8U;
	volatile int32_t x746 = INT32_MIN;
	static uint64_t x747 = UINT64_MAX;
	uint64_t x748 = UINT64_MAX;
	int32_t t170 = -21;

    t170 = (x745>((x746/x747)/x748));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x749 = -233;
	uint32_t x752 = 2766U;
	volatile int32_t t171 = 5;

    t171 = (x749>((x750/x751)/x752));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x753 = -3;
	volatile int8_t x754 = 28;
	uint64_t x756 = 109581LLU;

    t172 = (x753>((x754/x755)/x756));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x757 = INT8_MIN;
	int16_t x758 = 298;
	uint8_t x759 = 11U;
	volatile int16_t x760 = INT16_MAX;
	volatile int32_t t173 = -6808147;

    t173 = (x757>((x758/x759)/x760));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x765 = -1;
	int8_t x766 = -1;
	int8_t x767 = INT8_MIN;
	int8_t x768 = INT8_MIN;
	static int32_t t174 = 6943065;

    t174 = (x765>((x766/x767)/x768));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x769 = 86598U;
	uint64_t x770 = 76944649LLU;
	uint64_t x771 = 1417723935424871LLU;
	int16_t x772 = INT16_MIN;
	volatile int32_t t175 = 83890;

    t175 = (x769>((x770/x771)/x772));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x773 = 2162718LLU;
	static uint64_t x775 = 5497672710491770LLU;
	int16_t x776 = INT16_MIN;

    t176 = (x773>((x774/x775)/x776));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x777 = 5U;
	volatile int32_t x778 = INT32_MIN;
	static volatile uint16_t x779 = UINT16_MAX;
	uint16_t x780 = 29U;
	volatile int32_t t177 = 596488335;

    t177 = (x777>((x778/x779)/x780));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x781 = -1106;
	uint32_t x782 = 15U;
	int64_t x783 = -16178947882022LL;
	int32_t x784 = INT32_MAX;
	volatile int32_t t178 = 4516239;

    t178 = (x781>((x782/x783)/x784));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x785 = 4U;
	int16_t x786 = -1;
	int64_t x787 = 25749536894LL;
	uint16_t x788 = 50U;
	int32_t t179 = -3;

    t179 = (x785>((x786/x787)/x788));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x789 = INT8_MIN;
	uint8_t x790 = UINT8_MAX;
	int16_t x791 = -2;
	int32_t x792 = INT32_MIN;
	int32_t t180 = 23;

    t180 = (x789>((x790/x791)/x792));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x793 = INT32_MIN;
	volatile int16_t x794 = -66;
	int16_t x795 = 1;
	int32_t x796 = INT32_MIN;
	volatile int32_t t181 = 51570;

    t181 = (x793>((x794/x795)/x796));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x797 = -1;
	volatile int16_t x798 = -1;
	int64_t x799 = INT64_MIN;
	uint64_t x800 = 2272147409009667LLU;
	int32_t t182 = 1246712;

    t182 = (x797>((x798/x799)/x800));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x801 = 10122958511LLU;
	int64_t x802 = -3LL;
	int32_t x803 = INT32_MIN;
	volatile int8_t x804 = -1;

    t183 = (x801>((x802/x803)/x804));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x805 = -45;
	int8_t x807 = 1;
	int32_t x808 = -1;

    t184 = (x805>((x806/x807)/x808));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x809 = 1U;
	uint64_t x810 = 191LLU;
	volatile int32_t x812 = INT32_MAX;
	int32_t t185 = 22362968;

    t185 = (x809>((x810/x811)/x812));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x813 = 9671824375689LL;
	static int16_t x814 = INT16_MAX;
	uint32_t x815 = 7710139U;
	int16_t x816 = -1589;
	int32_t t186 = 7771221;

    t186 = (x813>((x814/x815)/x816));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x817 = INT16_MAX;
	int32_t x818 = -158126196;
	uint8_t x819 = 10U;
	int16_t x820 = -1;
	volatile int32_t t187 = 154380;

    t187 = (x817>((x818/x819)/x820));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x821 = UINT16_MAX;
	volatile int64_t x823 = -1LL;
	int16_t x824 = -119;
	static volatile int32_t t188 = -866184907;

    t188 = (x821>((x822/x823)/x824));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x825 = -1LL;
	static uint8_t x826 = UINT8_MAX;
	static uint64_t x827 = 7897191811LLU;
	uint16_t x828 = UINT16_MAX;

    t189 = (x825>((x826/x827)/x828));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x829 = 14561439U;
	static uint32_t x830 = 2997059U;
	static uint32_t x832 = 2578148U;
	volatile int32_t t190 = -15790;

    t190 = (x829>((x830/x831)/x832));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x833 = INT32_MIN;
	volatile uint16_t x834 = UINT16_MAX;
	int32_t x835 = INT32_MIN;
	int64_t x836 = -1LL;
	int32_t t191 = -258983972;

    t191 = (x833>((x834/x835)/x836));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x837 = -1;
	int8_t x840 = INT8_MIN;

    t192 = (x837>((x838/x839)/x840));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x841 = -1237836433123398315LL;
	int32_t x842 = 1;
	int32_t x843 = INT32_MAX;
	int8_t x844 = -1;
	int32_t t193 = -238276;

    t193 = (x841>((x842/x843)/x844));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x845 = INT32_MIN;
	static volatile int64_t x846 = -1LL;
	int8_t x847 = 26;
	volatile int32_t t194 = -38;

    t194 = (x845>((x846/x847)/x848));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x849 = INT32_MIN;
	uint16_t x850 = UINT16_MAX;
	int32_t x851 = -1;
	int32_t x852 = -1;

    t195 = (x849>((x850/x851)/x852));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x853 = -1;
	uint64_t x856 = 23201819278768562LLU;
	volatile int32_t t196 = 0;

    t196 = (x853>((x854/x855)/x856));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x858 = -1;
	volatile int16_t x859 = -1;
	static int32_t x860 = 7232425;
	volatile int32_t t197 = 5;

    t197 = (x857>((x858/x859)/x860));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x862 = 18;
	uint32_t x863 = 46302U;
	static int32_t x864 = -257;

    t198 = (x861>((x862/x863)/x864));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x865 = INT32_MAX;
	int64_t x866 = -1LL;
	int64_t x867 = INT64_MAX;
	int32_t t199 = -10;

    t199 = (x865>((x866/x867)/x868));

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

