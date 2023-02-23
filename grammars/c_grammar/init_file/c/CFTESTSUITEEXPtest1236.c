
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

int8_t x2 = -3;
int32_t x9 = INT32_MIN;
volatile int64_t x12 = INT64_MIN;
volatile int64_t t1 = 501LL;
volatile int32_t x18 = 52190;
volatile uint64_t x19 = 284138937776629741LLU;
uint32_t t4 = 12U;
volatile int64_t t5 = 419914LL;
int64_t x39 = INT64_MIN;
static int64_t x45 = -1LL;
int16_t x47 = INT16_MIN;
volatile uint8_t x48 = 14U;
volatile int64_t t8 = 1010439965192LL;
int8_t x51 = INT8_MIN;
volatile uint64_t t9 = 8579755720892437LLU;
static int16_t x61 = -6;
int32_t x62 = -452;
static volatile uint8_t x69 = 49U;
volatile int16_t x71 = INT16_MIN;
uint64_t x72 = 2383238LLU;
static int64_t x74 = INT64_MAX;
volatile int32_t x82 = -1;
static int64_t x85 = INT64_MIN;
int64_t x95 = INT64_MAX;
static volatile int32_t t18 = 49918648;
int16_t x110 = INT16_MAX;
int16_t x111 = INT16_MIN;
int32_t x115 = 7955213;
volatile int8_t x121 = INT8_MIN;
int32_t t25 = 177103975;
uint8_t x137 = 0U;
int16_t x140 = INT16_MAX;
int32_t t28 = -14;
uint32_t t30 = 23U;
static int32_t x166 = -625890110;
volatile int64_t x193 = INT64_MAX;
static int8_t x197 = -1;
int64_t x201 = INT64_MIN;
int16_t x208 = INT16_MIN;
volatile int8_t x209 = -1;
int32_t x210 = -1;
int64_t x218 = INT64_MIN;
static uint32_t x219 = 0U;
int64_t t41 = 1LL;
static int32_t x235 = 716820406;
int32_t x238 = -934651;
volatile uint32_t x243 = 38U;
volatile uint64_t t45 = UINT64_MAX;
int64_t x249 = -1LL;
static int8_t x252 = 36;
int64_t t46 = 7301LL;
static volatile int8_t x266 = -1;
volatile int32_t x276 = 990;
static volatile int16_t x279 = INT16_MIN;
int8_t x280 = INT8_MIN;
int32_t x283 = INT32_MAX;
uint32_t t51 = 401U;
volatile int32_t t54 = 6878946;
uint64_t x320 = UINT64_MAX;
volatile int16_t x321 = 0;
int32_t t60 = -459433;
static int16_t x325 = 3;
int8_t x334 = -1;
int32_t x351 = INT32_MIN;
int8_t x357 = -3;
int32_t t65 = 73350;
int16_t x369 = INT16_MIN;
int64_t t68 = -308761017674LL;
uint32_t x380 = UINT32_MAX;
uint32_t t69 = 239042209U;
static int32_t x381 = INT32_MAX;
static uint64_t x383 = UINT64_MAX;
uint64_t x384 = UINT64_MAX;
int16_t x393 = 542;
static int16_t x396 = -1248;
int64_t x412 = -756779765505LL;
uint32_t x417 = UINT32_MAX;
volatile uint64_t x418 = 7LLU;
volatile int32_t t77 = 1159324;
static uint8_t x425 = 7U;
static int8_t x432 = 4;
uint16_t x441 = 4U;
volatile int8_t x443 = 0;
int8_t x451 = INT8_MIN;
static volatile uint16_t x453 = 2U;
int64_t x454 = INT64_MAX;
static volatile uint64_t x456 = 903459436962065LLU;
volatile uint64_t t84 = 4099234326406LLU;
int32_t x463 = 609965198;
static volatile uint8_t x464 = UINT8_MAX;
int32_t x465 = -1;
int8_t x468 = -14;
static volatile int32_t x470 = INT32_MIN;
int32_t t87 = INT32_MAX;
static int64_t x475 = INT64_MIN;
uint16_t x487 = UINT16_MAX;
volatile int32_t x492 = INT32_MIN;
int16_t x502 = -78;
uint64_t x514 = 661220LLU;
volatile int8_t x519 = INT8_MAX;
int64_t x528 = INT64_MIN;
int8_t x537 = INT8_MIN;
static volatile int32_t x550 = INT32_MIN;
int16_t x566 = 1739;
static int32_t x569 = -1;
volatile int8_t x570 = -8;
int64_t x572 = 39445264LL;
static uint16_t x574 = 99U;
volatile int32_t t110 = 194;
int32_t x578 = 14644;
volatile int32_t t111 = 17705740;
volatile int32_t t112 = 693095465;
int8_t x585 = INT8_MAX;
static volatile uint8_t x601 = 1U;
int16_t x611 = INT16_MAX;
uint16_t x614 = 18247U;
volatile uint64_t t118 = 536890079457815LLU;
uint16_t x621 = UINT16_MAX;
int32_t x622 = 936;
int16_t x631 = INT16_MIN;
uint16_t x632 = 2U;
uint32_t t123 = 23373U;
int32_t t125 = -7869382;
int8_t x653 = INT8_MAX;
static uint64_t x655 = UINT64_MAX;
static uint8_t x658 = UINT8_MAX;
int8_t x659 = -16;
uint8_t x669 = 99U;
uint32_t x670 = 50U;
static int32_t x671 = INT32_MAX;
int32_t t131 = 20370;
int32_t x681 = INT32_MIN;
volatile int32_t t133 = INT32_MIN;
static int64_t x690 = INT64_MAX;
static volatile int64_t x693 = -57651911012975LL;
volatile int32_t x694 = -1;
int32_t x703 = INT32_MIN;
int64_t x704 = 1591415760274260627LL;
static int64_t t137 = INT64_MIN;
static uint16_t x715 = UINT16_MAX;
int16_t x718 = 54;
uint32_t x726 = UINT32_MAX;
volatile uint32_t x728 = UINT32_MAX;
int32_t x736 = -586;
static int64_t x750 = -2LL;
uint64_t t148 = 4LLU;
volatile int16_t x768 = INT16_MIN;
int16_t x778 = INT16_MIN;
static volatile uint32_t x782 = UINT32_MAX;
int16_t x798 = -6;
int8_t x802 = -55;
int16_t x814 = INT16_MAX;
int64_t x815 = INT64_MIN;
int16_t x820 = INT16_MAX;
volatile int32_t x822 = INT32_MIN;
int32_t x823 = 420;
static int32_t x824 = 1475;
int64_t x828 = INT64_MIN;
static uint64_t x832 = 5474887495530401LLU;
volatile int64_t x844 = INT64_MAX;
int8_t x853 = INT8_MIN;
static int8_t x855 = -1;
int32_t t174 = 6;
uint32_t x868 = 3U;
int32_t x871 = 93;
volatile int32_t x883 = 360732823;
int8_t x884 = INT8_MIN;
int32_t x887 = -1;
volatile int32_t x889 = -1;
int8_t x891 = INT8_MIN;
uint64_t x895 = UINT64_MAX;
int8_t x896 = 61;
volatile uint32_t x899 = 130353U;
int32_t x903 = 2611;
volatile int32_t t186 = 369469802;
volatile int32_t x923 = 959;
uint16_t x928 = 1545U;
static int64_t x929 = 994LL;
static uint32_t x930 = UINT32_MAX;
volatile int16_t x931 = -12;
static volatile uint32_t t190 = 3792U;
static int8_t x938 = -39;
int64_t x939 = -1LL;
volatile int32_t x956 = INT32_MAX;
volatile int8_t x960 = INT8_MIN;
static int8_t x962 = -1;
static uint8_t x963 = 50U;
static int32_t x971 = 1;
volatile int64_t t198 = 9LL;
uint8_t x983 = 3U;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	volatile int64_t x3 = INT64_MAX;
	static int64_t x4 = INT64_MIN;
	volatile int64_t t0 = INT64_MIN;

    t0 = (x1/((x2!=x3)%x4));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x10 = INT8_MAX;
	volatile int8_t x11 = -14;

    t1 = (x9/((x10!=x11)%x12));

    if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MAX;
	static int64_t x14 = INT64_MIN;
	int32_t x15 = -6;
	uint8_t x16 = UINT8_MAX;
	volatile int64_t t2 = INT64_MAX;

    t2 = (x13/((x14!=x15)%x16));

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = -1;
	int64_t x20 = INT64_MIN;
	static volatile int64_t t3 = 3966656LL;

    t3 = (x17/((x18!=x19)%x20));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 54511942U;
	volatile int16_t x22 = INT16_MIN;
	uint32_t x23 = 11U;
	int8_t x24 = INT8_MAX;

    t4 = (x21/((x22!=x23)%x24));

    if (t4 != 54511942U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -1LL;
	volatile int32_t x26 = -1;
	volatile int8_t x27 = INT8_MIN;
	int64_t x28 = INT64_MIN;

    t5 = (x25/((x26!=x27)%x28));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -3;
	static int8_t x30 = -1;
	int64_t x31 = INT64_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 1124;

    t6 = (x29/((x30!=x31)%x32));

    if (t6 != -3) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x37 = UINT32_MAX;
	uint16_t x38 = 0U;
	volatile int16_t x40 = INT16_MIN;
	uint32_t t7 = UINT32_MAX;

    t7 = (x37/((x38!=x39)%x40));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x46 = INT32_MAX;

    t8 = (x45/((x46!=x47)%x48));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x49 = 9042935LLU;
	int64_t x50 = -1LL;
	volatile int8_t x52 = -9;

    t9 = (x49/((x50!=x51)%x52));

    if (t9 != 9042935LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MAX;
	static volatile int64_t x59 = -1LL;
	static uint8_t x60 = 99U;
	volatile int32_t t10 = 46455686;

    t10 = (x57/((x58!=x59)%x60));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x63 = -1;
	static uint16_t x64 = UINT16_MAX;
	int32_t t11 = -1175395;

    t11 = (x61/((x62!=x63)%x64));

    if (t11 != -6) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x70 = 1009696724554LLU;
	volatile uint64_t t12 = 199274LLU;

    t12 = (x69/((x70!=x71)%x72));

    if (t12 != 49LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x73 = INT64_MIN;
	int16_t x75 = -210;
	static uint32_t x76 = 720764051U;
	static volatile int64_t t13 = INT64_MIN;

    t13 = (x73/((x74!=x75)%x76));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x81 = 27U;
	int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MAX;
	volatile int64_t t14 = 291823LL;

    t14 = (x81/((x82!=x83)%x84));

    if (t14 != 27LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x86 = 15U;
	int8_t x87 = 38;
	int16_t x88 = INT16_MIN;
	volatile int64_t t15 = INT64_MIN;

    t15 = (x85/((x86!=x87)%x88));

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x89 = UINT8_MAX;
	volatile uint8_t x90 = UINT8_MAX;
	volatile int8_t x91 = INT8_MAX;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t16 = -47204;

    t16 = (x89/((x90!=x91)%x92));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x93 = UINT32_MAX;
	int32_t x94 = -1;
	int32_t x96 = INT32_MIN;
	uint32_t t17 = UINT32_MAX;

    t17 = (x93/((x94!=x95)%x96));

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x101 = INT16_MIN;
	int64_t x102 = -89555761323804LL;
	int8_t x103 = INT8_MAX;
	int8_t x104 = INT8_MAX;

    t18 = (x101/((x102!=x103)%x104));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x105 = 44LLU;
	int8_t x106 = INT8_MIN;
	static uint8_t x107 = UINT8_MAX;
	volatile uint8_t x108 = UINT8_MAX;
	volatile uint64_t t19 = 27917LLU;

    t19 = (x105/((x106!=x107)%x108));

    if (t19 != 44LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x109 = UINT16_MAX;
	volatile int16_t x112 = -1063;
	int32_t t20 = -33186417;

    t20 = (x109/((x110!=x111)%x112));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x113 = UINT8_MAX;
	int8_t x114 = INT8_MAX;
	int32_t x116 = 65;
	volatile int32_t t21 = 0;

    t21 = (x113/((x114!=x115)%x116));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x117 = -1;
	int16_t x118 = 8;
	volatile uint16_t x119 = 281U;
	static uint64_t x120 = UINT64_MAX;
	uint64_t t22 = UINT64_MAX;

    t22 = (x117/((x118!=x119)%x120));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x122 = 257;
	static volatile int8_t x123 = 1;
	volatile int16_t x124 = INT16_MIN;
	static volatile int32_t t23 = 147;

    t23 = (x121/((x122!=x123)%x124));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x125 = 1U;
	int8_t x126 = -1;
	uint16_t x127 = UINT16_MAX;
	static uint32_t x128 = 734190807U;
	uint32_t t24 = 1U;

    t24 = (x125/((x126!=x127)%x128));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x133 = 0;
	uint8_t x134 = 12U;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = 14;

    t25 = (x133/((x134!=x135)%x136));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MIN;
	int32_t t26 = -12;

    t26 = (x137/((x138!=x139)%x140));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x145 = 21U;
	int16_t x146 = INT16_MIN;
	static int8_t x147 = -1;
	int64_t x148 = INT64_MAX;
	volatile int64_t t27 = -2LL;

    t27 = (x145/((x146!=x147)%x148));

    if (t27 != 21LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	volatile int32_t x155 = INT32_MAX;
	int16_t x156 = INT16_MIN;

    t28 = (x153/((x154!=x155)%x156));

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x157 = INT32_MAX;
	uint16_t x158 = 87U;
	int8_t x159 = -1;
	int8_t x160 = INT8_MIN;
	volatile int32_t t29 = INT32_MAX;

    t29 = (x157/((x158!=x159)%x160));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x161 = 2;
	static int8_t x162 = 1;
	static int64_t x163 = 374544197530289907LL;
	uint32_t x164 = UINT32_MAX;

    t30 = (x161/((x162!=x163)%x164));

    if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x165 = INT64_MIN;
	uint64_t x167 = 1219232751066064LLU;
	uint16_t x168 = 4U;
	int64_t t31 = INT64_MIN;

    t31 = (x165/((x166!=x167)%x168));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x177 = 177LL;
	volatile int8_t x178 = -2;
	int32_t x179 = INT32_MIN;
	volatile uint16_t x180 = 88U;
	static volatile int64_t t32 = -66037206111876024LL;

    t32 = (x177/((x178!=x179)%x180));

    if (t32 != 177LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x181 = 152U;
	volatile int8_t x182 = INT8_MIN;
	static uint32_t x183 = 2167U;
	volatile uint64_t x184 = UINT64_MAX;
	uint64_t t33 = 120977609707920LLU;

    t33 = (x181/((x182!=x183)%x184));

    if (t33 != 152LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x194 = 432215069LLU;
	uint16_t x195 = UINT16_MAX;
	uint64_t x196 = UINT64_MAX;
	static volatile uint64_t t34 = 69979334249257LLU;

    t34 = (x193/((x194!=x195)%x196));

    if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x198 = -1LL;
	volatile uint16_t x199 = UINT16_MAX;
	static int16_t x200 = 10994;
	int32_t t35 = -2689;

    t35 = (x197/((x198!=x199)%x200));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x202 = INT8_MIN;
	volatile int64_t x203 = INT64_MIN;
	int16_t x204 = -30;
	volatile int64_t t36 = INT64_MIN;

    t36 = (x201/((x202!=x203)%x204));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x205 = INT8_MIN;
	int16_t x206 = -1;
	int64_t x207 = INT64_MIN;
	static int32_t t37 = 149;

    t37 = (x205/((x206!=x207)%x208));

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x211 = INT64_MIN;
	static volatile int64_t x212 = 25LL;
	int64_t t38 = -54LL;

    t38 = (x209/((x210!=x211)%x212));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x213 = UINT64_MAX;
	uint16_t x214 = 978U;
	int16_t x215 = INT16_MIN;
	volatile int32_t x216 = -217706141;
	uint64_t t39 = UINT64_MAX;

    t39 = (x213/((x214!=x215)%x216));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x217 = -6916;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t40 = -197270265;

    t40 = (x217/((x218!=x219)%x220));

    if (t40 != -6916) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x221 = UINT8_MAX;
	volatile uint16_t x222 = 0U;
	uint32_t x223 = 785010147U;
	int64_t x224 = INT64_MIN;

    t41 = (x221/((x222!=x223)%x224));

    if (t41 != 255LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x225 = 29U;
	int8_t x226 = INT8_MAX;
	int16_t x227 = -7341;
	static volatile int64_t x228 = INT64_MIN;
	volatile int64_t t42 = -5LL;

    t42 = (x225/((x226!=x227)%x228));

    if (t42 != 29LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x233 = INT32_MIN;
	volatile int32_t x234 = INT32_MIN;
	uint32_t x236 = 26281U;
	static volatile uint32_t t43 = 2U;

    t43 = (x233/((x234!=x235)%x236));

    if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x237 = -1LL;
	uint8_t x239 = 5U;
	volatile uint32_t x240 = 13U;
	int64_t t44 = -1178788106781212274LL;

    t44 = (x237/((x238!=x239)%x240));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = UINT8_MAX;
	int32_t x244 = INT32_MAX;

    t45 = (x241/((x242!=x243)%x244));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x250 = 1;
	static uint64_t x251 = 8089029LLU;

    t46 = (x249/((x250!=x251)%x252));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x253 = 63U;
	static volatile int32_t x254 = INT32_MAX;
	static int64_t x255 = INT64_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t47 = 1118591;

    t47 = (x253/((x254!=x255)%x256));

    if (t47 != 63) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x265 = -1;
	int16_t x267 = INT16_MIN;
	static int64_t x268 = INT64_MIN;
	volatile int64_t t48 = -248055565352762677LL;

    t48 = (x265/((x266!=x267)%x268));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x273 = -1;
	volatile int32_t x274 = -4;
	uint32_t x275 = UINT32_MAX;
	volatile int32_t t49 = -1368943;

    t49 = (x273/((x274!=x275)%x276));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint8_t x277 = 3U;
	int64_t x278 = -1LL;
	int32_t t50 = 343;

    t50 = (x277/((x278!=x279)%x280));

    if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x281 = INT16_MAX;
	volatile int64_t x282 = INT64_MIN;
	uint32_t x284 = 3U;

    t51 = (x281/((x282!=x283)%x284));

    if (t51 != 32767U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x285 = 51934289035LLU;
	volatile int16_t x286 = INT16_MAX;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = INT64_MIN;
	volatile uint64_t t52 = 1400324LLU;

    t52 = (x285/((x286!=x287)%x288));

    if (t52 != 51934289035LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x289 = -30359575;
	uint8_t x290 = 30U;
	int32_t x291 = INT32_MAX;
	static int64_t x292 = 14109134916756LL;
	int64_t t53 = 4501LL;

    t53 = (x289/((x290!=x291)%x292));

    if (t53 != -30359575LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x293 = 1U;
	uint64_t x294 = UINT64_MAX;
	volatile int64_t x295 = INT64_MAX;
	int16_t x296 = INT16_MAX;

    t54 = (x293/((x294!=x295)%x296));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x297 = 43;
	int8_t x298 = -39;
	int32_t x299 = 25;
	int64_t x300 = INT64_MIN;
	int64_t t55 = -14LL;

    t55 = (x297/((x298!=x299)%x300));

    if (t55 != 43LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x301 = 4060490509882822321LLU;
	static int8_t x302 = INT8_MIN;
	static uint16_t x303 = UINT16_MAX;
	static int32_t x304 = INT32_MIN;
	uint64_t t56 = 28243411944LLU;

    t56 = (x301/((x302!=x303)%x304));

    if (t56 != 4060490509882822321LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x305 = 70LLU;
	int8_t x306 = 1;
	static uint64_t x307 = UINT64_MAX;
	int16_t x308 = INT16_MIN;
	uint64_t t57 = 14497378501LLU;

    t57 = (x305/((x306!=x307)%x308));

    if (t57 != 70LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x309 = UINT32_MAX;
	static int64_t x310 = -605015LL;
	uint8_t x311 = 9U;
	uint16_t x312 = 292U;
	static uint32_t t58 = UINT32_MAX;

    t58 = (x309/((x310!=x311)%x312));

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x317 = INT32_MAX;
	int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MIN;
	volatile uint64_t t59 = 118110LLU;

    t59 = (x317/((x318!=x319)%x320));

    if (t59 != 2147483647LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x322 = INT64_MAX;
	int8_t x323 = INT8_MIN;
	int16_t x324 = 9792;

    t60 = (x321/((x322!=x323)%x324));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x326 = INT64_MIN;
	int32_t x327 = 614;
	int16_t x328 = 12;
	int32_t t61 = -184;

    t61 = (x325/((x326!=x327)%x328));

    if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x333 = -22;
	int16_t x335 = INT16_MAX;
	static volatile uint32_t x336 = 3U;
	volatile uint32_t t62 = 941U;

    t62 = (x333/((x334!=x335)%x336));

    if (t62 != 4294967274U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x349 = UINT16_MAX;
	static int32_t x350 = -1;
	int32_t x352 = -104994782;
	int32_t t63 = -23789725;

    t63 = (x349/((x350!=x351)%x352));

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x358 = 2;
	uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 81U;
	static volatile int32_t t64 = -127878438;

    t64 = (x357/((x358!=x359)%x360));

    if (t64 != -3) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x361 = INT16_MIN;
	static int16_t x362 = 1;
	int32_t x363 = -484800;
	static int16_t x364 = INT16_MAX;

    t65 = (x361/((x362!=x363)%x364));

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x365 = INT8_MAX;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MAX;
	volatile int16_t x368 = INT16_MIN;
	static int32_t t66 = -243296;

    t66 = (x365/((x366!=x367)%x368));

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x370 = 6755313658702754754LLU;
	int32_t x371 = 2792;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t67 = 153021;

    t67 = (x369/((x370!=x371)%x372));

    if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x373 = 8293006137767LL;
	int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MIN;
	volatile uint32_t x376 = 6U;

    t68 = (x373/((x374!=x375)%x376));

    if (t68 != 8293006137767LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x377 = 112001220U;
	volatile int16_t x378 = 3087;
	uint8_t x379 = UINT8_MAX;

    t69 = (x377/((x378!=x379)%x380));

    if (t69 != 112001220U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x382 = UINT16_MAX;
	uint64_t t70 = 279662852496LLU;

    t70 = (x381/((x382!=x383)%x384));

    if (t70 != 2147483647LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x389 = 4516U;
	static uint64_t x390 = 5921353192594602132LLU;
	uint32_t x391 = 2465U;
	int16_t x392 = 1208;
	static int32_t t71 = -547356029;

    t71 = (x389/((x390!=x391)%x392));

    if (t71 != 4516) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x394 = -1LL;
	int16_t x395 = 979;
	volatile int32_t t72 = 132;

    t72 = (x393/((x394!=x395)%x396));

    if (t72 != 542) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x401 = INT8_MIN;
	static uint32_t x402 = UINT32_MAX;
	int64_t x403 = 95800759LL;
	int8_t x404 = INT8_MIN;
	volatile int32_t t73 = 33580668;

    t73 = (x401/((x402!=x403)%x404));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x409 = -38LL;
	static uint16_t x410 = 1244U;
	volatile int16_t x411 = 295;
	static volatile int64_t t74 = 1LL;

    t74 = (x409/((x410!=x411)%x412));

    if (t74 != -38LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x413 = INT8_MAX;
	uint16_t x414 = 7U;
	int64_t x415 = INT64_MIN;
	int32_t x416 = -9871;
	static volatile int32_t t75 = 6;

    t75 = (x413/((x414!=x415)%x416));

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x419 = 0U;
	static int64_t x420 = INT64_MIN;
	volatile int64_t t76 = 99102LL;

    t76 = (x417/((x418!=x419)%x420));

    if (t76 != 4294967295LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x421 = INT8_MAX;
	volatile int32_t x422 = 3429;
	int32_t x423 = INT32_MIN;
	static uint8_t x424 = UINT8_MAX;

    t77 = (x421/((x422!=x423)%x424));

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x426 = 505654737;
	volatile int32_t x427 = -1062299899;
	int16_t x428 = INT16_MIN;
	int32_t t78 = -6038;

    t78 = (x425/((x426!=x427)%x428));

    if (t78 != 7) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x429 = INT16_MIN;
	uint64_t x430 = 1906LLU;
	static volatile int8_t x431 = -1;
	int32_t t79 = 30;

    t79 = (x429/((x430!=x431)%x432));

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x442 = -1;
	uint8_t x444 = UINT8_MAX;
	int32_t t80 = -107605;

    t80 = (x441/((x442!=x443)%x444));

    if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x445 = INT32_MIN;
	uint64_t x446 = 14413441LLU;
	uint8_t x447 = 56U;
	uint32_t x448 = 487797U;
	volatile uint32_t t81 = 120690641U;

    t81 = (x445/((x446!=x447)%x448));

    if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x449 = 26173558LLU;
	int32_t x450 = INT32_MAX;
	static uint8_t x452 = 5U;
	volatile uint64_t t82 = 32667065745381LLU;

    t82 = (x449/((x450!=x451)%x452));

    if (t82 != 26173558LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x455 = INT32_MAX;
	volatile uint64_t t83 = 72156LLU;

    t83 = (x453/((x454!=x455)%x456));

    if (t83 != 2LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x457 = INT16_MAX;
	uint8_t x458 = 23U;
	int16_t x459 = -1;
	uint64_t x460 = 13581710424LLU;

    t84 = (x457/((x458!=x459)%x460));

    if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x461 = INT64_MIN;
	static volatile int16_t x462 = -12923;
	static int64_t t85 = INT64_MIN;

    t85 = (x461/((x462!=x463)%x464));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x466 = 220357236U;
	int8_t x467 = INT8_MIN;
	static volatile int32_t t86 = 1702090;

    t86 = (x465/((x466!=x467)%x468));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x469 = INT32_MAX;
	int32_t x471 = 1054961;
	int32_t x472 = INT32_MIN;

    t87 = (x469/((x470!=x471)%x472));

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x473 = 171277624110971LLU;
	int16_t x474 = INT16_MIN;
	volatile int64_t x476 = -690945778644161LL;
	volatile uint64_t t88 = 62950665LLU;

    t88 = (x473/((x474!=x475)%x476));

    if (t88 != 171277624110971LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x477 = 2;
	static int8_t x478 = INT8_MIN;
	int64_t x479 = -17171612736LL;
	int16_t x480 = INT16_MIN;
	volatile int32_t t89 = -32642;

    t89 = (x477/((x478!=x479)%x480));

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x481 = INT16_MIN;
	int8_t x482 = -1;
	uint16_t x483 = UINT16_MAX;
	int32_t x484 = INT32_MIN;
	volatile int32_t t90 = -49780;

    t90 = (x481/((x482!=x483)%x484));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x485 = 7U;
	int32_t x486 = INT32_MIN;
	volatile int16_t x488 = INT16_MIN;
	uint32_t t91 = 124U;

    t91 = (x485/((x486!=x487)%x488));

    if (t91 != 7U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	int64_t x490 = 59LL;
	static int64_t x491 = 65484420LL;
	int32_t t92 = 177667;

    t92 = (x489/((x490!=x491)%x492));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x497 = 17U;
	static int32_t x498 = INT32_MIN;
	int16_t x499 = INT16_MIN;
	int16_t x500 = INT16_MIN;
	volatile int32_t t93 = -62;

    t93 = (x497/((x498!=x499)%x500));

    if (t93 != 17) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x501 = -1;
	int8_t x503 = INT8_MAX;
	uint16_t x504 = 3888U;
	volatile int32_t t94 = -1511;

    t94 = (x501/((x502!=x503)%x504));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x509 = UINT16_MAX;
	uint64_t x510 = 7697206581731LLU;
	uint8_t x511 = 24U;
	int64_t x512 = 143048515029693802LL;
	static int64_t t95 = 107151344LL;

    t95 = (x509/((x510!=x511)%x512));

    if (t95 != 65535LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x513 = -109LL;
	volatile int16_t x515 = 1;
	static uint8_t x516 = 7U;
	static int64_t t96 = 2LL;

    t96 = (x513/((x514!=x515)%x516));

    if (t96 != -109LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x517 = 0;
	static int64_t x518 = INT64_MIN;
	static uint8_t x520 = 3U;
	volatile int32_t t97 = -34751;

    t97 = (x517/((x518!=x519)%x520));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x521 = 270;
	int8_t x522 = 0;
	uint16_t x523 = 161U;
	volatile int32_t x524 = -1015;
	volatile int32_t t98 = 3;

    t98 = (x521/((x522!=x523)%x524));

    if (t98 != 270) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x525 = -1;
	int64_t x526 = INT64_MAX;
	uint16_t x527 = 23371U;
	static int64_t t99 = 2820243LL;

    t99 = (x525/((x526!=x527)%x528));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x529 = 3928947179623LL;
	uint32_t x530 = 734054U;
	uint8_t x531 = 3U;
	volatile uint32_t x532 = UINT32_MAX;
	static int64_t t100 = -218310LL;

    t100 = (x529/((x530!=x531)%x532));

    if (t100 != 3928947179623LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x533 = 7835U;
	volatile uint8_t x534 = UINT8_MAX;
	static int64_t x535 = INT64_MIN;
	int64_t x536 = -443LL;
	volatile int64_t t101 = 2242LL;

    t101 = (x533/((x534!=x535)%x536));

    if (t101 != 7835LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x538 = 619U;
	int32_t x539 = INT32_MIN;
	int8_t x540 = INT8_MAX;
	volatile int32_t t102 = -44;

    t102 = (x537/((x538!=x539)%x540));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x541 = INT32_MIN;
	volatile int64_t x542 = 1754623369LL;
	int64_t x543 = -13849090431LL;
	uint8_t x544 = UINT8_MAX;
	volatile int32_t t103 = INT32_MIN;

    t103 = (x541/((x542!=x543)%x544));

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x545 = -20563LL;
	int16_t x546 = 12;
	uint16_t x547 = 1006U;
	static int16_t x548 = 1394;
	int64_t t104 = 3694LL;

    t104 = (x545/((x546!=x547)%x548));

    if (t104 != -20563LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x549 = 7967U;
	volatile uint64_t x551 = 92LLU;
	uint32_t x552 = UINT32_MAX;
	volatile uint32_t t105 = 40698U;

    t105 = (x549/((x550!=x551)%x552));

    if (t105 != 7967U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x557 = UINT32_MAX;
	uint8_t x558 = UINT8_MAX;
	volatile int8_t x559 = INT8_MAX;
	uint64_t x560 = UINT64_MAX;
	static volatile uint64_t t106 = 199595125519LLU;

    t106 = (x557/((x558!=x559)%x560));

    if (t106 != 4294967295LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x561 = INT16_MAX;
	uint32_t x562 = 2039U;
	int64_t x563 = 50LL;
	int32_t x564 = INT32_MIN;
	int32_t t107 = -7624091;

    t107 = (x561/((x562!=x563)%x564));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x565 = INT32_MIN;
	static int32_t x567 = -57501;
	uint64_t x568 = 3785712980518494LLU;
	uint64_t t108 = 1LLU;

    t108 = (x565/((x566!=x567)%x568));

    if (t108 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x571 = INT32_MIN;
	int64_t t109 = -4132401166489035LL;

    t109 = (x569/((x570!=x571)%x572));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x575 = -4869653289LL;
	static int8_t x576 = INT8_MIN;

    t110 = (x573/((x574!=x575)%x576));

    if (t110 != -32768) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x577 = INT8_MIN;
	uint16_t x579 = 4447U;
	static uint8_t x580 = 74U;

    t111 = (x577/((x578!=x579)%x580));

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x581 = 3753U;
	int32_t x582 = INT32_MAX;
	static int16_t x583 = INT16_MAX;
	static int32_t x584 = INT32_MIN;

    t112 = (x581/((x582!=x583)%x584));

    if (t112 != 3753) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x586 = -1LL;
	uint8_t x587 = 2U;
	volatile int32_t x588 = INT32_MAX;
	volatile int32_t t113 = -3156606;

    t113 = (x585/((x586!=x587)%x588));

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x589 = INT32_MIN;
	int16_t x590 = -1;
	volatile int64_t x591 = INT64_MAX;
	static int16_t x592 = INT16_MAX;
	static volatile int32_t t114 = INT32_MIN;

    t114 = (x589/((x590!=x591)%x592));

    if (t114 != INT32_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x597 = -69;
	int16_t x598 = INT16_MIN;
	uint16_t x599 = 15U;
	uint32_t x600 = 10164U;
	uint32_t t115 = 6565U;

    t115 = (x597/((x598!=x599)%x600));

    if (t115 != 4294967227U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x602 = UINT8_MAX;
	static int64_t x603 = 51081352341058LL;
	static uint16_t x604 = UINT16_MAX;
	volatile int32_t t116 = 39533887;

    t116 = (x601/((x602!=x603)%x604));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x609 = -50;
	int64_t x610 = INT64_MIN;
	uint32_t x612 = 2U;
	volatile uint32_t t117 = 19085246U;

    t117 = (x609/((x610!=x611)%x612));

    if (t117 != 4294967246U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x613 = 10754809LLU;
	static int32_t x615 = -1;
	volatile int64_t x616 = -103496LL;

    t118 = (x613/((x614!=x615)%x616));

    if (t118 != 10754809LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x617 = 0;
	int32_t x618 = -30604;
	static volatile int16_t x619 = -6;
	uint32_t x620 = 722564786U;
	static volatile uint32_t t119 = 665206U;

    t119 = (x617/((x618!=x619)%x620));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x623 = INT8_MIN;
	int8_t x624 = INT8_MIN;
	static volatile int32_t t120 = -591710;

    t120 = (x621/((x622!=x623)%x624));

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x625 = INT16_MAX;
	uint8_t x626 = 8U;
	int64_t x627 = INT64_MIN;
	static int16_t x628 = 451;
	static int32_t t121 = -1520;

    t121 = (x625/((x626!=x627)%x628));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x629 = INT32_MIN;
	int64_t x630 = INT64_MAX;
	int32_t t122 = INT32_MIN;

    t122 = (x629/((x630!=x631)%x632));

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x633 = 0U;
	uint32_t x634 = UINT32_MAX;
	volatile uint64_t x635 = 1LLU;
	volatile uint32_t x636 = 10601U;

    t123 = (x633/((x634!=x635)%x636));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x637 = INT64_MIN;
	int16_t x638 = -1;
	int64_t x639 = INT64_MIN;
	uint64_t x640 = 11LLU;
	volatile uint64_t t124 = 376460265589211LLU;

    t124 = (x637/((x638!=x639)%x640));

    if (t124 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x641 = INT8_MIN;
	int64_t x642 = 643969LL;
	int32_t x643 = -1;
	volatile int32_t x644 = INT32_MIN;

    t125 = (x641/((x642!=x643)%x644));

    if (t125 != -128) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x649 = 23U;
	volatile int16_t x650 = -1;
	int32_t x651 = 124416073;
	static uint16_t x652 = UINT16_MAX;
	volatile int32_t t126 = 225;

    t126 = (x649/((x650!=x651)%x652));

    if (t126 != 23) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x654 = INT8_MAX;
	volatile int8_t x656 = 15;
	volatile int32_t t127 = -50;

    t127 = (x653/((x654!=x655)%x656));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	uint16_t x660 = 31598U;
	int32_t t128 = 328;

    t128 = (x657/((x658!=x659)%x660));

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x661 = 26;
	uint64_t x662 = 60580885299680LLU;
	int16_t x663 = INT16_MIN;
	volatile uint64_t x664 = UINT64_MAX;
	uint64_t t129 = 5348263404228161LLU;

    t129 = (x661/((x662!=x663)%x664));

    if (t129 != 26LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x672 = UINT8_MAX;
	volatile int32_t t130 = 1;

    t130 = (x669/((x670!=x671)%x672));

    if (t130 != 99) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x673 = -1;
	volatile uint16_t x674 = 26U;
	int16_t x675 = 32;
	static int16_t x676 = -3760;

    t131 = (x673/((x674!=x675)%x676));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x677 = UINT32_MAX;
	static uint16_t x678 = 1145U;
	static volatile int32_t x679 = -1;
	uint8_t x680 = 4U;
	volatile uint32_t t132 = UINT32_MAX;

    t132 = (x677/((x678!=x679)%x680));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint16_t x682 = UINT16_MAX;
	int8_t x683 = -1;
	int32_t x684 = -122792340;

    t133 = (x681/((x682!=x683)%x684));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x689 = -15815;
	volatile uint64_t x691 = 15LLU;
	int16_t x692 = INT16_MIN;
	static int32_t t134 = 5134;

    t134 = (x689/((x690!=x691)%x692));

    if (t134 != -15815) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x695 = 9214172887LLU;
	uint8_t x696 = 64U;
	int64_t t135 = 1LL;

    t135 = (x693/((x694!=x695)%x696));

    if (t135 != -57651911012975LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x697 = -1;
	uint8_t x698 = 11U;
	uint8_t x699 = UINT8_MAX;
	volatile int64_t x700 = INT64_MIN;
	volatile int64_t t136 = 7130LL;

    t136 = (x697/((x698!=x699)%x700));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x701 = INT64_MIN;
	uint32_t x702 = 448U;

    t137 = (x701/((x702!=x703)%x704));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x705 = INT64_MAX;
	uint16_t x706 = UINT16_MAX;
	int8_t x707 = -2;
	uint32_t x708 = UINT32_MAX;
	int64_t t138 = INT64_MAX;

    t138 = (x705/((x706!=x707)%x708));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x713 = UINT32_MAX;
	int32_t x714 = INT32_MAX;
	uint64_t x716 = 6036715725187781LLU;
	volatile uint64_t t139 = 58440645658LLU;

    t139 = (x713/((x714!=x715)%x716));

    if (t139 != 4294967295LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x717 = 1U;
	int64_t x719 = -1LL;
	uint64_t x720 = 1276218878993LLU;
	volatile uint64_t t140 = 95114305851040354LLU;

    t140 = (x717/((x718!=x719)%x720));

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x721 = -1LL;
	static int64_t x722 = INT64_MIN;
	static uint64_t x723 = UINT64_MAX;
	volatile int32_t x724 = -9493459;
	static int64_t t141 = -28901977426768LL;

    t141 = (x721/((x722!=x723)%x724));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x725 = INT16_MAX;
	int8_t x727 = -40;
	static volatile uint32_t t142 = 937556404U;

    t142 = (x725/((x726!=x727)%x728));

    if (t142 != 32767U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x729 = 292;
	int32_t x730 = 1843;
	static int16_t x731 = INT16_MAX;
	int16_t x732 = INT16_MIN;
	volatile int32_t t143 = 177;

    t143 = (x729/((x730!=x731)%x732));

    if (t143 != 292) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x733 = INT64_MIN;
	volatile uint16_t x734 = UINT16_MAX;
	uint64_t x735 = UINT64_MAX;
	static volatile int64_t t144 = INT64_MIN;

    t144 = (x733/((x734!=x735)%x736));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x737 = 70087935816576820LLU;
	uint16_t x738 = 338U;
	int64_t x739 = INT64_MIN;
	static int64_t x740 = INT64_MIN;
	static uint64_t t145 = 137886680128765850LLU;

    t145 = (x737/((x738!=x739)%x740));

    if (t145 != 70087935816576820LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x741 = 18U;
	int8_t x742 = 10;
	int32_t x743 = -83012;
	int64_t x744 = 110728945552827973LL;
	volatile int64_t t146 = -282LL;

    t146 = (x741/((x742!=x743)%x744));

    if (t146 != 18LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x745 = -1826;
	uint64_t x746 = 1225832586979LLU;
	int64_t x747 = -33435621339LL;
	int8_t x748 = INT8_MAX;
	volatile int32_t t147 = -8492;

    t147 = (x745/((x746!=x747)%x748));

    if (t147 != -1826) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x749 = 6168885600LLU;
	int8_t x751 = 5;
	static int8_t x752 = 6;

    t148 = (x749/((x750!=x751)%x752));

    if (t148 != 6168885600LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x753 = 1682149644LL;
	static int16_t x754 = INT16_MIN;
	int64_t x755 = -1696834500343LL;
	int8_t x756 = INT8_MAX;
	int64_t t149 = -13909040921357LL;

    t149 = (x753/((x754!=x755)%x756));

    if (t149 != 1682149644LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x757 = 767U;
	int64_t x758 = INT64_MAX;
	static volatile int8_t x759 = INT8_MAX;
	volatile uint8_t x760 = 51U;
	static volatile int32_t t150 = -7642991;

    t150 = (x757/((x758!=x759)%x760));

    if (t150 != 767) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x761 = INT16_MAX;
	int64_t x762 = 1LL;
	int64_t x763 = INT64_MAX;
	int64_t x764 = INT64_MIN;
	volatile int64_t t151 = -274386042577LL;

    t151 = (x761/((x762!=x763)%x764));

    if (t151 != 32767LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x765 = -1;
	int32_t x766 = -657006;
	volatile int16_t x767 = INT16_MIN;
	int32_t t152 = -84243;

    t152 = (x765/((x766!=x767)%x768));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x769 = UINT16_MAX;
	volatile uint16_t x770 = 3U;
	static uint16_t x771 = 21U;
	int16_t x772 = INT16_MIN;
	int32_t t153 = -29290384;

    t153 = (x769/((x770!=x771)%x772));

    if (t153 != 65535) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x773 = UINT32_MAX;
	uint8_t x774 = UINT8_MAX;
	volatile int8_t x775 = INT8_MIN;
	volatile int16_t x776 = INT16_MIN;
	uint32_t t154 = UINT32_MAX;

    t154 = (x773/((x774!=x775)%x776));

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x777 = 13;
	static volatile int8_t x779 = INT8_MAX;
	int32_t x780 = INT32_MAX;
	volatile int32_t t155 = 127872311;

    t155 = (x777/((x778!=x779)%x780));

    if (t155 != 13) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x781 = INT16_MAX;
	volatile int8_t x783 = -7;
	int64_t x784 = INT64_MIN;
	volatile int64_t t156 = 127937LL;

    t156 = (x781/((x782!=x783)%x784));

    if (t156 != 32767LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x785 = 533858825;
	uint64_t x786 = 896279LLU;
	static int8_t x787 = -1;
	int32_t x788 = 242;
	static int32_t t157 = -963113129;

    t157 = (x785/((x786!=x787)%x788));

    if (t157 != 533858825) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x789 = INT16_MAX;
	uint16_t x790 = 13U;
	static volatile uint16_t x791 = 4593U;
	uint8_t x792 = UINT8_MAX;
	static volatile int32_t t158 = -1;

    t158 = (x789/((x790!=x791)%x792));

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x797 = 881U;
	volatile uint16_t x799 = 3U;
	int16_t x800 = INT16_MIN;
	int32_t t159 = -197282237;

    t159 = (x797/((x798!=x799)%x800));

    if (t159 != 881) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x801 = INT8_MIN;
	static int64_t x803 = 3308536661900792LL;
	uint16_t x804 = 15711U;
	int32_t t160 = -4840443;

    t160 = (x801/((x802!=x803)%x804));

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x805 = -11750154071LL;
	uint8_t x806 = 24U;
	int16_t x807 = 1212;
	int16_t x808 = INT16_MIN;
	int64_t t161 = 4985994805660LL;

    t161 = (x805/((x806!=x807)%x808));

    if (t161 != -11750154071LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x809 = -1035LL;
	uint16_t x810 = UINT16_MAX;
	int64_t x811 = -1LL;
	static int32_t x812 = -30165;
	static int64_t t162 = -181981366LL;

    t162 = (x809/((x810!=x811)%x812));

    if (t162 != -1035LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x813 = INT16_MAX;
	uint64_t x816 = 484573401081064LLU;
	volatile uint64_t t163 = 133842163658542594LLU;

    t163 = (x813/((x814!=x815)%x816));

    if (t163 != 32767LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x817 = 37U;
	uint64_t x818 = 74809712961501836LLU;
	static int16_t x819 = 642;
	volatile int32_t t164 = 14382;

    t164 = (x817/((x818!=x819)%x820));

    if (t164 != 37) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x821 = INT16_MIN;
	volatile int32_t t165 = -112209537;

    t165 = (x821/((x822!=x823)%x824));

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x825 = 10U;
	uint32_t x826 = 5U;
	int32_t x827 = INT32_MAX;
	volatile int64_t t166 = -1622513559162LL;

    t166 = (x825/((x826!=x827)%x828));

    if (t166 != 10LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x829 = -284LL;
	volatile int64_t x830 = -83999395LL;
	int16_t x831 = INT16_MIN;
	volatile uint64_t t167 = 154565162356900500LLU;

    t167 = (x829/((x830!=x831)%x832));

    if (t167 != 18446744073709551332LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x833 = -1LL;
	volatile int16_t x834 = INT16_MIN;
	uint8_t x835 = 0U;
	uint32_t x836 = UINT32_MAX;
	volatile int64_t t168 = 6593295LL;

    t168 = (x833/((x834!=x835)%x836));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x837 = 40761291240LLU;
	static uint8_t x838 = 28U;
	uint8_t x839 = 0U;
	int32_t x840 = -1244;
	static volatile uint64_t t169 = 46667LLU;

    t169 = (x837/((x838!=x839)%x840));

    if (t169 != 40761291240LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x841 = INT8_MAX;
	static int8_t x842 = INT8_MAX;
	int32_t x843 = -1;
	static int64_t t170 = 55941LL;

    t170 = (x841/((x842!=x843)%x844));

    if (t170 != 127LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x849 = INT8_MIN;
	int32_t x850 = -1;
	uint8_t x851 = 12U;
	static int64_t x852 = INT64_MAX;
	int64_t t171 = 1626569779406418LL;

    t171 = (x849/((x850!=x851)%x852));

    if (t171 != -128LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x854 = INT64_MIN;
	int32_t x856 = -46399104;
	int32_t t172 = 1482;

    t172 = (x853/((x854!=x855)%x856));

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x857 = INT8_MIN;
	static int32_t x858 = 1;
	uint64_t x859 = 4037LLU;
	uint64_t x860 = 246141505697713LLU;
	uint64_t t173 = 127746324LLU;

    t173 = (x857/((x858!=x859)%x860));

    if (t173 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x861 = INT16_MIN;
	static int16_t x862 = INT16_MIN;
	static int32_t x863 = 768;
	static int32_t x864 = INT32_MIN;

    t174 = (x861/((x862!=x863)%x864));

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x865 = INT8_MIN;
	volatile uint64_t x866 = 942LLU;
	volatile int8_t x867 = INT8_MAX;
	volatile uint32_t t175 = 149703U;

    t175 = (x865/((x866!=x867)%x868));

    if (t175 != 4294967168U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x869 = 5975267LL;
	uint16_t x870 = 3U;
	static uint32_t x872 = 240233U;
	int64_t t176 = -7846116788367932LL;

    t176 = (x869/((x870!=x871)%x872));

    if (t176 != 5975267LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x877 = 36627451049979LL;
	uint8_t x878 = 5U;
	volatile int8_t x879 = INT8_MAX;
	static int64_t x880 = 76422647791LL;
	int64_t t177 = 1244263943LL;

    t177 = (x877/((x878!=x879)%x880));

    if (t177 != 36627451049979LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x881 = UINT32_MAX;
	uint16_t x882 = 96U;
	uint32_t t178 = UINT32_MAX;

    t178 = (x881/((x882!=x883)%x884));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x885 = 3428U;
	int32_t x886 = 5;
	int16_t x888 = -452;
	uint32_t t179 = 509447428U;

    t179 = (x885/((x886!=x887)%x888));

    if (t179 != 3428U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x890 = -1;
	static uint8_t x892 = UINT8_MAX;
	int32_t t180 = -52;

    t180 = (x889/((x890!=x891)%x892));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x893 = 3U;
	static uint64_t x894 = 15930LLU;
	static int32_t t181 = 14173;

    t181 = (x893/((x894!=x895)%x896));

    if (t181 != 3) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x897 = INT64_MIN;
	int8_t x898 = INT8_MIN;
	int64_t x900 = INT64_MIN;
	int64_t t182 = INT64_MIN;

    t182 = (x897/((x898!=x899)%x900));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x901 = INT32_MIN;
	volatile int64_t x902 = 639836455LL;
	volatile int16_t x904 = 10836;
	int32_t t183 = INT32_MIN;

    t183 = (x901/((x902!=x903)%x904));

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x905 = -1LL;
	int64_t x906 = -3674569LL;
	int8_t x907 = 8;
	volatile int8_t x908 = INT8_MIN;
	volatile int64_t t184 = 19LL;

    t184 = (x905/((x906!=x907)%x908));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x909 = -1;
	static int8_t x910 = -1;
	int8_t x911 = INT8_MAX;
	int16_t x912 = INT16_MIN;
	volatile int32_t t185 = -6330;

    t185 = (x909/((x910!=x911)%x912));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x913 = 6115U;
	uint64_t x914 = UINT64_MAX;
	int32_t x915 = INT32_MIN;
	uint16_t x916 = 5254U;

    t186 = (x913/((x914!=x915)%x916));

    if (t186 != 6115) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x921 = 417U;
	int8_t x922 = INT8_MIN;
	uint64_t x924 = UINT64_MAX;
	volatile uint64_t t187 = 120175LLU;

    t187 = (x921/((x922!=x923)%x924));

    if (t187 != 417LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x925 = INT8_MIN;
	uint32_t x926 = 2U;
	int16_t x927 = INT16_MAX;
	int32_t t188 = 900;

    t188 = (x925/((x926!=x927)%x928));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x932 = 3;
	static volatile int64_t t189 = 774720889LL;

    t189 = (x929/((x930!=x931)%x932));

    if (t189 != 994LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x933 = 493U;
	int32_t x934 = -924;
	uint16_t x935 = UINT16_MAX;
	static uint32_t x936 = 1229227460U;

    t190 = (x933/((x934!=x935)%x936));

    if (t190 != 493U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x937 = 730226LLU;
	int16_t x940 = INT16_MIN;
	uint64_t t191 = 20393773724LLU;

    t191 = (x937/((x938!=x939)%x940));

    if (t191 != 730226LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x941 = INT32_MIN;
	uint64_t x942 = UINT64_MAX;
	volatile int32_t x943 = 221195;
	int8_t x944 = 3;
	int32_t t192 = INT32_MIN;

    t192 = (x941/((x942!=x943)%x944));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x945 = -1LL;
	volatile int64_t x946 = INT64_MAX;
	int8_t x947 = -1;
	uint32_t x948 = 129U;
	int64_t t193 = 23LL;

    t193 = (x945/((x946!=x947)%x948));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x949 = INT32_MIN;
	volatile int32_t x950 = -1;
	uint8_t x951 = UINT8_MAX;
	int32_t x952 = INT32_MIN;
	volatile int32_t t194 = INT32_MIN;

    t194 = (x949/((x950!=x951)%x952));

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x953 = INT32_MAX;
	int8_t x954 = -1;
	uint64_t x955 = 250099LLU;
	int32_t t195 = INT32_MAX;

    t195 = (x953/((x954!=x955)%x956));

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x957 = INT8_MIN;
	int16_t x958 = -1;
	int16_t x959 = 4438;
	volatile int32_t t196 = 0;

    t196 = (x957/((x958!=x959)%x960));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x961 = INT64_MIN;
	int32_t x964 = INT32_MAX;
	int64_t t197 = INT64_MIN;

    t197 = (x961/((x962!=x963)%x964));

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x969 = INT8_MAX;
	volatile int8_t x970 = INT8_MIN;
	int64_t x972 = INT64_MAX;

    t198 = (x969/((x970!=x971)%x972));

    if (t198 != 127LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x981 = 9;
	int32_t x982 = INT32_MIN;
	uint64_t x984 = 59LLU;
	uint64_t t199 = 0LLU;

    t199 = (x981/((x982!=x983)%x984));

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

