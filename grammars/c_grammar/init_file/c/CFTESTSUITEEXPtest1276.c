
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

static int64_t x2 = INT64_MIN;
static uint8_t x9 = UINT8_MAX;
uint8_t x11 = 6U;
int64_t x14 = INT64_MIN;
int32_t t3 = 5273987;
int32_t x25 = INT32_MIN;
volatile int32_t t6 = INT32_MIN;
int64_t x29 = INT64_MIN;
int64_t x32 = INT64_MIN;
int16_t x35 = INT16_MAX;
volatile int64_t x37 = INT64_MIN;
static int32_t x39 = -13;
static uint16_t x45 = 6U;
int16_t x47 = 3;
volatile int32_t t11 = 1;
volatile uint64_t t12 = 39214828090LLU;
volatile int32_t x55 = INT32_MIN;
volatile uint8_t x57 = 7U;
int64_t x59 = INT64_MAX;
volatile int64_t t15 = INT64_MIN;
uint64_t x65 = 32333382046LLU;
int16_t x68 = -29;
static int32_t x80 = INT32_MIN;
static int32_t x83 = -29;
int32_t t20 = 230711;
volatile int32_t t21 = 215038897;
int16_t x89 = INT16_MAX;
volatile int8_t x92 = 1;
volatile uint32_t x100 = 27U;
int32_t t27 = -1340;
int8_t x121 = -1;
int16_t x130 = INT16_MIN;
int32_t x135 = -1720950;
uint64_t x137 = 52767LLU;
volatile int32_t t34 = 0;
volatile int32_t t35 = -3;
uint32_t x152 = 112747U;
int64_t t36 = INT64_MIN;
int32_t x154 = INT32_MIN;
int64_t x155 = -7559084811293LL;
static int64_t x156 = -1LL;
int16_t x164 = 122;
int32_t t41 = INT32_MAX;
uint8_t x177 = 27U;
uint16_t x185 = 1908U;
static uint16_t x186 = 1U;
int8_t x188 = INT8_MAX;
volatile uint32_t x190 = UINT32_MAX;
int16_t x194 = INT16_MAX;
volatile uint64_t x195 = 0LLU;
int32_t x197 = 69;
uint16_t x198 = 14905U;
volatile int32_t t48 = -62281;
static uint64_t x201 = UINT64_MAX;
volatile uint32_t x202 = 17093U;
uint64_t t49 = UINT64_MAX;
volatile uint32_t x205 = 880U;
volatile int16_t x214 = 4;
int32_t x215 = INT32_MIN;
int8_t x217 = INT8_MIN;
volatile int16_t x222 = INT16_MAX;
static int32_t t54 = 16639457;
int64_t x225 = INT64_MIN;
volatile uint8_t x234 = UINT8_MAX;
volatile int16_t x239 = INT16_MIN;
int8_t x244 = -1;
int8_t x245 = INT8_MIN;
int32_t x250 = INT32_MIN;
static int32_t x254 = -1;
static volatile int16_t x257 = INT16_MAX;
uint32_t x259 = UINT32_MAX;
uint64_t x269 = UINT64_MAX;
volatile uint64_t t66 = UINT64_MAX;
int8_t x284 = -1;
volatile int32_t t69 = -577042576;
volatile int32_t t70 = -1153549;
volatile int64_t x290 = INT64_MIN;
static int8_t x292 = -1;
static int8_t x293 = -1;
int16_t x295 = -1;
int16_t x304 = -1;
static int32_t x310 = INT32_MIN;
static int32_t t76 = -22;
static int64_t x316 = INT64_MIN;
int16_t x318 = 8647;
volatile int32_t x319 = -14200107;
volatile int64_t x322 = -266244368560077397LL;
uint32_t x332 = UINT32_MAX;
volatile uint32_t t81 = UINT32_MAX;
int64_t x335 = 1LL;
static uint64_t t83 = UINT64_MAX;
static int64_t x341 = -8292721LL;
int64_t x342 = -151222LL;
int16_t x345 = INT16_MIN;
static volatile int64_t x355 = INT64_MIN;
int16_t x360 = -999;
static int32_t x364 = INT32_MIN;
int16_t x365 = -1;
uint16_t x370 = 13644U;
uint8_t x372 = UINT8_MAX;
static int32_t t91 = -6734;
volatile uint16_t x375 = 872U;
int32_t x376 = INT32_MAX;
int32_t t93 = -939101540;
uint32_t x383 = UINT32_MAX;
static int32_t t94 = -1228;
int64_t x388 = INT64_MIN;
volatile uint8_t x389 = 36U;
volatile int32_t t96 = 617861041;
int16_t x396 = INT16_MIN;
volatile int16_t x399 = INT16_MIN;
int32_t x400 = -1;
volatile int16_t x404 = INT16_MIN;
volatile uint64_t t101 = 344671138568042494LLU;
volatile int32_t t103 = -29;
static volatile uint8_t x421 = 13U;
uint8_t x423 = 31U;
int64_t x424 = -673936221004383814LL;
volatile int32_t t104 = 272551;
volatile int16_t x431 = INT16_MIN;
int64_t x432 = -1LL;
static int16_t x434 = INT16_MIN;
static volatile uint64_t t106 = UINT64_MAX;
volatile int64_t t107 = INT64_MAX;
volatile int32_t x444 = -1;
static int64_t x445 = INT64_MAX;
int16_t x452 = 88;
int8_t x462 = INT8_MIN;
uint32_t x465 = 3U;
uint32_t x466 = 3U;
volatile int64_t x469 = -1LL;
volatile int64_t t115 = 687432014157LL;
uint32_t x473 = UINT32_MAX;
int32_t x480 = INT32_MIN;
int64_t x486 = 462124907LL;
uint32_t x488 = 713U;
int64_t t119 = INT64_MAX;
int32_t x489 = INT32_MAX;
static int32_t t121 = -1;
int64_t x498 = INT64_MAX;
int8_t x503 = INT8_MIN;
static volatile int32_t t126 = 118031;
uint16_t x520 = 50U;
int32_t t128 = -25;
static int16_t x528 = 3;
int32_t t129 = -10;
uint16_t x529 = UINT16_MAX;
static volatile int16_t x531 = INT16_MAX;
int64_t x533 = -1LL;
int64_t x548 = INT64_MIN;
int32_t t135 = 42098;
volatile int8_t x554 = INT8_MIN;
int16_t x557 = 191;
uint16_t x558 = UINT16_MAX;
uint16_t x560 = UINT16_MAX;
static int64_t x561 = -860018040954137LL;
uint16_t x568 = 19U;
int32_t x572 = -247453;
volatile int32_t t140 = INT32_MIN;
volatile int8_t x573 = -1;
int32_t x574 = -983929504;
static int64_t x575 = 521184847984LL;
int16_t x582 = -375;
int32_t x586 = INT32_MIN;
int16_t x588 = -5;
static int64_t t144 = 31264696875698394LL;
int32_t x589 = INT32_MAX;
int64_t x592 = -1LL;
int16_t x595 = INT16_MAX;
uint8_t x598 = 38U;
int32_t x602 = -1;
int32_t x603 = 42322;
uint32_t x610 = 609573U;
static int16_t x612 = INT16_MIN;
static volatile int64_t x614 = 339648181926LL;
static volatile int32_t t151 = -117297325;
uint32_t x620 = 95812239U;
uint32_t x624 = 67U;
uint8_t x628 = 1U;
int64_t x629 = 3601183067LL;
volatile int64_t x637 = -12LL;
int64_t x641 = INT64_MIN;
static uint16_t x642 = UINT16_MAX;
volatile int16_t x646 = INT16_MIN;
uint8_t x655 = UINT8_MAX;
uint16_t x656 = 118U;
uint16_t x658 = 6794U;
volatile int16_t x663 = INT16_MAX;
uint64_t x665 = 1881LLU;
int64_t x666 = INT64_MIN;
volatile uint32_t t166 = UINT32_MAX;
volatile int16_t x683 = INT16_MAX;
static uint32_t x685 = 4U;
int32_t x687 = INT32_MAX;
volatile int8_t x690 = INT8_MIN;
static int16_t x693 = INT16_MIN;
uint64_t x697 = 12831569513713405LLU;
static uint64_t x703 = 6831633444264917LLU;
int32_t t173 = 1515;
int16_t x708 = INT16_MIN;
int64_t t176 = INT64_MIN;
int8_t x718 = INT8_MAX;
volatile int32_t x722 = INT32_MIN;
uint64_t x724 = 390990489LLU;
int32_t x726 = INT32_MAX;
uint16_t x728 = 2190U;
int8_t x735 = INT8_MAX;
static volatile int32_t t182 = -192882114;
int64_t x742 = -1LL;
volatile int32_t t183 = 30;
volatile uint16_t x746 = 1111U;
int8_t x749 = -1;
static int32_t x750 = INT32_MIN;
static int8_t x755 = -1;
static volatile int32_t t186 = -1;
int32_t t187 = 2;
static int16_t x762 = -1;
volatile int32_t t188 = 29475;
uint64_t x765 = 305547LLU;
int32_t x768 = -190311;
uint64_t x770 = 29419247559949LLU;
static int32_t x772 = INT32_MIN;
uint64_t x774 = UINT64_MAX;
int64_t x775 = INT64_MIN;
static int64_t x778 = INT64_MAX;
uint16_t x779 = 14U;
uint16_t x790 = 3515U;
int16_t x791 = INT16_MIN;
int64_t x795 = INT64_MIN;
uint32_t x799 = UINT32_MAX;
volatile uint64_t x805 = 370055766854715823LLU;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile uint64_t x3 = 34586408LLU;
	uint64_t x4 = 1244398533268611LLU;
	static int32_t t0 = 224;

    t0 = (x1-((x2!=x3)==x4));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MAX;
	int64_t x7 = 200464086816900677LL;
	int64_t x8 = -12007546403351LL;
	volatile int64_t t1 = INT64_MAX;

    t1 = (x5-((x6!=x7)==x8));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = UINT8_MAX;
	int32_t x12 = -48;
	volatile int32_t t2 = 36580476;

    t2 = (x9-((x10!=x11)==x12));

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 26U;
	int32_t x15 = INT32_MIN;
	volatile int32_t x16 = 14;

    t3 = (x13-((x14!=x15)==x16));

    if (t3 != 26) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = 3U;
	int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MIN;
	static volatile int64_t x20 = -1LL;
	volatile uint32_t t4 = 15613967U;

    t4 = (x17-((x18!=x19)==x20));

    if (t4 != 3U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	uint32_t x22 = 7371U;
	static int16_t x23 = -416;
	int8_t x24 = -1;
	volatile int32_t t5 = -25445;

    t5 = (x21-((x22!=x23)==x24));

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -61LL;
	static int16_t x27 = -1;
	int64_t x28 = INT64_MIN;

    t6 = (x25-((x26!=x27)==x28));

    if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = -1LL;
	int32_t x31 = 16808;
	static int64_t t7 = INT64_MIN;

    t7 = (x29-((x30!=x31)==x32));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = -26;
	uint16_t x36 = 302U;
	int32_t t8 = INT32_MIN;

    t8 = (x33-((x34!=x35)==x36));

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x38 = 51LLU;
	int32_t x40 = INT32_MAX;
	int64_t t9 = INT64_MIN;

    t9 = (x37-((x38!=x39)==x40));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	int32_t x42 = INT32_MIN;
	int32_t x43 = -1;
	static int32_t x44 = 900366;
	uint32_t t10 = UINT32_MAX;

    t10 = (x41-((x42!=x43)==x44));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = 36U;
	uint32_t x48 = 2143845496U;

    t11 = (x45-((x46!=x47)==x48));

    if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = 246187678374177LLU;
	int8_t x50 = -27;
	static int8_t x51 = INT8_MIN;
	static volatile uint64_t x52 = 992670669842858LLU;

    t12 = (x49-((x50!=x51)==x52));

    if (t12 != 246187678374177LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	volatile int32_t x54 = -30103;
	volatile int32_t x56 = INT32_MAX;
	static int32_t t13 = INT32_MIN;

    t13 = (x53-((x54!=x55)==x56));

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x58 = 18431U;
	static uint32_t x60 = 0U;
	volatile int32_t t14 = 5968116;

    t14 = (x57-((x58!=x59)==x60));

    if (t14 != 7) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MIN;
	int8_t x63 = 29;
	int32_t x64 = INT32_MIN;

    t15 = (x61-((x62!=x63)==x64));

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = -919;
	int8_t x67 = -1;
	volatile uint64_t t16 = 421874220LLU;

    t16 = (x65-((x66!=x67)==x68));

    if (t16 != 32333382046LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	uint32_t x70 = UINT32_MAX;
	static uint8_t x71 = 12U;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -17759709;

    t17 = (x69-((x70!=x71)==x72));

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 8156U;
	uint64_t x74 = 469969433427LLU;
	volatile uint64_t x75 = 1917089883670469437LLU;
	int32_t x76 = INT32_MIN;
	volatile uint32_t t18 = 278U;

    t18 = (x73-((x74!=x75)==x76));

    if (t18 != 8156U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int64_t x78 = 0LL;
	uint8_t x79 = 7U;
	static volatile int64_t t19 = -4186192905037752299LL;

    t19 = (x77-((x78!=x79)==x80));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	int64_t x82 = -65201875684LL;
	volatile uint64_t x84 = 4329729LLU;

    t20 = (x81-((x82!=x83)==x84));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x85 = 340U;
	static int64_t x86 = INT64_MIN;
	int32_t x87 = -1;
	int32_t x88 = 139;

    t21 = (x85-((x86!=x87)==x88));

    if (t21 != 340) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = INT16_MIN;
	uint32_t x91 = UINT32_MAX;
	static int32_t t22 = 767;

    t22 = (x89-((x90!=x91)==x92));

    if (t22 != 32766) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 1U;
	int64_t x94 = INT64_MIN;
	uint64_t x95 = 1495775796031631LLU;
	static volatile int64_t x96 = INT64_MIN;
	static int32_t t23 = -11231016;

    t23 = (x93-((x94!=x95)==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	static int32_t x98 = -387414;
	static volatile int16_t x99 = -1;
	volatile int32_t t24 = 504;

    t24 = (x97-((x98!=x99)==x100));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MAX;
	int16_t x102 = -1;
	static uint8_t x103 = 124U;
	int8_t x104 = 29;
	int32_t t25 = INT32_MAX;

    t25 = (x101-((x102!=x103)==x104));

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -1;
	static uint32_t x106 = 9097U;
	int16_t x107 = -1;
	int16_t x108 = 138;
	int32_t t26 = -419798501;

    t26 = (x105-((x106!=x107)==x108));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 24U;
	static volatile int64_t x110 = INT64_MIN;
	int16_t x111 = -1;
	int64_t x112 = INT64_MIN;

    t27 = (x109-((x110!=x111)==x112));

    if (t27 != 24) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MAX;
	int64_t x118 = INT64_MAX;
	volatile uint32_t x119 = 1591U;
	uint32_t x120 = 323U;
	volatile int32_t t28 = INT32_MAX;

    t28 = (x117-((x118!=x119)==x120));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	static uint64_t x124 = UINT64_MAX;
	int32_t t29 = -721;

    t29 = (x121-((x122!=x123)==x124));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = -82;
	static int8_t x126 = -1;
	uint64_t x127 = 333181230217650LLU;
	int64_t x128 = INT64_MAX;
	int32_t t30 = -9;

    t30 = (x125-((x126!=x127)==x128));

    if (t30 != -82) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = 74725417286029140LL;
	int32_t x131 = INT32_MIN;
	volatile uint64_t x132 = 937262335826409LLU;
	volatile int64_t t31 = 3611426850LL;

    t31 = (x129-((x130!=x131)==x132));

    if (t31 != 74725417286029140LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	static int8_t x134 = -1;
	static int32_t x136 = INT32_MAX;
	volatile int32_t t32 = -56;

    t32 = (x133-((x134!=x135)==x136));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x138 = INT8_MIN;
	volatile int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MIN;
	uint64_t t33 = 0LLU;

    t33 = (x137-((x138!=x139)==x140));

    if (t33 != 52767LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = UINT8_MAX;
	int64_t x142 = -1LL;
	uint32_t x143 = 75U;
	static int64_t x144 = INT64_MIN;

    t34 = (x141-((x142!=x143)==x144));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = INT8_MIN;
	int32_t x146 = -1;
	static uint32_t x147 = UINT32_MAX;
	static uint64_t x148 = 0LLU;

    t35 = (x145-((x146!=x147)==x148));

    if (t35 != -129) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	static int64_t x150 = 205760940472454LL;
	static int16_t x151 = INT16_MIN;

    t36 = (x149-((x150!=x151)==x152));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x153 = 90403947495328652LLU;
	volatile uint64_t t37 = 7LLU;

    t37 = (x153-((x154!=x155)==x156));

    if (t37 != 90403947495328652LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x157 = UINT16_MAX;
	int16_t x158 = 85;
	static int16_t x159 = INT16_MAX;
	volatile uint32_t x160 = 141576314U;
	static int32_t t38 = 4;

    t38 = (x157-((x158!=x159)==x160));

    if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 75627609U;
	volatile uint64_t x162 = 4495617156LLU;
	volatile uint8_t x163 = 1U;
	volatile uint32_t t39 = 26U;

    t39 = (x161-((x162!=x163)==x164));

    if (t39 != 75627609U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x165 = 314363110U;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = 1U;
	uint8_t x168 = 78U;
	static uint32_t t40 = 125U;

    t40 = (x165-((x166!=x167)==x168));

    if (t40 != 314363110U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MAX;
	int16_t x170 = 0;
	int16_t x171 = INT16_MIN;
	volatile int64_t x172 = -1987201043314531694LL;

    t41 = (x169-((x170!=x171)==x172));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x173 = INT8_MAX;
	volatile int32_t x174 = INT32_MAX;
	uint16_t x175 = 17U;
	int64_t x176 = INT64_MIN;
	static volatile int32_t t42 = -1;

    t42 = (x173-((x174!=x175)==x176));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x178 = INT8_MAX;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = INT64_MIN;
	int32_t t43 = 467223;

    t43 = (x177-((x178!=x179)==x180));

    if (t43 != 27) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x181 = -1;
	int32_t x182 = INT32_MAX;
	volatile int16_t x183 = INT16_MAX;
	int64_t x184 = INT64_MIN;
	int32_t t44 = -62;

    t44 = (x181-((x182!=x183)==x184));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x187 = 1011663450406188174LLU;
	volatile int32_t t45 = 13316193;

    t45 = (x185-((x186!=x187)==x188));

    if (t45 != 1908) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x189 = UINT16_MAX;
	static int8_t x191 = INT8_MIN;
	static volatile int8_t x192 = INT8_MIN;
	int32_t t46 = -1;

    t46 = (x189-((x190!=x191)==x192));

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = INT8_MIN;
	volatile uint8_t x196 = UINT8_MAX;
	volatile int32_t t47 = -491;

    t47 = (x193-((x194!=x195)==x196));

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x199 = UINT64_MAX;
	int16_t x200 = -1;

    t48 = (x197-((x198!=x199)==x200));

    if (t48 != 69) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x203 = UINT64_MAX;
	static int32_t x204 = INT32_MIN;

    t49 = (x201-((x202!=x203)==x204));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x206 = -1;
	volatile int16_t x207 = INT16_MAX;
	int8_t x208 = 2;
	volatile uint32_t t50 = 130868687U;

    t50 = (x205-((x206!=x207)==x208));

    if (t50 != 880U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x209 = INT8_MIN;
	static volatile int8_t x210 = INT8_MIN;
	static int64_t x211 = 212LL;
	volatile int16_t x212 = -1;
	volatile int32_t t51 = -90962962;

    t51 = (x209-((x210!=x211)==x212));

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MAX;
	uint8_t x216 = 106U;
	volatile int64_t t52 = INT64_MAX;

    t52 = (x213-((x214!=x215)==x216));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x218 = UINT64_MAX;
	volatile uint32_t x219 = 650719992U;
	int32_t x220 = INT32_MIN;
	int32_t t53 = 1520978;

    t53 = (x217-((x218!=x219)==x220));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x221 = INT8_MAX;
	volatile uint32_t x223 = UINT32_MAX;
	volatile int64_t x224 = INT64_MIN;

    t54 = (x221-((x222!=x223)==x224));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x226 = -299;
	int16_t x227 = 4;
	int64_t x228 = 2348401LL;
	volatile int64_t t55 = INT64_MIN;

    t55 = (x225-((x226!=x227)==x228));

    if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = -1;
	static int64_t x230 = -1LL;
	int8_t x231 = 4;
	static int16_t x232 = 253;
	volatile int32_t t56 = 69954583;

    t56 = (x229-((x230!=x231)==x232));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x235 = -5077835789389LL;
	int32_t x236 = INT32_MIN;
	volatile int32_t t57 = INT32_MIN;

    t57 = (x233-((x234!=x235)==x236));

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = -1LL;
	int16_t x238 = 7;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t58 = 49346525679374492LL;

    t58 = (x237-((x238!=x239)==x240));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x241 = 0;
	volatile uint16_t x242 = 0U;
	static uint16_t x243 = 10498U;
	int32_t t59 = 6;

    t59 = (x241-((x242!=x243)==x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x246 = INT8_MAX;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = -1;
	static int32_t t60 = -133;

    t60 = (x245-((x246!=x247)==x248));

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x249 = INT32_MIN;
	int16_t x251 = 1;
	static volatile uint16_t x252 = 463U;
	int32_t t61 = INT32_MIN;

    t61 = (x249-((x250!=x251)==x252));

    if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x253 = -278142599;
	int16_t x255 = -1;
	static int32_t x256 = -6267;
	int32_t t62 = -487;

    t62 = (x253-((x254!=x255)==x256));

    if (t62 != -278142599) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x258 = 14U;
	int32_t x260 = 228;
	int32_t t63 = -25165708;

    t63 = (x257-((x258!=x259)==x260));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x261 = UINT16_MAX;
	int32_t x262 = INT32_MIN;
	uint32_t x263 = UINT32_MAX;
	volatile uint16_t x264 = 0U;
	static int32_t t64 = 1;

    t64 = (x261-((x262!=x263)==x264));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x265 = INT64_MAX;
	int32_t x266 = -107244120;
	static uint16_t x267 = 832U;
	volatile int32_t x268 = INT32_MIN;
	volatile int64_t t65 = INT64_MAX;

    t65 = (x265-((x266!=x267)==x268));

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x270 = -179;
	int8_t x271 = INT8_MIN;
	static int64_t x272 = INT64_MIN;

    t66 = (x269-((x270!=x271)==x272));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = -6;
	int16_t x276 = 7106;
	static volatile int32_t t67 = -231260636;

    t67 = (x273-((x274!=x275)==x276));

    if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x277 = UINT64_MAX;
	uint8_t x278 = 0U;
	volatile int8_t x279 = 5;
	int8_t x280 = INT8_MIN;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = (x277-((x278!=x279)==x280));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x281 = 8033U;
	volatile int64_t x282 = -1LL;
	static int16_t x283 = INT16_MAX;

    t69 = (x281-((x282!=x283)==x284));

    if (t69 != 8033) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x285 = -8928;
	int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -793;

    t70 = (x285-((x286!=x287)==x288));

    if (t70 != -8928) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x289 = 85U;
	int64_t x291 = INT64_MIN;
	static volatile int32_t t71 = 2;

    t71 = (x289-((x290!=x291)==x292));

    if (t71 != 85) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x294 = 22313671960LLU;
	uint8_t x296 = 1U;
	volatile int32_t t72 = 307150605;

    t72 = (x293-((x294!=x295)==x296));

    if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x297 = UINT16_MAX;
	static int8_t x298 = INT8_MAX;
	static int32_t x299 = INT32_MAX;
	int8_t x300 = 26;
	int32_t t73 = 1952;

    t73 = (x297-((x298!=x299)==x300));

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x301 = 0U;
	uint16_t x302 = UINT16_MAX;
	int8_t x303 = INT8_MIN;
	static int32_t t74 = 1;

    t74 = (x301-((x302!=x303)==x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x305 = 31U;
	static int16_t x306 = INT16_MIN;
	static int32_t x307 = INT32_MIN;
	int64_t x308 = 105327139614251LL;
	int32_t t75 = -1;

    t75 = (x305-((x306!=x307)==x308));

    if (t75 != 31) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x309 = INT8_MIN;
	static uint8_t x311 = 0U;
	int16_t x312 = INT16_MIN;

    t76 = (x309-((x310!=x311)==x312));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x313 = 75573310305LLU;
	volatile uint8_t x314 = 9U;
	int16_t x315 = -1;
	volatile uint64_t t77 = 65573814404210359LLU;

    t77 = (x313-((x314!=x315)==x316));

    if (t77 != 75573310305LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x317 = -1;
	int8_t x320 = INT8_MIN;
	int32_t t78 = 753;

    t78 = (x317-((x318!=x319)==x320));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x321 = -1LL;
	int32_t x323 = INT32_MIN;
	static int32_t x324 = -1;
	static volatile int64_t t79 = 840030901LL;

    t79 = (x321-((x322!=x323)==x324));

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x325 = 2U;
	int32_t x326 = INT32_MIN;
	int8_t x327 = 5;
	int8_t x328 = 1;
	volatile int32_t t80 = -111486;

    t80 = (x325-((x326!=x327)==x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x329 = UINT32_MAX;
	static volatile uint8_t x330 = 1U;
	static int64_t x331 = INT64_MIN;

    t81 = (x329-((x330!=x331)==x332));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x333 = 572544646U;
	int16_t x334 = INT16_MAX;
	uint64_t x336 = UINT64_MAX;
	uint32_t t82 = 164620U;

    t82 = (x333-((x334!=x335)==x336));

    if (t82 != 572544646U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x337 = UINT64_MAX;
	int8_t x338 = INT8_MIN;
	static int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MIN;

    t83 = (x337-((x338!=x339)==x340));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x343 = UINT8_MAX;
	static int64_t x344 = -128546069113403550LL;
	int64_t t84 = 13302249LL;

    t84 = (x341-((x342!=x343)==x344));

    if (t84 != -8292721LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x346 = -1LL;
	volatile int32_t x347 = 83;
	uint32_t x348 = 19798856U;
	int32_t t85 = -10659;

    t85 = (x345-((x346!=x347)==x348));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x349 = -1;
	static volatile int16_t x350 = 8;
	int8_t x351 = INT8_MAX;
	int32_t x352 = -1;
	static int32_t t86 = 200135350;

    t86 = (x349-((x350!=x351)==x352));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x353 = 4U;
	uint32_t x354 = 79662U;
	int8_t x356 = INT8_MIN;
	uint32_t t87 = 3058U;

    t87 = (x353-((x354!=x355)==x356));

    if (t87 != 4U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = 0;
	int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MAX;
	volatile int32_t t88 = 311;

    t88 = (x357-((x358!=x359)==x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x361 = -1;
	static int32_t x362 = INT32_MAX;
	int8_t x363 = 0;
	volatile int32_t t89 = 246;

    t89 = (x361-((x362!=x363)==x364));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x366 = 716254546595513LLU;
	int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MAX;
	volatile int32_t t90 = -99;

    t90 = (x365-((x366!=x367)==x368));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x369 = UINT16_MAX;
	int16_t x371 = -1;

    t91 = (x369-((x370!=x371)==x372));

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x373 = 24;
	int16_t x374 = 15;
	volatile int32_t t92 = 1011250774;

    t92 = (x373-((x374!=x375)==x376));

    if (t92 != 24) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x377 = 5;
	int16_t x378 = INT16_MIN;
	uint32_t x379 = 47765U;
	volatile int64_t x380 = INT64_MIN;

    t93 = (x377-((x378!=x379)==x380));

    if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x381 = -1;
	volatile uint32_t x382 = UINT32_MAX;
	uint64_t x384 = 1064LLU;

    t94 = (x381-((x382!=x383)==x384));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x385 = UINT16_MAX;
	uint64_t x386 = 579592LLU;
	uint16_t x387 = 4092U;
	volatile int32_t t95 = 141;

    t95 = (x385-((x386!=x387)==x388));

    if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x390 = INT16_MAX;
	static uint16_t x391 = 25130U;
	static volatile uint32_t x392 = 1218268024U;

    t96 = (x389-((x390!=x391)==x392));

    if (t96 != 36) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x393 = 0;
	int32_t x394 = -1;
	uint8_t x395 = 32U;
	int32_t t97 = 180782765;

    t97 = (x393-((x394!=x395)==x396));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x397 = -1;
	uint64_t x398 = UINT64_MAX;
	int32_t t98 = -497550;

    t98 = (x397-((x398!=x399)==x400));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x401 = INT32_MIN;
	int64_t x402 = -1LL;
	int8_t x403 = INT8_MIN;
	static volatile int32_t t99 = INT32_MIN;

    t99 = (x401-((x402!=x403)==x404));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x405 = INT32_MIN;
	int16_t x406 = -42;
	int16_t x407 = INT16_MIN;
	volatile uint8_t x408 = 4U;
	volatile int32_t t100 = INT32_MIN;

    t100 = (x405-((x406!=x407)==x408));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x409 = 648LLU;
	int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MAX;
	uint16_t x412 = 44U;

    t101 = (x409-((x410!=x411)==x412));

    if (t101 != 648LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x413 = 5LLU;
	int16_t x414 = -1;
	int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MIN;
	static uint64_t t102 = 1LLU;

    t102 = (x413-((x414!=x415)==x416));

    if (t102 != 5LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x417 = -1;
	uint32_t x418 = UINT32_MAX;
	int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;

    t103 = (x417-((x418!=x419)==x420));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x422 = UINT8_MAX;

    t104 = (x421-((x422!=x423)==x424));

    if (t104 != 13) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x429 = INT8_MAX;
	int64_t x430 = INT64_MIN;
	volatile int32_t t105 = 1086;

    t105 = (x429-((x430!=x431)==x432));

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x433 = UINT64_MAX;
	int32_t x435 = -1;
	int64_t x436 = -853844335183LL;

    t106 = (x433-((x434!=x435)==x436));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x437 = INT64_MAX;
	static int32_t x438 = INT32_MIN;
	volatile int32_t x439 = INT32_MIN;
	int64_t x440 = -31615899882284LL;

    t107 = (x437-((x438!=x439)==x440));

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x441 = INT64_MAX;
	static uint32_t x442 = UINT32_MAX;
	volatile uint64_t x443 = UINT64_MAX;
	int64_t t108 = INT64_MAX;

    t108 = (x441-((x442!=x443)==x444));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x446 = -1;
	int8_t x447 = INT8_MIN;
	int16_t x448 = INT16_MIN;
	int64_t t109 = INT64_MAX;

    t109 = (x445-((x446!=x447)==x448));

    if (t109 != INT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x449 = INT32_MIN;
	volatile int32_t x450 = -1;
	int32_t x451 = INT32_MIN;
	int32_t t110 = INT32_MIN;

    t110 = (x449-((x450!=x451)==x452));

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x453 = INT32_MAX;
	int16_t x454 = INT16_MIN;
	int8_t x455 = INT8_MIN;
	uint64_t x456 = 37880909LLU;
	volatile int32_t t111 = INT32_MAX;

    t111 = (x453-((x454!=x455)==x456));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x457 = -13646;
	int16_t x458 = -1;
	volatile uint32_t x459 = 31U;
	uint16_t x460 = 593U;
	volatile int32_t t112 = 122076492;

    t112 = (x457-((x458!=x459)==x460));

    if (t112 != -13646) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x461 = UINT16_MAX;
	uint16_t x463 = 3447U;
	static uint16_t x464 = 1383U;
	static volatile int32_t t113 = 5961;

    t113 = (x461-((x462!=x463)==x464));

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x467 = 30617U;
	int32_t x468 = 711634;
	uint32_t t114 = 3863U;

    t114 = (x465-((x466!=x467)==x468));

    if (t114 != 3U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x470 = -10;
	int64_t x471 = 11LL;
	uint8_t x472 = 108U;

    t115 = (x469-((x470!=x471)==x472));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x474 = INT8_MAX;
	volatile uint64_t x475 = UINT64_MAX;
	uint8_t x476 = 0U;
	static volatile uint32_t t116 = UINT32_MAX;

    t116 = (x473-((x474!=x475)==x476));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x477 = 37278818LLU;
	uint8_t x478 = 11U;
	uint64_t x479 = 483306460388820LLU;
	volatile uint64_t t117 = 20950LLU;

    t117 = (x477-((x478!=x479)==x480));

    if (t117 != 37278818LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x481 = INT32_MIN;
	static volatile int64_t x482 = INT64_MIN;
	uint16_t x483 = 29U;
	volatile int32_t x484 = INT32_MIN;
	int32_t t118 = INT32_MIN;

    t118 = (x481-((x482!=x483)==x484));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x485 = INT64_MAX;
	static int8_t x487 = INT8_MIN;

    t119 = (x485-((x486!=x487)==x488));

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x490 = UINT64_MAX;
	int32_t x491 = INT32_MIN;
	int8_t x492 = -18;
	volatile int32_t t120 = INT32_MAX;

    t120 = (x489-((x490!=x491)==x492));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x493 = 3U;
	uint64_t x494 = 8009750203752883156LLU;
	int8_t x495 = -1;
	int64_t x496 = INT64_MIN;

    t121 = (x493-((x494!=x495)==x496));

    if (t121 != 3) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x497 = -829935LL;
	int16_t x499 = INT16_MAX;
	int64_t x500 = INT64_MAX;
	static int64_t t122 = -216155LL;

    t122 = (x497-((x498!=x499)==x500));

    if (t122 != -829935LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x501 = 0U;
	int64_t x502 = -82436145186750LL;
	int64_t x504 = 959510054230517716LL;
	volatile uint32_t t123 = 1580534961U;

    t123 = (x501-((x502!=x503)==x504));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x505 = UINT16_MAX;
	uint16_t x506 = UINT16_MAX;
	int16_t x507 = 4;
	int16_t x508 = INT16_MAX;
	int32_t t124 = -6184;

    t124 = (x505-((x506!=x507)==x508));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x509 = UINT32_MAX;
	int16_t x510 = INT16_MAX;
	int32_t x511 = INT32_MAX;
	uint64_t x512 = 513629LLU;
	volatile uint32_t t125 = UINT32_MAX;

    t125 = (x509-((x510!=x511)==x512));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = INT16_MIN;
	int8_t x514 = 37;
	int16_t x515 = INT16_MIN;
	int32_t x516 = -1150694;

    t126 = (x513-((x514!=x515)==x516));

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x518 = -1;
	static int16_t x519 = INT16_MIN;
	volatile int32_t t127 = 133612388;

    t127 = (x517-((x518!=x519)==x520));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x521 = INT8_MIN;
	int16_t x522 = INT16_MIN;
	uint64_t x523 = 10755LLU;
	int64_t x524 = 395215142543134334LL;

    t128 = (x521-((x522!=x523)==x524));

    if (t128 != -128) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x525 = 1961;
	static int8_t x526 = -19;
	int64_t x527 = INT64_MIN;

    t129 = (x525-((x526!=x527)==x528));

    if (t129 != 1961) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x530 = INT32_MAX;
	static int8_t x532 = -1;
	volatile int32_t t130 = 123055;

    t130 = (x529-((x530!=x531)==x532));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x534 = 222553015006237853LLU;
	static uint16_t x535 = 1817U;
	int32_t x536 = -1;
	int64_t t131 = 4157199621429LL;

    t131 = (x533-((x534!=x535)==x536));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x537 = -1;
	int32_t x538 = INT32_MIN;
	uint32_t x539 = 187U;
	int32_t x540 = 834;
	volatile int32_t t132 = 1962;

    t132 = (x537-((x538!=x539)==x540));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x541 = UINT16_MAX;
	uint32_t x542 = UINT32_MAX;
	int8_t x543 = -1;
	static uint64_t x544 = 48LLU;
	int32_t t133 = 455;

    t133 = (x541-((x542!=x543)==x544));

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x545 = INT16_MAX;
	int32_t x546 = -448762648;
	int8_t x547 = 0;
	int32_t t134 = -466484;

    t134 = (x545-((x546!=x547)==x548));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x549 = INT8_MIN;
	volatile int64_t x550 = INT64_MIN;
	int64_t x551 = INT64_MIN;
	int64_t x552 = INT64_MIN;

    t135 = (x549-((x550!=x551)==x552));

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x553 = -1;
	static int16_t x555 = -1;
	int16_t x556 = -1;
	int32_t t136 = 309;

    t136 = (x553-((x554!=x555)==x556));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x559 = INT8_MIN;
	static volatile int32_t t137 = -71;

    t137 = (x557-((x558!=x559)==x560));

    if (t137 != 191) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x562 = INT64_MIN;
	int64_t x563 = -23LL;
	uint16_t x564 = UINT16_MAX;
	volatile int64_t t138 = -1LL;

    t138 = (x561-((x562!=x563)==x564));

    if (t138 != -860018040954137LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x565 = 30942798435025512LL;
	static int16_t x566 = -1;
	int16_t x567 = INT16_MAX;
	int64_t t139 = 9623275LL;

    t139 = (x565-((x566!=x567)==x568));

    if (t139 != 30942798435025512LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x569 = INT32_MIN;
	int16_t x570 = -1;
	volatile int16_t x571 = INT16_MIN;

    t140 = (x569-((x570!=x571)==x572));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x576 = INT16_MIN;
	static volatile int32_t t141 = -4029429;

    t141 = (x573-((x574!=x575)==x576));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x577 = INT8_MIN;
	static int8_t x578 = -19;
	int64_t x579 = -279LL;
	static uint16_t x580 = 1683U;
	int32_t t142 = -6;

    t142 = (x577-((x578!=x579)==x580));

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x581 = -1LL;
	int8_t x583 = INT8_MIN;
	int16_t x584 = INT16_MIN;
	int64_t t143 = 847909384569LL;

    t143 = (x581-((x582!=x583)==x584));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x585 = -1LL;
	volatile int32_t x587 = INT32_MIN;

    t144 = (x585-((x586!=x587)==x588));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x590 = 35185070U;
	int64_t x591 = 783929842LL;
	volatile int32_t t145 = INT32_MAX;

    t145 = (x589-((x590!=x591)==x592));

    if (t145 != INT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x593 = INT64_MIN;
	int64_t x594 = INT64_MIN;
	volatile int8_t x596 = 18;
	volatile int64_t t146 = INT64_MIN;

    t146 = (x593-((x594!=x595)==x596));

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x597 = 1400074179U;
	int16_t x599 = INT16_MIN;
	uint16_t x600 = UINT16_MAX;
	uint32_t t147 = 136U;

    t147 = (x597-((x598!=x599)==x600));

    if (t147 != 1400074179U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x601 = 21;
	uint64_t x604 = 26825731431710LLU;
	int32_t t148 = 248330;

    t148 = (x601-((x602!=x603)==x604));

    if (t148 != 21) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x605 = 4751903871880342LLU;
	int32_t x606 = INT32_MAX;
	int16_t x607 = 167;
	int8_t x608 = INT8_MIN;
	static uint64_t t149 = 300798691125474LLU;

    t149 = (x605-((x606!=x607)==x608));

    if (t149 != 4751903871880342LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x609 = 3931U;
	uint64_t x611 = UINT64_MAX;
	int32_t t150 = -521045;

    t150 = (x609-((x610!=x611)==x612));

    if (t150 != 3931) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x613 = INT8_MAX;
	uint8_t x615 = 7U;
	int16_t x616 = INT16_MAX;

    t151 = (x613-((x614!=x615)==x616));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x617 = INT32_MIN;
	static int32_t x618 = INT32_MAX;
	volatile int32_t x619 = 241796481;
	int32_t t152 = INT32_MIN;

    t152 = (x617-((x618!=x619)==x620));

    if (t152 != INT32_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = INT32_MAX;
	int8_t x622 = -1;
	volatile int64_t x623 = 3919LL;
	static int32_t t153 = INT32_MAX;

    t153 = (x621-((x622!=x623)==x624));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x625 = 45327615988257494LLU;
	volatile int8_t x626 = -1;
	int8_t x627 = -15;
	volatile uint64_t t154 = 79669749894059234LLU;

    t154 = (x625-((x626!=x627)==x628));

    if (t154 != 45327615988257493LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x630 = -1;
	int8_t x631 = INT8_MIN;
	int16_t x632 = INT16_MIN;
	static int64_t t155 = 4193261141620LL;

    t155 = (x629-((x630!=x631)==x632));

    if (t155 != 3601183067LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x633 = -1;
	int64_t x634 = 1LL;
	int16_t x635 = INT16_MIN;
	volatile int16_t x636 = INT16_MAX;
	volatile int32_t t156 = 1300;

    t156 = (x633-((x634!=x635)==x636));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x638 = UINT32_MAX;
	uint32_t x639 = 5U;
	static int64_t x640 = INT64_MIN;
	static volatile int64_t t157 = 8016451664LL;

    t157 = (x637-((x638!=x639)==x640));

    if (t157 != -12LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x643 = 1U;
	volatile int8_t x644 = 14;
	volatile int64_t t158 = INT64_MIN;

    t158 = (x641-((x642!=x643)==x644));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x645 = 48U;
	int8_t x647 = INT8_MIN;
	uint32_t x648 = 2252U;
	volatile int32_t t159 = -31873;

    t159 = (x645-((x646!=x647)==x648));

    if (t159 != 48) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x649 = -1LL;
	uint16_t x650 = 1441U;
	int16_t x651 = INT16_MAX;
	static int32_t x652 = INT32_MIN;
	volatile int64_t t160 = 378164500LL;

    t160 = (x649-((x650!=x651)==x652));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x653 = 34LL;
	int8_t x654 = INT8_MIN;
	int64_t t161 = -31965187090LL;

    t161 = (x653-((x654!=x655)==x656));

    if (t161 != 34LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x657 = 0LLU;
	static int8_t x659 = INT8_MAX;
	int32_t x660 = -1;
	volatile uint64_t t162 = 26LLU;

    t162 = (x657-((x658!=x659)==x660));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x661 = -1LL;
	static volatile uint32_t x662 = UINT32_MAX;
	int8_t x664 = INT8_MIN;
	int64_t t163 = 35244879279558159LL;

    t163 = (x661-((x662!=x663)==x664));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x667 = 477650U;
	int8_t x668 = -1;
	uint64_t t164 = 22LLU;

    t164 = (x665-((x666!=x667)==x668));

    if (t164 != 1881LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile uint16_t x670 = 2606U;
	int64_t x671 = INT64_MAX;
	int8_t x672 = INT8_MAX;
	int32_t t165 = -113846;

    t165 = (x669-((x670!=x671)==x672));

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x673 = UINT32_MAX;
	int64_t x674 = INT64_MAX;
	uint16_t x675 = 4U;
	int16_t x676 = INT16_MAX;

    t166 = (x673-((x674!=x675)==x676));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x677 = UINT8_MAX;
	volatile int32_t x678 = INT32_MAX;
	int16_t x679 = INT16_MAX;
	uint16_t x680 = UINT16_MAX;
	static volatile int32_t t167 = 4;

    t167 = (x677-((x678!=x679)==x680));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x681 = 18311969U;
	int64_t x682 = 12571LL;
	volatile int64_t x684 = INT64_MIN;
	static volatile uint32_t t168 = 42U;

    t168 = (x681-((x682!=x683)==x684));

    if (t168 != 18311969U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x686 = INT64_MIN;
	static uint64_t x688 = 42653239219655LLU;
	static uint32_t t169 = 182U;

    t169 = (x685-((x686!=x687)==x688));

    if (t169 != 4U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x689 = INT64_MIN;
	static volatile int8_t x691 = 1;
	static volatile int64_t x692 = INT64_MAX;
	static volatile int64_t t170 = INT64_MIN;

    t170 = (x689-((x690!=x691)==x692));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x694 = -1;
	int8_t x695 = -12;
	volatile int16_t x696 = 0;
	volatile int32_t t171 = -12307;

    t171 = (x693-((x694!=x695)==x696));

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x698 = -1;
	volatile uint16_t x699 = 665U;
	volatile int16_t x700 = INT16_MIN;
	uint64_t t172 = 374177533967108LLU;

    t172 = (x697-((x698!=x699)==x700));

    if (t172 != 12831569513713405LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x701 = INT8_MIN;
	uint16_t x702 = 31095U;
	uint16_t x704 = 10U;

    t173 = (x701-((x702!=x703)==x704));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x705 = 113820036U;
	volatile int64_t x706 = INT64_MIN;
	static int16_t x707 = -818;
	static volatile uint32_t t174 = 2696628U;

    t174 = (x705-((x706!=x707)==x708));

    if (t174 != 113820036U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x709 = UINT8_MAX;
	int32_t x710 = -935;
	volatile int16_t x711 = 7642;
	int8_t x712 = INT8_MIN;
	volatile int32_t t175 = 0;

    t175 = (x709-((x710!=x711)==x712));

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MIN;
	int8_t x715 = INT8_MIN;
	volatile int16_t x716 = -138;

    t176 = (x713-((x714!=x715)==x716));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x717 = 13U;
	static int32_t x719 = INT32_MIN;
	volatile int16_t x720 = -3470;
	int32_t t177 = -12;

    t177 = (x717-((x718!=x719)==x720));

    if (t177 != 13) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x721 = UINT16_MAX;
	int16_t x723 = INT16_MIN;
	volatile int32_t t178 = 14;

    t178 = (x721-((x722!=x723)==x724));

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x725 = 3U;
	int16_t x727 = 7777;
	volatile int32_t t179 = 144351873;

    t179 = (x725-((x726!=x727)==x728));

    if (t179 != 3) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x729 = -1;
	int64_t x730 = INT64_MIN;
	int16_t x731 = INT16_MAX;
	volatile uint16_t x732 = UINT16_MAX;
	volatile int32_t t180 = 15729;

    t180 = (x729-((x730!=x731)==x732));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint16_t x733 = UINT16_MAX;
	volatile int64_t x734 = INT64_MAX;
	int8_t x736 = INT8_MIN;
	static int32_t t181 = 4632146;

    t181 = (x733-((x734!=x735)==x736));

    if (t181 != 65535) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	int64_t x738 = INT64_MAX;
	static volatile int16_t x739 = -1;
	uint32_t x740 = 9U;

    t182 = (x737-((x738!=x739)==x740));

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x741 = -1;
	uint32_t x743 = 52589U;
	volatile uint64_t x744 = 7288LLU;

    t183 = (x741-((x742!=x743)==x744));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x745 = 38933019U;
	volatile uint16_t x747 = UINT16_MAX;
	int8_t x748 = INT8_MIN;
	uint32_t t184 = 1212U;

    t184 = (x745-((x746!=x747)==x748));

    if (t184 != 38933019U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x751 = UINT32_MAX;
	volatile int64_t x752 = -303347LL;
	static int32_t t185 = -87036560;

    t185 = (x749-((x750!=x751)==x752));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x753 = 9934U;
	int64_t x754 = INT64_MIN;
	volatile int32_t x756 = -4;

    t186 = (x753-((x754!=x755)==x756));

    if (t186 != 9934) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x757 = INT16_MIN;
	int64_t x758 = INT64_MIN;
	int32_t x759 = INT32_MIN;
	int8_t x760 = -1;

    t187 = (x757-((x758!=x759)==x760));

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x761 = -1;
	uint32_t x763 = 160928357U;
	int32_t x764 = INT32_MAX;

    t188 = (x761-((x762!=x763)==x764));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x766 = UINT64_MAX;
	int8_t x767 = INT8_MIN;
	uint64_t t189 = 353300LLU;

    t189 = (x765-((x766!=x767)==x768));

    if (t189 != 305547LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x769 = 1969U;
	static int32_t x771 = INT32_MAX;
	static volatile uint32_t t190 = 917U;

    t190 = (x769-((x770!=x771)==x772));

    if (t190 != 1969U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x773 = 56894882995LLU;
	uint64_t x776 = 7874349903LLU;
	uint64_t t191 = 7872458732648283LLU;

    t191 = (x773-((x774!=x775)==x776));

    if (t191 != 56894882995LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x777 = INT8_MIN;
	uint8_t x780 = 10U;
	int32_t t192 = 55779;

    t192 = (x777-((x778!=x779)==x780));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x781 = 1U;
	int64_t x782 = 403711LL;
	volatile int64_t x783 = 11LL;
	static int16_t x784 = INT16_MIN;
	volatile int32_t t193 = 39951;

    t193 = (x781-((x782!=x783)==x784));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x785 = 434U;
	static int64_t x786 = -1LL;
	static int32_t x787 = INT32_MAX;
	static uint16_t x788 = 10U;
	uint32_t t194 = 161U;

    t194 = (x785-((x786!=x787)==x788));

    if (t194 != 434U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x789 = -1LL;
	static int8_t x792 = -1;
	int64_t t195 = 1132759639LL;

    t195 = (x789-((x790!=x791)==x792));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x793 = UINT64_MAX;
	static int32_t x794 = 1;
	uint16_t x796 = 3343U;
	uint64_t t196 = UINT64_MAX;

    t196 = (x793-((x794!=x795)==x796));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x797 = -1;
	int16_t x798 = INT16_MIN;
	static volatile int16_t x800 = -1;
	int32_t t197 = 218678;

    t197 = (x797-((x798!=x799)==x800));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x801 = -1;
	int8_t x802 = 0;
	volatile int16_t x803 = 0;
	volatile int64_t x804 = -1LL;
	int32_t t198 = 15092094;

    t198 = (x801-((x802!=x803)==x804));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x806 = INT64_MAX;
	static int8_t x807 = INT8_MIN;
	volatile int8_t x808 = INT8_MAX;
	static volatile uint64_t t199 = 4465241683125509LLU;

    t199 = (x805-((x806!=x807)==x808));

    if (t199 != 370055766854715823LLU) { NG(); } else { ; }
	
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

