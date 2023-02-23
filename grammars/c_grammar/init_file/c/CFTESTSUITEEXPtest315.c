
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

int8_t x8 = INT8_MAX;
volatile int32_t t1 = 7911;
int16_t x11 = -5182;
volatile int32_t t2 = -3606;
int16_t x23 = -1;
int16_t x25 = -1;
int32_t x29 = INT32_MIN;
volatile uint16_t x32 = 9467U;
volatile int32_t t7 = -642550847;
uint64_t x58 = UINT64_MAX;
int32_t t12 = 32065727;
int16_t x65 = INT16_MIN;
uint32_t x70 = 2013545U;
int64_t x77 = INT64_MIN;
int32_t t17 = 179275;
volatile int32_t x82 = -1;
volatile int32_t t18 = 2047;
uint16_t x94 = 249U;
int64_t x95 = 172046898442900446LL;
int64_t x103 = INT64_MIN;
volatile int16_t x109 = 0;
volatile int32_t x120 = -1;
int32_t t25 = 5821;
static uint32_t x123 = 536U;
volatile uint16_t x125 = 5984U;
int8_t x127 = INT8_MIN;
int32_t t27 = -714778;
uint32_t x132 = 746U;
static int32_t x143 = INT32_MAX;
volatile uint64_t x144 = 82401923LLU;
volatile int16_t x148 = INT16_MIN;
int32_t t31 = -883117;
volatile int64_t x152 = 10707784893368LL;
int8_t x158 = -1;
int8_t x160 = INT8_MIN;
int32_t t34 = -2983;
int64_t x161 = INT64_MAX;
static int8_t x164 = INT8_MAX;
volatile int32_t t35 = -12;
uint32_t x165 = 377886U;
int16_t x166 = INT16_MIN;
int64_t x170 = 6053878306LL;
uint8_t x176 = UINT8_MAX;
int16_t x183 = 55;
static uint64_t x187 = 6LLU;
static uint8_t x191 = UINT8_MAX;
int8_t x195 = 46;
int64_t x198 = INT64_MAX;
int32_t t47 = -31;
volatile int64_t x213 = -2099981966006LL;
uint8_t x214 = 14U;
int32_t t48 = 4164313;
int64_t x218 = -220086LL;
int16_t x226 = -1;
int32_t t52 = -238444232;
int64_t x243 = 8631445200LL;
volatile uint8_t x244 = UINT8_MAX;
static uint8_t x245 = 83U;
static int16_t x247 = INT16_MAX;
int8_t x262 = INT8_MIN;
uint8_t x267 = 0U;
volatile int32_t x268 = -262776;
static volatile int32_t t65 = -6140281;
volatile uint16_t x286 = UINT16_MAX;
int32_t t66 = 142540;
int32_t t70 = -11380815;
int16_t x320 = -1;
uint32_t x326 = 6U;
int32_t t73 = -54990;
uint8_t x336 = UINT8_MAX;
int8_t x352 = INT8_MIN;
volatile int64_t x353 = INT64_MIN;
uint16_t x357 = UINT16_MAX;
int16_t x358 = -175;
int8_t x359 = 1;
uint32_t x363 = UINT32_MAX;
uint32_t x367 = UINT32_MAX;
int16_t x370 = INT16_MIN;
int64_t x371 = -669603478LL;
int8_t x377 = INT8_MIN;
int16_t x378 = -1;
int8_t x379 = INT8_MIN;
volatile int32_t t85 = -657;
volatile int32_t t87 = 5;
static int64_t x394 = INT64_MAX;
int32_t x399 = INT32_MAX;
uint16_t x406 = 0U;
uint8_t x407 = 1U;
static uint64_t x408 = 838730LLU;
static int16_t x413 = -246;
int8_t x423 = INT8_MAX;
uint64_t x424 = 3785911905609448025LLU;
int32_t t96 = 244596;
static uint8_t x426 = 0U;
static int8_t x429 = -54;
uint64_t x430 = UINT64_MAX;
volatile int8_t x450 = -6;
int32_t t100 = 3;
static int16_t x453 = -2;
volatile uint8_t x456 = 1U;
static int32_t t103 = -10848931;
int8_t x470 = -1;
int32_t x477 = INT32_MIN;
static volatile int32_t t107 = 44;
volatile int32_t x481 = INT32_MIN;
uint32_t x487 = UINT32_MAX;
static volatile uint32_t x488 = 35730842U;
int64_t x513 = INT64_MAX;
uint16_t x514 = UINT16_MAX;
int16_t x516 = INT16_MAX;
static volatile int32_t t115 = -118;
uint8_t x522 = 1U;
volatile int8_t x523 = INT8_MIN;
static uint32_t x526 = UINT32_MAX;
uint16_t x535 = UINT16_MAX;
int16_t x537 = INT16_MIN;
int8_t x540 = -1;
static int8_t x542 = INT8_MAX;
int32_t t121 = 866532864;
uint8_t x545 = UINT8_MAX;
uint16_t x547 = 12U;
uint8_t x548 = 6U;
volatile int32_t t122 = -112;
static int32_t t124 = -9407;
uint32_t x558 = UINT32_MAX;
int16_t x564 = -1;
int32_t x567 = -1;
uint8_t x568 = 16U;
int32_t x580 = -4261;
static int64_t x583 = -7LL;
uint16_t x591 = UINT16_MAX;
int64_t x592 = INT64_MIN;
static int8_t x601 = INT8_MAX;
int8_t x602 = -1;
int32_t t134 = -8375161;
int32_t x618 = 975467457;
uint8_t x619 = 52U;
int16_t x621 = INT16_MAX;
static volatile int32_t t136 = -663292;
int8_t x625 = 1;
static int16_t x635 = INT16_MIN;
int32_t x636 = INT32_MIN;
int8_t x638 = -1;
int64_t x647 = INT64_MAX;
int64_t x657 = INT64_MAX;
uint16_t x658 = 14229U;
int16_t x661 = INT16_MAX;
volatile int32_t t144 = 6;
int8_t x668 = -1;
int32_t x677 = 471936031;
uint64_t x684 = UINT64_MAX;
int64_t x697 = INT64_MIN;
volatile int16_t x700 = -1;
int64_t x709 = INT64_MIN;
int32_t x712 = INT32_MAX;
uint64_t x718 = UINT64_MAX;
int64_t x728 = 7LL;
int64_t x729 = INT64_MIN;
volatile uint8_t x731 = 1U;
static int32_t t158 = 0;
volatile int64_t x734 = 31LL;
static int16_t x735 = -45;
int32_t x738 = 76657;
int32_t t160 = 9;
int8_t x743 = -3;
static int16_t x753 = INT16_MAX;
static int16_t x754 = -89;
int16_t x764 = INT16_MAX;
uint8_t x766 = 1U;
uint8_t x769 = 1U;
volatile int32_t t169 = -484;
volatile uint8_t x782 = 1U;
int8_t x791 = INT8_MIN;
int8_t x792 = INT8_MAX;
int32_t t172 = -68;
uint32_t x796 = 1521U;
volatile int32_t t173 = 12677;
int16_t x801 = -8279;
static int8_t x806 = INT8_MIN;
uint16_t x815 = 403U;
static int32_t t178 = -1576;
int8_t x821 = -1;
static int16_t x831 = -33;
uint32_t x839 = 29853U;
int16_t x840 = INT16_MIN;
uint16_t x841 = 6238U;
uint64_t x847 = 94539493177LLU;
volatile int32_t t185 = -123119;
int64_t x861 = INT64_MIN;
uint32_t x865 = 672U;
uint8_t x866 = UINT8_MAX;
volatile int32_t t189 = -25976;
static uint8_t x876 = UINT8_MAX;
volatile int32_t t190 = -453623010;
int64_t x879 = INT64_MIN;
int32_t x880 = -1;
uint32_t x883 = 142672U;
int8_t x884 = -1;
volatile int32_t x885 = INT32_MIN;
static int32_t x888 = 2719;
int64_t x894 = 14424715461LL;


void f0(void) {
    	volatile int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MAX;
	volatile int32_t x3 = -328;
	int8_t x4 = 47;
	static volatile int32_t t0 = 69;

    t0 = (x1!=((x2-x3)>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 29;
	uint64_t x6 = UINT64_MAX;
	volatile int64_t x7 = -1343573770420091LL;

    t1 = (x5!=((x6-x7)>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int64_t x10 = 129495282363LL;
	static volatile int8_t x12 = 1;

    t2 = (x9!=((x10-x11)>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = UINT64_MAX;
	int32_t x14 = INT32_MIN;
	static uint32_t x15 = 52371U;
	uint32_t x16 = 382624U;
	volatile int32_t t3 = 187255;

    t3 = (x13!=((x14-x15)>x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -672091LL;
	int32_t x18 = -1;
	int32_t x19 = -1;
	volatile int32_t x20 = -104378;
	int32_t t4 = -33176036;

    t4 = (x17!=((x18-x19)>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	uint32_t x22 = UINT32_MAX;
	uint64_t x24 = 517001LLU;
	int32_t t5 = -24810;

    t5 = (x21!=((x22-x23)>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = 4554306LLU;
	static int8_t x27 = -1;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 52681455;

    t6 = (x25!=((x26-x27)>x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = 3785;
	static int32_t x31 = 1;

    t7 = (x29!=((x30-x31)>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	int32_t x34 = -1;
	uint64_t x35 = 17586LLU;
	uint8_t x36 = 52U;
	volatile int32_t t8 = -25981965;

    t8 = (x33!=((x34-x35)>x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	uint8_t x43 = 1U;
	uint8_t x44 = 13U;
	static int32_t t9 = 13648;

    t9 = (x41!=((x42-x43)>x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 21U;
	static uint64_t x46 = 1995LLU;
	uint16_t x47 = 0U;
	int32_t x48 = INT32_MAX;
	volatile int32_t t10 = -6567;

    t10 = (x45!=((x46-x47)>x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MAX;
	int64_t x50 = -187LL;
	uint16_t x51 = 1921U;
	uint8_t x52 = UINT8_MAX;
	int32_t t11 = 80109;

    t11 = (x49!=((x50-x51)>x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x57 = -1LL;
	static int8_t x59 = INT8_MAX;
	volatile int32_t x60 = 3222038;

    t12 = (x57!=((x58-x59)>x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = INT64_MAX;
	uint16_t x62 = 670U;
	int32_t x63 = INT32_MAX;
	volatile uint8_t x64 = 110U;
	int32_t t13 = 7539766;

    t13 = (x61!=((x62-x63)>x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x66 = INT32_MIN;
	static int16_t x67 = -1;
	static int64_t x68 = 20018696LL;
	static volatile int32_t t14 = -48145;

    t14 = (x65!=((x66-x67)>x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = -1;
	uint32_t x71 = 148007381U;
	int8_t x72 = INT8_MIN;
	volatile int32_t t15 = 0;

    t15 = (x69!=((x70-x71)>x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = INT64_MIN;
	int32_t x74 = 114326952;
	uint16_t x75 = 9U;
	static volatile int8_t x76 = -12;
	int32_t t16 = -905;

    t16 = (x73!=((x74-x75)>x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	int8_t x80 = -1;

    t17 = (x77!=((x78-x79)>x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = INT8_MIN;
	int8_t x83 = 17;
	uint8_t x84 = 0U;

    t18 = (x81!=((x82-x83)>x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = 19149896962242LLU;
	volatile int64_t x86 = INT64_MAX;
	uint32_t x87 = 13741U;
	int16_t x88 = 0;
	int32_t t19 = 28;

    t19 = (x85!=((x86-x87)>x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x89 = INT8_MAX;
	volatile int64_t x90 = 701635523LL;
	static int32_t x91 = INT32_MAX;
	int8_t x92 = INT8_MIN;
	static int32_t t20 = -529948562;

    t20 = (x89!=((x90-x91)>x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = -1;
	uint16_t x96 = 2U;
	volatile int32_t t21 = 451090080;

    t21 = (x93!=((x94-x95)>x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MIN;
	static int16_t x102 = INT16_MIN;
	int64_t x104 = 207360LL;
	static volatile int32_t t22 = 246;

    t22 = (x101!=((x102-x103)>x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x105 = -1;
	int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MIN;
	int32_t x108 = INT32_MAX;
	int32_t t23 = 2270;

    t23 = (x105!=((x106-x107)>x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x110 = INT64_MIN;
	int8_t x111 = -1;
	int32_t x112 = INT32_MIN;
	volatile int32_t t24 = 696946068;

    t24 = (x109!=((x110-x111)>x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x117 = INT32_MAX;
	uint32_t x118 = 1958325U;
	int16_t x119 = -1;

    t25 = (x117!=((x118-x119)>x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	static int16_t x124 = 14017;
	int32_t t26 = -769;

    t26 = (x121!=((x122-x123)>x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x126 = 6;
	int16_t x128 = 41;

    t27 = (x125!=((x126-x127)>x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MIN;
	uint32_t x130 = UINT32_MAX;
	int16_t x131 = 0;
	int32_t t28 = 11311135;

    t28 = (x129!=((x130-x131)>x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x137 = -1LL;
	static uint8_t x138 = 2U;
	uint8_t x139 = UINT8_MAX;
	int64_t x140 = INT64_MIN;
	volatile int32_t t29 = -1849283;

    t29 = (x137!=((x138-x139)>x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x141 = -1;
	int16_t x142 = 1152;
	volatile int32_t t30 = 850;

    t30 = (x141!=((x142-x143)>x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = -11387;
	uint32_t x146 = 9049U;
	static volatile int16_t x147 = -1;

    t31 = (x145!=((x146-x147)>x148));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x149 = 0U;
	int8_t x150 = INT8_MAX;
	static volatile int16_t x151 = 1;
	int32_t t32 = -677204;

    t32 = (x149!=((x150-x151)>x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x153 = -1;
	int64_t x154 = -1LL;
	uint32_t x155 = 7784786U;
	static int8_t x156 = INT8_MIN;
	static volatile int32_t t33 = 11928135;

    t33 = (x153!=((x154-x155)>x156));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x157 = -1;
	int64_t x159 = -1LL;

    t34 = (x157!=((x158-x159)>x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x162 = INT32_MIN;
	int64_t x163 = 1734LL;

    t35 = (x161!=((x162-x163)>x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x167 = INT16_MIN;
	static int32_t x168 = INT32_MAX;
	int32_t t36 = 1140;

    t36 = (x165!=((x166-x167)>x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x169 = 2129229045922LL;
	static uint32_t x171 = 6994U;
	int8_t x172 = 43;
	int32_t t37 = 6718945;

    t37 = (x169!=((x170-x171)>x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x173 = 293116694U;
	int16_t x174 = 0;
	int16_t x175 = 21;
	static volatile int32_t t38 = -2578;

    t38 = (x173!=((x174-x175)>x176));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x177 = -894116814LL;
	uint32_t x178 = 1385U;
	static int16_t x179 = 0;
	int64_t x180 = -2573LL;
	static volatile int32_t t39 = 493556424;

    t39 = (x177!=((x178-x179)>x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x181 = 21917U;
	uint16_t x182 = UINT16_MAX;
	uint64_t x184 = 732343909362805609LLU;
	volatile int32_t t40 = -2;

    t40 = (x181!=((x182-x183)>x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x185 = INT32_MIN;
	uint32_t x186 = 8175651U;
	static volatile int64_t x188 = INT64_MAX;
	int32_t t41 = -99;

    t41 = (x185!=((x186-x187)>x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x189 = -1;
	int64_t x190 = 7LL;
	uint8_t x192 = 53U;
	volatile int32_t t42 = 1797244;

    t42 = (x189!=((x190-x191)>x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x193 = INT32_MAX;
	static uint16_t x194 = 1U;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t43 = 3808;

    t43 = (x193!=((x194-x195)>x196));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x197 = -1;
	uint16_t x199 = 0U;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t44 = -456609725;

    t44 = (x197!=((x198-x199)>x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x201 = -1;
	uint16_t x202 = 11572U;
	static uint64_t x203 = UINT64_MAX;
	int32_t x204 = INT32_MAX;
	static volatile int32_t t45 = -14506008;

    t45 = (x201!=((x202-x203)>x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x205 = 1288U;
	int16_t x206 = INT16_MIN;
	volatile uint32_t x207 = UINT32_MAX;
	int64_t x208 = INT64_MAX;
	int32_t t46 = 859972;

    t46 = (x205!=((x206-x207)>x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MIN;
	static int16_t x210 = -1;
	volatile int16_t x211 = INT16_MAX;
	uint32_t x212 = 110421213U;

    t47 = (x209!=((x210-x211)>x212));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x215 = -29823232288169827LL;
	volatile int8_t x216 = INT8_MIN;

    t48 = (x213!=((x214-x215)>x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x217 = 49150;
	int8_t x219 = INT8_MAX;
	uint8_t x220 = UINT8_MAX;
	static int32_t t49 = -44155832;

    t49 = (x217!=((x218-x219)>x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = 10094162265216LL;
	static volatile uint32_t x222 = UINT32_MAX;
	int32_t x223 = 0;
	int16_t x224 = -1;
	volatile int32_t t50 = 975925;

    t50 = (x221!=((x222-x223)>x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x225 = UINT64_MAX;
	int64_t x227 = -27LL;
	static volatile int64_t x228 = INT64_MIN;
	int32_t t51 = -8;

    t51 = (x225!=((x226-x227)>x228));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x229 = INT64_MAX;
	volatile int32_t x230 = INT32_MIN;
	static int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MAX;

    t52 = (x229!=((x230-x231)>x232));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x233 = INT16_MIN;
	uint8_t x234 = 36U;
	uint16_t x235 = 137U;
	static uint32_t x236 = UINT32_MAX;
	int32_t t53 = 10001;

    t53 = (x233!=((x234-x235)>x236));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x237 = INT64_MAX;
	static uint64_t x238 = 3590720LLU;
	int64_t x239 = INT64_MIN;
	int8_t x240 = 0;
	volatile int32_t t54 = 319;

    t54 = (x237!=((x238-x239)>x240));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x241 = -1;
	int8_t x242 = INT8_MIN;
	int32_t t55 = -933481;

    t55 = (x241!=((x242-x243)>x244));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x246 = 8577458796211822LLU;
	uint8_t x248 = UINT8_MAX;
	static int32_t t56 = 145988;

    t56 = (x245!=((x246-x247)>x248));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x249 = -6948737215703745LL;
	volatile int8_t x250 = -1;
	int16_t x251 = INT16_MAX;
	int64_t x252 = -1LL;
	volatile int32_t t57 = -15;

    t57 = (x249!=((x250-x251)>x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x253 = INT32_MAX;
	static uint16_t x254 = UINT16_MAX;
	int8_t x255 = -1;
	int8_t x256 = INT8_MIN;
	int32_t t58 = 146;

    t58 = (x253!=((x254-x255)>x256));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x257 = 1171;
	uint16_t x258 = UINT16_MAX;
	uint32_t x259 = 4148U;
	uint64_t x260 = 4267898413411875LLU;
	int32_t t59 = 149;

    t59 = (x257!=((x258-x259)>x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x261 = INT64_MAX;
	uint8_t x263 = 3U;
	int8_t x264 = 1;
	static volatile int32_t t60 = 206989;

    t60 = (x261!=((x262-x263)>x264));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x265 = INT8_MAX;
	static int64_t x266 = INT64_MIN;
	static volatile int32_t t61 = 6;

    t61 = (x265!=((x266-x267)>x268));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	int32_t x272 = 112;
	int32_t t62 = 105;

    t62 = (x269!=((x270-x271)>x272));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x273 = 24LL;
	int32_t x274 = -472280899;
	static uint32_t x275 = UINT32_MAX;
	int16_t x276 = -1;
	volatile int32_t t63 = -266751870;

    t63 = (x273!=((x274-x275)>x276));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x277 = -39;
	int32_t x278 = INT32_MIN;
	int64_t x279 = -1LL;
	static uint16_t x280 = 74U;
	int32_t t64 = 6;

    t64 = (x277!=((x278-x279)>x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x281 = INT64_MAX;
	int8_t x282 = INT8_MIN;
	uint64_t x283 = 831891685939239LLU;
	int8_t x284 = INT8_MIN;

    t65 = (x281!=((x282-x283)>x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x285 = INT32_MIN;
	int8_t x287 = -1;
	int64_t x288 = -1LL;

    t66 = (x285!=((x286-x287)>x288));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x289 = 6U;
	int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = 2844U;
	volatile int32_t t67 = 248587623;

    t67 = (x289!=((x290-x291)>x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	volatile int16_t x295 = -36;
	volatile int16_t x296 = -1;
	volatile int32_t t68 = -33368;

    t68 = (x293!=((x294-x295)>x296));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x301 = INT32_MIN;
	static uint16_t x302 = 1U;
	uint32_t x303 = 433287U;
	volatile int32_t x304 = -1;
	int32_t t69 = 143666;

    t69 = (x301!=((x302-x303)>x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = -1;
	int64_t x314 = INT64_MIN;
	volatile uint16_t x315 = 0U;
	uint16_t x316 = UINT16_MAX;

    t70 = (x313!=((x314-x315)>x316));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x317 = INT8_MIN;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	volatile int32_t t71 = 1;

    t71 = (x317!=((x318-x319)>x320));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x321 = INT16_MIN;
	int8_t x322 = -45;
	static int32_t x323 = -1;
	int32_t x324 = -1352030;
	volatile int32_t t72 = -694;

    t72 = (x321!=((x322-x323)>x324));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x325 = 98U;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MIN;

    t73 = (x325!=((x326-x327)>x328));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x329 = INT32_MIN;
	volatile int8_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	int64_t x332 = -3373LL;
	volatile int32_t t74 = -603701388;

    t74 = (x329!=((x330-x331)>x332));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x333 = INT8_MIN;
	int64_t x334 = INT64_MIN;
	int16_t x335 = -92;
	int32_t t75 = -1;

    t75 = (x333!=((x334-x335)>x336));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x337 = 2495U;
	static volatile int32_t x338 = 15223;
	uint32_t x339 = 87U;
	int16_t x340 = INT16_MIN;
	volatile int32_t t76 = 276703;

    t76 = (x337!=((x338-x339)>x340));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x341 = INT8_MIN;
	volatile uint64_t x342 = 19948448LLU;
	int32_t x343 = -32577;
	uint64_t x344 = 72618120784482LLU;
	int32_t t77 = 1;

    t77 = (x341!=((x342-x343)>x344));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x345 = UINT16_MAX;
	int64_t x346 = -2291LL;
	volatile uint64_t x347 = UINT64_MAX;
	volatile int64_t x348 = 7853LL;
	volatile int32_t t78 = -120641;

    t78 = (x345!=((x346-x347)>x348));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x349 = INT8_MIN;
	volatile uint64_t x350 = UINT64_MAX;
	static uint64_t x351 = 4059855335801LLU;
	int32_t t79 = -726905049;

    t79 = (x349!=((x350-x351)>x352));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x354 = 0U;
	uint64_t x355 = 211550LLU;
	int16_t x356 = -1;
	int32_t t80 = 107871292;

    t80 = (x353!=((x354-x355)>x356));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x360 = -1LL;
	volatile int32_t t81 = 477;

    t81 = (x357!=((x358-x359)>x360));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x361 = -11161;
	int32_t x362 = INT32_MIN;
	int32_t x364 = 3779603;
	int32_t t82 = 1721620;

    t82 = (x361!=((x362-x363)>x364));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x365 = 4U;
	int32_t x366 = -1;
	volatile uint16_t x368 = 20134U;
	volatile int32_t t83 = 14210213;

    t83 = (x365!=((x366-x367)>x368));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x369 = 13259867LLU;
	volatile int64_t x372 = INT64_MIN;
	int32_t t84 = -206;

    t84 = (x369!=((x370-x371)>x372));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x380 = 40U;

    t85 = (x377!=((x378-x379)>x380));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x381 = INT32_MIN;
	volatile int32_t x382 = -1030409477;
	volatile uint64_t x383 = UINT64_MAX;
	int16_t x384 = -2297;
	volatile int32_t t86 = 1047209;

    t86 = (x381!=((x382-x383)>x384));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MIN;
	int32_t x387 = 15342302;
	uint8_t x388 = UINT8_MAX;

    t87 = (x385!=((x386-x387)>x388));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x389 = INT16_MAX;
	int32_t x390 = -1;
	static uint32_t x391 = UINT32_MAX;
	uint32_t x392 = 12U;
	volatile int32_t t88 = -3867455;

    t88 = (x389!=((x390-x391)>x392));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x393 = -1;
	uint16_t x395 = 70U;
	uint8_t x396 = 99U;
	int32_t t89 = -30978;

    t89 = (x393!=((x394-x395)>x396));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x397 = INT32_MIN;
	volatile int64_t x398 = 310907LL;
	int16_t x400 = 0;
	static int32_t t90 = -150759;

    t90 = (x397!=((x398-x399)>x400));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x401 = 2U;
	int32_t x402 = 98928;
	uint64_t x403 = 2000016653819567LLU;
	int32_t x404 = INT32_MIN;
	volatile int32_t t91 = -190;

    t91 = (x401!=((x402-x403)>x404));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x405 = INT64_MIN;
	int32_t t92 = -440;

    t92 = (x405!=((x406-x407)>x408));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x409 = -1;
	int16_t x410 = INT16_MAX;
	volatile int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MAX;
	volatile int32_t t93 = -3145;

    t93 = (x409!=((x410-x411)>x412));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x414 = -179772789662LL;
	int64_t x415 = 6790062LL;
	int16_t x416 = INT16_MAX;
	volatile int32_t t94 = 139002;

    t94 = (x413!=((x414-x415)>x416));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x417 = INT32_MIN;
	static uint32_t x418 = UINT32_MAX;
	int32_t x419 = 1664776;
	volatile int8_t x420 = -1;
	static volatile int32_t t95 = 219645;

    t95 = (x417!=((x418-x419)>x420));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x421 = 362950753U;
	int16_t x422 = INT16_MIN;

    t96 = (x421!=((x422-x423)>x424));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x425 = -1;
	volatile int32_t x427 = -228;
	int64_t x428 = INT64_MIN;
	volatile int32_t t97 = 0;

    t97 = (x425!=((x426-x427)>x428));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x431 = 21U;
	uint8_t x432 = 5U;
	int32_t t98 = -138780098;

    t98 = (x429!=((x430-x431)>x432));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x441 = -1LL;
	static int32_t x442 = -3;
	int32_t x443 = -1;
	int8_t x444 = -1;
	int32_t t99 = 15118813;

    t99 = (x441!=((x442-x443)>x444));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x449 = INT16_MIN;
	int16_t x451 = INT16_MIN;
	uint64_t x452 = UINT64_MAX;

    t100 = (x449!=((x450-x451)>x452));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x454 = -1LL;
	uint16_t x455 = 7689U;
	int32_t t101 = 4528;

    t101 = (x453!=((x454-x455)>x456));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x457 = INT16_MIN;
	int32_t x458 = INT32_MIN;
	volatile uint32_t x459 = 1145040051U;
	uint64_t x460 = 8380267929366351146LLU;
	int32_t t102 = -23274481;

    t102 = (x457!=((x458-x459)>x460));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x461 = -2008897;
	uint8_t x462 = 0U;
	volatile int8_t x463 = INT8_MIN;
	uint64_t x464 = 60599785LLU;

    t103 = (x461!=((x462-x463)>x464));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x465 = 49LLU;
	int64_t x466 = -1LL;
	uint64_t x467 = 3689LLU;
	uint64_t x468 = 41422LLU;
	static int32_t t104 = 853;

    t104 = (x465!=((x466-x467)>x468));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x469 = INT16_MIN;
	int64_t x471 = 71891912488033345LL;
	uint32_t x472 = 1304U;
	int32_t t105 = 7;

    t105 = (x469!=((x470-x471)>x472));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x473 = INT8_MIN;
	int32_t x474 = 2911497;
	uint8_t x475 = UINT8_MAX;
	int8_t x476 = INT8_MIN;
	int32_t t106 = -5030;

    t106 = (x473!=((x474-x475)>x476));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x478 = 3LLU;
	uint16_t x479 = UINT16_MAX;
	int16_t x480 = INT16_MAX;

    t107 = (x477!=((x478-x479)>x480));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x482 = -40;
	static uint32_t x483 = 9U;
	static uint16_t x484 = 100U;
	static int32_t t108 = 144;

    t108 = (x481!=((x482-x483)>x484));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x485 = 7LLU;
	int8_t x486 = INT8_MIN;
	int32_t t109 = -556;

    t109 = (x485!=((x486-x487)>x488));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x493 = 13138328;
	int64_t x494 = INT64_MAX;
	int8_t x495 = 56;
	uint32_t x496 = UINT32_MAX;
	volatile int32_t t110 = -25980023;

    t110 = (x493!=((x494-x495)>x496));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x497 = UINT64_MAX;
	int64_t x498 = INT64_MIN;
	int64_t x499 = -1LL;
	static int64_t x500 = INT64_MIN;
	volatile int32_t t111 = 468;

    t111 = (x497!=((x498-x499)>x500));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x505 = UINT8_MAX;
	int16_t x506 = -1979;
	uint16_t x507 = 359U;
	int8_t x508 = -10;
	int32_t t112 = 84695;

    t112 = (x505!=((x506-x507)>x508));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x509 = 7583495669LL;
	static uint16_t x510 = 1887U;
	int8_t x511 = -1;
	static uint64_t x512 = 389549059891436LLU;
	volatile int32_t t113 = 39;

    t113 = (x509!=((x510-x511)>x512));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x515 = UINT32_MAX;
	int32_t t114 = -754213146;

    t114 = (x513!=((x514-x515)>x516));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = 91;
	static volatile uint64_t x518 = 182391290777802354LLU;
	int32_t x519 = INT32_MIN;
	uint8_t x520 = 46U;

    t115 = (x517!=((x518-x519)>x520));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x521 = 1U;
	int16_t x524 = -1;
	int32_t t116 = 2;

    t116 = (x521!=((x522-x523)>x524));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x525 = INT64_MIN;
	int8_t x527 = INT8_MIN;
	volatile int16_t x528 = -1;
	int32_t t117 = 0;

    t117 = (x525!=((x526-x527)>x528));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x529 = 4669570LL;
	int16_t x530 = 2;
	uint32_t x531 = UINT32_MAX;
	volatile int64_t x532 = 5476430948LL;
	int32_t t118 = 14514825;

    t118 = (x529!=((x530-x531)>x532));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x533 = UINT8_MAX;
	uint8_t x534 = 3U;
	int16_t x536 = INT16_MAX;
	static volatile int32_t t119 = -3717773;

    t119 = (x533!=((x534-x535)>x536));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x538 = -13;
	volatile int64_t x539 = INT64_MIN;
	int32_t t120 = 556229755;

    t120 = (x537!=((x538-x539)>x540));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x541 = INT32_MIN;
	uint32_t x543 = 229543U;
	int32_t x544 = -1;

    t121 = (x541!=((x542-x543)>x544));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x546 = 0U;

    t122 = (x545!=((x546-x547)>x548));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x549 = 60U;
	uint64_t x550 = 19707926787LLU;
	int32_t x551 = 315;
	int32_t x552 = INT32_MAX;
	volatile int32_t t123 = -171225402;

    t123 = (x549!=((x550-x551)>x552));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x553 = 0;
	static uint32_t x554 = UINT32_MAX;
	volatile int16_t x555 = INT16_MIN;
	int32_t x556 = -1;

    t124 = (x553!=((x554-x555)>x556));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x557 = INT32_MIN;
	volatile int16_t x559 = INT16_MAX;
	uint64_t x560 = 74423285771854LLU;
	int32_t t125 = 23;

    t125 = (x557!=((x558-x559)>x560));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x561 = -1304;
	uint8_t x562 = UINT8_MAX;
	static uint32_t x563 = 1762U;
	int32_t t126 = -15567;

    t126 = (x561!=((x562-x563)>x564));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x565 = INT8_MIN;
	int64_t x566 = 1029LL;
	int32_t t127 = -17960;

    t127 = (x565!=((x566-x567)>x568));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x577 = INT8_MIN;
	int8_t x578 = INT8_MAX;
	uint16_t x579 = UINT16_MAX;
	int32_t t128 = -26357455;

    t128 = (x577!=((x578-x579)>x580));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x581 = UINT8_MAX;
	static int32_t x582 = INT32_MIN;
	int16_t x584 = -417;
	int32_t t129 = -1018;

    t129 = (x581!=((x582-x583)>x584));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x585 = 1;
	uint32_t x586 = 6629U;
	int32_t x587 = INT32_MIN;
	static int64_t x588 = INT64_MIN;
	static volatile int32_t t130 = -124978;

    t130 = (x585!=((x586-x587)>x588));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x589 = INT64_MIN;
	uint64_t x590 = UINT64_MAX;
	volatile int32_t t131 = 20691;

    t131 = (x589!=((x590-x591)>x592));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x593 = 25360;
	uint8_t x594 = 59U;
	uint8_t x595 = 80U;
	volatile int64_t x596 = INT64_MIN;
	volatile int32_t t132 = -5971296;

    t132 = (x593!=((x594-x595)>x596));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x603 = INT16_MIN;
	int8_t x604 = 25;
	static int32_t t133 = -230;

    t133 = (x601!=((x602-x603)>x604));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x605 = -1LL;
	int16_t x606 = INT16_MIN;
	volatile uint16_t x607 = 14472U;
	static int8_t x608 = INT8_MIN;

    t134 = (x605!=((x606-x607)>x608));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x617 = INT64_MAX;
	uint64_t x620 = 21471927118341LLU;
	static int32_t t135 = -1;

    t135 = (x617!=((x618-x619)>x620));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x622 = 1830810U;
	int32_t x623 = -1;
	uint8_t x624 = 3U;

    t136 = (x621!=((x622-x623)>x624));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x626 = -1;
	int16_t x627 = INT16_MAX;
	static int16_t x628 = -1;
	int32_t t137 = -1;

    t137 = (x625!=((x626-x627)>x628));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x629 = UINT8_MAX;
	static uint8_t x630 = UINT8_MAX;
	static volatile int64_t x631 = -2054841869470259LL;
	uint64_t x632 = UINT64_MAX;
	int32_t t138 = 0;

    t138 = (x629!=((x630-x631)>x632));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x633 = INT32_MIN;
	volatile int16_t x634 = 141;
	int32_t t139 = -500690887;

    t139 = (x633!=((x634-x635)>x636));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x637 = UINT16_MAX;
	int8_t x639 = INT8_MIN;
	int8_t x640 = INT8_MIN;
	int32_t t140 = -17;

    t140 = (x637!=((x638-x639)>x640));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x645 = INT64_MIN;
	uint32_t x646 = UINT32_MAX;
	static int64_t x648 = 44174355440911LL;
	int32_t t141 = -483062;

    t141 = (x645!=((x646-x647)>x648));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x653 = 3319U;
	static int8_t x654 = INT8_MAX;
	int16_t x655 = 15274;
	volatile uint8_t x656 = UINT8_MAX;
	int32_t t142 = -803246048;

    t142 = (x653!=((x654-x655)>x656));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x659 = -1;
	volatile uint64_t x660 = UINT64_MAX;
	volatile int32_t t143 = -41282;

    t143 = (x657!=((x658-x659)>x660));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x662 = INT16_MIN;
	static volatile int8_t x663 = INT8_MAX;
	int16_t x664 = INT16_MIN;

    t144 = (x661!=((x662-x663)>x664));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x665 = INT16_MAX;
	static int8_t x666 = 15;
	static int32_t x667 = -837127;
	int32_t t145 = -1;

    t145 = (x665!=((x666-x667)>x668));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x669 = -1LL;
	static volatile uint64_t x670 = UINT64_MAX;
	volatile uint64_t x671 = UINT64_MAX;
	int8_t x672 = 1;
	static volatile int32_t t146 = -90486717;

    t146 = (x669!=((x670-x671)>x672));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x673 = INT8_MAX;
	volatile int64_t x674 = INT64_MIN;
	int32_t x675 = INT32_MIN;
	int16_t x676 = -1;
	static int32_t t147 = 3293699;

    t147 = (x673!=((x674-x675)>x676));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x678 = -7598;
	int32_t x679 = INT32_MIN;
	int16_t x680 = INT16_MIN;
	int32_t t148 = 2024;

    t148 = (x677!=((x678-x679)>x680));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x681 = -1;
	uint16_t x682 = UINT16_MAX;
	int16_t x683 = INT16_MAX;
	int32_t t149 = -6631503;

    t149 = (x681!=((x682-x683)>x684));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x689 = INT32_MIN;
	int16_t x690 = INT16_MIN;
	int8_t x691 = INT8_MAX;
	int32_t x692 = INT32_MIN;
	static volatile int32_t t150 = 30036;

    t150 = (x689!=((x690-x691)>x692));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x693 = 31826U;
	volatile int64_t x694 = -1LL;
	uint64_t x695 = 114451LLU;
	static uint32_t x696 = 22179376U;
	int32_t t151 = -53073;

    t151 = (x693!=((x694-x695)>x696));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x698 = INT16_MIN;
	int16_t x699 = INT16_MIN;
	static int32_t t152 = 1;

    t152 = (x697!=((x698-x699)>x700));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x705 = INT32_MIN;
	volatile uint16_t x706 = UINT16_MAX;
	uint64_t x707 = UINT64_MAX;
	static int16_t x708 = -44;
	static volatile int32_t t153 = 2;

    t153 = (x705!=((x706-x707)>x708));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x710 = -1;
	uint64_t x711 = 15321979167989LLU;
	static int32_t t154 = -6;

    t154 = (x709!=((x710-x711)>x712));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x713 = -13;
	volatile int16_t x714 = -1;
	uint64_t x715 = UINT64_MAX;
	int32_t x716 = INT32_MIN;
	static int32_t t155 = 2848;

    t155 = (x713!=((x714-x715)>x716));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x717 = INT16_MAX;
	volatile int64_t x719 = -2697747622963LL;
	uint16_t x720 = 15U;
	int32_t t156 = -122;

    t156 = (x717!=((x718-x719)>x720));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x725 = 1230989575824LL;
	uint16_t x726 = 23U;
	int64_t x727 = 1LL;
	int32_t t157 = 1;

    t157 = (x725!=((x726-x727)>x728));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x730 = -1LL;
	int32_t x732 = INT32_MIN;

    t158 = (x729!=((x730-x731)>x732));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x733 = 57166U;
	volatile int64_t x736 = -111LL;
	int32_t t159 = 0;

    t159 = (x733!=((x734-x735)>x736));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x737 = 19788147527LLU;
	uint32_t x739 = UINT32_MAX;
	uint64_t x740 = UINT64_MAX;

    t160 = (x737!=((x738-x739)>x740));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x741 = 473;
	int16_t x742 = INT16_MIN;
	int16_t x744 = INT16_MIN;
	volatile int32_t t161 = 3733940;

    t161 = (x741!=((x742-x743)>x744));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x745 = 783LLU;
	static int8_t x746 = INT8_MIN;
	static volatile int8_t x747 = 3;
	int64_t x748 = INT64_MIN;
	volatile int32_t t162 = 42466466;

    t162 = (x745!=((x746-x747)>x748));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x749 = 364168257LLU;
	static uint8_t x750 = UINT8_MAX;
	static uint64_t x751 = 285317037602LLU;
	static int8_t x752 = -1;
	int32_t t163 = -3553036;

    t163 = (x749!=((x750-x751)>x752));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x755 = 2877228LL;
	static int8_t x756 = INT8_MAX;
	static volatile int32_t t164 = -5;

    t164 = (x753!=((x754-x755)>x756));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x757 = 1U;
	int8_t x758 = -1;
	uint16_t x759 = 368U;
	int32_t x760 = INT32_MIN;
	volatile int32_t t165 = 414612;

    t165 = (x757!=((x758-x759)>x760));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x761 = 2;
	uint16_t x762 = 298U;
	static uint32_t x763 = 7291U;
	int32_t t166 = 1;

    t166 = (x761!=((x762-x763)>x764));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x765 = -1;
	int16_t x767 = -60;
	static int16_t x768 = 7687;
	volatile int32_t t167 = 848151;

    t167 = (x765!=((x766-x767)>x768));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x770 = 3183;
	static volatile int16_t x771 = INT16_MIN;
	static int8_t x772 = INT8_MIN;
	volatile int32_t t168 = -6907;

    t168 = (x769!=((x770-x771)>x772));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x773 = UINT8_MAX;
	uint16_t x774 = UINT16_MAX;
	int8_t x775 = -1;
	static int16_t x776 = INT16_MIN;

    t169 = (x773!=((x774-x775)>x776));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x781 = 26357U;
	volatile int8_t x783 = INT8_MIN;
	int64_t x784 = INT64_MAX;
	static volatile int32_t t170 = 0;

    t170 = (x781!=((x782-x783)>x784));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x785 = -1;
	int8_t x786 = INT8_MAX;
	uint16_t x787 = 27U;
	int32_t x788 = INT32_MAX;
	volatile int32_t t171 = 78632;

    t171 = (x785!=((x786-x787)>x788));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint64_t x789 = 56060571LLU;
	int16_t x790 = INT16_MAX;

    t172 = (x789!=((x790-x791)>x792));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x793 = 11406U;
	uint16_t x794 = UINT16_MAX;
	uint16_t x795 = UINT16_MAX;

    t173 = (x793!=((x794-x795)>x796));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x797 = UINT16_MAX;
	int16_t x798 = -13;
	int32_t x799 = -1;
	uint16_t x800 = UINT16_MAX;
	int32_t t174 = -105;

    t174 = (x797!=((x798-x799)>x800));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x802 = -1;
	int8_t x803 = INT8_MIN;
	volatile int32_t x804 = 2235082;
	int32_t t175 = 60;

    t175 = (x801!=((x802-x803)>x804));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x805 = -1;
	int64_t x807 = -1LL;
	int64_t x808 = 9218692298083LL;
	volatile int32_t t176 = -121347;

    t176 = (x805!=((x806-x807)>x808));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x813 = 53;
	int16_t x814 = -1;
	static int32_t x816 = 240434105;
	int32_t t177 = 773584;

    t177 = (x813!=((x814-x815)>x816));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x817 = -48;
	int64_t x818 = INT64_MIN;
	int32_t x819 = INT32_MIN;
	uint32_t x820 = UINT32_MAX;

    t178 = (x817!=((x818-x819)>x820));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x822 = -62;
	uint32_t x823 = 7U;
	volatile uint32_t x824 = 10U;
	static volatile int32_t t179 = 902931;

    t179 = (x821!=((x822-x823)>x824));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x825 = INT16_MAX;
	int64_t x826 = -1LL;
	uint16_t x827 = 32028U;
	static int16_t x828 = -48;
	static volatile int32_t t180 = -95426;

    t180 = (x825!=((x826-x827)>x828));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x829 = INT32_MIN;
	int8_t x830 = INT8_MIN;
	static uint16_t x832 = UINT16_MAX;
	volatile int32_t t181 = 180528623;

    t181 = (x829!=((x830-x831)>x832));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x833 = INT16_MIN;
	static volatile int16_t x834 = 112;
	uint8_t x835 = 1U;
	static uint32_t x836 = 205793132U;
	volatile int32_t t182 = 2265;

    t182 = (x833!=((x834-x835)>x836));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x837 = -3290551659711900413LL;
	int16_t x838 = INT16_MAX;
	volatile int32_t t183 = -374095732;

    t183 = (x837!=((x838-x839)>x840));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x842 = INT32_MIN;
	static uint32_t x843 = UINT32_MAX;
	int64_t x844 = INT64_MAX;
	int32_t t184 = 63;

    t184 = (x841!=((x842-x843)>x844));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x845 = -1;
	uint8_t x846 = 0U;
	uint8_t x848 = UINT8_MAX;

    t185 = (x845!=((x846-x847)>x848));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint64_t x857 = 69LLU;
	uint32_t x858 = 39237U;
	static int64_t x859 = -528752745LL;
	int32_t x860 = -1;
	volatile int32_t t186 = -27;

    t186 = (x857!=((x858-x859)>x860));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x862 = UINT32_MAX;
	static int16_t x863 = INT16_MIN;
	int8_t x864 = 1;
	int32_t t187 = 552620232;

    t187 = (x861!=((x862-x863)>x864));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x867 = UINT8_MAX;
	static uint8_t x868 = 0U;
	volatile int32_t t188 = -22690582;

    t188 = (x865!=((x866-x867)>x868));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x869 = INT64_MIN;
	uint8_t x870 = UINT8_MAX;
	static int32_t x871 = INT32_MAX;
	int8_t x872 = -1;

    t189 = (x869!=((x870-x871)>x872));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x873 = UINT16_MAX;
	static volatile uint8_t x874 = UINT8_MAX;
	int64_t x875 = 138028LL;

    t190 = (x873!=((x874-x875)>x876));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x877 = INT8_MIN;
	uint64_t x878 = 2584079268449LLU;
	static volatile int32_t t191 = 30048580;

    t191 = (x877!=((x878-x879)>x880));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x881 = -466LL;
	int8_t x882 = INT8_MAX;
	volatile int32_t t192 = -2;

    t192 = (x881!=((x882-x883)>x884));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x886 = INT8_MIN;
	static volatile int32_t x887 = -886198102;
	volatile int32_t t193 = 245467;

    t193 = (x885!=((x886-x887)>x888));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x893 = INT8_MIN;
	volatile int64_t x895 = -201803339093LL;
	static volatile int32_t x896 = -1;
	int32_t t194 = -4;

    t194 = (x893!=((x894-x895)>x896));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x897 = INT64_MIN;
	volatile uint8_t x898 = 107U;
	uint8_t x899 = UINT8_MAX;
	uint64_t x900 = 112620249LLU;
	int32_t t195 = 24346662;

    t195 = (x897!=((x898-x899)>x900));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x901 = INT32_MIN;
	uint8_t x902 = 34U;
	static volatile int16_t x903 = INT16_MIN;
	uint64_t x904 = 16316894484081LLU;
	volatile int32_t t196 = -96305;

    t196 = (x901!=((x902-x903)>x904));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x909 = 7905189499152112113LLU;
	int32_t x910 = INT32_MAX;
	volatile int32_t x911 = INT32_MAX;
	uint64_t x912 = 114563550127942757LLU;
	volatile int32_t t197 = -18619336;

    t197 = (x909!=((x910-x911)>x912));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x913 = -1;
	volatile int8_t x914 = INT8_MAX;
	int8_t x915 = INT8_MAX;
	int32_t x916 = INT32_MAX;
	int32_t t198 = 0;

    t198 = (x913!=((x914-x915)>x916));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x917 = INT8_MAX;
	volatile uint32_t x918 = 31U;
	static int64_t x919 = INT64_MAX;
	static int64_t x920 = INT64_MAX;
	static int32_t t199 = -1204133;

    t199 = (x917!=((x918-x919)>x920));

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

