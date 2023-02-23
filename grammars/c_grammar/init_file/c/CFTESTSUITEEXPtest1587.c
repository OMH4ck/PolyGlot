
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

int16_t x1 = 0;
volatile uint32_t t1 = 1U;
static int8_t x9 = INT8_MIN;
int16_t x10 = INT16_MAX;
int16_t x17 = INT16_MIN;
volatile int32_t t4 = -86309274;
static int64_t x21 = 6876507959231LL;
static uint16_t x26 = 8U;
int32_t x27 = INT32_MIN;
volatile int32_t t7 = -1;
int64_t x38 = INT64_MIN;
static int16_t x39 = INT16_MIN;
static volatile uint16_t x40 = UINT16_MAX;
volatile int32_t x56 = INT32_MAX;
volatile int8_t x64 = INT8_MIN;
int32_t t15 = 45103;
static volatile uint64_t t16 = 1431042798789363LLU;
uint64_t x70 = 1402734829LLU;
int8_t x77 = -1;
int32_t x80 = -1;
uint32_t x86 = 1681463U;
volatile int64_t t20 = 10808994LL;
volatile int32_t x89 = INT32_MIN;
volatile int8_t x96 = -1;
int8_t x105 = INT8_MAX;
static volatile int32_t x108 = 444867425;
int8_t x119 = -1;
int32_t t26 = -824;
static volatile uint8_t x128 = 10U;
static volatile uint64_t x152 = UINT64_MAX;
volatile int32_t t33 = -385333;
volatile int64_t x165 = INT64_MAX;
uint8_t x169 = 5U;
uint64_t x179 = 1116201486148423095LLU;
static volatile int32_t x193 = INT32_MIN;
volatile int16_t x196 = INT16_MIN;
uint32_t t40 = 3U;
volatile int32_t x205 = 1;
int64_t x206 = 5707LL;
int32_t x210 = -1;
volatile uint8_t x211 = 68U;
uint32_t x217 = 39U;
volatile uint32_t t43 = 1U;
uint64_t t44 = 29LLU;
int8_t x225 = INT8_MIN;
int32_t x227 = -76166018;
int64_t x231 = -2257242704065LL;
int32_t x234 = INT32_MIN;
int32_t x235 = INT32_MAX;
static volatile uint64_t x249 = UINT64_MAX;
volatile int64_t x258 = -9116155LL;
volatile int64_t t54 = -23002273647LL;
volatile int32_t t55 = 3289339;
int16_t x270 = INT16_MIN;
static int32_t x271 = -4;
int32_t x272 = -1;
uint8_t x273 = 7U;
int16_t x276 = -331;
int64_t x285 = -1LL;
static int16_t x286 = 1857;
int64_t x291 = 81968192014LL;
volatile int32_t t61 = 40;
volatile uint32_t t62 = 10U;
volatile uint16_t x310 = UINT16_MAX;
int8_t x311 = INT8_MAX;
volatile uint64_t t65 = 8528205495134LLU;
static int8_t x327 = INT8_MIN;
static int16_t x329 = INT16_MAX;
uint32_t x330 = UINT32_MAX;
uint8_t x335 = 10U;
static volatile uint64_t t69 = 10272121033067LLU;
volatile int32_t x339 = -1;
static int64_t x341 = 529640394164423937LL;
volatile int16_t x343 = -1;
int32_t x347 = -967;
volatile int32_t t73 = 4007675;
int64_t x357 = 2340073LL;
int64_t x371 = INT64_MAX;
static volatile int8_t x374 = 13;
uint16_t x383 = 0U;
uint16_t x384 = UINT16_MAX;
int64_t x395 = -12749515LL;
int32_t x401 = -1;
int16_t x411 = INT16_MIN;
int64_t x413 = INT64_MIN;
uint64_t t88 = 8840485178560480LLU;
uint16_t x422 = 27U;
volatile int8_t x435 = INT8_MIN;
uint16_t x443 = 17391U;
int32_t t92 = 1276516;
volatile int16_t x454 = INT16_MIN;
static volatile int32_t t93 = 25879;
static int8_t x458 = INT8_MIN;
int64_t x460 = -135926154970LL;
int8_t x464 = -1;
volatile int32_t t95 = -468499;
int64_t x466 = -1LL;
volatile uint16_t x469 = UINT16_MAX;
static uint8_t x489 = 12U;
int64_t x491 = INT64_MIN;
volatile int16_t x496 = -1;
int32_t x499 = -1;
int64_t x502 = INT64_MIN;
uint32_t x503 = UINT32_MAX;
int32_t x507 = 6;
int8_t x509 = INT8_MIN;
int64_t x511 = INT64_MIN;
uint32_t x520 = 2U;
uint16_t x528 = UINT16_MAX;
int32_t x531 = -116423;
int16_t x533 = INT16_MIN;
int32_t t112 = 4477;
int8_t x540 = -1;
int32_t t114 = 8266;
volatile int32_t t117 = 417804037;
int16_t x566 = INT16_MIN;
static volatile int16_t x569 = INT16_MIN;
int16_t x571 = INT16_MIN;
int32_t x572 = 121046575;
static int16_t x576 = 667;
static volatile int64_t t121 = -488813357LL;
volatile uint64_t t122 = 0LLU;
static uint16_t x597 = UINT16_MAX;
int16_t x599 = INT16_MAX;
static uint32_t t126 = 85302809U;
int8_t x604 = INT8_MIN;
static int16_t x605 = INT16_MIN;
static volatile int8_t x606 = INT8_MIN;
static int32_t x609 = 238542633;
static int16_t x610 = INT16_MAX;
volatile int64_t x613 = INT64_MAX;
int64_t t130 = 66983LL;
uint8_t x629 = 0U;
uint32_t x640 = 62U;
volatile uint64_t t136 = 8235LLU;
int16_t x667 = -1;
volatile int16_t x684 = 5431;
volatile int64_t t145 = 430872652356LL;
static int32_t x706 = INT32_MIN;
uint8_t x714 = 12U;
int32_t t147 = -1;
int32_t x732 = 88477;
int64_t x741 = INT64_MIN;
uint64_t x745 = 2LLU;
uint32_t x746 = 4169800U;
static int16_t x751 = -5;
int64_t x762 = -1LL;
int32_t x763 = -45357;
int64_t t157 = -15013649974157LL;
volatile uint8_t x768 = 1U;
int32_t x773 = -200850738;
uint16_t x775 = 3U;
uint64_t x781 = 9535275984099LLU;
uint8_t x782 = 5U;
uint32_t x783 = 1188814433U;
int16_t x784 = INT16_MIN;
static int32_t x785 = 0;
int64_t x792 = -783LL;
volatile int64_t x793 = -439320887694579577LL;
static uint64_t x798 = UINT64_MAX;
int8_t x799 = INT8_MAX;
uint32_t x802 = 15206979U;
static uint64_t x804 = UINT64_MAX;
uint8_t x806 = 56U;
static int8_t x809 = -1;
int32_t t170 = 24;
int8_t x822 = -1;
int64_t x830 = INT64_MAX;
uint64_t t173 = 2LLU;
static int32_t x839 = INT32_MAX;
static int64_t x840 = -1LL;
int32_t x847 = 109;
volatile int32_t x848 = -1;
int8_t x850 = INT8_MIN;
static uint64_t x863 = 79189LLU;
volatile uint64_t t182 = 12LLU;
uint8_t x870 = 23U;
uint32_t x876 = 812640245U;
int64_t t184 = 180512063024518LL;
int64_t x878 = 441516LL;
int64_t t185 = 11611602868522LL;
uint64_t x888 = 202194558248393LLU;
int32_t x892 = 64497;
volatile int32_t t190 = 0;
int16_t x913 = -1;
int8_t x919 = -1;
int64_t x921 = INT64_MIN;
int64_t x923 = INT64_MIN;
uint64_t x930 = 4337LLU;
static volatile int64_t t197 = -1135677733406068758LL;
int16_t x938 = INT16_MIN;
int8_t x939 = 1;
static volatile uint32_t x944 = 18U;


void f0(void) {
    	int64_t x2 = INT64_MAX;
	static int8_t x3 = INT8_MIN;
	uint8_t x4 = 12U;
	static int32_t t0 = 3;

    t0 = (x1%((x2>x3)-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	uint64_t x6 = 3LLU;
	int64_t x7 = -1LL;
	uint32_t x8 = UINT32_MAX;

    t1 = (x5%((x6>x7)-x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x11 = UINT32_MAX;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -84487;

    t2 = (x9%((x10>x11)-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = 192518;
	uint16_t x14 = 20U;
	static int64_t x15 = INT64_MIN;
	volatile int32_t x16 = -1;
	static volatile int32_t t3 = -1881;

    t3 = (x13%((x14>x15)-x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = -1107578089011445LL;
	int64_t x19 = INT64_MAX;
	volatile int8_t x20 = 1;

    t4 = (x17%((x18>x19)-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -274LL;
	int8_t x23 = INT8_MIN;
	uint8_t x24 = UINT8_MAX;
	volatile int64_t t5 = -7031LL;

    t5 = (x21%((x22>x23)-x24));

    if (t5 != 86LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x25 = INT32_MIN;
	uint64_t x28 = 2227435366314254042LLU;
	uint64_t t6 = 1826534086LLU;

    t6 = (x25%((x26>x27)-x28));

    if (t6 != 2227435364166770393LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	int8_t x30 = 7;
	int64_t x31 = INT64_MIN;
	static int16_t x32 = -1;

    t7 = (x29%((x30>x31)-x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	static int16_t x34 = -1;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t8 = 10061710280LLU;

    t8 = (x33%((x34>x35)-x36));

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	volatile int32_t t9 = -2032;

    t9 = (x37%((x38>x39)-x40));

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 0U;
	int64_t x42 = INT64_MAX;
	static int32_t x43 = -150225;
	volatile uint64_t x44 = 16852353LLU;
	volatile uint64_t t10 = 233625281LLU;

    t10 = (x41%((x42>x43)-x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	static volatile int8_t x46 = 11;
	uint16_t x47 = 27329U;
	static int16_t x48 = INT16_MAX;
	volatile int32_t t11 = -8929506;

    t11 = (x45%((x46>x47)-x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	uint32_t x50 = UINT32_MAX;
	static int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	uint32_t t12 = 345864U;

    t12 = (x49%((x50>x51)-x52));

    if (t12 != 3U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	int64_t x54 = INT64_MIN;
	uint16_t x55 = 3U;
	volatile int32_t t13 = 21140224;

    t13 = (x53%((x54>x55)-x56));

    if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 0U;
	int32_t x58 = 3595943;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = 5U;
	int32_t t14 = -495;

    t14 = (x57%((x58>x59)-x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MIN;
	volatile uint32_t x62 = 4048956U;
	uint32_t x63 = 56118U;

    t15 = (x61%((x62>x63)-x64));

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile int32_t x66 = INT32_MAX;
	int16_t x67 = INT16_MIN;
	int16_t x68 = -1;

    t16 = (x65%((x66>x67)-x68));

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 24U;
	volatile uint16_t x71 = 2223U;
	static uint8_t x72 = 41U;
	static int32_t t17 = 128736694;

    t17 = (x69%((x70>x71)-x72));

    if (t17 != 24) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x78 = 3798;
	volatile int16_t x79 = INT16_MAX;
	volatile int32_t t18 = -16;

    t18 = (x77%((x78>x79)-x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	int32_t x83 = INT32_MAX;
	int8_t x84 = -11;
	volatile int32_t t19 = 17;

    t19 = (x81%((x82>x83)-x84));

    if (t19 != -10) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = -356LL;
	int32_t x87 = -1;
	int32_t x88 = -1;

    t20 = (x85%((x86>x87)-x88));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x90 = -43930813445044LL;
	uint16_t x91 = UINT16_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t21 = 3;

    t21 = (x89%((x90>x91)-x92));

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = 2;
	int8_t x94 = -3;
	int64_t x95 = -1LL;
	int32_t t22 = -7643363;

    t22 = (x93%((x94>x95)-x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MIN;
	uint8_t x103 = 2U;
	int16_t x104 = -95;
	volatile int64_t t23 = 28441LL;

    t23 = (x101%((x102>x103)-x104));

    if (t23 != -18LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x106 = -1LL;
	static int16_t x107 = INT16_MIN;
	int32_t t24 = 699;

    t24 = (x105%((x106>x107)-x108));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MAX;
	volatile uint32_t x116 = 98930U;
	static volatile uint32_t t25 = 192255U;

    t25 = (x113%((x114>x115)-x116));

    if (t25 != 127U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = -1;
	uint64_t x118 = UINT64_MAX;
	uint16_t x120 = UINT16_MAX;

    t26 = (x117%((x118>x119)-x120));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = INT8_MAX;
	volatile int32_t x122 = INT32_MIN;
	int32_t x123 = 7;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t27 = -13;

    t27 = (x121%((x122>x123)-x124));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = INT64_MIN;
	uint64_t x126 = 56467873LLU;
	int8_t x127 = INT8_MIN;
	static volatile int64_t t28 = -176028334838750162LL;

    t28 = (x125%((x126>x127)-x128));

    if (t28 != -8LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = -1;
	int64_t x130 = 421822882297478LL;
	int8_t x131 = -1;
	uint32_t x132 = UINT32_MAX;
	uint32_t t29 = 94118007U;

    t29 = (x129%((x130>x131)-x132));

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x141 = 0U;
	int16_t x142 = INT16_MIN;
	uint32_t x143 = UINT32_MAX;
	static int16_t x144 = INT16_MIN;
	int32_t t30 = 114037581;

    t30 = (x141%((x142>x143)-x144));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = INT16_MAX;
	uint32_t x150 = 377897U;
	volatile int32_t x151 = -77;
	uint64_t t31 = 16105027038020358LLU;

    t31 = (x149%((x150>x151)-x152));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x153 = UINT32_MAX;
	volatile uint16_t x154 = UINT16_MAX;
	int16_t x155 = INT16_MIN;
	uint16_t x156 = 20098U;
	volatile uint32_t t32 = 875643538U;

    t32 = (x153%((x154>x155)-x156));

    if (t32 != 20096U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x157 = INT32_MAX;
	int32_t x158 = -1;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = -1;

    t33 = (x157%((x158>x159)-x160));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x162 = INT8_MAX;
	static uint64_t x163 = 117LLU;
	int16_t x164 = INT16_MAX;
	volatile int64_t t34 = -21LL;

    t34 = (x161%((x162>x163)-x164));

    if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x166 = -1;
	uint64_t x167 = 534531281168987289LLU;
	uint64_t x168 = 7452415788LLU;
	uint64_t t35 = 134637402637104927LLU;

    t35 = (x165%((x166>x167)-x168));

    if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x170 = INT64_MIN;
	int64_t x171 = -1LL;
	volatile uint8_t x172 = 2U;
	static int32_t t36 = -58;

    t36 = (x169%((x170>x171)-x172));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x173 = -1;
	int8_t x174 = 0;
	int32_t x175 = INT32_MIN;
	int8_t x176 = 28;
	volatile int32_t t37 = -136674;

    t37 = (x173%((x174>x175)-x176));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x177 = -1;
	static int8_t x178 = INT8_MIN;
	int32_t x180 = -1;
	volatile int32_t t38 = 1814437;

    t38 = (x177%((x178>x179)-x180));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x194 = UINT16_MAX;
	uint16_t x195 = UINT16_MAX;
	int32_t t39 = -1810395;

    t39 = (x193%((x194>x195)-x196));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x201 = 48555812;
	int64_t x202 = INT64_MIN;
	static int64_t x203 = INT64_MIN;
	static uint32_t x204 = 1635U;

    t40 = (x201%((x202>x203)-x204));

    if (t40 != 48555812U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x207 = UINT32_MAX;
	int8_t x208 = -1;
	static volatile int32_t t41 = -554583255;

    t41 = (x205%((x206>x207)-x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x209 = -1;
	volatile int16_t x212 = INT16_MIN;
	static int32_t t42 = -2651866;

    t42 = (x209%((x210>x211)-x212));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x218 = -1LL;
	volatile int8_t x219 = -2;
	int8_t x220 = INT8_MIN;

    t43 = (x217%((x218>x219)-x220));

    if (t43 != 39U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x221 = INT64_MAX;
	int8_t x222 = INT8_MIN;
	static int32_t x223 = INT32_MIN;
	uint64_t x224 = 2120081444450149124LLU;

    t44 = (x221%((x222>x223)-x224));

    if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x226 = INT32_MIN;
	int8_t x228 = -2;
	int32_t t45 = -34421254;

    t45 = (x225%((x226>x227)-x228));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	int64_t x230 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	volatile uint64_t t46 = 102559079LLU;

    t46 = (x229%((x230>x231)-x232));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x233 = 205420235U;
	static uint64_t x236 = 27603027210206LLU;
	static uint64_t t47 = 169559218337LLU;

    t47 = (x233%((x234>x235)-x236));

    if (t47 != 205420235LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x237 = 1U;
	uint8_t x238 = 123U;
	int64_t x239 = -30453446LL;
	static int16_t x240 = -418;
	volatile int32_t t48 = 30;

    t48 = (x237%((x238>x239)-x240));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x241 = INT8_MIN;
	volatile int8_t x242 = INT8_MIN;
	uint32_t x243 = 1046595878U;
	int16_t x244 = -1;
	int32_t t49 = -4;

    t49 = (x241%((x242>x243)-x244));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x245 = 9163LL;
	int64_t x246 = 24237LL;
	int16_t x247 = -3;
	int16_t x248 = 5261;
	volatile int64_t t50 = -2830LL;

    t50 = (x245%((x246>x247)-x248));

    if (t50 != 3903LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x250 = -41;
	uint64_t x251 = 467080317654LLU;
	uint32_t x252 = 16917315U;
	static volatile uint64_t t51 = 59069651322LLU;

    t51 = (x249%((x250>x251)-x252));

    if (t51 != 2525278759LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x253 = 929U;
	static volatile uint64_t x254 = 51809954450LLU;
	int16_t x255 = 9797;
	int8_t x256 = INT8_MIN;
	int32_t t52 = -1;

    t52 = (x253%((x254>x255)-x256));

    if (t52 != 26) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x257 = 1583U;
	volatile int8_t x259 = INT8_MIN;
	static int8_t x260 = -1;
	static volatile uint32_t t53 = 0U;

    t53 = (x257%((x258>x259)-x260));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x261 = 1799430U;
	int64_t x262 = -108603LL;
	int32_t x263 = -1;
	int64_t x264 = -72LL;

    t54 = (x261%((x262>x263)-x264));

    if (t54 != 6LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x265 = 7U;
	uint16_t x266 = 159U;
	int64_t x267 = 234655546LL;
	static volatile int16_t x268 = -13;

    t55 = (x265%((x266>x267)-x268));

    if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x269 = 1671258418494714899LL;
	int64_t t56 = -22LL;

    t56 = (x269%((x270>x271)-x272));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x274 = 12U;
	volatile uint64_t x275 = UINT64_MAX;
	int32_t t57 = -23471;

    t57 = (x273%((x274>x275)-x276));

    if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x277 = INT32_MIN;
	volatile int64_t x278 = INT64_MIN;
	static int32_t x279 = INT32_MAX;
	static int16_t x280 = INT16_MIN;
	int32_t t58 = 48;

    t58 = (x277%((x278>x279)-x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x287 = 34003137LLU;
	uint16_t x288 = 392U;
	volatile int64_t t59 = 8186335153LL;

    t59 = (x285%((x286>x287)-x288));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x289 = 3277U;
	volatile int8_t x290 = INT8_MIN;
	int64_t x292 = INT64_MAX;
	volatile int64_t t60 = -479128978LL;

    t60 = (x289%((x290>x291)-x292));

    if (t60 != 3277LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x293 = UINT8_MAX;
	int32_t x294 = INT32_MAX;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = INT16_MIN;

    t61 = (x293%((x294>x295)-x296));

    if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x301 = UINT32_MAX;
	volatile int32_t x302 = 3777259;
	int16_t x303 = INT16_MAX;
	static uint16_t x304 = 17104U;

    t62 = (x301%((x302>x303)-x304));

    if (t62 != 17102U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x309 = -1;
	int32_t x312 = INT32_MAX;
	volatile int32_t t63 = 5;

    t63 = (x309%((x310>x311)-x312));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x313 = UINT8_MAX;
	static int16_t x314 = 14150;
	volatile uint32_t x315 = UINT32_MAX;
	volatile int8_t x316 = INT8_MIN;
	int32_t t64 = -57945458;

    t64 = (x313%((x314>x315)-x316));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x317 = 14157654LLU;
	static int8_t x318 = -1;
	int16_t x319 = INT16_MAX;
	uint32_t x320 = UINT32_MAX;

    t65 = (x317%((x318>x319)-x320));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x321 = INT64_MIN;
	uint64_t x322 = 154444763815337179LLU;
	int16_t x323 = INT16_MIN;
	static int64_t x324 = -197126LL;
	int64_t t66 = -2LL;

    t66 = (x321%((x322>x323)-x324));

    if (t66 != -113536LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x325 = 7U;
	static volatile uint64_t x326 = UINT64_MAX;
	volatile uint32_t x328 = 5723U;
	volatile uint32_t t67 = 27U;

    t67 = (x325%((x326>x327)-x328));

    if (t67 != 7U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x331 = UINT64_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t68 = -967043;

    t68 = (x329%((x330>x331)-x332));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x333 = INT64_MIN;
	int16_t x334 = 39;
	uint64_t x336 = 1032837LLU;

    t69 = (x333%((x334>x335)-x336));

    if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x337 = INT8_MIN;
	static int8_t x338 = -9;
	int32_t x340 = -1;
	volatile int32_t t70 = 2545324;

    t70 = (x337%((x338>x339)-x340));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x342 = INT32_MIN;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t71 = -97558314166550LL;

    t71 = (x341%((x342>x343)-x344));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x345 = INT8_MAX;
	volatile uint16_t x346 = 1058U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t72 = -1267;

    t72 = (x345%((x346>x347)-x348));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x349 = INT8_MIN;
	int8_t x350 = -63;
	int8_t x351 = INT8_MAX;
	int8_t x352 = INT8_MIN;

    t73 = (x349%((x350>x351)-x352));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MIN;
	static int16_t x355 = -10;
	static uint64_t x356 = UINT64_MAX;
	volatile uint64_t t74 = 409856LLU;

    t74 = (x353%((x354>x355)-x356));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x358 = -123;
	uint8_t x359 = 36U;
	uint64_t x360 = 192179131688612314LLU;
	volatile uint64_t t75 = 1994174LLU;

    t75 = (x357%((x358>x359)-x360));

    if (t75 != 2340073LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x361 = -1;
	static int64_t x362 = INT64_MAX;
	int8_t x363 = -1;
	int8_t x364 = INT8_MAX;
	volatile int32_t t76 = -6078;

    t76 = (x361%((x362>x363)-x364));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x365 = INT16_MAX;
	static uint8_t x366 = 43U;
	volatile uint16_t x367 = 0U;
	volatile uint64_t x368 = UINT64_MAX;
	uint64_t t77 = 110720566375LLU;

    t77 = (x365%((x366>x367)-x368));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x369 = INT32_MAX;
	uint32_t x370 = 1602U;
	int16_t x372 = -1631;
	int32_t t78 = 1183;

    t78 = (x369%((x370>x371)-x372));

    if (t78 != 1401) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x373 = -231335876;
	uint64_t x375 = 3653394519426565723LLU;
	int8_t x376 = 3;
	static int32_t t79 = 104;

    t79 = (x373%((x374>x375)-x376));

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x377 = 4128376881950734LLU;
	uint32_t x378 = 1262967U;
	uint64_t x379 = 14365LLU;
	uint32_t x380 = 27U;
	volatile uint64_t t80 = 4129112274847802206LLU;

    t80 = (x377%((x378>x379)-x380));

    if (t80 != 2802419494LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x381 = INT32_MIN;
	int32_t x382 = 1654;
	int32_t t81 = 27165143;

    t81 = (x381%((x382>x383)-x384));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x385 = INT8_MAX;
	int8_t x386 = -1;
	static int16_t x387 = INT16_MAX;
	int32_t x388 = -1;
	int32_t t82 = 5342;

    t82 = (x385%((x386>x387)-x388));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x389 = UINT64_MAX;
	uint16_t x390 = UINT16_MAX;
	int64_t x391 = INT64_MAX;
	int8_t x392 = INT8_MAX;
	uint64_t t83 = 73LLU;

    t83 = (x389%((x390>x391)-x392));

    if (t83 != 126LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x393 = -841;
	static volatile uint16_t x394 = UINT16_MAX;
	int32_t x396 = -1;
	volatile int32_t t84 = -31800;

    t84 = (x393%((x394>x395)-x396));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x397 = 57U;
	static volatile uint64_t x398 = UINT64_MAX;
	static uint64_t x399 = 16393602166LLU;
	int64_t x400 = INT64_MAX;
	int64_t t85 = -2059833184643LL;

    t85 = (x397%((x398>x399)-x400));

    if (t85 != 57LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x402 = INT8_MIN;
	uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MIN;
	static int32_t t86 = 26955886;

    t86 = (x401%((x402>x403)-x404));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x409 = 143437083808LLU;
	int8_t x410 = INT8_MIN;
	int32_t x412 = -1;
	uint64_t t87 = 239753810515LLU;

    t87 = (x409%((x410>x411)-x412));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x414 = INT64_MIN;
	int32_t x415 = -3;
	static uint64_t x416 = 591579LLU;

    t88 = (x413%((x414>x415)-x416));

    if (t88 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x417 = 27;
	static uint64_t x418 = 1029317192LLU;
	static int32_t x419 = -2131822;
	volatile uint8_t x420 = 84U;
	volatile int32_t t89 = -6885998;

    t89 = (x417%((x418>x419)-x420));

    if (t89 != 27) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x421 = 1LLU;
	uint32_t x423 = UINT32_MAX;
	static volatile int16_t x424 = INT16_MIN;
	static volatile uint64_t t90 = 76229944LLU;

    t90 = (x421%((x422>x423)-x424));

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x433 = INT64_MIN;
	int16_t x434 = 59;
	int16_t x436 = INT16_MAX;
	int64_t t91 = -59350387127LL;

    t91 = (x433%((x434>x435)-x436));

    if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x441 = -1;
	int8_t x442 = 25;
	int32_t x444 = -801022889;

    t92 = (x441%((x442>x443)-x444));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x453 = -32;
	volatile uint32_t x455 = UINT32_MAX;
	volatile int8_t x456 = INT8_MIN;

    t93 = (x453%((x454>x455)-x456));

    if (t93 != -32) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	int8_t x459 = -15;
	int64_t t94 = 162309683193502LL;

    t94 = (x457%((x458>x459)-x460));

    if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x461 = 41U;
	uint8_t x462 = 120U;
	int8_t x463 = INT8_MIN;

    t95 = (x461%((x462>x463)-x464));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x465 = -1;
	static uint64_t x467 = 255LLU;
	int64_t x468 = INT64_MAX;
	int64_t t96 = -6556LL;

    t96 = (x465%((x466>x467)-x468));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x470 = 4;
	int16_t x471 = INT16_MAX;
	uint64_t x472 = 145111417765LLU;
	static volatile uint64_t t97 = 1296983690250LLU;

    t97 = (x469%((x470>x471)-x472));

    if (t97 != 65535LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x477 = -1165369001LL;
	static volatile int16_t x478 = 1;
	int32_t x479 = 1;
	int32_t x480 = -809385;
	volatile int64_t t98 = -234709LL;

    t98 = (x477%((x478>x479)-x480));

    if (t98 != -663986LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x481 = INT64_MAX;
	volatile uint16_t x482 = 364U;
	int16_t x483 = 2107;
	static uint64_t x484 = 15790690970LLU;
	uint64_t t99 = 31318553460LLU;

    t99 = (x481%((x482>x483)-x484));

    if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x485 = INT32_MIN;
	uint64_t x486 = 10815788418114LLU;
	volatile uint64_t x487 = UINT64_MAX;
	volatile int32_t x488 = -49;
	volatile int32_t t100 = 11;

    t100 = (x485%((x486>x487)-x488));

    if (t100 != -44) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x490 = -1;
	int8_t x492 = INT8_MIN;
	static int32_t t101 = -3779174;

    t101 = (x489%((x490>x491)-x492));

    if (t101 != 12) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x493 = 0;
	int8_t x494 = INT8_MIN;
	uint16_t x495 = 1194U;
	volatile int32_t t102 = 67;

    t102 = (x493%((x494>x495)-x496));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x497 = INT64_MAX;
	volatile int32_t x498 = 429873;
	int8_t x500 = INT8_MIN;
	int64_t t103 = 54346LL;

    t103 = (x497%((x498>x499)-x500));

    if (t103 != 127LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x501 = -1;
	static int8_t x504 = -1;
	static int32_t t104 = -1;

    t104 = (x501%((x502>x503)-x504));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x505 = 107613685203610LLU;
	volatile uint64_t x506 = 153465357305950LLU;
	uint32_t x508 = UINT32_MAX;
	static volatile uint64_t t105 = 8072304180603462865LLU;

    t105 = (x505%((x506>x507)-x508));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x510 = -20;
	volatile int32_t x512 = 2295;
	int32_t t106 = -15;

    t106 = (x509%((x510>x511)-x512));

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x513 = -63;
	static volatile int64_t x514 = -1LL;
	uint64_t x515 = 346540199722801LLU;
	uint8_t x516 = 6U;
	volatile int32_t t107 = 598935;

    t107 = (x513%((x514>x515)-x516));

    if (t107 != -3) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x517 = UINT16_MAX;
	uint8_t x518 = 7U;
	int16_t x519 = -1107;
	volatile uint32_t t108 = 392777U;

    t108 = (x517%((x518>x519)-x520));

    if (t108 != 65535U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x521 = INT64_MIN;
	static uint16_t x522 = 27U;
	int64_t x523 = INT64_MIN;
	uint16_t x524 = 5U;
	int64_t t109 = -6917885LL;

    t109 = (x521%((x522>x523)-x524));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x525 = -110LL;
	int64_t x526 = INT64_MIN;
	int16_t x527 = -7;
	volatile int64_t t110 = -290627492405673729LL;

    t110 = (x525%((x526>x527)-x528));

    if (t110 != -110LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x529 = 68U;
	static volatile uint64_t x530 = 11763481279LLU;
	int16_t x532 = INT16_MIN;
	volatile uint32_t t111 = 826U;

    t111 = (x529%((x530>x531)-x532));

    if (t111 != 68U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x534 = INT64_MIN;
	uint16_t x535 = UINT16_MAX;
	static volatile uint16_t x536 = 3097U;

    t112 = (x533%((x534>x535)-x536));

    if (t112 != -1798) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x537 = 24171676LL;
	int8_t x538 = -1;
	uint16_t x539 = UINT16_MAX;
	static volatile int64_t t113 = -854086848LL;

    t113 = (x537%((x538>x539)-x540));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x541 = INT8_MIN;
	uint16_t x542 = 1484U;
	int16_t x543 = INT16_MAX;
	volatile int8_t x544 = 1;

    t114 = (x541%((x542>x543)-x544));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x545 = 2470399494559187203LL;
	int8_t x546 = INT8_MIN;
	static uint64_t x547 = UINT64_MAX;
	int64_t x548 = -1LL;
	volatile int64_t t115 = -2LL;

    t115 = (x545%((x546>x547)-x548));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x553 = INT32_MIN;
	int32_t x554 = INT32_MIN;
	uint64_t x555 = 8131729081805048234LLU;
	static int64_t x556 = INT64_MAX;
	volatile int64_t t116 = -1LL;

    t116 = (x553%((x554>x555)-x556));

    if (t116 != -2147483648LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x557 = -3410;
	static int16_t x558 = INT16_MIN;
	int32_t x559 = INT32_MAX;
	int16_t x560 = -1;

    t117 = (x557%((x558>x559)-x560));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x561 = INT32_MIN;
	int16_t x562 = -37;
	uint8_t x563 = 0U;
	volatile int64_t x564 = -1LL;
	int64_t t118 = -277012354LL;

    t118 = (x561%((x562>x563)-x564));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x565 = -1567;
	int8_t x567 = INT8_MAX;
	static int16_t x568 = INT16_MIN;
	int32_t t119 = -6901;

    t119 = (x565%((x566>x567)-x568));

    if (t119 != -1567) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x570 = INT64_MIN;
	int32_t t120 = 0;

    t120 = (x569%((x570>x571)-x572));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x573 = INT64_MIN;
	static uint64_t x574 = UINT64_MAX;
	static uint32_t x575 = 6339254U;

    t121 = (x573%((x574>x575)-x576));

    if (t121 != -80LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x577 = 127183970042922511LLU;
	static uint16_t x578 = UINT16_MAX;
	uint8_t x579 = UINT8_MAX;
	int16_t x580 = INT16_MIN;

    t122 = (x577%((x578>x579)-x580));

    if (t122 != 25975LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x581 = UINT64_MAX;
	int64_t x582 = -17951612694LL;
	static int64_t x583 = INT64_MIN;
	static volatile uint32_t x584 = 59266579U;
	uint64_t t123 = 3874571347154356007LLU;

    t123 = (x581%((x582>x583)-x584));

    if (t123 != 440516377LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x585 = -1LL;
	uint64_t x586 = 2042893726275102302LLU;
	uint16_t x587 = 126U;
	uint8_t x588 = 28U;
	int64_t t124 = 7642226LL;

    t124 = (x585%((x586>x587)-x588));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x593 = UINT8_MAX;
	int32_t x594 = INT32_MIN;
	static int64_t x595 = 7020414442041LL;
	int8_t x596 = 2;
	volatile int32_t t125 = 5712;

    t125 = (x593%((x594>x595)-x596));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x598 = 62239U;
	static uint32_t x600 = UINT32_MAX;

    t126 = (x597%((x598>x599)-x600));

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x601 = INT8_MIN;
	uint16_t x602 = 802U;
	int64_t x603 = -27495396LL;
	int32_t t127 = -171873;

    t127 = (x601%((x602>x603)-x604));

    if (t127 != -128) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x607 = INT16_MAX;
	volatile uint64_t x608 = 116734709LLU;
	uint64_t t128 = 131LLU;

    t128 = (x605%((x606>x607)-x608));

    if (t128 != 116701941LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x611 = INT8_MIN;
	uint32_t x612 = UINT32_MAX;
	uint32_t t129 = 20240892U;

    t129 = (x609%((x610>x611)-x612));

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x614 = INT8_MAX;
	uint64_t x615 = 704LLU;
	int16_t x616 = INT16_MAX;

    t130 = (x613%((x614>x615)-x616));

    if (t130 != 7LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x617 = 424;
	int32_t x618 = -27;
	int8_t x619 = 1;
	volatile uint8_t x620 = 1U;
	volatile int32_t t131 = -128377;

    t131 = (x617%((x618>x619)-x620));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x621 = INT64_MAX;
	static uint16_t x622 = UINT16_MAX;
	static volatile int8_t x623 = -19;
	int64_t x624 = -7LL;
	int64_t t132 = -11629880322LL;

    t132 = (x621%((x622>x623)-x624));

    if (t132 != 7LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x630 = 3274482020610712181LL;
	int8_t x631 = INT8_MIN;
	int64_t x632 = 2145899388598881468LL;
	int64_t t133 = -38902LL;

    t133 = (x629%((x630>x631)-x632));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x633 = INT32_MIN;
	static int16_t x634 = 6324;
	static int64_t x635 = -1LL;
	int8_t x636 = 58;
	int32_t t134 = -10143975;

    t134 = (x633%((x634>x635)-x636));

    if (t134 != -41) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x637 = -1;
	volatile int16_t x638 = INT16_MIN;
	static uint64_t x639 = UINT64_MAX;
	volatile uint32_t t135 = 1337620U;

    t135 = (x637%((x638>x639)-x640));

    if (t135 != 61U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x645 = INT16_MIN;
	uint8_t x646 = 113U;
	int8_t x647 = -1;
	volatile uint64_t x648 = UINT64_MAX;

    t136 = (x645%((x646>x647)-x648));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x649 = UINT32_MAX;
	int32_t x650 = -1;
	int16_t x651 = INT16_MIN;
	static int16_t x652 = 3;
	uint32_t t137 = 1050U;

    t137 = (x649%((x650>x651)-x652));

    if (t137 != 1U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x657 = 129907136358850LLU;
	int32_t x658 = INT32_MIN;
	int8_t x659 = INT8_MAX;
	int64_t x660 = INT64_MAX;
	volatile uint64_t t138 = 1354962LLU;

    t138 = (x657%((x658>x659)-x660));

    if (t138 != 129907136358850LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x661 = -23479022;
	static volatile int64_t x662 = -1LL;
	static volatile int16_t x663 = -1;
	volatile int8_t x664 = 14;
	int32_t t139 = -667906325;

    t139 = (x661%((x662>x663)-x664));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x665 = INT32_MAX;
	uint8_t x666 = 124U;
	uint32_t x668 = 3442U;
	uint32_t t140 = 1766U;

    t140 = (x665%((x666>x667)-x668));

    if (t140 != 2147483647U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x669 = -1;
	volatile int8_t x670 = -1;
	int8_t x671 = 0;
	int64_t x672 = 1LL;
	static volatile int64_t t141 = -2468LL;

    t141 = (x669%((x670>x671)-x672));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x677 = 109271341288386LLU;
	static uint8_t x678 = UINT8_MAX;
	static uint32_t x679 = 4307793U;
	uint16_t x680 = 2116U;
	static uint64_t t142 = 644LLU;

    t142 = (x677%((x678>x679)-x680));

    if (t142 != 109271341288386LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x681 = INT64_MIN;
	int8_t x682 = -1;
	uint32_t x683 = UINT32_MAX;
	int64_t t143 = 173928639063590345LL;

    t143 = (x681%((x682>x683)-x684));

    if (t143 != -1946LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x689 = -1;
	uint32_t x690 = 15U;
	int64_t x691 = INT64_MIN;
	static uint16_t x692 = 2U;
	volatile int32_t t144 = 1048906563;

    t144 = (x689%((x690>x691)-x692));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x701 = INT64_MIN;
	uint32_t x702 = 2U;
	int64_t x703 = INT64_MIN;
	int32_t x704 = 592204;

    t145 = (x701%((x702>x703)-x704));

    if (t145 != -337595LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x705 = 45657504U;
	static int8_t x707 = INT8_MIN;
	volatile int64_t x708 = 373515689278067LL;
	int64_t t146 = -1141857958667889LL;

    t146 = (x705%((x706>x707)-x708));

    if (t146 != 45657504LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x713 = INT8_MAX;
	static uint64_t x715 = 663395212616300LLU;
	static int16_t x716 = INT16_MIN;

    t147 = (x713%((x714>x715)-x716));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x717 = 86U;
	uint8_t x718 = UINT8_MAX;
	static uint8_t x719 = UINT8_MAX;
	uint64_t x720 = UINT64_MAX;
	volatile uint64_t t148 = 226470857619449LLU;

    t148 = (x717%((x718>x719)-x720));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x721 = 2U;
	uint32_t x722 = 323U;
	uint64_t x723 = 1973640694984375LLU;
	int64_t x724 = 1171319LL;
	volatile int64_t t149 = 55422479432737713LL;

    t149 = (x721%((x722>x723)-x724));

    if (t149 != 2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x725 = 92U;
	int32_t x726 = INT32_MIN;
	int32_t x727 = 45677069;
	volatile uint8_t x728 = UINT8_MAX;
	int32_t t150 = 1;

    t150 = (x725%((x726>x727)-x728));

    if (t150 != 92) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x729 = 2U;
	int32_t x730 = INT32_MIN;
	int8_t x731 = INT8_MAX;
	static volatile int32_t t151 = -128684;

    t151 = (x729%((x730>x731)-x732));

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x733 = -1;
	static int16_t x734 = 1726;
	uint32_t x735 = 1665956430U;
	static int64_t x736 = 1310182469LL;
	volatile int64_t t152 = 44083265061850LL;

    t152 = (x733%((x734>x735)-x736));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x742 = 28U;
	int32_t x743 = INT32_MIN;
	int64_t x744 = -14853816363LL;
	volatile int64_t t153 = 229447750847871LL;

    t153 = (x741%((x742>x743)-x744));

    if (t153 != -4917914748LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x747 = -1;
	uint8_t x748 = UINT8_MAX;
	uint64_t t154 = 406553680057LLU;

    t154 = (x745%((x746>x747)-x748));

    if (t154 != 2LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x749 = 2U;
	int8_t x750 = INT8_MIN;
	int16_t x752 = INT16_MAX;
	volatile int32_t t155 = 192327974;

    t155 = (x749%((x750>x751)-x752));

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x753 = 2102590861U;
	static volatile int32_t x754 = 0;
	static uint32_t x755 = 719U;
	static int8_t x756 = 3;
	static volatile uint32_t t156 = 256085U;

    t156 = (x753%((x754>x755)-x756));

    if (t156 != 2102590861U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x761 = 1U;
	int64_t x764 = -1LL;

    t157 = (x761%((x762>x763)-x764));

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x765 = INT32_MIN;
	int8_t x766 = INT8_MIN;
	uint8_t x767 = UINT8_MAX;
	int32_t t158 = -55749;

    t158 = (x765%((x766>x767)-x768));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x769 = INT64_MIN;
	int16_t x770 = INT16_MAX;
	int64_t x771 = INT64_MIN;
	static volatile uint16_t x772 = 2U;
	volatile int64_t t159 = -457161LL;

    t159 = (x769%((x770>x771)-x772));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x774 = 1;
	uint8_t x776 = 3U;
	volatile int32_t t160 = 4;

    t160 = (x773%((x774>x775)-x776));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x777 = 5039;
	static int32_t x778 = -1;
	int16_t x779 = INT16_MIN;
	int32_t x780 = INT32_MAX;
	static volatile int32_t t161 = -5491;

    t161 = (x777%((x778>x779)-x780));

    if (t161 != 5039) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t t162 = 3803837439218600LLU;

    t162 = (x781%((x782>x783)-x784));

    if (t162 != 25827LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x786 = 6643695289684LL;
	int64_t x787 = INT64_MIN;
	uint32_t x788 = 30U;
	volatile uint32_t t163 = 537473474U;

    t163 = (x785%((x786>x787)-x788));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x789 = -1LL;
	int8_t x790 = INT8_MIN;
	int8_t x791 = 0;
	volatile int64_t t164 = -3623488094LL;

    t164 = (x789%((x790>x791)-x792));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x794 = 0;
	int64_t x795 = INT64_MIN;
	volatile uint8_t x796 = 5U;
	int64_t t165 = 107065824365099LL;

    t165 = (x793%((x794>x795)-x796));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x797 = 1804280;
	int32_t x800 = -1;
	int32_t t166 = 3572838;

    t166 = (x797%((x798>x799)-x800));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x801 = 111;
	int32_t x803 = 2;
	volatile uint64_t t167 = 118502LLU;

    t167 = (x801%((x802>x803)-x804));

    if (t167 != 1LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x805 = INT32_MAX;
	volatile uint8_t x807 = 0U;
	int8_t x808 = -1;
	volatile int32_t t168 = 105592838;

    t168 = (x805%((x806>x807)-x808));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x810 = 0U;
	static int8_t x811 = -1;
	int32_t x812 = -6;
	int32_t t169 = -908938260;

    t169 = (x809%((x810>x811)-x812));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x813 = 1982;
	static volatile int64_t x814 = -196LL;
	int32_t x815 = -15;
	int32_t x816 = -1;

    t170 = (x813%((x814>x815)-x816));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x817 = UINT64_MAX;
	volatile int8_t x818 = INT8_MIN;
	uint64_t x819 = UINT64_MAX;
	volatile uint64_t x820 = 50849878961283860LLU;
	uint64_t t171 = 26LLU;

    t171 = (x817%((x818>x819)-x820));

    if (t171 != 50849878961283859LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x821 = 7;
	static volatile int64_t x823 = -395168074804LL;
	uint32_t x824 = UINT32_MAX;
	static uint32_t t172 = 116U;

    t172 = (x821%((x822>x823)-x824));

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x829 = INT8_MIN;
	int64_t x831 = INT64_MIN;
	uint64_t x832 = UINT64_MAX;

    t173 = (x829%((x830>x831)-x832));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x833 = INT64_MAX;
	int16_t x834 = 17;
	int16_t x835 = INT16_MAX;
	uint64_t x836 = 195LLU;
	static volatile uint64_t t174 = 2860493LLU;

    t174 = (x833%((x834>x835)-x836));

    if (t174 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x837 = INT32_MIN;
	uint16_t x838 = UINT16_MAX;
	volatile int64_t t175 = -2091LL;

    t175 = (x837%((x838>x839)-x840));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x841 = INT64_MIN;
	int32_t x842 = INT32_MIN;
	static int16_t x843 = -1;
	int64_t x844 = INT64_MAX;
	volatile int64_t t176 = -242913LL;

    t176 = (x841%((x842>x843)-x844));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x845 = -1;
	int16_t x846 = -764;
	int32_t t177 = 1068;

    t177 = (x845%((x846>x847)-x848));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x849 = 2U;
	uint16_t x851 = 212U;
	volatile uint64_t x852 = UINT64_MAX;
	static uint64_t t178 = 198223380296610210LLU;

    t178 = (x849%((x850>x851)-x852));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x853 = INT16_MIN;
	static int16_t x854 = -1;
	static int64_t x855 = INT64_MIN;
	volatile int32_t x856 = 6218646;
	int32_t t179 = 1669;

    t179 = (x853%((x854>x855)-x856));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x857 = -1;
	uint64_t x858 = 28723421979LLU;
	static uint32_t x859 = 1139792210U;
	volatile uint8_t x860 = 82U;
	static int32_t t180 = 15963;

    t180 = (x857%((x858>x859)-x860));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x861 = INT64_MAX;
	static uint64_t x862 = UINT64_MAX;
	static volatile uint8_t x864 = UINT8_MAX;
	int64_t t181 = -2400LL;

    t181 = (x861%((x862>x863)-x864));

    if (t181 != 127LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x865 = INT32_MIN;
	int16_t x866 = -1;
	volatile int64_t x867 = -1LL;
	volatile uint64_t x868 = 521165685630459348LLU;

    t182 = (x865%((x866>x867)-x868));

    if (t182 != 521165683482975700LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x869 = -1;
	int16_t x871 = INT16_MIN;
	static int16_t x872 = 1763;
	int32_t t183 = 318756;

    t183 = (x869%((x870>x871)-x872));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x873 = INT64_MIN;
	int16_t x874 = INT16_MIN;
	int8_t x875 = INT8_MAX;

    t184 = (x873%((x874>x875)-x876));

    if (t184 != -669599260LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x877 = -1468420930869901LL;
	static int8_t x879 = INT8_MIN;
	int64_t x880 = INT64_MAX;

    t185 = (x877%((x878>x879)-x880));

    if (t185 != -1468420930869901LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x881 = -1;
	uint16_t x882 = UINT16_MAX;
	uint32_t x883 = 70283238U;
	int16_t x884 = -1;
	static int32_t t186 = -1997;

    t186 = (x881%((x882>x883)-x884));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x885 = INT8_MIN;
	int8_t x886 = INT8_MIN;
	volatile int64_t x887 = INT64_MIN;
	static volatile uint64_t t187 = 28309LLU;

    t187 = (x885%((x886>x887)-x888));

    if (t187 != 202194558248264LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x889 = UINT64_MAX;
	int32_t x890 = -1;
	int64_t x891 = INT64_MIN;
	static volatile uint64_t t188 = 729055117101LLU;

    t188 = (x889%((x890>x891)-x892));

    if (t188 != 64495LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x893 = UINT8_MAX;
	volatile int64_t x894 = INT64_MAX;
	static int16_t x895 = -1;
	static int8_t x896 = -1;
	volatile int32_t t189 = 99180;

    t189 = (x893%((x894>x895)-x896));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x897 = -1;
	uint16_t x898 = UINT16_MAX;
	static volatile int16_t x899 = 1;
	int16_t x900 = -1;

    t190 = (x897%((x898>x899)-x900));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x901 = INT32_MIN;
	volatile int32_t x902 = INT32_MIN;
	int8_t x903 = 50;
	static int8_t x904 = -1;
	static volatile int32_t t191 = -13444;

    t191 = (x901%((x902>x903)-x904));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x909 = -1LL;
	int32_t x910 = INT32_MIN;
	static int32_t x911 = -1;
	int32_t x912 = -1;
	volatile int64_t t192 = -53LL;

    t192 = (x909%((x910>x911)-x912));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x914 = 1268338;
	int64_t x915 = -1LL;
	uint16_t x916 = 24187U;
	static int32_t t193 = 11988;

    t193 = (x913%((x914>x915)-x916));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x917 = INT32_MIN;
	volatile int32_t x918 = INT32_MIN;
	int32_t x920 = 139788045;
	int32_t t194 = 2459921;

    t194 = (x917%((x918>x919)-x920));

    if (t194 != -50662973) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x922 = INT8_MIN;
	volatile int64_t x924 = INT64_MAX;
	static volatile int64_t t195 = -27982425746758LL;

    t195 = (x921%((x922>x923)-x924));

    if (t195 != -2LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x929 = -1;
	volatile int32_t x931 = INT32_MIN;
	int32_t x932 = -3696;
	volatile int32_t t196 = 3;

    t196 = (x929%((x930>x931)-x932));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x933 = -499071LL;
	static int16_t x934 = 9481;
	uint64_t x935 = UINT64_MAX;
	int16_t x936 = -1;

    t197 = (x933%((x934>x935)-x936));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x937 = 0U;
	int8_t x940 = INT8_MIN;
	static int32_t t198 = -7;

    t198 = (x937%((x938>x939)-x940));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x941 = -1;
	static int16_t x942 = -1;
	int16_t x943 = INT16_MAX;
	volatile uint32_t t199 = 4244U;

    t199 = (x941%((x942>x943)-x944));

    if (t199 != 17U) { NG(); } else { ; }
	
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

