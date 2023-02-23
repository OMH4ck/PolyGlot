
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

uint8_t x10 = UINT8_MAX;
int16_t x11 = INT16_MIN;
int8_t x17 = -1;
int16_t x26 = 32;
int32_t x32 = INT32_MIN;
static int32_t t11 = -1383947;
int32_t x59 = INT32_MIN;
int64_t x61 = -10569009574728763LL;
volatile uint32_t x62 = 194668U;
static uint32_t x65 = 1996U;
volatile int64_t x66 = -11546101355135LL;
static volatile uint64_t t16 = 10474120401670LLU;
int16_t x70 = INT16_MIN;
int32_t x76 = INT32_MIN;
static volatile int64_t t18 = -1LL;
static int16_t x79 = -3063;
uint16_t x81 = 3898U;
int16_t x82 = INT16_MAX;
uint32_t x83 = UINT32_MAX;
uint32_t t20 = 108147864U;
int64_t x85 = -1LL;
static uint64_t x87 = 1676639567917336002LLU;
volatile int64_t x91 = INT64_MIN;
volatile uint64_t t24 = 150419783309496LLU;
int32_t x102 = -1;
volatile uint64_t t25 = UINT64_MAX;
volatile uint32_t t26 = UINT32_MAX;
volatile int32_t x113 = INT32_MIN;
int16_t x117 = INT16_MIN;
int32_t x123 = INT32_MAX;
int64_t x131 = INT64_MIN;
uint64_t t32 = 0LLU;
volatile int8_t x137 = INT8_MAX;
int64_t x140 = -1LL;
static volatile int64_t x144 = -11231115757LL;
int16_t x147 = INT16_MAX;
static uint64_t x151 = 23321972984LLU;
uint32_t x154 = 2185U;
volatile uint8_t x162 = 31U;
int16_t x166 = INT16_MIN;
volatile int16_t x179 = INT16_MIN;
static int32_t x185 = -1;
static int8_t x187 = INT8_MAX;
int8_t x189 = -1;
static volatile int64_t x199 = INT64_MAX;
int64_t x201 = -1LL;
static int16_t x203 = INT16_MAX;
uint16_t x210 = 2830U;
int64_t x212 = -1LL;
int8_t x215 = INT8_MAX;
uint64_t x219 = UINT64_MAX;
volatile int64_t x223 = -813994319LL;
volatile int64_t t55 = 726928221855875422LL;
static int16_t x228 = INT16_MIN;
uint64_t t56 = 3656302709658LLU;
uint16_t x231 = 5950U;
volatile uint32_t t57 = UINT32_MAX;
uint32_t x242 = UINT32_MAX;
int64_t t60 = -241114488671456846LL;
static int8_t x248 = INT8_MIN;
static int32_t x250 = INT32_MAX;
uint64_t x252 = UINT64_MAX;
int32_t x253 = 348;
int32_t t63 = 31475;
volatile int64_t t64 = -259380039962LL;
int8_t x263 = 7;
int8_t x266 = INT8_MIN;
int32_t t66 = -194039805;
int16_t x275 = 4672;
uint16_t x276 = 22791U;
int8_t x279 = INT8_MIN;
volatile int64_t x286 = INT64_MAX;
uint8_t x287 = UINT8_MAX;
volatile int32_t x289 = 22;
static uint8_t x304 = 1U;
volatile uint32_t x306 = UINT32_MAX;
static uint16_t x309 = 36U;
int64_t t77 = 526106LL;
static volatile int8_t x317 = -9;
int64_t x328 = -1LL;
uint32_t x334 = 1004U;
int8_t x336 = 1;
uint32_t x341 = 47U;
int16_t x343 = INT16_MIN;
volatile int64_t x347 = 1038354LL;
static uint64_t x353 = UINT64_MAX;
uint64_t t89 = UINT64_MAX;
static int32_t x361 = 596;
volatile int64_t t90 = INT64_MAX;
volatile uint8_t x377 = 0U;
static volatile uint32_t t94 = 189172U;
int64_t x381 = INT64_MIN;
static int8_t x384 = -7;
int64_t t95 = -2292587683041422668LL;
int64_t x387 = -1LL;
static uint8_t x391 = UINT8_MAX;
int8_t x393 = INT8_MIN;
volatile int32_t x395 = INT32_MIN;
volatile int64_t t99 = -9292681448981LL;
uint64_t x408 = UINT64_MAX;
uint64_t t101 = 7465942LLU;
int8_t x409 = -1;
static int32_t x418 = 1;
uint8_t x420 = UINT8_MAX;
int8_t x423 = -1;
static uint64_t x441 = UINT64_MAX;
static int16_t x442 = INT16_MIN;
uint64_t t110 = UINT64_MAX;
uint64_t x447 = 26476216439LLU;
volatile uint64_t t111 = 9LLU;
int8_t x449 = INT8_MAX;
volatile int64_t t112 = 3859152LL;
static int64_t x461 = 354528491LL;
int16_t x462 = -1;
int32_t x467 = -66203204;
int16_t x470 = INT16_MAX;
int32_t x471 = INT32_MIN;
int8_t x478 = -37;
int8_t x479 = -5;
int16_t x480 = INT16_MIN;
static int32_t t119 = -443640;
static volatile uint64_t x481 = 21910LLU;
uint32_t x483 = UINT32_MAX;
uint8_t x485 = UINT8_MAX;
int64_t x488 = INT64_MAX;
int8_t x489 = INT8_MIN;
uint16_t x490 = 4057U;
int32_t t122 = 14836224;
volatile int64_t x494 = -67895LL;
static uint8_t x498 = UINT8_MAX;
int64_t x499 = INT64_MAX;
uint16_t x503 = 0U;
static int64_t x504 = 1225LL;
int8_t x505 = -1;
static int8_t x536 = 29;
int32_t x538 = INT32_MIN;
uint16_t x548 = UINT16_MAX;
uint8_t x549 = UINT8_MAX;
volatile uint32_t x551 = 6432656U;
volatile int64_t t139 = 3342490LL;
uint64_t x565 = 2827647290654LLU;
int64_t x571 = -834895268LL;
int16_t x589 = 0;
volatile uint32_t x590 = UINT32_MAX;
static uint32_t x592 = 11U;
volatile int32_t x605 = -1;
volatile int64_t t151 = 1LL;
uint8_t x612 = 42U;
int32_t t152 = -6;
volatile int32_t x617 = -1;
uint8_t x620 = 31U;
uint8_t x621 = 0U;
int8_t x622 = INT8_MAX;
int32_t x629 = -1;
uint16_t x630 = 7U;
static int32_t x632 = 111;
int32_t x633 = INT32_MIN;
volatile uint32_t t158 = 2288U;
int8_t x644 = INT8_MIN;
uint64_t x646 = 539358161030656LLU;
uint64_t t161 = 1126499971354029777LLU;
int32_t x650 = INT32_MIN;
uint32_t x655 = 6101U;
uint64_t x660 = 12821834LLU;
int8_t x662 = 1;
volatile uint64_t t165 = 109517223158729LLU;
int16_t x671 = INT16_MIN;
uint16_t x677 = 23371U;
int16_t x683 = INT16_MIN;
static uint64_t x687 = 2875112LLU;
int8_t x688 = INT8_MIN;
volatile uint32_t t172 = 442768073U;
volatile int16_t x694 = 8348;
static uint64_t x699 = UINT64_MAX;
volatile int16_t x703 = 46;
volatile int64_t x709 = -140533075583264739LL;
volatile int64_t t177 = -8989152172LL;
int16_t x714 = -2108;
volatile int64_t t181 = 53LL;
volatile int32_t x731 = INT32_MIN;
static int64_t x732 = -1570634456557451898LL;
static int16_t x735 = INT16_MIN;
uint64_t x737 = 8LLU;
uint8_t x742 = 5U;
int16_t x746 = INT16_MIN;
int32_t x748 = INT32_MAX;
static volatile int32_t t187 = -495353;
uint32_t x754 = 8U;
volatile uint32_t t188 = 1887240027U;
volatile int8_t x765 = -1;
static int64_t x767 = INT64_MIN;
int8_t x768 = INT8_MIN;
int32_t x770 = -1;
int64_t x774 = 2095070174LL;
int16_t x775 = INT16_MAX;
static int64_t x781 = INT64_MIN;
uint64_t x782 = 2018173772010LLU;
int64_t x792 = -1LL;
int32_t x796 = -1;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int32_t x2 = INT32_MIN;
	static int64_t x3 = INT64_MAX;
	volatile int32_t x4 = INT32_MAX;
	volatile int64_t t0 = -5557404540826LL;

    t0 = (x1|((x2|x3)&x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint32_t x5 = 4U;
	static volatile int32_t x6 = -30;
	uint64_t x7 = 55LLU;
	volatile int8_t x8 = 3;
	uint64_t t1 = 860726LLU;

    t1 = (x5|((x6|x7)&x8));

    if (t1 != 7LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -526287910;

    t2 = (x9|((x10|x11)&x12));

    if (t2 != -32641) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x13 = 0U;
	static volatile int64_t x14 = INT64_MIN;
	int16_t x15 = 4;
	int8_t x16 = -1;
	static int64_t t3 = 19LL;

    t3 = (x13|((x14|x15)&x16));

    if (t3 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MIN;
	int8_t x20 = 0;
	static int32_t t4 = -3439967;

    t4 = (x17|((x18|x19)&x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -13235845;
	volatile int64_t x22 = -1LL;
	int32_t x23 = INT32_MIN;
	static int8_t x24 = INT8_MAX;
	int64_t t5 = -527145864LL;

    t5 = (x21|((x22|x23)&x24));

    if (t5 != -13235841LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	uint16_t x27 = 36U;
	static int32_t x28 = -49;
	int64_t t6 = -50083LL;

    t6 = (x25|((x26|x27)&x28));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -2627010LL;
	uint16_t x30 = 5097U;
	int32_t x31 = INT32_MIN;
	int64_t t7 = -113022214761812433LL;

    t7 = (x29|((x30|x31)&x32));

    if (t7 != -2627010LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x33 = INT8_MIN;
	uint32_t x34 = UINT32_MAX;
	volatile uint64_t x35 = 136433613241LLU;
	int16_t x36 = INT16_MIN;
	uint64_t t8 = 4590361LLU;

    t8 = (x33|((x34|x35)&x36));

    if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 24133U;
	volatile uint16_t x38 = UINT16_MAX;
	volatile uint8_t x39 = 1U;
	static volatile int64_t x40 = 1360564LL;
	static int64_t t9 = 67761589LL;

    t9 = (x37|((x38|x39)&x40));

    if (t9 != 57077LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	static int8_t x42 = 3;
	int16_t x43 = -1;
	uint32_t x44 = 759048860U;
	static uint32_t t10 = 590877896U;

    t10 = (x41|((x42|x43)&x44));

    if (t10 != 4294945436U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	static int32_t x46 = INT32_MIN;
	int32_t x47 = -1;
	static volatile int16_t x48 = -1;

    t11 = (x45|((x46|x47)&x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = INT64_MAX;
	volatile int32_t x50 = 54;
	static int8_t x51 = INT8_MAX;
	static int64_t x52 = INT64_MIN;
	int64_t t12 = INT64_MAX;

    t12 = (x49|((x50|x51)&x52));

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = -1;
	int32_t x54 = -1;
	static int8_t x55 = INT8_MIN;
	int16_t x56 = -1;
	volatile int32_t t13 = 98936;

    t13 = (x53|((x54|x55)&x56));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int16_t x58 = INT16_MIN;
	int16_t x60 = -1229;
	volatile int64_t t14 = -804274927947547097LL;

    t14 = (x57|((x58|x59)&x60));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x63 = -1;
	int8_t x64 = 6;
	int64_t t15 = 0LL;

    t15 = (x61|((x62|x63)&x64));

    if (t15 != -10569009574728761LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x67 = UINT8_MAX;
	uint64_t x68 = 31560179280392LLU;

    t16 = (x65|((x66|x67)&x68));

    if (t16 != 22214174994380LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = INT16_MIN;
	int8_t x71 = -1;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = 530;

    t17 = (x69|((x70|x71)&x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	static int64_t x74 = INT64_MIN;
	int64_t x75 = 53LL;

    t18 = (x73|((x74|x75)&x76));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = 31;
	int32_t x78 = 323347;
	volatile uint8_t x80 = 0U;
	static int32_t t19 = 993884870;

    t19 = (x77|((x78|x79)&x80));

    if (t19 != 31) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x84 = INT32_MIN;

    t20 = (x81|((x82|x83)&x84));

    if (t20 != 2147487546U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = INT8_MAX;
	uint16_t x88 = 25U;
	uint64_t t21 = UINT64_MAX;

    t21 = (x85|((x86|x87)&x88));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	volatile uint64_t x90 = 119286742LLU;
	int64_t x92 = 22LL;
	uint64_t t22 = 8996722758LLU;

    t22 = (x89|((x90|x91)&x92));

    if (t22 != 9223372036854775830LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = 1U;
	volatile int16_t x94 = INT16_MIN;
	int16_t x95 = -1;
	int64_t x96 = INT64_MAX;
	static int64_t t23 = INT64_MAX;

    t23 = (x93|((x94|x95)&x96));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 4;
	uint64_t x98 = 1034503506LLU;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = INT64_MAX;

    t24 = (x97|((x98|x99)&x100));

    if (t24 != 1034503679LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x101 = 329LLU;
	int8_t x103 = INT8_MIN;
	int32_t x104 = -1;

    t25 = (x101|((x102|x103)&x104));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = UINT32_MAX;
	static int8_t x106 = -1;
	volatile uint32_t x107 = UINT32_MAX;
	int32_t x108 = -822261630;

    t26 = (x105|((x106|x107)&x108));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 4U;
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MIN;
	int64_t x112 = -2612921526579720932LL;
	int64_t t27 = -53160069138723167LL;

    t27 = (x109|((x110|x111)&x112));

    if (t27 != -2612921526579724284LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = INT16_MAX;
	int8_t x115 = INT8_MAX;
	int8_t x116 = 3;
	int32_t t28 = 2;

    t28 = (x113|((x114|x115)&x116));

    if (t28 != -2147483645) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x118 = 14999U;
	volatile int16_t x119 = -1;
	int32_t x120 = -151;
	volatile uint32_t t29 = 3525612U;

    t29 = (x117|((x118|x119)&x120));

    if (t29 != 4294967145U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x121 = 1U;
	static int32_t x122 = INT32_MAX;
	uint32_t x124 = UINT32_MAX;
	volatile uint32_t t30 = 30485U;

    t30 = (x121|((x122|x123)&x124));

    if (t30 != 2147483647U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	uint32_t x126 = UINT32_MAX;
	static int16_t x127 = -1;
	int64_t x128 = INT64_MAX;
	volatile int64_t t31 = 16840501695730LL;

    t31 = (x125|((x126|x127)&x128));

    if (t31 != 4294967295LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1974841180816LL;
	uint64_t x130 = 1904LLU;
	volatile int32_t x132 = -132566476;

    t32 = (x129|((x130|x131)&x132));

    if (t32 != 18446742098868371312LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = 1;
	uint64_t x134 = 15LLU;
	uint64_t x135 = 96366673410639LLU;
	uint64_t x136 = 716876324284618829LLU;
	uint64_t t33 = 196LLU;

    t33 = (x133|((x134|x135)&x136));

    if (t33 != 91396909701197LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int64_t t34 = -2659585584LL;

    t34 = (x137|((x138|x139)&x140));

    if (t34 != -32641LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x141 = -1LL;
	int32_t x142 = -61474117;
	static uint32_t x143 = UINT32_MAX;
	int64_t t35 = 3624LL;

    t35 = (x141|((x142|x143)&x144));

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = 2;
	static uint32_t x146 = 39U;
	static volatile int16_t x148 = INT16_MIN;
	uint32_t t36 = 292465U;

    t36 = (x145|((x146|x147)&x148));

    if (t36 != 2U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 3U;
	int64_t x150 = INT64_MAX;
	uint16_t x152 = 482U;
	volatile uint64_t t37 = 3142698577999556283LLU;

    t37 = (x149|((x150|x151)&x152));

    if (t37 != 483LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x153 = -1;
	int64_t x155 = -5984974LL;
	static uint32_t x156 = 445575U;
	int64_t t38 = -8178012690919071LL;

    t38 = (x153|((x154|x155)&x156));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 1656353;
	uint64_t x158 = 1844368812101LLU;
	int64_t x159 = 1LL;
	int32_t x160 = INT32_MIN;
	volatile uint64_t t39 = 3LLU;

    t39 = (x157|((x158|x159)&x160));

    if (t39 != 1842542626337LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	static volatile int8_t x163 = 1;
	uint64_t x164 = UINT64_MAX;
	static volatile uint64_t t40 = 1031179800LLU;

    t40 = (x161|((x162|x163)&x164));

    if (t40 != 2147483647LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 0;
	volatile int16_t x167 = 6016;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = INT32_MIN;

    t41 = (x165|((x166|x167)&x168));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 7;
	uint64_t x170 = UINT64_MAX;
	static int32_t x171 = INT32_MIN;
	volatile uint64_t x172 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

    t42 = (x169|((x170|x171)&x172));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x173 = INT64_MIN;
	static int64_t x174 = INT64_MIN;
	static volatile uint8_t x175 = 92U;
	uint32_t x176 = UINT32_MAX;
	int64_t t43 = 675338012369606LL;

    t43 = (x173|((x174|x175)&x176));

    if (t43 != -9223372036854775716LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x177 = INT32_MAX;
	uint32_t x178 = 602952U;
	int8_t x180 = -47;
	volatile uint32_t t44 = UINT32_MAX;

    t44 = (x177|((x178|x179)&x180));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	int64_t x182 = -1LL;
	static int32_t x183 = 210596495;
	int8_t x184 = -63;
	volatile int64_t t45 = -501219331149158LL;

    t45 = (x181|((x182|x183)&x184));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = UINT64_MAX;
	int16_t x188 = -1;
	uint64_t t46 = UINT64_MAX;

    t46 = (x185|((x186|x187)&x188));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = -40;
	static volatile uint64_t x191 = 5236529421271LLU;
	static int64_t x192 = INT64_MIN;
	uint64_t t47 = UINT64_MAX;

    t47 = (x189|((x190|x191)&x192));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x193 = -1LL;
	volatile int16_t x194 = INT16_MIN;
	int64_t x195 = INT64_MIN;
	static int8_t x196 = INT8_MAX;
	static int64_t t48 = -240LL;

    t48 = (x193|((x194|x195)&x196));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int32_t x198 = -458;
	int32_t x200 = -1;
	int64_t t49 = -182996527LL;

    t49 = (x197|((x198|x199)&x200));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = INT16_MAX;
	uint32_t x204 = 7625U;
	volatile int64_t t50 = 154341LL;

    t50 = (x201|((x202|x203)&x204));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x205 = 238584U;
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	int64_t x208 = INT64_MAX;
	static volatile int64_t t51 = INT64_MAX;

    t51 = (x205|((x206|x207)&x208));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	uint32_t x211 = 24164192U;
	volatile int64_t t52 = -553045183724LL;

    t52 = (x209|((x210|x211)&x212));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	uint32_t x214 = 184253308U;
	volatile int8_t x216 = 1;
	static uint32_t t53 = UINT32_MAX;

    t53 = (x213|((x214|x215)&x216));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = -1;
	int8_t x218 = 0;
	static int16_t x220 = INT16_MAX;
	uint64_t t54 = UINT64_MAX;

    t54 = (x217|((x218|x219)&x220));

    if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	int8_t x224 = -1;

    t55 = (x221|((x222|x223)&x224));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 10037684902LLU;
	static int64_t x226 = INT64_MIN;
	volatile int16_t x227 = -1;

    t56 = (x225|((x226|x227)&x228));

    if (t56 != 18446744073709546150LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	int16_t x232 = -1;

    t57 = (x229|((x230|x231)&x232));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 253225LLU;
	int16_t x234 = -1;
	uint16_t x235 = 88U;
	volatile int8_t x236 = 1;
	volatile uint64_t t58 = 6102LLU;

    t58 = (x233|((x234|x235)&x236));

    if (t58 != 253225LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x237 = 0U;
	uint32_t x238 = 18U;
	uint16_t x239 = 4U;
	int8_t x240 = -33;
	uint32_t t59 = 7483U;

    t59 = (x237|((x238|x239)&x240));

    if (t59 != 22U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	int8_t x243 = INT8_MAX;
	volatile int32_t x244 = INT32_MAX;

    t60 = (x241|((x242|x243)&x244));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -78LL;
	static uint64_t x246 = 2883366457889375574LLU;
	int32_t x247 = INT32_MIN;
	static uint64_t t61 = 15418094LLU;

    t61 = (x245|((x246|x247)&x248));

    if (t61 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	uint32_t x251 = 5557662U;
	uint64_t t62 = UINT64_MAX;

    t62 = (x249|((x250|x251)&x252));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = INT8_MIN;
	volatile int8_t x255 = -1;
	int8_t x256 = INT8_MIN;

    t63 = (x253|((x254|x255)&x256));

    if (t63 != -36) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = 21;
	int32_t x258 = -5485442;
	int64_t x259 = -1LL;
	int8_t x260 = INT8_MIN;

    t64 = (x257|((x258|x259)&x260));

    if (t64 != -107LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 17U;
	int32_t x262 = -1;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -184396;

    t65 = (x261|((x262|x263)&x264));

    if (t65 != -2147483631) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MAX;
	volatile int16_t x267 = INT16_MAX;
	volatile int8_t x268 = 6;

    t66 = (x265|((x266|x267)&x268));

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	uint16_t x270 = 21764U;
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 59U;
	volatile uint32_t t67 = 342324980U;

    t67 = (x269|((x270|x271)&x272));

    if (t67 != 65535U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MAX;
	int16_t x274 = INT16_MIN;
	int32_t t68 = 4379;

    t68 = (x273|((x274|x275)&x276));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -1LL;
	int32_t x278 = -16509120;
	int64_t x280 = INT64_MAX;
	int64_t t69 = -45261247491340816LL;

    t69 = (x277|((x278|x279)&x280));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 63185136LL;
	volatile int16_t x282 = INT16_MIN;
	volatile int16_t x283 = INT16_MAX;
	int64_t x284 = -1LL;
	static int64_t t70 = 523350348640LL;

    t70 = (x281|((x282|x283)&x284));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = UINT16_MAX;
	uint64_t x288 = 1047533LLU;
	uint64_t t71 = 32993679LLU;

    t71 = (x285|((x286|x287)&x288));

    if (t71 != 1048575LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = -1;
	int64_t x291 = 3788036422851LL;
	int8_t x292 = -1;
	int64_t t72 = 2195374236166LL;

    t72 = (x289|((x290|x291)&x292));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 1435780446291375LLU;
	int64_t x294 = INT64_MIN;
	uint32_t x295 = 2U;
	int32_t x296 = INT32_MIN;
	volatile uint64_t t73 = 2303349784821LLU;

    t73 = (x293|((x294|x295)&x296));

    if (t73 != 9224807817301067183LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = INT32_MIN;
	int32_t x298 = -122;
	uint64_t x299 = UINT64_MAX;
	uint8_t x300 = 20U;
	volatile uint64_t t74 = 1339LLU;

    t74 = (x297|((x298|x299)&x300));

    if (t74 != 18446744071562067988LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = INT64_MAX;
	int32_t x302 = -1;
	static int32_t x303 = INT32_MIN;
	int64_t t75 = INT64_MAX;

    t75 = (x301|((x302|x303)&x304));

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = 0;
	uint64_t x307 = 1030710353633262LLU;
	uint16_t x308 = 20U;
	volatile uint64_t t76 = 34828LLU;

    t76 = (x305|((x306|x307)&x308));

    if (t76 != 20LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x310 = INT64_MIN;
	volatile uint32_t x311 = 12996U;
	int64_t x312 = INT64_MIN;

    t77 = (x309|((x310|x311)&x312));

    if (t77 != -9223372036854775772LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 15U;
	uint64_t x314 = 43992127279LLU;
	volatile int16_t x315 = INT16_MAX;
	int8_t x316 = -1;
	volatile uint64_t t78 = 97347346388LLU;

    t78 = (x313|((x314|x315)&x316));

    if (t78 != 43992154111LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x318 = INT64_MIN;
	uint64_t x319 = UINT64_MAX;
	int16_t x320 = -26;
	volatile uint64_t t79 = 423047035537266134LLU;

    t79 = (x317|((x318|x319)&x320));

    if (t79 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = 0;
	int8_t x322 = INT8_MIN;
	static volatile uint8_t x323 = 14U;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = -5;

    t80 = (x321|((x322|x323)&x324));

    if (t80 != 142) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x325 = UINT16_MAX;
	int8_t x326 = INT8_MIN;
	uint16_t x327 = UINT16_MAX;
	int64_t t81 = 246052LL;

    t81 = (x325|((x326|x327)&x328));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = -1;
	uint16_t x330 = 0U;
	static int16_t x331 = 0;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -113;

    t82 = (x329|((x330|x331)&x332));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -682685;
	static int64_t x335 = -8448601741575LL;
	volatile int64_t t83 = -37582482927LL;

    t83 = (x333|((x334|x335)&x336));

    if (t83 != -682685LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	uint32_t x338 = 2708408U;
	int16_t x339 = 8121;
	int32_t x340 = -1;
	static uint32_t t84 = UINT32_MAX;

    t84 = (x337|((x338|x339)&x340));

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = 8;
	int8_t x344 = -21;
	volatile uint32_t t85 = 81U;

    t85 = (x341|((x342|x343)&x344));

    if (t85 != 4294934575U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = INT16_MIN;
	static int32_t x346 = INT32_MAX;
	uint32_t x348 = UINT32_MAX;
	int64_t t86 = 18681979LL;

    t86 = (x345|((x346|x347)&x348));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	static volatile int32_t x350 = 24;
	static int16_t x351 = INT16_MIN;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t87 = UINT64_MAX;

    t87 = (x349|((x350|x351)&x352));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MAX;
	int32_t x355 = -2;
	int32_t x356 = -1;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = (x353|((x354|x355)&x356));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = UINT64_MAX;
	volatile int64_t x358 = INT64_MIN;
	uint16_t x359 = 32097U;
	volatile int8_t x360 = INT8_MAX;

    t89 = (x357|((x358|x359)&x360));

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = INT64_MAX;
	static uint8_t x363 = UINT8_MAX;
	static volatile int8_t x364 = -1;

    t90 = (x361|((x362|x363)&x364));

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x365 = UINT32_MAX;
	uint32_t x366 = UINT32_MAX;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MAX;
	volatile int64_t t91 = -3122098LL;

    t91 = (x365|((x366|x367)&x368));

    if (t91 != 4294967295LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = 0;
	static uint64_t x370 = 12450510613664411LLU;
	int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MAX;
	static volatile uint64_t t92 = 81340879514847LLU;

    t92 = (x369|((x370|x371)&x372));

    if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = INT32_MAX;
	uint64_t x376 = UINT64_MAX;
	uint64_t t93 = UINT64_MAX;

    t93 = (x373|((x374|x375)&x376));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = -1;
	uint32_t x379 = 88061U;
	volatile int16_t x380 = INT16_MIN;

    t94 = (x377|((x378|x379)&x380));

    if (t94 != 4294934528U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x382 = INT16_MIN;
	static uint8_t x383 = 0U;

    t95 = (x381|((x382|x383)&x384));

    if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = UINT8_MAX;
	uint8_t x386 = 9U;
	int16_t x388 = INT16_MAX;
	int64_t t96 = -1903092LL;

    t96 = (x385|((x386|x387)&x388));

    if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x389 = 31886U;
	int32_t x390 = INT32_MIN;
	volatile int64_t x392 = -70444267091441LL;
	static volatile int64_t t97 = 1LL;

    t97 = (x389|((x390|x391)&x392));

    if (t97 != -70446053557105LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x394 = 0;
	int64_t x396 = INT64_MIN;
	volatile int64_t t98 = -997384608225168588LL;

    t98 = (x393|((x394|x395)&x396));

    if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	int16_t x398 = -1;
	uint16_t x399 = UINT16_MAX;
	volatile int32_t x400 = INT32_MIN;

    t99 = (x397|((x398|x399)&x400));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 1305U;
	volatile int16_t x402 = 2;
	int32_t x403 = INT32_MAX;
	uint8_t x404 = 14U;
	volatile int32_t t100 = -2273;

    t100 = (x401|((x402|x403)&x404));

    if (t100 != 1311) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x405 = UINT8_MAX;
	int64_t x406 = INT64_MAX;
	int64_t x407 = INT64_MAX;

    t101 = (x405|((x406|x407)&x408));

    if (t101 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x410 = INT8_MIN;
	volatile int64_t x411 = INT64_MAX;
	uint32_t x412 = 23033U;
	int64_t t102 = -263852180564LL;

    t102 = (x409|((x410|x411)&x412));

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	uint8_t x414 = 63U;
	static int16_t x415 = INT16_MAX;
	int32_t x416 = 1359;
	static int32_t t103 = -29031;

    t103 = (x413|((x414|x415)&x416));

    if (t103 != 1407) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	int64_t x419 = INT64_MIN;
	volatile int64_t t104 = -57868LL;

    t104 = (x417|((x418|x419)&x420));

    if (t104 != -127LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = 2000634;
	uint8_t x422 = 7U;
	int32_t x424 = INT32_MIN;
	int32_t t105 = 65884297;

    t105 = (x421|((x422|x423)&x424));

    if (t105 != -2145483014) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -8614;
	volatile uint32_t x426 = UINT32_MAX;
	int16_t x427 = INT16_MIN;
	volatile int16_t x428 = -1;
	uint32_t t106 = UINT32_MAX;

    t106 = (x425|((x426|x427)&x428));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MAX;
	int8_t x430 = INT8_MAX;
	int64_t x431 = INT64_MIN;
	static int8_t x432 = 1;
	volatile int64_t t107 = 8379719LL;

    t107 = (x429|((x430|x431)&x432));

    if (t107 != 2147483647LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MAX;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = 205557991LLU;
	volatile uint64_t t108 = 0LLU;

    t108 = (x433|((x434|x435)&x436));

    if (t108 != 205586431LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x437 = 538;
	volatile uint16_t x438 = 0U;
	uint16_t x439 = 1407U;
	int64_t x440 = 5365560705979990LL;
	int64_t t109 = -10340250862460275LL;

    t109 = (x437|((x438|x439)&x440));

    if (t109 != 1630LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x443 = UINT64_MAX;
	uint64_t x444 = 57767913549271067LLU;

    t110 = (x441|((x442|x443)&x444));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 3U;
	uint16_t x446 = 11784U;
	int64_t x448 = INT64_MIN;

    t111 = (x445|((x446|x447)&x448));

    if (t111 != 3LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x450 = 7547381420754384LL;
	volatile uint32_t x451 = 4U;
	uint8_t x452 = 0U;

    t112 = (x449|((x450|x451)&x452));

    if (t112 != 127LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 3431416806LLU;
	static int8_t x454 = -1;
	volatile uint16_t x455 = UINT16_MAX;
	int32_t x456 = INT32_MIN;
	static volatile uint64_t t113 = 78907876149LLU;

    t113 = (x453|((x454|x455)&x456));

    if (t113 != 18446744072846001126LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	static int32_t x458 = INT32_MAX;
	static int32_t x459 = -1;
	int16_t x460 = INT16_MIN;
	int32_t t114 = -21638;

    t114 = (x457|((x458|x459)&x460));

    if (t114 != -32768) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x463 = UINT8_MAX;
	volatile int64_t x464 = -2291803654811500LL;
	static int64_t t115 = -1047042LL;

    t115 = (x461|((x462|x463)&x464));

    if (t115 != -2291803317093121LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = UINT32_MAX;
	int16_t x466 = 637;
	static int64_t x468 = -1LL;
	int64_t t116 = 3446LL;

    t116 = (x465|((x466|x467)&x468));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	static int64_t x472 = INT64_MAX;
	int64_t t117 = 5990703947LL;

    t117 = (x469|((x470|x471)&x472));

    if (t117 != -2147450881LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -3;
	int32_t x474 = INT32_MIN;
	int8_t x475 = -1;
	static int8_t x476 = INT8_MAX;
	static int32_t t118 = 179582254;

    t118 = (x473|((x474|x475)&x476));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = 1;

    t119 = (x477|((x478|x479)&x480));

    if (t119 != -32767) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x482 = 58;
	volatile int64_t x484 = INT64_MAX;
	uint64_t t120 = 124045083239LLU;

    t120 = (x481|((x482|x483)&x484));

    if (t120 != 4294967295LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x486 = UINT32_MAX;
	volatile int64_t x487 = INT64_MAX;
	volatile int64_t t121 = INT64_MAX;

    t121 = (x485|((x486|x487)&x488));

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x491 = INT16_MIN;
	int32_t x492 = INT32_MIN;

    t122 = (x489|((x490|x491)&x492));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MAX;
	int8_t x495 = 3;
	int32_t x496 = 340395;
	volatile int64_t t123 = 15LL;

    t123 = (x493|((x494|x495)&x496));

    if (t123 != 2147483647LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = 14U;
	static uint8_t x500 = 35U;
	volatile int64_t t124 = -17878737598457684LL;

    t124 = (x497|((x498|x499)&x500));

    if (t124 != 47LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = 211539LL;
	uint64_t x502 = 244427407LLU;
	volatile uint64_t t125 = 786373261920260LLU;

    t125 = (x501|((x502|x503)&x504));

    if (t125 != 211675LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = -206730389;
	int32_t x507 = INT32_MIN;
	static uint32_t x508 = 623706U;
	volatile uint32_t t126 = UINT32_MAX;

    t126 = (x505|((x506|x507)&x508));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x509 = 13U;
	int64_t x510 = -1LL;
	uint16_t x511 = UINT16_MAX;
	uint64_t x512 = 109213752594390LLU;
	static uint64_t t127 = 285139011815LLU;

    t127 = (x509|((x510|x511)&x512));

    if (t127 != 109213752594399LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	volatile int16_t x514 = INT16_MAX;
	int16_t x515 = INT16_MIN;
	int32_t x516 = INT32_MAX;
	int32_t t128 = -151733414;

    t128 = (x513|((x514|x515)&x516));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = INT8_MIN;
	volatile int8_t x518 = INT8_MAX;
	static uint16_t x519 = 177U;
	uint64_t x520 = UINT64_MAX;
	uint64_t t129 = UINT64_MAX;

    t129 = (x517|((x518|x519)&x520));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = 56LL;
	uint8_t x522 = 2U;
	static volatile uint32_t x523 = UINT32_MAX;
	static volatile int64_t x524 = INT64_MAX;
	static volatile int64_t t130 = -3996990331LL;

    t130 = (x521|((x522|x523)&x524));

    if (t130 != 4294967295LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = -431074LL;
	volatile int32_t x526 = -934372152;
	uint32_t x527 = 71182875U;
	int16_t x528 = -6;
	int64_t t131 = -66099350697LL;

    t131 = (x525|((x526|x527)&x528));

    if (t131 != -290LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	volatile int64_t x530 = -1LL;
	static int64_t x531 = -48974LL;
	int8_t x532 = INT8_MIN;
	int64_t t132 = 1585380375089674314LL;

    t132 = (x529|((x530|x531)&x532));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 6;
	static int64_t x534 = 9981698LL;
	static int32_t x535 = -157715;
	static volatile int64_t t133 = -357180LL;

    t133 = (x533|((x534|x535)&x536));

    if (t133 != 15LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = 4454;
	static int8_t x539 = INT8_MIN;
	int64_t x540 = INT64_MAX;
	int64_t t134 = -198477176687431036LL;

    t134 = (x537|((x538|x539)&x540));

    if (t134 != 9223372036854775782LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x541 = 292802673U;
	int8_t x542 = INT8_MIN;
	static volatile int32_t x543 = 1347151;
	volatile int64_t x544 = -694569LL;
	int64_t t135 = -3LL;

    t135 = (x541|((x542|x543)&x544));

    if (t135 != -526601LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 99U;
	uint8_t x546 = 78U;
	uint8_t x547 = 5U;
	int32_t t136 = -6148;

    t136 = (x545|((x546|x547)&x548));

    if (t136 != 111) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x550 = INT16_MIN;
	int16_t x552 = INT16_MAX;
	volatile uint32_t t137 = 4665U;

    t137 = (x549|((x550|x551)&x552));

    if (t137 != 10239U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile uint16_t x554 = UINT16_MAX;
	int32_t x555 = INT32_MAX;
	int8_t x556 = 0;
	static int32_t t138 = -198;

    t138 = (x553|((x554|x555)&x556));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	static int32_t x558 = INT32_MIN;
	volatile uint8_t x559 = UINT8_MAX;
	static volatile int64_t x560 = INT64_MIN;

    t139 = (x557|((x558|x559)&x560));

    if (t139 != -32768LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x561 = INT8_MIN;
	int32_t x562 = INT32_MIN;
	int64_t x563 = INT64_MIN;
	uint32_t x564 = UINT32_MAX;
	volatile int64_t t140 = 29452514971681LL;

    t140 = (x561|((x562|x563)&x564));

    if (t140 != -128LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x566 = 39180U;
	static int64_t x567 = INT64_MAX;
	int64_t x568 = -205369LL;
	volatile uint64_t t141 = 2292001669137166336LLU;

    t141 = (x565|((x566|x567)&x568));

    if (t141 != 9223372036854635999LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x569 = INT64_MIN;
	uint32_t x570 = UINT32_MAX;
	int64_t x572 = INT64_MIN;
	int64_t t142 = INT64_MIN;

    t142 = (x569|((x570|x571)&x572));

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	static uint8_t x574 = UINT8_MAX;
	int8_t x575 = -1;
	int16_t x576 = -1;
	volatile int32_t t143 = 16350;

    t143 = (x573|((x574|x575)&x576));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 3669659;
	int64_t x578 = -1LL;
	int8_t x579 = 0;
	static int16_t x580 = INT16_MIN;
	volatile int64_t t144 = -130406542031260LL;

    t144 = (x577|((x578|x579)&x580));

    if (t144 != -357LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	int16_t x582 = INT16_MAX;
	uint8_t x583 = UINT8_MAX;
	int32_t x584 = 47;
	volatile int32_t t145 = INT32_MAX;

    t145 = (x581|((x582|x583)&x584));

    if (t145 != INT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	uint8_t x586 = UINT8_MAX;
	uint32_t x587 = 4U;
	static int8_t x588 = INT8_MAX;
	static volatile uint32_t t146 = 150812U;

    t146 = (x585|((x586|x587)&x588));

    if (t146 != 4294934655U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x591 = -6;
	static volatile uint32_t t147 = 5504U;

    t147 = (x589|((x590|x591)&x592));

    if (t147 != 11U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x593 = 35981933LLU;
	uint32_t x594 = 836244U;
	int32_t x595 = 10680506;
	int16_t x596 = INT16_MIN;
	uint64_t t148 = 27LLU;

    t148 = (x593|((x594|x595)&x596));

    if (t148 != 45058669LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	static int8_t x598 = -1;
	int8_t x599 = INT8_MAX;
	int64_t x600 = -4665LL;
	int64_t t149 = 32536207662265991LL;

    t149 = (x597|((x598|x599)&x600));

    if (t149 != -4665LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	int32_t x602 = INT32_MIN;
	volatile uint16_t x603 = 0U;
	int16_t x604 = INT16_MAX;
	volatile int32_t t150 = 1096;

    t150 = (x601|((x602|x603)&x604));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x606 = 191401444U;
	int32_t x607 = -84762490;
	int64_t x608 = 1LL;

    t151 = (x605|((x606|x607)&x608));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = 546369078;
	static int8_t x610 = -1;
	int16_t x611 = INT16_MIN;

    t152 = (x609|((x610|x611)&x612));

    if (t152 != 546369086) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = -1LL;
	int8_t x614 = INT8_MIN;
	static volatile uint32_t x615 = 0U;
	uint64_t x616 = 415997146687LLU;
	uint64_t t153 = UINT64_MAX;

    t153 = (x613|((x614|x615)&x616));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x618 = UINT64_MAX;
	int16_t x619 = INT16_MIN;
	volatile uint64_t t154 = UINT64_MAX;

    t154 = (x617|((x618|x619)&x620));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x623 = 12;
	int64_t x624 = INT64_MIN;
	static volatile int64_t t155 = 7552444LL;

    t155 = (x621|((x622|x623)&x624));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = 1028737U;
	int8_t x626 = INT8_MIN;
	volatile int8_t x627 = 2;
	int8_t x628 = INT8_MAX;
	volatile uint32_t t156 = 96319015U;

    t156 = (x625|((x626|x627)&x628));

    if (t156 != 1028739U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x631 = INT8_MAX;
	int32_t t157 = -55248;

    t157 = (x629|((x630|x631)&x632));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x634 = 90U;
	int32_t x635 = -1;
	int32_t x636 = INT32_MIN;

    t158 = (x633|((x634|x635)&x636));

    if (t158 != 2147483648U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	int64_t x638 = -1LL;
	volatile int8_t x639 = 13;
	uint16_t x640 = UINT16_MAX;
	static int64_t t159 = INT64_MAX;

    t159 = (x637|((x638|x639)&x640));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x641 = -1;
	uint16_t x642 = 219U;
	int16_t x643 = -8;
	static volatile int32_t t160 = 0;

    t160 = (x641|((x642|x643)&x644));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 1U;
	static int64_t x647 = INT64_MIN;
	int64_t x648 = -478413749892291LL;

    t161 = (x645|((x646|x647)&x648));

    if (t161 != 9223451760473950721LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	int8_t x651 = INT8_MAX;
	int32_t x652 = -1;
	static int32_t t162 = 83395;

    t162 = (x649|((x650|x651)&x652));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 37;
	uint32_t x654 = 12248820U;
	static uint16_t x656 = UINT16_MAX;
	uint32_t t163 = 64742562U;

    t163 = (x653|((x654|x655)&x656));

    if (t163 != 63477U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 1;
	uint8_t x658 = 2U;
	int64_t x659 = -1LL;
	volatile uint64_t t164 = 1471097LLU;

    t164 = (x657|((x658|x659)&x660));

    if (t164 != 12821835LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 0;
	volatile uint64_t x663 = 242770875761042355LLU;
	static volatile int16_t x664 = 0;

    t165 = (x661|((x662|x663)&x664));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 36U;
	int8_t x666 = 46;
	int32_t x667 = -1;
	uint64_t x668 = UINT64_MAX;
	uint64_t t166 = UINT64_MAX;

    t166 = (x665|((x666|x667)&x668));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint16_t x669 = 29190U;
	int16_t x670 = INT16_MIN;
	int32_t x672 = -1;
	int32_t t167 = -10;

    t167 = (x669|((x670|x671)&x672));

    if (t167 != -3578) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -4626;
	uint8_t x674 = UINT8_MAX;
	uint64_t x675 = UINT64_MAX;
	int8_t x676 = INT8_MAX;
	uint64_t t168 = 78459482LLU;

    t168 = (x673|((x674|x675)&x676));

    if (t168 != 18446744073709547007LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x678 = 28057LL;
	int8_t x679 = INT8_MIN;
	int8_t x680 = INT8_MIN;
	volatile int64_t t169 = 1741LL;

    t169 = (x677|((x678|x679)&x680));

    if (t169 != -53LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = 32546;
	static int8_t x682 = 6;
	volatile int8_t x684 = -1;
	int32_t t170 = 21455481;

    t170 = (x681|((x682|x683)&x684));

    if (t170 != -218) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 7U;
	static int32_t x686 = INT32_MIN;
	uint64_t t171 = 317LLU;

    t171 = (x685|((x686|x687)&x688));

    if (t171 != 18446744071564942983LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = INT16_MAX;
	int8_t x690 = INT8_MIN;
	volatile uint32_t x691 = UINT32_MAX;
	volatile uint8_t x692 = UINT8_MAX;

    t172 = (x689|((x690|x691)&x692));

    if (t172 != 32767U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 3U;
	uint32_t x695 = 37758U;
	static uint8_t x696 = UINT8_MAX;
	static volatile uint32_t t173 = 1U;

    t173 = (x693|((x694|x695)&x696));

    if (t173 != 255U) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	static uint32_t x698 = UINT32_MAX;
	uint8_t x700 = 0U;
	volatile uint64_t t174 = 24498941LLU;

    t174 = (x697|((x698|x699)&x700));

    if (t174 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x701 = 7155U;
	uint64_t x702 = UINT64_MAX;
	uint32_t x704 = 0U;
	uint64_t t175 = 248060561303LLU;

    t175 = (x701|((x702|x703)&x704));

    if (t175 != 7155LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MIN;
	uint8_t x706 = 15U;
	static uint64_t x707 = 2587LLU;
	static volatile int16_t x708 = INT16_MAX;
	volatile uint64_t t176 = 412122LLU;

    t176 = (x705|((x706|x707)&x708));

    if (t176 != 9223372036854778399LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = INT32_MAX;
	int64_t x711 = -10724786574LL;
	uint32_t x712 = 116185U;

    t177 = (x709|((x710|x711)&x712));

    if (t177 != -140533075583181347LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x713 = UINT8_MAX;
	int16_t x715 = -1;
	static uint8_t x716 = UINT8_MAX;
	volatile int32_t t178 = 27;

    t178 = (x713|((x714|x715)&x716));

    if (t178 != 255) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -451825398772812LL;
	static int64_t x718 = INT64_MAX;
	int32_t x719 = 2156;
	volatile int32_t x720 = -1639;
	int64_t t179 = -404LL;

    t179 = (x717|((x718|x719)&x720));

    if (t179 != -1091LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 117U;
	static int16_t x722 = -1;
	uint16_t x723 = 665U;
	int16_t x724 = INT16_MIN;
	volatile int32_t t180 = 855148099;

    t180 = (x721|((x722|x723)&x724));

    if (t180 != -32651) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x726 = INT32_MIN;
	int32_t x727 = -1;
	int32_t x728 = INT32_MIN;

    t181 = (x725|((x726|x727)&x728));

    if (t181 != -2147483648LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 6781470771346LLU;
	static int8_t x730 = -1;
	volatile uint64_t t182 = 785710476LLU;

    t182 = (x729|((x730|x731)&x732));

    if (t182 != 16876111963932822934LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x733 = INT64_MIN;
	static uint16_t x734 = 724U;
	uint8_t x736 = 2U;
	int64_t t183 = INT64_MIN;

    t183 = (x733|((x734|x735)&x736));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x738 = -8128LL;
	uint16_t x739 = 29255U;
	int16_t x740 = -132;
	uint64_t t184 = 46147LLU;

    t184 = (x737|((x738|x739)&x740));

    if (t184 != 18446744073709548108LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MAX;
	static int32_t x743 = 42;
	int16_t x744 = -1;
	int32_t t185 = 841;

    t185 = (x741|((x742|x743)&x744));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = 7U;
	volatile int16_t x747 = INT16_MIN;
	volatile uint32_t t186 = 143418U;

    t186 = (x745|((x746|x747)&x748));

    if (t186 != 2147450887U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = UINT16_MAX;
	volatile int8_t x750 = 17;
	int8_t x751 = 6;
	int16_t x752 = INT16_MIN;

    t187 = (x749|((x750|x751)&x752));

    if (t187 != 65535) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	uint32_t x755 = 157455U;
	int16_t x756 = INT16_MAX;

    t188 = (x753|((x754|x755)&x756));

    if (t188 != 4294960911U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	static int16_t x758 = -200;
	uint32_t x759 = 1065788553U;
	int8_t x760 = INT8_MIN;
	static uint32_t t189 = 78798U;

    t189 = (x757|((x758|x759)&x760));

    if (t189 != 4294967168U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	int32_t x762 = -15710;
	int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MIN;
	static volatile int64_t t190 = 4035569695988632LL;

    t190 = (x761|((x762|x763)&x764));

    if (t190 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x766 = -8686127140389LL;
	static int64_t t191 = 18248LL;

    t191 = (x765|((x766|x767)&x768));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 61401754LLU;
	int16_t x771 = INT16_MIN;
	volatile int64_t x772 = 0LL;
	uint64_t t192 = 33752149645097LLU;

    t192 = (x769|((x770|x771)&x772));

    if (t192 != 61401754LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = UINT64_MAX;
	int16_t x776 = INT16_MIN;
	volatile uint64_t t193 = UINT64_MAX;

    t193 = (x773|((x774|x775)&x776));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = 359232;
	uint64_t x778 = 3711654984460LLU;
	int32_t x779 = -2210012;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t194 = 6950632848495LLU;

    t194 = (x777|((x778|x779)&x780));

    if (t194 != 18446744073709518700LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x783 = INT16_MIN;
	volatile uint32_t x784 = UINT32_MAX;
	static volatile uint64_t t195 = 1617805237934766LLU;

    t195 = (x781|((x782|x783)&x784));

    if (t195 != 9223372041149735146LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	uint32_t x786 = UINT32_MAX;
	int32_t x787 = 533;
	volatile int32_t x788 = -1;
	static uint32_t t196 = UINT32_MAX;

    t196 = (x785|((x786|x787)&x788));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	static uint8_t x790 = 3U;
	uint8_t x791 = 6U;
	volatile int64_t t197 = -28004653222477LL;

    t197 = (x789|((x790|x791)&x792));

    if (t197 != 65535LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = 0;
	int16_t x794 = 30;
	volatile int8_t x795 = -27;
	volatile int32_t t198 = 675;

    t198 = (x793|((x794|x795)&x796));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = 14568;
	volatile int32_t x798 = -6;
	uint16_t x799 = 11640U;
	static int32_t x800 = INT32_MIN;
	static int32_t t199 = 1003056669;

    t199 = (x797|((x798|x799)&x800));

    if (t199 != -2147469080) { NG(); } else { ; }
	
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

