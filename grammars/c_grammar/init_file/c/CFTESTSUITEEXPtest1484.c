
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

int16_t x1 = INT16_MIN;
uint8_t x3 = 59U;
volatile int32_t t0 = -1;
int64_t x12 = -1LL;
int32_t t2 = 108022682;
int64_t x20 = -6316395923425823LL;
uint8_t x21 = 0U;
int16_t x23 = INT16_MIN;
static int32_t x26 = INT32_MIN;
static int32_t x29 = -1;
static int8_t x34 = 0;
static int64_t t8 = 7238222LL;
volatile int64_t x40 = INT64_MIN;
int16_t x50 = 227;
volatile uint32_t t13 = 0U;
int32_t x57 = 3538;
int32_t t14 = -1927;
int32_t x64 = INT32_MIN;
static volatile uint64_t x65 = UINT64_MAX;
int32_t x67 = INT32_MIN;
int16_t x69 = 58;
volatile uint64_t x72 = 2732482LLU;
uint32_t x81 = 126U;
int16_t x82 = 907;
int64_t x89 = INT64_MIN;
static uint64_t t23 = UINT64_MAX;
static volatile int32_t t26 = 327674;
uint32_t x112 = 70181U;
int16_t x114 = -1;
int64_t x115 = -44649906180726652LL;
static uint8_t x119 = UINT8_MAX;
int8_t x120 = -1;
static volatile uint32_t t29 = UINT32_MAX;
int64_t x128 = -16633904072LL;
static volatile uint64_t t31 = UINT64_MAX;
volatile int16_t x130 = -1;
static int8_t x133 = -2;
uint32_t x134 = UINT32_MAX;
volatile int16_t x138 = INT16_MAX;
volatile uint8_t x141 = 0U;
uint8_t x142 = 8U;
int16_t x148 = -1;
int16_t x151 = 1;
volatile uint64_t x157 = UINT64_MAX;
int64_t x164 = 4516115LL;
int32_t t43 = 27660628;
int8_t x183 = INT8_MAX;
static volatile int32_t t45 = 6074;
int32_t t46 = -1;
int8_t x194 = 5;
volatile uint64_t x195 = UINT64_MAX;
volatile uint32_t x196 = UINT32_MAX;
int16_t x198 = -128;
volatile uint32_t t49 = UINT32_MAX;
int8_t x203 = INT8_MAX;
volatile int32_t t50 = 887345;
int8_t x210 = 5;
static int8_t x211 = 20;
int32_t x212 = INT32_MAX;
static uint32_t x220 = 50U;
int32_t x224 = INT32_MIN;
int32_t t56 = INT32_MIN;
int8_t x232 = -1;
volatile uint8_t x234 = 6U;
int32_t x240 = INT32_MIN;
int64_t t59 = INT64_MIN;
int64_t x251 = INT64_MAX;
volatile int32_t t62 = 806;
int8_t x255 = 0;
int32_t x258 = INT32_MIN;
int32_t t64 = -143597617;
uint8_t x263 = 0U;
static volatile int32_t t65 = 2712;
static int8_t x265 = INT8_MAX;
int16_t x271 = 0;
int8_t x275 = INT8_MIN;
int32_t x276 = INT32_MAX;
volatile int64_t t68 = 62LL;
int8_t x277 = INT8_MIN;
int32_t x285 = INT32_MAX;
uint8_t x288 = UINT8_MAX;
static volatile uint8_t x289 = 1U;
uint8_t x294 = UINT8_MAX;
int16_t x305 = INT16_MIN;
uint32_t x307 = UINT32_MAX;
int32_t t76 = 49146;
int8_t x310 = INT8_MIN;
int64_t x313 = -2953LL;
static volatile uint16_t x318 = 3380U;
volatile int32_t t79 = INT32_MAX;
volatile uint64_t x328 = 7776039848493199971LLU;
volatile int16_t x332 = -23;
volatile uint64_t t82 = 3587LLU;
uint64_t x338 = 63073185228156772LLU;
static uint16_t x344 = UINT16_MAX;
static uint8_t x348 = 29U;
uint16_t x351 = UINT16_MAX;
uint32_t x355 = 382U;
int64_t t89 = INT64_MIN;
int8_t x362 = 0;
uint16_t x368 = 3770U;
static int8_t x372 = 0;
static volatile int64_t t93 = INT64_MAX;
int32_t t94 = -16;
volatile int8_t x387 = -16;
int8_t x388 = INT8_MIN;
volatile int32_t t97 = 1254366;
uint64_t x396 = 365013527140248LLU;
static uint64_t x397 = 15LLU;
volatile uint64_t t100 = UINT64_MAX;
int64_t x405 = -1LL;
int8_t x407 = INT8_MAX;
static int8_t x413 = 0;
static int32_t x416 = -1;
static int64_t x424 = INT64_MAX;
uint8_t x428 = UINT8_MAX;
static volatile int64_t x429 = INT64_MIN;
volatile int16_t x430 = -11;
volatile uint32_t t109 = UINT32_MAX;
volatile uint64_t x441 = UINT64_MAX;
static int64_t x446 = INT64_MAX;
int32_t x458 = -34945542;
int16_t x468 = 4792;
static volatile int64_t x470 = 107691LL;
volatile int64_t x471 = INT64_MAX;
uint64_t x472 = UINT64_MAX;
volatile uint64_t x473 = 42344853LLU;
uint16_t x484 = 14707U;
int8_t x494 = INT8_MAX;
int16_t x495 = 1332;
uint16_t x496 = 6U;
static int64_t x497 = 7646238553981164LL;
int64_t t124 = -979544194803472208LL;
static volatile uint16_t x507 = 26482U;
int16_t x508 = -1;
int32_t t126 = -129833257;
int64_t x511 = INT64_MAX;
int32_t t127 = -86492;
static int16_t x523 = INT16_MIN;
uint8_t x530 = 2U;
int8_t x532 = INT8_MAX;
static int32_t x533 = INT32_MIN;
static int16_t x534 = -6656;
volatile int32_t x546 = INT32_MAX;
volatile int16_t x550 = -1;
uint8_t x556 = 1U;
int32_t x561 = INT32_MIN;
volatile int64_t x562 = INT64_MIN;
volatile uint32_t x567 = 1804884U;
uint64_t t141 = 77931226165647560LLU;
static int64_t x571 = INT64_MIN;
static volatile int32_t x573 = -1;
int8_t x581 = -1;
int16_t x586 = -1;
int8_t x589 = INT8_MAX;
int32_t t147 = -71145;
int32_t x595 = -3999;
static uint8_t x599 = 0U;
int32_t x600 = INT32_MAX;
int64_t t149 = 16407873317586LL;
static int8_t x603 = 3;
int64_t x606 = 631371923LL;
int32_t x607 = INT32_MAX;
int16_t x611 = INT16_MAX;
static int32_t x612 = 16864007;
uint32_t x615 = 6U;
volatile int32_t x619 = -1;
volatile uint16_t x620 = 1U;
static volatile int64_t x628 = -144120524152576LL;
volatile int32_t t156 = 1960;
volatile int16_t x635 = INT16_MAX;
uint32_t x636 = UINT32_MAX;
int32_t x644 = -1;
uint32_t x653 = 414397U;
uint32_t x655 = 1288941199U;
volatile uint32_t t163 = 1087055719U;
int8_t x658 = INT8_MAX;
uint16_t x659 = UINT16_MAX;
static volatile int64_t t164 = -59701560807998178LL;
volatile int32_t x665 = INT32_MIN;
int64_t x680 = INT64_MIN;
int32_t x682 = 69;
int32_t x683 = -1;
volatile int16_t x687 = INT16_MAX;
static int32_t x689 = -412626;
uint32_t x692 = 1165788780U;
int16_t x694 = INT16_MAX;
int32_t x699 = INT32_MIN;
static int32_t t176 = -15588;
int8_t x711 = INT8_MAX;
int32_t x721 = INT32_MIN;
int8_t x722 = -37;
int32_t x727 = INT32_MAX;
volatile int16_t x735 = -1;
volatile int32_t t183 = INT32_MIN;
static int64_t x737 = -150611LL;
int64_t x739 = -3LL;
int64_t x743 = INT64_MIN;
volatile int32_t t187 = 1896455;
uint32_t x753 = UINT32_MAX;
int8_t x768 = INT8_MAX;
volatile int16_t x770 = INT16_MAX;
uint32_t x772 = 356237U;
int32_t x773 = INT32_MAX;
int16_t x778 = -1;
volatile int32_t t197 = -3;
int32_t t198 = -1;


void f0(void) {
    	uint64_t x2 = UINT64_MAX;
	int16_t x4 = -57;

    t0 = (x1^((x2==x3)==x4));

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MAX;
	static int32_t x7 = INT32_MAX;
	uint64_t x8 = 312224LLU;
	int32_t t1 = INT32_MAX;

    t1 = (x5^((x6==x7)==x8));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = INT32_MIN;

    t2 = (x9^((x10==x11)==x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static int8_t x14 = -1;
	volatile uint16_t x15 = 26173U;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -88248027;

    t3 = (x13^((x14==x15)==x16));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 980U;
	int8_t x18 = -12;
	volatile uint16_t x19 = UINT16_MAX;
	int32_t t4 = -705267;

    t4 = (x17^((x18==x19)==x20));

    if (t4 != 980) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x22 = -1;
	uint32_t x24 = 2633686U;
	int32_t t5 = 1;

    t5 = (x21^((x22==x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MIN;
	int32_t x27 = -1;
	int32_t x28 = -788;
	int32_t t6 = -11449;

    t6 = (x25^((x26==x27)==x28));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x30 = UINT64_MAX;
	uint64_t x31 = 1891092089544750942LLU;
	int16_t x32 = 1;
	int32_t t7 = -49070;

    t7 = (x29^((x30==x31)==x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int64_t x35 = -1LL;
	static volatile uint16_t x36 = 0U;

    t8 = (x33^((x34==x35)==x36));

    if (t8 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = 267U;
	volatile int32_t t9 = INT32_MAX;

    t9 = (x37^((x38==x39)==x40));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint16_t x42 = 2203U;
	static uint16_t x43 = 79U;
	volatile uint16_t x44 = 28U;
	int64_t t10 = INT64_MIN;

    t10 = (x41^((x42==x43)==x44));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = UINT32_MAX;
	volatile int64_t x46 = -2610000178905LL;
	int64_t x47 = -1LL;
	uint8_t x48 = UINT8_MAX;
	volatile uint32_t t11 = UINT32_MAX;

    t11 = (x45^((x46==x47)==x48));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = INT32_MIN;
	uint32_t x51 = 39408630U;
	volatile int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = INT32_MIN;

    t12 = (x49^((x50==x51)==x52));

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = 938U;
	int16_t x54 = -1;
	int32_t x55 = 2;
	volatile int32_t x56 = -52;

    t13 = (x53^((x54==x55)==x56));

    if (t13 != 938U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x58 = UINT8_MAX;
	int64_t x59 = -14124324700427501LL;
	uint16_t x60 = 941U;

    t14 = (x57^((x58==x59)==x60));

    if (t14 != 3538) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int16_t x62 = 590;
	volatile int32_t x63 = INT32_MIN;
	int32_t t15 = INT32_MIN;

    t15 = (x61^((x62==x63)==x64));

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MIN;
	uint32_t x68 = 650593U;
	volatile uint64_t t16 = UINT64_MAX;

    t16 = (x65^((x66==x67)==x68));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = INT64_MIN;
	volatile int32_t x71 = INT32_MIN;
	static volatile int32_t t17 = -230;

    t17 = (x69^((x70==x71)==x72));

    if (t17 != 58) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	static int64_t x74 = INT64_MIN;
	int64_t x75 = INT64_MIN;
	static volatile uint8_t x76 = 0U;
	volatile int32_t t18 = 61;

    t18 = (x73^((x74==x75)==x76));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MIN;
	static int16_t x78 = -1;
	int32_t x79 = -397;
	uint16_t x80 = 766U;
	volatile int32_t t19 = INT32_MIN;

    t19 = (x77^((x78==x79)==x80));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x83 = -1LL;
	int8_t x84 = 0;
	uint32_t t20 = 388491U;

    t20 = (x81^((x82==x83)==x84));

    if (t20 != 127U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int8_t x86 = -34;
	uint64_t x87 = 24682536847LLU;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = INT32_MIN;

    t21 = (x85^((x86==x87)==x88));

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x90 = INT32_MIN;
	uint16_t x91 = 24U;
	int32_t x92 = INT32_MIN;
	volatile int64_t t22 = INT64_MIN;

    t22 = (x89^((x90==x91)==x92));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	volatile uint64_t x94 = 751690653609104919LLU;
	static int16_t x95 = -1;
	uint32_t x96 = 525586020U;

    t23 = (x93^((x94==x95)==x96));

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MIN;
	int32_t x99 = -1;
	int64_t x100 = -1LL;
	volatile int32_t t24 = -428;

    t24 = (x97^((x98==x99)==x100));

    if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 424U;
	int64_t x102 = INT64_MIN;
	volatile int8_t x103 = INT8_MAX;
	static volatile int64_t x104 = -1LL;
	volatile uint32_t t25 = 235U;

    t25 = (x101^((x102==x103)==x104));

    if (t25 != 424U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	volatile int8_t x106 = -1;
	static uint16_t x107 = UINT16_MAX;
	static int32_t x108 = INT32_MIN;

    t26 = (x105^((x106==x107)==x108));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = 0;
	uint16_t x110 = 1676U;
	volatile int64_t x111 = 394957231996071764LL;
	volatile int32_t t27 = -3;

    t27 = (x109^((x110==x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 432U;
	int16_t x116 = -31;
	volatile int32_t t28 = -37;

    t28 = (x113^((x114==x115)==x116));

    if (t28 != 432) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = UINT32_MAX;
	uint16_t x118 = 56U;

    t29 = (x117^((x118==x119)==x120));

    if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 234249U;
	volatile int32_t x122 = 13733140;
	uint32_t x123 = 73146724U;
	static int16_t x124 = 0;
	static uint32_t t30 = 119U;

    t30 = (x121^((x122==x123)==x124));

    if (t30 != 234248U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x125 = UINT64_MAX;
	int16_t x126 = INT16_MIN;
	uint8_t x127 = UINT8_MAX;

    t31 = (x125^((x126==x127)==x128));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 486725U;
	volatile int8_t x131 = 6;
	static uint8_t x132 = 42U;
	volatile uint32_t t32 = 70229221U;

    t32 = (x129^((x130==x131)==x132));

    if (t32 != 486725U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x135 = 28;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t33 = 60;

    t33 = (x133^((x134==x135)==x136));

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = -5;
	int16_t x139 = 6168;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t34 = -62599;

    t34 = (x137^((x138==x139)==x140));

    if (t34 != -5) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x143 = -16089530LL;
	static uint32_t x144 = 82800U;
	int32_t t35 = -1700;

    t35 = (x141^((x142==x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	int8_t x146 = -2;
	int8_t x147 = INT8_MIN;
	int64_t t36 = INT64_MIN;

    t36 = (x145^((x146==x147)==x148));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MAX;
	int32_t x152 = INT32_MIN;
	int64_t t37 = INT64_MIN;

    t37 = (x149^((x150==x151)==x152));

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = -1LL;
	int8_t x154 = INT8_MAX;
	volatile int16_t x155 = -60;
	int32_t x156 = INT32_MIN;
	volatile int64_t t38 = -73676LL;

    t38 = (x153^((x154==x155)==x156));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x158 = -1;
	int8_t x159 = -1;
	volatile int16_t x160 = -1254;
	uint64_t t39 = UINT64_MAX;

    t39 = (x157^((x158==x159)==x160));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	int8_t x162 = 1;
	volatile int64_t x163 = INT64_MAX;
	static volatile int32_t t40 = 636;

    t40 = (x161^((x162==x163)==x164));

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MIN;
	volatile uint64_t x167 = 254LLU;
	static int32_t x168 = -1;
	static volatile int32_t t41 = -171;

    t41 = (x165^((x166==x167)==x168));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 54U;
	uint32_t x170 = 15U;
	volatile int16_t x171 = INT16_MAX;
	volatile int8_t x172 = INT8_MAX;
	volatile uint32_t t42 = 146U;

    t42 = (x169^((x170==x171)==x172));

    if (t42 != 54U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x173 = 1306U;
	uint16_t x174 = 1U;
	static int32_t x175 = INT32_MIN;
	uint32_t x176 = UINT32_MAX;

    t43 = (x173^((x174==x175)==x176));

    if (t43 != 1306) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	int16_t x178 = -1;
	volatile int16_t x179 = -1;
	int16_t x180 = INT16_MIN;
	int64_t t44 = -112LL;

    t44 = (x177^((x178==x179)==x180));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	static uint64_t x182 = 4LLU;
	uint32_t x184 = 412725195U;

    t45 = (x181^((x182==x183)==x184));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = 9U;
	int8_t x186 = 13;
	int64_t x187 = 1569256631638LL;
	int32_t x188 = INT32_MIN;

    t46 = (x185^((x186==x187)==x188));

    if (t46 != 9) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 24072110LLU;
	uint32_t x190 = 1610551441U;
	uint32_t x191 = UINT32_MAX;
	static int16_t x192 = INT16_MIN;
	static uint64_t t47 = 9LLU;

    t47 = (x189^((x190==x191)==x192));

    if (t47 != 24072110LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	volatile int64_t t48 = INT64_MIN;

    t48 = (x193^((x194==x195)==x196));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = UINT32_MAX;
	uint32_t x199 = 644983U;
	int8_t x200 = -3;

    t49 = (x197^((x198==x199)==x200));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int8_t x202 = -1;
	int64_t x204 = INT64_MIN;

    t50 = (x201^((x202==x203)==x204));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x205 = 3829241651175235953LLU;
	uint16_t x206 = UINT16_MAX;
	int8_t x207 = 27;
	volatile int32_t x208 = INT32_MIN;
	volatile uint64_t t51 = 13316950901618LLU;

    t51 = (x205^((x206==x207)==x208));

    if (t51 != 3829241651175235953LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 99U;
	static volatile int32_t t52 = 92;

    t52 = (x209^((x210==x211)==x212));

    if (t52 != 99) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -509820622;
	int16_t x214 = -1;
	int64_t x215 = -14854425LL;
	int8_t x216 = INT8_MIN;
	int32_t t53 = -1049559;

    t53 = (x213^((x214==x215)==x216));

    if (t53 != -509820622) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -1;
	static uint32_t x218 = 87U;
	int16_t x219 = -1;
	int32_t t54 = -5731678;

    t54 = (x217^((x218==x219)==x220));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 1708844LLU;
	int16_t x222 = INT16_MIN;
	int32_t x223 = INT32_MAX;
	static volatile uint64_t t55 = 7253185086378470LLU;

    t55 = (x221^((x222==x223)==x224));

    if (t55 != 1708844LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	int16_t x226 = -10;
	volatile int16_t x227 = 0;
	int64_t x228 = -190584693590890LL;

    t56 = (x225^((x226==x227)==x228));

    if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = -17724517LL;
	int8_t x230 = -3;
	uint16_t x231 = 26893U;
	volatile int64_t t57 = -3468287587349093241LL;

    t57 = (x229^((x230==x231)==x232));

    if (t57 != -17724517LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 0;
	volatile int8_t x235 = -1;
	uint8_t x236 = 1U;
	int32_t t58 = -2538379;

    t58 = (x233^((x234==x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MIN;
	uint16_t x238 = 0U;
	volatile uint8_t x239 = 1U;

    t59 = (x237^((x238==x239)==x240));

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	int16_t x242 = -32;
	int8_t x243 = INT8_MAX;
	int16_t x244 = INT16_MIN;
	volatile int64_t t60 = 30LL;

    t60 = (x241^((x242==x243)==x244));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 159827948099510LLU;
	uint64_t x246 = 780175524LLU;
	static int32_t x247 = 1;
	int32_t x248 = INT32_MIN;
	volatile uint64_t t61 = 14059113757594LLU;

    t61 = (x245^((x246==x247)==x248));

    if (t61 != 159827948099510LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 4U;
	uint8_t x250 = 123U;
	int32_t x252 = -11269669;

    t62 = (x249^((x250==x251)==x252));

    if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 72U;
	int16_t x254 = INT16_MIN;
	uint8_t x256 = 0U;
	volatile int32_t t63 = -62799;

    t63 = (x253^((x254==x255)==x256));

    if (t63 != 73) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = UINT8_MAX;
	static int16_t x259 = -1;
	static volatile uint64_t x260 = 57LLU;

    t64 = (x257^((x258==x259)==x260));

    if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -2544676;
	static int8_t x262 = 31;
	static int8_t x264 = INT8_MAX;

    t65 = (x261^((x262==x263)==x264));

    if (t65 != -2544676) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x266 = 46;
	static int16_t x267 = 62;
	static int8_t x268 = -6;
	static volatile int32_t t66 = -2;

    t66 = (x265^((x266==x267)==x268));

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -30;
	volatile int32_t x270 = -444;
	int64_t x272 = INT64_MAX;
	static volatile int32_t t67 = 762108;

    t67 = (x269^((x270==x271)==x272));

    if (t67 != -30) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 5762595390261LL;
	int32_t x274 = INT32_MIN;

    t68 = (x273^((x274==x275)==x276));

    if (t68 != 5762595390261LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x278 = 30905U;
	int16_t x279 = -1;
	uint64_t x280 = 1406988631728LLU;
	int32_t t69 = -152915;

    t69 = (x277^((x278==x279)==x280));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 28044U;
	static int64_t x282 = INT64_MAX;
	int8_t x283 = 18;
	static uint8_t x284 = 47U;
	int32_t t70 = 1197;

    t70 = (x281^((x282==x283)==x284));

    if (t70 != 28044) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x286 = INT16_MIN;
	int64_t x287 = -46492LL;
	int32_t t71 = INT32_MAX;

    t71 = (x285^((x286==x287)==x288));

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x290 = 1U;
	int64_t x291 = INT64_MIN;
	static uint8_t x292 = 6U;
	static volatile int32_t t72 = 24171;

    t72 = (x289^((x290==x291)==x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	static int32_t x295 = -1136792;
	int8_t x296 = -1;
	uint64_t t73 = UINT64_MAX;

    t73 = (x293^((x294==x295)==x296));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	int8_t x298 = -11;
	uint64_t x299 = UINT64_MAX;
	volatile int32_t x300 = INT32_MAX;
	int32_t t74 = -32111;

    t74 = (x297^((x298==x299)==x300));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -2;
	uint64_t x302 = UINT64_MAX;
	uint64_t x303 = 13310LLU;
	static volatile uint32_t x304 = UINT32_MAX;
	int32_t t75 = -468268;

    t75 = (x301^((x302==x303)==x304));

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint8_t x306 = 110U;
	uint32_t x308 = 911316U;

    t76 = (x305^((x306==x307)==x308));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = -4;
	uint64_t x311 = 30898507855LLU;
	static uint32_t x312 = 1072346898U;
	volatile int32_t t77 = 5;

    t77 = (x309^((x310==x311)==x312));

    if (t77 != -4) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x314 = INT32_MIN;
	uint8_t x315 = 8U;
	int32_t x316 = INT32_MIN;
	volatile int64_t t78 = -1808423206564LL;

    t78 = (x313^((x314==x315)==x316));

    if (t78 != -2953LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MAX;
	int8_t x319 = INT8_MAX;
	volatile int32_t x320 = INT32_MIN;

    t79 = (x317^((x318==x319)==x320));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 1U;
	static uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MAX;
	int64_t x324 = -1LL;
	static volatile int32_t t80 = -28;

    t80 = (x321^((x322==x323)==x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 17405U;
	int64_t x326 = 64216525645367887LL;
	uint64_t x327 = 10LLU;
	int32_t t81 = -7;

    t81 = (x325^((x326==x327)==x328));

    if (t81 != 17405) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 2013613080807LLU;
	int16_t x330 = -4;
	static int32_t x331 = -1;

    t82 = (x329^((x330==x331)==x332));

    if (t82 != 2013613080807LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = -2;
	uint64_t x334 = 37994498372861LLU;
	static int8_t x335 = -1;
	static volatile int64_t x336 = -1LL;
	int32_t t83 = 5;

    t83 = (x333^((x334==x335)==x336));

    if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	volatile uint32_t x340 = UINT32_MAX;
	int32_t t84 = 19;

    t84 = (x337^((x338==x339)==x340));

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x341 = INT64_MIN;
	uint8_t x342 = UINT8_MAX;
	volatile int64_t x343 = 439932719LL;
	int64_t t85 = INT64_MIN;

    t85 = (x341^((x342==x343)==x344));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	int8_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	int32_t t86 = -1190409;

    t86 = (x345^((x346==x347)==x348));

    if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = 1941527LL;
	uint16_t x350 = 9U;
	volatile uint16_t x352 = 23U;
	volatile int64_t t87 = -858441LL;

    t87 = (x349^((x350==x351)==x352));

    if (t87 != 1941527LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x353 = 6U;
	uint8_t x354 = 0U;
	int8_t x356 = INT8_MAX;
	int32_t t88 = 7;

    t88 = (x353^((x354==x355)==x356));

    if (t88 != 6) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = INT64_MIN;
	uint32_t x358 = 1227U;
	static volatile int16_t x359 = -8;
	uint8_t x360 = 3U;

    t89 = (x357^((x358==x359)==x360));

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 43LLU;
	volatile uint32_t x363 = 2221245U;
	int64_t x364 = INT64_MIN;
	static uint64_t t90 = 1LLU;

    t90 = (x361^((x362==x363)==x364));

    if (t90 != 43LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 485609095LLU;
	int64_t x366 = INT64_MIN;
	int32_t x367 = 62;
	volatile uint64_t t91 = 1949972624147674124LLU;

    t91 = (x365^((x366==x367)==x368));

    if (t91 != 485609095LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	int32_t x370 = INT32_MIN;
	uint64_t x371 = UINT64_MAX;
	int64_t t92 = 245LL;

    t92 = (x369^((x370==x371)==x372));

    if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	int8_t x374 = INT8_MIN;
	int64_t x375 = 13843960952LL;
	int8_t x376 = -1;

    t93 = (x373^((x374==x375)==x376));

    if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 11;
	int8_t x378 = INT8_MAX;
	static uint32_t x379 = UINT32_MAX;
	static int16_t x380 = -1;

    t94 = (x377^((x378==x379)==x380));

    if (t94 != 11) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MAX;
	int64_t x383 = 128335LL;
	int8_t x384 = INT8_MAX;
	volatile int32_t t95 = 2765097;

    t95 = (x381^((x382==x383)==x384));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MIN;
	uint32_t x386 = 97235U;
	int32_t t96 = -206367;

    t96 = (x385^((x386==x387)==x388));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x389 = -2043;
	static int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MAX;

    t97 = (x389^((x390==x391)==x392));

    if (t97 != -2043) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint16_t x393 = 1410U;
	int16_t x394 = -1;
	int32_t x395 = -1;
	volatile int32_t t98 = -19375;

    t98 = (x393^((x394==x395)==x396));

    if (t98 != 1410) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x398 = 8U;
	int64_t x399 = INT64_MIN;
	uint16_t x400 = 65U;
	volatile uint64_t t99 = 1566405658207657547LLU;

    t99 = (x397^((x398==x399)==x400));

    if (t99 != 15LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	uint64_t x402 = 301LLU;
	static int16_t x403 = -1;
	uint32_t x404 = UINT32_MAX;

    t100 = (x401^((x402==x403)==x404));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = INT32_MIN;
	volatile uint64_t x408 = 22580830571248084LLU;
	volatile int64_t t101 = 49520856776LL;

    t101 = (x405^((x406==x407)==x408));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = 60;
	volatile int32_t x410 = -519198291;
	int32_t x411 = 7177291;
	int16_t x412 = -42;
	int32_t t102 = -1;

    t102 = (x409^((x410==x411)==x412));

    if (t102 != 60) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x414 = INT32_MIN;
	int16_t x415 = -1;
	int32_t t103 = 0;

    t103 = (x413^((x414==x415)==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	uint16_t x418 = 48U;
	int64_t x419 = INT64_MIN;
	static volatile uint32_t x420 = 454586U;
	int32_t t104 = 113247354;

    t104 = (x417^((x418==x419)==x420));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	static uint8_t x422 = 28U;
	int8_t x423 = 1;
	int64_t t105 = INT64_MIN;

    t105 = (x421^((x422==x423)==x424));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x425 = UINT32_MAX;
	int8_t x426 = -2;
	volatile uint16_t x427 = 9325U;
	uint32_t t106 = UINT32_MAX;

    t106 = (x425^((x426==x427)==x428));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x431 = -1;
	int8_t x432 = INT8_MAX;
	int64_t t107 = INT64_MIN;

    t107 = (x429^((x430==x431)==x432));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	int8_t x434 = INT8_MIN;
	volatile int8_t x435 = INT8_MIN;
	int16_t x436 = -1;
	volatile uint64_t t108 = UINT64_MAX;

    t108 = (x433^((x434==x435)==x436));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = UINT32_MAX;
	int32_t x438 = INT32_MIN;
	int32_t x439 = 20611;
	int16_t x440 = -144;

    t109 = (x437^((x438==x439)==x440));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x442 = INT8_MAX;
	static volatile int16_t x443 = INT16_MAX;
	uint32_t x444 = 409978158U;
	volatile uint64_t t110 = UINT64_MAX;

    t110 = (x441^((x442==x443)==x444));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -1;
	int32_t x447 = 6913;
	volatile int8_t x448 = INT8_MAX;
	static volatile int32_t t111 = 111;

    t111 = (x445^((x446==x447)==x448));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 890722731U;
	static uint16_t x450 = 13U;
	static int16_t x451 = INT16_MAX;
	int64_t x452 = -61541399LL;
	volatile uint32_t t112 = 454605786U;

    t112 = (x449^((x450==x451)==x452));

    if (t112 != 890722731U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MAX;
	int16_t x454 = INT16_MAX;
	volatile uint8_t x455 = 1U;
	volatile int32_t x456 = -1;
	int32_t t113 = INT32_MAX;

    t113 = (x453^((x454==x455)==x456));

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -19890677820088423LL;
	uint8_t x459 = 1U;
	uint64_t x460 = UINT64_MAX;
	volatile int64_t t114 = 37LL;

    t114 = (x457^((x458==x459)==x460));

    if (t114 != -19890677820088423LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -16790645;
	static int32_t x462 = -4974;
	volatile int64_t x463 = 1009423LL;
	static int64_t x464 = -1LL;
	static volatile int32_t t115 = -2243;

    t115 = (x461^((x462==x463)==x464));

    if (t115 != -16790645) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -7560424516836568LL;
	uint8_t x466 = UINT8_MAX;
	uint32_t x467 = 1331U;
	int64_t t116 = 8556733256LL;

    t116 = (x465^((x466==x467)==x468));

    if (t116 != -7560424516836568LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = UINT8_MAX;
	static volatile int32_t t117 = -1;

    t117 = (x469^((x470==x471)==x472));

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x474 = INT16_MIN;
	uint16_t x475 = UINT16_MAX;
	volatile int16_t x476 = INT16_MIN;
	volatile uint64_t t118 = 5471348LLU;

    t118 = (x473^((x474==x475)==x476));

    if (t118 != 42344853LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	volatile uint8_t x478 = 9U;
	uint64_t x479 = UINT64_MAX;
	static uint64_t x480 = UINT64_MAX;
	int32_t t119 = INT32_MIN;

    t119 = (x477^((x478==x479)==x480));

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	uint64_t x482 = UINT64_MAX;
	static int64_t x483 = -198LL;
	static int32_t t120 = INT32_MAX;

    t120 = (x481^((x482==x483)==x484));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 1U;
	uint16_t x486 = 39U;
	uint8_t x487 = UINT8_MAX;
	int8_t x488 = INT8_MIN;
	int32_t t121 = -1684158;

    t121 = (x485^((x486==x487)==x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = -1;
	static int32_t x490 = -220;
	int64_t x491 = -30297480LL;
	int8_t x492 = -1;
	volatile int32_t t122 = 267803;

    t122 = (x489^((x490==x491)==x492));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MAX;
	static volatile int32_t t123 = 831387;

    t123 = (x493^((x494==x495)==x496));

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x498 = 64U;
	uint8_t x499 = UINT8_MAX;
	uint8_t x500 = UINT8_MAX;

    t124 = (x497^((x498==x499)==x500));

    if (t124 != 7646238553981164LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = UINT64_MAX;
	int64_t x502 = INT64_MIN;
	int16_t x503 = INT16_MIN;
	int8_t x504 = 0;
	uint64_t t125 = 2557420461623156264LLU;

    t125 = (x501^((x502==x503)==x504));

    if (t125 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = -1;
	int8_t x506 = INT8_MIN;

    t126 = (x505^((x506==x507)==x508));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 4U;
	static int32_t x510 = INT32_MIN;
	int32_t x512 = INT32_MAX;

    t127 = (x509^((x510==x511)==x512));

    if (t127 != 4) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -1;
	uint16_t x514 = 10U;
	uint64_t x515 = UINT64_MAX;
	volatile int64_t x516 = INT64_MIN;
	int32_t t128 = -5;

    t128 = (x513^((x514==x515)==x516));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x517 = -1;
	uint32_t x518 = 16268U;
	uint64_t x519 = UINT64_MAX;
	int32_t x520 = INT32_MIN;
	int32_t t129 = -24;

    t129 = (x517^((x518==x519)==x520));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = -1;
	int32_t x522 = -1;
	static uint32_t x524 = 96U;
	int32_t t130 = -198975598;

    t130 = (x521^((x522==x523)==x524));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	volatile int8_t x526 = INT8_MIN;
	int32_t x527 = INT32_MIN;
	volatile uint16_t x528 = 187U;
	static int32_t t131 = 0;

    t131 = (x525^((x526==x527)==x528));

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MAX;
	static uint16_t x531 = 26U;
	int32_t t132 = -54849200;

    t132 = (x529^((x530==x531)==x532));

    if (t132 != 32767) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x535 = UINT64_MAX;
	int32_t x536 = -1801347;
	volatile int32_t t133 = INT32_MIN;

    t133 = (x533^((x534==x535)==x536));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x537 = UINT8_MAX;
	uint64_t x538 = 75321601819LLU;
	uint16_t x539 = 15079U;
	int64_t x540 = INT64_MIN;
	static volatile int32_t t134 = -214954;

    t134 = (x537^((x538==x539)==x540));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -1;
	int32_t x542 = INT32_MAX;
	uint64_t x543 = 2104122855026904377LLU;
	int8_t x544 = INT8_MAX;
	static volatile int32_t t135 = -96870;

    t135 = (x541^((x542==x543)==x544));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = INT32_MIN;
	int64_t x547 = -1LL;
	static int8_t x548 = INT8_MIN;
	int32_t t136 = INT32_MIN;

    t136 = (x545^((x546==x547)==x548));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 1518149LLU;
	int16_t x551 = INT16_MIN;
	uint8_t x552 = 1U;
	volatile uint64_t t137 = 1LLU;

    t137 = (x549^((x550==x551)==x552));

    if (t137 != 1518149LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MIN;
	static int32_t x554 = INT32_MIN;
	static int32_t x555 = 104569709;
	static volatile int32_t t138 = -36146863;

    t138 = (x553^((x554==x555)==x556));

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	int64_t x558 = 2970175376146508LL;
	int8_t x559 = -1;
	uint8_t x560 = 30U;
	int64_t t139 = INT64_MIN;

    t139 = (x557^((x558==x559)==x560));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x563 = INT32_MIN;
	uint32_t x564 = UINT32_MAX;
	int32_t t140 = INT32_MIN;

    t140 = (x561^((x562==x563)==x564));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 65233298627191LLU;
	uint32_t x566 = 373265139U;
	int64_t x568 = INT64_MIN;

    t141 = (x565^((x566==x567)==x568));

    if (t141 != 65233298627191LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = INT16_MAX;
	int64_t x570 = INT64_MIN;
	static int8_t x572 = 2;
	volatile int32_t t142 = 45811968;

    t142 = (x569^((x570==x571)==x572));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x574 = INT16_MAX;
	int8_t x575 = INT8_MIN;
	int8_t x576 = -54;
	volatile int32_t t143 = 59;

    t143 = (x573^((x574==x575)==x576));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -53;
	int8_t x578 = INT8_MIN;
	volatile uint64_t x579 = UINT64_MAX;
	static int16_t x580 = INT16_MIN;
	volatile int32_t t144 = 16;

    t144 = (x577^((x578==x579)==x580));

    if (t144 != -53) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x582 = 10860U;
	int64_t x583 = -67473890514972LL;
	int8_t x584 = INT8_MIN;
	volatile int32_t t145 = 994;

    t145 = (x581^((x582==x583)==x584));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = 50452724875328LLU;
	static int8_t x587 = INT8_MAX;
	uint64_t x588 = 488837901488904LLU;
	uint64_t t146 = 1241656074249LLU;

    t146 = (x585^((x586==x587)==x588));

    if (t146 != 50452724875328LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x590 = 472U;
	int16_t x591 = -15;
	int64_t x592 = INT64_MIN;

    t147 = (x589^((x590==x591)==x592));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x594 = INT64_MIN;
	volatile int32_t x596 = 126751;
	volatile int32_t t148 = -20;

    t148 = (x593^((x594==x595)==x596));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = -1LL;
	uint64_t x598 = 163455LLU;

    t149 = (x597^((x598==x599)==x600));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	uint8_t x602 = 6U;
	uint8_t x604 = 1U;
	int32_t t150 = -1;

    t150 = (x601^((x602==x603)==x604));

    if (t150 != -32768) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	int64_t x608 = INT64_MIN;
	int32_t t151 = INT32_MAX;

    t151 = (x605^((x606==x607)==x608));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	int16_t x610 = INT16_MIN;
	volatile int32_t t152 = -22409;

    t152 = (x609^((x610==x611)==x612));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x613 = UINT32_MAX;
	static volatile int64_t x614 = -690600254088LL;
	int8_t x616 = -1;
	static volatile uint32_t t153 = UINT32_MAX;

    t153 = (x613^((x614==x615)==x616));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 5563761LLU;
	uint8_t x618 = 11U;
	uint64_t t154 = 1906848LLU;

    t154 = (x617^((x618==x619)==x620));

    if (t154 != 5563761LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 4U;
	int8_t x622 = INT8_MAX;
	static int32_t x623 = -1;
	static int32_t x624 = 1760;
	volatile int32_t t155 = -4;

    t155 = (x621^((x622==x623)==x624));

    if (t155 != 4) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	volatile int64_t x626 = 407LL;
	int64_t x627 = -275LL;

    t156 = (x625^((x626==x627)==x628));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = INT32_MIN;
	static volatile int8_t x630 = INT8_MAX;
	static int64_t x631 = INT64_MIN;
	uint16_t x632 = 818U;
	int32_t t157 = INT32_MIN;

    t157 = (x629^((x630==x631)==x632));

    if (t157 != INT32_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 48050U;
	static uint32_t x634 = UINT32_MAX;
	uint32_t t158 = 15U;

    t158 = (x633^((x634==x635)==x636));

    if (t158 != 48050U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = 1;
	volatile int32_t x638 = -1;
	int16_t x639 = INT16_MIN;
	volatile int16_t x640 = INT16_MIN;
	int32_t t159 = 75585465;

    t159 = (x637^((x638==x639)==x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	uint64_t x642 = 119353351494LLU;
	uint16_t x643 = UINT16_MAX;
	volatile int64_t t160 = INT64_MIN;

    t160 = (x641^((x642==x643)==x644));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x645 = 49U;
	volatile int8_t x646 = INT8_MAX;
	int16_t x647 = INT16_MAX;
	static int8_t x648 = INT8_MIN;
	int32_t t161 = -49;

    t161 = (x645^((x646==x647)==x648));

    if (t161 != 49) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1;
	int32_t x650 = INT32_MAX;
	int32_t x651 = INT32_MIN;
	int16_t x652 = -1;
	int32_t t162 = -16527139;

    t162 = (x649^((x650==x651)==x652));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x654 = INT8_MAX;
	uint64_t x656 = 57238361466LLU;

    t163 = (x653^((x654==x655)==x656));

    if (t163 != 414397U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	static int8_t x660 = INT8_MIN;

    t164 = (x657^((x658==x659)==x660));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -4078178883829652LL;
	static int32_t x662 = -235988;
	volatile uint8_t x663 = 7U;
	int64_t x664 = -2934794490200785LL;
	int64_t t165 = -113793LL;

    t165 = (x661^((x662==x663)==x664));

    if (t165 != -4078178883829652LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x666 = INT8_MAX;
	volatile int32_t x667 = -1616;
	static volatile int64_t x668 = -1716099104910LL;
	int32_t t166 = INT32_MIN;

    t166 = (x665^((x666==x667)==x668));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MAX;
	int16_t x670 = -1;
	volatile int64_t x671 = INT64_MAX;
	int16_t x672 = 130;
	int64_t t167 = INT64_MAX;

    t167 = (x669^((x670==x671)==x672));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = -1;
	volatile uint32_t x674 = 189334047U;
	int64_t x675 = INT64_MAX;
	static int64_t x676 = -27458363104928288LL;
	volatile int32_t t168 = 1;

    t168 = (x673^((x674==x675)==x676));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 107U;
	static uint16_t x678 = UINT16_MAX;
	uint32_t x679 = 0U;
	volatile int32_t t169 = 3184623;

    t169 = (x677^((x678==x679)==x680));

    if (t169 != 107) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = UINT8_MAX;
	uint16_t x684 = 36U;
	volatile int32_t t170 = 313803914;

    t170 = (x681^((x682==x683)==x684));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	int64_t x686 = 57588LL;
	int8_t x688 = INT8_MAX;
	volatile int32_t t171 = 1065937296;

    t171 = (x685^((x686==x687)==x688));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x690 = 4738U;
	int8_t x691 = -1;
	volatile int32_t t172 = 15695;

    t172 = (x689^((x690==x691)==x692));

    if (t172 != -412626) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = -30;
	static int64_t x695 = -1LL;
	int8_t x696 = INT8_MAX;
	volatile int32_t t173 = -510071;

    t173 = (x693^((x694==x695)==x696));

    if (t173 != -30) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MAX;
	int32_t x698 = -1;
	int16_t x700 = INT16_MIN;
	static volatile int32_t t174 = -179;

    t174 = (x697^((x698==x699)==x700));

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -1;
	volatile int32_t x702 = -649430;
	int32_t x703 = INT32_MAX;
	static int16_t x704 = INT16_MAX;
	int32_t t175 = -15672812;

    t175 = (x701^((x702==x703)==x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	static volatile uint16_t x706 = 288U;
	volatile uint16_t x707 = 23U;
	uint16_t x708 = 86U;

    t176 = (x705^((x706==x707)==x708));

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 78LLU;
	static int16_t x710 = 1;
	int8_t x712 = INT8_MIN;
	uint64_t t177 = 27857817LLU;

    t177 = (x709^((x710==x711)==x712));

    if (t177 != 78LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -52;
	uint64_t x714 = 6LLU;
	int16_t x715 = INT16_MIN;
	int16_t x716 = -1;
	int32_t t178 = -8671;

    t178 = (x713^((x714==x715)==x716));

    if (t178 != -52) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	static uint16_t x718 = UINT16_MAX;
	int64_t x719 = -1LL;
	volatile int64_t x720 = -1LL;
	int32_t t179 = 5561532;

    t179 = (x717^((x718==x719)==x720));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x723 = -90;
	static volatile int8_t x724 = INT8_MIN;
	static volatile int32_t t180 = INT32_MIN;

    t180 = (x721^((x722==x723)==x724));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	int64_t x726 = INT64_MAX;
	static int16_t x728 = -1;
	volatile int64_t t181 = INT64_MIN;

    t181 = (x725^((x726==x727)==x728));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x729 = UINT8_MAX;
	volatile uint16_t x730 = 2116U;
	int32_t x731 = INT32_MIN;
	int8_t x732 = -1;
	volatile int32_t t182 = -3122;

    t182 = (x729^((x730==x731)==x732));

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = INT32_MIN;
	uint16_t x734 = 30684U;
	uint64_t x736 = 1LLU;

    t183 = (x733^((x734==x735)==x736));

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x738 = INT64_MIN;
	volatile uint32_t x740 = 1686U;
	int64_t t184 = -181LL;

    t184 = (x737^((x738==x739)==x740));

    if (t184 != -150611LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x741 = 27U;
	int32_t x742 = -1;
	int64_t x744 = 3121109LL;
	static volatile int32_t t185 = -1700;

    t185 = (x741^((x742==x743)==x744));

    if (t185 != 27) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MAX;
	int8_t x746 = 1;
	uint32_t x747 = 1376U;
	volatile int64_t x748 = INT64_MAX;
	volatile int32_t t186 = -109660;

    t186 = (x745^((x746==x747)==x748));

    if (t186 != 127) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	static uint16_t x750 = 41U;
	uint8_t x751 = UINT8_MAX;
	int8_t x752 = INT8_MAX;

    t187 = (x749^((x750==x751)==x752));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MIN;
	static uint32_t x755 = UINT32_MAX;
	static volatile uint32_t x756 = 0U;
	volatile uint32_t t188 = 1193468648U;

    t188 = (x753^((x754==x755)==x756));

    if (t188 != 4294967294U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 11099U;
	static volatile int16_t x758 = 8;
	volatile uint64_t x759 = UINT64_MAX;
	int16_t x760 = INT16_MAX;
	volatile int32_t t189 = 49993919;

    t189 = (x757^((x758==x759)==x760));

    if (t189 != 11099) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 107628635199LLU;
	int16_t x762 = -1;
	int32_t x763 = -51051;
	uint64_t x764 = UINT64_MAX;
	volatile uint64_t t190 = 459LLU;

    t190 = (x761^((x762==x763)==x764));

    if (t190 != 107628635199LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 88U;
	volatile uint8_t x766 = UINT8_MAX;
	int32_t x767 = INT32_MIN;
	int32_t t191 = 0;

    t191 = (x765^((x766==x767)==x768));

    if (t191 != 88) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = INT64_MIN;
	static uint16_t x771 = 283U;
	static volatile int64_t t192 = INT64_MIN;

    t192 = (x769^((x770==x771)==x772));

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x774 = -53806268LL;
	volatile int16_t x775 = INT16_MAX;
	int8_t x776 = INT8_MAX;
	volatile int32_t t193 = INT32_MAX;

    t193 = (x773^((x774==x775)==x776));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = INT64_MAX;
	volatile int32_t x779 = -1;
	static volatile int16_t x780 = INT16_MIN;
	volatile int64_t t194 = INT64_MAX;

    t194 = (x777^((x778==x779)==x780));

    if (t194 != INT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	uint64_t x782 = 299199165913411538LLU;
	static uint32_t x783 = UINT32_MAX;
	static int64_t x784 = INT64_MAX;
	static int32_t t195 = -695972;

    t195 = (x781^((x782==x783)==x784));

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = INT64_MAX;
	static int32_t x787 = INT32_MIN;
	uint16_t x788 = UINT16_MAX;
	volatile int64_t t196 = INT64_MIN;

    t196 = (x785^((x786==x787)==x788));

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = UINT16_MAX;
	uint64_t x790 = UINT64_MAX;
	uint64_t x791 = 5932329587848319156LLU;
	volatile uint16_t x792 = 2603U;

    t197 = (x789^((x790==x791)==x792));

    if (t197 != 65535) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = 2;
	volatile int16_t x794 = INT16_MAX;
	static int32_t x795 = INT32_MAX;
	uint16_t x796 = UINT16_MAX;

    t198 = (x793^((x794==x795)==x796));

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = UINT8_MAX;
	uint64_t x798 = UINT64_MAX;
	int32_t x799 = INT32_MIN;
	int8_t x800 = -1;
	static volatile int32_t t199 = -7383654;

    t199 = (x797^((x798==x799)==x800));

    if (t199 != 255) { NG(); } else { ; }
	
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

