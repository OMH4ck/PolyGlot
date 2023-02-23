
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

int8_t x1 = INT8_MAX;
volatile int16_t x7 = -1;
int8_t x10 = 1;
static volatile int32_t x11 = INT32_MAX;
static int32_t x12 = INT32_MIN;
int32_t x16 = INT32_MIN;
uint8_t x20 = 17U;
static int16_t x35 = -3;
uint8_t x48 = 43U;
static int16_t x49 = INT16_MIN;
volatile int32_t t12 = 97174012;
int32_t x54 = -1;
int32_t t13 = -511;
int8_t x59 = -32;
static volatile int32_t t14 = 303990;
int32_t x61 = -1;
int32_t x63 = 2295;
uint32_t x65 = 60215U;
int64_t x66 = -1LL;
static int32_t x68 = -141081;
volatile int16_t x81 = INT16_MIN;
int32_t t19 = -546;
volatile int16_t x91 = 1;
int8_t x94 = -1;
volatile int32_t t23 = 1378;
int8_t x107 = 2;
static volatile int32_t t25 = -67749309;
int8_t x112 = INT8_MIN;
int32_t t26 = -1;
int16_t x124 = 3895;
uint64_t x126 = UINT64_MAX;
uint64_t x127 = 270LLU;
int8_t x129 = INT8_MAX;
int16_t x130 = -1;
uint64_t x131 = 93597771978866LLU;
static volatile int32_t t31 = 549306070;
int32_t t32 = -172;
int8_t x137 = -2;
static int16_t x146 = 9591;
int64_t x147 = -1LL;
int32_t t36 = -7;
static int8_t x156 = -1;
static volatile int8_t x157 = INT8_MIN;
uint8_t x159 = UINT8_MAX;
volatile int32_t t39 = -1289477;
volatile uint8_t x170 = 22U;
int32_t t41 = 382335;
static int64_t x179 = -2168LL;
int8_t x181 = INT8_MAX;
volatile int8_t x195 = -1;
int64_t x198 = -201093094LL;
int16_t x202 = 8418;
uint16_t x209 = UINT16_MAX;
uint16_t x210 = 0U;
static volatile int32_t t50 = -1457;
volatile int32_t t51 = -5;
volatile int32_t x220 = INT32_MAX;
volatile int64_t x224 = -1LL;
int16_t x225 = 2136;
volatile int8_t x230 = 0;
int8_t x238 = -1;
int8_t x243 = -2;
uint16_t x247 = UINT16_MAX;
int32_t t59 = -193736;
int8_t x254 = INT8_MIN;
volatile int32_t x262 = -1;
int16_t x264 = INT16_MIN;
uint16_t x268 = 22046U;
uint16_t x273 = 41U;
volatile int32_t t67 = -4182371;
int16_t x283 = 20;
static int16_t x284 = INT16_MIN;
int32_t x285 = INT32_MIN;
uint64_t x291 = 792109LLU;
volatile uint32_t x293 = 336U;
int16_t x294 = -13139;
static uint64_t x298 = 6210749350538LLU;
int16_t x300 = INT16_MAX;
int8_t x304 = -1;
int64_t x307 = 68185849962LL;
uint16_t x308 = UINT16_MAX;
volatile int16_t x310 = -1;
uint32_t x315 = 204U;
int32_t t78 = 517;
uint8_t x325 = 34U;
int8_t x332 = INT8_MAX;
uint16_t x335 = 42U;
int64_t x340 = -8790627832928LL;
uint32_t x341 = UINT32_MAX;
int64_t x342 = -1LL;
uint32_t x348 = 4U;
static uint16_t x350 = UINT16_MAX;
uint64_t x353 = UINT64_MAX;
uint8_t x356 = 1U;
volatile int32_t t86 = -10371;
int8_t x357 = 0;
volatile int32_t t87 = -12068349;
int16_t x363 = 6719;
static int64_t x371 = 329LL;
int32_t t91 = 9;
static int32_t x383 = 101936;
uint32_t x384 = 125U;
static int32_t t92 = 4156678;
int32_t x386 = -503400700;
volatile int32_t x388 = INT32_MIN;
int64_t x390 = 193LL;
volatile int32_t t94 = 25;
int64_t x393 = -1LL;
volatile int32_t t95 = -52;
uint64_t x398 = UINT64_MAX;
volatile int32_t t99 = -35177923;
volatile int32_t t100 = -82;
volatile int16_t x425 = -1;
static uint32_t x426 = 1486182U;
int32_t x437 = INT32_MAX;
int16_t x439 = -1;
int64_t x446 = 50016463941LL;
int8_t x448 = INT8_MAX;
uint8_t x452 = 29U;
int32_t t107 = -321730;
int8_t x453 = INT8_MIN;
int32_t t108 = 898514496;
uint64_t x457 = UINT64_MAX;
int32_t t111 = -58;
int8_t x469 = INT8_MIN;
volatile int16_t x470 = INT16_MIN;
volatile int64_t x471 = INT64_MAX;
int64_t x473 = -1507155743528243LL;
int8_t x476 = INT8_MIN;
static uint32_t x480 = 6869358U;
int16_t x482 = INT16_MAX;
int32_t t115 = -1;
int32_t t116 = -1;
uint32_t x492 = UINT32_MAX;
volatile int64_t x494 = INT64_MIN;
int8_t x496 = 1;
int16_t x503 = -1701;
volatile uint32_t x516 = 35U;
static int16_t x518 = -1;
int16_t x529 = -1;
int32_t x531 = INT32_MIN;
int64_t x540 = INT64_MIN;
int32_t t128 = -32935;
int8_t x543 = INT8_MIN;
int64_t x544 = 333LL;
uint32_t x553 = 3U;
uint8_t x554 = UINT8_MAX;
volatile uint16_t x556 = 606U;
static int64_t x564 = -1LL;
static int32_t x566 = -1;
int16_t x571 = INT16_MIN;
int16_t x573 = INT16_MAX;
int16_t x577 = 1868;
volatile int16_t x581 = -72;
volatile int32_t t138 = 201392;
uint16_t x600 = 746U;
uint32_t x601 = UINT32_MAX;
volatile int8_t x604 = INT8_MAX;
int16_t x607 = INT16_MIN;
static uint16_t x613 = 49U;
uint8_t x615 = 18U;
uint16_t x616 = 464U;
volatile int32_t x617 = -217378139;
int64_t x620 = INT64_MIN;
int64_t x621 = INT64_MAX;
static volatile uint32_t x627 = UINT32_MAX;
int32_t x630 = -3560178;
int64_t x631 = INT64_MAX;
static uint8_t x635 = UINT8_MAX;
int32_t x636 = INT32_MIN;
int32_t t152 = -96437;
uint32_t x647 = UINT32_MAX;
uint32_t x656 = 64346561U;
volatile int32_t x659 = -1;
int8_t x662 = 1;
int32_t t158 = -18;
int32_t t160 = -109295480;
volatile int8_t x678 = -1;
int64_t x682 = -1LL;
uint8_t x690 = 7U;
int32_t t165 = -136;
volatile uint64_t x719 = UINT64_MAX;
static int32_t t169 = 24761351;
volatile int32_t t170 = 1042865;
int32_t x727 = 112349;
int8_t x732 = 26;
uint16_t x734 = 10473U;
uint32_t x737 = UINT32_MAX;
static int32_t x743 = INT32_MIN;
uint8_t x746 = 1U;
static volatile uint32_t x757 = 4803118U;
int64_t x758 = 32LL;
int64_t x759 = INT64_MIN;
uint32_t x763 = 2U;
int8_t x764 = INT8_MIN;
static int64_t x765 = -294551085LL;
int32_t t182 = 966;
int32_t x782 = -454037;
volatile int8_t x793 = 50;
volatile int32_t t188 = -1078;
static int8_t x799 = INT8_MAX;
static volatile int32_t t189 = 1410189;
static int32_t t191 = 291192;
int64_t x819 = -1LL;
int32_t x822 = INT32_MIN;
static uint32_t x829 = 2398U;
static int8_t x836 = INT8_MAX;


void f0(void) {
    	volatile uint16_t x2 = 121U;
	static uint32_t x3 = UINT32_MAX;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = 24;

    t0 = (x1==((x2/x3)%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	static int64_t x6 = -1LL;
	uint32_t x8 = 1619U;
	int32_t t1 = -15814;

    t1 = (x5==((x6/x7)%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int32_t t2 = 45157687;

    t2 = (x9==((x10/x11)%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 30U;
	uint16_t x14 = 22972U;
	int64_t x15 = INT64_MIN;
	int32_t t3 = 526;

    t3 = (x13==((x14/x15)%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = 2131442135LLU;
	static volatile uint64_t x18 = 493628820807931977LLU;
	int64_t x19 = -5176514680818777LL;
	static int32_t t4 = -49;

    t4 = (x17==((x18/x19)%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	uint8_t x22 = 0U;
	int64_t x23 = -1857614221026LL;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = -56789347;

    t5 = (x21==((x22/x23)%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = 2U;
	uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MIN;
	uint8_t x28 = 123U;
	int32_t t6 = -4;

    t6 = (x25==((x26/x27)%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	int32_t x30 = INT32_MIN;
	static uint64_t x31 = 6LLU;
	uint64_t x32 = 21089777157803494LLU;
	int32_t t7 = 0;

    t7 = (x29==((x30/x31)%x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	volatile int8_t x34 = INT8_MIN;
	int64_t x36 = -9354938LL;
	volatile int32_t t8 = 24778033;

    t8 = (x33==((x34/x35)%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -1;
	static uint16_t x38 = UINT16_MAX;
	uint16_t x39 = UINT16_MAX;
	int32_t x40 = -1;
	volatile int32_t t9 = -9324;

    t9 = (x37==((x38/x39)%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 0U;
	int64_t x42 = INT64_MIN;
	static uint16_t x43 = 28U;
	uint8_t x44 = 15U;
	volatile int32_t t10 = -13;

    t10 = (x41==((x42/x43)%x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MAX;
	static int32_t x47 = -1;
	int32_t t11 = 7;

    t11 = (x45==((x46/x47)%x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = -1;
	int16_t x51 = 5796;
	int8_t x52 = -1;

    t12 = (x49==((x50/x51)%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	static volatile uint64_t x55 = 239306325450144LLU;
	int32_t x56 = INT32_MIN;

    t13 = (x53==((x54/x55)%x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -3391592800035590728LL;
	volatile int64_t x58 = INT64_MIN;
	int64_t x60 = INT64_MIN;

    t14 = (x57==((x58/x59)%x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x62 = UINT64_MAX;
	static int32_t x64 = INT32_MAX;
	int32_t t15 = 16;

    t15 = (x61==((x62/x63)%x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x67 = UINT32_MAX;
	volatile int32_t t16 = -993;

    t16 = (x65==((x66/x67)%x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	static uint8_t x70 = UINT8_MAX;
	int32_t x71 = -209587775;
	int16_t x72 = 1;
	volatile int32_t t17 = 1447802;

    t17 = (x69==((x70/x71)%x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	int8_t x74 = 0;
	static int8_t x75 = INT8_MIN;
	volatile int16_t x76 = INT16_MAX;
	static volatile int32_t t18 = 3621;

    t18 = (x73==((x74/x75)%x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x82 = 1U;
	int32_t x83 = INT32_MIN;
	uint16_t x84 = UINT16_MAX;

    t19 = (x81==((x82/x83)%x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	int16_t x87 = INT16_MIN;
	int64_t x88 = -1LL;
	volatile int32_t t20 = 1;

    t20 = (x85==((x86/x87)%x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = UINT16_MAX;
	int32_t x90 = INT32_MIN;
	int64_t x92 = INT64_MIN;
	volatile int32_t t21 = 0;

    t21 = (x89==((x90/x91)%x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -5;
	uint16_t x95 = 2409U;
	volatile int16_t x96 = -2;
	int32_t t22 = 518324805;

    t22 = (x93==((x94/x95)%x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x97 = -1087;
	int16_t x98 = INT16_MIN;
	static uint64_t x99 = 1LLU;
	int32_t x100 = -259802188;

    t23 = (x97==((x98/x99)%x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -1;
	static volatile int32_t x102 = 1;
	volatile uint32_t x103 = 8481U;
	uint32_t x104 = 1502973874U;
	volatile int32_t t24 = -3163155;

    t24 = (x101==((x102/x103)%x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x105 = INT32_MAX;
	int32_t x106 = INT32_MIN;
	int64_t x108 = INT64_MIN;

    t25 = (x105==((x106/x107)%x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x109 = 0;
	int32_t x110 = -36775659;
	int8_t x111 = INT8_MIN;

    t26 = (x109==((x110/x111)%x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = 26U;
	int32_t x114 = INT32_MIN;
	static volatile uint64_t x115 = UINT64_MAX;
	int64_t x116 = 1929201LL;
	static int32_t t27 = -14;

    t27 = (x113==((x114/x115)%x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -3;
	static uint32_t x118 = 8387764U;
	int32_t x119 = INT32_MIN;
	int8_t x120 = -1;
	static volatile int32_t t28 = 66116024;

    t28 = (x117==((x118/x119)%x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MIN;
	static uint8_t x122 = 95U;
	volatile uint32_t x123 = 50U;
	int32_t t29 = -81448;

    t29 = (x121==((x122/x123)%x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = 28;
	uint32_t x128 = 47U;
	volatile int32_t t30 = 5940871;

    t30 = (x125==((x126/x127)%x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x132 = 6005U;

    t31 = (x129==((x130/x131)%x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MAX;
	uint32_t x136 = 484384857U;

    t32 = (x133==((x134/x135)%x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x138 = INT32_MIN;
	uint64_t x139 = 8LLU;
	uint8_t x140 = 13U;
	static int32_t t33 = 23442720;

    t33 = (x137==((x138/x139)%x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	int32_t x143 = INT32_MAX;
	static volatile int64_t x144 = -1LL;
	static volatile int32_t t34 = 1027;

    t34 = (x141==((x142/x143)%x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = INT8_MIN;
	static int64_t x148 = INT64_MIN;
	volatile int32_t t35 = -47883416;

    t35 = (x145==((x146/x147)%x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = -21;
	uint16_t x150 = 1444U;
	int16_t x151 = INT16_MAX;
	uint64_t x152 = 1828432514966LLU;

    t36 = (x149==((x150/x151)%x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = -1;
	int16_t x155 = INT16_MAX;
	volatile int32_t t37 = -172309;

    t37 = (x153==((x154/x155)%x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x158 = 7;
	volatile uint16_t x160 = UINT16_MAX;
	int32_t t38 = -477;

    t38 = (x157==((x158/x159)%x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = 18U;
	uint64_t x162 = 7144139778LLU;
	volatile uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 5964U;

    t39 = (x161==((x162/x163)%x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x165 = UINT32_MAX;
	int16_t x166 = -1;
	uint16_t x167 = 5U;
	uint64_t x168 = 10190965257704LLU;
	volatile int32_t t40 = 7649;

    t40 = (x165==((x166/x167)%x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = INT16_MAX;
	int8_t x171 = -35;
	int16_t x172 = INT16_MIN;

    t41 = (x169==((x170/x171)%x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x173 = UINT32_MAX;
	static int8_t x174 = 0;
	volatile int16_t x175 = INT16_MAX;
	volatile int16_t x176 = -1;
	volatile int32_t t42 = 5;

    t42 = (x173==((x174/x175)%x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = INT8_MAX;
	static volatile int64_t x178 = INT64_MIN;
	int64_t x180 = -1LL;
	static volatile int32_t t43 = 974249;

    t43 = (x177==((x178/x179)%x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x182 = INT32_MIN;
	uint8_t x183 = UINT8_MAX;
	static volatile uint16_t x184 = UINT16_MAX;
	volatile int32_t t44 = -410237;

    t44 = (x181==((x182/x183)%x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x189 = -4;
	int8_t x190 = -11;
	static int32_t x191 = 121;
	int16_t x192 = -2877;
	static int32_t t45 = 1037;

    t45 = (x189==((x190/x191)%x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x193 = 127U;
	int16_t x194 = -1;
	int16_t x196 = -10110;
	volatile int32_t t46 = 0;

    t46 = (x193==((x194/x195)%x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MIN;
	uint8_t x199 = 19U;
	int16_t x200 = -5995;
	volatile int32_t t47 = 49;

    t47 = (x197==((x198/x199)%x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = -1;
	int8_t x203 = -1;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t48 = -449977;

    t48 = (x201==((x202/x203)%x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x205 = 48987427485429081LLU;
	int64_t x206 = INT64_MAX;
	static uint32_t x207 = 11503786U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t49 = -3671151;

    t49 = (x205==((x206/x207)%x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x211 = 6U;
	int16_t x212 = 62;

    t50 = (x209==((x210/x211)%x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x213 = 28;
	volatile uint8_t x214 = 11U;
	int32_t x215 = -1;
	volatile int8_t x216 = INT8_MIN;

    t51 = (x213==((x214/x215)%x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = INT8_MIN;
	volatile int32_t x218 = -202;
	int32_t x219 = -478;
	volatile int32_t t52 = -64410;

    t52 = (x217==((x218/x219)%x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x221 = INT32_MAX;
	int32_t x222 = -1;
	int8_t x223 = INT8_MAX;
	int32_t t53 = 258;

    t53 = (x221==((x222/x223)%x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x226 = -1;
	int32_t x227 = 2;
	int32_t x228 = -52;
	volatile int32_t t54 = 10811;

    t54 = (x225==((x226/x227)%x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = INT16_MIN;
	volatile int32_t x231 = -1;
	uint32_t x232 = 23209497U;
	static int32_t t55 = -157067;

    t55 = (x229==((x230/x231)%x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x233 = -1;
	volatile uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t56 = -13699;

    t56 = (x233==((x234/x235)%x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x237 = -97509949LL;
	int64_t x239 = -69717117211157LL;
	volatile int64_t x240 = INT64_MIN;
	volatile int32_t t57 = 694564362;

    t57 = (x237==((x238/x239)%x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = 23;
	int16_t x242 = -112;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t58 = 3;

    t58 = (x241==((x242/x243)%x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = -103630;
	int8_t x246 = -1;
	int32_t x248 = INT32_MIN;

    t59 = (x245==((x246/x247)%x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = 0;
	volatile uint8_t x250 = UINT8_MAX;
	uint8_t x251 = 12U;
	int16_t x252 = INT16_MIN;
	int32_t t60 = 668911;

    t60 = (x249==((x250/x251)%x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = -1;
	static volatile int16_t x255 = INT16_MIN;
	uint16_t x256 = 1U;
	int32_t t61 = -883;

    t61 = (x253==((x254/x255)%x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = -1;
	int64_t x258 = -216615031LL;
	int16_t x259 = -1;
	int16_t x260 = INT16_MAX;
	volatile int32_t t62 = 109085545;

    t62 = (x257==((x258/x259)%x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x261 = INT8_MAX;
	volatile int8_t x263 = INT8_MIN;
	volatile int32_t t63 = -84014;

    t63 = (x261==((x262/x263)%x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x265 = 2046U;
	int64_t x266 = -1LL;
	int8_t x267 = INT8_MIN;
	volatile int32_t t64 = -858224;

    t64 = (x265==((x266/x267)%x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = -51297LL;
	uint32_t x270 = UINT32_MAX;
	int32_t x271 = INT32_MIN;
	uint16_t x272 = 25U;
	int32_t t65 = -489710;

    t65 = (x269==((x270/x271)%x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x274 = 28U;
	volatile int16_t x275 = 358;
	int32_t x276 = -12319305;
	static int32_t t66 = -15783;

    t66 = (x273==((x274/x275)%x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = INT8_MIN;
	uint32_t x278 = 865846487U;
	int8_t x279 = -1;
	uint16_t x280 = 1751U;

    t67 = (x277==((x278/x279)%x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = -1LL;
	int8_t x282 = -16;
	int32_t t68 = -4;

    t68 = (x281==((x282/x283)%x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x286 = 5U;
	volatile uint64_t x287 = 13LLU;
	int64_t x288 = -1504697037938898LL;
	int32_t t69 = -27;

    t69 = (x285==((x286/x287)%x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = INT16_MIN;
	volatile int16_t x290 = INT16_MIN;
	int8_t x292 = -1;
	volatile int32_t t70 = -1;

    t70 = (x289==((x290/x291)%x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x295 = 30426871U;
	static uint64_t x296 = UINT64_MAX;
	int32_t t71 = -235016;

    t71 = (x293==((x294/x295)%x296));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = -27;
	volatile int32_t x299 = -1;
	volatile int32_t t72 = 18;

    t72 = (x297==((x298/x299)%x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x301 = 42U;
	int32_t x302 = -1;
	uint64_t x303 = 9289169721980165LLU;
	volatile int32_t t73 = -6;

    t73 = (x301==((x302/x303)%x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x305 = INT16_MAX;
	int8_t x306 = 1;
	static int32_t t74 = 13497771;

    t74 = (x305==((x306/x307)%x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x309 = INT8_MIN;
	volatile int64_t x311 = -1LL;
	int64_t x312 = INT64_MAX;
	volatile int32_t t75 = 30;

    t75 = (x309==((x310/x311)%x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x313 = UINT16_MAX;
	int32_t x314 = INT32_MAX;
	volatile int32_t x316 = INT32_MIN;
	int32_t t76 = -1065;

    t76 = (x313==((x314/x315)%x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x317 = UINT8_MAX;
	int16_t x318 = -17;
	int8_t x319 = INT8_MAX;
	static int32_t x320 = INT32_MAX;
	volatile int32_t t77 = -33129;

    t77 = (x317==((x318/x319)%x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = INT16_MIN;
	static int8_t x322 = INT8_MAX;
	int32_t x323 = INT32_MAX;
	uint32_t x324 = 13117699U;

    t78 = (x321==((x322/x323)%x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x326 = 68372061689LLU;
	static int8_t x327 = INT8_MAX;
	uint32_t x328 = 6920U;
	volatile int32_t t79 = 15;

    t79 = (x325==((x326/x327)%x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x329 = INT32_MIN;
	volatile int16_t x330 = INT16_MIN;
	static uint64_t x331 = 27231595388268652LLU;
	int32_t t80 = 14418016;

    t80 = (x329==((x330/x331)%x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x333 = INT8_MIN;
	volatile uint32_t x334 = 387011372U;
	int64_t x336 = -262597585350832205LL;
	volatile int32_t t81 = 1476205;

    t81 = (x333==((x334/x335)%x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x337 = INT8_MIN;
	volatile uint32_t x338 = 211440129U;
	volatile int8_t x339 = INT8_MIN;
	static int32_t t82 = 15096687;

    t82 = (x337==((x338/x339)%x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x343 = INT16_MIN;
	uint16_t x344 = 33U;
	volatile int32_t t83 = 3303;

    t83 = (x341==((x342/x343)%x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x345 = INT8_MIN;
	volatile int8_t x346 = -1;
	volatile uint8_t x347 = 23U;
	int32_t t84 = 1836567;

    t84 = (x345==((x346/x347)%x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = INT32_MIN;
	static int8_t x351 = 1;
	int8_t x352 = -1;
	int32_t t85 = 4;

    t85 = (x349==((x350/x351)%x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x354 = -1;
	int32_t x355 = INT32_MIN;

    t86 = (x353==((x354/x355)%x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x358 = INT16_MAX;
	int8_t x359 = INT8_MAX;
	uint8_t x360 = 6U;

    t87 = (x357==((x358/x359)%x360));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x361 = -26;
	uint64_t x362 = 7LLU;
	static int16_t x364 = 1986;
	volatile int32_t t88 = -330224;

    t88 = (x361==((x362/x363)%x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x365 = UINT64_MAX;
	static volatile int16_t x366 = INT16_MAX;
	int16_t x367 = -1;
	uint16_t x368 = 3186U;
	volatile int32_t t89 = -19866075;

    t89 = (x365==((x366/x367)%x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x369 = INT8_MIN;
	static uint32_t x370 = UINT32_MAX;
	int32_t x372 = INT32_MAX;
	volatile int32_t t90 = -254;

    t90 = (x369==((x370/x371)%x372));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x373 = INT32_MAX;
	int64_t x374 = INT64_MAX;
	static int64_t x375 = INT64_MIN;
	uint64_t x376 = 34244LLU;

    t91 = (x373==((x374/x375)%x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x381 = -1;
	volatile int8_t x382 = -33;

    t92 = (x381==((x382/x383)%x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x385 = UINT64_MAX;
	int16_t x387 = INT16_MAX;
	static int32_t t93 = -255;

    t93 = (x385==((x386/x387)%x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = -3;
	static int16_t x391 = INT16_MIN;
	uint16_t x392 = UINT16_MAX;

    t94 = (x389==((x390/x391)%x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x394 = 192U;
	uint64_t x395 = 3LLU;
	volatile int8_t x396 = INT8_MIN;

    t95 = (x393==((x394/x395)%x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x397 = 20U;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MAX;
	int32_t t96 = -3445;

    t96 = (x397==((x398/x399)%x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x401 = UINT32_MAX;
	uint8_t x402 = UINT8_MAX;
	int8_t x403 = -1;
	int64_t x404 = INT64_MAX;
	int32_t t97 = -76021423;

    t97 = (x401==((x402/x403)%x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x405 = -50556LL;
	uint16_t x406 = 3U;
	static int16_t x407 = INT16_MAX;
	int32_t x408 = 54;
	volatile int32_t t98 = 5790615;

    t98 = (x405==((x406/x407)%x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x413 = 1LL;
	static int16_t x414 = INT16_MIN;
	int64_t x415 = -211LL;
	int8_t x416 = -6;

    t99 = (x413==((x414/x415)%x416));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x421 = INT64_MIN;
	int32_t x422 = INT32_MIN;
	int16_t x423 = 14487;
	volatile int16_t x424 = -1;

    t100 = (x421==((x422/x423)%x424));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t101 = 1;

    t101 = (x425==((x426/x427)%x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x429 = INT32_MIN;
	int32_t x430 = -3;
	int16_t x431 = INT16_MAX;
	int16_t x432 = INT16_MAX;
	volatile int32_t t102 = -98033573;

    t102 = (x429==((x430/x431)%x432));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x433 = -3LL;
	static volatile int32_t x434 = -1;
	int8_t x435 = -39;
	uint8_t x436 = 29U;
	volatile int32_t t103 = -5466;

    t103 = (x433==((x434/x435)%x436));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x438 = INT8_MIN;
	int8_t x440 = -1;
	static int32_t t104 = 631758871;

    t104 = (x437==((x438/x439)%x440));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x441 = INT64_MIN;
	int64_t x442 = INT64_MAX;
	volatile uint8_t x443 = 3U;
	int16_t x444 = -1;
	int32_t t105 = 803143536;

    t105 = (x441==((x442/x443)%x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x445 = 23U;
	static uint32_t x447 = 12521U;
	int32_t t106 = -95;

    t106 = (x445==((x446/x447)%x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x449 = INT32_MIN;
	static int16_t x450 = 4;
	volatile int64_t x451 = INT64_MAX;

    t107 = (x449==((x450/x451)%x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x454 = INT32_MIN;
	uint16_t x455 = UINT16_MAX;
	static int8_t x456 = INT8_MAX;

    t108 = (x453==((x454/x455)%x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x458 = -1;
	int16_t x459 = INT16_MIN;
	static int32_t x460 = INT32_MAX;
	static volatile int32_t t109 = 1;

    t109 = (x457==((x458/x459)%x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x461 = -644;
	int32_t x462 = -1;
	int8_t x463 = INT8_MIN;
	uint64_t x464 = 3LLU;
	int32_t t110 = 166554029;

    t110 = (x461==((x462/x463)%x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = INT16_MIN;
	volatile int8_t x466 = -1;
	static volatile int8_t x467 = INT8_MIN;
	uint16_t x468 = UINT16_MAX;

    t111 = (x465==((x466/x467)%x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x472 = -1;
	int32_t t112 = 18;

    t112 = (x469==((x470/x471)%x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x474 = INT16_MIN;
	static uint32_t x475 = 22110U;
	volatile int32_t t113 = 323492839;

    t113 = (x473==((x474/x475)%x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x477 = INT16_MIN;
	static int16_t x478 = INT16_MIN;
	int32_t x479 = INT32_MIN;
	volatile int32_t t114 = -1;

    t114 = (x477==((x478/x479)%x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x481 = 0U;
	static uint8_t x483 = 109U;
	int32_t x484 = 174;

    t115 = (x481==((x482/x483)%x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x485 = UINT64_MAX;
	static int32_t x486 = -26280318;
	int64_t x487 = INT64_MIN;
	static int64_t x488 = INT64_MIN;

    t116 = (x485==((x486/x487)%x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x489 = -50;
	uint8_t x490 = UINT8_MAX;
	volatile uint16_t x491 = UINT16_MAX;
	static int32_t t117 = -487660685;

    t117 = (x489==((x490/x491)%x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x493 = 1U;
	uint32_t x495 = 250U;
	int32_t t118 = 2409;

    t118 = (x493==((x494/x495)%x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x501 = -1;
	int64_t x502 = -1LL;
	uint16_t x504 = 15269U;
	int32_t t119 = -37;

    t119 = (x501==((x502/x503)%x504));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x505 = -14495;
	volatile int64_t x506 = -342295182544001LL;
	uint16_t x507 = UINT16_MAX;
	int16_t x508 = -1;
	volatile int32_t t120 = 108809;

    t120 = (x505==((x506/x507)%x508));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x509 = 1;
	int16_t x510 = 224;
	volatile int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MAX;
	volatile int32_t t121 = 21973556;

    t121 = (x509==((x510/x511)%x512));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x513 = 0;
	int16_t x514 = -1;
	uint8_t x515 = 118U;
	int32_t t122 = -122;

    t122 = (x513==((x514/x515)%x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x517 = INT8_MIN;
	static int16_t x519 = 5;
	int64_t x520 = -1LL;
	static int32_t t123 = -770794893;

    t123 = (x517==((x518/x519)%x520));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x521 = 14;
	int32_t x522 = -1;
	volatile int32_t x523 = INT32_MIN;
	int32_t x524 = -28614394;
	volatile int32_t t124 = -610;

    t124 = (x521==((x522/x523)%x524));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x525 = INT16_MAX;
	uint16_t x526 = UINT16_MAX;
	volatile uint16_t x527 = 2U;
	int8_t x528 = INT8_MAX;
	volatile int32_t t125 = 1017378;

    t125 = (x525==((x526/x527)%x528));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x530 = INT8_MAX;
	uint32_t x532 = 495608757U;
	volatile int32_t t126 = -527869089;

    t126 = (x529==((x530/x531)%x532));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x533 = -1;
	volatile uint32_t x534 = 2147016136U;
	volatile int64_t x535 = INT64_MIN;
	volatile int8_t x536 = 2;
	volatile int32_t t127 = 789;

    t127 = (x533==((x534/x535)%x536));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x537 = INT8_MIN;
	uint32_t x538 = UINT32_MAX;
	int32_t x539 = INT32_MAX;

    t128 = (x537==((x538/x539)%x540));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x541 = UINT64_MAX;
	static int32_t x542 = INT32_MAX;
	int32_t t129 = -4527594;

    t129 = (x541==((x542/x543)%x544));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x545 = 222U;
	static uint8_t x546 = UINT8_MAX;
	int16_t x547 = INT16_MIN;
	static int16_t x548 = INT16_MIN;
	int32_t t130 = 364466258;

    t130 = (x545==((x546/x547)%x548));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x555 = INT8_MIN;
	int32_t t131 = -3995112;

    t131 = (x553==((x554/x555)%x556));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x557 = INT64_MAX;
	int32_t x558 = -1;
	int32_t x559 = INT32_MIN;
	int64_t x560 = INT64_MIN;
	volatile int32_t t132 = 400689861;

    t132 = (x557==((x558/x559)%x560));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x561 = 604LLU;
	int8_t x562 = INT8_MIN;
	int64_t x563 = INT64_MIN;
	int32_t t133 = 176437207;

    t133 = (x561==((x562/x563)%x564));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x565 = UINT32_MAX;
	static int8_t x567 = INT8_MIN;
	int8_t x568 = INT8_MIN;
	volatile int32_t t134 = -181870;

    t134 = (x565==((x566/x567)%x568));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x569 = -1LL;
	static int32_t x570 = INT32_MAX;
	uint64_t x572 = 1148LLU;
	int32_t t135 = 826497;

    t135 = (x569==((x570/x571)%x572));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x574 = INT32_MIN;
	volatile int32_t x575 = 315609;
	int8_t x576 = -1;
	int32_t t136 = -473564;

    t136 = (x573==((x574/x575)%x576));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x578 = INT16_MIN;
	volatile int64_t x579 = -1LL;
	static volatile uint64_t x580 = UINT64_MAX;
	int32_t t137 = -2;

    t137 = (x577==((x578/x579)%x580));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x582 = -2248454305302854187LL;
	volatile uint32_t x583 = UINT32_MAX;
	uint32_t x584 = 14825977U;

    t138 = (x581==((x582/x583)%x584));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x585 = INT8_MIN;
	static volatile int8_t x586 = -5;
	volatile int64_t x587 = INT64_MIN;
	int16_t x588 = 43;
	volatile int32_t t139 = 11985816;

    t139 = (x585==((x586/x587)%x588));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x589 = 7857494;
	volatile uint64_t x590 = 222LLU;
	uint16_t x591 = UINT16_MAX;
	uint32_t x592 = UINT32_MAX;
	int32_t t140 = 10028;

    t140 = (x589==((x590/x591)%x592));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x597 = INT8_MIN;
	uint64_t x598 = 37977LLU;
	int32_t x599 = -1;
	int32_t t141 = -12848974;

    t141 = (x597==((x598/x599)%x600));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x602 = INT64_MAX;
	uint8_t x603 = UINT8_MAX;
	volatile int32_t t142 = 10;

    t142 = (x601==((x602/x603)%x604));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x605 = INT8_MIN;
	int64_t x606 = -1LL;
	int16_t x608 = -1;
	int32_t t143 = -554;

    t143 = (x605==((x606/x607)%x608));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x609 = INT8_MAX;
	int8_t x610 = INT8_MIN;
	uint64_t x611 = 2LLU;
	uint16_t x612 = 1067U;
	static int32_t t144 = -133238883;

    t144 = (x609==((x610/x611)%x612));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x614 = INT8_MAX;
	volatile int32_t t145 = -1;

    t145 = (x613==((x614/x615)%x616));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x618 = INT16_MAX;
	uint16_t x619 = 24U;
	static int32_t t146 = 930208;

    t146 = (x617==((x618/x619)%x620));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x622 = INT8_MAX;
	static volatile int64_t x623 = INT64_MIN;
	volatile int64_t x624 = -1LL;
	volatile int32_t t147 = 3500283;

    t147 = (x621==((x622/x623)%x624));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x625 = 1471LLU;
	uint8_t x626 = 20U;
	int64_t x628 = INT64_MIN;
	static volatile int32_t t148 = -69098396;

    t148 = (x625==((x626/x627)%x628));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x629 = INT32_MAX;
	int8_t x632 = INT8_MAX;
	int32_t t149 = -6411;

    t149 = (x629==((x630/x631)%x632));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x633 = INT8_MIN;
	int8_t x634 = INT8_MAX;
	int32_t t150 = -4;

    t150 = (x633==((x634/x635)%x636));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x637 = 231;
	uint64_t x638 = 1078315897345LLU;
	static int16_t x639 = INT16_MIN;
	int64_t x640 = 16078445LL;
	int32_t t151 = 0;

    t151 = (x637==((x638/x639)%x640));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x641 = 27218142LL;
	int8_t x642 = INT8_MIN;
	int16_t x643 = -1862;
	static int64_t x644 = -2LL;

    t152 = (x641==((x642/x643)%x644));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x645 = 55U;
	uint8_t x646 = 3U;
	int64_t x648 = -598859524725858LL;
	volatile int32_t t153 = -17076865;

    t153 = (x645==((x646/x647)%x648));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x649 = UINT8_MAX;
	int64_t x650 = INT64_MIN;
	volatile int16_t x651 = INT16_MAX;
	static int32_t x652 = -396;
	int32_t t154 = 8978;

    t154 = (x649==((x650/x651)%x652));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x653 = 1550;
	static int8_t x654 = -1;
	int16_t x655 = -6;
	volatile int32_t t155 = 230;

    t155 = (x653==((x654/x655)%x656));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x657 = 872U;
	int8_t x658 = INT8_MAX;
	volatile int8_t x660 = INT8_MAX;
	int32_t t156 = -3361485;

    t156 = (x657==((x658/x659)%x660));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x661 = INT64_MIN;
	volatile uint32_t x663 = 3979U;
	static volatile int16_t x664 = INT16_MIN;
	int32_t t157 = 3;

    t157 = (x661==((x662/x663)%x664));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x665 = INT32_MIN;
	uint8_t x666 = 2U;
	volatile uint64_t x667 = 7249LLU;
	static int64_t x668 = -1LL;

    t158 = (x665==((x666/x667)%x668));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x669 = UINT8_MAX;
	static int8_t x670 = -1;
	static int8_t x671 = -1;
	static int64_t x672 = INT64_MIN;
	static volatile int32_t t159 = -2174831;

    t159 = (x669==((x670/x671)%x672));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x673 = UINT16_MAX;
	int64_t x674 = -1LL;
	int16_t x675 = 3;
	static uint8_t x676 = UINT8_MAX;

    t160 = (x673==((x674/x675)%x676));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x677 = 634946192;
	uint32_t x679 = 9496068U;
	int64_t x680 = INT64_MIN;
	static int32_t t161 = -16264530;

    t161 = (x677==((x678/x679)%x680));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x681 = 90;
	int8_t x683 = 1;
	int8_t x684 = INT8_MIN;
	volatile int32_t t162 = -116846;

    t162 = (x681==((x682/x683)%x684));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x685 = 6U;
	uint16_t x686 = 0U;
	int16_t x687 = 2;
	volatile int16_t x688 = INT16_MIN;
	int32_t t163 = 676951;

    t163 = (x685==((x686/x687)%x688));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x689 = INT16_MIN;
	int8_t x691 = -1;
	volatile int16_t x692 = -1767;
	volatile int32_t t164 = 1860949;

    t164 = (x689==((x690/x691)%x692));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x694 = -2LL;
	int32_t x695 = INT32_MIN;
	static int64_t x696 = INT64_MAX;

    t165 = (x693==((x694/x695)%x696));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x705 = INT32_MIN;
	static int16_t x706 = 770;
	int16_t x707 = INT16_MIN;
	int32_t x708 = INT32_MIN;
	int32_t t166 = 450;

    t166 = (x705==((x706/x707)%x708));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x709 = -13755903022784597LL;
	static uint16_t x710 = UINT16_MAX;
	uint8_t x711 = 1U;
	static int16_t x712 = 81;
	static int32_t t167 = -380939251;

    t167 = (x709==((x710/x711)%x712));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x713 = UINT16_MAX;
	int32_t x714 = INT32_MIN;
	uint32_t x715 = UINT32_MAX;
	static int8_t x716 = INT8_MIN;
	static volatile int32_t t168 = 329;

    t168 = (x713==((x714/x715)%x716));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x717 = -3;
	int32_t x718 = 23802542;
	int16_t x720 = INT16_MIN;

    t169 = (x717==((x718/x719)%x720));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x721 = -20;
	int16_t x722 = 4655;
	int8_t x723 = 1;
	uint16_t x724 = UINT16_MAX;

    t170 = (x721==((x722/x723)%x724));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x725 = INT32_MIN;
	uint16_t x726 = UINT16_MAX;
	int8_t x728 = 26;
	volatile int32_t t171 = 0;

    t171 = (x725==((x726/x727)%x728));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x729 = -81LL;
	int64_t x730 = 2036408136LL;
	volatile uint32_t x731 = 119U;
	int32_t t172 = -18673184;

    t172 = (x729==((x730/x731)%x732));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x733 = 12U;
	int8_t x735 = INT8_MIN;
	int8_t x736 = INT8_MIN;
	volatile int32_t t173 = 57840199;

    t173 = (x733==((x734/x735)%x736));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x738 = UINT8_MAX;
	uint32_t x739 = UINT32_MAX;
	static volatile int8_t x740 = 1;
	volatile int32_t t174 = -1361637;

    t174 = (x737==((x738/x739)%x740));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x741 = UINT16_MAX;
	int16_t x742 = -1;
	int16_t x744 = INT16_MIN;
	static int32_t t175 = -241;

    t175 = (x741==((x742/x743)%x744));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x745 = INT16_MAX;
	static uint32_t x747 = UINT32_MAX;
	uint16_t x748 = 2U;
	int32_t t176 = 9534977;

    t176 = (x745==((x746/x747)%x748));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x749 = INT8_MIN;
	uint32_t x750 = 1750U;
	volatile int64_t x751 = -171LL;
	int8_t x752 = INT8_MIN;
	static int32_t t177 = 1692;

    t177 = (x749==((x750/x751)%x752));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x753 = INT64_MIN;
	int32_t x754 = -1;
	int16_t x755 = INT16_MIN;
	int64_t x756 = 16204370350LL;
	int32_t t178 = 49296;

    t178 = (x753==((x754/x755)%x756));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x760 = 738U;
	int32_t t179 = 4245;

    t179 = (x757==((x758/x759)%x760));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x761 = INT32_MAX;
	static volatile uint64_t x762 = UINT64_MAX;
	int32_t t180 = 60;

    t180 = (x761==((x762/x763)%x764));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x766 = 6U;
	static int16_t x767 = -1;
	static int32_t x768 = INT32_MAX;
	static volatile int32_t t181 = 89;

    t181 = (x765==((x766/x767)%x768));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x769 = 2115;
	uint32_t x770 = UINT32_MAX;
	int16_t x771 = 361;
	int16_t x772 = -1;

    t182 = (x769==((x770/x771)%x772));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint32_t x773 = 2075957U;
	int16_t x774 = -1;
	static int32_t x775 = -1;
	volatile int8_t x776 = -1;
	int32_t t183 = 699705865;

    t183 = (x773==((x774/x775)%x776));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x777 = 3741U;
	static int16_t x778 = -1;
	volatile int8_t x779 = -4;
	int8_t x780 = -1;
	volatile int32_t t184 = 0;

    t184 = (x777==((x778/x779)%x780));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x781 = 0U;
	volatile int64_t x783 = 499194653LL;
	static volatile int16_t x784 = INT16_MIN;
	volatile int32_t t185 = -7744648;

    t185 = (x781==((x782/x783)%x784));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x785 = -1;
	int16_t x786 = 117;
	volatile uint8_t x787 = UINT8_MAX;
	static int16_t x788 = -1;
	volatile int32_t t186 = 19273;

    t186 = (x785==((x786/x787)%x788));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x789 = INT8_MIN;
	uint8_t x790 = UINT8_MAX;
	uint64_t x791 = UINT64_MAX;
	int8_t x792 = 1;
	static volatile int32_t t187 = 240;

    t187 = (x789==((x790/x791)%x792));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x794 = INT16_MIN;
	volatile int64_t x795 = INT64_MAX;
	static int8_t x796 = 6;

    t188 = (x793==((x794/x795)%x796));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x797 = INT32_MIN;
	int16_t x798 = INT16_MIN;
	int8_t x800 = INT8_MIN;

    t189 = (x797==((x798/x799)%x800));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x801 = INT8_MIN;
	uint8_t x802 = 0U;
	int32_t x803 = INT32_MAX;
	int16_t x804 = INT16_MIN;
	int32_t t190 = 18415;

    t190 = (x801==((x802/x803)%x804));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x805 = 27806LLU;
	int8_t x806 = INT8_MIN;
	volatile int16_t x807 = 1241;
	int32_t x808 = 1;

    t191 = (x805==((x806/x807)%x808));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x809 = INT64_MAX;
	uint16_t x810 = 164U;
	int32_t x811 = -1;
	int32_t x812 = INT32_MIN;
	int32_t t192 = -17530;

    t192 = (x809==((x810/x811)%x812));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x813 = INT32_MAX;
	static int8_t x814 = INT8_MIN;
	int32_t x815 = -1;
	int16_t x816 = 1;
	static volatile int32_t t193 = -187086817;

    t193 = (x813==((x814/x815)%x816));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x817 = -1;
	static uint8_t x818 = UINT8_MAX;
	int16_t x820 = -1;
	static volatile int32_t t194 = 81221;

    t194 = (x817==((x818/x819)%x820));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x821 = INT32_MIN;
	uint32_t x823 = 1476280U;
	int8_t x824 = INT8_MIN;
	int32_t t195 = 476312;

    t195 = (x821==((x822/x823)%x824));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x825 = -5;
	int16_t x826 = 0;
	volatile uint16_t x827 = 2543U;
	static int16_t x828 = INT16_MIN;
	int32_t t196 = -52245;

    t196 = (x825==((x826/x827)%x828));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x830 = 4779768LL;
	static uint32_t x831 = 6094988U;
	static int8_t x832 = INT8_MAX;
	int32_t t197 = -15189;

    t197 = (x829==((x830/x831)%x832));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x833 = 1U;
	uint8_t x834 = UINT8_MAX;
	int16_t x835 = -1;
	static volatile int32_t t198 = 2458;

    t198 = (x833==((x834/x835)%x836));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x837 = INT8_MIN;
	uint16_t x838 = UINT16_MAX;
	int32_t x839 = -1;
	int16_t x840 = -1;
	volatile int32_t t199 = -109;

    t199 = (x837==((x838/x839)%x840));

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

