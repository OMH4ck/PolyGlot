
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

static volatile uint8_t x1 = 39U;
int16_t x11 = -1;
int8_t x12 = INT8_MIN;
volatile uint32_t t2 = 18794159U;
int32_t x19 = INT32_MIN;
int64_t x39 = INT64_MAX;
static int32_t t9 = 698276010;
int32_t x52 = INT32_MAX;
uint64_t x57 = UINT64_MAX;
volatile uint64_t t14 = UINT64_MAX;
uint32_t x63 = 3514211U;
static uint8_t x67 = 14U;
int16_t x69 = -18;
volatile int8_t x80 = INT8_MAX;
int32_t t19 = -496;
static volatile int32_t t20 = -3;
static uint16_t x90 = UINT16_MAX;
int32_t x91 = -1203;
int16_t x92 = -1;
int64_t t22 = 265061135101585695LL;
int64_t x93 = -14661565516630LL;
static int16_t x95 = -225;
int16_t x96 = -1;
volatile int64_t t23 = -2328111536355LL;
uint8_t x97 = 0U;
uint8_t x99 = 3U;
static int64_t x100 = INT64_MIN;
int64_t x107 = INT64_MIN;
volatile int8_t x108 = INT8_MAX;
int8_t x112 = INT8_MIN;
int32_t t28 = -101316;
volatile int16_t x131 = INT16_MIN;
int32_t t38 = 110437;
static uint8_t x162 = 63U;
volatile int64_t x163 = -10194163195027LL;
int8_t x168 = -29;
volatile int32_t t42 = 5184;
uint16_t x190 = 7U;
static volatile int32_t t47 = INT32_MIN;
volatile uint16_t x196 = 29773U;
uint8_t x202 = UINT8_MAX;
volatile int8_t x203 = 1;
volatile int16_t x204 = -3;
uint64_t x213 = 19239026209LLU;
static int32_t x218 = -1;
int32_t t55 = 0;
int8_t x230 = INT8_MAX;
int32_t t57 = -44;
int64_t x238 = INT64_MAX;
volatile int32_t t59 = 16702;
static uint16_t x242 = UINT16_MAX;
int32_t t61 = 18;
volatile uint64_t x249 = 206976477758193103LLU;
int16_t x252 = INT16_MAX;
volatile int16_t x255 = INT16_MIN;
static int8_t x256 = INT8_MIN;
volatile int64_t x263 = 247LL;
static uint16_t x266 = 1U;
static volatile int32_t t66 = -130966;
uint64_t x277 = UINT64_MAX;
uint16_t x282 = UINT16_MAX;
static int32_t t72 = 32;
int64_t x300 = 37685203088774551LL;
volatile int8_t x304 = INT8_MAX;
uint32_t x306 = UINT32_MAX;
int8_t x308 = INT8_MAX;
int64_t t77 = INT64_MIN;
uint8_t x316 = 6U;
uint32_t x317 = UINT32_MAX;
volatile uint32_t t79 = UINT32_MAX;
static uint8_t x322 = 2U;
volatile int32_t x323 = -1412;
uint32_t t80 = 23340U;
volatile int64_t x331 = INT64_MAX;
static int16_t x335 = INT16_MIN;
volatile int64_t t83 = 20620335098597LL;
static int16_t x341 = INT16_MAX;
volatile int16_t x345 = INT16_MAX;
static int32_t x348 = INT32_MIN;
static volatile uint16_t x350 = 1U;
uint16_t x352 = 16U;
volatile int32_t t88 = 54642;
static int64_t x359 = INT64_MIN;
static int32_t x360 = 20039709;
int32_t x366 = -659634314;
volatile int64_t x379 = -4444176720LL;
static int64_t x380 = -406917174253LL;
uint64_t t94 = 116594874196637457LLU;
volatile int8_t x390 = INT8_MAX;
int32_t t97 = 63;
int64_t x395 = -1LL;
uint16_t x400 = UINT16_MAX;
int16_t x402 = -1;
int32_t t100 = -1;
int16_t x409 = 77;
uint64_t x410 = UINT64_MAX;
int64_t x425 = INT64_MIN;
int8_t x433 = 1;
int16_t x436 = -5770;
uint8_t x441 = UINT8_MAX;
int16_t x443 = INT16_MAX;
static int32_t x446 = -4547316;
int64_t x453 = INT64_MIN;
uint8_t x465 = 0U;
int16_t x467 = 16325;
int16_t x468 = -1;
volatile int32_t t116 = -97;
volatile int32_t t117 = -10;
int32_t t118 = -892006;
static int64_t x478 = INT64_MIN;
volatile uint16_t x489 = 598U;
volatile int32_t t122 = -109;
static uint8_t x499 = 1U;
int64_t x501 = INT64_MAX;
int64_t x509 = -108657377LL;
uint8_t x512 = UINT8_MAX;
static int64_t t127 = -79779350156094LL;
uint16_t x513 = UINT16_MAX;
int64_t x515 = -1LL;
int32_t t128 = 11;
int64_t x519 = INT64_MIN;
volatile int32_t t129 = 1858648;
int8_t x524 = INT8_MAX;
volatile int64_t x525 = INT64_MAX;
int16_t x528 = -1;
int8_t x534 = 3;
static int16_t x535 = 86;
int16_t x538 = 8876;
static int32_t t134 = -99689358;
int64_t x545 = INT64_MAX;
volatile uint64_t x547 = 579614LLU;
static volatile uint16_t x551 = 15U;
volatile int32_t t137 = -3;
int32_t t138 = -713;
static int64_t x558 = -1LL;
int16_t x561 = INT16_MAX;
static int16_t x562 = -15;
uint64_t x573 = 90400LLU;
uint16_t x575 = 3308U;
volatile int64_t x576 = 903109183912LL;
uint16_t x580 = 237U;
static int64_t x587 = INT64_MIN;
uint8_t x597 = 19U;
volatile uint8_t x604 = 3U;
volatile int8_t x605 = INT8_MIN;
int32_t t151 = -1;
uint32_t x621 = 0U;
volatile uint32_t t155 = 1151675U;
int32_t x626 = INT32_MAX;
volatile uint32_t t157 = 737587U;
volatile int16_t x634 = INT16_MAX;
static int32_t x638 = INT32_MIN;
static int8_t x644 = -12;
int8_t x649 = INT8_MAX;
static int32_t x650 = INT32_MAX;
volatile int8_t x654 = -1;
int32_t x655 = INT32_MIN;
volatile uint8_t x670 = 110U;
static int16_t x673 = INT16_MIN;
volatile int32_t t168 = 1526;
uint16_t x678 = UINT16_MAX;
volatile int16_t x679 = INT16_MIN;
volatile int16_t x683 = INT16_MIN;
int32_t t170 = -163040;
int16_t x688 = -3;
volatile uint32_t t171 = 75339156U;
static int64_t x689 = 135608219716325227LL;
int32_t x692 = 3;
int32_t x694 = 4059650;
uint64_t x695 = 207LLU;
static volatile uint64_t x698 = 1064317225LLU;
volatile int16_t x701 = INT16_MIN;
static int64_t x708 = INT64_MIN;
uint32_t t177 = 37024320U;
int32_t t178 = 993;
uint16_t x719 = 50U;
int32_t t179 = -911526858;
int8_t x721 = INT8_MIN;
static int32_t x731 = INT32_MIN;
volatile int32_t t182 = 656845140;
static int16_t x734 = INT16_MIN;
static int8_t x741 = INT8_MIN;
static int64_t x742 = 346398688LL;
uint16_t x748 = UINT16_MAX;
uint64_t x751 = 1092418375683LLU;
uint16_t x753 = 3U;
int8_t x754 = -1;
int8_t x757 = 47;
uint16_t x758 = 48U;
int8_t x761 = INT8_MIN;
int16_t x764 = INT16_MIN;
static volatile int16_t x769 = -1;
volatile int32_t x772 = -387013;
int8_t x773 = -1;
uint16_t x777 = UINT16_MAX;
int16_t x788 = INT16_MIN;
int8_t x791 = INT8_MIN;
volatile int32_t x794 = -1;
static volatile int32_t x798 = -1;
uint64_t x800 = 539545114957923639LLU;


void f0(void) {
    	static int32_t x2 = -1;
	static int32_t x3 = INT32_MIN;
	uint32_t x4 = 4U;
	volatile int32_t t0 = -37645296;

    t0 = (x1|((x2>x3)>x4));

    if (t0 != 39) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MAX;
	volatile int32_t x6 = -185;
	uint32_t x7 = UINT32_MAX;
	int8_t x8 = -1;
	int32_t t1 = INT32_MAX;

    t1 = (x5|((x6>x7)>x8));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 263U;
	static int32_t x10 = INT32_MIN;

    t2 = (x9|((x10>x11)>x12));

    if (t2 != 263U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	volatile int16_t x14 = 4;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = 86537U;
	int32_t t3 = 7;

    t3 = (x13|((x14>x15)>x16));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static volatile int16_t x18 = INT16_MAX;
	static int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -5414;

    t4 = (x17|((x18>x19)>x20));

    if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MAX;
	uint64_t x23 = UINT64_MAX;
	static int32_t x24 = -414;
	int32_t t5 = 16;

    t5 = (x21|((x22>x23)>x24));

    if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	static int16_t x26 = INT16_MAX;
	int8_t x27 = 21;
	int16_t x28 = INT16_MIN;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = (x25|((x26>x27)>x28));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	int16_t x30 = INT16_MAX;
	int8_t x31 = INT8_MAX;
	int32_t x32 = -1;
	static int32_t t7 = -1;

    t7 = (x29|((x30>x31)>x32));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 40U;
	volatile int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MIN;
	uint64_t x36 = 462LLU;
	static volatile uint32_t t8 = 2U;

    t8 = (x33|((x34>x35)>x36));

    if (t8 != 40U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MAX;
	int8_t x38 = -1;
	uint8_t x40 = 104U;

    t9 = (x37|((x38>x39)>x40));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	static uint8_t x42 = 68U;
	uint8_t x43 = 8U;
	int16_t x44 = 0;
	int32_t t10 = 141169;

    t10 = (x41|((x42>x43)>x44));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MIN;
	uint8_t x46 = UINT8_MAX;
	static int16_t x47 = INT16_MIN;
	int32_t x48 = -1;
	static volatile int32_t t11 = 1;

    t11 = (x45|((x46>x47)>x48));

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 30U;
	uint32_t x50 = 59624861U;
	static uint64_t x51 = 360777394414LLU;
	int32_t t12 = 626;

    t12 = (x49|((x50>x51)>x52));

    if (t12 != 30) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = 15;
	uint8_t x54 = 60U;
	int64_t x55 = INT64_MAX;
	int64_t x56 = INT64_MIN;
	int32_t t13 = -3;

    t13 = (x53|((x54>x55)>x56));

    if (t13 != 15) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	static int64_t x59 = -2659289412LL;
	int32_t x60 = -1;

    t14 = (x57|((x58>x59)>x60));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 0LLU;
	static int64_t x62 = INT64_MIN;
	volatile int16_t x64 = INT16_MAX;
	volatile uint64_t t15 = 98588489995LLU;

    t15 = (x61|((x62>x63)>x64));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = UINT32_MAX;
	uint64_t x66 = 269534088329329LLU;
	int64_t x68 = -11173792783LL;
	uint32_t t16 = UINT32_MAX;

    t16 = (x65|((x66>x67)>x68));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x70 = UINT16_MAX;
	int64_t x71 = INT64_MAX;
	static int8_t x72 = -1;
	static int32_t t17 = 15340;

    t17 = (x69|((x70>x71)>x72));

    if (t17 != -17) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MAX;
	volatile uint16_t x76 = 1905U;
	volatile int32_t t18 = 1705;

    t18 = (x73|((x74>x75)>x76));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = 1U;
	volatile uint32_t x78 = UINT32_MAX;
	int8_t x79 = INT8_MIN;

    t19 = (x77|((x78>x79)>x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int64_t x82 = INT64_MIN;
	int8_t x83 = 48;
	uint32_t x84 = UINT32_MAX;

    t20 = (x81|((x82>x83)>x84));

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	volatile int8_t x86 = INT8_MIN;
	volatile int32_t x87 = -1;
	int64_t x88 = -1679775LL;
	int64_t t21 = INT64_MAX;

    t21 = (x85|((x86>x87)>x88));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -3317985495LL;

    t22 = (x89|((x90>x91)>x92));

    if (t22 != -3317985495LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x94 = 566U;

    t23 = (x93|((x94>x95)>x96));

    if (t23 != -14661565516629LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = 1;
	int32_t t24 = -6724;

    t24 = (x97|((x98>x99)>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = 26;
	uint64_t x102 = 73415330395074LLU;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = 5;
	volatile int32_t t25 = -1502111;

    t25 = (x101|((x102>x103)>x104));

    if (t25 != 26) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -24;
	uint64_t x106 = 103835090580LLU;
	static volatile int32_t t26 = 1;

    t26 = (x105|((x106>x107)>x108));

    if (t26 != -24) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	static int16_t x110 = INT16_MAX;
	int64_t x111 = INT64_MIN;
	volatile int32_t t27 = -1867;

    t27 = (x109|((x110>x111)>x112));

    if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = -2;
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 75U;
	int32_t x116 = INT32_MAX;

    t28 = (x113|((x114>x115)>x116));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = -1;
	int64_t x118 = INT64_MIN;
	int16_t x119 = -220;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = 1302;

    t29 = (x117|((x118>x119)>x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 0;
	static int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MIN;
	int16_t x124 = 1754;
	static int32_t t30 = 560;

    t30 = (x121|((x122>x123)>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 5U;
	volatile int8_t x126 = -1;
	int8_t x127 = INT8_MIN;
	volatile int16_t x128 = INT16_MIN;
	int32_t t31 = -14736178;

    t31 = (x125|((x126>x127)>x128));

    if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 85079U;
	int8_t x130 = INT8_MIN;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t32 = 10U;

    t32 = (x129|((x130>x131)>x132));

    if (t32 != 85079U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = UINT64_MAX;
	uint8_t x134 = 33U;
	volatile int64_t x135 = INT64_MIN;
	int32_t x136 = -90500;
	volatile uint64_t t33 = UINT64_MAX;

    t33 = (x133|((x134>x135)>x136));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MAX;
	uint16_t x139 = UINT16_MAX;
	volatile int16_t x140 = INT16_MIN;
	int64_t t34 = -20450LL;

    t34 = (x137|((x138>x139)>x140));

    if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	static uint8_t x142 = UINT8_MAX;
	int64_t x143 = 1604655249414270034LL;
	int64_t x144 = INT64_MAX;
	static int32_t t35 = INT32_MAX;

    t35 = (x141|((x142>x143)>x144));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -95;
	int32_t x146 = INT32_MAX;
	static int64_t x147 = INT64_MAX;
	volatile uint32_t x148 = 6U;
	int32_t t36 = -1796058;

    t36 = (x145|((x146>x147)>x148));

    if (t36 != -95) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = -480;
	volatile uint64_t x150 = 353985754400317LLU;
	static int32_t x151 = -1;
	int8_t x152 = 0;
	int32_t t37 = -6;

    t37 = (x149|((x150>x151)>x152));

    if (t37 != -480) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = UINT8_MAX;
	int32_t x154 = -599768;
	int32_t x155 = -1;
	volatile int8_t x156 = -1;

    t38 = (x153|((x154>x155)>x156));

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	static int8_t x158 = -1;
	uint64_t x159 = 13467583LLU;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = 196936;

    t39 = (x157|((x158>x159)>x160));

    if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = 244073444987886LL;
	uint64_t x164 = 13757238847LLU;
	static int64_t t40 = -731903250387556LL;

    t40 = (x161|((x162>x163)>x164));

    if (t40 != 244073444987886LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = INT8_MIN;
	uint64_t x166 = 1167379837108LLU;
	static int64_t x167 = -1LL;
	int32_t t41 = 93;

    t41 = (x165|((x166>x167)>x168));

    if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	int32_t x170 = INT32_MIN;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MAX;

    t42 = (x169|((x170>x171)>x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = UINT8_MAX;
	volatile int16_t x174 = 148;
	int16_t x175 = -2180;
	uint16_t x176 = 251U;
	volatile int32_t t43 = 7875693;

    t43 = (x173|((x174>x175)>x176));

    if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 374430862912LLU;
	int16_t x178 = -13;
	volatile uint64_t x179 = 1675795LLU;
	volatile uint32_t x180 = UINT32_MAX;
	volatile uint64_t t44 = 28667LLU;

    t44 = (x177|((x178>x179)>x180));

    if (t44 != 374430862912LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 0U;
	uint16_t x182 = 5554U;
	int64_t x183 = -1LL;
	int8_t x184 = 16;
	static volatile int32_t t45 = 5382;

    t45 = (x181|((x182>x183)>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 107U;
	static volatile uint16_t x186 = 18049U;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 17;

    t46 = (x185|((x186>x187)>x188));

    if (t46 != 107) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	volatile int8_t x191 = 1;
	uint8_t x192 = 29U;

    t47 = (x189|((x190>x191)>x192));

    if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MIN;
	static int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	int32_t t48 = -577;

    t48 = (x193|((x194>x195)>x196));

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 1094614855598700LL;
	int16_t x198 = -1;
	volatile int64_t x199 = INT64_MIN;
	uint16_t x200 = 42U;
	static int64_t t49 = -1440659845621LL;

    t49 = (x197|((x198>x199)>x200));

    if (t49 != 1094614855598700LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -28665;
	volatile int32_t t50 = 3232008;

    t50 = (x201|((x202>x203)>x204));

    if (t50 != -28665) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x205 = UINT16_MAX;
	uint8_t x206 = 1U;
	static int64_t x207 = INT64_MAX;
	uint8_t x208 = 5U;
	volatile int32_t t51 = -23;

    t51 = (x205|((x206>x207)>x208));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MAX;
	volatile uint16_t x210 = UINT16_MAX;
	volatile uint8_t x211 = 35U;
	volatile int8_t x212 = INT8_MIN;
	static int32_t t52 = INT32_MAX;

    t52 = (x209|((x210>x211)>x212));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x214 = -10;
	int64_t x215 = -1LL;
	uint32_t x216 = 33565658U;
	volatile uint64_t t53 = 27LLU;

    t53 = (x213|((x214>x215)>x216));

    if (t53 != 19239026209LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	uint8_t x219 = 3U;
	static int64_t x220 = -57894595LL;
	volatile int32_t t54 = 111770;

    t54 = (x217|((x218>x219)>x220));

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x221 = 115U;
	int64_t x222 = -38049949LL;
	volatile uint8_t x223 = 3U;
	int64_t x224 = 5594009LL;

    t55 = (x221|((x222>x223)>x224));

    if (t55 != 115) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 1U;
	uint64_t x226 = 34269972879LLU;
	static uint64_t x227 = UINT64_MAX;
	static int8_t x228 = -1;
	int32_t t56 = -5;

    t56 = (x225|((x226>x227)>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int16_t x231 = -1;
	volatile uint64_t x232 = 3573518670588938LLU;

    t57 = (x229|((x230>x231)>x232));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 42U;
	int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 4935162;

    t58 = (x233|((x234>x235)>x236));

    if (t58 != 42) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	uint64_t x239 = 717195LLU;
	uint16_t x240 = UINT16_MAX;

    t59 = (x237|((x238>x239)>x240));

    if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	uint32_t x243 = UINT32_MAX;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -11;

    t60 = (x241|((x242>x243)>x244));

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = -6;
	static uint8_t x246 = 47U;
	int32_t x247 = 1;
	int8_t x248 = INT8_MIN;

    t61 = (x245|((x246>x247)>x248));

    if (t61 != -5) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint16_t x250 = 44U;
	uint64_t x251 = 12568495604862692LLU;
	uint64_t t62 = 1193LLU;

    t62 = (x249|((x250>x251)>x252));

    if (t62 != 206976477758193103LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	volatile uint16_t x254 = 149U;
	static volatile int32_t t63 = 551662;

    t63 = (x253|((x254>x255)>x256));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	volatile int16_t x258 = -1;
	int8_t x259 = INT8_MIN;
	volatile int32_t x260 = INT32_MIN;
	int32_t t64 = 482866;

    t64 = (x257|((x258>x259)>x260));

    if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = -9219;
	static uint32_t x262 = UINT32_MAX;
	int64_t x264 = INT64_MIN;
	int32_t t65 = -886628;

    t65 = (x261|((x262>x263)>x264));

    if (t65 != -9219) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x265 = UINT8_MAX;
	uint8_t x267 = UINT8_MAX;
	uint32_t x268 = UINT32_MAX;

    t66 = (x265|((x266>x267)>x268));

    if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MAX;
	int8_t x270 = INT8_MIN;
	uint32_t x271 = UINT32_MAX;
	static uint16_t x272 = UINT16_MAX;
	static int32_t t67 = INT32_MAX;

    t67 = (x269|((x270>x271)>x272));

    if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -51;
	static uint16_t x274 = UINT16_MAX;
	int32_t x275 = INT32_MAX;
	static volatile uint32_t x276 = UINT32_MAX;
	volatile int32_t t68 = -899701655;

    t68 = (x273|((x274>x275)>x276));

    if (t68 != -51) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = INT64_MIN;
	static int32_t x279 = -1;
	volatile int8_t x280 = INT8_MIN;
	volatile uint64_t t69 = UINT64_MAX;

    t69 = (x277|((x278>x279)>x280));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x281 = UINT16_MAX;
	static uint32_t x283 = 112U;
	static volatile int8_t x284 = INT8_MAX;
	volatile int32_t t70 = 403913639;

    t70 = (x281|((x282>x283)>x284));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 23182U;
	volatile int64_t x286 = -1LL;
	int8_t x287 = -1;
	int8_t x288 = INT8_MAX;
	static volatile int32_t t71 = -403802;

    t71 = (x285|((x286>x287)>x288));

    if (t71 != 23182) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -3;
	volatile uint32_t x290 = 107U;
	static uint16_t x291 = 161U;
	int64_t x292 = INT64_MAX;

    t72 = (x289|((x290>x291)>x292));

    if (t72 != -3) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	volatile int8_t x295 = INT8_MIN;
	volatile int8_t x296 = INT8_MIN;
	int32_t t73 = -141041;

    t73 = (x293|((x294>x295)>x296));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = INT32_MIN;
	static uint16_t x298 = 52U;
	uint8_t x299 = UINT8_MAX;
	volatile int32_t t74 = INT32_MIN;

    t74 = (x297|((x298>x299)>x300));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MAX;
	int16_t x302 = -1;
	static int8_t x303 = -1;
	volatile int32_t t75 = 14676;

    t75 = (x301|((x302>x303)>x304));

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = UINT16_MAX;
	static volatile int8_t x307 = -1;
	volatile int32_t t76 = 7;

    t76 = (x305|((x306>x307)>x308));

    if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	uint16_t x310 = 98U;
	int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MAX;

    t77 = (x309|((x310>x311)>x312));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = 130;
	int32_t t78 = 3463400;

    t78 = (x313|((x314>x315)>x316));

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MIN;
	int16_t x320 = -1;

    t79 = (x317|((x318>x319)>x320));

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 1782U;
	int8_t x324 = INT8_MIN;

    t80 = (x321|((x322>x323)>x324));

    if (t80 != 1783U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	volatile int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MAX;
	volatile int8_t x328 = 13;
	static int32_t t81 = 4104;

    t81 = (x325|((x326>x327)>x328));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MIN;
	volatile uint32_t x332 = UINT32_MAX;
	int32_t t82 = INT32_MAX;

    t82 = (x329|((x330>x331)>x332));

    if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = -2917522172308285264LL;
	int8_t x334 = 7;
	int16_t x336 = 4754;

    t83 = (x333|((x334>x335)>x336));

    if (t83 != -2917522172308285264LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	int32_t x338 = 1078;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = 31U;
	volatile int32_t t84 = -13791;

    t84 = (x337|((x338>x339)>x340));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x342 = 0U;
	volatile int64_t x343 = -1LL;
	volatile int8_t x344 = -1;
	int32_t t85 = 3;

    t85 = (x341|((x342>x343)>x344));

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x346 = 3LLU;
	uint64_t x347 = 379LLU;
	volatile int32_t t86 = -1;

    t86 = (x345|((x346>x347)>x348));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	static int32_t t87 = 37312;

    t87 = (x349|((x350>x351)>x352));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x353 = UINT16_MAX;
	volatile int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MIN;
	static uint8_t x356 = 5U;

    t88 = (x353|((x354>x355)>x356));

    if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	volatile int64_t x358 = 468600906141439LL;
	volatile int32_t t89 = INT32_MIN;

    t89 = (x357|((x358>x359)>x360));

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = -1;
	static int64_t x362 = INT64_MIN;
	uint16_t x363 = 2U;
	volatile int16_t x364 = -1;
	static volatile int32_t t90 = -118568;

    t90 = (x361|((x362>x363)>x364));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 38U;
	int16_t x367 = -3180;
	int8_t x368 = -1;
	volatile int32_t t91 = -345;

    t91 = (x365|((x366>x367)>x368));

    if (t91 != 39) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	int64_t x370 = -1LL;
	uint64_t x371 = 1375LLU;
	uint64_t x372 = UINT64_MAX;
	static int64_t t92 = 12536788037563LL;

    t92 = (x369|((x370>x371)>x372));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = 1;
	uint16_t x374 = UINT16_MAX;
	int64_t x375 = INT64_MIN;
	static int64_t x376 = 377893013LL;
	static volatile int32_t t93 = 52;

    t93 = (x373|((x374>x375)>x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x377 = 9165106198LLU;
	uint16_t x378 = 24487U;

    t94 = (x377|((x378>x379)>x380));

    if (t94 != 9165106199LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -25;
	int32_t x382 = 6;
	int64_t x383 = 62767987090422324LL;
	uint8_t x384 = 120U;
	volatile int32_t t95 = -120;

    t95 = (x381|((x382>x383)>x384));

    if (t95 != -25) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x385 = UINT16_MAX;
	uint16_t x386 = UINT16_MAX;
	static volatile int64_t x387 = INT64_MAX;
	volatile int32_t x388 = INT32_MAX;
	static int32_t t96 = 77;

    t96 = (x385|((x386>x387)>x388));

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 374U;
	uint64_t x391 = 7304LLU;
	int8_t x392 = 27;

    t97 = (x389|((x390>x391)>x392));

    if (t97 != 374) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MAX;
	uint64_t x394 = UINT64_MAX;
	int8_t x396 = 19;
	int64_t t98 = INT64_MAX;

    t98 = (x393|((x394>x395)>x396));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x397 = 2323LLU;
	int16_t x398 = -25;
	volatile int16_t x399 = 611;
	static uint64_t t99 = 2740296LLU;

    t99 = (x397|((x398>x399)>x400));

    if (t99 != 2323LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = -8;
	static uint16_t x403 = 65U;
	int16_t x404 = -810;

    t100 = (x401|((x402>x403)>x404));

    if (t100 != -7) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 1693U;
	volatile int64_t x406 = INT64_MIN;
	int64_t x407 = 345529760389LL;
	volatile uint64_t x408 = 1810954761145LLU;
	static int32_t t101 = -16252691;

    t101 = (x405|((x406>x407)>x408));

    if (t101 != 1693) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x411 = INT32_MIN;
	uint64_t x412 = UINT64_MAX;
	static volatile int32_t t102 = 0;

    t102 = (x409|((x410>x411)>x412));

    if (t102 != 77) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	uint16_t x414 = UINT16_MAX;
	uint8_t x415 = 12U;
	volatile int32_t x416 = INT32_MAX;
	static volatile int32_t t103 = -4;

    t103 = (x413|((x414>x415)>x416));

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x417 = 39U;
	int8_t x418 = INT8_MAX;
	static int16_t x419 = INT16_MIN;
	int64_t x420 = -15506835572LL;
	volatile int32_t t104 = -2;

    t104 = (x417|((x418>x419)>x420));

    if (t104 != 39) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = UINT16_MAX;
	uint32_t x422 = UINT32_MAX;
	volatile int32_t x423 = 2;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t105 = -215;

    t105 = (x421|((x422>x423)>x424));

    if (t105 != 65535) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x426 = 33043;
	static int8_t x427 = -8;
	int8_t x428 = INT8_MIN;
	int64_t t106 = -8970449549444LL;

    t106 = (x425|((x426>x427)>x428));

    if (t106 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x429 = 1U;
	static volatile int64_t x430 = 5700428260357LL;
	static int16_t x431 = -1;
	static volatile int16_t x432 = -1;
	int32_t t107 = -114086;

    t107 = (x429|((x430>x431)>x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = 1815844267LL;
	volatile int8_t x435 = 55;
	volatile int32_t t108 = -1;

    t108 = (x433|((x434>x435)>x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x437 = UINT32_MAX;
	uint32_t x438 = UINT32_MAX;
	int32_t x439 = 1902394;
	int64_t x440 = INT64_MAX;
	static uint32_t t109 = UINT32_MAX;

    t109 = (x437|((x438>x439)>x440));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x442 = 13554;
	uint64_t x444 = UINT64_MAX;
	int32_t t110 = -784789;

    t110 = (x441|((x442>x443)>x444));

    if (t110 != 255) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x445 = 16466338143043LLU;
	int32_t x447 = INT32_MIN;
	int8_t x448 = 49;
	volatile uint64_t t111 = 224602951821316LLU;

    t111 = (x445|((x446>x447)>x448));

    if (t111 != 16466338143043LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = -1LL;
	int8_t x450 = INT8_MIN;
	uint32_t x451 = UINT32_MAX;
	volatile uint32_t x452 = UINT32_MAX;
	volatile int64_t t112 = 276227LL;

    t112 = (x449|((x450>x451)>x452));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = INT16_MIN;
	int64_t x455 = INT64_MIN;
	static int8_t x456 = INT8_MIN;
	int64_t t113 = 3985189734LL;

    t113 = (x453|((x454>x455)>x456));

    if (t113 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint32_t x457 = 86U;
	static int64_t x458 = -1LL;
	static uint32_t x459 = UINT32_MAX;
	int8_t x460 = INT8_MIN;
	volatile uint32_t t114 = 364696624U;

    t114 = (x457|((x458>x459)>x460));

    if (t114 != 87U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = -679;
	int64_t x462 = INT64_MIN;
	static volatile int64_t x463 = 102552174LL;
	uint16_t x464 = 236U;
	int32_t t115 = -1004872;

    t115 = (x461|((x462>x463)>x464));

    if (t115 != -679) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = -1;

    t116 = (x465|((x466>x467)>x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x470 = 426311;
	uint8_t x471 = 1U;
	uint64_t x472 = UINT64_MAX;

    t117 = (x469|((x470>x471)>x472));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	volatile int8_t x474 = 17;
	volatile int64_t x475 = 15183LL;
	static int8_t x476 = INT8_MAX;

    t118 = (x473|((x474>x475)>x476));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	uint64_t x479 = 1582763745048046546LLU;
	volatile uint64_t x480 = 1064487931LLU;
	int32_t t119 = INT32_MIN;

    t119 = (x477|((x478>x479)>x480));

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = 814;
	int32_t x482 = 1;
	int64_t x483 = 754LL;
	int16_t x484 = 3672;
	int32_t t120 = 14340;

    t120 = (x481|((x482>x483)>x484));

    if (t120 != 814) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	uint32_t x486 = UINT32_MAX;
	volatile int16_t x487 = INT16_MIN;
	volatile int16_t x488 = -8;
	int32_t t121 = 95802087;

    t121 = (x485|((x486>x487)>x488));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = INT8_MIN;
	uint32_t x491 = 1062768821U;
	static int32_t x492 = INT32_MIN;

    t122 = (x489|((x490>x491)>x492));

    if (t122 != 599) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = UINT64_MAX;
	static uint16_t x494 = UINT16_MAX;
	int64_t x495 = INT64_MIN;
	static volatile int32_t x496 = INT32_MIN;
	volatile uint64_t t123 = UINT64_MAX;

    t123 = (x493|((x494>x495)>x496));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x497 = -1;
	int32_t x498 = INT32_MIN;
	int64_t x500 = -1692896LL;
	static int32_t t124 = -664;

    t124 = (x497|((x498>x499)>x500));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x502 = 1301LLU;
	static uint8_t x503 = 17U;
	int8_t x504 = INT8_MIN;
	static int64_t t125 = INT64_MAX;

    t125 = (x501|((x502>x503)>x504));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	volatile uint32_t x506 = 355015U;
	uint16_t x507 = UINT16_MAX;
	uint64_t x508 = 2244LLU;
	int64_t t126 = -654920755LL;

    t126 = (x505|((x506>x507)>x508));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = 7086;
	int32_t x511 = INT32_MIN;

    t127 = (x509|((x510>x511)>x512));

    if (t127 != -108657377LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = -9;
	int32_t x516 = -6260;

    t128 = (x513|((x514>x515)>x516));

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x517 = INT16_MIN;
	uint64_t x518 = UINT64_MAX;
	static volatile int16_t x520 = INT16_MAX;

    t129 = (x517|((x518>x519)>x520));

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 16032045959960798LLU;
	static volatile int64_t x522 = INT64_MAX;
	uint8_t x523 = 29U;
	uint64_t t130 = 767927424056851457LLU;

    t130 = (x521|((x522>x523)>x524));

    if (t130 != 16032045959960798LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = INT64_MAX;
	static volatile uint8_t x527 = 32U;
	int64_t t131 = INT64_MAX;

    t131 = (x525|((x526>x527)>x528));

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = 0U;
	static uint8_t x530 = UINT8_MAX;
	int8_t x531 = INT8_MIN;
	static int32_t x532 = 3;
	uint32_t t132 = 231150019U;

    t132 = (x529|((x530>x531)>x532));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	int16_t x536 = INT16_MIN;
	volatile int32_t t133 = -90091173;

    t133 = (x533|((x534>x535)>x536));

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int8_t x539 = -2;
	volatile int32_t x540 = INT32_MIN;

    t134 = (x537|((x538>x539)>x540));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = 0;
	int8_t x542 = 1;
	int8_t x543 = -1;
	int64_t x544 = INT64_MIN;
	int32_t t135 = -5;

    t135 = (x541|((x542>x543)>x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x546 = UINT32_MAX;
	static uint32_t x548 = UINT32_MAX;
	int64_t t136 = INT64_MAX;

    t136 = (x545|((x546>x547)>x548));

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = 4U;
	static int8_t x550 = INT8_MAX;
	volatile int16_t x552 = INT16_MIN;

    t137 = (x549|((x550>x551)>x552));

    if (t137 != 5) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	uint16_t x554 = UINT16_MAX;
	static int32_t x555 = INT32_MIN;
	int64_t x556 = 35468308LL;

    t138 = (x553|((x554>x555)>x556));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 14U;
	volatile uint32_t x559 = 141602U;
	int16_t x560 = -1;
	volatile int32_t t139 = -577658912;

    t139 = (x557|((x558>x559)>x560));

    if (t139 != 15) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x563 = UINT64_MAX;
	uint8_t x564 = UINT8_MAX;
	int32_t t140 = -1;

    t140 = (x561|((x562>x563)>x564));

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MAX;
	uint64_t x566 = 579LLU;
	volatile uint32_t x567 = UINT32_MAX;
	volatile uint8_t x568 = UINT8_MAX;
	int32_t t141 = INT32_MAX;

    t141 = (x565|((x566>x567)>x568));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MAX;
	int64_t x570 = 4534974898420LL;
	int32_t x571 = -12562;
	static uint64_t x572 = 38074LLU;
	int32_t t142 = 1;

    t142 = (x569|((x570>x571)>x572));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = INT32_MIN;
	volatile uint64_t t143 = 3186996752042LLU;

    t143 = (x573|((x574>x575)>x576));

    if (t143 != 90400LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint16_t x578 = UINT16_MAX;
	uint8_t x579 = UINT8_MAX;
	volatile int32_t t144 = -1021132806;

    t144 = (x577|((x578>x579)>x580));

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MAX;
	int16_t x582 = -12571;
	int16_t x583 = INT16_MIN;
	static int16_t x584 = -6066;
	int32_t t145 = 596;

    t145 = (x581|((x582>x583)>x584));

    if (t145 != 32767) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = UINT16_MAX;
	int64_t x586 = -1LL;
	int16_t x588 = INT16_MAX;
	volatile int32_t t146 = 7;

    t146 = (x585|((x586>x587)>x588));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	int16_t x590 = INT16_MIN;
	int8_t x591 = -49;
	int32_t x592 = -1;
	volatile int32_t t147 = 490116026;

    t147 = (x589|((x590>x591)>x592));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -83462;
	int16_t x594 = -1;
	static int16_t x595 = INT16_MAX;
	static int64_t x596 = 59278758748LL;
	int32_t t148 = 441;

    t148 = (x593|((x594>x595)>x596));

    if (t148 != -83462) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = INT8_MIN;
	int64_t x599 = INT64_MIN;
	static int8_t x600 = INT8_MIN;
	static volatile int32_t t149 = 26752;

    t149 = (x597|((x598>x599)>x600));

    if (t149 != 19) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = -26;
	uint8_t x602 = UINT8_MAX;
	int64_t x603 = INT64_MIN;
	volatile int32_t t150 = -5;

    t150 = (x601|((x602>x603)>x604));

    if (t150 != -26) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x606 = -1;
	uint64_t x607 = 1049424810823401599LLU;
	uint64_t x608 = 8289LLU;

    t151 = (x605|((x606>x607)>x608));

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x609 = INT32_MAX;
	static int8_t x610 = INT8_MAX;
	uint8_t x611 = 48U;
	int64_t x612 = -1LL;
	int32_t t152 = INT32_MAX;

    t152 = (x609|((x610>x611)>x612));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = UINT32_MAX;
	static int32_t x614 = -90;
	int64_t x615 = -1LL;
	volatile int32_t x616 = INT32_MIN;
	uint32_t t153 = UINT32_MAX;

    t153 = (x613|((x614>x615)>x616));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 112821889U;
	uint8_t x618 = UINT8_MAX;
	volatile uint8_t x619 = 2U;
	static int64_t x620 = INT64_MAX;
	uint32_t t154 = 9111U;

    t154 = (x617|((x618>x619)>x620));

    if (t154 != 112821889U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x622 = 12U;
	static int8_t x623 = INT8_MIN;
	int32_t x624 = -1;

    t155 = (x621|((x622>x623)>x624));

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = 12752U;
	int64_t x627 = INT64_MIN;
	int16_t x628 = 14753;
	uint32_t t156 = 0U;

    t156 = (x625|((x626>x627)>x628));

    if (t156 != 12752U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = 23U;
	uint8_t x630 = 1U;
	static volatile uint64_t x631 = UINT64_MAX;
	int8_t x632 = -1;

    t157 = (x629|((x630>x631)>x632));

    if (t157 != 23U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 805U;
	int32_t x635 = 5;
	int32_t x636 = INT32_MIN;
	int32_t t158 = -7081236;

    t158 = (x633|((x634>x635)>x636));

    if (t158 != 805) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = UINT64_MAX;
	static uint32_t x639 = 6646U;
	int16_t x640 = -1;
	uint64_t t159 = UINT64_MAX;

    t159 = (x637|((x638>x639)>x640));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = UINT8_MAX;
	int32_t x642 = INT32_MIN;
	uint8_t x643 = 9U;
	volatile int32_t t160 = 1;

    t160 = (x641|((x642>x643)>x644));

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = -41;
	int16_t x646 = -7771;
	static int64_t x647 = -32409304138461LL;
	int64_t x648 = -47661LL;
	int32_t t161 = -12066;

    t161 = (x645|((x646>x647)>x648));

    if (t161 != -41) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x651 = UINT32_MAX;
	volatile int64_t x652 = INT64_MIN;
	int32_t t162 = 35;

    t162 = (x649|((x650>x651)>x652));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = INT8_MIN;
	static int64_t x656 = 11552LL;
	int32_t t163 = -43058;

    t163 = (x653|((x654>x655)>x656));

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	int64_t x658 = INT64_MIN;
	uint64_t x659 = 33141486099340907LLU;
	int8_t x660 = INT8_MAX;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = (x657|((x658>x659)>x660));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x661 = 52U;
	int8_t x662 = INT8_MAX;
	int32_t x663 = -6076031;
	int64_t x664 = -1LL;
	int32_t t165 = 29751;

    t165 = (x661|((x662>x663)>x664));

    if (t165 != 53) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = 0;
	static int8_t x666 = -1;
	int8_t x667 = 15;
	static int32_t x668 = 99794902;
	int32_t t166 = -42;

    t166 = (x665|((x666>x667)>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	static int8_t x671 = INT8_MIN;
	volatile int32_t x672 = 9203653;
	volatile int32_t t167 = -19933712;

    t167 = (x669|((x670>x671)>x672));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x674 = 721U;
	uint16_t x675 = UINT16_MAX;
	int8_t x676 = -1;

    t168 = (x673|((x674>x675)>x676));

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = INT8_MIN;
	volatile int64_t x680 = 884719161237LL;
	volatile int32_t t169 = 4459;

    t169 = (x677|((x678>x679)>x680));

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	static int16_t x682 = INT16_MIN;
	uint64_t x684 = 14315LLU;

    t170 = (x681|((x682>x683)>x684));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x685 = 17U;
	int32_t x686 = 3448016;
	int32_t x687 = INT32_MIN;

    t171 = (x685|((x686>x687)>x688));

    if (t171 != 17U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x690 = -1;
	int64_t x691 = -26LL;
	int64_t t172 = 37148143LL;

    t172 = (x689|((x690>x691)>x692));

    if (t172 != 135608219716325227LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 8919046277249LLU;
	uint16_t x696 = 501U;
	static volatile uint64_t t173 = 6010396948461LLU;

    t173 = (x693|((x694>x695)>x696));

    if (t173 != 8919046277249LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	int32_t x699 = INT32_MIN;
	uint8_t x700 = 82U;
	volatile int64_t t174 = INT64_MIN;

    t174 = (x697|((x698>x699)>x700));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x702 = INT64_MAX;
	volatile int16_t x703 = -1;
	int32_t x704 = 8;
	volatile int32_t t175 = -22275894;

    t175 = (x701|((x702>x703)>x704));

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = -1LL;
	int32_t x706 = -10;
	volatile int16_t x707 = INT16_MAX;
	static int64_t t176 = -25203494978593636LL;

    t176 = (x705|((x706>x707)>x708));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 23018U;
	uint32_t x710 = 1706388U;
	int16_t x711 = -2;
	int16_t x712 = INT16_MIN;

    t177 = (x709|((x710>x711)>x712));

    if (t177 != 23019U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = 201;
	int8_t x714 = 14;
	uint64_t x715 = 1LLU;
	static uint64_t x716 = UINT64_MAX;

    t178 = (x713|((x714>x715)>x716));

    if (t178 != 201) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = -19;
	volatile int16_t x718 = -1;
	int64_t x720 = 5944785426LL;

    t179 = (x717|((x718>x719)>x720));

    if (t179 != -19) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x722 = 6323U;
	static volatile uint16_t x723 = 0U;
	static int16_t x724 = INT16_MIN;
	static volatile int32_t t180 = 45;

    t180 = (x721|((x722>x723)>x724));

    if (t180 != -127) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = 655952632544416712LL;
	volatile int32_t x726 = -1;
	static volatile uint16_t x727 = 1930U;
	int8_t x728 = -1;
	int64_t t181 = -5360LL;

    t181 = (x725|((x726>x727)>x728));

    if (t181 != 655952632544416713LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MAX;
	static volatile int16_t x730 = -1;
	static uint16_t x732 = 3197U;

    t182 = (x729|((x730>x731)>x732));

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	volatile uint16_t x735 = UINT16_MAX;
	int64_t x736 = INT64_MIN;
	int64_t t183 = -34803810231160075LL;

    t183 = (x733|((x734>x735)>x736));

    if (t183 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = UINT32_MAX;
	static int32_t x738 = INT32_MAX;
	int16_t x739 = INT16_MIN;
	uint16_t x740 = UINT16_MAX;
	volatile uint32_t t184 = UINT32_MAX;

    t184 = (x737|((x738>x739)>x740));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x743 = INT16_MIN;
	int64_t x744 = INT64_MAX;
	volatile int32_t t185 = -509;

    t185 = (x741|((x742>x743)>x744));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = 3174;
	int16_t x746 = -1;
	volatile int8_t x747 = -1;
	static volatile int32_t t186 = 431763656;

    t186 = (x745|((x746>x747)>x748));

    if (t186 != 3174) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	volatile int8_t x750 = -1;
	volatile int16_t x752 = INT16_MIN;
	volatile int64_t t187 = INT64_MAX;

    t187 = (x749|((x750>x751)>x752));

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x755 = 2U;
	volatile int64_t x756 = -2242690319509699641LL;
	volatile int32_t t188 = -328861;

    t188 = (x753|((x754>x755)>x756));

    if (t188 != 3) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x759 = 13584U;
	int16_t x760 = INT16_MIN;
	volatile int32_t t189 = 0;

    t189 = (x757|((x758>x759)>x760));

    if (t189 != 47) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = INT64_MAX;
	static int32_t x763 = 40;
	int32_t t190 = 1;

    t190 = (x761|((x762>x763)>x764));

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x765 = INT16_MAX;
	int32_t x766 = -1;
	volatile int64_t x767 = -2025341057605LL;
	static volatile int64_t x768 = INT64_MIN;
	int32_t t191 = 570267;

    t191 = (x765|((x766>x767)>x768));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x770 = UINT32_MAX;
	int16_t x771 = INT16_MAX;
	int32_t t192 = -105881;

    t192 = (x769|((x770>x771)>x772));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x774 = 1000LLU;
	volatile int8_t x775 = INT8_MAX;
	static int16_t x776 = INT16_MAX;
	volatile int32_t t193 = 1;

    t193 = (x773|((x774>x775)>x776));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MIN;
	uint64_t x779 = 139386852LLU;
	int32_t x780 = -325153;
	volatile int32_t t194 = -5988069;

    t194 = (x777|((x778>x779)>x780));

    if (t194 != 65535) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = 731244;
	int8_t x782 = INT8_MIN;
	uint32_t x783 = 5U;
	int8_t x784 = INT8_MIN;
	volatile int32_t t195 = 74369104;

    t195 = (x781|((x782>x783)>x784));

    if (t195 != 731245) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -2;
	uint64_t x786 = UINT64_MAX;
	volatile int16_t x787 = INT16_MIN;
	int32_t t196 = -2349212;

    t196 = (x785|((x786>x787)>x788));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 4U;
	int64_t x790 = -73939LL;
	volatile int64_t x792 = INT64_MIN;
	volatile int32_t t197 = -143217;

    t197 = (x789|((x790>x791)>x792));

    if (t197 != 5) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 1U;
	int8_t x795 = -1;
	volatile uint64_t x796 = 35848726723710505LLU;
	volatile int32_t t198 = -881;

    t198 = (x793|((x794>x795)>x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -1;
	int64_t x799 = 8670618370445LL;
	int32_t t199 = -993;

    t199 = (x797|((x798>x799)>x800));

    if (t199 != -1) { NG(); } else { ; }
	
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

