
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

static int32_t x8 = INT32_MIN;
int16_t x9 = -2;
volatile uint32_t x16 = 27708168U;
volatile int32_t t3 = 2;
uint16_t x19 = 631U;
int8_t x20 = -1;
static volatile int32_t t4 = 108563;
int16_t x21 = 704;
int8_t x25 = -1;
int32_t t6 = -5138;
static int64_t x38 = 87052909681781LL;
int16_t x50 = -20;
volatile int16_t x51 = -20;
int32_t x52 = INT32_MAX;
static int32_t t12 = 0;
int32_t t13 = -816983226;
static int8_t x63 = -1;
int8_t x64 = INT8_MIN;
uint16_t x69 = UINT16_MAX;
volatile int32_t x70 = INT32_MIN;
uint32_t x76 = UINT32_MAX;
static uint8_t x79 = 0U;
static int32_t x82 = -1;
int8_t x83 = INT8_MAX;
int64_t x84 = -85315LL;
int32_t t21 = 997316;
int64_t x89 = -1LL;
uint64_t x95 = 2768467292247865LLU;
volatile int32_t x98 = -40;
static volatile int8_t x103 = -1;
uint32_t x104 = 55731348U;
uint16_t x117 = 57U;
static int32_t x119 = INT32_MIN;
int32_t t29 = -123452;
int64_t x122 = -1LL;
uint64_t x127 = UINT64_MAX;
uint64_t x128 = UINT64_MAX;
int8_t x132 = 48;
int32_t t32 = 25;
int16_t x147 = 0;
int8_t x151 = INT8_MIN;
volatile int64_t x154 = 68452969604020LL;
int64_t x162 = INT64_MIN;
uint8_t x165 = 15U;
int32_t x166 = 15;
uint32_t x170 = 171U;
uint64_t x171 = UINT64_MAX;
int64_t x175 = INT64_MAX;
int8_t x178 = -5;
int32_t x179 = -1;
int64_t x190 = 3365286LL;
int64_t x197 = INT64_MIN;
int8_t x199 = INT8_MAX;
static uint16_t x205 = UINT16_MAX;
int64_t x206 = INT64_MAX;
static int16_t x209 = INT16_MIN;
int32_t x211 = -751;
int8_t x212 = INT8_MIN;
int8_t x215 = -2;
static int16_t x216 = INT16_MIN;
int64_t x218 = INT64_MIN;
uint8_t x220 = 2U;
volatile int64_t x222 = -1LL;
int16_t x223 = INT16_MAX;
static int32_t x226 = INT32_MIN;
volatile uint8_t x227 = 27U;
volatile int8_t x228 = INT8_MIN;
static int8_t x230 = INT8_MAX;
int32_t x231 = INT32_MIN;
volatile int64_t x241 = INT64_MIN;
int16_t x244 = INT16_MAX;
static volatile int8_t x251 = -4;
int32_t x255 = -2701;
int16_t x257 = 1;
volatile int16_t x261 = 42;
static int64_t x263 = INT64_MIN;
static volatile int32_t t65 = -222955;
volatile int64_t x270 = INT64_MIN;
int64_t x278 = -1LL;
static uint64_t x280 = 1723LLU;
int8_t x285 = 1;
uint8_t x288 = 4U;
int32_t x300 = INT32_MAX;
uint16_t x302 = UINT16_MAX;
int64_t x306 = 37443821165054427LL;
int64_t x316 = 5245485073631LL;
int64_t x318 = INT64_MIN;
uint64_t x321 = 207324754123883178LLU;
int32_t x322 = INT32_MIN;
int32_t t80 = 56944;
int8_t x325 = INT8_MAX;
int32_t x330 = INT32_MAX;
int8_t x334 = INT8_MAX;
volatile int16_t x340 = 2110;
int16_t x341 = 6;
int8_t x342 = -8;
volatile int64_t x343 = INT64_MIN;
int32_t x348 = INT32_MAX;
int32_t t87 = 331639458;
int64_t x353 = INT64_MIN;
int32_t t90 = -255478974;
static uint16_t x366 = 17513U;
uint16_t x372 = 7904U;
volatile int32_t x373 = 17156;
static int16_t x384 = -1;
volatile int8_t x389 = -42;
static int32_t x390 = -1;
volatile int8_t x395 = INT8_MIN;
uint16_t x401 = 25U;
int32_t x403 = 17479740;
volatile int32_t t100 = 74;
int8_t x406 = 51;
uint8_t x415 = 11U;
uint32_t x422 = 13U;
int8_t x424 = INT8_MAX;
static int32_t t108 = 6348969;
static volatile int32_t t109 = 3233554;
int32_t x445 = INT32_MIN;
int32_t x447 = 110;
uint64_t x448 = 146494015313LLU;
static uint8_t x449 = 53U;
int16_t x457 = -1;
uint8_t x460 = 2U;
int8_t x465 = 0;
uint64_t x468 = 10845078308502LLU;
int32_t t118 = -2092015;
uint8_t x477 = UINT8_MAX;
int16_t x478 = INT16_MAX;
volatile int32_t t119 = -26;
int8_t x482 = INT8_MIN;
int64_t x483 = -1LL;
uint16_t x484 = 24981U;
volatile int32_t t120 = -3;
int8_t x488 = -1;
int32_t t121 = -32568509;
static volatile uint64_t x491 = 202LLU;
int16_t x492 = -14;
uint32_t x495 = 2492810U;
int32_t x499 = -16025;
int64_t x506 = -1LL;
int32_t x509 = INT32_MAX;
int8_t x511 = INT8_MIN;
uint64_t x512 = UINT64_MAX;
int32_t x515 = INT32_MAX;
volatile int32_t t128 = -6;
uint64_t x520 = 3998804LLU;
volatile int64_t x527 = INT64_MIN;
static volatile uint16_t x528 = 3U;
int16_t x532 = INT16_MIN;
uint32_t x535 = 97321924U;
uint64_t x539 = UINT64_MAX;
int32_t x543 = -60455;
uint16_t x544 = UINT16_MAX;
static int32_t x547 = INT32_MIN;
uint16_t x554 = UINT16_MAX;
static int64_t x559 = INT64_MIN;
uint64_t x562 = 188LLU;
int64_t x564 = -6550823LL;
volatile int32_t t140 = 15571;
int16_t x566 = INT16_MAX;
uint16_t x571 = 636U;
int64_t x573 = -25983847279813734LL;
int16_t x579 = INT16_MAX;
uint8_t x584 = UINT8_MAX;
int16_t x585 = INT16_MIN;
volatile int8_t x586 = INT8_MIN;
uint16_t x589 = 4429U;
volatile int32_t t147 = 5754205;
volatile uint8_t x599 = 75U;
static uint64_t x600 = 3350031851463LLU;
static uint16_t x603 = 14544U;
int16_t x605 = 1;
static volatile uint32_t x613 = 30U;
int32_t x614 = INT32_MIN;
static uint8_t x620 = 24U;
int32_t t154 = -2459922;
static int32_t t155 = -1;
int8_t x625 = INT8_MIN;
uint8_t x638 = UINT8_MAX;
int64_t x651 = 227189LL;
uint8_t x657 = 6U;
static uint8_t x660 = 30U;
int32_t x676 = -14092;
int32_t t169 = 11;
static uint16_t x683 = 21119U;
int32_t t170 = 374041891;
int8_t x686 = INT8_MIN;
int16_t x687 = INT16_MIN;
uint64_t x694 = UINT64_MAX;
volatile int32_t t173 = 0;
uint16_t x697 = 359U;
int32_t x699 = 2;
int32_t t174 = 13381;
static uint16_t x702 = 20U;
volatile int32_t x705 = -64357139;
int32_t t176 = -3;
int32_t x720 = INT32_MAX;
static volatile int16_t x727 = -1;
uint32_t x731 = 501U;
volatile int8_t x736 = -1;
volatile uint8_t x743 = 18U;
int32_t t185 = 40;
int32_t t186 = -249;
int64_t x753 = INT64_MIN;
uint32_t x764 = 2676U;
uint8_t x769 = 2U;
int8_t x771 = INT8_MIN;
static volatile int8_t x773 = INT8_MAX;
static int64_t x776 = -37858975352LL;
uint8_t x792 = 40U;
volatile uint16_t x794 = 1463U;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	uint32_t x2 = 54722169U;
	static volatile uint32_t x3 = 7U;
	volatile int64_t x4 = INT64_MIN;
	int32_t t0 = 26;

    t0 = (x1<=((x2==x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MIN;
	int16_t x7 = -1;
	int32_t t1 = 14054;

    t1 = (x5<=((x6==x7)<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x10 = -3273;
	uint16_t x11 = 20444U;
	static volatile int16_t x12 = -1;
	int32_t t2 = -53276882;

    t2 = (x9<=((x10==x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = 1;
	static int16_t x14 = -49;
	static int8_t x15 = INT8_MAX;

    t3 = (x13<=((x14==x15)<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	uint64_t x18 = 530101026471915LLU;

    t4 = (x17<=((x18==x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -29LL;
	int16_t x23 = -1;
	static uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -15526;

    t5 = (x21<=((x22==x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = -1;
	static int32_t x27 = -1;
	int8_t x28 = -1;

    t6 = (x25<=((x26==x27)<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = 1;
	volatile uint16_t x30 = UINT16_MAX;
	volatile int64_t x31 = 1LL;
	static uint32_t x32 = UINT32_MAX;
	int32_t t7 = 197299;

    t7 = (x29<=((x30==x31)<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	int16_t x34 = -1;
	volatile int64_t x35 = INT64_MAX;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 1;

    t8 = (x33<=((x34==x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -1LL;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 4116U;
	int32_t t9 = 14205;

    t9 = (x37<=((x38==x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	volatile uint16_t x42 = UINT16_MAX;
	static int8_t x43 = INT8_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -856026240;

    t10 = (x41<=((x42==x43)<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 0;
	static int32_t x46 = -1075987;
	int16_t x47 = 1;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = -9;

    t11 = (x45<=((x46==x47)<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = UINT64_MAX;

    t12 = (x49<=((x50==x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	int8_t x55 = -1;
	static int8_t x56 = INT8_MIN;

    t13 = (x53<=((x54==x55)<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = 0;
	int16_t x58 = INT16_MIN;
	volatile int64_t x59 = -12675547086LL;
	int64_t x60 = 19301LL;
	volatile int32_t t14 = -11143;

    t14 = (x57<=((x58==x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	uint16_t x62 = 12152U;
	volatile int32_t t15 = -181;

    t15 = (x61<=((x62==x63)<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -10498;
	int8_t x66 = -5;
	int64_t x67 = INT64_MIN;
	uint16_t x68 = 7U;
	static int32_t t16 = -814523;

    t16 = (x65<=((x66==x67)<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -27;

    t17 = (x69<=((x70==x71)<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = -1;
	static int8_t x74 = -1;
	int16_t x75 = 0;
	int32_t t18 = -474294;

    t18 = (x73<=((x74==x75)<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	uint16_t x78 = 1331U;
	int32_t x80 = 1;
	int32_t t19 = 1596391;

    t19 = (x77<=((x78==x79)<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = -1;
	int32_t t20 = 1;

    t20 = (x81<=((x82==x83)<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	uint8_t x86 = UINT8_MAX;
	int8_t x87 = INT8_MAX;
	int64_t x88 = -1LL;

    t21 = (x85<=((x86==x87)<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x90 = 42;
	int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = 11892978;

    t22 = (x89<=((x90==x91)<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int8_t x94 = INT8_MIN;
	static int16_t x96 = -254;
	int32_t t23 = -1602074;

    t23 = (x93<=((x94==x95)<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x97 = INT16_MAX;
	static volatile uint8_t x99 = UINT8_MAX;
	uint16_t x100 = UINT16_MAX;
	int32_t t24 = -3;

    t24 = (x97<=((x98==x99)<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = 3;
	int64_t x102 = INT64_MAX;
	static volatile int32_t t25 = -12;

    t25 = (x101<=((x102==x103)<=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 0;
	uint32_t x106 = 182U;
	volatile uint64_t x107 = 6468408LLU;
	volatile int64_t x108 = 123436909509168LL;
	static volatile int32_t t26 = -128324;

    t26 = (x105<=((x106==x107)<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x109 = UINT32_MAX;
	int64_t x110 = INT64_MAX;
	static uint64_t x111 = UINT64_MAX;
	int32_t x112 = 7820351;
	volatile int32_t t27 = -810840;

    t27 = (x109<=((x110==x111)<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 61617201LL;
	static volatile uint8_t x114 = 58U;
	static volatile int64_t x115 = INT64_MAX;
	static uint32_t x116 = UINT32_MAX;
	static volatile int32_t t28 = -2679;

    t28 = (x113<=((x114==x115)<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = 51009LLU;
	int8_t x120 = INT8_MIN;

    t29 = (x117<=((x118==x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x121 = -148;
	int8_t x123 = 15;
	int32_t x124 = 122043736;
	int32_t t30 = -204;

    t30 = (x121<=((x122==x123)<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = UINT32_MAX;
	uint32_t x126 = 22U;
	int32_t t31 = -1039123;

    t31 = (x125<=((x126==x127)<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -9LL;
	int32_t x130 = 6247;
	int16_t x131 = INT16_MIN;

    t32 = (x129<=((x130==x131)<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 15213;
	volatile uint16_t x134 = 2U;
	int64_t x135 = 101804993663LL;
	int8_t x136 = 7;
	static int32_t t33 = 990507834;

    t33 = (x133<=((x134==x135)<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = -41747718;
	volatile int16_t x138 = INT16_MIN;
	static uint8_t x139 = UINT8_MAX;
	int32_t x140 = 2163916;
	int32_t t34 = 30446810;

    t34 = (x137<=((x138==x139)<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = UINT32_MAX;
	int16_t x142 = INT16_MIN;
	static int32_t x143 = -691867;
	volatile int64_t x144 = -1LL;
	int32_t t35 = 411784935;

    t35 = (x141<=((x142==x143)<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int16_t x146 = 144;
	volatile uint16_t x148 = 3090U;
	int32_t t36 = 7802;

    t36 = (x145<=((x146==x147)<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = INT16_MAX;
	volatile uint8_t x150 = UINT8_MAX;
	int32_t x152 = -1;
	int32_t t37 = 3763;

    t37 = (x149<=((x150==x151)<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MIN;
	int16_t x155 = -1;
	static int32_t x156 = -1;
	volatile int32_t t38 = -76;

    t38 = (x153<=((x154==x155)<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	static uint32_t x160 = UINT32_MAX;
	int32_t t39 = -472;

    t39 = (x157<=((x158==x159)<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -1LL;
	static uint32_t x163 = 58U;
	uint8_t x164 = 0U;
	volatile int32_t t40 = -209029;

    t40 = (x161<=((x162==x163)<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x167 = 4605U;
	int64_t x168 = -1LL;
	int32_t t41 = -179360;

    t41 = (x165<=((x166==x167)<=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MAX;
	uint8_t x172 = 124U;
	static volatile int32_t t42 = 6252;

    t42 = (x169<=((x170==x171)<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x173 = 0U;
	int64_t x174 = INT64_MIN;
	static volatile uint16_t x176 = 22U;
	int32_t t43 = -88985013;

    t43 = (x173<=((x174==x175)<=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -102;
	uint32_t x180 = 5136932U;
	int32_t t44 = 29362;

    t44 = (x177<=((x178==x179)<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 1977U;
	volatile uint8_t x182 = 20U;
	uint64_t x183 = UINT64_MAX;
	volatile int32_t x184 = INT32_MIN;
	static int32_t t45 = 106201640;

    t45 = (x181<=((x182==x183)<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 1779;
	uint32_t x186 = 16192U;
	int16_t x187 = -1;
	int64_t x188 = 214411371LL;
	static int32_t t46 = -127449200;

    t46 = (x185<=((x186==x187)<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -4;
	static int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 438;

    t47 = (x189<=((x190==x191)<=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 13149;
	int16_t x194 = -1;
	volatile uint32_t x195 = UINT32_MAX;
	int8_t x196 = 31;
	int32_t t48 = -42433767;

    t48 = (x193<=((x194==x195)<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x198 = 1U;
	int8_t x200 = -1;
	volatile int32_t t49 = 7;

    t49 = (x197<=((x198==x199)<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	int8_t x202 = 1;
	static volatile uint16_t x203 = 1969U;
	int16_t x204 = INT16_MAX;
	volatile int32_t t50 = 9762;

    t50 = (x201<=((x202==x203)<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x207 = INT32_MAX;
	static uint64_t x208 = 41357710991LLU;
	volatile int32_t t51 = -433;

    t51 = (x205<=((x206==x207)<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = INT64_MIN;
	int32_t t52 = 26116037;

    t52 = (x209<=((x210==x211)<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = 1;
	volatile uint64_t x214 = 1LLU;
	volatile int32_t t53 = 1707;

    t53 = (x213<=((x214==x215)<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	int8_t x219 = -2;
	int32_t t54 = 5525655;

    t54 = (x217<=((x218==x219)<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 31U;
	volatile uint8_t x224 = UINT8_MAX;
	int32_t t55 = -13246;

    t55 = (x221<=((x222==x223)<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	volatile int32_t t56 = -46088125;

    t56 = (x225<=((x226==x227)<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	int64_t x232 = 35920252LL;
	volatile int32_t t57 = -73162;

    t57 = (x229<=((x230==x231)<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 17681911098354439LL;
	int32_t x234 = INT32_MAX;
	static uint16_t x235 = 14849U;
	int32_t x236 = 189345;
	int32_t t58 = 1;

    t58 = (x233<=((x234==x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -20477;
	static int8_t x238 = INT8_MAX;
	uint8_t x239 = 0U;
	static uint64_t x240 = 119LLU;
	static volatile int32_t t59 = 362;

    t59 = (x237<=((x238==x239)<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x242 = -1;
	int8_t x243 = INT8_MIN;
	int32_t t60 = 3;

    t60 = (x241<=((x242==x243)<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	int8_t x246 = -9;
	int8_t x247 = -1;
	volatile int32_t x248 = -1;
	volatile int32_t t61 = 75081;

    t61 = (x245<=((x246==x247)<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	uint8_t x250 = 16U;
	uint16_t x252 = 1504U;
	int32_t t62 = 1;

    t62 = (x249<=((x250==x251)<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = INT8_MIN;
	int8_t x254 = -1;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -2024;

    t63 = (x253<=((x254==x255)<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = INT32_MAX;
	int8_t x259 = 21;
	static int8_t x260 = INT8_MIN;
	int32_t t64 = 183;

    t64 = (x257<=((x258==x259)<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x262 = INT64_MIN;
	static volatile int32_t x264 = -1;

    t65 = (x261<=((x262==x263)<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = UINT32_MAX;
	int8_t x266 = -1;
	static int8_t x267 = 5;
	int32_t x268 = -1;
	volatile int32_t t66 = 919510;

    t66 = (x265<=((x266==x267)<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -1;
	int8_t x271 = INT8_MIN;
	int32_t x272 = 335169505;
	volatile int32_t t67 = -34;

    t67 = (x269<=((x270==x271)<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 1U;
	static volatile uint32_t x274 = 2969290U;
	int16_t x275 = INT16_MAX;
	uint16_t x276 = UINT16_MAX;
	int32_t t68 = -2161;

    t68 = (x273<=((x274==x275)<=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 7U;
	int16_t x279 = INT16_MIN;
	int32_t t69 = -189;

    t69 = (x277<=((x278==x279)<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 12834LLU;
	static volatile int64_t x282 = -1LL;
	int32_t x283 = INT32_MIN;
	volatile int64_t x284 = -6908LL;
	volatile int32_t t70 = -4772579;

    t70 = (x281<=((x282==x283)<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x286 = UINT32_MAX;
	static int16_t x287 = -11;
	volatile int32_t t71 = 391249739;

    t71 = (x285<=((x286==x287)<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = 495;
	int32_t x290 = 621637034;
	int32_t x291 = INT32_MIN;
	int32_t x292 = -1;
	int32_t t72 = 684532;

    t72 = (x289<=((x290==x291)<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = UINT64_MAX;
	volatile int64_t x294 = 3561656LL;
	int16_t x295 = 5;
	uint64_t x296 = 1195192779385217404LLU;
	int32_t t73 = 315593483;

    t73 = (x293<=((x294==x295)<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -1LL;
	volatile uint32_t x298 = 0U;
	int32_t x299 = -1;
	int32_t t74 = -3;

    t74 = (x297<=((x298==x299)<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = UINT8_MAX;
	static int8_t x303 = 0;
	volatile int32_t x304 = 273;
	int32_t t75 = 156097235;

    t75 = (x301<=((x302==x303)<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 163508582U;
	int64_t x307 = -1LL;
	static int32_t x308 = INT32_MAX;
	volatile int32_t t76 = -3427104;

    t76 = (x305<=((x306==x307)<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	uint8_t x310 = UINT8_MAX;
	volatile int8_t x311 = INT8_MAX;
	static int8_t x312 = 7;
	static volatile int32_t t77 = 5043;

    t77 = (x309<=((x310==x311)<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x313 = 17U;
	uint16_t x314 = UINT16_MAX;
	static volatile int32_t x315 = INT32_MIN;
	volatile int32_t t78 = -558491672;

    t78 = (x313<=((x314==x315)<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MIN;
	int32_t x319 = -1;
	volatile uint16_t x320 = 5U;
	volatile int32_t t79 = -4;

    t79 = (x317<=((x318==x319)<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x323 = 63U;
	int32_t x324 = INT32_MIN;

    t80 = (x321<=((x322==x323)<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x326 = INT8_MAX;
	int8_t x327 = -2;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t81 = 212;

    t81 = (x325<=((x326==x327)<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x329 = -1;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = -88324684945924430LL;
	volatile int32_t t82 = 6893;

    t82 = (x329<=((x330==x331)<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x333 = INT16_MAX;
	static volatile uint8_t x335 = 1U;
	static int16_t x336 = -1;
	volatile int32_t t83 = 11591;

    t83 = (x333<=((x334==x335)<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 1660LL;
	uint64_t x338 = 532919038244479083LLU;
	int8_t x339 = INT8_MIN;
	int32_t t84 = -282869200;

    t84 = (x337<=((x338==x339)<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = 35;

    t85 = (x341<=((x342==x343)<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 1061U;
	uint16_t x346 = 37U;
	volatile int8_t x347 = INT8_MIN;
	volatile int32_t t86 = -916;

    t86 = (x345<=((x346==x347)<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 1;
	uint16_t x350 = 125U;
	int16_t x351 = -1;
	static int16_t x352 = INT16_MIN;

    t87 = (x349<=((x350==x351)<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = -1LL;
	int32_t x355 = -1;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 10;

    t88 = (x353<=((x354==x355)<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = 23824410797LL;
	uint16_t x358 = 947U;
	static uint64_t x359 = 101514842609705LLU;
	static uint64_t x360 = 1433587LLU;
	volatile int32_t t89 = 6557041;

    t89 = (x357<=((x358==x359)<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = -1;
	uint32_t x362 = 1000525838U;
	int64_t x363 = INT64_MAX;
	int32_t x364 = INT32_MIN;

    t90 = (x361<=((x362==x363)<=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 0;
	int64_t x367 = 154LL;
	int32_t x368 = INT32_MAX;
	static volatile int32_t t91 = 248891;

    t91 = (x365<=((x366==x367)<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	volatile int64_t x370 = INT64_MIN;
	int32_t x371 = 986;
	static volatile int32_t t92 = 12;

    t92 = (x369<=((x370==x371)<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x374 = -19;
	int32_t x375 = 4141;
	int64_t x376 = -40796648091LL;
	static volatile int32_t t93 = -965124532;

    t93 = (x373<=((x374==x375)<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 1455749974666912LLU;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	static int32_t x380 = -1346818;
	volatile int32_t t94 = -1;

    t94 = (x377<=((x378==x379)<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MAX;
	int16_t x383 = -66;
	volatile int32_t t95 = -452922;

    t95 = (x381<=((x382==x383)<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -5;
	uint16_t x386 = 527U;
	static volatile int8_t x387 = INT8_MIN;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 27204;

    t96 = (x385<=((x386==x387)<=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x391 = -773;
	int64_t x392 = 7LL;
	int32_t t97 = -51539;

    t97 = (x389<=((x390==x391)<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = 1;
	int8_t x394 = INT8_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t98 = -5;

    t98 = (x393<=((x394==x395)<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	uint16_t x398 = 45U;
	int64_t x399 = 447684180LL;
	static uint8_t x400 = 2U;
	int32_t t99 = -34273;

    t99 = (x397<=((x398==x399)<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x402 = 5;
	uint8_t x404 = 0U;

    t100 = (x401<=((x402==x403)<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -1;
	int64_t x407 = INT64_MIN;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t101 = -23972822;

    t101 = (x405<=((x406==x407)<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	static uint16_t x410 = UINT16_MAX;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MIN;
	static volatile int32_t t102 = -112;

    t102 = (x409<=((x410==x411)<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = -8726010LL;
	volatile int32_t x414 = -456;
	int64_t x416 = INT64_MAX;
	volatile int32_t t103 = -863027848;

    t103 = (x413<=((x414==x415)<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MAX;
	uint8_t x418 = UINT8_MAX;
	static uint32_t x419 = 946U;
	volatile int8_t x420 = INT8_MIN;
	int32_t t104 = -377;

    t104 = (x417<=((x418==x419)<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -3611;
	volatile int64_t x423 = INT64_MAX;
	static volatile int32_t t105 = 7312;

    t105 = (x421<=((x422==x423)<=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x425 = 1U;
	int64_t x426 = -1LL;
	int8_t x427 = 1;
	static int16_t x428 = INT16_MAX;
	int32_t t106 = -6;

    t106 = (x425<=((x426==x427)<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	int64_t x430 = 1607619266779235LL;
	int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MAX;
	int32_t t107 = -23;

    t107 = (x429<=((x430==x431)<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x433 = -1;
	volatile uint16_t x434 = 27U;
	int64_t x435 = INT64_MAX;
	uint16_t x436 = 1580U;

    t108 = (x433<=((x434==x435)<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 0U;
	static uint8_t x438 = 5U;
	uint8_t x439 = UINT8_MAX;
	volatile int64_t x440 = INT64_MIN;

    t109 = (x437<=((x438==x439)<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	int8_t x442 = 1;
	int8_t x443 = INT8_MAX;
	int8_t x444 = -1;
	volatile int32_t t110 = -8421782;

    t110 = (x441<=((x442==x443)<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x446 = 7U;
	volatile int32_t t111 = -16689579;

    t111 = (x445<=((x446==x447)<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x450 = UINT8_MAX;
	static uint8_t x451 = UINT8_MAX;
	int8_t x452 = INT8_MIN;
	static int32_t t112 = 17335815;

    t112 = (x449<=((x450==x451)<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = UINT16_MAX;
	uint32_t x454 = 30412U;
	uint8_t x455 = UINT8_MAX;
	volatile uint8_t x456 = 24U;
	int32_t t113 = 63884;

    t113 = (x453<=((x454==x455)<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = -24577687135432LL;
	int16_t x459 = 1;
	int32_t t114 = 5;

    t114 = (x457<=((x458==x459)<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -38042850997460LL;
	int8_t x462 = -1;
	int64_t x463 = -1LL;
	static volatile int8_t x464 = INT8_MIN;
	int32_t t115 = -16149185;

    t115 = (x461<=((x462==x463)<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = INT32_MAX;
	volatile int64_t x467 = 170410688LL;
	volatile int32_t t116 = 971459;

    t116 = (x465<=((x466==x467)<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x469 = -1;
	static volatile int8_t x470 = -2;
	static uint64_t x471 = UINT64_MAX;
	int32_t x472 = INT32_MAX;
	static volatile int32_t t117 = 431890452;

    t117 = (x469<=((x470==x471)<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 272U;
	uint8_t x474 = 36U;
	static volatile int8_t x475 = INT8_MIN;
	static int64_t x476 = 2274156LL;

    t118 = (x473<=((x474==x475)<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x479 = INT8_MAX;
	uint16_t x480 = UINT16_MAX;

    t119 = (x477<=((x478==x479)<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = -1;

    t120 = (x481<=((x482==x483)<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MIN;
	uint32_t x486 = UINT32_MAX;
	int16_t x487 = INT16_MIN;

    t121 = (x485<=((x486==x487)<=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -1;
	int8_t x490 = 1;
	int32_t t122 = 14;

    t122 = (x489<=((x490==x491)<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 29U;
	int16_t x494 = INT16_MIN;
	int32_t x496 = INT32_MIN;
	int32_t t123 = 27833927;

    t123 = (x493<=((x494==x495)<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MAX;
	int64_t x498 = INT64_MAX;
	uint64_t x500 = UINT64_MAX;
	static volatile int32_t t124 = 15078569;

    t124 = (x497<=((x498==x499)<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = 1;
	volatile uint16_t x502 = 2U;
	uint8_t x503 = 118U;
	uint32_t x504 = 1U;
	int32_t t125 = 11320887;

    t125 = (x501<=((x502==x503)<=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = -5;
	int16_t x507 = -1;
	int64_t x508 = -548372933383LL;
	int32_t t126 = -351456;

    t126 = (x505<=((x506==x507)<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x510 = -3LL;
	int32_t t127 = 91639487;

    t127 = (x509<=((x510==x511)<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x513 = INT16_MIN;
	int16_t x514 = -1;
	int64_t x516 = -1LL;

    t128 = (x513<=((x514==x515)<=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x517 = 3U;
	int64_t x518 = -1LL;
	int8_t x519 = INT8_MAX;
	volatile int32_t t129 = 434994;

    t129 = (x517<=((x518==x519)<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x521 = UINT64_MAX;
	static int8_t x522 = -1;
	uint64_t x523 = 5281692458518331LLU;
	static int16_t x524 = -7;
	int32_t t130 = 12;

    t130 = (x521<=((x522==x523)<=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = 68054;
	int16_t x526 = INT16_MIN;
	int32_t t131 = 59161789;

    t131 = (x525<=((x526==x527)<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	int32_t x530 = INT32_MIN;
	volatile int8_t x531 = INT8_MIN;
	int32_t t132 = 1065;

    t132 = (x529<=((x530==x531)<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -1LL;
	uint8_t x534 = UINT8_MAX;
	static uint16_t x536 = 13U;
	volatile int32_t t133 = -26988;

    t133 = (x533<=((x534==x535)<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = INT32_MAX;
	int64_t x538 = INT64_MAX;
	static int64_t x540 = -1LL;
	int32_t t134 = -272632044;

    t134 = (x537<=((x538==x539)<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int64_t x542 = INT64_MAX;
	volatile int32_t t135 = 326405;

    t135 = (x541<=((x542==x543)<=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x545 = 1682311038U;
	volatile uint32_t x546 = UINT32_MAX;
	int8_t x548 = INT8_MAX;
	static volatile int32_t t136 = -1;

    t136 = (x545<=((x546==x547)<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	volatile uint64_t x550 = 7430LLU;
	static uint16_t x551 = 1U;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t137 = -10169158;

    t137 = (x549<=((x550==x551)<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	uint64_t x555 = UINT64_MAX;
	uint32_t x556 = 247442U;
	int32_t t138 = 3724;

    t138 = (x553<=((x554==x555)<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 66964750649LLU;
	int32_t x558 = INT32_MIN;
	int16_t x560 = INT16_MIN;
	volatile int32_t t139 = -69;

    t139 = (x557<=((x558==x559)<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = 35U;
	int8_t x563 = 39;

    t140 = (x561<=((x562==x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = -24843946396111004LL;
	uint32_t x567 = 16U;
	int8_t x568 = INT8_MIN;
	static int32_t t141 = 28;

    t141 = (x565<=((x566==x567)<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -55;
	volatile int32_t x570 = INT32_MIN;
	static int64_t x572 = -1LL;
	int32_t t142 = 10211129;

    t142 = (x569<=((x570==x571)<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = INT64_MIN;
	int8_t x575 = -1;
	volatile int8_t x576 = -1;
	volatile int32_t t143 = 499342309;

    t143 = (x573<=((x574==x575)<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x577 = 368572983158LL;
	volatile int64_t x578 = -1LL;
	uint32_t x580 = UINT32_MAX;
	volatile int32_t t144 = 0;

    t144 = (x577<=((x578==x579)<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 1463825LL;
	int32_t x582 = -1;
	int8_t x583 = -1;
	int32_t t145 = 238376908;

    t145 = (x581<=((x582==x583)<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x587 = -1;
	uint8_t x588 = UINT8_MAX;
	volatile int32_t t146 = -10;

    t146 = (x585<=((x586==x587)<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x590 = INT8_MIN;
	uint32_t x591 = 191327894U;
	uint8_t x592 = UINT8_MAX;

    t147 = (x589<=((x590==x591)<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -435969877527LL;
	static uint32_t x594 = UINT32_MAX;
	static int32_t x595 = -237003;
	static uint64_t x596 = 11156821249LLU;
	int32_t t148 = 3;

    t148 = (x593<=((x594==x595)<=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x597 = 2U;
	int32_t x598 = -225;
	int32_t t149 = -32;

    t149 = (x597<=((x598==x599)<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	static int32_t x602 = 1;
	int8_t x604 = 34;
	volatile int32_t t150 = -19366;

    t150 = (x601<=((x602==x603)<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = INT16_MAX;
	static int32_t x607 = INT32_MAX;
	int64_t x608 = -407283LL;
	int32_t t151 = -5900580;

    t151 = (x605<=((x606==x607)<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int8_t x610 = -1;
	uint8_t x611 = UINT8_MAX;
	static uint16_t x612 = 56U;
	static volatile int32_t t152 = 1;

    t152 = (x609<=((x610==x611)<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x615 = -363788767234121701LL;
	int16_t x616 = INT16_MIN;
	int32_t t153 = -11876;

    t153 = (x613<=((x614==x615)<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = INT16_MIN;
	static volatile int64_t x618 = -1LL;
	int8_t x619 = INT8_MIN;

    t154 = (x617<=((x618==x619)<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 0LLU;
	int32_t x622 = INT32_MIN;
	volatile int32_t x623 = INT32_MIN;
	uint32_t x624 = UINT32_MAX;

    t155 = (x621<=((x622==x623)<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = INT64_MAX;
	uint64_t x627 = 3168819677137LLU;
	volatile uint16_t x628 = UINT16_MAX;
	volatile int32_t t156 = -25;

    t156 = (x625<=((x626==x627)<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = 329472;
	int64_t x630 = INT64_MIN;
	int32_t x631 = INT32_MIN;
	static int32_t x632 = -43;
	int32_t t157 = -36973;

    t157 = (x629<=((x630==x631)<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x633 = INT16_MIN;
	int8_t x634 = INT8_MAX;
	static uint8_t x635 = 0U;
	static uint32_t x636 = UINT32_MAX;
	int32_t t158 = -2766466;

    t158 = (x633<=((x634==x635)<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 88U;
	volatile uint64_t x639 = UINT64_MAX;
	int32_t x640 = INT32_MIN;
	int32_t t159 = 64149;

    t159 = (x637<=((x638==x639)<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 4;
	uint64_t x642 = 5169314LLU;
	uint64_t x643 = UINT64_MAX;
	int16_t x644 = INT16_MIN;
	int32_t t160 = -227;

    t160 = (x641<=((x642==x643)<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = 4;
	volatile int32_t x646 = -1;
	static int16_t x647 = -163;
	static int8_t x648 = -3;
	int32_t t161 = 2568406;

    t161 = (x645<=((x646==x647)<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 396U;
	volatile int16_t x650 = -1;
	static int64_t x652 = -2091680497LL;
	static volatile int32_t t162 = 1;

    t162 = (x649<=((x650==x651)<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x653 = UINT16_MAX;
	volatile int64_t x654 = INT64_MAX;
	uint32_t x655 = 22U;
	int16_t x656 = INT16_MAX;
	int32_t t163 = 1;

    t163 = (x653<=((x654==x655)<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x658 = INT16_MAX;
	int32_t x659 = INT32_MIN;
	static volatile int32_t t164 = -639071;

    t164 = (x657<=((x658==x659)<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = UINT64_MAX;
	volatile int64_t x662 = -1LL;
	uint16_t x663 = 1861U;
	int8_t x664 = INT8_MIN;
	volatile int32_t t165 = 85;

    t165 = (x661<=((x662==x663)<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = -1;
	static volatile int8_t x666 = -1;
	int8_t x667 = INT8_MIN;
	volatile int64_t x668 = INT64_MIN;
	volatile int32_t t166 = -1867834;

    t166 = (x665<=((x666==x667)<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int64_t x670 = -1LL;
	int32_t x671 = INT32_MIN;
	uint8_t x672 = 13U;
	int32_t t167 = -1;

    t167 = (x669<=((x670==x671)<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint64_t x673 = 502956591475339581LLU;
	static uint64_t x674 = 766199659270LLU;
	static int16_t x675 = -4545;
	volatile int32_t t168 = 648625280;

    t168 = (x673<=((x674==x675)<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = 309080674634994639LL;
	volatile int32_t x678 = INT32_MAX;
	int32_t x679 = -1;
	int16_t x680 = 0;

    t169 = (x677<=((x678==x679)<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 15U;
	int64_t x682 = INT64_MIN;
	int32_t x684 = INT32_MIN;

    t170 = (x681<=((x682==x683)<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = INT32_MIN;
	int16_t x688 = 73;
	int32_t t171 = 15916;

    t171 = (x685<=((x686==x687)<=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 24482LLU;
	int16_t x690 = 1046;
	static int8_t x691 = 61;
	int32_t x692 = 205401;
	volatile int32_t t172 = -23;

    t172 = (x689<=((x690==x691)<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = -28;
	static int64_t x695 = -32005LL;
	int64_t x696 = INT64_MAX;

    t173 = (x693<=((x694==x695)<=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = 101U;
	static int8_t x700 = -3;

    t174 = (x697<=((x698==x699)<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = INT64_MIN;
	static int16_t x703 = -1;
	int32_t x704 = 17217291;
	int32_t t175 = 0;

    t175 = (x701<=((x702==x703)<=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x706 = 353171131699726825LLU;
	uint16_t x707 = 1892U;
	int32_t x708 = INT32_MIN;

    t176 = (x705<=((x706==x707)<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	int16_t x710 = INT16_MIN;
	static int8_t x711 = INT8_MIN;
	static uint64_t x712 = 34582LLU;
	int32_t t177 = -2064517;

    t177 = (x709<=((x710==x711)<=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 3812U;
	static int32_t x714 = INT32_MIN;
	int32_t x715 = -677703;
	uint8_t x716 = 81U;
	volatile int32_t t178 = -11069;

    t178 = (x713<=((x714==x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 1U;
	int64_t x718 = INT64_MIN;
	int16_t x719 = INT16_MAX;
	int32_t t179 = -873750;

    t179 = (x717<=((x718==x719)<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -1LL;
	int32_t x722 = 305234559;
	int32_t x723 = 0;
	int32_t x724 = INT32_MAX;
	int32_t t180 = 13;

    t180 = (x721<=((x722==x723)<=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = -1;
	int8_t x726 = -1;
	uint64_t x728 = UINT64_MAX;
	static int32_t t181 = 0;

    t181 = (x725<=((x726==x727)<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	static volatile int8_t x730 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	int32_t t182 = 1010;

    t182 = (x729<=((x730==x731)<=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MIN;
	int32_t x734 = INT32_MIN;
	int64_t x735 = -1391394566513504823LL;
	int32_t t183 = -316;

    t183 = (x733<=((x734==x735)<=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = UINT16_MAX;
	volatile uint8_t x738 = 0U;
	uint32_t x739 = UINT32_MAX;
	volatile uint8_t x740 = UINT8_MAX;
	static int32_t t184 = -844152064;

    t184 = (x737<=((x738==x739)<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	int32_t x742 = INT32_MAX;
	int8_t x744 = 1;

    t185 = (x741<=((x742==x743)<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MAX;
	uint8_t x746 = 22U;
	uint16_t x747 = 23914U;
	volatile int16_t x748 = 4510;

    t186 = (x745<=((x746==x747)<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = 0;
	int64_t x750 = INT64_MIN;
	uint32_t x751 = 3U;
	uint8_t x752 = 0U;
	volatile int32_t t187 = 6836433;

    t187 = (x749<=((x750==x751)<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = INT8_MIN;
	uint8_t x755 = UINT8_MAX;
	volatile int16_t x756 = INT16_MAX;
	int32_t t188 = 1308611;

    t188 = (x753<=((x754==x755)<=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = INT32_MIN;
	int16_t x758 = INT16_MIN;
	static int32_t x759 = -1;
	int64_t x760 = -623330260LL;
	volatile int32_t t189 = 360575790;

    t189 = (x757<=((x758==x759)<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	int16_t x762 = INT16_MAX;
	static volatile uint16_t x763 = 8053U;
	static int32_t t190 = -49230009;

    t190 = (x761<=((x762==x763)<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = -1;
	int8_t x766 = INT8_MIN;
	uint16_t x767 = 803U;
	static int32_t x768 = INT32_MIN;
	int32_t t191 = 27;

    t191 = (x765<=((x766==x767)<=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x770 = 2833301732147LLU;
	static int32_t x772 = INT32_MIN;
	static int32_t t192 = 1;

    t192 = (x769<=((x770==x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x774 = 12U;
	int16_t x775 = -1;
	volatile int32_t t193 = 21444951;

    t193 = (x773<=((x774==x775)<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -1;
	volatile int64_t x778 = -10407129441LL;
	uint8_t x779 = UINT8_MAX;
	volatile int32_t x780 = -1;
	int32_t t194 = 235960992;

    t194 = (x777<=((x778==x779)<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -256616940682199LL;
	static int16_t x782 = INT16_MAX;
	int8_t x783 = INT8_MAX;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t195 = -19722001;

    t195 = (x781<=((x782==x783)<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	static volatile uint8_t x786 = 28U;
	int16_t x787 = -2711;
	uint32_t x788 = UINT32_MAX;
	static int32_t t196 = -10615614;

    t196 = (x785<=((x786==x787)<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = -1LL;
	int16_t x790 = INT16_MIN;
	static int32_t x791 = -1;
	static volatile int32_t t197 = 0;

    t197 = (x789<=((x790==x791)<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = -1;
	uint64_t x795 = UINT64_MAX;
	volatile int8_t x796 = -3;
	volatile int32_t t198 = 37817;

    t198 = (x793<=((x794==x795)<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = -13;
	int64_t x798 = -1LL;
	int8_t x799 = 3;
	uint16_t x800 = 1U;
	volatile int32_t t199 = -18084104;

    t199 = (x797<=((x798==x799)<=x800));

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

