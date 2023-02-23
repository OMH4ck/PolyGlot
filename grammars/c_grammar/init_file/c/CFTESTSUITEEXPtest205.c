
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

int32_t x4 = INT32_MIN;
int8_t x5 = INT8_MIN;
static uint64_t x6 = UINT64_MAX;
int32_t x7 = -1;
int32_t t1 = -34990;
int32_t x9 = -44943820;
static volatile int32_t t2 = 1758;
int8_t x16 = 37;
int32_t t3 = -18744;
uint16_t x31 = 14U;
uint32_t x44 = UINT32_MAX;
int32_t t8 = -194;
volatile int32_t t9 = 12669684;
static int16_t x57 = INT16_MAX;
uint32_t x58 = 8206592U;
int64_t x59 = -5548143257313483LL;
int16_t x67 = 27;
volatile int32_t t13 = 10149686;
volatile uint16_t x92 = UINT16_MAX;
int8_t x103 = -23;
int32_t x119 = 14457528;
volatile int16_t x122 = -1068;
uint16_t x126 = 1U;
static volatile int8_t x128 = 1;
volatile int32_t x130 = INT32_MIN;
uint32_t x132 = UINT32_MAX;
int64_t x133 = INT64_MIN;
static int16_t x134 = INT16_MIN;
uint8_t x136 = 36U;
uint32_t x140 = UINT32_MAX;
int32_t t24 = -906983;
uint64_t x161 = 1758LLU;
int32_t x163 = -1;
int32_t x164 = -1;
volatile int32_t t30 = 528280;
uint8_t x178 = 57U;
int32_t t31 = -445152;
static int16_t x194 = INT16_MIN;
int32_t t34 = -1;
static int32_t t35 = -226509031;
int8_t x202 = INT8_MAX;
int64_t x204 = INT64_MIN;
int32_t t36 = 2;
uint8_t x211 = 20U;
int16_t x212 = INT16_MIN;
static int32_t x222 = -1;
volatile uint8_t x223 = UINT8_MAX;
uint32_t x235 = 13U;
static int32_t x252 = -468637609;
volatile int32_t t43 = -3911938;
static volatile uint16_t x258 = UINT16_MAX;
volatile int32_t t45 = 4;
int16_t x266 = INT16_MAX;
uint16_t x271 = 1002U;
int16_t x274 = INT16_MIN;
int16_t x285 = -1;
static uint8_t x301 = 23U;
volatile int8_t x302 = INT8_MAX;
int32_t x306 = INT32_MIN;
volatile int64_t x308 = 42874417440192104LL;
static int32_t x317 = -1933;
int16_t x320 = -1;
int8_t x321 = 8;
int8_t x332 = -1;
int64_t x333 = INT64_MIN;
int8_t x335 = INT8_MIN;
static uint16_t x343 = UINT16_MAX;
volatile int32_t t65 = 15;
int8_t x345 = 58;
static volatile int64_t x347 = -2LL;
volatile int32_t t66 = -1181;
volatile int32_t x351 = -6017196;
static int32_t t67 = -29353;
static int64_t x354 = -1LL;
volatile int32_t t68 = -473984225;
int64_t x357 = 262304100497LL;
int32_t t70 = 16349951;
int16_t x367 = 12183;
int16_t x368 = INT16_MIN;
int64_t x371 = 0LL;
static volatile uint8_t x376 = UINT8_MAX;
uint32_t x396 = 1585916091U;
volatile int32_t x397 = INT32_MIN;
int8_t x398 = INT8_MAX;
uint32_t x408 = UINT32_MAX;
int16_t x413 = -4;
int16_t x414 = -18;
int16_t x415 = INT16_MIN;
int32_t t79 = -74;
uint32_t x426 = 15U;
int32_t t83 = 3152871;
int64_t x454 = -60785183229109LL;
int8_t x455 = INT8_MAX;
int16_t x464 = INT16_MAX;
int16_t x465 = 1;
uint8_t x477 = 0U;
static uint64_t x478 = UINT64_MAX;
int8_t x484 = -1;
int16_t x492 = INT16_MIN;
static int64_t x500 = -483986362LL;
volatile int8_t x507 = 24;
static volatile int32_t t96 = -490336;
int32_t x517 = INT32_MIN;
int64_t x519 = 154136317536LL;
uint16_t x520 = 7249U;
uint16_t x535 = UINT16_MAX;
int8_t x544 = -13;
int32_t x553 = INT32_MIN;
uint32_t x555 = 8439070U;
int16_t x562 = INT16_MIN;
int32_t t109 = 2817;
static uint32_t x571 = UINT32_MAX;
int32_t t111 = -688;
int8_t x580 = 0;
volatile int32_t t114 = -1;
static int8_t x599 = 1;
uint64_t x602 = UINT64_MAX;
volatile int64_t x605 = 3705429715989691LL;
uint16_t x609 = UINT16_MAX;
int8_t x613 = -1;
static uint64_t x614 = 15147LLU;
int32_t x626 = INT32_MIN;
int64_t x631 = -1LL;
volatile uint64_t x637 = 34021LLU;
volatile int64_t x643 = -121LL;
int64_t x653 = -1LL;
static int8_t x659 = INT8_MAX;
int64_t x661 = 214880771928925LL;
static int32_t t131 = -3;
uint32_t x669 = 19680U;
int16_t x671 = INT16_MIN;
static int8_t x672 = 0;
volatile int32_t t132 = 151;
static int32_t t133 = 1513232;
int8_t x683 = -1;
uint8_t x685 = 5U;
int32_t x687 = 12408810;
int16_t x691 = INT16_MIN;
int32_t x693 = -1;
int16_t x696 = 4;
int8_t x697 = -27;
int64_t x699 = -415LL;
volatile int8_t x704 = INT8_MAX;
volatile int32_t x709 = INT32_MIN;
uint8_t x710 = 8U;
int64_t x719 = 114611195476LL;
static int16_t x726 = 4;
volatile int16_t x729 = INT16_MIN;
uint8_t x731 = UINT8_MAX;
int8_t x733 = -5;
int32_t x734 = 33225404;
int64_t x743 = INT64_MIN;
volatile int8_t x746 = INT8_MIN;
volatile int32_t t149 = 1;
static volatile int32_t t151 = -1055272931;
uint32_t x775 = 59U;
static uint8_t x776 = 38U;
static int32_t t156 = -11707570;
int32_t x786 = -37;
static volatile int64_t x788 = INT64_MIN;
volatile int32_t t160 = -11;
int32_t t161 = -3909;
int32_t t166 = 393029;
int32_t x833 = -1;
static int8_t x845 = -1;
static uint64_t x846 = 3109187694LLU;
int16_t x847 = -1;
int16_t x849 = INT16_MAX;
uint32_t x850 = UINT32_MAX;
int8_t x858 = INT8_MAX;
volatile int16_t x862 = INT16_MIN;
static int32_t x863 = -1;
int32_t t173 = -1288767;
static volatile uint64_t x874 = UINT64_MAX;
static int8_t x883 = 2;
volatile int64_t x889 = -1LL;
uint8_t x891 = 12U;
int64_t x892 = 389988772434177LL;
uint64_t x896 = 13401628323786LLU;
volatile int32_t t180 = 0;
int64_t x905 = INT64_MAX;
int64_t x906 = 3993LL;
static int16_t x908 = -1;
int64_t x909 = 234916455170LL;
static volatile int8_t x910 = INT8_MIN;
volatile int16_t x911 = INT16_MAX;
volatile int32_t t182 = 33196482;
volatile int32_t x913 = 27862;
uint8_t x916 = UINT8_MAX;
int8_t x920 = INT8_MIN;
int16_t x930 = INT16_MIN;
static uint8_t x931 = 12U;
volatile int32_t t186 = -8081;
static int16_t x934 = INT16_MIN;
int32_t t188 = -11;
uint8_t x963 = UINT8_MAX;
volatile int32_t t190 = -1179;
int64_t x966 = 245LL;
volatile int32_t x967 = -1;
int32_t x968 = 7818548;
int32_t t191 = -10000;
int64_t x976 = -1LL;
uint32_t x979 = 872220U;
int8_t x1011 = 13;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	static uint8_t x2 = 2U;
	int16_t x3 = 1;
	int32_t t0 = 80;

    t0 = (x1>((x2-x3)+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x8 = INT16_MIN;

    t1 = (x5>((x6-x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = -60;
	int16_t x11 = 733;
	volatile int16_t x12 = -1;

    t2 = (x9>((x10-x11)+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = 1088689121632742LLU;
	int32_t x14 = -116;
	int16_t x15 = INT16_MIN;

    t3 = (x13>((x14-x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 1032U;
	int32_t x18 = -111;
	static uint16_t x19 = 21U;
	int8_t x20 = 1;
	static volatile int32_t t4 = -41162771;

    t4 = (x17>((x18-x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MAX;
	int32_t x22 = -1;
	int64_t x23 = INT64_MIN;
	uint64_t x24 = 1845128LLU;
	static volatile int32_t t5 = 2882;

    t5 = (x21>((x22-x23)+x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1;
	int16_t x30 = INT16_MIN;
	uint16_t x32 = UINT16_MAX;
	int32_t t6 = -319;

    t6 = (x29>((x30-x31)+x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x41 = 1U;
	int8_t x42 = -17;
	volatile int32_t x43 = INT32_MIN;
	static int32_t t7 = 72515;

    t7 = (x41>((x42-x43)+x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x45 = 0U;
	volatile int16_t x46 = -3191;
	uint8_t x47 = 2U;
	int8_t x48 = INT8_MAX;

    t8 = (x45>((x46-x47)+x48));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x49 = 5U;
	volatile int32_t x50 = INT32_MAX;
	uint8_t x51 = 13U;
	static uint32_t x52 = 3301293U;

    t9 = (x49>((x50-x51)+x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x60 = -21;
	volatile int32_t t10 = 35518;

    t10 = (x57>((x58-x59)+x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = INT16_MIN;
	volatile int16_t x62 = -159;
	int64_t x63 = INT64_MIN;
	uint64_t x64 = UINT64_MAX;
	int32_t t11 = 1;

    t11 = (x61>((x62-x63)+x64));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x65 = UINT8_MAX;
	static int8_t x66 = INT8_MIN;
	int64_t x68 = -1LL;
	volatile int32_t t12 = -5142496;

    t12 = (x65>((x66-x67)+x68));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x69 = INT16_MIN;
	static int32_t x70 = INT32_MIN;
	uint64_t x71 = 187LLU;
	int32_t x72 = INT32_MAX;

    t13 = (x69>((x70-x71)+x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x89 = INT32_MIN;
	uint8_t x90 = 56U;
	int32_t x91 = -1;
	static int32_t t14 = 8693188;

    t14 = (x89>((x90-x91)+x92));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x97 = -1LL;
	static int32_t x98 = -5740;
	static uint32_t x99 = UINT32_MAX;
	uint16_t x100 = 3U;
	volatile int32_t t15 = -3;

    t15 = (x97>((x98-x99)+x100));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x101 = -38215;
	int64_t x102 = -1LL;
	int16_t x104 = -68;
	volatile int32_t t16 = 377225;

    t16 = (x101>((x102-x103)+x104));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x105 = UINT8_MAX;
	volatile uint8_t x106 = UINT8_MAX;
	int16_t x107 = INT16_MIN;
	volatile int8_t x108 = INT8_MAX;
	static int32_t t17 = 361683347;

    t17 = (x105>((x106-x107)+x108));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x117 = 9U;
	uint16_t x118 = UINT16_MAX;
	uint32_t x120 = 1979002592U;
	volatile int32_t t18 = 50;

    t18 = (x117>((x118-x119)+x120));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x121 = UINT16_MAX;
	static int32_t x123 = INT32_MIN;
	volatile int8_t x124 = -11;
	volatile int32_t t19 = -4224;

    t19 = (x121>((x122-x123)+x124));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x125 = INT8_MIN;
	uint32_t x127 = UINT32_MAX;
	static int32_t t20 = 196;

    t20 = (x125>((x126-x127)+x128));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x129 = INT32_MIN;
	static uint64_t x131 = 11818222LLU;
	int32_t t21 = 116786256;

    t21 = (x129>((x130-x131)+x132));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x135 = -191;
	volatile int32_t t22 = 3233;

    t22 = (x133>((x134-x135)+x136));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x137 = INT64_MIN;
	int64_t x138 = 44LL;
	static int32_t x139 = INT32_MIN;
	volatile int32_t t23 = -8780665;

    t23 = (x137>((x138-x139)+x140));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x145 = 660U;
	static int32_t x146 = -929;
	int16_t x147 = INT16_MIN;
	int32_t x148 = -679124127;

    t24 = (x145>((x146-x147)+x148));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x149 = INT16_MAX;
	uint16_t x150 = 1U;
	static int16_t x151 = -1;
	int64_t x152 = INT64_MIN;
	int32_t t25 = -71;

    t25 = (x149>((x150-x151)+x152));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x153 = 28U;
	uint64_t x154 = 364LLU;
	volatile int8_t x155 = -23;
	static volatile uint32_t x156 = 1U;
	int32_t t26 = 122812107;

    t26 = (x153>((x154-x155)+x156));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x162 = 761713743395759LLU;
	int32_t t27 = -12906;

    t27 = (x161>((x162-x163)+x164));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x165 = UINT64_MAX;
	uint32_t x166 = 0U;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 6101718U;
	volatile int32_t t28 = 196790;

    t28 = (x165>((x166-x167)+x168));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x169 = 8U;
	int32_t x170 = -813151;
	int16_t x171 = INT16_MAX;
	volatile int16_t x172 = 125;
	static volatile int32_t t29 = 560363;

    t29 = (x169>((x170-x171)+x172));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x173 = INT64_MAX;
	int16_t x174 = INT16_MIN;
	static volatile int8_t x175 = INT8_MAX;
	uint8_t x176 = 14U;

    t30 = (x173>((x174-x175)+x176));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x177 = INT32_MAX;
	int16_t x179 = INT16_MIN;
	int64_t x180 = -63435598833263992LL;

    t31 = (x177>((x178-x179)+x180));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x185 = 34U;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MIN;
	static uint64_t x188 = UINT64_MAX;
	volatile int32_t t32 = 18318;

    t32 = (x185>((x186-x187)+x188));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x189 = -206950LL;
	static int64_t x190 = INT64_MIN;
	uint64_t x191 = 818199030LLU;
	uint64_t x192 = UINT64_MAX;
	static volatile int32_t t33 = -36;

    t33 = (x189>((x190-x191)+x192));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x193 = 71U;
	int8_t x195 = 6;
	uint32_t x196 = 30299U;

    t34 = (x193>((x194-x195)+x196));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x197 = 3U;
	uint8_t x198 = 5U;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = INT16_MIN;

    t35 = (x197>((x198-x199)+x200));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x201 = INT64_MIN;
	static uint32_t x203 = UINT32_MAX;

    t36 = (x201>((x202-x203)+x204));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x205 = INT32_MAX;
	volatile int8_t x206 = -1;
	uint32_t x207 = 115751U;
	volatile int8_t x208 = INT8_MIN;
	int32_t t37 = 201;

    t37 = (x205>((x206-x207)+x208));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x209 = INT32_MAX;
	static int16_t x210 = 5;
	int32_t t38 = 18450;

    t38 = (x209>((x210-x211)+x212));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x221 = INT8_MIN;
	uint8_t x224 = 0U;
	int32_t t39 = -9;

    t39 = (x221>((x222-x223)+x224));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x233 = -475570LL;
	int8_t x234 = 13;
	volatile int64_t x236 = -8636LL;
	static int32_t t40 = 6;

    t40 = (x233>((x234-x235)+x236));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x237 = -428539798;
	int16_t x238 = 0;
	static int64_t x239 = INT64_MAX;
	volatile uint32_t x240 = 27160U;
	int32_t t41 = 33;

    t41 = (x237>((x238-x239)+x240));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	volatile int16_t x247 = INT16_MAX;
	int8_t x248 = 1;
	volatile int32_t t42 = -3569;

    t42 = (x245>((x246-x247)+x248));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x249 = 100494486125578634LLU;
	int64_t x250 = 27780506278LL;
	int32_t x251 = INT32_MIN;

    t43 = (x249>((x250-x251)+x252));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x253 = UINT64_MAX;
	static int8_t x254 = -1;
	volatile int8_t x255 = 1;
	volatile uint16_t x256 = UINT16_MAX;
	volatile int32_t t44 = 4216497;

    t44 = (x253>((x254-x255)+x256));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x257 = INT16_MIN;
	uint32_t x259 = 15809419U;
	static uint64_t x260 = 1LLU;

    t45 = (x257>((x258-x259)+x260));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x261 = UINT64_MAX;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 33LLU;
	static int64_t x264 = 265642013737645208LL;
	int32_t t46 = 1502320;

    t46 = (x261>((x262-x263)+x264));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x265 = -1;
	uint16_t x267 = 6U;
	static uint64_t x268 = 16001854037LLU;
	volatile int32_t t47 = -4022656;

    t47 = (x265>((x266-x267)+x268));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x269 = 480U;
	int16_t x270 = INT16_MAX;
	int16_t x272 = -682;
	int32_t t48 = 289231061;

    t48 = (x269>((x270-x271)+x272));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x273 = 19608U;
	int32_t x275 = 1044576865;
	volatile int8_t x276 = -40;
	volatile int32_t t49 = -6549754;

    t49 = (x273>((x274-x275)+x276));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x277 = 7U;
	uint64_t x278 = 342349666171LLU;
	int16_t x279 = -17;
	int64_t x280 = INT64_MIN;
	volatile int32_t t50 = -361139;

    t50 = (x277>((x278-x279)+x280));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x281 = -1;
	int8_t x282 = INT8_MAX;
	int64_t x283 = -1LL;
	static int8_t x284 = -1;
	static volatile int32_t t51 = -16962658;

    t51 = (x281>((x282-x283)+x284));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x286 = -1;
	volatile uint8_t x287 = 92U;
	int64_t x288 = 3LL;
	volatile int32_t t52 = 13140852;

    t52 = (x285>((x286-x287)+x288));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x289 = 3LLU;
	uint64_t x290 = 33303685776087600LLU;
	uint8_t x291 = 20U;
	uint16_t x292 = 7595U;
	int32_t t53 = -6;

    t53 = (x289>((x290-x291)+x292));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x297 = INT64_MIN;
	int16_t x298 = 0;
	uint8_t x299 = 13U;
	int8_t x300 = INT8_MIN;
	static volatile int32_t t54 = -390367;

    t54 = (x297>((x298-x299)+x300));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x303 = 108;
	uint64_t x304 = 22575LLU;
	int32_t t55 = -5891;

    t55 = (x301>((x302-x303)+x304));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x305 = INT16_MAX;
	int64_t x307 = -33280LL;
	int32_t t56 = -49999;

    t56 = (x305>((x306-x307)+x308));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x309 = -1LL;
	uint8_t x310 = 17U;
	volatile int64_t x311 = 33921583809626LL;
	volatile int8_t x312 = INT8_MIN;
	int32_t t57 = 77303;

    t57 = (x309>((x310-x311)+x312));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x313 = -32177LL;
	volatile uint64_t x314 = 652821282720LLU;
	int64_t x315 = -1LL;
	uint16_t x316 = UINT16_MAX;
	int32_t t58 = 7924069;

    t58 = (x313>((x314-x315)+x316));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x318 = UINT8_MAX;
	int16_t x319 = -1;
	volatile int32_t t59 = 2;

    t59 = (x317>((x318-x319)+x320));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int8_t x324 = -1;
	volatile int32_t t60 = 1;

    t60 = (x321>((x322-x323)+x324));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MAX;
	uint8_t x328 = 1U;
	volatile int32_t t61 = -2;

    t61 = (x325>((x326-x327)+x328));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x329 = UINT8_MAX;
	int64_t x330 = -1LL;
	int8_t x331 = 0;
	volatile int32_t t62 = -7610209;

    t62 = (x329>((x330-x331)+x332));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x334 = 30147783LL;
	int64_t x336 = INT64_MIN;
	static volatile int32_t t63 = -299748578;

    t63 = (x333>((x334-x335)+x336));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MIN;
	volatile uint64_t x340 = UINT64_MAX;
	int32_t t64 = -97200342;

    t64 = (x337>((x338-x339)+x340));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x341 = 1U;
	uint64_t x342 = UINT64_MAX;
	int64_t x344 = INT64_MIN;

    t65 = (x341>((x342-x343)+x344));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x346 = UINT16_MAX;
	int16_t x348 = 0;

    t66 = (x345>((x346-x347)+x348));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x349 = INT64_MAX;
	int32_t x350 = -2;
	int8_t x352 = -2;

    t67 = (x349>((x350-x351)+x352));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x353 = 3U;
	int32_t x355 = INT32_MAX;
	int32_t x356 = -1;

    t68 = (x353>((x354-x355)+x356));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x358 = -1;
	int64_t x359 = INT64_MIN;
	static int32_t x360 = -3;
	volatile int32_t t69 = -1902;

    t69 = (x357>((x358-x359)+x360));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x361 = -1;
	int16_t x362 = -15;
	int8_t x363 = -1;
	static int8_t x364 = -54;

    t70 = (x361>((x362-x363)+x364));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x365 = -1;
	uint32_t x366 = UINT32_MAX;
	volatile int32_t t71 = 8;

    t71 = (x365>((x366-x367)+x368));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x369 = INT16_MIN;
	int8_t x370 = -1;
	int16_t x372 = 1367;
	static volatile int32_t t72 = 27706;

    t72 = (x369>((x370-x371)+x372));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x373 = -1LL;
	uint32_t x374 = UINT32_MAX;
	static int32_t x375 = INT32_MIN;
	int32_t t73 = -24405;

    t73 = (x373>((x374-x375)+x376));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x381 = UINT64_MAX;
	int16_t x382 = -1;
	int64_t x383 = INT64_MAX;
	volatile uint32_t x384 = 89U;
	static int32_t t74 = 265732071;

    t74 = (x381>((x382-x383)+x384));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x385 = INT8_MIN;
	static volatile int16_t x386 = INT16_MIN;
	static int64_t x387 = -427LL;
	int64_t x388 = -1LL;
	volatile int32_t t75 = -286850568;

    t75 = (x385>((x386-x387)+x388));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x393 = 3937808846LLU;
	static int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MAX;
	volatile int32_t t76 = 1685793;

    t76 = (x393>((x394-x395)+x396));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x399 = -1LL;
	volatile int16_t x400 = -1376;
	int32_t t77 = 1101;

    t77 = (x397>((x398-x399)+x400));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x405 = 2U;
	int64_t x406 = 1763445575738LL;
	static int16_t x407 = INT16_MIN;
	int32_t t78 = 2792;

    t78 = (x405>((x406-x407)+x408));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x416 = 519U;

    t79 = (x413>((x414-x415)+x416));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x417 = UINT8_MAX;
	static uint16_t x418 = 545U;
	int8_t x419 = 0;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t80 = 227200267;

    t80 = (x417>((x418-x419)+x420));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x421 = 7006U;
	static int32_t x422 = INT32_MAX;
	int8_t x423 = 1;
	int64_t x424 = 9519209574140508LL;
	volatile int32_t t81 = -15703;

    t81 = (x421>((x422-x423)+x424));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x425 = UINT64_MAX;
	uint16_t x427 = 11U;
	static int16_t x428 = INT16_MAX;
	volatile int32_t t82 = -890;

    t82 = (x425>((x426-x427)+x428));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x433 = 6227324;
	int64_t x434 = -276LL;
	uint8_t x435 = 29U;
	int16_t x436 = INT16_MAX;

    t83 = (x433>((x434-x435)+x436));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x445 = UINT8_MAX;
	int8_t x446 = INT8_MAX;
	int8_t x447 = INT8_MAX;
	volatile uint16_t x448 = UINT16_MAX;
	volatile int32_t t84 = 712416;

    t84 = (x445>((x446-x447)+x448));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x449 = INT16_MAX;
	static uint8_t x450 = 88U;
	uint16_t x451 = UINT16_MAX;
	uint8_t x452 = UINT8_MAX;
	static int32_t t85 = -2134137;

    t85 = (x449>((x450-x451)+x452));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x453 = 12U;
	int64_t x456 = INT64_MAX;
	static int32_t t86 = -485009;

    t86 = (x453>((x454-x455)+x456));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x457 = -1;
	uint32_t x458 = 111324U;
	uint16_t x459 = 41U;
	static int8_t x460 = 0;
	static int32_t t87 = 10166;

    t87 = (x457>((x458-x459)+x460));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x461 = 263854129;
	uint64_t x462 = 341LLU;
	int8_t x463 = INT8_MIN;
	static int32_t t88 = 62;

    t88 = (x461>((x462-x463)+x464));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x466 = -1LL;
	int8_t x467 = -1;
	static int64_t x468 = -1LL;
	volatile int32_t t89 = -7249;

    t89 = (x465>((x466-x467)+x468));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x469 = UINT8_MAX;
	static uint16_t x470 = 5U;
	uint32_t x471 = 45621U;
	int32_t x472 = -167;
	int32_t t90 = -28260;

    t90 = (x469>((x470-x471)+x472));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x479 = 2612633LL;
	int8_t x480 = INT8_MIN;
	int32_t t91 = -22;

    t91 = (x477>((x478-x479)+x480));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x481 = 774443LLU;
	static int32_t x482 = -1;
	uint8_t x483 = 49U;
	int32_t t92 = 23373518;

    t92 = (x481>((x482-x483)+x484));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x485 = 80969LL;
	int8_t x486 = INT8_MAX;
	volatile int32_t x487 = 0;
	int16_t x488 = 1;
	volatile int32_t t93 = -8834;

    t93 = (x485>((x486-x487)+x488));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x489 = -1;
	int64_t x490 = 34931112570059LL;
	int32_t x491 = INT32_MAX;
	int32_t t94 = -1606178;

    t94 = (x489>((x490-x491)+x492));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x497 = UINT8_MAX;
	volatile int16_t x498 = -1;
	int8_t x499 = -1;
	volatile int32_t t95 = -11194863;

    t95 = (x497>((x498-x499)+x500));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x505 = 980U;
	int8_t x506 = -1;
	volatile uint32_t x508 = UINT32_MAX;

    t96 = (x505>((x506-x507)+x508));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x509 = -1;
	int32_t x510 = INT32_MIN;
	static int8_t x511 = INT8_MIN;
	uint16_t x512 = 47U;
	int32_t t97 = 162;

    t97 = (x509>((x510-x511)+x512));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x513 = 15666;
	static volatile int8_t x514 = INT8_MIN;
	int64_t x515 = INT64_MIN;
	volatile uint64_t x516 = 1919028LLU;
	volatile int32_t t98 = -220727560;

    t98 = (x513>((x514-x515)+x516));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x518 = 107506U;
	volatile int32_t t99 = 184166017;

    t99 = (x517>((x518-x519)+x520));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x521 = 8;
	uint8_t x522 = UINT8_MAX;
	volatile uint16_t x523 = UINT16_MAX;
	int64_t x524 = INT64_MAX;
	volatile int32_t t100 = 2681;

    t100 = (x521>((x522-x523)+x524));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x525 = INT32_MIN;
	int32_t x526 = -203708295;
	int8_t x527 = INT8_MIN;
	int8_t x528 = 25;
	static volatile int32_t t101 = -245;

    t101 = (x525>((x526-x527)+x528));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x533 = -1;
	int32_t x534 = 383;
	static uint64_t x536 = UINT64_MAX;
	volatile int32_t t102 = -62013;

    t102 = (x533>((x534-x535)+x536));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x537 = INT64_MAX;
	volatile uint8_t x538 = 1U;
	int16_t x539 = 469;
	static uint64_t x540 = UINT64_MAX;
	volatile int32_t t103 = -1;

    t103 = (x537>((x538-x539)+x540));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x541 = 1;
	static int8_t x542 = 24;
	uint64_t x543 = UINT64_MAX;
	int32_t t104 = 903779288;

    t104 = (x541>((x542-x543)+x544));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x545 = UINT64_MAX;
	int32_t x546 = 125680980;
	volatile int16_t x547 = -1;
	int8_t x548 = INT8_MAX;
	int32_t t105 = -3973;

    t105 = (x545>((x546-x547)+x548));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x554 = INT16_MIN;
	int64_t x556 = INT64_MIN;
	volatile int32_t t106 = 2;

    t106 = (x553>((x554-x555)+x556));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x557 = 1205U;
	volatile uint32_t x558 = 16U;
	uint32_t x559 = 19U;
	int16_t x560 = INT16_MIN;
	int32_t t107 = -363;

    t107 = (x557>((x558-x559)+x560));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x561 = -1;
	static uint16_t x563 = 11124U;
	int32_t x564 = INT32_MAX;
	static volatile int32_t t108 = -274520;

    t108 = (x561>((x562-x563)+x564));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x565 = 0;
	uint16_t x566 = UINT16_MAX;
	int32_t x567 = INT32_MAX;
	volatile int16_t x568 = -1;

    t109 = (x565>((x566-x567)+x568));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x569 = 0;
	uint8_t x570 = UINT8_MAX;
	int32_t x572 = -1;
	volatile int32_t t110 = -21391767;

    t110 = (x569>((x570-x571)+x572));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x573 = 345400993U;
	int64_t x574 = INT64_MIN;
	int16_t x575 = -6;
	uint64_t x576 = 1LLU;

    t111 = (x573>((x574-x575)+x576));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x577 = 10230186374LL;
	int32_t x578 = INT32_MIN;
	uint64_t x579 = UINT64_MAX;
	volatile int32_t t112 = -91;

    t112 = (x577>((x578-x579)+x580));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x585 = 5720U;
	uint8_t x586 = UINT8_MAX;
	static uint8_t x587 = UINT8_MAX;
	static uint32_t x588 = 5543111U;
	int32_t t113 = 110165994;

    t113 = (x585>((x586-x587)+x588));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x589 = INT16_MAX;
	uint32_t x590 = 2U;
	volatile int8_t x591 = -1;
	static uint32_t x592 = 890U;

    t114 = (x589>((x590-x591)+x592));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x593 = -12;
	static int8_t x594 = INT8_MIN;
	volatile uint8_t x595 = UINT8_MAX;
	int8_t x596 = 47;
	volatile int32_t t115 = -2523;

    t115 = (x593>((x594-x595)+x596));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x597 = 1282;
	uint16_t x598 = UINT16_MAX;
	int8_t x600 = -1;
	static int32_t t116 = 47481638;

    t116 = (x597>((x598-x599)+x600));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x601 = 49;
	int64_t x603 = INT64_MAX;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t117 = 44790910;

    t117 = (x601>((x602-x603)+x604));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x606 = 2U;
	volatile uint64_t x607 = 62658718LLU;
	int32_t x608 = INT32_MIN;
	volatile int32_t t118 = 8898;

    t118 = (x605>((x606-x607)+x608));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x610 = 904077281426518LLU;
	int64_t x611 = INT64_MIN;
	uint16_t x612 = UINT16_MAX;
	int32_t t119 = 2692368;

    t119 = (x609>((x610-x611)+x612));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x615 = INT32_MAX;
	int32_t x616 = -1;
	volatile int32_t t120 = -28880;

    t120 = (x613>((x614-x615)+x616));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x617 = INT8_MIN;
	volatile int8_t x618 = INT8_MIN;
	static int32_t x619 = INT32_MIN;
	int8_t x620 = -26;
	int32_t t121 = 127441;

    t121 = (x617>((x618-x619)+x620));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x625 = UINT8_MAX;
	int32_t x627 = INT32_MIN;
	int64_t x628 = INT64_MIN;
	volatile int32_t t122 = 3491258;

    t122 = (x625>((x626-x627)+x628));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x629 = 1669;
	volatile int32_t x630 = -431679576;
	uint8_t x632 = 3U;
	volatile int32_t t123 = 2;

    t123 = (x629>((x630-x631)+x632));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x633 = -1;
	int16_t x634 = INT16_MAX;
	static uint8_t x635 = 118U;
	volatile uint32_t x636 = 1195U;
	volatile int32_t t124 = 17209;

    t124 = (x633>((x634-x635)+x636));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x638 = INT16_MIN;
	int32_t x639 = 49;
	volatile uint16_t x640 = 1731U;
	int32_t t125 = 3196;

    t125 = (x637>((x638-x639)+x640));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x641 = UINT32_MAX;
	int32_t x642 = 99606886;
	uint16_t x644 = 160U;
	volatile int32_t t126 = 75;

    t126 = (x641>((x642-x643)+x644));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x649 = 284942U;
	int64_t x650 = -51117556943LL;
	uint32_t x651 = UINT32_MAX;
	uint8_t x652 = 0U;
	volatile int32_t t127 = -1377;

    t127 = (x649>((x650-x651)+x652));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x654 = UINT64_MAX;
	int64_t x655 = INT64_MIN;
	int32_t x656 = 31571;
	static int32_t t128 = 165967;

    t128 = (x653>((x654-x655)+x656));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x657 = UINT64_MAX;
	uint32_t x658 = UINT32_MAX;
	uint32_t x660 = 4765085U;
	volatile int32_t t129 = 154;

    t129 = (x657>((x658-x659)+x660));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x662 = 198;
	int16_t x663 = 18;
	uint8_t x664 = UINT8_MAX;
	volatile int32_t t130 = 1;

    t130 = (x661>((x662-x663)+x664));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x665 = INT8_MAX;
	static int16_t x666 = 0;
	volatile int8_t x667 = -8;
	int64_t x668 = -1LL;

    t131 = (x665>((x666-x667)+x668));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x670 = 160944966LLU;

    t132 = (x669>((x670-x671)+x672));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x673 = 0U;
	static int8_t x674 = -1;
	uint64_t x675 = 112796813342LLU;
	volatile int8_t x676 = INT8_MIN;

    t133 = (x673>((x674-x675)+x676));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x677 = 32197420U;
	uint8_t x678 = UINT8_MAX;
	static uint8_t x679 = 1U;
	int32_t x680 = -1;
	volatile int32_t t134 = 51295;

    t134 = (x677>((x678-x679)+x680));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x681 = UINT32_MAX;
	int32_t x682 = 13887;
	int16_t x684 = INT16_MIN;
	volatile int32_t t135 = -203546;

    t135 = (x681>((x682-x683)+x684));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x686 = -1;
	int16_t x688 = INT16_MIN;
	int32_t t136 = -845217;

    t136 = (x685>((x686-x687)+x688));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x689 = INT16_MIN;
	volatile int8_t x690 = -1;
	static uint8_t x692 = 0U;
	int32_t t137 = 15899;

    t137 = (x689>((x690-x691)+x692));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x694 = 0;
	uint16_t x695 = UINT16_MAX;
	int32_t t138 = -976;

    t138 = (x693>((x694-x695)+x696));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x698 = INT16_MAX;
	volatile int32_t x700 = INT32_MIN;
	static int32_t t139 = -3969;

    t139 = (x697>((x698-x699)+x700));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x701 = 24;
	volatile uint64_t x702 = 1LLU;
	uint32_t x703 = 18623U;
	volatile int32_t t140 = -458310927;

    t140 = (x701>((x702-x703)+x704));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x705 = UINT8_MAX;
	volatile int16_t x706 = -1;
	uint8_t x707 = 8U;
	static int16_t x708 = INT16_MAX;
	static volatile int32_t t141 = 1741474;

    t141 = (x705>((x706-x707)+x708));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x711 = INT16_MAX;
	uint32_t x712 = UINT32_MAX;
	int32_t t142 = 88476;

    t142 = (x709>((x710-x711)+x712));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x717 = INT8_MIN;
	static uint8_t x718 = 3U;
	static uint64_t x720 = 29457101185LLU;
	int32_t t143 = 2;

    t143 = (x717>((x718-x719)+x720));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x725 = 2;
	int64_t x727 = -39183617624011LL;
	static volatile int8_t x728 = INT8_MIN;
	volatile int32_t t144 = -1;

    t144 = (x725>((x726-x727)+x728));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x730 = -1;
	int8_t x732 = INT8_MIN;
	static int32_t t145 = 0;

    t145 = (x729>((x730-x731)+x732));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x735 = 8;
	uint8_t x736 = UINT8_MAX;
	static volatile int32_t t146 = 411428;

    t146 = (x733>((x734-x735)+x736));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x737 = 152183838LL;
	uint64_t x738 = 685037842628LLU;
	volatile int64_t x739 = 30268518308107134LL;
	int16_t x740 = INT16_MIN;
	int32_t t147 = 5;

    t147 = (x737>((x738-x739)+x740));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x741 = 0;
	int16_t x742 = -13702;
	uint16_t x744 = 38U;
	int32_t t148 = -1;

    t148 = (x741>((x742-x743)+x744));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x745 = INT16_MAX;
	static uint16_t x747 = 8U;
	uint32_t x748 = 7U;

    t149 = (x745>((x746-x747)+x748));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x753 = INT32_MAX;
	int16_t x754 = INT16_MIN;
	volatile int32_t x755 = -2672404;
	int32_t x756 = INT32_MIN;
	volatile int32_t t150 = -2026;

    t150 = (x753>((x754-x755)+x756));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x761 = INT64_MIN;
	static int16_t x762 = 1;
	volatile uint16_t x763 = 107U;
	volatile int16_t x764 = INT16_MIN;

    t151 = (x761>((x762-x763)+x764));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x765 = INT16_MIN;
	int32_t x766 = -2241529;
	uint8_t x767 = 84U;
	int32_t x768 = -430662;
	static int32_t t152 = -7;

    t152 = (x765>((x766-x767)+x768));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x769 = -1LL;
	int8_t x770 = INT8_MAX;
	int16_t x771 = INT16_MIN;
	static int16_t x772 = -1;
	int32_t t153 = -13;

    t153 = (x769>((x770-x771)+x772));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x773 = 7U;
	int64_t x774 = -1LL;
	static volatile int32_t t154 = -10413627;

    t154 = (x773>((x774-x775)+x776));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x777 = INT16_MAX;
	uint64_t x778 = 13453687600LLU;
	int32_t x779 = INT32_MIN;
	static uint8_t x780 = 10U;
	static volatile int32_t t155 = 57;

    t155 = (x777>((x778-x779)+x780));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x781 = 14U;
	static int8_t x782 = -1;
	int8_t x783 = -1;
	uint16_t x784 = UINT16_MAX;

    t156 = (x781>((x782-x783)+x784));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x785 = 4854841LL;
	int16_t x787 = INT16_MIN;
	volatile int32_t t157 = -65115;

    t157 = (x785>((x786-x787)+x788));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x793 = INT16_MIN;
	int8_t x794 = -1;
	static uint32_t x795 = UINT32_MAX;
	uint16_t x796 = 24U;
	int32_t t158 = -492;

    t158 = (x793>((x794-x795)+x796));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x797 = 51LLU;
	int32_t x798 = -60985;
	static volatile uint16_t x799 = 10298U;
	int64_t x800 = INT64_MAX;
	int32_t t159 = 401;

    t159 = (x797>((x798-x799)+x800));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x801 = 1LL;
	volatile int16_t x802 = INT16_MIN;
	int32_t x803 = 137115123;
	volatile int8_t x804 = INT8_MIN;

    t160 = (x801>((x802-x803)+x804));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint64_t x805 = UINT64_MAX;
	int64_t x806 = INT64_MIN;
	int16_t x807 = INT16_MIN;
	volatile uint8_t x808 = 5U;

    t161 = (x805>((x806-x807)+x808));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x809 = INT64_MIN;
	uint8_t x810 = 82U;
	int16_t x811 = INT16_MIN;
	int32_t x812 = INT32_MIN;
	int32_t t162 = 486600212;

    t162 = (x809>((x810-x811)+x812));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x813 = -3;
	static volatile int16_t x814 = INT16_MAX;
	uint64_t x815 = 2318259LLU;
	int8_t x816 = INT8_MAX;
	volatile int32_t t163 = 436420876;

    t163 = (x813>((x814-x815)+x816));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x817 = UINT16_MAX;
	int8_t x818 = 0;
	static uint64_t x819 = UINT64_MAX;
	int16_t x820 = INT16_MAX;
	int32_t t164 = -2283;

    t164 = (x817>((x818-x819)+x820));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x821 = -1;
	volatile int16_t x822 = 14053;
	int64_t x823 = -1LL;
	static int64_t x824 = INT64_MIN;
	int32_t t165 = -70;

    t165 = (x821>((x822-x823)+x824));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x825 = UINT16_MAX;
	uint16_t x826 = 32U;
	int32_t x827 = -2022072;
	volatile uint64_t x828 = 5698178848146974055LLU;

    t166 = (x825>((x826-x827)+x828));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x834 = 18U;
	static int8_t x835 = -1;
	uint8_t x836 = 3U;
	int32_t t167 = 1045715;

    t167 = (x833>((x834-x835)+x836));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x848 = -1;
	int32_t t168 = 23;

    t168 = (x845>((x846-x847)+x848));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x851 = INT32_MIN;
	int16_t x852 = -10818;
	volatile int32_t t169 = -540496939;

    t169 = (x849>((x850-x851)+x852));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x853 = 6857;
	volatile uint32_t x854 = 329911U;
	static uint64_t x855 = UINT64_MAX;
	int8_t x856 = -1;
	static int32_t t170 = 45680;

    t170 = (x853>((x854-x855)+x856));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x857 = -1;
	volatile int8_t x859 = INT8_MIN;
	volatile int32_t x860 = -1;
	int32_t t171 = 4441499;

    t171 = (x857>((x858-x859)+x860));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x861 = INT8_MIN;
	static int32_t x864 = -1;
	volatile int32_t t172 = 0;

    t172 = (x861>((x862-x863)+x864));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x869 = INT16_MAX;
	int8_t x870 = 0;
	volatile uint32_t x871 = 21629173U;
	static uint8_t x872 = UINT8_MAX;

    t173 = (x869>((x870-x871)+x872));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x873 = 5879379478549785LL;
	int32_t x875 = 101417;
	uint16_t x876 = UINT16_MAX;
	volatile int32_t t174 = 56871;

    t174 = (x873>((x874-x875)+x876));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x877 = 25694;
	int8_t x878 = 10;
	static int8_t x879 = -1;
	int64_t x880 = -1425778978117346734LL;
	int32_t t175 = -450018;

    t175 = (x877>((x878-x879)+x880));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x881 = INT64_MAX;
	uint32_t x882 = 911447U;
	int8_t x884 = -22;
	int32_t t176 = -184479;

    t176 = (x881>((x882-x883)+x884));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x885 = INT64_MAX;
	int16_t x886 = -1;
	int32_t x887 = -1;
	static volatile uint32_t x888 = UINT32_MAX;
	int32_t t177 = 739024021;

    t177 = (x885>((x886-x887)+x888));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x890 = 52671931;
	volatile int32_t t178 = 52108123;

    t178 = (x889>((x890-x891)+x892));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x893 = 784LL;
	static uint64_t x894 = UINT64_MAX;
	int8_t x895 = INT8_MIN;
	volatile int32_t t179 = 0;

    t179 = (x893>((x894-x895)+x896));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x897 = INT32_MAX;
	int64_t x898 = -18565230LL;
	volatile int16_t x899 = INT16_MIN;
	static uint64_t x900 = UINT64_MAX;

    t180 = (x897>((x898-x899)+x900));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x907 = 0U;
	volatile int32_t t181 = 1998006;

    t181 = (x905>((x906-x907)+x908));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x912 = 0;

    t182 = (x909>((x910-x911)+x912));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x914 = -1LL;
	volatile uint32_t x915 = 5211232U;
	static volatile int32_t t183 = 1939580;

    t183 = (x913>((x914-x915)+x916));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x917 = 3U;
	int64_t x918 = INT64_MAX;
	int8_t x919 = 0;
	int32_t t184 = -62002231;

    t184 = (x917>((x918-x919)+x920));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x925 = 0;
	static int8_t x926 = -1;
	int8_t x927 = INT8_MIN;
	int16_t x928 = INT16_MIN;
	static volatile int32_t t185 = 30;

    t185 = (x925>((x926-x927)+x928));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x929 = -411;
	uint16_t x932 = UINT16_MAX;

    t186 = (x929>((x930-x931)+x932));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x933 = INT8_MIN;
	int64_t x935 = -251380668865145LL;
	int64_t x936 = INT64_MIN;
	volatile int32_t t187 = 257984141;

    t187 = (x933>((x934-x935)+x936));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x941 = INT32_MAX;
	static int8_t x942 = -1;
	volatile int64_t x943 = 226LL;
	int64_t x944 = INT64_MAX;

    t188 = (x941>((x942-x943)+x944));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x953 = -1;
	uint8_t x954 = 30U;
	int64_t x955 = INT64_MAX;
	uint16_t x956 = 306U;
	int32_t t189 = -12320;

    t189 = (x953>((x954-x955)+x956));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x961 = INT16_MIN;
	int64_t x962 = -1LL;
	volatile int8_t x964 = 2;

    t190 = (x961>((x962-x963)+x964));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x965 = INT64_MAX;

    t191 = (x965>((x966-x967)+x968));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x973 = UINT16_MAX;
	uint64_t x974 = UINT64_MAX;
	volatile uint16_t x975 = UINT16_MAX;
	volatile int32_t t192 = -11474661;

    t192 = (x973>((x974-x975)+x976));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x977 = INT8_MAX;
	uint32_t x978 = UINT32_MAX;
	int16_t x980 = INT16_MIN;
	int32_t t193 = -24;

    t193 = (x977>((x978-x979)+x980));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x981 = -1;
	uint32_t x982 = UINT32_MAX;
	static uint8_t x983 = UINT8_MAX;
	volatile int32_t x984 = INT32_MIN;
	int32_t t194 = 283053;

    t194 = (x981>((x982-x983)+x984));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x985 = INT16_MAX;
	uint16_t x986 = UINT16_MAX;
	int16_t x987 = -1;
	static volatile int16_t x988 = -1;
	volatile int32_t t195 = -136125;

    t195 = (x985>((x986-x987)+x988));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x993 = 690234U;
	static int32_t x994 = INT32_MAX;
	int64_t x995 = 1017746728032242LL;
	volatile int16_t x996 = 0;
	int32_t t196 = 264577;

    t196 = (x993>((x994-x995)+x996));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1001 = 56LLU;
	volatile uint8_t x1002 = 1U;
	int16_t x1003 = -13016;
	uint32_t x1004 = UINT32_MAX;
	int32_t t197 = -6662;

    t197 = (x1001>((x1002-x1003)+x1004));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1005 = UINT64_MAX;
	static uint64_t x1006 = 6LLU;
	static int64_t x1007 = 15677560997LL;
	static int32_t x1008 = INT32_MIN;
	int32_t t198 = 9;

    t198 = (x1005>((x1006-x1007)+x1008));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1009 = UINT64_MAX;
	static uint8_t x1010 = UINT8_MAX;
	volatile uint32_t x1012 = UINT32_MAX;
	int32_t t199 = -3194;

    t199 = (x1009>((x1010-x1011)+x1012));

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

