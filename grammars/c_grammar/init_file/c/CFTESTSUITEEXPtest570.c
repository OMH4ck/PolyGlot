
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

static int32_t x2 = 66222;
int8_t x3 = -1;
int8_t x16 = -1;
int32_t t2 = 22515;
int32_t x17 = -5;
static int16_t x19 = INT16_MAX;
uint64_t x26 = UINT64_MAX;
static uint8_t x33 = UINT8_MAX;
int64_t x57 = INT64_MAX;
uint32_t x58 = UINT32_MAX;
int32_t t12 = 5;
volatile int32_t t14 = -1941;
static int8_t x90 = INT8_MIN;
volatile uint8_t x92 = UINT8_MAX;
int8_t x96 = INT8_MIN;
uint8_t x100 = 7U;
int64_t x101 = INT64_MIN;
int32_t x102 = -15762;
int64_t x107 = -35043793252054472LL;
uint16_t x109 = UINT16_MAX;
int32_t x116 = 43;
int8_t x120 = -1;
volatile int32_t t24 = 1;
int32_t t25 = -456081;
uint32_t x137 = UINT32_MAX;
int64_t x138 = 174747937LL;
int32_t t27 = -116;
int8_t x141 = INT8_MIN;
static int64_t x144 = 233727910LL;
volatile uint64_t x149 = UINT64_MAX;
volatile int8_t x153 = INT8_MIN;
static volatile uint64_t x157 = 53940497761LLU;
volatile int32_t t33 = 17763426;
int64_t x189 = INT64_MIN;
int32_t x190 = -1278;
uint64_t x199 = UINT64_MAX;
int16_t x200 = INT16_MAX;
static volatile int16_t x201 = -1;
volatile int32_t x205 = -1;
int8_t x207 = INT8_MIN;
int32_t t40 = 57;
uint32_t x217 = 13U;
volatile int8_t x218 = INT8_MIN;
volatile uint8_t x224 = 9U;
int16_t x226 = INT16_MIN;
int8_t x230 = INT8_MIN;
int8_t x255 = -1;
uint32_t x259 = 366916U;
int32_t x263 = INT32_MIN;
static uint8_t x267 = UINT8_MAX;
volatile int32_t x282 = -81;
static int32_t t52 = 415119;
int16_t x285 = INT16_MAX;
uint8_t x297 = 19U;
int64_t x307 = -1LL;
uint64_t x330 = UINT64_MAX;
uint16_t x331 = 42U;
volatile uint16_t x332 = 1934U;
uint16_t x335 = 1U;
volatile int16_t x336 = INT16_MAX;
int32_t x339 = -1;
volatile int32_t t64 = 672090628;
int32_t t66 = 192633894;
static uint8_t x368 = 0U;
int32_t t68 = -9;
uint32_t x373 = 162471363U;
static int8_t x376 = -51;
uint32_t x378 = UINT32_MAX;
static int32_t x389 = INT32_MIN;
uint32_t x390 = 18888008U;
uint8_t x396 = 3U;
int16_t x399 = INT16_MIN;
int32_t t73 = 5849;
int32_t t74 = -3;
int8_t x405 = INT8_MIN;
int8_t x406 = INT8_MIN;
volatile int8_t x407 = -1;
int64_t x408 = 190462717394LL;
static volatile int32_t t75 = -344524394;
int16_t x413 = INT16_MIN;
volatile int8_t x415 = INT8_MIN;
int32_t t76 = -45465;
static int64_t x420 = INT64_MIN;
static uint8_t x426 = 1U;
int8_t x435 = INT8_MIN;
volatile int32_t t80 = -16496570;
volatile int32_t t81 = 4010665;
int32_t t82 = 20;
int8_t x464 = INT8_MAX;
uint16_t x467 = UINT16_MAX;
static int8_t x473 = INT8_MAX;
int8_t x476 = -14;
volatile int32_t t86 = -1743;
int32_t x483 = INT32_MIN;
int8_t x484 = -1;
static volatile int32_t t88 = 568338;
volatile uint16_t x496 = UINT16_MAX;
volatile int8_t x497 = INT8_MAX;
static int16_t x499 = 82;
volatile uint8_t x508 = 3U;
volatile int16_t x512 = -25;
static uint8_t x517 = 41U;
int8_t x519 = INT8_MIN;
volatile int32_t t96 = -11622;
volatile int32_t x529 = INT32_MIN;
int32_t x535 = 13393;
int64_t x558 = 164495820LL;
uint8_t x565 = 14U;
uint16_t x566 = 4U;
int64_t x572 = -2872693490246193LL;
static uint16_t x575 = UINT16_MAX;
static uint32_t x579 = UINT32_MAX;
int64_t x585 = -1LL;
volatile int16_t x588 = 643;
int32_t t108 = 184;
int8_t x605 = INT8_MAX;
static int64_t x606 = -95095985424LL;
int8_t x610 = INT8_MIN;
static int8_t x611 = 0;
int32_t t114 = 16361;
int16_t x622 = INT16_MAX;
int64_t x629 = INT64_MIN;
static volatile int32_t t118 = 45184;
static int16_t x643 = -357;
volatile int32_t t120 = -41770;
uint32_t x649 = 1U;
int8_t x650 = -1;
uint64_t x651 = 400546LLU;
int32_t t122 = -171;
uint16_t x654 = 163U;
volatile int16_t x655 = 83;
int8_t x694 = -1;
static int8_t x695 = -3;
static volatile int32_t t132 = -352364438;
static int8_t x706 = 0;
volatile int32_t t134 = -225;
volatile int16_t x726 = -1;
volatile uint64_t x732 = UINT64_MAX;
volatile int32_t t138 = 32302379;
int32_t t140 = 1020;
int16_t x758 = 115;
int32_t x764 = 787090;
volatile int32_t t145 = -19566330;
volatile uint16_t x778 = 35U;
int16_t x780 = INT16_MAX;
uint32_t x784 = UINT32_MAX;
int64_t x786 = -1LL;
int32_t t151 = -4614;
int32_t x799 = -3427;
int32_t t152 = -197;
static uint16_t x812 = 31401U;
int8_t x814 = INT8_MIN;
static uint16_t x818 = UINT16_MAX;
volatile int32_t t156 = -512060475;
int32_t x821 = INT32_MIN;
uint32_t x825 = 43902723U;
int16_t x827 = -1;
int32_t x832 = -1047655083;
int32_t x833 = -1;
int8_t x836 = -2;
static int64_t x837 = INT64_MAX;
volatile int64_t x842 = -1LL;
int8_t x848 = -32;
int32_t t163 = 1;
int8_t x865 = INT8_MAX;
static volatile int64_t x867 = INT64_MIN;
int16_t x871 = 521;
int64_t x881 = -1LL;
volatile uint32_t x890 = UINT32_MAX;
uint8_t x891 = 27U;
static int64_t x896 = INT64_MIN;
static uint64_t x906 = 1949803839756842LLU;
static uint32_t x908 = UINT32_MAX;
int32_t t175 = 4583;
int32_t x910 = 3;
int16_t x912 = INT16_MIN;
static uint8_t x922 = 97U;
int8_t x925 = INT8_MAX;
uint16_t x926 = 14891U;
int8_t x927 = -1;
int64_t x932 = INT64_MAX;
static volatile int32_t t180 = 36972105;
static int16_t x943 = -1;
static int8_t x947 = -1;
int32_t x948 = 4423869;
static int16_t x951 = INT16_MIN;
uint8_t x952 = 27U;
volatile int32_t x959 = INT32_MAX;
volatile int32_t t186 = 40;
int8_t x969 = INT8_MIN;
uint64_t x976 = 3LLU;
static int8_t x977 = -1;
uint64_t x979 = 184211050LLU;
static int16_t x992 = -3364;
static int8_t x994 = 0;
int8_t x1002 = 1;
volatile uint8_t x1006 = UINT8_MAX;
int64_t x1008 = -14LL;
static int32_t t194 = -3;
int32_t x1015 = -1;
int64_t x1025 = 225848216LL;
volatile int8_t x1033 = 0;


void f0(void) {
    	volatile uint8_t x1 = 5U;
	volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 65367;

    t0 = (x1<=((x2*x3)|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x9 = -401950256744127LL;
	static uint64_t x10 = UINT64_MAX;
	static int16_t x11 = INT16_MIN;
	static volatile int32_t x12 = INT32_MAX;
	volatile int32_t t1 = 24;

    t1 = (x9<=((x10*x11)|x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x13 = -595435LL;
	int8_t x14 = INT8_MAX;
	int64_t x15 = -269977557944LL;

    t2 = (x13<=((x14*x15)|x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x18 = -1;
	uint16_t x20 = UINT16_MAX;
	int32_t t3 = -839714631;

    t3 = (x17<=((x18*x19)|x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = INT64_MAX;
	static volatile uint64_t x27 = UINT64_MAX;
	volatile int8_t x28 = -58;
	volatile int32_t t4 = 47;

    t4 = (x25<=((x26*x27)|x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x34 = -1;
	int8_t x35 = -62;
	uint64_t x36 = 881LLU;
	volatile int32_t t5 = 443760;

    t5 = (x33<=((x34*x35)|x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x41 = INT64_MIN;
	uint8_t x42 = 2U;
	volatile uint64_t x43 = 1285802682821666168LLU;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t6 = -3;

    t6 = (x41<=((x42*x43)|x44));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x45 = 2U;
	volatile int8_t x46 = INT8_MAX;
	int8_t x47 = INT8_MIN;
	volatile int32_t x48 = INT32_MIN;
	int32_t t7 = 896434323;

    t7 = (x45<=((x46*x47)|x48));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x49 = 929602980318677594LLU;
	int16_t x50 = 0;
	int16_t x51 = INT16_MAX;
	static int64_t x52 = -1LL;
	volatile int32_t t8 = 600;

    t8 = (x49<=((x50*x51)|x52));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x59 = UINT64_MAX;
	int8_t x60 = 6;
	static int32_t t9 = 1;

    t9 = (x57<=((x58*x59)|x60));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x65 = INT64_MIN;
	uint64_t x66 = UINT64_MAX;
	int64_t x67 = -2814LL;
	int64_t x68 = INT64_MIN;
	int32_t t10 = -310447;

    t10 = (x65<=((x66*x67)|x68));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x69 = 148433U;
	int16_t x70 = INT16_MIN;
	int16_t x71 = 0;
	volatile int32_t x72 = -1;
	int32_t t11 = -8122;

    t11 = (x69<=((x70*x71)|x72));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x73 = INT16_MAX;
	uint16_t x74 = UINT16_MAX;
	static int16_t x75 = 60;
	uint64_t x76 = UINT64_MAX;

    t12 = (x73<=((x74*x75)|x76));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x77 = -884280480LL;
	volatile uint64_t x78 = 2548801LLU;
	int64_t x79 = INT64_MAX;
	int16_t x80 = -311;
	volatile int32_t t13 = 15331;

    t13 = (x77<=((x78*x79)|x80));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x85 = UINT32_MAX;
	uint32_t x86 = 218U;
	int8_t x87 = INT8_MAX;
	int16_t x88 = INT16_MIN;

    t14 = (x85<=((x86*x87)|x88));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x89 = INT8_MIN;
	static uint64_t x91 = UINT64_MAX;
	volatile int32_t t15 = -100415;

    t15 = (x89<=((x90*x91)|x92));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x93 = 113;
	static volatile uint32_t x94 = 819858468U;
	static uint32_t x95 = UINT32_MAX;
	int32_t t16 = -213914870;

    t16 = (x93<=((x94*x95)|x96));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x97 = -1;
	uint64_t x98 = 7223LLU;
	volatile int16_t x99 = -1;
	volatile int32_t t17 = -2841251;

    t17 = (x97<=((x98*x99)|x100));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x103 = 48U;
	static int16_t x104 = 15029;
	int32_t t18 = 385440;

    t18 = (x101<=((x102*x103)|x104));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x105 = -2;
	volatile uint64_t x106 = UINT64_MAX;
	volatile int32_t x108 = -1;
	int32_t t19 = -130441;

    t19 = (x105<=((x106*x107)|x108));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x110 = INT64_MIN;
	uint32_t x111 = 0U;
	int64_t x112 = INT64_MAX;
	int32_t t20 = 195569623;

    t20 = (x109<=((x110*x111)|x112));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x113 = 155816802LLU;
	int64_t x114 = INT64_MIN;
	static uint32_t x115 = 1U;
	static volatile int32_t t21 = -24;

    t21 = (x113<=((x114*x115)|x116));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x117 = UINT8_MAX;
	int8_t x118 = -1;
	volatile uint8_t x119 = UINT8_MAX;
	int32_t t22 = 2;

    t22 = (x117<=((x118*x119)|x120));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x121 = -1;
	volatile uint8_t x122 = 3U;
	volatile int32_t x123 = 31;
	int16_t x124 = INT16_MIN;
	int32_t t23 = 33;

    t23 = (x121<=((x122*x123)|x124));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x125 = 1539413645640738LLU;
	int16_t x126 = INT16_MAX;
	int8_t x127 = 1;
	static uint32_t x128 = 1496940471U;

    t24 = (x125<=((x126*x127)|x128));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x129 = 1U;
	uint64_t x130 = 93LLU;
	int64_t x131 = INT64_MIN;
	int32_t x132 = INT32_MIN;

    t25 = (x129<=((x130*x131)|x132));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x133 = 58;
	uint64_t x134 = 658974LLU;
	uint32_t x135 = 9U;
	static int32_t x136 = INT32_MAX;
	volatile int32_t t26 = 36942453;

    t26 = (x133<=((x134*x135)|x136));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x139 = UINT32_MAX;
	int8_t x140 = INT8_MIN;

    t27 = (x137<=((x138*x139)|x140));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x142 = UINT16_MAX;
	uint8_t x143 = 15U;
	volatile int32_t t28 = -19422;

    t28 = (x141<=((x142*x143)|x144));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x150 = INT8_MAX;
	int16_t x151 = INT16_MIN;
	int8_t x152 = -1;
	static volatile int32_t t29 = -1572;

    t29 = (x149<=((x150*x151)|x152));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x154 = INT16_MAX;
	static volatile int32_t x155 = 26;
	static uint8_t x156 = 7U;
	static volatile int32_t t30 = -803023320;

    t30 = (x153<=((x154*x155)|x156));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x158 = INT64_MAX;
	volatile uint16_t x159 = 0U;
	int64_t x160 = INT64_MAX;
	volatile int32_t t31 = 6;

    t31 = (x157<=((x158*x159)|x160));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x161 = 3175608LLU;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MAX;
	uint64_t x164 = UINT64_MAX;
	int32_t t32 = -5179;

    t32 = (x161<=((x162*x163)|x164));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x173 = INT16_MAX;
	uint32_t x174 = 2U;
	int32_t x175 = -933108297;
	static uint64_t x176 = 831525309319915714LLU;

    t33 = (x173<=((x174*x175)|x176));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x177 = -1;
	int8_t x178 = INT8_MIN;
	int16_t x179 = -1;
	int64_t x180 = INT64_MIN;
	int32_t t34 = -5;

    t34 = (x177<=((x178*x179)|x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x181 = 793013LLU;
	static uint32_t x182 = 0U;
	static int32_t x183 = -1;
	volatile uint64_t x184 = 106LLU;
	static int32_t t35 = -67165243;

    t35 = (x181<=((x182*x183)|x184));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x191 = -6958;
	volatile uint64_t x192 = UINT64_MAX;
	volatile int32_t t36 = 93;

    t36 = (x189<=((x190*x191)|x192));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x193 = 1U;
	volatile uint32_t x194 = 64010760U;
	volatile uint16_t x195 = 64U;
	static int64_t x196 = INT64_MIN;
	volatile int32_t t37 = 493;

    t37 = (x193<=((x194*x195)|x196));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x197 = UINT8_MAX;
	uint8_t x198 = 9U;
	volatile int32_t t38 = -692773;

    t38 = (x197<=((x198*x199)|x200));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x202 = INT32_MAX;
	static uint32_t x203 = UINT32_MAX;
	int8_t x204 = INT8_MAX;
	static int32_t t39 = -111635240;

    t39 = (x201<=((x202*x203)|x204));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x206 = -1LL;
	int32_t x208 = INT32_MAX;

    t40 = (x205<=((x206*x207)|x208));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x219 = 31831642516225LLU;
	volatile int32_t x220 = 1872;
	volatile int32_t t41 = 116436;

    t41 = (x217<=((x218*x219)|x220));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x221 = 6016U;
	int8_t x222 = 34;
	static volatile uint32_t x223 = UINT32_MAX;
	volatile int32_t t42 = 1;

    t42 = (x221<=((x222*x223)|x224));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x225 = UINT64_MAX;
	static uint8_t x227 = 1U;
	uint64_t x228 = UINT64_MAX;
	static int32_t t43 = 1101075;

    t43 = (x225<=((x226*x227)|x228));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x229 = UINT16_MAX;
	uint16_t x231 = 4U;
	int32_t x232 = 429203;
	static volatile int32_t t44 = 0;

    t44 = (x229<=((x230*x231)|x232));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x237 = -62759LL;
	volatile int8_t x238 = -45;
	volatile int8_t x239 = 12;
	volatile int32_t x240 = INT32_MIN;
	int32_t t45 = -558032;

    t45 = (x237<=((x238*x239)|x240));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x253 = INT64_MIN;
	static volatile uint32_t x254 = UINT32_MAX;
	int64_t x256 = INT64_MIN;
	volatile int32_t t46 = 656;

    t46 = (x253<=((x254*x255)|x256));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MIN;
	uint32_t x260 = 410U;
	volatile int32_t t47 = 3;

    t47 = (x257<=((x258*x259)|x260));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint64_t x261 = 1981109688LLU;
	int16_t x262 = 0;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t48 = -11;

    t48 = (x261<=((x262*x263)|x264));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x265 = 1;
	int16_t x266 = 1;
	static int64_t x268 = -32826LL;
	static volatile int32_t t49 = -1;

    t49 = (x265<=((x266*x267)|x268));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x269 = INT32_MIN;
	uint16_t x270 = 2235U;
	static int64_t x271 = -1LL;
	volatile int8_t x272 = -1;
	volatile int32_t t50 = 0;

    t50 = (x269<=((x270*x271)|x272));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x277 = 1526078928LL;
	int8_t x278 = -2;
	volatile uint64_t x279 = 7LLU;
	uint16_t x280 = UINT16_MAX;
	int32_t t51 = -395046940;

    t51 = (x277<=((x278*x279)|x280));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x281 = UINT16_MAX;
	volatile int64_t x283 = -1LL;
	static volatile int64_t x284 = INT64_MIN;

    t52 = (x281<=((x282*x283)|x284));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x286 = -1;
	int64_t x287 = -1LL;
	int64_t x288 = INT64_MAX;
	volatile int32_t t53 = -225222489;

    t53 = (x285<=((x286*x287)|x288));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x298 = 5798979449LLU;
	static uint8_t x299 = UINT8_MAX;
	int64_t x300 = 211260LL;
	volatile int32_t t54 = 55832;

    t54 = (x297<=((x298*x299)|x300));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x305 = -1;
	uint8_t x306 = UINT8_MAX;
	volatile int16_t x308 = 0;
	static volatile int32_t t55 = -244259;

    t55 = (x305<=((x306*x307)|x308));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x309 = 0U;
	uint8_t x310 = 20U;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t56 = -7;

    t56 = (x309<=((x310*x311)|x312));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x317 = 1LL;
	uint32_t x318 = 2817700U;
	volatile int16_t x319 = -13;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t57 = -1;

    t57 = (x317<=((x318*x319)|x320));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x321 = INT8_MIN;
	int64_t x322 = -1LL;
	static volatile uint64_t x323 = 623275701987383575LLU;
	uint64_t x324 = 722026557394224LLU;
	volatile int32_t t58 = -42;

    t58 = (x321<=((x322*x323)|x324));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x325 = 13028U;
	int32_t x326 = INT32_MAX;
	volatile uint32_t x327 = 294963U;
	uint64_t x328 = 52486447262208LLU;
	volatile int32_t t59 = -29;

    t59 = (x325<=((x326*x327)|x328));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x329 = 1U;
	volatile int32_t t60 = -58;

    t60 = (x329<=((x330*x331)|x332));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x333 = INT8_MAX;
	int16_t x334 = -1;
	static volatile int32_t t61 = -89987728;

    t61 = (x333<=((x334*x335)|x336));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x337 = 9U;
	int32_t x338 = -169833;
	int32_t x340 = 109;
	volatile int32_t t62 = 1;

    t62 = (x337<=((x338*x339)|x340));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x345 = 38562293700LL;
	static int16_t x346 = INT16_MAX;
	int8_t x347 = 1;
	uint8_t x348 = 24U;
	volatile int32_t t63 = 3069404;

    t63 = (x345<=((x346*x347)|x348));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x349 = 19U;
	uint64_t x350 = UINT64_MAX;
	int16_t x351 = INT16_MAX;
	uint32_t x352 = 0U;

    t64 = (x349<=((x350*x351)|x352));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x353 = -1;
	uint8_t x354 = 12U;
	uint16_t x355 = 3240U;
	int8_t x356 = 3;
	int32_t t65 = 677960;

    t65 = (x353<=((x354*x355)|x356));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x361 = UINT64_MAX;
	static int16_t x362 = 0;
	static int16_t x363 = INT16_MIN;
	int8_t x364 = -2;

    t66 = (x361<=((x362*x363)|x364));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x365 = INT32_MAX;
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MAX;
	volatile int32_t t67 = 25441;

    t67 = (x365<=((x366*x367)|x368));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x369 = INT32_MIN;
	int32_t x370 = -22229648;
	int16_t x371 = -2;
	uint16_t x372 = 17889U;

    t68 = (x369<=((x370*x371)|x372));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x374 = 10438077345628LLU;
	volatile uint32_t x375 = 125740511U;
	static int32_t t69 = -2;

    t69 = (x373<=((x374*x375)|x376));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x377 = 258754687873LLU;
	int8_t x379 = INT8_MIN;
	int32_t x380 = 1;
	volatile int32_t t70 = -118267586;

    t70 = (x377<=((x378*x379)|x380));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x391 = INT8_MIN;
	uint64_t x392 = 503809LLU;
	int32_t t71 = -11;

    t71 = (x389<=((x390*x391)|x392));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x393 = 1;
	static int8_t x394 = INT8_MAX;
	uint32_t x395 = UINT32_MAX;
	volatile int32_t t72 = 50535615;

    t72 = (x393<=((x394*x395)|x396));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x397 = 619202;
	int16_t x398 = -1;
	int8_t x400 = INT8_MIN;

    t73 = (x397<=((x398*x399)|x400));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x401 = -189942;
	int32_t x402 = -108213;
	static int16_t x403 = -15;
	volatile int64_t x404 = -5153020367174980LL;

    t74 = (x401<=((x402*x403)|x404));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    

    t75 = (x405<=((x406*x407)|x408));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x414 = 282723585U;
	static int32_t x416 = 313;

    t76 = (x413<=((x414*x415)|x416));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x417 = 2636;
	uint32_t x418 = 148515U;
	int16_t x419 = -1;
	int32_t t77 = -15370;

    t77 = (x417<=((x418*x419)|x420));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x421 = UINT64_MAX;
	static int32_t x422 = -1;
	uint16_t x423 = 57U;
	uint32_t x424 = 15U;
	static volatile int32_t t78 = 613425;

    t78 = (x421<=((x422*x423)|x424));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x425 = 8;
	uint16_t x427 = UINT16_MAX;
	int32_t x428 = INT32_MAX;
	int32_t t79 = 235;

    t79 = (x425<=((x426*x427)|x428));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x433 = -3513;
	int16_t x434 = INT16_MAX;
	uint16_t x436 = 6428U;

    t80 = (x433<=((x434*x435)|x436));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x445 = 3043195U;
	static volatile int16_t x446 = -9;
	static int32_t x447 = 40174;
	static int8_t x448 = -1;

    t81 = (x445<=((x446*x447)|x448));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x457 = INT64_MIN;
	int16_t x458 = INT16_MIN;
	int8_t x459 = INT8_MIN;
	int16_t x460 = -1;

    t82 = (x457<=((x458*x459)|x460));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x461 = 27283LLU;
	static uint32_t x462 = 216U;
	int8_t x463 = -62;
	volatile int32_t t83 = 0;

    t83 = (x461<=((x462*x463)|x464));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x465 = -7853645;
	uint64_t x466 = UINT64_MAX;
	int16_t x468 = -1;
	static int32_t t84 = 177991490;

    t84 = (x465<=((x466*x467)|x468));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x469 = -1;
	int16_t x470 = -1;
	static uint16_t x471 = 3U;
	int32_t x472 = -1143135;
	volatile int32_t t85 = -135094;

    t85 = (x469<=((x470*x471)|x472));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x474 = -32133;
	volatile uint64_t x475 = UINT64_MAX;

    t86 = (x473<=((x474*x475)|x476));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x481 = INT32_MAX;
	volatile uint64_t x482 = UINT64_MAX;
	int32_t t87 = 2;

    t87 = (x481<=((x482*x483)|x484));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x485 = 3;
	int64_t x486 = -1LL;
	int32_t x487 = INT32_MAX;
	volatile int16_t x488 = 0;

    t88 = (x485<=((x486*x487)|x488));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x489 = 11U;
	volatile uint32_t x490 = 100U;
	int32_t x491 = -291407;
	int32_t x492 = INT32_MAX;
	volatile int32_t t89 = 62984;

    t89 = (x489<=((x490*x491)|x492));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x493 = INT16_MIN;
	static int8_t x494 = -1;
	int16_t x495 = 0;
	static volatile int32_t t90 = 6524197;

    t90 = (x493<=((x494*x495)|x496));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x498 = -2;
	int8_t x500 = INT8_MIN;
	static int32_t t91 = 336729754;

    t91 = (x497<=((x498*x499)|x500));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x501 = 1;
	volatile uint8_t x502 = 96U;
	static uint64_t x503 = 36098336401LLU;
	volatile int32_t x504 = INT32_MIN;
	volatile int32_t t92 = -1994;

    t92 = (x501<=((x502*x503)|x504));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x505 = -10;
	uint8_t x506 = UINT8_MAX;
	static int8_t x507 = INT8_MIN;
	volatile int32_t t93 = -97626716;

    t93 = (x505<=((x506*x507)|x508));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x509 = 5817477U;
	uint64_t x510 = 10947683992LLU;
	static uint64_t x511 = 522580LLU;
	int32_t t94 = -15;

    t94 = (x509<=((x510*x511)|x512));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x518 = 44756771LLU;
	static int64_t x520 = INT64_MIN;
	int32_t t95 = 6671;

    t95 = (x517<=((x518*x519)|x520));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x521 = 15;
	int8_t x522 = -1;
	int8_t x523 = -1;
	int8_t x524 = INT8_MIN;

    t96 = (x521<=((x522*x523)|x524));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x525 = UINT64_MAX;
	static volatile int64_t x526 = -34136953295LL;
	uint16_t x527 = 169U;
	volatile uint64_t x528 = 3LLU;
	static int32_t t97 = 69801386;

    t97 = (x525<=((x526*x527)|x528));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x530 = INT8_MAX;
	int32_t x531 = 60;
	int16_t x532 = INT16_MIN;
	static int32_t t98 = 11108124;

    t98 = (x529<=((x530*x531)|x532));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x533 = 519U;
	uint64_t x534 = 2563827652LLU;
	uint16_t x536 = UINT16_MAX;
	int32_t t99 = 27494515;

    t99 = (x533<=((x534*x535)|x536));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x545 = INT16_MAX;
	volatile uint16_t x546 = 3U;
	uint8_t x547 = 16U;
	int8_t x548 = 4;
	int32_t t100 = -3579;

    t100 = (x545<=((x546*x547)|x548));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x549 = INT32_MAX;
	uint32_t x550 = 4166228U;
	int64_t x551 = -1LL;
	int8_t x552 = -1;
	volatile int32_t t101 = 23436;

    t101 = (x549<=((x550*x551)|x552));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x557 = -1;
	int32_t x559 = INT32_MAX;
	int8_t x560 = -1;
	static volatile int32_t t102 = -213;

    t102 = (x557<=((x558*x559)|x560));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x561 = 45U;
	uint8_t x562 = 11U;
	uint8_t x563 = 0U;
	volatile int16_t x564 = INT16_MIN;
	int32_t t103 = -1634817;

    t103 = (x561<=((x562*x563)|x564));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x567 = 57;
	static int8_t x568 = INT8_MIN;
	volatile int32_t t104 = -1612;

    t104 = (x565<=((x566*x567)|x568));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x569 = 1U;
	int8_t x570 = INT8_MIN;
	uint8_t x571 = 0U;
	volatile int32_t t105 = -82;

    t105 = (x569<=((x570*x571)|x572));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x573 = UINT16_MAX;
	int16_t x574 = -1;
	volatile int32_t x576 = 195676;
	volatile int32_t t106 = 78682182;

    t106 = (x573<=((x574*x575)|x576));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x577 = 22U;
	uint64_t x578 = 66230328183LLU;
	int32_t x580 = 46;
	int32_t t107 = -2778;

    t107 = (x577<=((x578*x579)|x580));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x586 = -9;
	int8_t x587 = INT8_MIN;

    t108 = (x585<=((x586*x587)|x588));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x593 = 0U;
	static int16_t x594 = -3369;
	int8_t x595 = 32;
	static int16_t x596 = -1;
	static volatile int32_t t109 = 961236;

    t109 = (x593<=((x594*x595)|x596));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x597 = INT32_MAX;
	volatile int16_t x598 = -1;
	uint16_t x599 = UINT16_MAX;
	static uint64_t x600 = 2775370LLU;
	int32_t t110 = 1284;

    t110 = (x597<=((x598*x599)|x600));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x601 = INT64_MIN;
	static int8_t x602 = INT8_MIN;
	uint8_t x603 = 0U;
	static int16_t x604 = -164;
	int32_t t111 = -386352;

    t111 = (x601<=((x602*x603)|x604));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x607 = INT8_MAX;
	int8_t x608 = INT8_MAX;
	static int32_t t112 = 0;

    t112 = (x605<=((x606*x607)|x608));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x609 = 59U;
	volatile int8_t x612 = 50;
	int32_t t113 = -7158854;

    t113 = (x609<=((x610*x611)|x612));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x613 = -1;
	uint64_t x614 = UINT64_MAX;
	volatile uint8_t x615 = 46U;
	uint16_t x616 = 27601U;

    t114 = (x613<=((x614*x615)|x616));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x621 = INT64_MIN;
	uint64_t x623 = UINT64_MAX;
	volatile int64_t x624 = -233341689786797252LL;
	int32_t t115 = 50023;

    t115 = (x621<=((x622*x623)|x624));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x625 = INT16_MIN;
	int32_t x626 = -1;
	uint16_t x627 = 27405U;
	int64_t x628 = -1LL;
	volatile int32_t t116 = -1;

    t116 = (x625<=((x626*x627)|x628));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x630 = 0;
	int32_t x631 = INT32_MIN;
	static int16_t x632 = 3;
	volatile int32_t t117 = 5825239;

    t117 = (x629<=((x630*x631)|x632));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x633 = -1;
	uint8_t x634 = 0U;
	int64_t x635 = INT64_MAX;
	uint16_t x636 = 37U;

    t118 = (x633<=((x634*x635)|x636));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x637 = -1LL;
	uint64_t x638 = 180168004413LLU;
	int64_t x639 = INT64_MIN;
	static uint8_t x640 = UINT8_MAX;
	static int32_t t119 = 1653410;

    t119 = (x637<=((x638*x639)|x640));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x641 = INT32_MIN;
	static int16_t x642 = INT16_MAX;
	static int16_t x644 = INT16_MIN;

    t120 = (x641<=((x642*x643)|x644));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x645 = 2;
	static volatile uint8_t x646 = 111U;
	int8_t x647 = -1;
	int32_t x648 = INT32_MIN;
	volatile int32_t t121 = -221809;

    t121 = (x645<=((x646*x647)|x648));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x652 = 3036951182LLU;

    t122 = (x649<=((x650*x651)|x652));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x653 = -9;
	static volatile int32_t x656 = 7082783;
	int32_t t123 = -641493036;

    t123 = (x653<=((x654*x655)|x656));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x661 = 810U;
	int16_t x662 = -1467;
	static volatile int8_t x663 = 0;
	int16_t x664 = INT16_MAX;
	volatile int32_t t124 = -956;

    t124 = (x661<=((x662*x663)|x664));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x665 = INT8_MIN;
	volatile int8_t x666 = INT8_MIN;
	uint8_t x667 = 7U;
	static volatile int64_t x668 = -195109LL;
	volatile int32_t t125 = 21133811;

    t125 = (x665<=((x666*x667)|x668));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x669 = -2;
	uint64_t x670 = 3173132625LLU;
	uint64_t x671 = 17133128415283230LLU;
	int8_t x672 = 7;
	volatile int32_t t126 = 3455;

    t126 = (x669<=((x670*x671)|x672));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x673 = INT8_MIN;
	int32_t x674 = -1;
	int16_t x675 = -1;
	int16_t x676 = INT16_MIN;
	volatile int32_t t127 = -1;

    t127 = (x673<=((x674*x675)|x676));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x677 = UINT16_MAX;
	static uint64_t x678 = UINT64_MAX;
	static int32_t x679 = INT32_MAX;
	static int8_t x680 = INT8_MAX;
	static int32_t t128 = -167848;

    t128 = (x677<=((x678*x679)|x680));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x685 = 60881146847334800LLU;
	volatile int32_t x686 = 121;
	uint8_t x687 = 59U;
	uint32_t x688 = 4U;
	int32_t t129 = -6444544;

    t129 = (x685<=((x686*x687)|x688));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x689 = -71492;
	int8_t x690 = 8;
	int8_t x691 = INT8_MAX;
	int32_t x692 = -851532;
	static volatile int32_t t130 = -116331162;

    t130 = (x689<=((x690*x691)|x692));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x693 = 40U;
	int8_t x696 = INT8_MAX;
	int32_t t131 = -1909544;

    t131 = (x693<=((x694*x695)|x696));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x697 = INT8_MIN;
	static uint64_t x698 = UINT64_MAX;
	static int64_t x699 = INT64_MAX;
	uint8_t x700 = 0U;

    t132 = (x697<=((x698*x699)|x700));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x705 = UINT8_MAX;
	uint16_t x707 = 37U;
	int16_t x708 = 1;
	static volatile int32_t t133 = -1;

    t133 = (x705<=((x706*x707)|x708));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x709 = 3U;
	volatile uint16_t x710 = 13U;
	static int8_t x711 = INT8_MIN;
	uint64_t x712 = UINT64_MAX;

    t134 = (x709<=((x710*x711)|x712));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x713 = INT64_MAX;
	volatile int8_t x714 = INT8_MIN;
	int16_t x715 = -1;
	int32_t x716 = -128;
	volatile int32_t t135 = 74695641;

    t135 = (x713<=((x714*x715)|x716));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x721 = INT8_MIN;
	static uint32_t x722 = 14041U;
	volatile uint64_t x723 = 265LLU;
	uint64_t x724 = UINT64_MAX;
	static volatile int32_t t136 = -261649;

    t136 = (x721<=((x722*x723)|x724));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x725 = 23U;
	uint32_t x727 = 35400U;
	int64_t x728 = INT64_MIN;
	int32_t t137 = 21234;

    t137 = (x725<=((x726*x727)|x728));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x729 = INT32_MIN;
	static uint64_t x730 = 7526LLU;
	volatile int8_t x731 = -1;

    t138 = (x729<=((x730*x731)|x732));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x733 = -1;
	static int32_t x734 = -1;
	static int32_t x735 = -513;
	int32_t x736 = -1;
	volatile int32_t t139 = 289948927;

    t139 = (x733<=((x734*x735)|x736));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x741 = UINT32_MAX;
	int64_t x742 = -1081LL;
	volatile uint32_t x743 = UINT32_MAX;
	uint8_t x744 = 2U;

    t140 = (x741<=((x742*x743)|x744));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x749 = 37569987;
	int32_t x750 = INT32_MAX;
	static uint32_t x751 = UINT32_MAX;
	static volatile int64_t x752 = -200074LL;
	int32_t t141 = -545345;

    t141 = (x749<=((x750*x751)|x752));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x753 = INT32_MIN;
	uint8_t x754 = 9U;
	uint16_t x755 = 113U;
	uint32_t x756 = UINT32_MAX;
	int32_t t142 = -1038687;

    t142 = (x753<=((x754*x755)|x756));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x757 = UINT16_MAX;
	uint64_t x759 = UINT64_MAX;
	static int16_t x760 = -10;
	int32_t t143 = 1659;

    t143 = (x757<=((x758*x759)|x760));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x761 = 866199291444586LL;
	volatile int8_t x762 = INT8_MAX;
	uint16_t x763 = 29U;
	int32_t t144 = 499;

    t144 = (x761<=((x762*x763)|x764));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x765 = INT32_MIN;
	static volatile uint64_t x766 = UINT64_MAX;
	int64_t x767 = INT64_MIN;
	volatile int8_t x768 = INT8_MAX;

    t145 = (x765<=((x766*x767)|x768));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x769 = 65853U;
	uint16_t x770 = 3130U;
	uint64_t x771 = 7730272446LLU;
	int16_t x772 = -2468;
	int32_t t146 = 1;

    t146 = (x769<=((x770*x771)|x772));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x777 = INT32_MIN;
	volatile uint16_t x779 = 18U;
	static int32_t t147 = -159;

    t147 = (x777<=((x778*x779)|x780));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x781 = 13085512607351LLU;
	int32_t x782 = -1;
	int16_t x783 = -1;
	volatile int32_t t148 = 629;

    t148 = (x781<=((x782*x783)|x784));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x785 = 3U;
	static int8_t x787 = INT8_MAX;
	int32_t x788 = INT32_MIN;
	volatile int32_t t149 = 1;

    t149 = (x785<=((x786*x787)|x788));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x789 = -1;
	volatile uint64_t x790 = UINT64_MAX;
	int16_t x791 = -1;
	static volatile int64_t x792 = INT64_MAX;
	static volatile int32_t t150 = 1201520;

    t150 = (x789<=((x790*x791)|x792));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x793 = -1;
	int32_t x794 = -1;
	int64_t x795 = -1LL;
	int16_t x796 = INT16_MIN;

    t151 = (x793<=((x794*x795)|x796));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x797 = INT32_MIN;
	volatile int8_t x798 = -14;
	volatile uint64_t x800 = 760724LLU;

    t152 = (x797<=((x798*x799)|x800));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x805 = -3;
	uint32_t x806 = 30U;
	uint8_t x807 = UINT8_MAX;
	uint8_t x808 = 0U;
	volatile int32_t t153 = -1205522;

    t153 = (x805<=((x806*x807)|x808));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x809 = INT32_MIN;
	int32_t x810 = -1;
	int16_t x811 = INT16_MIN;
	volatile int32_t t154 = 4624;

    t154 = (x809<=((x810*x811)|x812));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x813 = INT32_MIN;
	static volatile uint16_t x815 = UINT16_MAX;
	uint8_t x816 = UINT8_MAX;
	int32_t t155 = 37;

    t155 = (x813<=((x814*x815)|x816));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x817 = -1;
	uint32_t x819 = 343380384U;
	volatile int16_t x820 = INT16_MIN;

    t156 = (x817<=((x818*x819)|x820));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x822 = INT8_MIN;
	static uint8_t x823 = UINT8_MAX;
	uint8_t x824 = 0U;
	int32_t t157 = -2593304;

    t157 = (x821<=((x822*x823)|x824));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x826 = 133894738506LL;
	static int64_t x828 = INT64_MIN;
	int32_t t158 = -521148152;

    t158 = (x825<=((x826*x827)|x828));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x829 = -1;
	static volatile uint8_t x830 = 0U;
	uint64_t x831 = 6273108458LLU;
	int32_t t159 = 7067577;

    t159 = (x829<=((x830*x831)|x832));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x834 = 745U;
	uint16_t x835 = 2U;
	int32_t t160 = 18644;

    t160 = (x833<=((x834*x835)|x836));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x838 = INT16_MAX;
	int8_t x839 = 2;
	uint16_t x840 = 9994U;
	static volatile int32_t t161 = -1;

    t161 = (x837<=((x838*x839)|x840));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x841 = 3U;
	volatile int8_t x843 = INT8_MIN;
	int8_t x844 = INT8_MIN;
	int32_t t162 = -4649;

    t162 = (x841<=((x842*x843)|x844));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x845 = INT64_MAX;
	int32_t x846 = -1;
	uint16_t x847 = 45U;

    t163 = (x845<=((x846*x847)|x848));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x849 = INT32_MIN;
	volatile int32_t x850 = INT32_MAX;
	uint64_t x851 = 10520071LLU;
	static int32_t x852 = -3934710;
	volatile int32_t t164 = -33221706;

    t164 = (x849<=((x850*x851)|x852));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint8_t x853 = 1U;
	static uint16_t x854 = 1328U;
	volatile int32_t x855 = -166;
	int8_t x856 = -1;
	volatile int32_t t165 = -31;

    t165 = (x853<=((x854*x855)|x856));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x857 = INT8_MIN;
	uint64_t x858 = 47LLU;
	int32_t x859 = -1;
	static volatile int32_t x860 = 15063;
	volatile int32_t t166 = 15403;

    t166 = (x857<=((x858*x859)|x860));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x861 = INT16_MAX;
	volatile int16_t x862 = -59;
	uint64_t x863 = UINT64_MAX;
	int32_t x864 = INT32_MIN;
	static int32_t t167 = -80;

    t167 = (x861<=((x862*x863)|x864));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x866 = 1;
	static volatile uint32_t x868 = 11353731U;
	volatile int32_t t168 = -496;

    t168 = (x865<=((x866*x867)|x868));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x869 = INT32_MIN;
	uint32_t x870 = 116023U;
	uint32_t x872 = 8335U;
	volatile int32_t t169 = -1;

    t169 = (x869<=((x870*x871)|x872));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x877 = UINT16_MAX;
	volatile int16_t x878 = INT16_MIN;
	int8_t x879 = INT8_MIN;
	static int16_t x880 = INT16_MAX;
	int32_t t170 = 14;

    t170 = (x877<=((x878*x879)|x880));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x882 = -1;
	int8_t x883 = INT8_MIN;
	uint32_t x884 = 1U;
	int32_t t171 = 2590186;

    t171 = (x881<=((x882*x883)|x884));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x889 = -1;
	uint32_t x892 = UINT32_MAX;
	int32_t t172 = -369840549;

    t172 = (x889<=((x890*x891)|x892));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x893 = -1;
	static volatile int32_t x894 = INT32_MAX;
	uint32_t x895 = UINT32_MAX;
	static volatile int32_t t173 = -22;

    t173 = (x893<=((x894*x895)|x896));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x901 = 63U;
	volatile int16_t x902 = -1;
	int16_t x903 = INT16_MIN;
	int64_t x904 = INT64_MAX;
	volatile int32_t t174 = -156;

    t174 = (x901<=((x902*x903)|x904));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x905 = -7;
	int8_t x907 = -1;

    t175 = (x905<=((x906*x907)|x908));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x909 = 32;
	static uint8_t x911 = 2U;
	volatile int32_t t176 = -255;

    t176 = (x909<=((x910*x911)|x912));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x921 = 2812U;
	uint8_t x923 = UINT8_MAX;
	static int8_t x924 = -18;
	int32_t t177 = 4845273;

    t177 = (x921<=((x922*x923)|x924));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x928 = UINT64_MAX;
	int32_t t178 = 6582;

    t178 = (x925<=((x926*x927)|x928));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x929 = -4063574381086399LL;
	uint32_t x930 = UINT32_MAX;
	uint32_t x931 = 59U;
	volatile int32_t t179 = -20;

    t179 = (x929<=((x930*x931)|x932));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x933 = 3159785LLU;
	volatile uint8_t x934 = 10U;
	int32_t x935 = 221282;
	int32_t x936 = INT32_MAX;

    t180 = (x933<=((x934*x935)|x936));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x937 = 28713016904573066LLU;
	uint32_t x938 = UINT32_MAX;
	static int16_t x939 = INT16_MIN;
	volatile uint64_t x940 = UINT64_MAX;
	static volatile int32_t t181 = 88187366;

    t181 = (x937<=((x938*x939)|x940));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x941 = INT16_MAX;
	static int32_t x942 = INT32_MAX;
	static int32_t x944 = INT32_MAX;
	static volatile int32_t t182 = 12;

    t182 = (x941<=((x942*x943)|x944));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x945 = -1430267094LL;
	int32_t x946 = -1;
	int32_t t183 = 2833;

    t183 = (x945<=((x946*x947)|x948));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x949 = 4209811LLU;
	volatile int8_t x950 = 35;
	int32_t t184 = 76578;

    t184 = (x949<=((x950*x951)|x952));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x953 = INT8_MAX;
	uint32_t x954 = 6U;
	int32_t x955 = INT32_MAX;
	static int8_t x956 = 4;
	int32_t t185 = -587965690;

    t185 = (x953<=((x954*x955)|x956));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x957 = UINT32_MAX;
	uint32_t x958 = 94970767U;
	int16_t x960 = -7;

    t186 = (x957<=((x958*x959)|x960));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x970 = UINT8_MAX;
	int8_t x971 = INT8_MIN;
	static int16_t x972 = -3121;
	int32_t t187 = -28642;

    t187 = (x969<=((x970*x971)|x972));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x973 = UINT32_MAX;
	uint32_t x974 = 472903727U;
	uint32_t x975 = UINT32_MAX;
	volatile int32_t t188 = -5;

    t188 = (x973<=((x974*x975)|x976));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x978 = -1;
	int32_t x980 = -3026807;
	static int32_t t189 = -171773954;

    t189 = (x977<=((x978*x979)|x980));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x985 = -1;
	uint64_t x986 = UINT64_MAX;
	volatile int16_t x987 = INT16_MIN;
	static uint32_t x988 = 6867322U;
	volatile int32_t t190 = -672403;

    t190 = (x985<=((x986*x987)|x988));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x989 = -251;
	static int64_t x990 = -78LL;
	static uint32_t x991 = 387U;
	static int32_t t191 = 25;

    t191 = (x989<=((x990*x991)|x992));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x993 = UINT32_MAX;
	volatile int8_t x995 = -1;
	int16_t x996 = INT16_MIN;
	int32_t t192 = 2301645;

    t192 = (x993<=((x994*x995)|x996));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1001 = INT32_MIN;
	int8_t x1003 = INT8_MAX;
	int16_t x1004 = -7;
	volatile int32_t t193 = 47584;

    t193 = (x1001<=((x1002*x1003)|x1004));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1005 = INT64_MIN;
	int64_t x1007 = -40053205LL;

    t194 = (x1005<=((x1006*x1007)|x1008));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1009 = 755542737LLU;
	volatile int16_t x1010 = 5;
	int16_t x1011 = -22;
	static volatile int16_t x1012 = -60;
	static volatile int32_t t195 = -111533773;

    t195 = (x1009<=((x1010*x1011)|x1012));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x1013 = -1LL;
	static int32_t x1014 = INT32_MAX;
	static uint32_t x1016 = UINT32_MAX;
	static int32_t t196 = 1;

    t196 = (x1013<=((x1014*x1015)|x1016));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1017 = -1;
	int16_t x1018 = INT16_MAX;
	static volatile uint64_t x1019 = UINT64_MAX;
	volatile uint64_t x1020 = 586150356LLU;
	volatile int32_t t197 = -6654659;

    t197 = (x1017<=((x1018*x1019)|x1020));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1026 = INT16_MIN;
	int16_t x1027 = -1;
	uint32_t x1028 = 6966878U;
	volatile int32_t t198 = -3;

    t198 = (x1025<=((x1026*x1027)|x1028));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1034 = INT32_MIN;
	uint32_t x1035 = 31910U;
	uint64_t x1036 = UINT64_MAX;
	volatile int32_t t199 = -9863;

    t199 = (x1033<=((x1034*x1035)|x1036));

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

