
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

uint16_t x2 = 2U;
uint8_t x6 = 1U;
int8_t x7 = -1;
volatile int16_t x8 = INT16_MIN;
volatile int32_t x10 = -11;
int16_t x12 = -1;
static volatile int64_t x14 = -1LL;
volatile int32_t t3 = -462;
static uint64_t x24 = 2432199307LLU;
volatile int32_t t5 = -48199677;
int8_t x28 = INT8_MIN;
static int64_t x34 = INT64_MAX;
volatile int32_t t8 = -61505541;
static int32_t x37 = INT32_MAX;
static uint32_t x40 = UINT32_MAX;
static uint16_t x42 = 42U;
volatile int32_t t10 = -3790621;
int8_t x48 = INT8_MIN;
uint8_t x50 = 2U;
int16_t x56 = INT16_MIN;
static int8_t x58 = INT8_MAX;
int64_t x63 = -3LL;
int16_t x65 = INT16_MIN;
volatile uint32_t x66 = 117712702U;
static int32_t t16 = -131622791;
int32_t t18 = -15052;
uint8_t x80 = UINT8_MAX;
volatile uint8_t x83 = 2U;
volatile int16_t x89 = -35;
static int16_t x96 = INT16_MAX;
int32_t t23 = 1;
static int64_t x108 = -1LL;
int32_t t26 = -678;
uint32_t x110 = UINT32_MAX;
int32_t t27 = 2416827;
volatile int16_t x114 = 11845;
int16_t x115 = INT16_MAX;
static int64_t x117 = INT64_MIN;
static volatile int32_t t29 = 6;
volatile int32_t t30 = -4;
volatile int32_t t31 = -123;
static uint64_t x144 = 28761708240118952LLU;
uint32_t x149 = 8778U;
int16_t x150 = -5960;
static uint8_t x151 = UINT8_MAX;
volatile int64_t x156 = -178180908473795414LL;
uint64_t x162 = UINT64_MAX;
int32_t x163 = -1;
volatile int32_t x164 = INT32_MIN;
static uint64_t x165 = 3451342305175531LLU;
volatile int32_t t44 = -8;
uint32_t x182 = 16107200U;
int64_t x183 = INT64_MIN;
int32_t x189 = INT32_MAX;
int8_t x196 = 0;
int32_t t49 = 40;
static int8_t x201 = INT8_MIN;
int16_t x202 = -1;
int32_t x206 = INT32_MIN;
volatile int32_t t53 = 3;
volatile int8_t x219 = INT8_MIN;
volatile int32_t t54 = -889036823;
int16_t x222 = -1;
volatile int32_t t55 = 1809542;
int32_t x228 = -473273;
volatile int32_t t56 = -1792;
static int16_t x241 = -12;
int8_t x249 = INT8_MIN;
uint32_t x254 = 106893U;
uint32_t x259 = 928595U;
volatile int64_t x260 = 1647412LL;
int64_t x261 = 9916528LL;
uint16_t x265 = 3U;
int64_t x267 = INT64_MAX;
volatile int32_t t66 = -1019403;
static volatile int32_t t67 = -5;
int32_t x273 = 12205;
volatile int32_t t68 = -22;
int16_t x278 = -1004;
int32_t x284 = INT32_MIN;
volatile int32_t t70 = -2291;
volatile int16_t x289 = INT16_MIN;
static int64_t x291 = -1LL;
volatile int32_t t73 = 14;
volatile int64_t x300 = INT64_MAX;
volatile uint16_t x301 = 7028U;
uint16_t x306 = UINT16_MAX;
int16_t x325 = INT16_MIN;
volatile int32_t x329 = INT32_MAX;
volatile uint64_t x330 = UINT64_MAX;
int32_t x332 = -1;
int8_t x337 = 0;
int64_t x342 = INT64_MAX;
int32_t x344 = INT32_MAX;
int32_t x347 = INT32_MIN;
int32_t x350 = INT32_MAX;
volatile uint32_t x356 = 1957668U;
int32_t t89 = 1;
volatile uint64_t x363 = 2157886249887LLU;
uint32_t x367 = 27357014U;
static volatile uint16_t x369 = 3178U;
int64_t x373 = INT64_MIN;
static int32_t t94 = 101646067;
int8_t x381 = -1;
uint32_t x382 = 3U;
int8_t x383 = 2;
static int64_t x386 = INT64_MIN;
int32_t t96 = -1;
int32_t x390 = -4144408;
int64_t x394 = INT64_MIN;
static uint8_t x395 = 2U;
static int64_t x397 = -44977LL;
static int32_t x400 = INT32_MIN;
uint8_t x401 = UINT8_MAX;
volatile int32_t t100 = -2011;
uint8_t x411 = UINT8_MAX;
int8_t x413 = 52;
int32_t t103 = 21;
uint8_t x418 = 52U;
uint16_t x419 = 2431U;
int32_t t104 = 5;
uint32_t x427 = 1680636918U;
static int16_t x430 = INT16_MIN;
int64_t x437 = -1LL;
int32_t x438 = -1;
int16_t x439 = -1;
int8_t x443 = -1;
int64_t x445 = -3904133LL;
int32_t t111 = 384222224;
static int64_t x456 = INT64_MIN;
static int32_t x459 = 2343690;
static uint8_t x461 = 23U;
int16_t x462 = -3760;
volatile int8_t x464 = -1;
volatile uint16_t x470 = UINT16_MAX;
volatile int32_t t118 = -81282;
uint64_t x477 = UINT64_MAX;
volatile int32_t t119 = -368;
int32_t x482 = 1358595;
int16_t x483 = INT16_MIN;
volatile int32_t t120 = 19;
volatile uint32_t x493 = UINT32_MAX;
uint8_t x494 = UINT8_MAX;
volatile int32_t x499 = -1;
int64_t x500 = INT64_MIN;
int8_t x506 = -1;
static int8_t x507 = INT8_MIN;
uint64_t x511 = 27128LLU;
volatile uint32_t x513 = UINT32_MAX;
volatile int16_t x519 = 1;
int8_t x525 = -1;
static uint8_t x527 = 3U;
uint8_t x543 = 6U;
int64_t x546 = 1250297166LL;
uint16_t x548 = UINT16_MAX;
volatile uint8_t x551 = 6U;
int8_t x555 = INT8_MIN;
volatile int32_t t139 = -313942;
static uint8_t x562 = UINT8_MAX;
int16_t x571 = INT16_MIN;
static int32_t t142 = 416390;
static int64_t x574 = -1LL;
volatile uint64_t x575 = 1008610551904631945LLU;
int32_t t144 = -67517;
static int8_t x589 = INT8_MIN;
volatile int32_t t148 = 29;
uint64_t x606 = 233045949LLU;
volatile int16_t x614 = -7209;
uint32_t x615 = UINT32_MAX;
int32_t t153 = -833324;
int32_t t154 = 997;
int16_t x622 = -72;
volatile int32_t t155 = 1649704;
volatile int64_t x625 = 11427572LL;
int64_t x628 = 0LL;
int32_t t158 = -20529;
int32_t t160 = 433861;
int32_t x649 = -1966281;
volatile int32_t t162 = 47587;
volatile int8_t x656 = -1;
int32_t x664 = 2794;
int32_t t166 = -2733;
static int16_t x673 = INT16_MAX;
uint16_t x675 = 15U;
int32_t x679 = -1168020;
int16_t x681 = INT16_MIN;
static uint8_t x684 = 5U;
volatile int32_t t170 = 79285;
volatile int8_t x695 = INT8_MAX;
static int8_t x697 = INT8_MAX;
int64_t x700 = INT64_MAX;
uint16_t x704 = 6039U;
volatile int32_t t175 = 5638;
static uint32_t x706 = 2U;
static volatile int64_t x708 = -148098013206551LL;
uint32_t x712 = 5U;
static int16_t x714 = INT16_MAX;
static volatile int32_t x716 = -1;
int8_t x740 = -1;
int8_t x741 = INT8_MIN;
uint16_t x742 = UINT16_MAX;
volatile int32_t t185 = -1843;
volatile uint8_t x745 = UINT8_MAX;
uint8_t x747 = 121U;
volatile int64_t x757 = -1LL;
static volatile int64_t x760 = 463313157LL;
uint8_t x774 = 70U;
volatile uint16_t x781 = 7063U;
int16_t x788 = -1;
uint8_t x791 = 16U;
int32_t x793 = -80452;
int32_t t198 = 400574122;
volatile int32_t t199 = 4087463;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	static int32_t x3 = -1;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -141;

    t0 = (x1==((x2^x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x5 = -1;
	static volatile int32_t t1 = 18868;

    t1 = (x5==((x6^x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 630905U;
	static uint8_t x11 = UINT8_MAX;
	static volatile int32_t t2 = -1;

    t2 = (x9==((x10^x11)!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int16_t x15 = INT16_MIN;
	static volatile int32_t x16 = -16;

    t3 = (x13==((x14^x15)!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 215;
	int64_t x18 = 508864LL;
	int32_t x19 = INT32_MAX;
	uint8_t x20 = 50U;
	int32_t t4 = 60264;

    t4 = (x17==((x18^x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 27LLU;
	volatile int32_t x22 = INT32_MAX;
	int32_t x23 = INT32_MAX;

    t5 = (x21==((x22^x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MIN;
	int64_t x26 = INT64_MIN;
	int64_t x27 = INT64_MAX;
	int32_t t6 = -19;

    t6 = (x25==((x26^x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -2;
	int32_t x30 = -145;
	static int8_t x31 = INT8_MIN;
	static int16_t x32 = INT16_MIN;
	int32_t t7 = 108;

    t7 = (x29==((x30^x31)!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int16_t x35 = 624;
	volatile int8_t x36 = 1;

    t8 = (x33==((x34^x35)!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = 160;
	volatile int64_t x39 = 8146LL;
	int32_t t9 = 157460033;

    t9 = (x37==((x38^x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	int16_t x43 = INT16_MIN;
	volatile uint8_t x44 = 58U;

    t10 = (x41==((x42^x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MIN;
	static uint8_t x46 = 0U;
	uint8_t x47 = UINT8_MAX;
	static int32_t t11 = 0;

    t11 = (x45==((x46^x47)!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	int32_t x51 = -1;
	int64_t x52 = INT64_MIN;
	static volatile int32_t t12 = 597204614;

    t12 = (x49==((x50^x51)!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = 4U;
	volatile int16_t x54 = -2184;
	static volatile int8_t x55 = INT8_MAX;
	static int32_t t13 = 13111213;

    t13 = (x53==((x54^x55)!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MAX;
	static int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 1017873;

    t14 = (x57==((x58^x59)!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x61 = INT32_MIN;
	int8_t x62 = -2;
	int32_t x64 = -1;
	static int32_t t15 = 1029545;

    t15 = (x61==((x62^x63)!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x67 = 15LLU;
	int64_t x68 = 416LL;

    t16 = (x65==((x66^x67)!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -342;
	int8_t x70 = 0;
	int32_t x71 = 5;
	static int16_t x72 = INT16_MIN;
	int32_t t17 = -14;

    t17 = (x69==((x70^x71)!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 509U;
	int64_t x74 = -1LL;
	uint16_t x75 = 50U;
	static uint8_t x76 = 4U;

    t18 = (x73==((x74^x75)!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = INT16_MIN;
	static int16_t x78 = 1;
	int64_t x79 = -7LL;
	volatile int32_t t19 = -195454;

    t19 = (x77==((x78^x79)!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	static int16_t x82 = -13;
	static int64_t x84 = -1LL;
	int32_t t20 = 444530;

    t20 = (x81==((x82^x83)!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	static int16_t x86 = INT16_MIN;
	int16_t x87 = 14718;
	static int64_t x88 = -1648LL;
	volatile int32_t t21 = 15;

    t21 = (x85==((x86^x87)!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = INT16_MIN;
	static uint32_t x91 = UINT32_MAX;
	int64_t x92 = -1LL;
	volatile int32_t t22 = 707;

    t22 = (x89==((x90^x91)!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x93 = INT8_MAX;
	int16_t x94 = INT16_MIN;
	volatile uint16_t x95 = 13494U;

    t23 = (x93==((x94^x95)!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 48;
	int16_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	int32_t x100 = 35052;
	static volatile int32_t t24 = -381161180;

    t24 = (x97==((x98^x99)!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	static int8_t x102 = -1;
	int64_t x103 = -11087129155LL;
	int16_t x104 = INT16_MAX;
	int32_t t25 = 2580;

    t25 = (x101==((x102^x103)!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x105 = 103U;
	int8_t x106 = INT8_MIN;
	int32_t x107 = -1;

    t26 = (x105==((x106^x107)!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int16_t x111 = -1;
	uint64_t x112 = 229332LLU;

    t27 = (x109==((x110^x111)!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x113 = UINT64_MAX;
	int64_t x116 = INT64_MIN;
	int32_t t28 = -15063;

    t28 = (x113==((x114^x115)!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x118 = 3U;
	uint64_t x119 = 21146403704569508LLU;
	int8_t x120 = 3;

    t29 = (x117==((x118^x119)!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	uint8_t x122 = 50U;
	static volatile int64_t x123 = 9451113LL;
	volatile int64_t x124 = INT64_MIN;

    t30 = (x121==((x122^x123)!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 3U;
	volatile int64_t x126 = INT64_MAX;
	uint64_t x127 = 30220043LLU;
	volatile uint32_t x128 = 10213U;

    t31 = (x125==((x126^x127)!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = 13;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = INT16_MIN;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = -25422;

    t32 = (x129==((x130^x131)!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = UINT64_MAX;
	int8_t x134 = 1;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = 1483023937686LLU;
	int32_t t33 = 1011;

    t33 = (x133==((x134^x135)!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	int32_t x138 = 19215;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MAX;
	int32_t t34 = 57990597;

    t34 = (x137==((x138^x139)!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -9;
	static volatile uint16_t x142 = UINT16_MAX;
	uint32_t x143 = 25U;
	volatile int32_t t35 = -17161;

    t35 = (x141==((x142^x143)!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x145 = 829U;
	volatile uint16_t x146 = UINT16_MAX;
	static uint16_t x147 = UINT16_MAX;
	int8_t x148 = 3;
	volatile int32_t t36 = -1308817;

    t36 = (x145==((x146^x147)!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x152 = INT16_MAX;
	static int32_t t37 = 2452;

    t37 = (x149==((x150^x151)!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 81U;
	volatile int64_t x154 = INT64_MIN;
	volatile uint8_t x155 = 16U;
	static int32_t t38 = 24;

    t38 = (x153==((x154^x155)!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	int8_t x158 = INT8_MIN;
	int64_t x159 = 5122995150746272LL;
	volatile int64_t x160 = 2273514307151931648LL;
	volatile int32_t t39 = 3688387;

    t39 = (x157==((x158^x159)!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	static volatile int32_t t40 = 64116489;

    t40 = (x161==((x162^x163)!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x166 = UINT8_MAX;
	int64_t x167 = 1066LL;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 235;

    t41 = (x165==((x166^x167)!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x169 = 5410588U;
	int8_t x170 = INT8_MAX;
	volatile int8_t x171 = -1;
	int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = 14;

    t42 = (x169==((x170^x171)!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = 0;
	int32_t x174 = INT32_MIN;
	int16_t x175 = -1;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = -1;

    t43 = (x173==((x174^x175)!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	static int32_t x178 = INT32_MAX;
	int64_t x179 = INT64_MAX;
	volatile int16_t x180 = INT16_MIN;

    t44 = (x177==((x178^x179)!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x181 = UINT32_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -124;

    t45 = (x181==((x182^x183)!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 23U;
	int64_t x186 = -6LL;
	int16_t x187 = INT16_MIN;
	int64_t x188 = 220738604446257LL;
	int32_t t46 = -1;

    t46 = (x185==((x186^x187)!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x190 = INT64_MIN;
	uint64_t x191 = 1LLU;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = 8011542;

    t47 = (x189==((x190^x191)!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	static int16_t x194 = INT16_MIN;
	uint16_t x195 = 493U;
	volatile int32_t t48 = -11474401;

    t48 = (x193==((x194^x195)!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	int8_t x198 = INT8_MIN;
	int64_t x199 = -1LL;
	static volatile int64_t x200 = INT64_MAX;

    t49 = (x197==((x198^x199)!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x203 = UINT64_MAX;
	uint16_t x204 = 1U;
	volatile int32_t t50 = -54323833;

    t50 = (x201==((x202^x203)!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x205 = UINT64_MAX;
	int64_t x207 = -1LL;
	static int8_t x208 = 3;
	int32_t t51 = 756154;

    t51 = (x205==((x206^x207)!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	uint8_t x210 = 3U;
	int16_t x211 = -15;
	uint8_t x212 = 14U;
	volatile int32_t t52 = 3118;

    t52 = (x209==((x210^x211)!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x213 = UINT64_MAX;
	int8_t x214 = -1;
	uint16_t x215 = 5047U;
	volatile int64_t x216 = INT64_MIN;

    t53 = (x213==((x214^x215)!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 37;
	int16_t x218 = -1;
	uint8_t x220 = 3U;

    t54 = (x217==((x218^x219)!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MIN;
	int32_t x223 = -1;
	volatile uint64_t x224 = 846350779LLU;

    t55 = (x221==((x222^x223)!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	uint8_t x226 = UINT8_MAX;
	uint64_t x227 = UINT64_MAX;

    t56 = (x225==((x226^x227)!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 4194U;
	static int64_t x230 = INT64_MIN;
	static uint16_t x231 = 16270U;
	uint64_t x232 = UINT64_MAX;
	int32_t t57 = -284;

    t57 = (x229==((x230^x231)!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	int64_t x234 = -5438LL;
	static int8_t x235 = 48;
	uint32_t x236 = 1761531511U;
	volatile int32_t t58 = 10427626;

    t58 = (x233==((x234^x235)!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = 5188557935612LL;
	volatile uint8_t x238 = 1U;
	static volatile int64_t x239 = INT64_MAX;
	int32_t x240 = INT32_MIN;
	int32_t t59 = 47015;

    t59 = (x237==((x238^x239)!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x242 = 5924328612994136901LLU;
	volatile uint8_t x243 = 7U;
	int32_t x244 = -1;
	int32_t t60 = 1662;

    t60 = (x241==((x242^x243)!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 8275;
	volatile uint32_t x246 = 1501757U;
	static int8_t x247 = 0;
	volatile uint32_t x248 = 747567U;
	int32_t t61 = 24708;

    t61 = (x245==((x246^x247)!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x250 = UINT64_MAX;
	int32_t x251 = INT32_MIN;
	volatile int64_t x252 = INT64_MIN;
	int32_t t62 = 13303;

    t62 = (x249==((x250^x251)!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	static int32_t x255 = 1;
	static volatile int32_t x256 = -1;
	int32_t t63 = 123;

    t63 = (x253==((x254^x255)!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	int8_t x258 = -1;
	static int32_t t64 = -969355;

    t64 = (x257==((x258^x259)!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x262 = -1;
	int64_t x263 = -752LL;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t65 = -202570022;

    t65 = (x261==((x262^x263)!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = 3694;
	int64_t x268 = INT64_MIN;

    t66 = (x265==((x266^x267)!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MIN;
	static uint8_t x271 = 0U;
	int32_t x272 = INT32_MAX;

    t67 = (x269==((x270^x271)!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x274 = INT64_MAX;
	static uint8_t x275 = 4U;
	volatile int32_t x276 = INT32_MAX;

    t68 = (x273==((x274^x275)!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	int16_t x279 = -1;
	int64_t x280 = 71806194554790LL;
	volatile int32_t t69 = 7595;

    t69 = (x277==((x278^x279)!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = INT16_MIN;
	int16_t x282 = 1;
	uint8_t x283 = UINT8_MAX;

    t70 = (x281==((x282^x283)!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = INT8_MAX;
	int8_t x286 = -1;
	int8_t x287 = -6;
	int8_t x288 = -1;
	int32_t t71 = -1683;

    t71 = (x285==((x286^x287)!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x290 = UINT16_MAX;
	uint8_t x292 = UINT8_MAX;
	int32_t t72 = 963008;

    t72 = (x289==((x290^x291)!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 291U;
	int8_t x294 = -1;
	volatile int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MIN;

    t73 = (x293==((x294^x295)!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = 113U;
	uint16_t x298 = UINT16_MAX;
	int64_t x299 = INT64_MIN;
	volatile int32_t t74 = -3377;

    t74 = (x297==((x298^x299)!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = INT8_MIN;
	uint8_t x303 = 1U;
	uint8_t x304 = 31U;
	int32_t t75 = 0;

    t75 = (x301==((x302^x303)!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = 3514665600215LL;
	uint16_t x307 = 821U;
	uint16_t x308 = UINT16_MAX;
	int32_t t76 = 108173697;

    t76 = (x305==((x306^x307)!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 1U;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = 13LL;
	static uint64_t x312 = 9357861378267LLU;
	int32_t t77 = 370958;

    t77 = (x309==((x310^x311)!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MIN;
	int32_t x315 = 2895916;
	uint16_t x316 = 31920U;
	static int32_t t78 = -977037;

    t78 = (x313==((x314^x315)!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 30735165LLU;
	uint32_t x318 = 44U;
	static uint8_t x319 = 53U;
	uint16_t x320 = 3U;
	volatile int32_t t79 = -16;

    t79 = (x317==((x318^x319)!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	uint64_t x322 = UINT64_MAX;
	uint64_t x323 = UINT64_MAX;
	volatile int8_t x324 = -4;
	int32_t t80 = 413192;

    t80 = (x321==((x322^x323)!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x326 = INT64_MIN;
	static uint16_t x327 = 0U;
	int16_t x328 = -1;
	volatile int32_t t81 = -6095;

    t81 = (x325==((x326^x327)!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x331 = INT8_MAX;
	volatile int32_t t82 = 5;

    t82 = (x329==((x330^x331)!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x333 = 16LL;
	uint64_t x334 = 14868101240012LLU;
	uint8_t x335 = 1U;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = 50148269;

    t83 = (x333==((x334^x335)!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x338 = UINT64_MAX;
	uint16_t x339 = 3956U;
	volatile int64_t x340 = 876324405542459852LL;
	volatile int32_t t84 = -159621360;

    t84 = (x337==((x338^x339)!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x341 = UINT8_MAX;
	int32_t x343 = -1;
	int32_t t85 = 566787129;

    t85 = (x341==((x342^x343)!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = INT64_MAX;
	static volatile int16_t x346 = 4995;
	int32_t x348 = INT32_MIN;
	int32_t t86 = 485309063;

    t86 = (x345==((x346^x347)!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -1;
	volatile uint16_t x351 = UINT16_MAX;
	int8_t x352 = -19;
	volatile int32_t t87 = -10;

    t87 = (x349==((x350^x351)!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x353 = 1751U;
	int16_t x354 = INT16_MIN;
	static uint64_t x355 = UINT64_MAX;
	volatile int32_t t88 = -5;

    t88 = (x353==((x354^x355)!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 2U;
	int64_t x358 = INT64_MIN;
	uint64_t x359 = 22782422756431LLU;
	int8_t x360 = INT8_MIN;

    t89 = (x357==((x358^x359)!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -158244;
	int16_t x362 = -2495;
	volatile int16_t x364 = INT16_MIN;
	int32_t t90 = 59585;

    t90 = (x361==((x362^x363)!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MAX;
	int8_t x368 = INT8_MAX;
	int32_t t91 = -811637731;

    t91 = (x365==((x366^x367)!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = INT8_MAX;
	int64_t x371 = -4657997723LL;
	uint64_t x372 = 123904092484LLU;
	volatile int32_t t92 = 8123129;

    t92 = (x369==((x370^x371)!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x374 = UINT16_MAX;
	volatile int64_t x375 = 8LL;
	int32_t x376 = -1;
	int32_t t93 = 402119574;

    t93 = (x373==((x374^x375)!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	static volatile int64_t x378 = INT64_MIN;
	int16_t x379 = 1;
	int64_t x380 = INT64_MIN;

    t94 = (x377==((x378^x379)!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x384 = UINT8_MAX;
	int32_t t95 = -242;

    t95 = (x381==((x382^x383)!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = UINT64_MAX;
	volatile uint32_t x387 = UINT32_MAX;
	int64_t x388 = INT64_MIN;

    t96 = (x385==((x386^x387)!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = UINT64_MAX;
	static int8_t x391 = INT8_MAX;
	int64_t x392 = INT64_MAX;
	int32_t t97 = 6174037;

    t97 = (x389==((x390^x391)!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 3U;
	int16_t x396 = INT16_MIN;
	int32_t t98 = -11753228;

    t98 = (x393==((x394^x395)!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x398 = -1;
	int16_t x399 = INT16_MIN;
	int32_t t99 = -12472054;

    t99 = (x397==((x398^x399)!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x402 = 1110037774U;
	volatile int8_t x403 = -1;
	int32_t x404 = INT32_MIN;

    t100 = (x401==((x402^x403)!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = -429LL;
	int16_t x406 = INT16_MIN;
	uint32_t x407 = UINT32_MAX;
	uint64_t x408 = 2784853885LLU;
	static int32_t t101 = -1395060;

    t101 = (x405==((x406^x407)!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x409 = UINT64_MAX;
	volatile int8_t x410 = INT8_MIN;
	static int32_t x412 = -1;
	static int32_t t102 = -4;

    t102 = (x409==((x410^x411)!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x414 = INT8_MIN;
	volatile uint32_t x415 = UINT32_MAX;
	uint64_t x416 = UINT64_MAX;

    t103 = (x413==((x414^x415)!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MAX;
	static volatile int32_t x420 = 67;

    t104 = (x417==((x418^x419)!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -2206756LL;
	volatile int64_t x422 = INT64_MAX;
	int8_t x423 = INT8_MIN;
	int32_t x424 = 0;
	volatile int32_t t105 = 2188;

    t105 = (x421==((x422^x423)!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1LL;
	uint64_t x426 = UINT64_MAX;
	volatile uint8_t x428 = 8U;
	static int32_t t106 = -102212;

    t106 = (x425==((x426^x427)!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -6;
	int32_t x431 = -1;
	volatile int64_t x432 = 115422354495LL;
	volatile int32_t t107 = -1;

    t107 = (x429==((x430^x431)!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 25319U;
	int32_t x434 = 1;
	int32_t x435 = INT32_MIN;
	int32_t x436 = INT32_MIN;
	volatile int32_t t108 = 64790;

    t108 = (x433==((x434^x435)!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x440 = 100U;
	int32_t t109 = 0;

    t109 = (x437==((x438^x439)!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -7;
	int8_t x442 = -1;
	static int32_t x444 = 226918;
	volatile int32_t t110 = -13901;

    t110 = (x441==((x442^x443)!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x446 = 23;
	int8_t x447 = -1;
	uint64_t x448 = UINT64_MAX;

    t111 = (x445==((x446^x447)!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x449 = INT64_MIN;
	int32_t x450 = INT32_MIN;
	int32_t x451 = -1;
	volatile uint8_t x452 = UINT8_MAX;
	static int32_t t112 = 0;

    t112 = (x449==((x450^x451)!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = -1LL;
	int32_t x454 = 336986661;
	volatile int32_t x455 = INT32_MIN;
	volatile int32_t t113 = 11088;

    t113 = (x453==((x454^x455)!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = INT16_MIN;
	int16_t x458 = 0;
	int8_t x460 = -5;
	int32_t t114 = -13152996;

    t114 = (x457==((x458^x459)!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x463 = 1508;
	int32_t t115 = -52562437;

    t115 = (x461==((x462^x463)!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 2124969959621399LLU;
	volatile uint16_t x466 = 4456U;
	volatile int16_t x467 = INT16_MIN;
	int8_t x468 = INT8_MIN;
	int32_t t116 = -196345;

    t116 = (x465==((x466^x467)!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = -8173310;
	static uint64_t x471 = 431413384LLU;
	static volatile uint8_t x472 = UINT8_MAX;
	int32_t t117 = 409526;

    t117 = (x469==((x470^x471)!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	int32_t x474 = -1;
	int32_t x475 = INT32_MIN;
	volatile int32_t x476 = -1;

    t118 = (x473==((x474^x475)!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x478 = INT32_MIN;
	volatile uint32_t x479 = 3820U;
	int64_t x480 = 2853LL;

    t119 = (x477==((x478^x479)!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 54U;
	int8_t x484 = -1;

    t120 = (x481==((x482^x483)!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x485 = UINT16_MAX;
	int64_t x486 = INT64_MAX;
	static volatile int8_t x487 = -18;
	volatile uint16_t x488 = 6123U;
	int32_t t121 = -21313;

    t121 = (x485==((x486^x487)!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = 140LL;
	static uint8_t x490 = 89U;
	int16_t x491 = 1;
	int64_t x492 = INT64_MIN;
	int32_t t122 = 2719;

    t122 = (x489==((x490^x491)!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x495 = INT32_MIN;
	static int16_t x496 = INT16_MIN;
	volatile int32_t t123 = -12836570;

    t123 = (x493==((x494^x495)!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	static int16_t x498 = INT16_MIN;
	int32_t t124 = -365;

    t124 = (x497==((x498^x499)!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = 1;
	static volatile int64_t x502 = -1LL;
	int8_t x503 = INT8_MIN;
	int16_t x504 = INT16_MIN;
	int32_t t125 = -6;

    t125 = (x501==((x502^x503)!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	static uint64_t x508 = 95820LLU;
	volatile int32_t t126 = -1;

    t126 = (x505==((x506^x507)!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = -110LL;
	int32_t x510 = INT32_MIN;
	static int32_t x512 = -16;
	int32_t t127 = -2;

    t127 = (x509==((x510^x511)!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MIN;
	int8_t x516 = -1;
	int32_t t128 = -142613;

    t128 = (x513==((x514^x515)!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x517 = 6138961295054897399LLU;
	uint32_t x518 = UINT32_MAX;
	uint8_t x520 = 12U;
	int32_t t129 = 7253140;

    t129 = (x517==((x518^x519)!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	int64_t x522 = -311992193600LL;
	uint16_t x523 = 24U;
	uint16_t x524 = 1U;
	int32_t t130 = -17566;

    t130 = (x521==((x522^x523)!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = INT16_MIN;
	int32_t x528 = -51478;
	volatile int32_t t131 = 23804;

    t131 = (x525==((x526^x527)!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = INT16_MIN;
	uint64_t x530 = 20623LLU;
	static volatile int8_t x531 = 1;
	int8_t x532 = INT8_MIN;
	static volatile int32_t t132 = 472;

    t132 = (x529==((x530^x531)!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -12;
	volatile int16_t x534 = INT16_MIN;
	uint64_t x535 = UINT64_MAX;
	volatile uint8_t x536 = UINT8_MAX;
	int32_t t133 = -253;

    t133 = (x533==((x534^x535)!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = 782;
	static int64_t x538 = INT64_MIN;
	static volatile int8_t x539 = -1;
	int32_t x540 = INT32_MIN;
	int32_t t134 = 214966;

    t134 = (x537==((x538^x539)!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = INT64_MAX;
	static int8_t x542 = -1;
	volatile uint16_t x544 = 8007U;
	volatile int32_t t135 = -514;

    t135 = (x541==((x542^x543)!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = INT8_MAX;
	int32_t x547 = INT32_MAX;
	int32_t t136 = -15346;

    t136 = (x545==((x546^x547)!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = 11U;
	volatile int64_t x550 = INT64_MIN;
	int64_t x552 = INT64_MAX;
	volatile int32_t t137 = -116745;

    t137 = (x549==((x550^x551)!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = UINT64_MAX;
	int64_t x554 = INT64_MIN;
	int64_t x556 = 1138202LL;
	volatile int32_t t138 = -8614;

    t138 = (x553==((x554^x555)!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = INT64_MAX;
	int32_t x558 = INT32_MAX;
	int16_t x559 = INT16_MIN;
	uint16_t x560 = 4U;

    t139 = (x557==((x558^x559)!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	static int64_t x563 = -1LL;
	int32_t x564 = -443;
	int32_t t140 = -2212237;

    t140 = (x561==((x562^x563)!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x565 = INT16_MIN;
	uint32_t x566 = 1U;
	int8_t x567 = -1;
	uint64_t x568 = UINT64_MAX;
	volatile int32_t t141 = -57958497;

    t141 = (x565==((x566^x567)!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x569 = 22153339926LLU;
	volatile int8_t x570 = 33;
	uint64_t x572 = 42064LLU;

    t142 = (x569==((x570^x571)!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x573 = UINT32_MAX;
	int16_t x576 = INT16_MIN;
	int32_t t143 = 334930935;

    t143 = (x573==((x574^x575)!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -8;
	int64_t x578 = 170863520187LL;
	int32_t x579 = -19;
	int32_t x580 = 270854036;

    t144 = (x577==((x578^x579)!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	int16_t x582 = INT16_MIN;
	uint64_t x583 = 209421760711341668LLU;
	static int16_t x584 = INT16_MAX;
	static volatile int32_t t145 = 3;

    t145 = (x581==((x582^x583)!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -3413671;
	uint64_t x586 = 126665032125460LLU;
	volatile uint8_t x587 = 15U;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = -8728544;

    t146 = (x585==((x586^x587)!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x590 = -1;
	uint32_t x591 = UINT32_MAX;
	uint8_t x592 = 12U;
	volatile int32_t t147 = 1;

    t147 = (x589==((x590^x591)!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = UINT32_MAX;
	uint8_t x594 = UINT8_MAX;
	volatile uint64_t x595 = 253662548505006108LLU;
	static int64_t x596 = 3248LL;

    t148 = (x593==((x594^x595)!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -56849054LL;
	static volatile int64_t x598 = -1LL;
	int8_t x599 = -1;
	int16_t x600 = INT16_MAX;
	int32_t t149 = 197;

    t149 = (x597==((x598^x599)!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x601 = -1;
	static uint32_t x602 = UINT32_MAX;
	int8_t x603 = 5;
	static uint16_t x604 = UINT16_MAX;
	static int32_t t150 = 168;

    t150 = (x601==((x602^x603)!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = UINT32_MAX;
	int32_t x607 = INT32_MIN;
	int32_t x608 = INT32_MAX;
	int32_t t151 = 243659170;

    t151 = (x605==((x606^x607)!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	int32_t x610 = INT32_MAX;
	int8_t x611 = INT8_MIN;
	volatile int32_t x612 = -5775584;
	static volatile int32_t t152 = -217596;

    t152 = (x609==((x610^x611)!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = INT64_MIN;
	int32_t x616 = 379385;

    t153 = (x613==((x614^x615)!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MAX;
	uint16_t x618 = UINT16_MAX;
	int32_t x619 = INT32_MIN;
	int16_t x620 = -1;

    t154 = (x617==((x618^x619)!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	static int16_t x623 = INT16_MIN;
	int16_t x624 = INT16_MAX;

    t155 = (x621==((x622^x623)!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x626 = INT8_MAX;
	static int32_t x627 = INT32_MIN;
	int32_t t156 = 76503136;

    t156 = (x625==((x626^x627)!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 505123LLU;
	volatile int8_t x630 = INT8_MIN;
	int64_t x631 = -13112695378958LL;
	int64_t x632 = INT64_MIN;
	volatile int32_t t157 = 6582397;

    t157 = (x629==((x630^x631)!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = 18U;
	int64_t x634 = INT64_MAX;
	int64_t x635 = INT64_MAX;
	int32_t x636 = 8;

    t158 = (x633==((x634^x635)!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = -18;
	uint16_t x638 = 118U;
	int8_t x639 = INT8_MAX;
	static int8_t x640 = -1;
	volatile int32_t t159 = -328388578;

    t159 = (x637==((x638^x639)!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 87U;
	uint8_t x642 = 39U;
	int64_t x643 = -1LL;
	static volatile uint16_t x644 = 1216U;

    t160 = (x641==((x642^x643)!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x645 = 64478;
	int64_t x646 = INT64_MIN;
	int8_t x647 = INT8_MIN;
	static int64_t x648 = INT64_MIN;
	volatile int32_t t161 = 7147104;

    t161 = (x645==((x646^x647)!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x650 = 4;
	static volatile uint64_t x651 = 0LLU;
	uint32_t x652 = UINT32_MAX;

    t162 = (x649==((x650^x651)!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = 520379009U;
	volatile int16_t x654 = 316;
	static uint32_t x655 = UINT32_MAX;
	volatile int32_t t163 = 2201194;

    t163 = (x653==((x654^x655)!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	uint64_t x658 = 8579461642LLU;
	uint64_t x659 = 2LLU;
	static volatile int32_t x660 = -1;
	volatile int32_t t164 = 6024;

    t164 = (x657==((x658^x659)!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -461LL;
	static volatile int32_t x662 = INT32_MAX;
	int32_t x663 = INT32_MAX;
	volatile int32_t t165 = -16;

    t165 = (x661==((x662^x663)!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	int32_t x666 = 114;
	int64_t x667 = -11933541351LL;
	static int64_t x668 = -1LL;

    t166 = (x665==((x666^x667)!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = -1;
	static int32_t x670 = INT32_MIN;
	uint8_t x671 = 127U;
	int32_t x672 = INT32_MIN;
	int32_t t167 = 1;

    t167 = (x669==((x670^x671)!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x674 = UINT64_MAX;
	static int16_t x676 = INT16_MIN;
	int32_t t168 = -11828;

    t168 = (x673==((x674^x675)!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	uint64_t x678 = 1751757LLU;
	int32_t x680 = INT32_MIN;
	volatile int32_t t169 = 584365;

    t169 = (x677==((x678^x679)!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x682 = INT16_MIN;
	int16_t x683 = -1290;

    t170 = (x681==((x682^x683)!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 23384409487LLU;
	static int16_t x686 = -1;
	volatile uint8_t x687 = 48U;
	int64_t x688 = INT64_MAX;
	int32_t t171 = 49172;

    t171 = (x685==((x686^x687)!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x689 = 53U;
	uint64_t x690 = UINT64_MAX;
	static int32_t x691 = 2999;
	int16_t x692 = -77;
	volatile int32_t t172 = 459;

    t172 = (x689==((x690^x691)!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -1;
	int32_t x694 = INT32_MIN;
	uint64_t x696 = 8904507692147706644LLU;
	static volatile int32_t t173 = -141653;

    t173 = (x693==((x694^x695)!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x698 = 1100689310814090372LLU;
	int16_t x699 = INT16_MIN;
	int32_t t174 = -1067048102;

    t174 = (x697==((x698^x699)!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = -1;
	static int8_t x702 = INT8_MIN;
	static volatile int32_t x703 = -1;

    t175 = (x701==((x702^x703)!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 471447557284706568LLU;
	int32_t x707 = -1;
	volatile int32_t t176 = 12883;

    t176 = (x705==((x706^x707)!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x709 = INT32_MIN;
	static volatile uint16_t x710 = 4202U;
	uint8_t x711 = 11U;
	int32_t t177 = 522755844;

    t177 = (x709==((x710^x711)!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = UINT16_MAX;
	uint32_t x715 = UINT32_MAX;
	static int32_t t178 = 0;

    t178 = (x713==((x714^x715)!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	uint8_t x718 = 48U;
	int32_t x719 = 1;
	uint16_t x720 = 969U;
	int32_t t179 = 2;

    t179 = (x717==((x718^x719)!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	uint32_t x722 = UINT32_MAX;
	uint64_t x723 = 31172490955857854LLU;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t180 = 2;

    t180 = (x721==((x722^x723)!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MAX;
	static uint16_t x726 = UINT16_MAX;
	static uint32_t x727 = UINT32_MAX;
	int64_t x728 = INT64_MIN;
	int32_t t181 = -7081;

    t181 = (x725==((x726^x727)!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MAX;
	int64_t x730 = -1LL;
	volatile int8_t x731 = 15;
	uint8_t x732 = 25U;
	int32_t t182 = -122929;

    t182 = (x729==((x730^x731)!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	uint32_t x734 = 352U;
	uint8_t x735 = 24U;
	int8_t x736 = INT8_MAX;
	int32_t t183 = -27291;

    t183 = (x733==((x734^x735)!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x737 = INT32_MIN;
	int64_t x738 = 52910010LL;
	int64_t x739 = INT64_MIN;
	volatile int32_t t184 = 6590;

    t184 = (x737==((x738^x739)!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x743 = INT32_MIN;
	int32_t x744 = 56234779;

    t185 = (x741==((x742^x743)!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = 300LL;
	int64_t x748 = INT64_MIN;
	volatile int32_t t186 = -802;

    t186 = (x745==((x746^x747)!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 69U;
	uint64_t x750 = UINT64_MAX;
	static uint64_t x751 = 0LLU;
	uint64_t x752 = 15553124258842LLU;
	int32_t t187 = -66644179;

    t187 = (x749==((x750^x751)!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = INT8_MIN;
	static uint8_t x754 = 5U;
	int32_t x755 = 5335;
	int8_t x756 = INT8_MAX;
	int32_t t188 = -27830;

    t188 = (x753==((x754^x755)!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x758 = INT16_MIN;
	uint8_t x759 = UINT8_MAX;
	int32_t t189 = 64071213;

    t189 = (x757==((x758^x759)!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 1U;
	static int16_t x762 = 934;
	static int64_t x763 = 342202260203LL;
	int32_t x764 = -47;
	volatile int32_t t190 = 1;

    t190 = (x761==((x762^x763)!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	int8_t x766 = INT8_MAX;
	int8_t x767 = INT8_MIN;
	int8_t x768 = INT8_MAX;
	int32_t t191 = -40680;

    t191 = (x765==((x766^x767)!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 79U;
	uint16_t x770 = UINT16_MAX;
	uint16_t x771 = UINT16_MAX;
	int16_t x772 = -1;
	int32_t t192 = 5805;

    t192 = (x769==((x770^x771)!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x773 = 4057U;
	uint8_t x775 = 26U;
	int16_t x776 = INT16_MAX;
	volatile int32_t t193 = 153181;

    t193 = (x773==((x774^x775)!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	uint16_t x778 = 1U;
	int32_t x779 = 15075;
	volatile int64_t x780 = INT64_MAX;
	int32_t t194 = 369582;

    t194 = (x777==((x778^x779)!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x782 = -9;
	uint16_t x783 = 4833U;
	volatile int16_t x784 = 1;
	int32_t t195 = 1;

    t195 = (x781==((x782^x783)!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	static uint16_t x786 = UINT16_MAX;
	static uint32_t x787 = UINT32_MAX;
	volatile int32_t t196 = 2976581;

    t196 = (x785==((x786^x787)!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x789 = INT64_MAX;
	uint16_t x790 = UINT16_MAX;
	uint64_t x792 = 56358712421LLU;
	int32_t t197 = -192;

    t197 = (x789==((x790^x791)!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x794 = UINT64_MAX;
	int64_t x795 = 6333291470LL;
	int16_t x796 = INT16_MIN;

    t198 = (x793==((x794^x795)!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x797 = 1678U;
	volatile int16_t x798 = INT16_MAX;
	static int32_t x799 = -2041;
	uint64_t x800 = 82283LLU;

    t199 = (x797==((x798^x799)!=x800));

    if (t199 != 0) { NG(); } else { ; }
	
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

