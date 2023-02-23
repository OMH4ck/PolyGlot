
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

int8_t x2 = -14;
static int8_t x4 = -1;
static int16_t x5 = 13;
uint8_t x12 = UINT8_MAX;
uint64_t x17 = 29LLU;
static int16_t x21 = INT16_MAX;
int8_t x31 = INT8_MAX;
int32_t t7 = 179165161;
static uint16_t x35 = 20U;
volatile int32_t t8 = 1628;
volatile int8_t x37 = INT8_MAX;
uint64_t x43 = 111224573678LLU;
int16_t x45 = 1;
int32_t t11 = -381106210;
int8_t x50 = INT8_MIN;
int32_t t12 = -1;
int64_t x56 = -1LL;
static int64_t x60 = INT64_MAX;
int8_t x71 = INT8_MAX;
int32_t t17 = -75246643;
uint16_t x80 = 1051U;
int64_t x81 = INT64_MIN;
int16_t x87 = -1;
uint8_t x90 = UINT8_MAX;
int8_t x93 = INT8_MIN;
static volatile uint32_t x95 = UINT32_MAX;
static int64_t x96 = -12LL;
int8_t x97 = INT8_MIN;
int64_t x99 = 5092LL;
uint32_t x103 = 26U;
int64_t x105 = INT64_MAX;
uint64_t x107 = 51974692808565LLU;
int16_t x120 = -1;
uint8_t x124 = 12U;
int8_t x128 = 3;
uint32_t x134 = UINT32_MAX;
static uint16_t x135 = 27U;
int16_t x137 = INT16_MAX;
volatile int32_t t34 = -28714;
int64_t x143 = 268926644LL;
static int32_t t35 = -14390868;
int32_t x145 = INT32_MIN;
static int64_t x157 = -1LL;
static uint8_t x161 = UINT8_MAX;
static uint32_t x162 = 8256872U;
static int32_t x165 = 88;
int32_t x167 = INT32_MAX;
int8_t x175 = 0;
int16_t x177 = INT16_MIN;
static int32_t x178 = INT32_MAX;
volatile int32_t x179 = 4453;
static int64_t x188 = INT64_MIN;
volatile int32_t t47 = 362983;
int32_t x203 = 829016;
volatile int32_t t50 = 922526;
volatile uint8_t x207 = 27U;
uint32_t x210 = UINT32_MAX;
uint8_t x213 = UINT8_MAX;
volatile int32_t t53 = -147207248;
static int8_t x220 = INT8_MIN;
int8_t x224 = INT8_MIN;
uint16_t x226 = 10U;
static volatile int32_t x232 = INT32_MIN;
volatile int32_t t57 = 1972394;
volatile uint32_t x234 = 11105212U;
int64_t x238 = -23187385925745LL;
static volatile int32_t x239 = INT32_MAX;
volatile uint32_t x240 = 199873643U;
static uint16_t x241 = UINT16_MAX;
uint16_t x242 = UINT16_MAX;
uint16_t x244 = 769U;
static int64_t x249 = INT64_MAX;
int8_t x250 = -1;
int16_t x251 = -108;
int16_t x252 = -26;
static volatile int64_t x253 = INT64_MAX;
static volatile int32_t t64 = -6379;
int8_t x267 = INT8_MIN;
volatile int16_t x275 = -1;
volatile int32_t t68 = -165834228;
volatile uint64_t x278 = 735841111915378980LLU;
int16_t x284 = INT16_MIN;
volatile int32_t t70 = 52011;
int16_t x285 = 1;
volatile int32_t t71 = -24502;
uint16_t x296 = 18U;
int32_t t74 = -38703790;
uint32_t x307 = UINT32_MAX;
int32_t x310 = INT32_MIN;
uint8_t x312 = 88U;
uint8_t x316 = 20U;
uint32_t x317 = 3250040U;
int8_t x320 = INT8_MIN;
int16_t x327 = INT16_MIN;
int32_t t83 = -226;
static int64_t x339 = -2940602645190LL;
static volatile int32_t t85 = 2;
int32_t x346 = 131837792;
int32_t x352 = -1;
int8_t x355 = INT8_MIN;
uint16_t x357 = UINT16_MAX;
volatile int32_t t89 = 159;
uint64_t x367 = 617592LLU;
int32_t x369 = -1;
int32_t x375 = -248175;
uint64_t x377 = UINT64_MAX;
int32_t x393 = 333;
uint8_t x401 = UINT8_MAX;
static volatile int8_t x402 = -1;
int32_t x411 = INT32_MIN;
volatile uint64_t x413 = 19LLU;
int64_t x414 = -477LL;
uint8_t x415 = 60U;
int64_t x422 = -1LL;
static int64_t x423 = INT64_MAX;
int16_t x434 = -1;
int32_t x438 = -655;
uint32_t x440 = 15581083U;
volatile uint8_t x443 = 15U;
int64_t x449 = 4088259481344698LL;
int32_t x450 = INT32_MIN;
volatile int32_t t112 = -4;
uint8_t x455 = 0U;
int32_t x457 = 72096881;
int16_t x465 = INT16_MIN;
int32_t t117 = 61367;
int64_t x473 = INT64_MIN;
int16_t x475 = 1;
static volatile int32_t t118 = -1786236;
int8_t x477 = INT8_MIN;
int8_t x478 = -1;
int32_t x483 = -112916;
static volatile int8_t x486 = -1;
int32_t t121 = 2571;
uint32_t x492 = 1391675367U;
int32_t t123 = 20867;
uint32_t x499 = 2085942U;
int8_t x503 = INT8_MAX;
int8_t x533 = INT8_MIN;
uint64_t x537 = 458LLU;
static int64_t x540 = -3732875099LL;
volatile int32_t t134 = -1488165;
uint64_t x548 = UINT64_MAX;
volatile int32_t x549 = 58217;
static int16_t x550 = INT16_MIN;
int32_t t139 = 0;
int16_t x564 = 15;
static int16_t x565 = INT16_MAX;
uint8_t x567 = 41U;
int64_t x568 = INT64_MIN;
uint32_t x579 = 497U;
int32_t t145 = 218;
uint64_t x586 = 20023711LLU;
int32_t x588 = INT32_MIN;
int32_t x593 = -1;
static volatile int32_t x594 = -1;
int64_t x597 = -1LL;
static volatile int32_t t149 = -671;
volatile int32_t t150 = 3032;
volatile uint32_t x617 = UINT32_MAX;
uint8_t x629 = UINT8_MAX;
int32_t x630 = -1;
volatile int32_t t157 = 10618853;
volatile int32_t t160 = -981;
int8_t x647 = -1;
static int64_t x650 = -99815595277404624LL;
int16_t x653 = 333;
volatile uint64_t x654 = UINT64_MAX;
int32_t t163 = 98;
int16_t x657 = -71;
volatile int64_t x660 = INT64_MAX;
int8_t x662 = 3;
int8_t x667 = -1;
int32_t x668 = 147004297;
int32_t t170 = -1;
static int8_t x686 = 0;
int64_t x693 = INT64_MIN;
int32_t x694 = -1;
static int64_t x701 = -124364990395864LL;
uint64_t x706 = 9367613LLU;
static int16_t x707 = INT16_MAX;
int8_t x708 = -1;
int32_t x710 = INT32_MAX;
volatile int32_t t177 = -4089616;
volatile int32_t t179 = 2;
static volatile int32_t t181 = 1338;
int64_t x730 = INT64_MIN;
int32_t x735 = 2517;
static int32_t x744 = INT32_MIN;
static int16_t x746 = INT16_MIN;
uint8_t x750 = UINT8_MAX;
int16_t x759 = INT16_MIN;
volatile int64_t x770 = 482932LL;
int8_t x771 = INT8_MIN;
int8_t x773 = INT8_MIN;
int64_t x776 = -1LL;
int8_t x779 = INT8_MIN;
static int64_t x780 = INT64_MAX;
uint8_t x781 = 0U;
int64_t x782 = INT64_MIN;
volatile int32_t t196 = 602565563;
uint32_t x794 = 2913958U;
volatile uint8_t x797 = 9U;


void f0(void) {
    	static int16_t x1 = 5;
	volatile int32_t x3 = INT32_MAX;
	int32_t t0 = 2280;

    t0 = (x1!=((x2!=x3)<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x6 = UINT32_MAX;
	uint64_t x7 = 21256566LLU;
	static uint8_t x8 = 15U;
	volatile int32_t t1 = 0;

    t1 = (x5!=((x6!=x7)<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = 542U;
	uint8_t x10 = UINT8_MAX;
	int32_t x11 = 97269;
	volatile int32_t t2 = 46538887;

    t2 = (x9!=((x10!=x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x13 = UINT8_MAX;
	volatile uint16_t x14 = 366U;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -61154580;

    t3 = (x13!=((x14!=x15)<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = 0U;
	uint32_t x19 = 2374694U;
	uint8_t x20 = 4U;
	int32_t t4 = -2300706;

    t4 = (x17!=((x18!=x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = 6028U;
	static volatile uint32_t x23 = UINT32_MAX;
	uint32_t x24 = 1674U;
	volatile int32_t t5 = 256561;

    t5 = (x21!=((x22!=x23)<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MAX;
	uint32_t x26 = 3U;
	int64_t x27 = INT64_MAX;
	int32_t x28 = -1;
	volatile int32_t t6 = -627862;

    t6 = (x25!=((x26!=x27)<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 1;
	int32_t x30 = INT32_MAX;
	int8_t x32 = INT8_MIN;

    t7 = (x29!=((x30!=x31)<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 1;
	int16_t x34 = INT16_MIN;
	uint8_t x36 = UINT8_MAX;

    t8 = (x33!=((x34!=x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	uint64_t x40 = 4109771300381471LLU;
	int32_t t9 = 0;

    t9 = (x37!=((x38!=x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	uint16_t x42 = 106U;
	volatile int32_t x44 = 111211;
	volatile int32_t t10 = -5865;

    t10 = (x41!=((x42!=x43)<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x46 = UINT32_MAX;
	uint8_t x47 = 8U;
	volatile int64_t x48 = 15154697LL;

    t11 = (x45!=((x46!=x47)<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 1;
	int8_t x51 = 7;
	uint64_t x52 = 1879216641LLU;

    t12 = (x49!=((x50!=x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MAX;
	uint8_t x54 = 23U;
	int8_t x55 = -1;
	int32_t t13 = -220481;

    t13 = (x53!=((x54!=x55)<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MAX;
	volatile int8_t x58 = INT8_MAX;
	volatile int32_t x59 = -75;
	volatile int32_t t14 = 966182;

    t14 = (x57!=((x58!=x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	uint16_t x62 = 27830U;
	int8_t x63 = 1;
	uint32_t x64 = 81069158U;
	static int32_t t15 = -125539;

    t15 = (x61!=((x62!=x63)<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = INT32_MIN;
	volatile int16_t x68 = -67;
	static int32_t t16 = 5735629;

    t16 = (x65!=((x66!=x67)<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MIN;
	volatile int64_t x72 = INT64_MIN;

    t17 = (x69!=((x70!=x71)<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -21;
	static uint32_t x74 = UINT32_MAX;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MIN;
	int32_t t18 = -15882169;

    t18 = (x73!=((x74!=x75)<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = 9085;
	int32_t x78 = -1;
	volatile int64_t x79 = INT64_MIN;
	int32_t t19 = 34388;

    t19 = (x77!=((x78!=x79)<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MAX;
	volatile int16_t x84 = 1027;
	volatile int32_t t20 = -256121;

    t20 = (x81!=((x82!=x83)<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x85 = 36120093043764LLU;
	int32_t x86 = INT32_MAX;
	static uint8_t x88 = UINT8_MAX;
	int32_t t21 = 0;

    t21 = (x85!=((x86!=x87)<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 1;
	uint8_t x91 = 15U;
	int16_t x92 = -1;
	static int32_t t22 = 0;

    t22 = (x89!=((x90!=x91)<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = INT8_MIN;
	volatile int32_t t23 = -3;

    t23 = (x93!=((x94!=x95)<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x98 = UINT64_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	static int32_t t24 = -4229;

    t24 = (x97!=((x98!=x99)<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	int64_t x102 = INT64_MIN;
	volatile int16_t x104 = INT16_MIN;
	int32_t t25 = 3756;

    t25 = (x101!=((x102!=x103)<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = INT32_MIN;
	int8_t x108 = -32;
	static volatile int32_t t26 = -1;

    t26 = (x105!=((x106!=x107)<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -13;
	uint16_t x110 = 10U;
	uint32_t x111 = 529681971U;
	uint8_t x112 = 1U;
	int32_t t27 = -6;

    t27 = (x109!=((x110!=x111)<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -7;
	uint32_t x114 = UINT32_MAX;
	int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = -5892;

    t28 = (x113!=((x114!=x115)<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	static int32_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int32_t t29 = 166320;

    t29 = (x117!=((x118!=x119)<=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = -1;
	int8_t x122 = -1;
	int16_t x123 = INT16_MIN;
	volatile int32_t t30 = 7;

    t30 = (x121!=((x122!=x123)<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = UINT16_MAX;
	static uint16_t x126 = UINT16_MAX;
	int8_t x127 = 1;
	int32_t t31 = -835828185;

    t31 = (x125!=((x126!=x127)<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = 2;
	int8_t x130 = -1;
	int32_t x131 = -307117;
	int8_t x132 = INT8_MIN;
	static int32_t t32 = 60562;

    t32 = (x129!=((x130!=x131)<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -3699671LL;
	uint32_t x136 = 504156U;
	volatile int32_t t33 = 61267307;

    t33 = (x133!=((x134!=x135)<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	volatile int8_t x139 = INT8_MIN;
	static int64_t x140 = INT64_MIN;

    t34 = (x137!=((x138!=x139)<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	int32_t x142 = INT32_MAX;
	static uint64_t x144 = 21486987LLU;

    t35 = (x141!=((x142!=x143)<=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = -2738;

    t36 = (x145!=((x146!=x147)<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	int32_t x150 = -1;
	int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t37 = 466555;

    t37 = (x149!=((x150!=x151)<=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 8337;
	uint32_t x154 = UINT32_MAX;
	uint32_t x155 = 57U;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = -1769945;

    t38 = (x153!=((x154!=x155)<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = INT64_MIN;
	uint8_t x159 = UINT8_MAX;
	int64_t x160 = INT64_MIN;
	int32_t t39 = -22;

    t39 = (x157!=((x158!=x159)<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x163 = 8U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t40 = 5;

    t40 = (x161!=((x162!=x163)<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x166 = INT32_MAX;
	int8_t x168 = -1;
	int32_t t41 = -24504898;

    t41 = (x165!=((x166!=x167)<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x169 = UINT8_MAX;
	static int64_t x170 = -2887921LL;
	int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 0;

    t42 = (x169!=((x170!=x171)<=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = -1LL;
	int16_t x174 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -77253;

    t43 = (x173!=((x174!=x175)<=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x180 = INT64_MIN;
	volatile int32_t t44 = -2;

    t44 = (x177!=((x178!=x179)<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MAX;
	static uint16_t x182 = UINT16_MAX;
	int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MIN;
	static int32_t t45 = -5792;

    t45 = (x181!=((x182!=x183)<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = INT32_MIN;
	uint8_t x186 = 1U;
	uint32_t x187 = 48518U;
	volatile int32_t t46 = 6653559;

    t46 = (x185!=((x186!=x187)<=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MIN;
	static uint64_t x192 = UINT64_MAX;

    t47 = (x189!=((x190!=x191)<=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	int64_t x194 = -3566082423592LL;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t48 = -1908932;

    t48 = (x193!=((x194!=x195)<=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 21U;
	int32_t x198 = -736154239;
	int8_t x199 = INT8_MIN;
	static volatile uint32_t x200 = 6578U;
	static int32_t t49 = -3215;

    t49 = (x197!=((x198!=x199)<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	int32_t x204 = INT32_MAX;

    t50 = (x201!=((x202!=x203)<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	static uint32_t x206 = UINT32_MAX;
	int32_t x208 = -13;
	volatile int32_t t51 = -26;

    t51 = (x205!=((x206!=x207)<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 17;
	volatile int16_t x211 = INT16_MAX;
	uint64_t x212 = 256178483015LLU;
	static int32_t t52 = -647946539;

    t52 = (x209!=((x210!=x211)<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x214 = -1;
	uint8_t x215 = 7U;
	static int8_t x216 = INT8_MIN;

    t53 = (x213!=((x214!=x215)<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = UINT32_MAX;
	uint8_t x218 = 14U;
	int32_t x219 = INT32_MIN;
	volatile int32_t t54 = 15;

    t54 = (x217!=((x218!=x219)<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = -1LL;
	int32_t x222 = -981123;
	uint8_t x223 = 1U;
	volatile int32_t t55 = -11;

    t55 = (x221!=((x222!=x223)<=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x225 = 112923U;
	int32_t x227 = INT32_MIN;
	static int8_t x228 = 1;
	volatile int32_t t56 = 16;

    t56 = (x225!=((x226!=x227)<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = -1;
	uint32_t x230 = 1U;
	uint16_t x231 = 2U;

    t57 = (x229!=((x230!=x231)<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x233 = 154U;
	int8_t x235 = INT8_MAX;
	static int32_t x236 = -365;
	int32_t t58 = -8554;

    t58 = (x233!=((x234!=x235)<=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	int32_t t59 = 24;

    t59 = (x237!=((x238!=x239)<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x243 = -1;
	volatile int32_t t60 = -9546;

    t60 = (x241!=((x242!=x243)<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x245 = UINT32_MAX;
	static uint16_t x246 = UINT16_MAX;
	static uint8_t x247 = UINT8_MAX;
	int8_t x248 = -1;
	volatile int32_t t61 = -6791659;

    t61 = (x245!=((x246!=x247)<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t t62 = 91930168;

    t62 = (x249!=((x250!=x251)<=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = 53U;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = 0U;
	static int32_t t63 = -8292;

    t63 = (x253!=((x254!=x255)<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	int8_t x258 = -9;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 21U;

    t64 = (x257!=((x258!=x259)<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MAX;
	static uint32_t x262 = UINT32_MAX;
	int64_t x263 = -2LL;
	uint32_t x264 = 5138U;
	int32_t t65 = 58682764;

    t65 = (x261!=((x262!=x263)<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -59;
	static volatile int16_t x266 = INT16_MAX;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = 1;

    t66 = (x265!=((x266!=x267)<=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	uint8_t x270 = 0U;
	uint8_t x271 = UINT8_MAX;
	uint32_t x272 = 490038U;
	static volatile int32_t t67 = 65425226;

    t67 = (x269!=((x270!=x271)<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	volatile int8_t x274 = INT8_MIN;
	volatile int64_t x276 = INT64_MIN;

    t68 = (x273!=((x274!=x275)<=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 3273524LL;
	int8_t x279 = INT8_MAX;
	int8_t x280 = 1;
	static volatile int32_t t69 = -16;

    t69 = (x277!=((x278!=x279)<=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MAX;
	int8_t x283 = -1;

    t70 = (x281!=((x282!=x283)<=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -2;
	volatile uint8_t x287 = 0U;
	static int16_t x288 = -1;

    t71 = (x285!=((x286!=x287)<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MAX;
	int8_t x290 = INT8_MIN;
	static int32_t x291 = -3508;
	static int8_t x292 = -1;
	static volatile int32_t t72 = 801;

    t72 = (x289!=((x290!=x291)<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = INT16_MIN;
	volatile int8_t x294 = -1;
	int16_t x295 = 13267;
	static int32_t t73 = 1;

    t73 = (x293!=((x294!=x295)<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = 30185U;
	int32_t x298 = -1;
	static uint16_t x299 = 18U;
	int32_t x300 = 2312495;

    t74 = (x297!=((x298!=x299)<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MAX;
	static int16_t x302 = INT16_MAX;
	static volatile int16_t x303 = INT16_MIN;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 1;

    t75 = (x301!=((x302!=x303)<=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint64_t x305 = UINT64_MAX;
	int8_t x306 = 0;
	int16_t x308 = INT16_MIN;
	int32_t t76 = -1066536;

    t76 = (x305!=((x306!=x307)<=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = UINT8_MAX;
	int32_t x311 = -1;
	static volatile int32_t t77 = 4034065;

    t77 = (x309!=((x310!=x311)<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x313 = -1;
	static int16_t x314 = 3114;
	volatile int8_t x315 = INT8_MAX;
	volatile int32_t t78 = 3888;

    t78 = (x313!=((x314!=x315)<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x318 = UINT16_MAX;
	volatile int16_t x319 = -2;
	volatile int32_t t79 = -108041709;

    t79 = (x317!=((x318!=x319)<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	static volatile int16_t x322 = 6557;
	uint32_t x323 = UINT32_MAX;
	uint16_t x324 = 2462U;
	volatile int32_t t80 = -4683;

    t80 = (x321!=((x322!=x323)<=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 284U;
	volatile int32_t x326 = INT32_MIN;
	int16_t x328 = 1859;
	volatile int32_t t81 = -65749439;

    t81 = (x325!=((x326!=x327)<=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -3804150LL;
	volatile int32_t x330 = 9;
	int32_t x331 = -39;
	static int32_t x332 = -148561225;
	volatile int32_t t82 = 57397610;

    t82 = (x329!=((x330!=x331)<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = 218;
	int32_t x334 = -1;
	static volatile int16_t x335 = -1;
	static int32_t x336 = 13304734;

    t83 = (x333!=((x334!=x335)<=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	volatile int8_t x338 = INT8_MIN;
	static int64_t x340 = INT64_MIN;
	static volatile int32_t t84 = 1;

    t84 = (x337!=((x338!=x339)<=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 337983095452470235LLU;
	static int32_t x342 = 0;
	static volatile uint32_t x343 = UINT32_MAX;
	int64_t x344 = 3401LL;

    t85 = (x341!=((x342!=x343)<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = INT16_MIN;
	uint32_t x347 = UINT32_MAX;
	uint8_t x348 = 64U;
	int32_t t86 = -22;

    t86 = (x345!=((x346!=x347)<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 423U;
	int16_t x350 = INT16_MAX;
	int64_t x351 = 11142252314587LL;
	volatile int32_t t87 = -7;

    t87 = (x349!=((x350!=x351)<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = UINT64_MAX;
	static volatile int32_t x354 = INT32_MIN;
	volatile int64_t x356 = -1LL;
	static volatile int32_t t88 = 0;

    t88 = (x353!=((x354!=x355)<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x358 = -1LL;
	int64_t x359 = INT64_MIN;
	int16_t x360 = -1;

    t89 = (x357!=((x358!=x359)<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x361 = -1;
	static int32_t x362 = -237573;
	int16_t x363 = -1;
	static int32_t x364 = INT32_MIN;
	static volatile int32_t t90 = 26;

    t90 = (x361!=((x362!=x363)<=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MIN;
	int32_t x368 = 4028329;
	volatile int32_t t91 = 15761452;

    t91 = (x365!=((x366!=x367)<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	volatile int8_t x372 = INT8_MAX;
	int32_t t92 = 712;

    t92 = (x369!=((x370!=x371)<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x373 = UINT64_MAX;
	int16_t x374 = INT16_MIN;
	static uint8_t x376 = 3U;
	volatile int32_t t93 = 6649341;

    t93 = (x373!=((x374!=x375)<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x378 = INT8_MAX;
	uint64_t x379 = 66766895386767LLU;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t94 = -779840672;

    t94 = (x377!=((x378!=x379)<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	uint8_t x382 = 40U;
	static int32_t x383 = INT32_MAX;
	uint32_t x384 = 98765U;
	static int32_t t95 = 490;

    t95 = (x381!=((x382!=x383)<=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	int32_t x386 = 515241160;
	int64_t x387 = INT64_MIN;
	int16_t x388 = 2;
	volatile int32_t t96 = 447896212;

    t96 = (x385!=((x386!=x387)<=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = INT8_MIN;
	volatile int8_t x390 = -1;
	static uint64_t x391 = UINT64_MAX;
	uint64_t x392 = 28241143551573LLU;
	volatile int32_t t97 = -244;

    t97 = (x389!=((x390!=x391)<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = 283856;
	volatile int64_t x395 = INT64_MAX;
	uint32_t x396 = 1054438U;
	int32_t t98 = 3742;

    t98 = (x393!=((x394!=x395)<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = -1839997116338LL;
	volatile uint32_t x398 = 1777U;
	static uint32_t x399 = UINT32_MAX;
	uint16_t x400 = 115U;
	static int32_t t99 = 7647895;

    t99 = (x397!=((x398!=x399)<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MIN;
	volatile int32_t t100 = -5293;

    t100 = (x401!=((x402!=x403)<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	int8_t x406 = INT8_MIN;
	uint8_t x407 = 51U;
	static int64_t x408 = INT64_MIN;
	volatile int32_t t101 = 2308;

    t101 = (x405!=((x406!=x407)<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x409 = 121U;
	uint32_t x410 = UINT32_MAX;
	uint8_t x412 = 21U;
	volatile int32_t t102 = -1;

    t102 = (x409!=((x410!=x411)<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x416 = 1U;
	int32_t t103 = -2271579;

    t103 = (x413!=((x414!=x415)<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	uint32_t x418 = 215457519U;
	static volatile uint32_t x419 = 3675U;
	uint16_t x420 = UINT16_MAX;
	int32_t t104 = 403;

    t104 = (x417!=((x418!=x419)<=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = 52U;
	uint64_t x424 = 45630301928LLU;
	volatile int32_t t105 = -1248;

    t105 = (x421!=((x422!=x423)<=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 452LL;
	int8_t x426 = INT8_MIN;
	int32_t x427 = INT32_MAX;
	int8_t x428 = -1;
	volatile int32_t t106 = 26210628;

    t106 = (x425!=((x426!=x427)<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MAX;
	uint64_t x430 = UINT64_MAX;
	int32_t x431 = -1;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = -151711699;

    t107 = (x429!=((x430!=x431)<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -8;
	int16_t x435 = -290;
	uint64_t x436 = 109LLU;
	volatile int32_t t108 = 70371;

    t108 = (x433!=((x434!=x435)<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = UINT64_MAX;
	static volatile uint64_t x439 = 972293888306439296LLU;
	int32_t t109 = -664;

    t109 = (x437!=((x438!=x439)<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 3U;
	int32_t x442 = INT32_MIN;
	volatile int8_t x444 = INT8_MAX;
	volatile int32_t t110 = 954;

    t110 = (x441!=((x442!=x443)<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 368U;
	uint8_t x446 = 27U;
	int32_t x447 = 660989865;
	uint64_t x448 = UINT64_MAX;
	int32_t t111 = 1;

    t111 = (x445!=((x446!=x447)<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x451 = -1;
	uint16_t x452 = UINT16_MAX;

    t112 = (x449!=((x450!=x451)<=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MAX;
	static int64_t x454 = 782194710421LL;
	static volatile uint32_t x456 = 9U;
	static int32_t t113 = -61127041;

    t113 = (x453!=((x454!=x455)<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = INT32_MIN;
	volatile int8_t x459 = -15;
	int64_t x460 = INT64_MIN;
	int32_t t114 = -222404;

    t114 = (x457!=((x458!=x459)<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile int64_t x462 = 2180297LL;
	int32_t x463 = INT32_MIN;
	uint32_t x464 = UINT32_MAX;
	static int32_t t115 = 1181;

    t115 = (x461!=((x462!=x463)<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MIN;
	int8_t x468 = 32;
	volatile int32_t t116 = 1223852;

    t116 = (x465!=((x466!=x467)<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	static int32_t x470 = -13975273;
	int64_t x471 = INT64_MAX;
	int64_t x472 = INT64_MIN;

    t117 = (x469!=((x470!=x471)<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x474 = INT64_MIN;
	static int8_t x476 = -1;

    t118 = (x473!=((x474!=x475)<=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x479 = 813U;
	int64_t x480 = INT64_MAX;
	volatile int32_t t119 = 91127;

    t119 = (x477!=((x478!=x479)<=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = 1LL;
	int32_t x482 = -1;
	volatile int16_t x484 = -1;
	volatile int32_t t120 = 146590242;

    t120 = (x481!=((x482!=x483)<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	uint32_t x487 = UINT32_MAX;
	static int64_t x488 = 0LL;

    t121 = (x485!=((x486!=x487)<=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = UINT16_MAX;
	volatile int32_t x490 = -1;
	int8_t x491 = -1;
	int32_t t122 = -11811;

    t122 = (x489!=((x490!=x491)<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x493 = INT8_MIN;
	static volatile int32_t x494 = INT32_MAX;
	int32_t x495 = INT32_MIN;
	uint8_t x496 = UINT8_MAX;

    t123 = (x493!=((x494!=x495)<=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MAX;
	uint16_t x498 = UINT16_MAX;
	static int64_t x500 = -3890260LL;
	static int32_t t124 = -1;

    t124 = (x497!=((x498!=x499)<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x501 = 1U;
	int32_t x502 = INT32_MAX;
	int32_t x504 = INT32_MAX;
	int32_t t125 = 1;

    t125 = (x501!=((x502!=x503)<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MAX;
	int32_t x506 = -40;
	static int8_t x507 = INT8_MIN;
	int16_t x508 = -1;
	volatile int32_t t126 = -58;

    t126 = (x505!=((x506!=x507)<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 495U;
	int8_t x510 = INT8_MAX;
	int8_t x511 = -1;
	volatile int8_t x512 = -1;
	static volatile int32_t t127 = -6645;

    t127 = (x509!=((x510!=x511)<=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = -1;
	int16_t x514 = INT16_MIN;
	uint64_t x515 = UINT64_MAX;
	static int8_t x516 = INT8_MIN;
	static int32_t t128 = 4853357;

    t128 = (x513!=((x514!=x515)<=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = 76U;
	static int8_t x518 = INT8_MIN;
	int8_t x519 = 33;
	uint64_t x520 = 424LLU;
	int32_t t129 = -325;

    t129 = (x517!=((x518!=x519)<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = -1LL;
	uint32_t x522 = 63U;
	uint32_t x523 = UINT32_MAX;
	uint32_t x524 = UINT32_MAX;
	int32_t t130 = -2013143;

    t130 = (x521!=((x522!=x523)<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -40;
	int64_t x526 = -1LL;
	static int8_t x527 = 11;
	static uint32_t x528 = 232U;
	volatile int32_t t131 = 91727;

    t131 = (x525!=((x526!=x527)<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MAX;
	static volatile uint32_t x530 = UINT32_MAX;
	static uint64_t x531 = UINT64_MAX;
	int16_t x532 = INT16_MAX;
	int32_t t132 = -2242;

    t132 = (x529!=((x530!=x531)<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = 9672493901190264LL;
	static int32_t x535 = 96227139;
	static volatile int64_t x536 = 93LL;
	static volatile int32_t t133 = -57;

    t133 = (x533!=((x534!=x535)<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x538 = INT8_MIN;
	static int16_t x539 = INT16_MAX;

    t134 = (x537!=((x538!=x539)<=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 75;
	int32_t x542 = -9;
	int16_t x543 = INT16_MIN;
	int64_t x544 = INT64_MIN;
	int32_t t135 = 66822888;

    t135 = (x541!=((x542!=x543)<=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	uint16_t x546 = 16367U;
	int32_t x547 = INT32_MAX;
	int32_t t136 = -3;

    t136 = (x545!=((x546!=x547)<=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x551 = 1;
	int16_t x552 = -855;
	int32_t t137 = -4696677;

    t137 = (x549!=((x550!=x551)<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = INT16_MAX;
	int32_t x554 = INT32_MIN;
	int32_t x555 = INT32_MAX;
	int8_t x556 = INT8_MIN;
	int32_t t138 = -16009588;

    t138 = (x553!=((x554!=x555)<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MAX;
	volatile int32_t x558 = INT32_MIN;
	volatile uint32_t x559 = 456493U;
	uint64_t x560 = 99257802946LLU;

    t139 = (x557!=((x558!=x559)<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x561 = INT8_MIN;
	int16_t x562 = INT16_MAX;
	int8_t x563 = 10;
	int32_t t140 = -128065;

    t140 = (x561!=((x562!=x563)<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x566 = INT64_MIN;
	volatile int32_t t141 = 49021;

    t141 = (x565!=((x566!=x567)<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 649566350U;
	volatile uint8_t x570 = UINT8_MAX;
	uint8_t x571 = 12U;
	int8_t x572 = -1;
	volatile int32_t t142 = -85798689;

    t142 = (x569!=((x570!=x571)<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MIN;
	volatile uint32_t x574 = UINT32_MAX;
	volatile uint32_t x575 = UINT32_MAX;
	uint8_t x576 = 1U;
	static volatile int32_t t143 = -6099011;

    t143 = (x573!=((x574!=x575)<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x577 = 0U;
	static int32_t x578 = INT32_MIN;
	int16_t x580 = -1;
	volatile int32_t t144 = 1136;

    t144 = (x577!=((x578!=x579)<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	int32_t x582 = INT32_MIN;
	int64_t x583 = INT64_MIN;
	uint32_t x584 = UINT32_MAX;

    t145 = (x581!=((x582!=x583)<=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = INT64_MIN;
	int8_t x587 = 1;
	volatile int32_t t146 = 1297;

    t146 = (x585!=((x586!=x587)<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MAX;
	uint8_t x590 = 8U;
	volatile int64_t x591 = INT64_MAX;
	uint32_t x592 = 2954U;
	volatile int32_t t147 = 27;

    t147 = (x589!=((x590!=x591)<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x595 = 2;
	uint32_t x596 = 1023U;
	int32_t t148 = -7645;

    t148 = (x593!=((x594!=x595)<=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x598 = UINT8_MAX;
	volatile int8_t x599 = -5;
	int64_t x600 = INT64_MAX;

    t149 = (x597!=((x598!=x599)<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = 0;
	static volatile int64_t x602 = 1689LL;
	int64_t x603 = INT64_MIN;
	int16_t x604 = INT16_MIN;

    t150 = (x601!=((x602!=x603)<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x605 = UINT16_MAX;
	volatile int16_t x606 = INT16_MIN;
	uint8_t x607 = UINT8_MAX;
	volatile uint32_t x608 = UINT32_MAX;
	static int32_t t151 = -1;

    t151 = (x605!=((x606!=x607)<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	uint8_t x610 = 98U;
	int16_t x611 = -1;
	static int16_t x612 = INT16_MAX;
	int32_t t152 = 759;

    t152 = (x609!=((x610!=x611)<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 239983U;
	volatile int32_t x614 = INT32_MAX;
	uint64_t x615 = UINT64_MAX;
	int32_t x616 = -1;
	volatile int32_t t153 = -1061;

    t153 = (x613!=((x614!=x615)<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x618 = INT64_MAX;
	uint64_t x619 = UINT64_MAX;
	int64_t x620 = INT64_MIN;
	volatile int32_t t154 = -30538741;

    t154 = (x617!=((x618!=x619)<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = -50540383226101LL;
	uint64_t x622 = UINT64_MAX;
	static int64_t x623 = INT64_MIN;
	int64_t x624 = -1LL;
	static int32_t t155 = -150704;

    t155 = (x621!=((x622!=x623)<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	int64_t x626 = -1LL;
	static volatile uint32_t x627 = UINT32_MAX;
	int8_t x628 = INT8_MAX;
	int32_t t156 = 1122336;

    t156 = (x625!=((x626!=x627)<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x631 = INT16_MIN;
	uint64_t x632 = 12153133593886LLU;

    t157 = (x629!=((x630!=x631)<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	uint32_t x634 = 5324U;
	int16_t x635 = -1;
	uint8_t x636 = 0U;
	static int32_t t158 = -1769911;

    t158 = (x633!=((x634!=x635)<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = UINT16_MAX;
	int16_t x638 = -1;
	static int8_t x639 = INT8_MIN;
	int8_t x640 = -1;
	static volatile int32_t t159 = 11819060;

    t159 = (x637!=((x638!=x639)<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 96121416;
	uint8_t x642 = UINT8_MAX;
	int16_t x643 = INT16_MAX;
	volatile int32_t x644 = INT32_MIN;

    t160 = (x641!=((x642!=x643)<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MAX;
	int32_t x646 = INT32_MIN;
	uint64_t x648 = UINT64_MAX;
	volatile int32_t t161 = 1776;

    t161 = (x645!=((x646!=x647)<=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x649 = UINT16_MAX;
	int32_t x651 = 8163;
	volatile uint8_t x652 = UINT8_MAX;
	int32_t t162 = 4;

    t162 = (x649!=((x650!=x651)<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x655 = -1;
	volatile int64_t x656 = INT64_MIN;

    t163 = (x653!=((x654!=x655)<=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x658 = INT32_MIN;
	int64_t x659 = INT64_MIN;
	int32_t t164 = 1892;

    t164 = (x657!=((x658!=x659)<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 2;
	int8_t x663 = -1;
	uint16_t x664 = UINT16_MAX;
	volatile int32_t t165 = 322;

    t165 = (x661!=((x662!=x663)<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint32_t x665 = 15826U;
	static int32_t x666 = -3163;
	volatile int32_t t166 = 1;

    t166 = (x665!=((x666!=x667)<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = INT8_MIN;
	uint16_t x670 = UINT16_MAX;
	volatile int8_t x671 = INT8_MIN;
	static int8_t x672 = -1;
	volatile int32_t t167 = -3032;

    t167 = (x669!=((x670!=x671)<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 361;
	volatile int8_t x674 = -1;
	int16_t x675 = INT16_MIN;
	int32_t x676 = INT32_MAX;
	static volatile int32_t t168 = -1244;

    t168 = (x673!=((x674!=x675)<=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x677 = 0U;
	uint32_t x678 = 224U;
	volatile int32_t x679 = -1;
	int64_t x680 = -1LL;
	int32_t t169 = -2;

    t169 = (x677!=((x678!=x679)<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = 38;
	volatile int16_t x682 = 1;
	int64_t x683 = 11798806081458LL;
	static uint64_t x684 = 11162045878700LLU;

    t170 = (x681!=((x682!=x683)<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x685 = INT64_MIN;
	static int8_t x687 = INT8_MIN;
	int8_t x688 = -30;
	int32_t t171 = 389;

    t171 = (x685!=((x686!=x687)<=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = INT8_MAX;
	int8_t x690 = 53;
	int32_t x691 = -1;
	static uint8_t x692 = 85U;
	static volatile int32_t t172 = 75;

    t172 = (x689!=((x690!=x691)<=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x695 = -177059365096116LL;
	static int16_t x696 = INT16_MIN;
	static int32_t t173 = 694;

    t173 = (x693!=((x694!=x695)<=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = 18605U;
	volatile int16_t x698 = -149;
	uint16_t x699 = 9092U;
	uint64_t x700 = 15930110108189LLU;
	volatile int32_t t174 = 22951;

    t174 = (x697!=((x698!=x699)<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x702 = UINT16_MAX;
	static volatile int32_t x703 = INT32_MIN;
	int64_t x704 = -1LL;
	int32_t t175 = 1005972538;

    t175 = (x701!=((x702!=x703)<=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 1064U;
	volatile int32_t t176 = 15665;

    t176 = (x705!=((x706!=x707)<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = 1425587U;
	uint64_t x711 = 270275375201333079LLU;
	uint16_t x712 = 338U;

    t177 = (x709!=((x710!=x711)<=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	static volatile uint16_t x714 = 31U;
	volatile uint32_t x715 = 1U;
	uint16_t x716 = 31U;
	static volatile int32_t t178 = -56;

    t178 = (x713!=((x714!=x715)<=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -3960;
	uint8_t x718 = UINT8_MAX;
	volatile int16_t x719 = INT16_MIN;
	static int64_t x720 = INT64_MIN;

    t179 = (x717!=((x718!=x719)<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = 0;
	volatile uint8_t x722 = 7U;
	int8_t x723 = INT8_MIN;
	int16_t x724 = INT16_MIN;
	int32_t t180 = 6657;

    t180 = (x721!=((x722!=x723)<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = -219159426;
	int64_t x726 = 4378568142780204LL;
	uint32_t x727 = 4476U;
	int64_t x728 = -3120979540068LL;

    t181 = (x725!=((x726!=x727)<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 117LLU;
	uint8_t x731 = UINT8_MAX;
	static volatile int64_t x732 = INT64_MAX;
	volatile int32_t t182 = 3830704;

    t182 = (x729!=((x730!=x731)<=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 9054215LLU;
	static int8_t x734 = INT8_MIN;
	int64_t x736 = -348882090LL;
	static volatile int32_t t183 = 26475;

    t183 = (x733!=((x734!=x735)<=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = INT16_MAX;
	int8_t x738 = -1;
	uint8_t x739 = 7U;
	int32_t x740 = INT32_MIN;
	volatile int32_t t184 = -78153;

    t184 = (x737!=((x738!=x739)<=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	int32_t x742 = 79411994;
	volatile int32_t x743 = INT32_MAX;
	volatile int32_t t185 = 1679549;

    t185 = (x741!=((x742!=x743)<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x745 = 74;
	volatile int8_t x747 = -1;
	volatile int64_t x748 = INT64_MIN;
	volatile int32_t t186 = -2174;

    t186 = (x745!=((x746!=x747)<=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 14U;
	int8_t x751 = INT8_MIN;
	uint16_t x752 = UINT16_MAX;
	int32_t t187 = 41;

    t187 = (x749!=((x750!=x751)<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	int32_t x754 = -59;
	volatile uint32_t x755 = 2011832075U;
	int8_t x756 = -1;
	static int32_t t188 = 4760166;

    t188 = (x753!=((x754!=x755)<=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -1;
	uint64_t x758 = 55058LLU;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t189 = 47536859;

    t189 = (x757!=((x758!=x759)<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	int64_t x762 = -85448738563698LL;
	int8_t x763 = INT8_MIN;
	volatile int16_t x764 = -110;
	static int32_t t190 = 0;

    t190 = (x761!=((x762!=x763)<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MIN;
	int64_t x766 = 14197LL;
	volatile int16_t x767 = INT16_MIN;
	uint16_t x768 = 59U;
	volatile int32_t t191 = 963118;

    t191 = (x765!=((x766!=x767)<=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = -34;
	int32_t x772 = INT32_MIN;
	volatile int32_t t192 = 61447685;

    t192 = (x769!=((x770!=x771)<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x774 = UINT16_MAX;
	volatile int16_t x775 = -3806;
	int32_t t193 = 6020;

    t193 = (x773!=((x774!=x775)<=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 5834U;
	uint64_t x778 = 28LLU;
	static int32_t t194 = -84117;

    t194 = (x777!=((x778!=x779)<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x783 = INT16_MIN;
	uint8_t x784 = 8U;
	int32_t t195 = -884038;

    t195 = (x781!=((x782!=x783)<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x785 = -9979;
	int32_t x786 = -402788;
	int8_t x787 = 1;
	uint32_t x788 = UINT32_MAX;

    t196 = (x785!=((x786!=x787)<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = 1057741452063LL;
	int64_t x790 = INT64_MIN;
	int16_t x791 = 965;
	uint16_t x792 = 0U;
	int32_t t197 = -393;

    t197 = (x789!=((x790!=x791)<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = -8009;
	int16_t x795 = INT16_MIN;
	static uint64_t x796 = UINT64_MAX;
	volatile int32_t t198 = -45128355;

    t198 = (x793!=((x794!=x795)<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x798 = UINT8_MAX;
	static volatile int32_t x799 = INT32_MIN;
	int32_t x800 = INT32_MIN;
	int32_t t199 = 35853900;

    t199 = (x797!=((x798!=x799)<=x800));

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

