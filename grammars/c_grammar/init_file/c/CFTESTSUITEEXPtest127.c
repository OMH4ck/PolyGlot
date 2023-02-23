
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

volatile int8_t x1 = INT8_MIN;
int32_t x4 = INT32_MAX;
volatile int64_t x5 = INT64_MAX;
volatile int64_t x12 = INT64_MIN;
uint8_t x17 = 1U;
volatile uint16_t x25 = 11U;
int64_t x27 = -1LL;
uint64_t t6 = 39LLU;
uint16_t x33 = 35U;
int16_t x36 = 15833;
volatile int8_t x43 = -1;
int32_t x48 = INT32_MAX;
int32_t t9 = 185137814;
volatile uint32_t x71 = 4780U;
int8_t x77 = 0;
int16_t x78 = -1;
int16_t x83 = INT16_MAX;
uint16_t x85 = 0U;
int16_t x88 = -155;
uint8_t x97 = 1U;
volatile int32_t x100 = INT32_MAX;
volatile int32_t t21 = -9570610;
volatile int64_t x105 = INT64_MIN;
int32_t x111 = -2094;
static int8_t x118 = INT8_MIN;
volatile int16_t x119 = INT16_MIN;
uint32_t x120 = 38889U;
static volatile int32_t t25 = -2425283;
int64_t x133 = INT64_MAX;
volatile int16_t x134 = INT16_MAX;
uint8_t x141 = 31U;
static int16_t x142 = INT16_MIN;
uint16_t x143 = 379U;
int8_t x153 = INT8_MIN;
volatile int32_t t32 = 94908;
static int64_t x163 = INT64_MIN;
int32_t x164 = INT32_MIN;
volatile int64_t x165 = 32LL;
int64_t t34 = -1256375152523LL;
uint32_t x169 = 347U;
int32_t x172 = -140489;
static uint32_t t35 = 77874U;
int64_t x173 = -1LL;
volatile int8_t x174 = INT8_MIN;
int64_t x181 = -1816082169808LL;
int8_t x183 = -8;
static volatile int64_t t38 = 2680492082205389236LL;
static volatile int32_t t40 = 0;
static volatile uint32_t x213 = UINT32_MAX;
static volatile int8_t x216 = 1;
uint32_t t42 = UINT32_MAX;
static volatile int8_t x223 = -1;
volatile int32_t t43 = 1129216;
static int32_t t45 = -206149;
uint64_t x234 = 33290670498LLU;
int8_t x235 = 7;
int8_t x237 = INT8_MIN;
int8_t x240 = -63;
volatile int16_t x242 = INT16_MIN;
static volatile int64_t x246 = INT64_MAX;
static int32_t t50 = -1;
int16_t x259 = -5246;
uint64_t x262 = 183049117330689LLU;
volatile uint64_t t53 = 139937LLU;
uint32_t x274 = UINT32_MAX;
uint64_t x283 = UINT64_MAX;
static int64_t x290 = INT64_MIN;
static volatile int64_t t60 = 3869689724842777LL;
uint8_t x303 = 1U;
uint64_t t62 = 2253117285LLU;
volatile int8_t x311 = 1;
uint32_t x326 = 18U;
int8_t x327 = -1;
int64_t x328 = 805748398933084LL;
volatile int16_t x332 = -1;
int32_t x333 = 448;
uint8_t x335 = 20U;
static volatile int64_t t68 = -8719LL;
int8_t x343 = -1;
int8_t x349 = -1;
volatile int32_t t70 = 177398;
uint32_t x356 = 185U;
uint16_t x357 = 4340U;
volatile int32_t t76 = -23;
volatile int8_t x377 = INT8_MIN;
uint8_t x383 = 1U;
int32_t t78 = 230868768;
volatile uint32_t x385 = UINT32_MAX;
volatile uint32_t x387 = UINT32_MAX;
static int8_t x400 = 1;
uint32_t t81 = 7728U;
int64_t x408 = -1LL;
uint64_t x415 = 623356LLU;
static uint8_t x421 = 1U;
static int32_t x443 = INT32_MAX;
int32_t t89 = -15962;
static int64_t t92 = INT64_MIN;
static int8_t x468 = INT8_MAX;
int64_t x470 = -4505225LL;
uint16_t x472 = UINT16_MAX;
static uint16_t x473 = 476U;
int8_t x474 = INT8_MIN;
static int32_t x475 = -78;
volatile int32_t x476 = INT32_MIN;
uint32_t x478 = 248631U;
int32_t t98 = 343186235;
int8_t x495 = 1;
static volatile int32_t t101 = 25;
int16_t x502 = 1218;
int32_t x514 = 830;
static int16_t x517 = -1;
uint16_t x530 = 0U;
uint16_t x532 = 18U;
volatile uint32_t t109 = 136U;
int32_t x536 = 0;
uint32_t t110 = UINT32_MAX;
int32_t t111 = -26994508;
uint16_t x553 = 395U;
uint16_t x566 = UINT16_MAX;
uint32_t x568 = 7U;
static int64_t x572 = -107753109803706LL;
int32_t t117 = INT32_MIN;
uint32_t x573 = UINT32_MAX;
int32_t x574 = -1;
int8_t x577 = INT8_MAX;
int8_t x580 = -2;
static int8_t x588 = INT8_MIN;
int32_t x590 = -1;
uint64_t x595 = 7508610LLU;
volatile int32_t t124 = 1900;
static volatile int64_t x625 = INT64_MIN;
volatile uint8_t x634 = 26U;
int32_t x641 = INT32_MAX;
uint16_t x642 = UINT16_MAX;
uint64_t x646 = 1521LLU;
volatile int32_t t136 = 38263435;
int16_t x661 = -138;
uint64_t x662 = 3542805558562LLU;
volatile uint16_t x663 = 30206U;
uint32_t x664 = 1033354U;
volatile int32_t t138 = -11914492;
int8_t x670 = INT8_MIN;
uint64_t x674 = 560396160411LLU;
int64_t x680 = -1LL;
int32_t t141 = -1411;
int16_t x684 = -1;
uint64_t x690 = UINT64_MAX;
static int8_t x692 = -1;
volatile uint32_t x693 = 1472U;
volatile uint64_t x710 = 193906241LLU;
volatile int64_t x712 = INT64_MIN;
int8_t x721 = INT8_MAX;
int8_t x726 = -1;
volatile int8_t x731 = 2;
int32_t t154 = -581255741;
volatile int16_t x738 = 5;
uint32_t x743 = 258581500U;
volatile uint16_t x755 = UINT16_MAX;
int16_t x758 = INT16_MIN;
int64_t t159 = -636222562LL;
int16_t x773 = INT16_MAX;
int8_t x774 = -1;
uint64_t x775 = 878967LLU;
uint64_t t161 = UINT64_MAX;
static int16_t x790 = 250;
int32_t x792 = INT32_MIN;
volatile uint64_t t165 = 24LLU;
static int64_t x806 = INT64_MIN;
int64_t x811 = 1103LL;
uint64_t x812 = 192057315776265LLU;
static volatile int8_t x819 = INT8_MIN;
volatile int16_t x825 = INT16_MIN;
int8_t x830 = INT8_MIN;
int32_t x831 = INT32_MAX;
uint16_t x836 = 80U;
volatile int32_t t173 = -127723570;
uint16_t x846 = 667U;
static volatile int16_t x862 = 2;
volatile int16_t x863 = INT16_MAX;
int16_t x877 = INT16_MIN;
static int16_t x880 = INT16_MIN;
int64_t x882 = 23545218189314238LL;
volatile uint64_t x884 = UINT64_MAX;
volatile int32_t t183 = 48268235;
int32_t x890 = -1;
int16_t x894 = -1;
volatile int32_t x901 = -1;
uint32_t x905 = UINT32_MAX;
static int64_t x910 = -1LL;
int64_t x911 = -1LL;
int16_t x912 = -1;
int16_t x947 = INT16_MAX;
volatile int16_t x948 = INT16_MAX;
int32_t x952 = -1;
int32_t t196 = 2911224;
int32_t x956 = 81533260;
static uint8_t x965 = 2U;


void f0(void) {
    	static uint16_t x2 = 11U;
	uint32_t x3 = UINT32_MAX;
	int32_t t0 = 0;

    t0 = (x1+((x2+x3)<=x4));

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	int16_t x8 = 6037;
	static volatile int64_t t1 = INT64_MAX;

    t1 = (x5+((x6+x7)<=x8));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MAX;
	volatile int8_t x10 = -1;
	static int64_t x11 = 483033528062LL;
	int32_t t2 = -47;

    t2 = (x9+((x10+x11)<=x12));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -25707833LL;
	uint16_t x14 = 10291U;
	int32_t x15 = INT32_MIN;
	uint16_t x16 = 1160U;
	int64_t t3 = 1352462606535674LL;

    t3 = (x13+((x14+x15)<=x16));

    if (t3 != -25707832LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = -505731;
	static int16_t x19 = INT16_MAX;
	int64_t x20 = -1LL;
	int32_t t4 = 7;

    t4 = (x17+((x18+x19)<=x20));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x26 = UINT64_MAX;
	int32_t x28 = INT32_MAX;
	volatile int32_t t5 = 81910585;

    t5 = (x25+((x26+x27)<=x28));

    if (t5 != 11) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x29 = 26022032LLU;
	volatile uint16_t x30 = 2U;
	volatile uint64_t x31 = 1704229997LLU;
	volatile uint64_t x32 = 109523150561017842LLU;

    t6 = (x29+((x30+x31)<=x32));

    if (t6 != 26022033LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x34 = INT8_MAX;
	static uint64_t x35 = UINT64_MAX;
	volatile int32_t t7 = -222;

    t7 = (x33+((x34+x35)<=x36));

    if (t7 != 36) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -2;
	volatile uint16_t x42 = UINT16_MAX;
	int8_t x44 = INT8_MAX;
	volatile int32_t t8 = 119;

    t8 = (x41+((x42+x43)<=x44));

    if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x45 = 74U;
	static int8_t x46 = -12;
	int8_t x47 = INT8_MIN;

    t9 = (x45+((x46+x47)<=x48));

    if (t9 != 75) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = -1;
	int8_t x54 = INT8_MIN;
	static int64_t x55 = 1772106147LL;
	static int64_t x56 = INT64_MIN;
	int32_t t10 = -17;

    t10 = (x53+((x54+x55)<=x56));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x57 = INT32_MIN;
	static int64_t x58 = -88223224LL;
	volatile int64_t x59 = -189458LL;
	volatile uint32_t x60 = 22404329U;
	int32_t t11 = 116831;

    t11 = (x57+((x58+x59)<=x60));

    if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = -1;
	int8_t x62 = INT8_MIN;
	int16_t x63 = -1;
	int8_t x64 = INT8_MIN;
	int32_t t12 = -126616575;

    t12 = (x61+((x62+x63)<=x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x65 = INT32_MIN;
	int32_t x66 = 5;
	int32_t x67 = 8318760;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t13 = 3199247;

    t13 = (x65+((x66+x67)<=x68));

    if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x69 = 905U;
	int16_t x70 = INT16_MIN;
	static int64_t x72 = 915LL;
	volatile int32_t t14 = -4940807;

    t14 = (x69+((x70+x71)<=x72));

    if (t14 != 905) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x73 = UINT8_MAX;
	uint32_t x74 = 152U;
	int32_t x75 = INT32_MIN;
	static uint8_t x76 = UINT8_MAX;
	int32_t t15 = -84337;

    t15 = (x73+((x74+x75)<=x76));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x79 = -1;
	int64_t x80 = -1LL;
	int32_t t16 = 812581;

    t16 = (x77+((x78+x79)<=x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x81 = 20;
	volatile int64_t x82 = INT64_MIN;
	static int64_t x84 = INT64_MIN;
	int32_t t17 = -2;

    t17 = (x81+((x82+x83)<=x84));

    if (t17 != 20) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x86 = 1;
	int64_t x87 = INT64_MIN;
	static volatile int32_t t18 = 703221;

    t18 = (x85+((x86+x87)<=x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x89 = UINT64_MAX;
	uint16_t x90 = 1812U;
	uint16_t x91 = 3U;
	uint8_t x92 = 81U;
	static volatile uint64_t t19 = UINT64_MAX;

    t19 = (x89+((x90+x91)<=x92));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x98 = INT8_MIN;
	static uint32_t x99 = 8U;
	volatile int32_t t20 = 3549;

    t20 = (x97+((x98+x99)<=x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x101 = INT16_MAX;
	static int8_t x102 = -1;
	static int8_t x103 = -7;
	uint64_t x104 = 479354199LLU;

    t21 = (x101+((x102+x103)<=x104));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x106 = -1LL;
	int32_t x107 = 48122;
	volatile int8_t x108 = 7;
	static int64_t t22 = INT64_MIN;

    t22 = (x105+((x106+x107)<=x108));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	static int8_t x112 = INT8_MIN;
	volatile int32_t t23 = -3560648;

    t23 = (x109+((x110+x111)<=x112));

    if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x113 = -3158640LL;
	volatile int16_t x114 = INT16_MIN;
	uint8_t x115 = 12U;
	int64_t x116 = INT64_MIN;
	int64_t t24 = -5357374650388392LL;

    t24 = (x113+((x114+x115)<=x116));

    if (t24 != -3158640LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x117 = 1U;

    t25 = (x117+((x118+x119)<=x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x125 = 673;
	int16_t x126 = INT16_MIN;
	int32_t x127 = 62127414;
	int64_t x128 = INT64_MIN;
	static int32_t t26 = -24872885;

    t26 = (x125+((x126+x127)<=x128));

    if (t26 != 673) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x129 = -1LL;
	int16_t x130 = -30;
	int32_t x131 = INT32_MAX;
	static volatile int8_t x132 = 19;
	int64_t t27 = -127052LL;

    t27 = (x129+((x130+x131)<=x132));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	int64_t t28 = INT64_MAX;

    t28 = (x133+((x134+x135)<=x136));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x144 = INT16_MAX;
	volatile int32_t t29 = -14;

    t29 = (x141+((x142+x143)<=x144));

    if (t29 != 32) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x145 = INT64_MIN;
	volatile uint64_t x146 = UINT64_MAX;
	int64_t x147 = INT64_MAX;
	static int32_t x148 = -438;
	int64_t t30 = -25440058538984339LL;

    t30 = (x145+((x146+x147)<=x148));

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x149 = 35167634U;
	static uint64_t x150 = UINT64_MAX;
	static uint16_t x151 = UINT16_MAX;
	volatile int8_t x152 = -6;
	uint32_t t31 = 180909U;

    t31 = (x149+((x150+x151)<=x152));

    if (t31 != 35167635U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x154 = UINT32_MAX;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = 7545231;

    t32 = (x153+((x154+x155)<=x156));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int16_t x161 = -3;
	int64_t x162 = 104451233648LL;
	int32_t t33 = 47642611;

    t33 = (x161+((x162+x163)<=x164));

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x166 = 243;
	static uint16_t x167 = 8U;
	int8_t x168 = INT8_MIN;

    t34 = (x165+((x166+x167)<=x168));

    if (t34 != 32LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x170 = 1U;
	static int16_t x171 = INT16_MIN;

    t35 = (x169+((x170+x171)<=x172));

    if (t35 != 347U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x175 = 2U;
	volatile int16_t x176 = 8174;
	volatile int64_t t36 = 3473028LL;

    t36 = (x173+((x174+x175)<=x176));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x177 = 233U;
	uint32_t x178 = 20624U;
	int32_t x179 = -1;
	static volatile uint32_t x180 = 388333523U;
	volatile int32_t t37 = 265317;

    t37 = (x177+((x178+x179)<=x180));

    if (t37 != 234) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x182 = UINT8_MAX;
	int32_t x184 = INT32_MIN;

    t38 = (x181+((x182+x183)<=x184));

    if (t38 != -1816082169808LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x193 = 100U;
	int8_t x194 = -1;
	int8_t x195 = -6;
	static int64_t x196 = INT64_MIN;
	volatile uint32_t t39 = 940813U;

    t39 = (x193+((x194+x195)<=x196));

    if (t39 != 100U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x201 = INT16_MIN;
	int32_t x202 = -466948944;
	int16_t x203 = -1;
	uint64_t x204 = 1822475369341473303LLU;

    t40 = (x201+((x202+x203)<=x204));

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x205 = 0U;
	uint32_t x206 = 284393947U;
	uint8_t x207 = 1U;
	int64_t x208 = 12LL;
	int32_t t41 = -675404;

    t41 = (x205+((x206+x207)<=x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x214 = INT8_MIN;
	uint16_t x215 = 11335U;

    t42 = (x213+((x214+x215)<=x216));

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x221 = INT16_MAX;
	volatile int16_t x222 = -1;
	static uint16_t x224 = 1U;

    t43 = (x221+((x222+x223)<=x224));

    if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x225 = 0;
	int32_t x226 = 7;
	int32_t x227 = 23120274;
	volatile int32_t x228 = -1;
	volatile int32_t t44 = 123100;

    t44 = (x225+((x226+x227)<=x228));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x229 = INT32_MIN;
	int8_t x230 = -2;
	int32_t x231 = -1;
	uint8_t x232 = UINT8_MAX;

    t45 = (x229+((x230+x231)<=x232));

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x233 = -1;
	int8_t x236 = -3;
	volatile int32_t t46 = 1013789798;

    t46 = (x233+((x234+x235)<=x236));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x238 = INT8_MAX;
	uint8_t x239 = UINT8_MAX;
	volatile int32_t t47 = -5231824;

    t47 = (x237+((x238+x239)<=x240));

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x241 = -1;
	int32_t x243 = 54891;
	static int64_t x244 = INT64_MAX;
	static int32_t t48 = -22513970;

    t48 = (x241+((x242+x243)<=x244));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x245 = INT64_MIN;
	int8_t x247 = -23;
	static int8_t x248 = INT8_MIN;
	volatile int64_t t49 = INT64_MIN;

    t49 = (x245+((x246+x247)<=x248));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = -463404963;
	static uint16_t x251 = 385U;
	static int64_t x252 = -1LL;

    t50 = (x249+((x250+x251)<=x252));

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x253 = -28;
	static int64_t x254 = -1LL;
	static volatile int16_t x255 = INT16_MIN;
	static int32_t x256 = INT32_MAX;
	volatile int32_t t51 = -4081008;

    t51 = (x253+((x254+x255)<=x256));

    if (t51 != -27) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x257 = INT64_MAX;
	int16_t x258 = -1;
	volatile uint32_t x260 = 1035984U;
	volatile int64_t t52 = INT64_MAX;

    t52 = (x257+((x258+x259)<=x260));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x261 = 142748868237603LLU;
	static uint64_t x263 = UINT64_MAX;
	int8_t x264 = INT8_MIN;

    t53 = (x261+((x262+x263)<=x264));

    if (t53 != 142748868237604LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x265 = 221U;
	int16_t x266 = 2599;
	int32_t x267 = -12936;
	static int16_t x268 = -1;
	int32_t t54 = 49164563;

    t54 = (x265+((x266+x267)<=x268));

    if (t54 != 222) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x269 = 2U;
	int64_t x270 = INT64_MAX;
	int16_t x271 = -1;
	static int32_t x272 = INT32_MIN;
	volatile int32_t t55 = -618536;

    t55 = (x269+((x270+x271)<=x272));

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x273 = INT16_MIN;
	uint64_t x275 = 18767554LLU;
	int32_t x276 = INT32_MIN;
	int32_t t56 = -1373916;

    t56 = (x273+((x274+x275)<=x276));

    if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x281 = INT16_MIN;
	uint8_t x282 = UINT8_MAX;
	uint8_t x284 = UINT8_MAX;
	int32_t t57 = -3;

    t57 = (x281+((x282+x283)<=x284));

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x285 = -1LL;
	static int8_t x286 = -1;
	volatile int16_t x287 = -1;
	int8_t x288 = 15;
	volatile int64_t t58 = -45LL;

    t58 = (x285+((x286+x287)<=x288));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x289 = 12274U;
	uint16_t x291 = UINT16_MAX;
	static uint64_t x292 = UINT64_MAX;
	volatile uint32_t t59 = 6U;

    t59 = (x289+((x290+x291)<=x292));

    if (t59 != 12275U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MAX;
	int8_t x295 = 1;
	uint64_t x296 = 1094382927026325LLU;

    t60 = (x293+((x294+x295)<=x296));

    if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x297 = 1250360692LLU;
	int16_t x298 = 3023;
	int32_t x299 = 108480071;
	int16_t x300 = -1;
	static uint64_t t61 = 992706983430144645LLU;

    t61 = (x297+((x298+x299)<=x300));

    if (t61 != 1250360692LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x301 = 16LLU;
	int64_t x302 = -1LL;
	int32_t x304 = INT32_MIN;

    t62 = (x301+((x302+x303)<=x304));

    if (t62 != 16LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x305 = 396902963738LLU;
	uint32_t x306 = UINT32_MAX;
	uint64_t x307 = UINT64_MAX;
	volatile int64_t x308 = INT64_MIN;
	uint64_t t63 = 1123505938LLU;

    t63 = (x305+((x306+x307)<=x308));

    if (t63 != 396902963739LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x309 = 61;
	int64_t x310 = -1LL;
	uint8_t x312 = UINT8_MAX;
	static int32_t t64 = 0;

    t64 = (x309+((x310+x311)<=x312));

    if (t64 != 62) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x325 = UINT16_MAX;
	int32_t t65 = 25592015;

    t65 = (x325+((x326+x327)<=x328));

    if (t65 != 65536) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x329 = 51U;
	static int16_t x330 = -1;
	static uint16_t x331 = UINT16_MAX;
	static int32_t t66 = -795719;

    t66 = (x329+((x330+x331)<=x332));

    if (t66 != 51) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x334 = -1;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t67 = 228277;

    t67 = (x333+((x334+x335)<=x336));

    if (t67 != 449) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x337 = -375274LL;
	int8_t x338 = -1;
	uint32_t x339 = UINT32_MAX;
	volatile int16_t x340 = INT16_MAX;

    t68 = (x337+((x338+x339)<=x340));

    if (t68 != -375274LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x341 = -1;
	int16_t x342 = INT16_MAX;
	uint16_t x344 = UINT16_MAX;
	static volatile int32_t t69 = 49852312;

    t69 = (x341+((x342+x343)<=x344));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x350 = 2681499705028269475LL;
	int8_t x351 = -1;
	int64_t x352 = 1940LL;

    t70 = (x349+((x350+x351)<=x352));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x353 = UINT16_MAX;
	static int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	volatile int32_t t71 = 437702165;

    t71 = (x353+((x354+x355)<=x356));

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x358 = 0U;
	volatile uint32_t x359 = 11348U;
	static volatile int32_t x360 = -1;
	int32_t t72 = 1;

    t72 = (x357+((x358+x359)<=x360));

    if (t72 != 4341) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x361 = 0;
	volatile uint8_t x362 = 2U;
	uint32_t x363 = UINT32_MAX;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t73 = 1;

    t73 = (x361+((x362+x363)<=x364));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x365 = -299;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = INT8_MIN;
	uint32_t x368 = 1U;
	volatile int32_t t74 = 46242;

    t74 = (x365+((x366+x367)<=x368));

    if (t74 != -299) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x369 = 319750974296814LLU;
	static volatile int8_t x370 = 1;
	int16_t x371 = 0;
	uint16_t x372 = UINT16_MAX;
	uint64_t t75 = 22740801121590099LLU;

    t75 = (x369+((x370+x371)<=x372));

    if (t75 != 319750974296815LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x373 = -1;
	int8_t x374 = INT8_MIN;
	static int8_t x375 = 2;
	int8_t x376 = 60;

    t76 = (x373+((x374+x375)<=x376));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x378 = 0;
	int32_t x379 = -1;
	int32_t x380 = -25328555;
	static volatile int32_t t77 = 46874;

    t77 = (x377+((x378+x379)<=x380));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x381 = UINT16_MAX;
	int16_t x382 = INT16_MIN;
	int16_t x384 = 564;

    t78 = (x381+((x382+x383)<=x384));

    if (t78 != 65536) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x386 = 1;
	int32_t x388 = INT32_MIN;
	uint32_t t79 = 15125662U;

    t79 = (x385+((x386+x387)<=x388));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x389 = INT32_MIN;
	static int32_t x390 = 1;
	int8_t x391 = INT8_MIN;
	volatile int16_t x392 = 20;
	int32_t t80 = -1;

    t80 = (x389+((x390+x391)<=x392));

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x397 = 66920183U;
	uint16_t x398 = 15195U;
	int32_t x399 = INT32_MIN;

    t81 = (x397+((x398+x399)<=x400));

    if (t81 != 66920184U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x401 = INT8_MAX;
	volatile int32_t x402 = -1;
	volatile int64_t x403 = -7LL;
	int32_t x404 = INT32_MIN;
	static volatile int32_t t82 = 371007;

    t82 = (x401+((x402+x403)<=x404));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x405 = 0U;
	int32_t x406 = 3;
	int32_t x407 = INT32_MIN;
	int32_t t83 = 1803382;

    t83 = (x405+((x406+x407)<=x408));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x409 = 97U;
	int32_t x410 = 390464264;
	int32_t x411 = 128833298;
	int32_t x412 = INT32_MIN;
	static int32_t t84 = 2975;

    t84 = (x409+((x410+x411)<=x412));

    if (t84 != 97) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x413 = 2096U;
	int16_t x414 = INT16_MIN;
	volatile int16_t x416 = INT16_MAX;
	volatile uint32_t t85 = 176356U;

    t85 = (x413+((x414+x415)<=x416));

    if (t85 != 2096U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x417 = 32329U;
	volatile uint32_t x418 = UINT32_MAX;
	uint16_t x419 = UINT16_MAX;
	uint32_t x420 = 17U;
	volatile int32_t t86 = -255;

    t86 = (x417+((x418+x419)<=x420));

    if (t86 != 32329) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x422 = INT16_MIN;
	int16_t x423 = 1230;
	int8_t x424 = INT8_MAX;
	static int32_t t87 = 1064486419;

    t87 = (x421+((x422+x423)<=x424));

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x433 = -32414499LL;
	static uint64_t x434 = UINT64_MAX;
	static volatile int64_t x435 = -1LL;
	uint16_t x436 = 13U;
	static volatile int64_t t88 = -142381LL;

    t88 = (x433+((x434+x435)<=x436));

    if (t88 != -32414499LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x441 = 7U;
	volatile uint64_t x442 = 2572169LLU;
	uint64_t x444 = 29245343127274027LLU;

    t89 = (x441+((x442+x443)<=x444));

    if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x449 = 337029LLU;
	uint8_t x450 = UINT8_MAX;
	int8_t x451 = -1;
	int32_t x452 = INT32_MIN;
	uint64_t t90 = 11945LLU;

    t90 = (x449+((x450+x451)<=x452));

    if (t90 != 337029LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x457 = INT8_MAX;
	volatile uint64_t x458 = UINT64_MAX;
	int64_t x459 = 245845574331052LL;
	int16_t x460 = -1;
	volatile int32_t t91 = 2418;

    t91 = (x457+((x458+x459)<=x460));

    if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MAX;
	volatile int16_t x463 = -1;
	uint8_t x464 = 6U;

    t92 = (x461+((x462+x463)<=x464));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x465 = UINT64_MAX;
	int8_t x466 = 3;
	uint64_t x467 = 771LLU;
	static volatile uint64_t t93 = UINT64_MAX;

    t93 = (x465+((x466+x467)<=x468));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x469 = 0;
	int32_t x471 = -3;
	int32_t t94 = 2061;

    t94 = (x469+((x470+x471)<=x472));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t t95 = -79876;

    t95 = (x473+((x474+x475)<=x476));

    if (t95 != 476) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x477 = -2;
	static volatile int8_t x479 = INT8_MAX;
	int32_t x480 = INT32_MIN;
	int32_t t96 = 2921;

    t96 = (x477+((x478+x479)<=x480));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x481 = 49;
	volatile uint16_t x482 = 44U;
	int8_t x483 = INT8_MAX;
	volatile uint32_t x484 = 100691U;
	volatile int32_t t97 = -121902;

    t97 = (x481+((x482+x483)<=x484));

    if (t97 != 50) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x485 = INT16_MIN;
	int32_t x486 = 5;
	uint8_t x487 = 4U;
	static volatile int32_t x488 = INT32_MAX;

    t98 = (x485+((x486+x487)<=x488));

    if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x489 = -1;
	static int32_t x490 = -1;
	volatile int64_t x491 = -1LL;
	uint16_t x492 = 2U;
	int32_t t99 = 944627175;

    t99 = (x489+((x490+x491)<=x492));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x493 = -3;
	int8_t x494 = INT8_MIN;
	int64_t x496 = INT64_MIN;
	static int32_t t100 = 63;

    t100 = (x493+((x494+x495)<=x496));

    if (t100 != -3) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x497 = -14;
	volatile int16_t x498 = -1;
	static int16_t x499 = -26;
	volatile int16_t x500 = 6738;

    t101 = (x497+((x498+x499)<=x500));

    if (t101 != -13) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x501 = INT64_MAX;
	int64_t x503 = 4LL;
	int32_t x504 = INT32_MIN;
	int64_t t102 = INT64_MAX;

    t102 = (x501+((x502+x503)<=x504));

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x505 = -1LL;
	volatile int32_t x506 = INT32_MIN;
	int64_t x507 = -8523781121230LL;
	int16_t x508 = 2046;
	volatile int64_t t103 = -29LL;

    t103 = (x505+((x506+x507)<=x508));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x509 = INT8_MAX;
	uint16_t x510 = UINT16_MAX;
	int32_t x511 = INT32_MIN;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t104 = 187674663;

    t104 = (x509+((x510+x511)<=x512));

    if (t104 != 128) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x513 = -1;
	int8_t x515 = -2;
	uint8_t x516 = 34U;
	volatile int32_t t105 = -953;

    t105 = (x513+((x514+x515)<=x516));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x518 = INT64_MIN;
	static uint16_t x519 = 942U;
	static int16_t x520 = INT16_MIN;
	volatile int32_t t106 = -40431535;

    t106 = (x517+((x518+x519)<=x520));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x521 = INT32_MIN;
	int32_t x522 = INT32_MIN;
	static uint64_t x523 = 4LLU;
	volatile int16_t x524 = INT16_MIN;
	volatile int32_t t107 = -500752992;

    t107 = (x521+((x522+x523)<=x524));

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = -1LL;
	int64_t x527 = -1LL;
	volatile int16_t x528 = INT16_MIN;
	static volatile int32_t t108 = -1673217;

    t108 = (x525+((x526+x527)<=x528));

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x529 = 758259132U;
	static int32_t x531 = 39;

    t109 = (x529+((x530+x531)<=x532));

    if (t109 != 758259132U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x533 = UINT32_MAX;
	volatile int16_t x534 = INT16_MIN;
	volatile uint16_t x535 = UINT16_MAX;

    t110 = (x533+((x534+x535)<=x536));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x537 = -1469;
	static int16_t x538 = INT16_MAX;
	int64_t x539 = INT64_MIN;
	static int8_t x540 = -1;

    t111 = (x537+((x538+x539)<=x540));

    if (t111 != -1468) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x541 = INT64_MIN;
	int16_t x542 = INT16_MAX;
	volatile uint16_t x543 = UINT16_MAX;
	volatile int16_t x544 = INT16_MIN;
	volatile int64_t t112 = INT64_MIN;

    t112 = (x541+((x542+x543)<=x544));

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x545 = INT8_MIN;
	static int16_t x546 = 14627;
	uint64_t x547 = 9827LLU;
	int64_t x548 = INT64_MIN;
	static volatile int32_t t113 = -2254;

    t113 = (x545+((x546+x547)<=x548));

    if (t113 != -127) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x549 = 5982;
	volatile int16_t x550 = INT16_MIN;
	static int16_t x551 = -1;
	volatile int16_t x552 = INT16_MIN;
	volatile int32_t t114 = 91275006;

    t114 = (x549+((x550+x551)<=x552));

    if (t114 != 5983) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x554 = 4210344U;
	int64_t x555 = -9810421LL;
	int64_t x556 = 29310959941767749LL;
	volatile int32_t t115 = -66754570;

    t115 = (x553+((x554+x555)<=x556));

    if (t115 != 396) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x565 = INT16_MAX;
	uint32_t x567 = 0U;
	volatile int32_t t116 = -3400;

    t116 = (x565+((x566+x567)<=x568));

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x569 = INT32_MIN;
	uint32_t x570 = UINT32_MAX;
	volatile int32_t x571 = -88;

    t117 = (x569+((x570+x571)<=x572));

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x575 = 60193226LLU;
	int8_t x576 = 3;
	uint32_t t118 = UINT32_MAX;

    t118 = (x573+((x574+x575)<=x576));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x578 = -1;
	volatile int8_t x579 = INT8_MIN;
	static int32_t t119 = -40287402;

    t119 = (x577+((x578+x579)<=x580));

    if (t119 != 128) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x585 = INT16_MIN;
	uint32_t x586 = 107488U;
	static int16_t x587 = -30;
	static volatile int32_t t120 = 2371222;

    t120 = (x585+((x586+x587)<=x588));

    if (t120 != -32767) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x589 = INT8_MAX;
	static int16_t x591 = INT16_MAX;
	int64_t x592 = 672691849754048622LL;
	int32_t t121 = 74385;

    t121 = (x589+((x590+x591)<=x592));

    if (t121 != 128) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x593 = 323861812466LLU;
	volatile int32_t x594 = INT32_MIN;
	int64_t x596 = INT64_MIN;
	static uint64_t t122 = 2066685004540320LLU;

    t122 = (x593+((x594+x595)<=x596));

    if (t122 != 323861812466LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x597 = 11;
	int16_t x598 = -22;
	int16_t x599 = -5;
	int64_t x600 = INT64_MIN;
	int32_t t123 = 28726;

    t123 = (x597+((x598+x599)<=x600));

    if (t123 != 11) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x601 = -1;
	uint32_t x602 = 254U;
	int8_t x603 = INT8_MIN;
	static int16_t x604 = 0;

    t124 = (x601+((x602+x603)<=x604));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x605 = INT64_MIN;
	uint8_t x606 = UINT8_MAX;
	volatile int64_t x607 = 1968LL;
	volatile int8_t x608 = -11;
	static int64_t t125 = INT64_MIN;

    t125 = (x605+((x606+x607)<=x608));

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x613 = 5U;
	static uint16_t x614 = UINT16_MAX;
	static int8_t x615 = INT8_MAX;
	int32_t x616 = -7;
	int32_t t126 = -4839025;

    t126 = (x613+((x614+x615)<=x616));

    if (t126 != 5) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x617 = UINT64_MAX;
	volatile int32_t x618 = 1;
	int64_t x619 = INT64_MIN;
	uint64_t x620 = 10LLU;
	volatile uint64_t t127 = UINT64_MAX;

    t127 = (x617+((x618+x619)<=x620));

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x621 = 8;
	int16_t x622 = -43;
	int16_t x623 = INT16_MIN;
	static int8_t x624 = -1;
	volatile int32_t t128 = -201;

    t128 = (x621+((x622+x623)<=x624));

    if (t128 != 9) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x626 = INT8_MIN;
	uint16_t x627 = UINT16_MAX;
	int32_t x628 = 604631;
	static int64_t t129 = -2LL;

    t129 = (x625+((x626+x627)<=x628));

    if (t129 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x633 = 76307LLU;
	int16_t x635 = INT16_MIN;
	uint32_t x636 = UINT32_MAX;
	uint64_t t130 = 1456LLU;

    t130 = (x633+((x634+x635)<=x636));

    if (t130 != 76308LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x637 = 104U;
	int8_t x638 = INT8_MIN;
	int8_t x639 = INT8_MAX;
	int64_t x640 = 11504545234887011LL;
	volatile int32_t t131 = -4164830;

    t131 = (x637+((x638+x639)<=x640));

    if (t131 != 105) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x643 = 494U;
	int8_t x644 = INT8_MIN;
	volatile int32_t t132 = INT32_MAX;

    t132 = (x641+((x642+x643)<=x644));

    if (t132 != INT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x645 = -1LL;
	int16_t x647 = INT16_MIN;
	int16_t x648 = 129;
	int64_t t133 = 51LL;

    t133 = (x645+((x646+x647)<=x648));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x649 = -1;
	int16_t x650 = INT16_MIN;
	static uint8_t x651 = 2U;
	int8_t x652 = INT8_MIN;
	volatile int32_t t134 = -2115;

    t134 = (x649+((x650+x651)<=x652));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x653 = UINT64_MAX;
	int32_t x654 = INT32_MIN;
	uint64_t x655 = 6455475LLU;
	int64_t x656 = INT64_MIN;
	volatile uint64_t t135 = UINT64_MAX;

    t135 = (x653+((x654+x655)<=x656));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint8_t x657 = UINT8_MAX;
	int16_t x658 = INT16_MAX;
	int64_t x659 = -197LL;
	volatile uint8_t x660 = 2U;

    t136 = (x657+((x658+x659)<=x660));

    if (t136 != 255) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t t137 = 308;

    t137 = (x661+((x662+x663)<=x664));

    if (t137 != -138) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x665 = 55U;
	uint8_t x666 = UINT8_MAX;
	uint16_t x667 = UINT16_MAX;
	uint16_t x668 = 7874U;

    t138 = (x665+((x666+x667)<=x668));

    if (t138 != 55) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x669 = -1;
	int64_t x671 = INT64_MAX;
	static int64_t x672 = -1LL;
	int32_t t139 = 23568110;

    t139 = (x669+((x670+x671)<=x672));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x673 = INT16_MAX;
	volatile uint8_t x675 = 58U;
	int32_t x676 = INT32_MIN;
	int32_t t140 = -23;

    t140 = (x673+((x674+x675)<=x676));

    if (t140 != 32768) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x677 = INT8_MIN;
	static volatile int32_t x678 = INT32_MIN;
	int64_t x679 = -52016719792760214LL;

    t141 = (x677+((x678+x679)<=x680));

    if (t141 != -127) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x681 = INT32_MIN;
	int8_t x682 = 5;
	uint64_t x683 = 11LLU;
	volatile int32_t t142 = -100337556;

    t142 = (x681+((x682+x683)<=x684));

    if (t142 != -2147483647) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x685 = -2696292;
	int8_t x686 = INT8_MIN;
	int64_t x687 = 1LL;
	uint16_t x688 = UINT16_MAX;
	volatile int32_t t143 = 804982144;

    t143 = (x685+((x686+x687)<=x688));

    if (t143 != -2696291) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x689 = -1;
	uint64_t x691 = UINT64_MAX;
	static volatile int32_t t144 = -5;

    t144 = (x689+((x690+x691)<=x692));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x694 = INT8_MAX;
	volatile int8_t x695 = 2;
	uint8_t x696 = 1U;
	volatile uint32_t t145 = 9252422U;

    t145 = (x693+((x694+x695)<=x696));

    if (t145 != 1472U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x697 = 307585927089955264LLU;
	int8_t x698 = -1;
	volatile int32_t x699 = -1;
	uint64_t x700 = 60559026LLU;
	volatile uint64_t t146 = 2627256LLU;

    t146 = (x697+((x698+x699)<=x700));

    if (t146 != 307585927089955264LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x705 = INT32_MIN;
	static uint32_t x706 = 47U;
	static int16_t x707 = INT16_MIN;
	int64_t x708 = -3LL;
	volatile int32_t t147 = INT32_MIN;

    t147 = (x705+((x706+x707)<=x708));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x709 = 39;
	int8_t x711 = -1;
	int32_t t148 = 0;

    t148 = (x709+((x710+x711)<=x712));

    if (t148 != 40) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x713 = INT16_MAX;
	volatile int64_t x714 = INT64_MIN;
	static uint32_t x715 = 217644U;
	int8_t x716 = INT8_MIN;
	int32_t t149 = 113;

    t149 = (x713+((x714+x715)<=x716));

    if (t149 != 32768) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	int8_t x718 = INT8_MIN;
	uint8_t x719 = 0U;
	int8_t x720 = INT8_MAX;
	uint64_t t150 = 16LLU;

    t150 = (x717+((x718+x719)<=x720));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x722 = -1LL;
	static int32_t x723 = INT32_MIN;
	uint64_t x724 = UINT64_MAX;
	static int32_t t151 = -1;

    t151 = (x721+((x722+x723)<=x724));

    if (t151 != 128) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x725 = UINT8_MAX;
	int64_t x727 = -1LL;
	volatile int32_t x728 = INT32_MAX;
	volatile int32_t t152 = -851476198;

    t152 = (x725+((x726+x727)<=x728));

    if (t152 != 256) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x729 = INT16_MAX;
	volatile int32_t x730 = 3;
	volatile uint64_t x732 = 6067863175136378LLU;
	int32_t t153 = 186029521;

    t153 = (x729+((x730+x731)<=x732));

    if (t153 != 32768) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x733 = 0;
	static int64_t x734 = -1LL;
	int8_t x735 = -45;
	static uint64_t x736 = 7511848877LLU;

    t154 = (x733+((x734+x735)<=x736));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x737 = UINT8_MAX;
	int16_t x739 = -1;
	int64_t x740 = 88LL;
	static int32_t t155 = 331698;

    t155 = (x737+((x738+x739)<=x740));

    if (t155 != 256) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x741 = -2547349190LL;
	volatile int8_t x742 = INT8_MAX;
	static volatile int8_t x744 = -1;
	static volatile int64_t t156 = 2917147673181867LL;

    t156 = (x741+((x742+x743)<=x744));

    if (t156 != -2547349189LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x749 = INT64_MIN;
	static int32_t x750 = -1;
	int64_t x751 = -634108563670133052LL;
	static uint8_t x752 = UINT8_MAX;
	int64_t t157 = -754LL;

    t157 = (x749+((x750+x751)<=x752));

    if (t157 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x753 = UINT32_MAX;
	uint8_t x754 = 12U;
	uint32_t x756 = 16U;
	uint32_t t158 = UINT32_MAX;

    t158 = (x753+((x754+x755)<=x756));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x757 = 31LL;
	uint32_t x759 = 105U;
	static int8_t x760 = INT8_MIN;

    t159 = (x757+((x758+x759)<=x760));

    if (t159 != 32LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x776 = 4737;
	volatile int32_t t160 = 0;

    t160 = (x773+((x774+x775)<=x776));

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x777 = UINT64_MAX;
	int64_t x778 = 22837013828LL;
	static uint8_t x779 = 1U;
	static int8_t x780 = -1;

    t161 = (x777+((x778+x779)<=x780));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x781 = INT16_MAX;
	int16_t x782 = INT16_MIN;
	volatile uint8_t x783 = 83U;
	int16_t x784 = 2950;
	volatile int32_t t162 = -39083441;

    t162 = (x781+((x782+x783)<=x784));

    if (t162 != 32768) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x789 = UINT64_MAX;
	uint32_t x791 = 110843U;
	uint64_t t163 = 361334973151LLU;

    t163 = (x789+((x790+x791)<=x792));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x793 = 11;
	int8_t x794 = INT8_MIN;
	volatile int16_t x795 = 1;
	uint32_t x796 = 33U;
	static int32_t t164 = 31363665;

    t164 = (x793+((x794+x795)<=x796));

    if (t164 != 11) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x797 = 81LLU;
	static uint64_t x798 = 127502020638978786LLU;
	volatile uint8_t x799 = 35U;
	volatile int32_t x800 = INT32_MAX;

    t165 = (x797+((x798+x799)<=x800));

    if (t165 != 81LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x801 = 8U;
	int16_t x802 = 372;
	static int16_t x803 = INT16_MAX;
	int64_t x804 = 518555114LL;
	volatile int32_t t166 = -124391;

    t166 = (x801+((x802+x803)<=x804));

    if (t166 != 9) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x805 = INT16_MAX;
	int8_t x807 = INT8_MAX;
	volatile uint64_t x808 = 138490602168186328LLU;
	volatile int32_t t167 = -83;

    t167 = (x805+((x806+x807)<=x808));

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile uint8_t x810 = 1U;
	int32_t t168 = 3545;

    t168 = (x809+((x810+x811)<=x812));

    if (t168 != 256) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint64_t x813 = UINT64_MAX;
	static int8_t x814 = -1;
	int32_t x815 = -72;
	int32_t x816 = -1;
	static volatile uint64_t t169 = 39917502224LLU;

    t169 = (x813+((x814+x815)<=x816));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x817 = 6;
	volatile int8_t x818 = 1;
	int32_t x820 = -1;
	volatile int32_t t170 = 1;

    t170 = (x817+((x818+x819)<=x820));

    if (t170 != 7) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x826 = -1;
	int32_t x827 = -1;
	uint32_t x828 = 3829599U;
	volatile int32_t t171 = 1;

    t171 = (x825+((x826+x827)<=x828));

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x829 = -1;
	static uint8_t x832 = 1U;
	volatile int32_t t172 = 460777473;

    t172 = (x829+((x830+x831)<=x832));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x833 = -1;
	int32_t x834 = -1;
	int32_t x835 = -49;

    t173 = (x833+((x834+x835)<=x836));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x841 = 1271213005U;
	volatile int8_t x842 = 0;
	int8_t x843 = -1;
	int64_t x844 = -1LL;
	volatile uint32_t t174 = 1073634718U;

    t174 = (x841+((x842+x843)<=x844));

    if (t174 != 1271213006U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x845 = 1725044;
	int32_t x847 = -1;
	volatile int16_t x848 = INT16_MIN;
	volatile int32_t t175 = 17259794;

    t175 = (x845+((x846+x847)<=x848));

    if (t175 != 1725044) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x853 = UINT64_MAX;
	uint8_t x854 = UINT8_MAX;
	int64_t x855 = INT64_MIN;
	int32_t x856 = -779;
	static uint64_t t176 = 89268311942956LLU;

    t176 = (x853+((x854+x855)<=x856));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x857 = INT8_MAX;
	int32_t x858 = INT32_MIN;
	static volatile int64_t x859 = -1LL;
	int8_t x860 = -3;
	volatile int32_t t177 = -4;

    t177 = (x857+((x858+x859)<=x860));

    if (t177 != 128) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x861 = INT16_MIN;
	int8_t x864 = INT8_MIN;
	static volatile int32_t t178 = -322;

    t178 = (x861+((x862+x863)<=x864));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint16_t x865 = 428U;
	static int64_t x866 = 10520LL;
	uint64_t x867 = UINT64_MAX;
	int32_t x868 = -4507800;
	int32_t t179 = 67351323;

    t179 = (x865+((x866+x867)<=x868));

    if (t179 != 429) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x869 = INT16_MIN;
	int8_t x870 = INT8_MIN;
	uint8_t x871 = UINT8_MAX;
	int32_t x872 = -1;
	int32_t t180 = -474943861;

    t180 = (x869+((x870+x871)<=x872));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x878 = -1LL;
	uint64_t x879 = 610LLU;
	volatile int32_t t181 = -14461168;

    t181 = (x877+((x878+x879)<=x880));

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x881 = 36593183092LLU;
	int8_t x883 = INT8_MIN;
	volatile uint64_t t182 = 1753225771947LLU;

    t182 = (x881+((x882+x883)<=x884));

    if (t182 != 36593183093LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x885 = 29U;
	uint16_t x886 = UINT16_MAX;
	int16_t x887 = -1;
	int16_t x888 = 3097;

    t183 = (x885+((x886+x887)<=x888));

    if (t183 != 29) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x889 = 328859127594910178LLU;
	int16_t x891 = INT16_MIN;
	volatile int64_t x892 = -1LL;
	volatile uint64_t t184 = 566380206016268LLU;

    t184 = (x889+((x890+x891)<=x892));

    if (t184 != 328859127594910179LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x893 = INT8_MIN;
	uint64_t x895 = 617161805LLU;
	uint8_t x896 = UINT8_MAX;
	int32_t t185 = 1;

    t185 = (x893+((x894+x895)<=x896));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x897 = -1;
	static uint16_t x898 = UINT16_MAX;
	int16_t x899 = INT16_MIN;
	int64_t x900 = 809298694310LL;
	int32_t t186 = -9796;

    t186 = (x897+((x898+x899)<=x900));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x902 = 0U;
	uint64_t x903 = UINT64_MAX;
	int64_t x904 = -22LL;
	volatile int32_t t187 = 172090161;

    t187 = (x901+((x902+x903)<=x904));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x906 = 105438;
	int16_t x907 = 1153;
	int16_t x908 = INT16_MAX;
	volatile uint32_t t188 = UINT32_MAX;

    t188 = (x905+((x906+x907)<=x908));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x909 = UINT32_MAX;
	static uint32_t t189 = 18U;

    t189 = (x909+((x910+x911)<=x912));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x913 = -2353;
	uint8_t x914 = UINT8_MAX;
	volatile int8_t x915 = INT8_MAX;
	int8_t x916 = INT8_MIN;
	int32_t t190 = 16067;

    t190 = (x913+((x914+x915)<=x916));

    if (t190 != -2353) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x917 = -1;
	uint32_t x918 = 31U;
	static int64_t x919 = -3949348902501233LL;
	volatile int64_t x920 = INT64_MAX;
	int32_t t191 = -801397962;

    t191 = (x917+((x918+x919)<=x920));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x921 = INT8_MIN;
	int64_t x922 = -6062035LL;
	int32_t x923 = -1;
	int64_t x924 = INT64_MIN;
	int32_t t192 = 27018737;

    t192 = (x921+((x922+x923)<=x924));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x933 = INT32_MIN;
	static volatile int16_t x934 = -1;
	int64_t x935 = -14482876590LL;
	volatile uint8_t x936 = 3U;
	volatile int32_t t193 = -41598;

    t193 = (x933+((x934+x935)<=x936));

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x941 = -1LL;
	static volatile uint64_t x942 = 39556675023588LLU;
	int8_t x943 = -2;
	volatile int32_t x944 = 319228;
	volatile int64_t t194 = 84928642LL;

    t194 = (x941+((x942+x943)<=x944));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x945 = UINT16_MAX;
	volatile int64_t x946 = -1352060130294LL;
	int32_t t195 = -1067012347;

    t195 = (x945+((x946+x947)<=x948));

    if (t195 != 65536) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x949 = -1;
	volatile int64_t x950 = INT64_MIN;
	static uint64_t x951 = 4071LLU;

    t196 = (x949+((x950+x951)<=x952));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x953 = INT8_MIN;
	int32_t x954 = INT32_MIN;
	uint32_t x955 = 319133U;
	static int32_t t197 = 48027524;

    t197 = (x953+((x954+x955)<=x956));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x957 = 679U;
	static uint16_t x958 = UINT16_MAX;
	uint32_t x959 = 1504152U;
	uint16_t x960 = UINT16_MAX;
	int32_t t198 = 19427554;

    t198 = (x957+((x958+x959)<=x960));

    if (t198 != 679) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x966 = UINT8_MAX;
	volatile int16_t x967 = 2;
	int64_t x968 = INT64_MAX;
	int32_t t199 = -5;

    t199 = (x965+((x966+x967)<=x968));

    if (t199 != 3) { NG(); } else { ; }
	
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

