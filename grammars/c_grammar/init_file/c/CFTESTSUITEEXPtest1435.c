
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

int16_t x10 = INT16_MIN;
int16_t x16 = INT16_MAX;
static int32_t t3 = -1;
int16_t x27 = -28;
int8_t x28 = -1;
int32_t t6 = -2760;
static int8_t x36 = INT8_MIN;
static int8_t x40 = INT8_MAX;
int32_t x43 = INT32_MAX;
static uint64_t x46 = 1473LLU;
volatile uint64_t x50 = 234LLU;
int64_t x56 = INT64_MIN;
static int32_t x57 = INT32_MIN;
uint32_t x65 = UINT32_MAX;
int32_t x66 = INT32_MIN;
static uint16_t x67 = UINT16_MAX;
volatile int32_t t16 = 27695555;
uint32_t x69 = 22U;
volatile int16_t x71 = -1;
int16_t x83 = 581;
volatile uint16_t x87 = UINT16_MAX;
static volatile int32_t t21 = 2;
volatile int8_t x93 = -1;
int32_t t23 = 0;
static volatile int64_t x97 = 61702037024LL;
static uint64_t x101 = 49991114180LLU;
volatile uint16_t x102 = 12064U;
static int16_t x103 = 0;
int64_t x104 = INT64_MIN;
volatile int8_t x107 = -23;
static int8_t x108 = INT8_MIN;
int8_t x111 = INT8_MIN;
int32_t x114 = -47679990;
int32_t x118 = INT32_MIN;
static volatile uint8_t x124 = 115U;
volatile int32_t t31 = -151005;
int32_t x134 = -2561;
int32_t x137 = INT32_MIN;
uint16_t x139 = 25857U;
int32_t x140 = 1243609;
static volatile int32_t t34 = -8492;
int32_t x144 = -1;
static uint64_t x171 = 71889LLU;
volatile int32_t t42 = 985437;
static uint8_t x173 = 115U;
int32_t t43 = 16058048;
int16_t x191 = 14227;
volatile int32_t t48 = -1193;
volatile int32_t t51 = 3186691;
volatile int8_t x211 = INT8_MIN;
int32_t t52 = -53;
int32_t t53 = -31171703;
int32_t x218 = -1;
int32_t x229 = INT32_MAX;
int32_t x232 = INT32_MAX;
int8_t x244 = INT8_MIN;
volatile int8_t x246 = INT8_MIN;
int8_t x249 = -43;
uint32_t x257 = 4U;
uint8_t x260 = 3U;
int32_t t64 = 18399;
uint16_t x265 = 10216U;
uint16_t x272 = UINT16_MAX;
volatile int64_t x276 = INT64_MAX;
volatile uint32_t x277 = 1623129631U;
int32_t t70 = 789;
volatile int32_t t72 = 19614412;
uint32_t x294 = 1729U;
static uint32_t x295 = 183947936U;
int64_t x299 = INT64_MIN;
int32_t x302 = INT32_MIN;
static uint32_t x305 = UINT32_MAX;
uint16_t x306 = 470U;
int32_t t76 = -4823933;
int8_t x310 = INT8_MAX;
int32_t x315 = INT32_MAX;
int32_t t78 = 260603311;
volatile int32_t t79 = -1148;
static int64_t x330 = -778524614LL;
int16_t x336 = INT16_MAX;
int32_t x338 = INT32_MAX;
int32_t t83 = -180076870;
volatile int32_t t85 = 1;
volatile int32_t t86 = -945272;
volatile int32_t t88 = 640;
volatile uint16_t x375 = UINT16_MAX;
int32_t t92 = -5217773;
uint16_t x377 = UINT16_MAX;
uint8_t x379 = 28U;
uint8_t x380 = UINT8_MAX;
volatile int32_t t94 = 813045;
uint32_t x386 = 90887U;
volatile int64_t x388 = INT64_MAX;
static int32_t t96 = -49537;
uint16_t x394 = 118U;
int32_t t97 = -4459;
int16_t x405 = INT16_MAX;
uint16_t x411 = 37U;
volatile int16_t x414 = 1;
int8_t x415 = -62;
static uint64_t x423 = 5LLU;
int32_t x437 = -311475;
int16_t x453 = INT16_MIN;
uint8_t x454 = UINT8_MAX;
volatile int32_t x457 = -8906162;
static volatile int32_t t113 = -12079873;
int64_t x477 = INT64_MIN;
static volatile int16_t x486 = INT16_MAX;
static int16_t x494 = INT16_MAX;
static int16_t x499 = INT16_MIN;
volatile int64_t x506 = INT64_MAX;
uint32_t x507 = 10303862U;
volatile int32_t x508 = 258;
static volatile int16_t x514 = -1;
int16_t x517 = -1;
static int64_t x519 = INT64_MIN;
int8_t x523 = -1;
int32_t x524 = INT32_MIN;
uint32_t x525 = 51U;
volatile int32_t t126 = 753863;
static int8_t x529 = -1;
uint16_t x530 = 1133U;
volatile uint16_t x537 = 22730U;
uint32_t x538 = 31581878U;
volatile int32_t x540 = -520150;
volatile int32_t t129 = -23297;
int16_t x553 = -1;
uint16_t x558 = UINT16_MAX;
volatile int16_t x567 = INT16_MAX;
int32_t x569 = INT32_MAX;
volatile int64_t x570 = INT64_MIN;
static volatile int32_t t137 = 2;
volatile uint8_t x586 = UINT8_MAX;
int8_t x588 = -28;
int8_t x597 = INT8_MIN;
uint32_t x608 = 6U;
uint32_t x610 = 502U;
int32_t x614 = INT32_MAX;
static int16_t x616 = INT16_MIN;
int32_t x618 = -1;
uint8_t x630 = 0U;
volatile int32_t t152 = -7045796;
int16_t x633 = INT16_MIN;
int64_t x636 = INT64_MAX;
volatile int32_t t155 = -6;
uint64_t x650 = UINT64_MAX;
int64_t x653 = INT64_MIN;
volatile int64_t x655 = INT64_MAX;
uint32_t x656 = 124U;
static int32_t x660 = -1;
uint8_t x671 = 76U;
uint32_t x676 = 5430866U;
static int32_t t163 = 86;
uint16_t x678 = 12U;
int16_t x680 = -1;
int32_t x684 = INT32_MIN;
int16_t x687 = 311;
int16_t x702 = INT16_MAX;
static int64_t x704 = 740445LL;
uint16_t x715 = 5U;
uint64_t x717 = 4391337LLU;
volatile int16_t x721 = 28;
int32_t t176 = 1;
volatile int32_t t179 = 9615;
int16_t x741 = INT16_MIN;
static int16_t x742 = INT16_MIN;
uint64_t x743 = UINT64_MAX;
int32_t x749 = 2;
int32_t x753 = INT32_MAX;
static volatile int32_t x754 = INT32_MIN;
volatile uint16_t x774 = UINT16_MAX;
int32_t t187 = 384;
uint64_t x779 = UINT64_MAX;
volatile int8_t x786 = INT8_MIN;
volatile int32_t t190 = -93728831;
int32_t t191 = 9838;
volatile int16_t x794 = -2499;
volatile uint8_t x795 = 0U;
uint16_t x804 = 1691U;
int16_t x807 = 0;
int16_t x808 = -1;
volatile int16_t x813 = -1;
int8_t x818 = -28;
int32_t t198 = 49059;


void f0(void) {
    	static int32_t x1 = -1;
	int64_t x2 = INT64_MIN;
	int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -390507189;

    t0 = (x1!=((x2==x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = 3;

    t1 = (x5!=((x6==x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 43U;
	volatile int8_t x11 = -11;
	int32_t x12 = -268061;
	int32_t t2 = 3838091;

    t2 = (x9!=((x10==x11)%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int16_t x14 = 155;
	volatile uint32_t x15 = 22U;

    t3 = (x13!=((x14==x15)%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = 21LL;
	static uint64_t x18 = 2056246316193569483LLU;
	int32_t x19 = 806;
	int8_t x20 = -54;
	int32_t t4 = 5;

    t4 = (x17!=((x18==x19)%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = -1;
	volatile int8_t x22 = -6;
	volatile int32_t x23 = 32863870;
	int32_t x24 = -1;
	int32_t t5 = 30;

    t5 = (x21!=((x22==x23)%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 1101U;
	uint64_t x26 = 50074988LLU;

    t6 = (x25!=((x26==x27)%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	uint16_t x30 = 10342U;
	int8_t x31 = INT8_MAX;
	int16_t x32 = -5500;
	volatile int32_t t7 = -1710;

    t7 = (x29!=((x30==x31)%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	int32_t x34 = INT32_MAX;
	int32_t x35 = INT32_MIN;
	int32_t t8 = 238;

    t8 = (x33!=((x34==x35)%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 14U;
	static int16_t x38 = INT16_MIN;
	static int16_t x39 = -3841;
	volatile int32_t t9 = -359;

    t9 = (x37!=((x38==x39)%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 0;
	int64_t x42 = -581LL;
	volatile int16_t x44 = INT16_MIN;
	int32_t t10 = 147962;

    t10 = (x41!=((x42==x43)%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 79;
	static volatile int32_t x47 = 61089153;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -169968;

    t11 = (x45!=((x46==x47)%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = 110;
	int16_t x51 = INT16_MIN;
	int32_t x52 = -376690;
	int32_t t12 = -1055278;

    t12 = (x49!=((x50==x51)%x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	int16_t x54 = -130;
	volatile int16_t x55 = -1;
	volatile int32_t t13 = 506666442;

    t13 = (x53!=((x54==x55)%x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MAX;
	uint32_t x59 = 562987U;
	volatile int16_t x60 = -14;
	int32_t t14 = -7847;

    t14 = (x57!=((x58==x59)%x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = -1;
	uint8_t x62 = 36U;
	uint16_t x63 = UINT16_MAX;
	uint32_t x64 = UINT32_MAX;
	int32_t t15 = 298;

    t15 = (x61!=((x62==x63)%x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x68 = 1U;

    t16 = (x65!=((x66==x67)%x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x70 = 1489219844LL;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -631;

    t17 = (x69!=((x70==x71)%x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	uint16_t x74 = UINT16_MAX;
	static uint64_t x75 = 4334359076629033LLU;
	int64_t x76 = INT64_MIN;
	int32_t t18 = 55407;

    t18 = (x73!=((x74==x75)%x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 80U;
	volatile int32_t x78 = -1;
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -423709;

    t19 = (x77!=((x78==x79)%x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	int64_t x82 = INT64_MIN;
	volatile int8_t x84 = 4;
	volatile int32_t t20 = 1003;

    t20 = (x81!=((x82==x83)%x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = -1LL;
	static uint32_t x86 = UINT32_MAX;
	int64_t x88 = INT64_MAX;

    t21 = (x85!=((x86==x87)%x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = UINT32_MAX;
	static volatile uint64_t x90 = 1050LLU;
	static int8_t x91 = 3;
	static volatile int16_t x92 = 1;
	int32_t t22 = 1;

    t22 = (x89!=((x90==x91)%x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = 1133966108U;
	int8_t x95 = INT8_MIN;
	static volatile int32_t x96 = -23;

    t23 = (x93!=((x94==x95)%x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x98 = -1;
	int32_t x99 = INT32_MIN;
	int8_t x100 = -1;
	int32_t t24 = 110228401;

    t24 = (x97!=((x98==x99)%x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t t25 = -12437117;

    t25 = (x101!=((x102==x103)%x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x105 = 14448U;
	int8_t x106 = INT8_MAX;
	static int32_t t26 = -110444;

    t26 = (x105!=((x106==x107)%x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	volatile int32_t x110 = INT32_MIN;
	int64_t x112 = -138925964746LL;
	volatile int32_t t27 = 3713;

    t27 = (x109!=((x110==x111)%x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	static int64_t x115 = INT64_MAX;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = -74523;

    t28 = (x113!=((x114==x115)%x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = 327U;
	volatile int32_t t29 = -38124919;

    t29 = (x117!=((x118==x119)%x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int64_t x122 = -1LL;
	static int16_t x123 = -1;
	volatile int32_t t30 = 192;

    t30 = (x121!=((x122==x123)%x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	volatile int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MAX;
	uint8_t x128 = UINT8_MAX;

    t31 = (x125!=((x126==x127)%x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = UINT64_MAX;
	static uint8_t x130 = 5U;
	uint64_t x131 = 717873839221643208LLU;
	volatile int64_t x132 = -1124249265LL;
	int32_t t32 = 81;

    t32 = (x129!=((x130==x131)%x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	int8_t x135 = INT8_MIN;
	int64_t x136 = -18425879LL;
	volatile int32_t t33 = 0;

    t33 = (x133!=((x134==x135)%x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x138 = 317439U;

    t34 = (x137!=((x138==x139)%x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x141 = 2464U;
	static int16_t x142 = INT16_MIN;
	static volatile int32_t x143 = -229209171;
	static int32_t t35 = 14;

    t35 = (x141!=((x142==x143)%x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = -1;
	int64_t x146 = 1590623681LL;
	static volatile uint32_t x147 = 1830153U;
	int64_t x148 = -10128256LL;
	volatile int32_t t36 = 57084306;

    t36 = (x145!=((x146==x147)%x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = 629649LL;
	volatile uint8_t x150 = 3U;
	static uint64_t x151 = 267147LLU;
	static int64_t x152 = -1LL;
	int32_t t37 = -774732646;

    t37 = (x149!=((x150==x151)%x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = UINT64_MAX;
	volatile int64_t x154 = 54LL;
	uint16_t x155 = 484U;
	int16_t x156 = -1;
	int32_t t38 = -46;

    t38 = (x153!=((x154==x155)%x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = UINT64_MAX;
	static int64_t x158 = INT64_MAX;
	int64_t x159 = INT64_MAX;
	int16_t x160 = 989;
	volatile int32_t t39 = 19291;

    t39 = (x157!=((x158==x159)%x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -497932309933543LL;
	static int32_t x162 = INT32_MIN;
	static volatile int8_t x163 = INT8_MIN;
	volatile int32_t x164 = -53034384;
	int32_t t40 = -156;

    t40 = (x161!=((x162==x163)%x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 126U;
	uint32_t x166 = 83418U;
	static uint16_t x167 = 2U;
	int16_t x168 = -1;
	volatile int32_t t41 = 0;

    t41 = (x165!=((x166==x167)%x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 4015429LLU;
	uint32_t x170 = 14002U;
	static uint8_t x172 = 24U;

    t42 = (x169!=((x170==x171)%x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = -1;
	int32_t x175 = INT32_MIN;
	uint32_t x176 = UINT32_MAX;

    t43 = (x173!=((x174==x175)%x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	volatile int16_t x178 = 34;
	static uint16_t x179 = 60U;
	uint64_t x180 = 97937LLU;
	int32_t t44 = -1013797;

    t44 = (x177!=((x178==x179)%x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 0;
	static volatile uint8_t x182 = 2U;
	static int8_t x183 = 0;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -3;

    t45 = (x181!=((x182==x183)%x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x185 = UINT8_MAX;
	int8_t x186 = -11;
	int32_t x187 = INT32_MIN;
	int32_t x188 = -18372;
	int32_t t46 = 85511257;

    t46 = (x185!=((x186==x187)%x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MAX;
	static uint32_t x190 = 967805U;
	volatile int16_t x192 = -1;
	volatile int32_t t47 = 93207;

    t47 = (x189!=((x190==x191)%x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = INT16_MAX;
	volatile uint64_t x194 = UINT64_MAX;
	int16_t x195 = -1;
	static uint32_t x196 = UINT32_MAX;

    t48 = (x193!=((x194==x195)%x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x197 = 12931964952LLU;
	static int16_t x198 = 2340;
	int8_t x199 = 16;
	volatile int8_t x200 = INT8_MAX;
	volatile int32_t t49 = 1999175;

    t49 = (x197!=((x198==x199)%x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = UINT8_MAX;
	int16_t x202 = INT16_MAX;
	int32_t x203 = 15004604;
	static int8_t x204 = INT8_MIN;
	int32_t t50 = 18;

    t50 = (x201!=((x202==x203)%x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x205 = UINT8_MAX;
	int16_t x206 = 2224;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = INT64_MIN;

    t51 = (x205!=((x206==x207)%x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	volatile uint32_t x210 = 4346453U;
	uint8_t x212 = 104U;

    t52 = (x209!=((x210==x211)%x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = INT8_MIN;
	volatile int16_t x214 = INT16_MIN;
	uint32_t x215 = 28U;
	volatile int16_t x216 = INT16_MAX;

    t53 = (x213!=((x214==x215)%x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x217 = UINT32_MAX;
	int16_t x219 = 0;
	int64_t x220 = -1LL;
	volatile int32_t t54 = 1;

    t54 = (x217!=((x218==x219)%x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 150079;
	int16_t x222 = INT16_MIN;
	int64_t x223 = -540821079188573722LL;
	int16_t x224 = INT16_MAX;
	int32_t t55 = -260960276;

    t55 = (x221!=((x222==x223)%x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MAX;
	uint64_t x226 = 1847575141777LLU;
	volatile int8_t x227 = INT8_MAX;
	static int16_t x228 = -1;
	volatile int32_t t56 = 0;

    t56 = (x225!=((x226==x227)%x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x230 = 11U;
	static int8_t x231 = 50;
	static volatile int32_t t57 = 362328;

    t57 = (x229!=((x230==x231)%x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x233 = UINT16_MAX;
	static volatile int32_t x234 = -1;
	static int8_t x235 = -1;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 15215;

    t58 = (x233!=((x234==x235)%x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	int32_t x238 = INT32_MAX;
	int8_t x239 = -1;
	int16_t x240 = INT16_MAX;
	static volatile int32_t t59 = 4107667;

    t59 = (x237!=((x238==x239)%x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 405U;
	int64_t x242 = INT64_MIN;
	volatile uint16_t x243 = 135U;
	volatile int32_t t60 = -2938;

    t60 = (x241!=((x242==x243)%x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = UINT16_MAX;
	int64_t x247 = INT64_MAX;
	int32_t x248 = -3140861;
	volatile int32_t t61 = -598;

    t61 = (x245!=((x246==x247)%x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	uint32_t x252 = UINT32_MAX;
	int32_t t62 = 596830;

    t62 = (x249!=((x250==x251)%x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = 226;
	static int32_t x254 = -1;
	static int8_t x255 = INT8_MAX;
	int32_t x256 = -1746468;
	int32_t t63 = -47755;

    t63 = (x253!=((x254==x255)%x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x258 = INT8_MAX;
	int16_t x259 = INT16_MAX;

    t64 = (x257!=((x258==x259)%x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	int8_t x262 = -1;
	int32_t x263 = INT32_MAX;
	volatile uint32_t x264 = 959U;
	volatile int32_t t65 = -688662;

    t65 = (x261!=((x262==x263)%x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x266 = INT32_MIN;
	static uint16_t x267 = 5U;
	volatile uint32_t x268 = 25754750U;
	volatile int32_t t66 = -17317332;

    t66 = (x265!=((x266==x267)%x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -885299158;
	uint64_t x270 = 3LLU;
	int16_t x271 = INT16_MIN;
	volatile int32_t t67 = 65;

    t67 = (x269!=((x270==x271)%x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 240656U;
	int32_t x274 = -3;
	int16_t x275 = -1;
	static int32_t t68 = 0;

    t68 = (x273!=((x274==x275)%x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x278 = 3U;
	static uint8_t x279 = UINT8_MAX;
	int16_t x280 = -1;
	volatile int32_t t69 = 24050;

    t69 = (x277!=((x278==x279)%x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x281 = 0U;
	int8_t x282 = INT8_MIN;
	volatile uint8_t x283 = 0U;
	static int32_t x284 = -553;

    t70 = (x281!=((x282==x283)%x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 0;
	uint64_t x286 = 329395894LLU;
	int8_t x287 = INT8_MIN;
	static uint8_t x288 = UINT8_MAX;
	static volatile int32_t t71 = -68319214;

    t71 = (x285!=((x286==x287)%x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MAX;
	int16_t x290 = -1;
	int32_t x291 = -1;
	static volatile uint16_t x292 = 29U;

    t72 = (x289!=((x290==x291)%x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x293 = 19277LLU;
	static int64_t x296 = -1LL;
	int32_t t73 = -4;

    t73 = (x293!=((x294==x295)%x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	int8_t x298 = -1;
	int64_t x300 = -6432788098516LL;
	int32_t t74 = 2;

    t74 = (x297!=((x298==x299)%x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = -3;

    t75 = (x301!=((x302==x303)%x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x307 = 1824;
	int32_t x308 = INT32_MIN;

    t76 = (x305!=((x306==x307)%x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = -1;
	int64_t x311 = INT64_MAX;
	static int16_t x312 = -1;
	volatile int32_t t77 = -149568548;

    t77 = (x309!=((x310==x311)%x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 43LLU;
	int64_t x314 = INT64_MIN;
	int32_t x316 = -4651901;

    t78 = (x313!=((x314==x315)%x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MIN;
	volatile uint32_t x318 = 116U;
	volatile uint8_t x319 = 1U;
	int16_t x320 = INT16_MIN;

    t79 = (x317!=((x318==x319)%x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = INT32_MAX;
	volatile int64_t x326 = -15LL;
	uint8_t x327 = UINT8_MAX;
	uint16_t x328 = 1U;
	int32_t t80 = -2837306;

    t80 = (x325!=((x326==x327)%x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = 0;
	uint16_t x331 = 7348U;
	volatile uint32_t x332 = UINT32_MAX;
	int32_t t81 = 46;

    t81 = (x329!=((x330==x331)%x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = INT8_MIN;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	volatile int32_t t82 = -105689873;

    t82 = (x333!=((x334==x335)%x336));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = INT64_MIN;
	int16_t x339 = -1;
	int8_t x340 = 1;

    t83 = (x337!=((x338==x339)%x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x341 = UINT8_MAX;
	uint64_t x342 = UINT64_MAX;
	int16_t x343 = -65;
	int16_t x344 = INT16_MIN;
	int32_t t84 = -542728878;

    t84 = (x341!=((x342==x343)%x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x345 = 50U;
	static int8_t x346 = INT8_MIN;
	volatile int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MAX;

    t85 = (x345!=((x346==x347)%x348));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x349 = 3U;
	int32_t x350 = -1;
	int32_t x351 = INT32_MAX;
	uint16_t x352 = 3U;

    t86 = (x349!=((x350==x351)%x352));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x353 = -1;
	int32_t x354 = INT32_MAX;
	volatile int32_t x355 = INT32_MIN;
	int8_t x356 = -1;
	volatile int32_t t87 = -61039;

    t87 = (x353!=((x354==x355)%x356));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = -1;
	uint32_t x358 = 1U;
	uint32_t x359 = 124213534U;
	uint8_t x360 = 1U;

    t88 = (x357!=((x358==x359)%x360));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x361 = 30;
	int64_t x362 = INT64_MAX;
	uint16_t x363 = 255U;
	int32_t x364 = INT32_MAX;
	int32_t t89 = 1881;

    t89 = (x361!=((x362==x363)%x364));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = -1;
	int16_t x366 = 1;
	int8_t x367 = INT8_MIN;
	int64_t x368 = 3839LL;
	volatile int32_t t90 = -94972;

    t90 = (x365!=((x366==x367)%x368));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = INT32_MAX;
	uint16_t x370 = 1097U;
	static int64_t x371 = -23LL;
	static int64_t x372 = INT64_MAX;
	int32_t t91 = 469795813;

    t91 = (x369!=((x370==x371)%x372));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x373 = 3U;
	int16_t x374 = 1;
	int8_t x376 = -1;

    t92 = (x373!=((x374==x375)%x376));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x378 = 10175U;
	int32_t t93 = -2392;

    t93 = (x377!=((x378==x379)%x380));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MAX;
	int8_t x383 = INT8_MAX;
	static int64_t x384 = -1LL;

    t94 = (x381!=((x382==x383)%x384));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = INT64_MAX;
	int16_t x387 = -365;
	static volatile int32_t t95 = -18;

    t95 = (x385!=((x386==x387)%x388));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x389 = 10U;
	static int64_t x390 = -1LL;
	uint32_t x391 = 732509056U;
	static int64_t x392 = 134LL;

    t96 = (x389!=((x390==x391)%x392));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x393 = -1;
	uint32_t x395 = 4927983U;
	int32_t x396 = -1;

    t97 = (x393!=((x394==x395)%x396));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x397 = UINT16_MAX;
	static int16_t x398 = INT16_MAX;
	int64_t x399 = -1LL;
	volatile int8_t x400 = -16;
	volatile int32_t t98 = 998862;

    t98 = (x397!=((x398==x399)%x400));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x401 = INT32_MIN;
	volatile int64_t x402 = INT64_MAX;
	volatile uint16_t x403 = UINT16_MAX;
	uint16_t x404 = UINT16_MAX;
	int32_t t99 = 1;

    t99 = (x401!=((x402==x403)%x404));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x406 = -1;
	int64_t x407 = INT64_MIN;
	static int32_t x408 = 513801225;
	int32_t t100 = 15335026;

    t100 = (x405!=((x406==x407)%x408));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x409 = UINT8_MAX;
	volatile uint32_t x410 = 26U;
	int16_t x412 = INT16_MAX;
	int32_t t101 = 0;

    t101 = (x409!=((x410==x411)%x412));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x413 = INT8_MAX;
	int16_t x416 = -2031;
	int32_t t102 = 1433637;

    t102 = (x413!=((x414==x415)%x416));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x421 = 0U;
	uint64_t x422 = UINT64_MAX;
	uint8_t x424 = 74U;
	static int32_t t103 = 2860;

    t103 = (x421!=((x422==x423)%x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x425 = UINT8_MAX;
	uint16_t x426 = 1085U;
	volatile int16_t x427 = 178;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t104 = 56773;

    t104 = (x425!=((x426==x427)%x428));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x429 = 2U;
	static int64_t x430 = -1LL;
	uint8_t x431 = 7U;
	int64_t x432 = -12466896163LL;
	int32_t t105 = 66699987;

    t105 = (x429!=((x430==x431)%x432));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x433 = -202008LL;
	int64_t x434 = 61339195LL;
	int32_t x435 = INT32_MIN;
	volatile int64_t x436 = -61586543LL;
	int32_t t106 = -2;

    t106 = (x433!=((x434==x435)%x436));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x438 = UINT16_MAX;
	volatile int32_t x439 = 0;
	int64_t x440 = INT64_MIN;
	volatile int32_t t107 = -3158803;

    t107 = (x437!=((x438==x439)%x440));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x445 = 1085761U;
	static volatile int8_t x446 = -5;
	static uint8_t x447 = 1U;
	static volatile int64_t x448 = INT64_MIN;
	static volatile int32_t t108 = 6;

    t108 = (x445!=((x446==x447)%x448));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = -1;
	int64_t x450 = INT64_MIN;
	uint16_t x451 = UINT16_MAX;
	int32_t x452 = INT32_MAX;
	volatile int32_t t109 = -155;

    t109 = (x449!=((x450==x451)%x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x455 = INT8_MIN;
	uint8_t x456 = 20U;
	static int32_t t110 = -926;

    t110 = (x453!=((x454==x455)%x456));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x458 = 704356740LL;
	static volatile int16_t x459 = -214;
	static int32_t x460 = INT32_MIN;
	volatile int32_t t111 = 26316203;

    t111 = (x457!=((x458==x459)%x460));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x461 = 2324344866081LLU;
	int8_t x462 = INT8_MIN;
	int32_t x463 = INT32_MIN;
	int64_t x464 = INT64_MIN;
	int32_t t112 = -12684;

    t112 = (x461!=((x462==x463)%x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x465 = UINT8_MAX;
	int8_t x466 = INT8_MIN;
	volatile uint8_t x467 = 5U;
	static volatile uint32_t x468 = 3078U;

    t113 = (x465!=((x466==x467)%x468));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x478 = INT8_MIN;
	uint16_t x479 = 23031U;
	int32_t x480 = -1;
	volatile int32_t t114 = 1;

    t114 = (x477!=((x478==x479)%x480));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x481 = -57;
	uint32_t x482 = UINT32_MAX;
	static int64_t x483 = INT64_MIN;
	volatile int32_t x484 = INT32_MAX;
	int32_t t115 = 2520613;

    t115 = (x481!=((x482==x483)%x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x485 = 0;
	int16_t x487 = 8;
	int8_t x488 = -1;
	int32_t t116 = -1;

    t116 = (x485!=((x486==x487)%x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x489 = -1;
	uint16_t x490 = 31U;
	uint16_t x491 = 1568U;
	volatile uint64_t x492 = 145407164499421418LLU;
	int32_t t117 = 1928008;

    t117 = (x489!=((x490==x491)%x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x493 = 62U;
	static int64_t x495 = INT64_MAX;
	int8_t x496 = -1;
	int32_t t118 = -276319802;

    t118 = (x493!=((x494==x495)%x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x497 = INT16_MIN;
	volatile int16_t x498 = 0;
	volatile int64_t x500 = INT64_MIN;
	static volatile int32_t t119 = -115;

    t119 = (x497!=((x498==x499)%x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x501 = 1166858458007278441LLU;
	int64_t x502 = INT64_MIN;
	int64_t x503 = -399LL;
	static volatile int8_t x504 = INT8_MIN;
	int32_t t120 = 9;

    t120 = (x501!=((x502==x503)%x504));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x505 = 1U;
	volatile int32_t t121 = -1;

    t121 = (x505!=((x506==x507)%x508));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x509 = 84U;
	uint32_t x510 = 1914U;
	int8_t x511 = 1;
	int32_t x512 = INT32_MIN;
	int32_t t122 = -4085081;

    t122 = (x509!=((x510==x511)%x512));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x513 = 48134033575243LLU;
	volatile int64_t x515 = INT64_MIN;
	uint32_t x516 = UINT32_MAX;
	int32_t t123 = 10803;

    t123 = (x513!=((x514==x515)%x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x518 = INT16_MAX;
	uint64_t x520 = 5031390019669010LLU;
	volatile int32_t t124 = -150060;

    t124 = (x517!=((x518==x519)%x520));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x521 = INT64_MAX;
	uint16_t x522 = 7U;
	volatile int32_t t125 = -2;

    t125 = (x521!=((x522==x523)%x524));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x526 = INT8_MAX;
	int64_t x527 = INT64_MIN;
	volatile int8_t x528 = INT8_MAX;

    t126 = (x525!=((x526==x527)%x528));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x531 = 0U;
	uint16_t x532 = UINT16_MAX;
	int32_t t127 = -69;

    t127 = (x529!=((x530==x531)%x532));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x533 = 5U;
	uint64_t x534 = 3881200889530646LLU;
	int64_t x535 = INT64_MIN;
	volatile int8_t x536 = -6;
	int32_t t128 = 54678;

    t128 = (x533!=((x534==x535)%x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x539 = INT16_MAX;

    t129 = (x537!=((x538==x539)%x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x541 = 1082222473U;
	int64_t x542 = -1LL;
	int8_t x543 = INT8_MIN;
	volatile uint16_t x544 = UINT16_MAX;
	volatile int32_t t130 = -29765;

    t130 = (x541!=((x542==x543)%x544));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x545 = -1638773505892LL;
	int64_t x546 = INT64_MAX;
	int16_t x547 = -1;
	uint16_t x548 = 443U;
	volatile int32_t t131 = -156286;

    t131 = (x545!=((x546==x547)%x548));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x549 = -1LL;
	int8_t x550 = 0;
	int16_t x551 = -1;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t132 = -131;

    t132 = (x549!=((x550==x551)%x552));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x554 = 118919LL;
	static uint8_t x555 = UINT8_MAX;
	int16_t x556 = 1;
	int32_t t133 = -1678;

    t133 = (x553!=((x554==x555)%x556));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x557 = -24;
	static int32_t x559 = INT32_MIN;
	static volatile uint32_t x560 = 1U;
	int32_t t134 = 1;

    t134 = (x557!=((x558==x559)%x560));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x561 = UINT8_MAX;
	uint16_t x562 = 1U;
	uint32_t x563 = UINT32_MAX;
	uint64_t x564 = UINT64_MAX;
	static int32_t t135 = 0;

    t135 = (x561!=((x562==x563)%x564));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x565 = INT64_MAX;
	static int8_t x566 = INT8_MIN;
	int32_t x568 = INT32_MAX;
	volatile int32_t t136 = -101413929;

    t136 = (x565!=((x566==x567)%x568));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x571 = 5;
	uint16_t x572 = UINT16_MAX;

    t137 = (x569!=((x570==x571)%x572));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x573 = 3991638822808982LLU;
	int64_t x574 = INT64_MIN;
	static int8_t x575 = INT8_MIN;
	uint64_t x576 = 183LLU;
	int32_t t138 = -4120143;

    t138 = (x573!=((x574==x575)%x576));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x577 = -1;
	volatile uint32_t x578 = UINT32_MAX;
	int32_t x579 = 1;
	volatile int8_t x580 = INT8_MAX;
	int32_t t139 = -4638;

    t139 = (x577!=((x578==x579)%x580));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x581 = INT64_MAX;
	static int8_t x582 = INT8_MIN;
	uint64_t x583 = 18LLU;
	static uint8_t x584 = 41U;
	volatile int32_t t140 = 36208;

    t140 = (x581!=((x582==x583)%x584));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x585 = -724313;
	uint64_t x587 = 274543227555691LLU;
	volatile int32_t t141 = 48;

    t141 = (x585!=((x586==x587)%x588));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x589 = INT16_MIN;
	int16_t x590 = 1;
	int16_t x591 = 0;
	int16_t x592 = -39;
	static int32_t t142 = -19792231;

    t142 = (x589!=((x590==x591)%x592));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x593 = INT32_MIN;
	volatile int16_t x594 = 12;
	int8_t x595 = -1;
	uint16_t x596 = 644U;
	static volatile int32_t t143 = -1;

    t143 = (x593!=((x594==x595)%x596));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x598 = INT8_MAX;
	uint64_t x599 = UINT64_MAX;
	uint64_t x600 = 3720LLU;
	volatile int32_t t144 = -1002803;

    t144 = (x597!=((x598==x599)%x600));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x601 = 5U;
	uint64_t x602 = UINT64_MAX;
	volatile int64_t x603 = -1069LL;
	int8_t x604 = INT8_MAX;
	int32_t t145 = 54219;

    t145 = (x601!=((x602==x603)%x604));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x605 = INT8_MIN;
	uint16_t x606 = 2U;
	volatile uint32_t x607 = UINT32_MAX;
	volatile int32_t t146 = 3967194;

    t146 = (x605!=((x606==x607)%x608));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x609 = 7U;
	uint16_t x611 = 109U;
	volatile uint16_t x612 = 112U;
	volatile int32_t t147 = 591126755;

    t147 = (x609!=((x610==x611)%x612));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x613 = INT8_MIN;
	volatile uint8_t x615 = 10U;
	static volatile int32_t t148 = 560623245;

    t148 = (x613!=((x614==x615)%x616));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x617 = 51038LLU;
	volatile uint32_t x619 = 12U;
	int16_t x620 = -1;
	volatile int32_t t149 = -181;

    t149 = (x617!=((x618==x619)%x620));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x621 = 14306U;
	uint64_t x622 = UINT64_MAX;
	volatile int16_t x623 = INT16_MIN;
	static int16_t x624 = INT16_MAX;
	static volatile int32_t t150 = -14;

    t150 = (x621!=((x622==x623)%x624));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x625 = INT16_MIN;
	static int16_t x626 = INT16_MIN;
	int64_t x627 = -1LL;
	int32_t x628 = -1;
	int32_t t151 = -1068190449;

    t151 = (x625!=((x626==x627)%x628));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x629 = -283LL;
	static int8_t x631 = 1;
	int64_t x632 = -1LL;

    t152 = (x629!=((x630==x631)%x632));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x634 = UINT32_MAX;
	volatile int8_t x635 = INT8_MIN;
	volatile int32_t t153 = 3;

    t153 = (x633!=((x634==x635)%x636));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x637 = UINT32_MAX;
	int64_t x638 = -34254063067LL;
	int8_t x639 = INT8_MIN;
	int32_t x640 = INT32_MAX;
	static volatile int32_t t154 = -1;

    t154 = (x637!=((x638==x639)%x640));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x641 = -1;
	static int64_t x642 = -471047352135862LL;
	uint64_t x643 = 2922208619328601440LLU;
	int64_t x644 = INT64_MAX;

    t155 = (x641!=((x642==x643)%x644));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x645 = INT64_MIN;
	volatile uint32_t x646 = 454U;
	static volatile int32_t x647 = -1;
	int8_t x648 = INT8_MAX;
	volatile int32_t t156 = -118;

    t156 = (x645!=((x646==x647)%x648));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x649 = 4U;
	int8_t x651 = 47;
	uint16_t x652 = UINT16_MAX;
	static int32_t t157 = 0;

    t157 = (x649!=((x650==x651)%x652));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x654 = UINT32_MAX;
	volatile int32_t t158 = 1;

    t158 = (x653!=((x654==x655)%x656));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x657 = -1LL;
	int8_t x658 = INT8_MAX;
	volatile uint64_t x659 = 41419658121071061LLU;
	volatile int32_t t159 = 7;

    t159 = (x657!=((x658==x659)%x660));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x661 = INT8_MAX;
	int32_t x662 = -1;
	uint16_t x663 = 104U;
	int8_t x664 = INT8_MIN;
	static int32_t t160 = -3;

    t160 = (x661!=((x662==x663)%x664));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x665 = INT32_MIN;
	uint8_t x666 = 84U;
	uint64_t x667 = UINT64_MAX;
	int16_t x668 = INT16_MIN;
	static volatile int32_t t161 = 219605385;

    t161 = (x665!=((x666==x667)%x668));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x669 = INT64_MIN;
	int8_t x670 = INT8_MIN;
	static volatile uint64_t x672 = UINT64_MAX;
	int32_t t162 = 12;

    t162 = (x669!=((x670==x671)%x672));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x673 = UINT16_MAX;
	uint32_t x674 = 357U;
	uint32_t x675 = 456424518U;

    t163 = (x673!=((x674==x675)%x676));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x677 = 1039682902445643050LL;
	uint64_t x679 = 975740LLU;
	int32_t t164 = -14079647;

    t164 = (x677!=((x678==x679)%x680));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x681 = 131614380759682LLU;
	int64_t x682 = 115489427764837LL;
	volatile int32_t x683 = 196;
	int32_t t165 = 70482;

    t165 = (x681!=((x682==x683)%x684));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x685 = UINT8_MAX;
	uint32_t x686 = 734702772U;
	uint32_t x688 = 3166U;
	int32_t t166 = -276880849;

    t166 = (x685!=((x686==x687)%x688));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x689 = -450539840681069LL;
	int64_t x690 = INT64_MIN;
	int32_t x691 = 1;
	static volatile int16_t x692 = 176;
	int32_t t167 = 29971;

    t167 = (x689!=((x690==x691)%x692));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x693 = -1;
	int32_t x694 = -1;
	uint64_t x695 = UINT64_MAX;
	int64_t x696 = -2859LL;
	int32_t t168 = -1;

    t168 = (x693!=((x694==x695)%x696));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x697 = 30098739U;
	volatile uint32_t x698 = 442U;
	volatile int32_t x699 = -1;
	int32_t x700 = -55;
	int32_t t169 = 3157601;

    t169 = (x697!=((x698==x699)%x700));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = INT32_MIN;
	volatile int32_t x703 = -1;
	static int32_t t170 = -2;

    t170 = (x701!=((x702==x703)%x704));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = -1;
	volatile int16_t x706 = -1;
	int32_t x707 = INT32_MIN;
	int16_t x708 = -23;
	static int32_t t171 = -144220568;

    t171 = (x705!=((x706==x707)%x708));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x709 = INT64_MIN;
	volatile uint32_t x710 = UINT32_MAX;
	static volatile int64_t x711 = -1LL;
	uint64_t x712 = 14029049818LLU;
	int32_t t172 = -8272631;

    t172 = (x709!=((x710==x711)%x712));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x713 = -1383142066874209097LL;
	volatile uint8_t x714 = UINT8_MAX;
	volatile int64_t x716 = INT64_MAX;
	int32_t t173 = -693;

    t173 = (x713!=((x714==x715)%x716));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x718 = INT8_MIN;
	static int64_t x719 = INT64_MIN;
	int8_t x720 = -17;
	static int32_t t174 = 692793;

    t174 = (x717!=((x718==x719)%x720));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x722 = INT64_MIN;
	int16_t x723 = -1;
	int64_t x724 = INT64_MIN;
	int32_t t175 = -170;

    t175 = (x721!=((x722==x723)%x724));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x725 = UINT32_MAX;
	uint64_t x726 = UINT64_MAX;
	int64_t x727 = INT64_MIN;
	volatile int16_t x728 = -1;

    t176 = (x725!=((x726==x727)%x728));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = INT8_MIN;
	int64_t x730 = 9LL;
	uint16_t x731 = UINT16_MAX;
	int16_t x732 = 90;
	int32_t t177 = -5813093;

    t177 = (x729!=((x730==x731)%x732));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x733 = 1873LL;
	uint64_t x734 = UINT64_MAX;
	int32_t x735 = -1;
	static int32_t x736 = INT32_MIN;
	static volatile int32_t t178 = 32;

    t178 = (x733!=((x734==x735)%x736));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x737 = UINT16_MAX;
	static uint64_t x738 = 13101778LLU;
	static int16_t x739 = INT16_MAX;
	volatile uint64_t x740 = 420367997193343LLU;

    t179 = (x737!=((x738==x739)%x740));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x744 = 1;
	volatile int32_t t180 = 2;

    t180 = (x741!=((x742==x743)%x744));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x750 = 65U;
	int64_t x751 = INT64_MIN;
	uint32_t x752 = UINT32_MAX;
	static volatile int32_t t181 = 634984;

    t181 = (x749!=((x750==x751)%x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x755 = 94U;
	int8_t x756 = 4;
	volatile int32_t t182 = -636224336;

    t182 = (x753!=((x754==x755)%x756));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x757 = INT16_MIN;
	int64_t x758 = INT64_MIN;
	volatile int32_t x759 = -3829844;
	uint8_t x760 = UINT8_MAX;
	volatile int32_t t183 = 405;

    t183 = (x757!=((x758==x759)%x760));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x761 = 501U;
	int16_t x762 = -106;
	uint16_t x763 = UINT16_MAX;
	int8_t x764 = -1;
	volatile int32_t t184 = 109268;

    t184 = (x761!=((x762==x763)%x764));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x765 = UINT8_MAX;
	int64_t x766 = 90LL;
	int16_t x767 = -2;
	uint64_t x768 = UINT64_MAX;
	static volatile int32_t t185 = -3;

    t185 = (x765!=((x766==x767)%x768));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x769 = -6339225;
	volatile int16_t x770 = -1;
	static int64_t x771 = 1711543660LL;
	int32_t x772 = INT32_MAX;
	volatile int32_t t186 = 1;

    t186 = (x769!=((x770==x771)%x772));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = INT64_MIN;
	volatile int8_t x775 = 0;
	volatile int16_t x776 = INT16_MIN;

    t187 = (x773!=((x774==x775)%x776));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x777 = -503157739;
	int64_t x778 = 1151959262418095LL;
	int32_t x780 = INT32_MIN;
	int32_t t188 = 23011571;

    t188 = (x777!=((x778==x779)%x780));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x781 = INT32_MAX;
	uint32_t x782 = 1687203454U;
	int32_t x783 = INT32_MIN;
	static int32_t x784 = 255116;
	volatile int32_t t189 = -1680;

    t189 = (x781!=((x782==x783)%x784));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x785 = INT8_MIN;
	uint16_t x787 = 30591U;
	uint32_t x788 = UINT32_MAX;

    t190 = (x785!=((x786==x787)%x788));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x789 = UINT64_MAX;
	int32_t x790 = 9;
	static volatile int32_t x791 = INT32_MIN;
	int16_t x792 = -1;

    t191 = (x789!=((x790==x791)%x792));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	int8_t x796 = -1;
	volatile int32_t t192 = 2;

    t192 = (x793!=((x794==x795)%x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x797 = 1;
	uint32_t x798 = UINT32_MAX;
	int16_t x799 = INT16_MIN;
	int8_t x800 = INT8_MAX;
	static volatile int32_t t193 = 15020;

    t193 = (x797!=((x798==x799)%x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x801 = INT32_MIN;
	uint32_t x802 = 41617738U;
	volatile int16_t x803 = INT16_MIN;
	int32_t t194 = 2581463;

    t194 = (x801!=((x802==x803)%x804));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x805 = -437;
	volatile int8_t x806 = INT8_MAX;
	volatile int32_t t195 = 995297250;

    t195 = (x805!=((x806==x807)%x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x809 = -1;
	int8_t x810 = 45;
	int64_t x811 = -515033014325462345LL;
	uint8_t x812 = UINT8_MAX;
	volatile int32_t t196 = -747;

    t196 = (x809!=((x810==x811)%x812));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x814 = -1LL;
	static int64_t x815 = INT64_MIN;
	int16_t x816 = INT16_MIN;
	int32_t t197 = -1874575;

    t197 = (x813!=((x814==x815)%x816));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x817 = 1133912048291825LLU;
	static uint8_t x819 = 0U;
	static volatile int32_t x820 = 2;

    t198 = (x817!=((x818==x819)%x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x821 = -1;
	static uint64_t x822 = UINT64_MAX;
	int64_t x823 = INT64_MIN;
	int64_t x824 = INT64_MIN;
	static int32_t t199 = 8613;

    t199 = (x821!=((x822==x823)%x824));

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

