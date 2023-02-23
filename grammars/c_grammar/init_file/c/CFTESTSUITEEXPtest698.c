
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

static int32_t x1 = -1;
static uint8_t x4 = 3U;
volatile int32_t t0 = -15276124;
volatile uint16_t x8 = 1U;
volatile int32_t t4 = -187727;
int16_t x22 = INT16_MAX;
uint8_t x25 = UINT8_MAX;
int32_t x60 = -616564595;
int32_t x66 = -13734960;
int32_t t15 = -64801981;
int32_t x70 = INT32_MIN;
volatile int64_t t17 = 4226479LL;
static uint8_t x82 = 0U;
uint16_t x84 = 123U;
volatile uint32_t x85 = 10320U;
int16_t x94 = -116;
int64_t x95 = -1LL;
int64_t x101 = INT64_MIN;
uint16_t x105 = 8U;
uint32_t x107 = UINT32_MAX;
int32_t x108 = INT32_MIN;
static int64_t x113 = INT64_MAX;
static int64_t t27 = -26334600689LL;
int8_t x117 = INT8_MIN;
int32_t t28 = 23;
volatile int32_t t30 = -1149940;
static int32_t x144 = 138801;
int32_t x159 = INT32_MAX;
static int16_t x170 = -1;
uint64_t x177 = UINT64_MAX;
uint16_t x190 = 7449U;
int64_t t44 = 10382LL;
uint64_t x201 = 53776599150LLU;
int32_t t46 = 443;
static int32_t x213 = INT32_MAX;
uint32_t x214 = UINT32_MAX;
int16_t x219 = INT16_MIN;
int64_t x223 = -13876248LL;
uint8_t x224 = UINT8_MAX;
volatile int32_t x227 = INT32_MIN;
static int16_t x234 = INT16_MIN;
int8_t x238 = INT8_MIN;
int32_t t57 = 376;
volatile int8_t x254 = INT8_MIN;
volatile int8_t x256 = INT8_MAX;
uint16_t x257 = 3U;
uint32_t x263 = 22U;
volatile int64_t t60 = -24726370843880LL;
int16_t x270 = INT16_MAX;
int8_t x273 = INT8_MIN;
uint64_t x275 = 7002682601LLU;
static uint32_t x283 = UINT32_MAX;
static uint16_t x284 = 4516U;
static int8_t x289 = INT8_MIN;
int8_t x291 = INT8_MIN;
int16_t x292 = INT16_MIN;
int32_t x294 = INT32_MIN;
int32_t t69 = 64;
int16_t x303 = 1090;
volatile int8_t x304 = INT8_MAX;
volatile int8_t x308 = INT8_MAX;
volatile int32_t t71 = 57762;
volatile uint16_t x309 = 0U;
int8_t x312 = -1;
int32_t t72 = -3;
volatile int16_t x313 = INT16_MIN;
int32_t t74 = 13774;
static uint32_t x323 = 17536532U;
static int32_t x339 = -1;
uint64_t x343 = UINT64_MAX;
static int64_t x345 = -1LL;
int8_t x361 = 16;
static volatile int32_t t85 = 2;
volatile uint8_t x369 = 0U;
static int32_t x372 = INT32_MAX;
int32_t x374 = INT32_MAX;
uint8_t x376 = 11U;
int32_t x381 = 4167904;
static int32_t x382 = INT32_MIN;
int32_t x396 = -471081615;
static int8_t x404 = 16;
static int32_t x405 = -1;
uint64_t x410 = UINT64_MAX;
int8_t x415 = INT8_MIN;
uint32_t x417 = 73093U;
volatile int16_t x420 = -1;
int16_t x421 = -1;
int8_t x422 = -1;
int8_t x424 = INT8_MAX;
uint8_t x425 = 30U;
static int32_t x431 = INT32_MIN;
volatile int32_t t103 = 2227138;
int32_t x449 = -5684;
int16_t x451 = INT16_MAX;
volatile uint32_t x452 = UINT32_MAX;
int8_t x453 = -1;
int64_t x456 = -1LL;
int8_t x459 = INT8_MIN;
volatile int32_t x463 = 1;
static uint8_t x466 = 25U;
volatile int16_t x474 = INT16_MIN;
int8_t x486 = INT8_MIN;
int32_t x490 = -1;
volatile uint32_t x499 = 1982749U;
int32_t x500 = 596;
int32_t t118 = -75315;
volatile uint32_t x503 = UINT32_MAX;
int16_t x504 = -15;
uint8_t x508 = 0U;
volatile int32_t t120 = 26;
int64_t x520 = -1LL;
int32_t t122 = -1;
volatile int32_t x522 = -1;
volatile int64_t x525 = -1LL;
volatile int16_t x530 = -1;
uint64_t x535 = UINT64_MAX;
int32_t x547 = -1;
uint16_t x549 = 1U;
int8_t x552 = -1;
volatile int32_t t130 = 3651892;
int32_t x560 = 1067128445;
int16_t x561 = INT16_MIN;
volatile int32_t t133 = -6702;
volatile uint64_t x567 = UINT64_MAX;
int32_t t134 = -815;
volatile int16_t x569 = -3940;
volatile int32_t x575 = INT32_MIN;
volatile int32_t t136 = 2113887;
int64_t x577 = -1LL;
int64_t t139 = 563403033263298896LL;
int64_t x594 = -1LL;
int64_t x602 = -91798399835808LL;
int32_t x604 = -1;
uint16_t x610 = 1U;
int8_t x618 = 4;
volatile int64_t x622 = INT64_MIN;
int16_t x624 = INT16_MIN;
int32_t x629 = INT32_MIN;
int64_t x638 = 935734997408LL;
uint64_t t153 = 15080501493001704LLU;
volatile int64_t x650 = INT64_MAX;
int64_t t155 = -31LL;
static volatile uint32_t t157 = 3405U;
uint16_t x676 = 1009U;
int16_t x679 = INT16_MIN;
int64_t x680 = 4502LL;
static int16_t x682 = -1;
int32_t x694 = INT32_MIN;
volatile uint16_t x695 = 117U;
uint64_t x696 = 8216818399813064005LLU;
volatile int32_t x699 = -1;
volatile int32_t x703 = INT32_MIN;
uint32_t x708 = 433182090U;
int8_t x713 = 9;
volatile int32_t t172 = -195516699;
uint64_t x723 = 425955821LLU;
int64_t t174 = 468728LL;
uint8_t x729 = 6U;
volatile uint64_t x730 = 220395347138LLU;
int8_t x732 = INT8_MIN;
static int64_t x733 = -1353316804001438LL;
uint8_t x738 = 1U;
int16_t x742 = INT16_MAX;
int8_t x744 = -1;
volatile int32_t t178 = 16522748;
int8_t x746 = 11;
static volatile int8_t x751 = -1;
int16_t x753 = -1;
static volatile int64_t x756 = 880650866390LL;
volatile int32_t t181 = 1;
volatile int32_t t182 = 2;
volatile int64_t t183 = 87202256LL;
int32_t t184 = 1;
static int8_t x771 = 11;
int32_t x772 = INT32_MIN;
int64_t x775 = INT64_MIN;
uint64_t x782 = 691LLU;
volatile uint8_t x784 = 10U;
int32_t t188 = 345;
uint32_t t189 = 6855795U;
uint32_t x790 = UINT32_MAX;
int16_t x791 = 29;
int16_t x792 = INT16_MIN;
int8_t x802 = 0;
volatile int32_t t193 = -35;
int8_t x807 = 36;
int32_t x809 = 4;
int16_t x812 = INT16_MAX;
int8_t x813 = INT8_MIN;
uint64_t x817 = 1616567LLU;
volatile uint64_t t197 = 86516LLU;
static volatile int16_t x824 = -5;


void f0(void) {
    	volatile uint16_t x2 = 659U;
	uint16_t x3 = 85U;

    t0 = (x1&((x2/x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 4598U;
	int64_t x6 = -19111711984923LL;
	uint16_t x7 = 150U;
	volatile int32_t t1 = -3;

    t1 = (x5&((x6/x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	volatile int16_t x10 = INT16_MIN;
	static int64_t x11 = INT64_MIN;
	uint32_t x12 = 29U;
	int32_t t2 = 47142;

    t2 = (x9&((x10/x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	uint8_t x14 = UINT8_MAX;
	uint64_t x15 = UINT64_MAX;
	static int32_t x16 = INT32_MIN;
	int32_t t3 = -494622;

    t3 = (x13&((x14/x15)==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int64_t x18 = INT64_MIN;
	volatile uint16_t x19 = 4773U;
	int32_t x20 = 0;

    t4 = (x17&((x18/x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x21 = 169LLU;
	int64_t x23 = -1LL;
	volatile uint8_t x24 = UINT8_MAX;
	uint64_t t5 = 16045429152492253LLU;

    t5 = (x21&((x22/x23)==x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x26 = 20U;
	int32_t x27 = 15400;
	int8_t x28 = 3;
	volatile int32_t t6 = -151001;

    t6 = (x25&((x26/x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = 5;
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MIN;
	int16_t x32 = -1;
	int32_t t7 = -37;

    t7 = (x29&((x30/x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 25777828;
	int16_t x34 = INT16_MIN;
	static uint8_t x35 = 7U;
	static int32_t x36 = -1;
	volatile int32_t t8 = 2804;

    t8 = (x33&((x34/x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	int32_t x38 = -9408;
	static int16_t x39 = 12597;
	static uint8_t x40 = 59U;
	volatile int32_t t9 = -3982205;

    t9 = (x37&((x38/x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = UINT16_MAX;
	int16_t x42 = -76;
	uint32_t x43 = 5507U;
	int16_t x44 = 2;
	int32_t t10 = 2;

    t10 = (x41&((x42/x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -96363253560LL;
	int64_t x50 = INT64_MAX;
	int16_t x51 = INT16_MIN;
	int64_t x52 = -55534571LL;
	static volatile int64_t t11 = -140529447LL;

    t11 = (x49&((x50/x51)==x52));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = UINT64_MAX;
	static int8_t x54 = -24;
	static int8_t x55 = 13;
	uint8_t x56 = 39U;
	uint64_t t12 = 405051LLU;

    t12 = (x53&((x54/x55)==x56));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x57 = UINT8_MAX;
	int16_t x58 = -1;
	uint32_t x59 = 26582279U;
	volatile int32_t t13 = -4480687;

    t13 = (x57&((x58/x59)==x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x61 = 6362;
	int16_t x62 = -1;
	int16_t x63 = -77;
	static volatile int64_t x64 = 3LL;
	static volatile int32_t t14 = -849556;

    t14 = (x61&((x62/x63)==x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MIN;
	uint64_t x67 = 756743359568097005LLU;
	int32_t x68 = INT32_MIN;

    t15 = (x65&((x66/x67)==x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = INT32_MIN;
	int64_t x71 = INT64_MAX;
	volatile uint8_t x72 = UINT8_MAX;
	static int32_t t16 = -1;

    t16 = (x69&((x70/x71)==x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MAX;
	volatile uint32_t x74 = UINT32_MAX;
	int16_t x75 = INT16_MIN;
	int32_t x76 = -24;

    t17 = (x73&((x74/x75)==x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = 408232787812LLU;
	int32_t x78 = INT32_MIN;
	uint32_t x79 = 2878755U;
	static int16_t x80 = 429;
	volatile uint64_t t18 = 1LLU;

    t18 = (x77&((x78/x79)==x80));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -982460599;
	static int32_t x83 = INT32_MIN;
	int32_t t19 = -251917148;

    t19 = (x81&((x82/x83)==x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x86 = INT8_MAX;
	volatile int16_t x87 = INT16_MIN;
	uint8_t x88 = 17U;
	volatile uint32_t t20 = 1798965U;

    t20 = (x85&((x86/x87)==x88));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x89 = INT16_MIN;
	volatile int32_t x90 = -1;
	uint8_t x91 = 1U;
	int32_t x92 = INT32_MAX;
	volatile int32_t t21 = -3355;

    t21 = (x89&((x90/x91)==x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x93 = UINT8_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t22 = -186179;

    t22 = (x93&((x94/x95)==x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MIN;
	volatile uint64_t x98 = UINT64_MAX;
	static int32_t x99 = -6;
	uint16_t x100 = 218U;
	int32_t t23 = -1;

    t23 = (x97&((x98/x99)==x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x102 = 636LLU;
	int64_t x103 = -227583280LL;
	int64_t x104 = INT64_MIN;
	int64_t t24 = 1LL;

    t24 = (x101&((x102/x103)==x104));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x106 = 1298;
	int32_t t25 = -3555;

    t25 = (x105&((x106/x107)==x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -1LL;
	int16_t x110 = INT16_MIN;
	static uint8_t x111 = 24U;
	uint64_t x112 = 424LLU;
	int64_t t26 = 10921753610152909LL;

    t26 = (x109&((x110/x111)==x112));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x114 = 1799U;
	int32_t x115 = -1136;
	uint32_t x116 = UINT32_MAX;

    t27 = (x113&((x114/x115)==x116));

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x118 = -12498LL;
	int64_t x119 = -148654283077LL;
	uint8_t x120 = 85U;

    t28 = (x117&((x118/x119)==x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	uint64_t x122 = 95430450044328293LLU;
	uint32_t x123 = 7U;
	uint16_t x124 = 4543U;
	volatile int32_t t29 = 7;

    t29 = (x121&((x122/x123)==x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = INT8_MIN;
	volatile int64_t x126 = INT64_MAX;
	uint16_t x127 = UINT16_MAX;
	uint16_t x128 = UINT16_MAX;

    t30 = (x125&((x126/x127)==x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = INT64_MAX;
	int8_t x134 = -12;
	int8_t x135 = INT8_MAX;
	volatile int8_t x136 = INT8_MIN;
	volatile int64_t t31 = 2614703LL;

    t31 = (x133&((x134/x135)==x136));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x137 = 0U;
	volatile uint8_t x138 = UINT8_MAX;
	volatile int8_t x139 = -1;
	int64_t x140 = INT64_MIN;
	static volatile int32_t t32 = 8029;

    t32 = (x137&((x138/x139)==x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = -171910;
	volatile uint32_t x142 = 0U;
	static volatile int8_t x143 = INT8_MIN;
	volatile int32_t t33 = 520314218;

    t33 = (x141&((x142/x143)==x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x149 = -1LL;
	uint32_t x150 = 24U;
	int64_t x151 = INT64_MIN;
	uint16_t x152 = 2526U;
	static volatile int64_t t34 = 3LL;

    t34 = (x149&((x150/x151)==x152));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MAX;
	uint16_t x156 = UINT16_MAX;
	int32_t t35 = -371135372;

    t35 = (x153&((x154/x155)==x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -36LL;
	int8_t x158 = INT8_MAX;
	static int32_t x160 = 7062;
	volatile int64_t t36 = -1823473982506266850LL;

    t36 = (x157&((x158/x159)==x160));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x165 = INT64_MAX;
	uint16_t x166 = UINT16_MAX;
	volatile int8_t x167 = INT8_MIN;
	uint64_t x168 = 244LLU;
	int64_t t37 = 44066880LL;

    t37 = (x165&((x166/x167)==x168));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = 568869U;
	int32_t t38 = -7;

    t38 = (x169&((x170/x171)==x172));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x173 = 21U;
	int32_t x174 = -1;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = 1241584464LLU;
	volatile int32_t t39 = 7006;

    t39 = (x173&((x174/x175)==x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x178 = -1;
	int8_t x179 = 6;
	int16_t x180 = INT16_MIN;
	uint64_t t40 = 20464684811022414LLU;

    t40 = (x177&((x178/x179)==x180));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x181 = UINT32_MAX;
	static uint8_t x182 = UINT8_MAX;
	volatile uint64_t x183 = 25730849260LLU;
	int64_t x184 = INT64_MIN;
	volatile uint32_t t41 = 62U;

    t41 = (x181&((x182/x183)==x184));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = INT16_MAX;
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MAX;
	volatile int8_t x188 = INT8_MIN;
	int32_t t42 = 1;

    t42 = (x185&((x186/x187)==x188));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = INT8_MIN;
	static uint16_t x191 = UINT16_MAX;
	int16_t x192 = 0;
	volatile int32_t t43 = 7517;

    t43 = (x189&((x190/x191)==x192));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x193 = INT64_MIN;
	int8_t x194 = 1;
	volatile uint64_t x195 = UINT64_MAX;
	uint64_t x196 = UINT64_MAX;

    t44 = (x193&((x194/x195)==x196));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x202 = INT64_MIN;
	uint16_t x203 = UINT16_MAX;
	uint64_t x204 = UINT64_MAX;
	static uint64_t t45 = 1657935LLU;

    t45 = (x201&((x202/x203)==x204));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x205 = UINT8_MAX;
	uint16_t x206 = UINT16_MAX;
	int64_t x207 = 90LL;
	int16_t x208 = INT16_MIN;

    t46 = (x205&((x206/x207)==x208));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x209 = 13U;
	volatile uint8_t x210 = 8U;
	volatile uint16_t x211 = UINT16_MAX;
	int32_t x212 = -13;
	int32_t t47 = 992881;

    t47 = (x209&((x210/x211)==x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x215 = INT8_MAX;
	static int8_t x216 = 0;
	int32_t t48 = -3887942;

    t48 = (x213&((x214/x215)==x216));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x217 = INT32_MAX;
	volatile int32_t x218 = -1;
	static int64_t x220 = -1LL;
	volatile int32_t t49 = 0;

    t49 = (x217&((x218/x219)==x220));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x221 = 69232347U;
	uint16_t x222 = 26U;
	volatile uint32_t t50 = 210055U;

    t50 = (x221&((x222/x223)==x224));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x225 = 13298267LL;
	int32_t x226 = INT32_MIN;
	int16_t x228 = INT16_MAX;
	static int64_t t51 = 57184LL;

    t51 = (x225&((x226/x227)==x228));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x229 = -1;
	int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MAX;
	uint16_t x232 = 14U;
	int32_t t52 = -15107910;

    t52 = (x229&((x230/x231)==x232));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x233 = -1;
	int32_t x235 = INT32_MIN;
	static uint32_t x236 = UINT32_MAX;
	int32_t t53 = -2758704;

    t53 = (x233&((x234/x235)==x236));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x237 = -6514746144LL;
	int64_t x239 = -1LL;
	int32_t x240 = INT32_MAX;
	int64_t t54 = 25779317464LL;

    t54 = (x237&((x238/x239)==x240));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x241 = INT8_MAX;
	uint32_t x242 = 303U;
	static int8_t x243 = -26;
	volatile int32_t x244 = INT32_MIN;
	int32_t t55 = 15;

    t55 = (x241&((x242/x243)==x244));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x245 = -1;
	int64_t x246 = 1LL;
	uint8_t x247 = 1U;
	int8_t x248 = -21;
	static volatile int32_t t56 = -89676384;

    t56 = (x245&((x246/x247)==x248));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = INT8_MIN;
	int8_t x250 = -1;
	volatile int8_t x251 = -5;
	uint16_t x252 = 31U;

    t57 = (x249&((x250/x251)==x252));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x253 = -1LL;
	static int64_t x255 = INT64_MAX;
	int64_t t58 = 287519LL;

    t58 = (x253&((x254/x255)==x256));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x258 = 25716829276LLU;
	int64_t x259 = -31446204LL;
	static int32_t x260 = -1;
	int32_t t59 = 103375163;

    t59 = (x257&((x258/x259)==x260));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x261 = -349972366507LL;
	int32_t x262 = INT32_MIN;
	uint32_t x264 = UINT32_MAX;

    t60 = (x261&((x262/x263)==x264));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x265 = 765395U;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;
	static volatile uint32_t t61 = 3198027U;

    t61 = (x265&((x266/x267)==x268));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x269 = 61U;
	uint16_t x271 = UINT16_MAX;
	uint8_t x272 = 0U;
	volatile int32_t t62 = 4;

    t62 = (x269&((x270/x271)==x272));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x274 = 152316101273LL;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t63 = -1570;

    t63 = (x273&((x274/x275)==x276));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x277 = UINT32_MAX;
	volatile int16_t x278 = INT16_MIN;
	volatile int64_t x279 = INT64_MIN;
	uint8_t x280 = UINT8_MAX;
	uint32_t t64 = 1968824174U;

    t64 = (x277&((x278/x279)==x280));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x281 = INT64_MAX;
	static uint64_t x282 = UINT64_MAX;
	static int64_t t65 = -1LL;

    t65 = (x281&((x282/x283)==x284));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	int64_t x287 = INT64_MIN;
	static volatile int64_t x288 = -217LL;
	volatile int32_t t66 = 3429;

    t66 = (x285&((x286/x287)==x288));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x290 = INT64_MIN;
	volatile int32_t t67 = -7;

    t67 = (x289&((x290/x291)==x292));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x293 = 1U;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = 45U;
	int32_t t68 = 2257;

    t68 = (x293&((x294/x295)==x296));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x297 = INT16_MAX;
	uint8_t x298 = 0U;
	uint16_t x299 = 572U;
	int16_t x300 = INT16_MIN;

    t69 = (x297&((x298/x299)==x300));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x301 = 17U;
	uint16_t x302 = 657U;
	volatile uint32_t t70 = 316326105U;

    t70 = (x301&((x302/x303)==x304));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x305 = INT8_MAX;
	static uint64_t x306 = 7766LLU;
	int8_t x307 = -24;

    t71 = (x305&((x306/x307)==x308));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x310 = 5U;
	int8_t x311 = INT8_MIN;

    t72 = (x309&((x310/x311)==x312));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x314 = INT64_MIN;
	uint32_t x315 = 181892U;
	int32_t x316 = INT32_MAX;
	int32_t t73 = 279;

    t73 = (x313&((x314/x315)==x316));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x317 = 76U;
	int64_t x318 = 106783016645099LL;
	volatile int64_t x319 = 162LL;
	static volatile int64_t x320 = -1LL;

    t74 = (x317&((x318/x319)==x320));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x321 = -48;
	int64_t x322 = -27LL;
	uint32_t x324 = 210964498U;
	int32_t t75 = 1;

    t75 = (x321&((x322/x323)==x324));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x325 = 24457U;
	int64_t x326 = INT64_MAX;
	int32_t x327 = -1;
	int64_t x328 = INT64_MIN;
	uint32_t t76 = 58636U;

    t76 = (x325&((x326/x327)==x328));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x329 = UINT8_MAX;
	uint64_t x330 = 13853691257LLU;
	static int16_t x331 = INT16_MAX;
	static int64_t x332 = -1LL;
	volatile int32_t t77 = -126458;

    t77 = (x329&((x330/x331)==x332));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x333 = INT64_MIN;
	static int64_t x334 = INT64_MIN;
	int32_t x335 = -127897;
	volatile int32_t x336 = -1;
	int64_t t78 = -3279268180575221LL;

    t78 = (x333&((x334/x335)==x336));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x337 = INT16_MIN;
	uint8_t x338 = 9U;
	volatile int64_t x340 = INT64_MIN;
	int32_t t79 = -186498;

    t79 = (x337&((x338/x339)==x340));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x341 = 0U;
	int8_t x342 = -60;
	static int8_t x344 = INT8_MIN;
	int32_t t80 = 1543611;

    t80 = (x341&((x342/x343)==x344));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x346 = 395U;
	volatile uint8_t x347 = 22U;
	static uint32_t x348 = UINT32_MAX;
	volatile int64_t t81 = 1LL;

    t81 = (x345&((x346/x347)==x348));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x349 = INT64_MAX;
	int8_t x350 = -1;
	int64_t x351 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	volatile int64_t t82 = 235163LL;

    t82 = (x349&((x350/x351)==x352));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x353 = -15;
	int32_t x354 = 1232;
	int16_t x355 = -1;
	static uint32_t x356 = 1U;
	int32_t t83 = 53878;

    t83 = (x353&((x354/x355)==x356));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = -17;
	uint64_t x358 = 7454851684085243880LLU;
	uint64_t x359 = 965621362190938292LLU;
	int32_t x360 = INT32_MIN;
	int32_t t84 = -700;

    t84 = (x357&((x358/x359)==x360));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x362 = 866;
	int16_t x363 = INT16_MAX;
	int8_t x364 = -2;

    t85 = (x361&((x362/x363)==x364));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x365 = INT16_MIN;
	uint32_t x366 = 508644U;
	int8_t x367 = INT8_MAX;
	int8_t x368 = -1;
	volatile int32_t t86 = 399495853;

    t86 = (x365&((x366/x367)==x368));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x370 = 59;
	volatile int16_t x371 = -1;
	static int32_t t87 = -31620;

    t87 = (x369&((x370/x371)==x372));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x373 = 7U;
	int32_t x375 = -3;
	int32_t t88 = 19828;

    t88 = (x373&((x374/x375)==x376));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x377 = -1;
	int32_t x378 = INT32_MAX;
	static volatile uint16_t x379 = 2U;
	uint8_t x380 = 11U;
	volatile int32_t t89 = -114;

    t89 = (x377&((x378/x379)==x380));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x383 = 2U;
	int16_t x384 = -1;
	int32_t t90 = 412525;

    t90 = (x381&((x382/x383)==x384));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	uint8_t x386 = UINT8_MAX;
	int32_t x387 = -1;
	static int16_t x388 = 0;
	volatile int32_t t91 = -406880;

    t91 = (x385&((x386/x387)==x388));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x389 = -1;
	static int16_t x390 = 19;
	volatile int8_t x391 = INT8_MIN;
	int16_t x392 = -105;
	volatile int32_t t92 = -251063888;

    t92 = (x389&((x390/x391)==x392));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x393 = INT16_MIN;
	volatile int64_t x394 = INT64_MIN;
	volatile int8_t x395 = INT8_MAX;
	volatile int32_t t93 = -96010;

    t93 = (x393&((x394/x395)==x396));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x397 = INT32_MAX;
	int16_t x398 = -48;
	volatile uint16_t x399 = UINT16_MAX;
	static int8_t x400 = INT8_MAX;
	volatile int32_t t94 = 11645;

    t94 = (x397&((x398/x399)==x400));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MAX;
	int8_t x403 = INT8_MAX;
	int32_t t95 = -110446;

    t95 = (x401&((x402/x403)==x404));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x406 = INT8_MIN;
	volatile uint32_t x407 = 4786894U;
	int8_t x408 = INT8_MIN;
	volatile int32_t t96 = 6758;

    t96 = (x405&((x406/x407)==x408));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x409 = -1;
	int64_t x411 = -240650507LL;
	uint8_t x412 = 0U;
	volatile int32_t t97 = 302562338;

    t97 = (x409&((x410/x411)==x412));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x413 = 9;
	uint32_t x414 = 290524U;
	static int64_t x416 = 59270802LL;
	int32_t t98 = 52708;

    t98 = (x413&((x414/x415)==x416));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x418 = INT64_MAX;
	int64_t x419 = 12983LL;
	uint32_t t99 = 52752U;

    t99 = (x417&((x418/x419)==x420));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x423 = INT32_MIN;
	static int32_t t100 = -481700;

    t100 = (x421&((x422/x423)==x424));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x426 = INT32_MIN;
	uint16_t x427 = 11411U;
	volatile uint32_t x428 = 1014464924U;
	volatile int32_t t101 = -33;

    t101 = (x425&((x426/x427)==x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x429 = 0U;
	static int32_t x430 = INT32_MIN;
	volatile int64_t x432 = INT64_MIN;
	uint32_t t102 = 8U;

    t102 = (x429&((x430/x431)==x432));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x433 = -1;
	volatile int32_t x434 = 43;
	volatile int64_t x435 = -597298792LL;
	int8_t x436 = INT8_MAX;

    t103 = (x433&((x434/x435)==x436));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x437 = 1U;
	uint64_t x438 = 74112218492095LLU;
	int16_t x439 = -1;
	uint64_t x440 = UINT64_MAX;
	int32_t t104 = 859834693;

    t104 = (x437&((x438/x439)==x440));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = INT8_MIN;
	int64_t x442 = 0LL;
	uint8_t x443 = UINT8_MAX;
	uint32_t x444 = 302760144U;
	int32_t t105 = -59;

    t105 = (x441&((x442/x443)==x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = INT16_MAX;
	volatile uint16_t x446 = 3736U;
	volatile int32_t x447 = INT32_MIN;
	volatile int32_t x448 = INT32_MIN;
	volatile int32_t t106 = 6870731;

    t106 = (x445&((x446/x447)==x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x450 = -1;
	int32_t t107 = -3406921;

    t107 = (x449&((x450/x451)==x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x454 = UINT32_MAX;
	static uint32_t x455 = UINT32_MAX;
	volatile int32_t t108 = 15;

    t108 = (x453&((x454/x455)==x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x457 = -2460;
	int64_t x458 = INT64_MAX;
	int8_t x460 = 51;
	int32_t t109 = -26988974;

    t109 = (x457&((x458/x459)==x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x461 = INT8_MIN;
	static volatile uint32_t x462 = 238U;
	int32_t x464 = INT32_MIN;
	volatile int32_t t110 = -179469509;

    t110 = (x461&((x462/x463)==x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x465 = 3LLU;
	uint32_t x467 = UINT32_MAX;
	int64_t x468 = INT64_MIN;
	static volatile uint64_t t111 = 662463LLU;

    t111 = (x465&((x466/x467)==x468));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x469 = INT16_MIN;
	static int64_t x470 = -1LL;
	static uint64_t x471 = 13LLU;
	volatile uint64_t x472 = 732554331369325LLU;
	int32_t t112 = 38;

    t112 = (x469&((x470/x471)==x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x473 = INT16_MAX;
	uint64_t x475 = UINT64_MAX;
	uint64_t x476 = 405630LLU;
	int32_t t113 = -22;

    t113 = (x473&((x474/x475)==x476));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x477 = INT64_MIN;
	int8_t x478 = INT8_MIN;
	static volatile int8_t x479 = 5;
	volatile int64_t x480 = 388197960LL;
	int64_t t114 = 0LL;

    t114 = (x477&((x478/x479)==x480));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x485 = 234697573LL;
	volatile int64_t x487 = INT64_MAX;
	int16_t x488 = -1;
	int64_t t115 = -743586014567403LL;

    t115 = (x485&((x486/x487)==x488));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x489 = -1;
	int16_t x491 = 4;
	int64_t x492 = INT64_MAX;
	int32_t t116 = -11250256;

    t116 = (x489&((x490/x491)==x492));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = 18694253;
	volatile uint8_t x494 = UINT8_MAX;
	int16_t x495 = 1;
	int8_t x496 = INT8_MAX;
	static volatile int32_t t117 = -217297479;

    t117 = (x493&((x494/x495)==x496));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x497 = -1163;
	volatile uint64_t x498 = UINT64_MAX;

    t118 = (x497&((x498/x499)==x500));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x501 = UINT8_MAX;
	uint64_t x502 = 24227292726889LLU;
	static int32_t t119 = 0;

    t119 = (x501&((x502/x503)==x504));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x505 = 0U;
	volatile int64_t x506 = INT64_MIN;
	int64_t x507 = INT64_MIN;

    t120 = (x505&((x506/x507)==x508));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x509 = 1301883LLU;
	int32_t x510 = INT32_MIN;
	uint32_t x511 = 14U;
	static int32_t x512 = INT32_MIN;
	volatile uint64_t t121 = 45023267806LLU;

    t121 = (x509&((x510/x511)==x512));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x517 = INT32_MIN;
	int16_t x518 = INT16_MAX;
	static uint64_t x519 = UINT64_MAX;

    t122 = (x517&((x518/x519)==x520));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x521 = INT32_MIN;
	int64_t x523 = INT64_MIN;
	int8_t x524 = INT8_MIN;
	static volatile int32_t t123 = -785436219;

    t123 = (x521&((x522/x523)==x524));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x526 = -1;
	volatile int64_t x527 = INT64_MIN;
	static volatile int32_t x528 = INT32_MIN;
	volatile int64_t t124 = 11095369055LL;

    t124 = (x525&((x526/x527)==x528));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x529 = UINT16_MAX;
	int16_t x531 = INT16_MAX;
	static int64_t x532 = INT64_MAX;
	int32_t t125 = -1592;

    t125 = (x529&((x530/x531)==x532));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x533 = INT64_MIN;
	static int16_t x534 = -9;
	int32_t x536 = INT32_MAX;
	int64_t t126 = 98812571LL;

    t126 = (x533&((x534/x535)==x536));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x537 = 98900U;
	static int64_t x538 = 7860547597167LL;
	static int8_t x539 = INT8_MIN;
	uint64_t x540 = 1517077LLU;
	static uint32_t t127 = 1046470306U;

    t127 = (x537&((x538/x539)==x540));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x541 = -1;
	int64_t x542 = -1LL;
	int32_t x543 = 4666;
	uint32_t x544 = 19U;
	static int32_t t128 = -23108;

    t128 = (x541&((x542/x543)==x544));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x545 = 0U;
	static int8_t x546 = -11;
	volatile int16_t x548 = INT16_MIN;
	static volatile int32_t t129 = 187027112;

    t129 = (x545&((x546/x547)==x548));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x550 = INT32_MAX;
	uint16_t x551 = UINT16_MAX;

    t130 = (x549&((x550/x551)==x552));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x553 = 24U;
	volatile uint32_t x554 = 23013744U;
	volatile int16_t x555 = INT16_MIN;
	volatile uint64_t x556 = 3432801046012846420LLU;
	static volatile int32_t t131 = 78302;

    t131 = (x553&((x554/x555)==x556));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x557 = 7;
	int16_t x558 = INT16_MIN;
	volatile int32_t x559 = 1000002382;
	int32_t t132 = 1;

    t132 = (x557&((x558/x559)==x560));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x562 = 8480828U;
	uint64_t x563 = 2725890668451187LLU;
	volatile int8_t x564 = INT8_MIN;

    t133 = (x561&((x562/x563)==x564));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x565 = INT32_MIN;
	static int32_t x566 = -106221797;
	int8_t x568 = -25;

    t134 = (x565&((x566/x567)==x568));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x570 = INT64_MIN;
	int8_t x571 = INT8_MIN;
	static volatile uint8_t x572 = 117U;
	static volatile int32_t t135 = -10;

    t135 = (x569&((x570/x571)==x572));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x573 = INT32_MAX;
	uint32_t x574 = 7172U;
	volatile int8_t x576 = INT8_MAX;

    t136 = (x573&((x574/x575)==x576));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x578 = 2349LLU;
	static volatile int8_t x579 = 1;
	int8_t x580 = INT8_MIN;
	int64_t t137 = -21826133468LL;

    t137 = (x577&((x578/x579)==x580));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x581 = INT64_MIN;
	int64_t x582 = INT64_MIN;
	static int8_t x583 = INT8_MAX;
	static uint16_t x584 = UINT16_MAX;
	volatile int64_t t138 = -330LL;

    t138 = (x581&((x582/x583)==x584));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x585 = INT64_MIN;
	int16_t x586 = -1;
	int16_t x587 = INT16_MIN;
	int64_t x588 = -1LL;

    t139 = (x585&((x586/x587)==x588));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x589 = INT16_MAX;
	static volatile int32_t x590 = -1;
	uint8_t x591 = 46U;
	int64_t x592 = 471LL;
	volatile int32_t t140 = 0;

    t140 = (x589&((x590/x591)==x592));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x593 = -1;
	int32_t x595 = -1;
	static int32_t x596 = -3385;
	int32_t t141 = 3;

    t141 = (x593&((x594/x595)==x596));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x597 = INT32_MIN;
	static uint8_t x598 = UINT8_MAX;
	volatile int16_t x599 = -3470;
	static volatile int64_t x600 = INT64_MIN;
	int32_t t142 = 752472148;

    t142 = (x597&((x598/x599)==x600));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x601 = 0U;
	int64_t x603 = 6053340336845LL;
	static int32_t t143 = -1;

    t143 = (x601&((x602/x603)==x604));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x605 = INT64_MIN;
	uint16_t x606 = 14239U;
	int8_t x607 = 12;
	int64_t x608 = -42LL;
	int64_t t144 = 82068487LL;

    t144 = (x605&((x606/x607)==x608));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x609 = INT16_MIN;
	uint16_t x611 = 511U;
	int16_t x612 = INT16_MAX;
	static volatile int32_t t145 = -687557352;

    t145 = (x609&((x610/x611)==x612));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x613 = -1;
	static int8_t x614 = -1;
	static int8_t x615 = -16;
	volatile int16_t x616 = -1;
	static volatile int32_t t146 = 8556;

    t146 = (x613&((x614/x615)==x616));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x617 = 17U;
	int8_t x619 = INT8_MIN;
	int64_t x620 = INT64_MIN;
	volatile int32_t t147 = -16;

    t147 = (x617&((x618/x619)==x620));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x621 = -336565322;
	int32_t x623 = INT32_MAX;
	volatile int32_t t148 = -6;

    t148 = (x621&((x622/x623)==x624));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x625 = INT64_MAX;
	static uint8_t x626 = UINT8_MAX;
	int32_t x627 = -1;
	uint8_t x628 = UINT8_MAX;
	volatile int64_t t149 = 2421544851845804LL;

    t149 = (x625&((x626/x627)==x628));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x630 = 1966U;
	int64_t x631 = INT64_MIN;
	uint64_t x632 = UINT64_MAX;
	volatile int32_t t150 = 1635387;

    t150 = (x629&((x630/x631)==x632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x633 = 15189U;
	int64_t x634 = INT64_MAX;
	volatile uint64_t x635 = 2067843LLU;
	int8_t x636 = 11;
	int32_t t151 = -1331687;

    t151 = (x633&((x634/x635)==x636));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x637 = INT16_MIN;
	int64_t x639 = INT64_MIN;
	volatile int8_t x640 = INT8_MIN;
	int32_t t152 = 2032;

    t152 = (x637&((x638/x639)==x640));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x641 = 4085145883416045710LLU;
	int8_t x642 = INT8_MAX;
	volatile uint16_t x643 = UINT16_MAX;
	int64_t x644 = INT64_MIN;

    t153 = (x641&((x642/x643)==x644));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x645 = 9047U;
	static volatile int64_t x646 = 1LL;
	int16_t x647 = -1;
	volatile uint16_t x648 = 52U;
	int32_t t154 = 3137584;

    t154 = (x645&((x646/x647)==x648));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x649 = INT64_MAX;
	int8_t x651 = INT8_MIN;
	uint8_t x652 = 0U;

    t155 = (x649&((x650/x651)==x652));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x653 = UINT32_MAX;
	volatile uint8_t x654 = UINT8_MAX;
	uint16_t x655 = 129U;
	int64_t x656 = 66184565LL;
	volatile uint32_t t156 = 339338U;

    t156 = (x653&((x654/x655)==x656));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x657 = 1788491U;
	int64_t x658 = -1LL;
	int16_t x659 = 449;
	uint32_t x660 = UINT32_MAX;

    t157 = (x657&((x658/x659)==x660));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x661 = 16U;
	volatile uint64_t x662 = UINT64_MAX;
	static uint8_t x663 = UINT8_MAX;
	int32_t x664 = 84;
	int32_t t158 = 13;

    t158 = (x661&((x662/x663)==x664));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x665 = INT16_MAX;
	int64_t x666 = -986160812950501980LL;
	uint64_t x667 = 7046585868030885LLU;
	static uint8_t x668 = UINT8_MAX;
	volatile int32_t t159 = 210;

    t159 = (x665&((x666/x667)==x668));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x669 = INT32_MIN;
	static int8_t x670 = INT8_MIN;
	static uint64_t x671 = 682LLU;
	int32_t x672 = 311;
	volatile int32_t t160 = 0;

    t160 = (x669&((x670/x671)==x672));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x673 = 216829092LLU;
	static volatile uint64_t x674 = 120993LLU;
	uint32_t x675 = UINT32_MAX;
	static volatile uint64_t t161 = 543289LLU;

    t161 = (x673&((x674/x675)==x676));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x677 = 4U;
	int8_t x678 = INT8_MIN;
	volatile int32_t t162 = -3;

    t162 = (x677&((x678/x679)==x680));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x681 = -1;
	static int8_t x683 = INT8_MIN;
	int16_t x684 = -424;
	static int32_t t163 = 39784;

    t163 = (x681&((x682/x683)==x684));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x685 = INT32_MIN;
	volatile int64_t x686 = -171368561069820LL;
	static int64_t x687 = -1LL;
	int64_t x688 = INT64_MIN;
	static int32_t t164 = 0;

    t164 = (x685&((x686/x687)==x688));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x689 = UINT8_MAX;
	volatile uint8_t x690 = 4U;
	volatile uint64_t x691 = UINT64_MAX;
	static int64_t x692 = 91LL;
	static int32_t t165 = -238638;

    t165 = (x689&((x690/x691)==x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x693 = -58962742;
	int32_t t166 = -1907252;

    t166 = (x693&((x694/x695)==x696));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x697 = 536U;
	int16_t x698 = 3;
	uint16_t x700 = 63U;
	int32_t t167 = -98134994;

    t167 = (x697&((x698/x699)==x700));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x701 = INT64_MIN;
	int8_t x702 = -1;
	static int8_t x704 = INT8_MIN;
	volatile int64_t t168 = 815878181717549LL;

    t168 = (x701&((x702/x703)==x704));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	int32_t x706 = -1;
	static int32_t x707 = INT32_MAX;
	volatile uint64_t t169 = 88LLU;

    t169 = (x705&((x706/x707)==x708));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x709 = -4;
	volatile uint8_t x710 = 1U;
	int16_t x711 = INT16_MIN;
	int16_t x712 = INT16_MAX;
	int32_t t170 = -3590440;

    t170 = (x709&((x710/x711)==x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x714 = INT16_MIN;
	uint16_t x715 = UINT16_MAX;
	volatile uint64_t x716 = 177039LLU;
	volatile int32_t t171 = -5;

    t171 = (x713&((x714/x715)==x716));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x717 = INT8_MAX;
	int64_t x718 = 931629453180LL;
	volatile int16_t x719 = -1;
	uint32_t x720 = 105U;

    t172 = (x717&((x718/x719)==x720));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x721 = INT16_MIN;
	int64_t x722 = INT64_MIN;
	volatile int16_t x724 = INT16_MIN;
	int32_t t173 = 498339761;

    t173 = (x721&((x722/x723)==x724));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x725 = INT64_MIN;
	int16_t x726 = INT16_MIN;
	uint32_t x727 = 27U;
	int8_t x728 = INT8_MAX;

    t174 = (x725&((x726/x727)==x728));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x731 = UINT16_MAX;
	int32_t t175 = 1;

    t175 = (x729&((x730/x731)==x732));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x734 = INT32_MIN;
	volatile int64_t x735 = INT64_MIN;
	int8_t x736 = -1;
	volatile int64_t t176 = -1LL;

    t176 = (x733&((x734/x735)==x736));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x737 = INT16_MIN;
	int16_t x739 = INT16_MIN;
	static uint16_t x740 = 13U;
	volatile int32_t t177 = -53;

    t177 = (x737&((x738/x739)==x740));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x741 = INT16_MIN;
	int64_t x743 = INT64_MAX;

    t178 = (x741&((x742/x743)==x744));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x745 = INT16_MAX;
	int64_t x747 = -40361868015LL;
	int64_t x748 = -1LL;
	volatile int32_t t179 = -15;

    t179 = (x745&((x746/x747)==x748));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x749 = INT8_MIN;
	volatile int16_t x750 = -1;
	int8_t x752 = 3;
	volatile int32_t t180 = -36237;

    t180 = (x749&((x750/x751)==x752));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x754 = 6624;
	int64_t x755 = -1LL;

    t181 = (x753&((x754/x755)==x756));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x757 = -19292599;
	int16_t x758 = INT16_MIN;
	int8_t x759 = 19;
	int32_t x760 = INT32_MIN;

    t182 = (x757&((x758/x759)==x760));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x761 = INT64_MIN;
	volatile int32_t x762 = -5445;
	int8_t x763 = INT8_MIN;
	int32_t x764 = -1;

    t183 = (x761&((x762/x763)==x764));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x765 = 3U;
	volatile uint16_t x766 = 14U;
	int32_t x767 = INT32_MIN;
	uint16_t x768 = UINT16_MAX;

    t184 = (x765&((x766/x767)==x768));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x769 = 963;
	static int64_t x770 = INT64_MAX;
	int32_t t185 = 542101955;

    t185 = (x769&((x770/x771)==x772));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x773 = 31994U;
	int8_t x774 = 1;
	uint8_t x776 = 19U;
	volatile int32_t t186 = 1511087;

    t186 = (x773&((x774/x775)==x776));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x777 = INT8_MIN;
	volatile int32_t x778 = INT32_MIN;
	int32_t x779 = INT32_MIN;
	uint16_t x780 = UINT16_MAX;
	static int32_t t187 = 35;

    t187 = (x777&((x778/x779)==x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x781 = INT16_MAX;
	int8_t x783 = 3;

    t188 = (x781&((x782/x783)==x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x785 = UINT32_MAX;
	static int16_t x786 = -1;
	volatile int32_t x787 = INT32_MAX;
	int8_t x788 = INT8_MAX;

    t189 = (x785&((x786/x787)==x788));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x789 = INT32_MIN;
	static int32_t t190 = -724;

    t190 = (x789&((x790/x791)==x792));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x793 = 2586U;
	uint32_t x794 = 244U;
	volatile uint8_t x795 = 9U;
	static int16_t x796 = -1;
	volatile uint32_t t191 = 3U;

    t191 = (x793&((x794/x795)==x796));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x797 = -1231LL;
	static uint32_t x798 = 658330718U;
	volatile int8_t x799 = INT8_MIN;
	volatile int32_t x800 = INT32_MIN;
	volatile int64_t t192 = 28016382104LL;

    t192 = (x797&((x798/x799)==x800));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x801 = INT8_MIN;
	volatile int16_t x803 = -1;
	static uint64_t x804 = 1408497889LLU;

    t193 = (x801&((x802/x803)==x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x805 = 1891U;
	uint32_t x806 = UINT32_MAX;
	static int16_t x808 = -1;
	volatile int32_t t194 = 51;

    t194 = (x805&((x806/x807)==x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x810 = -1;
	static int64_t x811 = INT64_MAX;
	volatile int32_t t195 = -4064;

    t195 = (x809&((x810/x811)==x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x814 = 47086983LLU;
	int32_t x815 = 1969;
	uint8_t x816 = 92U;
	static int32_t t196 = -279;

    t196 = (x813&((x814/x815)==x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x818 = INT16_MIN;
	int64_t x819 = -93385LL;
	int16_t x820 = -1;

    t197 = (x817&((x818/x819)==x820));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x821 = -55269588;
	static volatile uint8_t x822 = 0U;
	int8_t x823 = INT8_MIN;
	int32_t t198 = -25564;

    t198 = (x821&((x822/x823)==x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x825 = INT16_MIN;
	uint8_t x826 = UINT8_MAX;
	uint64_t x827 = 14913110498472895LLU;
	uint16_t x828 = 3904U;
	volatile int32_t t199 = -56138;

    t199 = (x825&((x826/x827)==x828));

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

