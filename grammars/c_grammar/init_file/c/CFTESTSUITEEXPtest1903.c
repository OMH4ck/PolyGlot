
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

int8_t x2 = INT8_MAX;
volatile uint8_t x5 = UINT8_MAX;
int16_t x8 = -1;
int64_t x16 = 587326225440124027LL;
int8_t x27 = 33;
int64_t x33 = INT64_MIN;
static int32_t x34 = 120109;
uint64_t x36 = UINT64_MAX;
volatile int64_t t8 = -20645377394LL;
static volatile int32_t t10 = -546004;
static uint32_t x68 = UINT32_MAX;
int8_t x75 = 11;
int32_t t18 = -144;
int64_t x82 = INT64_MIN;
int16_t x89 = -1;
static int32_t x91 = -29;
int16_t x92 = 0;
int32_t x94 = INT32_MIN;
static int16_t x96 = INT16_MIN;
volatile uint32_t t23 = 2U;
int32_t x99 = -1;
uint8_t x118 = 77U;
uint32_t x121 = UINT32_MAX;
int64_t x122 = -91023508342021LL;
uint16_t x126 = 2U;
int16_t x127 = 1;
uint32_t t31 = UINT32_MAX;
int16_t x130 = -142;
int64_t x133 = INT64_MIN;
uint8_t x140 = 55U;
int32_t x141 = -1;
static volatile int32_t t36 = -535;
uint64_t x151 = 2LLU;
int32_t t37 = -1420;
uint64_t x154 = 3863919LLU;
uint64_t x155 = 27101410580426LLU;
int64_t x159 = INT64_MIN;
int8_t x165 = -1;
int64_t x167 = 525LL;
int8_t x175 = 3;
volatile int32_t t43 = -8;
int16_t x180 = -3163;
int32_t x184 = -1;
int16_t x189 = INT16_MAX;
int64_t x191 = -477LL;
uint64_t x198 = UINT64_MAX;
volatile int64_t t50 = 1LL;
volatile uint32_t t52 = 126U;
int8_t x213 = INT8_MIN;
int32_t x218 = INT32_MIN;
volatile int32_t t55 = 26766;
static int64_t x226 = INT64_MAX;
int8_t x230 = -1;
volatile uint16_t x231 = 668U;
static int32_t x235 = -1;
static volatile uint8_t x236 = 15U;
int32_t t58 = -3;
int8_t x238 = INT8_MIN;
volatile uint16_t x247 = 0U;
int32_t x252 = 666;
uint8_t x256 = 8U;
int64_t x261 = -896506058052LL;
volatile uint32_t t67 = UINT32_MAX;
int8_t x275 = INT8_MAX;
uint64_t x285 = 91LLU;
int32_t x296 = -1;
int64_t x299 = -3294204294985719140LL;
int8_t x303 = -13;
volatile uint16_t x305 = 216U;
static uint16_t x307 = UINT16_MAX;
int32_t x314 = INT32_MAX;
uint32_t x318 = 213U;
int16_t x319 = -273;
uint16_t x324 = 15U;
volatile int64_t x329 = INT64_MAX;
int64_t x334 = INT64_MIN;
static int16_t x335 = INT16_MAX;
int32_t x343 = 1032842;
int8_t x344 = 2;
volatile uint64_t x345 = 1262743851370424874LLU;
volatile int8_t x346 = INT8_MAX;
uint8_t x353 = 25U;
int32_t x361 = INT32_MIN;
static int32_t x362 = -1;
int64_t x368 = INT64_MIN;
static volatile int8_t x372 = INT8_MIN;
volatile int32_t t93 = -476;
int32_t t94 = -196292;
int32_t x386 = INT32_MIN;
int64_t x387 = -2790180LL;
int32_t x390 = 4338;
int64_t t97 = INT64_MIN;
volatile int32_t x402 = INT32_MIN;
uint32_t x403 = 25012U;
int8_t x404 = 9;
int64_t x410 = -1LL;
uint32_t x413 = UINT32_MAX;
static volatile uint8_t x414 = UINT8_MAX;
int32_t x415 = INT32_MIN;
int32_t x439 = INT32_MIN;
volatile uint64_t x441 = 5558183LLU;
int8_t x450 = -1;
uint16_t x451 = UINT16_MAX;
static int16_t x452 = INT16_MIN;
volatile int8_t x459 = INT8_MIN;
volatile int32_t t116 = -496059219;
uint32_t x475 = 1156884738U;
int16_t x480 = INT16_MIN;
int64_t x482 = -1LL;
int64_t x484 = INT64_MIN;
uint8_t x486 = 3U;
int16_t x488 = -1;
uint16_t x490 = 506U;
static int64_t x493 = 420209767278055LL;
static volatile uint64_t x494 = 1166349745654853353LLU;
int8_t x497 = 1;
uint16_t x499 = 3U;
volatile int32_t t125 = 3049;
uint64_t t127 = UINT64_MAX;
int8_t x514 = -1;
int32_t x524 = INT32_MAX;
static volatile int32_t t131 = -215849633;
uint8_t x531 = 16U;
uint16_t x536 = 246U;
uint16_t x537 = 513U;
volatile int8_t x540 = INT8_MAX;
static volatile uint16_t x543 = UINT16_MAX;
int64_t x544 = INT64_MAX;
volatile int64_t t136 = 1LL;
volatile int32_t t138 = 416;
int64_t x560 = -1LL;
volatile uint32_t t139 = UINT32_MAX;
uint8_t x572 = UINT8_MAX;
static uint8_t x574 = UINT8_MAX;
int32_t t143 = 461847570;
static volatile int8_t x581 = INT8_MAX;
volatile int16_t x582 = INT16_MIN;
uint64_t x583 = 252706242358LLU;
int32_t x587 = -1;
int32_t x588 = -1;
uint64_t x590 = 27670127615999322LLU;
static int64_t x591 = -1LL;
int64_t x592 = -2395LL;
int32_t x593 = INT32_MIN;
static int64_t t149 = INT64_MAX;
int8_t x602 = 3;
int32_t t150 = 2425;
int8_t x609 = 0;
int64_t x611 = INT64_MIN;
int32_t x615 = -5086591;
volatile int32_t t153 = -10861734;
uint8_t x617 = UINT8_MAX;
int32_t x623 = -1;
int16_t x638 = INT16_MIN;
volatile int16_t x642 = -1;
volatile uint8_t x643 = 13U;
static int8_t x646 = -4;
volatile int32_t t161 = 460;
uint8_t x655 = 1U;
int16_t x658 = -1;
static volatile uint64_t t166 = UINT64_MAX;
int16_t x670 = -1;
uint8_t x672 = 0U;
int32_t t167 = 202589482;
int32_t x673 = -788;
volatile int32_t t169 = -575;
volatile int64_t x682 = INT64_MIN;
int64_t x685 = INT64_MIN;
int64_t x690 = 4368015121723LL;
int8_t x691 = INT8_MAX;
static volatile int64_t x692 = INT64_MAX;
int32_t t172 = 14;
uint32_t x695 = UINT32_MAX;
int64_t x699 = INT64_MIN;
int8_t x700 = INT8_MIN;
volatile int8_t x703 = 63;
volatile uint64_t x723 = 64893194LLU;
int8_t x727 = INT8_MIN;
uint16_t x733 = UINT16_MAX;
static uint64_t x735 = 29725LLU;
int16_t x736 = -93;
volatile int64_t t185 = 33318503830LL;
static volatile int32_t x745 = INT32_MAX;
int16_t x747 = INT16_MIN;
int16_t x749 = INT16_MAX;
volatile int16_t x751 = INT16_MIN;
uint16_t x752 = 14259U;
static volatile uint16_t x756 = 2309U;
uint64_t t188 = 23735142393516LLU;
uint8_t x757 = UINT8_MAX;
int8_t x758 = INT8_MIN;
uint8_t x761 = UINT8_MAX;
volatile int32_t t190 = -469740886;
int64_t x766 = INT64_MIN;
int8_t x775 = -2;
static int32_t x776 = 534175728;
uint8_t x777 = 11U;
int16_t x780 = INT16_MIN;
volatile int32_t x784 = INT32_MIN;
int64_t x800 = INT64_MIN;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	int64_t x3 = INT64_MIN;
	int64_t x4 = -1LL;
	static uint64_t t0 = UINT64_MAX;

    t0 = (x1|((x2<=x3)<=x4));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = 95;
	uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = -58392740;

    t1 = (x5|((x6<=x7)<=x8));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 730LLU;
	volatile uint64_t x10 = 194474LLU;
	static int16_t x11 = -1;
	int8_t x12 = 0;
	volatile uint64_t t2 = 2955316418LLU;

    t2 = (x9|((x10<=x11)<=x12));

    if (t2 != 730LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x13 = INT64_MAX;
	static int32_t x14 = 423137;
	uint8_t x15 = 25U;
	static volatile int64_t t3 = INT64_MAX;

    t3 = (x13|((x14<=x15)<=x16));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -1;
	static int8_t x18 = 0;
	volatile int16_t x19 = INT16_MIN;
	int8_t x20 = -1;
	static int32_t t4 = -1094934;

    t4 = (x17|((x18<=x19)<=x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -21898;
	static uint64_t x22 = 39489034528217LLU;
	int64_t x23 = INT64_MAX;
	static int32_t x24 = INT32_MIN;
	int32_t t5 = -514514226;

    t5 = (x21|((x22<=x23)<=x24));

    if (t5 != -21898) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 58022U;
	int32_t x26 = INT32_MIN;
	static int8_t x28 = INT8_MAX;
	uint32_t t6 = 16283768U;

    t6 = (x25|((x26<=x27)<=x28));

    if (t6 != 58023U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 410U;
	int8_t x30 = INT8_MAX;
	volatile int64_t x31 = -14992LL;
	static volatile int16_t x32 = INT16_MIN;
	int32_t t7 = 7;

    t7 = (x29|((x30<=x31)<=x32));

    if (t7 != 410) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x35 = INT16_MIN;

    t8 = (x33|((x34<=x35)<=x36));

    if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MAX;
	int16_t x38 = -1;
	volatile int16_t x39 = -1;
	static int8_t x40 = -3;
	volatile int64_t t9 = INT64_MAX;

    t9 = (x37|((x38<=x39)<=x40));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	uint8_t x42 = 9U;
	int64_t x43 = INT64_MIN;
	static int32_t x44 = INT32_MIN;

    t10 = (x41|((x42<=x43)<=x44));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 1U;
	volatile int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;
	volatile uint32_t x48 = 547300U;
	volatile int32_t t11 = -382954367;

    t11 = (x45|((x46<=x47)<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1;
	int64_t x50 = -5650067959739235LL;
	static uint64_t x51 = 9LLU;
	static uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = -1;

    t12 = (x49|((x50<=x51)<=x52));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint64_t x54 = UINT64_MAX;
	volatile int16_t x55 = -96;
	int32_t x56 = 22445804;
	volatile int64_t t13 = -6121119LL;

    t13 = (x53|((x54<=x55)<=x56));

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	int8_t x59 = -30;
	volatile int16_t x60 = INT16_MAX;
	int32_t t14 = 8737196;

    t14 = (x57|((x58<=x59)<=x60));

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 11303LLU;
	static uint16_t x62 = 18860U;
	int16_t x63 = -1;
	volatile int8_t x64 = 5;
	uint64_t t15 = 111113LLU;

    t15 = (x61|((x62<=x63)<=x64));

    if (t15 != 11303LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	uint32_t x66 = 1031203U;
	uint16_t x67 = 135U;
	int32_t t16 = 117582;

    t16 = (x65|((x66<=x67)<=x68));

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 1U;
	int32_t x70 = INT32_MAX;
	int16_t x71 = INT16_MIN;
	int32_t x72 = -1;
	static volatile int32_t t17 = -2274944;

    t17 = (x69|((x70<=x71)<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	uint64_t x74 = 3016754550LLU;
	uint64_t x76 = 57897371573852554LLU;

    t18 = (x73|((x74<=x75)<=x76));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 562;
	volatile int8_t x78 = 35;
	volatile int16_t x79 = INT16_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t19 = 0;

    t19 = (x77|((x78<=x79)<=x80));

    if (t19 != 563) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = INT16_MAX;
	static volatile uint16_t x83 = 1U;
	uint8_t x84 = 28U;
	static volatile int32_t t20 = 9;

    t20 = (x81|((x82<=x83)<=x84));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	int32_t x86 = INT32_MIN;
	int32_t x87 = -1;
	static uint64_t x88 = UINT64_MAX;
	int32_t t21 = 1598;

    t21 = (x85|((x86<=x87)<=x88));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x90 = 279;
	static int32_t t22 = 716171;

    t22 = (x89|((x90<=x91)<=x92));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 24U;
	int64_t x95 = -10370LL;

    t23 = (x93|((x94<=x95)<=x96));

    if (t23 != 24U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	static volatile int16_t x100 = INT16_MIN;
	volatile int64_t t24 = INT64_MIN;

    t24 = (x97|((x98<=x99)<=x100));

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MIN;
	uint8_t x103 = 14U;
	uint64_t x104 = UINT64_MAX;
	int64_t t25 = INT64_MAX;

    t25 = (x101|((x102<=x103)<=x104));

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	int64_t x106 = 1157793224LL;
	static int64_t x107 = INT64_MAX;
	volatile int64_t x108 = -1LL;
	int32_t t26 = -6661;

    t26 = (x105|((x106<=x107)<=x108));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = -1;
	uint64_t x110 = 3971920957007607501LLU;
	static int32_t x111 = 892653;
	static int8_t x112 = INT8_MAX;
	volatile int32_t t27 = 481470;

    t27 = (x109|((x110<=x111)<=x112));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint64_t x114 = 21618874LLU;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = -130819659;

    t28 = (x113|((x114<=x115)<=x116));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	uint64_t x119 = 4278340099LLU;
	int32_t x120 = 2848;
	volatile int32_t t29 = 60805;

    t29 = (x117|((x118<=x119)<=x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x123 = 774658LL;
	int32_t x124 = -1;
	uint32_t t30 = UINT32_MAX;

    t30 = (x121|((x122<=x123)<=x124));

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	uint16_t x128 = 3564U;

    t31 = (x125|((x126<=x127)<=x128));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	static int32_t x131 = INT32_MIN;
	uint64_t x132 = 55746915731359074LLU;
	static volatile int64_t t32 = -1252696741297LL;

    t32 = (x129|((x130<=x131)<=x132));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x134 = INT8_MIN;
	volatile uint8_t x135 = UINT8_MAX;
	int32_t x136 = -1;
	static int64_t t33 = INT64_MIN;

    t33 = (x133|((x134<=x135)<=x136));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MAX;
	uint64_t x138 = 46645609805269LLU;
	static int16_t x139 = -1;
	static volatile int32_t t34 = -1201;

    t34 = (x137|((x138<=x139)<=x140));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = -1;
	int32_t x143 = INT32_MIN;
	static int32_t x144 = INT32_MAX;
	int32_t t35 = 14110243;

    t35 = (x141|((x142<=x143)<=x144));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 11U;
	uint32_t x146 = UINT32_MAX;
	volatile int16_t x147 = INT16_MIN;
	int64_t x148 = INT64_MIN;

    t36 = (x145|((x146<=x147)<=x148));

    if (t36 != 11) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 0;
	static int32_t x150 = INT32_MAX;
	int16_t x152 = -22;

    t37 = (x149|((x150<=x151)<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 913U;
	static uint32_t x156 = UINT32_MAX;
	int32_t t38 = -315;

    t38 = (x153|((x154<=x155)<=x156));

    if (t38 != 913) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	volatile int32_t x158 = -1;
	uint16_t x160 = 918U;
	volatile int32_t t39 = 1389753;

    t39 = (x157|((x158<=x159)<=x160));

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x161 = INT64_MIN;
	static int16_t x162 = INT16_MIN;
	static int64_t x163 = INT64_MIN;
	uint16_t x164 = 13629U;
	volatile int64_t t40 = 17802137022LL;

    t40 = (x161|((x162<=x163)<=x164));

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x166 = INT16_MIN;
	int8_t x168 = 40;
	static int32_t t41 = 127;

    t41 = (x165|((x166<=x167)<=x168));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 58;
	static int16_t x170 = INT16_MAX;
	volatile int32_t x171 = -6246332;
	int16_t x172 = -1;
	volatile int32_t t42 = -9021;

    t42 = (x169|((x170<=x171)<=x172));

    if (t42 != 58) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = 6U;
	int32_t x174 = -1;
	volatile uint8_t x176 = UINT8_MAX;

    t43 = (x173|((x174<=x175)<=x176));

    if (t43 != 7) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 486533094U;
	uint16_t x178 = 9216U;
	uint16_t x179 = 8U;
	uint32_t t44 = 4013751U;

    t44 = (x177|((x178<=x179)<=x180));

    if (t44 != 486533094U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -11;
	int32_t x182 = -1371;
	volatile uint16_t x183 = 506U;
	int32_t t45 = -4;

    t45 = (x181|((x182<=x183)<=x184));

    if (t45 != -11) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x185 = UINT32_MAX;
	int16_t x186 = -1;
	uint64_t x187 = 2009LLU;
	int8_t x188 = INT8_MIN;
	static volatile uint32_t t46 = UINT32_MAX;

    t46 = (x185|((x186<=x187)<=x188));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint16_t x190 = UINT16_MAX;
	volatile int64_t x192 = -14927618633075834LL;
	int32_t t47 = 429896159;

    t47 = (x189|((x190<=x191)<=x192));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 173441U;
	volatile int8_t x194 = INT8_MIN;
	volatile int16_t x195 = INT16_MIN;
	static int8_t x196 = -18;
	uint32_t t48 = 78020U;

    t48 = (x193|((x194<=x195)<=x196));

    if (t48 != 173441U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	int64_t x199 = INT64_MAX;
	int32_t x200 = -9;
	int32_t t49 = 25500755;

    t49 = (x197|((x198<=x199)<=x200));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = -1LL;
	int32_t x202 = INT32_MAX;
	static int64_t x203 = 344LL;
	volatile int64_t x204 = 5649181LL;

    t50 = (x201|((x202<=x203)<=x204));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	uint32_t x206 = UINT32_MAX;
	uint32_t x207 = 5982U;
	int32_t x208 = -1;
	static volatile int32_t t51 = -890891;

    t51 = (x205|((x206<=x207)<=x208));

    if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 331365U;
	int64_t x210 = INT64_MAX;
	int16_t x211 = -1;
	int32_t x212 = -1325;

    t52 = (x209|((x210<=x211)<=x212));

    if (t52 != 331365U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x214 = -1;
	static volatile uint16_t x215 = UINT16_MAX;
	int16_t x216 = 7;
	volatile int32_t t53 = -17383718;

    t53 = (x213|((x214<=x215)<=x216));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x217 = INT32_MIN;
	static uint64_t x219 = UINT64_MAX;
	static uint32_t x220 = UINT32_MAX;
	int32_t t54 = 1480050;

    t54 = (x217|((x218<=x219)<=x220));

    if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 433;
	int64_t x222 = INT64_MIN;
	int16_t x223 = -1477;
	volatile int16_t x224 = INT16_MIN;

    t55 = (x221|((x222<=x223)<=x224));

    if (t55 != 433) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = -1;
	int8_t x227 = INT8_MIN;
	volatile uint8_t x228 = 3U;
	int32_t t56 = -1643511;

    t56 = (x225|((x226<=x227)<=x228));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	uint8_t x232 = 47U;
	volatile int32_t t57 = -3712;

    t57 = (x229|((x230<=x231)<=x232));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 13;
	static volatile int64_t x234 = INT64_MIN;

    t58 = (x233|((x234<=x235)<=x236));

    if (t58 != 13) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = -4502;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = UINT64_MAX;
	int32_t t59 = 90;

    t59 = (x237|((x238<=x239)<=x240));

    if (t59 != -4501) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 6651U;
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = -6203;
	volatile uint16_t x244 = UINT16_MAX;
	int32_t t60 = -12;

    t60 = (x241|((x242<=x243)<=x244));

    if (t60 != 6651) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x245 = 152U;
	uint64_t x246 = 373033076473448LLU;
	static uint32_t x248 = 7U;
	volatile int32_t t61 = 1494;

    t61 = (x245|((x246<=x247)<=x248));

    if (t61 != 153) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	int32_t x250 = INT32_MIN;
	int32_t x251 = -1;
	int32_t t62 = -30;

    t62 = (x249|((x250<=x251)<=x252));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint32_t x253 = UINT32_MAX;
	int64_t x254 = -48LL;
	uint64_t x255 = UINT64_MAX;
	volatile uint32_t t63 = UINT32_MAX;

    t63 = (x253|((x254<=x255)<=x256));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = 142LL;
	uint32_t x258 = UINT32_MAX;
	uint8_t x259 = 33U;
	int16_t x260 = -70;
	int64_t t64 = 65698878172241LL;

    t64 = (x257|((x258<=x259)<=x260));

    if (t64 != 142LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x262 = 3U;
	int8_t x263 = INT8_MIN;
	int32_t x264 = -1;
	volatile int64_t t65 = -59658LL;

    t65 = (x261|((x262<=x263)<=x264));

    if (t65 != -896506058052LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MIN;
	static uint8_t x267 = UINT8_MAX;
	int16_t x268 = 89;
	volatile int32_t t66 = INT32_MAX;

    t66 = (x265|((x266<=x267)<=x268));

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	volatile int32_t x270 = INT32_MAX;
	int64_t x271 = INT64_MIN;
	uint64_t x272 = UINT64_MAX;

    t67 = (x269|((x270<=x271)<=x272));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -1171967834301071LL;
	uint32_t x274 = UINT32_MAX;
	int16_t x276 = 118;
	volatile int64_t t68 = 310180LL;

    t68 = (x273|((x274<=x275)<=x276));

    if (t68 != -1171967834301071LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x277 = 592LLU;
	int32_t x278 = INT32_MAX;
	static int16_t x279 = 1;
	static int32_t x280 = INT32_MIN;
	volatile uint64_t t69 = 129534900504272LLU;

    t69 = (x277|((x278<=x279)<=x280));

    if (t69 != 592LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MAX;
	int64_t x282 = INT64_MIN;
	int16_t x283 = 1;
	int32_t x284 = 311;
	volatile int32_t t70 = 7300215;

    t70 = (x281|((x282<=x283)<=x284));

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = 1462724;
	volatile int8_t x287 = -11;
	int16_t x288 = INT16_MIN;
	uint64_t t71 = 974872828307157316LLU;

    t71 = (x285|((x286<=x287)<=x288));

    if (t71 != 91LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint16_t x290 = 54U;
	int32_t x291 = -478;
	int16_t x292 = -1;
	volatile int32_t t72 = -21;

    t72 = (x289|((x290<=x291)<=x292));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	volatile int16_t x295 = INT16_MIN;
	int32_t t73 = -2820239;

    t73 = (x293|((x294<=x295)<=x296));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x297 = 819U;
	int16_t x298 = INT16_MIN;
	static int8_t x300 = -1;
	uint32_t t74 = 224455639U;

    t74 = (x297|((x298<=x299)<=x300));

    if (t74 != 819U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x301 = 848U;
	uint8_t x302 = 0U;
	uint16_t x304 = 126U;
	int32_t t75 = -174496;

    t75 = (x301|((x302<=x303)<=x304));

    if (t75 != 849) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x306 = UINT32_MAX;
	int64_t x308 = -28LL;
	int32_t t76 = 312;

    t76 = (x305|((x306<=x307)<=x308));

    if (t76 != 216) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = 7;
	uint32_t x310 = 12620372U;
	int64_t x311 = INT64_MAX;
	volatile int16_t x312 = 53;
	volatile int32_t t77 = 7;

    t77 = (x309|((x310<=x311)<=x312));

    if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	int64_t x315 = -201LL;
	static int64_t x316 = -1LL;
	volatile int32_t t78 = 131;

    t78 = (x313|((x314<=x315)<=x316));

    if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = -1;
	int8_t x320 = -1;
	volatile int32_t t79 = 15;

    t79 = (x317|((x318<=x319)<=x320));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = 1011967126991458LL;
	int16_t x322 = -7;
	int64_t x323 = INT64_MIN;
	static int64_t t80 = 7899253146LL;

    t80 = (x321|((x322<=x323)<=x324));

    if (t80 != 1011967126991459LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 6894U;
	volatile int8_t x326 = INT8_MIN;
	int8_t x327 = -1;
	int8_t x328 = INT8_MAX;
	static volatile int32_t t81 = 0;

    t81 = (x325|((x326<=x327)<=x328));

    if (t81 != 6895) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = INT64_MIN;
	int64_t x331 = INT64_MAX;
	static int64_t x332 = -1355816LL;
	volatile int64_t t82 = INT64_MAX;

    t82 = (x329|((x330<=x331)<=x332));

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	int64_t x336 = -1LL;
	int32_t t83 = 28;

    t83 = (x333|((x334<=x335)<=x336));

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x337 = 516094U;
	int32_t x338 = INT32_MIN;
	int32_t x339 = -3633;
	volatile uint8_t x340 = 2U;
	uint32_t t84 = 8401937U;

    t84 = (x337|((x338<=x339)<=x340));

    if (t84 != 516095U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 17027209849LLU;
	int32_t x342 = INT32_MIN;
	uint64_t t85 = 6LLU;

    t85 = (x341|((x342<=x343)<=x344));

    if (t85 != 17027209849LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x347 = 27U;
	volatile int8_t x348 = INT8_MIN;
	uint64_t t86 = 639LLU;

    t86 = (x345|((x346<=x347)<=x348));

    if (t86 != 1262743851370424874LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	uint8_t x350 = 103U;
	volatile uint16_t x351 = 2808U;
	int8_t x352 = INT8_MIN;
	int32_t t87 = -4688117;

    t87 = (x349|((x350<=x351)<=x352));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x354 = INT32_MIN;
	static int64_t x355 = INT64_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	int32_t t88 = -5311721;

    t88 = (x353|((x354<=x355)<=x356));

    if (t88 != 25) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 13U;
	volatile int64_t x358 = -1LL;
	uint8_t x359 = 3U;
	uint8_t x360 = 1U;
	uint32_t t89 = 151933U;

    t89 = (x357|((x358<=x359)<=x360));

    if (t89 != 13U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x363 = INT64_MAX;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = 296436994;

    t90 = (x361|((x362<=x363)<=x364));

    if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x365 = 309250969U;
	int32_t x366 = INT32_MAX;
	uint32_t x367 = 196392U;
	uint32_t t91 = 2034U;

    t91 = (x365|((x366<=x367)<=x368));

    if (t91 != 309250969U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -54;
	uint8_t x370 = UINT8_MAX;
	uint64_t x371 = 859883706591878LLU;
	static volatile int32_t t92 = -52748884;

    t92 = (x369|((x370<=x371)<=x372));

    if (t92 != -54) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = INT32_MIN;
	static uint32_t x376 = 681238U;

    t93 = (x373|((x374<=x375)<=x376));

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	volatile int16_t x378 = INT16_MAX;
	volatile uint32_t x379 = 1031U;
	volatile int8_t x380 = 6;

    t94 = (x377|((x378<=x379)<=x380));

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -1LL;
	volatile int64_t x382 = 8249584022LL;
	static int64_t x383 = INT64_MIN;
	uint8_t x384 = UINT8_MAX;
	volatile int64_t t95 = 7652597LL;

    t95 = (x381|((x382<=x383)<=x384));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = INT8_MIN;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = -3;

    t96 = (x385|((x386<=x387)<=x388));

    if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	uint32_t x391 = 0U;
	int32_t x392 = -1;

    t97 = (x389|((x390<=x391)<=x392));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MAX;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 6U;
	static int8_t x396 = 44;
	static int32_t t98 = 1503293;

    t98 = (x393|((x394<=x395)<=x396));

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = INT32_MIN;
	int8_t x398 = -1;
	int64_t x399 = 1306356LL;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t99 = INT32_MIN;

    t99 = (x397|((x398<=x399)<=x400));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x401 = INT32_MIN;
	volatile int32_t t100 = 27;

    t100 = (x401|((x402<=x403)<=x404));

    if (t100 != -2147483647) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = -1LL;
	uint32_t x406 = 1909295U;
	int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MAX;
	int64_t t101 = -133023350314LL;

    t101 = (x405|((x406<=x407)<=x408));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 29176U;
	uint8_t x411 = UINT8_MAX;
	int32_t x412 = INT32_MIN;
	volatile int32_t t102 = 9154;

    t102 = (x409|((x410<=x411)<=x412));

    if (t102 != 29176) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x416 = INT64_MIN;
	volatile uint32_t t103 = UINT32_MAX;

    t103 = (x413|((x414<=x415)<=x416));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -859LL;
	int8_t x418 = -1;
	int8_t x419 = -1;
	int8_t x420 = -3;
	int64_t t104 = -2101131987303756643LL;

    t104 = (x417|((x418<=x419)<=x420));

    if (t104 != -859LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x421 = 497LLU;
	int64_t x422 = -1026409LL;
	static int16_t x423 = INT16_MIN;
	int16_t x424 = -1;
	uint64_t t105 = 421990848584LLU;

    t105 = (x421|((x422<=x423)<=x424));

    if (t105 != 497LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	static volatile uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MIN;
	int32_t t106 = INT32_MIN;

    t106 = (x425|((x426<=x427)<=x428));

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MIN;
	static int16_t x431 = -2342;
	static volatile int64_t x432 = INT64_MIN;
	int32_t t107 = 22049025;

    t107 = (x429|((x430<=x431)<=x432));

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	int32_t x434 = -1;
	int16_t x435 = INT16_MIN;
	int64_t x436 = -1LL;
	volatile int32_t t108 = -511890005;

    t108 = (x433|((x434<=x435)<=x436));

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	int8_t x438 = -18;
	volatile int16_t x440 = INT16_MIN;
	int64_t t109 = INT64_MIN;

    t109 = (x437|((x438<=x439)<=x440));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = INT32_MIN;
	uint16_t x443 = 92U;
	int32_t x444 = INT32_MAX;
	volatile uint64_t t110 = 237244753388585LLU;

    t110 = (x441|((x442<=x443)<=x444));

    if (t110 != 5558183LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 668U;
	int64_t x446 = -1LL;
	uint8_t x447 = 6U;
	int8_t x448 = -1;
	int32_t t111 = 0;

    t111 = (x445|((x446<=x447)<=x448));

    if (t111 != 668) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1986;
	int32_t t112 = -6269;

    t112 = (x449|((x450<=x451)<=x452));

    if (t112 != -1986) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	int32_t x454 = INT32_MIN;
	static int32_t x455 = INT32_MAX;
	static volatile int32_t x456 = -1;
	static volatile int32_t t113 = 61793;

    t113 = (x453|((x454<=x455)<=x456));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 48U;
	static volatile int16_t x458 = -1;
	volatile int8_t x460 = INT8_MIN;
	volatile int32_t t114 = -987;

    t114 = (x457|((x458<=x459)<=x460));

    if (t114 != 48) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	static uint8_t x462 = 1U;
	int8_t x463 = INT8_MIN;
	static int32_t x464 = INT32_MIN;
	static volatile int32_t t115 = -1;

    t115 = (x461|((x462<=x463)<=x464));

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 9U;
	uint16_t x466 = UINT16_MAX;
	uint32_t x467 = UINT32_MAX;
	int16_t x468 = -1;

    t116 = (x465|((x466<=x467)<=x468));

    if (t116 != 9) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int8_t x470 = 2;
	int8_t x471 = -1;
	int32_t x472 = -202008;
	volatile int32_t t117 = -9;

    t117 = (x469|((x470<=x471)<=x472));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x473 = INT8_MIN;
	uint16_t x474 = UINT16_MAX;
	int64_t x476 = INT64_MIN;
	volatile int32_t t118 = -3059392;

    t118 = (x473|((x474<=x475)<=x476));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MAX;
	volatile int16_t x478 = -6385;
	int8_t x479 = 59;
	static volatile int32_t t119 = 454;

    t119 = (x477|((x478<=x479)<=x480));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = -3477046283199092LL;
	uint8_t x483 = 26U;
	volatile int64_t t120 = -200292294LL;

    t120 = (x481|((x482<=x483)<=x484));

    if (t120 != -3477046283199092LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x485 = INT64_MIN;
	static volatile int32_t x487 = INT32_MAX;
	int64_t t121 = INT64_MIN;

    t121 = (x485|((x486<=x487)<=x488));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = INT32_MIN;
	uint16_t x491 = UINT16_MAX;
	int32_t x492 = -455981;
	static volatile int32_t t122 = INT32_MIN;

    t122 = (x489|((x490<=x491)<=x492));

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x495 = INT32_MIN;
	int16_t x496 = -266;
	volatile int64_t t123 = -7LL;

    t123 = (x493|((x494<=x495)<=x496));

    if (t123 != 420209767278055LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x498 = 6075U;
	uint32_t x500 = 166U;
	volatile int32_t t124 = 353;

    t124 = (x497|((x498<=x499)<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = -2651722;
	int8_t x502 = INT8_MIN;
	static int32_t x503 = INT32_MAX;
	volatile uint64_t x504 = 1747563550775LLU;

    t125 = (x501|((x502<=x503)<=x504));

    if (t125 != -2651721) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	static int8_t x506 = 3;
	volatile uint32_t x507 = 49U;
	int16_t x508 = INT16_MIN;
	volatile int32_t t126 = 245504808;

    t126 = (x505|((x506<=x507)<=x508));

    if (t126 != 255) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint64_t x509 = UINT64_MAX;
	volatile int8_t x510 = INT8_MIN;
	uint64_t x511 = 26793798076634607LLU;
	uint64_t x512 = 49062LLU;

    t127 = (x509|((x510<=x511)<=x512));

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -1;
	uint64_t x515 = UINT64_MAX;
	int32_t x516 = INT32_MAX;
	static volatile int32_t t128 = 9;

    t128 = (x513|((x514<=x515)<=x516));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	uint8_t x518 = 71U;
	int64_t x519 = -1LL;
	static volatile int16_t x520 = 439;
	int64_t t129 = -15LL;

    t129 = (x517|((x518<=x519)<=x520));

    if (t129 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	uint32_t x522 = UINT32_MAX;
	int64_t x523 = INT64_MAX;
	volatile int32_t t130 = -1;

    t130 = (x521|((x522<=x523)<=x524));

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	int16_t x526 = INT16_MIN;
	int16_t x527 = INT16_MIN;
	static int8_t x528 = -1;

    t131 = (x525|((x526<=x527)<=x528));

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x529 = 10350U;
	int8_t x530 = INT8_MIN;
	int32_t x532 = INT32_MIN;
	volatile int32_t t132 = 13;

    t132 = (x529|((x530<=x531)<=x532));

    if (t132 != 10350) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = INT16_MIN;
	uint64_t x534 = 12543032866733926LLU;
	int8_t x535 = INT8_MAX;
	volatile int32_t t133 = -250;

    t133 = (x533|((x534<=x535)<=x536));

    if (t133 != -32767) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x538 = 9678861081LLU;
	static volatile uint8_t x539 = UINT8_MAX;
	int32_t t134 = -63249;

    t134 = (x537|((x538<=x539)<=x540));

    if (t134 != 513) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 5U;
	int64_t x542 = -47544138746428LL;
	static int32_t t135 = -2299;

    t135 = (x541|((x542<=x543)<=x544));

    if (t135 != 5) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 5436821432351LL;
	static int16_t x546 = INT16_MAX;
	volatile int64_t x547 = INT64_MAX;
	int64_t x548 = -1LL;

    t136 = (x545|((x546<=x547)<=x548));

    if (t136 != 5436821432351LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1LL;
	uint64_t x550 = 15253LLU;
	int16_t x551 = 3135;
	int32_t x552 = -156796;
	volatile int64_t t137 = -122LL;

    t137 = (x549|((x550<=x551)<=x552));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = UINT16_MAX;
	int64_t x554 = -6121671895523LL;
	int8_t x555 = INT8_MAX;
	static volatile int16_t x556 = 62;

    t138 = (x553|((x554<=x555)<=x556));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x557 = UINT32_MAX;
	volatile int32_t x558 = INT32_MIN;
	int16_t x559 = 15;

    t139 = (x557|((x558<=x559)<=x560));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	static uint16_t x562 = UINT16_MAX;
	int32_t x563 = -59833369;
	static int32_t x564 = -1;
	int32_t t140 = -43;

    t140 = (x561|((x562<=x563)<=x564));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = -1;
	volatile int16_t x566 = 11;
	int8_t x567 = -1;
	uint8_t x568 = UINT8_MAX;
	static volatile int32_t t141 = -1185649;

    t141 = (x565|((x566<=x567)<=x568));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	static int8_t x570 = 2;
	int64_t x571 = INT64_MIN;
	int32_t t142 = 823019;

    t142 = (x569|((x570<=x571)<=x572));

    if (t142 != -127) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = INT16_MIN;
	int64_t x575 = INT64_MIN;
	volatile int16_t x576 = 0;

    t143 = (x573|((x574<=x575)<=x576));

    if (t143 != -32767) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	int64_t x578 = -317320LL;
	int16_t x579 = -301;
	uint64_t x580 = UINT64_MAX;
	static volatile int32_t t144 = 1533637;

    t144 = (x577|((x578<=x579)<=x580));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x584 = 17138554LLU;
	static int32_t t145 = 934;

    t145 = (x581|((x582<=x583)<=x584));

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -1;
	uint16_t x586 = 324U;
	int32_t t146 = -11907;

    t146 = (x585|((x586<=x587)<=x588));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	int64_t t147 = INT64_MIN;

    t147 = (x589|((x590<=x591)<=x592));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x594 = -1;
	volatile int16_t x595 = 8;
	static uint16_t x596 = 204U;
	volatile int32_t t148 = -63;

    t148 = (x593|((x594<=x595)<=x596));

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	static int8_t x598 = INT8_MIN;
	uint32_t x599 = 46617U;
	uint16_t x600 = UINT16_MAX;

    t149 = (x597|((x598<=x599)<=x600));

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	int8_t x603 = 15;
	static volatile uint16_t x604 = 1066U;

    t150 = (x601|((x602<=x603)<=x604));

    if (t150 != 255) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	uint16_t x606 = 734U;
	int16_t x607 = 28;
	int64_t x608 = INT64_MIN;
	int32_t t151 = 188575;

    t151 = (x605|((x606<=x607)<=x608));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x610 = 3;
	static int64_t x612 = -8778255987306LL;
	volatile int32_t t152 = -1;

    t152 = (x609|((x610<=x611)<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	uint64_t x614 = UINT64_MAX;
	uint64_t x616 = 3LLU;

    t153 = (x613|((x614<=x615)<=x616));

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x618 = UINT16_MAX;
	uint32_t x619 = 3488U;
	volatile int16_t x620 = INT16_MIN;
	volatile int32_t t154 = 37628038;

    t154 = (x617|((x618<=x619)<=x620));

    if (t154 != 255) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	volatile uint64_t x622 = UINT64_MAX;
	int16_t x624 = INT16_MIN;
	static volatile int32_t t155 = -1;

    t155 = (x621|((x622<=x623)<=x624));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x625 = 102615335U;
	int64_t x626 = -186510605275843733LL;
	volatile int32_t x627 = INT32_MIN;
	static volatile int64_t x628 = 1031248943LL;
	uint32_t t156 = 78587U;

    t156 = (x625|((x626<=x627)<=x628));

    if (t156 != 102615335U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MIN;
	static volatile int32_t x630 = INT32_MIN;
	int64_t x631 = -1LL;
	volatile uint16_t x632 = 1U;
	volatile int32_t t157 = 51173992;

    t157 = (x629|((x630<=x631)<=x632));

    if (t157 != -127) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 45718931U;
	int64_t x634 = -3765614815252557052LL;
	uint8_t x635 = UINT8_MAX;
	static volatile int64_t x636 = INT64_MIN;
	volatile uint32_t t158 = 3U;

    t158 = (x633|((x634<=x635)<=x636));

    if (t158 != 45718931U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 1840U;
	static int64_t x639 = INT64_MIN;
	static volatile int32_t x640 = -24555;
	static volatile int32_t t159 = -16867;

    t159 = (x637|((x638<=x639)<=x640));

    if (t159 != 1840) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 1LLU;
	int8_t x644 = INT8_MIN;
	static volatile uint64_t t160 = 5507LLU;

    t160 = (x641|((x642<=x643)<=x644));

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	uint32_t x647 = UINT32_MAX;
	int8_t x648 = 6;

    t161 = (x645|((x646<=x647)<=x648));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x649 = 417540U;
	volatile int32_t x650 = -80233255;
	volatile uint64_t x651 = 4594137977LLU;
	int8_t x652 = INT8_MIN;
	volatile uint32_t t162 = 385382U;

    t162 = (x649|((x650<=x651)<=x652));

    if (t162 != 417540U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x653 = UINT32_MAX;
	volatile int16_t x654 = INT16_MAX;
	int16_t x656 = INT16_MIN;
	static uint32_t t163 = UINT32_MAX;

    t163 = (x653|((x654<=x655)<=x656));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	int8_t x659 = 2;
	volatile int8_t x660 = 4;
	volatile uint64_t t164 = UINT64_MAX;

    t164 = (x657|((x658<=x659)<=x660));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MAX;
	volatile int16_t x662 = -22;
	int32_t x663 = -1;
	uint32_t x664 = 3U;
	static volatile int32_t t165 = -1070475;

    t165 = (x661|((x662<=x663)<=x664));

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x665 = UINT64_MAX;
	int16_t x666 = INT16_MIN;
	volatile uint8_t x667 = 0U;
	int8_t x668 = INT8_MIN;

    t166 = (x665|((x666<=x667)<=x668));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	static int64_t x671 = -55063724LL;

    t167 = (x669|((x670<=x671)<=x672));

    if (t167 != -32767) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x674 = 3574751U;
	int16_t x675 = INT16_MAX;
	uint64_t x676 = 584072LLU;
	static volatile int32_t t168 = -1018013;

    t168 = (x673|((x674<=x675)<=x676));

    if (t168 != -787) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = UINT16_MAX;
	int16_t x678 = -1;
	static uint16_t x679 = UINT16_MAX;
	uint32_t x680 = UINT32_MAX;

    t169 = (x677|((x678<=x679)<=x680));

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -1LL;
	uint64_t x683 = 118529LLU;
	int8_t x684 = INT8_MAX;
	static int64_t t170 = 135866LL;

    t170 = (x681|((x682<=x683)<=x684));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = 52248;
	uint16_t x687 = UINT16_MAX;
	volatile int8_t x688 = -1;
	int64_t t171 = INT64_MIN;

    t171 = (x685|((x686<=x687)<=x688));

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;

    t172 = (x689|((x690<=x691)<=x692));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = UINT32_MAX;
	uint64_t x694 = UINT64_MAX;
	int8_t x696 = 1;
	static uint32_t t173 = UINT32_MAX;

    t173 = (x693|((x694<=x695)<=x696));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = -1LL;
	static int64_t x698 = 2LL;
	volatile int64_t t174 = -6LL;

    t174 = (x697|((x698<=x699)<=x700));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	static uint16_t x702 = 12U;
	int16_t x704 = INT16_MAX;
	volatile int32_t t175 = -184571903;

    t175 = (x701|((x702<=x703)<=x704));

    if (t175 != -127) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	static int32_t x706 = -148318;
	uint32_t x707 = 93U;
	int8_t x708 = -46;
	int32_t t176 = 107763714;

    t176 = (x705|((x706<=x707)<=x708));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 667U;
	static int32_t x710 = -1;
	uint8_t x711 = 7U;
	uint32_t x712 = UINT32_MAX;
	uint32_t t177 = 1357085U;

    t177 = (x709|((x710<=x711)<=x712));

    if (t177 != 667U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x713 = UINT32_MAX;
	static int32_t x714 = 252371;
	uint64_t x715 = 881256530LLU;
	static int8_t x716 = INT8_MIN;
	uint32_t t178 = UINT32_MAX;

    t178 = (x713|((x714<=x715)<=x716));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x717 = 0U;
	int64_t x718 = 31LL;
	uint8_t x719 = UINT8_MAX;
	uint64_t x720 = UINT64_MAX;
	volatile int32_t t179 = 59831;

    t179 = (x717|((x718<=x719)<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 1418406707013870LLU;
	int8_t x722 = -57;
	volatile int8_t x724 = -39;
	volatile uint64_t t180 = 1LLU;

    t180 = (x721|((x722<=x723)<=x724));

    if (t180 != 1418406707013870LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 45LLU;
	static int32_t x726 = INT32_MAX;
	static volatile int8_t x728 = INT8_MIN;
	uint64_t t181 = 4073869142675939LLU;

    t181 = (x725|((x726<=x727)<=x728));

    if (t181 != 45LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x729 = 43;
	int8_t x730 = INT8_MIN;
	int64_t x731 = -3266756LL;
	int32_t x732 = INT32_MIN;
	static int32_t t182 = -2593;

    t182 = (x729|((x730<=x731)<=x732));

    if (t182 != 43) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x734 = 12U;
	int32_t t183 = -8732100;

    t183 = (x733|((x734<=x735)<=x736));

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1;
	volatile int32_t x738 = INT32_MAX;
	uint16_t x739 = UINT16_MAX;
	int8_t x740 = -1;
	volatile int32_t t184 = -25;

    t184 = (x737|((x738<=x739)<=x740));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -3943090701124341LL;
	static int8_t x742 = -1;
	int64_t x743 = 7308325139237152LL;
	uint64_t x744 = UINT64_MAX;

    t185 = (x741|((x742<=x743)<=x744));

    if (t185 != -3943090701124341LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x746 = 385167369767662LLU;
	int16_t x748 = -126;
	static int32_t t186 = INT32_MAX;

    t186 = (x745|((x746<=x747)<=x748));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x750 = INT64_MIN;
	static volatile int32_t t187 = -5888396;

    t187 = (x749|((x750<=x751)<=x752));

    if (t187 != 32767) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x753 = 14110943702LLU;
	uint32_t x754 = 22U;
	int32_t x755 = INT32_MIN;

    t188 = (x753|((x754<=x755)<=x756));

    if (t188 != 14110943703LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x759 = -1LL;
	static uint64_t x760 = UINT64_MAX;
	volatile int32_t t189 = -1;

    t189 = (x757|((x758<=x759)<=x760));

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MIN;
	uint32_t x763 = 7420736U;
	int64_t x764 = INT64_MIN;

    t190 = (x761|((x762<=x763)<=x764));

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	static volatile int8_t x767 = INT8_MIN;
	int8_t x768 = -1;
	volatile int32_t t191 = -239;

    t191 = (x765|((x766<=x767)<=x768));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = 3179367001149985746LL;
	int8_t x770 = INT8_MAX;
	static int8_t x771 = -1;
	int16_t x772 = 0;
	int64_t t192 = -109LL;

    t192 = (x769|((x770<=x771)<=x772));

    if (t192 != 3179367001149985747LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = 58;
	static int16_t x774 = -714;
	int32_t t193 = 478683;

    t193 = (x773|((x774<=x775)<=x776));

    if (t193 != 59) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x778 = 30U;
	uint64_t x779 = 4262293207128LLU;
	static int32_t t194 = 8923506;

    t194 = (x777|((x778<=x779)<=x780));

    if (t194 != 11) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -10;
	uint64_t x782 = 22429679LLU;
	uint64_t x783 = 13669LLU;
	volatile int32_t t195 = 1;

    t195 = (x781|((x782<=x783)<=x784));

    if (t195 != -10) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = 114;
	int64_t x786 = INT64_MAX;
	volatile uint32_t x787 = UINT32_MAX;
	volatile uint8_t x788 = 13U;
	volatile int32_t t196 = -2;

    t196 = (x785|((x786<=x787)<=x788));

    if (t196 != 115) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = 5086LL;
	int16_t x790 = INT16_MIN;
	int8_t x791 = -9;
	int64_t x792 = INT64_MIN;
	int64_t t197 = -18125085836LL;

    t197 = (x789|((x790<=x791)<=x792));

    if (t197 != 5086LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1;
	static int64_t x794 = -668328018827179LL;
	uint32_t x795 = 1U;
	uint32_t x796 = 19284280U;
	int32_t t198 = 511390;

    t198 = (x793|((x794<=x795)<=x796));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	int8_t x798 = 2;
	volatile int64_t x799 = -978812398LL;
	volatile uint32_t t199 = UINT32_MAX;

    t199 = (x797|((x798<=x799)<=x800));

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

