
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

volatile int8_t x3 = INT8_MAX;
volatile int16_t x17 = -1;
int64_t x19 = INT64_MIN;
int64_t x21 = INT64_MIN;
static int64_t x23 = INT64_MAX;
static volatile int8_t x24 = 24;
volatile int16_t x29 = 174;
int16_t x32 = INT16_MIN;
static int32_t x36 = -1;
uint64_t x42 = UINT64_MAX;
int32_t x48 = 17715;
uint16_t x55 = 30U;
int64_t x66 = 26172LL;
uint64_t x74 = UINT64_MAX;
static uint64_t x77 = 123827LLU;
int32_t x78 = -722515;
static int32_t x81 = INT32_MIN;
int16_t x82 = INT16_MAX;
volatile int16_t x83 = 4858;
volatile int64_t x84 = INT64_MIN;
volatile int16_t x85 = -1437;
volatile int64_t x89 = -1LL;
int32_t x91 = INT32_MIN;
int64_t x95 = INT64_MAX;
volatile uint8_t x100 = 3U;
uint8_t x102 = 7U;
int32_t x103 = INT32_MIN;
int32_t x105 = INT32_MAX;
int32_t x106 = -1;
volatile int32_t x108 = INT32_MIN;
uint8_t x114 = 11U;
static uint64_t x118 = 3LLU;
static volatile int16_t x122 = -11075;
volatile int32_t t32 = INT32_MAX;
uint32_t x139 = 0U;
uint64_t x144 = 1LLU;
int8_t x151 = INT8_MIN;
int16_t x152 = -1;
volatile int32_t t38 = -3;
static volatile uint8_t x157 = 0U;
static int64_t x161 = INT64_MAX;
int32_t x169 = -2006842;
uint8_t x170 = 1U;
uint32_t x175 = UINT32_MAX;
static int8_t x176 = INT8_MAX;
static int32_t x182 = INT32_MAX;
int64_t x183 = INT64_MIN;
uint64_t x189 = 409LLU;
static int16_t x196 = INT16_MIN;
static volatile uint32_t x200 = 217390U;
volatile uint64_t t50 = UINT64_MAX;
volatile int64_t x208 = -4499425368860281LL;
volatile int64_t t52 = INT64_MIN;
int8_t x213 = 1;
int64_t x220 = -1LL;
int32_t t55 = 6768;
volatile int32_t x231 = 47386140;
int64_t t57 = -2362LL;
static uint16_t x233 = UINT16_MAX;
int16_t x236 = INT16_MIN;
volatile int8_t x238 = INT8_MIN;
int16_t x240 = 9192;
static int64_t x250 = -1LL;
uint32_t x251 = UINT32_MAX;
int32_t x256 = -1;
uint64_t t63 = 3168615LLU;
static volatile uint64_t x260 = 137546LLU;
volatile uint8_t x267 = UINT8_MAX;
int64_t x270 = INT64_MIN;
volatile int32_t t67 = -27361;
volatile int16_t x286 = 0;
volatile int64_t t71 = -1196336378241269476LL;
int8_t x289 = -2;
uint64_t x291 = UINT64_MAX;
int32_t x294 = INT32_MIN;
int64_t x300 = INT64_MIN;
volatile int8_t x301 = 1;
int32_t x302 = INT32_MAX;
int32_t t75 = 12;
int16_t x307 = -1;
int8_t x308 = INT8_MIN;
volatile int32_t t76 = -720413;
int8_t x313 = -4;
volatile int16_t x314 = -1;
static volatile int16_t x315 = -11103;
uint8_t x318 = UINT8_MAX;
uint64_t x320 = 1089214789764230LLU;
int64_t x322 = -530783LL;
int64_t x328 = -1LL;
int32_t t81 = 1313;
static int32_t t82 = -2417797;
uint64_t x336 = UINT64_MAX;
static uint8_t x340 = 32U;
uint32_t x347 = UINT32_MAX;
int16_t x351 = INT16_MIN;
uint8_t x353 = 125U;
int16_t x354 = -1;
int16_t x356 = -1;
int8_t x357 = 7;
int64_t x370 = -1LL;
static volatile uint64_t x376 = 60124LLU;
uint64_t x378 = UINT64_MAX;
uint32_t x389 = UINT32_MAX;
int8_t x392 = 1;
int32_t t98 = -19;
int16_t x399 = INT16_MIN;
int32_t x405 = INT32_MIN;
static volatile uint32_t x408 = 447U;
static volatile int16_t x412 = INT16_MIN;
static int64_t x416 = 7580463027LL;
int32_t x417 = -1;
int64_t x420 = INT64_MIN;
static int16_t x422 = -1;
int8_t x429 = INT8_MAX;
static int16_t x430 = -3;
uint32_t x433 = UINT32_MAX;
int16_t x436 = INT16_MAX;
static int64_t t112 = -2307228896LL;
volatile int64_t x456 = -382202305646953075LL;
uint64_t x458 = UINT64_MAX;
uint16_t x466 = UINT16_MAX;
int32_t x468 = -1686559;
volatile int32_t t117 = 0;
int32_t x473 = INT32_MIN;
uint16_t x480 = 0U;
int32_t x481 = INT32_MAX;
volatile int8_t x485 = INT8_MIN;
int64_t x486 = INT64_MAX;
uint64_t x489 = 5843859869750427LLU;
int16_t x492 = INT16_MAX;
volatile int32_t t123 = -3;
static uint64_t x497 = 1758384054480042157LLU;
int8_t x498 = -1;
uint16_t x507 = 11U;
int32_t x515 = INT32_MAX;
int16_t x517 = -11857;
static int32_t x527 = INT32_MAX;
uint16_t x532 = UINT16_MAX;
volatile int32_t t133 = 519443819;
int64_t x540 = INT64_MAX;
static int32_t x543 = 28145089;
int32_t x546 = INT32_MAX;
uint64_t x551 = 386LLU;
volatile int16_t x554 = INT16_MAX;
uint16_t x558 = 2355U;
static int8_t x561 = 10;
int32_t t140 = 151168;
static int8_t x571 = INT8_MAX;
static int32_t t142 = 2;
static int64_t x574 = INT64_MIN;
volatile uint32_t t143 = UINT32_MAX;
int32_t x580 = -1;
int64_t x587 = 2983674LL;
volatile int32_t t146 = -624;
int64_t x596 = INT64_MIN;
static int32_t t148 = -418;
uint16_t x600 = 2426U;
static int64_t t149 = INT64_MIN;
static volatile uint32_t t150 = 101U;
static uint16_t x605 = UINT16_MAX;
int64_t x630 = 8133984163501LL;
int8_t x631 = INT8_MIN;
int16_t x633 = INT16_MAX;
int32_t t158 = -5929;
int16_t x641 = INT16_MIN;
int64_t x653 = 132442401440686668LL;
int32_t x654 = INT32_MIN;
int16_t x661 = INT16_MAX;
int8_t x664 = 0;
static int32_t t165 = 6;
int16_t x665 = -3945;
int32_t t166 = 377954;
int32_t t167 = 5;
static int32_t t168 = 12005;
volatile uint8_t x689 = UINT8_MAX;
static uint8_t x692 = 7U;
static int32_t x696 = INT32_MIN;
volatile int32_t x700 = -1;
static volatile uint8_t x705 = UINT8_MAX;
int64_t x709 = -1LL;
static volatile int64_t t177 = -244089917334LL;
uint32_t x714 = 36379U;
int16_t x720 = 14573;
int32_t t180 = 0;
int8_t x725 = -10;
static int64_t x737 = -5LL;
static int64_t x741 = INT64_MAX;
volatile int8_t x746 = INT8_MAX;
int32_t t186 = -51294603;
volatile int8_t x750 = INT8_MAX;
volatile int32_t x758 = 797830765;
volatile uint16_t x762 = 3U;
volatile uint64_t x764 = 556187724931373510LLU;
volatile int64_t t190 = 11021276600521LL;
static int32_t t191 = 1031;
volatile uint16_t x770 = 21308U;
uint32_t t194 = 9297U;
volatile uint32_t t195 = 3184106U;
volatile int64_t x792 = INT64_MAX;
uint32_t t198 = 51U;
static int8_t x798 = INT8_MIN;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	volatile uint64_t x2 = UINT64_MAX;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -112701;

    t0 = (x1^((x2|x3)>x4));

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 0U;
	static int16_t x6 = 4;
	uint8_t x7 = 24U;
	static volatile int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 47;

    t1 = (x5^((x6|x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -178847566;
	int16_t x10 = -6;
	uint16_t x11 = 4060U;
	static volatile uint16_t x12 = 5U;
	static int32_t t2 = 874622;

    t2 = (x9^((x10|x11)>x12));

    if (t2 != -178847566) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MIN;
	uint8_t x14 = 2U;
	int32_t x15 = -1;
	int64_t x16 = INT64_MIN;
	static volatile int32_t t3 = -126;

    t3 = (x13^((x14|x15)>x16));

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -241125348373033339LL;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -94486;

    t4 = (x17^((x18|x19)>x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -1;
	volatile int64_t t5 = INT64_MIN;

    t5 = (x21^((x22|x23)>x24));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	int16_t x26 = 1091;
	static uint8_t x27 = 64U;
	static uint32_t x28 = 11018U;
	volatile int32_t t6 = 1;

    t6 = (x25^((x26|x27)>x28));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x30 = -1;
	static int8_t x31 = INT8_MIN;
	static int32_t t7 = 8240929;

    t7 = (x29^((x30|x31)>x32));

    if (t7 != 175) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	int8_t x34 = 4;
	volatile int16_t x35 = INT16_MAX;
	int32_t t8 = -5257;

    t8 = (x33^((x34|x35)>x36));

    if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = 14;
	uint8_t x39 = 3U;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 878938883;

    t9 = (x37^((x38|x39)>x40));

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int16_t x43 = INT16_MAX;
	static int8_t x44 = 55;
	int32_t t10 = 6;

    t10 = (x41^((x42|x43)>x44));

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 9257LLU;
	uint32_t x46 = 196923195U;
	int64_t x47 = -1LL;
	uint64_t t11 = 1106808LLU;

    t11 = (x45^((x46|x47)>x48));

    if (t11 != 9257LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = 265LLU;
	uint64_t x50 = UINT64_MAX;
	int16_t x51 = INT16_MIN;
	int64_t x52 = 470LL;
	static volatile uint64_t t12 = 15239379825000258LLU;

    t12 = (x49^((x50|x51)>x52));

    if (t12 != 264LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	int16_t x54 = INT16_MIN;
	uint8_t x56 = 0U;
	int32_t t13 = -250570;

    t13 = (x53^((x54|x55)>x56));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MIN;
	uint16_t x59 = 294U;
	static int32_t x60 = INT32_MIN;
	int64_t t14 = -215983203LL;

    t14 = (x57^((x58|x59)>x60));

    if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	static int16_t x62 = -1;
	static uint64_t x63 = 56442LLU;
	volatile int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -15;

    t15 = (x61^((x62|x63)>x64));

    if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -57;
	static int16_t x67 = -1;
	int32_t x68 = 2;
	int32_t t16 = 29877309;

    t16 = (x65^((x66|x67)>x68));

    if (t16 != -57) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x69 = UINT64_MAX;
	int32_t x70 = -1;
	int16_t x71 = INT16_MAX;
	int64_t x72 = -1LL;
	volatile uint64_t t17 = UINT64_MAX;

    t17 = (x69^((x70|x71)>x72));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = 9U;
	int32_t x75 = INT32_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = 12459;

    t18 = (x73^((x74|x75)>x76));

    if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MAX;
	volatile uint64_t t19 = 59572426489735232LLU;

    t19 = (x77^((x78|x79)>x80));

    if (t19 != 123827LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t t20 = 0;

    t20 = (x81^((x82|x83)>x84));

    if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x86 = UINT8_MAX;
	int64_t x87 = 934LL;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = -825290210;

    t21 = (x85^((x86|x87)>x88));

    if (t21 != -1438) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = -480;
	static int64_t x92 = 5979LL;
	int64_t t22 = -162841LL;

    t22 = (x89^((x90|x91)>x92));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x93 = 94686732U;
	static int64_t x94 = INT64_MIN;
	volatile uint32_t x96 = 30917U;
	static uint32_t t23 = 93U;

    t23 = (x93^((x94|x95)>x96));

    if (t23 != 94686732U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = 29;
	int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	static int32_t t24 = 534034527;

    t24 = (x97^((x98|x99)>x100));

    if (t24 != 29) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MAX;
	int32_t x104 = 436302;
	int32_t t25 = INT32_MAX;

    t25 = (x101^((x102|x103)>x104));

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x107 = INT8_MAX;
	int32_t t26 = 3181;

    t26 = (x105^((x106|x107)>x108));

    if (t26 != 2147483646) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int64_t x110 = 29LL;
	int64_t x111 = -1267009742860LL;
	uint64_t x112 = 47787LLU;
	static int32_t t27 = 216292689;

    t27 = (x109^((x110|x111)>x112));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	int32_t x115 = INT32_MAX;
	int16_t x116 = INT16_MAX;
	int32_t t28 = 19954412;

    t28 = (x113^((x114|x115)>x116));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	volatile uint64_t x119 = UINT64_MAX;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 182487362;

    t29 = (x117^((x118|x119)>x120));

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 50U;
	static uint16_t x123 = 31U;
	int64_t x124 = INT64_MIN;
	int32_t t30 = 5394;

    t30 = (x121^((x122|x123)>x124));

    if (t30 != 51) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 458;
	int8_t x126 = -1;
	static int32_t x127 = -8;
	int64_t x128 = -1LL;
	int32_t t31 = -22;

    t31 = (x125^((x126|x127)>x128));

    if (t31 != 458) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MAX;
	int32_t x130 = -2458;
	static volatile int8_t x131 = -1;
	int8_t x132 = -1;

    t32 = (x129^((x130|x131)>x132));

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = UINT8_MAX;
	int8_t x134 = INT8_MIN;
	static int32_t x135 = 52575100;
	int64_t x136 = 64LL;
	volatile int32_t t33 = -1;

    t33 = (x133^((x134|x135)>x136));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	uint16_t x138 = UINT16_MAX;
	uint64_t x140 = UINT64_MAX;
	uint32_t t34 = UINT32_MAX;

    t34 = (x137^((x138|x139)>x140));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = 54;
	int64_t x142 = -1LL;
	static int8_t x143 = INT8_MIN;
	volatile int32_t t35 = 784254;

    t35 = (x141^((x142|x143)>x144));

    if (t35 != 55) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 36622U;
	uint32_t x146 = 5U;
	static int8_t x147 = -1;
	static uint16_t x148 = UINT16_MAX;
	static volatile uint32_t t36 = 35849U;

    t36 = (x145^((x146|x147)>x148));

    if (t36 != 36623U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -68151588896LL;
	int8_t x150 = -1;
	int64_t t37 = 4LL;

    t37 = (x149^((x150|x151)>x152));

    if (t37 != -68151588896LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MAX;
	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MAX;
	int16_t x156 = -6977;

    t38 = (x153^((x154|x155)>x156));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = 1;
	volatile int32_t x159 = -1;
	volatile int64_t x160 = INT64_MIN;
	volatile int32_t t39 = -58;

    t39 = (x157^((x158|x159)>x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = -18;
	uint32_t x163 = 118U;
	int16_t x164 = 4189;
	volatile int64_t t40 = 10165130884094LL;

    t40 = (x161^((x162|x163)>x164));

    if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x165 = 932U;
	int16_t x166 = 6;
	uint32_t x167 = 6U;
	static int64_t x168 = INT64_MIN;
	volatile uint32_t t41 = 69062621U;

    t41 = (x165^((x166|x167)>x168));

    if (t41 != 933U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x171 = INT16_MAX;
	static int64_t x172 = -78265LL;
	volatile int32_t t42 = 1;

    t42 = (x169^((x170|x171)>x172));

    if (t42 != -2006841) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = INT8_MIN;
	int32_t x174 = -1;
	volatile int32_t t43 = 16023;

    t43 = (x173^((x174|x175)>x176));

    if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	uint64_t x178 = 3203641171797490LLU;
	static volatile int16_t x179 = 347;
	uint16_t x180 = 8171U;
	static volatile int32_t t44 = -2188;

    t44 = (x177^((x178|x179)>x180));

    if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = UINT8_MAX;
	int8_t x184 = INT8_MAX;
	static volatile int32_t t45 = -1214105;

    t45 = (x181^((x182|x183)>x184));

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	static int16_t x186 = -214;
	volatile int16_t x187 = 6805;
	int8_t x188 = INT8_MIN;
	int32_t t46 = 1;

    t46 = (x185^((x186|x187)>x188));

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x190 = INT32_MIN;
	int64_t x191 = -461LL;
	int16_t x192 = -718;
	volatile uint64_t t47 = 264400788911349201LLU;

    t47 = (x189^((x190|x191)>x192));

    if (t47 != 408LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = -40;
	uint64_t x194 = UINT64_MAX;
	volatile int32_t x195 = INT32_MAX;
	int32_t t48 = -1314;

    t48 = (x193^((x194|x195)>x196));

    if (t48 != -39) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int8_t x198 = -1;
	int8_t x199 = -1;
	volatile int64_t t49 = -114LL;

    t49 = (x197^((x198|x199)>x200));

    if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	volatile int32_t x202 = -1;
	int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MAX;

    t50 = (x201^((x202|x203)>x204));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x205 = INT64_MIN;
	int64_t x206 = 465646LL;
	int16_t x207 = -1;
	int64_t t51 = -56516020928458LL;

    t51 = (x205^((x206|x207)>x208));

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	volatile int64_t x210 = INT64_MIN;
	uint32_t x211 = 172U;
	int32_t x212 = INT32_MIN;

    t52 = (x209^((x210|x211)>x212));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x214 = INT8_MIN;
	uint16_t x215 = 2U;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = -19326933;

    t53 = (x213^((x214|x215)>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 1902U;
	static volatile int64_t x219 = INT64_MAX;
	int32_t t54 = 1;

    t54 = (x217^((x218|x219)>x220));

    if (t54 != 254) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = 0;
	int8_t x222 = -15;
	static int32_t x223 = INT32_MAX;
	int32_t x224 = -1;

    t55 = (x221^((x222|x223)>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = 2056537056353943LL;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = 36U;
	volatile int64_t x228 = 0LL;
	static volatile int64_t t56 = 7439043123257623LL;

    t56 = (x225^((x226|x227)>x228));

    if (t56 != 2056537056353943LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MIN;
	volatile uint64_t x232 = 14657944LLU;

    t57 = (x229^((x230|x231)>x232));

    if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MIN;
	int32_t t58 = -930;

    t58 = (x233^((x234|x235)>x236));

    if (t58 != 65534) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int8_t x239 = INT8_MIN;
	static int64_t t59 = INT64_MIN;

    t59 = (x237^((x238|x239)>x240));

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	int32_t x242 = -1;
	volatile uint32_t x243 = 52025885U;
	uint64_t x244 = 930LLU;
	volatile int32_t t60 = 11470650;

    t60 = (x241^((x242|x243)>x244));

    if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = -3287082LL;
	int32_t x246 = -1;
	volatile uint16_t x247 = 170U;
	uint16_t x248 = 119U;
	volatile int64_t t61 = 8678906170051400LL;

    t61 = (x245^((x246|x247)>x248));

    if (t61 != -3287082LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x249 = 214U;
	uint8_t x252 = 6U;
	int32_t t62 = -3644267;

    t62 = (x249^((x250|x251)>x252));

    if (t62 != 214) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 1LLU;
	uint32_t x254 = UINT32_MAX;
	static int8_t x255 = 2;

    t63 = (x253^((x254|x255)>x256));

    if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x257 = UINT32_MAX;
	uint64_t x258 = 82392667763966LLU;
	int8_t x259 = 1;
	uint32_t t64 = 435805U;

    t64 = (x257^((x258|x259)>x260));

    if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = -53;
	static uint64_t x262 = UINT64_MAX;
	int16_t x263 = -1;
	int16_t x264 = INT16_MAX;
	static int32_t t65 = 42;

    t65 = (x261^((x262|x263)>x264));

    if (t65 != -54) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -2;
	static int16_t x266 = -280;
	uint8_t x268 = UINT8_MAX;
	int32_t t66 = -963565871;

    t66 = (x265^((x266|x267)>x268));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 628U;
	static int32_t x271 = -1;
	volatile uint64_t x272 = 5136710331620LLU;

    t67 = (x269^((x270|x271)>x272));

    if (t67 != 629) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MAX;
	uint32_t x274 = UINT32_MAX;
	static int64_t x275 = -1LL;
	static uint8_t x276 = 37U;
	volatile int32_t t68 = -3;

    t68 = (x273^((x274|x275)>x276));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x277 = UINT64_MAX;
	int32_t x278 = -1;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = 7U;
	uint64_t t69 = UINT64_MAX;

    t69 = (x277^((x278|x279)>x280));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = INT8_MIN;
	int64_t x282 = -81LL;
	uint16_t x283 = 720U;
	uint32_t x284 = 3U;
	int32_t t70 = -15136;

    t70 = (x281^((x282|x283)>x284));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -60226047118988LL;
	static volatile uint32_t x287 = 11049U;
	volatile int16_t x288 = 2;

    t71 = (x285^((x286|x287)>x288));

    if (t71 != -60226047118987LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = -5951;
	int64_t x292 = INT64_MIN;
	int32_t t72 = -1673502;

    t72 = (x289^((x290|x291)>x292));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	volatile int8_t x295 = 0;
	int64_t x296 = 62310LL;
	int32_t t73 = -1638105;

    t73 = (x293^((x294|x295)>x296));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -5;
	uint64_t x298 = 3584511727406981520LLU;
	int16_t x299 = INT16_MIN;
	int32_t t74 = -535320416;

    t74 = (x297^((x298|x299)>x300));

    if (t74 != -6) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x303 = UINT64_MAX;
	uint64_t x304 = 461314LLU;

    t75 = (x301^((x302|x303)>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x305 = 1U;
	int16_t x306 = -3;

    t76 = (x305^((x306|x307)>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -14110;
	uint32_t x310 = UINT32_MAX;
	int64_t x311 = -1750220986236569846LL;
	static uint64_t x312 = UINT64_MAX;
	int32_t t77 = -1329329;

    t77 = (x309^((x310|x311)>x312));

    if (t77 != -14110) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 738361000;

    t78 = (x313^((x314|x315)>x316));

    if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = 5;
	int64_t x319 = INT64_MIN;
	volatile int32_t t79 = 44215;

    t79 = (x317^((x318|x319)>x320));

    if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = 233916;
	volatile int64_t x323 = 44971107554LL;
	volatile int8_t x324 = INT8_MIN;
	int32_t t80 = -16;

    t80 = (x321^((x322|x323)>x324));

    if (t80 != 233916) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = INT8_MIN;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = INT16_MIN;

    t81 = (x325^((x326|x327)>x328));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = INT16_MIN;
	volatile int8_t x330 = -1;
	static int32_t x331 = 1749735;
	uint8_t x332 = UINT8_MAX;

    t82 = (x329^((x330|x331)>x332));

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MAX;
	volatile uint64_t x334 = UINT64_MAX;
	static volatile int16_t x335 = -1;
	int32_t t83 = 1036493051;

    t83 = (x333^((x334|x335)>x336));

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 0;
	static int8_t x338 = 0;
	volatile int16_t x339 = INT16_MIN;
	static int32_t t84 = 956;

    t84 = (x337^((x338|x339)>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint64_t x341 = UINT64_MAX;
	uint32_t x342 = UINT32_MAX;
	int16_t x343 = 11983;
	static uint16_t x344 = 1291U;
	uint64_t t85 = 3871632477655069LLU;

    t85 = (x341^((x342|x343)>x344));

    if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = 1323629356139LL;
	int64_t x346 = INT64_MIN;
	volatile uint8_t x348 = 0U;
	volatile int64_t t86 = 5LL;

    t86 = (x345^((x346|x347)>x348));

    if (t86 != 1323629356139LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = -7;
	static int32_t x350 = 5159;
	volatile int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -1208;

    t87 = (x349^((x350|x351)>x352));

    if (t87 != -7) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x355 = INT16_MIN;
	volatile int32_t t88 = -1393283;

    t88 = (x353^((x354|x355)>x356));

    if (t88 != 125) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x358 = 130137880500479319LLU;
	static volatile int8_t x359 = INT8_MIN;
	static uint8_t x360 = 0U;
	int32_t t89 = -35178;

    t89 = (x357^((x358|x359)>x360));

    if (t89 != 6) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x361 = UINT64_MAX;
	int8_t x362 = 2;
	uint16_t x363 = 3466U;
	uint16_t x364 = 1U;
	volatile uint64_t t90 = 857LLU;

    t90 = (x361^((x362|x363)>x364));

    if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x365 = 18U;
	uint8_t x366 = UINT8_MAX;
	uint16_t x367 = 3U;
	uint32_t x368 = 30540569U;
	uint32_t t91 = 275U;

    t91 = (x365^((x366|x367)>x368));

    if (t91 != 18U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 3U;
	static volatile uint32_t x371 = 955367U;
	int64_t x372 = -502987955LL;
	volatile int32_t t92 = -45343118;

    t92 = (x369^((x370|x371)>x372));

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -217595LL;
	int8_t x374 = -1;
	int32_t x375 = INT32_MAX;
	static int64_t t93 = -64634912LL;

    t93 = (x373^((x374|x375)>x376));

    if (t93 != -217596LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 836U;
	int32_t x379 = 108;
	static uint64_t x380 = 13168556258475545LLU;
	volatile int32_t t94 = 533667859;

    t94 = (x377^((x378|x379)>x380));

    if (t94 != 837) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	int16_t x382 = 30;
	uint32_t x383 = 15U;
	int8_t x384 = -1;
	volatile int32_t t95 = -19544;

    t95 = (x381^((x382|x383)>x384));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 107U;
	int8_t x386 = INT8_MAX;
	uint64_t x387 = 34968431020850617LLU;
	int64_t x388 = INT64_MAX;
	volatile uint32_t t96 = 688088053U;

    t96 = (x385^((x386|x387)>x388));

    if (t96 != 107U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x390 = UINT64_MAX;
	static int32_t x391 = -1;
	static uint32_t t97 = 1657405426U;

    t97 = (x389^((x390|x391)>x392));

    if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 53U;
	int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	int8_t x396 = -1;

    t98 = (x393^((x394|x395)>x396));

    if (t98 != 53) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 10U;
	int16_t x398 = -218;
	int64_t x400 = -2157150LL;
	static volatile uint32_t t99 = 322U;

    t99 = (x397^((x398|x399)>x400));

    if (t99 != 11U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 5121U;
	uint32_t x402 = 1223U;
	static uint8_t x403 = UINT8_MAX;
	int32_t x404 = INT32_MIN;
	volatile int32_t t100 = 44923710;

    t100 = (x401^((x402|x403)>x404));

    if (t100 != 5121) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x406 = 149U;
	int8_t x407 = -38;
	int32_t t101 = -48363;

    t101 = (x405^((x406|x407)>x408));

    if (t101 != -2147483647) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 0U;
	uint16_t x410 = 6864U;
	volatile int16_t x411 = 1138;
	int32_t t102 = 412731;

    t102 = (x409^((x410|x411)>x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = UINT16_MAX;
	int8_t x414 = INT8_MAX;
	int64_t x415 = INT64_MIN;
	int32_t t103 = 675246;

    t103 = (x413^((x414|x415)>x416));

    if (t103 != 65535) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x418 = INT64_MAX;
	int64_t x419 = INT64_MIN;
	volatile int32_t t104 = 30;

    t104 = (x417^((x418|x419)>x420));

    if (t104 != -2) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 479492U;
	volatile uint8_t x423 = UINT8_MAX;
	int8_t x424 = INT8_MIN;
	uint32_t t105 = 7041292U;

    t105 = (x421^((x422|x423)>x424));

    if (t105 != 479493U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = -1;
	uint64_t x426 = 386272118655153052LLU;
	static uint32_t x427 = 90403U;
	uint64_t x428 = 28LLU;
	int32_t t106 = -427;

    t106 = (x425^((x426|x427)>x428));

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x431 = INT16_MAX;
	uint16_t x432 = UINT16_MAX;
	static volatile int32_t t107 = -414833408;

    t107 = (x429^((x430|x431)>x432));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x434 = 10342086U;
	int8_t x435 = 42;
	volatile uint32_t t108 = 15422436U;

    t108 = (x433^((x434|x435)>x436));

    if (t108 != 4294967294U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	uint8_t x438 = UINT8_MAX;
	uint16_t x439 = UINT16_MAX;
	uint64_t x440 = UINT64_MAX;
	static volatile int64_t t109 = INT64_MIN;

    t109 = (x437^((x438|x439)>x440));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -1;
	int64_t x442 = INT64_MIN;
	uint64_t x443 = 521438717483LLU;
	int32_t x444 = INT32_MIN;
	static int32_t t110 = -138504;

    t110 = (x441^((x442|x443)>x444));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	volatile int32_t x446 = INT32_MAX;
	int8_t x447 = 1;
	static int16_t x448 = -4919;
	volatile int32_t t111 = -76465;

    t111 = (x445^((x446|x447)>x448));

    if (t111 != -32767) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x449 = 167LL;
	int64_t x450 = INT64_MIN;
	int16_t x451 = -1;
	uint64_t x452 = 165020396135157214LLU;

    t112 = (x449^((x450|x451)>x452));

    if (t112 != 166LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	volatile uint32_t x454 = 512U;
	static volatile uint64_t x455 = 35446944870585370LLU;
	int32_t t113 = INT32_MAX;

    t113 = (x453^((x454|x455)>x456));

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 34874092379509LLU;
	int64_t x459 = -1859988LL;
	int16_t x460 = 0;
	volatile uint64_t t114 = 8133063316526LLU;

    t114 = (x457^((x458|x459)>x460));

    if (t114 != 34874092379508LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = INT64_MIN;
	int64_t x462 = -2126054LL;
	static uint64_t x463 = UINT64_MAX;
	int32_t x464 = INT32_MIN;
	volatile int64_t t115 = -6329LL;

    t115 = (x461^((x462|x463)>x464));

    if (t115 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = 14;
	uint32_t x467 = UINT32_MAX;
	static volatile int32_t t116 = 3062;

    t116 = (x465^((x466|x467)>x468));

    if (t116 != 15) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	static int32_t x470 = -1;
	int32_t x471 = -1;
	uint8_t x472 = 9U;

    t117 = (x469^((x470|x471)>x472));

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x474 = INT32_MIN;
	static uint64_t x475 = 151716LLU;
	int32_t x476 = INT32_MAX;
	volatile int32_t t118 = 328898962;

    t118 = (x473^((x474|x475)>x476));

    if (t118 != -2147483647) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = -1;
	uint64_t x478 = 1095384879620641523LLU;
	int16_t x479 = INT16_MIN;
	static int32_t t119 = 55;

    t119 = (x477^((x478|x479)>x480));

    if (t119 != -2) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x482 = 1;
	volatile int64_t x483 = INT64_MIN;
	int64_t x484 = INT64_MIN;
	volatile int32_t t120 = -1;

    t120 = (x481^((x482|x483)>x484));

    if (t120 != 2147483646) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x487 = INT32_MIN;
	uint64_t x488 = 3406405080LLU;
	static int32_t t121 = 44;

    t121 = (x485^((x486|x487)>x488));

    if (t121 != -127) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x490 = INT32_MIN;
	volatile uint32_t x491 = 9U;
	uint64_t t122 = 426LLU;

    t122 = (x489^((x490|x491)>x492));

    if (t122 != 5843859869750426LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x493 = 0U;
	static int16_t x494 = INT16_MIN;
	int32_t x495 = INT32_MIN;
	int64_t x496 = -1LL;

    t123 = (x493^((x494|x495)>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x499 = -16031518769155LL;
	int32_t x500 = INT32_MIN;
	volatile uint64_t t124 = 11252867843514LLU;

    t124 = (x497^((x498|x499)>x500));

    if (t124 != 1758384054480042156LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 37;
	int8_t x502 = INT8_MIN;
	int16_t x503 = -1;
	int16_t x504 = INT16_MAX;
	int32_t t125 = -282920657;

    t125 = (x501^((x502|x503)>x504));

    if (t125 != 37) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x505 = 12688U;
	static uint32_t x506 = 671441942U;
	int8_t x508 = 59;
	volatile uint32_t t126 = 16016U;

    t126 = (x505^((x506|x507)>x508));

    if (t126 != 12689U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -1506;
	static volatile uint32_t x510 = 4U;
	int32_t x511 = INT32_MIN;
	uint32_t x512 = 969U;
	int32_t t127 = -10;

    t127 = (x509^((x510|x511)>x512));

    if (t127 != -1505) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 11U;
	static volatile int8_t x514 = -1;
	int64_t x516 = 542744891224LL;
	volatile int32_t t128 = -1481;

    t128 = (x513^((x514|x515)>x516));

    if (t128 != 11) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x518 = INT16_MIN;
	int8_t x519 = -30;
	int16_t x520 = INT16_MIN;
	volatile int32_t t129 = -58196;

    t129 = (x517^((x518|x519)>x520));

    if (t129 != -11858) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = UINT8_MAX;
	uint32_t x522 = 3740U;
	static uint16_t x523 = UINT16_MAX;
	static int16_t x524 = INT16_MIN;
	int32_t t130 = 0;

    t130 = (x521^((x522|x523)>x524));

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = 50;
	static int16_t x526 = INT16_MIN;
	int16_t x528 = INT16_MIN;
	static volatile int32_t t131 = -1;

    t131 = (x525^((x526|x527)>x528));

    if (t131 != 51) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	static int32_t x530 = -26;
	uint8_t x531 = 2U;
	int32_t t132 = -7;

    t132 = (x529^((x530|x531)>x532));

    if (t132 != -128) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1660;
	int16_t x534 = INT16_MIN;
	int64_t x535 = INT64_MIN;
	int16_t x536 = INT16_MIN;

    t133 = (x533^((x534|x535)>x536));

    if (t133 != -1660) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x537 = 16345U;
	uint32_t x538 = 628318257U;
	static int32_t x539 = INT32_MIN;
	int32_t t134 = 1;

    t134 = (x537^((x538|x539)>x540));

    if (t134 != 16345) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x541 = INT8_MAX;
	int64_t x542 = INT64_MAX;
	int8_t x544 = -1;
	int32_t t135 = -20995702;

    t135 = (x541^((x542|x543)>x544));

    if (t135 != 126) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 261LL;
	volatile int32_t x547 = INT32_MIN;
	int8_t x548 = INT8_MAX;
	volatile int64_t t136 = 1LL;

    t136 = (x545^((x546|x547)>x548));

    if (t136 != 261LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	int64_t x550 = -1LL;
	uint16_t x552 = UINT16_MAX;
	static volatile int32_t t137 = -8472241;

    t137 = (x549^((x550|x551)>x552));

    if (t137 != -2) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = 1;
	uint8_t x555 = 0U;
	int32_t x556 = -211490;
	volatile int32_t t138 = 44560428;

    t138 = (x553^((x554|x555)>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x557 = 1;
	int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MIN;
	static int32_t t139 = 9;

    t139 = (x557^((x558|x559)>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = INT32_MIN;
	int32_t x563 = 0;
	static int32_t x564 = INT32_MIN;

    t140 = (x561^((x562|x563)>x564));

    if (t140 != 10) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = 365;
	int64_t x566 = -38189798228900LL;
	int8_t x567 = -1;
	int16_t x568 = INT16_MAX;
	int32_t t141 = 0;

    t141 = (x565^((x566|x567)>x568));

    if (t141 != 365) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = -1;
	static uint32_t x570 = UINT32_MAX;
	volatile int64_t x572 = INT64_MAX;

    t142 = (x569^((x570|x571)>x572));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	int32_t x575 = INT32_MIN;
	int8_t x576 = -1;

    t143 = (x573^((x574|x575)>x576));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x577 = INT32_MIN;
	volatile uint32_t x578 = 98665134U;
	uint64_t x579 = UINT64_MAX;
	static volatile int32_t t144 = INT32_MIN;

    t144 = (x577^((x578|x579)>x580));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = 6;
	int64_t x582 = INT64_MAX;
	uint16_t x583 = 946U;
	int64_t x584 = INT64_MAX;
	int32_t t145 = -108669813;

    t145 = (x581^((x582|x583)>x584));

    if (t145 != 6) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -3498;
	volatile int32_t x586 = -652142213;
	volatile int16_t x588 = INT16_MIN;

    t146 = (x585^((x586|x587)>x588));

    if (t146 != -3498) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	static int16_t x590 = 1;
	uint32_t x591 = 1075389U;
	uint16_t x592 = 0U;
	volatile int32_t t147 = 1;

    t147 = (x589^((x590|x591)>x592));

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = -2159118;
	int64_t x594 = INT64_MIN;
	int64_t x595 = INT64_MIN;

    t148 = (x593^((x594|x595)>x596));

    if (t148 != -2159118) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = INT64_MIN;
	int16_t x598 = -1;
	volatile int8_t x599 = INT8_MAX;

    t149 = (x597^((x598|x599)>x600));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 298206154U;
	static volatile int64_t x602 = INT64_MIN;
	static int16_t x603 = INT16_MIN;
	int32_t x604 = 1256;

    t150 = (x601^((x602|x603)>x604));

    if (t150 != 298206154U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x606 = 23265U;
	static int64_t x607 = INT64_MIN;
	uint64_t x608 = 143917236713566882LLU;
	int32_t t151 = -124276533;

    t151 = (x605^((x606|x607)>x608));

    if (t151 != 65534) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	int32_t x610 = -1597;
	int32_t x611 = INT32_MIN;
	static int64_t x612 = INT64_MAX;
	volatile int32_t t152 = INT32_MIN;

    t152 = (x609^((x610|x611)>x612));

    if (t152 != INT32_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = INT8_MAX;
	int8_t x614 = -5;
	uint8_t x615 = 6U;
	int32_t x616 = INT32_MIN;
	int32_t t153 = 1;

    t153 = (x613^((x614|x615)>x616));

    if (t153 != 126) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = INT16_MIN;
	int32_t x618 = INT32_MIN;
	int32_t x619 = 90;
	int32_t x620 = INT32_MIN;
	volatile int32_t t154 = -62;

    t154 = (x617^((x618|x619)>x620));

    if (t154 != -32767) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = INT16_MIN;
	uint32_t x622 = 603390U;
	uint32_t x623 = 7U;
	int8_t x624 = INT8_MIN;
	volatile int32_t t155 = -61;

    t155 = (x621^((x622|x623)>x624));

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 590494U;
	uint8_t x626 = 15U;
	uint8_t x627 = 4U;
	static uint8_t x628 = 104U;
	static volatile uint32_t t156 = 1U;

    t156 = (x625^((x626|x627)>x628));

    if (t156 != 590494U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = UINT32_MAX;
	static int64_t x632 = -8525167511035LL;
	volatile uint32_t t157 = 2U;

    t157 = (x629^((x630|x631)>x632));

    if (t157 != 4294967294U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = -7;
	static int32_t x635 = -1;
	int64_t x636 = INT64_MIN;

    t158 = (x633^((x634|x635)>x636));

    if (t158 != 32766) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x637 = 178U;
	int16_t x638 = INT16_MIN;
	uint32_t x639 = UINT32_MAX;
	uint8_t x640 = UINT8_MAX;
	volatile int32_t t159 = -55731662;

    t159 = (x637^((x638|x639)>x640));

    if (t159 != 179) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = -1;
	int16_t x643 = INT16_MIN;
	uint8_t x644 = 0U;
	static volatile int32_t t160 = 0;

    t160 = (x641^((x642|x643)>x644));

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 79U;
	uint16_t x646 = 211U;
	static uint16_t x647 = 3U;
	static volatile int64_t x648 = 3096489713186LL;
	volatile int32_t t161 = 19840;

    t161 = (x645^((x646|x647)>x648));

    if (t161 != 79) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1;
	uint16_t x650 = UINT16_MAX;
	int32_t x651 = INT32_MAX;
	static int8_t x652 = -55;
	int32_t t162 = -25;

    t162 = (x649^((x650|x651)>x652));

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x655 = INT16_MIN;
	int8_t x656 = INT8_MIN;
	int64_t t163 = 1520079566LL;

    t163 = (x653^((x654|x655)>x656));

    if (t163 != 132442401440686668LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 1;
	int32_t x658 = INT32_MAX;
	int64_t x659 = INT64_MIN;
	int64_t x660 = INT64_MAX;
	volatile int32_t t164 = 2;

    t164 = (x657^((x658|x659)>x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x662 = -2002544535792LL;
	static int16_t x663 = INT16_MIN;

    t165 = (x661^((x662|x663)>x664));

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x666 = -712;
	uint32_t x667 = UINT32_MAX;
	int32_t x668 = INT32_MAX;

    t166 = (x665^((x666|x667)>x668));

    if (t166 != -3946) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	volatile int64_t x670 = -219837773LL;
	static uint8_t x671 = UINT8_MAX;
	uint16_t x672 = 18U;

    t167 = (x669^((x670|x671)>x672));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int32_t x674 = INT32_MIN;
	uint16_t x675 = 50U;
	static uint64_t x676 = UINT64_MAX;

    t168 = (x673^((x674|x675)>x676));

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = INT32_MIN;
	static volatile uint16_t x678 = 4546U;
	int32_t x679 = -54119;
	static int16_t x680 = INT16_MIN;
	volatile int32_t t169 = INT32_MIN;

    t169 = (x677^((x678|x679)>x680));

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = 43;
	static int32_t x682 = 184755753;
	uint32_t x683 = 0U;
	int64_t x684 = -198652740547061LL;
	volatile int32_t t170 = -418;

    t170 = (x681^((x682|x683)>x684));

    if (t170 != 42) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = INT32_MIN;
	int32_t x686 = INT32_MIN;
	int16_t x687 = INT16_MAX;
	volatile int64_t x688 = 65288308415291958LL;
	volatile int32_t t171 = INT32_MIN;

    t171 = (x685^((x686|x687)>x688));

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x690 = UINT16_MAX;
	volatile uint8_t x691 = UINT8_MAX;
	int32_t t172 = -421;

    t172 = (x689^((x690|x691)>x692));

    if (t172 != 254) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 9850;
	uint8_t x694 = 81U;
	int16_t x695 = INT16_MIN;
	volatile int32_t t173 = -24117;

    t173 = (x693^((x694|x695)>x696));

    if (t173 != 9851) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = INT16_MIN;
	uint8_t x698 = 80U;
	volatile int64_t x699 = INT64_MIN;
	static int32_t t174 = -1;

    t174 = (x697^((x698|x699)>x700));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 1880U;
	int16_t x702 = -14;
	static volatile int16_t x703 = -1;
	int16_t x704 = INT16_MIN;
	int32_t t175 = 0;

    t175 = (x701^((x702|x703)>x704));

    if (t175 != 1881) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = -11669981068LL;
	int64_t x707 = -66170420646LL;
	uint16_t x708 = UINT16_MAX;
	volatile int32_t t176 = 257584696;

    t176 = (x705^((x706|x707)>x708));

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = -1LL;
	uint64_t x711 = UINT64_MAX;
	static int32_t x712 = INT32_MIN;

    t177 = (x709^((x710|x711)>x712));

    if (t177 != -2LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = 15975139;
	int64_t x715 = -6482113009918LL;
	int64_t x716 = -1LL;
	int32_t t178 = 46879873;

    t178 = (x713^((x714|x715)>x716));

    if (t178 != 15975139) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x717 = UINT16_MAX;
	int16_t x718 = -6679;
	uint16_t x719 = 7581U;
	int32_t t179 = 35413;

    t179 = (x717^((x718|x719)>x720));

    if (t179 != 65535) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = INT8_MIN;
	volatile int16_t x722 = -1045;
	static uint32_t x723 = 2233155U;
	int16_t x724 = INT16_MIN;

    t180 = (x721^((x722|x723)>x724));

    if (t180 != -127) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = INT16_MIN;
	int8_t x727 = INT8_MIN;
	uint16_t x728 = UINT16_MAX;
	int32_t t181 = 3819;

    t181 = (x725^((x726|x727)>x728));

    if (t181 != -10) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	uint8_t x730 = UINT8_MAX;
	uint8_t x731 = 62U;
	uint8_t x732 = 51U;
	int32_t t182 = -665;

    t182 = (x729^((x730|x731)>x732));

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -1;
	static uint8_t x734 = 1U;
	static volatile int64_t x735 = -15550844566LL;
	uint64_t x736 = 2691LLU;
	int32_t t183 = -166;

    t183 = (x733^((x734|x735)>x736));

    if (t183 != -2) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x738 = UINT32_MAX;
	static int16_t x739 = INT16_MAX;
	int32_t x740 = INT32_MAX;
	int64_t t184 = -78321594LL;

    t184 = (x737^((x738|x739)>x740));

    if (t184 != -6LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = INT32_MIN;
	static int64_t x743 = -1LL;
	int16_t x744 = -1;
	static volatile int64_t t185 = INT64_MAX;

    t185 = (x741^((x742|x743)>x744));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	int64_t x747 = INT64_MIN;
	int32_t x748 = 4977627;

    t186 = (x745^((x746|x747)>x748));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x749 = UINT8_MAX;
	int16_t x751 = 2;
	static int64_t x752 = INT64_MIN;
	int32_t t187 = 3807;

    t187 = (x749^((x750|x751)>x752));

    if (t187 != 254) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	int32_t x754 = INT32_MAX;
	uint64_t x755 = UINT64_MAX;
	uint16_t x756 = UINT16_MAX;
	volatile uint32_t t188 = 123908031U;

    t188 = (x753^((x754|x755)>x756));

    if (t188 != 4294967294U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = UINT16_MAX;
	volatile int64_t x759 = 526144421930523001LL;
	int16_t x760 = INT16_MAX;
	static volatile int32_t t189 = -42009651;

    t189 = (x757^((x758|x759)>x760));

    if (t189 != 65534) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 656LL;
	int16_t x763 = -1;

    t190 = (x761^((x762|x763)>x764));

    if (t190 != 657LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	int32_t x766 = INT32_MAX;
	int8_t x767 = -1;
	static volatile int64_t x768 = INT64_MIN;

    t191 = (x765^((x766|x767)>x768));

    if (t191 != 126) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MAX;
	static uint16_t x771 = UINT16_MAX;
	static int32_t x772 = INT32_MIN;
	static int32_t t192 = -1773;

    t192 = (x769^((x770|x771)>x772));

    if (t192 != 2147483646) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = -35;
	int8_t x774 = -1;
	int32_t x775 = INT32_MAX;
	int64_t x776 = INT64_MAX;
	static int32_t t193 = 0;

    t193 = (x773^((x774|x775)>x776));

    if (t193 != -35) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 184341401U;
	uint8_t x778 = 27U;
	volatile int16_t x779 = 0;
	int8_t x780 = 1;

    t194 = (x777^((x778|x779)>x780));

    if (t194 != 184341400U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 0U;
	int16_t x782 = -1;
	uint16_t x783 = 347U;
	volatile int8_t x784 = INT8_MAX;

    t195 = (x781^((x782|x783)>x784));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = -22;
	uint8_t x786 = 0U;
	static int64_t x787 = INT64_MIN;
	int32_t x788 = 30689;
	volatile int32_t t196 = 361076939;

    t196 = (x785^((x786|x787)>x788));

    if (t196 != -22) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 15U;
	int32_t x790 = INT32_MIN;
	int64_t x791 = INT64_MIN;
	static uint32_t t197 = 1U;

    t197 = (x789^((x790|x791)>x792));

    if (t197 != 15U) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint32_t x793 = 9650465U;
	int32_t x794 = INT32_MIN;
	static int32_t x795 = -285755;
	int32_t x796 = -1;

    t198 = (x793^((x794|x795)>x796));

    if (t198 != 9650465U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	volatile int8_t x799 = 5;
	int64_t x800 = INT64_MIN;
	int32_t t199 = 2391;

    t199 = (x797^((x798|x799)>x800));

    if (t199 != 2147483646) { NG(); } else { ; }
	
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

