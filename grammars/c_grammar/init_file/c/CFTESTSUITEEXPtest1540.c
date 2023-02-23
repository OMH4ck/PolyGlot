
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

uint16_t x9 = 1U;
uint16_t x11 = 0U;
int16_t x13 = 3;
static int64_t x15 = INT64_MAX;
uint64_t x17 = UINT64_MAX;
volatile uint64_t t4 = UINT64_MAX;
static uint8_t x21 = 110U;
int32_t x24 = -1;
static int16_t x28 = -1;
uint16_t x33 = UINT16_MAX;
int32_t x34 = INT32_MIN;
uint16_t x35 = 41U;
uint32_t t9 = 27305899U;
uint32_t x41 = 204U;
int16_t x42 = 29;
int8_t x44 = -6;
static int64_t x45 = -1LL;
int64_t x46 = INT64_MAX;
int16_t x55 = INT16_MIN;
int8_t x57 = INT8_MIN;
uint64_t x66 = 14081499222LLU;
volatile int32_t t16 = 2;
static int32_t x70 = 81107893;
int64_t t17 = -1214849256453467LL;
static int64_t x73 = -1LL;
int8_t x77 = INT8_MAX;
uint64_t x78 = UINT64_MAX;
static int8_t x79 = -2;
int32_t x82 = -1;
uint32_t x83 = 383534584U;
int16_t x90 = -22;
int64_t x93 = 1LL;
volatile uint64_t x102 = UINT64_MAX;
uint64_t x103 = UINT64_MAX;
uint8_t x105 = 21U;
uint8_t x122 = 0U;
uint64_t t30 = 10LLU;
static int16_t x128 = INT16_MIN;
int8_t x131 = INT8_MIN;
volatile uint32_t t32 = UINT32_MAX;
int32_t t36 = -15;
int8_t x149 = -1;
uint32_t x157 = UINT32_MAX;
int32_t x158 = INT32_MIN;
uint32_t x161 = 3U;
uint8_t x162 = 9U;
int16_t x164 = -1;
volatile uint32_t t40 = 5314U;
static int32_t t41 = -1;
static uint64_t x169 = UINT64_MAX;
int16_t x174 = -1;
int16_t x177 = 0;
int32_t x178 = INT32_MIN;
int64_t x179 = -1LL;
uint16_t x198 = 17U;
int8_t x199 = INT8_MAX;
static volatile int64_t x204 = INT64_MAX;
int64_t x210 = INT64_MIN;
int32_t x211 = -1;
volatile uint32_t x217 = 206203U;
int64_t x219 = -1LL;
static int8_t x224 = -31;
int32_t t55 = 487599823;
int8_t x225 = INT8_MAX;
volatile int32_t t56 = -475214798;
int64_t t58 = 75488320LL;
static int32_t x242 = INT32_MAX;
int32_t t61 = 241;
static volatile uint16_t x251 = 126U;
volatile uint64_t t62 = UINT64_MAX;
volatile int32_t t64 = 59;
int32_t x263 = INT32_MAX;
uint16_t x265 = 670U;
int64_t t66 = -1086806856LL;
volatile int32_t x271 = -30714;
int32_t x277 = INT32_MIN;
int64_t x279 = -1LL;
int8_t x281 = 0;
int32_t t73 = 20519521;
int8_t x298 = INT8_MAX;
volatile uint64_t t74 = 9765LLU;
volatile uint64_t x304 = 24096202LLU;
int64_t x310 = 823012456LL;
uint64_t t81 = UINT64_MAX;
int32_t x332 = 0;
static int32_t t82 = -96598;
volatile int8_t x333 = INT8_MIN;
uint16_t x336 = UINT16_MAX;
int32_t t85 = -7;
int8_t x348 = -1;
uint64_t x349 = UINT64_MAX;
volatile int32_t t88 = -35999833;
static int8_t x357 = -16;
int16_t x358 = INT16_MIN;
static int16_t x369 = -1;
volatile uint64_t t92 = UINT64_MAX;
int32_t x373 = -6;
uint32_t x377 = UINT32_MAX;
static int32_t x379 = INT32_MAX;
int32_t x381 = 7;
int32_t x385 = -1;
int8_t x393 = INT8_MAX;
static int64_t x403 = -9601986263127LL;
volatile int8_t x404 = 1;
static volatile int32_t t101 = 151;
static uint64_t x411 = 9913026301LLU;
uint64_t t102 = 2516449135LLU;
static int32_t x415 = INT32_MIN;
volatile int64_t t105 = -29909744919086898LL;
int16_t x425 = INT16_MIN;
int8_t x426 = INT8_MIN;
static volatile uint32_t x427 = 20U;
static uint32_t x429 = 1879676699U;
int8_t x432 = -1;
volatile uint32_t t107 = 115U;
int16_t x433 = 0;
volatile int32_t x437 = INT32_MAX;
int16_t x439 = INT16_MIN;
int8_t x458 = 2;
uint64_t x459 = 151625744LLU;
int32_t x462 = -4095;
int16_t x464 = -36;
int64_t x478 = 248813087022LL;
uint8_t x479 = 77U;
volatile uint64_t t120 = UINT64_MAX;
static volatile uint64_t x488 = 720380926793693LLU;
int64_t x489 = INT64_MIN;
volatile uint16_t x492 = 54U;
int8_t x496 = -13;
static int32_t t123 = 81;
uint64_t x502 = 22LLU;
volatile uint32_t t126 = 967018U;
int32_t t127 = 11;
uint16_t x514 = UINT16_MAX;
int64_t x518 = -1LL;
int32_t x519 = -472;
static volatile uint8_t x524 = 0U;
uint32_t t131 = 47055U;
static volatile int64_t t132 = INT64_MIN;
static int8_t x539 = -1;
int64_t x546 = INT64_MIN;
static volatile int8_t x549 = INT8_MIN;
uint64_t x550 = UINT64_MAX;
int32_t t138 = -167693;
int8_t x565 = INT8_MIN;
uint16_t x569 = UINT16_MAX;
volatile int32_t t144 = -6;
static int8_t x585 = -1;
int32_t x588 = INT32_MIN;
int32_t x590 = 1;
int32_t t149 = -81;
volatile int32_t x602 = -1;
static volatile int8_t x605 = 1;
int32_t t155 = -23;
volatile int32_t t156 = 3327;
uint16_t x629 = 19U;
volatile int16_t x630 = INT16_MAX;
int32_t x636 = 26;
static int16_t x643 = INT16_MIN;
uint64_t x646 = 448LLU;
volatile int8_t x647 = 13;
volatile int8_t x648 = -1;
volatile int32_t x653 = -10063453;
int16_t x656 = INT16_MIN;
volatile int32_t t163 = -854890825;
int64_t x659 = INT64_MAX;
int64_t x663 = INT64_MAX;
static int64_t x665 = 112LL;
int32_t x674 = INT32_MAX;
int8_t x675 = -1;
uint16_t x677 = UINT16_MAX;
int8_t x679 = INT8_MIN;
uint32_t x680 = 142U;
int8_t x681 = -1;
int32_t x685 = -25959;
int16_t x686 = -1;
static volatile uint16_t x687 = 8293U;
uint16_t x691 = 142U;
int64_t x697 = INT64_MIN;
uint64_t x703 = 507497941423LLU;
int16_t x704 = -5742;
uint64_t x717 = UINT64_MAX;
int8_t x718 = -1;
static int8_t x721 = INT8_MIN;
int8_t x727 = 39;
volatile int32_t t181 = -207;
int16_t x734 = INT16_MIN;
int32_t x741 = -96768764;
int64_t t185 = 6534514847125418LL;
uint8_t x746 = UINT8_MAX;
uint8_t x755 = 0U;
uint32_t t190 = 506364046U;
static int16_t x766 = -7;
int8_t x767 = INT8_MIN;
volatile uint64_t t192 = 264528260035LLU;
int64_t x773 = -1LL;
static volatile int64_t x774 = INT64_MAX;
int64_t x777 = -2336185LL;
volatile int64_t x780 = INT64_MAX;
int32_t x787 = 10286392;
int32_t x788 = 5705531;
volatile int64_t x796 = -1LL;
static int16_t x797 = 23;


void f0(void) {
    	int16_t x1 = 963;
	int8_t x2 = INT8_MIN;
	static int32_t x3 = INT32_MIN;
	static volatile uint8_t x4 = 0U;
	int32_t t0 = 84101;

    t0 = (x1^((x2==x3)&x4));

    if (t0 != 963) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 734LL;
	uint64_t x6 = 74888LLU;
	int32_t x7 = 238065677;
	uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = -2203LL;

    t1 = (x5^((x6==x7)&x8));

    if (t1 != 734LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x10 = 2U;
	static int32_t x12 = INT32_MAX;
	int32_t t2 = -7;

    t2 = (x9^((x10==x11)&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x14 = 32U;
	volatile uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 977502779035580275LLU;

    t3 = (x13^((x14==x15)&x16));

    if (t3 != 3LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 641U;
	static uint64_t x19 = UINT64_MAX;
	int32_t x20 = INT32_MAX;

    t4 = (x17^((x18==x19)&x20));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = 0;
	uint16_t x23 = UINT16_MAX;
	static int32_t t5 = -34815512;

    t5 = (x21^((x22==x23)&x24));

    if (t5 != 110) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	uint64_t x26 = 757LLU;
	static int32_t x27 = -40500647;
	int32_t t6 = 54550;

    t6 = (x25^((x26==x27)&x28));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 87;
	uint64_t x30 = 976LLU;
	int8_t x31 = INT8_MIN;
	static uint16_t x32 = UINT16_MAX;
	int32_t t7 = 307108251;

    t7 = (x29^((x30==x31)&x32));

    if (t7 != 87) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x36 = -1;
	static volatile int32_t t8 = -48173233;

    t8 = (x33^((x34==x35)&x36));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x37 = 3812U;
	int32_t x38 = INT32_MAX;
	volatile uint16_t x39 = 22U;
	volatile uint8_t x40 = 18U;

    t9 = (x37^((x38==x39)&x40));

    if (t9 != 3812U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x43 = -1;
	uint32_t t10 = 1663U;

    t10 = (x41^((x42==x43)&x44));

    if (t10 != 204U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x47 = -172LL;
	int32_t x48 = INT32_MAX;
	int64_t t11 = 6264LL;

    t11 = (x45^((x46==x47)&x48));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 2452U;
	volatile int16_t x50 = INT16_MIN;
	int64_t x51 = 2221993385234274LL;
	int32_t x52 = -22588;
	static uint32_t t12 = 2048549041U;

    t12 = (x49^((x50==x51)&x52));

    if (t12 != 2452U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 7471;
	static uint32_t x54 = UINT32_MAX;
	static int64_t x56 = INT64_MAX;
	volatile int64_t t13 = 827394725807LL;

    t13 = (x53^((x54==x55)&x56));

    if (t13 != 7471LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x58 = UINT32_MAX;
	volatile int16_t x59 = INT16_MAX;
	int16_t x60 = -4119;
	int32_t t14 = 11031;

    t14 = (x57^((x58==x59)&x60));

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = INT16_MIN;
	volatile int64_t x62 = -2956LL;
	uint16_t x63 = 12U;
	static uint16_t x64 = 0U;
	int32_t t15 = -2;

    t15 = (x61^((x62==x63)&x64));

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	int64_t x67 = -734422764504LL;
	uint8_t x68 = 4U;

    t16 = (x65^((x66==x67)&x68));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 11489U;
	volatile int64_t x71 = -27721LL;
	int64_t x72 = -2608269791469LL;

    t17 = (x69^((x70==x71)&x72));

    if (t17 != 11489LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x74 = -1977;
	volatile int8_t x75 = -54;
	uint16_t x76 = 1353U;
	static int64_t t18 = -10720LL;

    t18 = (x73^((x74==x75)&x76));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x80 = INT16_MIN;
	static volatile int32_t t19 = -5734129;

    t19 = (x77^((x78==x79)&x80));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	uint8_t x84 = 0U;
	volatile int32_t t20 = 98;

    t20 = (x81^((x82==x83)&x84));

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 2404481634055796LLU;
	int32_t x86 = INT32_MIN;
	static int8_t x87 = INT8_MAX;
	volatile int16_t x88 = INT16_MIN;
	uint64_t t21 = 60293813041591LLU;

    t21 = (x85^((x86==x87)&x88));

    if (t21 != 2404481634055796LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = 5;
	static int64_t x91 = INT64_MIN;
	volatile int32_t x92 = -1;
	int32_t t22 = -682200;

    t22 = (x89^((x90==x91)&x92));

    if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = 1;
	static uint16_t x95 = UINT16_MAX;
	static uint8_t x96 = 1U;
	static volatile int64_t t23 = 5LL;

    t23 = (x93^((x94==x95)&x96));

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = INT16_MIN;
	int8_t x98 = -47;
	uint64_t x99 = 3527379LLU;
	int64_t x100 = INT64_MAX;
	int64_t t24 = -569039LL;

    t24 = (x97^((x98==x99)&x100));

    if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MIN;
	int64_t x104 = -1LL;
	int64_t t25 = -43840060078941960LL;

    t25 = (x101^((x102==x103)&x104));

    if (t25 != -2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x106 = 219U;
	int16_t x107 = 0;
	uint16_t x108 = 352U;
	int32_t t26 = 421330009;

    t26 = (x105^((x106==x107)&x108));

    if (t26 != 21) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 13U;
	int32_t x110 = INT32_MIN;
	static int8_t x111 = INT8_MIN;
	static int32_t x112 = INT32_MAX;
	volatile uint32_t t27 = 32464U;

    t27 = (x109^((x110==x111)&x112));

    if (t27 != 13U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = 106U;
	static int16_t x114 = INT16_MIN;
	int8_t x115 = -53;
	uint64_t x116 = 396584LLU;
	volatile uint64_t t28 = 606094151364758881LLU;

    t28 = (x113^((x114==x115)&x116));

    if (t28 != 106LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -7836829;
	static volatile int16_t x118 = INT16_MAX;
	uint32_t x119 = UINT32_MAX;
	uint32_t x120 = 14U;
	uint32_t t29 = 4538U;

    t29 = (x117^((x118==x119)&x120));

    if (t29 != 4287130467U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int64_t x123 = 18930833715460LL;
	uint64_t x124 = 5227028LLU;

    t30 = (x121^((x122==x123)&x124));

    if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = -1;
	static int32_t x126 = INT32_MIN;
	static uint64_t x127 = 36054LLU;
	volatile int32_t t31 = 116405730;

    t31 = (x125^((x126==x127)&x128));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = UINT32_MAX;
	uint16_t x130 = UINT16_MAX;
	static int32_t x132 = -1;

    t32 = (x129^((x130==x131)&x132));

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -5;
	uint16_t x134 = 15001U;
	static volatile int32_t x135 = 1573;
	volatile uint8_t x136 = 5U;
	volatile int32_t t33 = 7395;

    t33 = (x133^((x134==x135)&x136));

    if (t33 != -5) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = -1LL;
	static int32_t x138 = -1;
	int16_t x139 = INT16_MAX;
	int16_t x140 = -1;
	int64_t t34 = 1385153759337430273LL;

    t34 = (x137^((x138==x139)&x140));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	volatile int64_t x142 = INT64_MIN;
	volatile uint8_t x143 = 1U;
	int16_t x144 = -1;
	volatile int32_t t35 = INT32_MIN;

    t35 = (x141^((x142==x143)&x144));

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 1926;
	int32_t x146 = -449;
	uint16_t x147 = UINT16_MAX;
	static uint16_t x148 = 735U;

    t36 = (x145^((x146==x147)&x148));

    if (t36 != 1926) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x150 = 327935603002806551LLU;
	uint16_t x151 = 1596U;
	static int16_t x152 = -108;
	int32_t t37 = 10115;

    t37 = (x149^((x150==x151)&x152));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -1598559;
	uint16_t x154 = 12851U;
	volatile int16_t x155 = 69;
	int8_t x156 = INT8_MAX;
	volatile int32_t t38 = -594;

    t38 = (x153^((x154==x155)&x156));

    if (t38 != -1598559) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x159 = INT64_MAX;
	volatile int64_t x160 = INT64_MAX;
	int64_t t39 = -20302952924568LL;

    t39 = (x157^((x158==x159)&x160));

    if (t39 != 4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x163 = -7;

    t40 = (x161^((x162==x163)&x164));

    if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	uint16_t x166 = UINT16_MAX;
	static int64_t x167 = INT64_MIN;
	static int16_t x168 = -1;

    t41 = (x165^((x166==x167)&x168));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = INT32_MIN;
	volatile int32_t x171 = INT32_MIN;
	static uint16_t x172 = 56U;
	static volatile uint64_t t42 = UINT64_MAX;

    t42 = (x169^((x170==x171)&x172));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 323U;
	static int8_t x175 = -16;
	volatile uint16_t x176 = 405U;
	volatile int32_t t43 = 79610926;

    t43 = (x173^((x174==x175)&x176));

    if (t43 != 323) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x180 = 1275;
	volatile int32_t t44 = 43165;

    t44 = (x177^((x178==x179)&x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 7;
	int32_t x182 = INT32_MAX;
	uint32_t x183 = UINT32_MAX;
	static int32_t x184 = INT32_MAX;
	volatile int32_t t45 = 93510785;

    t45 = (x181^((x182==x183)&x184));

    if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x185 = UINT8_MAX;
	static int64_t x186 = INT64_MIN;
	int16_t x187 = 5;
	uint8_t x188 = 62U;
	volatile int32_t t46 = -17;

    t46 = (x185^((x186==x187)&x188));

    if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	static int64_t x190 = 8627161850606LL;
	int16_t x191 = INT16_MAX;
	int8_t x192 = -1;
	int32_t t47 = -16387013;

    t47 = (x189^((x190==x191)&x192));

    if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 198U;
	static uint16_t x194 = 0U;
	uint64_t x195 = 6151LLU;
	uint16_t x196 = 12658U;
	int32_t t48 = 1;

    t48 = (x193^((x194==x195)&x196));

    if (t48 != 198) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 414U;
	int16_t x200 = INT16_MAX;
	static int32_t t49 = 25794033;

    t49 = (x197^((x198==x199)&x200));

    if (t49 != 414) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 55LLU;
	int8_t x202 = -1;
	uint8_t x203 = UINT8_MAX;
	static volatile uint64_t t50 = 93LLU;

    t50 = (x201^((x202==x203)&x204));

    if (t50 != 55LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 216LLU;
	volatile int8_t x206 = INT8_MAX;
	static int16_t x207 = INT16_MIN;
	uint32_t x208 = 4U;
	uint64_t t51 = 282406LLU;

    t51 = (x205^((x206==x207)&x208));

    if (t51 != 216LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -189940LL;
	int64_t x212 = INT64_MIN;
	int64_t t52 = -1LL;

    t52 = (x209^((x210==x211)&x212));

    if (t52 != -189940LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x213 = INT8_MIN;
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = INT16_MIN;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -583134820;

    t53 = (x213^((x214==x215)&x216));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x218 = 25U;
	static int8_t x220 = -1;
	static volatile uint32_t t54 = 429639349U;

    t54 = (x217^((x218==x219)&x220));

    if (t54 != 206203U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x221 = 2U;
	static int32_t x222 = INT32_MIN;
	static uint8_t x223 = UINT8_MAX;

    t55 = (x221^((x222==x223)&x224));

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x226 = INT16_MAX;
	uint16_t x227 = 524U;
	volatile int8_t x228 = -1;

    t56 = (x225^((x226==x227)&x228));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x229 = INT64_MAX;
	volatile int16_t x230 = 871;
	int32_t x231 = -42257;
	int64_t x232 = -1LL;
	volatile int64_t t57 = INT64_MAX;

    t57 = (x229^((x230==x231)&x232));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	static uint8_t x234 = 58U;
	volatile int64_t x235 = -3651907LL;
	int64_t x236 = 17943LL;

    t58 = (x233^((x234==x235)&x236));

    if (t58 != 65535LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 0U;
	int64_t x238 = 12462527LL;
	static int64_t x239 = INT64_MIN;
	volatile int8_t x240 = INT8_MIN;
	static volatile uint32_t t59 = 26632U;

    t59 = (x237^((x238==x239)&x240));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x241 = 1U;
	static uint16_t x243 = UINT16_MAX;
	uint16_t x244 = 1U;
	static uint32_t t60 = 3U;

    t60 = (x241^((x242==x243)&x244));

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x245 = INT8_MIN;
	uint16_t x246 = 5455U;
	int64_t x247 = -97269804LL;
	volatile int32_t x248 = -69807;

    t61 = (x245^((x246==x247)&x248));

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = UINT64_MAX;
	uint32_t x250 = UINT32_MAX;
	int32_t x252 = -1;

    t62 = (x249^((x250==x251)&x252));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	volatile int16_t x254 = INT16_MAX;
	int32_t x255 = -1;
	int64_t x256 = 2LL;
	int64_t t63 = -9198436511LL;

    t63 = (x253^((x254==x255)&x256));

    if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -2496544;
	static int16_t x258 = INT16_MAX;
	static int64_t x259 = INT64_MAX;
	static uint16_t x260 = 0U;

    t64 = (x257^((x258==x259)&x260));

    if (t64 != -2496544) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	volatile int64_t x262 = -1LL;
	int64_t x264 = 15078LL;
	static volatile int64_t t65 = -10925545612962LL;

    t65 = (x261^((x262==x263)&x264));

    if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = INT16_MIN;
	uint8_t x267 = 15U;
	static int64_t x268 = 13042560LL;

    t66 = (x265^((x266==x267)&x268));

    if (t66 != 670LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 27U;
	volatile int8_t x270 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 646226059;

    t67 = (x269^((x270==x271)&x272));

    if (t67 != 27) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = -1;
	int64_t x274 = INT64_MAX;
	uint64_t x275 = 81590355LLU;
	int8_t x276 = -1;
	int32_t t68 = -296;

    t68 = (x273^((x274==x275)&x276));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x278 = -1;
	uint8_t x280 = UINT8_MAX;
	int32_t t69 = 4;

    t69 = (x277^((x278==x279)&x280));

    if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = INT64_MIN;
	uint16_t x283 = 98U;
	int16_t x284 = 1;
	int32_t t70 = 401229;

    t70 = (x281^((x282==x283)&x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x285 = 3957U;
	static volatile uint64_t x286 = 1162894681412377034LLU;
	uint32_t x287 = 296U;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 105084;

    t71 = (x285^((x286==x287)&x288));

    if (t71 != 3957) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	static int32_t x290 = INT32_MAX;
	static volatile int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t72 = 2;

    t72 = (x289^((x290==x291)&x292));

    if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 4647U;
	static volatile int32_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	int16_t x296 = -1;

    t73 = (x293^((x294==x295)&x296));

    if (t73 != 4647) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint64_t x297 = 49623305748LLU;
	int8_t x299 = -1;
	int64_t x300 = 94882447426202724LL;

    t74 = (x297^((x298==x299)&x300));

    if (t74 != 49623305748LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x301 = UINT8_MAX;
	static int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	volatile uint64_t t75 = 332479995050485206LLU;

    t75 = (x301^((x302==x303)&x304));

    if (t75 != 255LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	uint32_t x306 = 2844U;
	int16_t x307 = -1;
	static volatile int16_t x308 = INT16_MIN;
	static int64_t t76 = INT64_MIN;

    t76 = (x305^((x306==x307)&x308));

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 17305824002413965LLU;
	uint16_t x311 = 26U;
	int64_t x312 = INT64_MIN;
	static uint64_t t77 = 13405186873886754LLU;

    t77 = (x309^((x310==x311)&x312));

    if (t77 != 17305824002413965LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = -1;
	int64_t x314 = INT64_MAX;
	int32_t x315 = INT32_MIN;
	static uint8_t x316 = 6U;
	int32_t t78 = -846;

    t78 = (x313^((x314==x315)&x316));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	int8_t x318 = 11;
	volatile int64_t x319 = -9355108718LL;
	int32_t x320 = INT32_MAX;
	static volatile int32_t t79 = 4009;

    t79 = (x317^((x318==x319)&x320));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 8LLU;
	int32_t x322 = INT32_MAX;
	uint64_t x323 = UINT64_MAX;
	uint64_t x324 = 43519211517725LLU;
	uint64_t t80 = 498944347354336LLU;

    t80 = (x321^((x322==x323)&x324));

    if (t80 != 8LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	int64_t x326 = -1LL;
	uint32_t x327 = 804U;
	int8_t x328 = INT8_MIN;

    t81 = (x325^((x326==x327)&x328));

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = -6987;
	static volatile int8_t x330 = INT8_MIN;
	int32_t x331 = -1890;

    t82 = (x329^((x330==x331)&x332));

    if (t82 != -6987) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	volatile int32_t t83 = 6821;

    t83 = (x333^((x334==x335)&x336));

    if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	uint32_t x338 = 8084U;
	int64_t x339 = INT64_MIN;
	int8_t x340 = 3;
	int32_t t84 = INT32_MAX;

    t84 = (x337^((x338==x339)&x340));

    if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x341 = INT16_MIN;
	static int8_t x342 = -1;
	int32_t x343 = -1;
	int32_t x344 = 51340;

    t85 = (x341^((x342==x343)&x344));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	volatile int64_t x346 = -1346602858LL;
	static uint32_t x347 = 131146555U;
	volatile int32_t t86 = -52;

    t86 = (x345^((x346==x347)&x348));

    if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x350 = 19169U;
	volatile int64_t x351 = INT64_MIN;
	static uint16_t x352 = 41U;
	uint64_t t87 = UINT64_MAX;

    t87 = (x349^((x350==x351)&x352));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 5U;
	int64_t x354 = INT64_MIN;
	static volatile int32_t x355 = INT32_MIN;
	int16_t x356 = -1340;

    t88 = (x353^((x354==x355)&x356));

    if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x359 = INT8_MAX;
	int16_t x360 = -1;
	volatile int32_t t89 = -69;

    t89 = (x357^((x358==x359)&x360));

    if (t89 != -16) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = 8;
	uint8_t x362 = UINT8_MAX;
	int32_t x363 = INT32_MIN;
	int64_t x364 = -1LL;
	static volatile int64_t t90 = -10547022LL;

    t90 = (x361^((x362==x363)&x364));

    if (t90 != 8LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint32_t x365 = 582311U;
	static uint64_t x366 = 4240897542969007LLU;
	static volatile uint8_t x367 = 11U;
	uint16_t x368 = 33U;
	volatile uint32_t t91 = 3135U;

    t91 = (x365^((x366==x367)&x368));

    if (t91 != 582311U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x370 = 10U;
	int8_t x371 = 2;
	uint64_t x372 = UINT64_MAX;

    t92 = (x369^((x370==x371)&x372));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x374 = INT64_MAX;
	volatile int16_t x375 = -7;
	uint32_t x376 = 281331121U;
	volatile uint32_t t93 = 141846U;

    t93 = (x373^((x374==x375)&x376));

    if (t93 != 4294967290U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x378 = 0;
	static volatile int64_t x380 = INT64_MAX;
	int64_t t94 = -1546275LL;

    t94 = (x377^((x378==x379)&x380));

    if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x382 = -1;
	int32_t x383 = INT32_MIN;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -677268708;

    t95 = (x381^((x382==x383)&x384));

    if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x386 = 10524396086947009LLU;
	uint64_t x387 = 445705226520122649LLU;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = -67;

    t96 = (x385^((x386==x387)&x388));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = 6;
	int16_t x390 = INT16_MIN;
	int16_t x391 = -2817;
	int16_t x392 = INT16_MIN;
	int32_t t97 = 3838456;

    t97 = (x389^((x390==x391)&x392));

    if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = 1296U;
	uint16_t x395 = 133U;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = 387431081;

    t98 = (x393^((x394==x395)&x396));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = INT16_MIN;
	int64_t x398 = INT64_MAX;
	int16_t x399 = INT16_MIN;
	int64_t x400 = 681342LL;
	int64_t t99 = 697LL;

    t99 = (x397^((x398==x399)&x400));

    if (t99 != -32768LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	volatile uint8_t x402 = 0U;
	int32_t t100 = INT32_MIN;

    t100 = (x401^((x402==x403)&x404));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = 62;
	int32_t x406 = -47982;
	volatile uint8_t x407 = UINT8_MAX;
	volatile uint8_t x408 = UINT8_MAX;

    t101 = (x405^((x406==x407)&x408));

    if (t101 != 62) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x409 = UINT16_MAX;
	int32_t x410 = INT32_MIN;
	uint64_t x412 = 214338134443297LLU;

    t102 = (x409^((x410==x411)&x412));

    if (t102 != 65535LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x413 = 4U;
	uint8_t x414 = 98U;
	uint64_t x416 = UINT64_MAX;
	uint64_t t103 = 50557486LLU;

    t103 = (x413^((x414==x415)&x416));

    if (t103 != 4LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	uint64_t x418 = 1188760916324LLU;
	volatile int16_t x419 = INT16_MIN;
	uint64_t x420 = 1313944116LLU;
	volatile uint64_t t104 = UINT64_MAX;

    t104 = (x417^((x418==x419)&x420));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	volatile int64_t x422 = INT64_MIN;
	static int32_t x423 = INT32_MAX;
	uint32_t x424 = 136612443U;

    t105 = (x421^((x422==x423)&x424));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x428 = 576616U;
	volatile uint32_t t106 = 33229099U;

    t106 = (x425^((x426==x427)&x428));

    if (t106 != 4294934528U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x430 = UINT16_MAX;
	uint8_t x431 = 19U;

    t107 = (x429^((x430==x431)&x432));

    if (t107 != 1879676699U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = INT16_MIN;
	int32_t x435 = -32503278;
	int32_t x436 = -1;
	volatile int32_t t108 = -87385882;

    t108 = (x433^((x434==x435)&x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 11LLU;
	int64_t x440 = -27838881331577289LL;
	volatile int64_t t109 = 3600652939LL;

    t109 = (x437^((x438==x439)&x440));

    if (t109 != 2147483647LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MIN;
	static uint16_t x442 = 3U;
	int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MIN;
	volatile int32_t t110 = 71577;

    t110 = (x441^((x442==x443)&x444));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x445 = -26;
	volatile int64_t x446 = INT64_MIN;
	static volatile uint8_t x447 = 17U;
	int64_t x448 = 127032837553625LL;
	volatile int64_t t111 = -4178322LL;

    t111 = (x445^((x446==x447)&x448));

    if (t111 != -26LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 12851822LL;
	int8_t x450 = INT8_MIN;
	int64_t x451 = INT64_MAX;
	static uint64_t x452 = 2743901745218LLU;
	volatile uint64_t t112 = 8418LLU;

    t112 = (x449^((x450==x451)&x452));

    if (t112 != 12851822LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	static uint64_t x454 = UINT64_MAX;
	volatile uint64_t x455 = 145496592045318LLU;
	int64_t x456 = INT64_MIN;
	volatile int64_t t113 = 975466609LL;

    t113 = (x453^((x454==x455)&x456));

    if (t113 != -128LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x457 = -1;
	uint32_t x460 = 917403130U;
	uint32_t t114 = UINT32_MAX;

    t114 = (x457^((x458==x459)&x460));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = 49U;
	uint16_t x463 = UINT16_MAX;
	static int32_t t115 = -6436;

    t115 = (x461^((x462==x463)&x464));

    if (t115 != 49) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	volatile int16_t x466 = INT16_MIN;
	uint8_t x467 = UINT8_MAX;
	volatile int8_t x468 = 3;
	uint64_t t116 = UINT64_MAX;

    t116 = (x465^((x466==x467)&x468));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = UINT64_MAX;
	int16_t x470 = 1;
	int8_t x471 = -1;
	uint16_t x472 = UINT16_MAX;
	volatile uint64_t t117 = UINT64_MAX;

    t117 = (x469^((x470==x471)&x472));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 1776;
	uint8_t x474 = 0U;
	volatile int8_t x475 = 1;
	int64_t x476 = -1LL;
	static volatile int64_t t118 = 1LL;

    t118 = (x473^((x474==x475)&x476));

    if (t118 != 1776LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	int8_t x480 = -1;
	int64_t t119 = INT64_MIN;

    t119 = (x477^((x478==x479)&x480));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	volatile int8_t x482 = -8;
	int16_t x483 = INT16_MAX;
	uint64_t x484 = 21305518467LLU;

    t120 = (x481^((x482==x483)&x484));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = 27LLU;
	int8_t x486 = 0;
	static uint64_t x487 = 248LLU;
	uint64_t t121 = 2860494LLU;

    t121 = (x485^((x486==x487)&x488));

    if (t121 != 27LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = INT64_MAX;
	int32_t x491 = INT32_MAX;
	volatile int64_t t122 = INT64_MIN;

    t122 = (x489^((x490==x491)&x492));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 27U;
	int8_t x494 = 52;
	static uint32_t x495 = UINT32_MAX;

    t123 = (x493^((x494==x495)&x496));

    if (t123 != 27) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x497 = -1;
	int32_t x498 = INT32_MAX;
	uint64_t x499 = UINT64_MAX;
	volatile int64_t x500 = 13417394176LL;
	static volatile int64_t t124 = -5651171975746LL;

    t124 = (x497^((x498==x499)&x500));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -44180;
	int32_t x503 = INT32_MAX;
	int32_t x504 = 1646;
	int32_t t125 = -50;

    t125 = (x501^((x502==x503)&x504));

    if (t125 != -44180) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	int64_t x506 = 4380024161027LL;
	uint64_t x507 = UINT64_MAX;
	static uint32_t x508 = 1584U;

    t126 = (x505^((x506==x507)&x508));

    if (t126 != 255U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x509 = -154212408;
	volatile uint8_t x510 = 30U;
	uint16_t x511 = 29U;
	int8_t x512 = INT8_MIN;

    t127 = (x509^((x510==x511)&x512));

    if (t127 != -154212408) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	static int8_t x515 = 0;
	static uint16_t x516 = 1U;
	volatile int32_t t128 = INT32_MIN;

    t128 = (x513^((x514==x515)&x516));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MAX;
	uint32_t x520 = 894U;
	volatile uint32_t t129 = 14303613U;

    t129 = (x517^((x518==x519)&x520));

    if (t129 != 32767U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	uint32_t x522 = 51953488U;
	static volatile uint32_t x523 = 3130U;
	static int32_t t130 = -11;

    t130 = (x521^((x522==x523)&x524));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 0U;
	int8_t x526 = INT8_MAX;
	int8_t x527 = INT8_MIN;
	int16_t x528 = 1;

    t131 = (x525^((x526==x527)&x528));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	int8_t x530 = INT8_MIN;
	volatile int8_t x531 = 0;
	int64_t x532 = -1LL;

    t132 = (x529^((x530==x531)&x532));

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x533 = -64806;
	int32_t x534 = 55;
	volatile int8_t x535 = 37;
	int64_t x536 = INT64_MAX;
	static int64_t t133 = 9LL;

    t133 = (x533^((x534==x535)&x536));

    if (t133 != -64806LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = 134628115587949LL;
	volatile uint32_t x538 = UINT32_MAX;
	int16_t x540 = -1;
	volatile int64_t t134 = 145311428121LL;

    t134 = (x537^((x538==x539)&x540));

    if (t134 != 134628115587948LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x541 = 32;
	uint32_t x542 = 181U;
	uint64_t x543 = 92248080623401LLU;
	volatile int16_t x544 = -1;
	int32_t t135 = 5467212;

    t135 = (x541^((x542==x543)&x544));

    if (t135 != 32) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = -1LL;
	uint8_t x547 = 43U;
	int32_t x548 = -219670964;
	static int64_t t136 = 15LL;

    t136 = (x545^((x546==x547)&x548));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x551 = 56;
	volatile int64_t x552 = -1LL;
	int64_t t137 = 1LL;

    t137 = (x549^((x550==x551)&x552));

    if (t137 != -128LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x553 = 51U;
	uint16_t x554 = UINT16_MAX;
	int64_t x555 = INT64_MIN;
	volatile int16_t x556 = -135;

    t138 = (x553^((x554==x555)&x556));

    if (t138 != 51) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x557 = INT16_MAX;
	uint64_t x558 = 352LLU;
	volatile int32_t x559 = INT32_MAX;
	volatile int32_t x560 = INT32_MIN;
	static volatile int32_t t139 = 7143;

    t139 = (x557^((x558==x559)&x560));

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = -1;
	int8_t x562 = -1;
	volatile uint32_t x563 = UINT32_MAX;
	static int32_t x564 = 0;
	volatile int32_t t140 = -7;

    t140 = (x561^((x562==x563)&x564));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x566 = INT16_MIN;
	int64_t x567 = 356794775363513LL;
	static volatile int8_t x568 = 14;
	static int32_t t141 = 0;

    t141 = (x565^((x566==x567)&x568));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x570 = INT16_MAX;
	int64_t x571 = 1458011LL;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t142 = -338;

    t142 = (x569^((x570==x571)&x572));

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MIN;
	int64_t x574 = 1LL;
	volatile uint64_t x575 = 22388833823LLU;
	uint64_t x576 = 581280041294500142LLU;
	static volatile uint64_t t143 = 101423LLU;

    t143 = (x573^((x574==x575)&x576));

    if (t143 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -409013741;
	static volatile uint16_t x578 = 5055U;
	static int32_t x579 = INT32_MAX;
	volatile int32_t x580 = INT32_MIN;

    t144 = (x577^((x578==x579)&x580));

    if (t144 != -409013741) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MIN;
	volatile uint16_t x582 = 2U;
	volatile uint8_t x583 = 43U;
	volatile int8_t x584 = INT8_MAX;
	int32_t t145 = 2473;

    t145 = (x581^((x582==x583)&x584));

    if (t145 != -128) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x586 = -1;
	static int16_t x587 = INT16_MIN;
	static int32_t t146 = -1;

    t146 = (x585^((x586==x587)&x588));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = 186429LL;
	static int32_t x591 = INT32_MAX;
	uint32_t x592 = 12117046U;
	volatile int64_t t147 = -198933917125LL;

    t147 = (x589^((x590==x591)&x592));

    if (t147 != 186429LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 459441723U;
	uint16_t x594 = 1U;
	volatile int64_t x595 = INT64_MIN;
	volatile int64_t x596 = 61LL;
	volatile int64_t t148 = 72410165758364LL;

    t148 = (x593^((x594==x595)&x596));

    if (t148 != 459441723LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	int16_t x598 = INT16_MIN;
	int8_t x599 = -1;
	int16_t x600 = -1;

    t149 = (x597^((x598==x599)&x600));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	int16_t x603 = INT16_MAX;
	volatile uint32_t x604 = 28U;
	volatile int64_t t150 = INT64_MAX;

    t150 = (x601^((x602==x603)&x604));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x606 = 36323171247602478LLU;
	int16_t x607 = -1;
	int32_t x608 = INT32_MIN;
	int32_t t151 = 2;

    t151 = (x605^((x606==x607)&x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = -1;
	volatile uint64_t x610 = 346577710LLU;
	static int32_t x611 = INT32_MIN;
	volatile uint16_t x612 = 1672U;
	volatile int32_t t152 = 1;

    t152 = (x609^((x610==x611)&x612));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	static int64_t x614 = -1LL;
	uint8_t x615 = UINT8_MAX;
	int16_t x616 = -1;
	int32_t t153 = 55812;

    t153 = (x613^((x614==x615)&x616));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = UINT32_MAX;
	int64_t x618 = -1LL;
	int16_t x619 = INT16_MIN;
	static uint64_t x620 = 1470170091972988LLU;
	static uint64_t t154 = 77131996616023450LLU;

    t154 = (x617^((x618==x619)&x620));

    if (t154 != 4294967295LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = -2;
	int32_t x622 = 55127;
	int16_t x623 = INT16_MIN;
	int16_t x624 = -1;

    t155 = (x621^((x622==x623)&x624));

    if (t155 != -2) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -6;
	int16_t x626 = 16;
	static int32_t x627 = INT32_MIN;
	volatile uint16_t x628 = 141U;

    t156 = (x625^((x626==x627)&x628));

    if (t156 != -6) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x631 = -27130728360829LL;
	int32_t x632 = -1;
	volatile int32_t t157 = -18;

    t157 = (x629^((x630==x631)&x632));

    if (t157 != 19) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 713U;
	uint64_t x634 = UINT64_MAX;
	static int16_t x635 = INT16_MAX;
	volatile uint32_t t158 = 172592U;

    t158 = (x633^((x634==x635)&x636));

    if (t158 != 713U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	static int64_t x638 = INT64_MIN;
	int32_t x639 = 0;
	int16_t x640 = INT16_MIN;
	int32_t t159 = INT32_MIN;

    t159 = (x637^((x638==x639)&x640));

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	int32_t x642 = -80560;
	uint8_t x644 = 0U;
	volatile int32_t t160 = INT32_MIN;

    t160 = (x641^((x642==x643)&x644));

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x645 = UINT16_MAX;
	volatile int32_t t161 = -16725380;

    t161 = (x645^((x646==x647)&x648));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 1LLU;
	int64_t x650 = 108LL;
	int32_t x651 = -90033444;
	int8_t x652 = INT8_MIN;
	uint64_t t162 = 64666794189867076LLU;

    t162 = (x649^((x650==x651)&x652));

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x654 = 3350260744705LLU;
	uint16_t x655 = UINT16_MAX;

    t163 = (x653^((x654==x655)&x656));

    if (t163 != -10063453) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	uint64_t x658 = 10306609577583404LLU;
	int64_t x660 = -1LL;
	volatile int64_t t164 = 127834367966683844LL;

    t164 = (x657^((x658==x659)&x660));

    if (t164 != 127LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = INT8_MIN;
	int64_t x662 = 4942645642LL;
	int16_t x664 = INT16_MIN;
	int32_t t165 = 22;

    t165 = (x661^((x662==x663)&x664));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = INT8_MIN;
	static int16_t x667 = INT16_MIN;
	int16_t x668 = 0;
	static int64_t t166 = 171570517052LL;

    t166 = (x665^((x666==x667)&x668));

    if (t166 != 112LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = -1;
	static volatile int8_t x670 = 1;
	static uint32_t x671 = 791250U;
	volatile uint16_t x672 = 4044U;
	volatile int32_t t167 = 562;

    t167 = (x669^((x670==x671)&x672));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	volatile int32_t x676 = INT32_MIN;
	int64_t t168 = INT64_MIN;

    t168 = (x673^((x674==x675)&x676));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x678 = 7U;
	uint32_t t169 = 1151881U;

    t169 = (x677^((x678==x679)&x680));

    if (t169 != 65535U) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x682 = -30;
	uint32_t x683 = 1055349U;
	int8_t x684 = 1;
	int32_t t170 = 13719;

    t170 = (x681^((x682==x683)&x684));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x688 = 6;
	static int32_t t171 = 1933153;

    t171 = (x685^((x686==x687)&x688));

    if (t171 != -25959) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	volatile int64_t x690 = INT64_MIN;
	int16_t x692 = INT16_MIN;
	volatile int32_t t172 = -9;

    t172 = (x689^((x690==x691)&x692));

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	int16_t x694 = -948;
	uint8_t x695 = UINT8_MAX;
	static int64_t x696 = -6516283986LL;
	volatile uint64_t t173 = UINT64_MAX;

    t173 = (x693^((x694==x695)&x696));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x698 = -1;
	volatile int16_t x699 = INT16_MIN;
	uint32_t x700 = UINT32_MAX;
	int64_t t174 = INT64_MIN;

    t174 = (x697^((x698==x699)&x700));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -1;
	volatile int64_t x702 = INT64_MAX;
	int32_t t175 = 1226095;

    t175 = (x701^((x702==x703)&x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MAX;
	uint64_t x706 = UINT64_MAX;
	int32_t x707 = -26;
	int8_t x708 = INT8_MIN;
	volatile int32_t t176 = -3280;

    t176 = (x705^((x706==x707)&x708));

    if (t176 != 127) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x710 = -1;
	uint64_t x711 = UINT64_MAX;
	static int32_t x712 = -42242;
	static int32_t t177 = 6970230;

    t177 = (x709^((x710==x711)&x712));

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	static int16_t x714 = 7;
	static volatile int8_t x715 = INT8_MAX;
	uint8_t x716 = UINT8_MAX;
	volatile int32_t t178 = 28;

    t178 = (x713^((x714==x715)&x716));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x719 = 3137538U;
	uint8_t x720 = 1U;
	volatile uint64_t t179 = UINT64_MAX;

    t179 = (x717^((x718==x719)&x720));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x722 = -5;
	static int32_t x723 = 15652;
	uint8_t x724 = 12U;
	volatile int32_t t180 = 0;

    t180 = (x721^((x722==x723)&x724));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = 6;
	int8_t x726 = INT8_MIN;
	volatile int16_t x728 = INT16_MIN;

    t181 = (x725^((x726==x727)&x728));

    if (t181 != 6) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	int16_t x730 = 13;
	int32_t x731 = INT32_MAX;
	static int16_t x732 = 1273;
	int64_t t182 = INT64_MIN;

    t182 = (x729^((x730==x731)&x732));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	int8_t x735 = 27;
	static uint32_t x736 = UINT32_MAX;
	uint64_t t183 = UINT64_MAX;

    t183 = (x733^((x734==x735)&x736));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x737 = INT16_MAX;
	uint8_t x738 = 17U;
	volatile int64_t x739 = 852967626LL;
	uint8_t x740 = UINT8_MAX;
	volatile int32_t t184 = -6533458;

    t184 = (x737^((x738==x739)&x740));

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x742 = 1;
	int32_t x743 = 1;
	static int64_t x744 = 112478LL;

    t185 = (x741^((x742==x743)&x744));

    if (t185 != -96768764LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 32U;
	int8_t x747 = INT8_MAX;
	int64_t x748 = INT64_MAX;
	volatile int64_t t186 = 11829864291434LL;

    t186 = (x745^((x746==x747)&x748));

    if (t186 != 32LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	volatile int32_t x750 = 751974645;
	uint32_t x751 = 2416562U;
	uint16_t x752 = UINT16_MAX;
	int32_t t187 = 1005001;

    t187 = (x749^((x750==x751)&x752));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	volatile uint32_t x754 = 1073650U;
	int16_t x756 = -1;
	static volatile int32_t t188 = INT32_MIN;

    t188 = (x753^((x754==x755)&x756));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x757 = UINT64_MAX;
	int32_t x758 = INT32_MAX;
	static uint64_t x759 = 1577487458LLU;
	volatile int16_t x760 = -86;
	static uint64_t t189 = UINT64_MAX;

    t189 = (x757^((x758==x759)&x760));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	static volatile int8_t x762 = -47;
	int32_t x763 = INT32_MIN;
	uint32_t x764 = 29U;

    t190 = (x761^((x762==x763)&x764));

    if (t190 != 4294967168U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -19624;
	volatile int8_t x768 = -1;
	volatile int32_t t191 = -18821960;

    t191 = (x765^((x766==x767)&x768));

    if (t191 != -19624) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 1790521176LLU;
	static int64_t x770 = -1LL;
	volatile int64_t x771 = INT64_MIN;
	volatile int8_t x772 = 47;

    t192 = (x769^((x770==x771)&x772));

    if (t192 != 1790521176LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x775 = -1;
	static int64_t x776 = -1LL;
	int64_t t193 = 84768324238047897LL;

    t193 = (x773^((x774==x775)&x776));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x778 = -1;
	uint8_t x779 = 8U;
	volatile int64_t t194 = 4981LL;

    t194 = (x777^((x778==x779)&x780));

    if (t194 != -2336185LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -1;
	static int16_t x782 = -1;
	int8_t x783 = INT8_MIN;
	uint32_t x784 = 70702U;
	static volatile uint32_t t195 = UINT32_MAX;

    t195 = (x781^((x782==x783)&x784));

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x785 = 1;
	int64_t x786 = INT64_MAX;
	int32_t t196 = 6718689;

    t196 = (x785^((x786==x787)&x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 27716U;
	uint16_t x790 = 5854U;
	uint16_t x791 = 100U;
	volatile uint16_t x792 = 27289U;
	int32_t t197 = 552817;

    t197 = (x789^((x790==x791)&x792));

    if (t197 != 27716) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x793 = 22U;
	int16_t x794 = INT16_MAX;
	int32_t x795 = INT32_MIN;
	static volatile int64_t t198 = -41LL;

    t198 = (x793^((x794==x795)&x796));

    if (t198 != 22LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x798 = INT64_MIN;
	int16_t x799 = -1;
	int8_t x800 = INT8_MIN;
	int32_t t199 = -827210;

    t199 = (x797^((x798==x799)&x800));

    if (t199 != 23) { NG(); } else { ; }
	
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

