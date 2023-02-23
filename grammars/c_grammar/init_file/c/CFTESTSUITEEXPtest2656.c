
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

int32_t x8 = INT32_MAX;
volatile int16_t x11 = INT16_MAX;
int8_t x16 = INT8_MAX;
static int8_t x18 = INT8_MIN;
volatile int16_t x24 = -199;
uint64_t x26 = 26388LLU;
int64_t x33 = INT64_MIN;
volatile uint32_t x39 = 32523U;
uint8_t x40 = 84U;
int16_t x43 = 11;
int32_t t10 = 0;
volatile uint8_t x46 = UINT8_MAX;
int32_t t11 = -88635152;
volatile int16_t x50 = 60;
uint64_t x55 = 11308LLU;
static int32_t t13 = 202258152;
int8_t x58 = -1;
int64_t x64 = -4893230609260LL;
uint64_t x65 = 14832778219740LLU;
static int32_t x67 = INT32_MAX;
int16_t x70 = 5;
int64_t x73 = INT64_MIN;
int32_t t18 = 97787;
int32_t t19 = 38;
int64_t x82 = INT64_MIN;
volatile int32_t t20 = -498998101;
uint16_t x89 = UINT16_MAX;
static int32_t x91 = -274964634;
volatile int8_t x93 = -1;
static uint32_t x94 = 36U;
int64_t x99 = -68574127007060826LL;
int32_t t24 = 257880433;
static int32_t t25 = -301192;
int64_t x105 = -1LL;
int32_t x106 = INT32_MIN;
volatile int8_t x108 = 30;
int8_t x111 = 17;
volatile int32_t t31 = 511631;
static uint16_t x134 = UINT16_MAX;
int16_t x138 = INT16_MIN;
volatile uint64_t x140 = UINT64_MAX;
int32_t x143 = INT32_MIN;
int32_t x146 = -12769;
volatile uint64_t x154 = UINT64_MAX;
uint8_t x156 = UINT8_MAX;
uint8_t x161 = 30U;
uint16_t x164 = 698U;
uint64_t x166 = 5501199LLU;
uint32_t x174 = UINT32_MAX;
int32_t x183 = -1;
int32_t x187 = -880295835;
volatile uint64_t x189 = 36LLU;
volatile int32_t x190 = -6572;
int64_t x199 = INT64_MAX;
static volatile int64_t x205 = -14190539LL;
static uint64_t x206 = 16564391701LLU;
int32_t x214 = INT32_MIN;
static int8_t x217 = INT8_MIN;
int8_t x218 = INT8_MIN;
volatile int32_t t54 = -206268764;
int64_t x222 = -6LL;
int8_t x225 = 0;
static volatile int32_t t56 = 0;
static uint32_t x231 = UINT32_MAX;
uint16_t x232 = 13U;
static volatile int32_t t57 = 3585;
static uint64_t x235 = 2777696LLU;
int32_t t59 = -34678376;
uint8_t x245 = 21U;
uint8_t x247 = 4U;
static volatile int32_t t63 = 0;
volatile int32_t t65 = 3378;
int16_t x266 = INT16_MIN;
int16_t x267 = 0;
static int32_t t68 = 802079;
int8_t x277 = INT8_MIN;
int16_t x285 = -103;
static int32_t t71 = -129887;
uint16_t x290 = 478U;
int32_t t72 = -118723;
int8_t x296 = INT8_MIN;
int16_t x301 = 1950;
uint16_t x302 = 2800U;
int32_t x303 = -3;
volatile int32_t t75 = 420981109;
int16_t x306 = INT16_MAX;
static int8_t x315 = INT8_MIN;
int32_t x323 = -69;
int16_t x332 = INT16_MIN;
int16_t x334 = INT16_MIN;
static volatile uint64_t x342 = 90613LLU;
int8_t x347 = INT8_MIN;
int32_t t86 = 10886;
volatile int32_t t87 = -158631973;
int8_t x361 = -1;
uint16_t x362 = 480U;
uint8_t x366 = 3U;
int32_t x368 = -374298;
uint8_t x369 = 0U;
uint64_t x375 = 0LLU;
static int16_t x377 = INT16_MIN;
uint8_t x380 = UINT8_MAX;
volatile int8_t x389 = INT8_MIN;
volatile int32_t t97 = 835922959;
volatile uint32_t x398 = UINT32_MAX;
uint16_t x400 = UINT16_MAX;
volatile int32_t x408 = -6;
static volatile uint16_t x415 = UINT16_MAX;
uint32_t x417 = 3U;
uint8_t x418 = 67U;
uint8_t x421 = UINT8_MAX;
int16_t x433 = INT16_MAX;
volatile int16_t x438 = 13754;
int64_t x440 = 0LL;
int32_t x447 = 0;
int32_t x450 = -714511;
volatile int32_t t112 = -23;
int32_t x457 = INT32_MIN;
static uint8_t x459 = 113U;
uint32_t x461 = UINT32_MAX;
volatile uint16_t x467 = UINT16_MAX;
volatile uint32_t x468 = UINT32_MAX;
uint16_t x471 = 400U;
volatile int32_t t117 = 8;
volatile int32_t x474 = -2001544;
int16_t x480 = INT16_MIN;
int32_t x486 = INT32_MAX;
static volatile int32_t t121 = 70698628;
uint32_t x493 = UINT32_MAX;
uint32_t x499 = 398412U;
int8_t x506 = -25;
static int32_t x510 = 22;
volatile int8_t x519 = 41;
int32_t t129 = 43150;
uint16_t x521 = UINT16_MAX;
static int16_t x522 = -1;
uint8_t x527 = UINT8_MAX;
int8_t x530 = -1;
volatile int32_t t132 = 1777979;
int8_t x544 = 11;
static int32_t t135 = 20;
uint16_t x547 = 0U;
static int64_t x553 = INT64_MIN;
uint16_t x556 = 6U;
volatile int32_t t141 = 2;
int32_t t143 = 663;
int64_t x578 = INT64_MAX;
int32_t t145 = -14208;
int8_t x590 = -54;
int32_t t147 = 453181;
volatile int32_t t148 = -1;
uint64_t x598 = 234953LLU;
int32_t x605 = -1;
static int64_t x608 = INT64_MIN;
uint16_t x610 = 25U;
uint64_t x617 = UINT64_MAX;
volatile int8_t x621 = INT8_MIN;
volatile uint64_t x623 = UINT64_MAX;
volatile int32_t t155 = -128917547;
int32_t t156 = -113;
int32_t t157 = 125259;
volatile int16_t x634 = 894;
uint64_t x635 = 184883417LLU;
static int64_t x636 = 125LL;
static int32_t t158 = 2;
int8_t x644 = 5;
volatile int64_t x658 = INT64_MIN;
volatile int32_t t165 = -2156908;
volatile uint64_t x666 = UINT64_MAX;
static int8_t x668 = 2;
int8_t x676 = 1;
int8_t x685 = INT8_MIN;
static uint64_t x696 = UINT64_MAX;
int8_t x699 = INT8_MIN;
uint64_t x708 = 388488LLU;
volatile int32_t t177 = 1603;
volatile int32_t x715 = INT32_MAX;
int32_t t178 = -1543;
uint32_t x717 = 15U;
static int64_t x720 = INT64_MIN;
int32_t x729 = -1;
volatile int32_t t182 = -141600;
int32_t x733 = -1515;
uint8_t x734 = 2U;
static int32_t x736 = -1;
volatile int32_t x737 = INT32_MAX;
uint64_t x738 = 1532367644400024751LLU;
volatile int32_t t184 = 2603;
volatile int32_t t185 = -134;
int64_t x749 = 253890471953LL;
int64_t x753 = INT64_MIN;
int64_t x754 = INT64_MAX;
int32_t x755 = 663793;
uint32_t x760 = 1655234726U;
static int32_t t190 = -448526328;
int64_t x765 = -14370007052536604LL;
static int8_t x766 = -4;
uint64_t x767 = 6648509228532LLU;
int32_t x769 = 1;
int8_t x781 = 55;
volatile int32_t t195 = -5236;
uint16_t x785 = UINT16_MAX;
int64_t x788 = -344LL;
int64_t x797 = -1LL;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	int64_t x3 = -1LL;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = -1;

    t0 = (x1<=((x2^x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	int32_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = -923;

    t1 = (x5<=((x6^x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 61637U;
	static volatile uint8_t x10 = 11U;
	int64_t x12 = -1LL;
	volatile int32_t t2 = 758;

    t2 = (x9<=((x10^x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	static int16_t x14 = INT16_MIN;
	static int16_t x15 = INT16_MIN;
	int32_t t3 = 12265144;

    t3 = (x13<=((x14^x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int32_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = 14138228;

    t4 = (x17<=((x18^x19)==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = 9414;
	uint16_t x22 = UINT16_MAX;
	int8_t x23 = INT8_MIN;
	volatile int32_t t5 = -5057;

    t5 = (x21<=((x22^x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 204027281;
	uint16_t x27 = 1546U;
	uint16_t x28 = 5U;
	static int32_t t6 = -11;

    t6 = (x25<=((x26^x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 49494331U;
	volatile uint8_t x30 = UINT8_MAX;
	int32_t x31 = -13;
	int32_t x32 = -1;
	volatile int32_t t7 = 99103743;

    t7 = (x29<=((x30^x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x34 = 15U;
	volatile int16_t x35 = -1;
	int16_t x36 = -1;
	volatile int32_t t8 = 33;

    t8 = (x33<=((x34^x35)==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 353956247500814811LLU;
	volatile int64_t x38 = INT64_MIN;
	static int32_t t9 = -1686975;

    t9 = (x37<=((x38^x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	uint64_t x42 = 532908606LLU;
	uint64_t x44 = 908319199512521LLU;

    t10 = (x41<=((x42^x43)==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 250;
	volatile uint16_t x47 = 14321U;
	volatile int8_t x48 = INT8_MAX;

    t11 = (x45<=((x46^x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -116019164861738669LL;
	int64_t x51 = -1LL;
	volatile int16_t x52 = INT16_MIN;
	static int32_t t12 = 180874;

    t12 = (x49<=((x50^x51)==x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int16_t x54 = -1;
	uint16_t x56 = 180U;

    t13 = (x53<=((x54^x55)==x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int64_t x59 = -1LL;
	int64_t x60 = INT64_MIN;
	int32_t t14 = -13;

    t14 = (x57<=((x58^x59)==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	static int32_t x62 = INT32_MIN;
	volatile int32_t x63 = INT32_MIN;
	int32_t t15 = -6;

    t15 = (x61<=((x62^x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -5392;

    t16 = (x65<=((x66^x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 5886U;
	uint32_t x71 = 53113034U;
	int16_t x72 = INT16_MAX;
	int32_t t17 = 7;

    t17 = (x69<=((x70^x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x74 = 44330970018883783LL;
	uint64_t x75 = 800292505LLU;
	int16_t x76 = -70;

    t18 = (x73<=((x74^x75)==x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 14598239U;
	static volatile int16_t x78 = INT16_MIN;
	volatile int8_t x79 = -1;
	static int32_t x80 = -1;

    t19 = (x77<=((x78^x79)==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 0U;
	volatile uint16_t x83 = 12512U;
	static volatile int8_t x84 = INT8_MIN;

    t20 = (x81<=((x82^x83)==x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = 10;
	uint64_t x86 = 2332402551541625509LLU;
	uint64_t x87 = 54961LLU;
	int64_t x88 = INT64_MIN;
	int32_t t21 = -2882;

    t21 = (x85<=((x86^x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x90 = -1;
	volatile uint64_t x92 = UINT64_MAX;
	int32_t t22 = 1843;

    t22 = (x89<=((x90^x91)==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x95 = -1;
	int32_t x96 = 1618261;
	int32_t t23 = -320194;

    t23 = (x93<=((x94^x95)==x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 25LLU;
	int64_t x98 = INT64_MIN;
	uint64_t x100 = UINT64_MAX;

    t24 = (x97<=((x98^x99)==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	uint8_t x102 = 1U;
	int8_t x103 = INT8_MAX;
	volatile uint16_t x104 = UINT16_MAX;

    t25 = (x101<=((x102^x103)==x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x107 = 4U;
	int32_t t26 = -68;

    t26 = (x105<=((x106^x107)==x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 2U;
	int64_t x110 = INT64_MIN;
	int16_t x112 = -1;
	volatile int32_t t27 = 1033685505;

    t27 = (x109<=((x110^x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MAX;
	volatile uint16_t x114 = 1012U;
	volatile int16_t x115 = 1;
	uint8_t x116 = 0U;
	volatile int32_t t28 = 4471;

    t28 = (x113<=((x114^x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 97834058393065024LLU;
	volatile uint8_t x118 = 3U;
	int32_t x119 = INT32_MIN;
	static int64_t x120 = INT64_MIN;
	static int32_t t29 = 11;

    t29 = (x117<=((x118^x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = -1;
	int8_t x122 = 59;
	static volatile int16_t x123 = INT16_MAX;
	static int64_t x124 = -1LL;
	static volatile int32_t t30 = -422070542;

    t30 = (x121<=((x122^x123)==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x125 = 3U;
	int32_t x126 = INT32_MIN;
	volatile int64_t x127 = -995973874LL;
	volatile int8_t x128 = INT8_MAX;

    t31 = (x125<=((x126^x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	int16_t x130 = -1;
	volatile int32_t x131 = INT32_MIN;
	volatile uint8_t x132 = UINT8_MAX;
	int32_t t32 = 349004;

    t32 = (x129<=((x130^x131)==x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	int64_t x135 = -2008358822211025054LL;
	uint16_t x136 = 1287U;
	volatile int32_t t33 = -192354376;

    t33 = (x133<=((x134^x135)==x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = INT16_MIN;
	volatile int8_t x139 = -1;
	int32_t t34 = -31;

    t34 = (x137<=((x138^x139)==x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	uint64_t x144 = 4277601360LLU;
	static int32_t t35 = -1970720;

    t35 = (x141<=((x142^x143)==x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x145 = UINT32_MAX;
	int64_t x147 = INT64_MAX;
	uint32_t x148 = UINT32_MAX;
	int32_t t36 = -828;

    t36 = (x145<=((x146^x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 252U;
	int8_t x150 = -56;
	static int32_t x151 = INT32_MAX;
	uint64_t x152 = 3881LLU;
	static volatile int32_t t37 = 1405056;

    t37 = (x149<=((x150^x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -1;
	int16_t x155 = 39;
	volatile int32_t t38 = -1409944;

    t38 = (x153<=((x154^x155)==x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MAX;
	volatile int64_t x159 = INT64_MAX;
	volatile uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = -2715;

    t39 = (x157<=((x158^x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x162 = -690;
	int32_t x163 = INT32_MIN;
	volatile int32_t t40 = 4371102;

    t40 = (x161<=((x162^x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 0;
	volatile uint32_t x167 = 42382U;
	static int32_t x168 = INT32_MIN;
	int32_t t41 = -183;

    t41 = (x165<=((x166^x167)==x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -1;
	int16_t x170 = INT16_MAX;
	int64_t x171 = 214956784LL;
	static volatile int32_t x172 = INT32_MAX;
	volatile int32_t t42 = -117;

    t42 = (x169<=((x170^x171)==x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = -4518;
	int32_t x175 = 1;
	volatile int64_t x176 = INT64_MAX;
	volatile int32_t t43 = 160;

    t43 = (x173<=((x174^x175)==x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = 386786;
	volatile uint32_t x178 = 7U;
	int16_t x179 = INT16_MIN;
	volatile int64_t x180 = -1LL;
	static int32_t t44 = 325;

    t44 = (x177<=((x178^x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 11392150462696446LLU;
	int8_t x182 = -26;
	static uint8_t x184 = 3U;
	int32_t t45 = 17170519;

    t45 = (x181<=((x182^x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = INT64_MAX;
	volatile int8_t x186 = INT8_MIN;
	uint32_t x188 = UINT32_MAX;
	volatile int32_t t46 = -13382;

    t46 = (x185<=((x186^x187)==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x191 = UINT32_MAX;
	volatile int64_t x192 = -129368032032482564LL;
	volatile int32_t t47 = 33929715;

    t47 = (x189<=((x190^x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 124972881LLU;
	int64_t x194 = -1LL;
	int64_t x195 = INT64_MAX;
	volatile int64_t x196 = -1262340LL;
	int32_t t48 = 28;

    t48 = (x193<=((x194^x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 0U;
	static int32_t x198 = INT32_MAX;
	uint32_t x200 = 499U;
	volatile int32_t t49 = -46;

    t49 = (x197<=((x198^x199)==x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	int64_t x202 = INT64_MIN;
	int8_t x203 = -1;
	volatile uint64_t x204 = 2424538378LLU;
	volatile int32_t t50 = 322;

    t50 = (x201<=((x202^x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x207 = 641169294189416892LL;
	volatile int8_t x208 = INT8_MIN;
	int32_t t51 = 874923319;

    t51 = (x205<=((x206^x207)==x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	static volatile int16_t x210 = 0;
	volatile int64_t x211 = INT64_MAX;
	static volatile uint16_t x212 = 1U;
	static int32_t t52 = -4280043;

    t52 = (x209<=((x210^x211)==x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = INT32_MIN;
	uint32_t x215 = UINT32_MAX;
	uint16_t x216 = 3358U;
	static int32_t t53 = 31827898;

    t53 = (x213<=((x214^x215)==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x219 = 13535U;
	int16_t x220 = INT16_MIN;

    t54 = (x217<=((x218^x219)==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -721736619971103LL;
	uint8_t x223 = 6U;
	int8_t x224 = -1;
	int32_t t55 = -1;

    t55 = (x221<=((x222^x223)==x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x226 = INT16_MIN;
	int32_t x227 = -547964843;
	int16_t x228 = INT16_MIN;

    t56 = (x225<=((x226^x227)==x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x229 = 1U;
	int64_t x230 = INT64_MIN;

    t57 = (x229<=((x230^x231)==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint8_t x233 = 28U;
	uint8_t x234 = 3U;
	uint16_t x236 = 71U;
	int32_t t58 = 913402;

    t58 = (x233<=((x234^x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 394U;
	int64_t x238 = 2296172732LL;
	static volatile int64_t x239 = -118535318281018201LL;
	uint64_t x240 = UINT64_MAX;

    t59 = (x237<=((x238^x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 3LLU;
	static int32_t x242 = 3;
	int32_t x243 = -1;
	static int64_t x244 = -88LL;
	static int32_t t60 = 4037218;

    t60 = (x241<=((x242^x243)==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = -3807;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 18100082;

    t61 = (x245<=((x246^x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 1127U;
	int8_t x250 = 32;
	static int32_t x251 = -25305808;
	uint64_t x252 = 242343LLU;
	volatile int32_t t62 = -78;

    t62 = (x249<=((x250^x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	int64_t x255 = INT64_MAX;
	static int32_t x256 = 22044494;

    t63 = (x253<=((x254^x255)==x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = INT64_MIN;
	static int16_t x258 = INT16_MIN;
	static uint8_t x259 = 7U;
	int8_t x260 = -21;
	volatile int32_t t64 = 43448898;

    t64 = (x257<=((x258^x259)==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 700212LLU;
	volatile int64_t x262 = -1LL;
	volatile int16_t x263 = INT16_MIN;
	static int32_t x264 = INT32_MAX;

    t65 = (x261<=((x262^x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 628731155;

    t66 = (x265<=((x266^x267)==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	static uint8_t x271 = UINT8_MAX;
	int32_t x272 = INT32_MIN;
	int32_t t67 = -1000144257;

    t67 = (x269<=((x270^x271)==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	int32_t x274 = -1831216;
	int16_t x275 = INT16_MAX;
	uint8_t x276 = 87U;

    t68 = (x273<=((x274^x275)==x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x278 = INT16_MAX;
	uint64_t x279 = 734404348606885465LLU;
	int64_t x280 = -1558205LL;
	volatile int32_t t69 = -14254330;

    t69 = (x277<=((x278^x279)==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 19U;
	volatile int16_t x282 = INT16_MIN;
	static int32_t x283 = 1313;
	uint8_t x284 = UINT8_MAX;
	static int32_t t70 = -2086143;

    t70 = (x281<=((x282^x283)==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x286 = -1;
	int16_t x287 = INT16_MAX;
	uint16_t x288 = 8U;

    t71 = (x285<=((x286^x287)==x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	int32_t x291 = INT32_MAX;
	uint8_t x292 = UINT8_MAX;

    t72 = (x289<=((x290^x291)==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = INT8_MIN;
	static int64_t x294 = -1LL;
	uint32_t x295 = 542123634U;
	int32_t t73 = -97249;

    t73 = (x293<=((x294^x295)==x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = -1;
	uint64_t x298 = 55LLU;
	uint32_t x299 = 38752U;
	int64_t x300 = INT64_MAX;
	volatile int32_t t74 = -1236580;

    t74 = (x297<=((x298^x299)==x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x304 = INT32_MAX;

    t75 = (x301<=((x302^x303)==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 1642;
	static int64_t x307 = 3411690LL;
	volatile int16_t x308 = INT16_MAX;
	int32_t t76 = -18220919;

    t76 = (x305<=((x306^x307)==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 31;
	volatile uint64_t x310 = UINT64_MAX;
	volatile int32_t x311 = -205925;
	int8_t x312 = INT8_MAX;
	static volatile int32_t t77 = 1;

    t77 = (x309<=((x310^x311)==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = 2;
	static uint64_t x314 = UINT64_MAX;
	volatile int64_t x316 = INT64_MIN;
	int32_t t78 = -15011;

    t78 = (x313<=((x314^x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = INT8_MIN;
	static volatile int64_t x318 = INT64_MAX;
	int16_t x319 = -1;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = -18455712;

    t79 = (x317<=((x318^x319)==x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x321 = 16796754U;
	static int64_t x322 = INT64_MAX;
	int16_t x324 = -1;
	static int32_t t80 = -5323645;

    t80 = (x321<=((x322^x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	static int16_t x326 = -28;
	int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t81 = -197070160;

    t81 = (x325<=((x326^x327)==x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x329 = 907008753382LLU;
	static int32_t x330 = INT32_MAX;
	volatile uint16_t x331 = 1277U;
	int32_t t82 = 225687469;

    t82 = (x329<=((x330^x331)==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 7807952;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -1;
	volatile int32_t t83 = 168;

    t83 = (x333<=((x334^x335)==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = UINT32_MAX;
	int32_t x338 = -3570140;
	int32_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	int32_t t84 = 29039581;

    t84 = (x337<=((x338^x339)==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 14904030099439731LLU;
	int32_t t85 = 951;

    t85 = (x341<=((x342^x343)==x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint16_t x345 = 2800U;
	int64_t x346 = INT64_MIN;
	static volatile int32_t x348 = INT32_MIN;

    t86 = (x345<=((x346^x347)==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 61;
	static int16_t x350 = 28;
	int32_t x351 = -1;
	int16_t x352 = INT16_MAX;

    t87 = (x349<=((x350^x351)==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	uint32_t x354 = UINT32_MAX;
	int32_t x355 = 0;
	static int32_t x356 = -6;
	static volatile int32_t t88 = -17375726;

    t88 = (x353<=((x354^x355)==x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	static volatile int64_t x358 = -1LL;
	volatile uint32_t x359 = UINT32_MAX;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = -18349;

    t89 = (x357<=((x358^x359)==x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x363 = 890U;
	int16_t x364 = 1389;
	volatile int32_t t90 = 5162;

    t90 = (x361<=((x362^x363)==x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 6890920735950LLU;
	int64_t x367 = -1LL;
	volatile int32_t t91 = -87728;

    t91 = (x365<=((x366^x367)==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x370 = 1;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 3;

    t92 = (x369<=((x370^x371)==x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = -1LL;
	int16_t x374 = INT16_MAX;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t93 = 1885;

    t93 = (x373<=((x374^x375)==x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x378 = 13U;
	volatile int8_t x379 = INT8_MAX;
	int32_t t94 = -13888917;

    t94 = (x377<=((x378^x379)==x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 2883U;
	int64_t x382 = INT64_MAX;
	int8_t x383 = -1;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -194340;

    t95 = (x381<=((x382^x383)==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 15U;
	static uint32_t x386 = 95023U;
	int32_t x387 = 1734798;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t96 = 9822099;

    t96 = (x385<=((x386^x387)==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x390 = -352;
	uint32_t x391 = 62U;
	int32_t x392 = INT32_MIN;

    t97 = (x389<=((x390^x391)==x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -5;
	volatile int32_t x394 = -363;
	uint8_t x395 = UINT8_MAX;
	int64_t x396 = INT64_MAX;
	int32_t t98 = 20527498;

    t98 = (x393<=((x394^x395)==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = UINT64_MAX;
	static uint8_t x399 = 2U;
	int32_t t99 = 31;

    t99 = (x397<=((x398^x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -148120;
	uint32_t x402 = UINT32_MAX;
	int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MAX;
	int32_t t100 = -7;

    t100 = (x401<=((x402^x403)==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	uint64_t x406 = 65302706850509LLU;
	static int8_t x407 = INT8_MIN;
	volatile int32_t t101 = -538953;

    t101 = (x405<=((x406^x407)==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	uint8_t x410 = 86U;
	static uint64_t x411 = 877893639181LLU;
	static int16_t x412 = -3515;
	volatile int32_t t102 = -738;

    t102 = (x409<=((x410^x411)==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	int16_t x414 = -957;
	uint16_t x416 = 30826U;
	volatile int32_t t103 = 3;

    t103 = (x413<=((x414^x415)==x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x419 = 122U;
	uint8_t x420 = 18U;
	int32_t t104 = -1;

    t104 = (x417<=((x418^x419)==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x422 = 240U;
	volatile int32_t x423 = INT32_MIN;
	int16_t x424 = -1;
	int32_t t105 = -1;

    t105 = (x421<=((x422^x423)==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	int32_t x427 = -13847550;
	uint32_t x428 = UINT32_MAX;
	static int32_t t106 = 355231880;

    t106 = (x425<=((x426^x427)==x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = INT32_MIN;
	volatile int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MIN;
	uint64_t x432 = 206938944LLU;
	int32_t t107 = 114440214;

    t107 = (x429<=((x430^x431)==x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = -1;
	int16_t x435 = -1;
	int16_t x436 = INT16_MIN;
	volatile int32_t t108 = -1;

    t108 = (x433<=((x434^x435)==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	static uint64_t x439 = 7048298286594174797LLU;
	int32_t t109 = -767;

    t109 = (x437<=((x438^x439)==x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 1053U;
	uint16_t x442 = 31182U;
	int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MAX;
	volatile int32_t t110 = 52492;

    t110 = (x441<=((x442^x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = UINT8_MAX;
	int32_t x446 = -1;
	static volatile int8_t x448 = INT8_MIN;
	volatile int32_t t111 = -514002;

    t111 = (x445<=((x446^x447)==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = 31;
	int64_t x451 = -1LL;
	static volatile int64_t x452 = 0LL;

    t112 = (x449<=((x450^x451)==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	int32_t x454 = INT32_MAX;
	static int64_t x455 = -11663923LL;
	static uint16_t x456 = UINT16_MAX;
	int32_t t113 = -96;

    t113 = (x453<=((x454^x455)==x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x458 = INT8_MIN;
	static int8_t x460 = INT8_MIN;
	int32_t t114 = 997707673;

    t114 = (x457<=((x458^x459)==x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = INT64_MAX;
	int16_t x463 = INT16_MIN;
	int64_t x464 = INT64_MAX;
	int32_t t115 = 28088784;

    t115 = (x461<=((x462^x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 31717U;
	uint64_t x466 = 7929LLU;
	volatile int32_t t116 = 328470;

    t116 = (x465<=((x466^x467)==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 1826870U;
	int64_t x470 = 54832676004LL;
	static uint64_t x472 = UINT64_MAX;

    t117 = (x469<=((x470^x471)==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = -1;
	volatile int32_t x475 = -1;
	int64_t x476 = INT64_MIN;
	int32_t t118 = 228;

    t118 = (x473<=((x474^x475)==x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MAX;
	static uint64_t x478 = UINT64_MAX;
	int32_t x479 = 5096;
	int32_t t119 = 204773;

    t119 = (x477<=((x478^x479)==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x481 = UINT16_MAX;
	static int64_t x482 = INT64_MIN;
	int8_t x483 = -45;
	volatile uint16_t x484 = 1631U;
	int32_t t120 = -440090;

    t120 = (x481<=((x482^x483)==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	static int8_t x487 = -1;
	int64_t x488 = INT64_MIN;

    t121 = (x485<=((x486^x487)==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -1LL;
	int64_t x490 = -857501LL;
	int32_t x491 = -27442;
	volatile int32_t x492 = -1;
	int32_t t122 = -495538;

    t122 = (x489<=((x490^x491)==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = INT16_MAX;
	int16_t x495 = -5402;
	uint8_t x496 = UINT8_MAX;
	static int32_t t123 = 0;

    t123 = (x493<=((x494^x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x497 = 2105U;
	int32_t x498 = -3698;
	int64_t x500 = INT64_MIN;
	volatile int32_t t124 = 28763;

    t124 = (x497<=((x498^x499)==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	volatile uint32_t x502 = 40U;
	int64_t x503 = INT64_MIN;
	static int16_t x504 = -1;
	int32_t t125 = 305430103;

    t125 = (x501<=((x502^x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	int16_t x507 = 0;
	int16_t x508 = INT16_MIN;
	volatile int32_t t126 = -3912715;

    t126 = (x505<=((x506^x507)==x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1;
	int64_t x511 = INT64_MIN;
	int32_t x512 = INT32_MAX;
	int32_t t127 = -1835;

    t127 = (x509<=((x510^x511)==x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = INT32_MIN;
	static int32_t x514 = INT32_MIN;
	volatile int64_t x515 = INT64_MAX;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t128 = -26;

    t128 = (x513<=((x514^x515)==x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = INT16_MAX;
	int64_t x518 = -1LL;
	volatile int32_t x520 = -1;

    t129 = (x517<=((x518^x519)==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x523 = 201U;
	uint16_t x524 = UINT16_MAX;
	int32_t t130 = -751;

    t130 = (x521<=((x522^x523)==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x525 = 0U;
	int64_t x526 = -114190LL;
	static int32_t x528 = 321508855;
	volatile int32_t t131 = 366;

    t131 = (x525<=((x526^x527)==x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MAX;
	static int64_t x531 = INT64_MIN;
	static int8_t x532 = INT8_MIN;

    t132 = (x529<=((x530^x531)==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = -1;
	volatile int64_t x534 = INT64_MAX;
	volatile int32_t x535 = 584;
	int32_t x536 = INT32_MAX;
	int32_t t133 = -721;

    t133 = (x533<=((x534^x535)==x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	volatile int16_t x538 = -1;
	static int8_t x539 = INT8_MIN;
	volatile int8_t x540 = INT8_MIN;
	volatile int32_t t134 = -85094248;

    t134 = (x537<=((x538^x539)==x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 558LL;
	int8_t x542 = INT8_MIN;
	volatile int64_t x543 = INT64_MIN;

    t135 = (x541<=((x542^x543)==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	int64_t x546 = -10308705LL;
	int64_t x548 = INT64_MAX;
	int32_t t136 = -18549092;

    t136 = (x545<=((x546^x547)==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x549 = 882304LLU;
	uint8_t x550 = 48U;
	static uint32_t x551 = 448U;
	volatile int32_t x552 = INT32_MIN;
	int32_t t137 = 19218;

    t137 = (x549<=((x550^x551)==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x554 = 4714739494951LLU;
	int8_t x555 = INT8_MIN;
	volatile int32_t t138 = -105;

    t138 = (x553<=((x554^x555)==x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = UINT16_MAX;
	int32_t x558 = INT32_MIN;
	int32_t x559 = -39;
	int16_t x560 = -1;
	volatile int32_t t139 = -7588220;

    t139 = (x557<=((x558^x559)==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = INT8_MIN;
	uint64_t x563 = 22225898776229LLU;
	uint16_t x564 = UINT16_MAX;
	static int32_t t140 = -91;

    t140 = (x561<=((x562^x563)==x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	int64_t x566 = INT64_MAX;
	volatile uint64_t x567 = 732LLU;
	int16_t x568 = 2;

    t141 = (x565<=((x566^x567)==x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MAX;
	int16_t x570 = INT16_MIN;
	volatile uint8_t x571 = 99U;
	uint32_t x572 = 30U;
	volatile int32_t t142 = 1;

    t142 = (x569<=((x570^x571)==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -138;
	int16_t x574 = INT16_MAX;
	static volatile int8_t x575 = 39;
	static uint16_t x576 = 3U;

    t143 = (x573<=((x574^x575)==x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = INT16_MIN;
	uint8_t x579 = 2U;
	static uint64_t x580 = UINT64_MAX;
	int32_t t144 = 432380991;

    t144 = (x577<=((x578^x579)==x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 240U;
	volatile uint8_t x582 = 4U;
	static volatile int32_t x583 = -1;
	uint32_t x584 = UINT32_MAX;

    t145 = (x581<=((x582^x583)==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = 0;
	uint32_t x586 = 9987873U;
	int8_t x587 = -1;
	uint8_t x588 = 8U;
	int32_t t146 = 31477562;

    t146 = (x585<=((x586^x587)==x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = UINT32_MAX;
	static int32_t x591 = 316206;
	int8_t x592 = -1;

    t147 = (x589<=((x590^x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = 1743620537350289172LLU;
	volatile int16_t x594 = INT16_MIN;
	uint32_t x595 = 4962U;
	int16_t x596 = -1;

    t148 = (x593<=((x594^x595)==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MAX;
	int32_t x599 = INT32_MIN;
	volatile uint16_t x600 = 4U;
	volatile int32_t t149 = 205653;

    t149 = (x597<=((x598^x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MIN;
	volatile int64_t x602 = 251LL;
	volatile int32_t x603 = 60;
	int8_t x604 = INT8_MIN;
	int32_t t150 = 32163;

    t150 = (x601<=((x602^x603)==x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = -1LL;
	static int32_t x607 = 0;
	static volatile int32_t t151 = -59836;

    t151 = (x605<=((x606^x607)==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = INT8_MIN;
	int16_t x611 = INT16_MAX;
	int32_t x612 = -1;
	int32_t t152 = -98;

    t152 = (x609<=((x610^x611)==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	int16_t x614 = 1;
	int16_t x615 = INT16_MIN;
	int16_t x616 = INT16_MIN;
	volatile int32_t t153 = -2;

    t153 = (x613<=((x614^x615)==x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x618 = INT32_MAX;
	volatile uint8_t x619 = UINT8_MAX;
	int32_t x620 = INT32_MIN;
	int32_t t154 = 677;

    t154 = (x617<=((x618^x619)==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x622 = -1790;
	int8_t x624 = -14;

    t155 = (x621<=((x622^x623)==x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = UINT8_MAX;
	volatile int8_t x626 = INT8_MIN;
	int32_t x627 = -1;
	int8_t x628 = 4;

    t156 = (x625<=((x626^x627)==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = INT32_MIN;
	int64_t x630 = INT64_MIN;
	static uint8_t x631 = 18U;
	int8_t x632 = 42;

    t157 = (x629<=((x630^x631)==x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = INT8_MIN;

    t158 = (x633<=((x634^x635)==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x637 = 543415581269607503LLU;
	uint8_t x638 = UINT8_MAX;
	volatile int8_t x639 = -44;
	static uint64_t x640 = 65597304501237LLU;
	int32_t t159 = 1595505;

    t159 = (x637<=((x638^x639)==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x641 = 12U;
	uint32_t x642 = UINT32_MAX;
	volatile uint64_t x643 = 30033LLU;
	static volatile int32_t t160 = -22408742;

    t160 = (x641<=((x642^x643)==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = INT64_MIN;
	volatile uint64_t x646 = 4789LLU;
	int32_t x647 = INT32_MIN;
	volatile int32_t x648 = 1894;
	static int32_t t161 = -528;

    t161 = (x645<=((x646^x647)==x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x649 = 59U;
	int32_t x650 = 61731;
	uint8_t x651 = 0U;
	volatile int8_t x652 = INT8_MAX;
	int32_t t162 = 1046474090;

    t162 = (x649<=((x650^x651)==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -1LL;
	int8_t x654 = INT8_MIN;
	volatile uint64_t x655 = UINT64_MAX;
	uint8_t x656 = 1U;
	static int32_t t163 = -259212;

    t163 = (x653<=((x654^x655)==x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	static volatile int32_t x659 = INT32_MAX;
	int16_t x660 = INT16_MIN;
	int32_t t164 = -25590;

    t164 = (x657<=((x658^x659)==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = INT8_MIN;
	static volatile uint32_t x662 = UINT32_MAX;
	uint16_t x663 = UINT16_MAX;
	volatile int8_t x664 = -1;

    t165 = (x661<=((x662^x663)==x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x665 = INT8_MAX;
	int32_t x667 = INT32_MIN;
	static volatile int32_t t166 = -261559;

    t166 = (x665<=((x666^x667)==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x669 = 30351LLU;
	volatile uint16_t x670 = 15U;
	volatile uint64_t x671 = 3694393LLU;
	int16_t x672 = INT16_MIN;
	volatile int32_t t167 = 0;

    t167 = (x669<=((x670^x671)==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	int32_t x674 = -1;
	int32_t x675 = 28296;
	int32_t t168 = 86216;

    t168 = (x673<=((x674^x675)==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	volatile uint8_t x678 = 7U;
	volatile int16_t x679 = INT16_MIN;
	int8_t x680 = INT8_MIN;
	int32_t t169 = -4340190;

    t169 = (x677<=((x678^x679)==x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	uint8_t x682 = 1U;
	uint32_t x683 = 167101912U;
	uint64_t x684 = UINT64_MAX;
	static volatile int32_t t170 = 204544;

    t170 = (x681<=((x682^x683)==x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x686 = UINT8_MAX;
	uint32_t x687 = 75815166U;
	int32_t x688 = 1349;
	volatile int32_t t171 = -1984264;

    t171 = (x685<=((x686^x687)==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 1;
	uint32_t x690 = 1154U;
	int32_t x691 = INT32_MAX;
	volatile int8_t x692 = 5;
	volatile int32_t t172 = 13;

    t172 = (x689<=((x690^x691)==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MIN;
	uint64_t x694 = UINT64_MAX;
	static int16_t x695 = 15;
	int32_t t173 = 1180007;

    t173 = (x693<=((x694^x695)==x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x697 = INT32_MIN;
	static uint64_t x698 = UINT64_MAX;
	static volatile int8_t x700 = INT8_MIN;
	int32_t t174 = -119688831;

    t174 = (x697<=((x698^x699)==x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -1;
	uint8_t x702 = 1U;
	volatile int64_t x703 = -50050LL;
	static int32_t x704 = INT32_MAX;
	int32_t t175 = -447933735;

    t175 = (x701<=((x702^x703)==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x705 = UINT32_MAX;
	uint8_t x706 = 30U;
	uint64_t x707 = UINT64_MAX;
	volatile int32_t t176 = 1616;

    t176 = (x705<=((x706^x707)==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = INT32_MIN;
	int16_t x710 = INT16_MAX;
	int64_t x711 = -1LL;
	uint16_t x712 = 469U;

    t177 = (x709<=((x710^x711)==x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	static volatile int64_t x714 = -523198783886239619LL;
	int8_t x716 = INT8_MIN;

    t178 = (x713<=((x714^x715)==x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x718 = INT16_MIN;
	int64_t x719 = INT64_MIN;
	int32_t t179 = 19;

    t179 = (x717<=((x718^x719)==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	volatile uint64_t x722 = 2LLU;
	uint8_t x723 = 16U;
	int16_t x724 = 44;
	volatile int32_t t180 = 7600;

    t180 = (x721<=((x722^x723)==x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 0U;
	int32_t x726 = -988;
	uint8_t x727 = 0U;
	int64_t x728 = -8475697672512LL;
	int32_t t181 = 1048;

    t181 = (x725<=((x726^x727)==x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = 10;
	uint32_t x731 = 415820U;
	int64_t x732 = INT64_MIN;

    t182 = (x729<=((x730^x731)==x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x735 = INT64_MIN;
	int32_t t183 = -945;

    t183 = (x733<=((x734^x735)==x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x739 = INT16_MIN;
	volatile int32_t x740 = 8969721;

    t184 = (x737<=((x738^x739)==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -1;
	int64_t x742 = -12946788695699290LL;
	static int32_t x743 = INT32_MIN;
	uint64_t x744 = 57LLU;

    t185 = (x741<=((x742^x743)==x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x745 = 53006837U;
	int8_t x746 = 45;
	int32_t x747 = -1;
	uint32_t x748 = UINT32_MAX;
	static volatile int32_t t186 = -9305;

    t186 = (x745<=((x746^x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x750 = 343276156388164218LLU;
	int32_t x751 = INT32_MIN;
	int32_t x752 = -3954736;
	int32_t t187 = -691;

    t187 = (x749<=((x750^x751)==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x756 = INT8_MIN;
	int32_t t188 = -789;

    t188 = (x753<=((x754^x755)==x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MIN;
	int8_t x758 = -1;
	static int8_t x759 = INT8_MIN;
	volatile int32_t t189 = -77367;

    t189 = (x757<=((x758^x759)==x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x761 = INT8_MAX;
	volatile int64_t x762 = 58LL;
	int64_t x763 = INT64_MIN;
	static int8_t x764 = -1;

    t190 = (x761<=((x762^x763)==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x768 = UINT8_MAX;
	int32_t t191 = -941505;

    t191 = (x765<=((x766^x767)==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x770 = UINT8_MAX;
	static uint32_t x771 = 3U;
	volatile int8_t x772 = INT8_MIN;
	int32_t t192 = 2265;

    t192 = (x769<=((x770^x771)==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = -16;
	int64_t x774 = INT64_MAX;
	volatile int16_t x775 = -1;
	volatile int32_t x776 = INT32_MIN;
	static int32_t t193 = 4;

    t193 = (x773<=((x774^x775)==x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 2280116141LLU;
	int32_t x778 = -1;
	static volatile int16_t x779 = INT16_MIN;
	static volatile int16_t x780 = 2;
	static volatile int32_t t194 = -4;

    t194 = (x777<=((x778^x779)==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x782 = -203617934627626LL;
	static volatile uint64_t x783 = UINT64_MAX;
	int32_t x784 = 22;

    t195 = (x781<=((x782^x783)==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x786 = INT8_MIN;
	int64_t x787 = -242236LL;
	int32_t t196 = -3057019;

    t196 = (x785<=((x786^x787)==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x789 = 21812866;
	volatile uint8_t x790 = UINT8_MAX;
	int8_t x791 = -1;
	static volatile uint32_t x792 = 40205U;
	volatile int32_t t197 = -192;

    t197 = (x789<=((x790^x791)==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 95185779530LL;
	static int64_t x794 = 1935003053123652LL;
	int64_t x795 = INT64_MIN;
	volatile uint16_t x796 = UINT16_MAX;
	volatile int32_t t198 = 223414;

    t198 = (x793<=((x794^x795)==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x798 = 0U;
	uint8_t x799 = 0U;
	volatile int64_t x800 = INT64_MIN;
	int32_t t199 = -1717;

    t199 = (x797<=((x798^x799)==x800));

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

