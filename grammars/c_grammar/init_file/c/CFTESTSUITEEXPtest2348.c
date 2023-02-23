
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

int16_t x4 = 1;
int8_t x10 = INT8_MIN;
volatile int64_t x11 = -1LL;
static int8_t x23 = -1;
volatile int32_t t5 = 1;
static volatile int16_t x28 = INT16_MIN;
uint8_t x30 = 0U;
static uint64_t x32 = UINT64_MAX;
volatile int8_t x33 = 0;
volatile int32_t t11 = 371822716;
volatile int32_t t12 = 814354;
int8_t x54 = INT8_MAX;
uint32_t x55 = 7018U;
int32_t t13 = 3;
volatile int32_t x59 = -1;
volatile int32_t x62 = INT32_MIN;
int32_t t15 = 2;
volatile int32_t t16 = -92682;
volatile int32_t x70 = 4116829;
int32_t t18 = -19035;
int16_t x78 = INT16_MAX;
uint64_t x81 = UINT64_MAX;
uint32_t x83 = UINT32_MAX;
int16_t x85 = 316;
int64_t x90 = -1LL;
int8_t x91 = INT8_MAX;
uint64_t x92 = 3015496679056837LLU;
uint16_t x94 = 24U;
int32_t x99 = -1;
static uint16_t x109 = UINT16_MAX;
volatile int16_t x115 = INT16_MIN;
int32_t x117 = INT32_MIN;
volatile uint64_t x120 = UINT64_MAX;
int32_t t30 = -194133;
int16_t x127 = INT16_MAX;
uint64_t x128 = 45977166204LLU;
uint16_t x135 = 4985U;
int32_t t34 = 2;
volatile int32_t t36 = -373;
int32_t x164 = INT32_MAX;
volatile uint32_t x169 = 543147785U;
uint32_t x172 = 1588U;
static uint64_t x181 = 1853905964526034LLU;
int8_t x192 = INT8_MIN;
volatile uint64_t x196 = 1242175749LLU;
volatile int32_t t48 = -1;
int32_t x200 = -13;
uint16_t x203 = 467U;
volatile int32_t t51 = -60783665;
static uint8_t x211 = 89U;
volatile int16_t x214 = -1;
uint32_t x242 = 31600U;
uint64_t x243 = UINT64_MAX;
int32_t t60 = -6116;
int32_t x250 = -286801845;
int8_t x252 = 29;
static int8_t x255 = -20;
int64_t x258 = INT64_MIN;
static int32_t x265 = INT32_MIN;
volatile int32_t x274 = -192;
int16_t x275 = INT16_MAX;
uint64_t x280 = 13235559377369355LLU;
volatile int16_t x283 = INT16_MIN;
static int8_t x288 = -1;
static uint8_t x290 = UINT8_MAX;
static int32_t x293 = 724947;
int32_t x303 = -1;
uint16_t x309 = 259U;
int32_t t77 = 46600;
int32_t t78 = 1;
int8_t x317 = INT8_MAX;
static uint64_t x322 = 8448289380404LLU;
int16_t x336 = INT16_MAX;
int8_t x337 = -1;
static volatile int64_t x338 = INT64_MIN;
int32_t t84 = -50592;
int32_t t85 = 182285733;
int32_t x345 = -1;
static int64_t x352 = 2875862900201LL;
volatile int32_t t87 = 67977;
uint8_t x357 = 2U;
volatile int16_t x358 = INT16_MIN;
static int8_t x370 = INT8_MIN;
int16_t x375 = -2;
volatile int32_t t94 = -134994860;
int32_t x381 = 1;
int32_t x389 = INT32_MIN;
static volatile int16_t x392 = 0;
int32_t t97 = -1;
static int16_t x393 = -1;
int8_t x403 = INT8_MAX;
int8_t x406 = -18;
static int32_t x412 = INT32_MIN;
static volatile int32_t t106 = -89886;
int8_t x432 = 14;
volatile uint8_t x433 = UINT8_MAX;
static uint64_t x434 = 7261955173LLU;
int64_t x441 = INT64_MAX;
int32_t t110 = -166396;
uint32_t x445 = 44U;
int16_t x448 = 0;
volatile int32_t t111 = -226835185;
volatile int8_t x450 = 3;
int16_t x456 = -1750;
int32_t x458 = INT32_MIN;
int32_t t114 = -31888909;
uint16_t x469 = 131U;
int64_t x473 = INT64_MIN;
volatile int32_t t118 = -220;
uint64_t x477 = 99254523LLU;
uint64_t x479 = UINT64_MAX;
int32_t x486 = -29369;
uint64_t x488 = UINT64_MAX;
int32_t x493 = INT32_MAX;
static int64_t x498 = -9LL;
int32_t x499 = -1;
int32_t x502 = -130;
int32_t x503 = -1;
int16_t x508 = INT16_MIN;
int32_t t126 = -24;
int16_t x510 = -1;
int32_t x514 = INT32_MIN;
int64_t x517 = INT64_MIN;
int64_t x519 = -663730709066314LL;
volatile int32_t x520 = -1;
uint32_t x523 = 43140939U;
int8_t x526 = -1;
volatile int8_t x531 = -1;
static uint64_t x537 = 2LLU;
int16_t x543 = 21;
int64_t x544 = INT64_MIN;
int16_t x549 = -4972;
volatile int16_t x552 = 1812;
int16_t x553 = INT16_MAX;
uint16_t x570 = 12877U;
static volatile int32_t t142 = 1;
int16_t x574 = -1;
static uint16_t x582 = UINT16_MAX;
static int64_t x583 = INT64_MIN;
int8_t x584 = -1;
int32_t t146 = 7;
volatile int32_t x593 = -1;
int32_t x599 = 43549666;
uint32_t x600 = UINT32_MAX;
static volatile int64_t x604 = 4930296LL;
volatile int32_t t150 = 56;
uint64_t x607 = UINT64_MAX;
static volatile uint8_t x615 = UINT8_MAX;
static int16_t x617 = 371;
uint32_t x621 = 1441582610U;
int16_t x628 = INT16_MIN;
volatile int32_t t157 = -5388;
uint64_t x644 = UINT64_MAX;
static volatile int32_t t160 = -12;
volatile int32_t x645 = 25010;
volatile int32_t t165 = 3403;
uint32_t x670 = 2812U;
int8_t x671 = INT8_MAX;
static volatile int32_t t167 = 0;
int32_t x678 = -1;
static int8_t x683 = INT8_MIN;
int64_t x686 = -6LL;
uint32_t x691 = 11469U;
int8_t x692 = INT8_MIN;
uint16_t x693 = 137U;
volatile uint64_t x695 = 0LLU;
int16_t x696 = INT16_MIN;
uint64_t x700 = 179672636LLU;
int32_t t175 = 1;
uint8_t x707 = UINT8_MAX;
uint64_t x711 = UINT64_MAX;
uint8_t x721 = 41U;
static uint16_t x725 = UINT16_MAX;
int16_t x726 = -328;
static int32_t t183 = 206995;
static int16_t x738 = -1;
int16_t x745 = 227;
uint32_t x749 = 274221U;
volatile int32_t t187 = 2179;
uint32_t x753 = 1446496892U;
int8_t x768 = INT8_MAX;
int32_t x777 = -1;
int32_t x787 = INT32_MIN;
uint32_t x788 = UINT32_MAX;
int32_t t196 = -695;
int64_t x789 = INT64_MIN;
int32_t x795 = INT32_MAX;
static int32_t x796 = INT32_MIN;
int32_t t199 = 107300;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint8_t x2 = 27U;
	int32_t x3 = 115784211;
	int32_t t0 = -212;

    t0 = (x1<=((x2&x3)^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 65669953U;
	int32_t x6 = INT32_MIN;
	int64_t x7 = -1LL;
	volatile int64_t x8 = INT64_MAX;
	static int32_t t1 = -1061831751;

    t1 = (x5<=((x6&x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 1426;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = -142798626;

    t2 = (x9<=((x10&x11)^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 2042512U;
	int32_t x14 = -52290;
	volatile uint32_t x15 = 183070079U;
	uint16_t x16 = 240U;
	int32_t t3 = 395;

    t3 = (x13<=((x14&x15)^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = UINT16_MAX;
	uint16_t x18 = 240U;
	int8_t x19 = -1;
	int64_t x20 = -243935947LL;
	static int32_t t4 = 25495;

    t4 = (x17<=((x18&x19)^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 127LLU;
	int16_t x22 = 12342;
	int32_t x24 = INT32_MAX;

    t5 = (x21<=((x22&x23)^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 27;
	int16_t x26 = INT16_MIN;
	int32_t x27 = -1;
	volatile int32_t t6 = 7063272;

    t6 = (x25<=((x26&x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = UINT64_MAX;
	int64_t x31 = INT64_MIN;
	int32_t t7 = -1376;

    t7 = (x29<=((x30&x31)^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = UINT8_MAX;
	volatile uint64_t x35 = 864715LLU;
	int16_t x36 = -1;
	int32_t t8 = -1265996;

    t8 = (x33<=((x34&x35)^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 36;
	static uint8_t x38 = 9U;
	int16_t x39 = -12337;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 3709451;

    t9 = (x37<=((x38&x39)^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	uint8_t x42 = 1U;
	uint32_t x43 = 834843268U;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -1;

    t10 = (x41<=((x42&x43)^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x45 = 14618367929280884LLU;
	static uint64_t x46 = 2808228500052LLU;
	static int32_t x47 = INT32_MIN;
	int64_t x48 = -1LL;

    t11 = (x45<=((x46&x47)^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 2U;
	volatile int8_t x50 = 2;
	volatile int64_t x51 = -1LL;
	static uint8_t x52 = 1U;

    t12 = (x49<=((x50&x51)^x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	int32_t x56 = -30;

    t13 = (x53<=((x54&x55)^x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	volatile uint32_t x58 = UINT32_MAX;
	static int32_t x60 = INT32_MAX;
	static volatile int32_t t14 = -483;

    t14 = (x57<=((x58&x59)^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 0U;
	int32_t x63 = INT32_MIN;
	volatile int16_t x64 = INT16_MAX;

    t15 = (x61<=((x62&x63)^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 374390U;
	static volatile uint64_t x66 = 292151272076328997LLU;
	static uint8_t x67 = 1U;
	static int32_t x68 = -1;

    t16 = (x65<=((x66&x67)^x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 785752299LL;
	volatile int64_t x71 = -19LL;
	int32_t x72 = 7985798;
	volatile int32_t t17 = -3089;

    t17 = (x69<=((x70&x71)^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 8;
	int8_t x74 = INT8_MAX;
	int16_t x75 = INT16_MAX;
	int16_t x76 = INT16_MAX;

    t18 = (x73<=((x74&x75)^x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	uint16_t x79 = 203U;
	int8_t x80 = INT8_MIN;
	int32_t t19 = -235;

    t19 = (x77<=((x78&x79)^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x82 = -178;
	static uint64_t x84 = 29016625065391016LLU;
	int32_t t20 = 89438877;

    t20 = (x81<=((x82&x83)^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x86 = UINT16_MAX;
	volatile int32_t x87 = INT32_MAX;
	int64_t x88 = INT64_MAX;
	int32_t t21 = 459716486;

    t21 = (x85<=((x86&x87)^x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MIN;
	volatile int32_t t22 = -3809309;

    t22 = (x89<=((x90&x91)^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = INT64_MAX;
	static volatile int8_t x95 = -7;
	int64_t x96 = -1LL;
	volatile int32_t t23 = 31436;

    t23 = (x93<=((x94&x95)^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 3U;
	int16_t x98 = 2262;
	uint64_t x100 = UINT64_MAX;
	static int32_t t24 = -81841486;

    t24 = (x97<=((x98&x99)^x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 2U;
	volatile int64_t x102 = INT64_MAX;
	int16_t x103 = -130;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = 181;

    t25 = (x101<=((x102&x103)^x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	volatile int32_t x106 = -368591414;
	static uint16_t x107 = 3U;
	volatile uint32_t x108 = 28209518U;
	volatile int32_t t26 = -2106;

    t26 = (x105<=((x106&x107)^x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = -1;
	int64_t x111 = -1LL;
	uint16_t x112 = 1U;
	int32_t t27 = 1;

    t27 = (x109<=((x110&x111)^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = -5;
	static int32_t x114 = INT32_MAX;
	int32_t x116 = -1;
	int32_t t28 = 1;

    t28 = (x113<=((x114&x115)^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x118 = 4761LLU;
	int8_t x119 = 0;
	volatile int32_t t29 = 1;

    t29 = (x117<=((x118&x119)^x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	static int16_t x122 = -5;
	uint16_t x123 = 488U;
	int16_t x124 = -1;

    t30 = (x121<=((x122&x123)^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MIN;
	volatile int32_t t31 = 48035;

    t31 = (x125<=((x126&x127)^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	static int32_t x130 = INT32_MAX;
	uint16_t x131 = 11701U;
	uint16_t x132 = 48U;
	volatile int32_t t32 = 2765;

    t32 = (x129<=((x130&x131)^x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = 1;
	static int32_t x134 = INT32_MIN;
	uint32_t x136 = 69909414U;
	static int32_t t33 = 35884730;

    t33 = (x133<=((x134&x135)^x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 1732597784112312LLU;
	static volatile int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MIN;
	uint8_t x140 = 2U;

    t34 = (x137<=((x138&x139)^x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x141 = 1U;
	int8_t x142 = INT8_MIN;
	volatile int32_t x143 = INT32_MIN;
	int64_t x144 = -4860LL;
	static int32_t t35 = 235143;

    t35 = (x141<=((x142&x143)^x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x145 = -1;
	volatile int64_t x146 = INT64_MAX;
	uint64_t x147 = 13238LLU;
	static int16_t x148 = INT16_MIN;

    t36 = (x145<=((x146&x147)^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 1205200298U;
	int8_t x150 = 1;
	int32_t x151 = INT32_MIN;
	volatile int16_t x152 = 0;
	int32_t t37 = 187241;

    t37 = (x149<=((x150&x151)^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	int32_t x154 = INT32_MIN;
	int32_t x155 = -1;
	static int8_t x156 = -1;
	static volatile int32_t t38 = 0;

    t38 = (x153<=((x154&x155)^x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x157 = 34118445537282LLU;
	uint8_t x158 = 3U;
	static uint64_t x159 = 526121210908615LLU;
	volatile int16_t x160 = 16;
	volatile int32_t t39 = -187473125;

    t39 = (x157<=((x158&x159)^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = 0;
	volatile int8_t x162 = 2;
	volatile uint8_t x163 = 1U;
	volatile int32_t t40 = 326;

    t40 = (x161<=((x162&x163)^x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MAX;
	uint8_t x166 = 59U;
	uint8_t x167 = 13U;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -17497;

    t41 = (x165<=((x166&x167)^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x170 = UINT32_MAX;
	static int16_t x171 = INT16_MIN;
	static volatile int32_t t42 = -9077;

    t42 = (x169<=((x170&x171)^x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x173 = UINT64_MAX;
	volatile int64_t x174 = -1LL;
	int16_t x175 = -1;
	volatile int32_t x176 = -1;
	volatile int32_t t43 = -5493;

    t43 = (x173<=((x174&x175)^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	uint64_t x178 = 493423408479LLU;
	volatile uint32_t x179 = 0U;
	static uint32_t x180 = 2219981U;
	volatile int32_t t44 = 1302;

    t44 = (x177<=((x178&x179)^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x182 = INT16_MAX;
	int8_t x183 = INT8_MIN;
	static uint32_t x184 = 322898U;
	volatile int32_t t45 = 33;

    t45 = (x181<=((x182&x183)^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MAX;
	volatile int32_t x186 = 13714514;
	static volatile uint32_t x187 = UINT32_MAX;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = -89958;

    t46 = (x185<=((x186&x187)^x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x189 = 125U;
	int64_t x190 = INT64_MIN;
	static volatile int8_t x191 = INT8_MIN;
	int32_t t47 = -2463;

    t47 = (x189<=((x190&x191)^x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = -41;
	static int64_t x194 = INT64_MAX;
	int16_t x195 = -1;

    t48 = (x193<=((x194&x195)^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -1;
	int64_t x198 = -20776LL;
	volatile int64_t x199 = -1LL;
	volatile int32_t t49 = -219;

    t49 = (x197<=((x198&x199)^x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = -1;
	int16_t x202 = INT16_MAX;
	uint8_t x204 = 26U;
	int32_t t50 = -697;

    t50 = (x201<=((x202&x203)^x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = -2;
	int32_t x206 = INT32_MIN;
	volatile int64_t x207 = 440338LL;
	static int16_t x208 = -1;

    t51 = (x205<=((x206&x207)^x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = 173789895810666247LLU;
	static int32_t x210 = INT32_MAX;
	volatile int32_t x212 = INT32_MIN;
	int32_t t52 = -21;

    t52 = (x209<=((x210&x211)^x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 454666U;
	int32_t x215 = INT32_MIN;
	volatile int32_t x216 = INT32_MAX;
	int32_t t53 = -1027133941;

    t53 = (x213<=((x214&x215)^x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	int32_t x218 = INT32_MAX;
	volatile uint16_t x219 = 108U;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 28;

    t54 = (x217<=((x218&x219)^x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	uint32_t x222 = 919208U;
	int8_t x223 = 2;
	volatile int8_t x224 = INT8_MAX;
	static int32_t t55 = 1;

    t55 = (x221<=((x222&x223)^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = UINT16_MAX;
	static uint8_t x226 = UINT8_MAX;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MIN;
	int32_t t56 = -2683646;

    t56 = (x225<=((x226&x227)^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = INT8_MAX;
	int32_t x230 = INT32_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MAX;
	volatile int32_t t57 = 1991;

    t57 = (x229<=((x230&x231)^x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MAX;
	int32_t x235 = 177;
	volatile uint64_t x236 = 26894802748LLU;
	int32_t t58 = -29;

    t58 = (x233<=((x234&x235)^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 9U;
	int16_t x238 = INT16_MIN;
	volatile int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MAX;
	int32_t t59 = -1377199;

    t59 = (x237<=((x238&x239)^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -7155811;
	int64_t x244 = INT64_MIN;

    t60 = (x241<=((x242&x243)^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 4LLU;
	static int8_t x246 = -1;
	volatile int8_t x247 = -1;
	static volatile int64_t x248 = INT64_MIN;
	int32_t t61 = 120;

    t61 = (x245<=((x246&x247)^x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = UINT8_MAX;
	uint64_t x251 = 3LLU;
	int32_t t62 = 210308330;

    t62 = (x249<=((x250&x251)^x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	int32_t x254 = 19181417;
	int8_t x256 = -1;
	static volatile int32_t t63 = 6769;

    t63 = (x253<=((x254&x255)^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	uint64_t x259 = 2122646660LLU;
	static int16_t x260 = -1;
	int32_t t64 = 754860179;

    t64 = (x257<=((x258&x259)^x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = INT8_MIN;
	volatile uint8_t x262 = UINT8_MAX;
	uint64_t x263 = 92589903276LLU;
	volatile int64_t x264 = INT64_MIN;
	int32_t t65 = 3489;

    t65 = (x261<=((x262&x263)^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x266 = UINT64_MAX;
	int64_t x267 = -1LL;
	int16_t x268 = INT16_MAX;
	volatile int32_t t66 = -1;

    t66 = (x265<=((x266&x267)^x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	static int8_t x270 = INT8_MIN;
	uint64_t x271 = 216626535LLU;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -146;

    t67 = (x269<=((x270&x271)^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	static uint8_t x276 = 10U;
	static volatile int32_t t68 = 507;

    t68 = (x273<=((x274&x275)^x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = -84366540LL;
	volatile int32_t x278 = -12066;
	volatile int64_t x279 = 885410492LL;
	int32_t t69 = -2196572;

    t69 = (x277<=((x278&x279)^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 42U;
	int16_t x282 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t70 = 28840201;

    t70 = (x281<=((x282&x283)^x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 60278158294505538LLU;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	static int32_t t71 = -4092431;

    t71 = (x285<=((x286&x287)^x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MAX;
	int16_t x291 = -7;
	uint64_t x292 = 16857885709LLU;
	static volatile int32_t t72 = 0;

    t72 = (x289<=((x290&x291)^x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x294 = UINT16_MAX;
	int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MAX;
	volatile int32_t t73 = -802;

    t73 = (x293<=((x294&x295)^x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	uint32_t x298 = 112352608U;
	int64_t x299 = -1LL;
	uint8_t x300 = 57U;
	int32_t t74 = 10129811;

    t74 = (x297<=((x298&x299)^x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = INT64_MAX;
	uint32_t x302 = 3672517U;
	int32_t x304 = -1;
	int32_t t75 = -2456;

    t75 = (x301<=((x302&x303)^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 214U;
	uint64_t x306 = 256451201128314396LLU;
	static volatile int32_t x307 = INT32_MIN;
	static int64_t x308 = INT64_MIN;
	static int32_t t76 = 1469;

    t76 = (x305<=((x306&x307)^x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = 151409199LL;
	uint8_t x311 = UINT8_MAX;
	static int16_t x312 = -1;

    t77 = (x309<=((x310&x311)^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = 14;
	uint8_t x314 = 37U;
	uint64_t x315 = 1607228772545035LLU;
	int16_t x316 = INT16_MAX;

    t78 = (x313<=((x314&x315)^x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x318 = 1U;
	volatile int64_t x319 = INT64_MIN;
	int8_t x320 = INT8_MIN;
	int32_t t79 = 45;

    t79 = (x317<=((x318&x319)^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x321 = UINT32_MAX;
	uint8_t x323 = 0U;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t80 = -2;

    t80 = (x321<=((x322&x323)^x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x325 = INT16_MIN;
	int64_t x326 = 1LL;
	int64_t x327 = INT64_MIN;
	static int32_t x328 = INT32_MAX;
	int32_t t81 = 11;

    t81 = (x325<=((x326&x327)^x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	uint16_t x330 = 2728U;
	uint16_t x331 = 7972U;
	int64_t x332 = INT64_MAX;
	volatile int32_t t82 = -1;

    t82 = (x329<=((x330&x331)^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -1;
	int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MAX;
	int32_t t83 = -1635447;

    t83 = (x333<=((x334&x335)^x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x339 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;

    t84 = (x337<=((x338&x339)^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	volatile uint16_t x342 = 13U;
	static volatile uint32_t x343 = 125373U;
	int16_t x344 = INT16_MIN;

    t85 = (x341<=((x342&x343)^x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x346 = UINT32_MAX;
	static uint16_t x347 = UINT16_MAX;
	int32_t x348 = INT32_MAX;
	volatile int32_t t86 = -5040;

    t86 = (x345<=((x346&x347)^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MAX;
	static int64_t x350 = -37687007578LL;
	int64_t x351 = -4145393849556120LL;

    t87 = (x349<=((x350&x351)^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x353 = 77U;
	static int16_t x354 = INT16_MIN;
	int64_t x355 = -116499LL;
	int64_t x356 = 35910989479LL;
	volatile int32_t t88 = -102712181;

    t88 = (x353<=((x354&x355)^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x359 = 5;
	static uint64_t x360 = 8LLU;
	volatile int32_t t89 = 823;

    t89 = (x357<=((x358&x359)^x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int64_t x362 = INT64_MIN;
	static volatile int16_t x363 = INT16_MAX;
	volatile uint64_t x364 = 6077613406LLU;
	int32_t t90 = 186375;

    t90 = (x361<=((x362&x363)^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MAX;
	static uint16_t x366 = UINT16_MAX;
	int64_t x367 = -1LL;
	static uint8_t x368 = 8U;
	static int32_t t91 = 1510411;

    t91 = (x365<=((x366&x367)^x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x369 = 10693U;
	int64_t x371 = 16942611LL;
	static uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -18799893;

    t92 = (x369<=((x370&x371)^x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int32_t x373 = -1;
	volatile uint8_t x374 = 7U;
	static uint16_t x376 = 2501U;
	volatile int32_t t93 = -348449;

    t93 = (x373<=((x374&x375)^x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = -1;
	int16_t x378 = INT16_MIN;
	static int16_t x379 = INT16_MIN;
	static int32_t x380 = INT32_MAX;

    t94 = (x377<=((x378&x379)^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x382 = UINT64_MAX;
	static int16_t x383 = 1923;
	volatile int64_t x384 = INT64_MAX;
	static volatile int32_t t95 = 18571407;

    t95 = (x381<=((x382&x383)^x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x385 = 610665843U;
	static int8_t x386 = -1;
	int32_t x387 = 952275;
	uint16_t x388 = 4298U;
	volatile int32_t t96 = 31418016;

    t96 = (x385<=((x386&x387)^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MAX;

    t97 = (x389<=((x390&x391)^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x394 = 3LLU;
	uint16_t x395 = 3210U;
	static uint64_t x396 = 353LLU;
	int32_t t98 = 865052;

    t98 = (x393<=((x394&x395)^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 51U;
	uint32_t x398 = 0U;
	static uint16_t x399 = 288U;
	int8_t x400 = INT8_MIN;
	int32_t t99 = 7234;

    t99 = (x397<=((x398&x399)^x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -665;
	int8_t x402 = -1;
	static uint32_t x404 = 15656U;
	static int32_t t100 = 257001;

    t100 = (x401<=((x402&x403)^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	int32_t x407 = INT32_MIN;
	volatile uint8_t x408 = 3U;
	static int32_t t101 = -1;

    t101 = (x405<=((x406&x407)^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = UINT32_MAX;
	int8_t x410 = INT8_MAX;
	int32_t x411 = INT32_MIN;
	volatile int32_t t102 = 8137566;

    t102 = (x409<=((x410&x411)^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 0U;
	static uint64_t x414 = UINT64_MAX;
	int64_t x415 = INT64_MIN;
	int16_t x416 = -27;
	static volatile int32_t t103 = 469557678;

    t103 = (x413<=((x414&x415)^x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = 3155242;
	static uint8_t x418 = UINT8_MAX;
	static uint32_t x419 = 200692U;
	uint32_t x420 = UINT32_MAX;
	int32_t t104 = 27409;

    t104 = (x417<=((x418&x419)^x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x421 = 429078209453706540LLU;
	int8_t x422 = 1;
	volatile int16_t x423 = -10416;
	uint64_t x424 = 21104734218LLU;
	int32_t t105 = 0;

    t105 = (x421<=((x422&x423)^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x425 = 2757194LLU;
	volatile int8_t x426 = INT8_MAX;
	static uint16_t x427 = UINT16_MAX;
	static int32_t x428 = INT32_MIN;

    t106 = (x425<=((x426&x427)^x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 59;
	uint8_t x430 = 1U;
	int32_t x431 = INT32_MIN;
	int32_t t107 = -1;

    t107 = (x429<=((x430&x431)^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x435 = INT32_MAX;
	int32_t x436 = -9201;
	int32_t t108 = -27477;

    t108 = (x433<=((x434&x435)^x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MAX;
	static int16_t x438 = INT16_MIN;
	int64_t x439 = 177785106188313226LL;
	uint8_t x440 = 46U;
	static int32_t t109 = -161532769;

    t109 = (x437<=((x438&x439)^x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x442 = 1094795299090365867LLU;
	int64_t x443 = INT64_MIN;
	int8_t x444 = INT8_MIN;

    t110 = (x441<=((x442&x443)^x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x446 = UINT64_MAX;
	uint16_t x447 = 19616U;

    t111 = (x445<=((x446&x447)^x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = INT16_MAX;
	uint8_t x451 = 62U;
	static volatile int8_t x452 = INT8_MAX;
	volatile int32_t t112 = -4065;

    t112 = (x449<=((x450&x451)^x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	volatile int64_t x454 = -3121754820935420LL;
	volatile uint16_t x455 = 1U;
	static volatile int32_t t113 = 1;

    t113 = (x453<=((x454&x455)^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x457 = 101U;
	int32_t x459 = INT32_MAX;
	static uint8_t x460 = 0U;

    t114 = (x457<=((x458&x459)^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MAX;
	int8_t x462 = 22;
	static int16_t x463 = 3351;
	int16_t x464 = INT16_MAX;
	static int32_t t115 = 24496398;

    t115 = (x461<=((x462&x463)^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	int16_t x466 = INT16_MIN;
	uint64_t x467 = 2465939361154LLU;
	static uint32_t x468 = 3U;
	int32_t t116 = 36098;

    t116 = (x465<=((x466&x467)^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = -1;
	int8_t x471 = INT8_MIN;
	static int32_t x472 = -1;
	volatile int32_t t117 = -1;

    t117 = (x469<=((x470&x471)^x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x474 = INT16_MIN;
	static uint16_t x475 = 10U;
	static uint16_t x476 = 1U;

    t118 = (x473<=((x474&x475)^x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = 1;
	int16_t x480 = INT16_MIN;
	volatile int32_t t119 = 3289866;

    t119 = (x477<=((x478&x479)^x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	volatile int32_t x482 = -2;
	int32_t x483 = -66154;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t120 = -157;

    t120 = (x481<=((x482&x483)^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = INT64_MIN;
	int8_t x487 = INT8_MIN;
	int32_t t121 = 31529;

    t121 = (x485<=((x486&x487)^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = UINT64_MAX;
	static volatile int16_t x490 = -1;
	uint32_t x491 = 190832913U;
	int64_t x492 = -1LL;
	volatile int32_t t122 = 8495;

    t122 = (x489<=((x490&x491)^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x494 = INT32_MIN;
	uint32_t x495 = 302U;
	volatile uint16_t x496 = UINT16_MAX;
	volatile int32_t t123 = 57191703;

    t123 = (x493<=((x494&x495)^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 5U;
	static int32_t x500 = -146994876;
	static int32_t t124 = 64814;

    t124 = (x497<=((x498&x499)^x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = UINT64_MAX;
	volatile int8_t x504 = INT8_MAX;
	int32_t t125 = 50;

    t125 = (x501<=((x502&x503)^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 2;
	int32_t x506 = INT32_MAX;
	int64_t x507 = INT64_MAX;

    t126 = (x505<=((x506&x507)^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = UINT8_MAX;
	int16_t x511 = INT16_MIN;
	volatile int64_t x512 = -19175095512LL;
	volatile int32_t t127 = -7;

    t127 = (x509<=((x510&x511)^x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 2525234U;
	volatile int64_t x515 = INT64_MIN;
	volatile int64_t x516 = INT64_MAX;
	int32_t t128 = -5269;

    t128 = (x513<=((x514&x515)^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x518 = -18;
	int32_t t129 = 527190;

    t129 = (x517<=((x518&x519)^x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = -9384;
	uint8_t x522 = UINT8_MAX;
	uint8_t x524 = 2U;
	volatile int32_t t130 = -108898;

    t130 = (x521<=((x522&x523)^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x525 = UINT32_MAX;
	int16_t x527 = -108;
	volatile uint16_t x528 = 78U;
	static volatile int32_t t131 = -103078612;

    t131 = (x525<=((x526&x527)^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = UINT32_MAX;
	uint8_t x530 = 19U;
	int32_t x532 = INT32_MIN;
	int32_t t132 = -2932869;

    t132 = (x529<=((x530&x531)^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	uint64_t x534 = 27673020926928539LLU;
	static int8_t x535 = INT8_MAX;
	int64_t x536 = INT64_MAX;
	volatile int32_t t133 = 216614;

    t133 = (x533<=((x534&x535)^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x538 = UINT32_MAX;
	int64_t x539 = -28346350445LL;
	volatile int16_t x540 = INT16_MAX;
	int32_t t134 = 326756;

    t134 = (x537<=((x538&x539)^x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = INT32_MAX;
	uint16_t x542 = UINT16_MAX;
	volatile int32_t t135 = 31358;

    t135 = (x541<=((x542&x543)^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = UINT8_MAX;
	static int32_t x546 = -189733297;
	static uint8_t x547 = UINT8_MAX;
	int8_t x548 = INT8_MIN;
	static int32_t t136 = -7405467;

    t136 = (x545<=((x546&x547)^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = INT32_MAX;
	int64_t x551 = INT64_MAX;
	int32_t t137 = 269802;

    t137 = (x549<=((x550&x551)^x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x554 = UINT8_MAX;
	int8_t x555 = INT8_MIN;
	static int8_t x556 = INT8_MIN;
	static int32_t t138 = -13655005;

    t138 = (x553<=((x554&x555)^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MAX;
	int8_t x558 = -13;
	volatile int64_t x559 = 150244340298267LL;
	int64_t x560 = -1LL;
	volatile int32_t t139 = 681495;

    t139 = (x557<=((x558&x559)^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 3566495LLU;
	int8_t x562 = -1;
	static int8_t x563 = INT8_MIN;
	int32_t x564 = INT32_MAX;
	static int32_t t140 = -167;

    t140 = (x561<=((x562&x563)^x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = UINT32_MAX;
	static volatile int16_t x566 = -1;
	int64_t x567 = -491369784090LL;
	int64_t x568 = 143705LL;
	int32_t t141 = -1041;

    t141 = (x565<=((x566&x567)^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 7730U;
	int16_t x571 = -7;
	static int32_t x572 = INT32_MIN;

    t142 = (x569<=((x570&x571)^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = 5U;
	uint8_t x575 = 1U;
	int64_t x576 = -7251LL;
	int32_t t143 = -950667855;

    t143 = (x573<=((x574&x575)^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 7LLU;
	volatile uint32_t x578 = 1715U;
	int32_t x579 = 595380970;
	uint32_t x580 = 196U;
	static int32_t t144 = -4;

    t144 = (x577<=((x578&x579)^x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -500;
	volatile int32_t t145 = -7902475;

    t145 = (x581<=((x582&x583)^x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x585 = 36;
	static uint8_t x586 = 3U;
	int16_t x587 = INT16_MIN;
	static int64_t x588 = -1004703033476654164LL;

    t146 = (x585<=((x586&x587)^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 2U;
	static volatile int16_t x590 = -1;
	uint32_t x591 = UINT32_MAX;
	int32_t x592 = INT32_MIN;
	int32_t t147 = -344631;

    t147 = (x589<=((x590&x591)^x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x594 = INT32_MAX;
	uint64_t x595 = 504447603927684301LLU;
	volatile int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -54;

    t148 = (x593<=((x594&x595)^x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = UINT8_MAX;
	int16_t x598 = 54;
	int32_t t149 = 6231172;

    t149 = (x597<=((x598&x599)^x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 2112U;
	uint16_t x602 = 1U;
	volatile int8_t x603 = 0;

    t150 = (x601<=((x602&x603)^x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = UINT32_MAX;
	uint8_t x606 = 2U;
	static int64_t x608 = INT64_MIN;
	int32_t t151 = -33267;

    t151 = (x605<=((x606&x607)^x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x609 = INT8_MAX;
	int8_t x610 = INT8_MAX;
	uint16_t x611 = UINT16_MAX;
	uint16_t x612 = 22386U;
	int32_t t152 = -1907;

    t152 = (x609<=((x610&x611)^x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x613 = 751946U;
	int8_t x614 = INT8_MIN;
	static volatile int16_t x616 = INT16_MIN;
	int32_t t153 = -14090000;

    t153 = (x613<=((x614&x615)^x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = -1LL;
	volatile int16_t x619 = INT16_MIN;
	int8_t x620 = INT8_MIN;
	int32_t t154 = 212902;

    t154 = (x617<=((x618&x619)^x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x622 = 2596U;
	uint16_t x623 = 1U;
	volatile int16_t x624 = 12804;
	int32_t t155 = -3742;

    t155 = (x621<=((x622&x623)^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = INT16_MAX;
	static volatile int8_t x626 = -1;
	uint8_t x627 = UINT8_MAX;
	int32_t t156 = 265;

    t156 = (x625<=((x626&x627)^x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = 0;
	int8_t x630 = -28;
	int64_t x631 = 1145LL;
	int64_t x632 = -1LL;

    t157 = (x629<=((x630&x631)^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = 9;
	uint8_t x634 = UINT8_MAX;
	uint32_t x635 = UINT32_MAX;
	int64_t x636 = INT64_MIN;
	volatile int32_t t158 = 242540;

    t158 = (x633<=((x634&x635)^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	int64_t x638 = 0LL;
	uint8_t x639 = 3U;
	int8_t x640 = INT8_MIN;
	static int32_t t159 = 1923;

    t159 = (x637<=((x638&x639)^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x641 = -1LL;
	int8_t x642 = -6;
	volatile int32_t x643 = INT32_MAX;

    t160 = (x641<=((x642&x643)^x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x646 = 17U;
	int8_t x647 = INT8_MIN;
	static volatile uint32_t x648 = 277406836U;
	int32_t t161 = 399486;

    t161 = (x645<=((x646&x647)^x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = -1;
	static int8_t x650 = INT8_MIN;
	static int32_t x651 = INT32_MIN;
	uint8_t x652 = 0U;
	int32_t t162 = -12736005;

    t162 = (x649<=((x650&x651)^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -25224105180661621LL;
	uint32_t x654 = UINT32_MAX;
	int32_t x655 = -8100;
	int32_t x656 = INT32_MAX;
	volatile int32_t t163 = -233374971;

    t163 = (x653<=((x654&x655)^x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MAX;
	uint8_t x658 = 0U;
	static int64_t x659 = -1LL;
	static volatile int32_t x660 = INT32_MIN;
	volatile int32_t t164 = -7765844;

    t164 = (x657<=((x658&x659)^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = -1;
	static int8_t x663 = INT8_MAX;
	static int32_t x664 = INT32_MAX;

    t165 = (x661<=((x662&x663)^x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x666 = INT16_MIN;
	uint16_t x667 = 2019U;
	int32_t x668 = 420407034;
	volatile int32_t t166 = -41;

    t166 = (x665<=((x666&x667)^x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = -1;
	volatile int16_t x672 = -1;

    t167 = (x669<=((x670&x671)^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	volatile int64_t x674 = -1LL;
	int8_t x675 = -1;
	static volatile int8_t x676 = INT8_MAX;
	volatile int32_t t168 = -7;

    t168 = (x673<=((x674&x675)^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 3256008U;
	uint32_t x679 = UINT32_MAX;
	static int64_t x680 = -1LL;
	volatile int32_t t169 = 630401;

    t169 = (x677<=((x678&x679)^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	static uint32_t x682 = UINT32_MAX;
	int32_t x684 = -46;
	volatile int32_t t170 = -102483909;

    t170 = (x681<=((x682&x683)^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = INT64_MIN;
	int8_t x687 = INT8_MAX;
	int64_t x688 = INT64_MIN;
	volatile int32_t t171 = 755;

    t171 = (x685<=((x686&x687)^x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	static volatile int8_t x690 = -29;
	volatile int32_t t172 = -205;

    t172 = (x689<=((x690&x691)^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x694 = INT32_MIN;
	int32_t t173 = 45085909;

    t173 = (x693<=((x694&x695)^x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MAX;
	int32_t x698 = INT32_MAX;
	volatile uint64_t x699 = 3808191836463932LLU;
	volatile int32_t t174 = 0;

    t174 = (x697<=((x698&x699)^x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 1112935962U;
	int8_t x702 = -8;
	static volatile int8_t x703 = INT8_MIN;
	volatile int8_t x704 = INT8_MIN;

    t175 = (x701<=((x702&x703)^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	int16_t x706 = INT16_MAX;
	uint8_t x708 = 26U;
	volatile int32_t t176 = 183055;

    t176 = (x705<=((x706&x707)^x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	uint64_t x710 = 8142512935102651LLU;
	volatile uint32_t x712 = 85U;
	volatile int32_t t177 = 112588206;

    t177 = (x709<=((x710&x711)^x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 359U;
	static int32_t x714 = INT32_MIN;
	uint16_t x715 = 4U;
	volatile uint64_t x716 = 1224989307962LLU;
	static int32_t t178 = 0;

    t178 = (x713<=((x714&x715)^x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = -1;
	volatile int8_t x718 = INT8_MIN;
	int16_t x719 = INT16_MIN;
	int64_t x720 = -1LL;
	volatile int32_t t179 = 723134;

    t179 = (x717<=((x718&x719)^x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x722 = INT32_MIN;
	int32_t x723 = INT32_MIN;
	uint32_t x724 = 480342100U;
	int32_t t180 = -75430;

    t180 = (x721<=((x722&x723)^x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x727 = 55373LL;
	uint16_t x728 = UINT16_MAX;
	volatile int32_t t181 = 235;

    t181 = (x725<=((x726&x727)^x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = UINT64_MAX;
	static volatile int32_t x730 = INT32_MIN;
	uint16_t x731 = 15273U;
	uint64_t x732 = 980LLU;
	volatile int32_t t182 = -207315;

    t182 = (x729<=((x730&x731)^x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x733 = 5963372393680LL;
	uint8_t x734 = 38U;
	static int16_t x735 = -1;
	int16_t x736 = INT16_MIN;

    t183 = (x733<=((x734&x735)^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 11801211LLU;
	int8_t x739 = INT8_MIN;
	static uint16_t x740 = UINT16_MAX;
	volatile int32_t t184 = 29360;

    t184 = (x737<=((x738&x739)^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x741 = 23155429271LLU;
	uint64_t x742 = 58392768555091LLU;
	int8_t x743 = -1;
	volatile int16_t x744 = INT16_MAX;
	volatile int32_t t185 = 2398;

    t185 = (x741<=((x742&x743)^x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x746 = 12676;
	uint8_t x747 = 1U;
	int64_t x748 = 34197230695121LL;
	static volatile int32_t t186 = -5001;

    t186 = (x745<=((x746&x747)^x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x750 = 6U;
	int8_t x751 = 3;
	static int32_t x752 = -1;

    t187 = (x749<=((x750&x751)^x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x754 = INT64_MIN;
	int16_t x755 = INT16_MIN;
	volatile int32_t x756 = -245208;
	int32_t t188 = -4;

    t188 = (x753<=((x754&x755)^x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = -1LL;
	int16_t x758 = INT16_MIN;
	static volatile int64_t x759 = 4736524320187114LL;
	int64_t x760 = -16LL;
	volatile int32_t t189 = -42216786;

    t189 = (x757<=((x758&x759)^x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -10;
	int32_t x762 = INT32_MAX;
	uint64_t x763 = 256341884281LLU;
	static int32_t x764 = INT32_MIN;
	int32_t t190 = 443;

    t190 = (x761<=((x762&x763)^x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 234855725222LLU;
	static int16_t x766 = 207;
	int32_t x767 = 1;
	volatile int32_t t191 = 642912496;

    t191 = (x765<=((x766&x767)^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	int64_t x770 = 1630835LL;
	volatile int64_t x771 = 97352LL;
	uint64_t x772 = 7241894432744983LLU;
	volatile int32_t t192 = 2405;

    t192 = (x769<=((x770&x771)^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	uint32_t x774 = UINT32_MAX;
	volatile int64_t x775 = -236433902711LL;
	uint8_t x776 = 0U;
	volatile int32_t t193 = 2922;

    t193 = (x773<=((x774&x775)^x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = -1;
	int16_t x779 = INT16_MIN;
	static volatile int32_t x780 = -1;
	int32_t t194 = 518251980;

    t194 = (x777<=((x778&x779)^x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = 8;
	static uint64_t x782 = 22LLU;
	volatile int32_t x783 = INT32_MIN;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t195 = 3130366;

    t195 = (x781<=((x782&x783)^x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = 10914;
	int8_t x786 = 0;

    t196 = (x785<=((x786&x787)^x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x790 = INT16_MIN;
	int64_t x791 = 455032220167990LL;
	static volatile int16_t x792 = -1;
	volatile int32_t t197 = 26438727;

    t197 = (x789<=((x790&x791)^x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = INT64_MIN;
	int32_t x794 = 29;
	int32_t t198 = 38271055;

    t198 = (x793<=((x794&x795)^x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = UINT64_MAX;
	static uint16_t x798 = 2800U;
	static int8_t x799 = INT8_MAX;
	uint32_t x800 = 1967351249U;

    t199 = (x797<=((x798&x799)^x800));

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

