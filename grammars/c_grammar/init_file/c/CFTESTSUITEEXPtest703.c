
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
static int8_t x2 = INT8_MIN;
static int8_t x4 = INT8_MAX;
int64_t x11 = 938515260LL;
uint32_t x18 = UINT32_MAX;
int16_t x26 = 1;
int8_t x29 = 0;
volatile uint8_t x31 = 35U;
static volatile int64_t t9 = INT64_MIN;
int64_t x41 = INT64_MIN;
volatile int64_t t10 = INT64_MIN;
volatile int32_t x46 = 122873;
int64_t t11 = 0LL;
int32_t x50 = 958545;
uint32_t x54 = 1275380U;
int64_t x55 = INT64_MIN;
uint16_t x56 = 4847U;
static volatile uint64_t x57 = 58094093341405511LLU;
uint64_t t14 = 111988994104923520LLU;
int8_t x62 = -1;
volatile int16_t x68 = 911;
int32_t t17 = -891171;
static int64_t x76 = -8LL;
uint64_t x78 = 105832956114LLU;
int16_t x83 = INT16_MIN;
volatile int8_t x84 = INT8_MAX;
int32_t t23 = INT32_MAX;
int16_t x98 = -15312;
volatile uint32_t x99 = UINT32_MAX;
volatile int32_t t26 = 1;
volatile int32_t x122 = 145718771;
uint64_t x131 = UINT64_MAX;
volatile int32_t t32 = 1;
volatile uint32_t t33 = 633U;
int64_t x138 = INT64_MIN;
static volatile uint16_t x142 = UINT16_MAX;
int16_t x154 = INT16_MIN;
volatile int8_t x167 = INT8_MIN;
volatile int32_t t40 = -16480498;
int8_t x172 = 5;
int8_t x179 = INT8_MAX;
int64_t x186 = INT64_MIN;
int64_t x187 = INT64_MIN;
static uint8_t x188 = UINT8_MAX;
uint64_t t45 = 20842LLU;
int32_t t49 = -272627;
uint16_t x210 = 3654U;
int64_t t50 = INT64_MIN;
int32_t x216 = 347084933;
volatile uint32_t t51 = 12454535U;
volatile int32_t t53 = 8380205;
static uint32_t x231 = UINT32_MAX;
uint64_t t55 = 40046644897594125LLU;
volatile uint64_t t59 = 482622966025468LLU;
int8_t x268 = INT8_MIN;
volatile int16_t x269 = 1608;
int32_t t65 = -110801;
static uint16_t x275 = UINT16_MAX;
int8_t x283 = -1;
volatile int16_t x287 = INT16_MIN;
int32_t x292 = -1403;
int8_t x300 = -8;
int32_t t73 = -96;
int8_t x305 = INT8_MAX;
uint32_t x309 = 39U;
static int64_t x311 = INT64_MIN;
uint8_t x324 = 0U;
int32_t t78 = -10303;
volatile int8_t x333 = INT8_MIN;
static int64_t x336 = INT64_MIN;
int32_t t82 = -16849;
uint8_t x347 = UINT8_MAX;
uint16_t x355 = 4775U;
int16_t x367 = -1;
volatile int32_t t89 = -946297;
static int64_t t90 = 474998547LL;
uint16_t x379 = UINT16_MAX;
static int64_t x381 = 1LL;
uint64_t x382 = 29079LLU;
uint8_t x385 = 13U;
int8_t x400 = INT8_MAX;
int32_t t96 = 0;
uint16_t x402 = 629U;
volatile uint64_t x403 = UINT64_MAX;
static volatile int16_t x411 = INT16_MAX;
int32_t x417 = -43713;
int64_t x419 = INT64_MAX;
int8_t x424 = -1;
static volatile int64_t t103 = 231675783489LL;
static int64_t x432 = INT64_MIN;
static int16_t x437 = INT16_MAX;
int8_t x439 = INT8_MIN;
static int16_t x441 = -11;
volatile int32_t t107 = -244988;
int32_t x451 = INT32_MIN;
volatile int16_t x458 = INT16_MIN;
uint8_t x465 = UINT8_MAX;
uint64_t x466 = UINT64_MAX;
static int16_t x472 = INT16_MAX;
static volatile int32_t x477 = -1;
static uint16_t x478 = 16U;
static int32_t x480 = INT32_MAX;
volatile int32_t t116 = -39569;
int16_t x481 = INT16_MAX;
volatile int8_t x482 = INT8_MAX;
volatile int16_t x484 = INT16_MIN;
int32_t t117 = -18108;
int8_t x493 = -1;
volatile int64_t x498 = INT64_MIN;
uint64_t x504 = 5LLU;
uint32_t t121 = 238856205U;
int16_t x508 = INT16_MIN;
static int32_t x516 = INT32_MIN;
uint8_t x519 = 77U;
int32_t x522 = 11480;
static int64_t t126 = 6404575562523LL;
volatile int8_t x531 = INT8_MIN;
int64_t x533 = INT64_MIN;
volatile int32_t x538 = INT32_MAX;
volatile uint8_t x540 = 49U;
uint8_t x542 = 1U;
int16_t x545 = 30;
static uint16_t x549 = 19U;
volatile int16_t x553 = INT16_MIN;
volatile int8_t x555 = -10;
uint64_t x556 = 191860LLU;
static volatile uint32_t x567 = 1U;
volatile uint32_t x568 = 10584U;
uint32_t t137 = UINT32_MAX;
uint32_t t139 = UINT32_MAX;
uint8_t x581 = 59U;
uint16_t x586 = 6792U;
int32_t t142 = -41;
volatile int32_t t144 = 749069;
int32_t t145 = -3021;
uint8_t x604 = 24U;
uint16_t x605 = 156U;
int64_t x609 = -1LL;
uint16_t x611 = UINT16_MAX;
int32_t x614 = INT32_MIN;
uint8_t x616 = 1U;
volatile int8_t x618 = -3;
volatile int8_t x623 = -1;
volatile uint32_t t151 = 1475779U;
static uint8_t x636 = 3U;
int32_t t154 = 753;
int16_t x645 = -2699;
volatile uint64_t x650 = UINT64_MAX;
int32_t x660 = INT32_MIN;
int64_t t160 = 288078081LL;
volatile int16_t x665 = -10;
int32_t t162 = 29791169;
uint16_t x676 = 1U;
int32_t x678 = -1;
uint8_t x680 = 3U;
int64_t x682 = 4033587181776430473LL;
int8_t x688 = INT8_MIN;
uint32_t x689 = UINT32_MAX;
volatile int32_t t171 = -27281421;
uint32_t x712 = UINT32_MAX;
int16_t x719 = 5658;
int8_t x727 = INT8_MIN;
volatile int32_t x733 = INT32_MAX;
uint16_t x737 = UINT16_MAX;
volatile int64_t x738 = INT64_MAX;
int32_t x741 = 16;
volatile int8_t x752 = 23;
static int32_t x754 = INT32_MAX;
int64_t x758 = -4925770206LL;
volatile int32_t t185 = -8;
int8_t x766 = INT8_MIN;
int32_t x767 = -18085566;
static int16_t x776 = -1;
int8_t x780 = INT8_MIN;
int32_t t189 = 23;
static uint32_t x781 = 642705U;
uint64_t x784 = UINT64_MAX;
uint32_t x786 = UINT32_MAX;
volatile int32_t x788 = -1;
static int64_t t192 = -3362LL;
volatile uint8_t x793 = 0U;
int8_t x801 = -41;
int8_t x802 = INT8_MAX;
uint8_t x808 = 1U;
int8_t x815 = INT8_MIN;


void f0(void) {
    	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = 64971;

    t0 = (x1*((x2/x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -1;
	int16_t x6 = -1;
	uint16_t x7 = 136U;
	static uint64_t x8 = UINT64_MAX;
	int32_t t1 = -13;

    t1 = (x5*((x6/x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = -2;
	volatile int8_t x10 = -45;
	int64_t x12 = -33889534355163LL;
	volatile int32_t t2 = 14381;

    t2 = (x9*((x10/x11)>x12));

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 378U;
	static uint32_t x14 = UINT32_MAX;
	int64_t x15 = INT64_MIN;
	uint16_t x16 = 3U;
	volatile uint32_t t3 = 14916U;

    t3 = (x13*((x14/x15)>x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = 2;
	static uint16_t x19 = 27618U;
	int32_t x20 = 0;
	int32_t t4 = -430298066;

    t4 = (x17*((x18/x19)>x20));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 134747LL;
	volatile uint16_t x22 = 0U;
	int32_t x23 = INT32_MIN;
	static int32_t x24 = 175774;
	volatile int64_t t5 = -2968367753071LL;

    t5 = (x21*((x22/x23)>x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -43463738LL;
	int16_t x27 = INT16_MAX;
	int64_t x28 = 1923799LL;
	static int64_t t6 = -12638LL;

    t6 = (x25*((x26/x27)>x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x30 = UINT16_MAX;
	int16_t x32 = 4335;
	static volatile int32_t t7 = -49;

    t7 = (x29*((x30/x31)>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 964U;
	volatile uint16_t x34 = UINT16_MAX;
	uint32_t x35 = 4876594U;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = 290160;

    t8 = (x33*((x34/x35)>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	int32_t x38 = -1;
	int8_t x39 = -1;
	int64_t x40 = -1LL;

    t9 = (x37*((x38/x39)>x40));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x42 = -25169311416466LL;
	int64_t x43 = -1LL;
	int64_t x44 = INT64_MIN;

    t10 = (x41*((x42/x43)>x44));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 759111658732LL;
	volatile int32_t x47 = -1;
	static uint32_t x48 = 76430U;

    t11 = (x45*((x46/x47)>x48));

    if (t11 != 759111658732LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = 127464459;
	volatile uint64_t x51 = 478832819LLU;
	uint64_t x52 = 0LLU;
	static volatile int32_t t12 = -7392;

    t12 = (x49*((x50/x51)>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = 7976U;
	int32_t t13 = -1555;

    t13 = (x53*((x54/x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x58 = -1LL;
	volatile uint64_t x59 = 5120486018LLU;
	uint8_t x60 = 12U;

    t14 = (x57*((x58/x59)>x60));

    if (t14 != 58094093341405511LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 0U;
	static int16_t x63 = INT16_MIN;
	int32_t x64 = -1;
	static int32_t t15 = 216285325;

    t15 = (x61*((x62/x63)>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	volatile uint64_t x66 = 1163673573963989LLU;
	int16_t x67 = 57;
	static int32_t t16 = INT32_MIN;

    t16 = (x65*((x66/x67)>x68));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	static uint32_t x70 = UINT32_MAX;
	int32_t x71 = -1;
	uint32_t x72 = 77U;

    t17 = (x69*((x70/x71)>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	volatile int16_t x74 = -1;
	uint16_t x75 = 5294U;
	volatile int32_t t18 = 441368;

    t18 = (x73*((x74/x75)>x76));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	static int64_t x79 = INT64_MAX;
	uint32_t x80 = 100594U;
	int32_t t19 = 3;

    t19 = (x77*((x78/x79)>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	volatile uint16_t x82 = UINT16_MAX;
	int32_t t20 = 7147;

    t20 = (x81*((x82/x83)>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = -1;
	int16_t x86 = 0;
	static int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	int32_t t21 = -69147;

    t21 = (x85*((x86/x87)>x88));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 662LL;
	int32_t x90 = INT32_MIN;
	uint16_t x91 = UINT16_MAX;
	volatile int64_t x92 = INT64_MIN;
	int64_t t22 = -542553LL;

    t22 = (x89*((x90/x91)>x92));

    if (t22 != 662LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MIN;
	int16_t x95 = -37;
	volatile int8_t x96 = INT8_MIN;

    t23 = (x93*((x94/x95)>x96));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = 0;
	int8_t x100 = INT8_MAX;
	volatile int32_t t24 = 1;

    t24 = (x97*((x98/x99)>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MIN;
	int64_t x102 = INT64_MIN;
	int8_t x103 = -32;
	int32_t x104 = -15;
	int32_t t25 = INT32_MIN;

    t25 = (x101*((x102/x103)>x104));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = UINT8_MAX;
	int16_t x106 = -1;
	volatile int8_t x107 = INT8_MAX;
	int16_t x108 = INT16_MAX;

    t26 = (x105*((x106/x107)>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MAX;
	uint64_t x110 = 1903888LLU;
	static uint32_t x111 = 1U;
	static int64_t x112 = INT64_MIN;
	int32_t t27 = -1;

    t27 = (x109*((x110/x111)>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -62;
	volatile int8_t x114 = INT8_MAX;
	uint8_t x115 = UINT8_MAX;
	uint32_t x116 = UINT32_MAX;
	int32_t t28 = -209710592;

    t28 = (x113*((x114/x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 80055886U;
	int16_t x118 = 68;
	int8_t x119 = INT8_MIN;
	int8_t x120 = 11;
	uint32_t t29 = 23643281U;

    t29 = (x117*((x118/x119)>x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 10U;
	int64_t x123 = INT64_MIN;
	int16_t x124 = 2368;
	static int32_t t30 = 3;

    t30 = (x121*((x122/x123)>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = -7038160;
	int32_t x126 = INT32_MIN;
	uint8_t x127 = UINT8_MAX;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = 49;

    t31 = (x125*((x126/x127)>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -1;
	int8_t x130 = INT8_MAX;
	volatile int32_t x132 = INT32_MAX;

    t32 = (x129*((x130/x131)>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 1U;
	static int16_t x134 = INT16_MIN;
	uint16_t x135 = 9206U;
	uint32_t x136 = 16704093U;

    t33 = (x133*((x134/x135)>x136));

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -241929759123030545LL;
	volatile uint8_t x139 = 25U;
	static volatile int32_t x140 = -1;
	volatile int64_t t34 = -815LL;

    t34 = (x137*((x138/x139)>x140));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	int32_t x143 = INT32_MIN;
	static int32_t x144 = -1979312;
	volatile int32_t t35 = INT32_MAX;

    t35 = (x141*((x142/x143)>x144));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MIN;
	static int32_t x147 = -1;
	int16_t x148 = 899;
	volatile int32_t t36 = -1412275;

    t36 = (x145*((x146/x147)>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	static uint64_t x150 = UINT64_MAX;
	volatile int16_t x151 = INT16_MAX;
	static int8_t x152 = 0;
	volatile uint64_t t37 = UINT64_MAX;

    t37 = (x149*((x150/x151)>x152));

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	static volatile uint64_t x155 = UINT64_MAX;
	int32_t x156 = INT32_MAX;
	volatile int32_t t38 = -248276690;

    t38 = (x153*((x154/x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x157 = 21U;
	static int64_t x158 = 45448083911058LL;
	volatile int32_t x159 = 454;
	int16_t x160 = -4;
	volatile int32_t t39 = -808;

    t39 = (x157*((x158/x159)>x160));

    if (t39 != 21) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = 7;
	static int64_t x166 = INT64_MAX;
	int64_t x168 = INT64_MIN;

    t40 = (x165*((x166/x167)>x168));

    if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = 16261U;
	int8_t x170 = -7;
	int32_t x171 = -462992;
	int32_t t41 = -475674;

    t41 = (x169*((x170/x171)>x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x173 = -1LL;
	static int64_t x174 = -1LL;
	static int8_t x175 = INT8_MAX;
	volatile int8_t x176 = 17;
	int64_t t42 = -15LL;

    t42 = (x173*((x174/x175)>x176));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MIN;
	uint8_t x178 = UINT8_MAX;
	int16_t x180 = 252;
	static volatile int64_t t43 = -34592722071683438LL;

    t43 = (x177*((x178/x179)>x180));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = INT32_MIN;
	static int64_t x182 = -959677805LL;
	int8_t x183 = 5;
	uint8_t x184 = 7U;
	volatile int32_t t44 = 51;

    t44 = (x181*((x182/x183)>x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x185 = UINT64_MAX;

    t45 = (x185*((x186/x187)>x188));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x189 = 4;
	int64_t x190 = INT64_MIN;
	uint16_t x191 = 10U;
	static int16_t x192 = 2224;
	int32_t t46 = -235544;

    t46 = (x189*((x190/x191)>x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x193 = 0U;
	static volatile int16_t x194 = INT16_MIN;
	volatile int8_t x195 = 1;
	int8_t x196 = -1;
	int32_t t47 = -972668;

    t47 = (x193*((x194/x195)>x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = INT8_MIN;
	int64_t x202 = -81140172952343LL;
	volatile int8_t x203 = INT8_MIN;
	volatile uint64_t x204 = UINT64_MAX;
	int32_t t48 = 4107;

    t48 = (x201*((x202/x203)>x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = -1;
	volatile int32_t x206 = INT32_MIN;
	volatile int64_t x207 = 969148737LL;
	int16_t x208 = INT16_MIN;

    t49 = (x205*((x206/x207)>x208));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = INT64_MIN;
	static volatile int8_t x211 = -3;
	static uint64_t x212 = 85LLU;

    t50 = (x209*((x210/x211)>x212));

    if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x213 = 28U;
	int16_t x214 = 184;
	static int64_t x215 = INT64_MAX;

    t51 = (x213*((x214/x215)>x216));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = INT32_MIN;
	volatile uint16_t x218 = 23U;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = 82429225;
	int32_t t52 = 20;

    t52 = (x217*((x218/x219)>x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	int64_t x224 = INT64_MIN;

    t53 = (x221*((x222/x223)>x224));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x225 = INT16_MAX;
	int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MIN;
	uint32_t x228 = 29U;
	volatile int32_t t54 = -482281388;

    t54 = (x225*((x226/x227)>x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x229 = 748154LLU;
	int32_t x230 = -1;
	int64_t x232 = -1LL;

    t55 = (x229*((x230/x231)>x232));

    if (t55 != 748154LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x233 = 839294212370LLU;
	int64_t x234 = INT64_MIN;
	uint16_t x235 = UINT16_MAX;
	int32_t x236 = -1;
	volatile uint64_t t56 = 45098LLU;

    t56 = (x233*((x234/x235)>x236));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x238 = -1;
	volatile int64_t x239 = 69LL;
	static volatile int16_t x240 = -2391;
	int32_t t57 = -557993;

    t57 = (x237*((x238/x239)>x240));

    if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = 0;
	int64_t x242 = 2LL;
	int32_t x243 = -1;
	int8_t x244 = -1;
	volatile int32_t t58 = 8900;

    t58 = (x241*((x242/x243)>x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x245 = 72882149054LLU;
	int16_t x246 = INT16_MIN;
	static int8_t x247 = INT8_MAX;
	int32_t x248 = -1;

    t59 = (x245*((x246/x247)>x248));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = UINT16_MAX;
	static volatile int8_t x250 = INT8_MIN;
	static int32_t x251 = INT32_MIN;
	int32_t x252 = -1;
	volatile int32_t t60 = -2757;

    t60 = (x249*((x250/x251)>x252));

    if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x253 = 7U;
	static uint64_t x254 = 28873262843LLU;
	static volatile int32_t x255 = 4;
	volatile uint16_t x256 = 125U;
	static volatile int32_t t61 = 15;

    t61 = (x253*((x254/x255)>x256));

    if (t61 != 7) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x257 = -1;
	volatile int32_t x258 = INT32_MIN;
	static uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 14960LLU;
	int32_t t62 = -4137983;

    t62 = (x257*((x258/x259)>x260));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x261 = INT64_MIN;
	uint64_t x262 = 72909900738LLU;
	static int16_t x263 = -1;
	uint64_t x264 = 6694727638845LLU;
	static volatile int64_t t63 = -1112562606546430841LL;

    t63 = (x261*((x262/x263)>x264));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x265 = INT8_MIN;
	volatile int32_t x266 = INT32_MAX;
	static volatile int8_t x267 = -1;
	volatile int32_t t64 = -444579707;

    t64 = (x265*((x266/x267)>x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x270 = INT64_MAX;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = -639;

    t65 = (x269*((x270/x271)>x272));

    if (t65 != 1608) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x273 = UINT8_MAX;
	int8_t x274 = INT8_MAX;
	int32_t x276 = INT32_MAX;
	static int32_t t66 = 432283210;

    t66 = (x273*((x274/x275)>x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x277 = INT64_MIN;
	int32_t x278 = INT32_MAX;
	int64_t x279 = -89394263809LL;
	int64_t x280 = INT64_MAX;
	static volatile int64_t t67 = 3LL;

    t67 = (x277*((x278/x279)>x280));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = 0U;
	static int16_t x282 = -11450;
	uint32_t x284 = 2512U;
	static volatile int32_t t68 = -235;

    t68 = (x281*((x282/x283)>x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	int8_t x288 = INT8_MIN;
	volatile int32_t t69 = -37826;

    t69 = (x285*((x286/x287)>x288));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = -507460LL;
	int8_t x290 = 0;
	int64_t x291 = INT64_MAX;
	volatile int64_t t70 = 3LL;

    t70 = (x289*((x290/x291)>x292));

    if (t70 != -507460LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = INT16_MAX;
	int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MAX;
	uint32_t x296 = 3U;
	static volatile int32_t t71 = -265789290;

    t71 = (x293*((x294/x295)>x296));

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = INT8_MIN;
	static uint32_t x298 = 709U;
	int32_t x299 = -1;
	volatile int32_t t72 = 0;

    t72 = (x297*((x298/x299)>x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = -1;
	static volatile int32_t x302 = INT32_MIN;
	volatile int8_t x303 = INT8_MIN;
	volatile int8_t x304 = -3;

    t73 = (x301*((x302/x303)>x304));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x306 = UINT64_MAX;
	int16_t x307 = -2;
	int64_t x308 = 1LL;
	static volatile int32_t t74 = 2219;

    t74 = (x305*((x306/x307)>x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x310 = INT8_MAX;
	int16_t x312 = INT16_MAX;
	uint32_t t75 = 3725U;

    t75 = (x309*((x310/x311)>x312));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x313 = 3U;
	int16_t x314 = -25;
	int64_t x315 = 316272498599LL;
	volatile int64_t x316 = 96LL;
	volatile int32_t t76 = 1;

    t76 = (x313*((x314/x315)>x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x317 = UINT64_MAX;
	static int32_t x318 = INT32_MIN;
	static uint64_t x319 = 1268178LLU;
	int64_t x320 = -1LL;
	static uint64_t t77 = 6280307708LLU;

    t77 = (x317*((x318/x319)>x320));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = INT8_MIN;
	uint16_t x322 = 1U;
	static int64_t x323 = INT64_MIN;

    t78 = (x321*((x322/x323)>x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x325 = UINT64_MAX;
	int64_t x326 = -1LL;
	int32_t x327 = INT32_MIN;
	int8_t x328 = 1;
	volatile uint64_t t79 = 6496505284452655LLU;

    t79 = (x325*((x326/x327)>x328));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x329 = -33261580637989LL;
	static uint64_t x330 = 1928747076657797475LLU;
	int8_t x331 = -5;
	static int8_t x332 = INT8_MIN;
	volatile int64_t t80 = 645102493478321LL;

    t80 = (x329*((x330/x331)>x332));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x334 = INT8_MIN;
	static volatile uint32_t x335 = 24U;
	int32_t t81 = -110977289;

    t81 = (x333*((x334/x335)>x336));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = -1;
	int64_t x338 = INT64_MAX;
	static volatile int16_t x339 = -1;
	int8_t x340 = 22;

    t82 = (x337*((x338/x339)>x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = -1;
	int8_t x342 = INT8_MIN;
	int8_t x343 = 2;
	static volatile int16_t x344 = 60;
	volatile int32_t t83 = -16;

    t83 = (x341*((x342/x343)>x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x345 = UINT64_MAX;
	int32_t x346 = INT32_MIN;
	int8_t x348 = -1;
	uint64_t t84 = 9234LLU;

    t84 = (x345*((x346/x347)>x348));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x349 = INT32_MIN;
	static uint8_t x350 = UINT8_MAX;
	static uint64_t x351 = 4LLU;
	static uint32_t x352 = UINT32_MAX;
	int32_t t85 = -1514;

    t85 = (x349*((x350/x351)>x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x353 = 1;
	int32_t x354 = INT32_MAX;
	static uint16_t x356 = UINT16_MAX;
	static int32_t t86 = 197088;

    t86 = (x353*((x354/x355)>x356));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x357 = 22U;
	int16_t x358 = -6;
	static int16_t x359 = INT16_MIN;
	static uint16_t x360 = UINT16_MAX;
	uint32_t t87 = 3195U;

    t87 = (x357*((x358/x359)>x360));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x365 = 16066518311644LLU;
	static uint32_t x366 = 8250U;
	int16_t x368 = -1;
	uint64_t t88 = 6680431256419LLU;

    t88 = (x365*((x366/x367)>x368));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x369 = UINT16_MAX;
	int8_t x370 = 1;
	volatile uint32_t x371 = 3U;
	volatile int8_t x372 = -6;

    t89 = (x369*((x370/x371)>x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x373 = -1LL;
	static int64_t x374 = INT64_MAX;
	uint32_t x375 = UINT32_MAX;
	volatile int16_t x376 = -26;

    t90 = (x373*((x374/x375)>x376));

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x377 = 586090U;
	uint32_t x378 = 28293068U;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t91 = 2344U;

    t91 = (x377*((x378/x379)>x380));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x383 = INT8_MIN;
	int16_t x384 = INT16_MAX;
	int64_t t92 = -15358577425548LL;

    t92 = (x381*((x382/x383)>x384));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x386 = INT64_MAX;
	int8_t x387 = -1;
	int8_t x388 = INT8_MAX;
	volatile int32_t t93 = 1;

    t93 = (x385*((x386/x387)>x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x389 = INT64_MAX;
	static uint8_t x390 = UINT8_MAX;
	uint32_t x391 = 36353539U;
	int8_t x392 = -1;
	volatile int64_t t94 = 4159860895869598LL;

    t94 = (x389*((x390/x391)>x392));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x393 = 23U;
	int16_t x394 = 369;
	int16_t x395 = INT16_MAX;
	uint8_t x396 = 2U;
	volatile int32_t t95 = -25116852;

    t95 = (x393*((x394/x395)>x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x397 = 1U;
	int32_t x398 = 705343;
	int8_t x399 = INT8_MAX;

    t96 = (x397*((x398/x399)>x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x404 = INT64_MAX;
	static volatile int32_t t97 = 111;

    t97 = (x401*((x402/x403)>x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x405 = 294U;
	int32_t x406 = -222611857;
	uint32_t x407 = 48413U;
	static int16_t x408 = -1;
	int32_t t98 = 4;

    t98 = (x405*((x406/x407)>x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x409 = 10628U;
	volatile int64_t x410 = -1LL;
	int64_t x412 = INT64_MIN;
	volatile int32_t t99 = -1;

    t99 = (x409*((x410/x411)>x412));

    if (t99 != 10628) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x413 = INT64_MAX;
	static int8_t x414 = 50;
	uint32_t x415 = 967384699U;
	int64_t x416 = 12302183907809204LL;
	int64_t t100 = -4220356991773933LL;

    t100 = (x413*((x414/x415)>x416));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x418 = 0;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t101 = -3963351;

    t101 = (x417*((x418/x419)>x420));

    if (t101 != -43713) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x421 = -1LL;
	static int8_t x422 = -34;
	volatile int16_t x423 = INT16_MIN;
	volatile int64_t t102 = 17771584990880LL;

    t102 = (x421*((x422/x423)>x424));

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x425 = -1LL;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = UINT32_MAX;
	int64_t x428 = INT64_MIN;

    t103 = (x425*((x426/x427)>x428));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x429 = -12430131872028352LL;
	volatile uint64_t x430 = 1035981715LLU;
	uint16_t x431 = 5U;
	volatile int64_t t104 = -937905012LL;

    t104 = (x429*((x430/x431)>x432));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x433 = INT8_MAX;
	volatile int32_t x434 = INT32_MAX;
	static int32_t x435 = INT32_MIN;
	int16_t x436 = INT16_MIN;
	int32_t t105 = -4400;

    t105 = (x433*((x434/x435)>x436));

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x438 = 881127942LLU;
	uint8_t x440 = UINT8_MAX;
	int32_t t106 = -1;

    t106 = (x437*((x438/x439)>x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x442 = INT32_MIN;
	volatile int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MAX;

    t107 = (x441*((x442/x443)>x444));

    if (t107 != -11) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = -23980LL;
	int8_t x446 = -1;
	uint16_t x447 = 1489U;
	static int16_t x448 = -1;
	static int64_t t108 = 188188321LL;

    t108 = (x445*((x446/x447)>x448));

    if (t108 != -23980LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x449 = -13563;
	uint16_t x450 = 193U;
	static uint8_t x452 = UINT8_MAX;
	static volatile int32_t t109 = -31;

    t109 = (x449*((x450/x451)>x452));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x453 = UINT64_MAX;
	int8_t x454 = INT8_MAX;
	static int16_t x455 = INT16_MIN;
	int64_t x456 = INT64_MAX;
	volatile uint64_t t110 = 748000LLU;

    t110 = (x453*((x454/x455)>x456));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x457 = UINT16_MAX;
	int8_t x459 = -1;
	int64_t x460 = INT64_MAX;
	static volatile int32_t t111 = 15971;

    t111 = (x457*((x458/x459)>x460));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x461 = 1539943095LL;
	volatile int16_t x462 = -1;
	int8_t x463 = -5;
	int32_t x464 = 135758282;
	int64_t t112 = -161LL;

    t112 = (x461*((x462/x463)>x464));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x467 = -1;
	int8_t x468 = INT8_MIN;
	int32_t t113 = -80;

    t113 = (x465*((x466/x467)>x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x469 = 13U;
	uint8_t x470 = 2U;
	int8_t x471 = INT8_MIN;
	int32_t t114 = 21369;

    t114 = (x469*((x470/x471)>x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x473 = INT32_MAX;
	static volatile int8_t x474 = INT8_MIN;
	static int8_t x475 = -2;
	static int32_t x476 = INT32_MAX;
	volatile int32_t t115 = 26;

    t115 = (x473*((x474/x475)>x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x479 = INT32_MIN;

    t116 = (x477*((x478/x479)>x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x483 = INT8_MAX;

    t117 = (x481*((x482/x483)>x484));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x485 = 4149U;
	volatile uint16_t x486 = 4237U;
	volatile int16_t x487 = INT16_MIN;
	int64_t x488 = 227909752669433902LL;
	volatile int32_t t118 = -248;

    t118 = (x485*((x486/x487)>x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x494 = 23367077;
	uint32_t x495 = 14838U;
	uint16_t x496 = 96U;
	int32_t t119 = -590720892;

    t119 = (x493*((x494/x495)>x496));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x497 = 3U;
	int16_t x499 = 1;
	int32_t x500 = 46610268;
	volatile int32_t t120 = 5772059;

    t120 = (x497*((x498/x499)>x500));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x501 = 5U;
	int16_t x502 = INT16_MIN;
	volatile uint16_t x503 = 89U;

    t121 = (x501*((x502/x503)>x504));

    if (t121 != 5U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x505 = 0U;
	static int64_t x506 = INT64_MIN;
	int64_t x507 = INT64_MIN;
	volatile int32_t t122 = 4739;

    t122 = (x505*((x506/x507)>x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = -1859;
	static int8_t x510 = 50;
	int32_t x511 = 525382;
	static volatile int32_t x512 = -33226;
	static volatile int32_t t123 = 449;

    t123 = (x509*((x510/x511)>x512));

    if (t123 != -1859) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x513 = INT64_MIN;
	volatile uint32_t x514 = 75814U;
	int32_t x515 = INT32_MIN;
	static volatile int64_t t124 = -9058LL;

    t124 = (x513*((x514/x515)>x516));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = INT32_MIN;
	uint8_t x518 = UINT8_MAX;
	int16_t x520 = INT16_MIN;
	int32_t t125 = INT32_MIN;

    t125 = (x517*((x518/x519)>x520));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x521 = -1LL;
	int32_t x523 = INT32_MIN;
	int8_t x524 = INT8_MIN;

    t126 = (x521*((x522/x523)>x524));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x525 = 5360;
	int64_t x526 = INT64_MAX;
	int32_t x527 = 383831119;
	volatile int16_t x528 = 778;
	int32_t t127 = 341;

    t127 = (x525*((x526/x527)>x528));

    if (t127 != 5360) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x529 = -32498191257LL;
	int16_t x530 = 5;
	uint8_t x532 = UINT8_MAX;
	volatile int64_t t128 = 27600LL;

    t128 = (x529*((x530/x531)>x532));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x534 = UINT64_MAX;
	int64_t x535 = INT64_MIN;
	int8_t x536 = 38;
	int64_t t129 = 204189668LL;

    t129 = (x533*((x534/x535)>x536));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x537 = INT64_MIN;
	uint8_t x539 = 2U;
	static volatile int64_t t130 = INT64_MIN;

    t130 = (x537*((x538/x539)>x540));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x541 = INT16_MAX;
	uint64_t x543 = 524343637LLU;
	volatile int8_t x544 = INT8_MAX;
	volatile int32_t t131 = -2120;

    t131 = (x541*((x542/x543)>x544));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x546 = INT16_MAX;
	int8_t x547 = INT8_MAX;
	uint32_t x548 = 24U;
	volatile int32_t t132 = -1258966;

    t132 = (x545*((x546/x547)>x548));

    if (t132 != 30) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x550 = UINT32_MAX;
	int32_t x551 = INT32_MIN;
	volatile int16_t x552 = INT16_MIN;
	volatile int32_t t133 = 1760;

    t133 = (x549*((x550/x551)>x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x554 = 5LLU;
	volatile int32_t t134 = 20;

    t134 = (x553*((x554/x555)>x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x557 = -1976999791901LL;
	static int64_t x558 = INT64_MIN;
	volatile int8_t x559 = INT8_MIN;
	static int64_t x560 = INT64_MIN;
	volatile int64_t t135 = -1428239LL;

    t135 = (x557*((x558/x559)>x560));

    if (t135 != -1976999791901LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x561 = INT64_MIN;
	static uint64_t x562 = UINT64_MAX;
	uint16_t x563 = 21U;
	int32_t x564 = INT32_MIN;
	volatile int64_t t136 = -6LL;

    t136 = (x561*((x562/x563)>x564));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x565 = UINT32_MAX;
	int32_t x566 = -1;

    t137 = (x565*((x566/x567)>x568));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x569 = -143838803;
	int16_t x570 = INT16_MAX;
	volatile int32_t x571 = -1;
	volatile int16_t x572 = -1;
	volatile int32_t t138 = -84404792;

    t138 = (x569*((x570/x571)>x572));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x573 = UINT32_MAX;
	int64_t x574 = INT64_MIN;
	int16_t x575 = -921;
	volatile uint16_t x576 = UINT16_MAX;

    t139 = (x573*((x574/x575)>x576));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = -1;
	int32_t x578 = -12;
	int16_t x579 = -1;
	static volatile int16_t x580 = INT16_MIN;
	int32_t t140 = 2620;

    t140 = (x577*((x578/x579)>x580));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x582 = INT16_MIN;
	volatile int64_t x583 = INT64_MIN;
	int8_t x584 = INT8_MIN;
	static volatile int32_t t141 = -211640;

    t141 = (x581*((x582/x583)>x584));

    if (t141 != 59) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x585 = 5;
	volatile int8_t x587 = INT8_MIN;
	int16_t x588 = INT16_MIN;

    t142 = (x585*((x586/x587)>x588));

    if (t142 != 5) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x589 = 8726;
	volatile int8_t x590 = INT8_MAX;
	uint64_t x591 = 31176411934LLU;
	static uint16_t x592 = 3287U;
	volatile int32_t t143 = 2966;

    t143 = (x589*((x590/x591)>x592));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x593 = INT32_MIN;
	static int64_t x594 = INT64_MIN;
	uint8_t x595 = 2U;
	int8_t x596 = 55;

    t144 = (x593*((x594/x595)>x596));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x597 = 2;
	int16_t x598 = -1318;
	volatile int16_t x599 = INT16_MAX;
	int8_t x600 = INT8_MIN;

    t145 = (x597*((x598/x599)>x600));

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x601 = 52;
	static volatile int64_t x602 = -3LL;
	volatile int64_t x603 = -41LL;
	int32_t t146 = 3;

    t146 = (x601*((x602/x603)>x604));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x606 = 1;
	uint64_t x607 = UINT64_MAX;
	uint16_t x608 = 7U;
	volatile int32_t t147 = -90437720;

    t147 = (x605*((x606/x607)>x608));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x610 = -1;
	int32_t x612 = 32;
	int64_t t148 = 1261323LL;

    t148 = (x609*((x610/x611)>x612));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x613 = INT64_MIN;
	int16_t x615 = INT16_MIN;
	volatile int64_t t149 = INT64_MIN;

    t149 = (x613*((x614/x615)>x616));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x617 = 5045U;
	int8_t x619 = INT8_MAX;
	int16_t x620 = 670;
	static int32_t t150 = 120;

    t150 = (x617*((x618/x619)>x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x621 = 6U;
	volatile int16_t x622 = INT16_MIN;
	static uint32_t x624 = 1U;

    t151 = (x621*((x622/x623)>x624));

    if (t151 != 6U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x625 = INT8_MIN;
	uint64_t x626 = UINT64_MAX;
	uint8_t x627 = 7U;
	uint16_t x628 = 2655U;
	int32_t t152 = -30381;

    t152 = (x625*((x626/x627)>x628));

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x629 = INT32_MAX;
	static int32_t x630 = INT32_MIN;
	static uint64_t x631 = UINT64_MAX;
	int64_t x632 = -1LL;
	int32_t t153 = -2810424;

    t153 = (x629*((x630/x631)>x632));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x633 = 0;
	int16_t x634 = 9;
	volatile int16_t x635 = -1;

    t154 = (x633*((x634/x635)>x636));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x637 = 1;
	int16_t x638 = INT16_MAX;
	int64_t x639 = INT64_MIN;
	uint16_t x640 = 47U;
	volatile int32_t t155 = -1;

    t155 = (x637*((x638/x639)>x640));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x641 = INT32_MIN;
	int8_t x642 = 42;
	volatile int64_t x643 = INT64_MAX;
	int64_t x644 = INT64_MIN;
	int32_t t156 = INT32_MIN;

    t156 = (x641*((x642/x643)>x644));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x646 = 237514885U;
	int8_t x647 = INT8_MIN;
	uint64_t x648 = UINT64_MAX;
	volatile int32_t t157 = 2736;

    t157 = (x645*((x646/x647)>x648));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x649 = -1432857116324697LL;
	int16_t x651 = 26;
	static int32_t x652 = INT32_MIN;
	volatile int64_t t158 = 25865LL;

    t158 = (x649*((x650/x651)>x652));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x657 = 10720LL;
	volatile uint8_t x658 = UINT8_MAX;
	uint64_t x659 = 32LLU;
	int64_t t159 = 4378LL;

    t159 = (x657*((x658/x659)>x660));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x661 = 0LL;
	volatile int64_t x662 = 5552790227488953LL;
	int64_t x663 = INT64_MIN;
	volatile int8_t x664 = -1;

    t160 = (x661*((x662/x663)>x664));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x666 = -55427093028LL;
	volatile uint64_t x667 = 1373069LLU;
	int64_t x668 = 130663709272553LL;
	int32_t t161 = -3157;

    t161 = (x665*((x666/x667)>x668));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x669 = UINT16_MAX;
	int8_t x670 = INT8_MAX;
	volatile int32_t x671 = -325578019;
	int16_t x672 = 0;

    t162 = (x669*((x670/x671)>x672));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x673 = 8;
	volatile int64_t x674 = INT64_MAX;
	volatile uint32_t x675 = UINT32_MAX;
	int32_t t163 = -278;

    t163 = (x673*((x674/x675)>x676));

    if (t163 != 8) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x677 = INT32_MIN;
	volatile int16_t x679 = -34;
	static int32_t t164 = -794695917;

    t164 = (x677*((x678/x679)>x680));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x681 = UINT64_MAX;
	static uint16_t x683 = 18880U;
	uint32_t x684 = 2419U;
	volatile uint64_t t165 = UINT64_MAX;

    t165 = (x681*((x682/x683)>x684));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x685 = INT32_MIN;
	int64_t x686 = INT64_MIN;
	int32_t x687 = INT32_MAX;
	static volatile int32_t t166 = 11699807;

    t166 = (x685*((x686/x687)>x688));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x690 = 4607043452110758925LLU;
	uint64_t x691 = 1527904574062LLU;
	static int64_t x692 = -1LL;
	volatile uint32_t t167 = 13U;

    t167 = (x689*((x690/x691)>x692));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x693 = 0U;
	uint16_t x694 = 0U;
	volatile uint32_t x695 = 10U;
	int64_t x696 = INT64_MIN;
	int32_t t168 = -1683;

    t168 = (x693*((x694/x695)>x696));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x697 = -739LL;
	int64_t x698 = INT64_MIN;
	volatile int16_t x699 = INT16_MAX;
	uint8_t x700 = UINT8_MAX;
	int64_t t169 = 1LL;

    t169 = (x697*((x698/x699)>x700));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = -1;
	uint32_t x702 = 29265634U;
	int32_t x703 = 1079717;
	volatile uint32_t x704 = UINT32_MAX;
	volatile int32_t t170 = 115981126;

    t170 = (x701*((x702/x703)>x704));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = -7;
	volatile int16_t x706 = INT16_MAX;
	volatile int8_t x707 = -1;
	volatile int32_t x708 = INT32_MAX;

    t171 = (x705*((x706/x707)>x708));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x709 = INT16_MIN;
	static int8_t x710 = -4;
	int8_t x711 = INT8_MIN;
	volatile int32_t t172 = -464953315;

    t172 = (x709*((x710/x711)>x712));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x713 = INT64_MAX;
	int64_t x714 = INT64_MAX;
	int64_t x715 = 113737645870LL;
	uint64_t x716 = 108310974780582LLU;
	volatile int64_t t173 = -30161078295233722LL;

    t173 = (x713*((x714/x715)>x716));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x717 = -1;
	int32_t x718 = -1;
	uint64_t x720 = UINT64_MAX;
	volatile int32_t t174 = 2195;

    t174 = (x717*((x718/x719)>x720));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x721 = 3U;
	static int64_t x722 = 593705269LL;
	int64_t x723 = INT64_MAX;
	int32_t x724 = INT32_MIN;
	volatile uint32_t t175 = 93U;

    t175 = (x721*((x722/x723)>x724));

    if (t175 != 3U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x725 = 0;
	static int16_t x726 = INT16_MIN;
	volatile uint64_t x728 = UINT64_MAX;
	volatile int32_t t176 = 10;

    t176 = (x725*((x726/x727)>x728));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x729 = 13;
	volatile int16_t x730 = 0;
	static int64_t x731 = INT64_MIN;
	int16_t x732 = -1;
	int32_t t177 = 737;

    t177 = (x729*((x730/x731)>x732));

    if (t177 != 13) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x734 = 129102U;
	int32_t x735 = INT32_MIN;
	int8_t x736 = INT8_MIN;
	volatile int32_t t178 = 0;

    t178 = (x733*((x734/x735)>x736));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x739 = UINT64_MAX;
	uint8_t x740 = UINT8_MAX;
	int32_t t179 = -679;

    t179 = (x737*((x738/x739)>x740));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x742 = 171U;
	int16_t x743 = INT16_MIN;
	int32_t x744 = 24543;
	int32_t t180 = -35512;

    t180 = (x741*((x742/x743)>x744));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x745 = 38491514U;
	uint32_t x746 = UINT32_MAX;
	int32_t x747 = -21;
	int8_t x748 = INT8_MIN;
	volatile uint32_t t181 = 2000804003U;

    t181 = (x745*((x746/x747)>x748));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x749 = -20;
	int16_t x750 = -516;
	uint32_t x751 = UINT32_MAX;
	volatile int32_t t182 = 169110;

    t182 = (x749*((x750/x751)>x752));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x753 = UINT32_MAX;
	static uint64_t x755 = UINT64_MAX;
	static volatile uint8_t x756 = UINT8_MAX;
	static uint32_t t183 = 70U;

    t183 = (x753*((x754/x755)>x756));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x757 = INT64_MAX;
	static int32_t x759 = 1;
	int8_t x760 = INT8_MAX;
	volatile int64_t t184 = 1161160098LL;

    t184 = (x757*((x758/x759)>x760));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x761 = INT16_MIN;
	volatile uint8_t x762 = 49U;
	volatile uint32_t x763 = UINT32_MAX;
	int16_t x764 = INT16_MIN;

    t185 = (x761*((x762/x763)>x764));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x765 = INT8_MIN;
	uint32_t x768 = UINT32_MAX;
	volatile int32_t t186 = 41;

    t186 = (x765*((x766/x767)>x768));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x769 = INT32_MIN;
	volatile int16_t x770 = INT16_MAX;
	int16_t x771 = INT16_MAX;
	uint16_t x772 = 404U;
	static int32_t t187 = 1;

    t187 = (x769*((x770/x771)>x772));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x773 = 139708474U;
	static int16_t x774 = 1182;
	int64_t x775 = -1LL;
	volatile uint32_t t188 = 36U;

    t188 = (x773*((x774/x775)>x776));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x777 = INT16_MIN;
	int8_t x778 = -1;
	int64_t x779 = -25414092LL;

    t189 = (x777*((x778/x779)>x780));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x782 = 10485888632LL;
	int8_t x783 = INT8_MIN;
	volatile uint32_t t190 = 81527U;

    t190 = (x781*((x782/x783)>x784));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x785 = UINT8_MAX;
	int32_t x787 = INT32_MIN;
	static int32_t t191 = 920;

    t191 = (x785*((x786/x787)>x788));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x789 = 8022724938163LL;
	volatile uint32_t x790 = 62U;
	int32_t x791 = INT32_MAX;
	int16_t x792 = -1;

    t192 = (x789*((x790/x791)>x792));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x794 = 22U;
	int32_t x795 = -26;
	static int8_t x796 = -54;
	int32_t t193 = 800625;

    t193 = (x793*((x794/x795)>x796));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x797 = 2451612LLU;
	int32_t x798 = -755698;
	uint64_t x799 = 139323642125685242LLU;
	int8_t x800 = INT8_MAX;
	uint64_t t194 = 169760245LLU;

    t194 = (x797*((x798/x799)>x800));

    if (t194 != 2451612LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x803 = 2525;
	static int64_t x804 = 69368LL;
	static int32_t t195 = -109192;

    t195 = (x801*((x802/x803)>x804));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x805 = -1;
	int32_t x806 = INT32_MIN;
	int32_t x807 = -63;
	volatile int32_t t196 = -108;

    t196 = (x805*((x806/x807)>x808));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x809 = INT64_MAX;
	uint64_t x810 = UINT64_MAX;
	uint64_t x811 = 79015403144504LLU;
	static int16_t x812 = 863;
	static volatile int64_t t197 = INT64_MAX;

    t197 = (x809*((x810/x811)>x812));

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x813 = INT64_MIN;
	uint16_t x814 = 2385U;
	int16_t x816 = -1;
	volatile int64_t t198 = 139143976910302856LL;

    t198 = (x813*((x814/x815)>x816));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x817 = 628104737LLU;
	volatile uint16_t x818 = 28U;
	volatile uint32_t x819 = 99U;
	uint32_t x820 = UINT32_MAX;
	volatile uint64_t t199 = 29LLU;

    t199 = (x817*((x818/x819)>x820));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

