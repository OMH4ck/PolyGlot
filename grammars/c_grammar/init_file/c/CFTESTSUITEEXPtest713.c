
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

uint16_t x4 = 111U;
int64_t x8 = INT64_MIN;
volatile int8_t x9 = INT8_MAX;
static volatile int32_t t2 = -160;
volatile int64_t t3 = -57765949160589LL;
static int8_t x18 = -1;
int32_t x23 = 458;
int32_t x26 = 2392418;
int32_t t7 = -24;
volatile uint32_t t10 = UINT32_MAX;
static volatile uint8_t x45 = 5U;
volatile int32_t t11 = -139483;
volatile int32_t x66 = INT32_MIN;
uint64_t x68 = UINT64_MAX;
volatile uint32_t t16 = 961304066U;
static int32_t x75 = 10334950;
volatile int64_t x80 = -1LL;
volatile uint8_t x86 = 1U;
int64_t x91 = -822025608779863470LL;
int8_t x92 = INT8_MAX;
static int16_t x99 = -2947;
volatile uint32_t x100 = UINT32_MAX;
int32_t x101 = INT32_MIN;
uint16_t x103 = 68U;
uint8_t x104 = 9U;
int32_t t26 = 16473921;
uint8_t x110 = 3U;
static int64_t x120 = INT64_MIN;
volatile int32_t x123 = -95;
uint32_t x124 = 873994U;
int64_t t30 = -2549527345783595LL;
volatile int64_t x126 = -1LL;
uint64_t x127 = UINT64_MAX;
uint32_t t31 = UINT32_MAX;
int16_t x132 = INT16_MIN;
volatile int32_t t34 = 37764;
volatile int32_t x148 = INT32_MIN;
int64_t x162 = 1890LL;
uint8_t x163 = 43U;
uint8_t x170 = UINT8_MAX;
int32_t t41 = INT32_MIN;
int64_t x175 = INT64_MIN;
int32_t t42 = -318796154;
volatile int64_t x180 = INT64_MAX;
volatile int32_t t45 = 1513;
int32_t x192 = INT32_MIN;
int64_t t46 = INT64_MAX;
int16_t x193 = -4147;
int8_t x198 = INT8_MIN;
uint16_t x201 = UINT16_MAX;
volatile int16_t x202 = INT16_MIN;
int32_t t49 = -871103813;
int16_t x210 = INT16_MIN;
int8_t x212 = -1;
static int16_t x215 = 15;
uint16_t x216 = 17762U;
volatile uint32_t x222 = 23877U;
int16_t x224 = -1;
uint64_t x227 = 216998LLU;
int32_t t54 = 25140734;
int16_t x230 = 2;
static int8_t x231 = -1;
int64_t x237 = INT64_MIN;
int64_t x241 = 1315784648461452395LL;
int32_t t60 = 4;
static volatile uint16_t x264 = UINT16_MAX;
int16_t x265 = 12809;
uint64_t x270 = UINT64_MAX;
static int16_t x277 = 10;
int32_t x280 = INT32_MIN;
volatile int32_t t67 = -15;
int8_t x285 = INT8_MIN;
int32_t x286 = -1;
static int16_t x294 = 1186;
int64_t t71 = INT64_MAX;
int32_t x300 = INT32_MAX;
int16_t x302 = INT16_MIN;
volatile int32_t t73 = 2328;
int32_t x311 = -1;
static int16_t x312 = 7;
int16_t x315 = -1;
volatile int32_t t77 = 20;
volatile int32_t t78 = -1;
int32_t x326 = INT32_MIN;
volatile uint16_t x340 = 2526U;
uint8_t x355 = UINT8_MAX;
int16_t x360 = -1;
int64_t x384 = INT64_MIN;
int32_t t95 = -1;
volatile int8_t x397 = -2;
volatile int8_t x398 = -1;
int64_t x401 = INT64_MIN;
int32_t x407 = -1;
int16_t x408 = INT16_MIN;
uint32_t x409 = 0U;
static volatile int32_t x418 = -1;
int64_t x419 = INT64_MIN;
uint32_t x422 = 1118025116U;
static volatile int64_t x431 = INT64_MAX;
int16_t x436 = -26;
volatile uint8_t x437 = UINT8_MAX;
uint64_t x438 = 19051144523528827LLU;
int16_t x451 = INT16_MIN;
static int64_t x453 = -1LL;
uint16_t x455 = 7405U;
int8_t x465 = 14;
int16_t x468 = INT16_MIN;
static volatile int64_t t114 = INT64_MAX;
int16_t x473 = 0;
int16_t x477 = -1;
int32_t t117 = 30;
int8_t x489 = INT8_MAX;
uint64_t x491 = UINT64_MAX;
static volatile uint8_t x514 = 4U;
int64_t x515 = -1LL;
volatile int32_t t125 = 5940;
uint16_t x522 = UINT16_MAX;
int64_t x531 = INT64_MAX;
static uint8_t x543 = 4U;
static int16_t x544 = -1;
int8_t x548 = -1;
int8_t x550 = 1;
static int32_t x551 = INT32_MIN;
int32_t t132 = -8;
volatile int16_t x556 = INT16_MAX;
static volatile int32_t t134 = 406437;
int8_t x565 = 3;
uint8_t x569 = 1U;
int16_t x574 = 31;
int16_t x575 = -1;
int32_t t140 = 9;
uint16_t x585 = UINT16_MAX;
uint32_t x594 = 7U;
int8_t x598 = INT8_MIN;
volatile int16_t x599 = -227;
int32_t x602 = 14273291;
int32_t x605 = INT32_MIN;
volatile uint32_t x606 = 284U;
static uint32_t x607 = 626865056U;
int8_t x610 = INT8_MAX;
uint32_t x611 = UINT32_MAX;
volatile int8_t x612 = INT8_MIN;
int64_t x614 = INT64_MIN;
uint32_t t148 = 0U;
volatile int16_t x625 = 9;
uint64_t x644 = UINT64_MAX;
volatile int64_t t153 = 736585233LL;
volatile int32_t t154 = INT32_MAX;
int16_t x654 = -51;
volatile int8_t x660 = 25;
int8_t x661 = INT8_MAX;
static int32_t x663 = -1;
volatile int32_t t158 = -3316982;
volatile int8_t x667 = -1;
int16_t x668 = 1741;
int32_t x671 = 56067384;
int16_t x681 = -2609;
volatile uint32_t x682 = 12132U;
int8_t x686 = INT8_MIN;
int16_t x688 = -1;
static uint64_t x694 = UINT64_MAX;
int8_t x696 = INT8_MIN;
int16_t x697 = 4;
int64_t x705 = INT64_MIN;
int16_t x712 = INT16_MIN;
uint8_t x716 = 73U;
int32_t t172 = 21876210;
uint8_t x722 = 31U;
volatile int8_t x726 = 34;
uint32_t x727 = 25U;
uint64_t x738 = UINT64_MAX;
uint16_t x742 = 3U;
int16_t x744 = INT16_MIN;
static uint32_t x745 = 6824U;
static uint16_t x747 = 24U;
volatile int8_t x770 = INT8_MIN;
int16_t x772 = -1;
volatile uint8_t x774 = 18U;
volatile int32_t x775 = INT32_MIN;
volatile uint64_t t186 = 15529551LLU;
static volatile uint32_t x778 = UINT32_MAX;
int32_t t187 = -2610;
int64_t x786 = INT64_MIN;
volatile int32_t x793 = -75;
static int32_t t191 = 1;
uint8_t x805 = 19U;
int64_t x813 = INT64_MIN;
int8_t x818 = INT8_MIN;
static volatile int64_t t197 = INT64_MAX;
int32_t t198 = 7;
static int64_t x825 = -1LL;
volatile int64_t t199 = 202372466LL;


void f0(void) {
    	int32_t x1 = 1;
	volatile int32_t x2 = INT32_MAX;
	int8_t x3 = 5;
	static volatile int32_t t0 = -7;

    t0 = (x1|((x2/x3)>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int16_t x6 = 1;
	uint64_t x7 = 100271901800LLU;
	int32_t t1 = 29829;

    t1 = (x5|((x6/x7)>x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MAX;
	static volatile uint64_t x11 = 260461460798706LLU;
	int64_t x12 = -1LL;

    t2 = (x9|((x10/x11)>x12));

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int32_t x14 = -1;
	static int32_t x15 = INT32_MAX;
	int16_t x16 = INT16_MIN;

    t3 = (x13|((x14/x15)>x16));

    if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = 2LL;
	volatile int64_t x19 = 29756970998995442LL;
	int64_t x20 = INT64_MAX;
	static volatile int64_t t4 = -759LL;

    t4 = (x17|((x18/x19)>x20));

    if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int16_t x22 = -1;
	volatile uint32_t x24 = 6501433U;
	volatile int32_t t5 = -2;

    t5 = (x21|((x22/x23)>x24));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = 11844911;
	volatile int64_t x27 = INT64_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 8;

    t6 = (x25|((x26/x27)>x28));

    if (t6 != 11844911) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	static uint64_t x30 = 9950273123046LLU;
	static int16_t x31 = 347;
	uint32_t x32 = 78U;

    t7 = (x29|((x30/x31)>x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x34 = -1;
	static volatile uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MIN;
	static volatile int32_t t8 = -3794;

    t8 = (x33|((x34/x35)>x36));

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = INT32_MIN;
	static int32_t x38 = -1;
	static volatile uint64_t x39 = UINT64_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = INT32_MIN;

    t9 = (x37|((x38/x39)>x40));

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x41 = UINT32_MAX;
	static int64_t x42 = INT64_MAX;
	volatile int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MAX;

    t10 = (x41|((x42/x43)>x44));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MAX;
	int64_t x47 = INT64_MIN;
	uint16_t x48 = UINT16_MAX;

    t11 = (x45|((x46/x47)>x48));

    if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	static int64_t x50 = INT64_MIN;
	uint64_t x51 = UINT64_MAX;
	volatile uint64_t x52 = 100LLU;
	volatile int64_t t12 = INT64_MIN;

    t12 = (x49|((x50/x51)>x52));

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x53 = 2046U;
	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -3864170;

    t13 = (x53|((x54/x55)>x56));

    if (t13 != 2047) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 269;
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MIN;
	volatile int32_t x60 = -1;
	int32_t t14 = 205250435;

    t14 = (x57|((x58/x59)>x60));

    if (t14 != 269) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	static int8_t x62 = INT8_MIN;
	int32_t x63 = -1;
	static volatile uint16_t x64 = 7U;
	volatile int32_t t15 = 131064;

    t15 = (x61|((x62/x63)>x64));

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = 455U;
	uint8_t x67 = UINT8_MAX;

    t16 = (x65|((x66/x67)>x68));

    if (t16 != 455U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x69 = 57407U;
	int8_t x70 = INT8_MAX;
	int16_t x71 = -11;
	static int16_t x72 = -1;
	volatile uint32_t t17 = 23021977U;

    t17 = (x69|((x70/x71)>x72));

    if (t17 != 57407U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	volatile int32_t x74 = INT32_MAX;
	volatile int8_t x76 = -1;
	volatile int32_t t18 = 0;

    t18 = (x73|((x74/x75)>x76));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 7U;
	volatile uint32_t x78 = UINT32_MAX;
	volatile uint64_t x79 = 30564487604LLU;
	volatile int32_t t19 = -3;

    t19 = (x77|((x78/x79)>x80));

    if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	volatile int8_t x82 = INT8_MIN;
	int32_t x83 = 183206537;
	uint8_t x84 = 52U;
	volatile int32_t t20 = 18656020;

    t20 = (x81|((x82/x83)>x84));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = INT8_MAX;
	uint16_t x87 = UINT16_MAX;
	uint8_t x88 = 2U;
	static volatile int32_t t21 = 320;

    t21 = (x85|((x86/x87)>x88));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 48839416821LLU;
	static int16_t x90 = 91;
	volatile uint64_t t22 = 449494661LLU;

    t22 = (x89|((x90/x91)>x92));

    if (t22 != 48839416821LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;
	uint8_t x95 = 7U;
	int32_t x96 = INT32_MAX;
	static int64_t t23 = 3LL;

    t23 = (x93|((x94/x95)>x96));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MAX;
	uint64_t x98 = 515949LLU;
	int32_t t24 = 4;

    t24 = (x97|((x98/x99)>x100));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x102 = 1U;
	volatile int32_t t25 = INT32_MIN;

    t25 = (x101|((x102/x103)>x104));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 106;
	int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MAX;
	static volatile int64_t x108 = INT64_MIN;

    t26 = (x105|((x106/x107)>x108));

    if (t26 != 107) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = UINT32_MAX;
	uint32_t x111 = UINT32_MAX;
	volatile uint8_t x112 = 2U;
	volatile uint32_t t27 = UINT32_MAX;

    t27 = (x109|((x110/x111)>x112));

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 70U;
	int64_t x114 = INT64_MIN;
	static volatile uint8_t x115 = 110U;
	volatile int8_t x116 = -1;
	volatile int32_t t28 = 516168029;

    t28 = (x113|((x114/x115)>x116));

    if (t28 != 70) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = -1;
	int64_t x118 = 1476748LL;
	int8_t x119 = 1;
	int32_t t29 = 31;

    t29 = (x117|((x118/x119)>x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int32_t x122 = 4242;

    t30 = (x121|((x122/x123)>x124));

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	int16_t x128 = INT16_MIN;

    t31 = (x125|((x126/x127)>x128));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -59550LL;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = 87LLU;
	int64_t t32 = 11508LL;

    t32 = (x129|((x130/x131)>x132));

    if (t32 != -59550LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	uint32_t x134 = 964066U;
	uint8_t x135 = 1U;
	uint16_t x136 = UINT16_MAX;
	static int64_t t33 = INT64_MAX;

    t33 = (x133|((x134/x135)>x136));

    if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -2;
	static int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = UINT16_MAX;

    t34 = (x137|((x138/x139)>x140));

    if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = -1;
	int32_t x146 = -1;
	uint8_t x147 = 11U;
	int32_t t35 = -18019253;

    t35 = (x145|((x146/x147)>x148));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = -4008;
	int16_t x150 = INT16_MIN;
	static volatile int32_t x151 = -1;
	static int16_t x152 = -1;
	volatile int32_t t36 = 5;

    t36 = (x149|((x150/x151)>x152));

    if (t36 != -4007) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = 16U;
	int8_t x154 = INT8_MIN;
	uint64_t x155 = 3427169190371286031LLU;
	int8_t x156 = INT8_MIN;
	int32_t t37 = -237;

    t37 = (x153|((x154/x155)>x156));

    if (t37 != 16) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x157 = 107U;
	volatile uint64_t x158 = 59357LLU;
	int16_t x159 = INT16_MAX;
	static int64_t x160 = INT64_MAX;
	volatile int32_t t38 = -1;

    t38 = (x157|((x158/x159)>x160));

    if (t38 != 107) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = 3;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = 677068634;

    t39 = (x161|((x162/x163)>x164));

    if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MIN;
	volatile uint64_t x166 = UINT64_MAX;
	static uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t40 = -481977521;

    t40 = (x165|((x166/x167)>x168));

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MIN;
	volatile int32_t x171 = -3320;
	int32_t x172 = INT32_MAX;

    t41 = (x169|((x170/x171)>x172));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x173 = 2;
	int32_t x174 = INT32_MAX;
	volatile int8_t x176 = INT8_MIN;

    t42 = (x173|((x174/x175)>x176));

    if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = -1;
	static int8_t x178 = INT8_MIN;
	uint32_t x179 = UINT32_MAX;
	static int32_t t43 = -5;

    t43 = (x177|((x178/x179)>x180));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = INT64_MAX;
	volatile int16_t x182 = INT16_MAX;
	uint64_t x183 = 291942729533743374LLU;
	int16_t x184 = -1;
	int64_t t44 = INT64_MAX;

    t44 = (x181|((x182/x183)>x184));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = INT32_MIN;
	static int32_t x186 = INT32_MIN;
	int64_t x187 = -1LL;
	int8_t x188 = -1;

    t45 = (x185|((x186/x187)>x188));

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x189 = INT64_MAX;
	int8_t x190 = INT8_MIN;
	int64_t x191 = -1LL;

    t46 = (x189|((x190/x191)>x192));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x194 = 6450U;
	uint64_t x195 = UINT64_MAX;
	uint64_t x196 = 27766980039715399LLU;
	volatile int32_t t47 = 7295850;

    t47 = (x193|((x194/x195)>x196));

    if (t47 != -4147) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x197 = UINT8_MAX;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t48 = -54676332;

    t48 = (x197|((x198/x199)>x200));

    if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x203 = UINT32_MAX;
	uint32_t x204 = UINT32_MAX;

    t49 = (x201|((x202/x203)>x204));

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x205 = 519279394U;
	int64_t x206 = INT64_MAX;
	static int8_t x207 = -1;
	int8_t x208 = -28;
	volatile uint32_t t50 = 12311U;

    t50 = (x205|((x206/x207)>x208));

    if (t50 != 519279394U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = UINT8_MAX;
	int16_t x211 = -232;
	volatile int32_t t51 = -610;

    t51 = (x209|((x210/x211)>x212));

    if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x213 = INT8_MAX;
	static uint8_t x214 = 19U;
	int32_t t52 = 5;

    t52 = (x213|((x214/x215)>x216));

    if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = -1;
	int16_t x223 = INT16_MIN;
	int32_t t53 = 15;

    t53 = (x221|((x222/x223)>x224));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = INT8_MAX;
	static int8_t x226 = INT8_MAX;
	uint8_t x228 = 5U;

    t54 = (x225|((x226/x227)>x228));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = INT8_MIN;
	static uint64_t x232 = 1985496886LLU;
	volatile int32_t t55 = 48569;

    t55 = (x229|((x230/x231)>x232));

    if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x233 = -10226179732305LL;
	volatile int8_t x234 = INT8_MAX;
	uint64_t x235 = UINT64_MAX;
	static volatile int16_t x236 = INT16_MAX;
	volatile int64_t t56 = 15LL;

    t56 = (x233|((x234/x235)>x236));

    if (t56 != -10226179732305LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x238 = UINT32_MAX;
	volatile uint32_t x239 = 1174U;
	int64_t x240 = INT64_MIN;
	int64_t t57 = -3342LL;

    t57 = (x237|((x238/x239)>x240));

    if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x242 = 2;
	uint32_t x243 = 11740U;
	volatile int64_t x244 = INT64_MAX;
	static int64_t t58 = 489197496834LL;

    t58 = (x241|((x242/x243)>x244));

    if (t58 != 1315784648461452395LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x245 = 84757LLU;
	int16_t x246 = -7;
	uint8_t x247 = 17U;
	static volatile int64_t x248 = -1LL;
	uint64_t t59 = 2541092LLU;

    t59 = (x245|((x246/x247)>x248));

    if (t59 != 84757LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = 211;
	int8_t x250 = -7;
	int32_t x251 = INT32_MAX;
	int16_t x252 = INT16_MAX;

    t60 = (x249|((x250/x251)>x252));

    if (t60 != 211) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MIN;
	static int8_t x255 = INT8_MIN;
	static uint32_t x256 = 16U;
	volatile int64_t t61 = -5LL;

    t61 = (x253|((x254/x255)>x256));

    if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = INT8_MAX;
	volatile int8_t x258 = INT8_MAX;
	int16_t x259 = 5;
	int8_t x260 = -1;
	volatile int32_t t62 = 0;

    t62 = (x257|((x258/x259)>x260));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x261 = INT8_MAX;
	uint32_t x262 = UINT32_MAX;
	static int16_t x263 = 51;
	static volatile int32_t t63 = 416854037;

    t63 = (x261|((x262/x263)>x264));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x266 = 4932688168420610LLU;
	volatile int8_t x267 = INT8_MIN;
	int16_t x268 = -1652;
	volatile int32_t t64 = -18;

    t64 = (x265|((x266/x267)>x268));

    if (t64 != 12809) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x269 = UINT32_MAX;
	static int32_t x271 = INT32_MIN;
	static int16_t x272 = -1;
	static volatile uint32_t t65 = UINT32_MAX;

    t65 = (x269|((x270/x271)>x272));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x273 = INT8_MIN;
	int64_t x274 = -234029145LL;
	int16_t x275 = -1;
	static int32_t x276 = 484;
	static volatile int32_t t66 = -208861;

    t66 = (x273|((x274/x275)>x276));

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x278 = -1;
	int64_t x279 = INT64_MIN;

    t67 = (x277|((x278/x279)>x280));

    if (t67 != 11) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = 8720763971756174LL;
	volatile uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	static volatile int64_t t68 = 403754283433LL;

    t68 = (x281|((x282/x283)>x284));

    if (t68 != 8720763971756174LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x287 = INT8_MIN;
	int64_t x288 = -9080LL;
	int32_t t69 = 3323010;

    t69 = (x285|((x286/x287)>x288));

    if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x289 = 0U;
	int16_t x290 = 1;
	int32_t x291 = -1;
	uint64_t x292 = 222963LLU;
	static volatile int32_t t70 = 236895264;

    t70 = (x289|((x290/x291)>x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x293 = INT64_MAX;
	int8_t x295 = INT8_MIN;
	volatile int32_t x296 = -1;

    t71 = (x293|((x294/x295)>x296));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = INT16_MIN;
	int32_t x298 = -1;
	int16_t x299 = -1;
	volatile int32_t t72 = 514254;

    t72 = (x297|((x298/x299)>x300));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x301 = 1U;
	int32_t x303 = INT32_MIN;
	uint64_t x304 = UINT64_MAX;

    t73 = (x301|((x302/x303)>x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = 3468;
	uint16_t x306 = 5U;
	uint64_t x307 = 230140986654062LLU;
	int32_t x308 = INT32_MIN;
	volatile int32_t t74 = -785699;

    t74 = (x305|((x306/x307)>x308));

    if (t74 != 3468) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = 20376525993721678LL;
	uint8_t x310 = UINT8_MAX;
	int64_t t75 = 853068491888LL;

    t75 = (x309|((x310/x311)>x312));

    if (t75 != 20376525993721678LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x313 = 1913LLU;
	uint8_t x314 = 1U;
	int16_t x316 = INT16_MIN;
	volatile uint64_t t76 = 395889547473LLU;

    t76 = (x313|((x314/x315)>x316));

    if (t76 != 1913LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = -15847;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = -1;
	uint16_t x320 = 766U;

    t77 = (x317|((x318/x319)>x320));

    if (t77 != -15847) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = UINT16_MAX;
	uint32_t x322 = UINT32_MAX;
	uint32_t x323 = 13U;
	static volatile uint8_t x324 = 1U;

    t78 = (x321|((x322/x323)>x324));

    if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x325 = 698LL;
	int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t79 = -39198LL;

    t79 = (x325|((x326/x327)>x328));

    if (t79 != 699LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MIN;
	uint16_t x331 = 109U;
	int32_t x332 = -1;
	static int64_t t80 = INT64_MIN;

    t80 = (x329|((x330/x331)>x332));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = -62336950;
	int16_t x334 = INT16_MAX;
	int64_t x335 = -1LL;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t81 = 16141913;

    t81 = (x333|((x334/x335)>x336));

    if (t81 != -62336950) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x337 = -1;
	static volatile uint64_t x338 = 7106391458087LLU;
	int32_t x339 = -1;
	volatile int32_t t82 = 89;

    t82 = (x337|((x338/x339)>x340));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x341 = INT32_MIN;
	int32_t x342 = -5;
	int64_t x343 = INT64_MIN;
	volatile uint8_t x344 = UINT8_MAX;
	volatile int32_t t83 = INT32_MIN;

    t83 = (x341|((x342/x343)>x344));

    if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MIN;
	volatile uint64_t x347 = UINT64_MAX;
	static uint64_t x348 = UINT64_MAX;
	volatile int64_t t84 = INT64_MIN;

    t84 = (x345|((x346/x347)>x348));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = UINT64_MAX;
	volatile int32_t x350 = -5;
	int8_t x351 = 16;
	static int16_t x352 = -1;
	uint64_t t85 = UINT64_MAX;

    t85 = (x349|((x350/x351)>x352));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x353 = UINT64_MAX;
	static int8_t x354 = INT8_MIN;
	static int16_t x356 = INT16_MIN;
	volatile uint64_t t86 = UINT64_MAX;

    t86 = (x353|((x354/x355)>x356));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = -2085;
	int8_t x358 = INT8_MAX;
	int32_t x359 = INT32_MIN;
	static volatile int32_t t87 = -171;

    t87 = (x357|((x358/x359)>x360));

    if (t87 != -2085) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x361 = INT32_MAX;
	uint8_t x362 = 3U;
	static uint8_t x363 = 8U;
	uint16_t x364 = 6U;
	volatile int32_t t88 = INT32_MAX;

    t88 = (x361|((x362/x363)>x364));

    if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x365 = 857154166LLU;
	int8_t x366 = INT8_MIN;
	volatile uint32_t x367 = UINT32_MAX;
	int8_t x368 = 11;
	volatile uint64_t t89 = 1475238784LLU;

    t89 = (x365|((x366/x367)>x368));

    if (t89 != 857154166LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x369 = 1U;
	int8_t x370 = 2;
	uint64_t x371 = 14823LLU;
	static int64_t x372 = INT64_MIN;
	volatile int32_t t90 = 8;

    t90 = (x369|((x370/x371)>x372));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x373 = 33593007712397831LLU;
	uint64_t x374 = 1385LLU;
	uint64_t x375 = 176LLU;
	static uint8_t x376 = UINT8_MAX;
	static uint64_t t91 = 17863905139758725LLU;

    t91 = (x373|((x374/x375)>x376));

    if (t91 != 33593007712397831LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x377 = 0;
	uint16_t x378 = UINT16_MAX;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -1LL;
	volatile int32_t t92 = -56;

    t92 = (x377|((x378/x379)>x380));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x381 = 197U;
	static uint8_t x382 = 0U;
	int32_t x383 = INT32_MIN;
	volatile uint32_t t93 = 104583U;

    t93 = (x381|((x382/x383)>x384));

    if (t93 != 197U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x385 = 2751495767896LLU;
	int32_t x386 = INT32_MAX;
	uint16_t x387 = 1008U;
	volatile int64_t x388 = -18247628724LL;
	volatile uint64_t t94 = 31432423LLU;

    t94 = (x385|((x386/x387)>x388));

    if (t94 != 2751495767897LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x389 = -3;
	int32_t x390 = 14003;
	volatile int32_t x391 = -1;
	int16_t x392 = -1;

    t95 = (x389|((x390/x391)>x392));

    if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = 0;
	volatile int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t96 = 129968;

    t96 = (x393|((x394/x395)>x396));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x399 = INT8_MAX;
	volatile int32_t x400 = INT32_MAX;
	volatile int32_t t97 = 7318;

    t97 = (x397|((x398/x399)>x400));

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x402 = INT16_MIN;
	static uint8_t x403 = UINT8_MAX;
	int64_t x404 = INT64_MIN;
	volatile int64_t t98 = -1LL;

    t98 = (x401|((x402/x403)>x404));

    if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x405 = 666;
	int16_t x406 = 11;
	int32_t t99 = -1809968;

    t99 = (x405|((x406/x407)>x408));

    if (t99 != 667) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x410 = UINT64_MAX;
	int16_t x411 = INT16_MIN;
	volatile int32_t x412 = 0;
	static volatile uint32_t t100 = 371U;

    t100 = (x409|((x410/x411)>x412));

    if (t100 != 1U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x413 = 1051836090187871425LL;
	int64_t x414 = INT64_MAX;
	static int64_t x415 = INT64_MAX;
	static int8_t x416 = -3;
	static int64_t t101 = -27699LL;

    t101 = (x413|((x414/x415)>x416));

    if (t101 != 1051836090187871425LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x417 = -312;
	uint8_t x420 = 75U;
	volatile int32_t t102 = 3681509;

    t102 = (x417|((x418/x419)>x420));

    if (t102 != -312) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x421 = INT64_MIN;
	int32_t x423 = INT32_MIN;
	int16_t x424 = -794;
	volatile int64_t t103 = INT64_MIN;

    t103 = (x421|((x422/x423)>x424));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x425 = -1;
	static int64_t x426 = 2960423088137200130LL;
	int8_t x427 = INT8_MAX;
	int64_t x428 = INT64_MAX;
	volatile int32_t t104 = 962;

    t104 = (x425|((x426/x427)>x428));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x429 = UINT64_MAX;
	uint64_t x430 = 0LLU;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = (x429|((x430/x431)>x432));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = 6;
	static int16_t x434 = 1207;
	uint64_t x435 = 413055300205799LLU;
	int32_t t106 = -23;

    t106 = (x433|((x434/x435)>x436));

    if (t106 != 6) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int16_t x439 = -1;
	volatile int32_t x440 = INT32_MIN;
	int32_t t107 = 2034;

    t107 = (x437|((x438/x439)>x440));

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = INT16_MAX;
	int16_t x442 = 456;
	static int32_t x443 = -831839;
	static uint32_t x444 = UINT32_MAX;
	int32_t t108 = 7854085;

    t108 = (x441|((x442/x443)>x444));

    if (t108 != 32767) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x449 = 548001938829923980LL;
	static uint8_t x450 = 32U;
	uint16_t x452 = UINT16_MAX;
	int64_t t109 = 4817642LL;

    t109 = (x449|((x450/x451)>x452));

    if (t109 != 548001938829923980LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x454 = 69122U;
	int32_t x456 = INT32_MAX;
	static volatile int64_t t110 = -3237LL;

    t110 = (x453|((x454/x455)>x456));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x457 = UINT64_MAX;
	static int16_t x458 = INT16_MIN;
	volatile int32_t x459 = INT32_MIN;
	int32_t x460 = -1388;
	uint64_t t111 = UINT64_MAX;

    t111 = (x457|((x458/x459)>x460));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x461 = INT64_MIN;
	static uint8_t x462 = 7U;
	int16_t x463 = INT16_MAX;
	int32_t x464 = INT32_MIN;
	volatile int64_t t112 = 898269561535929278LL;

    t112 = (x461|((x462/x463)>x464));

    if (t112 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x466 = UINT64_MAX;
	uint64_t x467 = 2798975305250644LLU;
	static int32_t t113 = -50624;

    t113 = (x465|((x466/x467)>x468));

    if (t113 != 14) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x469 = INT64_MAX;
	int32_t x470 = INT32_MAX;
	int8_t x471 = INT8_MIN;
	uint8_t x472 = 39U;

    t114 = (x469|((x470/x471)>x472));

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x474 = INT32_MIN;
	int16_t x475 = INT16_MIN;
	volatile int16_t x476 = INT16_MIN;
	int32_t t115 = 6930544;

    t115 = (x473|((x474/x475)>x476));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x478 = -1;
	volatile uint8_t x479 = 2U;
	uint32_t x480 = 52U;
	volatile int32_t t116 = 60930616;

    t116 = (x477|((x478/x479)>x480));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x485 = 0;
	int32_t x486 = -1;
	uint8_t x487 = 5U;
	int8_t x488 = -1;

    t117 = (x485|((x486/x487)>x488));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x490 = 13613990222LL;
	int64_t x492 = INT64_MIN;
	static volatile int32_t t118 = -6740;

    t118 = (x489|((x490/x491)>x492));

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x493 = 14793773863581LL;
	int16_t x494 = -1;
	int8_t x495 = INT8_MIN;
	volatile uint64_t x496 = 1924445865595050LLU;
	int64_t t119 = 3361889745LL;

    t119 = (x493|((x494/x495)>x496));

    if (t119 != 14793773863581LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x497 = 0U;
	uint64_t x498 = 144402818153873482LLU;
	int16_t x499 = -1;
	uint32_t x500 = 393U;
	int32_t t120 = 32667708;

    t120 = (x497|((x498/x499)>x500));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x501 = -9;
	volatile int32_t x502 = 8;
	static uint64_t x503 = UINT64_MAX;
	int16_t x504 = 7712;
	static int32_t t121 = 1009537847;

    t121 = (x501|((x502/x503)>x504));

    if (t121 != -9) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = INT8_MIN;
	int16_t x506 = INT16_MAX;
	volatile uint8_t x507 = 86U;
	static volatile int32_t x508 = -56804094;
	static int32_t t122 = -7;

    t122 = (x505|((x506/x507)>x508));

    if (t122 != -127) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = 789439411;
	static int32_t x510 = -1;
	static int8_t x511 = INT8_MAX;
	int8_t x512 = 7;
	int32_t t123 = 3300;

    t123 = (x509|((x510/x511)>x512));

    if (t123 != 789439411) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x513 = 457596LLU;
	int16_t x516 = 0;
	uint64_t t124 = 2177907645LLU;

    t124 = (x513|((x514/x515)>x516));

    if (t124 != 457596LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x517 = -2347;
	static int64_t x518 = -952451573416926808LL;
	static int16_t x519 = INT16_MIN;
	volatile uint64_t x520 = 21349337LLU;

    t125 = (x517|((x518/x519)>x520));

    if (t125 != -2347) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x521 = 0U;
	static volatile int16_t x523 = INT16_MIN;
	int32_t x524 = -1580;
	volatile int32_t t126 = -1;

    t126 = (x521|((x522/x523)>x524));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x525 = -39;
	uint32_t x526 = 24358U;
	int64_t x527 = 212813LL;
	static int64_t x528 = INT64_MIN;
	int32_t t127 = 114506236;

    t127 = (x525|((x526/x527)>x528));

    if (t127 != -39) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x529 = UINT8_MAX;
	volatile uint16_t x530 = UINT16_MAX;
	uint32_t x532 = UINT32_MAX;
	static volatile int32_t t128 = -6933;

    t128 = (x529|((x530/x531)>x532));

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x533 = -1;
	uint32_t x534 = 2U;
	static int32_t x535 = 11595;
	int32_t x536 = -206900659;
	int32_t t129 = 2684279;

    t129 = (x533|((x534/x535)>x536));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = 310711968LL;
	int32_t t130 = -1;

    t130 = (x541|((x542/x543)>x544));

    if (t130 != -2147483647) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x545 = INT64_MIN;
	uint16_t x546 = 4U;
	int8_t x547 = -1;
	volatile int64_t t131 = INT64_MIN;

    t131 = (x545|((x546/x547)>x548));

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x549 = INT8_MAX;
	int64_t x552 = INT64_MIN;

    t132 = (x549|((x550/x551)>x552));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x553 = 229U;
	uint8_t x554 = 3U;
	uint8_t x555 = UINT8_MAX;
	volatile uint32_t t133 = 4679U;

    t133 = (x553|((x554/x555)>x556));

    if (t133 != 229U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x557 = INT16_MAX;
	uint64_t x558 = 538849844114749042LLU;
	volatile int16_t x559 = INT16_MAX;
	volatile int8_t x560 = 0;

    t134 = (x557|((x558/x559)>x560));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x561 = -162LL;
	uint16_t x562 = UINT16_MAX;
	static int32_t x563 = 40553872;
	int32_t x564 = 11;
	volatile int64_t t135 = -2280309LL;

    t135 = (x561|((x562/x563)>x564));

    if (t135 != -162LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x566 = INT32_MIN;
	uint32_t x567 = 19179825U;
	int8_t x568 = INT8_MIN;
	int32_t t136 = 1398731;

    t136 = (x565|((x566/x567)>x568));

    if (t136 != 3) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x570 = UINT8_MAX;
	int32_t x571 = INT32_MIN;
	int8_t x572 = INT8_MIN;
	int32_t t137 = 0;

    t137 = (x569|((x570/x571)>x572));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x573 = -142;
	static int64_t x576 = INT64_MAX;
	volatile int32_t t138 = -105816;

    t138 = (x573|((x574/x575)>x576));

    if (t138 != -142) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x577 = 500LLU;
	int8_t x578 = -1;
	static volatile int16_t x579 = INT16_MAX;
	uint8_t x580 = UINT8_MAX;
	uint64_t t139 = 13LLU;

    t139 = (x577|((x578/x579)>x580));

    if (t139 != 500LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x581 = 30;
	static volatile int64_t x582 = 1750269649074994LL;
	int8_t x583 = -2;
	static int16_t x584 = INT16_MIN;

    t140 = (x581|((x582/x583)>x584));

    if (t140 != 30) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x586 = 4U;
	uint8_t x587 = 24U;
	uint8_t x588 = 2U;
	static int32_t t141 = 1077121;

    t141 = (x585|((x586/x587)>x588));

    if (t141 != 65535) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = INT8_MIN;
	int8_t x591 = -1;
	int64_t x592 = INT64_MAX;
	volatile int32_t t142 = INT32_MIN;

    t142 = (x589|((x590/x591)>x592));

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x593 = INT32_MIN;
	uint64_t x595 = UINT64_MAX;
	int8_t x596 = INT8_MIN;
	volatile int32_t t143 = INT32_MIN;

    t143 = (x593|((x594/x595)>x596));

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x597 = INT16_MAX;
	int64_t x600 = -1400228LL;
	static int32_t t144 = 1286;

    t144 = (x597|((x598/x599)>x600));

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x601 = INT64_MAX;
	static volatile int32_t x603 = INT32_MIN;
	uint64_t x604 = UINT64_MAX;
	static int64_t t145 = INT64_MAX;

    t145 = (x601|((x602/x603)>x604));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x608 = 13U;
	volatile int32_t t146 = INT32_MIN;

    t146 = (x605|((x606/x607)>x608));

    if (t146 != INT32_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x609 = 337777U;
	static volatile uint32_t t147 = 5823648U;

    t147 = (x609|((x610/x611)>x612));

    if (t147 != 337777U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x613 = 640479U;
	static volatile uint64_t x615 = UINT64_MAX;
	int32_t x616 = INT32_MAX;

    t148 = (x613|((x614/x615)>x616));

    if (t148 != 640479U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x617 = -1;
	uint64_t x618 = 55206LLU;
	volatile uint16_t x619 = 1U;
	static int32_t x620 = -1;
	int32_t t149 = 6500;

    t149 = (x617|((x618/x619)>x620));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x626 = UINT8_MAX;
	int64_t x627 = INT64_MIN;
	uint16_t x628 = 173U;
	int32_t t150 = -7;

    t150 = (x625|((x626/x627)>x628));

    if (t150 != 9) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x629 = -1;
	int64_t x630 = INT64_MIN;
	int64_t x631 = 759125403LL;
	int8_t x632 = -1;
	int32_t t151 = -572686;

    t151 = (x629|((x630/x631)>x632));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x637 = UINT8_MAX;
	int64_t x638 = INT64_MIN;
	int32_t x639 = INT32_MIN;
	uint32_t x640 = 127355120U;
	volatile int32_t t152 = 1;

    t152 = (x637|((x638/x639)>x640));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x641 = -5LL;
	uint32_t x642 = 28228809U;
	uint64_t x643 = 23LLU;

    t153 = (x641|((x642/x643)>x644));

    if (t153 != -5LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x645 = INT32_MAX;
	volatile int64_t x646 = -238517LL;
	static volatile int64_t x647 = INT64_MIN;
	int16_t x648 = INT16_MIN;

    t154 = (x645|((x646/x647)>x648));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x649 = -1LL;
	int8_t x650 = -1;
	volatile uint16_t x651 = 1017U;
	int32_t x652 = INT32_MAX;
	static int64_t t155 = 47LL;

    t155 = (x649|((x650/x651)>x652));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x653 = -1;
	int8_t x655 = INT8_MIN;
	static int8_t x656 = -1;
	int32_t t156 = 7;

    t156 = (x653|((x654/x655)>x656));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x657 = UINT32_MAX;
	int32_t x658 = INT32_MAX;
	volatile uint64_t x659 = 1367846733409362LLU;
	uint32_t t157 = UINT32_MAX;

    t157 = (x657|((x658/x659)>x660));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x662 = 2LLU;
	static uint8_t x664 = UINT8_MAX;

    t158 = (x661|((x662/x663)>x664));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x665 = INT64_MIN;
	uint64_t x666 = 15939LLU;
	volatile int64_t t159 = INT64_MIN;

    t159 = (x665|((x666/x667)>x668));

    if (t159 != INT64_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x669 = -29417655226858984LL;
	static int64_t x670 = -632598013330142LL;
	int8_t x672 = -1;
	volatile int64_t t160 = -472LL;

    t160 = (x669|((x670/x671)>x672));

    if (t160 != -29417655226858984LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x673 = 2U;
	int8_t x674 = INT8_MAX;
	volatile int32_t x675 = -98;
	int32_t x676 = INT32_MAX;
	volatile int32_t t161 = 53843;

    t161 = (x673|((x674/x675)>x676));

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x677 = 8327;
	int16_t x678 = 1;
	int64_t x679 = -1LL;
	uint32_t x680 = 52U;
	int32_t t162 = 6;

    t162 = (x677|((x678/x679)>x680));

    if (t162 != 8327) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x683 = UINT32_MAX;
	int8_t x684 = -1;
	static int32_t t163 = -15;

    t163 = (x681|((x682/x683)>x684));

    if (t163 != -2609) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x685 = INT16_MIN;
	volatile int8_t x687 = INT8_MIN;
	static volatile int32_t t164 = -1;

    t164 = (x685|((x686/x687)>x688));

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x689 = INT64_MIN;
	uint16_t x690 = 2U;
	int32_t x691 = -666606460;
	volatile int16_t x692 = INT16_MAX;
	int64_t t165 = INT64_MIN;

    t165 = (x689|((x690/x691)>x692));

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x693 = UINT16_MAX;
	static uint8_t x695 = UINT8_MAX;
	volatile int32_t t166 = 18347669;

    t166 = (x693|((x694/x695)>x696));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x698 = 0;
	volatile int64_t x699 = INT64_MIN;
	volatile int32_t x700 = 137;
	static volatile int32_t t167 = -31407;

    t167 = (x697|((x698/x699)>x700));

    if (t167 != 4) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x701 = INT16_MIN;
	uint64_t x702 = 2294183332815346817LLU;
	volatile int32_t x703 = INT32_MIN;
	static uint64_t x704 = 24661226LLU;
	volatile int32_t t168 = 4176;

    t168 = (x701|((x702/x703)>x704));

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x706 = INT32_MAX;
	uint8_t x707 = UINT8_MAX;
	static int8_t x708 = INT8_MIN;
	static volatile int64_t t169 = 1056708440246LL;

    t169 = (x705|((x706/x707)>x708));

    if (t169 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = INT64_MIN;
	static uint32_t x710 = 180011U;
	uint16_t x711 = 31U;
	int64_t t170 = INT64_MIN;

    t170 = (x709|((x710/x711)>x712));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x713 = 20U;
	int64_t x714 = INT64_MAX;
	volatile uint32_t x715 = 3990U;
	volatile int32_t t171 = 107;

    t171 = (x713|((x714/x715)>x716));

    if (t171 != 21) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x717 = 86;
	volatile uint16_t x718 = UINT16_MAX;
	uint8_t x719 = UINT8_MAX;
	int64_t x720 = -4778571762326LL;

    t172 = (x717|((x718/x719)>x720));

    if (t172 != 87) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x721 = UINT32_MAX;
	static volatile int8_t x723 = -1;
	volatile int16_t x724 = -217;
	uint32_t t173 = UINT32_MAX;

    t173 = (x721|((x722/x723)>x724));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x725 = UINT32_MAX;
	static int8_t x728 = -1;
	uint32_t t174 = UINT32_MAX;

    t174 = (x725|((x726/x727)>x728));

    if (t174 != UINT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x729 = INT32_MIN;
	uint16_t x730 = 22264U;
	uint16_t x731 = 3U;
	uint8_t x732 = UINT8_MAX;
	volatile int32_t t175 = 11621888;

    t175 = (x729|((x730/x731)>x732));

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x733 = -3;
	static uint32_t x734 = 134632924U;
	int16_t x735 = -1;
	static int32_t x736 = -16184885;
	int32_t t176 = 7;

    t176 = (x733|((x734/x735)>x736));

    if (t176 != -3) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x737 = INT8_MAX;
	int64_t x739 = INT64_MIN;
	int32_t x740 = INT32_MIN;
	int32_t t177 = 0;

    t177 = (x737|((x738/x739)>x740));

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x741 = INT32_MIN;
	volatile int32_t x743 = INT32_MAX;
	volatile int32_t t178 = -7380;

    t178 = (x741|((x742/x743)>x744));

    if (t178 != -2147483647) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x746 = 373682U;
	uint64_t x748 = UINT64_MAX;
	uint32_t t179 = 14U;

    t179 = (x745|((x746/x747)>x748));

    if (t179 != 6824U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x749 = -2063;
	int64_t x750 = -1LL;
	uint8_t x751 = UINT8_MAX;
	int16_t x752 = INT16_MAX;
	volatile int32_t t180 = -212;

    t180 = (x749|((x750/x751)>x752));

    if (t180 != -2063) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x753 = INT64_MAX;
	int32_t x754 = INT32_MIN;
	static uint16_t x755 = UINT16_MAX;
	int8_t x756 = INT8_MAX;
	volatile int64_t t181 = INT64_MAX;

    t181 = (x753|((x754/x755)>x756));

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x757 = 3U;
	uint32_t x758 = 1690U;
	uint64_t x759 = UINT64_MAX;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t182 = 144486491;

    t182 = (x757|((x758/x759)>x760));

    if (t182 != 3) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x761 = -1;
	static volatile uint32_t x762 = 2570572U;
	int8_t x763 = -1;
	volatile int16_t x764 = -1;
	volatile int32_t t183 = 32786449;

    t183 = (x761|((x762/x763)>x764));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x765 = UINT32_MAX;
	uint32_t x766 = 11994465U;
	static volatile uint16_t x767 = 3U;
	int32_t x768 = -1;
	volatile uint32_t t184 = UINT32_MAX;

    t184 = (x765|((x766/x767)>x768));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x769 = -1;
	int64_t x771 = INT64_MAX;
	int32_t t185 = -458348;

    t185 = (x769|((x770/x771)>x772));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x773 = 227600499574LLU;
	int16_t x776 = 16;

    t186 = (x773|((x774/x775)>x776));

    if (t186 != 227600499574LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x777 = -1998;
	int16_t x779 = -1;
	int8_t x780 = INT8_MAX;

    t187 = (x777|((x778/x779)>x780));

    if (t187 != -1998) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x781 = 36819;
	static volatile int32_t x782 = INT32_MIN;
	uint32_t x783 = 28U;
	static int16_t x784 = -3;
	volatile int32_t t188 = 743427;

    t188 = (x781|((x782/x783)>x784));

    if (t188 != 36819) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x785 = INT16_MIN;
	int8_t x787 = INT8_MIN;
	int32_t x788 = -4108;
	int32_t t189 = 279;

    t189 = (x785|((x786/x787)>x788));

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x789 = 62;
	static int32_t x790 = 74408;
	static int8_t x791 = INT8_MIN;
	int32_t x792 = -105;
	static volatile int32_t t190 = 111;

    t190 = (x789|((x790/x791)>x792));

    if (t190 != 62) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x794 = -1;
	int32_t x795 = 22;
	uint64_t x796 = 3148295721153676247LLU;

    t191 = (x793|((x794/x795)>x796));

    if (t191 != -75) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = INT32_MIN;
	int8_t x798 = 1;
	int16_t x799 = INT16_MIN;
	uint64_t x800 = UINT64_MAX;
	volatile int32_t t192 = INT32_MIN;

    t192 = (x797|((x798/x799)>x800));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x801 = INT32_MIN;
	static uint16_t x802 = 1829U;
	volatile int16_t x803 = -1;
	uint32_t x804 = 201941020U;
	int32_t t193 = 3769236;

    t193 = (x801|((x802/x803)>x804));

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x806 = 1U;
	static uint8_t x807 = 1U;
	int64_t x808 = 13188944031LL;
	int32_t t194 = -374472957;

    t194 = (x805|((x806/x807)>x808));

    if (t194 != 19) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x809 = INT8_MAX;
	int32_t x810 = -28;
	static volatile uint8_t x811 = 9U;
	static volatile int64_t x812 = 0LL;
	int32_t t195 = -809901;

    t195 = (x809|((x810/x811)>x812));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x814 = UINT16_MAX;
	volatile int8_t x815 = -1;
	static uint8_t x816 = 13U;
	int64_t t196 = INT64_MIN;

    t196 = (x813|((x814/x815)>x816));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x817 = INT64_MAX;
	static uint32_t x819 = 30486708U;
	int8_t x820 = -1;

    t197 = (x817|((x818/x819)>x820));

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x821 = INT8_MIN;
	int16_t x822 = INT16_MAX;
	int64_t x823 = 10881745093474LL;
	int32_t x824 = INT32_MIN;

    t198 = (x821|((x822/x823)>x824));

    if (t198 != -127) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x826 = INT8_MAX;
	int16_t x827 = -1;
	int8_t x828 = -4;

    t199 = (x825|((x826/x827)>x828));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

