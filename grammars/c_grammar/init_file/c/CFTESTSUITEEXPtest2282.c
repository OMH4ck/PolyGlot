
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

int64_t x1 = INT64_MIN;
uint8_t x8 = 15U;
volatile uint64_t x10 = 80770968882162LLU;
int8_t x12 = -1;
static int32_t t2 = 1398129;
int64_t t3 = -413603LL;
int32_t x18 = INT32_MIN;
int8_t x20 = INT8_MIN;
static int64_t x21 = INT64_MIN;
uint64_t x22 = 17LLU;
int16_t x24 = -3453;
volatile int64_t t6 = -554818511100341377LL;
volatile uint64_t t9 = 167993325452234874LLU;
static int32_t x42 = 21129;
uint64_t x48 = 7140512LLU;
volatile int16_t x50 = INT16_MIN;
volatile int32_t t12 = -4159254;
int16_t x58 = 49;
uint64_t x60 = 6396068041936299LLU;
uint16_t x64 = UINT16_MAX;
volatile int8_t x65 = -41;
int32_t x68 = 0;
int64_t x70 = -2205729203060485LL;
static uint8_t x73 = 34U;
int32_t x74 = INT32_MIN;
static int64_t x75 = INT64_MAX;
volatile int64_t x76 = INT64_MIN;
uint16_t x82 = 124U;
int16_t x85 = -50;
volatile int32_t t21 = 2021475;
volatile int32_t x92 = INT32_MIN;
volatile int16_t x93 = -1;
int32_t t23 = -1292;
int32_t x97 = INT32_MAX;
volatile int64_t x99 = INT64_MIN;
int64_t x100 = INT64_MAX;
volatile int8_t x118 = INT8_MIN;
volatile int8_t x124 = INT8_MAX;
volatile int8_t x127 = -1;
uint64_t x128 = UINT64_MAX;
int32_t t31 = INT32_MIN;
static int8_t x130 = INT8_MIN;
volatile int16_t x132 = -10089;
int32_t x136 = INT32_MIN;
static uint8_t x137 = 112U;
volatile int32_t x138 = -1;
volatile uint32_t x140 = 3613060U;
int32_t x141 = 21;
uint64_t x142 = UINT64_MAX;
int32_t t35 = 18000001;
uint16_t x155 = 9U;
int64_t x157 = INT64_MIN;
int32_t x163 = INT32_MIN;
int16_t x164 = -9;
uint32_t t40 = UINT32_MAX;
int16_t x170 = INT16_MAX;
uint64_t x172 = 81310028665501LLU;
int32_t x178 = -1;
int8_t x188 = INT8_MIN;
uint64_t x189 = 460LLU;
volatile uint16_t x190 = UINT16_MAX;
int32_t x193 = INT32_MIN;
int16_t x194 = INT16_MIN;
uint8_t x195 = 3U;
uint32_t x198 = 484275U;
int32_t x199 = INT32_MIN;
uint32_t x211 = UINT32_MAX;
int64_t x212 = INT64_MIN;
volatile int32_t x216 = 2722;
static int16_t x218 = 2;
uint32_t t54 = 1891U;
int64_t x221 = -1LL;
int16_t x224 = INT16_MIN;
static volatile int32_t t56 = -319442;
int32_t x232 = INT32_MIN;
int16_t x234 = -34;
int64_t x236 = 155088501926405856LL;
uint32_t x237 = 1U;
volatile uint32_t t59 = 837U;
int8_t x247 = INT8_MIN;
static int16_t x250 = INT16_MIN;
int32_t t62 = -2423482;
int8_t x255 = INT8_MIN;
int64_t x259 = INT64_MIN;
volatile int32_t x264 = -1;
uint32_t x267 = UINT32_MAX;
int16_t x268 = INT16_MAX;
volatile int8_t x271 = -30;
int16_t x276 = INT16_MIN;
int64_t x277 = INT64_MIN;
int64_t x278 = 0LL;
static uint16_t x286 = 3000U;
int64_t x288 = INT64_MIN;
int16_t x304 = -1;
uint16_t x309 = UINT16_MAX;
int16_t x311 = -12;
static int16_t x312 = 12;
static volatile uint32_t t79 = 58044U;
static int32_t t80 = -1;
int32_t x325 = INT32_MIN;
int8_t x326 = -25;
static volatile int32_t t83 = 3;
int16_t x338 = -883;
int16_t x339 = INT16_MAX;
static int64_t x340 = -57415820596188615LL;
int64_t x345 = INT64_MAX;
volatile uint8_t x352 = 27U;
uint8_t x363 = 4U;
int8_t x367 = 14;
int32_t x371 = INT32_MAX;
volatile uint32_t t92 = 53U;
uint8_t x374 = UINT8_MAX;
volatile int16_t x376 = INT16_MIN;
volatile int8_t x378 = INT8_MAX;
int16_t x386 = -1;
uint32_t x393 = 75U;
static int64_t x396 = -1LL;
static int8_t x404 = INT8_MIN;
uint16_t x410 = UINT16_MAX;
int64_t t103 = INT64_MIN;
static uint32_t x421 = 4752U;
volatile uint64_t x423 = 17LLU;
uint64_t x424 = UINT64_MAX;
uint32_t x426 = 1439453262U;
uint32_t x431 = UINT32_MAX;
volatile int32_t x432 = INT32_MIN;
int32_t t107 = 216;
static uint64_t x436 = UINT64_MAX;
uint16_t x439 = UINT16_MAX;
int64_t x450 = 35742413169LL;
int32_t t112 = 3928644;
volatile int64_t t113 = INT64_MIN;
volatile int16_t x462 = INT16_MIN;
int16_t x464 = -1;
int32_t x467 = INT32_MIN;
int32_t x470 = INT32_MAX;
uint16_t x474 = UINT16_MAX;
int32_t x475 = INT32_MIN;
uint8_t x489 = UINT8_MAX;
int16_t x503 = -2025;
int8_t x504 = -12;
int32_t x519 = INT32_MIN;
static int64_t x521 = 1LL;
int64_t t130 = 9107666LL;
uint8_t x528 = UINT8_MAX;
int16_t x530 = INT16_MAX;
static uint16_t x534 = 10431U;
static volatile uint16_t x536 = 2302U;
int32_t t133 = 1;
volatile int32_t t134 = -2931760;
int16_t x546 = INT16_MAX;
uint64_t x549 = UINT64_MAX;
int64_t x551 = INT64_MAX;
uint32_t x559 = 86636U;
int64_t x560 = 1LL;
int16_t x563 = -1;
volatile uint16_t x568 = UINT16_MAX;
volatile int8_t x571 = 1;
int16_t x572 = -60;
int32_t t142 = 0;
int16_t x574 = INT16_MIN;
static int32_t x576 = INT32_MIN;
static uint16_t x577 = 208U;
volatile uint64_t x584 = UINT64_MAX;
int16_t x591 = 2;
int8_t x594 = 6;
uint64_t x595 = 857455962LLU;
static int16_t x608 = -7001;
volatile int64_t x614 = INT64_MIN;
int64_t x615 = -1LL;
volatile int64_t t153 = INT64_MAX;
volatile int32_t t154 = 1;
uint8_t x622 = 3U;
static uint32_t t156 = 1414745143U;
int8_t x630 = INT8_MAX;
volatile int32_t x633 = 62;
volatile uint8_t x637 = UINT8_MAX;
uint64_t x641 = UINT64_MAX;
int64_t x650 = INT64_MAX;
uint8_t x653 = UINT8_MAX;
int16_t x654 = -1233;
volatile uint16_t x657 = UINT16_MAX;
uint32_t x659 = UINT32_MAX;
uint8_t x662 = 1U;
int16_t x670 = -1;
uint8_t x671 = UINT8_MAX;
int16_t x672 = INT16_MIN;
int64_t x674 = INT64_MIN;
int32_t x679 = -1393669;
uint8_t x684 = 7U;
int32_t x701 = -1;
volatile int32_t t175 = -21801;
int32_t x705 = INT32_MAX;
uint16_t x709 = UINT16_MAX;
static uint16_t x713 = 3596U;
static int64_t x714 = 159147402606LL;
volatile int32_t t178 = -3949270;
int16_t x718 = INT16_MIN;
int32_t x724 = INT32_MIN;
uint16_t x726 = UINT16_MAX;
int32_t x730 = INT32_MIN;
uint16_t x731 = 49U;
volatile int8_t x735 = 36;
volatile int32_t x745 = INT32_MAX;
int64_t x752 = -1LL;
int32_t x757 = -1;
volatile int64_t x759 = INT64_MIN;
volatile int32_t t191 = -14459;
static volatile int64_t x777 = INT64_MIN;
static int16_t x779 = INT16_MIN;
static uint16_t x780 = 6U;
int64_t t194 = INT64_MIN;
int8_t x782 = INT8_MAX;
volatile int32_t t195 = 72;
uint32_t x787 = UINT32_MAX;
volatile int32_t t196 = -105;
static int32_t x794 = INT32_MIN;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	volatile uint16_t x3 = UINT16_MAX;
	static uint16_t x4 = 2U;
	volatile int64_t t0 = INT64_MIN;

    t0 = (x1^((x2&x3)>x4));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MAX;
	static int64_t x6 = 94715232771LL;
	static int64_t x7 = 47244678LL;
	volatile int64_t t1 = 514588LL;

    t1 = (x5^((x6&x7)>x8));

    if (t1 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 0U;
	uint16_t x11 = UINT16_MAX;

    t2 = (x9^((x10&x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -5521963212849LL;
	static int8_t x14 = INT8_MIN;
	static uint8_t x15 = 16U;
	int64_t x16 = -2088825420LL;

    t3 = (x13^((x14&x15)>x16));

    if (t3 != -5521963212850LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MIN;
	int32_t x19 = INT32_MAX;
	static volatile int32_t t4 = 4;

    t4 = (x17^((x18&x19)>x20));

    if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x23 = 3449722U;
	volatile int64_t t5 = INT64_MIN;

    t5 = (x21^((x22&x23)>x24));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -654816070LL;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MAX;
	static int64_t x28 = INT64_MIN;

    t6 = (x25^((x26&x27)>x28));

    if (t6 != -654816069LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MAX;
	int64_t x31 = -1LL;
	volatile int32_t x32 = -1;
	volatile uint32_t t7 = 1694036U;

    t7 = (x29^((x30&x31)>x32));

    if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -6LL;
	uint16_t x34 = 22774U;
	volatile int16_t x35 = 7523;
	int8_t x36 = INT8_MIN;
	int64_t t8 = 3LL;

    t8 = (x33^((x34&x35)>x36));

    if (t8 != -5LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 85518568991137799LLU;
	volatile int32_t x38 = 588;
	volatile uint64_t x39 = 11930943520576933LLU;
	uint32_t x40 = 121742U;

    t9 = (x37^((x38&x39)>x40));

    if (t9 != 85518568991137799LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	uint32_t x43 = 1666699U;
	uint8_t x44 = 1U;
	int32_t t10 = 254346070;

    t10 = (x41^((x42&x43)>x44));

    if (t10 != 254) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	uint8_t x46 = 114U;
	volatile int64_t x47 = INT64_MIN;
	int32_t t11 = 9;

    t11 = (x45^((x46&x47)>x48));

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	int64_t x51 = INT64_MAX;
	static volatile int64_t x52 = 52LL;

    t12 = (x49^((x50&x51)>x52));

    if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	volatile int32_t x54 = 1;
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 112538302;

    t13 = (x53^((x54&x55)>x56));

    if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MAX;
	volatile uint8_t x59 = UINT8_MAX;
	static int32_t t14 = 314;

    t14 = (x57^((x58&x59)>x60));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -18;
	uint8_t x62 = 80U;
	int64_t x63 = -35LL;
	int32_t t15 = 503688506;

    t15 = (x61^((x62&x63)>x64));

    if (t15 != -18) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = 3;
	int8_t x67 = -1;
	int32_t t16 = -521704956;

    t16 = (x65^((x66&x67)>x68));

    if (t16 != -42) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 2249LLU;
	int8_t x71 = -1;
	volatile uint32_t x72 = 0U;
	static volatile uint64_t t17 = 85943LLU;

    t17 = (x69^((x70&x71)>x72));

    if (t17 != 2249LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t t18 = -2;

    t18 = (x73^((x74&x75)>x76));

    if (t18 != 35) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 11U;
	int16_t x78 = INT16_MIN;
	static int16_t x79 = -10187;
	static uint32_t x80 = 1158019U;
	volatile uint32_t t19 = 922899U;

    t19 = (x77^((x78&x79)>x80));

    if (t19 != 10U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 103392;
	int8_t x83 = INT8_MAX;
	int16_t x84 = -13;
	int32_t t20 = 6;

    t20 = (x81^((x82&x83)>x84));

    if (t20 != 103393) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x86 = INT16_MIN;
	uint64_t x87 = UINT64_MAX;
	uint16_t x88 = 227U;

    t21 = (x85^((x86&x87)>x88));

    if (t21 != -49) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = 40U;
	int16_t x90 = INT16_MAX;
	int8_t x91 = -1;
	volatile uint32_t t22 = 35638U;

    t22 = (x89^((x90&x91)>x92));

    if (t22 != 41U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x94 = INT32_MAX;
	uint32_t x95 = UINT32_MAX;
	volatile uint16_t x96 = UINT16_MAX;

    t23 = (x93^((x94&x95)>x96));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MIN;
	static volatile int32_t t24 = INT32_MAX;

    t24 = (x97^((x98&x99)>x100));

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x101 = 0U;
	uint16_t x102 = 55U;
	static uint64_t x103 = UINT64_MAX;
	uint64_t x104 = 2837485007392729491LLU;
	volatile int32_t t25 = 2;

    t25 = (x101^((x102&x103)>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 533279964U;
	uint64_t x106 = 1188015221477766429LLU;
	int16_t x107 = INT16_MIN;
	int64_t x108 = -12593LL;
	volatile uint32_t t26 = 344543U;

    t26 = (x105^((x106&x107)>x108));

    if (t26 != 533279964U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	uint32_t x110 = UINT32_MAX;
	uint16_t x111 = UINT16_MAX;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = -15246855;

    t27 = (x109^((x110&x111)>x112));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x113 = 0U;
	uint16_t x114 = 7U;
	uint8_t x115 = 1U;
	uint64_t x116 = 83LLU;
	volatile int32_t t28 = 22583;

    t28 = (x113^((x114&x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	volatile uint8_t x119 = UINT8_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 69;

    t29 = (x117^((x118&x119)>x120));

    if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = INT8_MIN;
	static int16_t x122 = INT16_MIN;
	volatile uint16_t x123 = 149U;
	int32_t t30 = 1278;

    t30 = (x121^((x122&x123)>x124));

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = INT32_MIN;
	uint32_t x126 = 326096167U;

    t31 = (x125^((x126&x127)>x128));

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -6LL;
	int64_t x131 = INT64_MAX;
	static int64_t t32 = 1320808468LL;

    t32 = (x129^((x130&x131)>x132));

    if (t32 != -5LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = 196791LL;
	int8_t x134 = -42;
	volatile int64_t x135 = INT64_MAX;
	volatile int64_t t33 = 30821831095115LL;

    t33 = (x133^((x134&x135)>x136));

    if (t33 != 196790LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x139 = 11U;
	int32_t t34 = -185;

    t34 = (x137^((x138&x139)>x140));

    if (t34 != 112) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;

    t35 = (x141^((x142&x143)>x144));

    if (t35 != 20) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MAX;
	volatile int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	volatile uint8_t x148 = 3U;
	volatile int32_t t36 = 1;

    t36 = (x145^((x146&x147)>x148));

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	static uint32_t x150 = 10623U;
	static uint64_t x151 = 10LLU;
	uint8_t x152 = 32U;
	static int32_t t37 = -6178;

    t37 = (x149^((x150&x151)>x152));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x153 = INT32_MIN;
	static int64_t x154 = INT64_MAX;
	uint32_t x156 = 252262U;
	volatile int32_t t38 = INT32_MIN;

    t38 = (x153^((x154&x155)>x156));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MAX;
	volatile uint32_t x160 = 20974U;
	volatile int64_t t39 = INT64_MIN;

    t39 = (x157^((x158&x159)>x160));

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	uint64_t x162 = 31802689LLU;

    t40 = (x161^((x162&x163)>x164));

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = -1;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = 29;
	int32_t x168 = 614592663;
	volatile int32_t t41 = 919779;

    t41 = (x165^((x166&x167)>x168));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = -1LL;
	volatile int16_t x171 = INT16_MIN;
	volatile int64_t t42 = -466LL;

    t42 = (x169^((x170&x171)>x172));

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = INT8_MAX;
	static uint32_t x174 = UINT32_MAX;
	volatile int8_t x175 = INT8_MAX;
	volatile uint32_t x176 = 15567U;
	volatile int32_t t43 = -481778039;

    t43 = (x173^((x174&x175)>x176));

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 815U;
	uint8_t x179 = UINT8_MAX;
	uint64_t x180 = 3630LLU;
	static volatile uint32_t t44 = 136U;

    t44 = (x177^((x178&x179)>x180));

    if (t44 != 815U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x181 = 2152U;
	uint8_t x182 = 41U;
	volatile uint16_t x183 = UINT16_MAX;
	volatile uint16_t x184 = UINT16_MAX;
	uint32_t t45 = 369919716U;

    t45 = (x181^((x182&x183)>x184));

    if (t45 != 2152U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MAX;
	volatile uint16_t x186 = UINT16_MAX;
	int64_t x187 = INT64_MAX;
	static volatile int64_t t46 = 733427384LL;

    t46 = (x185^((x186&x187)>x188));

    if (t46 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x191 = UINT32_MAX;
	int8_t x192 = -10;
	volatile uint64_t t47 = 127536163017LLU;

    t47 = (x189^((x190&x191)>x192));

    if (t47 != 460LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x196 = 0;
	volatile int32_t t48 = INT32_MIN;

    t48 = (x193^((x194&x195)>x196));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x197 = 27U;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t49 = -33479;

    t49 = (x197^((x198&x199)>x200));

    if (t49 != 27) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	static int8_t x203 = -37;
	uint16_t x204 = 2U;
	int32_t t50 = 103484257;

    t50 = (x201^((x202&x203)>x204));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	int16_t x206 = -1;
	int16_t x207 = -1;
	int64_t x208 = INT64_MAX;
	volatile int32_t t51 = INT32_MIN;

    t51 = (x205^((x206&x207)>x208));

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x209 = UINT8_MAX;
	uint8_t x210 = 1U;
	volatile int32_t t52 = -969;

    t52 = (x209^((x210&x211)>x212));

    if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x213 = 1U;
	volatile uint32_t x214 = 508716U;
	static uint8_t x215 = UINT8_MAX;
	int32_t t53 = -88;

    t53 = (x213^((x214&x215)>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x217 = 53U;
	int8_t x219 = -1;
	int16_t x220 = INT16_MAX;

    t54 = (x217^((x218&x219)>x220));

    if (t54 != 53U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x222 = 13903U;
	static int16_t x223 = -1;
	int64_t t55 = 52874814851116LL;

    t55 = (x221^((x222&x223)>x224));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x225 = 1U;
	uint16_t x226 = 26U;
	int16_t x227 = 1881;
	int64_t x228 = INT64_MIN;

    t56 = (x225^((x226&x227)>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x229 = 1280U;
	volatile int16_t x230 = -1;
	int8_t x231 = -18;
	uint32_t t57 = 1U;

    t57 = (x229^((x230&x231)>x232));

    if (t57 != 1281U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = INT32_MIN;
	uint64_t x235 = 2020LLU;
	int32_t t58 = INT32_MIN;

    t58 = (x233^((x234&x235)>x236));

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = -302180890;
	volatile int8_t x239 = INT8_MIN;
	int64_t x240 = INT64_MIN;

    t59 = (x237^((x238&x239)>x240));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	int32_t x242 = INT32_MIN;
	static volatile uint64_t x243 = 296833251LLU;
	volatile int8_t x244 = 0;
	static volatile uint64_t t60 = UINT64_MAX;

    t60 = (x241^((x242&x243)>x244));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MAX;
	int64_t x246 = INT64_MIN;
	volatile uint8_t x248 = 12U;
	static int32_t t61 = INT32_MAX;

    t61 = (x245^((x246&x247)>x248));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int64_t x251 = -14621461090206118LL;
	volatile int16_t x252 = 69;

    t62 = (x249^((x250&x251)>x252));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 192;
	int64_t x254 = INT64_MAX;
	volatile int8_t x256 = -12;
	int32_t t63 = -395;

    t63 = (x253^((x254&x255)>x256));

    if (t63 != 193) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	uint64_t x258 = 27484303LLU;
	int32_t x260 = -1;
	static volatile int32_t t64 = 54136142;

    t64 = (x257^((x258&x259)>x260));

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = 1LL;
	uint64_t x262 = 14326602633928048LLU;
	int8_t x263 = -59;
	int64_t t65 = -250981378322589024LL;

    t65 = (x261^((x262&x263)>x264));

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = 1970LLU;
	uint32_t x266 = 503497U;
	volatile uint64_t t66 = 5141960586836LLU;

    t66 = (x265^((x266&x267)>x268));

    if (t66 != 1971LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MAX;
	int16_t x270 = -494;
	volatile int16_t x272 = 7;
	static volatile int32_t t67 = -872;

    t67 = (x269^((x270&x271)>x272));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 31U;
	int32_t x274 = INT32_MAX;
	uint64_t x275 = 143177431531536LLU;
	volatile int32_t t68 = -238593;

    t68 = (x273^((x274&x275)>x276));

    if (t68 != 31) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x279 = INT64_MIN;
	uint8_t x280 = UINT8_MAX;
	volatile int64_t t69 = INT64_MIN;

    t69 = (x277^((x278&x279)>x280));

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 17300809277845LLU;
	static volatile int32_t x282 = INT32_MIN;
	int32_t x283 = -178;
	int32_t x284 = 1;
	volatile uint64_t t70 = 17580726730LLU;

    t70 = (x281^((x282&x283)>x284));

    if (t70 != 17300809277845LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = -12743131248239LL;
	static int32_t x287 = INT32_MAX;
	volatile int64_t t71 = 2526LL;

    t71 = (x285^((x286&x287)>x288));

    if (t71 != -12743131248240LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -15601;
	uint64_t x290 = 803617LLU;
	uint32_t x291 = UINT32_MAX;
	volatile uint8_t x292 = 11U;
	volatile int32_t t72 = -1;

    t72 = (x289^((x290&x291)>x292));

    if (t72 != -15602) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	volatile int32_t x294 = INT32_MAX;
	static volatile int8_t x295 = INT8_MIN;
	static uint32_t x296 = 6929055U;
	static int64_t t73 = -21355529960494LL;

    t73 = (x293^((x294&x295)>x296));

    if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -54;
	uint8_t x298 = 73U;
	uint16_t x299 = 123U;
	int16_t x300 = INT16_MIN;
	static int32_t t74 = -5986;

    t74 = (x297^((x298&x299)>x300));

    if (t74 != -53) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1LL;
	int32_t x302 = INT32_MIN;
	uint8_t x303 = 11U;
	volatile int64_t t75 = 1775761LL;

    t75 = (x301^((x302&x303)>x304));

    if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	int64_t x306 = 44458509378850322LL;
	int8_t x307 = INT8_MAX;
	uint64_t x308 = 441864429629LLU;
	int32_t t76 = 204110;

    t76 = (x305^((x306&x307)>x308));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = -1706230945835457LL;
	int32_t t77 = -2378;

    t77 = (x309^((x310&x311)>x312));

    if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 176265934460LLU;
	uint32_t x314 = 1U;
	volatile uint32_t x315 = 1993982U;
	static int8_t x316 = INT8_MIN;
	uint64_t t78 = 253247005211756LLU;

    t78 = (x313^((x314&x315)>x316));

    if (t78 != 176265934460LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = UINT32_MAX;
	int64_t x318 = -1LL;
	volatile uint32_t x319 = 101623187U;
	static volatile int8_t x320 = INT8_MIN;

    t79 = (x317^((x318&x319)>x320));

    if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	volatile uint16_t x322 = UINT16_MAX;
	int8_t x323 = 1;
	volatile uint64_t x324 = UINT64_MAX;

    t80 = (x321^((x322&x323)>x324));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x327 = 4U;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t81 = INT32_MIN;

    t81 = (x325^((x326&x327)>x328));

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MIN;
	int64_t x331 = -274LL;
	uint32_t x332 = 72767U;
	static volatile int32_t t82 = INT32_MAX;

    t82 = (x329^((x330&x331)>x332));

    if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	uint16_t x334 = UINT16_MAX;
	int16_t x335 = 4455;
	int32_t x336 = INT32_MIN;

    t83 = (x333^((x334&x335)>x336));

    if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -10;
	volatile int32_t t84 = -185171668;

    t84 = (x337^((x338&x339)>x340));

    if (t84 != -9) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = -1349;
	static uint16_t x342 = UINT16_MAX;
	int8_t x343 = INT8_MIN;
	static uint16_t x344 = 1395U;
	volatile int32_t t85 = 395587113;

    t85 = (x341^((x342&x343)>x344));

    if (t85 != -1350) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = INT32_MIN;
	int16_t x347 = -1;
	int64_t x348 = INT64_MIN;
	static int64_t t86 = -3010LL;

    t86 = (x345^((x346&x347)>x348));

    if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = 5412LL;
	int8_t x350 = INT8_MIN;
	static int32_t x351 = 21106504;
	volatile int64_t t87 = 318307166LL;

    t87 = (x349^((x350&x351)>x352));

    if (t87 != 5413LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MAX;
	volatile int16_t x354 = INT16_MIN;
	static uint16_t x355 = 2U;
	int64_t x356 = -1426307385316LL;
	int32_t t88 = -64502182;

    t88 = (x353^((x354&x355)>x356));

    if (t88 != 2147483646) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MIN;
	uint16_t x358 = 340U;
	volatile int32_t x359 = 233556900;
	uint64_t x360 = 5551376083LLU;
	static volatile int32_t t89 = INT32_MIN;

    t89 = (x357^((x358&x359)>x360));

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 5U;
	static int32_t x362 = 1037019;
	uint64_t x364 = 18734LLU;
	volatile int32_t t90 = -71;

    t90 = (x361^((x362&x363)>x364));

    if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	int64_t x366 = INT64_MAX;
	uint8_t x368 = 6U;
	volatile int64_t t91 = -113LL;

    t91 = (x365^((x366&x367)>x368));

    if (t91 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 27099393U;
	volatile int16_t x370 = -1;
	volatile uint64_t x372 = UINT64_MAX;

    t92 = (x369^((x370&x371)>x372));

    if (t92 != 27099393U) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x373 = -7449773601673875LL;
	int8_t x375 = INT8_MAX;
	static int64_t t93 = 64926312930LL;

    t93 = (x373^((x374&x375)>x376));

    if (t93 != -7449773601673876LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -6993246;
	int32_t x379 = INT32_MIN;
	int16_t x380 = INT16_MAX;
	int32_t t94 = 428;

    t94 = (x377^((x378&x379)>x380));

    if (t94 != -6993246) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = 0LL;
	int64_t x382 = INT64_MIN;
	uint16_t x383 = 103U;
	volatile uint32_t x384 = 415U;
	int64_t t95 = 4781207510485978LL;

    t95 = (x381^((x382&x383)>x384));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = UINT32_MAX;
	static int8_t x387 = 6;
	int16_t x388 = INT16_MIN;
	volatile uint32_t t96 = 57383254U;

    t96 = (x385^((x386&x387)>x388));

    if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1;
	static volatile uint8_t x390 = UINT8_MAX;
	uint16_t x391 = 152U;
	static int8_t x392 = INT8_MAX;
	int32_t t97 = -1;

    t97 = (x389^((x390&x391)>x392));

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x394 = INT16_MAX;
	uint32_t x395 = 89819178U;
	uint32_t t98 = 27893306U;

    t98 = (x393^((x394&x395)>x396));

    if (t98 != 74U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = INT16_MIN;
	int16_t x398 = -16269;
	int16_t x399 = -1;
	static volatile int32_t x400 = -2186;
	volatile int32_t t99 = 7971;

    t99 = (x397^((x398&x399)>x400));

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x401 = 318598311U;
	uint64_t x402 = 87937155LLU;
	static int32_t x403 = -197077141;
	static uint32_t t100 = 29927U;

    t100 = (x401^((x402&x403)>x404));

    if (t100 != 318598311U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int32_t x406 = INT32_MIN;
	uint32_t x407 = 29502U;
	int64_t x408 = -1LL;
	volatile int32_t t101 = 21862;

    t101 = (x405^((x406&x407)>x408));

    if (t101 != -2147483647) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	static volatile int32_t x411 = 1203267;
	volatile uint32_t x412 = 213U;
	volatile int32_t t102 = -12640559;

    t102 = (x409^((x410&x411)>x412));

    if (t102 != 65534) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	static int32_t x414 = INT32_MIN;
	volatile int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MIN;

    t103 = (x413^((x414&x415)>x416));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = INT32_MIN;
	static volatile int64_t x418 = 2653285788LL;
	uint64_t x419 = UINT64_MAX;
	static int16_t x420 = 1;
	volatile int32_t t104 = 579906;

    t104 = (x417^((x418&x419)>x420));

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x422 = 93999U;
	static volatile uint32_t t105 = 141055U;

    t105 = (x421^((x422&x423)>x424));

    if (t105 != 4752U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 136078980201034LLU;
	volatile int16_t x427 = 12949;
	volatile int8_t x428 = -5;
	uint64_t t106 = 25LLU;

    t106 = (x425^((x426&x427)>x428));

    if (t106 != 136078980201034LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x429 = INT8_MIN;
	uint64_t x430 = 2459749637555LLU;

    t107 = (x429^((x430&x431)>x432));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 8;
	uint32_t x434 = 826716U;
	int8_t x435 = INT8_MIN;
	volatile int32_t t108 = 44;

    t108 = (x433^((x434&x435)>x436));

    if (t108 != 8) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x437 = UINT8_MAX;
	uint64_t x438 = UINT64_MAX;
	volatile int8_t x440 = INT8_MAX;
	volatile int32_t t109 = 337585;

    t109 = (x437^((x438&x439)>x440));

    if (t109 != 254) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x441 = INT8_MIN;
	volatile int32_t x442 = -1;
	static int32_t x443 = 6;
	uint32_t x444 = 289381667U;
	volatile int32_t t110 = -61863162;

    t110 = (x441^((x442&x443)>x444));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = UINT16_MAX;
	uint64_t x446 = 37LLU;
	uint32_t x447 = UINT32_MAX;
	volatile int8_t x448 = 8;
	static volatile int32_t t111 = -905865735;

    t111 = (x445^((x446&x447)>x448));

    if (t111 != 65534) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 1U;
	static volatile uint64_t x451 = 412182853079LLU;
	uint16_t x452 = UINT16_MAX;

    t112 = (x449^((x450&x451)>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	uint32_t x454 = 1594394277U;
	int8_t x455 = INT8_MIN;
	int32_t x456 = INT32_MIN;

    t113 = (x453^((x454&x455)>x456));

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	volatile int64_t x458 = INT64_MAX;
	volatile int32_t x459 = INT32_MAX;
	int16_t x460 = INT16_MAX;
	int32_t t114 = -1069250728;

    t114 = (x457^((x458&x459)>x460));

    if (t114 != 126) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int16_t x463 = INT16_MAX;
	static volatile int32_t t115 = 14113;

    t115 = (x461^((x462&x463)>x464));

    if (t115 != -32767) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x465 = INT32_MAX;
	int64_t x466 = INT64_MIN;
	int8_t x468 = INT8_MIN;
	int32_t t116 = INT32_MAX;

    t116 = (x465^((x466&x467)>x468));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -1015298348025LL;
	int16_t x471 = -1;
	int64_t x472 = INT64_MAX;
	volatile int64_t t117 = -8442481377480LL;

    t117 = (x469^((x470&x471)>x472));

    if (t117 != -1015298348025LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 5596516548LL;
	volatile int16_t x476 = INT16_MIN;
	static int64_t t118 = 933231389LL;

    t118 = (x473^((x474&x475)>x476));

    if (t118 != 5596516549LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = INT8_MIN;
	int64_t x478 = -1LL;
	uint32_t x479 = UINT32_MAX;
	volatile int8_t x480 = INT8_MAX;
	volatile int32_t t119 = 216438665;

    t119 = (x477^((x478&x479)>x480));

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	volatile uint16_t x482 = UINT16_MAX;
	int8_t x483 = INT8_MAX;
	uint16_t x484 = 1U;
	static int32_t t120 = -152393;

    t120 = (x481^((x482&x483)>x484));

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -14233;
	int16_t x486 = -1;
	int8_t x487 = INT8_MIN;
	static uint16_t x488 = UINT16_MAX;
	volatile int32_t t121 = 46441401;

    t121 = (x485^((x486&x487)>x488));

    if (t121 != -14233) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = 86062748870LL;
	uint32_t x491 = 1945531U;
	static int8_t x492 = INT8_MAX;
	volatile int32_t t122 = 1;

    t122 = (x489^((x490&x491)>x492));

    if (t122 != 254) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = 531;
	int8_t x494 = INT8_MAX;
	static int32_t x495 = -1;
	static volatile int32_t x496 = INT32_MIN;
	static int32_t t123 = -622594566;

    t123 = (x493^((x494&x495)>x496));

    if (t123 != 530) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = INT32_MAX;
	static int8_t x498 = INT8_MAX;
	int16_t x499 = -1;
	uint64_t x500 = UINT64_MAX;
	volatile int32_t t124 = INT32_MAX;

    t124 = (x497^((x498&x499)>x500));

    if (t124 != INT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 65;
	int32_t x502 = INT32_MAX;
	volatile int32_t t125 = 2;

    t125 = (x501^((x502&x503)>x504));

    if (t125 != 64) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x505 = -1;
	uint32_t x506 = 16678652U;
	int64_t x507 = -1LL;
	int32_t x508 = INT32_MIN;
	static volatile int32_t t126 = -40;

    t126 = (x505^((x506&x507)>x508));

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = 4;
	volatile int8_t x510 = 7;
	int16_t x511 = INT16_MIN;
	int64_t x512 = INT64_MIN;
	volatile int32_t t127 = -236;

    t127 = (x509^((x510&x511)>x512));

    if (t127 != 5) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 1055469916U;
	int32_t x514 = 399639415;
	int64_t x515 = 654479095892LL;
	static volatile int64_t x516 = INT64_MAX;
	uint32_t t128 = 4U;

    t128 = (x513^((x514&x515)>x516));

    if (t128 != 1055469916U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 19791568;
	static int32_t x518 = INT32_MIN;
	static int8_t x520 = INT8_MIN;
	int32_t t129 = -7;

    t129 = (x517^((x518&x519)>x520));

    if (t129 != 19791568) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x522 = -804967183;
	static uint16_t x523 = 25125U;
	int16_t x524 = -2892;

    t130 = (x521^((x522&x523)>x524));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	static int64_t x526 = -1LL;
	int32_t x527 = 45;
	int32_t t131 = 8;

    t131 = (x525^((x526&x527)>x528));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = 56;
	uint64_t x531 = 32548779021LLU;
	int32_t x532 = INT32_MIN;
	volatile int32_t t132 = -8016056;

    t132 = (x529^((x530&x531)>x532));

    if (t132 != 56) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MIN;
	volatile uint16_t x535 = 1661U;

    t133 = (x533^((x534&x535)>x536));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x537 = 542U;
	uint8_t x538 = 2U;
	static int32_t x539 = INT32_MIN;
	volatile int32_t x540 = 1089434;

    t134 = (x537^((x538&x539)>x540));

    if (t134 != 542) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = 12386;
	volatile int32_t x542 = -66391086;
	static volatile uint32_t x543 = 1249963U;
	int16_t x544 = INT16_MIN;
	int32_t t135 = -3043;

    t135 = (x541^((x542&x543)>x544));

    if (t135 != 12386) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = -18371LL;
	int32_t x547 = INT32_MIN;
	int32_t x548 = 369518910;
	static volatile int64_t t136 = -132686696016994173LL;

    t136 = (x545^((x546&x547)>x548));

    if (t136 != -18371LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x550 = INT64_MIN;
	static volatile int16_t x552 = -104;
	volatile uint64_t t137 = 38031330705LLU;

    t137 = (x549^((x550&x551)>x552));

    if (t137 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = 0;
	uint16_t x554 = 62U;
	uint16_t x555 = 12U;
	uint16_t x556 = 2196U;
	int32_t t138 = -223966;

    t138 = (x553^((x554&x555)>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MAX;
	uint8_t x558 = UINT8_MAX;
	static int64_t t139 = -814LL;

    t139 = (x557^((x558&x559)>x560));

    if (t139 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = UINT64_MAX;
	int32_t x562 = 381;
	int64_t x564 = 963829655167LL;
	uint64_t t140 = UINT64_MAX;

    t140 = (x561^((x562&x563)>x564));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x565 = 2;
	int32_t x566 = INT32_MIN;
	volatile int16_t x567 = -1;
	int32_t t141 = -32;

    t141 = (x565^((x566&x567)>x568));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	int32_t x570 = INT32_MIN;

    t142 = (x569^((x570&x571)>x572));

    if (t142 != 254) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x573 = 1;
	uint32_t x575 = 332783191U;
	int32_t t143 = 38637;

    t143 = (x573^((x574&x575)>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = INT32_MAX;
	volatile uint16_t x579 = 855U;
	int16_t x580 = INT16_MAX;
	int32_t t144 = -863500;

    t144 = (x577^((x578&x579)>x580));

    if (t144 != 208) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 3351914U;
	static volatile int8_t x582 = INT8_MIN;
	volatile uint32_t x583 = 7543450U;
	uint32_t t145 = 55512U;

    t145 = (x581^((x582&x583)>x584));

    if (t145 != 3351914U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 2U;
	int32_t x586 = -1;
	int32_t x587 = -1;
	volatile int8_t x588 = INT8_MAX;
	int32_t t146 = 1;

    t146 = (x585^((x586&x587)>x588));

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x589 = UINT8_MAX;
	int32_t x590 = INT32_MAX;
	static volatile int32_t x592 = INT32_MIN;
	int32_t t147 = 88;

    t147 = (x589^((x590&x591)>x592));

    if (t147 != 254) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1;
	uint16_t x596 = 293U;
	int32_t t148 = 0;

    t148 = (x593^((x594&x595)>x596));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint16_t x597 = UINT16_MAX;
	static int64_t x598 = INT64_MIN;
	int8_t x599 = INT8_MIN;
	int16_t x600 = INT16_MIN;
	volatile int32_t t149 = 120;

    t149 = (x597^((x598&x599)>x600));

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = -1;
	uint16_t x602 = UINT16_MAX;
	int32_t x603 = -1;
	int16_t x604 = 506;
	volatile int32_t t150 = 0;

    t150 = (x601^((x602&x603)>x604));

    if (t150 != -2) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 0LLU;
	volatile int64_t x606 = -1LL;
	int8_t x607 = -14;
	volatile uint64_t t151 = 1754554681917LLU;

    t151 = (x605^((x606&x607)>x608));

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = 365580U;
	volatile uint16_t x610 = 583U;
	static volatile uint8_t x611 = 11U;
	int8_t x612 = 44;
	uint32_t t152 = 0U;

    t152 = (x609^((x610&x611)>x612));

    if (t152 != 365580U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MAX;
	uint8_t x616 = 16U;

    t153 = (x613^((x614&x615)>x616));

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 177;
	int16_t x618 = INT16_MIN;
	uint8_t x619 = UINT8_MAX;
	volatile int32_t x620 = INT32_MAX;

    t154 = (x617^((x618&x619)>x620));

    if (t154 != 177) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = UINT8_MAX;
	int64_t x623 = INT64_MIN;
	volatile int16_t x624 = INT16_MIN;
	int32_t t155 = 264734344;

    t155 = (x621^((x622&x623)>x624));

    if (t155 != 254) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 0U;
	static int32_t x626 = 0;
	int32_t x627 = INT32_MIN;
	int16_t x628 = INT16_MAX;

    t156 = (x625^((x626&x627)>x628));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = 0;
	int64_t x631 = -27029781814LL;
	volatile int8_t x632 = -1;
	volatile int32_t t157 = -1993779;

    t157 = (x629^((x630&x631)>x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x634 = -11241;
	uint8_t x635 = UINT8_MAX;
	static int64_t x636 = INT64_MAX;
	volatile int32_t t158 = 767801299;

    t158 = (x633^((x634&x635)>x636));

    if (t158 != 62) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x638 = INT8_MAX;
	int16_t x639 = INT16_MAX;
	uint16_t x640 = 17U;
	int32_t t159 = 58;

    t159 = (x637^((x638&x639)>x640));

    if (t159 != 254) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = -263012555;
	static int32_t x643 = INT32_MAX;
	uint64_t x644 = UINT64_MAX;
	uint64_t t160 = UINT64_MAX;

    t160 = (x641^((x642&x643)>x644));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -5;
	static uint64_t x646 = 15LLU;
	int32_t x647 = -46330;
	int32_t x648 = 0;
	int32_t t161 = 1693;

    t161 = (x645^((x646&x647)>x648));

    if (t161 != -6) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 893819943822LL;
	uint64_t x651 = 57949053LLU;
	int16_t x652 = 0;
	volatile int64_t t162 = -10815455126174950LL;

    t162 = (x649^((x650&x651)>x652));

    if (t162 != 893819943823LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x655 = INT32_MIN;
	uint8_t x656 = UINT8_MAX;
	volatile int32_t t163 = 8;

    t163 = (x653^((x654&x655)>x656));

    if (t163 != 255) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = 9;
	volatile int32_t x660 = 0;
	volatile int32_t t164 = 47875;

    t164 = (x657^((x658&x659)>x660));

    if (t164 != 65534) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 5;
	static uint8_t x663 = 59U;
	volatile int8_t x664 = -1;
	volatile int32_t t165 = 1657871;

    t165 = (x661^((x662&x663)>x664));

    if (t165 != 4) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	int64_t x666 = -1LL;
	int8_t x667 = 5;
	static uint8_t x668 = 9U;
	int32_t t166 = 1;

    t166 = (x665^((x666&x667)>x668));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = INT32_MIN;
	static volatile int32_t t167 = 0;

    t167 = (x669^((x670&x671)>x672));

    if (t167 != -2147483647) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	int16_t x675 = -338;
	uint8_t x676 = 4U;
	volatile int32_t t168 = INT32_MIN;

    t168 = (x673^((x674&x675)>x676));

    if (t168 != INT32_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 82U;
	int16_t x678 = -1;
	volatile int32_t x680 = INT32_MIN;
	volatile int32_t t169 = 3;

    t169 = (x677^((x678&x679)>x680));

    if (t169 != 83) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	int16_t x682 = -1;
	uint16_t x683 = 3373U;
	volatile int32_t t170 = -47709930;

    t170 = (x681^((x682&x683)>x684));

    if (t170 != 32766) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	int32_t x686 = INT32_MAX;
	static int8_t x687 = -7;
	int16_t x688 = -1;
	volatile int32_t t171 = 554462465;

    t171 = (x685^((x686&x687)>x688));

    if (t171 != -2147483647) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = INT64_MIN;
	int8_t x690 = -1;
	uint32_t x691 = 4763U;
	static int64_t x692 = 224332144LL;
	static int64_t t172 = INT64_MIN;

    t172 = (x689^((x690&x691)>x692));

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x693 = UINT16_MAX;
	static int16_t x694 = -1942;
	volatile int32_t x695 = -1;
	uint64_t x696 = UINT64_MAX;
	int32_t t173 = 37529693;

    t173 = (x693^((x694&x695)>x696));

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	uint64_t x698 = UINT64_MAX;
	uint8_t x699 = 13U;
	static int16_t x700 = -15003;
	int64_t t174 = INT64_MIN;

    t174 = (x697^((x698&x699)>x700));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x702 = INT64_MIN;
	int32_t x703 = INT32_MAX;
	volatile uint32_t x704 = 58118U;

    t175 = (x701^((x702&x703)>x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MAX;
	uint64_t x707 = 113465261LLU;
	int64_t x708 = INT64_MIN;
	volatile int32_t t176 = INT32_MAX;

    t176 = (x705^((x706&x707)>x708));

    if (t176 != INT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x710 = INT16_MAX;
	int32_t x711 = INT32_MAX;
	int16_t x712 = INT16_MAX;
	int32_t t177 = -892086;

    t177 = (x709^((x710&x711)>x712));

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x715 = INT64_MIN;
	uint32_t x716 = 734983U;

    t178 = (x713^((x714&x715)>x716));

    if (t178 != 3596) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x717 = 49002U;
	int16_t x719 = INT16_MIN;
	int32_t x720 = 610117;
	volatile uint32_t t179 = 23U;

    t179 = (x717^((x718&x719)>x720));

    if (t179 != 49002U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = 1596033487707133LL;
	uint64_t x722 = 71168834293230285LLU;
	int16_t x723 = 2;
	volatile int64_t t180 = 372907653107LL;

    t180 = (x721^((x722&x723)>x724));

    if (t180 != 1596033487707133LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = INT8_MIN;
	volatile int16_t x727 = -127;
	uint32_t x728 = UINT32_MAX;
	int32_t t181 = 2252141;

    t181 = (x725^((x726&x727)>x728));

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	static uint32_t x732 = 3958U;
	volatile int64_t t182 = 38830963LL;

    t182 = (x729^((x730&x731)>x732));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = 30;
	uint8_t x734 = 60U;
	volatile int8_t x736 = INT8_MIN;
	volatile int32_t t183 = -99328897;

    t183 = (x733^((x734&x735)>x736));

    if (t183 != 31) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = -994955744814155672LL;
	uint64_t x738 = 12492386086637LLU;
	int32_t x739 = -1273191;
	uint16_t x740 = 3U;
	int64_t t184 = -106365672745456LL;

    t184 = (x737^((x738&x739)>x740));

    if (t184 != -994955744814155671LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = INT16_MIN;
	static uint16_t x742 = UINT16_MAX;
	int16_t x743 = -6150;
	static uint8_t x744 = UINT8_MAX;
	volatile int32_t t185 = 730569;

    t185 = (x741^((x742&x743)>x744));

    if (t185 != -32767) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MAX;
	static uint8_t x747 = 1U;
	int64_t x748 = INT64_MAX;
	volatile int32_t t186 = INT32_MAX;

    t186 = (x745^((x746&x747)>x748));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x749 = 0U;
	volatile int64_t x750 = INT64_MAX;
	volatile int8_t x751 = -2;
	volatile int32_t t187 = 102924;

    t187 = (x749^((x750&x751)>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 241U;
	uint64_t x754 = 74LLU;
	int32_t x755 = -25450159;
	uint32_t x756 = UINT32_MAX;
	volatile int32_t t188 = -3195;

    t188 = (x753^((x754&x755)>x756));

    if (t188 != 241) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x758 = 1629848723583733269LL;
	uint16_t x760 = 20438U;
	volatile int32_t t189 = 79541470;

    t189 = (x757^((x758&x759)>x760));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x761 = INT64_MAX;
	static uint32_t x762 = UINT32_MAX;
	static uint64_t x763 = 5591254027LLU;
	int32_t x764 = -1;
	int64_t t190 = INT64_MAX;

    t190 = (x761^((x762&x763)>x764));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = INT16_MIN;
	uint16_t x766 = 11U;
	uint8_t x767 = 1U;
	int64_t x768 = INT64_MAX;

    t191 = (x765^((x766&x767)>x768));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -1;
	int8_t x770 = INT8_MIN;
	int16_t x771 = -1;
	static int8_t x772 = INT8_MIN;
	volatile int32_t t192 = -427;

    t192 = (x769^((x770&x771)>x772));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = INT64_MIN;
	uint32_t x774 = 12U;
	int32_t x775 = INT32_MAX;
	int8_t x776 = INT8_MIN;
	volatile int64_t t193 = INT64_MIN;

    t193 = (x773^((x774&x775)>x776));

    if (t193 != INT64_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x778 = -31606236406LL;

    t194 = (x777^((x778&x779)>x780));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = 127U;
	static int64_t x783 = INT64_MIN;
	volatile int8_t x784 = 27;

    t195 = (x781^((x782&x783)>x784));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	int16_t x786 = INT16_MAX;
	uint8_t x788 = UINT8_MAX;

    t196 = (x785^((x786&x787)>x788));

    if (t196 != -2) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	static volatile int16_t x790 = -7285;
	volatile int16_t x791 = 8100;
	static int32_t x792 = -307376623;
	int32_t t197 = -1299;

    t197 = (x789^((x790&x791)>x792));

    if (t197 != 65534) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	volatile int16_t x795 = 92;
	static int16_t x796 = INT16_MAX;
	int32_t t198 = -334785;

    t198 = (x793^((x794&x795)>x796));

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x797 = 8LLU;
	static int32_t x798 = INT32_MAX;
	static int32_t x799 = INT32_MAX;
	int64_t x800 = -1LL;
	volatile uint64_t t199 = 2268933944LLU;

    t199 = (x797^((x798&x799)>x800));

    if (t199 != 9LLU) { NG(); } else { ; }
	
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

