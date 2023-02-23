
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

static int8_t x5 = 2;
int8_t x7 = -24;
volatile int32_t x9 = INT32_MIN;
int16_t x15 = INT16_MIN;
static int8_t x17 = -1;
int64_t x25 = INT64_MIN;
volatile int32_t t6 = 46582850;
int8_t x35 = INT8_MAX;
uint64_t x39 = 1639LLU;
int32_t x48 = INT32_MIN;
static int32_t t12 = 16511851;
volatile int16_t x54 = -1;
uint8_t x69 = 18U;
volatile int32_t t17 = -104983;
int32_t x76 = 26;
volatile int32_t t19 = 105;
volatile int32_t x84 = INT32_MIN;
int64_t x88 = INT64_MAX;
uint32_t x91 = 7936966U;
volatile int64_t x97 = INT64_MIN;
int16_t x99 = INT16_MIN;
uint16_t x104 = UINT16_MAX;
uint32_t x106 = UINT32_MAX;
volatile int32_t t26 = 1;
volatile int32_t t27 = 1;
int32_t x114 = INT32_MIN;
uint16_t x123 = UINT16_MAX;
volatile int32_t t30 = 1203625;
uint32_t x128 = 3440425U;
int32_t t32 = 422325;
volatile int32_t t33 = 2090530;
static uint16_t x139 = 86U;
static int32_t x142 = 8479314;
int32_t x143 = INT32_MIN;
uint64_t x145 = 58400928832301084LLU;
volatile int32_t t36 = -15;
volatile int32_t t38 = 633974112;
int8_t x160 = 0;
static int8_t x162 = INT8_MIN;
static uint8_t x163 = 8U;
uint32_t x167 = 1322U;
int32_t t42 = 159;
int64_t x174 = INT64_MAX;
static int32_t t43 = 966611667;
volatile int32_t t45 = 16046;
uint16_t x185 = 378U;
int64_t x188 = -20091058486LL;
volatile int32_t t48 = 5264;
int8_t x199 = 0;
volatile uint32_t x212 = 16060U;
int16_t x214 = 215;
uint8_t x216 = UINT8_MAX;
static int32_t x220 = 96;
volatile int16_t x222 = INT16_MIN;
uint8_t x228 = UINT8_MAX;
volatile int32_t t56 = 1242;
volatile uint64_t x232 = UINT64_MAX;
int32_t t57 = -2;
int32_t x240 = 7;
volatile int32_t t60 = 91409955;
uint16_t x245 = 3928U;
uint8_t x248 = 5U;
volatile int32_t t61 = 61412516;
int16_t x254 = -1;
volatile int32_t t64 = 1;
int16_t x263 = INT16_MAX;
volatile uint32_t x265 = UINT32_MAX;
volatile int64_t x267 = -1LL;
int16_t x268 = -206;
int32_t x270 = INT32_MIN;
static volatile int64_t x273 = -41980LL;
uint32_t x275 = 517561U;
static int32_t t72 = -136662047;
int8_t x299 = 50;
volatile int64_t x300 = 918328LL;
int32_t x301 = INT32_MIN;
int8_t x302 = INT8_MIN;
int16_t x304 = -30;
volatile int64_t x312 = INT64_MAX;
uint32_t x315 = 8781U;
int64_t x319 = INT64_MIN;
static int32_t x322 = 62196512;
int64_t x324 = -1064729000586718LL;
volatile int32_t t80 = 16970721;
volatile int32_t t81 = -10399;
int8_t x329 = INT8_MIN;
int32_t t82 = 157;
volatile int64_t x337 = 7579599521LL;
int32_t x341 = 21796;
uint16_t x342 = UINT16_MAX;
uint64_t x344 = 11740856605890LLU;
static volatile int32_t t85 = -128600345;
int8_t x353 = INT8_MIN;
volatile int32_t t88 = -4093493;
int64_t x358 = -1LL;
uint32_t x362 = 1791521371U;
int8_t x374 = INT8_MIN;
uint64_t x376 = 9232LLU;
int8_t x377 = INT8_MIN;
int16_t x382 = INT16_MIN;
volatile int32_t t95 = 1;
int32_t t96 = -102;
static int16_t x390 = INT16_MIN;
volatile uint16_t x394 = UINT16_MAX;
int64_t x397 = INT64_MAX;
static uint8_t x404 = 12U;
uint64_t x408 = 228043122193533186LLU;
static int32_t t101 = -5503;
uint8_t x427 = 30U;
static uint8_t x436 = 23U;
uint16_t x439 = 71U;
volatile int64_t x443 = INT64_MIN;
volatile int32_t t111 = 75152441;
int64_t x456 = INT64_MIN;
int32_t x457 = INT32_MIN;
int32_t x458 = INT32_MIN;
volatile int64_t x462 = -1LL;
volatile uint64_t x474 = 242689879LLU;
static volatile int64_t x478 = INT64_MIN;
uint16_t x499 = 111U;
volatile int64_t x505 = 12090125377438LL;
int32_t t128 = 5899;
uint8_t x521 = UINT8_MAX;
uint64_t x522 = 4LLU;
int8_t x523 = -1;
int32_t t130 = -3452062;
int16_t x527 = -210;
static int8_t x528 = 4;
uint32_t x529 = 202391454U;
uint8_t x535 = UINT8_MAX;
static int32_t x541 = -5;
uint16_t x547 = 28U;
int32_t t136 = -193295998;
static int8_t x555 = INT8_MIN;
static volatile uint32_t x557 = UINT32_MAX;
int32_t t139 = 127397;
volatile int32_t x563 = -309643411;
volatile int8_t x565 = INT8_MAX;
static uint8_t x577 = 0U;
int32_t x581 = INT32_MIN;
volatile uint8_t x583 = 3U;
volatile int8_t x591 = INT8_MAX;
int16_t x596 = -1;
volatile int32_t t149 = 128143796;
uint16_t x603 = 19378U;
volatile int32_t t150 = -2737;
volatile int32_t x608 = -1;
uint16_t x610 = UINT16_MAX;
volatile int64_t x612 = INT64_MAX;
volatile int32_t x621 = INT32_MIN;
uint8_t x627 = 3U;
int32_t t156 = 59054375;
int32_t t157 = 88;
static int8_t x635 = -1;
uint64_t x636 = UINT64_MAX;
int32_t x656 = -1;
uint8_t x669 = 1U;
volatile int32_t t169 = -125;
int64_t x699 = INT64_MIN;
volatile int32_t t174 = 1050155166;
int8_t x710 = INT8_MIN;
uint16_t x712 = 13850U;
int32_t t177 = 2519;
int32_t t178 = -16562;
int32_t x723 = -368;
int16_t x725 = INT16_MIN;
uint64_t x730 = 7655265393241887LLU;
static uint32_t x731 = UINT32_MAX;
int64_t x735 = INT64_MIN;
int32_t t183 = -3974991;
uint32_t x756 = 37849596U;
int64_t x758 = 2LL;
int32_t t190 = 213987;
static int64_t x772 = -1LL;
int8_t x781 = -2;
int8_t x788 = 37;
static volatile int32_t t197 = -353783;
int8_t x795 = -1;
int8_t x800 = 1;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int8_t x2 = 6;
	int16_t x3 = -1;
	volatile int8_t x4 = 1;
	int32_t t0 = 567787454;

    t0 = (x1==((x2<=x3)^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -8601;
	int8_t x8 = -1;
	int32_t t1 = 371665081;

    t1 = (x5==((x6<=x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = -133;
	volatile int64_t x11 = INT64_MIN;
	uint8_t x12 = 0U;
	int32_t t2 = 2153338;

    t2 = (x9==((x10<=x11)^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static int8_t x14 = INT8_MAX;
	static volatile int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = -8217;

    t3 = (x13==((x14<=x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 1LLU;
	int8_t x19 = INT8_MAX;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -508470983;

    t4 = (x17==((x18<=x19)^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = 1;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = 52;
	volatile int64_t x24 = 10897300777162609LL;
	volatile int32_t t5 = 152281570;

    t5 = (x21==((x22<=x23)^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x26 = 10U;
	volatile int8_t x27 = -5;
	int64_t x28 = INT64_MIN;

    t6 = (x25==((x26<=x27)^x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	uint32_t x30 = 1U;
	int8_t x31 = -1;
	volatile uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -27287676;

    t7 = (x29==((x30<=x31)^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -834690045342952LL;
	int32_t x34 = INT32_MIN;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = -50994;

    t8 = (x33==((x34<=x35)^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	static int16_t x38 = 7;
	uint8_t x40 = 7U;
	int32_t t9 = -21276246;

    t9 = (x37==((x38<=x39)^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x41 = 720687153U;
	volatile int64_t x42 = INT64_MIN;
	static int16_t x43 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = 7554691;

    t10 = (x41==((x42<=x43)^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 15806127430781509LLU;
	uint8_t x46 = UINT8_MAX;
	uint16_t x47 = 3U;
	volatile int32_t t11 = -58394;

    t11 = (x45==((x46<=x47)^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = INT8_MIN;
	int8_t x50 = 1;
	static volatile uint8_t x51 = UINT8_MAX;
	static int64_t x52 = INT64_MIN;

    t12 = (x49==((x50<=x51)^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = UINT64_MAX;
	uint64_t x55 = 103030219402076640LLU;
	volatile int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 28005298;

    t13 = (x53==((x54<=x55)^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = -1;
	int64_t x58 = INT64_MIN;
	volatile int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	static int32_t t14 = 19375;

    t14 = (x57==((x58<=x59)^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	static uint64_t x62 = 41LLU;
	int8_t x63 = 18;
	int16_t x64 = -1;
	int32_t t15 = -5;

    t15 = (x61==((x62<=x63)^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	uint8_t x66 = 1U;
	volatile int64_t x67 = INT64_MIN;
	int16_t x68 = -1;
	volatile int32_t t16 = -21344308;

    t16 = (x65==((x66<=x67)^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MAX;

    t17 = (x69==((x70<=x71)^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int32_t x74 = -1;
	volatile int8_t x75 = 44;
	int32_t t18 = 17347186;

    t18 = (x73==((x74<=x75)^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	int8_t x78 = INT8_MIN;
	int64_t x79 = INT64_MAX;
	uint64_t x80 = UINT64_MAX;

    t19 = (x77==((x78<=x79)^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	static int64_t x82 = -365508940988209774LL;
	int32_t x83 = INT32_MIN;
	static int32_t t20 = -1141;

    t20 = (x81==((x82<=x83)^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = 39U;
	int32_t x86 = INT32_MAX;
	int16_t x87 = 0;
	int32_t t21 = 116;

    t21 = (x85==((x86<=x87)^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = UINT32_MAX;
	int16_t x90 = INT16_MAX;
	int8_t x92 = INT8_MIN;
	static int32_t t22 = -63705607;

    t22 = (x89==((x90<=x91)^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 443;
	int16_t x94 = INT16_MAX;
	static volatile int32_t x95 = INT32_MAX;
	static int8_t x96 = -1;
	int32_t t23 = -467639;

    t23 = (x93==((x94<=x95)^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x98 = UINT64_MAX;
	uint16_t x100 = 59U;
	int32_t t24 = 2;

    t24 = (x97==((x98<=x99)^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 1257331467933LLU;
	int16_t x102 = -1409;
	volatile int16_t x103 = -128;
	volatile int32_t t25 = 662648000;

    t25 = (x101==((x102<=x103)^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x105 = 1189U;
	static volatile int64_t x107 = 38581087090035066LL;
	static int32_t x108 = -366365452;

    t26 = (x105==((x106<=x107)^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 643833LL;
	uint16_t x110 = UINT16_MAX;
	uint64_t x111 = 478902431LLU;
	int16_t x112 = INT16_MAX;

    t27 = (x109==((x110<=x111)^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 1;
	static uint16_t x115 = 1U;
	int8_t x116 = -3;
	int32_t t28 = -230186338;

    t28 = (x113==((x114<=x115)^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MIN;
	volatile uint32_t x119 = 26812U;
	int32_t x120 = INT32_MIN;
	static int32_t t29 = 273;

    t29 = (x117==((x118<=x119)^x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x121 = INT32_MIN;
	static int64_t x122 = INT64_MAX;
	int8_t x124 = INT8_MIN;

    t30 = (x121==((x122<=x123)^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	static uint16_t x126 = 93U;
	static int16_t x127 = 3013;
	int32_t t31 = -1;

    t31 = (x125==((x126<=x127)^x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = UINT8_MAX;
	int64_t x130 = INT64_MIN;
	volatile uint8_t x131 = 5U;
	uint32_t x132 = 2342683U;

    t32 = (x129==((x130<=x131)^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -1;
	uint8_t x134 = 1U;
	uint32_t x135 = 64U;
	int64_t x136 = INT64_MAX;

    t33 = (x133==((x134<=x135)^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	static int32_t x138 = INT32_MAX;
	uint32_t x140 = 32805336U;
	int32_t t34 = -104472251;

    t34 = (x137==((x138<=x139)^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -245;

    t35 = (x141==((x142<=x143)^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = INT8_MIN;
	int16_t x147 = -1885;
	volatile int32_t x148 = INT32_MIN;

    t36 = (x145==((x146<=x147)^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = 126553589;
	int16_t x150 = INT16_MIN;
	int16_t x151 = 1098;
	int16_t x152 = -1;
	volatile int32_t t37 = -4;

    t37 = (x149==((x150<=x151)^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = 10U;
	int32_t x154 = INT32_MIN;
	int16_t x155 = 22;
	int32_t x156 = INT32_MIN;

    t38 = (x153==((x154<=x155)^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 6267531699721345450LLU;
	int8_t x158 = 1;
	int32_t x159 = INT32_MIN;
	static int32_t t39 = -162623;

    t39 = (x157==((x158<=x159)^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -1;
	int32_t x164 = -18004;
	static volatile int32_t t40 = 794508847;

    t40 = (x161==((x162<=x163)^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = -1;
	int64_t x166 = INT64_MAX;
	uint8_t x168 = 97U;
	volatile int32_t t41 = 1019876742;

    t41 = (x165==((x166<=x167)^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	int8_t x170 = -2;
	static volatile int8_t x171 = INT8_MAX;
	uint64_t x172 = UINT64_MAX;

    t42 = (x169==((x170<=x171)^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = UINT8_MAX;
	uint8_t x175 = 38U;
	static int64_t x176 = 484976688846806198LL;

    t43 = (x173==((x174<=x175)^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = INT64_MAX;
	uint8_t x178 = UINT8_MAX;
	volatile int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 173999;

    t44 = (x177==((x178<=x179)^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	static uint16_t x182 = 0U;
	volatile int32_t x183 = INT32_MIN;
	uint8_t x184 = UINT8_MAX;

    t45 = (x181==((x182<=x183)^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = 383356534976350752LLU;
	int8_t x187 = INT8_MIN;
	static int32_t t46 = -697304;

    t46 = (x185==((x186<=x187)^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MAX;
	int8_t x190 = -1;
	int8_t x191 = INT8_MIN;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -126723725;

    t47 = (x189==((x190<=x191)^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 655U;
	uint64_t x194 = UINT64_MAX;
	int32_t x195 = 21363769;
	int16_t x196 = INT16_MIN;

    t48 = (x193==((x194<=x195)^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	uint64_t x198 = UINT64_MAX;
	uint64_t x200 = 1386694148384LLU;
	volatile int32_t t49 = 30471938;

    t49 = (x197==((x198<=x199)^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -199;
	volatile int8_t x202 = -1;
	uint64_t x203 = 1LLU;
	int64_t x204 = -169469LL;
	volatile int32_t t50 = 3731191;

    t50 = (x201==((x202<=x203)^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	int8_t x206 = 2;
	volatile int32_t x207 = INT32_MIN;
	static int64_t x208 = INT64_MAX;
	volatile int32_t t51 = 5167221;

    t51 = (x205==((x206<=x207)^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = UINT64_MAX;
	int64_t x210 = -999243LL;
	int8_t x211 = -1;
	volatile int32_t t52 = 949;

    t52 = (x209==((x210<=x211)^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = INT8_MIN;
	static volatile uint16_t x215 = 171U;
	volatile int32_t t53 = -1323175;

    t53 = (x213==((x214<=x215)^x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	static int16_t x218 = 2736;
	int8_t x219 = 0;
	int32_t t54 = -183;

    t54 = (x217==((x218<=x219)^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	int8_t x223 = INT8_MAX;
	uint32_t x224 = UINT32_MAX;
	int32_t t55 = 0;

    t55 = (x221==((x222<=x223)^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int64_t x226 = 222581883164LL;
	uint16_t x227 = 5882U;

    t56 = (x225==((x226<=x227)^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	int32_t x230 = -3;
	uint16_t x231 = 10U;

    t57 = (x229==((x230<=x231)^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x233 = 1U;
	uint8_t x234 = 48U;
	static volatile uint64_t x235 = 46088LLU;
	static int64_t x236 = 1008446872333766LL;
	volatile int32_t t58 = 506738105;

    t58 = (x233==((x234<=x235)^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	static int8_t x238 = INT8_MAX;
	int8_t x239 = INT8_MIN;
	volatile int32_t t59 = 207584;

    t59 = (x237==((x238<=x239)^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x241 = 23201U;
	volatile int16_t x242 = -561;
	int8_t x243 = 6;
	static int32_t x244 = INT32_MAX;

    t60 = (x241==((x242<=x243)^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x246 = -1;
	int64_t x247 = INT64_MAX;

    t61 = (x245==((x246<=x247)^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = 41;
	volatile int64_t x250 = -1LL;
	volatile int8_t x251 = 7;
	uint8_t x252 = 12U;
	volatile int32_t t62 = -128173;

    t62 = (x249==((x250<=x251)^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 10LLU;
	int32_t x255 = INT32_MAX;
	int64_t x256 = INT64_MIN;
	static int32_t t63 = 1873777;

    t63 = (x253==((x254<=x255)^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MAX;
	volatile int64_t x258 = -480006974521515LL;
	int8_t x259 = INT8_MIN;
	static volatile int8_t x260 = INT8_MAX;

    t64 = (x257==((x258<=x259)^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	static int8_t x262 = INT8_MIN;
	uint8_t x264 = 6U;
	static int32_t t65 = -24081;

    t65 = (x261==((x262<=x263)^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x266 = -1;
	int32_t t66 = 360;

    t66 = (x265==((x266<=x267)^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = INT32_MIN;
	int16_t x271 = -1721;
	static uint64_t x272 = 1050215718LLU;
	volatile int32_t t67 = -39578266;

    t67 = (x269==((x270<=x271)^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x274 = INT64_MAX;
	uint8_t x276 = 4U;
	int32_t t68 = -1597816;

    t68 = (x273==((x274<=x275)^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = INT64_MIN;
	static int16_t x278 = INT16_MIN;
	static int16_t x279 = INT16_MIN;
	uint8_t x280 = UINT8_MAX;
	int32_t t69 = 66546412;

    t69 = (x277==((x278<=x279)^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = UINT64_MAX;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = -53999;
	int16_t x284 = -1;
	int32_t t70 = -624954155;

    t70 = (x281==((x282<=x283)^x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -4;
	int64_t x286 = -1LL;
	volatile int64_t x287 = INT64_MIN;
	static int16_t x288 = 1;
	int32_t t71 = 1;

    t71 = (x285==((x286<=x287)^x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 503766269LL;
	uint16_t x290 = UINT16_MAX;
	uint16_t x291 = 241U;
	static uint8_t x292 = UINT8_MAX;

    t72 = (x289==((x290<=x291)^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = -1;
	int8_t x294 = 5;
	uint16_t x295 = 311U;
	volatile uint16_t x296 = 24604U;
	static volatile int32_t t73 = 265587;

    t73 = (x293==((x294<=x295)^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	static int8_t x298 = -1;
	volatile int32_t t74 = -3620071;

    t74 = (x297==((x298<=x299)^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x303 = -6;
	static int32_t t75 = 0;

    t75 = (x301==((x302<=x303)^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = 35331059LL;
	int32_t x306 = INT32_MIN;
	int32_t x307 = 939;
	uint64_t x308 = 39666905LLU;
	int32_t t76 = -75843;

    t76 = (x305==((x306<=x307)^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 475660687U;
	static volatile int64_t x310 = -1LL;
	uint16_t x311 = 350U;
	volatile int32_t t77 = 966;

    t77 = (x309==((x310<=x311)^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	uint64_t x314 = UINT64_MAX;
	volatile uint16_t x316 = UINT16_MAX;
	int32_t t78 = 2413;

    t78 = (x313==((x314<=x315)^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	static int16_t x318 = 13;
	volatile uint64_t x320 = 2467657084236337LLU;
	int32_t t79 = -1380446;

    t79 = (x317==((x318<=x319)^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x321 = INT64_MIN;
	int32_t x323 = INT32_MIN;

    t80 = (x321==((x322<=x323)^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x325 = 1507998773U;
	uint8_t x326 = 2U;
	int16_t x327 = -94;
	volatile uint32_t x328 = 117690933U;

    t81 = (x325==((x326<=x327)^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x330 = -1;
	uint8_t x331 = 28U;
	volatile uint16_t x332 = UINT16_MAX;

    t82 = (x329==((x330<=x331)^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MIN;
	static volatile uint16_t x335 = 35U;
	int8_t x336 = 1;
	int32_t t83 = 558585760;

    t83 = (x333==((x334<=x335)^x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x338 = 9LLU;
	static volatile uint16_t x339 = 961U;
	int64_t x340 = INT64_MIN;
	static int32_t t84 = 27;

    t84 = (x337==((x338<=x339)^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x343 = 1;

    t85 = (x341==((x342<=x343)^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	volatile uint32_t x346 = 281487590U;
	static int32_t x347 = INT32_MIN;
	int16_t x348 = -746;
	int32_t t86 = 106;

    t86 = (x345==((x346<=x347)^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = INT32_MAX;
	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = -1;
	uint32_t x352 = 57534170U;
	int32_t t87 = 66139663;

    t87 = (x349==((x350<=x351)^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x354 = -1LL;
	volatile int64_t x355 = -1569421LL;
	uint64_t x356 = 1028130780LLU;

    t88 = (x353==((x354<=x355)^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x357 = -1128;
	static int64_t x359 = INT64_MIN;
	int8_t x360 = -1;
	volatile int32_t t89 = -6;

    t89 = (x357==((x358<=x359)^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = INT32_MAX;
	volatile uint64_t x363 = UINT64_MAX;
	int32_t x364 = -1541;
	int32_t t90 = 36770764;

    t90 = (x361==((x362<=x363)^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -5;
	uint64_t x366 = UINT64_MAX;
	int16_t x367 = INT16_MIN;
	int32_t x368 = 5;
	static volatile int32_t t91 = 677790508;

    t91 = (x365==((x366<=x367)^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MIN;
	static volatile uint32_t x370 = 259303806U;
	int32_t x371 = -63346;
	volatile uint64_t x372 = 1438428151156293747LLU;
	volatile int32_t t92 = 1;

    t92 = (x369==((x370<=x371)^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 2U;
	int8_t x375 = INT8_MIN;
	volatile int32_t t93 = -57;

    t93 = (x373==((x374<=x375)^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = INT16_MIN;
	static volatile int64_t x379 = -174718826609LL;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = 1;

    t94 = (x377==((x378<=x379)^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	uint8_t x383 = 119U;
	static int64_t x384 = 55711424600247LL;

    t95 = (x381==((x382<=x383)^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MIN;
	uint32_t x386 = 653425906U;
	static volatile uint8_t x387 = 20U;
	static int16_t x388 = -7610;

    t96 = (x385==((x386<=x387)^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MAX;
	uint8_t x391 = 15U;
	int64_t x392 = -1LL;
	int32_t t97 = -293;

    t97 = (x389==((x390<=x391)^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	volatile uint16_t x395 = 3U;
	int64_t x396 = -2941LL;
	static int32_t t98 = 452373479;

    t98 = (x393==((x394<=x395)^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x398 = 43958055U;
	int8_t x399 = INT8_MAX;
	int32_t x400 = INT32_MIN;
	int32_t t99 = -18998;

    t99 = (x397==((x398<=x399)^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = UINT8_MAX;
	static int16_t x402 = INT16_MAX;
	int32_t x403 = INT32_MAX;
	static int32_t t100 = -206900758;

    t100 = (x401==((x402<=x403)^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = 9;
	static uint16_t x406 = 1U;
	int64_t x407 = INT64_MAX;

    t101 = (x405==((x406<=x407)^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x409 = UINT64_MAX;
	int8_t x410 = INT8_MAX;
	volatile int64_t x411 = -1LL;
	volatile uint32_t x412 = UINT32_MAX;
	volatile int32_t t102 = -116;

    t102 = (x409==((x410<=x411)^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = -1;
	uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MIN;
	static uint8_t x416 = 1U;
	static volatile int32_t t103 = 49;

    t103 = (x413==((x414<=x415)^x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	int16_t x418 = 399;
	volatile uint16_t x419 = 17U;
	int64_t x420 = -1LL;
	int32_t t104 = 1;

    t104 = (x417==((x418<=x419)^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	static int64_t x422 = INT64_MAX;
	int16_t x423 = -1;
	int16_t x424 = -258;
	int32_t t105 = 49106;

    t105 = (x421==((x422<=x423)^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	uint16_t x426 = 1U;
	volatile uint64_t x428 = 851370741953202LLU;
	int32_t t106 = -871;

    t106 = (x425==((x426<=x427)^x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 5U;
	uint32_t x430 = 6U;
	volatile uint8_t x431 = 2U;
	int8_t x432 = -1;
	volatile int32_t t107 = 228207099;

    t107 = (x429==((x430<=x431)^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MAX;
	uint32_t x434 = UINT32_MAX;
	int32_t x435 = INT32_MIN;
	volatile int32_t t108 = -255;

    t108 = (x433==((x434<=x435)^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 209LL;
	volatile uint16_t x438 = 10190U;
	uint8_t x440 = 82U;
	static volatile int32_t t109 = -6;

    t109 = (x437==((x438<=x439)^x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 8U;
	int32_t x442 = 1082;
	uint64_t x444 = 3359349LLU;
	volatile int32_t t110 = 348772;

    t110 = (x441==((x442<=x443)^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 46LLU;
	int64_t x446 = INT64_MIN;
	uint16_t x447 = UINT16_MAX;
	uint8_t x448 = UINT8_MAX;

    t111 = (x445==((x446<=x447)^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x449 = 729100LLU;
	int8_t x450 = INT8_MIN;
	volatile uint32_t x451 = UINT32_MAX;
	int32_t x452 = INT32_MIN;
	int32_t t112 = -241786;

    t112 = (x449==((x450<=x451)^x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x453 = -110632;
	int8_t x454 = INT8_MIN;
	int16_t x455 = INT16_MAX;
	int32_t t113 = -34098364;

    t113 = (x453==((x454<=x455)^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x459 = UINT32_MAX;
	int8_t x460 = 0;
	int32_t t114 = -312;

    t114 = (x457==((x458<=x459)^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = UINT16_MAX;
	uint16_t x463 = UINT16_MAX;
	uint64_t x464 = 205249319932LLU;
	static int32_t t115 = -975840408;

    t115 = (x461==((x462<=x463)^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = INT8_MIN;
	int32_t x466 = 107;
	uint64_t x467 = 60LLU;
	int32_t x468 = 467;
	static volatile int32_t t116 = -35;

    t116 = (x465==((x466<=x467)^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	int16_t x470 = INT16_MIN;
	int64_t x471 = 638743LL;
	uint16_t x472 = 20U;
	int32_t t117 = -13;

    t117 = (x469==((x470<=x471)^x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 20424LLU;
	uint8_t x475 = 75U;
	static int32_t x476 = INT32_MIN;
	int32_t t118 = 977421;

    t118 = (x473==((x474<=x475)^x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = INT8_MIN;
	int64_t x479 = -112103447LL;
	volatile uint8_t x480 = UINT8_MAX;
	volatile int32_t t119 = 22545;

    t119 = (x477==((x478<=x479)^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	uint64_t x482 = UINT64_MAX;
	volatile int32_t x483 = -1;
	int64_t x484 = -1LL;
	int32_t t120 = 207351;

    t120 = (x481==((x482<=x483)^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = 6574876647880LL;
	int32_t x486 = 186;
	static int32_t x487 = -1;
	uint16_t x488 = 45U;
	int32_t t121 = -5698;

    t121 = (x485==((x486<=x487)^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x489 = UINT16_MAX;
	static uint32_t x490 = UINT32_MAX;
	int16_t x491 = INT16_MIN;
	volatile int32_t x492 = -1;
	int32_t t122 = 806;

    t122 = (x489==((x490<=x491)^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	int64_t x494 = INT64_MIN;
	uint32_t x495 = UINT32_MAX;
	int8_t x496 = 1;
	int32_t t123 = 830150;

    t123 = (x493==((x494<=x495)^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 29726U;
	int64_t x498 = INT64_MIN;
	int64_t x500 = 253822175245273LL;
	volatile int32_t t124 = 1339235;

    t124 = (x497==((x498<=x499)^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -1;
	int8_t x502 = -30;
	int64_t x503 = -1LL;
	static int16_t x504 = -1;
	static int32_t t125 = -464;

    t125 = (x501==((x502<=x503)^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x506 = 13U;
	static volatile int64_t x507 = INT64_MIN;
	static int8_t x508 = -4;
	int32_t t126 = -615092619;

    t126 = (x505==((x506<=x507)^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x509 = INT16_MIN;
	uint8_t x510 = 0U;
	uint64_t x511 = 20934675098734LLU;
	uint16_t x512 = 3345U;
	volatile int32_t t127 = -5529;

    t127 = (x509==((x510<=x511)^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MAX;
	int64_t x514 = INT64_MIN;
	int16_t x515 = INT16_MAX;
	int64_t x516 = INT64_MIN;

    t128 = (x513==((x514<=x515)^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int64_t x518 = INT64_MIN;
	static uint16_t x519 = 6428U;
	volatile uint16_t x520 = 48U;
	volatile int32_t t129 = -722;

    t129 = (x517==((x518<=x519)^x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x524 = INT8_MAX;

    t130 = (x521==((x522<=x523)^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MAX;
	int32_t x526 = INT32_MIN;
	static int32_t t131 = -119452;

    t131 = (x525==((x526<=x527)^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x530 = INT8_MIN;
	int8_t x531 = -1;
	int64_t x532 = INT64_MAX;
	int32_t t132 = 272;

    t132 = (x529==((x530<=x531)^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x533 = INT32_MIN;
	static int32_t x534 = INT32_MIN;
	uint16_t x536 = 393U;
	volatile int32_t t133 = -1303;

    t133 = (x533==((x534<=x535)^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 20732509966LLU;
	int16_t x538 = -795;
	int32_t x539 = INT32_MAX;
	volatile int64_t x540 = INT64_MIN;
	int32_t t134 = 2664;

    t134 = (x537==((x538<=x539)^x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = -1;
	static uint8_t x543 = 0U;
	volatile uint64_t x544 = 15478978LLU;
	volatile int32_t t135 = 107050;

    t135 = (x541==((x542<=x543)^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x545 = UINT8_MAX;
	int8_t x546 = INT8_MAX;
	int64_t x548 = -1LL;

    t136 = (x545==((x546<=x547)^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	int8_t x550 = -13;
	volatile uint8_t x551 = 56U;
	int16_t x552 = INT16_MIN;
	volatile int32_t t137 = -59317203;

    t137 = (x549==((x550<=x551)^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	static int16_t x554 = INT16_MIN;
	int8_t x556 = -1;
	int32_t t138 = 1775;

    t138 = (x553==((x554<=x555)^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x558 = INT64_MIN;
	int16_t x559 = INT16_MIN;
	volatile uint16_t x560 = UINT16_MAX;

    t139 = (x557==((x558<=x559)^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -1LL;
	uint8_t x562 = 62U;
	int16_t x564 = INT16_MAX;
	int32_t t140 = 1289748;

    t140 = (x561==((x562<=x563)^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x566 = 0U;
	static int32_t x567 = INT32_MIN;
	int64_t x568 = INT64_MAX;
	static int32_t t141 = 14;

    t141 = (x565==((x566<=x567)^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MAX;
	static int32_t x570 = -219;
	static uint32_t x571 = 68889U;
	int16_t x572 = INT16_MAX;
	int32_t t142 = 771;

    t142 = (x569==((x570<=x571)^x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	static int16_t x574 = -5424;
	int8_t x575 = 0;
	uint16_t x576 = 3U;
	static int32_t t143 = 3724936;

    t143 = (x573==((x574<=x575)^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = INT16_MAX;
	uint16_t x579 = 4558U;
	int8_t x580 = -1;
	static volatile int32_t t144 = -1;

    t144 = (x577==((x578<=x579)^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x582 = INT32_MIN;
	int16_t x584 = INT16_MAX;
	volatile int32_t t145 = 0;

    t145 = (x581==((x582<=x583)^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = 949;
	int32_t x586 = INT32_MIN;
	int16_t x587 = 256;
	static int16_t x588 = INT16_MIN;
	volatile int32_t t146 = -689;

    t146 = (x585==((x586<=x587)^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	int32_t x590 = INT32_MIN;
	uint8_t x592 = UINT8_MAX;
	int32_t t147 = 144876710;

    t147 = (x589==((x590<=x591)^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = UINT16_MAX;
	volatile int16_t x594 = INT16_MIN;
	static volatile uint32_t x595 = 1U;
	volatile int32_t t148 = 0;

    t148 = (x593==((x594<=x595)^x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	int8_t x598 = 20;
	int32_t x599 = 13331;
	volatile int64_t x600 = -1LL;

    t149 = (x597==((x598<=x599)^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = -1;
	volatile int32_t x602 = INT32_MIN;
	volatile int16_t x604 = 1;

    t150 = (x601==((x602<=x603)^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	uint64_t x606 = 7016793743300357821LLU;
	static int64_t x607 = INT64_MIN;
	int32_t t151 = 151334;

    t151 = (x605==((x606<=x607)^x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = UINT64_MAX;
	int16_t x611 = INT16_MIN;
	volatile int32_t t152 = 7467724;

    t152 = (x609==((x610<=x611)^x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = -666380LL;
	int8_t x614 = -36;
	uint16_t x615 = UINT16_MAX;
	int16_t x616 = 57;
	volatile int32_t t153 = 152;

    t153 = (x613==((x614<=x615)^x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	int8_t x618 = -1;
	static int64_t x619 = 3LL;
	static int64_t x620 = INT64_MAX;
	volatile int32_t t154 = -620122;

    t154 = (x617==((x618<=x619)^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x622 = 764944627892245LLU;
	int8_t x623 = -29;
	int16_t x624 = -1;
	int32_t t155 = 345;

    t155 = (x621==((x622<=x623)^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x625 = 0U;
	int32_t x626 = 31631958;
	volatile int16_t x628 = -1;

    t156 = (x625==((x626<=x627)^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = INT16_MIN;
	uint32_t x630 = 54U;
	int32_t x631 = INT32_MAX;
	int16_t x632 = INT16_MIN;

    t157 = (x629==((x630<=x631)^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	uint16_t x634 = 8730U;
	static int32_t t158 = -77;

    t158 = (x633==((x634<=x635)^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = UINT8_MAX;
	static uint16_t x638 = 780U;
	static int16_t x639 = 54;
	static uint64_t x640 = 1LLU;
	static int32_t t159 = 1450007;

    t159 = (x637==((x638<=x639)^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = INT8_MIN;
	int32_t x642 = -1;
	volatile int8_t x643 = -63;
	int64_t x644 = INT64_MIN;
	static volatile int32_t t160 = 576;

    t160 = (x641==((x642<=x643)^x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	int32_t x646 = INT32_MIN;
	volatile int32_t x647 = -494725946;
	int16_t x648 = -1;
	static int32_t t161 = -5454918;

    t161 = (x645==((x646<=x647)^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -11964LL;
	int64_t x650 = -106098LL;
	volatile int8_t x651 = INT8_MIN;
	uint32_t x652 = 120767U;
	int32_t t162 = 189;

    t162 = (x649==((x650<=x651)^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 56;
	int64_t x654 = INT64_MAX;
	uint8_t x655 = UINT8_MAX;
	int32_t t163 = -477625691;

    t163 = (x653==((x654<=x655)^x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MAX;
	int32_t x658 = 190;
	int16_t x659 = 3007;
	static volatile int8_t x660 = INT8_MIN;
	int32_t t164 = 1057567;

    t164 = (x657==((x658<=x659)^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	uint64_t x662 = UINT64_MAX;
	uint8_t x663 = UINT8_MAX;
	volatile int16_t x664 = INT16_MAX;
	volatile int32_t t165 = 254;

    t165 = (x661==((x662<=x663)^x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 15657526797288913LLU;
	int64_t x666 = -1LL;
	uint16_t x667 = 102U;
	int64_t x668 = INT64_MIN;
	int32_t t166 = -2149339;

    t166 = (x665==((x666<=x667)^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x670 = UINT32_MAX;
	static int64_t x671 = INT64_MIN;
	uint32_t x672 = 41754U;
	int32_t t167 = -10868;

    t167 = (x669==((x670<=x671)^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x673 = 6U;
	uint32_t x674 = 183185834U;
	int16_t x675 = INT16_MAX;
	static volatile int64_t x676 = 2458641LL;
	volatile int32_t t168 = -1;

    t168 = (x673==((x674<=x675)^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	int32_t x678 = -1;
	volatile uint64_t x679 = 800778028001040371LLU;
	uint16_t x680 = 3962U;

    t169 = (x677==((x678<=x679)^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MIN;
	int64_t x682 = -1LL;
	int8_t x683 = -1;
	volatile int32_t x684 = INT32_MAX;
	volatile int32_t t170 = -591;

    t170 = (x681==((x682<=x683)^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x685 = INT64_MIN;
	int32_t x686 = INT32_MIN;
	static int32_t x687 = 0;
	int16_t x688 = -1;
	static int32_t t171 = 15010;

    t171 = (x685==((x686<=x687)^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	int16_t x690 = -1;
	static volatile int8_t x691 = INT8_MIN;
	int64_t x692 = INT64_MAX;
	volatile int32_t t172 = 2015009;

    t172 = (x689==((x690<=x691)^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	int16_t x694 = -1;
	volatile int8_t x695 = INT8_MAX;
	int32_t x696 = 11600;
	volatile int32_t t173 = -9048262;

    t173 = (x693==((x694<=x695)^x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MAX;
	int8_t x698 = INT8_MIN;
	volatile uint16_t x700 = UINT16_MAX;

    t174 = (x697==((x698<=x699)^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = -1;
	int8_t x702 = 1;
	static uint64_t x703 = 8064LLU;
	uint8_t x704 = 10U;
	volatile int32_t t175 = 2160;

    t175 = (x701==((x702<=x703)^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	int8_t x706 = -1;
	volatile int16_t x707 = -10421;
	volatile int16_t x708 = 11989;
	volatile int32_t t176 = 788;

    t176 = (x705==((x706<=x707)^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 1490681U;
	uint8_t x711 = 0U;

    t177 = (x709==((x710<=x711)^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 1308334291401LL;
	static uint8_t x714 = 0U;
	int8_t x715 = 10;
	static int32_t x716 = -180187068;

    t178 = (x713==((x714<=x715)^x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	int8_t x718 = -1;
	int64_t x719 = INT64_MAX;
	uint16_t x720 = UINT16_MAX;
	int32_t t179 = 1934;

    t179 = (x717==((x718<=x719)^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 2U;
	uint64_t x722 = UINT64_MAX;
	uint32_t x724 = 266U;
	volatile int32_t t180 = 508949;

    t180 = (x721==((x722<=x723)^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = INT16_MIN;
	volatile int8_t x727 = 59;
	static int64_t x728 = INT64_MAX;
	int32_t t181 = 47;

    t181 = (x725==((x726<=x727)^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MAX;
	uint8_t x732 = 12U;
	int32_t t182 = -795448;

    t182 = (x729==((x730<=x731)^x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	volatile uint32_t x734 = 78U;
	static int8_t x736 = -1;

    t183 = (x733==((x734<=x735)^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = INT32_MIN;
	int32_t x738 = -1;
	volatile uint64_t x739 = 6LLU;
	int32_t x740 = INT32_MIN;
	volatile int32_t t184 = 1;

    t184 = (x737==((x738<=x739)^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	int64_t x742 = -1LL;
	int64_t x743 = INT64_MIN;
	volatile int8_t x744 = INT8_MAX;
	volatile int32_t t185 = 10899;

    t185 = (x741==((x742<=x743)^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	int64_t x746 = -13801914684479LL;
	static uint64_t x747 = 119643951305LLU;
	int16_t x748 = INT16_MIN;
	volatile int32_t t186 = -119;

    t186 = (x745==((x746<=x747)^x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x749 = 84720953937LL;
	int16_t x750 = 18;
	uint64_t x751 = 5672086936091085247LLU;
	static int16_t x752 = 3;
	volatile int32_t t187 = -360;

    t187 = (x749==((x750<=x751)^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = INT8_MIN;
	int32_t x754 = INT32_MIN;
	int8_t x755 = 1;
	int32_t t188 = -12584687;

    t188 = (x753==((x754<=x755)^x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = -1;
	int32_t x759 = INT32_MIN;
	int32_t x760 = 64622411;
	volatile int32_t t189 = -14;

    t189 = (x757==((x758<=x759)^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 2U;
	int8_t x762 = INT8_MAX;
	int64_t x763 = 3138804799LL;
	int8_t x764 = -1;

    t190 = (x761==((x762<=x763)^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x765 = UINT32_MAX;
	int16_t x766 = -1;
	static volatile int8_t x767 = -1;
	int8_t x768 = INT8_MIN;
	int32_t t191 = -2239;

    t191 = (x765==((x766<=x767)^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	int64_t x770 = INT64_MIN;
	int8_t x771 = INT8_MIN;
	int32_t t192 = 17417;

    t192 = (x769==((x770<=x771)^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -223;
	int64_t x774 = INT64_MIN;
	int16_t x775 = INT16_MIN;
	uint32_t x776 = 0U;
	volatile int32_t t193 = 3;

    t193 = (x773==((x774<=x775)^x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x777 = 10LLU;
	int64_t x778 = INT64_MIN;
	int32_t x779 = 24479;
	int64_t x780 = -1LL;
	int32_t t194 = -299;

    t194 = (x777==((x778<=x779)^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = -54432982LL;
	int16_t x783 = INT16_MIN;
	uint8_t x784 = 0U;
	static int32_t t195 = -24;

    t195 = (x781==((x782<=x783)^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 3295307029546296LLU;
	static uint64_t x786 = UINT64_MAX;
	int8_t x787 = INT8_MAX;
	int32_t t196 = 796868;

    t196 = (x785==((x786<=x787)^x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	static volatile int16_t x790 = INT16_MIN;
	int32_t x791 = INT32_MIN;
	int16_t x792 = -1;

    t197 = (x789==((x790<=x791)^x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 4U;
	uint32_t x794 = 31716414U;
	int8_t x796 = 0;
	int32_t t198 = -1410;

    t198 = (x793==((x794<=x795)^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = -1;
	static int32_t x798 = INT32_MIN;
	static int32_t x799 = -1;
	int32_t t199 = 5118179;

    t199 = (x797==((x798<=x799)^x800));

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

