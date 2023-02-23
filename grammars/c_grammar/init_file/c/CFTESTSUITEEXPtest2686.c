
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

int32_t x1 = INT32_MIN;
uint16_t x9 = 3U;
int16_t x12 = 7;
volatile int32_t x17 = -21;
int64_t x20 = 42626LL;
volatile uint8_t x21 = 63U;
static int32_t t5 = 0;
volatile uint32_t x32 = UINT32_MAX;
static int8_t x47 = 1;
static uint8_t x53 = UINT8_MAX;
volatile int32_t t14 = 16;
int32_t x62 = -1;
volatile int32_t t15 = -8487;
uint16_t x65 = 1331U;
volatile int32_t t16 = -19;
int64_t x71 = INT64_MIN;
int16_t x73 = INT16_MIN;
int64_t x74 = INT64_MIN;
uint32_t x76 = UINT32_MAX;
int64_t x79 = -5LL;
int64_t x82 = -2268325140095LL;
uint32_t x98 = 55772106U;
static int8_t x99 = INT8_MIN;
int8_t x101 = INT8_MIN;
int32_t t28 = -31342946;
int16_t x121 = 530;
int8_t x126 = INT8_MAX;
volatile int64_t t31 = -11LL;
volatile uint64_t t33 = 2018833LLU;
static uint64_t x138 = UINT64_MAX;
int64_t x141 = INT64_MIN;
volatile int64_t t35 = -110038427519LL;
static int32_t x145 = -241;
uint32_t x149 = 9641U;
uint32_t x166 = 1026871641U;
uint8_t x167 = 14U;
uint32_t t41 = 1557U;
int8_t x170 = -41;
static uint64_t x171 = 689LLU;
static int32_t t42 = 28000;
uint16_t x174 = UINT16_MAX;
uint8_t x175 = UINT8_MAX;
int32_t t43 = -257;
static int32_t t45 = -5073;
uint64_t x191 = 3054844856LLU;
uint32_t x193 = 32U;
uint64_t x196 = 15839478LLU;
static int16_t x198 = -1;
volatile int8_t x202 = INT8_MIN;
int32_t x203 = -26198;
int32_t x208 = INT32_MIN;
int32_t x209 = INT32_MIN;
static volatile int64_t x211 = INT64_MIN;
int32_t x223 = 160740166;
volatile int32_t x226 = INT32_MAX;
int32_t t57 = 20848;
static volatile uint16_t x239 = UINT16_MAX;
static uint16_t x243 = 14U;
int32_t x246 = -2068;
int16_t x247 = INT16_MIN;
int16_t x249 = -1;
static int32_t t62 = 3;
static uint32_t x260 = 14942U;
int32_t x269 = INT32_MIN;
volatile uint32_t x270 = 173038U;
static volatile int32_t t67 = 109856809;
int8_t x276 = INT8_MIN;
static int16_t x285 = INT16_MAX;
static int64_t x289 = INT64_MAX;
uint64_t x290 = 6934377669446898521LLU;
int16_t x291 = INT16_MIN;
uint32_t x293 = UINT32_MAX;
volatile int64_t x294 = -581723LL;
volatile uint32_t x305 = 510U;
volatile uint32_t t76 = 578731368U;
volatile int32_t t77 = 1332;
int32_t x315 = -49852;
int32_t t78 = -800;
int16_t x326 = INT16_MIN;
int32_t t81 = -12;
static volatile int64_t x330 = INT64_MIN;
int64_t x333 = INT64_MAX;
static volatile int64_t t83 = 38802LL;
uint8_t x337 = 12U;
int8_t x340 = -1;
uint32_t x343 = 8930979U;
int16_t x344 = -14;
int64_t x346 = INT64_MIN;
volatile int32_t x348 = 0;
uint8_t x357 = 7U;
volatile int32_t t89 = -53549391;
int8_t x364 = INT8_MAX;
volatile uint32_t t90 = 1U;
uint64_t t91 = 169510173908695025LLU;
int16_t x369 = -1;
static uint64_t x370 = 618589708246018458LLU;
int32_t x377 = INT32_MIN;
volatile int32_t x389 = -373279;
int32_t x391 = -1;
int8_t x392 = INT8_MAX;
static uint64_t t98 = 2878LLU;
int16_t x399 = INT16_MAX;
uint64_t x400 = 15798994LLU;
int32_t t99 = 680135;
int16_t x401 = INT16_MIN;
int16_t x406 = INT16_MAX;
static volatile int32_t t101 = -84;
int16_t x409 = INT16_MIN;
volatile int32_t t102 = -3826;
int64_t x414 = INT64_MIN;
static int32_t x415 = -52422746;
int32_t x419 = -1;
static uint64_t x423 = UINT64_MAX;
volatile int32_t t107 = 22175770;
int8_t x434 = INT8_MIN;
static int32_t t108 = -6;
int64_t x437 = INT64_MIN;
int16_t x440 = INT16_MAX;
int64_t t109 = 0LL;
volatile int32_t x441 = INT32_MIN;
volatile int16_t x444 = INT16_MIN;
static uint64_t x448 = 3715239723921114LLU;
uint64_t x462 = 494285985459916LLU;
volatile int32_t t115 = 647;
volatile uint32_t x475 = 151U;
uint64_t x476 = 68016828089791733LLU;
int32_t x477 = INT32_MAX;
int8_t x478 = 1;
int8_t x480 = INT8_MIN;
int32_t t120 = 83;
static int64_t x499 = -1LL;
volatile int64_t x515 = INT64_MIN;
int64_t x516 = 672LL;
static volatile int32_t t129 = -18500069;
volatile uint8_t x526 = UINT8_MAX;
int64_t x531 = -10479516909LL;
int32_t t132 = -508934;
int64_t x534 = 49950720LL;
int32_t x538 = INT32_MIN;
int16_t x546 = INT16_MAX;
int8_t x559 = INT8_MAX;
int16_t x561 = INT16_MIN;
static uint32_t x563 = UINT32_MAX;
int16_t x565 = -1;
int16_t x568 = INT16_MAX;
volatile int32_t t141 = 260;
int32_t x570 = -404;
uint64_t x581 = 23LLU;
int8_t x583 = -1;
volatile uint8_t x584 = UINT8_MAX;
volatile int32_t x592 = -1;
volatile int8_t x595 = 0;
int32_t x598 = -1;
uint8_t x602 = 7U;
int32_t t150 = 240;
uint16_t x608 = 339U;
int64_t x610 = -1LL;
int16_t x627 = INT16_MIN;
static volatile uint16_t x631 = UINT16_MAX;
int16_t x636 = -7210;
static int64_t x638 = INT64_MIN;
uint16_t x639 = 25044U;
int64_t x641 = -3847597790882LL;
volatile int32_t x642 = INT32_MAX;
volatile int64_t x644 = 0LL;
volatile int64_t t160 = -354882618202342LL;
int16_t x649 = -1;
volatile uint64_t x654 = 74606827850600LLU;
int16_t x656 = 8;
int8_t x661 = INT8_MIN;
static int32_t x670 = -16187853;
static int16_t x676 = INT16_MAX;
int16_t x679 = 63;
int32_t x683 = -827415806;
int16_t x685 = 1;
static volatile int32_t t171 = -19401682;
uint16_t x697 = 0U;
static uint8_t x698 = 0U;
int32_t t174 = -30;
uint64_t x704 = 60763LLU;
int8_t x707 = -1;
int32_t t178 = 7814;
uint64_t x722 = UINT64_MAX;
static int8_t x723 = INT8_MAX;
static volatile uint32_t x730 = 1544U;
int32_t x731 = 312625348;
volatile int32_t t182 = -24596;
static int32_t x733 = INT32_MIN;
volatile int32_t t183 = 8;
static volatile uint8_t x738 = UINT8_MAX;
int8_t x749 = -1;
int32_t x756 = INT32_MIN;
uint32_t x761 = UINT32_MAX;
int16_t x763 = INT16_MIN;
volatile int64_t x764 = INT64_MIN;
uint32_t x772 = 3U;
int32_t t192 = 3964089;
int64_t x776 = INT64_MAX;
int16_t x777 = 230;
int64_t x782 = 2LL;
static int64_t x785 = INT64_MIN;
volatile int32_t x788 = 622133;
int16_t x789 = -1;


void f0(void) {
    	int16_t x2 = -1;
	static int16_t x3 = 2;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -11680490;

    t0 = (x1&((x2^x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static uint16_t x6 = 1140U;
	int16_t x7 = INT16_MIN;
	uint16_t x8 = 58U;
	int32_t t1 = -1145;

    t1 = (x5&((x6^x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x10 = UINT16_MAX;
	int32_t x11 = -568799316;
	int32_t t2 = -16449395;

    t2 = (x9&((x10^x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 23292665315018637LLU;
	volatile int64_t x14 = INT64_MIN;
	volatile int16_t x15 = INT16_MIN;
	uint16_t x16 = 112U;
	volatile uint64_t t3 = 90979468179289395LLU;

    t3 = (x13&((x14^x15)<=x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = 126187914381LL;
	int16_t x19 = INT16_MAX;
	volatile int32_t t4 = 1018206;

    t4 = (x17&((x18^x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	static int64_t x23 = -58284524LL;
	volatile int32_t x24 = INT32_MAX;

    t5 = (x21&((x22^x23)<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = UINT32_MAX;
	uint16_t x28 = 193U;
	static int64_t t6 = -682039488487561LL;

    t6 = (x25&((x26^x27)<=x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	static int8_t x30 = INT8_MAX;
	int64_t x31 = INT64_MIN;
	int32_t t7 = -2340;

    t7 = (x29&((x30^x31)<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	static uint64_t x34 = UINT64_MAX;
	uint16_t x35 = UINT16_MAX;
	volatile uint8_t x36 = UINT8_MAX;
	int32_t t8 = 29;

    t8 = (x33&((x34^x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 11427;
	uint8_t x38 = UINT8_MAX;
	volatile uint32_t x39 = 1512682U;
	static int16_t x40 = -1;
	int32_t t9 = 54168181;

    t9 = (x37&((x38^x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	uint32_t x42 = UINT32_MAX;
	static int8_t x43 = -1;
	volatile int32_t x44 = 27503;
	int32_t t10 = 1;

    t10 = (x41&((x42^x43)<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	volatile int16_t x46 = -1;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -801598;

    t11 = (x45&((x46^x47)<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x49 = 25399U;
	static volatile int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = 11U;
	int32_t t12 = 330786271;

    t12 = (x49&((x50^x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x54 = UINT64_MAX;
	int32_t x55 = INT32_MIN;
	static uint8_t x56 = 23U;
	int32_t t13 = 5398;

    t13 = (x53&((x54^x55)<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 6171;
	int16_t x58 = -6;
	static uint16_t x59 = UINT16_MAX;
	uint32_t x60 = 449692506U;

    t14 = (x57&((x58^x59)<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	uint16_t x63 = UINT16_MAX;
	volatile int16_t x64 = -86;

    t15 = (x61&((x62^x63)<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x66 = -9207416;
	int64_t x67 = 3844505077125945612LL;
	int32_t x68 = -1;

    t16 = (x65&((x66^x67)<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = 20U;
	uint16_t x70 = UINT16_MAX;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 446;

    t17 = (x69&((x70^x71)<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x75 = 1;
	int32_t t18 = 3145;

    t18 = (x73&((x74^x75)<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	int64_t x78 = INT64_MIN;
	int32_t x80 = 166964;
	volatile int32_t t19 = -47;

    t19 = (x77&((x78^x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MIN;
	uint64_t x83 = UINT64_MAX;
	volatile uint32_t x84 = 3752083U;
	volatile int32_t t20 = -85037346;

    t20 = (x81&((x82^x83)<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = INT8_MAX;
	uint64_t x86 = UINT64_MAX;
	int16_t x87 = INT16_MIN;
	static uint16_t x88 = 21655U;
	int32_t t21 = -16073;

    t21 = (x85&((x86^x87)<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	uint8_t x90 = 2U;
	int32_t x91 = 2;
	uint32_t x92 = UINT32_MAX;
	static volatile int32_t t22 = -15;

    t22 = (x89&((x90^x91)<=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 3U;
	int32_t x94 = INT32_MIN;
	static int64_t x95 = INT64_MIN;
	int16_t x96 = 8125;
	static volatile int32_t t23 = 954;

    t23 = (x93&((x94^x95)<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MAX;
	static volatile uint32_t x100 = 47U;
	volatile int32_t t24 = 3133;

    t24 = (x97&((x98^x99)<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = -136LL;
	int32_t x103 = 404922;
	int16_t x104 = 753;
	static volatile int32_t t25 = 50424;

    t25 = (x101&((x102^x103)<=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 35;
	int32_t x106 = INT32_MAX;
	int8_t x107 = 25;
	uint8_t x108 = UINT8_MAX;
	int32_t t26 = 70408;

    t26 = (x105&((x106^x107)<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 32;
	int8_t x110 = INT8_MIN;
	uint64_t x111 = 4301353960155746LLU;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = -44380;

    t27 = (x109&((x110^x111)<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MAX;
	int8_t x115 = -1;
	int8_t x116 = INT8_MIN;

    t28 = (x113&((x114^x115)<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 9694634U;
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MAX;
	volatile uint32_t t29 = 52604902U;

    t29 = (x117&((x118^x119)<=x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = INT32_MIN;
	int8_t x123 = 0;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = -1438;

    t30 = (x121&((x122^x123)<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x125 = 8209491LL;
	uint32_t x127 = 4139122U;
	int8_t x128 = -1;

    t31 = (x125&((x126^x127)<=x128));

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x129 = 71U;
	static int8_t x130 = INT8_MIN;
	volatile uint64_t x131 = 25197462LLU;
	volatile uint64_t x132 = UINT64_MAX;
	volatile int32_t t32 = -36;

    t32 = (x129&((x130^x131)<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x133 = 1002973056LLU;
	int8_t x134 = 0;
	static uint16_t x135 = 5646U;
	uint32_t x136 = UINT32_MAX;

    t33 = (x133&((x134^x135)<=x136));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x137 = 106802768735LLU;
	static int32_t x139 = INT32_MIN;
	static int64_t x140 = 75449759073346325LL;
	uint64_t t34 = 5479486540018LLU;

    t34 = (x137&((x138^x139)<=x140));

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = -1;
	int32_t x143 = -1;
	int64_t x144 = INT64_MAX;

    t35 = (x141&((x142^x143)<=x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x146 = 55U;
	static volatile int8_t x147 = INT8_MIN;
	int32_t x148 = -5910536;
	int32_t t36 = 18868;

    t36 = (x145&((x146^x147)<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = -13;
	static int8_t x151 = -1;
	uint32_t x152 = 682700U;
	volatile uint32_t t37 = 628623307U;

    t37 = (x149&((x150^x151)<=x152));

    if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = INT32_MIN;
	static int64_t x154 = INT64_MIN;
	uint64_t x155 = UINT64_MAX;
	uint32_t x156 = UINT32_MAX;
	static volatile int32_t t38 = -63;

    t38 = (x153&((x154^x155)<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -343;
	int64_t x158 = -1LL;
	uint8_t x159 = 109U;
	int16_t x160 = 1;
	int32_t t39 = 10;

    t39 = (x157&((x158^x159)<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 12U;
	int16_t x162 = INT16_MIN;
	static int64_t x163 = -1LL;
	uint64_t x164 = UINT64_MAX;
	static volatile int32_t t40 = 1;

    t40 = (x161&((x162^x163)<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 5356U;
	int8_t x168 = 5;

    t41 = (x165&((x166^x167)<=x168));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 3U;
	uint64_t x172 = 371569599004373LLU;

    t42 = (x169&((x170^x171)<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = UINT8_MAX;
	int8_t x176 = 0;

    t43 = (x173&((x174^x175)<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	volatile int32_t x178 = -1;
	int32_t x179 = 11551;
	int8_t x180 = INT8_MAX;
	static volatile int32_t t44 = 2;

    t44 = (x177&((x178^x179)<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	static int16_t x182 = -812;
	uint16_t x183 = 5158U;
	int64_t x184 = -1LL;

    t45 = (x181&((x182^x183)<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	volatile uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MIN;
	static int64_t x188 = -617522556776LL;
	volatile int32_t t46 = -1;

    t46 = (x185&((x186^x187)<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = UINT8_MAX;
	uint16_t x190 = UINT16_MAX;
	volatile int16_t x192 = 1;
	int32_t t47 = 2333335;

    t47 = (x189&((x190^x191)<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = INT32_MIN;
	volatile int32_t x195 = -1;
	volatile uint32_t t48 = 4U;

    t48 = (x193&((x194^x195)<=x196));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -1LL;
	int32_t x199 = -400457922;
	int64_t x200 = INT64_MAX;
	int64_t t49 = -828714669389LL;

    t49 = (x197&((x198^x199)<=x200));

    if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 148LLU;
	static int32_t x204 = INT32_MIN;
	volatile uint64_t t50 = 0LLU;

    t50 = (x201&((x202^x203)<=x204));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MAX;
	volatile uint16_t x207 = UINT16_MAX;
	int64_t t51 = -2112756080096708LL;

    t51 = (x205&((x206^x207)<=x208));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x210 = 0U;
	static volatile uint64_t x212 = UINT64_MAX;
	int32_t t52 = -89941;

    t52 = (x209&((x210^x211)<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 645654513824370087LL;
	static int8_t x214 = 1;
	volatile int8_t x215 = INT8_MAX;
	uint32_t x216 = UINT32_MAX;
	int64_t t53 = 7825LL;

    t53 = (x213&((x214^x215)<=x216));

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	int64_t x218 = INT64_MIN;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t54 = -98;

    t54 = (x217&((x218^x219)<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	volatile int8_t x222 = INT8_MIN;
	volatile uint8_t x224 = UINT8_MAX;
	int32_t t55 = -10868307;

    t55 = (x221&((x222^x223)<=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 29U;
	int8_t x227 = -36;
	volatile int32_t x228 = -129;
	static int32_t t56 = -118310652;

    t56 = (x225&((x226^x227)<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x229 = -1;
	int8_t x230 = INT8_MIN;
	int16_t x231 = -1;
	uint32_t x232 = UINT32_MAX;

    t57 = (x229&((x230^x231)<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = UINT32_MAX;
	int32_t x234 = INT32_MAX;
	int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	static volatile uint32_t t58 = 16361385U;

    t58 = (x233&((x234^x235)<=x236));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	int64_t x238 = 5LL;
	int32_t x240 = INT32_MIN;
	volatile uint64_t t59 = 443832884374LLU;

    t59 = (x237&((x238^x239)<=x240));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -29;
	static volatile int64_t x242 = -1255111012313252335LL;
	uint8_t x244 = UINT8_MAX;
	int32_t t60 = 317953095;

    t60 = (x241&((x242^x243)<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 60U;
	int16_t x248 = 0;
	int32_t t61 = 65662537;

    t61 = (x245&((x246^x247)<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x250 = INT8_MIN;
	static uint32_t x251 = UINT32_MAX;
	volatile int32_t x252 = 239;

    t62 = (x249&((x250^x251)<=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = INT8_MIN;
	uint16_t x254 = 4U;
	uint32_t x255 = 6U;
	static int32_t x256 = -1;
	int32_t t63 = -274333;

    t63 = (x253&((x254^x255)<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	uint16_t x259 = 5273U;
	volatile int32_t t64 = -951107264;

    t64 = (x257&((x258^x259)<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 11U;
	uint64_t x262 = 2503016LLU;
	volatile uint64_t x263 = 794697285762LLU;
	int8_t x264 = INT8_MIN;
	int32_t t65 = 463614414;

    t65 = (x261&((x262^x263)<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = UINT8_MAX;
	static int16_t x266 = INT16_MIN;
	volatile int64_t x267 = -16551979LL;
	int32_t x268 = -1;
	int32_t t66 = 20813;

    t66 = (x265&((x266^x267)<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x271 = UINT16_MAX;
	int64_t x272 = INT64_MIN;

    t67 = (x269&((x270^x271)<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x273 = 126U;
	uint16_t x274 = UINT16_MAX;
	int16_t x275 = -1;
	volatile uint32_t t68 = 6U;

    t68 = (x273&((x274^x275)<=x276));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 1903;
	int64_t x278 = INT64_MIN;
	static int8_t x279 = INT8_MIN;
	static int64_t x280 = INT64_MIN;
	volatile int32_t t69 = 936416;

    t69 = (x277&((x278^x279)<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 691720LLU;
	static uint32_t x282 = 1887623408U;
	uint16_t x283 = 0U;
	static int64_t x284 = -855322690LL;
	uint64_t t70 = 68552518LLU;

    t70 = (x281&((x282^x283)<=x284));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x286 = INT8_MAX;
	volatile int64_t x287 = -1LL;
	int64_t x288 = -1LL;
	int32_t t71 = 1;

    t71 = (x285&((x286^x287)<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x292 = -1;
	int64_t t72 = -409692LL;

    t72 = (x289&((x290^x291)<=x292));

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x295 = -357081925LL;
	int32_t x296 = INT32_MIN;
	uint32_t t73 = 28016U;

    t73 = (x293&((x294^x295)<=x296));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x297 = 719200035U;
	static int64_t x298 = -1LL;
	static int32_t x299 = INT32_MIN;
	static int64_t x300 = -578987931807LL;
	uint32_t t74 = 2U;

    t74 = (x297&((x298^x299)<=x300));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 7U;
	int32_t x302 = -423557;
	static uint8_t x303 = UINT8_MAX;
	int64_t x304 = INT64_MIN;
	int32_t t75 = 192;

    t75 = (x301&((x302^x303)<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint64_t x306 = UINT64_MAX;
	uint16_t x307 = UINT16_MAX;
	uint8_t x308 = 18U;

    t76 = (x305&((x306^x307)<=x308));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = -1787;
	uint16_t x310 = 13614U;
	int32_t x311 = 56063461;
	volatile int64_t x312 = INT64_MIN;

    t77 = (x309&((x310^x311)<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = 3098U;
	static int32_t x314 = -1934;
	static volatile int16_t x316 = INT16_MIN;

    t78 = (x313&((x314^x315)<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MAX;
	int16_t x319 = -1;
	volatile int32_t x320 = 524049;
	int32_t t79 = 153;

    t79 = (x317&((x318^x319)<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = INT16_MIN;
	int16_t x322 = 1;
	uint16_t x323 = 220U;
	int32_t x324 = 191;
	static int32_t t80 = -7811;

    t80 = (x321&((x322^x323)<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = 16405;
	static int8_t x327 = INT8_MIN;
	int32_t x328 = -1;

    t81 = (x325&((x326^x327)<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = 6;
	volatile uint64_t x331 = 8410284399451LLU;
	uint8_t x332 = 14U;
	int32_t t82 = 447;

    t82 = (x329&((x330^x331)<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = UINT16_MAX;
	static int8_t x335 = INT8_MIN;
	static int8_t x336 = 0;

    t83 = (x333&((x334^x335)<=x336));

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MIN;
	static int32_t t84 = -178;

    t84 = (x337&((x338^x339)<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -328907885623717719LL;
	static volatile uint64_t x342 = UINT64_MAX;
	int64_t t85 = -3586759794LL;

    t85 = (x341&((x342^x343)<=x344));

    if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -254344;
	int32_t x347 = INT32_MAX;
	volatile int32_t t86 = 7180927;

    t86 = (x345&((x346^x347)<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = -1LL;
	int64_t x350 = INT64_MAX;
	int8_t x351 = INT8_MIN;
	volatile int8_t x352 = 0;
	static volatile int64_t t87 = -6067967LL;

    t87 = (x349&((x350^x351)<=x352));

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = UINT32_MAX;
	int64_t x354 = -196522606LL;
	int64_t x355 = -1560057322LL;
	static int16_t x356 = 12192;
	volatile uint32_t t88 = 10U;

    t88 = (x353&((x354^x355)<=x356));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x358 = INT32_MAX;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MIN;

    t89 = (x357&((x358^x359)<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x361 = 26855415U;
	uint8_t x362 = 100U;
	volatile int8_t x363 = INT8_MAX;

    t90 = (x361&((x362^x363)<=x364));

    if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 23933LLU;
	uint64_t x366 = UINT64_MAX;
	volatile uint16_t x367 = 22087U;
	int16_t x368 = INT16_MIN;

    t91 = (x365&((x366^x367)<=x368));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x371 = INT8_MAX;
	int8_t x372 = -1;
	static int32_t t92 = 13274722;

    t92 = (x369&((x370^x371)<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	int16_t x375 = 1510;
	int8_t x376 = 15;
	volatile int32_t t93 = 4030955;

    t93 = (x373&((x374^x375)<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -1LL;
	uint8_t x379 = 65U;
	uint32_t x380 = 1448U;
	static volatile int32_t t94 = -559;

    t94 = (x377&((x378^x379)<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 869239LLU;
	int16_t x382 = -1;
	int8_t x383 = -1;
	uint8_t x384 = 62U;
	static uint64_t t95 = 3638725104LLU;

    t95 = (x381&((x382^x383)<=x384));

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	volatile int64_t x386 = INT64_MIN;
	uint32_t x387 = 44U;
	int64_t x388 = 71986034988928995LL;
	volatile int32_t t96 = 18942256;

    t96 = (x385&((x386^x387)<=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x390 = 1816431520LL;
	int32_t t97 = 6870;

    t97 = (x389&((x390^x391)<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 1891719002997824255LLU;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = 6;

    t98 = (x393&((x394^x395)<=x396));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 1U;
	volatile int64_t x398 = 2276790344LL;

    t99 = (x397&((x398^x399)<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x402 = INT16_MIN;
	int64_t x403 = 2083LL;
	int16_t x404 = -1;
	static int32_t t100 = 25;

    t100 = (x401&((x402^x403)<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	volatile uint64_t x407 = 23203114140LLU;
	int16_t x408 = INT16_MIN;

    t101 = (x405&((x406^x407)<=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x410 = 1U;
	int32_t x411 = -4058226;
	int8_t x412 = INT8_MAX;

    t102 = (x409&((x410^x411)<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	uint32_t x416 = 1610930U;
	int32_t t103 = -130984;

    t103 = (x413&((x414^x415)<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int32_t x418 = -14495483;
	uint32_t x420 = 3440584U;
	int32_t t104 = 1;

    t104 = (x417&((x418^x419)<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -21;
	int32_t x422 = INT32_MAX;
	int64_t x424 = INT64_MIN;
	static volatile int32_t t105 = -45444853;

    t105 = (x421&((x422^x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	volatile uint32_t x427 = UINT32_MAX;
	volatile int8_t x428 = INT8_MIN;
	int32_t t106 = -80725986;

    t106 = (x425&((x426^x427)<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	volatile int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MAX;
	volatile uint32_t x432 = 3343U;

    t107 = (x429&((x430^x431)<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	volatile int16_t x435 = INT16_MIN;
	int64_t x436 = INT64_MAX;

    t108 = (x433&((x434^x435)<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x438 = 20U;
	int16_t x439 = -1;

    t109 = (x437&((x438^x439)<=x440));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MIN;
	volatile int8_t x443 = 9;
	volatile int32_t t110 = 30230346;

    t110 = (x441&((x442^x443)<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = 1;
	uint8_t x446 = 7U;
	volatile int16_t x447 = INT16_MIN;
	static int32_t t111 = -53912502;

    t111 = (x445&((x446^x447)<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 26U;
	int64_t x450 = 109672169721433LL;
	int16_t x451 = 1;
	int32_t x452 = INT32_MIN;
	volatile int32_t t112 = 1101839;

    t112 = (x449&((x450^x451)<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	int64_t x454 = INT64_MAX;
	uint16_t x455 = 16U;
	uint64_t x456 = 112293LLU;
	int32_t t113 = -4673852;

    t113 = (x453&((x454^x455)<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = UINT32_MAX;
	uint64_t x458 = 138967124352802LLU;
	int16_t x459 = 7137;
	volatile uint64_t x460 = UINT64_MAX;
	uint32_t t114 = 7797005U;

    t114 = (x457&((x458^x459)<=x460));

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -1;
	static int8_t x463 = INT8_MIN;
	static int64_t x464 = -1LL;

    t115 = (x461&((x462^x463)<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x465 = 26U;
	int32_t x466 = INT32_MIN;
	int8_t x467 = INT8_MAX;
	static volatile int32_t x468 = INT32_MIN;
	volatile int32_t t116 = -711;

    t116 = (x465&((x466^x467)<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MAX;
	volatile int64_t x470 = INT64_MAX;
	static int16_t x471 = INT16_MAX;
	uint8_t x472 = 11U;
	static volatile int32_t t117 = -2325787;

    t117 = (x469&((x470^x471)<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -6;
	volatile int8_t x474 = INT8_MIN;
	int32_t t118 = 0;

    t118 = (x473&((x474^x475)<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x479 = -5;
	int32_t t119 = -2738396;

    t119 = (x477&((x478^x479)<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = INT16_MAX;
	static uint32_t x482 = UINT32_MAX;
	uint32_t x483 = 124026U;
	static uint32_t x484 = 7668U;

    t120 = (x481&((x482^x483)<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 48;
	volatile int32_t x486 = INT32_MAX;
	static uint8_t x487 = 19U;
	int64_t x488 = 1855193313LL;
	volatile int32_t t121 = 0;

    t121 = (x485&((x486^x487)<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = INT64_MAX;
	static volatile int8_t x490 = 7;
	static uint16_t x491 = UINT16_MAX;
	int8_t x492 = INT8_MIN;
	volatile int64_t t122 = -113661341008LL;

    t122 = (x489&((x490^x491)<=x492));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = INT64_MIN;
	int32_t x494 = INT32_MIN;
	int16_t x495 = -1177;
	static uint8_t x496 = 28U;
	volatile int64_t t123 = 599089676443173245LL;

    t123 = (x493&((x494^x495)<=x496));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	int16_t x498 = INT16_MIN;
	int64_t x500 = INT64_MIN;
	uint32_t t124 = 75458U;

    t124 = (x497&((x498^x499)<=x500));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = 5;
	volatile uint8_t x502 = 7U;
	int32_t x503 = INT32_MAX;
	volatile int8_t x504 = INT8_MAX;
	int32_t t125 = 389;

    t125 = (x501&((x502^x503)<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = UINT64_MAX;
	static int8_t x506 = INT8_MIN;
	uint8_t x507 = 29U;
	uint16_t x508 = UINT16_MAX;
	uint64_t t126 = 4643014945219210LLU;

    t126 = (x505&((x506^x507)<=x508));

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x509 = 1U;
	volatile int64_t x510 = INT64_MIN;
	volatile uint8_t x511 = 0U;
	static volatile uint32_t x512 = UINT32_MAX;
	volatile uint32_t t127 = 31394U;

    t127 = (x509&((x510^x511)<=x512));

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 21U;
	int32_t x514 = INT32_MIN;
	uint32_t t128 = 97U;

    t128 = (x513&((x514^x515)<=x516));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MAX;
	int16_t x518 = INT16_MIN;
	int64_t x519 = INT64_MIN;
	int8_t x520 = INT8_MAX;

    t129 = (x517&((x518^x519)<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MAX;
	int16_t x522 = INT16_MAX;
	int8_t x523 = -1;
	volatile uint64_t x524 = 21087LLU;
	volatile int64_t t130 = -753897305858687481LL;

    t130 = (x521&((x522^x523)<=x524));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 615862U;
	int32_t x527 = -1;
	uint64_t x528 = 2238236LLU;
	uint32_t t131 = 17075635U;

    t131 = (x525&((x526^x527)<=x528));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = INT8_MAX;
	uint64_t x530 = UINT64_MAX;
	int16_t x532 = -1379;

    t132 = (x529&((x530^x531)<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	volatile int64_t x535 = INT64_MIN;
	int16_t x536 = -1;
	int32_t t133 = 24;

    t133 = (x533&((x534^x535)<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 31U;
	uint8_t x539 = UINT8_MAX;
	int8_t x540 = INT8_MIN;
	volatile int32_t t134 = 3210;

    t134 = (x537&((x538^x539)<=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = UINT32_MAX;
	int32_t x542 = 0;
	uint64_t x543 = 17165553664609LLU;
	volatile int8_t x544 = -1;
	uint32_t t135 = 535870869U;

    t135 = (x541&((x542^x543)<=x544));

    if (t135 != 1U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	int8_t x547 = -1;
	static volatile uint64_t x548 = 13836LLU;
	volatile int32_t t136 = 20;

    t136 = (x545&((x546^x547)<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = -516356424;
	int32_t x550 = -1015912;
	uint64_t x551 = 7LLU;
	int32_t x552 = -1;
	volatile int32_t t137 = -33;

    t137 = (x549&((x550^x551)<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = -1;
	static uint32_t x554 = 0U;
	static int64_t x555 = INT64_MIN;
	uint8_t x556 = UINT8_MAX;
	int32_t t138 = 4389260;

    t138 = (x553&((x554^x555)<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	uint64_t x558 = UINT64_MAX;
	int16_t x560 = INT16_MAX;
	static volatile int64_t t139 = 879869083072LL;

    t139 = (x557&((x558^x559)<=x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x562 = INT64_MIN;
	uint8_t x564 = 3U;
	static int32_t t140 = 121640;

    t140 = (x561&((x562^x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x566 = UINT64_MAX;
	int32_t x567 = -1;

    t141 = (x565&((x566^x567)<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 10U;
	volatile int32_t x571 = INT32_MIN;
	int16_t x572 = INT16_MIN;
	int32_t t142 = 243;

    t142 = (x569&((x570^x571)<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 0;
	static int64_t x574 = INT64_MIN;
	static int64_t x575 = INT64_MIN;
	volatile int8_t x576 = 20;
	volatile int32_t t143 = 328;

    t143 = (x573&((x574^x575)<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MAX;
	static int64_t x578 = -6402579632080LL;
	volatile int64_t x579 = -1LL;
	int32_t x580 = 483973;
	volatile int32_t t144 = 0;

    t144 = (x577&((x578^x579)<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x582 = 193515U;
	uint64_t t145 = 31LLU;

    t145 = (x581&((x582^x583)<=x584));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = -1;
	volatile uint8_t x586 = 0U;
	uint64_t x587 = 185189759567201LLU;
	int16_t x588 = INT16_MIN;
	volatile int32_t t146 = 1315628;

    t146 = (x585&((x586^x587)<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = -1LL;
	int64_t x590 = 100087857571367433LL;
	volatile int32_t x591 = -7;
	volatile int64_t t147 = 1800954LL;

    t147 = (x589&((x590^x591)<=x592));

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MIN;
	static int16_t x594 = -2825;
	static int64_t x596 = INT64_MIN;
	volatile int64_t t148 = -98LL;

    t148 = (x593&((x594^x595)<=x596));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MAX;
	int32_t x599 = 23743;
	volatile int64_t x600 = INT64_MAX;
	int32_t t149 = 3909802;

    t149 = (x597&((x598^x599)<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = INT32_MIN;
	static int64_t x603 = INT64_MIN;
	static uint64_t x604 = UINT64_MAX;

    t150 = (x601&((x602^x603)<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x605 = INT64_MAX;
	static volatile int32_t x606 = -62;
	int32_t x607 = 96281;
	volatile int64_t t151 = 115LL;

    t151 = (x605&((x606^x607)<=x608));

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	int16_t x611 = -298;
	volatile int32_t x612 = INT32_MIN;
	static volatile int32_t t152 = 39072509;

    t152 = (x609&((x610^x611)<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = 12491025554330891LL;
	int32_t x614 = -48;
	int8_t x615 = INT8_MIN;
	uint16_t x616 = UINT16_MAX;
	int64_t t153 = 26LL;

    t153 = (x613&((x614^x615)<=x616));

    if (t153 != 1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 53133119U;
	uint64_t x618 = UINT64_MAX;
	int16_t x619 = -1;
	int8_t x620 = 7;
	static volatile uint32_t t154 = 79201223U;

    t154 = (x617&((x618^x619)<=x620));

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 652662963657273LLU;
	int16_t x622 = INT16_MIN;
	static int8_t x623 = INT8_MIN;
	volatile uint64_t x624 = UINT64_MAX;
	uint64_t t155 = 114269563376647540LLU;

    t155 = (x621&((x622^x623)<=x624));

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = UINT8_MAX;
	int32_t x626 = 136941;
	static int16_t x628 = INT16_MIN;
	volatile int32_t t156 = 124;

    t156 = (x625&((x626^x627)<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = -15LL;
	int16_t x630 = 633;
	int64_t x632 = 0LL;
	int64_t t157 = -1506542LL;

    t157 = (x629&((x630^x631)<=x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 14U;
	uint16_t x634 = 698U;
	uint64_t x635 = UINT64_MAX;
	volatile uint32_t t158 = 832U;

    t158 = (x633&((x634^x635)<=x636));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	volatile uint8_t x640 = 1U;
	volatile int64_t t159 = 89442216399343LL;

    t159 = (x637&((x638^x639)<=x640));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x643 = INT16_MAX;

    t160 = (x641&((x642^x643)<=x644));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 5U;
	static int16_t x646 = INT16_MIN;
	volatile int64_t x647 = INT64_MAX;
	static int32_t x648 = 7;
	static int32_t t161 = -12671;

    t161 = (x645&((x646^x647)<=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = INT64_MIN;
	int16_t x651 = INT16_MAX;
	int16_t x652 = INT16_MIN;
	static int32_t t162 = -9437;

    t162 = (x649&((x650^x651)<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = -125194;
	int64_t x655 = INT64_MIN;
	int32_t t163 = 106;

    t163 = (x653&((x654^x655)<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	static volatile uint8_t x658 = UINT8_MAX;
	uint8_t x659 = UINT8_MAX;
	volatile int64_t x660 = INT64_MIN;
	int32_t t164 = -3020035;

    t164 = (x657&((x658^x659)<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x662 = 919;
	int64_t x663 = INT64_MIN;
	volatile int8_t x664 = 22;
	volatile int32_t t165 = 43;

    t165 = (x661&((x662^x663)<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	volatile int8_t x666 = -7;
	volatile int64_t x667 = -1LL;
	int32_t x668 = 800589813;
	volatile int32_t t166 = -200134;

    t166 = (x665&((x666^x667)<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int64_t x671 = INT64_MIN;
	int16_t x672 = -6023;
	static volatile int64_t t167 = -13371877483929LL;

    t167 = (x669&((x670^x671)<=x672));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x673 = UINT8_MAX;
	static uint64_t x674 = UINT64_MAX;
	static volatile int32_t x675 = INT32_MIN;
	volatile int32_t t168 = -3;

    t168 = (x673&((x674^x675)<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	uint8_t x678 = 58U;
	uint64_t x680 = 252LLU;
	static int32_t t169 = -376;

    t169 = (x677&((x678^x679)<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x681 = -1;
	int64_t x682 = -316952393760LL;
	static volatile uint64_t x684 = UINT64_MAX;
	int32_t t170 = 8942698;

    t170 = (x681&((x682^x683)<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x686 = -57;
	uint8_t x687 = UINT8_MAX;
	int64_t x688 = INT64_MIN;

    t171 = (x685&((x686^x687)<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -13;
	static uint8_t x690 = UINT8_MAX;
	uint8_t x691 = UINT8_MAX;
	volatile int16_t x692 = INT16_MIN;
	static int32_t t172 = -88242658;

    t172 = (x689&((x690^x691)<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	int64_t x694 = -1LL;
	uint32_t x695 = UINT32_MAX;
	int16_t x696 = INT16_MIN;
	int64_t t173 = 147068153240828LL;

    t173 = (x693&((x694^x695)<=x696));

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x699 = INT64_MIN;
	static int16_t x700 = 875;

    t174 = (x697&((x698^x699)<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = -1;
	volatile int16_t x702 = INT16_MIN;
	int8_t x703 = -1;
	volatile int32_t t175 = -1813;

    t175 = (x701&((x702^x703)<=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = INT64_MAX;
	volatile uint32_t x706 = UINT32_MAX;
	int32_t x708 = INT32_MIN;
	volatile int64_t t176 = -4244443532324177LL;

    t176 = (x705&((x706^x707)<=x708));

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = -20;
	int16_t x710 = INT16_MIN;
	int32_t x711 = -23749389;
	int16_t x712 = 0;
	volatile int32_t t177 = 152066773;

    t177 = (x709&((x710^x711)<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	int32_t x714 = INT32_MIN;
	int64_t x715 = INT64_MAX;
	static int8_t x716 = INT8_MAX;

    t178 = (x713&((x714^x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x717 = INT64_MAX;
	int16_t x718 = 149;
	static int64_t x719 = INT64_MAX;
	int32_t x720 = -1;
	volatile int64_t t179 = -898200073420284325LL;

    t179 = (x717&((x718^x719)<=x720));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = 1;
	int32_t x724 = INT32_MAX;
	volatile int32_t t180 = -1;

    t180 = (x721&((x722^x723)<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = 3;
	static int64_t x726 = -1LL;
	static volatile int8_t x727 = 0;
	int8_t x728 = INT8_MIN;
	static volatile int32_t t181 = -93;

    t181 = (x725&((x726^x727)<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MIN;
	int32_t x732 = -1;

    t182 = (x729&((x730^x731)<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x734 = 77U;
	int8_t x735 = 49;
	volatile uint16_t x736 = UINT16_MAX;

    t183 = (x733&((x734^x735)<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = 0;
	int64_t x739 = INT64_MAX;
	uint16_t x740 = 33U;
	static int32_t t184 = -224969197;

    t184 = (x737&((x738^x739)<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MAX;
	static volatile int32_t x742 = INT32_MIN;
	static int64_t x743 = INT64_MIN;
	static int32_t x744 = INT32_MAX;
	int64_t t185 = 1542354482530LL;

    t185 = (x741&((x742^x743)<=x744));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1005132168LL;
	uint64_t x746 = 3125LLU;
	int8_t x747 = INT8_MIN;
	int16_t x748 = 280;
	int64_t t186 = 11490670620459138LL;

    t186 = (x745&((x746^x747)<=x748));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x750 = INT8_MIN;
	static volatile int16_t x751 = 1;
	uint32_t x752 = UINT32_MAX;
	static int32_t t187 = -56974;

    t187 = (x749&((x750^x751)<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	uint16_t x754 = UINT16_MAX;
	static volatile uint64_t x755 = 0LLU;
	volatile int32_t t188 = 64824531;

    t188 = (x753&((x754^x755)<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	static uint8_t x758 = 47U;
	int32_t x759 = -23;
	int32_t x760 = INT32_MIN;
	static volatile int32_t t189 = 457;

    t189 = (x757&((x758^x759)<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = INT64_MAX;
	volatile uint32_t t190 = 1697660U;

    t190 = (x761&((x762^x763)<=x764));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -3;
	static int32_t x766 = INT32_MIN;
	static int8_t x767 = -6;
	int32_t x768 = INT32_MAX;
	volatile int32_t t191 = -150;

    t191 = (x765&((x766^x767)<=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 1214569;
	static volatile int16_t x770 = INT16_MIN;
	static int8_t x771 = INT8_MIN;

    t192 = (x769&((x770^x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 23U;
	static int16_t x774 = -20;
	int8_t x775 = -1;
	static volatile int32_t t193 = -191647713;

    t193 = (x773&((x774^x775)<=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MIN;
	static uint8_t x779 = 114U;
	int8_t x780 = -1;
	int32_t t194 = -3228496;

    t194 = (x777&((x778^x779)<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = 12;
	int8_t x783 = INT8_MAX;
	uint8_t x784 = UINT8_MAX;
	int32_t t195 = -366;

    t195 = (x781&((x782^x783)<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x786 = INT32_MIN;
	int8_t x787 = INT8_MAX;
	volatile int64_t t196 = -374406190116LL;

    t196 = (x785&((x786^x787)<=x788));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x790 = -3135;
	static int32_t x791 = -1;
	int16_t x792 = INT16_MIN;
	int32_t t197 = 0;

    t197 = (x789&((x790^x791)<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -2;
	volatile int8_t x794 = -1;
	int8_t x795 = INT8_MIN;
	volatile uint16_t x796 = 4U;
	int32_t t198 = -120187972;

    t198 = (x793&((x794^x795)<=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x797 = -1;
	volatile int64_t x798 = INT64_MAX;
	uint64_t x799 = 4754LLU;
	volatile int64_t x800 = INT64_MIN;
	volatile int32_t t199 = -429;

    t199 = (x797&((x798^x799)<=x800));

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

