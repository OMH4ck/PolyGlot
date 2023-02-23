
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

uint8_t x2 = UINT8_MAX;
volatile int16_t x6 = -1;
int32_t x7 = INT32_MIN;
volatile int32_t t2 = INT32_MAX;
int8_t x17 = -5;
volatile int32_t x18 = INT32_MIN;
static volatile int64_t x19 = INT64_MIN;
int32_t x20 = INT32_MIN;
static volatile int64_t t5 = -3818538684005LL;
int16_t x32 = INT16_MAX;
int32_t x36 = -1;
uint16_t x45 = UINT16_MAX;
volatile uint8_t x46 = UINT8_MAX;
int64_t x62 = INT64_MIN;
int8_t x63 = -1;
volatile int32_t x69 = INT32_MIN;
static uint32_t x72 = 62U;
volatile uint32_t t16 = 20815994U;
uint8_t x73 = 14U;
static volatile int32_t t17 = -1069113188;
volatile int32_t t24 = -247694;
int32_t t25 = 366005981;
static volatile int16_t x109 = -1;
static int32_t x111 = 155;
volatile uint16_t x116 = 204U;
static volatile int64_t t27 = 14882650871302LL;
int32_t x117 = -1;
int32_t x120 = INT32_MIN;
volatile uint64_t x122 = 24113LLU;
volatile int64_t t32 = -789414738233469LL;
uint32_t x139 = 1994089126U;
int16_t x147 = -127;
uint16_t x154 = UINT16_MAX;
int32_t x160 = -1;
static int64_t x161 = 5476448154016219LL;
volatile uint32_t x163 = UINT32_MAX;
uint64_t t38 = UINT64_MAX;
volatile int32_t x165 = 1292150;
uint64_t t39 = 34000753137909085LLU;
static int8_t x172 = 1;
volatile uint32_t t40 = 64531U;
uint16_t x178 = UINT16_MAX;
uint32_t x181 = UINT32_MAX;
uint8_t x189 = 8U;
static int64_t x190 = 3922621842887009373LL;
uint32_t t45 = 931130740U;
int64_t x199 = 1LL;
int32_t x200 = INT32_MAX;
volatile int64_t x202 = INT64_MAX;
int32_t x203 = INT32_MIN;
int64_t x215 = -1LL;
uint64_t x219 = 18437200368924315LLU;
int16_t x220 = 1692;
static int8_t x225 = INT8_MAX;
int16_t x241 = INT16_MAX;
volatile uint64_t x246 = 1377877821923885593LLU;
int32_t x247 = -491181494;
static int8_t x248 = INT8_MIN;
static volatile int16_t x253 = INT16_MAX;
int32_t x256 = -1;
int8_t x263 = -1;
static int16_t x264 = INT16_MIN;
int32_t t65 = -1575498;
int16_t x277 = INT16_MIN;
volatile uint64_t t67 = UINT64_MAX;
static int64_t x285 = INT64_MIN;
int64_t x290 = INT64_MIN;
int8_t x296 = INT8_MAX;
uint64_t x302 = 68247133377201154LLU;
static int32_t x303 = -1;
int32_t x307 = INT32_MIN;
int8_t x308 = 14;
static volatile int64_t x310 = INT64_MIN;
static volatile int8_t x311 = INT8_MIN;
int64_t t75 = -7LL;
static volatile uint32_t x314 = 800U;
uint32_t x315 = 6267882U;
volatile int64_t t76 = -435624332508LL;
int32_t x320 = INT32_MIN;
uint8_t x326 = 96U;
volatile uint64_t x328 = UINT64_MAX;
uint64_t t80 = 295LLU;
int16_t x334 = -14;
volatile int32_t t81 = 5;
int64_t x346 = 296816038549523353LL;
int8_t x350 = -1;
uint32_t x354 = 600U;
uint8_t x360 = UINT8_MAX;
uint16_t x361 = 42U;
volatile int16_t x364 = -1;
volatile uint64_t t89 = 1611000487LLU;
uint32_t x372 = 404U;
int64_t x375 = INT64_MIN;
uint32_t x377 = 0U;
uint8_t x378 = UINT8_MAX;
uint32_t t92 = 192352449U;
volatile int8_t x389 = INT8_MIN;
int8_t x398 = -12;
static volatile int64_t t97 = 4430160794257464571LL;
static int32_t t98 = -1712891;
static int8_t x408 = 0;
uint16_t x414 = 4078U;
volatile int16_t x418 = INT16_MIN;
uint8_t x425 = UINT8_MAX;
volatile int32_t x426 = INT32_MAX;
uint64_t x429 = UINT64_MAX;
int64_t x433 = INT64_MAX;
int8_t x442 = INT8_MIN;
int8_t x443 = INT8_MIN;
static volatile int8_t x449 = INT8_MIN;
uint8_t x452 = 12U;
uint16_t x461 = UINT16_MAX;
uint8_t x462 = 7U;
int32_t x467 = INT32_MAX;
uint32_t x474 = UINT32_MAX;
static int16_t x476 = -7176;
volatile int32_t x477 = INT32_MIN;
uint8_t x486 = 5U;
uint8_t x488 = UINT8_MAX;
volatile int32_t t118 = -194;
uint32_t x493 = 10781U;
static uint32_t x496 = 4210U;
int32_t x497 = 0;
volatile int32_t x498 = INT32_MIN;
int64_t x505 = INT64_MIN;
static uint8_t x511 = 1U;
int32_t x516 = INT32_MIN;
volatile int16_t x521 = INT16_MIN;
volatile int32_t t126 = -947;
static volatile uint32_t x531 = 105488027U;
uint64_t t128 = UINT64_MAX;
uint32_t x539 = 39758U;
int32_t t130 = -15319;
int8_t x541 = -33;
static volatile int16_t x544 = -1;
uint16_t x548 = UINT16_MAX;
int64_t x550 = INT64_MIN;
int16_t x553 = -1;
int16_t x562 = 2;
int8_t x567 = 49;
volatile int64_t x572 = -1LL;
int64_t t138 = 65526703LL;
int64_t x573 = INT64_MAX;
int16_t x574 = -49;
static uint8_t x580 = UINT8_MAX;
int8_t x585 = INT8_MIN;
volatile uint64_t x588 = 67521153108111686LLU;
volatile int32_t x591 = -19;
uint16_t x602 = 10546U;
int16_t x606 = -1;
int64_t x609 = INT64_MIN;
static int32_t x614 = 7560;
volatile int32_t t149 = 67307952;
volatile int8_t x618 = -8;
volatile uint8_t x620 = 51U;
volatile uint16_t x622 = 15U;
int64_t t151 = 2650338184799627663LL;
int8_t x626 = INT8_MIN;
volatile int32_t x627 = INT32_MIN;
volatile int8_t x632 = INT8_MAX;
int8_t x639 = INT8_MAX;
int64_t x644 = INT64_MIN;
int64_t x645 = -3LL;
int32_t x646 = INT32_MAX;
volatile int32_t t158 = -199;
int64_t x655 = INT64_MAX;
volatile int8_t x658 = 0;
volatile int64_t x665 = INT64_MAX;
uint8_t x670 = UINT8_MAX;
static int32_t t163 = 359;
uint32_t x675 = 812U;
static int32_t t164 = 1;
static uint8_t x682 = UINT8_MAX;
int16_t x684 = INT16_MIN;
volatile int64_t t165 = 13394099LL;
static volatile int32_t t166 = -33;
int32_t x689 = INT32_MAX;
int16_t x696 = INT16_MIN;
static int8_t x698 = INT8_MAX;
volatile uint8_t x702 = UINT8_MAX;
static uint32_t x704 = UINT32_MAX;
int32_t x709 = -1;
int16_t x710 = INT16_MAX;
int8_t x711 = 33;
int8_t x719 = 2;
static volatile int64_t x722 = INT64_MIN;
int32_t x723 = -1;
static volatile int32_t t175 = 332;
uint8_t x732 = 1U;
static int32_t t178 = 64;
static uint64_t x738 = UINT64_MAX;
static uint64_t t179 = 29350639LLU;
int32_t x741 = -952137195;
int64_t x742 = INT64_MIN;
int8_t x744 = -1;
int32_t t184 = 28643447;
int64_t x762 = -28738045062LL;
int64_t x764 = INT64_MIN;
uint8_t x772 = 1U;
static uint64_t x776 = UINT64_MAX;
int8_t x779 = INT8_MIN;
static uint16_t x781 = UINT16_MAX;
uint8_t x787 = 15U;
uint64_t x789 = 14687576LLU;
int16_t x793 = -1;
int16_t x798 = INT16_MIN;
uint64_t x802 = 81948LLU;
int64_t x805 = INT64_MAX;
int64_t x813 = INT64_MIN;
volatile int8_t x816 = INT8_MIN;


void f0(void) {
    	int16_t x1 = 559;
	volatile uint64_t x3 = 158119887331446LLU;
	int16_t x4 = -6087;
	volatile int32_t t0 = -116;

    t0 = (x1|((x2>x3)+x4));

    if (t0 != -5569) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	volatile uint32_t x8 = 125U;
	static volatile uint32_t t1 = 6973446U;

    t1 = (x5|((x6>x7)+x8));

    if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MAX;
	int64_t x10 = -1LL;
	volatile int64_t x11 = 36LL;
	uint8_t x12 = 79U;

    t2 = (x9|((x10>x11)+x12));

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t t3 = -6711417;

    t3 = (x17|((x18>x19)+x20));

    if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = 14866LL;
	static uint32_t x22 = 1U;
	int32_t x23 = INT32_MAX;
	int64_t x24 = -1LL;
	int64_t t4 = -924711LL;

    t4 = (x21|((x22>x23)+x24));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x25 = INT32_MIN;
	int8_t x26 = -59;
	volatile int64_t x27 = INT64_MIN;
	int64_t x28 = 13641529LL;

    t5 = (x25|((x26>x27)+x28));

    if (t5 != -2133842118LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x29 = UINT16_MAX;
	int8_t x30 = INT8_MAX;
	int16_t x31 = 0;
	volatile int32_t t6 = -356;

    t6 = (x29|((x30>x31)+x32));

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -1;
	volatile int8_t x34 = -1;
	volatile uint8_t x35 = 105U;
	static volatile int32_t t7 = 22810790;

    t7 = (x33|((x34>x35)+x36));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	volatile int8_t x40 = 3;
	volatile int32_t t8 = -3;

    t8 = (x37|((x38>x39)+x40));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = 11U;
	int16_t x42 = -1;
	int16_t x43 = -1;
	volatile int64_t x44 = INT64_MIN;
	volatile int64_t t9 = -1276352LL;

    t9 = (x41|((x42>x43)+x44));

    if (t9 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x47 = -222;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -125597700;

    t10 = (x45|((x46>x47)+x48));

    if (t10 != -2147418113) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MAX;
	static uint64_t x50 = 3237889477419959LLU;
	int32_t x51 = -1;
	int8_t x52 = INT8_MIN;
	volatile int64_t t11 = 1777LL;

    t11 = (x49|((x50>x51)+x52));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x53 = UINT16_MAX;
	static uint16_t x54 = 3423U;
	volatile int64_t x55 = -1LL;
	volatile int32_t x56 = INT32_MIN;
	static int32_t t12 = 12165;

    t12 = (x53|((x54>x55)+x56));

    if (t12 != -2147418113) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = UINT8_MAX;
	uint16_t x58 = 94U;
	int8_t x59 = INT8_MIN;
	static int16_t x60 = INT16_MAX;
	volatile int32_t t13 = -536;

    t13 = (x57|((x58>x59)+x60));

    if (t13 != 33023) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -5389789466306LL;
	int64_t x64 = INT64_MIN;
	volatile int64_t t14 = 0LL;

    t14 = (x61|((x62>x63)+x64));

    if (t14 != -5389789466306LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	int8_t x66 = 0;
	int64_t x67 = -1LL;
	int64_t x68 = -1LL;
	uint64_t t15 = UINT64_MAX;

    t15 = (x65|((x66>x67)+x68));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x70 = INT8_MAX;
	uint32_t x71 = 3U;

    t16 = (x69|((x70>x71)+x72));

    if (t16 != 2147483711U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x74 = 2U;
	volatile int32_t x75 = 446039;
	static int8_t x76 = -14;

    t17 = (x73|((x74>x75)+x76));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = INT16_MIN;
	int8_t x78 = -1;
	uint64_t x79 = 6565062LLU;
	volatile int64_t x80 = -1697942638099441904LL;
	int64_t t18 = 12149468515298LL;

    t18 = (x77|((x78>x79)+x80));

    if (t18 != -10479LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MIN;
	int16_t x82 = INT16_MIN;
	volatile int8_t x83 = -1;
	uint32_t x84 = 436U;
	uint32_t t19 = 117193880U;

    t19 = (x81|((x82>x83)+x84));

    if (t19 != 2147484084U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 28U;
	int8_t x86 = INT8_MIN;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t20 = -18760;

    t20 = (x85|((x86>x87)+x88));

    if (t20 != -2147483620) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = -522;
	int32_t x90 = INT32_MAX;
	int16_t x91 = 1;
	int16_t x92 = 242;
	int32_t t21 = 3030;

    t21 = (x89|((x90>x91)+x92));

    if (t21 != -521) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = 372LL;
	uint16_t x94 = 5U;
	volatile uint32_t x95 = UINT32_MAX;
	int8_t x96 = -17;
	int64_t t22 = 964325LL;

    t22 = (x93|((x94>x95)+x96));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = 124U;
	int32_t x98 = -1;
	int16_t x99 = 3254;
	uint16_t x100 = 0U;
	int32_t t23 = 0;

    t23 = (x97|((x98>x99)+x100));

    if (t23 != 124) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	int32_t x103 = -3;
	uint8_t x104 = 3U;

    t24 = (x101|((x102>x103)+x104));

    if (t24 != -125) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = INT8_MIN;
	volatile int8_t x106 = -24;
	uint8_t x107 = 32U;
	static int32_t x108 = INT32_MIN;

    t25 = (x105|((x106>x107)+x108));

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x110 = INT8_MIN;
	int16_t x112 = -1;
	int32_t t26 = 44639;

    t26 = (x109|((x110>x111)+x112));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = 9184441LL;
	int16_t x114 = INT16_MIN;
	static uint16_t x115 = UINT16_MAX;

    t27 = (x113|((x114>x115)+x116));

    if (t27 != 9184509LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x118 = INT16_MIN;
	volatile int16_t x119 = 286;
	volatile int32_t t28 = 199458;

    t28 = (x117|((x118>x119)+x120));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 28253U;
	int64_t x123 = INT64_MAX;
	volatile int16_t x124 = INT16_MAX;
	uint32_t t29 = 3U;

    t29 = (x121|((x122>x123)+x124));

    if (t29 != 32767U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x125 = 124831676U;
	int64_t x126 = -24840583155710LL;
	uint32_t x127 = UINT32_MAX;
	int16_t x128 = -1;
	static uint32_t t30 = UINT32_MAX;

    t30 = (x125|((x126>x127)+x128));

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x129 = 12309511U;
	volatile int8_t x130 = 7;
	static int32_t x131 = INT32_MIN;
	static uint32_t x132 = 6056737U;
	volatile uint32_t t31 = 937U;

    t31 = (x129|((x130>x131)+x132));

    if (t31 != 16776999U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = -1;
	int8_t x134 = INT8_MAX;
	int8_t x135 = INT8_MIN;
	int64_t x136 = -1LL;

    t32 = (x133|((x134>x135)+x136));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x137 = -1LL;
	int32_t x138 = INT32_MAX;
	uint16_t x140 = 6900U;
	volatile int64_t t33 = -28375275LL;

    t33 = (x137|((x138>x139)+x140));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	uint64_t x142 = UINT64_MAX;
	volatile int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t34 = 8788;

    t34 = (x141|((x142>x143)+x144));

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x145 = 1;
	static volatile int64_t x146 = INT64_MIN;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t35 = 1928;

    t35 = (x145|((x146>x147)+x148));

    if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x153 = 432LL;
	int16_t x155 = INT16_MAX;
	uint32_t x156 = 0U;
	volatile int64_t t36 = -127638083561LL;

    t36 = (x153|((x154>x155)+x156));

    if (t36 != 433LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MIN;
	static volatile int64_t x158 = INT64_MAX;
	int64_t x159 = INT64_MAX;
	volatile int64_t t37 = -75981581108861407LL;

    t37 = (x157|((x158>x159)+x160));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x162 = -1;
	uint64_t x164 = UINT64_MAX;

    t38 = (x161|((x162>x163)+x164));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x166 = -1;
	static volatile uint8_t x167 = 96U;
	volatile uint64_t x168 = 6078LLU;

    t39 = (x165|((x166>x167)+x168));

    if (t39 != 1292286LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x169 = 63118U;
	int64_t x170 = 33335LL;
	int16_t x171 = INT16_MIN;

    t40 = (x169|((x170>x171)+x172));

    if (t40 != 63118U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MAX;
	static uint8_t x175 = 4U;
	int64_t x176 = INT64_MIN;
	volatile int64_t t41 = 1LL;

    t41 = (x173|((x174>x175)+x176));

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x177 = UINT8_MAX;
	int16_t x179 = 6;
	static int64_t x180 = INT64_MIN;
	static int64_t t42 = -76099LL;

    t42 = (x177|((x178>x179)+x180));

    if (t42 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x182 = UINT32_MAX;
	int8_t x183 = -1;
	int8_t x184 = -63;
	uint32_t t43 = UINT32_MAX;

    t43 = (x181|((x182>x183)+x184));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = 0;
	static uint32_t x186 = UINT32_MAX;
	static volatile int64_t x187 = 3842690898LL;
	int8_t x188 = -1;
	static volatile int32_t t44 = 4189104;

    t44 = (x185|((x186>x187)+x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x191 = -12;
	uint32_t x192 = UINT32_MAX;

    t45 = (x189|((x190>x191)+x192));

    if (t45 != 8U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = 0;
	uint32_t x194 = 7894U;
	static int32_t x195 = INT32_MIN;
	volatile int64_t x196 = INT64_MAX;
	int64_t t46 = INT64_MAX;

    t46 = (x193|((x194>x195)+x196));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x197 = UINT32_MAX;
	int64_t x198 = 0LL;
	uint32_t t47 = UINT32_MAX;

    t47 = (x197|((x198>x199)+x200));

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x201 = INT64_MIN;
	int32_t x204 = -1;
	static int64_t t48 = INT64_MIN;

    t48 = (x201|((x202>x203)+x204));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x205 = 39U;
	int32_t x206 = 1363498;
	static int8_t x207 = INT8_MIN;
	int32_t x208 = -1;
	static volatile int32_t t49 = 11117;

    t49 = (x205|((x206>x207)+x208));

    if (t49 != 39) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x209 = 60;
	uint32_t x210 = UINT32_MAX;
	volatile uint64_t x211 = UINT64_MAX;
	int16_t x212 = -1;
	static volatile int32_t t50 = 11;

    t50 = (x209|((x210>x211)+x212));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = 12415251309LLU;
	uint8_t x214 = UINT8_MAX;
	volatile uint8_t x216 = 1U;
	static volatile uint64_t t51 = 2639068858918626LLU;

    t51 = (x213|((x214>x215)+x216));

    if (t51 != 12415251311LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = INT8_MAX;
	uint16_t x218 = 1046U;
	volatile int32_t t52 = -2672;

    t52 = (x217|((x218>x219)+x220));

    if (t52 != 1791) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = INT8_MIN;
	int8_t x222 = 5;
	int8_t x223 = INT8_MIN;
	volatile int32_t x224 = -171995;
	int32_t t53 = -1013;

    t53 = (x221|((x222>x223)+x224));

    if (t53 != -90) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x226 = INT32_MAX;
	static uint16_t x227 = UINT16_MAX;
	uint64_t x228 = UINT64_MAX;
	uint64_t t54 = 984LLU;

    t54 = (x225|((x226>x227)+x228));

    if (t54 != 127LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x229 = 56;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MAX;
	int64_t x232 = 149449767604LL;
	static int64_t t55 = 1252782149190950738LL;

    t55 = (x229|((x230>x231)+x232));

    if (t55 != 149449767612LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x233 = INT32_MIN;
	uint32_t x234 = 2U;
	static uint64_t x235 = 434893767443LLU;
	uint16_t x236 = UINT16_MAX;
	int32_t t56 = 0;

    t56 = (x233|((x234>x235)+x236));

    if (t56 != -2147418113) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = UINT64_MAX;
	volatile uint16_t x239 = 133U;
	static uint64_t x240 = 10LLU;
	uint64_t t57 = 1960879095463315200LLU;

    t57 = (x237|((x238>x239)+x240));

    if (t57 != 4294967295LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x242 = UINT64_MAX;
	volatile int64_t x243 = -1LL;
	int16_t x244 = -1;
	int32_t t58 = 6095129;

    t58 = (x241|((x242>x243)+x244));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x245 = UINT16_MAX;
	static int32_t t59 = -12530961;

    t59 = (x245|((x246>x247)+x248));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = INT32_MAX;
	volatile int32_t x250 = 568941090;
	volatile int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MAX;
	int32_t t60 = INT32_MAX;

    t60 = (x249|((x250>x251)+x252));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x254 = 0U;
	volatile int64_t x255 = INT64_MIN;
	static volatile int32_t t61 = -200350;

    t61 = (x253|((x254>x255)+x256));

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x257 = 11U;
	static uint64_t x258 = 96477LLU;
	volatile int8_t x259 = INT8_MIN;
	static int64_t x260 = -1LL;
	int64_t t62 = 1038927519346424017LL;

    t62 = (x257|((x258>x259)+x260));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x261 = 2U;
	int32_t x262 = INT32_MIN;
	int32_t t63 = -607142;

    t63 = (x261|((x262>x263)+x264));

    if (t63 != -32766) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = INT64_MIN;
	uint32_t x266 = 212U;
	volatile int16_t x267 = INT16_MAX;
	int8_t x268 = -1;
	int64_t t64 = -89346LL;

    t64 = (x265|((x266>x267)+x268));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = 9;
	int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MAX;
	uint16_t x272 = UINT16_MAX;

    t65 = (x269|((x270>x271)+x272));

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x273 = 1552986648922734LLU;
	int16_t x274 = -12313;
	int16_t x275 = -1;
	int16_t x276 = INT16_MIN;
	volatile uint64_t t66 = 12LLU;

    t66 = (x273|((x274>x275)+x276));

    if (t66 != 18446744073709537902LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x278 = -1LL;
	uint32_t x279 = 44368894U;
	uint64_t x280 = UINT64_MAX;

    t67 = (x277|((x278>x279)+x280));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = -1;
	static uint16_t x282 = UINT16_MAX;
	int16_t x283 = -13;
	volatile uint8_t x284 = 15U;
	int32_t t68 = -745691260;

    t68 = (x281|((x282>x283)+x284));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x286 = -1LL;
	uint8_t x287 = 42U;
	uint64_t x288 = 265LLU;
	volatile uint64_t t69 = 782921577168249691LLU;

    t69 = (x285|((x286>x287)+x288));

    if (t69 != 9223372036854776073LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x291 = -1;
	volatile uint8_t x292 = 0U;
	int32_t t70 = 568;

    t70 = (x289|((x290>x291)+x292));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x293 = INT64_MIN;
	volatile int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MAX;
	static volatile int64_t t71 = -15957383115814835LL;

    t71 = (x293|((x294>x295)+x296));

    if (t71 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = -508;
	uint8_t x298 = UINT8_MAX;
	static int16_t x299 = -104;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int32_t t72 = 32294;

    t72 = (x297|((x298>x299)+x300));

    if (t72 != -508) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MIN;
	int64_t x304 = INT64_MAX;
	int64_t t73 = 3495854724630LL;

    t73 = (x301|((x302>x303)+x304));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = 65530;
	int64_t x306 = -148609689LL;
	static int32_t t74 = -122427;

    t74 = (x305|((x306>x307)+x308));

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = -1LL;
	int8_t x312 = INT8_MIN;

    t75 = (x309|((x310>x311)+x312));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = 40;
	volatile int64_t x316 = INT64_MIN;

    t76 = (x313|((x314>x315)+x316));

    if (t76 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x317 = -1;
	int32_t x318 = -1;
	uint8_t x319 = 27U;
	volatile int32_t t77 = 4;

    t77 = (x317|((x318>x319)+x320));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = -45685662591413LL;
	int32_t x322 = INT32_MIN;
	volatile int16_t x323 = -1;
	uint16_t x324 = UINT16_MAX;
	int64_t t78 = -198029997632191129LL;

    t78 = (x321|((x322>x323)+x324));

    if (t78 != -45685662547969LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x325 = -2;
	volatile int64_t x327 = -1LL;
	volatile uint64_t t79 = 13921109703403697LLU;

    t79 = (x325|((x326>x327)+x328));

    if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x329 = 3U;
	static int64_t x330 = INT64_MIN;
	int64_t x331 = INT64_MIN;
	uint64_t x332 = 867LLU;

    t80 = (x329|((x330>x331)+x332));

    if (t80 != 867LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	volatile int8_t x336 = INT8_MAX;

    t81 = (x333|((x334>x335)+x336));

    if (t81 != -2147483520) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = INT32_MIN;
	int32_t x338 = -27709;
	int32_t x339 = 30765153;
	int16_t x340 = 9;
	int32_t t82 = -13879;

    t82 = (x337|((x338>x339)+x340));

    if (t82 != -2147483639) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x341 = UINT8_MAX;
	static int16_t x342 = -397;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t83 = 14101;

    t83 = (x341|((x342>x343)+x344));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x345 = INT32_MAX;
	static int8_t x347 = 0;
	static uint16_t x348 = UINT16_MAX;
	int32_t t84 = INT32_MAX;

    t84 = (x345|((x346>x347)+x348));

    if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x349 = 0;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = UINT64_MAX;
	uint64_t t85 = 7975LLU;

    t85 = (x349|((x350>x351)+x352));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x353 = INT64_MAX;
	int64_t x355 = 6729511916LL;
	volatile uint64_t x356 = UINT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

    t86 = (x353|((x354>x355)+x356));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x357 = 2779U;
	uint32_t x358 = UINT32_MAX;
	uint32_t x359 = UINT32_MAX;
	volatile uint32_t t87 = 91572U;

    t87 = (x357|((x358>x359)+x360));

    if (t87 != 2815U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x362 = -1;
	int16_t x363 = INT16_MIN;
	int32_t t88 = 3891;

    t88 = (x361|((x362>x363)+x364));

    if (t88 != 42) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x365 = 1199891872LLU;
	volatile uint32_t x366 = UINT32_MAX;
	static volatile uint16_t x367 = 7494U;
	volatile int16_t x368 = 3344;

    t89 = (x365|((x366>x367)+x368));

    if (t89 != 1199893937LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x369 = INT32_MAX;
	int8_t x370 = -56;
	static int8_t x371 = INT8_MIN;
	static volatile uint32_t t90 = 1929U;

    t90 = (x369|((x370>x371)+x372));

    if (t90 != 2147483647U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = -1LL;
	uint8_t x374 = 0U;
	uint16_t x376 = UINT16_MAX;
	int64_t t91 = 2064LL;

    t91 = (x373|((x374>x375)+x376));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x379 = -1;
	int16_t x380 = INT16_MIN;

    t92 = (x377|((x378>x379)+x380));

    if (t92 != 4294934529U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x381 = UINT64_MAX;
	int64_t x382 = -305045768LL;
	static volatile int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MIN;
	uint64_t t93 = UINT64_MAX;

    t93 = (x381|((x382>x383)+x384));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x385 = INT64_MIN;
	uint32_t x386 = UINT32_MAX;
	volatile int8_t x387 = -2;
	int8_t x388 = INT8_MIN;
	volatile int64_t t94 = -29831795387945LL;

    t94 = (x385|((x386>x387)+x388));

    if (t94 != -127LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	static uint16_t x392 = UINT16_MAX;
	static int32_t t95 = -333;

    t95 = (x389|((x390>x391)+x392));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x393 = -94;
	int32_t x394 = INT32_MIN;
	int32_t x395 = 162046626;
	static volatile int64_t x396 = INT64_MAX;
	volatile int64_t t96 = 13392205053401LL;

    t96 = (x393|((x394>x395)+x396));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x397 = INT64_MIN;
	static uint16_t x399 = 1U;
	uint8_t x400 = 113U;

    t97 = (x397|((x398>x399)+x400));

    if (t97 != -9223372036854775695LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x402 = 3LL;
	uint16_t x403 = 2U;
	volatile int8_t x404 = 23;

    t98 = (x401|((x402>x403)+x404));

    if (t98 != -104) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x405 = 15U;
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MAX;
	int32_t t99 = -7492;

    t99 = (x405|((x406>x407)+x408));

    if (t99 != 15) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x409 = UINT64_MAX;
	static int32_t x410 = -1340;
	static uint16_t x411 = 0U;
	int8_t x412 = INT8_MIN;
	uint64_t t100 = UINT64_MAX;

    t100 = (x409|((x410>x411)+x412));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x413 = INT16_MIN;
	uint8_t x415 = 4U;
	uint16_t x416 = 1U;
	int32_t t101 = -306201;

    t101 = (x413|((x414>x415)+x416));

    if (t101 != -32766) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x417 = UINT8_MAX;
	int8_t x419 = 0;
	int8_t x420 = -41;
	volatile int32_t t102 = -110763746;

    t102 = (x417|((x418>x419)+x420));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x421 = INT32_MAX;
	int64_t x422 = -138655011060979LL;
	int16_t x423 = INT16_MIN;
	volatile int8_t x424 = INT8_MAX;
	int32_t t103 = INT32_MAX;

    t103 = (x421|((x422>x423)+x424));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x427 = INT64_MIN;
	static int32_t x428 = -1;
	int32_t t104 = 498470225;

    t104 = (x425|((x426>x427)+x428));

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x430 = UINT8_MAX;
	volatile int64_t x431 = -1LL;
	int64_t x432 = 662185LL;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = (x429|((x430>x431)+x432));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x434 = 1668LL;
	int8_t x435 = INT8_MIN;
	int8_t x436 = INT8_MIN;
	int64_t t106 = 634210236314416729LL;

    t106 = (x433|((x434>x435)+x436));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x437 = 112212054U;
	static int64_t x438 = INT64_MIN;
	int64_t x439 = INT64_MIN;
	static int16_t x440 = -6;
	static volatile uint32_t t107 = 56356871U;

    t107 = (x437|((x438>x439)+x440));

    if (t107 != 4294967294U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x441 = 106U;
	int8_t x444 = -1;
	int32_t t108 = -4562056;

    t108 = (x441|((x442>x443)+x444));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x445 = UINT8_MAX;
	int16_t x446 = INT16_MAX;
	volatile int8_t x447 = INT8_MIN;
	volatile int32_t x448 = INT32_MIN;
	int32_t t109 = -1036311;

    t109 = (x445|((x446>x447)+x448));

    if (t109 != -2147483393) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x450 = -24;
	volatile uint8_t x451 = 53U;
	volatile int32_t t110 = 1;

    t110 = (x449|((x450>x451)+x452));

    if (t110 != -116) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint16_t x453 = 5804U;
	static uint64_t x454 = UINT64_MAX;
	uint16_t x455 = UINT16_MAX;
	int8_t x456 = -2;
	static int32_t t111 = 186847050;

    t111 = (x453|((x454>x455)+x456));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x463 = UINT8_MAX;
	static int16_t x464 = -1;
	volatile int32_t t112 = -31572;

    t112 = (x461|((x462>x463)+x464));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = INT32_MAX;
	uint8_t x466 = UINT8_MAX;
	int64_t x468 = -2267166583569208672LL;
	int64_t t113 = 365LL;

    t113 = (x465|((x466>x467)+x468));

    if (t113 != -2267166581752594433LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x469 = -1;
	int16_t x470 = -100;
	int64_t x471 = INT64_MIN;
	static int64_t x472 = INT64_MIN;
	int64_t t114 = -98535991822257LL;

    t114 = (x469|((x470>x471)+x472));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x473 = 417U;
	volatile int64_t x475 = INT64_MIN;
	volatile uint32_t t115 = 69U;

    t115 = (x473|((x474>x475)+x476));

    if (t115 != 4294960121U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x478 = 1U;
	volatile int32_t x479 = -1;
	uint16_t x480 = 8650U;
	int32_t t116 = 75;

    t116 = (x477|((x478>x479)+x480));

    if (t116 != -2147474997) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x481 = 812U;
	static volatile int64_t x482 = -1LL;
	int16_t x483 = INT16_MIN;
	volatile int64_t x484 = INT64_MIN;
	static volatile int64_t t117 = -1861070043LL;

    t117 = (x481|((x482>x483)+x484));

    if (t117 != -9223372036854774995LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x485 = 25U;
	volatile uint16_t x487 = 4U;

    t118 = (x485|((x486>x487)+x488));

    if (t118 != 281) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x494 = -1LL;
	uint64_t x495 = 6499052972515944933LLU;
	static uint32_t t119 = 328U;

    t119 = (x493|((x494>x495)+x496));

    if (t119 != 14975U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x499 = -1LL;
	static volatile int16_t x500 = 1;
	int32_t t120 = 1171;

    t120 = (x497|((x498>x499)+x500));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x501 = INT64_MIN;
	uint8_t x502 = 38U;
	uint64_t x503 = 1513485418189810719LLU;
	uint16_t x504 = UINT16_MAX;
	int64_t t121 = -59576971LL;

    t121 = (x501|((x502>x503)+x504));

    if (t121 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x506 = 22U;
	int32_t x507 = INT32_MIN;
	uint16_t x508 = UINT16_MAX;
	int64_t t122 = -26914752346LL;

    t122 = (x505|((x506>x507)+x508));

    if (t122 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x509 = -1LL;
	uint16_t x510 = 88U;
	static int16_t x512 = INT16_MIN;
	volatile int64_t t123 = -479591632716966LL;

    t123 = (x509|((x510>x511)+x512));

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x513 = 3U;
	int32_t x514 = INT32_MIN;
	int8_t x515 = INT8_MIN;
	volatile int32_t t124 = 34706976;

    t124 = (x513|((x514>x515)+x516));

    if (t124 != -2147483645) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x517 = -189;
	int64_t x518 = -1LL;
	int64_t x519 = -165188LL;
	int16_t x520 = INT16_MIN;
	volatile int32_t t125 = -286179560;

    t125 = (x517|((x518>x519)+x520));

    if (t125 != -189) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x522 = 1843239U;
	int32_t x523 = INT32_MIN;
	uint16_t x524 = 36U;

    t126 = (x521|((x522>x523)+x524));

    if (t126 != -32732) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x525 = -1;
	int64_t x526 = INT64_MIN;
	uint16_t x527 = 1658U;
	int16_t x528 = -11518;
	int32_t t127 = -1414370;

    t127 = (x525|((x526>x527)+x528));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x529 = -1;
	int8_t x530 = INT8_MIN;
	static uint64_t x532 = 21506184399LLU;

    t128 = (x529|((x530>x531)+x532));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x533 = UINT8_MAX;
	uint64_t x534 = 6136LLU;
	volatile int16_t x535 = INT16_MIN;
	int16_t x536 = INT16_MIN;
	volatile int32_t t129 = -369410169;

    t129 = (x533|((x534>x535)+x536));

    if (t129 != -32513) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x537 = -1;
	int8_t x538 = 4;
	static volatile int16_t x540 = -1;

    t130 = (x537|((x538>x539)+x540));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x542 = INT32_MIN;
	int64_t x543 = INT64_MAX;
	int32_t t131 = 82444;

    t131 = (x541|((x542>x543)+x544));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x545 = INT8_MIN;
	int64_t x546 = -3312384716612702536LL;
	int32_t x547 = -2413663;
	static int32_t t132 = -382040;

    t132 = (x545|((x546>x547)+x548));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x549 = UINT32_MAX;
	int64_t x551 = -1LL;
	int8_t x552 = INT8_MIN;
	uint32_t t133 = UINT32_MAX;

    t133 = (x549|((x550>x551)+x552));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x554 = INT16_MIN;
	volatile int32_t x555 = INT32_MIN;
	static int64_t x556 = -1LL;
	volatile int64_t t134 = 394476124LL;

    t134 = (x553|((x554>x555)+x556));

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x557 = -63653925;
	int16_t x558 = -33;
	int16_t x559 = 204;
	int32_t x560 = 0;
	static volatile int32_t t135 = 17643367;

    t135 = (x557|((x558>x559)+x560));

    if (t135 != -63653925) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x561 = INT64_MAX;
	uint64_t x563 = 1723960720178LLU;
	int32_t x564 = 186;
	volatile int64_t t136 = INT64_MAX;

    t136 = (x561|((x562>x563)+x564));

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x565 = -1;
	int64_t x566 = INT64_MAX;
	volatile uint32_t x568 = 16682U;
	static uint32_t t137 = UINT32_MAX;

    t137 = (x565|((x566>x567)+x568));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = INT8_MAX;
	int16_t x570 = -3839;
	volatile uint32_t x571 = 1744335168U;

    t138 = (x569|((x570>x571)+x572));

    if (t138 != 127LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x575 = INT64_MAX;
	uint8_t x576 = 2U;
	int64_t t139 = INT64_MAX;

    t139 = (x573|((x574>x575)+x576));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = INT32_MIN;
	static int16_t x578 = 0;
	static int64_t x579 = 519705760720831854LL;
	int32_t t140 = -9911;

    t140 = (x577|((x578>x579)+x580));

    if (t140 != -2147483393) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x581 = 1;
	int8_t x582 = INT8_MIN;
	int64_t x583 = -6682781921924638LL;
	int32_t x584 = INT32_MIN;
	static int32_t t141 = -1871259;

    t141 = (x581|((x582>x583)+x584));

    if (t141 != -2147483647) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x586 = UINT32_MAX;
	int16_t x587 = -7888;
	uint64_t t142 = 872018LLU;

    t142 = (x585|((x586>x587)+x588));

    if (t142 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x589 = -9;
	int8_t x590 = -1;
	static int64_t x592 = INT64_MIN;
	volatile int64_t t143 = 339956LL;

    t143 = (x589|((x590>x591)+x592));

    if (t143 != -9LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x593 = UINT16_MAX;
	volatile int64_t x594 = INT64_MIN;
	static volatile uint16_t x595 = 1135U;
	uint8_t x596 = 15U;
	static int32_t t144 = -736;

    t144 = (x593|((x594>x595)+x596));

    if (t144 != 65535) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x597 = 163U;
	uint8_t x598 = UINT8_MAX;
	uint8_t x599 = 107U;
	uint32_t x600 = 964572236U;
	static volatile uint32_t t145 = 772986U;

    t145 = (x597|((x598>x599)+x600));

    if (t145 != 964572399U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x601 = 8128207U;
	int16_t x603 = INT16_MIN;
	uint8_t x604 = UINT8_MAX;
	volatile uint32_t t146 = 411U;

    t146 = (x601|((x602>x603)+x604));

    if (t146 != 8128463U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x605 = INT16_MIN;
	uint32_t x607 = UINT32_MAX;
	uint16_t x608 = 102U;
	volatile int32_t t147 = 45785;

    t147 = (x605|((x606>x607)+x608));

    if (t147 != -32666) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x610 = UINT16_MAX;
	int64_t x611 = INT64_MAX;
	uint8_t x612 = 2U;
	int64_t t148 = -526202491073300405LL;

    t148 = (x609|((x610>x611)+x612));

    if (t148 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x613 = UINT16_MAX;
	int16_t x615 = INT16_MAX;
	uint16_t x616 = 12U;

    t149 = (x613|((x614>x615)+x616));

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x617 = 32560U;
	int32_t x619 = INT32_MIN;
	volatile int32_t t150 = 41179;

    t150 = (x617|((x618>x619)+x620));

    if (t150 != 32564) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = INT64_MIN;
	int8_t x623 = INT8_MIN;
	volatile int8_t x624 = INT8_MAX;

    t151 = (x621|((x622>x623)+x624));

    if (t151 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x625 = UINT16_MAX;
	int64_t x628 = INT64_MIN;
	volatile int64_t t152 = 23681156270183LL;

    t152 = (x625|((x626>x627)+x628));

    if (t152 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x629 = 2;
	int8_t x630 = INT8_MIN;
	volatile int64_t x631 = INT64_MAX;
	volatile int32_t t153 = -3244956;

    t153 = (x629|((x630>x631)+x632));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x633 = 10500U;
	uint8_t x634 = 1U;
	uint32_t x635 = 143686618U;
	int32_t x636 = INT32_MIN;
	volatile uint32_t t154 = 3444971U;

    t154 = (x633|((x634>x635)+x636));

    if (t154 != 2147494148U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x637 = 60759437227215513LLU;
	uint64_t x638 = UINT64_MAX;
	int64_t x640 = INT64_MIN;
	uint64_t t155 = 54528359232506LLU;

    t155 = (x637|((x638>x639)+x640));

    if (t155 != 9284131474081991321LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = -12;
	static int8_t x642 = INT8_MIN;
	uint16_t x643 = 8U;
	static volatile int64_t t156 = 4790LL;

    t156 = (x641|((x642>x643)+x644));

    if (t156 != -12LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x647 = UINT64_MAX;
	volatile int16_t x648 = INT16_MAX;
	int64_t t157 = -679LL;

    t157 = (x645|((x646>x647)+x648));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x649 = 18U;
	volatile int64_t x650 = 173337870180LL;
	int8_t x651 = -1;
	int16_t x652 = INT16_MAX;

    t158 = (x649|((x650>x651)+x652));

    if (t158 != 32786) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x653 = 19U;
	static uint8_t x654 = UINT8_MAX;
	volatile int32_t x656 = INT32_MIN;
	volatile uint32_t t159 = 7U;

    t159 = (x653|((x654>x655)+x656));

    if (t159 != 2147483667U) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x657 = 1297508760U;
	uint64_t x659 = 0LLU;
	int32_t x660 = -1;
	uint32_t t160 = UINT32_MAX;

    t160 = (x657|((x658>x659)+x660));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x661 = INT16_MIN;
	static uint16_t x662 = UINT16_MAX;
	int16_t x663 = INT16_MIN;
	int8_t x664 = INT8_MIN;
	volatile int32_t t161 = -227011;

    t161 = (x661|((x662>x663)+x664));

    if (t161 != -127) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x666 = -142;
	volatile uint8_t x667 = 0U;
	int16_t x668 = INT16_MIN;
	volatile int64_t t162 = -5974LL;

    t162 = (x665|((x666>x667)+x668));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x669 = 0U;
	static uint8_t x671 = 6U;
	uint8_t x672 = 34U;

    t163 = (x669|((x670>x671)+x672));

    if (t163 != 35) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x673 = -1;
	uint8_t x674 = UINT8_MAX;
	int16_t x676 = INT16_MIN;

    t164 = (x673|((x674>x675)+x676));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x681 = INT64_MIN;
	volatile int32_t x683 = INT32_MIN;

    t165 = (x681|((x682>x683)+x684));

    if (t165 != -32767LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x685 = 3094U;
	int32_t x686 = -1;
	volatile int8_t x687 = -1;
	int16_t x688 = 36;

    t166 = (x685|((x686>x687)+x688));

    if (t166 != 3126) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x690 = UINT64_MAX;
	static uint8_t x691 = 61U;
	static int16_t x692 = INT16_MAX;
	volatile int32_t t167 = INT32_MAX;

    t167 = (x689|((x690>x691)+x692));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x693 = UINT64_MAX;
	static int32_t x694 = -1;
	static int8_t x695 = INT8_MAX;
	volatile uint64_t t168 = UINT64_MAX;

    t168 = (x693|((x694>x695)+x696));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x697 = -1;
	volatile int8_t x699 = INT8_MAX;
	int16_t x700 = INT16_MAX;
	volatile int32_t t169 = 240;

    t169 = (x697|((x698>x699)+x700));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x701 = INT64_MIN;
	int64_t x703 = INT64_MIN;
	volatile int64_t t170 = INT64_MIN;

    t170 = (x701|((x702>x703)+x704));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x705 = -1;
	volatile uint16_t x706 = 4U;
	uint8_t x707 = 3U;
	volatile int16_t x708 = INT16_MIN;
	int32_t t171 = -20824092;

    t171 = (x705|((x706>x707)+x708));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x712 = -127468;
	volatile int32_t t172 = -3780232;

    t172 = (x709|((x710>x711)+x712));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x713 = INT16_MIN;
	uint64_t x714 = 470325075LLU;
	volatile uint64_t x715 = UINT64_MAX;
	int32_t x716 = 999804454;
	static int32_t t173 = -334225644;

    t173 = (x713|((x714>x715)+x716));

    if (t173 != -12762) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x717 = INT64_MIN;
	static uint16_t x718 = UINT16_MAX;
	int16_t x720 = -31;
	volatile int64_t t174 = -101563667LL;

    t174 = (x717|((x718>x719)+x720));

    if (t174 != -30LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = -1;
	static int8_t x724 = 31;

    t175 = (x721|((x722>x723)+x724));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x725 = UINT32_MAX;
	int8_t x726 = -5;
	volatile uint64_t x727 = 486862LLU;
	int16_t x728 = -1;
	volatile uint32_t t176 = UINT32_MAX;

    t176 = (x725|((x726>x727)+x728));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x729 = -5407125734LL;
	static uint8_t x730 = 26U;
	int64_t x731 = INT64_MIN;
	static volatile int64_t t177 = 4547317230755410523LL;

    t177 = (x729|((x730>x731)+x732));

    if (t177 != -5407125734LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x733 = -22;
	uint64_t x734 = 695456375LLU;
	int16_t x735 = -1;
	volatile int8_t x736 = INT8_MAX;

    t178 = (x733|((x734>x735)+x736));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x737 = 507882943481761LLU;
	uint32_t x739 = UINT32_MAX;
	int16_t x740 = INT16_MIN;

    t179 = (x737|((x738>x739)+x740));

    if (t179 != 18446744073709520801LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x743 = -1;
	int32_t t180 = -51;

    t180 = (x741|((x742>x743)+x744));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x745 = -1;
	static int8_t x746 = INT8_MIN;
	static int64_t x747 = INT64_MAX;
	int16_t x748 = -1;
	volatile int32_t t181 = -328;

    t181 = (x745|((x746>x747)+x748));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x749 = INT64_MIN;
	int32_t x750 = INT32_MIN;
	static int16_t x751 = INT16_MIN;
	volatile int32_t x752 = INT32_MIN;
	int64_t t182 = 15613LL;

    t182 = (x749|((x750>x751)+x752));

    if (t182 != -2147483648LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x753 = INT16_MIN;
	int32_t x754 = -42233;
	volatile int16_t x755 = -27;
	int16_t x756 = 3;
	int32_t t183 = 99268243;

    t183 = (x753|((x754>x755)+x756));

    if (t183 != -32765) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x757 = 1U;
	int8_t x758 = INT8_MIN;
	volatile int64_t x759 = -1996920617LL;
	uint16_t x760 = UINT16_MAX;

    t184 = (x757|((x758>x759)+x760));

    if (t184 != 65537) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x761 = INT8_MAX;
	volatile uint8_t x763 = UINT8_MAX;
	int64_t t185 = 37484735005698151LL;

    t185 = (x761|((x762>x763)+x764));

    if (t185 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x765 = -1;
	volatile int8_t x766 = -1;
	static volatile int16_t x767 = INT16_MAX;
	int8_t x768 = INT8_MAX;
	volatile int32_t t186 = 380307;

    t186 = (x765|((x766>x767)+x768));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x769 = INT8_MIN;
	int32_t x770 = INT32_MIN;
	static volatile int32_t x771 = -1;
	volatile int32_t t187 = 1353937;

    t187 = (x769|((x770>x771)+x772));

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x773 = INT32_MIN;
	int64_t x774 = INT64_MIN;
	uint8_t x775 = 3U;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (x773|((x774>x775)+x776));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x777 = 9U;
	static int32_t x778 = INT32_MIN;
	volatile uint8_t x780 = UINT8_MAX;
	static volatile int32_t t189 = 1;

    t189 = (x777|((x778>x779)+x780));

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x782 = 508528361946858LL;
	int16_t x783 = INT16_MIN;
	int32_t x784 = 21;
	volatile int32_t t190 = 11;

    t190 = (x781|((x782>x783)+x784));

    if (t190 != 65535) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x785 = 577LL;
	volatile int16_t x786 = 9;
	uint32_t x788 = UINT32_MAX;
	int64_t t191 = 6296001176970LL;

    t191 = (x785|((x786>x787)+x788));

    if (t191 != 4294967295LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x790 = INT64_MIN;
	int8_t x791 = -1;
	int8_t x792 = -1;
	uint64_t t192 = UINT64_MAX;

    t192 = (x789|((x790>x791)+x792));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x794 = -28;
	int32_t x795 = INT32_MIN;
	uint8_t x796 = UINT8_MAX;
	int32_t t193 = -177328938;

    t193 = (x793|((x794>x795)+x796));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = -30;
	int32_t x799 = INT32_MIN;
	int64_t x800 = INT64_MIN;
	int64_t t194 = -6092346725615LL;

    t194 = (x797|((x798>x799)+x800));

    if (t194 != -29LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x801 = 25013U;
	uint8_t x803 = 5U;
	uint16_t x804 = UINT16_MAX;
	volatile int32_t t195 = -33;

    t195 = (x801|((x802>x803)+x804));

    if (t195 != 90549) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x806 = -1LL;
	int16_t x807 = 4021;
	uint16_t x808 = 6U;
	volatile int64_t t196 = INT64_MAX;

    t196 = (x805|((x806>x807)+x808));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x809 = UINT8_MAX;
	uint8_t x810 = UINT8_MAX;
	uint16_t x811 = 393U;
	int16_t x812 = -137;
	volatile int32_t t197 = 6907581;

    t197 = (x809|((x810>x811)+x812));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x814 = 41878144U;
	volatile uint8_t x815 = 15U;
	volatile int64_t t198 = -21682087348LL;

    t198 = (x813|((x814>x815)+x816));

    if (t198 != -127LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x817 = 1;
	volatile uint64_t x818 = UINT64_MAX;
	static int64_t x819 = 67404731298671981LL;
	uint64_t x820 = 1766841056515LLU;
	volatile uint64_t t199 = 2LLU;

    t199 = (x817|((x818>x819)+x820));

    if (t199 != 1766841056517LLU) { NG(); } else { ; }
	
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

