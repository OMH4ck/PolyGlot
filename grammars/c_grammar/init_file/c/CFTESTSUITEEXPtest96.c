
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

volatile uint8_t x1 = 15U;
int64_t x4 = INT64_MAX;
int64_t x25 = -1LL;
volatile int8_t x26 = INT8_MIN;
int16_t x30 = INT16_MIN;
int16_t x31 = -1;
volatile int32_t t8 = 2;
uint32_t t9 = 378438758U;
static uint16_t x73 = UINT16_MAX;
int64_t x76 = 47132LL;
int32_t x83 = INT32_MIN;
uint16_t x97 = UINT16_MAX;
uint64_t x100 = 520693LLU;
int64_t x102 = INT64_MAX;
volatile int32_t x105 = 147960;
int64_t x106 = -1LL;
uint16_t x119 = 1U;
volatile uint16_t x121 = 412U;
uint16_t x138 = 938U;
uint8_t x147 = 0U;
volatile uint16_t x154 = 249U;
int8_t x161 = -1;
int32_t x162 = INT32_MIN;
int64_t x168 = INT64_MIN;
volatile int32_t x180 = INT32_MIN;
int8_t x182 = -1;
int8_t x189 = INT8_MAX;
uint64_t x190 = 62898LLU;
uint16_t x193 = 57U;
int16_t x194 = INT16_MAX;
uint32_t x196 = 63U;
static uint32_t x197 = 136840239U;
uint32_t t40 = 1793263U;
int32_t x205 = -1;
volatile uint64_t x206 = 29706320618635LLU;
int16_t x210 = INT16_MAX;
volatile int32_t t45 = 14;
static int16_t x234 = 274;
volatile int16_t x235 = -423;
static int32_t x237 = 1;
volatile int32_t t47 = -13082;
static int8_t x243 = -1;
static volatile int64_t t48 = -3060593234615781339LL;
int64_t x245 = INT64_MIN;
uint32_t x251 = UINT32_MAX;
volatile uint64_t t50 = 1691337164710LLU;
volatile int32_t x254 = INT32_MIN;
int16_t x261 = INT16_MIN;
static uint8_t x264 = 89U;
volatile int32_t t53 = 372;
int64_t x267 = -3LL;
int64_t t55 = 23LL;
uint32_t t56 = 9050941U;
static uint32_t x279 = 5761U;
int64_t x289 = INT64_MIN;
int32_t x291 = 38637;
volatile uint16_t x294 = UINT16_MAX;
int64_t x298 = INT64_MAX;
uint64_t x307 = 25849737806LLU;
int8_t x314 = INT8_MAX;
static int8_t x317 = -1;
static int32_t x322 = -1;
static int8_t x331 = INT8_MIN;
volatile int64_t t70 = 24793LL;
int32_t x342 = -1;
int32_t x343 = 445;
int64_t x344 = INT64_MIN;
volatile uint8_t x349 = 59U;
int32_t x359 = 10;
uint16_t x371 = 951U;
int32_t x381 = -1;
int32_t x392 = INT32_MIN;
static uint32_t x394 = 3U;
int16_t x398 = -1;
uint64_t x402 = UINT64_MAX;
volatile int32_t t86 = 81934553;
int16_t x419 = -556;
int32_t x423 = -1;
static volatile int32_t t88 = -2496;
static int16_t x434 = INT16_MAX;
int32_t x436 = INT32_MIN;
int32_t t91 = -75;
volatile int8_t x441 = 55;
int16_t x449 = INT16_MIN;
static uint8_t x453 = 28U;
int64_t x456 = -1LL;
int32_t t94 = -3;
static volatile int16_t x466 = INT16_MAX;
volatile int8_t x468 = -53;
static int32_t t95 = 506696;
int16_t x471 = 1;
int32_t t96 = -32595456;
uint8_t x477 = 4U;
static volatile uint16_t x480 = UINT16_MAX;
volatile uint32_t t98 = 336U;
static uint64_t x489 = 2081422LLU;
int16_t x499 = 0;
uint8_t x504 = 58U;
volatile int8_t x508 = 0;
volatile int8_t x512 = INT8_MIN;
uint8_t x514 = UINT8_MAX;
static volatile int16_t x516 = INT16_MIN;
int32_t x518 = -1;
static int32_t x526 = 132819;
int32_t t110 = -421;
uint16_t x538 = 7U;
int16_t x545 = -1;
static int32_t t116 = -739;
int32_t x561 = INT32_MAX;
static int16_t x576 = -1;
int32_t t120 = -472295381;
int64_t x592 = INT64_MIN;
int8_t x602 = INT8_MAX;
uint64_t x608 = 27616933800407LLU;
int16_t x611 = INT16_MIN;
static volatile int8_t x622 = -1;
static volatile uint8_t x624 = UINT8_MAX;
volatile uint32_t t129 = 11U;
uint64_t t131 = 179570236547815952LLU;
static uint32_t x633 = 6204U;
static int8_t x643 = INT8_MIN;
static volatile int32_t t134 = -10;
int16_t x653 = INT16_MAX;
int32_t x656 = INT32_MAX;
uint16_t x657 = UINT16_MAX;
static uint32_t x659 = 3869U;
static int16_t x660 = INT16_MIN;
volatile int8_t x667 = 0;
int32_t x673 = INT32_MIN;
int8_t x674 = INT8_MIN;
volatile uint64_t x676 = 2205175LLU;
int64_t x682 = -1LL;
int32_t x688 = INT32_MIN;
uint32_t x698 = 557U;
volatile int32_t x704 = INT32_MAX;
volatile int64_t x710 = INT64_MIN;
uint64_t x711 = UINT64_MAX;
uint32_t x713 = UINT32_MAX;
int16_t x715 = INT16_MAX;
volatile uint32_t x722 = UINT32_MAX;
static volatile int8_t x737 = INT8_MIN;
volatile int64_t x740 = INT64_MAX;
int32_t x741 = INT32_MAX;
uint32_t x747 = UINT32_MAX;
uint32_t x762 = 62124995U;
int16_t x763 = INT16_MIN;
volatile uint32_t x764 = 4150557U;
volatile int32_t t160 = -123917;
static int16_t x765 = INT16_MAX;
int32_t x766 = INT32_MAX;
volatile int64_t x767 = -1LL;
int32_t t161 = 110;
int32_t x771 = INT32_MAX;
static int64_t x772 = INT64_MAX;
volatile int32_t t162 = -144371;
static int64_t x774 = -1LL;
int32_t t163 = 2;
volatile int32_t x777 = INT32_MIN;
int8_t x786 = INT8_MIN;
int32_t t166 = -1335;
volatile int64_t t167 = 662713449LL;
int16_t x801 = -1;
volatile uint32_t x803 = 26840U;
volatile uint64_t x809 = 91LLU;
static volatile uint32_t x818 = 144024U;
uint32_t t170 = 107691679U;
int32_t x822 = 2435141;
int64_t x825 = INT64_MIN;
volatile int64_t t172 = 1771029LL;
int32_t x829 = INT32_MAX;
uint8_t x830 = 4U;
static int8_t x833 = -18;
int64_t t176 = -122LL;
uint32_t x850 = 306972085U;
static int8_t x855 = INT8_MAX;
int32_t t179 = 2848605;
int16_t x872 = -26;
volatile uint8_t x876 = UINT8_MAX;
int8_t x881 = INT8_MIN;
uint8_t x895 = 1U;
static volatile uint64_t t187 = 203155027337646653LLU;
static uint8_t x906 = UINT8_MAX;
uint64_t x910 = 1062LLU;
static volatile int64_t t191 = -309906LL;
static int32_t t192 = 4819600;
volatile int8_t x920 = INT8_MAX;
uint32_t x924 = 0U;
int16_t x925 = -63;
int32_t t195 = -27;
volatile int64_t x949 = 1424022LL;


void f0(void) {
    	uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = 0;

    t0 = (x1&((x2+x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 18262937576138LLU;
	int8_t x6 = INT8_MIN;
	volatile int16_t x7 = INT16_MIN;
	uint32_t x8 = 801U;
	static uint64_t t1 = 65486420411LLU;

    t1 = (x5&((x6+x7)!=x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 21996U;
	int64_t x10 = INT64_MIN;
	int16_t x11 = 3784;
	int64_t x12 = 10206LL;
	uint32_t t2 = 34886191U;

    t2 = (x9&((x10+x11)!=x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int16_t x14 = INT16_MIN;
	static volatile uint16_t x15 = UINT16_MAX;
	uint16_t x16 = 11U;
	int32_t t3 = -324715020;

    t3 = (x13&((x14+x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	int16_t x18 = -1;
	uint64_t x19 = 1813989935526LLU;
	uint8_t x20 = 12U;
	int32_t t4 = -115379595;

    t4 = (x17&((x18+x19)!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	static uint32_t x22 = 737354U;
	static int32_t x23 = INT32_MIN;
	volatile uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = -11881569;

    t5 = (x21&((x22+x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MAX;
	static volatile int64_t t6 = -525286823596274LL;

    t6 = (x25&((x26+x27)!=x28));

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = -1;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -57758657;

    t7 = (x29&((x30+x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	volatile uint8_t x34 = 0U;
	static int8_t x35 = -1;
	uint8_t x36 = 80U;

    t8 = (x33&((x34+x35)!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x37 = 0U;
	int8_t x38 = INT8_MAX;
	int8_t x39 = -1;
	int32_t x40 = 8;

    t9 = (x37&((x38+x39)!=x40));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = INT32_MIN;
	static int32_t x44 = INT32_MAX;
	volatile int32_t t10 = -31;

    t10 = (x41&((x42+x43)!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 406U;
	volatile uint32_t x50 = 10U;
	int32_t x51 = 610;
	int8_t x52 = -1;
	static int32_t t11 = 105;

    t11 = (x49&((x50+x51)!=x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x53 = INT32_MIN;
	uint32_t x54 = UINT32_MAX;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = 13157777;

    t12 = (x53&((x54+x55)!=x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = 10LL;
	int8_t x62 = INT8_MIN;
	int32_t x63 = -1;
	static int8_t x64 = 1;
	int64_t t13 = 1LL;

    t13 = (x61&((x62+x63)!=x64));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x69 = INT64_MIN;
	static uint16_t x70 = 1558U;
	int8_t x71 = INT8_MAX;
	volatile uint16_t x72 = 2257U;
	volatile int64_t t14 = 373349875052LL;

    t14 = (x69&((x70+x71)!=x72));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x74 = 54U;
	int8_t x75 = -1;
	volatile int32_t t15 = -30838771;

    t15 = (x73&((x74+x75)!=x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = -49102;
	int8_t x78 = 1;
	int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MAX;
	static volatile int32_t t16 = -14;

    t16 = (x77&((x78+x79)!=x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x81 = 8036U;
	static volatile uint32_t x82 = 19547U;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t17 = 351991765;

    t17 = (x81&((x82+x83)!=x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MIN;
	int16_t x90 = 4906;
	uint8_t x91 = UINT8_MAX;
	uint64_t x92 = 63423873210434LLU;
	int32_t t18 = -25894;

    t18 = (x89&((x90+x91)!=x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x98 = INT32_MIN;
	uint8_t x99 = UINT8_MAX;
	int32_t t19 = -51;

    t19 = (x97&((x98+x99)!=x100));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x101 = UINT8_MAX;
	int64_t x103 = -1LL;
	uint16_t x104 = UINT16_MAX;
	int32_t t20 = 5;

    t20 = (x101&((x102+x103)!=x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x107 = INT64_MAX;
	int8_t x108 = -1;
	int32_t t21 = -274;

    t21 = (x105&((x106+x107)!=x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MAX;
	int32_t x111 = -1;
	volatile int16_t x112 = -1;
	int32_t t22 = 18574521;

    t22 = (x109&((x110+x111)!=x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x113 = UINT64_MAX;
	uint8_t x114 = 3U;
	static int64_t x115 = -1LL;
	static int8_t x116 = INT8_MAX;
	uint64_t t23 = 346350336104102LLU;

    t23 = (x113&((x114+x115)!=x116));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = 357;
	volatile int16_t x118 = 13;
	static int64_t x120 = -188816252916434655LL;
	volatile int32_t t24 = -118678644;

    t24 = (x117&((x118+x119)!=x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MIN;
	uint64_t x124 = 40145493LLU;
	static int32_t t25 = 2721;

    t25 = (x121&((x122+x123)!=x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = INT8_MAX;
	int32_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = INT64_MIN;
	volatile int32_t t26 = -13943645;

    t26 = (x125&((x126+x127)!=x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x133 = 21097602U;
	int32_t x134 = INT32_MIN;
	static uint8_t x135 = UINT8_MAX;
	uint64_t x136 = 5LLU;
	uint32_t t27 = 1069U;

    t27 = (x133&((x134+x135)!=x136));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x137 = 3;
	static int8_t x139 = 1;
	uint32_t x140 = UINT32_MAX;
	static volatile int32_t t28 = 111;

    t28 = (x137&((x138+x139)!=x140));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x145 = INT64_MAX;
	int64_t x146 = -1LL;
	static uint16_t x148 = UINT16_MAX;
	int64_t t29 = 2506650425LL;

    t29 = (x145&((x146+x147)!=x148));

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x149 = -549255803184LL;
	static volatile int8_t x150 = INT8_MAX;
	static int32_t x151 = INT32_MIN;
	int16_t x152 = 60;
	static volatile int64_t t30 = -10LL;

    t30 = (x149&((x150+x151)!=x152));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x153 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	static int32_t x156 = -166;
	volatile int64_t t31 = 1LL;

    t31 = (x153&((x154+x155)!=x156));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x157 = 14516428LLU;
	static int16_t x158 = 178;
	volatile uint8_t x159 = UINT8_MAX;
	int32_t x160 = -243;
	uint64_t t32 = 1LLU;

    t32 = (x157&((x158+x159)!=x160));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x163 = 42U;
	int16_t x164 = -1;
	volatile int32_t t33 = 131517;

    t33 = (x161&((x162+x163)!=x164));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x165 = 12U;
	int16_t x166 = INT16_MIN;
	uint64_t x167 = 425517997932290678LLU;
	volatile int32_t t34 = -469;

    t34 = (x165&((x166+x167)!=x168));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = -520;
	volatile int32_t t35 = 89;

    t35 = (x169&((x170+x171)!=x172));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x177 = 9051084348064LLU;
	static int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	static volatile uint64_t t36 = 521230876LLU;

    t36 = (x177&((x178+x179)!=x180));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x181 = INT8_MIN;
	int16_t x183 = -85;
	static uint32_t x184 = 2652U;
	int32_t t37 = 44406;

    t37 = (x181&((x182+x183)!=x184));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x191 = UINT8_MAX;
	volatile int16_t x192 = INT16_MIN;
	int32_t t38 = -3;

    t38 = (x189&((x190+x191)!=x192));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x195 = -1LL;
	volatile int32_t t39 = 315;

    t39 = (x193&((x194+x195)!=x196));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x198 = 6900U;
	int16_t x199 = -1;
	int8_t x200 = 5;

    t40 = (x197&((x198+x199)!=x200));

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x201 = 15183384589520LL;
	static int32_t x202 = 11519;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = 1U;
	static volatile int64_t t41 = 227LL;

    t41 = (x201&((x202+x203)!=x204));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x207 = -1;
	int16_t x208 = INT16_MAX;
	static int32_t t42 = 28;

    t42 = (x205&((x206+x207)!=x208));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x209 = -124312LL;
	static volatile int32_t x211 = 132;
	uint32_t x212 = 717U;
	static int64_t t43 = 50993197408055743LL;

    t43 = (x209&((x210+x211)!=x212));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x225 = INT32_MIN;
	static uint64_t x226 = 3508436LLU;
	uint64_t x227 = 1625173293LLU;
	uint32_t x228 = 941U;
	int32_t t44 = 52;

    t44 = (x225&((x226+x227)!=x228));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x229 = -2330;
	int8_t x230 = -1;
	uint16_t x231 = 263U;
	int64_t x232 = -1LL;

    t45 = (x229&((x230+x231)!=x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x233 = -1;
	volatile int16_t x236 = 2;
	volatile int32_t t46 = 310;

    t46 = (x233&((x234+x235)!=x236));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x238 = 612U;
	uint32_t x239 = 337215U;
	static int64_t x240 = 1067213337356LL;

    t47 = (x237&((x238+x239)!=x240));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x241 = INT64_MIN;
	uint16_t x242 = 1071U;
	static volatile int32_t x244 = INT32_MIN;

    t48 = (x241&((x242+x243)!=x244));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x246 = INT16_MAX;
	uint8_t x247 = UINT8_MAX;
	uint16_t x248 = 306U;
	volatile int64_t t49 = -108991993831154LL;

    t49 = (x245&((x246+x247)!=x248));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint64_t x249 = 773669326828450214LLU;
	int8_t x250 = 1;
	int8_t x252 = 0;

    t50 = (x249&((x250+x251)!=x252));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x253 = UINT16_MAX;
	uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 227202664LLU;
	volatile int32_t t51 = -122;

    t51 = (x253&((x254+x255)!=x256));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x257 = 193U;
	int64_t x258 = -1LL;
	uint16_t x259 = UINT16_MAX;
	int32_t x260 = -231;
	int32_t t52 = -1;

    t52 = (x257&((x258+x259)!=x260));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x262 = UINT64_MAX;
	volatile int8_t x263 = -1;

    t53 = (x261&((x262+x263)!=x264));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x265 = 149;
	int16_t x266 = -1;
	static volatile uint32_t x268 = UINT32_MAX;
	int32_t t54 = 304646;

    t54 = (x265&((x266+x267)!=x268));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MIN;
	int16_t x271 = -53;
	volatile uint64_t x272 = UINT64_MAX;

    t55 = (x269&((x270+x271)!=x272));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x273 = UINT32_MAX;
	int16_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	int8_t x276 = INT8_MAX;

    t56 = (x273&((x274+x275)!=x276));

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x277 = 9;
	volatile uint16_t x278 = UINT16_MAX;
	uint32_t x280 = UINT32_MAX;
	static int32_t t57 = 0;

    t57 = (x277&((x278+x279)!=x280));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x281 = UINT8_MAX;
	volatile int32_t x282 = INT32_MAX;
	static int16_t x283 = INT16_MIN;
	volatile int16_t x284 = INT16_MIN;
	static volatile int32_t t58 = 619082227;

    t58 = (x281&((x282+x283)!=x284));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x285 = -2LL;
	uint16_t x286 = UINT16_MAX;
	int64_t x287 = -2LL;
	uint8_t x288 = 3U;
	static volatile int64_t t59 = -203LL;

    t59 = (x285&((x286+x287)!=x288));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x290 = UINT8_MAX;
	uint16_t x292 = 0U;
	int64_t t60 = 3559937870LL;

    t60 = (x289&((x290+x291)!=x292));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x293 = 27377214170966LLU;
	int16_t x295 = 0;
	int32_t x296 = -5;
	volatile uint64_t t61 = 2933LLU;

    t61 = (x293&((x294+x295)!=x296));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x297 = INT32_MIN;
	uint32_t x299 = 0U;
	uint8_t x300 = 47U;
	volatile int32_t t62 = 152927449;

    t62 = (x297&((x298+x299)!=x300));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x301 = INT16_MIN;
	static int64_t x302 = 1LL;
	int32_t x303 = INT32_MAX;
	static volatile uint16_t x304 = 49U;
	int32_t t63 = -32446823;

    t63 = (x301&((x302+x303)!=x304));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x305 = 1;
	static int16_t x306 = -2507;
	int64_t x308 = -1LL;
	volatile int32_t t64 = -1;

    t64 = (x305&((x306+x307)!=x308));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x309 = INT16_MIN;
	int16_t x310 = 4;
	volatile int8_t x311 = 2;
	int64_t x312 = INT64_MIN;
	int32_t t65 = -477181526;

    t65 = (x309&((x310+x311)!=x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x313 = INT16_MIN;
	static int64_t x315 = -2978897699LL;
	volatile uint64_t x316 = 26627773541LLU;
	volatile int32_t t66 = -197913;

    t66 = (x313&((x314+x315)!=x316));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x318 = INT8_MAX;
	uint16_t x319 = 909U;
	int8_t x320 = INT8_MIN;
	volatile int32_t t67 = -1;

    t67 = (x317&((x318+x319)!=x320));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x321 = 492LLU;
	static uint32_t x323 = 709461221U;
	int8_t x324 = -1;
	volatile uint64_t t68 = 1796LLU;

    t68 = (x321&((x322+x323)!=x324));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x325 = 2695;
	uint16_t x326 = UINT16_MAX;
	uint32_t x327 = 62445073U;
	int16_t x328 = -3583;
	volatile int32_t t69 = -101;

    t69 = (x325&((x326+x327)!=x328));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x329 = -1LL;
	uint16_t x330 = 3063U;
	volatile int16_t x332 = INT16_MAX;

    t70 = (x329&((x330+x331)!=x332));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x337 = UINT32_MAX;
	int32_t x338 = -1;
	static uint64_t x339 = 25337596875814LLU;
	int32_t x340 = -433;
	volatile uint32_t t71 = 1030424U;

    t71 = (x337&((x338+x339)!=x340));

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x341 = -1;
	static volatile int32_t t72 = -229110230;

    t72 = (x341&((x342+x343)!=x344));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x345 = INT8_MIN;
	static int16_t x346 = INT16_MAX;
	volatile int16_t x347 = INT16_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile int32_t t73 = -25030;

    t73 = (x345&((x346+x347)!=x348));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x350 = INT16_MIN;
	volatile int32_t x351 = INT32_MAX;
	int32_t x352 = -4;
	int32_t t74 = 0;

    t74 = (x349&((x350+x351)!=x352));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x353 = INT32_MIN;
	volatile int16_t x354 = -1524;
	volatile int64_t x355 = INT64_MAX;
	int16_t x356 = 1708;
	int32_t t75 = -223203641;

    t75 = (x353&((x354+x355)!=x356));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x357 = 228U;
	static volatile int32_t x358 = INT32_MIN;
	static int64_t x360 = INT64_MIN;
	int32_t t76 = -119993;

    t76 = (x357&((x358+x359)!=x360));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x369 = 3;
	uint32_t x370 = 33U;
	int16_t x372 = 14179;
	int32_t t77 = 30;

    t77 = (x369&((x370+x371)!=x372));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MAX;
	uint64_t x375 = UINT64_MAX;
	uint64_t x376 = 4268717382586673690LLU;
	int32_t t78 = 12257;

    t78 = (x373&((x374+x375)!=x376));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x377 = -1;
	static int8_t x378 = -30;
	static int8_t x379 = -1;
	uint32_t x380 = UINT32_MAX;
	int32_t t79 = 11;

    t79 = (x377&((x378+x379)!=x380));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x382 = INT32_MAX;
	static int64_t x383 = -1586752568LL;
	static uint64_t x384 = 8022282326455863900LLU;
	int32_t t80 = 211;

    t80 = (x381&((x382+x383)!=x384));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x389 = UINT32_MAX;
	uint16_t x390 = 2U;
	int16_t x391 = INT16_MIN;
	uint32_t t81 = 80302178U;

    t81 = (x389&((x390+x391)!=x392));

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x393 = INT64_MIN;
	static int16_t x395 = -1;
	int32_t x396 = INT32_MAX;
	volatile int64_t t82 = -233LL;

    t82 = (x393&((x394+x395)!=x396));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x397 = -1;
	static uint32_t x399 = 2707888U;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t83 = 1;

    t83 = (x397&((x398+x399)!=x400));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x401 = INT8_MAX;
	int8_t x403 = INT8_MIN;
	static int64_t x404 = INT64_MIN;
	int32_t t84 = -51;

    t84 = (x401&((x402+x403)!=x404));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x405 = INT64_MIN;
	volatile int16_t x406 = 74;
	uint32_t x407 = UINT32_MAX;
	volatile int64_t x408 = INT64_MAX;
	static int64_t t85 = -2769517832185176LL;

    t85 = (x405&((x406+x407)!=x408));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x409 = -1;
	int16_t x410 = 2;
	static uint16_t x411 = UINT16_MAX;
	int16_t x412 = INT16_MAX;

    t86 = (x409&((x410+x411)!=x412));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x417 = INT64_MIN;
	static uint8_t x418 = 3U;
	volatile uint32_t x420 = UINT32_MAX;
	static volatile int64_t t87 = -288444377966742703LL;

    t87 = (x417&((x418+x419)!=x420));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x421 = INT32_MIN;
	int8_t x422 = INT8_MIN;
	int16_t x424 = INT16_MAX;

    t88 = (x421&((x422+x423)!=x424));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x425 = -5;
	int64_t x426 = INT64_MAX;
	volatile int16_t x427 = INT16_MIN;
	int8_t x428 = -1;
	int32_t t89 = -1;

    t89 = (x425&((x426+x427)!=x428));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x429 = 237U;
	uint16_t x430 = UINT16_MAX;
	uint64_t x431 = 11093537918859LLU;
	int64_t x432 = -1LL;
	int32_t t90 = 33;

    t90 = (x429&((x430+x431)!=x432));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x433 = 0;
	int8_t x435 = INT8_MIN;

    t91 = (x433&((x434+x435)!=x436));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x442 = INT8_MIN;
	volatile uint64_t x443 = 52140LLU;
	static int32_t x444 = -8887;
	int32_t t92 = -103;

    t92 = (x441&((x442+x443)!=x444));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x450 = 1074U;
	volatile int8_t x451 = INT8_MIN;
	volatile int64_t x452 = 1128LL;
	static int32_t t93 = 9;

    t93 = (x449&((x450+x451)!=x452));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x454 = 1;
	static int16_t x455 = INT16_MIN;

    t94 = (x453&((x454+x455)!=x456));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x465 = 0U;
	int16_t x467 = INT16_MIN;

    t95 = (x465&((x466+x467)!=x468));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x469 = INT8_MIN;
	static int32_t x470 = INT32_MIN;
	int64_t x472 = -1LL;

    t96 = (x469&((x470+x471)!=x472));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x478 = 0U;
	uint16_t x479 = 845U;
	int32_t t97 = 40214326;

    t97 = (x477&((x478+x479)!=x480));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x481 = UINT32_MAX;
	volatile int8_t x482 = 0;
	uint16_t x483 = 9321U;
	static int32_t x484 = -1;

    t98 = (x481&((x482+x483)!=x484));

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x485 = 1U;
	uint8_t x486 = UINT8_MAX;
	int8_t x487 = 11;
	int64_t x488 = 435781051428LL;
	int32_t t99 = -8229885;

    t99 = (x485&((x486+x487)!=x488));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x490 = UINT8_MAX;
	int64_t x491 = INT64_MIN;
	uint16_t x492 = UINT16_MAX;
	static volatile uint64_t t100 = 2780LLU;

    t100 = (x489&((x490+x491)!=x492));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x493 = INT8_MIN;
	volatile uint8_t x494 = 0U;
	int32_t x495 = 439772;
	static volatile int32_t x496 = INT32_MIN;
	int32_t t101 = -661963119;

    t101 = (x493&((x494+x495)!=x496));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x497 = INT32_MAX;
	uint64_t x498 = 135784LLU;
	static int64_t x500 = -1LL;
	volatile int32_t t102 = 479;

    t102 = (x497&((x498+x499)!=x500));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x501 = 229U;
	int64_t x502 = INT64_MAX;
	int8_t x503 = INT8_MIN;
	static volatile int32_t t103 = -15;

    t103 = (x501&((x502+x503)!=x504));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x505 = UINT16_MAX;
	volatile int16_t x506 = 3;
	uint32_t x507 = 95551U;
	static volatile int32_t t104 = -216783;

    t104 = (x505&((x506+x507)!=x508));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x509 = 584;
	int8_t x510 = INT8_MAX;
	int8_t x511 = INT8_MIN;
	volatile int32_t t105 = 192427545;

    t105 = (x509&((x510+x511)!=x512));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x513 = INT8_MIN;
	int16_t x515 = 64;
	volatile int32_t t106 = -934596;

    t106 = (x513&((x514+x515)!=x516));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x517 = INT8_MIN;
	static int32_t x519 = 254743880;
	static int8_t x520 = -60;
	int32_t t107 = 59868403;

    t107 = (x517&((x518+x519)!=x520));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x521 = 484975578902689LLU;
	int8_t x522 = INT8_MAX;
	volatile int16_t x523 = -765;
	static int8_t x524 = INT8_MAX;
	uint64_t t108 = 526051173534LLU;

    t108 = (x521&((x522+x523)!=x524));

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x525 = -613716;
	volatile int16_t x527 = INT16_MIN;
	static int32_t x528 = 12648295;
	int32_t t109 = -1031956520;

    t109 = (x525&((x526+x527)!=x528));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x529 = 6U;
	volatile int64_t x530 = -1LL;
	uint32_t x531 = 160U;
	volatile int8_t x532 = INT8_MIN;

    t110 = (x529&((x530+x531)!=x532));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x533 = -8;
	uint8_t x534 = 25U;
	volatile uint32_t x535 = 12719U;
	int32_t x536 = 1017637;
	volatile int32_t t111 = -9;

    t111 = (x533&((x534+x535)!=x536));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x537 = INT16_MIN;
	int16_t x539 = INT16_MIN;
	int64_t x540 = -8485LL;
	volatile int32_t t112 = 668845;

    t112 = (x537&((x538+x539)!=x540));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x541 = INT8_MIN;
	static int16_t x542 = INT16_MIN;
	uint8_t x543 = UINT8_MAX;
	volatile int32_t x544 = INT32_MIN;
	int32_t t113 = 12587706;

    t113 = (x541&((x542+x543)!=x544));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x546 = INT16_MIN;
	int16_t x547 = INT16_MIN;
	int64_t x548 = INT64_MAX;
	int32_t t114 = -270607;

    t114 = (x545&((x546+x547)!=x548));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x549 = 11404023;
	uint32_t x550 = 3U;
	int8_t x551 = INT8_MIN;
	int16_t x552 = -1;
	int32_t t115 = 2054;

    t115 = (x549&((x550+x551)!=x552));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x553 = UINT16_MAX;
	int32_t x554 = 3480409;
	int8_t x555 = INT8_MIN;
	int16_t x556 = INT16_MIN;

    t116 = (x553&((x554+x555)!=x556));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x557 = INT16_MAX;
	volatile uint8_t x558 = 0U;
	int64_t x559 = -1632687615512069884LL;
	int64_t x560 = INT64_MIN;
	int32_t t117 = 1029;

    t117 = (x557&((x558+x559)!=x560));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x562 = UINT64_MAX;
	volatile int32_t x563 = INT32_MIN;
	int16_t x564 = INT16_MAX;
	int32_t t118 = -47090977;

    t118 = (x561&((x562+x563)!=x564));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x573 = 16133528;
	int64_t x574 = INT64_MAX;
	int8_t x575 = 0;
	static volatile int32_t t119 = -12;

    t119 = (x573&((x574+x575)!=x576));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x581 = 85U;
	int8_t x582 = -1;
	int8_t x583 = -37;
	volatile uint32_t x584 = 666553U;

    t120 = (x581&((x582+x583)!=x584));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x585 = 45U;
	int16_t x586 = INT16_MAX;
	static volatile int16_t x587 = INT16_MAX;
	static int32_t x588 = INT32_MIN;
	uint32_t t121 = 422546U;

    t121 = (x585&((x586+x587)!=x588));

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x589 = INT64_MIN;
	volatile int8_t x590 = -1;
	int8_t x591 = -1;
	int64_t t122 = 66219944195621181LL;

    t122 = (x589&((x590+x591)!=x592));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x597 = -2067;
	volatile int64_t x598 = -1LL;
	int8_t x599 = INT8_MIN;
	int8_t x600 = -1;
	volatile int32_t t123 = 4124529;

    t123 = (x597&((x598+x599)!=x600));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x601 = 9609940U;
	int32_t x603 = INT32_MIN;
	int8_t x604 = -1;
	uint32_t t124 = 0U;

    t124 = (x601&((x602+x603)!=x604));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x605 = -1LL;
	static volatile int8_t x606 = -1;
	uint8_t x607 = 0U;
	int64_t t125 = 3471182505383197LL;

    t125 = (x605&((x606+x607)!=x608));

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x609 = -1;
	int16_t x610 = 1;
	int16_t x612 = INT16_MAX;
	int32_t t126 = -91951;

    t126 = (x609&((x610+x611)!=x612));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x613 = UINT16_MAX;
	int32_t x614 = INT32_MIN;
	int64_t x615 = -1LL;
	int16_t x616 = -1;
	int32_t t127 = 2;

    t127 = (x613&((x614+x615)!=x616));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x617 = INT32_MIN;
	uint32_t x618 = UINT32_MAX;
	int16_t x619 = 2;
	int32_t x620 = INT32_MAX;
	int32_t t128 = 421;

    t128 = (x617&((x618+x619)!=x620));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x621 = UINT32_MAX;
	static int16_t x623 = -40;

    t129 = (x621&((x622+x623)!=x624));

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x625 = INT8_MIN;
	int64_t x626 = INT64_MIN;
	volatile uint64_t x627 = UINT64_MAX;
	int32_t x628 = -1813553;
	int32_t t130 = -3379;

    t130 = (x625&((x626+x627)!=x628));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x629 = 99205LLU;
	volatile uint64_t x630 = 15259839LLU;
	int64_t x631 = INT64_MAX;
	static int16_t x632 = INT16_MAX;

    t131 = (x629&((x630+x631)!=x632));

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x634 = -1;
	int16_t x635 = INT16_MIN;
	int8_t x636 = -1;
	static uint32_t t132 = 107U;

    t132 = (x633&((x634+x635)!=x636));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x637 = INT32_MIN;
	static volatile uint32_t x638 = 29U;
	static int64_t x639 = INT64_MIN;
	volatile uint32_t x640 = 320502U;
	int32_t t133 = 227962622;

    t133 = (x637&((x638+x639)!=x640));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x641 = UINT16_MAX;
	uint16_t x642 = UINT16_MAX;
	static uint32_t x644 = UINT32_MAX;

    t134 = (x641&((x642+x643)!=x644));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x649 = UINT16_MAX;
	uint64_t x650 = 96LLU;
	int64_t x651 = INT64_MAX;
	int32_t x652 = INT32_MAX;
	int32_t t135 = 1682101;

    t135 = (x649&((x650+x651)!=x652));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x654 = INT64_MIN;
	static volatile int64_t x655 = INT64_MAX;
	int32_t t136 = -917166;

    t136 = (x653&((x654+x655)!=x656));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x658 = 0;
	int32_t t137 = -259289;

    t137 = (x657&((x658+x659)!=x660));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x661 = -1LL;
	int8_t x662 = -1;
	int32_t x663 = -1;
	uint32_t x664 = UINT32_MAX;
	static int64_t t138 = -190833155074665LL;

    t138 = (x661&((x662+x663)!=x664));

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x665 = INT64_MIN;
	uint16_t x666 = 33U;
	static int64_t x668 = 1249774408912LL;
	volatile int64_t t139 = 11072024592102LL;

    t139 = (x665&((x666+x667)!=x668));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x669 = 7130;
	int32_t x670 = 460;
	int16_t x671 = INT16_MIN;
	volatile uint8_t x672 = 0U;
	int32_t t140 = -957;

    t140 = (x669&((x670+x671)!=x672));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x675 = INT16_MAX;
	volatile int32_t t141 = -2978935;

    t141 = (x673&((x674+x675)!=x676));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x677 = UINT16_MAX;
	static int16_t x678 = INT16_MIN;
	int32_t x679 = -1;
	int32_t x680 = INT32_MIN;
	int32_t t142 = 307200541;

    t142 = (x677&((x678+x679)!=x680));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x681 = UINT8_MAX;
	int8_t x683 = -13;
	int32_t x684 = 8285;
	volatile int32_t t143 = 1380371;

    t143 = (x681&((x682+x683)!=x684));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x685 = 0;
	uint64_t x686 = 5494309719653583978LLU;
	int8_t x687 = -1;
	volatile int32_t t144 = -346;

    t144 = (x685&((x686+x687)!=x688));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x693 = -1;
	volatile uint16_t x694 = UINT16_MAX;
	int32_t x695 = INT32_MIN;
	int8_t x696 = INT8_MIN;
	volatile int32_t t145 = -86840;

    t145 = (x693&((x694+x695)!=x696));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x697 = INT64_MIN;
	int16_t x699 = INT16_MIN;
	static uint32_t x700 = 302896U;
	int64_t t146 = 29674LL;

    t146 = (x697&((x698+x699)!=x700));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x701 = 7U;
	static uint64_t x702 = UINT64_MAX;
	int64_t x703 = -1LL;
	int32_t t147 = 3776091;

    t147 = (x701&((x702+x703)!=x704));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x705 = -1LL;
	uint16_t x706 = UINT16_MAX;
	int16_t x707 = -1;
	static uint32_t x708 = 10224496U;
	volatile int64_t t148 = -355562052469LL;

    t148 = (x705&((x706+x707)!=x708));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x709 = INT8_MIN;
	uint64_t x712 = 130615703910LLU;
	volatile int32_t t149 = 43;

    t149 = (x709&((x710+x711)!=x712));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x714 = 24955270634LLU;
	volatile int16_t x716 = INT16_MIN;
	static volatile uint32_t t150 = 5965690U;

    t150 = (x713&((x714+x715)!=x716));

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x721 = 72458247062LL;
	int8_t x723 = INT8_MAX;
	int16_t x724 = -1;
	volatile int64_t t151 = 288418122545LL;

    t151 = (x721&((x722+x723)!=x724));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x725 = INT64_MIN;
	int16_t x726 = INT16_MIN;
	int16_t x727 = INT16_MIN;
	uint32_t x728 = UINT32_MAX;
	volatile int64_t t152 = -677149LL;

    t152 = (x725&((x726+x727)!=x728));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x729 = 15LLU;
	uint64_t x730 = 122953296654LLU;
	int16_t x731 = 251;
	static volatile int8_t x732 = -15;
	static uint64_t t153 = 5LLU;

    t153 = (x729&((x730+x731)!=x732));

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x733 = INT8_MIN;
	volatile uint64_t x734 = 966056714878LLU;
	static volatile int16_t x735 = 2;
	int16_t x736 = -1;
	int32_t t154 = -1;

    t154 = (x733&((x734+x735)!=x736));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x738 = 0U;
	static uint16_t x739 = 328U;
	volatile int32_t t155 = -932506;

    t155 = (x737&((x738+x739)!=x740));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x742 = UINT16_MAX;
	uint16_t x743 = 6333U;
	static volatile int64_t x744 = -2053513479439LL;
	volatile int32_t t156 = -79;

    t156 = (x741&((x742+x743)!=x744));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x745 = 2;
	int16_t x746 = -1;
	int64_t x748 = -286583120573825LL;
	int32_t t157 = -166041116;

    t157 = (x745&((x746+x747)!=x748));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x753 = 58;
	static int8_t x754 = -1;
	uint8_t x755 = UINT8_MAX;
	int8_t x756 = INT8_MAX;
	static volatile int32_t t158 = 929;

    t158 = (x753&((x754+x755)!=x756));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x757 = 1639234979981587224LLU;
	volatile uint16_t x758 = 4U;
	static volatile int8_t x759 = INT8_MAX;
	static int64_t x760 = INT64_MIN;
	volatile uint64_t t159 = 309LLU;

    t159 = (x757&((x758+x759)!=x760));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x761 = 41U;

    t160 = (x761&((x762+x763)!=x764));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x768 = -1;

    t161 = (x765&((x766+x767)!=x768));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x769 = INT32_MAX;
	int16_t x770 = INT16_MIN;

    t162 = (x769&((x770+x771)!=x772));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x773 = -4;
	static uint16_t x775 = 1U;
	int32_t x776 = INT32_MIN;

    t163 = (x773&((x774+x775)!=x776));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x778 = INT32_MIN;
	uint16_t x779 = UINT16_MAX;
	static volatile uint32_t x780 = 65804344U;
	int32_t t164 = 54;

    t164 = (x777&((x778+x779)!=x780));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x781 = -1;
	int8_t x782 = INT8_MAX;
	static uint32_t x783 = UINT32_MAX;
	uint32_t x784 = 44371003U;
	volatile int32_t t165 = 227571;

    t165 = (x781&((x782+x783)!=x784));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x785 = INT8_MIN;
	int32_t x787 = -821784;
	int32_t x788 = INT32_MIN;

    t166 = (x785&((x786+x787)!=x788));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x789 = 596655442297LL;
	uint16_t x790 = 2U;
	uint32_t x791 = UINT32_MAX;
	int16_t x792 = INT16_MIN;

    t167 = (x789&((x790+x791)!=x792));

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x802 = 19686098LLU;
	int64_t x804 = 697252LL;
	int32_t t168 = -1114215;

    t168 = (x801&((x802+x803)!=x804));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x810 = 0;
	volatile uint64_t x811 = 101429LLU;
	static volatile int64_t x812 = 48643215948LL;
	volatile uint64_t t169 = 10LLU;

    t169 = (x809&((x810+x811)!=x812));

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x817 = UINT32_MAX;
	static int32_t x819 = -1;
	static int32_t x820 = -899055630;

    t170 = (x817&((x818+x819)!=x820));

    if (t170 != 1U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x821 = INT16_MIN;
	int16_t x823 = -20;
	uint64_t x824 = UINT64_MAX;
	volatile int32_t t171 = -815;

    t171 = (x821&((x822+x823)!=x824));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x826 = -1;
	uint16_t x827 = 336U;
	static int8_t x828 = INT8_MAX;

    t172 = (x825&((x826+x827)!=x828));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x831 = 1U;
	int64_t x832 = -1LL;
	int32_t t173 = 31454;

    t173 = (x829&((x830+x831)!=x832));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x834 = INT16_MIN;
	int8_t x835 = INT8_MAX;
	uint32_t x836 = UINT32_MAX;
	volatile int32_t t174 = 6119478;

    t174 = (x833&((x834+x835)!=x836));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x837 = UINT16_MAX;
	uint32_t x838 = UINT32_MAX;
	int16_t x839 = -1;
	int32_t x840 = 13493;
	volatile int32_t t175 = -1048866704;

    t175 = (x837&((x838+x839)!=x840));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x841 = INT64_MIN;
	static uint16_t x842 = 11632U;
	int8_t x843 = -18;
	volatile uint64_t x844 = 44142252LLU;

    t176 = (x841&((x842+x843)!=x844));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint16_t x849 = 4515U;
	int16_t x851 = 56;
	int64_t x852 = INT64_MIN;
	volatile int32_t t177 = 429;

    t177 = (x849&((x850+x851)!=x852));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x853 = 102U;
	volatile int8_t x854 = 0;
	int16_t x856 = INT16_MIN;
	volatile uint32_t t178 = 49U;

    t178 = (x853&((x854+x855)!=x856));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x857 = 146U;
	volatile uint64_t x858 = 3244227857213013LLU;
	uint32_t x859 = UINT32_MAX;
	int8_t x860 = INT8_MIN;

    t179 = (x857&((x858+x859)!=x860));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x865 = 17557U;
	static uint8_t x866 = UINT8_MAX;
	uint64_t x867 = 110842541LLU;
	volatile int16_t x868 = INT16_MIN;
	uint32_t t180 = 42U;

    t180 = (x865&((x866+x867)!=x868));

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x869 = INT8_MAX;
	static uint16_t x870 = UINT16_MAX;
	static int64_t x871 = -256152319064361LL;
	volatile int32_t t181 = 0;

    t181 = (x869&((x870+x871)!=x872));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x873 = UINT64_MAX;
	int8_t x874 = 4;
	int16_t x875 = INT16_MIN;
	volatile uint64_t t182 = 2256696840869LLU;

    t182 = (x873&((x874+x875)!=x876));

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x877 = INT8_MAX;
	int64_t x878 = 5438353031303LL;
	static volatile uint64_t x879 = UINT64_MAX;
	static volatile uint64_t x880 = 902116491200508503LLU;
	static int32_t t183 = 1;

    t183 = (x877&((x878+x879)!=x880));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint8_t x882 = 42U;
	int16_t x883 = -1;
	int16_t x884 = -1;
	volatile int32_t t184 = -336;

    t184 = (x881&((x882+x883)!=x884));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x885 = INT8_MIN;
	int16_t x886 = INT16_MIN;
	int16_t x887 = -157;
	int8_t x888 = 1;
	int32_t t185 = -4;

    t185 = (x885&((x886+x887)!=x888));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x889 = UINT8_MAX;
	static uint64_t x890 = UINT64_MAX;
	volatile int16_t x891 = -1;
	volatile int64_t x892 = INT64_MIN;
	static int32_t t186 = -559;

    t186 = (x889&((x890+x891)!=x892));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x893 = UINT64_MAX;
	int64_t x894 = INT64_MIN;
	uint32_t x896 = 10027U;

    t187 = (x893&((x894+x895)!=x896));

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x897 = INT8_MIN;
	static int8_t x898 = -1;
	static int8_t x899 = -1;
	uint8_t x900 = 22U;
	volatile int32_t t188 = -567;

    t188 = (x897&((x898+x899)!=x900));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x901 = -4765;
	volatile int16_t x902 = INT16_MIN;
	int8_t x903 = -16;
	int8_t x904 = INT8_MIN;
	int32_t t189 = -781;

    t189 = (x901&((x902+x903)!=x904));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x905 = -1;
	static int64_t x907 = 7398420571555306LL;
	static int8_t x908 = INT8_MIN;
	int32_t t190 = -2065071;

    t190 = (x905&((x906+x907)!=x908));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x909 = -93824801279LL;
	uint32_t x911 = 123U;
	static int64_t x912 = -1LL;

    t191 = (x909&((x910+x911)!=x912));

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x913 = 3;
	volatile int8_t x914 = INT8_MIN;
	uint64_t x915 = 43524LLU;
	int32_t x916 = INT32_MIN;

    t192 = (x913&((x914+x915)!=x916));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x917 = UINT8_MAX;
	uint8_t x918 = 17U;
	volatile int32_t x919 = INT32_MIN;
	volatile int32_t t193 = 85;

    t193 = (x917&((x918+x919)!=x920));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x921 = INT16_MIN;
	uint16_t x922 = 39U;
	int32_t x923 = INT32_MIN;
	int32_t t194 = 62224;

    t194 = (x921&((x922+x923)!=x924));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x926 = INT32_MIN;
	int64_t x927 = INT64_MAX;
	int8_t x928 = INT8_MIN;

    t195 = (x925&((x926+x927)!=x928));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x929 = UINT16_MAX;
	static int16_t x930 = 6;
	int8_t x931 = -4;
	volatile uint8_t x932 = 10U;
	static volatile int32_t t196 = -1;

    t196 = (x929&((x930+x931)!=x932));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x937 = UINT8_MAX;
	uint16_t x938 = UINT16_MAX;
	int8_t x939 = INT8_MIN;
	static volatile uint16_t x940 = 7226U;
	int32_t t197 = -1731287;

    t197 = (x937&((x938+x939)!=x940));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x945 = INT32_MAX;
	uint32_t x946 = 8470321U;
	int16_t x947 = -1;
	uint64_t x948 = 299LLU;
	volatile int32_t t198 = -250;

    t198 = (x945&((x946+x947)!=x948));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x950 = 25;
	volatile int16_t x951 = -1;
	static volatile uint16_t x952 = 2U;
	volatile int64_t t199 = -16183958842838556LL;

    t199 = (x949&((x950+x951)!=x952));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

