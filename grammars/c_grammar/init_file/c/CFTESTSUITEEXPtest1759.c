
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

volatile uint16_t x2 = 0U;
uint16_t x6 = 2U;
static volatile int32_t t1 = -3;
static int32_t t3 = -25;
volatile uint32_t x21 = 185628U;
uint64_t x22 = 999467212769496591LLU;
int32_t x24 = -1;
int64_t x27 = -1180250LL;
int64_t x32 = INT64_MIN;
volatile int32_t t7 = -40173777;
volatile uint64_t x38 = 1548744LLU;
volatile uint64_t x42 = 15456186459964LLU;
int32_t t10 = 69166767;
static volatile int8_t x45 = INT8_MIN;
int32_t x49 = INT32_MIN;
int64_t x50 = -1LL;
int64_t x52 = -1LL;
int64_t x59 = -1980114368891371426LL;
int64_t x64 = INT64_MIN;
int8_t x71 = INT8_MIN;
static volatile int32_t t17 = 139148958;
int16_t x75 = -1;
volatile int32_t t18 = 0;
int32_t x84 = INT32_MIN;
int32_t t20 = 3;
int32_t x88 = 3152641;
static volatile int32_t x91 = 28058;
int32_t x94 = INT32_MAX;
volatile uint16_t x113 = 1U;
volatile int32_t x115 = 6383093;
volatile uint16_t x116 = UINT16_MAX;
static volatile int32_t t28 = -13214;
int32_t x122 = INT32_MIN;
int32_t t30 = -43;
int32_t x127 = -12754028;
uint8_t x129 = 0U;
static int8_t x136 = INT8_MIN;
uint16_t x139 = 652U;
uint64_t x152 = UINT64_MAX;
uint16_t x158 = 1941U;
static int8_t x159 = -1;
int64_t x175 = INT64_MAX;
int32_t x177 = 6586462;
volatile int32_t t47 = 7629582;
uint8_t x193 = 0U;
volatile int16_t x201 = -1;
int8_t x207 = 1;
int8_t x211 = 6;
static int16_t x212 = INT16_MIN;
int64_t x216 = INT64_MIN;
static volatile int32_t x219 = INT32_MAX;
int32_t x223 = INT32_MIN;
int64_t x230 = -1LL;
int64_t x232 = -1LL;
int32_t x236 = 89;
int32_t x238 = -34650;
int32_t t60 = -8336878;
uint16_t x246 = 5U;
uint8_t x250 = 30U;
int16_t x251 = -293;
static volatile int32_t t62 = 1;
int64_t x258 = INT64_MAX;
int64_t x262 = INT64_MAX;
uint8_t x265 = 52U;
static volatile int32_t t66 = -1956859;
static int64_t x272 = -748648764LL;
volatile int16_t x277 = 123;
int32_t t70 = -2;
static uint16_t x287 = 57U;
volatile int32_t t71 = 7005036;
static int32_t x295 = INT32_MIN;
int8_t x298 = INT8_MIN;
volatile int16_t x305 = INT16_MIN;
int8_t x306 = 3;
uint64_t x307 = 51204LLU;
static uint64_t x316 = 916571968032LLU;
uint16_t x320 = UINT16_MAX;
int16_t x323 = INT16_MAX;
int8_t x324 = -17;
static volatile int32_t x326 = 40755;
volatile int32_t t82 = -1;
int32_t x336 = -187445;
int16_t x340 = INT16_MIN;
int16_t x341 = INT16_MIN;
uint8_t x342 = 50U;
int16_t x347 = -9541;
uint32_t x351 = UINT32_MAX;
static uint16_t x354 = 24U;
uint32_t x359 = UINT32_MAX;
uint64_t x363 = 217082LLU;
int32_t x369 = -24962;
int8_t x371 = INT8_MIN;
int8_t x377 = 0;
uint32_t x379 = UINT32_MAX;
int64_t x380 = INT64_MIN;
int32_t t95 = 46220884;
volatile int64_t x385 = -1LL;
int32_t x387 = INT32_MIN;
uint8_t x389 = UINT8_MAX;
uint32_t x395 = 257840654U;
int16_t x408 = -1;
uint32_t x416 = 730U;
int64_t x417 = -338451725018824LL;
static volatile int64_t x418 = INT64_MAX;
volatile int64_t x423 = 105291798323751982LL;
volatile uint16_t x425 = UINT16_MAX;
int64_t x426 = INT64_MIN;
uint16_t x437 = 3U;
int64_t x448 = INT64_MIN;
int16_t x449 = INT16_MAX;
volatile int32_t t113 = -25;
static int64_t x457 = -1LL;
volatile int32_t t115 = -177;
uint32_t x466 = 982711U;
static int8_t x468 = -1;
int64_t x469 = INT64_MIN;
volatile int16_t x471 = -1;
volatile int64_t x472 = INT64_MIN;
static volatile int32_t x475 = -1;
uint8_t x478 = 4U;
int8_t x482 = INT8_MIN;
int32_t x486 = 9024405;
static volatile uint16_t x487 = 38U;
int32_t t121 = 11828313;
volatile int8_t x495 = INT8_MIN;
int32_t t123 = -9282;
uint64_t x497 = 0LLU;
int8_t x498 = 6;
int16_t x513 = -1;
uint32_t x514 = 8119610U;
static int8_t x516 = -1;
uint8_t x522 = UINT8_MAX;
static int64_t x530 = INT64_MIN;
int32_t t132 = 8885608;
volatile int16_t x533 = INT16_MIN;
static int32_t t133 = -939481277;
int32_t x537 = INT32_MAX;
static int32_t t135 = 11133108;
int64_t x547 = 8137743807827LL;
uint16_t x559 = 26530U;
uint64_t x562 = 628390115LLU;
int32_t x571 = INT32_MIN;
volatile int32_t t142 = 12;
int8_t x580 = 0;
int8_t x586 = INT8_MIN;
static volatile int64_t x596 = 836911341LL;
int8_t x597 = 6;
int32_t x609 = -1;
int32_t x614 = INT32_MIN;
volatile int32_t x622 = INT32_MIN;
volatile int16_t x623 = INT16_MIN;
static volatile int64_t x624 = INT64_MAX;
uint32_t x632 = 62U;
volatile uint64_t x640 = 4155249308512235388LLU;
int16_t x644 = INT16_MAX;
volatile int32_t t160 = 7062;
volatile uint8_t x648 = UINT8_MAX;
static volatile int32_t t161 = -1;
int16_t x651 = INT16_MIN;
uint32_t x669 = UINT32_MAX;
int8_t x674 = -1;
int32_t x676 = 243370587;
int32_t x681 = 522332824;
uint32_t x686 = 85336155U;
int32_t t171 = -281;
uint64_t x689 = 65673963556LLU;
volatile int32_t t172 = 9;
uint64_t x693 = UINT64_MAX;
volatile int16_t x704 = -1;
int32_t t177 = 43;
volatile uint32_t x714 = 51123U;
volatile int32_t t179 = 34918488;
static volatile int16_t x723 = 100;
int32_t t180 = 156;
uint16_t x725 = 4013U;
static uint64_t x727 = UINT64_MAX;
uint32_t x734 = 3U;
uint32_t x740 = 176957U;
volatile int64_t x742 = 372765965LL;
static uint32_t x744 = UINT32_MAX;
int32_t x747 = -1;
int16_t x749 = INT16_MIN;
uint32_t x757 = UINT32_MAX;
volatile int8_t x758 = -1;
static int32_t x759 = INT32_MIN;
static volatile int64_t x763 = 34LL;
int64_t x764 = -1LL;
volatile int8_t x769 = INT8_MIN;
int32_t t193 = -20897;
volatile int32_t t194 = 365992268;
int64_t x782 = 4221936490432732LL;
uint8_t x789 = 13U;
int16_t x790 = -1;
volatile int16_t x791 = INT16_MIN;
int16_t x792 = INT16_MAX;
static volatile int32_t t198 = 42485997;
uint8_t x797 = 105U;
uint16_t x800 = 177U;


void f0(void) {
    	static int8_t x1 = -1;
	volatile int8_t x3 = INT8_MIN;
	uint64_t x4 = UINT64_MAX;
	static int32_t t0 = 742127;

    t0 = (x1>((x2>x3)^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 1987431087503663160LL;
	int32_t x7 = INT32_MAX;
	uint8_t x8 = 1U;

    t1 = (x5>((x6>x7)^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	uint8_t x10 = 13U;
	int8_t x11 = 3;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 764;

    t2 = (x9>((x10>x11)^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -29813;
	uint64_t x14 = 251023982670965LLU;
	uint8_t x15 = UINT8_MAX;
	int64_t x16 = 29223LL;

    t3 = (x13>((x14>x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 82U;
	int64_t x18 = -1LL;
	int32_t x19 = 26702;
	int64_t x20 = -511032450LL;
	int32_t t4 = -260;

    t4 = (x17>((x18>x19)^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x23 = 168226U;
	static int32_t t5 = 115;

    t5 = (x21>((x22>x23)^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	volatile int32_t x26 = INT32_MAX;
	volatile int32_t x28 = INT32_MAX;
	int32_t t6 = 27510217;

    t6 = (x25>((x26>x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = -1;
	int64_t x30 = -3052226LL;
	static volatile uint32_t x31 = 7743396U;

    t7 = (x29>((x30>x31)^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = INT8_MAX;
	int8_t x35 = -6;
	uint64_t x36 = 143274924126LLU;
	volatile int32_t t8 = 851812;

    t8 = (x33>((x34>x35)^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 203LLU;
	static int16_t x39 = 24;
	static int16_t x40 = -482;
	static volatile int32_t t9 = 3358;

    t9 = (x37>((x38>x39)^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	volatile int16_t x43 = -1;
	int16_t x44 = -205;

    t10 = (x41>((x42>x43)^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x46 = -147515;
	uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 4U;
	volatile int32_t t11 = 2608;

    t11 = (x45>((x46>x47)^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x51 = 24U;
	static volatile int32_t t12 = 32739;

    t12 = (x49>((x50>x51)^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	volatile int16_t x54 = INT16_MIN;
	int32_t x55 = 2814;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 411688;

    t13 = (x53>((x54>x55)^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 3U;
	int16_t x58 = -1;
	int64_t x60 = 17826166415490455LL;
	volatile int32_t t14 = 734459;

    t14 = (x57>((x58>x59)^x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -438178949LL;
	int16_t x62 = INT16_MIN;
	static uint8_t x63 = 6U;
	volatile int32_t t15 = -12469;

    t15 = (x61>((x62>x63)^x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	static volatile int16_t x66 = -13;
	uint32_t x67 = 1425397919U;
	volatile int32_t x68 = -1;
	volatile int32_t t16 = 0;

    t16 = (x65>((x66>x67)^x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 0U;
	volatile int64_t x70 = INT64_MIN;
	uint32_t x72 = UINT32_MAX;

    t17 = (x69>((x70>x71)^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	int32_t x74 = -1;
	static int64_t x76 = INT64_MIN;

    t18 = (x73>((x74>x75)^x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 205U;
	volatile int16_t x78 = INT16_MAX;
	int64_t x79 = 49460727625491LL;
	int8_t x80 = -1;
	int32_t t19 = 161;

    t19 = (x77>((x78>x79)^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	uint16_t x82 = 192U;
	int32_t x83 = INT32_MIN;

    t20 = (x81>((x82>x83)^x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = UINT8_MAX;
	int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	static volatile int32_t t21 = -2110031;

    t21 = (x85>((x86>x87)^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MIN;
	volatile int32_t x90 = INT32_MIN;
	static int16_t x92 = 125;
	static volatile int32_t t22 = -7;

    t22 = (x89>((x90>x91)^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	uint16_t x95 = UINT16_MAX;
	uint8_t x96 = 3U;
	volatile int32_t t23 = 0;

    t23 = (x93>((x94>x95)^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	int64_t x98 = INT64_MAX;
	int16_t x99 = -286;
	uint32_t x100 = 0U;
	int32_t t24 = -23;

    t24 = (x97>((x98>x99)^x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1601889;
	int32_t x102 = INT32_MIN;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t25 = -2;

    t25 = (x101>((x102>x103)^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 7550LL;
	int16_t x106 = -2;
	static int16_t x107 = -8;
	static volatile int64_t x108 = -1LL;
	int32_t t26 = 74658;

    t26 = (x105>((x106>x107)^x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	uint64_t x111 = 3874758856819LLU;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = -10;

    t27 = (x109>((x110>x111)^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x114 = INT32_MIN;

    t28 = (x113>((x114>x115)^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 3U;
	volatile int32_t x118 = INT32_MAX;
	int64_t x119 = 454LL;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = -14;

    t29 = (x117>((x118>x119)^x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	volatile int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MIN;

    t30 = (x121>((x122>x123)^x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 14U;
	uint64_t x126 = 886326255997476LLU;
	uint16_t x128 = 3263U;
	volatile int32_t t31 = 0;

    t31 = (x125>((x126>x127)^x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x130 = INT32_MIN;
	volatile int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MIN;
	static volatile int32_t t32 = 14;

    t32 = (x129>((x130>x131)^x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	int64_t x134 = -1LL;
	volatile uint64_t x135 = UINT64_MAX;
	volatile int32_t t33 = 5;

    t33 = (x133>((x134>x135)^x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = INT8_MAX;
	uint64_t x138 = UINT64_MAX;
	uint16_t x140 = 21995U;
	int32_t t34 = 29765881;

    t34 = (x137>((x138>x139)^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x141 = 698100325U;
	volatile uint64_t x142 = 4958LLU;
	int64_t x143 = INT64_MIN;
	volatile int32_t x144 = INT32_MIN;
	int32_t t35 = 16070197;

    t35 = (x141>((x142>x143)^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 936U;
	int64_t x146 = INT64_MIN;
	static int32_t x147 = 12;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t36 = -1284;

    t36 = (x145>((x146>x147)^x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 4U;
	uint8_t x150 = 100U;
	int8_t x151 = INT8_MIN;
	volatile int32_t t37 = 0;

    t37 = (x149>((x150>x151)^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 52U;
	int32_t x154 = 1095307;
	uint16_t x155 = UINT16_MAX;
	int8_t x156 = 2;
	int32_t t38 = 431442;

    t38 = (x153>((x154>x155)^x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	int64_t x160 = -1LL;
	volatile int32_t t39 = 102115275;

    t39 = (x157>((x158>x159)^x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x161 = -1;
	int8_t x162 = -1;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = 412U;
	int32_t t40 = -99268376;

    t40 = (x161>((x162>x163)^x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -39;
	int64_t x166 = -24LL;
	volatile int8_t x167 = INT8_MIN;
	int64_t x168 = -8813310915LL;
	volatile int32_t t41 = 1;

    t41 = (x165>((x166>x167)^x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = UINT32_MAX;
	uint8_t x170 = UINT8_MAX;
	int16_t x171 = 2144;
	uint16_t x172 = 0U;
	int32_t t42 = -1912299;

    t42 = (x169>((x170>x171)^x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = INT8_MIN;
	int16_t x174 = 881;
	static int8_t x176 = INT8_MAX;
	volatile int32_t t43 = -249821;

    t43 = (x173>((x174>x175)^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = -1;
	int16_t x179 = -1;
	int16_t x180 = INT16_MAX;
	int32_t t44 = 7;

    t44 = (x177>((x178>x179)^x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	uint16_t x182 = 168U;
	int32_t x183 = -24000;
	volatile int32_t x184 = INT32_MAX;
	int32_t t45 = -7393830;

    t45 = (x181>((x182>x183)^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint32_t x185 = UINT32_MAX;
	int8_t x186 = INT8_MAX;
	int8_t x187 = INT8_MAX;
	uint32_t x188 = 37495577U;
	int32_t t46 = -4;

    t46 = (x185>((x186>x187)^x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -4358;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = 5;
	uint8_t x192 = 3U;

    t47 = (x189>((x190>x191)^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x194 = INT64_MAX;
	uint16_t x195 = 5U;
	int8_t x196 = INT8_MAX;
	int32_t t48 = 551177458;

    t48 = (x193>((x194>x195)^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = -26;
	static volatile int32_t x198 = -1;
	uint8_t x199 = UINT8_MAX;
	int32_t x200 = -1;
	int32_t t49 = 2;

    t49 = (x197>((x198>x199)^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = 1069991769U;
	static int8_t x203 = INT8_MAX;
	volatile int8_t x204 = -1;
	volatile int32_t t50 = 12358;

    t50 = (x201>((x202>x203)^x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = 1;
	volatile uint8_t x206 = 0U;
	static int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -20621016;

    t51 = (x205>((x206>x207)^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = -1LL;
	uint8_t x210 = UINT8_MAX;
	int32_t t52 = 0;

    t52 = (x209>((x210>x211)^x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -279191;
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = -6;
	static int32_t t53 = -13887696;

    t53 = (x213>((x214>x215)^x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = -1;
	int64_t x218 = INT64_MAX;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t54 = 58;

    t54 = (x217>((x218>x219)^x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t55 = 6;

    t55 = (x221>((x222>x223)^x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x225 = 382387391U;
	static volatile int8_t x226 = INT8_MIN;
	int16_t x227 = -54;
	static uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = -707859658;

    t56 = (x225>((x226>x227)^x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	static int32_t x231 = 705152394;
	static int32_t t57 = -110163699;

    t57 = (x229>((x230>x231)^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 1560U;
	volatile int16_t x234 = INT16_MIN;
	static int8_t x235 = -1;
	static volatile int32_t t58 = 54;

    t58 = (x233>((x234>x235)^x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 2U;
	int8_t x239 = 11;
	uint32_t x240 = 21U;
	int32_t t59 = 3;

    t59 = (x237>((x238>x239)^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = INT32_MIN;
	uint8_t x242 = 23U;
	uint16_t x243 = UINT16_MAX;
	int8_t x244 = INT8_MIN;

    t60 = (x241>((x242>x243)^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 123641582843LLU;
	static uint32_t x247 = 8U;
	volatile int8_t x248 = -1;
	volatile int32_t t61 = -1001812736;

    t61 = (x245>((x246>x247)^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = INT16_MAX;
	volatile int8_t x252 = 51;

    t62 = (x249>((x250>x251)^x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x253 = 8U;
	volatile int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	int16_t x256 = -1;
	int32_t t63 = -1;

    t63 = (x253>((x254>x255)^x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MIN;
	volatile uint32_t x259 = 564823U;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = -695;

    t64 = (x257>((x258>x259)^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = INT8_MIN;
	int64_t x263 = 20137113339730716LL;
	volatile int16_t x264 = -1;
	int32_t t65 = -11464;

    t65 = (x261>((x262>x263)^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = 33;
	int64_t x267 = INT64_MIN;
	static volatile int8_t x268 = -26;

    t66 = (x265>((x266>x267)^x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 460010124U;
	volatile uint64_t x270 = 146736143485426108LLU;
	static int64_t x271 = 4933828368368LL;
	volatile int32_t t67 = 20;

    t67 = (x269>((x270>x271)^x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x273 = 88096357227LL;
	static int64_t x274 = -1LL;
	volatile int64_t x275 = -1LL;
	int64_t x276 = -396LL;
	int32_t t68 = -4603;

    t68 = (x273>((x274>x275)^x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x278 = INT8_MAX;
	int16_t x279 = INT16_MIN;
	int64_t x280 = -1LL;
	volatile int32_t t69 = -912555024;

    t69 = (x277>((x278>x279)^x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x281 = 25U;
	static uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MIN;
	int64_t x284 = 5748290244947LL;

    t70 = (x281>((x282>x283)^x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MAX;
	volatile int16_t x286 = -655;
	volatile int8_t x288 = INT8_MIN;

    t71 = (x285>((x286>x287)^x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = UINT8_MAX;
	uint32_t x290 = UINT32_MAX;
	volatile int8_t x291 = 0;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = 34934080;

    t72 = (x289>((x290>x291)^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -2;
	int16_t x294 = INT16_MAX;
	static int16_t x296 = 158;
	int32_t t73 = -606524234;

    t73 = (x293>((x294>x295)^x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MAX;
	volatile int32_t x299 = INT32_MIN;
	int32_t x300 = INT32_MAX;
	int32_t t74 = 855832;

    t74 = (x297>((x298>x299)^x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	static uint32_t x302 = 464296U;
	static uint32_t x303 = UINT32_MAX;
	volatile int32_t x304 = INT32_MAX;
	volatile int32_t t75 = 1;

    t75 = (x301>((x302>x303)^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x308 = 11U;
	int32_t t76 = 11024607;

    t76 = (x305>((x306>x307)^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	int8_t x310 = INT8_MAX;
	uint64_t x311 = UINT64_MAX;
	int16_t x312 = 2;
	int32_t t77 = -69;

    t77 = (x309>((x310>x311)^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MAX;
	int32_t x314 = INT32_MIN;
	int16_t x315 = -7835;
	int32_t t78 = 0;

    t78 = (x313>((x314>x315)^x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 119U;
	volatile uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MAX;
	volatile int32_t t79 = 234797628;

    t79 = (x317>((x318>x319)^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 31LL;
	static uint32_t x322 = UINT32_MAX;
	volatile int32_t t80 = 1479647;

    t80 = (x321>((x322>x323)^x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x325 = 3085788U;
	int64_t x327 = INT64_MIN;
	volatile int16_t x328 = -52;
	int32_t t81 = 916696;

    t81 = (x325>((x326>x327)^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MAX;
	uint32_t x330 = 245195805U;
	int64_t x331 = INT64_MAX;
	int32_t x332 = 58078;

    t82 = (x329>((x330>x331)^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = 6408614862638LL;
	int32_t x334 = 253510942;
	uint64_t x335 = 522997985140200LLU;
	int32_t t83 = 37828;

    t83 = (x333>((x334>x335)^x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 2U;
	int32_t x338 = INT32_MIN;
	int8_t x339 = 62;
	int32_t t84 = -119936;

    t84 = (x337>((x338>x339)^x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x343 = 238;
	uint8_t x344 = 2U;
	int32_t t85 = 50234;

    t85 = (x341>((x342>x343)^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	uint16_t x346 = 3836U;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = -7666899;

    t86 = (x345>((x346>x347)^x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	int64_t x350 = INT64_MAX;
	static int64_t x352 = INT64_MIN;
	static volatile int32_t t87 = 8788;

    t87 = (x349>((x350>x351)^x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	static uint8_t x355 = 2U;
	volatile int64_t x356 = INT64_MIN;
	static int32_t t88 = 506;

    t88 = (x353>((x354>x355)^x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	volatile int16_t x358 = INT16_MAX;
	static uint64_t x360 = 5398366618169670LLU;
	volatile int32_t t89 = 14590;

    t89 = (x357>((x358>x359)^x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = -3LL;
	volatile uint64_t x362 = UINT64_MAX;
	volatile int32_t x364 = INT32_MIN;
	static int32_t t90 = -5026;

    t90 = (x361>((x362>x363)^x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -3;
	int32_t x366 = -267479682;
	int16_t x367 = INT16_MIN;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 767672213;

    t91 = (x365>((x366>x367)^x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x370 = 1;
	static volatile uint16_t x372 = 4U;
	static int32_t t92 = -42393450;

    t92 = (x369>((x370>x371)^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 1465;
	int16_t x374 = INT16_MAX;
	static int64_t x375 = INT64_MIN;
	static uint64_t x376 = 8282687432384201LLU;
	volatile int32_t t93 = 290407;

    t93 = (x373>((x374>x375)^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = INT16_MAX;
	int32_t t94 = 861;

    t94 = (x377>((x378>x379)^x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 27;
	static volatile uint16_t x382 = 15U;
	uint32_t x383 = 14376330U;
	int8_t x384 = INT8_MIN;

    t95 = (x381>((x382>x383)^x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = -1LL;
	static volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 3;

    t96 = (x385>((x386>x387)^x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x390 = 1680332;
	int16_t x391 = INT16_MIN;
	volatile uint8_t x392 = 1U;
	volatile int32_t t97 = -30608719;

    t97 = (x389>((x390>x391)^x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = 6;
	int8_t x394 = INT8_MIN;
	int64_t x396 = 8LL;
	volatile int32_t t98 = 120115;

    t98 = (x393>((x394>x395)^x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 2U;
	volatile int16_t x398 = 66;
	volatile int32_t x399 = -1;
	volatile uint32_t x400 = UINT32_MAX;
	int32_t t99 = -95112703;

    t99 = (x397>((x398>x399)^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 2;
	static uint8_t x402 = 5U;
	uint16_t x403 = UINT16_MAX;
	uint16_t x404 = 37U;
	int32_t t100 = -51284688;

    t100 = (x401>((x402>x403)^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	static int16_t x406 = INT16_MIN;
	static uint16_t x407 = UINT16_MAX;
	int32_t t101 = 43;

    t101 = (x405>((x406>x407)^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	int16_t x410 = INT16_MAX;
	int16_t x411 = -1;
	int16_t x412 = INT16_MAX;
	volatile int32_t t102 = 2544190;

    t102 = (x409>((x410>x411)^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 816489736987LLU;
	volatile int16_t x414 = -1;
	static volatile uint64_t x415 = 458130314478206LLU;
	volatile int32_t t103 = -7696861;

    t103 = (x413>((x414>x415)^x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x419 = INT64_MIN;
	volatile uint8_t x420 = UINT8_MAX;
	volatile int32_t t104 = -4073025;

    t104 = (x417>((x418>x419)^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 29U;
	uint64_t x422 = UINT64_MAX;
	int32_t x424 = -13229;
	int32_t t105 = 913;

    t105 = (x421>((x422>x423)^x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x427 = UINT8_MAX;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t106 = -13979;

    t106 = (x425>((x426>x427)^x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = INT8_MIN;
	int8_t x430 = -1;
	uint8_t x431 = UINT8_MAX;
	static uint8_t x432 = UINT8_MAX;
	volatile int32_t t107 = -64274;

    t107 = (x429>((x430>x431)^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	int64_t x434 = INT64_MIN;
	int64_t x435 = -1LL;
	int64_t x436 = -306268653370351LL;
	volatile int32_t t108 = 1048804205;

    t108 = (x433>((x434>x435)^x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 1088114304226LLU;
	uint8_t x439 = 4U;
	int32_t x440 = -248;
	volatile int32_t t109 = 21880505;

    t109 = (x437>((x438>x439)^x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = -12639460227LL;
	volatile int64_t x442 = -70984869185548414LL;
	int64_t x443 = -1LL;
	int16_t x444 = INT16_MIN;
	int32_t t110 = 12830369;

    t110 = (x441>((x442>x443)^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	int32_t x446 = -1000;
	int64_t x447 = INT64_MIN;
	volatile int32_t t111 = -2267;

    t111 = (x445>((x446>x447)^x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x450 = UINT8_MAX;
	uint16_t x451 = 111U;
	volatile int32_t x452 = -1;
	volatile int32_t t112 = 84734;

    t112 = (x449>((x450>x451)^x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 1178U;
	int64_t x454 = INT64_MIN;
	int64_t x455 = -252LL;
	int32_t x456 = INT32_MAX;

    t113 = (x453>((x454>x455)^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x458 = 4837112522LL;
	int8_t x459 = -1;
	static int64_t x460 = INT64_MAX;
	volatile int32_t t114 = 162;

    t114 = (x457>((x458>x459)^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x461 = INT8_MAX;
	static int8_t x462 = INT8_MIN;
	int64_t x463 = INT64_MIN;
	int8_t x464 = INT8_MAX;

    t115 = (x461>((x462>x463)^x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 1;
	volatile uint64_t x467 = UINT64_MAX;
	static volatile int32_t t116 = -212642;

    t116 = (x465>((x466>x467)^x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x470 = UINT16_MAX;
	volatile int32_t t117 = 88371192;

    t117 = (x469>((x470>x471)^x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -1LL;
	uint8_t x474 = UINT8_MAX;
	int32_t x476 = -1;
	static int32_t t118 = -87;

    t118 = (x473>((x474>x475)^x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	static int16_t x479 = -1;
	static int64_t x480 = -174LL;
	volatile int32_t t119 = -11095;

    t119 = (x477>((x478>x479)^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 9587617005LLU;
	int16_t x483 = 0;
	volatile uint8_t x484 = 43U;
	static volatile int32_t t120 = -432888727;

    t120 = (x481>((x482>x483)^x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x485 = 6002U;
	uint16_t x488 = UINT16_MAX;

    t121 = (x485>((x486>x487)^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 1U;
	uint32_t x490 = 694U;
	static int64_t x491 = INT64_MIN;
	uint8_t x492 = UINT8_MAX;
	volatile int32_t t122 = 121;

    t122 = (x489>((x490>x491)^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MAX;
	int16_t x494 = INT16_MIN;
	uint32_t x496 = UINT32_MAX;

    t123 = (x493>((x494>x495)^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x499 = UINT32_MAX;
	int32_t x500 = INT32_MAX;
	int32_t t124 = 976337;

    t124 = (x497>((x498>x499)^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x501 = UINT32_MAX;
	uint64_t x502 = 2610LLU;
	static int16_t x503 = -1;
	uint16_t x504 = 113U;
	volatile int32_t t125 = -14;

    t125 = (x501>((x502>x503)^x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 17796735U;
	volatile int64_t x506 = -42782LL;
	volatile int32_t x507 = -7588379;
	int32_t x508 = INT32_MIN;
	static volatile int32_t t126 = 1507;

    t126 = (x505>((x506>x507)^x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 42U;
	uint64_t x510 = UINT64_MAX;
	uint32_t x511 = 18U;
	int64_t x512 = INT64_MIN;
	volatile int32_t t127 = 2732;

    t127 = (x509>((x510>x511)^x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x515 = INT64_MAX;
	volatile int32_t t128 = 347810892;

    t128 = (x513>((x514>x515)^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x517 = UINT16_MAX;
	int64_t x518 = -305766593LL;
	uint16_t x519 = 208U;
	uint16_t x520 = 20297U;
	volatile int32_t t129 = -2650;

    t129 = (x517>((x518>x519)^x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = UINT8_MAX;
	volatile int64_t x523 = INT64_MAX;
	static volatile uint64_t x524 = 7LLU;
	int32_t t130 = 15502;

    t130 = (x521>((x522>x523)^x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = 131;
	int16_t x526 = INT16_MIN;
	static int32_t x527 = INT32_MIN;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t131 = -1004;

    t131 = (x525>((x526>x527)^x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = 2185051291LL;
	int8_t x531 = INT8_MAX;
	uint32_t x532 = 0U;

    t132 = (x529>((x530>x531)^x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x534 = 8256959122LLU;
	int32_t x535 = -628;
	volatile int32_t x536 = -1;

    t133 = (x533>((x534>x535)^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x538 = -1582;
	volatile int16_t x539 = 0;
	uint8_t x540 = UINT8_MAX;
	int32_t t134 = 5732789;

    t134 = (x537>((x538>x539)^x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = -30;
	int8_t x542 = 10;
	int8_t x543 = INT8_MAX;
	uint32_t x544 = 0U;

    t135 = (x541>((x542>x543)^x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	int8_t x546 = INT8_MIN;
	volatile int64_t x548 = -1LL;
	static int32_t t136 = 4;

    t136 = (x545>((x546>x547)^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = -1;
	int16_t x550 = INT16_MIN;
	volatile int32_t x551 = INT32_MAX;
	static int8_t x552 = -1;
	static volatile int32_t t137 = -110;

    t137 = (x549>((x550>x551)^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 618;
	static int16_t x554 = 169;
	int64_t x555 = 4151279277965542LL;
	volatile int32_t x556 = INT32_MAX;
	volatile int32_t t138 = 1064935;

    t138 = (x553>((x554>x555)^x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 48097915U;
	int32_t x558 = INT32_MAX;
	int16_t x560 = INT16_MIN;
	int32_t t139 = -510;

    t139 = (x557>((x558>x559)^x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	int16_t x563 = 7;
	uint8_t x564 = UINT8_MAX;
	int32_t t140 = 1456063;

    t140 = (x561>((x562>x563)^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = INT8_MIN;
	static volatile int32_t x566 = INT32_MAX;
	int16_t x567 = 2;
	int32_t x568 = -1;
	int32_t t141 = 26508048;

    t141 = (x565>((x566>x567)^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = 12181;
	int32_t x570 = INT32_MIN;
	int32_t x572 = -1;

    t142 = (x569>((x570>x571)^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	uint32_t x574 = 27964U;
	static int64_t x575 = INT64_MIN;
	int32_t x576 = 190399;
	int32_t t143 = -113944;

    t143 = (x573>((x574>x575)^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = -57351244996811236LL;
	uint8_t x578 = 3U;
	uint32_t x579 = 1786U;
	volatile int32_t t144 = 1;

    t144 = (x577>((x578>x579)^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MAX;
	static int16_t x582 = 9743;
	volatile int32_t x583 = INT32_MIN;
	int32_t x584 = 15604553;
	volatile int32_t t145 = 4402;

    t145 = (x581>((x582>x583)^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MAX;
	volatile uint8_t x587 = 2U;
	int32_t x588 = INT32_MIN;
	static volatile int32_t t146 = -189168127;

    t146 = (x585>((x586>x587)^x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 164LLU;
	volatile uint8_t x590 = 4U;
	static int8_t x591 = INT8_MIN;
	int32_t x592 = INT32_MAX;
	int32_t t147 = 0;

    t147 = (x589>((x590>x591)^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	volatile uint64_t x594 = 114LLU;
	volatile uint64_t x595 = UINT64_MAX;
	static volatile int32_t t148 = -1562;

    t148 = (x593>((x594>x595)^x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x598 = 55LLU;
	int64_t x599 = INT64_MIN;
	int16_t x600 = INT16_MIN;
	volatile int32_t t149 = -2097497;

    t149 = (x597>((x598>x599)^x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -348;
	volatile int16_t x602 = INT16_MIN;
	uint16_t x603 = 21815U;
	uint64_t x604 = UINT64_MAX;
	int32_t t150 = -2684;

    t150 = (x601>((x602>x603)^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = -42;
	static volatile int32_t x606 = -30;
	static int64_t x607 = -1LL;
	int8_t x608 = INT8_MIN;
	volatile int32_t t151 = 392942598;

    t151 = (x605>((x606>x607)^x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x610 = -1;
	int8_t x611 = INT8_MIN;
	int8_t x612 = INT8_MIN;
	volatile int32_t t152 = 28091981;

    t152 = (x609>((x610>x611)^x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = 11LL;
	int32_t x615 = -7601095;
	static volatile int16_t x616 = -27;
	static volatile int32_t t153 = -170000322;

    t153 = (x613>((x614>x615)^x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = UINT32_MAX;
	static int8_t x618 = INT8_MAX;
	int64_t x619 = INT64_MAX;
	int8_t x620 = -1;
	volatile int32_t t154 = -1;

    t154 = (x617>((x618>x619)^x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = 7U;
	static int32_t t155 = 34;

    t155 = (x621>((x622>x623)^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -13;
	int32_t x626 = 2;
	int16_t x627 = INT16_MIN;
	int16_t x628 = INT16_MIN;
	int32_t t156 = 1257;

    t156 = (x625>((x626>x627)^x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 73U;
	int32_t x630 = INT32_MIN;
	volatile int32_t x631 = -1017628162;
	volatile int32_t t157 = -572693686;

    t157 = (x629>((x630>x631)^x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	volatile int8_t x634 = -1;
	static uint8_t x635 = 70U;
	volatile int32_t x636 = INT32_MIN;
	static volatile int32_t t158 = -3117277;

    t158 = (x633>((x634>x635)^x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MAX;
	int32_t x638 = -54247;
	uint32_t x639 = 14675U;
	int32_t t159 = 0;

    t159 = (x637>((x638>x639)^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	uint8_t x642 = UINT8_MAX;
	uint8_t x643 = 20U;

    t160 = (x641>((x642>x643)^x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -1;
	int16_t x646 = 2;
	int64_t x647 = -1LL;

    t161 = (x645>((x646>x647)^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	int16_t x650 = INT16_MAX;
	static int8_t x652 = -18;
	volatile int32_t t162 = 110515;

    t162 = (x649>((x650>x651)^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	uint32_t x654 = 15581U;
	int32_t x655 = 11798;
	volatile int64_t x656 = INT64_MIN;
	int32_t t163 = 1;

    t163 = (x653>((x654>x655)^x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -22;
	uint16_t x658 = 129U;
	int16_t x659 = -1;
	static int8_t x660 = INT8_MAX;
	volatile int32_t t164 = -694;

    t164 = (x657>((x658>x659)^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	static int8_t x662 = -1;
	int64_t x663 = -70000743777078LL;
	int16_t x664 = -372;
	static int32_t t165 = 1;

    t165 = (x661>((x662>x663)^x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x665 = INT8_MIN;
	static volatile int32_t x666 = -1;
	int32_t x667 = INT32_MIN;
	uint32_t x668 = 2U;
	int32_t t166 = 0;

    t166 = (x665>((x666>x667)^x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x670 = INT32_MIN;
	int64_t x671 = INT64_MIN;
	uint32_t x672 = 29U;
	volatile int32_t t167 = -3974;

    t167 = (x669>((x670>x671)^x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x673 = -1;
	int16_t x675 = -1;
	static volatile int32_t t168 = -10191;

    t168 = (x673>((x674>x675)^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MAX;
	int8_t x678 = -1;
	volatile int32_t x679 = INT32_MAX;
	int16_t x680 = 3173;
	int32_t t169 = 1;

    t169 = (x677>((x678>x679)^x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = INT8_MIN;
	static uint8_t x683 = UINT8_MAX;
	int64_t x684 = INT64_MAX;
	volatile int32_t t170 = -768850844;

    t170 = (x681>((x682>x683)^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = UINT32_MAX;
	static volatile int8_t x687 = INT8_MIN;
	int8_t x688 = -39;

    t171 = (x685>((x686>x687)^x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x690 = UINT64_MAX;
	int8_t x691 = INT8_MAX;
	int64_t x692 = INT64_MIN;

    t172 = (x689>((x690>x691)^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = -1;
	static uint16_t x695 = 163U;
	static int16_t x696 = 1413;
	int32_t t173 = 849;

    t173 = (x693>((x694>x695)^x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	int64_t x698 = INT64_MIN;
	static uint16_t x699 = UINT16_MAX;
	int8_t x700 = 1;
	static int32_t t174 = -60;

    t174 = (x697>((x698>x699)^x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 12U;
	volatile int32_t x702 = INT32_MIN;
	uint8_t x703 = UINT8_MAX;
	volatile int32_t t175 = 51;

    t175 = (x701>((x702>x703)^x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 0;
	volatile int64_t x706 = INT64_MIN;
	int32_t x707 = -1;
	uint32_t x708 = 102476U;
	int32_t t176 = 320948;

    t176 = (x705>((x706>x707)^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x709 = 10763U;
	int64_t x710 = INT64_MIN;
	uint16_t x711 = 2324U;
	int8_t x712 = -31;

    t177 = (x709>((x710>x711)^x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = 12U;
	int32_t x715 = -486;
	uint32_t x716 = 1628639735U;
	int32_t t178 = 353912;

    t178 = (x713>((x714>x715)^x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x717 = -8588206420659LL;
	int8_t x718 = 2;
	uint64_t x719 = 29842525137206062LLU;
	int32_t x720 = -128381;

    t179 = (x717>((x718>x719)^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x721 = -1988;
	int16_t x722 = INT16_MIN;
	uint16_t x724 = 55U;

    t180 = (x721>((x722>x723)^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x726 = 237347U;
	int16_t x728 = -3981;
	volatile int32_t t181 = -10664;

    t181 = (x725>((x726>x727)^x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x729 = INT32_MIN;
	static uint32_t x730 = 21U;
	uint64_t x731 = 15572146698001888LLU;
	int8_t x732 = 22;
	volatile int32_t t182 = 2915488;

    t182 = (x729>((x730>x731)^x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x733 = -1024232369418632LL;
	static int64_t x735 = -1LL;
	uint32_t x736 = UINT32_MAX;
	volatile int32_t t183 = -12;

    t183 = (x733>((x734>x735)^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = UINT32_MAX;
	int16_t x738 = -1;
	int16_t x739 = -10622;
	int32_t t184 = 380;

    t184 = (x737>((x738>x739)^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 1U;
	int16_t x743 = INT16_MIN;
	volatile int32_t t185 = 1013;

    t185 = (x741>((x742>x743)^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MAX;
	static uint64_t x746 = 159578294056524LLU;
	volatile int64_t x748 = INT64_MIN;
	int32_t t186 = 81449;

    t186 = (x745>((x746>x747)^x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x750 = UINT64_MAX;
	uint64_t x751 = UINT64_MAX;
	static uint16_t x752 = 810U;
	static volatile int32_t t187 = 2579241;

    t187 = (x749>((x750>x751)^x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 272319U;
	int16_t x754 = INT16_MIN;
	int32_t x755 = -1;
	int64_t x756 = -1LL;
	int32_t t188 = -25665;

    t188 = (x753>((x754>x755)^x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x760 = 2U;
	static int32_t t189 = 494009;

    t189 = (x757>((x758>x759)^x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 4U;
	int64_t x762 = 845458LL;
	static int32_t t190 = -4;

    t190 = (x761>((x762>x763)^x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x765 = 3423U;
	uint32_t x766 = 1U;
	int8_t x767 = INT8_MAX;
	int8_t x768 = INT8_MIN;
	static int32_t t191 = 50207;

    t191 = (x765>((x766>x767)^x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x770 = UINT64_MAX;
	uint32_t x771 = 28179825U;
	int8_t x772 = 2;
	int32_t t192 = 3;

    t192 = (x769>((x770>x771)^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	volatile uint16_t x774 = 46U;
	volatile int8_t x775 = INT8_MIN;
	static volatile int64_t x776 = -1LL;

    t193 = (x773>((x774>x775)^x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = INT8_MIN;
	int64_t x778 = INT64_MAX;
	int32_t x779 = -1;
	int64_t x780 = INT64_MAX;

    t194 = (x777>((x778>x779)^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 23358U;
	int8_t x783 = INT8_MIN;
	int8_t x784 = -7;
	volatile int32_t t195 = -5241;

    t195 = (x781>((x782>x783)^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = UINT32_MAX;
	volatile int8_t x786 = -1;
	static int64_t x787 = INT64_MIN;
	static uint64_t x788 = 3460609LLU;
	static volatile int32_t t196 = -3506;

    t196 = (x785>((x786>x787)^x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t t197 = 968;

    t197 = (x789>((x790>x791)^x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = UINT32_MAX;
	static uint16_t x794 = UINT16_MAX;
	uint32_t x795 = 103U;
	int8_t x796 = 11;

    t198 = (x793>((x794>x795)^x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = 1;
	static int64_t x799 = INT64_MAX;
	static volatile int32_t t199 = 31268;

    t199 = (x797>((x798>x799)^x800));

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

