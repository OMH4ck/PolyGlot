
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

static int8_t x1 = -9;
volatile uint64_t x8 = UINT64_MAX;
int64_t x9 = INT64_MIN;
int64_t x10 = -1LL;
uint32_t x12 = 296U;
volatile int32_t t2 = -22372740;
uint32_t x23 = 165U;
int64_t x25 = INT64_MIN;
volatile uint16_t x27 = 1U;
int8_t x32 = INT8_MIN;
volatile int32_t t8 = 85748;
volatile int16_t x40 = INT16_MAX;
int16_t x51 = INT16_MAX;
static int16_t x53 = -895;
int32_t x56 = -2;
int32_t x57 = -2068235;
volatile int32_t t13 = -44;
static volatile uint32_t x63 = UINT32_MAX;
uint32_t x64 = 6U;
int8_t x68 = INT8_MAX;
int16_t x70 = -1;
volatile int32_t x73 = INT32_MIN;
volatile int16_t x74 = INT16_MAX;
volatile int32_t t18 = -40;
int32_t x87 = INT32_MIN;
uint32_t x94 = 298U;
int32_t x100 = 24760372;
volatile int8_t x108 = 42;
volatile uint32_t x110 = UINT32_MAX;
int64_t x118 = INT64_MIN;
int16_t x122 = INT16_MAX;
uint32_t x124 = 2468U;
int32_t t28 = -196195;
volatile uint64_t x129 = 35574067198LLU;
volatile int32_t t30 = -329408810;
static uint32_t x135 = 245U;
uint64_t x140 = UINT64_MAX;
volatile int32_t x144 = -1;
static volatile int16_t x151 = 3249;
int8_t x155 = INT8_MAX;
volatile int32_t t37 = 243361040;
volatile int16_t x168 = INT16_MAX;
volatile uint16_t x169 = 207U;
int64_t x177 = -1LL;
int32_t t42 = -3026393;
volatile int32_t t43 = -1219;
int16_t x185 = INT16_MIN;
volatile uint32_t x186 = 34U;
int32_t t44 = -83363408;
int32_t x191 = 696642;
int32_t t46 = 9704;
uint64_t x197 = UINT64_MAX;
int8_t x198 = -1;
int16_t x199 = INT16_MIN;
static volatile int8_t x221 = 8;
int8_t x228 = -1;
volatile int32_t x236 = INT32_MAX;
volatile int32_t t57 = -1928;
volatile int32_t t58 = 64651;
volatile uint8_t x261 = 9U;
volatile int32_t t61 = -202326254;
uint32_t x266 = 886U;
static volatile int32_t t62 = -2;
uint16_t x270 = 8U;
int8_t x273 = INT8_MIN;
int32_t x276 = -1;
uint32_t x283 = 18976626U;
static int64_t x284 = -196329055LL;
static uint32_t x286 = 6U;
uint64_t x289 = UINT64_MAX;
static uint8_t x293 = 1U;
int32_t x310 = 5336619;
int32_t t73 = 54;
uint64_t x316 = 232LLU;
int32_t x320 = -142;
int32_t x322 = -506;
int64_t x330 = INT64_MAX;
int8_t x344 = 20;
static int16_t x345 = -1;
int32_t x347 = -844;
int32_t t81 = 0;
uint32_t x353 = 1859379U;
volatile int32_t x363 = INT32_MAX;
int64_t x365 = -1LL;
int64_t x370 = INT64_MIN;
volatile int32_t t88 = 1;
uint64_t x381 = 2907040LLU;
int64_t x382 = -60215944282LL;
int8_t x385 = -1;
int32_t x390 = INT32_MAX;
volatile int32_t t91 = 3;
int8_t x394 = INT8_MIN;
volatile int32_t t92 = 3865;
int32_t t93 = -731480;
uint8_t x410 = 6U;
uint32_t x415 = UINT32_MAX;
volatile int32_t t97 = 1;
int16_t x417 = -1;
static uint16_t x419 = 1281U;
static uint16_t x421 = UINT16_MAX;
static int32_t x427 = 115;
int16_t x429 = 19;
static int16_t x443 = INT16_MIN;
volatile int32_t t104 = 1;
int8_t x450 = INT8_MAX;
int8_t x456 = 0;
static uint64_t x458 = UINT64_MAX;
static int64_t x468 = INT64_MIN;
int8_t x470 = INT8_MIN;
int16_t x475 = -1;
int32_t t112 = 46112628;
volatile uint64_t x488 = UINT64_MAX;
int32_t t115 = -422413436;
int8_t x498 = -1;
int64_t x499 = INT64_MAX;
static int32_t t119 = 30;
static int64_t x509 = INT64_MIN;
volatile int32_t t120 = 17;
int16_t x513 = -1;
int16_t x517 = INT16_MAX;
static volatile int32_t x519 = INT32_MIN;
int16_t x520 = INT16_MIN;
int32_t x536 = INT32_MIN;
volatile int32_t t125 = 1;
int32_t x542 = INT32_MIN;
int32_t x545 = INT32_MIN;
static int32_t t127 = -32;
volatile int32_t t128 = 2529;
int32_t t129 = 53;
static volatile uint8_t x557 = 0U;
int32_t x565 = INT32_MIN;
int32_t x566 = INT32_MIN;
volatile int8_t x568 = 7;
volatile int16_t x569 = INT16_MIN;
int16_t x571 = 1;
volatile int32_t t134 = -11;
volatile int32_t t135 = 0;
uint64_t x590 = UINT64_MAX;
static int16_t x592 = 206;
uint16_t x606 = UINT16_MAX;
uint8_t x612 = 2U;
int32_t t142 = -512078;
int8_t x614 = -1;
uint8_t x616 = 6U;
volatile int32_t t144 = 4;
uint8_t x623 = UINT8_MAX;
volatile int16_t x625 = INT16_MAX;
uint32_t x641 = 1959333U;
static volatile int32_t t150 = -27581613;
uint64_t x647 = 1819153LLU;
int32_t t151 = 74;
int16_t x654 = INT16_MIN;
int64_t x656 = INT64_MIN;
int64_t x658 = 12210LL;
int32_t t157 = -5282;
uint64_t x684 = 604709527LLU;
volatile uint8_t x685 = 2U;
int16_t x687 = INT16_MIN;
int32_t x689 = INT32_MIN;
static int64_t x693 = -1LL;
int16_t x696 = INT16_MIN;
volatile int32_t t163 = 0;
int16_t x703 = -556;
static uint8_t x704 = 0U;
volatile int32_t x707 = INT32_MIN;
volatile int16_t x711 = 1120;
volatile int32_t x720 = -1;
uint32_t x722 = UINT32_MAX;
int16_t x724 = INT16_MIN;
volatile int32_t t169 = 379;
int64_t x727 = -1LL;
volatile int8_t x728 = -5;
int16_t x730 = -1;
int32_t x731 = INT32_MIN;
int16_t x733 = INT16_MIN;
int64_t x739 = INT64_MAX;
uint64_t x748 = 573626382928754435LLU;
uint32_t x754 = UINT32_MAX;
volatile int32_t x765 = 1;
static uint32_t x766 = 24536U;
volatile int32_t t180 = -3;
int32_t x775 = 7076242;
uint32_t x779 = 114U;
int32_t t183 = 244552421;
volatile int32_t t184 = 314753907;
int32_t x790 = INT32_MIN;
uint64_t x797 = 0LLU;
volatile int32_t x801 = INT32_MIN;
volatile int32_t t188 = -26504979;
static int64_t x806 = -1LL;
volatile int16_t x807 = -1;
int8_t x810 = INT8_MAX;
static int16_t x811 = -300;
volatile int32_t t192 = 56528174;
volatile uint64_t x822 = UINT64_MAX;
int64_t x824 = INT64_MIN;
int64_t x830 = -104383722774348013LL;
static int32_t x832 = INT32_MIN;
static int64_t x843 = INT64_MIN;
volatile uint16_t x844 = UINT16_MAX;
volatile int64_t x847 = INT64_MIN;
volatile uint16_t x848 = UINT16_MAX;


void f0(void) {
    	int64_t x2 = -1LL;
	int8_t x3 = 49;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 785541439;

    t0 = (x1>((x2%x3)-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	volatile int64_t x6 = -1LL;
	uint16_t x7 = 15734U;
	static volatile int32_t t1 = -5976;

    t1 = (x5>((x6%x7)-x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x11 = -1;

    t2 = (x9>((x10%x11)-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	uint32_t x14 = UINT32_MAX;
	int64_t x15 = INT64_MIN;
	int16_t x16 = 180;
	static int32_t t3 = 12927;

    t3 = (x13>((x14%x15)-x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static int16_t x18 = INT16_MIN;
	static int32_t x19 = -10224;
	static int16_t x20 = -2117;
	volatile int32_t t4 = -1;

    t4 = (x17>((x18%x19)-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 5U;
	int8_t x22 = -7;
	int16_t x24 = 9;
	volatile int32_t t5 = -25;

    t5 = (x21>((x22%x23)-x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = UINT64_MAX;
	volatile int16_t x28 = INT16_MIN;
	int32_t t6 = 53;

    t6 = (x25>((x26%x27)-x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 3144970U;
	int8_t x30 = 7;
	int8_t x31 = INT8_MIN;
	int32_t t7 = -35;

    t7 = (x29>((x30%x31)-x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = 51513LL;
	int16_t x34 = 0;
	volatile int64_t x35 = INT64_MAX;
	int64_t x36 = 1102LL;

    t8 = (x33>((x34%x35)-x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	uint32_t x38 = UINT32_MAX;
	uint32_t x39 = 16961U;
	int32_t t9 = -26;

    t9 = (x37>((x38%x39)-x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1700LL;
	int8_t x42 = INT8_MAX;
	int64_t x43 = -147719176739034LL;
	static uint16_t x44 = UINT16_MAX;
	static volatile int32_t t10 = 2;

    t10 = (x41>((x42%x43)-x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = -1;
	static int16_t x50 = 31;
	int32_t x52 = -1;
	static volatile int32_t t11 = 3;

    t11 = (x49>((x50%x51)-x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = -18;
	int64_t x55 = INT64_MAX;
	int32_t t12 = -2586665;

    t12 = (x53>((x54%x55)-x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x58 = 1U;
	static uint64_t x59 = 657395308651301673LLU;
	uint64_t x60 = 416LLU;

    t13 = (x57>((x58%x59)-x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x61 = -1;
	int64_t x62 = -14695LL;
	int32_t t14 = -110;

    t14 = (x61>((x62%x63)-x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x65 = INT64_MAX;
	volatile uint8_t x66 = 37U;
	int64_t x67 = 3397693504LL;
	volatile int32_t t15 = -1084;

    t15 = (x65>((x66%x67)-x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x69 = -1;
	int8_t x71 = -45;
	uint8_t x72 = UINT8_MAX;
	int32_t t16 = -171;

    t16 = (x69>((x70%x71)-x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x75 = UINT64_MAX;
	uint16_t x76 = 188U;
	int32_t t17 = 5326220;

    t17 = (x73>((x74%x75)-x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = -1;
	int32_t x82 = -836069;
	uint64_t x83 = UINT64_MAX;
	static int8_t x84 = INT8_MIN;

    t18 = (x81>((x82%x83)-x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	volatile uint32_t x86 = 1629212741U;
	uint16_t x88 = 9582U;
	int32_t t19 = -131347901;

    t19 = (x85>((x86%x87)-x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = 1;
	int64_t x90 = INT64_MIN;
	static volatile int8_t x91 = 52;
	int64_t x92 = 1038373422346784263LL;
	int32_t t20 = -63117119;

    t20 = (x89>((x90%x91)-x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x93 = 1;
	volatile int32_t x95 = INT32_MAX;
	int32_t x96 = -1;
	static int32_t t21 = -84862;

    t21 = (x93>((x94%x95)-x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MIN;
	int64_t x98 = -1LL;
	int8_t x99 = INT8_MAX;
	int32_t t22 = 693980;

    t22 = (x97>((x98%x99)-x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x101 = INT32_MIN;
	static volatile int8_t x102 = INT8_MIN;
	uint16_t x103 = UINT16_MAX;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int32_t t23 = -4;

    t23 = (x101>((x102%x103)-x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x105 = 6U;
	volatile int64_t x106 = 7062224657723556LL;
	static int64_t x107 = INT64_MIN;
	volatile int32_t t24 = -92;

    t24 = (x105>((x106%x107)-x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = 55912;
	int64_t x111 = -1LL;
	static int64_t x112 = 511877458496954561LL;
	volatile int32_t t25 = 605;

    t25 = (x109>((x110%x111)-x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = INT16_MAX;
	static uint32_t x114 = UINT32_MAX;
	int16_t x115 = INT16_MIN;
	static uint64_t x116 = 1892LLU;
	volatile int32_t t26 = 7818740;

    t26 = (x113>((x114%x115)-x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = UINT64_MAX;
	uint8_t x119 = 9U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t27 = 19751258;

    t27 = (x117>((x118%x119)-x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x121 = 19549LLU;
	int16_t x123 = INT16_MIN;

    t28 = (x121>((x122%x123)-x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = INT32_MIN;
	uint32_t x126 = 15409794U;
	static int64_t x127 = INT64_MIN;
	int64_t x128 = -15251LL;
	volatile int32_t t29 = 6028;

    t29 = (x125>((x126%x127)-x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x130 = INT32_MIN;
	uint16_t x131 = UINT16_MAX;
	uint64_t x132 = 20191873LLU;

    t30 = (x129>((x130%x131)-x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x133 = 24111LLU;
	uint32_t x134 = 4557U;
	volatile int8_t x136 = INT8_MIN;
	int32_t t31 = -63995;

    t31 = (x133>((x134%x135)-x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x137 = 6U;
	uint16_t x138 = UINT16_MAX;
	volatile int8_t x139 = INT8_MIN;
	volatile int32_t t32 = 8;

    t32 = (x137>((x138%x139)-x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x141 = -1;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 171878070157688LLU;
	volatile int32_t t33 = 140;

    t33 = (x141>((x142%x143)-x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = -1LL;
	int32_t x146 = -58804630;
	volatile int16_t x147 = INT16_MIN;
	int32_t x148 = 11002;
	volatile int32_t t34 = 120398985;

    t34 = (x145>((x146%x147)-x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = -362319;
	static uint8_t x150 = UINT8_MAX;
	int8_t x152 = -1;
	volatile int32_t t35 = -575540;

    t35 = (x149>((x150%x151)-x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = -1LL;
	uint32_t x154 = UINT32_MAX;
	volatile int16_t x156 = INT16_MAX;
	int32_t t36 = 791527;

    t36 = (x153>((x154%x155)-x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MIN;
	uint64_t x158 = 2672993LLU;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 364968U;

    t37 = (x157>((x158%x159)-x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x161 = -1;
	int8_t x162 = 13;
	volatile uint64_t x163 = 22814LLU;
	static int16_t x164 = -1;
	volatile int32_t t38 = 1621872;

    t38 = (x161>((x162%x163)-x164));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x165 = INT8_MAX;
	int64_t x166 = 2009351536LL;
	volatile int16_t x167 = INT16_MIN;
	volatile int32_t t39 = 115;

    t39 = (x165>((x166%x167)-x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x170 = INT32_MIN;
	int64_t x171 = INT64_MAX;
	int16_t x172 = INT16_MIN;
	volatile int32_t t40 = 39981;

    t40 = (x169>((x170%x171)-x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x173 = 678U;
	uint32_t x174 = 1044029U;
	uint32_t x175 = 220091512U;
	volatile int8_t x176 = -43;
	static volatile int32_t t41 = -39424628;

    t41 = (x173>((x174%x175)-x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x178 = -12;
	uint8_t x179 = UINT8_MAX;
	static int64_t x180 = -186LL;

    t42 = (x177>((x178%x179)-x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x181 = 204U;
	int8_t x182 = INT8_MAX;
	int32_t x183 = -1;
	static uint8_t x184 = 2U;

    t43 = (x181>((x182%x183)-x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x187 = UINT8_MAX;
	uint16_t x188 = 747U;

    t44 = (x185>((x186%x187)-x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = 26U;
	int8_t x190 = 1;
	int8_t x192 = -1;
	volatile int32_t t45 = 5047;

    t45 = (x189>((x190%x191)-x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x193 = 19;
	uint32_t x194 = 93698U;
	volatile int8_t x195 = 1;
	uint16_t x196 = UINT16_MAX;

    t46 = (x193>((x194%x195)-x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint32_t x200 = 141U;
	static volatile int32_t t47 = 22524;

    t47 = (x197>((x198%x199)-x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x201 = -1;
	static uint64_t x202 = UINT64_MAX;
	volatile int8_t x203 = INT8_MIN;
	int64_t x204 = -1LL;
	volatile int32_t t48 = 1;

    t48 = (x201>((x202%x203)-x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x209 = 0U;
	volatile uint32_t x210 = 26043436U;
	int64_t x211 = INT64_MIN;
	int16_t x212 = -16;
	volatile int32_t t49 = -102;

    t49 = (x209>((x210%x211)-x212));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = -42071;
	int64_t x214 = -1LL;
	int16_t x215 = INT16_MIN;
	int16_t x216 = -1;
	volatile int32_t t50 = 0;

    t50 = (x213>((x214%x215)-x216));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x222 = 35;
	uint8_t x223 = 69U;
	uint16_t x224 = 55U;
	volatile int32_t t51 = 23;

    t51 = (x221>((x222%x223)-x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x225 = 1U;
	int64_t x226 = INT64_MIN;
	static uint64_t x227 = UINT64_MAX;
	volatile int32_t t52 = -16362;

    t52 = (x225>((x226%x227)-x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x229 = INT32_MAX;
	uint8_t x230 = UINT8_MAX;
	uint32_t x231 = UINT32_MAX;
	uint64_t x232 = 5601LLU;
	static volatile int32_t t53 = 16487899;

    t53 = (x229>((x230%x231)-x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x233 = UINT16_MAX;
	static int8_t x234 = INT8_MIN;
	int64_t x235 = -1LL;
	volatile int32_t t54 = -532;

    t54 = (x233>((x234%x235)-x236));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x237 = -22;
	uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 263887564393204LLU;
	volatile int8_t x240 = -1;
	int32_t t55 = -3678;

    t55 = (x237>((x238%x239)-x240));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x241 = UINT8_MAX;
	uint16_t x242 = 6U;
	volatile int64_t x243 = 284804LL;
	int8_t x244 = INT8_MIN;
	int32_t t56 = 2342;

    t56 = (x241>((x242%x243)-x244));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = -1;
	int32_t x246 = -1;
	int32_t x247 = INT32_MAX;
	static int16_t x248 = -466;

    t57 = (x245>((x246%x247)-x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x249 = UINT16_MAX;
	uint64_t x250 = 3LLU;
	static volatile uint64_t x251 = 2237273398LLU;
	uint16_t x252 = 1012U;

    t58 = (x249>((x250%x251)-x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = -1LL;
	volatile uint64_t x254 = 1042439LLU;
	uint64_t x255 = 207720298LLU;
	volatile int64_t x256 = -1LL;
	volatile int32_t t59 = 21981164;

    t59 = (x253>((x254%x255)-x256));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x257 = INT32_MAX;
	int8_t x258 = INT8_MAX;
	volatile int32_t x259 = -543442;
	int32_t x260 = -1;
	volatile int32_t t60 = -1;

    t60 = (x257>((x258%x259)-x260));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x262 = -1;
	int8_t x263 = INT8_MAX;
	uint16_t x264 = 15U;

    t61 = (x261>((x262%x263)-x264));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x265 = 0;
	volatile int64_t x267 = INT64_MIN;
	uint64_t x268 = 1601251LLU;

    t62 = (x265>((x266%x267)-x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x269 = 3U;
	int8_t x271 = -10;
	int16_t x272 = INT16_MIN;
	int32_t t63 = 230410;

    t63 = (x269>((x270%x271)-x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	static volatile int32_t t64 = 753501625;

    t64 = (x273>((x274%x275)-x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x277 = INT16_MIN;
	int8_t x278 = -1;
	volatile uint64_t x279 = 92750LLU;
	static uint8_t x280 = 27U;
	static volatile int32_t t65 = -781051;

    t65 = (x277>((x278%x279)-x280));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x281 = 122U;
	uint16_t x282 = 46U;
	volatile int32_t t66 = -110817;

    t66 = (x281>((x282%x283)-x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x285 = 46792119U;
	volatile int16_t x287 = 4;
	uint32_t x288 = 136354679U;
	volatile int32_t t67 = 227;

    t67 = (x285>((x286%x287)-x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x290 = 37U;
	int16_t x291 = -1;
	int8_t x292 = INT8_MIN;
	int32_t t68 = -247;

    t68 = (x289>((x290%x291)-x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x294 = INT64_MIN;
	uint16_t x295 = 4800U;
	uint32_t x296 = 883048387U;
	static int32_t t69 = -581757;

    t69 = (x293>((x294%x295)-x296));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x297 = -1LL;
	int8_t x298 = INT8_MIN;
	static int32_t x299 = 1560;
	int64_t x300 = 13233472607982LL;
	static int32_t t70 = -2;

    t70 = (x297>((x298%x299)-x300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x301 = 4678;
	static int16_t x302 = INT16_MAX;
	volatile int8_t x303 = INT8_MIN;
	uint64_t x304 = 7964LLU;
	static volatile int32_t t71 = 40755;

    t71 = (x301>((x302%x303)-x304));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x305 = INT16_MIN;
	static uint8_t x306 = 1U;
	volatile int8_t x307 = 15;
	volatile int16_t x308 = -1;
	int32_t t72 = 178909978;

    t72 = (x305>((x306%x307)-x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x309 = INT16_MIN;
	int8_t x311 = 3;
	int64_t x312 = -1LL;

    t73 = (x309>((x310%x311)-x312));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x313 = INT32_MIN;
	static uint8_t x314 = 1U;
	uint64_t x315 = 22LLU;
	volatile int32_t t74 = 0;

    t74 = (x313>((x314%x315)-x316));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = 50;
	static int8_t x318 = 62;
	static int16_t x319 = -1;
	volatile int32_t t75 = -173;

    t75 = (x317>((x318%x319)-x320));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = -1LL;
	int8_t x323 = -20;
	int8_t x324 = -1;
	int32_t t76 = -21120;

    t76 = (x321>((x322%x323)-x324));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x329 = INT16_MAX;
	int32_t x331 = INT32_MAX;
	volatile int8_t x332 = -3;
	int32_t t77 = -18;

    t77 = (x329>((x330%x331)-x332));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x333 = -1;
	uint64_t x334 = 1429255675507LLU;
	volatile uint8_t x335 = 55U;
	static uint64_t x336 = 656341103720721LLU;
	int32_t t78 = 2179;

    t78 = (x333>((x334%x335)-x336));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	int8_t x343 = 30;
	int32_t t79 = 195;

    t79 = (x341>((x342%x343)-x344));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x346 = 0;
	uint16_t x348 = 56U;
	static int32_t t80 = -356578;

    t80 = (x345>((x346%x347)-x348));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x349 = 36712858U;
	static int64_t x350 = INT64_MAX;
	volatile int16_t x351 = INT16_MAX;
	volatile uint8_t x352 = UINT8_MAX;

    t81 = (x349>((x350%x351)-x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x354 = UINT32_MAX;
	uint8_t x355 = UINT8_MAX;
	volatile uint16_t x356 = 18U;
	volatile int32_t t82 = 1;

    t82 = (x353>((x354%x355)-x356));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x357 = 64350778258323741LL;
	uint64_t x358 = UINT64_MAX;
	uint8_t x359 = 3U;
	uint64_t x360 = 1606LLU;
	volatile int32_t t83 = -14868275;

    t83 = (x357>((x358%x359)-x360));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x361 = 8;
	int64_t x362 = INT64_MIN;
	uint8_t x364 = UINT8_MAX;
	static int32_t t84 = -1;

    t84 = (x361>((x362%x363)-x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x366 = INT64_MAX;
	static int16_t x367 = -1;
	volatile int8_t x368 = -1;
	volatile int32_t t85 = 372;

    t85 = (x365>((x366%x367)-x368));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x369 = INT64_MIN;
	int32_t x371 = INT32_MIN;
	static uint16_t x372 = UINT16_MAX;
	volatile int32_t t86 = 23122678;

    t86 = (x369>((x370%x371)-x372));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x373 = INT8_MIN;
	uint64_t x374 = 43955938137151LLU;
	static volatile int32_t x375 = -3659398;
	static int8_t x376 = INT8_MAX;
	volatile int32_t t87 = 4;

    t87 = (x373>((x374%x375)-x376));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x377 = INT64_MIN;
	uint8_t x378 = UINT8_MAX;
	int32_t x379 = 1;
	static volatile int64_t x380 = -1LL;

    t88 = (x377>((x378%x379)-x380));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x383 = -1;
	volatile int8_t x384 = INT8_MIN;
	volatile int32_t t89 = 177;

    t89 = (x381>((x382%x383)-x384));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x386 = 6;
	uint32_t x387 = 421116U;
	volatile uint32_t x388 = 29492982U;
	static volatile int32_t t90 = -8873267;

    t90 = (x385>((x386%x387)-x388));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x389 = INT64_MAX;
	volatile int32_t x391 = 14;
	static uint16_t x392 = 3085U;

    t91 = (x389>((x390%x391)-x392));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x393 = INT8_MIN;
	int32_t x395 = -1;
	volatile int16_t x396 = INT16_MIN;

    t92 = (x393>((x394%x395)-x396));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x397 = INT32_MAX;
	int16_t x398 = INT16_MIN;
	static volatile int8_t x399 = -14;
	uint8_t x400 = 39U;

    t93 = (x397>((x398%x399)-x400));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x401 = INT32_MAX;
	static int32_t x402 = INT32_MAX;
	int64_t x403 = INT64_MIN;
	static uint8_t x404 = 63U;
	static int32_t t94 = 80729176;

    t94 = (x401>((x402%x403)-x404));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x405 = INT32_MIN;
	int64_t x406 = 901407LL;
	volatile int64_t x407 = -1LL;
	int64_t x408 = 3440703357LL;
	static int32_t t95 = 423696751;

    t95 = (x405>((x406%x407)-x408));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x409 = 0U;
	int64_t x411 = INT64_MIN;
	static int8_t x412 = INT8_MIN;
	volatile int32_t t96 = 3907235;

    t96 = (x409>((x410%x411)-x412));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x413 = UINT16_MAX;
	uint16_t x414 = UINT16_MAX;
	static uint64_t x416 = UINT64_MAX;

    t97 = (x413>((x414%x415)-x416));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x418 = INT64_MIN;
	int32_t x420 = -1;
	int32_t t98 = 8311279;

    t98 = (x417>((x418%x419)-x420));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x422 = -273;
	int16_t x423 = 459;
	static volatile int16_t x424 = INT16_MAX;
	volatile int32_t t99 = 47477878;

    t99 = (x421>((x422%x423)-x424));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x425 = -286698;
	static int64_t x426 = 16LL;
	static uint16_t x428 = 13439U;
	volatile int32_t t100 = 2;

    t100 = (x425>((x426%x427)-x428));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x430 = -1;
	int8_t x431 = INT8_MIN;
	uint32_t x432 = 43993U;
	static volatile int32_t t101 = -3999;

    t101 = (x429>((x430%x431)-x432));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x437 = UINT16_MAX;
	int8_t x438 = INT8_MIN;
	int32_t x439 = -298;
	int8_t x440 = INT8_MAX;
	int32_t t102 = -727;

    t102 = (x437>((x438%x439)-x440));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x441 = 95;
	uint64_t x442 = UINT64_MAX;
	int32_t x444 = -1;
	volatile int32_t t103 = 264426518;

    t103 = (x441>((x442%x443)-x444));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x445 = INT32_MAX;
	uint64_t x446 = UINT64_MAX;
	volatile int16_t x447 = INT16_MIN;
	int8_t x448 = -14;

    t104 = (x445>((x446%x447)-x448));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x449 = -1LL;
	static uint16_t x451 = 10U;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t105 = -3531;

    t105 = (x449>((x450%x451)-x452));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x453 = INT8_MIN;
	static int16_t x454 = -4;
	volatile uint16_t x455 = 8U;
	static volatile int32_t t106 = -11;

    t106 = (x453>((x454%x455)-x456));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x457 = 15U;
	uint16_t x459 = 32U;
	uint64_t x460 = 1062352088705LLU;
	volatile int32_t t107 = -69;

    t107 = (x457>((x458%x459)-x460));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x461 = 26U;
	int32_t x462 = -25997;
	int16_t x463 = INT16_MIN;
	volatile int16_t x464 = INT16_MIN;
	volatile int32_t t108 = -5753;

    t108 = (x461>((x462%x463)-x464));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x465 = INT16_MIN;
	int32_t x466 = INT32_MIN;
	uint8_t x467 = UINT8_MAX;
	volatile int32_t t109 = -3566;

    t109 = (x465>((x466%x467)-x468));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x469 = -10;
	static int8_t x471 = -1;
	int16_t x472 = -1;
	int32_t t110 = -45837;

    t110 = (x469>((x470%x471)-x472));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x473 = INT32_MAX;
	int32_t x474 = INT32_MAX;
	volatile int16_t x476 = INT16_MIN;
	static volatile int32_t t111 = -945727;

    t111 = (x473>((x474%x475)-x476));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x477 = UINT8_MAX;
	static uint8_t x478 = 13U;
	volatile uint64_t x479 = UINT64_MAX;
	volatile uint64_t x480 = UINT64_MAX;

    t112 = (x477>((x478%x479)-x480));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x481 = INT16_MIN;
	int8_t x482 = -11;
	static int16_t x483 = INT16_MIN;
	volatile int16_t x484 = INT16_MIN;
	int32_t t113 = 43385672;

    t113 = (x481>((x482%x483)-x484));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x485 = UINT64_MAX;
	int8_t x486 = 1;
	int16_t x487 = -1;
	volatile int32_t t114 = 28389;

    t114 = (x485>((x486%x487)-x488));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x489 = 0LLU;
	uint32_t x490 = 60038605U;
	volatile int8_t x491 = INT8_MIN;
	uint64_t x492 = 22222160LLU;

    t115 = (x489>((x490%x491)-x492));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x493 = -242;
	static uint8_t x494 = 8U;
	int16_t x495 = -433;
	volatile int8_t x496 = -1;
	static volatile int32_t t116 = 51483;

    t116 = (x493>((x494%x495)-x496));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x497 = INT16_MIN;
	int32_t x500 = INT32_MIN;
	int32_t t117 = -1921;

    t117 = (x497>((x498%x499)-x500));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x501 = INT16_MIN;
	int16_t x502 = INT16_MAX;
	int64_t x503 = INT64_MIN;
	int32_t x504 = INT32_MIN;
	static volatile int32_t t118 = -46;

    t118 = (x501>((x502%x503)-x504));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x505 = 1866596LL;
	int16_t x506 = 21;
	volatile int32_t x507 = 42907;
	uint16_t x508 = UINT16_MAX;

    t119 = (x505>((x506%x507)-x508));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x510 = 181653222508773LLU;
	uint16_t x511 = 216U;
	int8_t x512 = INT8_MIN;

    t120 = (x509>((x510%x511)-x512));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x514 = -1;
	static int8_t x515 = -1;
	volatile int8_t x516 = INT8_MIN;
	int32_t t121 = 961288;

    t121 = (x513>((x514%x515)-x516));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x518 = 68;
	int32_t t122 = -5561400;

    t122 = (x517>((x518%x519)-x520));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x521 = INT8_MAX;
	uint64_t x522 = 15906LLU;
	int16_t x523 = INT16_MAX;
	static int8_t x524 = INT8_MIN;
	static int32_t t123 = 34406;

    t123 = (x521>((x522%x523)-x524));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x525 = 0;
	int32_t x526 = INT32_MIN;
	int8_t x527 = 3;
	int32_t x528 = -68;
	int32_t t124 = -79332;

    t124 = (x525>((x526%x527)-x528));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x533 = 8943;
	uint16_t x534 = 3U;
	int64_t x535 = 4LL;

    t125 = (x533>((x534%x535)-x536));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x541 = 76U;
	int64_t x543 = -147LL;
	int8_t x544 = 61;
	volatile int32_t t126 = -26424;

    t126 = (x541>((x542%x543)-x544));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x546 = 36U;
	int16_t x547 = -5;
	volatile int8_t x548 = 21;

    t127 = (x545>((x546%x547)-x548));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x549 = 41;
	int32_t x550 = INT32_MIN;
	uint64_t x551 = UINT64_MAX;
	int32_t x552 = -1;

    t128 = (x549>((x550%x551)-x552));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x553 = -1;
	volatile uint32_t x554 = UINT32_MAX;
	uint16_t x555 = UINT16_MAX;
	uint64_t x556 = 312513392LLU;

    t129 = (x553>((x554%x555)-x556));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x558 = 2U;
	static uint16_t x559 = 186U;
	static int32_t x560 = -1;
	int32_t t130 = 26;

    t130 = (x557>((x558%x559)-x560));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x567 = INT64_MIN;
	volatile int32_t t131 = -2603953;

    t131 = (x565>((x566%x567)-x568));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x570 = UINT32_MAX;
	int32_t x572 = 49456;
	int32_t t132 = -120;

    t132 = (x569>((x570%x571)-x572));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x573 = INT32_MIN;
	uint16_t x574 = UINT16_MAX;
	static uint8_t x575 = 92U;
	uint64_t x576 = UINT64_MAX;
	int32_t t133 = -775037221;

    t133 = (x573>((x574%x575)-x576));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x577 = 107U;
	int64_t x578 = INT64_MIN;
	int32_t x579 = INT32_MIN;
	uint8_t x580 = UINT8_MAX;

    t134 = (x577>((x578%x579)-x580));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x581 = INT8_MAX;
	int64_t x582 = -77060LL;
	int8_t x583 = INT8_MAX;
	uint32_t x584 = UINT32_MAX;

    t135 = (x581>((x582%x583)-x584));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x585 = INT16_MIN;
	volatile int32_t x586 = -1;
	static uint8_t x587 = 48U;
	volatile uint32_t x588 = 3U;
	int32_t t136 = -7108;

    t136 = (x585>((x586%x587)-x588));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x589 = INT8_MIN;
	uint8_t x591 = 2U;
	volatile int32_t t137 = -693380;

    t137 = (x589>((x590%x591)-x592));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x593 = INT16_MAX;
	volatile int16_t x594 = 3141;
	uint32_t x595 = UINT32_MAX;
	uint8_t x596 = 105U;
	volatile int32_t t138 = -33801095;

    t138 = (x593>((x594%x595)-x596));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x597 = INT8_MAX;
	uint64_t x598 = 2931LLU;
	volatile int32_t x599 = INT32_MIN;
	volatile int16_t x600 = -1;
	volatile int32_t t139 = 1243081;

    t139 = (x597>((x598%x599)-x600));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x601 = 30446952675323LLU;
	uint64_t x602 = 749LLU;
	uint8_t x603 = UINT8_MAX;
	static uint32_t x604 = 1476305574U;
	volatile int32_t t140 = 353867;

    t140 = (x601>((x602%x603)-x604));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x605 = INT64_MIN;
	volatile int16_t x607 = INT16_MAX;
	int8_t x608 = INT8_MAX;
	static int32_t t141 = 1594;

    t141 = (x605>((x606%x607)-x608));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x609 = INT16_MIN;
	uint32_t x610 = 1461899U;
	volatile int16_t x611 = INT16_MAX;

    t142 = (x609>((x610%x611)-x612));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x613 = INT32_MIN;
	int32_t x615 = INT32_MIN;
	volatile int32_t t143 = 213;

    t143 = (x613>((x614%x615)-x616));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x617 = UINT32_MAX;
	uint32_t x618 = 7U;
	volatile int8_t x619 = INT8_MIN;
	int16_t x620 = -155;

    t144 = (x617>((x618%x619)-x620));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x621 = INT16_MIN;
	int32_t x622 = 0;
	int32_t x624 = -1;
	int32_t t145 = -134510;

    t145 = (x621>((x622%x623)-x624));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x626 = -1LL;
	static int8_t x627 = INT8_MAX;
	static int64_t x628 = 19LL;
	int32_t t146 = -145181251;

    t146 = (x625>((x626%x627)-x628));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x629 = 3;
	uint32_t x630 = UINT32_MAX;
	uint16_t x631 = UINT16_MAX;
	int32_t x632 = 402;
	static int32_t t147 = 1;

    t147 = (x629>((x630%x631)-x632));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x633 = UINT32_MAX;
	volatile int16_t x634 = -1;
	int32_t x635 = INT32_MIN;
	uint8_t x636 = 5U;
	int32_t t148 = 268;

    t148 = (x633>((x634%x635)-x636));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x637 = UINT8_MAX;
	int8_t x638 = INT8_MAX;
	uint8_t x639 = UINT8_MAX;
	uint8_t x640 = 7U;
	volatile int32_t t149 = -613749;

    t149 = (x637>((x638%x639)-x640));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x642 = -1LL;
	volatile int16_t x643 = INT16_MIN;
	static uint32_t x644 = 124146U;

    t150 = (x641>((x642%x643)-x644));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile int64_t x646 = INT64_MAX;
	uint32_t x648 = 7603U;

    t151 = (x645>((x646%x647)-x648));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x649 = 56589695LLU;
	int16_t x650 = INT16_MIN;
	volatile int16_t x651 = 7;
	int32_t x652 = -1;
	int32_t t152 = 224060;

    t152 = (x649>((x650%x651)-x652));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x653 = 8661U;
	int64_t x655 = 1006806208617LL;
	int32_t t153 = 253939887;

    t153 = (x653>((x654%x655)-x656));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x657 = INT8_MAX;
	int32_t x659 = INT32_MIN;
	volatile int32_t x660 = -3;
	int32_t t154 = 1255992;

    t154 = (x657>((x658%x659)-x660));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x661 = -1871203LL;
	uint64_t x662 = 72233LLU;
	int8_t x663 = -11;
	int32_t x664 = INT32_MAX;
	int32_t t155 = -1064114298;

    t155 = (x661>((x662%x663)-x664));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x669 = 15U;
	int32_t x670 = -5280;
	uint32_t x671 = 745U;
	static uint64_t x672 = 8242742409357521708LLU;
	int32_t t156 = -7;

    t156 = (x669>((x670%x671)-x672));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x673 = INT8_MIN;
	static uint8_t x674 = 29U;
	volatile uint32_t x675 = 244U;
	static int16_t x676 = -1;

    t157 = (x673>((x674%x675)-x676));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x677 = INT32_MAX;
	static volatile int8_t x678 = -1;
	int8_t x679 = INT8_MIN;
	volatile uint64_t x680 = 3LLU;
	int32_t t158 = 130230216;

    t158 = (x677>((x678%x679)-x680));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x681 = INT8_MAX;
	static volatile uint32_t x682 = 65911699U;
	volatile int16_t x683 = INT16_MIN;
	int32_t t159 = -116906081;

    t159 = (x681>((x682%x683)-x684));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x686 = UINT16_MAX;
	int8_t x688 = INT8_MIN;
	volatile int32_t t160 = 1972980;

    t160 = (x685>((x686%x687)-x688));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x690 = UINT64_MAX;
	int16_t x691 = INT16_MIN;
	volatile uint8_t x692 = 0U;
	int32_t t161 = -1;

    t161 = (x689>((x690%x691)-x692));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x694 = 27;
	static int32_t x695 = 28;
	volatile int32_t t162 = -20916235;

    t162 = (x693>((x694%x695)-x696));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x697 = 256;
	int32_t x698 = INT32_MAX;
	static int8_t x699 = INT8_MIN;
	static int64_t x700 = -1LL;

    t163 = (x697>((x698%x699)-x700));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x701 = 5;
	volatile int16_t x702 = 5;
	volatile int32_t t164 = 760627917;

    t164 = (x701>((x702%x703)-x704));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x705 = -1;
	volatile uint16_t x706 = 116U;
	int16_t x708 = -2181;
	volatile int32_t t165 = -76517;

    t165 = (x705>((x706%x707)-x708));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x709 = INT32_MAX;
	volatile int64_t x710 = -24502142574188259LL;
	int32_t x712 = INT32_MIN;
	volatile int32_t t166 = 38;

    t166 = (x709>((x710%x711)-x712));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x713 = -353614LL;
	int16_t x714 = INT16_MAX;
	volatile uint16_t x715 = 375U;
	int16_t x716 = -68;
	int32_t t167 = 54116646;

    t167 = (x713>((x714%x715)-x716));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x717 = INT16_MIN;
	static volatile int64_t x718 = INT64_MAX;
	uint32_t x719 = 5U;
	volatile int32_t t168 = 306424485;

    t168 = (x717>((x718%x719)-x720));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x721 = 102987;
	static int32_t x723 = INT32_MIN;

    t169 = (x721>((x722%x723)-x724));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x725 = INT64_MIN;
	static uint64_t x726 = UINT64_MAX;
	int32_t t170 = 5064;

    t170 = (x725>((x726%x727)-x728));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x729 = -1LL;
	uint32_t x732 = 187U;
	int32_t t171 = -697;

    t171 = (x729>((x730%x731)-x732));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x734 = -1;
	int16_t x735 = -1;
	static int64_t x736 = 22954341656658927LL;
	int32_t t172 = 3309;

    t172 = (x733>((x734%x735)-x736));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x737 = INT16_MIN;
	int16_t x738 = INT16_MAX;
	int64_t x740 = -465507413550787LL;
	int32_t t173 = -1;

    t173 = (x737>((x738%x739)-x740));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x745 = -1;
	static uint32_t x746 = 9256130U;
	static int8_t x747 = INT8_MIN;
	static volatile int32_t t174 = -5129402;

    t174 = (x745>((x746%x747)-x748));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x749 = INT64_MAX;
	volatile uint32_t x750 = 29248064U;
	static int16_t x751 = INT16_MAX;
	int32_t x752 = INT32_MIN;
	int32_t t175 = 216;

    t175 = (x749>((x750%x751)-x752));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x753 = -45644260231278LL;
	int64_t x755 = -62778527159LL;
	int16_t x756 = INT16_MIN;
	int32_t t176 = -4;

    t176 = (x753>((x754%x755)-x756));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x757 = -1;
	uint64_t x758 = UINT64_MAX;
	int8_t x759 = INT8_MAX;
	volatile uint64_t x760 = 1363002956LLU;
	int32_t t177 = 263521417;

    t177 = (x757>((x758%x759)-x760));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x761 = UINT32_MAX;
	int32_t x762 = INT32_MIN;
	volatile int64_t x763 = -1LL;
	int16_t x764 = INT16_MIN;
	int32_t t178 = 642322;

    t178 = (x761>((x762%x763)-x764));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x767 = -11887;
	uint8_t x768 = UINT8_MAX;
	int32_t t179 = 10398;

    t179 = (x765>((x766%x767)-x768));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x769 = -1;
	int32_t x770 = INT32_MAX;
	static int16_t x771 = INT16_MIN;
	int32_t x772 = INT32_MAX;

    t180 = (x769>((x770%x771)-x772));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x773 = 1U;
	volatile int64_t x774 = INT64_MIN;
	int32_t x776 = INT32_MIN;
	int32_t t181 = -36;

    t181 = (x773>((x774%x775)-x776));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x777 = 1779023;
	int16_t x778 = -10;
	uint16_t x780 = 23U;
	volatile int32_t t182 = 601005332;

    t182 = (x777>((x778%x779)-x780));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x781 = INT8_MIN;
	volatile uint64_t x782 = 62LLU;
	volatile uint16_t x783 = 751U;
	volatile uint32_t x784 = 82383U;

    t183 = (x781>((x782%x783)-x784));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x785 = 0;
	static uint16_t x786 = UINT16_MAX;
	volatile int64_t x787 = -1LL;
	uint32_t x788 = 1066U;

    t184 = (x785>((x786%x787)-x788));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x789 = UINT8_MAX;
	static int8_t x791 = INT8_MIN;
	int32_t x792 = -3769303;
	int32_t t185 = -33068590;

    t185 = (x789>((x790%x791)-x792));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x793 = UINT32_MAX;
	uint16_t x794 = 14571U;
	int32_t x795 = INT32_MAX;
	int16_t x796 = INT16_MAX;
	int32_t t186 = -772;

    t186 = (x793>((x794%x795)-x796));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x798 = UINT64_MAX;
	volatile int64_t x799 = INT64_MIN;
	int32_t x800 = INT32_MIN;
	int32_t t187 = 70188;

    t187 = (x797>((x798%x799)-x800));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x802 = INT16_MAX;
	volatile uint64_t x803 = UINT64_MAX;
	int16_t x804 = -1;

    t188 = (x801>((x802%x803)-x804));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x805 = 161;
	int16_t x808 = INT16_MIN;
	int32_t t189 = -1825;

    t189 = (x805>((x806%x807)-x808));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x809 = 9U;
	int16_t x812 = -939;
	volatile int32_t t190 = -79;

    t190 = (x809>((x810%x811)-x812));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x813 = -1;
	int32_t x814 = INT32_MIN;
	static int64_t x815 = 166132403956860LL;
	int32_t x816 = INT32_MIN;
	static int32_t t191 = 17813035;

    t191 = (x813>((x814%x815)-x816));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x817 = UINT32_MAX;
	static int32_t x818 = INT32_MIN;
	volatile int32_t x819 = INT32_MIN;
	uint16_t x820 = UINT16_MAX;

    t192 = (x817>((x818%x819)-x820));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x821 = INT16_MIN;
	int32_t x823 = 13;
	volatile int32_t t193 = 181797776;

    t193 = (x821>((x822%x823)-x824));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x825 = -424;
	volatile int16_t x826 = INT16_MIN;
	static uint64_t x827 = UINT64_MAX;
	static volatile int32_t x828 = -192818829;
	int32_t t194 = 4129705;

    t194 = (x825>((x826%x827)-x828));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x829 = INT8_MIN;
	static int32_t x831 = INT32_MIN;
	volatile int32_t t195 = 130461788;

    t195 = (x829>((x830%x831)-x832));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x833 = 1629649435326334LLU;
	int8_t x834 = INT8_MIN;
	int16_t x835 = -1;
	volatile uint8_t x836 = 4U;
	int32_t t196 = -9;

    t196 = (x833>((x834%x835)-x836));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x837 = INT8_MIN;
	uint16_t x838 = 404U;
	uint64_t x839 = 26LLU;
	int64_t x840 = INT64_MAX;
	volatile int32_t t197 = -552;

    t197 = (x837>((x838%x839)-x840));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x841 = -36;
	int8_t x842 = INT8_MAX;
	volatile int32_t t198 = -2797;

    t198 = (x841>((x842%x843)-x844));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x845 = -44;
	uint8_t x846 = UINT8_MAX;
	volatile int32_t t199 = 23;

    t199 = (x845>((x846%x847)-x848));

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

