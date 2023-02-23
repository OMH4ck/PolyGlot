
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

static int64_t x1 = 6LL;
static volatile uint8_t x2 = 8U;
int32_t x5 = -1;
uint8_t x8 = UINT8_MAX;
volatile int64_t t1 = -908179899010211LL;
static uint32_t x13 = 5U;
static uint32_t x16 = UINT32_MAX;
static int16_t x22 = 0;
int64_t x23 = INT64_MAX;
volatile int64_t t4 = 1957197LL;
static int64_t x26 = -980460705532789LL;
uint64_t x28 = UINT64_MAX;
int32_t x31 = 64915;
int32_t x36 = INT32_MIN;
volatile int64_t t7 = -1240LL;
int64_t x40 = INT64_MAX;
static uint8_t x49 = 4U;
uint8_t x51 = 44U;
int8_t x57 = -1;
int16_t x59 = INT16_MIN;
volatile uint64_t t13 = 23LLU;
int8_t x65 = -1;
int64_t t14 = -1116019328766139290LL;
uint8_t x69 = 1U;
uint32_t x85 = UINT32_MAX;
uint16_t x86 = 281U;
int64_t x87 = -135118508620379645LL;
uint32_t x91 = 9U;
uint64_t t20 = 366056476141722432LLU;
uint64_t x97 = 19660354794226260LLU;
volatile uint8_t x108 = 1U;
volatile int32_t t23 = 1233787;
uint32_t x114 = 5U;
volatile int64_t x118 = INT64_MIN;
int16_t x119 = 1240;
static int32_t x120 = INT32_MIN;
int64_t t26 = INT64_MAX;
int64_t x121 = 3LL;
int8_t x124 = INT8_MIN;
int32_t x127 = INT32_MIN;
uint16_t x140 = 17U;
static int8_t x142 = -1;
volatile int32_t t32 = -29;
int8_t x149 = 48;
volatile int16_t x156 = 3089;
uint8_t x159 = 4U;
int16_t x160 = INT16_MAX;
static volatile int32_t t37 = 12626989;
static volatile uint64_t t38 = 6378555948571230LLU;
uint32_t x183 = 3U;
uint32_t x186 = UINT32_MAX;
int16_t x188 = 0;
uint32_t t41 = UINT32_MAX;
volatile int64_t t45 = 776042338297836LL;
int32_t x211 = INT32_MIN;
uint16_t x219 = UINT16_MAX;
volatile int64_t t47 = -1LL;
int64_t x221 = INT64_MAX;
uint64_t t49 = UINT64_MAX;
static uint64_t t50 = 15933550LLU;
int64_t x240 = INT64_MAX;
volatile int8_t x241 = -1;
static int16_t x243 = INT16_MAX;
uint64_t x244 = UINT64_MAX;
volatile int64_t t54 = 9799022879435LL;
int32_t x251 = INT32_MIN;
int8_t x252 = -1;
int64_t t55 = 3371LL;
int64_t x255 = -299320672LL;
int16_t x260 = INT16_MIN;
static volatile uint32_t t57 = UINT32_MAX;
static int64_t t58 = -244034539LL;
int16_t x268 = -1;
int64_t x276 = INT64_MIN;
volatile uint64_t x279 = UINT64_MAX;
static volatile int8_t x284 = -4;
static volatile uint64_t t65 = 3325673420025699945LLU;
int64_t t67 = -280LL;
uint16_t x301 = UINT16_MAX;
volatile uint32_t x302 = 66410U;
uint32_t t68 = 41837U;
int32_t x310 = INT32_MIN;
static int32_t x312 = -1;
static volatile int8_t x313 = 1;
volatile int64_t t72 = -1LL;
int32_t x324 = -728359;
int64_t x335 = INT64_MAX;
static volatile int64_t t76 = 2534134LL;
volatile int64_t x337 = INT64_MIN;
int32_t x345 = 23;
int16_t x348 = -8;
int64_t t79 = -8243899LL;
int32_t x351 = -1;
volatile int8_t x353 = -1;
uint64_t x355 = UINT64_MAX;
int32_t x360 = -1;
int32_t x364 = INT32_MIN;
int16_t x386 = INT16_MAX;
int32_t x401 = INT32_MIN;
static volatile uint32_t x426 = 50U;
uint8_t x434 = UINT8_MAX;
uint64_t x438 = 903LLU;
volatile uint64_t t99 = 227LLU;
static int64_t t100 = 55171381963LL;
static uint8_t x453 = 18U;
static int8_t x454 = -48;
static uint32_t x456 = 12U;
static uint32_t x457 = UINT32_MAX;
uint32_t x460 = 70625U;
static volatile int16_t x465 = INT16_MIN;
static int8_t x466 = -1;
static int64_t x467 = INT64_MAX;
static uint64_t x471 = 96LLU;
uint64_t t106 = 839125LLU;
static volatile int8_t x477 = -1;
volatile uint16_t x485 = 65U;
int16_t x494 = INT16_MIN;
volatile int64_t x502 = INT64_MIN;
volatile uint32_t x504 = UINT32_MAX;
int16_t x505 = -58;
volatile int8_t x508 = 3;
static int8_t x509 = -2;
uint64_t x512 = UINT64_MAX;
static int16_t x521 = INT16_MIN;
uint8_t x527 = 5U;
volatile int32_t t118 = 7949;
volatile int64_t x531 = INT64_MAX;
int8_t x533 = -1;
int16_t x535 = 1;
static uint32_t x544 = 237U;
uint8_t x553 = UINT8_MAX;
volatile int32_t t125 = 252665;
uint32_t x565 = 7U;
static volatile int32_t x566 = INT32_MIN;
volatile uint32_t t126 = 185372U;
uint8_t x570 = 1U;
int16_t x576 = 0;
int8_t x577 = INT8_MIN;
volatile uint8_t x588 = 124U;
int64_t x594 = INT64_MAX;
int16_t x595 = -1;
int64_t t133 = 87928781252550LL;
int16_t x598 = INT16_MIN;
int64_t t135 = 3LL;
uint64_t x612 = UINT64_MAX;
uint64_t x614 = 10LLU;
static int16_t x615 = INT16_MAX;
volatile int16_t x616 = -13;
uint64_t x617 = UINT64_MAX;
int16_t x619 = 499;
uint64_t x624 = UINT64_MAX;
uint64_t t139 = 187055791LLU;
uint64_t x626 = UINT64_MAX;
volatile int32_t x627 = -692937;
volatile int64_t x629 = -1LL;
volatile int64_t t141 = -231373762964LL;
uint8_t x639 = 2U;
int8_t x642 = INT8_MIN;
int8_t x643 = INT8_MAX;
volatile int8_t x645 = INT8_MAX;
int32_t x650 = INT32_MIN;
static int64_t x651 = -16517131541463LL;
volatile uint32_t x656 = UINT32_MAX;
int8_t x664 = INT8_MAX;
static volatile int8_t x665 = 13;
volatile int32_t t149 = -75;
int32_t x671 = INT32_MIN;
static uint16_t x674 = 3U;
volatile int64_t x676 = INT64_MIN;
static uint64_t x684 = 54313939726900LLU;
int8_t x695 = INT8_MIN;
static uint64_t x697 = 6068608334662459LLU;
volatile uint16_t x698 = 1046U;
int32_t x704 = INT32_MAX;
uint64_t x710 = 15578822373959LLU;
int32_t x713 = -14989107;
int64_t x714 = -1681LL;
volatile uint16_t x717 = 168U;
static volatile int64_t t161 = 129020LL;
uint32_t x725 = UINT32_MAX;
int8_t x728 = INT8_MIN;
static volatile uint64_t x733 = 867769180LLU;
int64_t x734 = INT64_MIN;
uint64_t t165 = 2895125788698253LLU;
uint8_t x738 = 28U;
volatile int64_t t166 = -2833630LL;
uint32_t x741 = UINT32_MAX;
uint32_t t167 = 120U;
uint64_t x749 = 12462299798LLU;
volatile int8_t x752 = INT8_MIN;
static uint64_t x754 = 1LLU;
uint32_t t172 = 5U;
int32_t x769 = INT32_MIN;
uint32_t t175 = 9397255U;
uint16_t x781 = 29907U;
int8_t x783 = INT8_MAX;
volatile int64_t x786 = INT64_MIN;
uint32_t x799 = UINT32_MAX;
static int8_t x800 = 1;
volatile uint16_t x804 = 1U;
volatile int8_t x805 = -59;
int32_t t183 = -6957727;
int64_t x809 = 233518101021554LL;
volatile int8_t x811 = -1;
int32_t x815 = INT32_MAX;
int64_t t185 = -1487084585815LL;
volatile int64_t t187 = -13363LL;
uint32_t x827 = 111350261U;
volatile uint8_t x830 = 36U;
uint32_t x843 = 240329760U;
int32_t x844 = -1;
int8_t x846 = INT8_MAX;
int16_t x852 = INT16_MIN;
uint64_t x854 = 1243341235590LLU;
int64_t x855 = INT64_MAX;
volatile uint64_t t195 = 30587244536LLU;
static uint32_t x868 = 11798U;
volatile int8_t x874 = INT8_MIN;


void f0(void) {
    	volatile uint16_t x3 = 668U;
	int8_t x4 = INT8_MAX;
	static int64_t t0 = -318092LL;

    t0 = (x1-((x2|x3)&x4));

    if (t0 != -22LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	int64_t x7 = -964255476649320LL;

    t1 = (x5-((x6|x7)&x8));

    if (t1 != -256LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x14 = UINT8_MAX;
	volatile int16_t x15 = -1;
	volatile uint32_t t2 = 34937328U;

    t2 = (x13-((x14|x15)&x16));

    if (t2 != 6U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	static volatile int16_t x18 = INT16_MIN;
	volatile uint64_t x19 = 12LLU;
	int16_t x20 = INT16_MIN;
	uint64_t t3 = 16581380LLU;

    t3 = (x17-((x18|x19)&x20));

    if (t3 != 32767LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = INT8_MAX;
	int32_t x24 = -1;

    t4 = (x21-((x22|x23)&x24));

    if (t4 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = 47U;
	uint32_t x27 = 2910U;
	uint64_t t5 = 55372278LLU;

    t5 = (x25-((x26|x27)&x28));

    if (t5 != 980460705529936LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x29 = -1LL;
	volatile uint16_t x30 = 14U;
	int32_t x32 = INT32_MIN;
	static int64_t t6 = 45LL;

    t6 = (x29-((x30|x31)&x32));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = INT32_MAX;
	int8_t x34 = 2;
	int64_t x35 = 52LL;

    t7 = (x33-((x34|x35)&x36));

    if (t7 != 2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = 845U;
	int8_t x39 = -1;
	int64_t t8 = -1766141774979312952LL;

    t8 = (x37-((x38|x39)&x40));

    if (t8 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = 2911061213245LL;
	int16_t x42 = INT16_MAX;
	int8_t x43 = INT8_MIN;
	volatile uint64_t x44 = 9466128LLU;
	volatile uint64_t t9 = 806LLU;

    t9 = (x41-((x42|x43)&x44));

    if (t9 != 2911051747117LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	int32_t x46 = 1;
	static int16_t x47 = INT16_MIN;
	volatile int16_t x48 = -31;
	int64_t t10 = -2052279LL;

    t10 = (x45-((x46|x47)&x48));

    if (t10 != 32766LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x50 = INT32_MAX;
	static int16_t x52 = INT16_MAX;
	int32_t t11 = 14577530;

    t11 = (x49-((x50|x51)&x52));

    if (t11 != -32763) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x53 = 38U;
	uint32_t x54 = UINT32_MAX;
	static int32_t x55 = 2185701;
	static int16_t x56 = -1;
	uint32_t t12 = 210U;

    t12 = (x53-((x54|x55)&x56));

    if (t12 != 39U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint8_t x58 = 125U;
	uint64_t x60 = 3LLU;

    t13 = (x57-((x58|x59)&x60));

    if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x66 = 5U;
	int64_t x67 = -9LL;
	static int8_t x68 = -1;

    t14 = (x65-((x66|x67)&x68));

    if (t14 != 8LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x70 = 1;
	int64_t x71 = INT64_MAX;
	int8_t x72 = INT8_MAX;
	int64_t t15 = -11840LL;

    t15 = (x69-((x70|x71)&x72));

    if (t15 != -126LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x73 = INT8_MIN;
	int16_t x74 = -1;
	uint64_t x75 = 6498295897LLU;
	uint64_t x76 = UINT64_MAX;
	static volatile uint64_t t16 = 140508819446479LLU;

    t16 = (x73-((x74|x75)&x76));

    if (t16 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = -2;
	uint8_t x78 = 67U;
	volatile int16_t x79 = INT16_MAX;
	uint64_t x80 = UINT64_MAX;
	uint64_t t17 = 26959LLU;

    t17 = (x77-((x78|x79)&x80));

    if (t17 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x88 = 700U;
	int64_t t18 = 658LL;

    t18 = (x85-((x86|x87)&x88));

    if (t18 != 4294966759LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x89 = 78144363410846LL;
	volatile int64_t x90 = INT64_MAX;
	int8_t x92 = 0;
	volatile int64_t t19 = -258101527LL;

    t19 = (x89-((x90|x91)&x92));

    if (t19 != 78144363410846LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = 3997219548LLU;
	uint16_t x94 = 2U;
	int8_t x95 = INT8_MIN;
	int8_t x96 = -1;

    t20 = (x93-((x94|x95)&x96));

    if (t20 != 3997219674LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x98 = -1;
	int8_t x99 = INT8_MIN;
	uint8_t x100 = UINT8_MAX;
	uint64_t t21 = 3713770241LLU;

    t21 = (x97-((x98|x99)&x100));

    if (t21 != 19660354794226005LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = INT64_MAX;
	static uint32_t x102 = 26708463U;
	int16_t x103 = -1;
	static volatile int8_t x104 = INT8_MIN;
	volatile int64_t t22 = -49644771873LL;

    t22 = (x101-((x102|x103)&x104));

    if (t22 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = -1;
	static volatile int8_t x106 = -3;
	int16_t x107 = -1;

    t23 = (x105-((x106|x107)&x108));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x109 = 397310479;
	volatile int32_t x110 = -3370588;
	static uint32_t x111 = UINT32_MAX;
	volatile int16_t x112 = -55;
	uint32_t t24 = 2907651U;

    t24 = (x109-((x110|x111)&x112));

    if (t24 != 397310534U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x113 = 34U;
	static uint16_t x115 = UINT16_MAX;
	volatile uint64_t x116 = UINT64_MAX;
	volatile uint64_t t25 = 1361000350782LLU;

    t25 = (x113-((x114|x115)&x116));

    if (t25 != 18446744073709486115LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x117 = -1;

    t26 = (x117-((x118|x119)&x120));

    if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x122 = 1768;
	int64_t x123 = INT64_MIN;
	volatile int64_t t27 = -72699LL;

    t27 = (x121-((x122|x123)&x124));

    if (t27 != 9223372036854774147LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = INT16_MIN;
	volatile uint16_t x126 = 3U;
	int16_t x128 = INT16_MIN;
	int32_t t28 = -97;

    t28 = (x125-((x126|x127)&x128));

    if (t28 != 2147450880) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x129 = UINT8_MAX;
	uint8_t x130 = 16U;
	volatile int8_t x131 = INT8_MAX;
	uint32_t x132 = 115597U;
	volatile uint32_t t29 = 27953588U;

    t29 = (x129-((x130|x131)&x132));

    if (t29 != 242U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x137 = 0U;
	volatile int16_t x138 = INT16_MIN;
	uint32_t x139 = 15990641U;
	volatile uint32_t t30 = 7227U;

    t30 = (x137-((x138|x139)&x140));

    if (t30 != 4294967279U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = INT64_MAX;
	volatile uint64_t x143 = UINT64_MAX;
	static volatile int16_t x144 = INT16_MAX;
	volatile uint64_t t31 = 55980367LLU;

    t31 = (x141-((x142|x143)&x144));

    if (t31 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = -429;
	uint16_t x146 = UINT16_MAX;
	uint8_t x147 = 1U;
	int16_t x148 = -7;

    t32 = (x145-((x146|x147)&x148));

    if (t32 != -65958) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x150 = UINT32_MAX;
	int64_t x151 = INT64_MAX;
	static int64_t x152 = -1LL;
	static int64_t t33 = 148LL;

    t33 = (x149-((x150|x151)&x152));

    if (t33 != -9223372036854775759LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = -1;
	int8_t x154 = -1;
	uint8_t x155 = 0U;
	static int32_t t34 = 519744775;

    t34 = (x153-((x154|x155)&x156));

    if (t34 != -3090) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MAX;
	volatile int64_t t35 = 1LL;

    t35 = (x157-((x158|x159)&x160));

    if (t35 != -2147516415LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x161 = INT16_MIN;
	static int8_t x162 = -1;
	static int8_t x163 = INT8_MAX;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t36 = 8;

    t36 = (x161-((x162|x163)&x164));

    if (t36 != -98303) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = -2;
	int16_t x170 = INT16_MAX;
	static uint8_t x171 = UINT8_MAX;
	volatile int32_t x172 = -115612;

    t37 = (x169-((x170|x171)&x172));

    if (t37 != -15462) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x173 = -3793807111724606LL;
	static int32_t x174 = -14;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = INT32_MIN;

    t38 = (x173-((x174|x175)&x176));

    if (t38 != 18442950268745310658LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = -61;
	int32_t x178 = -3;
	volatile uint16_t x179 = UINT16_MAX;
	int16_t x180 = INT16_MIN;
	static int32_t t39 = -113669283;

    t39 = (x177-((x178|x179)&x180));

    if (t39 != 32707) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = INT8_MIN;
	volatile int16_t x182 = INT16_MIN;
	static int16_t x184 = 39;
	volatile uint32_t t40 = 2U;

    t40 = (x181-((x182|x183)&x184));

    if (t40 != 4294967165U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x185 = -1;
	uint32_t x187 = 366325U;

    t41 = (x185-((x186|x187)&x188));

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MAX;
	int64_t x190 = -1LL;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = 19U;
	uint64_t t42 = 527944800293643381LLU;

    t42 = (x189-((x190|x191)&x192));

    if (t42 != 9223372036854775788LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x193 = INT8_MAX;
	uint16_t x194 = UINT16_MAX;
	volatile int8_t x195 = -1;
	int16_t x196 = -1;
	int32_t t43 = -92580550;

    t43 = (x193-((x194|x195)&x196));

    if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = INT16_MIN;
	uint8_t x202 = UINT8_MAX;
	uint8_t x203 = 1U;
	int8_t x204 = INT8_MIN;
	int32_t t44 = 10;

    t44 = (x201-((x202|x203)&x204));

    if (t44 != -32896) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x205 = -1;
	int8_t x206 = INT8_MAX;
	int16_t x207 = INT16_MAX;
	volatile int64_t x208 = INT64_MIN;

    t45 = (x205-((x206|x207)&x208));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint32_t x209 = 254010U;
	int16_t x210 = INT16_MIN;
	volatile uint32_t x212 = 287U;
	static volatile uint32_t t46 = 3871644U;

    t46 = (x209-((x210|x211)&x212));

    if (t46 != 254010U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x217 = UINT8_MAX;
	int64_t x218 = -1LL;
	int64_t x220 = 23681664138344LL;

    t47 = (x217-((x218|x219)&x220));

    if (t47 != -23681664138089LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x222 = UINT8_MAX;
	int16_t x223 = INT16_MAX;
	int64_t x224 = -1LL;
	int64_t t48 = -3755169LL;

    t48 = (x221-((x222|x223)&x224));

    if (t48 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	int64_t x227 = INT64_MIN;
	uint32_t x228 = 25356U;

    t49 = (x225-((x226|x227)&x228));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x229 = 0U;
	static uint64_t x230 = 245397897733735LLU;
	static int64_t x231 = -6550LL;
	int64_t x232 = -777851751588535LL;

    t50 = (x229-((x230|x231)&x232));

    if (t50 != 777851751594935LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x233 = INT8_MAX;
	volatile int64_t x234 = -60LL;
	volatile int64_t x235 = INT64_MIN;
	static uint8_t x236 = UINT8_MAX;
	int64_t t51 = 41994801169389687LL;

    t51 = (x233-((x234|x235)&x236));

    if (t51 != -69LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x237 = INT8_MIN;
	static uint32_t x238 = 461822318U;
	int16_t x239 = INT16_MAX;
	volatile int64_t t52 = -1149277LL;

    t52 = (x237-((x238|x239)&x240));

    if (t52 != -461832319LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x242 = INT8_MIN;
	volatile uint64_t t53 = 3LLU;

    t53 = (x241-((x242|x243)&x244));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x245 = -1;
	static uint8_t x246 = 6U;
	int64_t x247 = INT64_MIN;
	int8_t x248 = INT8_MAX;

    t54 = (x245-((x246|x247)&x248));

    if (t54 != -7LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;

    t55 = (x249-((x250|x251)&x252));

    if (t55 != 2147483520LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	static int8_t x256 = INT8_MIN;
	volatile uint64_t t56 = 108731789LLU;

    t56 = (x253-((x254|x255)&x256));

    if (t56 != 127LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x257 = -1;
	uint32_t x258 = 3U;
	static int8_t x259 = 2;

    t57 = (x257-((x258|x259)&x260));

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x261 = -1;
	uint16_t x262 = 585U;
	static int32_t x263 = INT32_MIN;
	int64_t x264 = 2LL;

    t58 = (x261-((x262|x263)&x264));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x265 = 2;
	volatile int32_t x266 = -40193207;
	volatile int64_t x267 = INT64_MIN;
	int64_t t59 = -1362LL;

    t59 = (x265-((x266|x267)&x268));

    if (t59 != 40193209LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x269 = INT8_MAX;
	static int32_t x270 = -1;
	volatile int64_t x271 = -1LL;
	int16_t x272 = -1;
	static volatile int64_t t60 = -2039630LL;

    t60 = (x269-((x270|x271)&x272));

    if (t60 != 128LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = -1;
	int16_t x274 = -1;
	uint8_t x275 = 1U;
	int64_t t61 = INT64_MAX;

    t61 = (x273-((x274|x275)&x276));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x277 = 1U;
	int32_t x278 = 9;
	uint64_t x280 = 353925377764335213LLU;
	uint64_t t62 = 966524590LLU;

    t62 = (x277-((x278|x279)&x280));

    if (t62 != 18092818695945216404LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = -3;
	int16_t x282 = -1;
	static int64_t x283 = INT64_MIN;
	int64_t t63 = 117961LL;

    t63 = (x281-((x282|x283)&x284));

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x285 = -1394671819513253LL;
	static int32_t x286 = -3959126;
	volatile int32_t x287 = INT32_MIN;
	int8_t x288 = 0;
	static int64_t t64 = -1525368062789LL;

    t64 = (x285-((x286|x287)&x288));

    if (t64 != -1394671819513253LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x289 = UINT64_MAX;
	volatile int16_t x290 = -6234;
	int32_t x291 = 587518;
	volatile uint64_t x292 = 2777041897739LLU;

    t65 = (x289-((x290|x291)&x292));

    if (t65 != 18446741296667655925LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = INT32_MIN;
	static uint64_t x294 = UINT64_MAX;
	int8_t x295 = INT8_MIN;
	static uint8_t x296 = UINT8_MAX;
	uint64_t t66 = 1LLU;

    t66 = (x293-((x294|x295)&x296));

    if (t66 != 18446744071562067713LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x297 = -1;
	int16_t x298 = 670;
	int16_t x299 = 2;
	int64_t x300 = INT64_MAX;

    t67 = (x297-((x298|x299)&x300));

    if (t67 != -671LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x303 = UINT32_MAX;
	int32_t x304 = -1;

    t68 = (x301-((x302|x303)&x304));

    if (t68 != 65536U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = 10;
	int32_t x306 = -1;
	uint64_t x307 = 1639401920533LLU;
	uint16_t x308 = 4U;
	uint64_t t69 = 2371695913725078LLU;

    t69 = (x305-((x306|x307)&x308));

    if (t69 != 6LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = -459504754745238235LL;
	static uint64_t x311 = 2LLU;
	uint64_t t70 = 396660LLU;

    t70 = (x309-((x310|x311)&x312));

    if (t70 != 17987239321111797027LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x314 = -1LL;
	int64_t x315 = 224799760020075LL;
	int32_t x316 = INT32_MAX;
	volatile int64_t t71 = 417432118LL;

    t71 = (x313-((x314|x315)&x316));

    if (t71 != -2147483646LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x317 = -1690;
	static uint16_t x318 = UINT16_MAX;
	int8_t x319 = 3;
	int64_t x320 = 36464160LL;

    t72 = (x317-((x318|x319)&x320));

    if (t72 != -27834LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x321 = -1;
	uint32_t x322 = 796U;
	uint64_t x323 = 2349LLU;
	uint64_t t73 = 14LLU;

    t73 = (x321-((x322|x323)&x324));

    if (t73 != 18446744073709551078LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x325 = INT16_MAX;
	static int64_t x326 = 180LL;
	int64_t x327 = -1LL;
	int16_t x328 = INT16_MAX;
	int64_t t74 = 35LL;

    t74 = (x325-((x326|x327)&x328));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x329 = 2;
	static int8_t x330 = -1;
	int32_t x331 = -1;
	int64_t x332 = -3151LL;
	volatile int64_t t75 = 94LL;

    t75 = (x329-((x330|x331)&x332));

    if (t75 != 3153LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x333 = -1;
	int16_t x334 = INT16_MIN;
	uint8_t x336 = 31U;

    t76 = (x333-((x334|x335)&x336));

    if (t76 != -32LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x338 = 640;
	uint64_t x339 = UINT64_MAX;
	int64_t x340 = INT64_MAX;
	volatile uint64_t t77 = 6517958696LLU;

    t77 = (x337-((x338|x339)&x340));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x341 = -1;
	int16_t x342 = 907;
	uint16_t x343 = UINT16_MAX;
	uint16_t x344 = 10U;
	int32_t t78 = 4604;

    t78 = (x341-((x342|x343)&x344));

    if (t78 != -11) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x346 = UINT8_MAX;
	int64_t x347 = 6632530LL;

    t79 = (x345-((x346|x347)&x348));

    if (t79 != -6632673LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x349 = INT16_MAX;
	int32_t x350 = 49;
	static uint32_t x352 = 416463U;
	static uint32_t t80 = 102822U;

    t80 = (x349-((x350|x351)&x352));

    if (t80 != 4294583600U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x354 = 3U;
	uint8_t x356 = 45U;
	uint64_t t81 = 4697998LLU;

    t81 = (x353-((x354|x355)&x356));

    if (t81 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x357 = -1LL;
	int32_t x358 = INT32_MIN;
	int16_t x359 = -1;
	volatile int64_t t82 = 1957066501LL;

    t82 = (x357-((x358|x359)&x360));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x361 = INT32_MIN;
	static uint64_t x362 = UINT64_MAX;
	int8_t x363 = -29;
	static uint64_t t83 = 12LLU;

    t83 = (x361-((x362|x363)&x364));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x365 = 6;
	int64_t x366 = INT64_MIN;
	volatile uint32_t x367 = UINT32_MAX;
	volatile int8_t x368 = -1;
	static volatile int64_t t84 = -1LL;

    t84 = (x365-((x366|x367)&x368));

    if (t84 != 9223372032559808519LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MIN;
	static int16_t x371 = -1;
	int16_t x372 = -1;
	static uint64_t t85 = 49682LLU;

    t85 = (x369-((x370|x371)&x372));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x373 = -8552127767LL;
	static int32_t x374 = -1;
	uint16_t x375 = 31U;
	int16_t x376 = 4129;
	static int64_t t86 = -28LL;

    t86 = (x373-((x374|x375)&x376));

    if (t86 != -8552131896LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x381 = -1LL;
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = INT8_MIN;
	volatile int64_t x384 = INT64_MIN;
	static int64_t t87 = INT64_MAX;

    t87 = (x381-((x382|x383)&x384));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x385 = 309657LL;
	volatile int32_t x387 = INT32_MIN;
	int64_t x388 = -68218215730975899LL;
	int64_t t88 = 19LL;

    t88 = (x385-((x386|x387)&x388));

    if (t88 != 68218217545616948LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x389 = -1;
	int32_t x390 = 103166;
	int64_t x391 = -1LL;
	static int32_t x392 = -8752;
	static volatile int64_t t89 = 8722518784600LL;

    t89 = (x389-((x390|x391)&x392));

    if (t89 != 8751LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x393 = 32U;
	static volatile int32_t x394 = INT32_MAX;
	uint8_t x395 = 4U;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t90 = 4062;

    t90 = (x393-((x394|x395)&x396));

    if (t90 != -65503) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x397 = -1;
	int16_t x398 = INT16_MIN;
	int64_t x399 = 11742LL;
	int8_t x400 = INT8_MAX;
	static volatile int64_t t91 = 638502819244475LL;

    t91 = (x397-((x398|x399)&x400));

    if (t91 != -95LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x402 = UINT32_MAX;
	int64_t x403 = 45LL;
	int16_t x404 = INT16_MIN;
	volatile int64_t t92 = 4LL;

    t92 = (x401-((x402|x403)&x404));

    if (t92 != -6442418176LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x405 = 0U;
	int64_t x406 = -1LL;
	int8_t x407 = INT8_MIN;
	int8_t x408 = 0;
	volatile int64_t t93 = 1LL;

    t93 = (x405-((x406|x407)&x408));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x409 = -6;
	uint32_t x410 = 60941U;
	uint64_t x411 = 54690809542LLU;
	static int16_t x412 = 517;
	uint64_t t94 = 13692650262922LLU;

    t94 = (x409-((x410|x411)&x412));

    if (t94 != 18446744073709551093LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x413 = 406;
	int64_t x414 = INT64_MAX;
	int64_t x415 = 916264391LL;
	int8_t x416 = INT8_MAX;
	static int64_t t95 = 537489699056LL;

    t95 = (x413-((x414|x415)&x416));

    if (t95 != 279LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x425 = -1;
	static uint64_t x427 = 32159252670LLU;
	volatile uint16_t x428 = 36U;
	static volatile uint64_t t96 = 26066620809123LLU;

    t96 = (x425-((x426|x427)&x428));

    if (t96 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x429 = 388U;
	int8_t x430 = 1;
	volatile int16_t x431 = 3;
	uint16_t x432 = 13325U;
	uint32_t t97 = 76U;

    t97 = (x429-((x430|x431)&x432));

    if (t97 != 387U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x433 = 43U;
	static volatile int8_t x435 = INT8_MIN;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t98 = 3701LLU;

    t98 = (x433-((x434|x435)&x436));

    if (t98 != 44LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x437 = INT32_MAX;
	uint16_t x439 = UINT16_MAX;
	int8_t x440 = 1;

    t99 = (x437-((x438|x439)&x440));

    if (t99 != 2147483646LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x441 = UINT32_MAX;
	int16_t x442 = 3610;
	int64_t x443 = 80700LL;
	int16_t x444 = 3557;

    t100 = (x441-((x442|x443)&x444));

    if (t100 != 4294963931LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x445 = -1968;
	int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	int8_t x448 = 57;
	volatile int32_t t101 = 6;

    t101 = (x445-((x446|x447)&x448));

    if (t101 != -2025) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x455 = INT32_MAX;
	volatile uint32_t t102 = 1259U;

    t102 = (x453-((x454|x455)&x456));

    if (t102 != 6U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x458 = 15;
	static volatile int64_t x459 = 79679LL;
	int64_t t103 = -34085LL;

    t103 = (x457-((x458|x459)&x460));

    if (t103 != 4294896862LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	uint8_t x462 = UINT8_MAX;
	int64_t x463 = 863764558691847289LL;
	uint16_t x464 = UINT16_MAX;
	uint64_t t104 = 59799003LLU;

    t104 = (x461-((x462|x463)&x464));

    if (t104 != 18446744073709531904LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x468 = -1;
	static int64_t t105 = -6260387LL;

    t105 = (x465-((x466|x467)&x468));

    if (t105 != -32767LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x469 = UINT16_MAX;
	uint16_t x470 = 875U;
	volatile uint64_t x472 = 57684312551208961LLU;

    t106 = (x469-((x470|x471)&x472));

    if (t106 != 65534LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x478 = INT32_MIN;
	uint8_t x479 = 61U;
	static uint16_t x480 = UINT16_MAX;
	int32_t t107 = 3742830;

    t107 = (x477-((x478|x479)&x480));

    if (t107 != -62) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x486 = 1;
	uint16_t x487 = 1625U;
	uint64_t x488 = 3382LLU;
	static volatile uint64_t t108 = 117862258LLU;

    t108 = (x485-((x486|x487)&x488));

    if (t108 != 18446744073709550641LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int8_t x490 = INT8_MIN;
	int8_t x491 = INT8_MIN;
	int16_t x492 = INT16_MAX;
	static volatile uint64_t t109 = 2512527740819515241LLU;

    t109 = (x489-((x490|x491)&x492));

    if (t109 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x493 = INT32_MAX;
	volatile int8_t x495 = 1;
	static uint64_t x496 = 464652038610401891LLU;
	static uint64_t t110 = 3233357033466LLU;

    t110 = (x493-((x494|x495)&x496));

    if (t110 != 17982092037246648318LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x497 = INT8_MIN;
	int16_t x498 = INT16_MIN;
	int64_t x499 = INT64_MAX;
	volatile int64_t x500 = INT64_MIN;
	volatile int64_t t111 = -211241145866LL;

    t111 = (x497-((x498|x499)&x500));

    if (t111 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x501 = 60645943710608LL;
	static int16_t x503 = INT16_MIN;
	int64_t t112 = -13265320192891819LL;

    t112 = (x501-((x502|x503)&x504));

    if (t112 != 60641648776080LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x506 = -225;
	int8_t x507 = INT8_MAX;
	volatile int32_t t113 = 1150617;

    t113 = (x505-((x506|x507)&x508));

    if (t113 != -61) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x510 = INT16_MIN;
	int16_t x511 = -1;
	volatile uint64_t t114 = UINT64_MAX;

    t114 = (x509-((x510|x511)&x512));

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x513 = INT16_MIN;
	int64_t x514 = -1LL;
	uint16_t x515 = UINT16_MAX;
	int32_t x516 = 164;
	int64_t t115 = 86151104638123LL;

    t115 = (x513-((x514|x515)&x516));

    if (t115 != -32932LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x517 = 0;
	volatile uint16_t x518 = 2443U;
	int32_t x519 = INT32_MIN;
	static int8_t x520 = INT8_MIN;
	volatile int32_t t116 = -461497;

    t116 = (x517-((x518|x519)&x520));

    if (t116 != 2147481216) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x522 = 12;
	int8_t x523 = -1;
	volatile int32_t x524 = INT32_MIN;
	volatile int32_t t117 = 760;

    t117 = (x521-((x522|x523)&x524));

    if (t117 != 2147450880) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x525 = 7435488;
	static int32_t x526 = 0;
	int8_t x528 = -1;

    t118 = (x525-((x526|x527)&x528));

    if (t118 != 7435483) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x529 = 5503U;
	int16_t x530 = INT16_MIN;
	volatile uint32_t x532 = UINT32_MAX;
	int64_t t119 = -2756LL;

    t119 = (x529-((x530|x531)&x532));

    if (t119 != -4294961792LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x534 = 6U;
	int32_t x536 = INT32_MIN;
	volatile uint32_t t120 = UINT32_MAX;

    t120 = (x533-((x534|x535)&x536));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x537 = INT16_MAX;
	int8_t x538 = -1;
	int8_t x539 = -1;
	uint8_t x540 = 1U;
	volatile int32_t t121 = -1;

    t121 = (x537-((x538|x539)&x540));

    if (t121 != 32766) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x541 = INT8_MAX;
	static uint16_t x542 = 770U;
	int64_t x543 = 362768178676LL;
	int64_t t122 = -16662969LL;

    t122 = (x541-((x542|x543)&x544));

    if (t122 != -101LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x545 = -9388576590148152LL;
	int8_t x546 = INT8_MIN;
	uint64_t x547 = UINT64_MAX;
	uint32_t x548 = 3U;
	static volatile uint64_t t123 = 6872054410641LLU;

    t123 = (x545-((x546|x547)&x548));

    if (t123 != 18437355497119403461LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x554 = UINT64_MAX;
	static uint8_t x555 = 48U;
	uint32_t x556 = UINT32_MAX;
	volatile uint64_t t124 = 63553333882594346LLU;

    t124 = (x553-((x554|x555)&x556));

    if (t124 != 18446744069414584576LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x561 = 22642888;
	static volatile uint16_t x562 = UINT16_MAX;
	static uint8_t x563 = UINT8_MAX;
	int8_t x564 = -1;

    t125 = (x561-((x562|x563)&x564));

    if (t125 != 22577353) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x567 = 433U;
	int32_t x568 = INT32_MAX;

    t126 = (x565-((x566|x567)&x568));

    if (t126 != 4294966870U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x569 = -42LL;
	static volatile int16_t x571 = 57;
	uint16_t x572 = UINT16_MAX;
	int64_t t127 = -126973118LL;

    t127 = (x569-((x570|x571)&x572));

    if (t127 != -99LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x573 = UINT8_MAX;
	volatile uint16_t x574 = 555U;
	uint8_t x575 = UINT8_MAX;
	int32_t t128 = -52;

    t128 = (x573-((x574|x575)&x576));

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x578 = 3385193343573161LL;
	volatile uint16_t x579 = UINT16_MAX;
	static uint64_t x580 = 3835205147234LLU;
	volatile uint64_t t129 = 458684LLU;

    t129 = (x577-((x578|x579)&x580));

    if (t129 != 18446741528068465950LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x581 = INT16_MIN;
	volatile uint8_t x582 = UINT8_MAX;
	static uint64_t x583 = 1026271469LLU;
	int64_t x584 = -1554656243917763273LL;
	volatile uint64_t t130 = 2795772818647LLU;

    t130 = (x581-((x582|x583)&x584));

    if (t130 != 18446744073422206921LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x585 = -3556;
	int64_t x586 = INT64_MIN;
	uint32_t x587 = 3U;
	volatile int64_t t131 = 264580846828726315LL;

    t131 = (x585-((x586|x587)&x588));

    if (t131 != -3556LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x589 = -2;
	uint8_t x590 = 39U;
	uint64_t x591 = 823278LLU;
	int8_t x592 = -2;
	volatile uint64_t t132 = 431669489LLU;

    t132 = (x589-((x590|x591)&x592));

    if (t132 != 18446744073708728336LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x593 = 9421;
	int8_t x596 = INT8_MIN;

    t133 = (x593-((x594|x595)&x596));

    if (t133 != 9549LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x597 = 17U;
	int32_t x599 = INT32_MAX;
	volatile int8_t x600 = INT8_MIN;
	volatile int32_t t134 = 1326;

    t134 = (x597-((x598|x599)&x600));

    if (t134 != 145) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x601 = -1;
	int64_t x602 = 1221231136LL;
	int16_t x603 = INT16_MAX;
	int8_t x604 = INT8_MIN;

    t135 = (x601-((x602|x603)&x604));

    if (t135 != -1221263233LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x609 = UINT16_MAX;
	int16_t x610 = INT16_MIN;
	int32_t x611 = INT32_MIN;
	static volatile uint64_t t136 = 1021261352170151LLU;

    t136 = (x609-((x610|x611)&x612));

    if (t136 != 98303LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x613 = -1;
	uint64_t t137 = 4116285040742343LLU;

    t137 = (x613-((x614|x615)&x616));

    if (t137 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x618 = INT8_MIN;
	int32_t x620 = INT32_MAX;
	uint64_t t138 = 3LLU;

    t138 = (x617-((x618|x619)&x620));

    if (t138 != 18446744071562067980LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x621 = -1LL;
	volatile uint32_t x622 = 118845333U;
	volatile int8_t x623 = -1;

    t139 = (x621-((x622|x623)&x624));

    if (t139 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x625 = INT64_MIN;
	int64_t x628 = -1LL;
	static volatile uint64_t t140 = 2301380566773125983LLU;

    t140 = (x625-((x626|x627)&x628));

    if (t140 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x630 = -1;
	int8_t x631 = -1;
	int16_t x632 = 2140;

    t141 = (x629-((x630|x631)&x632));

    if (t141 != -2141LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x633 = -1;
	int32_t x634 = -1;
	int16_t x635 = 9859;
	static volatile int32_t x636 = 3045;
	volatile int32_t t142 = 22;

    t142 = (x633-((x634|x635)&x636));

    if (t142 != -3046) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x637 = -29117;
	int32_t x638 = INT32_MIN;
	static uint16_t x640 = 103U;
	volatile int32_t t143 = 1;

    t143 = (x637-((x638|x639)&x640));

    if (t143 != -29119) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x641 = -1LL;
	static int32_t x644 = 1;
	int64_t t144 = 408042648LL;

    t144 = (x641-((x642|x643)&x644));

    if (t144 != -2LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x646 = INT8_MAX;
	int64_t x647 = 15LL;
	int32_t x648 = -1;
	static volatile int64_t t145 = -5215LL;

    t145 = (x645-((x646|x647)&x648));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x649 = -6358148359LL;
	int32_t x652 = 11321656;
	int64_t t146 = 13888084LL;

    t146 = (x649-((x650|x651)&x652));

    if (t146 != -6361081135LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x653 = 14333U;
	int32_t x654 = 65;
	int8_t x655 = -1;
	static uint32_t t147 = 1344236116U;

    t147 = (x653-((x654|x655)&x656));

    if (t147 != 14334U) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x661 = -1LL;
	int8_t x662 = -1;
	int64_t x663 = INT64_MIN;
	volatile int64_t t148 = 14321277862LL;

    t148 = (x661-((x662|x663)&x664));

    if (t148 != -128LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint16_t x666 = UINT16_MAX;
	int8_t x667 = -1;
	int8_t x668 = -1;

    t149 = (x665-((x666|x667)&x668));

    if (t149 != 14) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x669 = -1;
	uint8_t x670 = 11U;
	uint32_t x672 = UINT32_MAX;
	uint32_t t150 = 229271U;

    t150 = (x669-((x670|x671)&x672));

    if (t150 != 2147483636U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x673 = -44130LL;
	static int8_t x675 = -1;
	volatile int64_t t151 = 1566116LL;

    t151 = (x673-((x674|x675)&x676));

    if (t151 != 9223372036854731678LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x681 = -1270281;
	int8_t x682 = INT8_MIN;
	uint64_t x683 = 23268146248LLU;
	static uint64_t t152 = 2196866230290632881LLU;

    t152 = (x681-((x682|x683)&x684));

    if (t152 != 18446689759768554487LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x685 = INT8_MAX;
	int32_t x686 = -31;
	int8_t x687 = -1;
	uint16_t x688 = UINT16_MAX;
	int32_t t153 = -339280238;

    t153 = (x685-((x686|x687)&x688));

    if (t153 != -65408) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x689 = INT16_MAX;
	uint32_t x690 = 236843570U;
	int16_t x691 = -6;
	int32_t x692 = -10;
	volatile uint32_t t154 = 969689486U;

    t154 = (x689-((x690|x691)&x692));

    if (t154 != 32781U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x693 = 0;
	static uint8_t x694 = 3U;
	int32_t x696 = INT32_MAX;
	volatile int32_t t155 = 796451158;

    t155 = (x693-((x694|x695)&x696));

    if (t155 != -2147483523) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x699 = INT64_MIN;
	volatile uint8_t x700 = 1U;
	uint64_t t156 = 358086448961987843LLU;

    t156 = (x697-((x698|x699)&x700));

    if (t156 != 6068608334662459LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x701 = INT32_MIN;
	static volatile uint64_t x702 = UINT64_MAX;
	int8_t x703 = 1;
	static volatile uint64_t t157 = 1065652LLU;

    t157 = (x701-((x702|x703)&x704));

    if (t157 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x705 = 243020207LL;
	volatile uint64_t x706 = 807230460LLU;
	volatile int16_t x707 = INT16_MAX;
	int8_t x708 = INT8_MAX;
	static volatile uint64_t t158 = 73LLU;

    t158 = (x705-((x706|x707)&x708));

    if (t158 != 243020080LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x709 = -60;
	int16_t x711 = INT16_MIN;
	int8_t x712 = 44;
	volatile uint64_t t159 = 608380564809LLU;

    t159 = (x709-((x710|x711)&x712));

    if (t159 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x715 = -1;
	static uint8_t x716 = 2U;
	volatile int64_t t160 = -871359808067975LL;

    t160 = (x713-((x714|x715)&x716));

    if (t160 != -14989109LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x718 = INT32_MIN;
	static int64_t x719 = INT64_MIN;
	uint32_t x720 = 49941U;

    t161 = (x717-((x718|x719)&x720));

    if (t161 != 168LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x721 = -115;
	volatile int64_t x722 = -295284298848LL;
	volatile int8_t x723 = INT8_MIN;
	int8_t x724 = INT8_MIN;
	volatile int64_t t162 = -2LL;

    t162 = (x721-((x722|x723)&x724));

    if (t162 != 13LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x726 = 150U;
	uint32_t x727 = 46499410U;
	volatile uint32_t t163 = 1138534U;

    t163 = (x725-((x726|x727)&x728));

    if (t163 != 4248467839U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x729 = -8;
	int8_t x730 = 1;
	int8_t x731 = -1;
	static int64_t x732 = -2224772LL;
	int64_t t164 = 926993583LL;

    t164 = (x729-((x730|x731)&x732));

    if (t164 != 2224764LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x735 = 32U;
	int16_t x736 = -58;

    t165 = (x733-((x734|x735)&x736));

    if (t165 != 9223372037722544988LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x737 = INT64_MIN;
	int64_t x739 = INT64_MIN;
	int16_t x740 = -10706;

    t166 = (x737-((x738|x739)&x740));

    if (t166 != -12LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x742 = 223U;
	int32_t x743 = -1;
	static volatile int8_t x744 = INT8_MIN;

    t167 = (x741-((x742|x743)&x744));

    if (t167 != 127U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x745 = INT8_MIN;
	int64_t x746 = 387630598LL;
	int16_t x747 = INT16_MIN;
	static int8_t x748 = INT8_MIN;
	volatile int64_t t168 = 2809LL;

    t168 = (x745-((x746|x747)&x748));

    if (t168 != 14720LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x750 = 439434602U;
	int64_t x751 = INT64_MAX;
	static volatile uint64_t t169 = 56450744570212978LLU;

    t169 = (x749-((x750|x751)&x752));

    if (t169 != 9223372049317075734LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x753 = UINT64_MAX;
	int64_t x755 = -1LL;
	uint32_t x756 = UINT32_MAX;
	uint64_t t170 = 28040149096LLU;

    t170 = (x753-((x754|x755)&x756));

    if (t170 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x757 = -1;
	volatile uint16_t x758 = 2U;
	int32_t x759 = INT32_MIN;
	static volatile uint8_t x760 = 68U;
	volatile int32_t t171 = -35556;

    t171 = (x757-((x758|x759)&x760));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MIN;
	uint16_t x763 = 5114U;
	static int16_t x764 = INT16_MIN;

    t172 = (x761-((x762|x763)&x764));

    if (t172 != 32767U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x765 = INT32_MIN;
	uint64_t x766 = 765447914277LLU;
	static int32_t x767 = -1;
	volatile uint64_t x768 = UINT64_MAX;
	volatile uint64_t t173 = 5576390680454919LLU;

    t173 = (x765-((x766|x767)&x768));

    if (t173 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x770 = -181;
	int8_t x771 = INT8_MIN;
	int64_t x772 = 148999542LL;
	volatile int64_t t174 = -185LL;

    t174 = (x769-((x770|x771)&x772));

    if (t174 != -2296483138LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x773 = 564231U;
	volatile int8_t x774 = INT8_MIN;
	int16_t x775 = 44;
	static volatile uint8_t x776 = 60U;

    t175 = (x773-((x774|x775)&x776));

    if (t175 != 564187U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x777 = 25LL;
	int16_t x778 = -9942;
	static int64_t x779 = INT64_MIN;
	volatile int16_t x780 = INT16_MIN;
	int64_t t176 = -1LL;

    t176 = (x777-((x778|x779)&x780));

    if (t176 != 32793LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x782 = 65U;
	volatile int16_t x784 = INT16_MIN;
	volatile int32_t t177 = 1;

    t177 = (x781-((x782|x783)&x784));

    if (t177 != 29907) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x785 = 108U;
	int64_t x787 = -1LL;
	uint32_t x788 = 50526U;
	int64_t t178 = -31170911155LL;

    t178 = (x785-((x786|x787)&x788));

    if (t178 != -50418LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x789 = -3817;
	uint32_t x790 = 7521U;
	int32_t x791 = 9255;
	int64_t x792 = -1LL;
	static volatile int64_t t179 = -66184984755206LL;

    t179 = (x789-((x790|x791)&x792));

    if (t179 != -19536LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x793 = -1;
	int64_t x794 = INT64_MIN;
	uint64_t x795 = 84768446944718LLU;
	uint16_t x796 = 2U;
	volatile uint64_t t180 = 23229538346LLU;

    t180 = (x793-((x794|x795)&x796));

    if (t180 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x797 = 103U;
	static volatile uint64_t x798 = 2996942LLU;
	volatile uint64_t t181 = 78480885792168LLU;

    t181 = (x797-((x798|x799)&x800));

    if (t181 != 102LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x801 = INT64_MAX;
	uint64_t x802 = 102083LLU;
	volatile uint64_t x803 = 6554757850535355144LLU;
	static volatile uint64_t t182 = 575443LLU;

    t182 = (x801-((x802|x803)&x804));

    if (t182 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x806 = 86U;
	int8_t x807 = 5;
	uint16_t x808 = 552U;

    t183 = (x805-((x806|x807)&x808));

    if (t183 != -59) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x810 = 9807U;
	int32_t x812 = INT32_MIN;
	volatile int64_t t184 = -21LL;

    t184 = (x809-((x810|x811)&x812));

    if (t184 != 233520248505202LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x813 = INT32_MIN;
	int64_t x814 = INT64_MAX;
	static int32_t x816 = 2159016;

    t185 = (x813-((x814|x815)&x816));

    if (t185 != -2149642664LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x817 = UINT64_MAX;
	int64_t x818 = INT64_MIN;
	int16_t x819 = 0;
	int32_t x820 = INT32_MAX;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = (x817-((x818|x819)&x820));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x821 = -1;
	static int64_t x822 = -5313LL;
	static int64_t x823 = -277940033999549495LL;
	int32_t x824 = 141009135;

    t187 = (x821-((x822|x823)&x824));

    if (t187 != -141009136LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x825 = INT8_MAX;
	uint8_t x826 = 44U;
	static uint8_t x828 = UINT8_MAX;
	volatile uint32_t t188 = 2468500U;

    t188 = (x825-((x826|x827)&x828));

    if (t188 != 4294967170U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x829 = 0U;
	int8_t x831 = INT8_MIN;
	int64_t x832 = INT64_MAX;
	volatile int64_t t189 = -7857635374987LL;

    t189 = (x829-((x830|x831)&x832));

    if (t189 != -9223372036854775716LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x833 = -15176LL;
	int64_t x834 = INT64_MIN;
	static int8_t x835 = 1;
	int64_t x836 = 2399426699325615427LL;
	int64_t t190 = -1583858639781LL;

    t190 = (x833-((x834|x835)&x836));

    if (t190 != -15177LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x837 = -97;
	volatile int8_t x838 = INT8_MAX;
	uint64_t x839 = UINT64_MAX;
	uint32_t x840 = UINT32_MAX;
	uint64_t t191 = 21479495781LLU;

    t191 = (x837-((x838|x839)&x840));

    if (t191 != 18446744069414584224LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x841 = 510U;
	uint16_t x842 = 0U;
	volatile uint32_t t192 = 3U;

    t192 = (x841-((x842|x843)&x844));

    if (t192 != 4054638046U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x845 = 40917LLU;
	int64_t x847 = INT64_MAX;
	int32_t x848 = INT32_MIN;
	static uint64_t t193 = 8648930953024177929LLU;

    t193 = (x845-((x846|x847)&x848));

    if (t193 != 9223372039002300373LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint64_t x849 = 44672922854034528LLU;
	int16_t x850 = INT16_MAX;
	uint64_t x851 = 15LLU;
	uint64_t t194 = 5011427LLU;

    t194 = (x849-((x850|x851)&x852));

    if (t194 != 44672922854034528LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x853 = -1;
	int64_t x856 = -1LL;

    t195 = (x853-((x854|x855)&x856));

    if (t195 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x861 = INT32_MAX;
	int64_t x862 = -74LL;
	uint32_t x863 = 428062483U;
	int32_t x864 = 1067;
	static int64_t t196 = 3107134166302LL;

    t196 = (x861-((x862|x863)&x864));

    if (t196 != 2147482588LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x865 = 6122U;
	volatile int32_t x866 = INT32_MIN;
	int8_t x867 = INT8_MAX;
	static uint32_t t197 = 11U;

    t197 = (x865-((x866|x867)&x868));

    if (t197 != 6100U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x869 = 29U;
	uint16_t x870 = 5U;
	int16_t x871 = INT16_MIN;
	uint64_t x872 = 73LLU;
	volatile uint64_t t198 = 85653LLU;

    t198 = (x869-((x870|x871)&x872));

    if (t198 != 28LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x873 = 0;
	int32_t x875 = INT32_MAX;
	uint64_t x876 = UINT64_MAX;
	volatile uint64_t t199 = 2718534458LLU;

    t199 = (x873-((x874|x875)&x876));

    if (t199 != 1LLU) { NG(); } else { ; }
	
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

