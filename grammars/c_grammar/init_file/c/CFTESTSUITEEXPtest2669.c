
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

int64_t x4 = INT64_MAX;
int32_t x7 = -1;
uint64_t x11 = 1LLU;
static int8_t x12 = -1;
int64_t x20 = -1LL;
int32_t x25 = INT32_MIN;
int64_t x28 = -2LL;
volatile int8_t x34 = INT8_MIN;
uint64_t x35 = 46863659LLU;
static int32_t x37 = INT32_MIN;
uint64_t x42 = UINT64_MAX;
static uint32_t x45 = UINT32_MAX;
static volatile int32_t t12 = 1;
static int32_t x54 = INT32_MIN;
static uint32_t x55 = UINT32_MAX;
volatile int32_t x58 = -1;
volatile int32_t x61 = INT32_MIN;
int32_t x71 = -1275673;
volatile int16_t x74 = INT16_MAX;
static int32_t x90 = -1;
uint64_t x95 = 308595LLU;
volatile int32_t t23 = 162488264;
uint16_t x102 = UINT16_MAX;
int16_t x108 = INT16_MAX;
volatile int32_t t27 = 159300;
volatile uint16_t x123 = UINT16_MAX;
int32_t t30 = -1794094;
uint8_t x128 = 12U;
int32_t t32 = 103485486;
int8_t x133 = 3;
static uint16_t x136 = 1216U;
static volatile int32_t t34 = -3819137;
int32_t t35 = 1557;
int8_t x146 = INT8_MIN;
volatile int32_t x151 = 91;
int32_t x152 = 914055923;
int32_t t37 = 7025130;
int8_t x153 = -1;
uint64_t x157 = UINT64_MAX;
volatile int32_t t39 = 446460;
static uint32_t x163 = 16038U;
int16_t x164 = INT16_MIN;
volatile int16_t x167 = -1;
int16_t x169 = -1;
int64_t x176 = -1LL;
uint8_t x184 = UINT8_MAX;
int64_t x186 = -1LL;
volatile int8_t x187 = 1;
volatile uint32_t x188 = 1107711U;
volatile int32_t t46 = 991621285;
uint8_t x189 = 3U;
volatile int32_t t49 = 5;
uint64_t x206 = 2099012305022664LLU;
uint64_t x212 = 2913948395LLU;
volatile int32_t t53 = 0;
int64_t x218 = INT64_MIN;
uint32_t x221 = 4U;
uint64_t x230 = 1399023744356678343LLU;
volatile int8_t x239 = -11;
uint8_t x242 = 12U;
volatile int32_t t60 = 237;
int64_t x246 = INT64_MAX;
uint16_t x253 = 97U;
volatile int64_t x256 = -1455400LL;
volatile uint32_t x261 = 241U;
uint64_t x263 = UINT64_MAX;
int32_t t66 = 1713;
int32_t x269 = INT32_MIN;
int16_t x272 = INT16_MIN;
static int8_t x277 = INT8_MIN;
volatile uint16_t x278 = UINT16_MAX;
volatile uint32_t x285 = 61995746U;
int64_t x286 = INT64_MAX;
int8_t x291 = INT8_MIN;
int32_t x293 = 1183;
uint8_t x306 = 1U;
volatile uint16_t x307 = 4076U;
static uint32_t x315 = UINT32_MAX;
int8_t x317 = -1;
static int32_t t81 = -1807135;
uint64_t x330 = 33899LLU;
int32_t x340 = INT32_MAX;
int32_t t84 = -50706;
uint16_t x345 = 24U;
int32_t t87 = 11;
int16_t x356 = -3;
int64_t x361 = -1LL;
static uint8_t x362 = 7U;
uint32_t x370 = UINT32_MAX;
static int64_t x372 = INT64_MIN;
static volatile int16_t x373 = -1;
int32_t t93 = 253;
static volatile int32_t x379 = INT32_MIN;
int32_t x380 = -1;
int32_t x383 = INT32_MIN;
int32_t x385 = 65068;
uint64_t x390 = UINT64_MAX;
int64_t x396 = -154045547LL;
int32_t x398 = 3222;
int32_t x402 = INT32_MIN;
volatile int32_t t100 = 0;
int16_t x406 = -375;
int16_t x407 = INT16_MAX;
int32_t t101 = 468;
uint64_t x415 = 3LLU;
int16_t x424 = INT16_MAX;
volatile int8_t x425 = -1;
static uint16_t x426 = 0U;
int32_t x427 = INT32_MIN;
uint32_t x429 = 2380199U;
static volatile int32_t x432 = INT32_MAX;
uint32_t x433 = 3373747U;
static uint8_t x436 = UINT8_MAX;
volatile int32_t t108 = 1;
static int32_t x450 = INT32_MAX;
static volatile int8_t x451 = -1;
int16_t x452 = INT16_MIN;
static volatile uint64_t x458 = UINT64_MAX;
static int32_t t114 = -17;
int8_t x461 = -1;
int8_t x462 = INT8_MIN;
int16_t x467 = INT16_MIN;
int32_t t116 = 5;
int64_t x472 = INT64_MAX;
int64_t x474 = INT64_MIN;
volatile int32_t t119 = 166031698;
int16_t x483 = 7628;
volatile int64_t x484 = -873024482046566050LL;
volatile int32_t t120 = -1;
int8_t x490 = -1;
volatile int32_t t122 = 7111;
int64_t x498 = INT64_MAX;
volatile uint64_t x521 = 141480297599LLU;
volatile int32_t t130 = 330;
uint8_t x527 = 123U;
volatile uint8_t x528 = UINT8_MAX;
int16_t x531 = -2301;
uint32_t x536 = 1175205525U;
int64_t x537 = -3809698122LL;
int64_t x539 = INT64_MIN;
int16_t x544 = 962;
uint64_t x547 = UINT64_MAX;
static int64_t x554 = 1LL;
int32_t t140 = -10;
volatile uint64_t x565 = 137142076154301683LLU;
volatile int32_t x568 = 17155;
static int32_t t141 = 1;
static volatile uint8_t x570 = UINT8_MAX;
int32_t x572 = INT32_MAX;
static int8_t x577 = 40;
int64_t x578 = -17582408LL;
uint32_t x582 = UINT32_MAX;
int64_t x591 = INT64_MAX;
uint8_t x593 = 0U;
static int8_t x594 = -3;
static volatile int32_t x597 = INT32_MIN;
volatile uint16_t x603 = 1U;
int64_t x608 = 2221548LL;
uint64_t x609 = 10519301LLU;
static uint32_t x611 = 480254214U;
volatile int32_t t152 = 54094;
uint32_t x614 = 444229309U;
volatile int8_t x617 = INT8_MIN;
volatile uint32_t x619 = UINT32_MAX;
static int8_t x622 = 9;
int32_t x623 = INT32_MAX;
volatile uint16_t x629 = 1519U;
volatile int32_t x633 = INT32_MIN;
volatile int64_t x634 = -1116087157448875148LL;
volatile int32_t t158 = -853;
static int32_t x637 = -927443518;
int16_t x639 = -1;
static int32_t t160 = -1792;
int64_t x652 = INT64_MIN;
int32_t t162 = 2;
int32_t t163 = -261708668;
uint32_t x658 = 1U;
static int8_t x661 = 2;
int32_t t165 = -438;
int8_t x665 = INT8_MIN;
volatile uint8_t x666 = UINT8_MAX;
static uint32_t x668 = 13132415U;
static volatile int32_t t166 = 7201442;
int32_t x672 = INT32_MAX;
volatile int32_t t169 = -5548941;
static int32_t x683 = 2721642;
int64_t x684 = -435LL;
int32_t t171 = -383483094;
static int16_t x691 = INT16_MIN;
uint16_t x692 = 82U;
uint8_t x699 = 6U;
static volatile int16_t x702 = INT16_MAX;
static int8_t x713 = INT8_MIN;
volatile int8_t x725 = -1;
static int64_t x726 = INT64_MAX;
int8_t x731 = INT8_MIN;
int64_t x734 = INT64_MIN;
int32_t t183 = -16127;
volatile int64_t x737 = INT64_MAX;
int8_t x738 = -1;
volatile int32_t t184 = -20;
int16_t x746 = 12;
volatile int32_t t186 = 1747;
int32_t x762 = 27139830;
static int32_t x764 = INT32_MIN;
static int64_t x769 = -1LL;
static volatile uint8_t x772 = 3U;
volatile int32_t t192 = 428549;
uint32_t x774 = UINT32_MAX;
uint64_t x775 = 517465396LLU;
int32_t t193 = -155079;
uint8_t x789 = 20U;
uint8_t x793 = 21U;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint8_t x2 = 11U;
	uint64_t x3 = 900370211536LLU;
	volatile int32_t t0 = 3127;

    t0 = (x1>((x2^x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MAX;
	static int32_t x8 = INT32_MAX;
	static int32_t t1 = 1921663;

    t1 = (x5>((x6^x7)>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = UINT32_MAX;
	uint64_t x10 = 120687502LLU;
	static volatile int32_t t2 = 307211053;

    t2 = (x9>((x10^x11)>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;
	int16_t x15 = -1;
	volatile uint64_t x16 = 1851875LLU;
	int32_t t3 = -124384;

    t3 = (x13>((x14^x15)>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 1;
	int8_t x18 = INT8_MAX;
	volatile uint8_t x19 = 18U;
	volatile int32_t t4 = -77458;

    t4 = (x17>((x18^x19)>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 0U;
	uint8_t x22 = 43U;
	int64_t x23 = INT64_MIN;
	uint8_t x24 = 0U;
	int32_t t5 = 2518093;

    t5 = (x21>((x22^x23)>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MAX;
	volatile uint32_t x27 = 260U;
	static int32_t t6 = -10;

    t6 = (x25>((x26^x27)>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 4237;
	static int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	static int32_t x32 = -1;
	static int32_t t7 = -7;

    t7 = (x29>((x30^x31)>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 13755;

    t8 = (x33>((x34^x35)>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = UINT8_MAX;
	uint32_t x39 = 5969U;
	int16_t x40 = INT16_MAX;
	volatile int32_t t9 = -2702441;

    t9 = (x37>((x38^x39)>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -9;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = 24935758LLU;
	int32_t t10 = 27520;

    t10 = (x41>((x42^x43)>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x46 = -1;
	int16_t x47 = INT16_MIN;
	static uint8_t x48 = 2U;
	static int32_t t11 = -295961;

    t11 = (x45>((x46^x47)>x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 2193911U;
	int64_t x50 = INT64_MIN;
	static volatile uint8_t x51 = 1U;
	uint8_t x52 = 17U;

    t12 = (x49>((x50^x51)>x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = -109721207243LL;
	int32_t x56 = INT32_MAX;
	int32_t t13 = -90315134;

    t13 = (x53>((x54^x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -2;
	int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = -7049164;

    t14 = (x57>((x58^x59)>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x62 = INT8_MAX;
	volatile uint32_t x63 = UINT32_MAX;
	int8_t x64 = 0;
	int32_t t15 = -78;

    t15 = (x61>((x62^x63)>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x65 = -400;
	int64_t x66 = 136696101860LL;
	uint32_t x67 = 459987U;
	int8_t x68 = INT8_MAX;
	int32_t t16 = 14660;

    t16 = (x65>((x66^x67)>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int32_t x70 = INT32_MIN;
	uint16_t x72 = 112U;
	int32_t t17 = 3;

    t17 = (x69>((x70^x71)>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 6U;
	uint64_t x75 = 43224941861076351LLU;
	volatile int16_t x76 = -1;
	volatile int32_t t18 = 23;

    t18 = (x73>((x74^x75)>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MIN;
	int64_t x79 = -1LL;
	int16_t x80 = -1;
	volatile int32_t t19 = 3242;

    t19 = (x77>((x78^x79)>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = -318755503LL;
	volatile int8_t x82 = INT8_MIN;
	static int32_t x83 = -49460;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = -285;

    t20 = (x81>((x82^x83)>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = 24LL;
	int16_t x86 = 7015;
	int8_t x87 = INT8_MAX;
	static uint16_t x88 = 46U;
	volatile int32_t t21 = 6694;

    t21 = (x85>((x86^x87)>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	int8_t x91 = INT8_MIN;
	static int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -257201;

    t22 = (x89>((x90^x91)>x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = INT32_MAX;
	int32_t x94 = INT32_MAX;
	uint16_t x96 = 35U;

    t23 = (x93>((x94^x95)>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MAX;
	uint8_t x98 = 5U;
	int16_t x99 = 9670;
	int32_t x100 = INT32_MIN;
	static int32_t t24 = 1873593;

    t24 = (x97>((x98^x99)>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 510U;
	int32_t x103 = -2910972;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -29810243;

    t25 = (x101>((x102^x103)>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	static int32_t x106 = INT32_MIN;
	int32_t x107 = 23193520;
	volatile int32_t t26 = -11771;

    t26 = (x105>((x106^x107)>x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 3U;
	uint64_t x110 = 1LLU;
	volatile int16_t x111 = -1;
	static volatile uint8_t x112 = 26U;

    t27 = (x109>((x110^x111)>x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = 30;
	int64_t x114 = INT64_MIN;
	uint8_t x115 = 110U;
	static uint32_t x116 = 60U;
	static int32_t t28 = 369479582;

    t28 = (x113>((x114^x115)>x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = 364692114503LL;
	uint64_t x118 = UINT64_MAX;
	static volatile uint32_t x119 = 8U;
	uint8_t x120 = 95U;
	static volatile int32_t t29 = -520;

    t29 = (x117>((x118^x119)>x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = 25U;
	uint32_t x122 = 1231854460U;
	static volatile int64_t x124 = INT64_MAX;

    t30 = (x121>((x122^x123)>x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = 47;
	int16_t x126 = INT16_MIN;
	volatile int64_t x127 = 4230992518653LL;
	volatile int32_t t31 = 25;

    t31 = (x125>((x126^x127)>x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 2536270U;
	static int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;

    t32 = (x129>((x130^x131)>x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x134 = 1U;
	uint16_t x135 = 203U;
	volatile int32_t t33 = -19151;

    t33 = (x133>((x134^x135)>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	static int32_t x138 = 671028;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = 28U;

    t34 = (x137>((x138^x139)>x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	int32_t x142 = INT32_MAX;
	static int32_t x143 = -1;
	static int16_t x144 = INT16_MIN;

    t35 = (x141>((x142^x143)>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	volatile uint16_t x147 = UINT16_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = 42;

    t36 = (x145>((x146^x147)>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	static int16_t x150 = -6864;

    t37 = (x149>((x150^x151)>x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = 86699430027LLU;
	static int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = -51;

    t38 = (x153>((x154^x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = 1631;
	int64_t x159 = -1955178LL;
	int8_t x160 = INT8_MIN;

    t39 = (x157>((x158^x159)>x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = -1;
	int16_t x162 = INT16_MIN;
	int32_t t40 = -7891;

    t40 = (x161>((x162^x163)>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 26639U;
	volatile int32_t x166 = -3;
	int8_t x168 = -1;
	int32_t t41 = 299764337;

    t41 = (x165>((x166^x167)>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x170 = 7809U;
	volatile int8_t x171 = INT8_MIN;
	uint8_t x172 = 31U;
	volatile int32_t t42 = -165182877;

    t42 = (x169>((x170^x171)>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 0;
	volatile uint8_t x174 = 101U;
	int64_t x175 = -1LL;
	volatile int32_t t43 = -1930103;

    t43 = (x173>((x174^x175)>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	static volatile int64_t x178 = INT64_MIN;
	static int8_t x179 = -1;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 909429;

    t44 = (x177>((x178^x179)>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = 20451LL;
	volatile uint8_t x182 = 1U;
	int32_t x183 = 372;
	int32_t t45 = 44329443;

    t45 = (x181>((x182^x183)>x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;

    t46 = (x185>((x186^x187)>x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x190 = 45U;
	uint16_t x191 = 0U;
	static int32_t x192 = INT32_MIN;
	static int32_t t47 = 33256061;

    t47 = (x189>((x190^x191)>x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	int16_t x194 = INT16_MAX;
	volatile uint16_t x195 = 5276U;
	int32_t x196 = INT32_MIN;
	int32_t t48 = -249882;

    t48 = (x193>((x194^x195)>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MAX;
	volatile int32_t x199 = INT32_MIN;
	int64_t x200 = -111LL;

    t49 = (x197>((x198^x199)>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -130583939182LL;
	static int8_t x202 = INT8_MAX;
	int16_t x203 = -1;
	uint64_t x204 = UINT64_MAX;
	int32_t t50 = -477023228;

    t50 = (x201>((x202^x203)>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MAX;
	int64_t x207 = -8LL;
	volatile uint32_t x208 = UINT32_MAX;
	int32_t t51 = 687;

    t51 = (x205>((x206^x207)>x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 27304305388836561LLU;
	volatile uint64_t x210 = 101LLU;
	uint8_t x211 = 5U;
	volatile int32_t t52 = 0;

    t52 = (x209>((x210^x211)>x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 80934827;
	volatile uint64_t x214 = UINT64_MAX;
	uint64_t x215 = UINT64_MAX;
	int64_t x216 = INT64_MAX;

    t53 = (x213>((x214^x215)>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MIN;
	uint32_t x219 = 5U;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 51304;

    t54 = (x217>((x218^x219)>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x222 = UINT16_MAX;
	volatile int64_t x223 = -1LL;
	int16_t x224 = -406;
	int32_t t55 = 54919;

    t55 = (x221>((x222^x223)>x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MAX;
	int16_t x227 = -1;
	volatile int32_t x228 = 82481861;
	volatile int32_t t56 = -2033794;

    t56 = (x225>((x226^x227)>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = -1810876;
	int64_t x231 = INT64_MIN;
	volatile int64_t x232 = -24LL;
	static volatile int32_t t57 = 51;

    t57 = (x229>((x230^x231)>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = -1;
	int32_t x234 = INT32_MAX;
	volatile uint8_t x235 = 2U;
	uint64_t x236 = 10555118008957LLU;
	int32_t t58 = 4248540;

    t58 = (x233>((x234^x235)>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -11;
	volatile uint64_t x238 = 1386056811LLU;
	int16_t x240 = INT16_MAX;
	int32_t t59 = -1347;

    t59 = (x237>((x238^x239)>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	uint16_t x243 = 41U;
	int16_t x244 = INT16_MAX;

    t60 = (x241>((x242^x243)>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = INT32_MIN;
	int16_t x247 = -1;
	uint64_t x248 = 1595509560313LLU;
	int32_t t61 = 0;

    t61 = (x245>((x246^x247)>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -10;
	static int16_t x250 = 13;
	volatile int64_t x251 = INT64_MAX;
	static int8_t x252 = -1;
	static volatile int32_t t62 = -2;

    t62 = (x249>((x250^x251)>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x254 = INT64_MAX;
	static volatile int16_t x255 = INT16_MAX;
	volatile int32_t t63 = -10958749;

    t63 = (x253>((x254^x255)>x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = INT16_MIN;
	int32_t x258 = -1;
	uint8_t x259 = 1U;
	uint64_t x260 = UINT64_MAX;
	static int32_t t64 = 33522;

    t64 = (x257>((x258^x259)>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = INT32_MAX;
	int64_t x264 = INT64_MIN;
	volatile int32_t t65 = -1666394;

    t65 = (x261>((x262^x263)>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = 12LL;
	int8_t x266 = -1;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;

    t66 = (x265>((x266^x267)>x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x270 = 1058U;
	int16_t x271 = -1;
	volatile int32_t t67 = -1;

    t67 = (x269>((x270^x271)>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x273 = 710043;
	static uint64_t x274 = 36971LLU;
	static volatile int64_t x275 = -1LL;
	uint32_t x276 = UINT32_MAX;
	static volatile int32_t t68 = -96953;

    t68 = (x273>((x274^x275)>x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x279 = INT32_MIN;
	int32_t x280 = 8082;
	volatile int32_t t69 = -25722;

    t69 = (x277>((x278^x279)>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 1236U;
	int16_t x282 = INT16_MIN;
	uint32_t x283 = 29397855U;
	volatile int32_t x284 = INT32_MIN;
	int32_t t70 = -8;

    t70 = (x281>((x282^x283)>x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x287 = INT64_MAX;
	int16_t x288 = INT16_MAX;
	static volatile int32_t t71 = 573;

    t71 = (x285>((x286^x287)>x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -1;
	static volatile int8_t x290 = INT8_MIN;
	volatile int64_t x292 = 5468LL;
	static volatile int32_t t72 = 545;

    t72 = (x289>((x290^x291)>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = -8422644LL;
	int64_t x295 = INT64_MIN;
	int32_t x296 = -1;
	volatile int32_t t73 = -1501014;

    t73 = (x293>((x294^x295)>x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -1;
	int64_t x298 = 311LL;
	int16_t x299 = INT16_MAX;
	int16_t x300 = -9945;
	static volatile int32_t t74 = -1513234;

    t74 = (x297>((x298^x299)>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	int64_t x302 = INT64_MIN;
	volatile int16_t x303 = INT16_MIN;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t75 = 1;

    t75 = (x301>((x302^x303)>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -43;

    t76 = (x305>((x306^x307)>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = -7848595;
	int64_t x310 = INT64_MIN;
	int16_t x311 = 3701;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 26588669;

    t77 = (x309>((x310^x311)>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = -6;
	uint16_t x314 = UINT16_MAX;
	int16_t x316 = -1;
	int32_t t78 = 775419139;

    t78 = (x313>((x314^x315)>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x318 = -1;
	static uint32_t x319 = UINT32_MAX;
	uint32_t x320 = UINT32_MAX;
	static volatile int32_t t79 = 164899923;

    t79 = (x317>((x318^x319)>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x321 = 58777491914461LLU;
	volatile int64_t x322 = 2893775LL;
	static int16_t x323 = INT16_MAX;
	static volatile int64_t x324 = INT64_MIN;
	static volatile int32_t t80 = 356239292;

    t80 = (x321>((x322^x323)>x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	int16_t x326 = -1;
	uint32_t x327 = 255341U;
	uint64_t x328 = 1061970114821018LLU;

    t81 = (x325>((x326^x327)>x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -43;
	uint64_t x331 = 107LLU;
	int8_t x332 = 0;
	static volatile int32_t t82 = 0;

    t82 = (x329>((x330^x331)>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = UINT64_MAX;
	uint64_t x334 = 1LLU;
	int32_t x335 = -1;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = -361;

    t83 = (x333>((x334^x335)>x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 165;
	static uint8_t x338 = UINT8_MAX;
	int32_t x339 = INT32_MIN;

    t84 = (x337>((x338^x339)>x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 7721LLU;
	uint16_t x342 = UINT16_MAX;
	int16_t x343 = 9165;
	uint8_t x344 = 0U;
	static int32_t t85 = -120062;

    t85 = (x341>((x342^x343)>x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x346 = UINT32_MAX;
	uint64_t x347 = 1LLU;
	volatile uint32_t x348 = 189U;
	volatile int32_t t86 = -3820005;

    t86 = (x345>((x346^x347)>x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = 26591281;
	uint64_t x350 = 440551LLU;
	static uint16_t x351 = 11800U;
	static uint64_t x352 = UINT64_MAX;

    t87 = (x349>((x350^x351)>x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 3798U;
	uint16_t x354 = 0U;
	uint64_t x355 = UINT64_MAX;
	volatile int32_t t88 = 316124996;

    t88 = (x353>((x354^x355)>x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -600575057264849LL;
	volatile int16_t x358 = 60;
	static uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t89 = 48119;

    t89 = (x357>((x358^x359)>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x363 = INT64_MAX;
	volatile uint16_t x364 = UINT16_MAX;
	int32_t t90 = 227433842;

    t90 = (x361>((x362^x363)>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	volatile uint64_t x368 = 1250504284746406LLU;
	int32_t t91 = -710518;

    t91 = (x365>((x366^x367)>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	int16_t x371 = -2807;
	static int32_t t92 = 99644;

    t92 = (x369>((x370^x371)>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x374 = UINT8_MAX;
	int32_t x375 = 9;
	static uint64_t x376 = UINT64_MAX;

    t93 = (x373>((x374^x375)>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = -1;
	static int64_t x378 = INT64_MIN;
	int32_t t94 = -1;

    t94 = (x377>((x378^x379)>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -6244903LL;
	uint16_t x382 = 4559U;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -2631;

    t95 = (x381>((x382^x383)>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = -1;
	static volatile int8_t x387 = INT8_MAX;
	static int8_t x388 = INT8_MAX;
	static volatile int32_t t96 = -3178346;

    t96 = (x385>((x386^x387)>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -27608560LL;
	int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MAX;
	int32_t t97 = 537852;

    t97 = (x389>((x390^x391)>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	uint64_t x394 = 106403738195600LLU;
	uint64_t x395 = UINT64_MAX;
	static volatile int32_t t98 = -1019587475;

    t98 = (x393>((x394^x395)>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 146LLU;
	static uint16_t x399 = 14680U;
	static int64_t x400 = -1LL;
	volatile int32_t t99 = -6020;

    t99 = (x397>((x398^x399)>x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = 4073858;
	int16_t x403 = 9647;
	int16_t x404 = -1;

    t100 = (x401>((x402^x403)>x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x405 = 2496U;
	static int8_t x408 = INT8_MAX;

    t101 = (x405>((x406^x407)>x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MAX;
	int8_t x410 = -1;
	uint64_t x411 = UINT64_MAX;
	int16_t x412 = -1;
	volatile int32_t t102 = 891321921;

    t102 = (x409>((x410^x411)>x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x413 = INT32_MIN;
	static uint8_t x414 = 9U;
	static int16_t x416 = 21;
	volatile int32_t t103 = -10920885;

    t103 = (x413>((x414^x415)>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 3704700U;
	uint16_t x418 = UINT16_MAX;
	static int64_t x419 = -2055373LL;
	int32_t x420 = -1;
	volatile int32_t t104 = -74;

    t104 = (x417>((x418^x419)>x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = INT16_MAX;
	uint8_t x422 = 25U;
	int64_t x423 = -2LL;
	int32_t t105 = 251413;

    t105 = (x421>((x422^x423)>x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x428 = INT8_MIN;
	volatile int32_t t106 = 1149780;

    t106 = (x425>((x426^x427)>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x430 = UINT16_MAX;
	volatile int32_t x431 = -3480;
	volatile int32_t t107 = 63429;

    t107 = (x429>((x430^x431)>x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x434 = UINT32_MAX;
	static uint16_t x435 = 63U;

    t108 = (x433>((x434^x435)>x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 1;
	int8_t x438 = -1;
	int32_t x439 = -1;
	uint32_t x440 = 1609996175U;
	int32_t t109 = 2;

    t109 = (x437>((x438^x439)>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	volatile int64_t x442 = -1LL;
	int32_t x443 = -30;
	int64_t x444 = INT64_MIN;
	int32_t t110 = -330082051;

    t110 = (x441>((x442^x443)>x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x445 = 0U;
	volatile int16_t x446 = INT16_MAX;
	static int8_t x447 = -1;
	uint32_t x448 = 3249U;
	int32_t t111 = -1;

    t111 = (x445>((x446^x447)>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	int32_t t112 = -204238;

    t112 = (x449>((x450^x451)>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	int16_t x454 = -1;
	uint32_t x455 = 3238U;
	static int16_t x456 = INT16_MIN;
	int32_t t113 = 0;

    t113 = (x453>((x454^x455)>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -19531LL;
	int32_t x459 = INT32_MIN;
	uint32_t x460 = 9898U;

    t114 = (x457>((x458^x459)>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x463 = INT32_MIN;
	uint64_t x464 = 8246498131519475984LLU;
	int32_t t115 = 21;

    t115 = (x461>((x462^x463)>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = 3U;
	volatile uint16_t x466 = 5238U;
	static uint16_t x468 = UINT16_MAX;

    t116 = (x465>((x466^x467)>x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 16U;
	int32_t x470 = -1;
	uint32_t x471 = 1U;
	volatile int32_t t117 = -7;

    t117 = (x469>((x470^x471)>x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 557342638U;
	static int64_t x475 = -1LL;
	static uint8_t x476 = 1U;
	static int32_t t118 = -114575748;

    t118 = (x473>((x474^x475)>x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x477 = 14U;
	uint32_t x478 = 473409U;
	int8_t x479 = 52;
	uint8_t x480 = 0U;

    t119 = (x477>((x478^x479)>x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -1;
	int64_t x482 = -1LL;

    t120 = (x481>((x482^x483)>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 3U;
	static uint32_t x486 = UINT32_MAX;
	uint16_t x487 = 245U;
	int64_t x488 = -1LL;
	int32_t t121 = -7873836;

    t121 = (x485>((x486^x487)>x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	int64_t x491 = -1LL;
	int8_t x492 = 2;

    t122 = (x489>((x490^x491)>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -143;
	uint16_t x494 = 12U;
	uint32_t x495 = 2U;
	uint16_t x496 = 15259U;
	volatile int32_t t123 = 57972;

    t123 = (x493>((x494^x495)>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	volatile int64_t x499 = -1LL;
	static int32_t x500 = INT32_MIN;
	volatile int32_t t124 = 1838450;

    t124 = (x497>((x498^x499)>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = INT32_MAX;
	static int32_t x502 = 34;
	int8_t x503 = -1;
	int8_t x504 = INT8_MIN;
	volatile int32_t t125 = 142603563;

    t125 = (x501>((x502^x503)>x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 7998U;
	static uint16_t x506 = 4066U;
	int32_t x507 = INT32_MAX;
	int8_t x508 = -47;
	int32_t t126 = 32668844;

    t126 = (x505>((x506^x507)>x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = -1;
	int32_t x510 = INT32_MIN;
	volatile int8_t x511 = INT8_MIN;
	int64_t x512 = -2402236854348943LL;
	static int32_t t127 = 129412;

    t127 = (x509>((x510^x511)>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = -15LL;
	volatile uint8_t x514 = 26U;
	uint8_t x515 = 1U;
	volatile int32_t x516 = INT32_MIN;
	static int32_t t128 = -223;

    t128 = (x513>((x514^x515)>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 1U;
	int32_t x518 = INT32_MAX;
	volatile uint8_t x519 = 0U;
	int32_t x520 = 20289064;
	volatile int32_t t129 = 23;

    t129 = (x517>((x518^x519)>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x522 = INT64_MIN;
	int32_t x523 = INT32_MIN;
	uint8_t x524 = 1U;

    t130 = (x521>((x522^x523)>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MAX;
	int32_t x526 = INT32_MIN;
	volatile int32_t t131 = -522761;

    t131 = (x525>((x526^x527)>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x529 = -1;
	volatile int8_t x530 = 9;
	uint64_t x532 = 12LLU;
	volatile int32_t t132 = 1;

    t132 = (x529>((x530^x531)>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x533 = -484;
	int64_t x534 = -128LL;
	static int32_t x535 = -1;
	int32_t t133 = 1286179;

    t133 = (x533>((x534^x535)>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x538 = 766U;
	int8_t x540 = -1;
	int32_t t134 = 7961764;

    t134 = (x537>((x538^x539)>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	volatile uint32_t x542 = UINT32_MAX;
	int8_t x543 = INT8_MIN;
	int32_t t135 = -2510;

    t135 = (x541>((x542^x543)>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = 2;
	volatile uint64_t x546 = 7LLU;
	int8_t x548 = 1;
	static volatile int32_t t136 = -463;

    t136 = (x545>((x546^x547)>x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MAX;
	int8_t x550 = -9;
	volatile int8_t x551 = INT8_MIN;
	int64_t x552 = -976427486034194LL;
	int32_t t137 = 324;

    t137 = (x549>((x550^x551)>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	uint64_t x555 = 46129281612LLU;
	int8_t x556 = INT8_MIN;
	int32_t t138 = -6792999;

    t138 = (x553>((x554^x555)>x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 2936U;
	static volatile int8_t x558 = INT8_MIN;
	int8_t x559 = INT8_MIN;
	static volatile uint64_t x560 = UINT64_MAX;
	int32_t t139 = 13650875;

    t139 = (x557>((x558^x559)>x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	int16_t x562 = INT16_MIN;
	int16_t x563 = INT16_MIN;
	static uint64_t x564 = 2461902355966838442LLU;

    t140 = (x561>((x562^x563)>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x566 = INT64_MIN;
	volatile int8_t x567 = INT8_MIN;

    t141 = (x565>((x566^x567)>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -685400846197LL;
	int16_t x571 = INT16_MIN;
	int32_t t142 = -2583;

    t142 = (x569>((x570^x571)>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = 46283594LL;
	static uint16_t x574 = 2U;
	int16_t x575 = 2;
	int64_t x576 = -54LL;
	volatile int32_t t143 = -39629227;

    t143 = (x573>((x574^x575)>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x579 = -28;
	int32_t x580 = INT32_MAX;
	volatile int32_t t144 = 1016660;

    t144 = (x577>((x578^x579)>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = -8;
	uint64_t x583 = 1852933LLU;
	static int64_t x584 = INT64_MAX;
	int32_t t145 = -783;

    t145 = (x581>((x582^x583)>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -1LL;
	uint64_t x586 = 11977LLU;
	volatile int8_t x587 = -1;
	int64_t x588 = 1634625693LL;
	static volatile int32_t t146 = 0;

    t146 = (x585>((x586^x587)>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = 7;
	int8_t x590 = -1;
	int8_t x592 = -1;
	volatile int32_t t147 = 0;

    t147 = (x589>((x590^x591)>x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x595 = UINT16_MAX;
	int16_t x596 = INT16_MAX;
	static volatile int32_t t148 = -21;

    t148 = (x593>((x594^x595)>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x598 = 872962U;
	volatile uint32_t x599 = 6U;
	int64_t x600 = INT64_MIN;
	volatile int32_t t149 = 1;

    t149 = (x597>((x598^x599)>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = INT32_MIN;
	int32_t x602 = 0;
	volatile int64_t x604 = INT64_MIN;
	volatile int32_t t150 = 279693;

    t150 = (x601>((x602^x603)>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	int8_t x606 = -1;
	static uint16_t x607 = 1U;
	static int32_t t151 = 870;

    t151 = (x605>((x606^x607)>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x610 = UINT64_MAX;
	static int16_t x612 = 940;

    t152 = (x609>((x610^x611)>x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = INT8_MIN;
	uint8_t x615 = UINT8_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t153 = 1670909;

    t153 = (x613>((x614^x615)>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x618 = -1;
	int32_t x620 = -1;
	int32_t t154 = 1;

    t154 = (x617>((x618^x619)>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = INT8_MIN;
	volatile int8_t x624 = INT8_MAX;
	int32_t t155 = -33;

    t155 = (x621>((x622^x623)>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = 7;
	int32_t x626 = -11748;
	uint8_t x627 = 0U;
	uint8_t x628 = 1U;
	static volatile int32_t t156 = 15110;

    t156 = (x625>((x626^x627)>x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x630 = 1U;
	static int16_t x631 = INT16_MIN;
	int32_t x632 = INT32_MAX;
	static volatile int32_t t157 = -56;

    t157 = (x629>((x630^x631)>x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x635 = -1LL;
	static uint16_t x636 = UINT16_MAX;

    t158 = (x633>((x634^x635)>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x638 = 12U;
	uint8_t x640 = 30U;
	static volatile int32_t t159 = -580584226;

    t159 = (x637>((x638^x639)>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -52172014412574983LL;
	static volatile int8_t x642 = INT8_MIN;
	volatile int32_t x643 = INT32_MAX;
	uint16_t x644 = UINT16_MAX;

    t160 = (x641>((x642^x643)>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = UINT64_MAX;
	int8_t x646 = -20;
	volatile uint32_t x647 = 48U;
	int8_t x648 = -2;
	int32_t t161 = 366577461;

    t161 = (x645>((x646^x647)>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 0U;
	int8_t x650 = INT8_MAX;
	volatile int8_t x651 = INT8_MAX;

    t162 = (x649>((x650^x651)>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	volatile int8_t x654 = -17;
	int16_t x655 = 3838;
	volatile int64_t x656 = 1076LL;

    t163 = (x653>((x654^x655)>x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	int16_t x659 = INT16_MIN;
	int16_t x660 = -43;
	int32_t t164 = 1950;

    t164 = (x657>((x658^x659)>x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x662 = INT32_MIN;
	uint32_t x663 = 0U;
	static volatile uint32_t x664 = 1542393459U;

    t165 = (x661>((x662^x663)>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x667 = -1LL;

    t166 = (x665>((x666^x667)>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	static uint8_t x670 = UINT8_MAX;
	int32_t x671 = -243916;
	static int32_t t167 = 78788825;

    t167 = (x669>((x670^x671)>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = -43;
	uint32_t x674 = UINT32_MAX;
	int8_t x675 = -1;
	int16_t x676 = INT16_MAX;
	volatile int32_t t168 = -1;

    t168 = (x673>((x674^x675)>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 45U;
	static int16_t x678 = INT16_MIN;
	uint32_t x679 = 1242474U;
	volatile int32_t x680 = INT32_MAX;

    t169 = (x677>((x678^x679)>x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	uint16_t x682 = 2673U;
	volatile int32_t t170 = -1211;

    t170 = (x681>((x682^x683)>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x685 = 51U;
	int16_t x686 = INT16_MIN;
	int64_t x687 = 12656698LL;
	uint8_t x688 = UINT8_MAX;

    t171 = (x685>((x686^x687)>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x689 = 6U;
	int64_t x690 = -395022635332807LL;
	volatile int32_t t172 = -793943;

    t172 = (x689>((x690^x691)>x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	volatile uint16_t x694 = UINT16_MAX;
	int64_t x695 = INT64_MAX;
	static volatile uint64_t x696 = 24506821512748306LLU;
	volatile int32_t t173 = -1;

    t173 = (x693>((x694^x695)>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	uint64_t x698 = UINT64_MAX;
	static uint32_t x700 = UINT32_MAX;
	int32_t t174 = 2085176;

    t174 = (x697>((x698^x699)>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	uint64_t x703 = 7736529LLU;
	uint16_t x704 = 1876U;
	int32_t t175 = -128626343;

    t175 = (x701>((x702^x703)>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	static uint16_t x706 = 62U;
	int64_t x707 = INT64_MAX;
	int8_t x708 = -1;
	static int32_t t176 = -6396;

    t176 = (x705>((x706^x707)>x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = 4;
	int64_t x710 = -445169119LL;
	static volatile uint16_t x711 = 11U;
	static uint8_t x712 = 125U;
	int32_t t177 = 106;

    t177 = (x709>((x710^x711)>x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x714 = -11638;
	int16_t x715 = INT16_MAX;
	static uint8_t x716 = 88U;
	volatile int32_t t178 = 270;

    t178 = (x713>((x714^x715)>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = -6;
	int8_t x718 = -1;
	uint16_t x719 = 2688U;
	static int16_t x720 = -1;
	static volatile int32_t t179 = 72131;

    t179 = (x717>((x718^x719)>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = INT32_MAX;
	static int64_t x722 = INT64_MIN;
	uint8_t x723 = 51U;
	int8_t x724 = INT8_MIN;
	volatile int32_t t180 = -15;

    t180 = (x721>((x722^x723)>x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x727 = 651353212U;
	volatile int16_t x728 = INT16_MAX;
	volatile int32_t t181 = 943145;

    t181 = (x725>((x726^x727)>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = -1;
	volatile uint16_t x730 = 2249U;
	int32_t x732 = -1;
	static int32_t t182 = -7967269;

    t182 = (x729>((x730^x731)>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	static int32_t x735 = INT32_MIN;
	volatile uint32_t x736 = UINT32_MAX;

    t183 = (x733>((x734^x735)>x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x739 = 2;
	int16_t x740 = INT16_MIN;

    t184 = (x737>((x738^x739)>x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	int64_t x742 = INT64_MAX;
	uint16_t x743 = 716U;
	int32_t x744 = 3;
	int32_t t185 = 742127063;

    t185 = (x741>((x742^x743)>x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -1;
	static uint32_t x747 = 427752U;
	int64_t x748 = INT64_MIN;

    t186 = (x745>((x746^x747)>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	static int8_t x750 = INT8_MAX;
	int8_t x751 = -1;
	volatile int32_t x752 = -1;
	volatile int32_t t187 = 8260;

    t187 = (x749>((x750^x751)>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x753 = 34466196601140LLU;
	volatile int64_t x754 = INT64_MIN;
	int32_t x755 = -16128;
	int16_t x756 = -1;
	static volatile int32_t t188 = -3;

    t188 = (x753>((x754^x755)>x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 7U;
	int8_t x758 = -32;
	static int64_t x759 = -1LL;
	int32_t x760 = -1;
	static volatile int32_t t189 = -12119951;

    t189 = (x757>((x758^x759)>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x761 = -1;
	uint32_t x763 = 10245466U;
	volatile int32_t t190 = -522975;

    t190 = (x761>((x762^x763)>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -1;
	uint8_t x766 = 25U;
	int64_t x767 = -1LL;
	int16_t x768 = -28;
	volatile int32_t t191 = -776898;

    t191 = (x765>((x766^x767)>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = INT16_MIN;
	uint64_t x771 = 3724575359979334539LLU;

    t192 = (x769>((x770^x771)>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = INT32_MIN;
	int64_t x776 = -4552263736851932064LL;

    t193 = (x773>((x774^x775)>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x777 = INT32_MIN;
	static int64_t x778 = INT64_MIN;
	int16_t x779 = INT16_MIN;
	uint64_t x780 = 316LLU;
	volatile int32_t t194 = 5602;

    t194 = (x777>((x778^x779)>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1LL;
	int32_t x782 = -1;
	int16_t x783 = INT16_MAX;
	static volatile uint64_t x784 = 265866398LLU;
	volatile int32_t t195 = -747;

    t195 = (x781>((x782^x783)>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	volatile int16_t x786 = -1;
	uint64_t x787 = UINT64_MAX;
	static uint32_t x788 = 83417U;
	int32_t t196 = -21;

    t196 = (x785>((x786^x787)>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x790 = 3518241U;
	uint8_t x791 = UINT8_MAX;
	uint16_t x792 = 29379U;
	volatile int32_t t197 = 40184;

    t197 = (x789>((x790^x791)>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = INT16_MIN;
	static uint16_t x795 = 54U;
	int8_t x796 = 5;
	int32_t t198 = 1652;

    t198 = (x793>((x794^x795)>x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	uint64_t x798 = 86545326957260LLU;
	int32_t x799 = INT32_MIN;
	uint64_t x800 = UINT64_MAX;
	int32_t t199 = -165160;

    t199 = (x797>((x798^x799)>x800));

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

