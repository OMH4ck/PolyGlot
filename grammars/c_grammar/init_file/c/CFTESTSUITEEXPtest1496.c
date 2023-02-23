
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

int32_t x2 = -40;
uint32_t x6 = 52U;
int16_t x8 = -1;
int16_t x10 = INT16_MIN;
int32_t x19 = INT32_MIN;
static uint32_t x23 = 46819U;
volatile uint32_t x26 = UINT32_MAX;
int32_t x27 = INT32_MIN;
int16_t x36 = 1;
uint32_t x38 = 69150164U;
int64_t x41 = 1934LL;
uint64_t x43 = 2856927625341LLU;
int16_t x44 = INT16_MIN;
static uint64_t x49 = 477232528089121320LLU;
int16_t x51 = -1;
int16_t x54 = INT16_MIN;
int16_t x55 = INT16_MIN;
int32_t x57 = INT32_MAX;
int64_t t15 = 8071LL;
volatile int32_t t16 = 88;
static volatile int32_t x71 = 31429835;
static uint8_t x85 = 5U;
int64_t x86 = 251157044073082LL;
int8_t x87 = INT8_MAX;
int64_t x91 = INT64_MIN;
volatile int64_t t22 = 611439734597700LL;
int8_t x94 = -1;
volatile int32_t x99 = INT32_MAX;
static uint8_t x100 = 7U;
volatile int64_t t26 = -988992LL;
volatile int64_t t27 = 1383637957LL;
uint16_t x113 = 6U;
static uint8_t x123 = UINT8_MAX;
int8_t x137 = INT8_MIN;
int16_t x139 = 26;
volatile uint64_t x140 = 28174801896LLU;
uint8_t x146 = UINT8_MAX;
int8_t x147 = -1;
int64_t t36 = -774127759204563LL;
uint8_t x149 = UINT8_MAX;
int32_t x152 = INT32_MIN;
int16_t x157 = INT16_MIN;
int16_t x160 = -4165;
int64_t x162 = -1LL;
int32_t x163 = INT32_MAX;
int64_t x164 = -316339986LL;
int16_t x172 = INT16_MAX;
int8_t x178 = -4;
uint16_t x180 = 519U;
uint32_t x181 = 5741756U;
int16_t x189 = INT16_MAX;
int32_t t47 = -6;
static volatile int16_t x194 = INT16_MAX;
int16_t x208 = -8;
uint32_t x209 = UINT32_MAX;
int32_t x210 = -1;
int16_t x214 = -1;
int32_t x216 = INT32_MIN;
volatile int32_t t53 = -65869610;
static volatile uint64_t x223 = 33275428454370LLU;
int64_t x231 = 72532857699125LL;
int32_t t58 = 216766163;
int16_t x241 = -45;
uint32_t x244 = UINT32_MAX;
int32_t t60 = 598244;
volatile int32_t t61 = 1722097;
int8_t x249 = -1;
static int32_t t65 = 0;
int16_t x267 = INT16_MIN;
int32_t x268 = 7975;
int32_t x269 = 18600501;
volatile int32_t t67 = 16078774;
volatile uint16_t x283 = UINT16_MAX;
int8_t x290 = 1;
static int16_t x292 = INT16_MIN;
int8_t x300 = INT8_MIN;
uint32_t x301 = 1475U;
int32_t x309 = -1462;
volatile int32_t t77 = -229017;
int32_t x318 = -8043842;
int8_t x322 = INT8_MIN;
int16_t x327 = -3457;
uint32_t x329 = 219162U;
static int32_t x330 = INT32_MIN;
static uint32_t x332 = 4700803U;
uint32_t x335 = UINT32_MAX;
volatile uint32_t t83 = 719396U;
volatile uint8_t x340 = 0U;
uint8_t x343 = 54U;
volatile uint32_t t85 = 17U;
static int8_t x346 = INT8_MIN;
static int64_t x350 = INT64_MAX;
volatile int32_t x356 = -615;
static uint16_t x365 = 29013U;
int8_t x366 = INT8_MIN;
int16_t x370 = INT16_MAX;
uint64_t x372 = UINT64_MAX;
uint8_t x378 = 46U;
int16_t x391 = INT16_MIN;
volatile uint32_t t97 = 30U;
volatile int64_t x398 = -1LL;
uint64_t x405 = 6913376LLU;
static int8_t x420 = 0;
volatile int32_t t104 = 43;
int8_t x435 = 1;
uint8_t x436 = 4U;
static int8_t x440 = INT8_MIN;
int32_t t111 = 474960843;
static uint8_t x450 = 102U;
uint8_t x451 = 1U;
static uint32_t x455 = UINT32_MAX;
volatile int32_t t113 = 3;
int32_t x458 = INT32_MIN;
int8_t x459 = 45;
static volatile int64_t x467 = INT64_MIN;
int64_t x468 = INT64_MIN;
int64_t x469 = INT64_MIN;
int64_t t117 = -12893470532322LL;
int64_t x477 = -248446LL;
uint16_t x478 = 1U;
uint32_t x491 = UINT32_MAX;
volatile int16_t x494 = -1;
int8_t x501 = INT8_MAX;
volatile int32_t t125 = 125543;
static int32_t x506 = -1;
int8_t x511 = INT8_MAX;
static volatile int32_t t127 = -72914408;
uint8_t x514 = 31U;
volatile uint8_t x516 = 12U;
uint64_t x522 = 5385254304LLU;
volatile int16_t x524 = INT16_MIN;
uint32_t x528 = 6U;
int8_t x531 = -1;
int32_t x536 = INT32_MAX;
static int16_t x540 = 99;
static uint32_t t134 = 4U;
volatile int32_t t135 = 0;
uint8_t x549 = UINT8_MAX;
uint8_t x552 = 122U;
int32_t x556 = INT32_MIN;
int64_t x557 = INT64_MAX;
int8_t x561 = -1;
uint32_t x569 = 251146U;
int64_t x571 = INT64_MIN;
int32_t x574 = -27;
int8_t x578 = INT8_MIN;
volatile int32_t x579 = -1;
uint32_t x593 = 11936795U;
static uint32_t x596 = 925U;
volatile int64_t x601 = -63100227175LL;
int16_t x602 = INT16_MIN;
uint16_t x623 = 112U;
volatile uint8_t x631 = 14U;
static volatile int16_t x633 = -1;
int8_t x636 = -1;
int32_t t159 = -366641881;
volatile uint64_t x642 = 1890836529LLU;
volatile int32_t t160 = -808922;
static volatile uint32_t t161 = 2125341430U;
int16_t x651 = INT16_MIN;
uint64_t x654 = 1638002099238952751LLU;
volatile int32_t x660 = 72323833;
uint32_t x664 = 222315093U;
static volatile int64_t t165 = -508663951745151LL;
int8_t x673 = INT8_MIN;
int32_t x677 = 5;
int16_t x681 = -1;
volatile int32_t x682 = INT32_MIN;
static uint32_t x684 = 54U;
static int64_t x685 = INT64_MIN;
uint16_t x686 = UINT16_MAX;
int64_t x691 = INT64_MIN;
volatile int64_t x695 = -1LL;
volatile int32_t t173 = -284199316;
uint8_t x697 = 5U;
int8_t x705 = INT8_MIN;
volatile uint16_t x714 = 14884U;
int8_t x724 = INT8_MIN;
int16_t x731 = INT16_MAX;
static uint16_t x732 = UINT16_MAX;
volatile int8_t x736 = 16;
uint8_t x742 = 14U;
int16_t x745 = INT16_MIN;
volatile int32_t t193 = -899;
int8_t x780 = INT8_MIN;
int32_t x785 = INT32_MIN;
volatile int8_t x790 = INT8_MIN;
int64_t x793 = 4308709393905618868LL;
uint32_t x798 = 20U;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = 422483923865030503LLU;
	int32_t t0 = -3120675;

    t0 = (x1&((x2==x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	volatile int16_t x7 = INT16_MIN;
	int32_t t1 = 649;

    t1 = (x5&((x6==x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = -1;
	static int16_t x11 = 1;
	volatile int16_t x12 = -1;
	static int32_t t2 = -4030931;

    t2 = (x9&((x10==x11)>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 373;
	int8_t x14 = INT8_MIN;
	int32_t x15 = -1;
	int64_t x16 = -1LL;
	static volatile int32_t t3 = -1;

    t3 = (x13&((x14==x15)>x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int16_t x18 = 808;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -1;

    t4 = (x17&((x18==x19)>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	static int8_t x22 = -1;
	volatile int64_t x24 = INT64_MIN;
	int64_t t5 = 1139303340610LL;

    t5 = (x21&((x22==x23)>x24));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	int8_t x28 = -2;
	volatile int32_t t6 = -1289489;

    t6 = (x25&((x26==x27)>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 7369;
	uint32_t x30 = 657341614U;
	int32_t x31 = INT32_MIN;
	volatile int16_t x32 = -1;
	int32_t t7 = -118465296;

    t7 = (x29&((x30==x31)>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	uint32_t x34 = UINT32_MAX;
	volatile uint64_t x35 = 0LLU;
	int64_t t8 = -1LL;

    t8 = (x33&((x34==x35)>x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x37 = 31950967909554706LLU;
	volatile uint8_t x39 = UINT8_MAX;
	volatile int32_t x40 = INT32_MAX;
	volatile uint64_t t9 = 351090LLU;

    t9 = (x37&((x38==x39)>x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x42 = -1;
	static int64_t t10 = -504767450LL;

    t10 = (x41&((x42==x43)>x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x45 = 39U;
	volatile uint32_t x46 = UINT32_MAX;
	int8_t x47 = 13;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = -23049;

    t11 = (x45&((x46==x47)>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x50 = INT16_MAX;
	int32_t x52 = INT32_MIN;
	static uint64_t t12 = 4085841346LLU;

    t12 = (x49&((x50==x51)>x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MAX;
	uint8_t x56 = 5U;
	int32_t t13 = -14553506;

    t13 = (x53&((x54==x55)>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MAX;
	int32_t x59 = -1;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 2764;

    t14 = (x57&((x58==x59)>x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	uint8_t x62 = 22U;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = -1LL;

    t15 = (x61&((x62==x63)>x64));

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -3;
	static uint64_t x66 = 68LLU;
	int16_t x67 = 61;
	int64_t x68 = -296593516LL;

    t16 = (x65&((x66==x67)>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 20U;
	int8_t x70 = -1;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -391817;

    t17 = (x69&((x70==x71)>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 198;
	int16_t x74 = 7;
	int8_t x75 = -1;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 81;

    t18 = (x73&((x74==x75)>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = -1LL;
	int8_t x78 = 3;
	int8_t x79 = 1;
	static int8_t x80 = INT8_MIN;
	int64_t t19 = 1LL;

    t19 = (x77&((x78==x79)>x80));

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MIN;
	volatile int64_t x83 = 912907142865676564LL;
	int64_t x84 = 4446947512609319542LL;
	int32_t t20 = -586297006;

    t20 = (x81&((x82==x83)>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x88 = 208946801103393LLU;
	volatile int32_t t21 = 165859;

    t21 = (x85&((x86==x87)>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	int8_t x92 = INT8_MIN;

    t22 = (x89&((x90==x91)>x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 4775;
	uint32_t x95 = 311195U;
	int8_t x96 = -5;
	static int32_t t23 = -3657;

    t23 = (x93&((x94==x95)>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 203U;
	int8_t x98 = INT8_MIN;
	uint32_t t24 = 216414880U;

    t24 = (x97&((x98==x99)>x100));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MIN;
	int64_t x102 = 119044074234480468LL;
	uint64_t x103 = UINT64_MAX;
	static volatile int64_t x104 = INT64_MIN;
	int32_t t25 = -28913862;

    t25 = (x101&((x102==x103)>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x105 = INT64_MAX;
	int32_t x106 = INT32_MIN;
	int16_t x107 = -72;
	int64_t x108 = -1LL;

    t26 = (x105&((x106==x107)>x108));

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = INT64_MIN;
	uint32_t x110 = 309380215U;
	uint16_t x111 = UINT16_MAX;
	uint16_t x112 = UINT16_MAX;

    t27 = (x109&((x110==x111)>x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x114 = -1;
	int16_t x115 = -41;
	uint8_t x116 = 6U;
	int32_t t28 = -13532;

    t28 = (x113&((x114==x115)>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MIN;
	static int16_t x118 = INT16_MIN;
	int32_t x119 = -311190;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -6926228;

    t29 = (x117&((x118==x119)>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x121 = INT8_MAX;
	int64_t x122 = INT64_MIN;
	uint16_t x124 = 53U;
	volatile int32_t t30 = -14;

    t30 = (x121&((x122==x123)>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 1418926875U;
	static int16_t x126 = -236;
	int16_t x127 = INT16_MIN;
	static int16_t x128 = -1;
	uint32_t t31 = 44174591U;

    t31 = (x125&((x126==x127)>x128));

    if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = -5;
	static int32_t x130 = INT32_MAX;
	static volatile uint32_t x131 = 45U;
	int32_t x132 = INT32_MAX;
	int32_t t32 = 115675739;

    t32 = (x129&((x130==x131)>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MIN;
	int64_t x135 = -1LL;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -40013287;

    t33 = (x133&((x134==x135)>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = INT32_MAX;
	volatile int32_t t34 = -3810;

    t34 = (x137&((x138==x139)>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	static uint8_t x142 = 77U;
	static int16_t x143 = -1;
	int32_t x144 = -1;
	volatile int32_t t35 = 3503758;

    t35 = (x141&((x142==x143)>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 30081778177LL;
	uint32_t x148 = UINT32_MAX;

    t36 = (x145&((x146==x147)>x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x150 = 754U;
	uint64_t x151 = 468520LLU;
	int32_t t37 = -66046280;

    t37 = (x149&((x150==x151)>x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	static volatile int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = -1006136904;

    t38 = (x153&((x154==x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = -1LL;
	static uint8_t x159 = UINT8_MAX;
	volatile int32_t t39 = 112189298;

    t39 = (x157&((x158==x159)>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x161 = -1;
	int32_t t40 = 14626539;

    t40 = (x161&((x162==x163)>x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = INT8_MIN;
	int32_t x166 = INT32_MAX;
	uint16_t x167 = 215U;
	volatile int64_t x168 = INT64_MAX;
	int32_t t41 = 374958;

    t41 = (x165&((x166==x167)>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	uint8_t x170 = UINT8_MAX;
	int64_t x171 = INT64_MIN;
	int32_t t42 = -1974;

    t42 = (x169&((x170==x171)>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x173 = 1U;
	volatile int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = UINT64_MAX;
	int32_t t43 = 53763;

    t43 = (x173&((x174==x175)>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	uint8_t x179 = UINT8_MAX;
	volatile int32_t t44 = -1;

    t44 = (x177&((x178==x179)>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x182 = 59;
	volatile int16_t x183 = -346;
	uint32_t x184 = UINT32_MAX;
	uint32_t t45 = 1355854643U;

    t45 = (x181&((x182==x183)>x184));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x185 = 86U;
	int8_t x186 = 0;
	volatile uint32_t x187 = 11831234U;
	int8_t x188 = 2;
	volatile int32_t t46 = -5192569;

    t46 = (x185&((x186==x187)>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x190 = UINT64_MAX;
	static volatile int8_t x191 = -1;
	uint64_t x192 = 37647582LLU;

    t47 = (x189&((x190==x191)>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = INT16_MIN;
	int16_t x195 = INT16_MAX;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 1683;

    t48 = (x193&((x194==x195)>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MAX;
	int32_t x199 = 2418956;
	int16_t x200 = INT16_MAX;
	int64_t t49 = 7681LL;

    t49 = (x197&((x198==x199)>x200));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	static volatile uint64_t x202 = 6907LLU;
	static uint64_t x203 = UINT64_MAX;
	volatile int32_t x204 = INT32_MIN;
	int32_t t50 = -660;

    t50 = (x201&((x202==x203)>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x205 = UINT8_MAX;
	uint32_t x206 = UINT32_MAX;
	volatile int32_t x207 = INT32_MIN;
	int32_t t51 = 628;

    t51 = (x205&((x206==x207)>x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x211 = INT32_MAX;
	volatile uint64_t x212 = 803633862982571LLU;
	volatile uint32_t t52 = 1883587774U;

    t52 = (x209&((x210==x211)>x212));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	int32_t x215 = INT32_MIN;

    t53 = (x213&((x214==x215)>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	volatile int64_t x218 = 4545798355440155140LL;
	int16_t x219 = -10;
	volatile int8_t x220 = -20;
	volatile int64_t t54 = 4039569167968429LL;

    t54 = (x217&((x218==x219)>x220));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = -382545916;
	int32_t x222 = 29;
	int64_t x224 = INT64_MAX;
	int32_t t55 = -11;

    t55 = (x221&((x222==x223)>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	int64_t x226 = 106776553520058LL;
	int32_t x227 = INT32_MIN;
	int16_t x228 = -1897;
	volatile int64_t t56 = -13656452977747LL;

    t56 = (x225&((x226==x227)>x228));

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	uint64_t x230 = UINT64_MAX;
	uint16_t x232 = UINT16_MAX;
	static volatile int32_t t57 = -3;

    t57 = (x229&((x230==x231)>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	uint64_t x234 = 820885585LLU;
	volatile int64_t x235 = -1LL;
	int16_t x236 = INT16_MIN;

    t58 = (x233&((x234==x235)>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x237 = -10680LL;
	int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MAX;
	volatile uint32_t x240 = 16U;
	int64_t t59 = -437237563LL;

    t59 = (x237&((x238==x239)>x240));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x242 = 3U;
	static int64_t x243 = INT64_MIN;

    t60 = (x241&((x242==x243)>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	uint16_t x246 = UINT16_MAX;
	uint64_t x247 = 1014783968131LLU;
	int64_t x248 = -1LL;

    t61 = (x245&((x246==x247)>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = -175483063LL;
	uint8_t x251 = 97U;
	int32_t x252 = 0;
	int32_t t62 = 9;

    t62 = (x249&((x250==x251)>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 5LLU;
	int16_t x254 = -84;
	static uint16_t x255 = UINT16_MAX;
	static int16_t x256 = INT16_MIN;
	uint64_t t63 = 97668497891060LLU;

    t63 = (x253&((x254==x255)>x256));

    if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -1;
	static uint8_t x258 = 1U;
	volatile int8_t x259 = INT8_MIN;
	static int32_t x260 = -1;
	int32_t t64 = 89530;

    t64 = (x257&((x258==x259)>x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	uint16_t x262 = UINT16_MAX;
	volatile uint16_t x263 = 5459U;
	volatile uint16_t x264 = 6U;

    t65 = (x261&((x262==x263)>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -4474353657702866968LL;
	volatile uint16_t x266 = 2299U;
	static int64_t t66 = 575709827632725LL;

    t66 = (x265&((x266==x267)>x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x270 = 0U;
	static int64_t x271 = -1LL;
	int16_t x272 = -8;

    t67 = (x269&((x270==x271)>x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int64_t x274 = -2058224LL;
	volatile uint32_t x275 = 508377U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 3631;

    t68 = (x273&((x274==x275)>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = -8744;
	uint8_t x278 = 26U;
	int16_t x279 = INT16_MIN;
	static uint16_t x280 = 7U;
	volatile int32_t t69 = 305159671;

    t69 = (x277&((x278==x279)>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MAX;
	static int8_t x282 = INT8_MIN;
	int16_t x284 = -1;
	int32_t t70 = 75658;

    t70 = (x281&((x282==x283)>x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	int16_t x286 = INT16_MAX;
	uint64_t x287 = 405008091085LLU;
	uint32_t x288 = 188260U;
	volatile int64_t t71 = 1516758274LL;

    t71 = (x285&((x286==x287)>x288));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -9819;
	uint64_t x291 = 822515593LLU;
	static volatile int32_t t72 = -265035;

    t72 = (x289&((x290==x291)>x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = 1;
	int64_t x294 = -7028981470LL;
	volatile int32_t x295 = INT32_MAX;
	volatile uint64_t x296 = 1LLU;
	int32_t t73 = 933784;

    t73 = (x293&((x294==x295)>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	volatile int8_t x298 = INT8_MIN;
	volatile int32_t x299 = -1;
	volatile int32_t t74 = -599052;

    t74 = (x297&((x298==x299)>x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x302 = INT64_MIN;
	static uint32_t x303 = UINT32_MAX;
	uint64_t x304 = UINT64_MAX;
	uint32_t t75 = 120U;

    t75 = (x301&((x302==x303)>x304));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	int64_t x306 = 21585812976LL;
	static int8_t x307 = INT8_MIN;
	static int8_t x308 = INT8_MIN;
	int32_t t76 = -1667716;

    t76 = (x305&((x306==x307)>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x310 = 103103867503577872LLU;
	int8_t x311 = -1;
	int8_t x312 = INT8_MIN;

    t77 = (x309&((x310==x311)>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = -894;
	uint8_t x314 = 21U;
	volatile int16_t x315 = INT16_MIN;
	static volatile int32_t x316 = 1056899038;
	int32_t t78 = 24239943;

    t78 = (x313&((x314==x315)>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = UINT64_MAX;
	static int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	volatile uint64_t t79 = 50230387813938LLU;

    t79 = (x317&((x318==x319)>x320));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = INT32_MIN;
	uint32_t x323 = UINT32_MAX;
	uint64_t x324 = UINT64_MAX;
	int32_t t80 = -58943521;

    t80 = (x321&((x322==x323)>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x325 = 36725U;
	int8_t x326 = -1;
	static uint64_t x328 = 868175868856LLU;
	volatile uint32_t t81 = 55129U;

    t81 = (x325&((x326==x327)>x328));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x331 = -1;
	static volatile uint32_t t82 = 7U;

    t82 = (x329&((x330==x331)>x332));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint32_t x333 = 619254U;
	volatile int8_t x334 = -15;
	int16_t x336 = INT16_MIN;

    t83 = (x333&((x334==x335)>x336));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	uint16_t x338 = 32619U;
	uint64_t x339 = UINT64_MAX;
	volatile int32_t t84 = -7;

    t84 = (x337&((x338==x339)>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 981U;
	int8_t x342 = 1;
	int64_t x344 = 47387782451551LL;

    t85 = (x341&((x342==x343)>x344));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = -45136089LL;
	volatile int16_t x347 = INT16_MAX;
	int8_t x348 = 31;
	static volatile int64_t t86 = 12759765LL;

    t86 = (x345&((x346==x347)>x348));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = 3662;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MIN;
	static int32_t t87 = 18608984;

    t87 = (x349&((x350==x351)>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MAX;
	int16_t x355 = INT16_MAX;
	volatile int64_t t88 = 33LL;

    t88 = (x353&((x354==x355)>x356));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint64_t x357 = UINT64_MAX;
	uint8_t x358 = 1U;
	int32_t x359 = -842503;
	static volatile int64_t x360 = 2074278763095438LL;
	volatile uint64_t t89 = 1230980149279781LLU;

    t89 = (x357&((x358==x359)>x360));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = -1;
	int32_t x362 = -1;
	static int16_t x363 = INT16_MIN;
	int8_t x364 = 32;
	int32_t t90 = -45;

    t90 = (x361&((x362==x363)>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x367 = UINT8_MAX;
	static int16_t x368 = -12;
	static int32_t t91 = 24136634;

    t91 = (x365&((x366==x367)>x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -3;
	static int64_t x371 = INT64_MIN;
	int32_t t92 = -1;

    t92 = (x369&((x370==x371)>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 577U;
	static volatile int8_t x374 = INT8_MAX;
	uint16_t x375 = 6U;
	int32_t x376 = -1;
	uint32_t t93 = 8865U;

    t93 = (x373&((x374==x375)>x376));

    if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = INT32_MIN;
	int32_t x379 = 0;
	int16_t x380 = INT16_MIN;
	static int32_t t94 = -4005159;

    t94 = (x377&((x378==x379)>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -15;
	int16_t x382 = 0;
	volatile uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MAX;
	volatile int32_t t95 = -1379234;

    t95 = (x381&((x382==x383)>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 11U;
	volatile uint8_t x386 = UINT8_MAX;
	int32_t x387 = -84;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 168963710;

    t96 = (x385&((x386==x387)>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x389 = 6U;
	uint8_t x390 = UINT8_MAX;
	volatile uint64_t x392 = 2443LLU;

    t97 = (x389&((x390==x391)>x392));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x393 = 63335272283LL;
	int32_t x394 = 15;
	int8_t x395 = INT8_MIN;
	int32_t x396 = 9;
	int64_t t98 = 78681LL;

    t98 = (x393&((x394==x395)>x396));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	uint32_t x399 = 8142U;
	int8_t x400 = 0;
	int32_t t99 = -12852853;

    t99 = (x397&((x398==x399)>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = INT16_MIN;
	int8_t x402 = INT8_MIN;
	int64_t x403 = -1579684256LL;
	int16_t x404 = -1;
	int32_t t100 = 5;

    t100 = (x401&((x402==x403)>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = INT64_MAX;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = UINT8_MAX;
	volatile uint64_t t101 = 2524343333850578595LLU;

    t101 = (x405&((x406==x407)>x408));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 7;
	static int64_t x410 = -12432837070LL;
	int64_t x411 = INT64_MIN;
	static volatile int64_t x412 = 1390LL;
	int32_t t102 = 990;

    t102 = (x409&((x410==x411)>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = 12004;
	int8_t x414 = -1;
	int16_t x415 = -1;
	int32_t x416 = INT32_MIN;
	int32_t t103 = -2;

    t103 = (x413&((x414==x415)>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = -1;
	int32_t x418 = INT32_MIN;
	volatile int64_t x419 = -1LL;

    t104 = (x417&((x418==x419)>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = 15;
	uint64_t x422 = 6113843LLU;
	int8_t x423 = -1;
	int32_t x424 = -1;
	volatile int32_t t105 = -57694;

    t105 = (x421&((x422==x423)>x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 0;
	volatile uint16_t x426 = UINT16_MAX;
	uint32_t x427 = UINT32_MAX;
	int32_t x428 = INT32_MAX;
	int32_t t106 = 147;

    t106 = (x425&((x426==x427)>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	int64_t x430 = 367450LL;
	int8_t x431 = INT8_MAX;
	int16_t x432 = INT16_MAX;
	static int32_t t107 = 1;

    t107 = (x429&((x430==x431)>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	static int16_t x434 = INT16_MIN;
	int64_t t108 = 50849068106391953LL;

    t108 = (x433&((x434==x435)>x436));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x437 = -1;
	int64_t x438 = -1LL;
	uint32_t x439 = 1U;
	int32_t t109 = -2609;

    t109 = (x437&((x438==x439)>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	int64_t x442 = 3LL;
	static int8_t x443 = INT8_MIN;
	uint8_t x444 = 117U;
	volatile uint64_t t110 = 545392529032LLU;

    t110 = (x441&((x442==x443)>x444));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = 184;
	int8_t x446 = 62;
	static int64_t x447 = INT64_MAX;
	int64_t x448 = INT64_MAX;

    t111 = (x445&((x446==x447)>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	int32_t x452 = INT32_MIN;
	uint32_t t112 = 1200U;

    t112 = (x449&((x450==x451)>x452));

    if (t112 != 1U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 67090082;
	uint64_t x454 = UINT64_MAX;
	uint16_t x456 = 13U;

    t113 = (x453&((x454==x455)>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	static volatile int64_t x460 = 254895LL;
	int32_t t114 = 223;

    t114 = (x457&((x458==x459)>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 309U;
	volatile int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MIN;
	int32_t x464 = -1397607;
	int32_t t115 = -747;

    t115 = (x461&((x462==x463)>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -3278037139540LL;
	uint64_t x466 = 22994LLU;
	int64_t t116 = -37710034LL;

    t116 = (x465&((x466==x467)>x468));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x470 = UINT8_MAX;
	int32_t x471 = 117;
	int8_t x472 = INT8_MAX;

    t117 = (x469&((x470==x471)>x472));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x473 = INT16_MIN;
	volatile int8_t x474 = 0;
	volatile int16_t x475 = INT16_MIN;
	int16_t x476 = 2;
	static int32_t t118 = 477362;

    t118 = (x473&((x474==x475)>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x479 = 27LLU;
	volatile int32_t x480 = INT32_MAX;
	int64_t t119 = 578779297LL;

    t119 = (x477&((x478==x479)>x480));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int32_t x482 = 222558;
	int8_t x483 = -1;
	static int32_t x484 = INT32_MIN;
	volatile int32_t t120 = -8315651;

    t120 = (x481&((x482==x483)>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -41397906;
	int64_t x486 = INT64_MIN;
	volatile uint32_t x487 = UINT32_MAX;
	int32_t x488 = INT32_MAX;
	volatile int32_t t121 = -73;

    t121 = (x485&((x486==x487)>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 233;
	int64_t x490 = INT64_MIN;
	static int64_t x492 = -1LL;
	volatile int32_t t122 = 105216;

    t122 = (x489&((x490==x491)>x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = -1;
	uint8_t x495 = 23U;
	static int8_t x496 = INT8_MIN;
	int32_t t123 = -20127940;

    t123 = (x493&((x494==x495)>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint64_t x497 = 12329490045376974LLU;
	static uint8_t x498 = UINT8_MAX;
	volatile int32_t x499 = -1;
	uint8_t x500 = 0U;
	volatile uint64_t t124 = 275092254521619310LLU;

    t124 = (x497&((x498==x499)>x500));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x502 = UINT8_MAX;
	int16_t x503 = 0;
	static int32_t x504 = 2512;

    t125 = (x501&((x502==x503)>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = -6;
	volatile int16_t x507 = -1;
	int32_t x508 = INT32_MIN;
	volatile int32_t t126 = -269035;

    t126 = (x505&((x506==x507)>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = 1;
	int32_t x510 = INT32_MIN;
	static uint64_t x512 = 310568854451LLU;

    t127 = (x509&((x510==x511)>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x513 = UINT16_MAX;
	int64_t x515 = INT64_MIN;
	int32_t t128 = 1478676;

    t128 = (x513&((x514==x515)>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	int64_t x518 = -528472LL;
	uint64_t x519 = UINT64_MAX;
	static uint16_t x520 = 7540U;
	int32_t t129 = 33200555;

    t129 = (x517&((x518==x519)>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 170484531U;
	static int64_t x523 = INT64_MIN;
	static volatile uint32_t t130 = 686459993U;

    t130 = (x521&((x522==x523)>x524));

    if (t130 != 1U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MAX;
	int32_t x526 = 127920;
	uint8_t x527 = 26U;
	volatile int64_t t131 = 23511733518910LL;

    t131 = (x525&((x526==x527)>x528));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1;
	int16_t x530 = -1;
	int64_t x532 = -1LL;
	volatile int32_t t132 = -822227;

    t132 = (x529&((x530==x531)>x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 1781U;
	volatile uint32_t x534 = 58U;
	static uint64_t x535 = 1584LLU;
	uint32_t t133 = 611689U;

    t133 = (x533&((x534==x535)>x536));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x537 = 29U;
	uint8_t x538 = 5U;
	int8_t x539 = -1;

    t134 = (x537&((x538==x539)>x540));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = INT32_MIN;
	int16_t x542 = 1;
	int32_t x543 = INT32_MIN;
	int32_t x544 = 199;

    t135 = (x541&((x542==x543)>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 284LLU;
	int32_t x546 = 6553396;
	volatile uint16_t x547 = 8U;
	int64_t x548 = -30LL;
	uint64_t t136 = 30472726285251937LLU;

    t136 = (x545&((x546==x547)>x548));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x550 = 47U;
	int64_t x551 = -1316505351LL;
	volatile int32_t t137 = -9;

    t137 = (x549&((x550==x551)>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x553 = INT64_MIN;
	volatile int32_t x554 = -1;
	uint64_t x555 = 78336882LLU;
	static volatile int64_t t138 = 12827LL;

    t138 = (x553&((x554==x555)>x556));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x558 = -911210;
	int32_t x559 = 80;
	volatile int16_t x560 = 249;
	static int64_t t139 = 34272056528907495LL;

    t139 = (x557&((x558==x559)>x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = INT32_MAX;
	volatile int8_t x563 = 0;
	uint64_t x564 = 22674623195838830LLU;
	volatile int32_t t140 = 36308780;

    t140 = (x561&((x562==x563)>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	int8_t x566 = INT8_MIN;
	int16_t x567 = INT16_MAX;
	int16_t x568 = INT16_MIN;
	volatile int32_t t141 = -3;

    t141 = (x565&((x566==x567)>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = INT16_MIN;
	int8_t x572 = INT8_MIN;
	volatile uint32_t t142 = 2547U;

    t142 = (x569&((x570==x571)>x572));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x573 = -1645001;
	int32_t x575 = -1;
	uint16_t x576 = UINT16_MAX;
	int32_t t143 = 2054400;

    t143 = (x573&((x574==x575)>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 244U;
	int8_t x580 = -1;
	int32_t t144 = -658416;

    t144 = (x577&((x578==x579)>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = -1;
	int64_t x582 = INT64_MIN;
	uint64_t x583 = 366349750539713511LLU;
	static int8_t x584 = 1;
	int32_t t145 = -423;

    t145 = (x581&((x582==x583)>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x585 = INT32_MAX;
	int8_t x586 = INT8_MIN;
	static volatile int16_t x587 = 49;
	static uint8_t x588 = 7U;
	int32_t t146 = -110896329;

    t146 = (x585&((x586==x587)>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	volatile int16_t x590 = -1;
	static int8_t x591 = -1;
	int16_t x592 = INT16_MIN;
	volatile int32_t t147 = -110;

    t147 = (x589&((x590==x591)>x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x594 = INT32_MIN;
	uint8_t x595 = 43U;
	uint32_t t148 = 4044U;

    t148 = (x593&((x594==x595)>x596));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MAX;
	volatile int8_t x598 = INT8_MAX;
	int32_t x599 = INT32_MIN;
	int16_t x600 = INT16_MAX;
	int32_t t149 = 3;

    t149 = (x597&((x598==x599)>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x603 = UINT32_MAX;
	int16_t x604 = -59;
	volatile int64_t t150 = 0LL;

    t150 = (x601&((x602==x603)>x604));

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x605 = 1846810LLU;
	volatile int8_t x606 = INT8_MAX;
	volatile int32_t x607 = -3721;
	int16_t x608 = -1;
	volatile uint64_t t151 = 106LLU;

    t151 = (x605&((x606==x607)>x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	int16_t x610 = INT16_MAX;
	static int16_t x611 = INT16_MAX;
	uint32_t x612 = 67276U;
	volatile int32_t t152 = -46404681;

    t152 = (x609&((x610==x611)>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = -1LL;
	int32_t x614 = INT32_MIN;
	int16_t x615 = INT16_MAX;
	volatile int16_t x616 = INT16_MIN;
	int64_t t153 = -91780LL;

    t153 = (x613&((x614==x615)>x616));

    if (t153 != 1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x617 = -1;
	int64_t x618 = 6279223742194LL;
	uint32_t x619 = 24U;
	int64_t x620 = -1LL;
	static int32_t t154 = 129895347;

    t154 = (x617&((x618==x619)>x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 25U;
	uint32_t x622 = 2171159U;
	int64_t x624 = 122449LL;
	int32_t t155 = 0;

    t155 = (x621&((x622==x623)>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -134;
	static int64_t x626 = INT64_MAX;
	volatile uint16_t x627 = 21414U;
	static int8_t x628 = -1;
	static volatile int32_t t156 = 0;

    t156 = (x625&((x626==x627)>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	static int16_t x630 = INT16_MAX;
	static int32_t x632 = INT32_MIN;
	int32_t t157 = 33508913;

    t157 = (x629&((x630==x631)>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x634 = 2087U;
	static uint8_t x635 = 38U;
	static volatile int32_t t158 = 316889511;

    t158 = (x633&((x634==x635)>x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -6;
	uint8_t x638 = 61U;
	uint64_t x639 = UINT64_MAX;
	uint32_t x640 = UINT32_MAX;

    t159 = (x637&((x638==x639)>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = 0;
	int8_t x643 = INT8_MIN;
	uint16_t x644 = UINT16_MAX;

    t160 = (x641&((x642==x643)>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = 61U;
	volatile uint32_t x646 = UINT32_MAX;
	volatile int64_t x647 = INT64_MIN;
	static int16_t x648 = INT16_MIN;

    t161 = (x645&((x646==x647)>x648));

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x649 = 1U;
	volatile int16_t x650 = 0;
	int64_t x652 = 26802173LL;
	int32_t t162 = 14;

    t162 = (x649&((x650==x651)>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = INT64_MIN;
	volatile int64_t x655 = INT64_MIN;
	static volatile uint16_t x656 = UINT16_MAX;
	static int64_t t163 = -30564988701LL;

    t163 = (x653&((x654==x655)>x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	static int32_t x658 = -11;
	int64_t x659 = 0LL;
	static int32_t t164 = -85567367;

    t164 = (x657&((x658==x659)>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	static int32_t x662 = INT32_MIN;
	int8_t x663 = INT8_MIN;

    t165 = (x661&((x662==x663)>x664));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = 12210158LL;
	volatile uint64_t x666 = UINT64_MAX;
	uint8_t x667 = 0U;
	int32_t x668 = 1435129;
	static int64_t t166 = 1510210311711LL;

    t166 = (x665&((x666==x667)>x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = INT16_MIN;
	static volatile int16_t x670 = -1;
	uint16_t x671 = 9749U;
	uint64_t x672 = UINT64_MAX;
	volatile int32_t t167 = -5826;

    t167 = (x669&((x670==x671)>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x674 = -1;
	static uint8_t x675 = 60U;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t168 = -382373751;

    t168 = (x673&((x674==x675)>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x678 = 21911LLU;
	int64_t x679 = -1237578LL;
	int64_t x680 = INT64_MAX;
	int32_t t169 = 67945827;

    t169 = (x677&((x678==x679)>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x683 = 65467LLU;
	volatile int32_t t170 = -65701434;

    t170 = (x681&((x682==x683)>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x687 = 1396922200487LLU;
	int8_t x688 = INT8_MIN;
	int64_t t171 = 89LL;

    t171 = (x685&((x686==x687)>x688));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -16172033073LL;
	uint16_t x690 = UINT16_MAX;
	volatile int64_t x692 = -1LL;
	int64_t t172 = 284160347800197577LL;

    t172 = (x689&((x690==x691)>x692));

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -85;
	int64_t x694 = INT64_MAX;
	static uint8_t x696 = 8U;

    t173 = (x693&((x694==x695)>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = -1LL;
	volatile int16_t x699 = -1;
	volatile int16_t x700 = -1;
	volatile int32_t t174 = 54;

    t174 = (x697&((x698==x699)>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = -10994309;
	volatile uint8_t x702 = 0U;
	int32_t x703 = INT32_MIN;
	volatile uint32_t x704 = 4U;
	static volatile int32_t t175 = 6;

    t175 = (x701&((x702==x703)>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = INT8_MAX;
	uint32_t x707 = 78558U;
	int16_t x708 = INT16_MIN;
	int32_t t176 = 1222670;

    t176 = (x705&((x706==x707)>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 607U;
	static int32_t x710 = 466;
	volatile uint8_t x711 = UINT8_MAX;
	uint8_t x712 = 11U;
	int32_t t177 = -46684508;

    t177 = (x709&((x710==x711)>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x715 = INT16_MIN;
	uint8_t x716 = UINT8_MAX;
	volatile int64_t t178 = 122515320974823072LL;

    t178 = (x713&((x714==x715)>x716));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	uint32_t x718 = 1U;
	uint8_t x719 = 28U;
	volatile int16_t x720 = -66;
	static volatile int32_t t179 = 56062;

    t179 = (x717&((x718==x719)>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 1LLU;
	uint16_t x722 = UINT16_MAX;
	int8_t x723 = INT8_MIN;
	static volatile uint64_t t180 = 2759906208470271843LLU;

    t180 = (x721&((x722==x723)>x724));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = 22087U;
	volatile int16_t x726 = INT16_MIN;
	int32_t x727 = -12687;
	volatile int64_t x728 = INT64_MAX;
	volatile int32_t t181 = -6224016;

    t181 = (x725&((x726==x727)>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 825U;
	static uint16_t x730 = 3416U;
	uint32_t t182 = 677663771U;

    t182 = (x729&((x730==x731)>x732));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = UINT8_MAX;
	uint64_t x734 = 51936255985382343LLU;
	volatile int64_t x735 = -1LL;
	int32_t t183 = -1610;

    t183 = (x733&((x734==x735)>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = 0;
	volatile int32_t x738 = -1;
	uint8_t x739 = 24U;
	volatile int32_t x740 = INT32_MAX;
	static volatile int32_t t184 = -1;

    t184 = (x737&((x738==x739)>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x741 = 314;
	int8_t x743 = INT8_MIN;
	int16_t x744 = -4339;
	int32_t t185 = -25;

    t185 = (x741&((x742==x743)>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x746 = INT64_MIN;
	int8_t x747 = INT8_MIN;
	static uint16_t x748 = 55U;
	int32_t t186 = -88604;

    t186 = (x745&((x746==x747)>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	volatile int64_t x750 = -274347895862464LL;
	uint8_t x751 = 1U;
	static volatile int32_t x752 = INT32_MIN;
	int32_t t187 = -1;

    t187 = (x749&((x750==x751)>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	volatile uint16_t x754 = 6291U;
	int32_t x755 = -1003831732;
	uint8_t x756 = 20U;
	volatile uint32_t t188 = 213480U;

    t188 = (x753&((x754==x755)>x756));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	int32_t x758 = INT32_MIN;
	static volatile int32_t x759 = INT32_MIN;
	uint32_t x760 = 14453541U;
	volatile int32_t t189 = 1;

    t189 = (x757&((x758==x759)>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = -2;
	int16_t x762 = INT16_MIN;
	static volatile uint16_t x763 = UINT16_MAX;
	static int16_t x764 = INT16_MAX;
	int32_t t190 = 47138;

    t190 = (x761&((x762==x763)>x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 379565U;
	int16_t x766 = -1;
	int32_t x767 = -53;
	uint32_t x768 = UINT32_MAX;
	volatile uint32_t t191 = 22504320U;

    t191 = (x765&((x766==x767)>x768));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x769 = 375U;
	static volatile int32_t x770 = -5810738;
	static int32_t x771 = 120;
	volatile uint64_t x772 = UINT64_MAX;
	volatile uint32_t t192 = 127881908U;

    t192 = (x769&((x770==x771)>x772));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x773 = INT8_MIN;
	uint64_t x774 = 7726602766085LLU;
	uint64_t x775 = UINT64_MAX;
	static uint8_t x776 = UINT8_MAX;

    t193 = (x773&((x774==x775)>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = INT32_MIN;
	uint16_t x778 = 4U;
	volatile uint32_t x779 = 1961382U;
	int32_t t194 = -8060314;

    t194 = (x777&((x778==x779)>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = 25;
	static int16_t x782 = INT16_MIN;
	uint8_t x783 = 95U;
	static uint16_t x784 = 467U;
	volatile int32_t t195 = -110529180;

    t195 = (x781&((x782==x783)>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x786 = -1LL;
	int64_t x787 = INT64_MIN;
	static int8_t x788 = INT8_MIN;
	int32_t t196 = -606;

    t196 = (x785&((x786==x787)>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -1;
	int8_t x791 = -1;
	int32_t x792 = INT32_MIN;
	volatile int32_t t197 = 306078596;

    t197 = (x789&((x790==x791)>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x794 = -11946;
	volatile int64_t x795 = -729156LL;
	static int8_t x796 = -51;
	volatile int64_t t198 = -8076300533251LL;

    t198 = (x793&((x794==x795)>x796));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = INT8_MIN;
	volatile int64_t x799 = INT64_MIN;
	volatile int8_t x800 = INT8_MAX;
	volatile int32_t t199 = 265;

    t199 = (x797&((x798==x799)>x800));

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

