
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

int8_t x5 = INT8_MIN;
uint16_t x12 = 1837U;
int32_t t3 = 397;
int32_t x18 = INT32_MAX;
volatile int64_t x27 = -1LL;
static int64_t x29 = INT64_MIN;
int16_t x33 = -10212;
int32_t x34 = 4834;
int64_t x37 = -1LL;
volatile int32_t t9 = -11;
uint64_t x42 = 935717LLU;
int32_t x47 = INT32_MAX;
int8_t x50 = INT8_MAX;
volatile int32_t t14 = -66969145;
uint64_t x62 = 2LLU;
volatile uint8_t x64 = UINT8_MAX;
volatile int32_t x69 = INT32_MIN;
int32_t t18 = -1;
int32_t t19 = 691528148;
volatile uint16_t x84 = UINT16_MAX;
uint8_t x87 = 12U;
static int32_t t22 = -78543581;
int32_t x93 = -1;
static int64_t x94 = -3700LL;
int8_t x98 = INT8_MIN;
int64_t x101 = -1965164086890LL;
static int16_t x102 = INT16_MIN;
int8_t x108 = 0;
int32_t x110 = INT32_MIN;
static int8_t x115 = INT8_MIN;
volatile uint8_t x119 = 13U;
int32_t x127 = 2;
volatile int16_t x128 = 0;
static volatile int64_t x129 = INT64_MAX;
static volatile int32_t t33 = 7145671;
static int16_t x137 = INT16_MIN;
int8_t x138 = INT8_MIN;
uint32_t x146 = 2U;
volatile int32_t t39 = 1712165;
int64_t x161 = INT64_MIN;
static uint16_t x162 = 21U;
static uint64_t x165 = UINT64_MAX;
int32_t x170 = INT32_MIN;
uint16_t x171 = 309U;
int8_t x177 = INT8_MIN;
volatile int16_t x181 = -6;
static volatile int8_t x183 = INT8_MIN;
uint8_t x187 = 20U;
int16_t x193 = -1;
int8_t x196 = 27;
static volatile uint16_t x198 = UINT16_MAX;
int64_t x199 = 3267LL;
int16_t x202 = -1;
volatile int32_t t50 = 218638;
int16_t x208 = INT16_MIN;
int32_t x214 = -1;
volatile int8_t x222 = INT8_MIN;
volatile int32_t t55 = -3525;
int8_t x225 = 1;
int64_t x231 = INT64_MIN;
static int8_t x235 = -1;
volatile int8_t x239 = INT8_MIN;
int8_t x246 = -1;
uint32_t x248 = 142258172U;
int64_t x249 = INT64_MAX;
uint16_t x252 = 149U;
int32_t t62 = 33304;
static int64_t x254 = INT64_MIN;
uint8_t x270 = 0U;
static int8_t x271 = -4;
volatile int32_t t67 = 24826;
volatile int8_t x275 = INT8_MIN;
int32_t x279 = INT32_MAX;
uint64_t x283 = 4235042138236842LLU;
static int32_t t70 = 3763;
static int64_t x298 = INT64_MIN;
int32_t x300 = INT32_MIN;
static int32_t t75 = 10122108;
int8_t x315 = INT8_MIN;
int64_t x316 = 111475214967LL;
volatile int32_t t78 = 476477247;
int32_t x320 = -1;
volatile int32_t x326 = INT32_MIN;
volatile int32_t t81 = -10982162;
int64_t x329 = -244932268LL;
int32_t t82 = 483381726;
int32_t x342 = 170030754;
volatile int16_t x349 = 1;
uint8_t x362 = 101U;
int16_t x367 = -329;
uint32_t x368 = 1821901165U;
uint8_t x374 = UINT8_MAX;
static uint8_t x380 = 0U;
int32_t t94 = 23;
int64_t x382 = -1LL;
static int32_t x384 = 7118635;
int64_t x391 = INT64_MIN;
int32_t t97 = -395585062;
int8_t x394 = -1;
int32_t t98 = -935525;
int32_t x404 = -2;
static int8_t x405 = INT8_MIN;
volatile int32_t t101 = 73643;
static int32_t t102 = 1;
static volatile int8_t x416 = -52;
static volatile int32_t t103 = -51;
int8_t x421 = INT8_MIN;
int16_t x422 = 50;
int16_t x426 = INT16_MAX;
int16_t x441 = -1;
int16_t x446 = INT16_MIN;
int32_t x455 = 1726;
static int64_t x456 = INT64_MIN;
int32_t t113 = 18992190;
int64_t x461 = INT64_MIN;
static uint64_t x462 = 23362758789LLU;
uint64_t x465 = UINT64_MAX;
int64_t x468 = -1LL;
uint16_t x473 = 96U;
static int32_t x474 = -1;
int32_t x478 = INT32_MIN;
int64_t x479 = INT64_MIN;
int8_t x481 = INT8_MIN;
int16_t x483 = 13;
volatile int32_t t119 = -59944;
static int32_t t121 = -138;
volatile int32_t t122 = 1;
static int16_t x497 = INT16_MIN;
uint32_t x502 = 739U;
static uint8_t x507 = 4U;
static int64_t x510 = -1LL;
volatile uint16_t x518 = 2746U;
int64_t x525 = -1LL;
static uint8_t x535 = UINT8_MAX;
int32_t t132 = 217;
static int32_t x538 = -1;
volatile uint16_t x539 = UINT16_MAX;
volatile uint8_t x542 = UINT8_MAX;
int64_t x544 = INT64_MAX;
volatile int32_t x548 = INT32_MIN;
volatile uint64_t x554 = UINT64_MAX;
volatile int64_t x562 = INT64_MIN;
int32_t x567 = INT32_MIN;
static volatile int32_t t141 = 1;
int8_t x580 = INT8_MAX;
volatile int32_t t143 = -725;
volatile int32_t x589 = -1;
int16_t x590 = INT16_MIN;
int8_t x592 = 0;
int32_t t146 = -69968;
int64_t x594 = INT64_MIN;
int64_t x597 = 132300700LL;
static uint32_t x600 = 2U;
static uint16_t x605 = 603U;
uint8_t x606 = 101U;
volatile uint64_t x607 = UINT64_MAX;
int8_t x610 = INT8_MIN;
volatile int64_t x612 = INT64_MAX;
uint16_t x615 = 356U;
int32_t t152 = 6;
volatile int16_t x621 = INT16_MIN;
int32_t x622 = INT32_MAX;
volatile int32_t x632 = 25366824;
int32_t t155 = -276164;
volatile int32_t t157 = -515;
uint32_t x643 = 41027U;
uint8_t x646 = 10U;
int64_t x648 = INT64_MIN;
volatile uint16_t x650 = 22582U;
volatile uint64_t x651 = 129527095LLU;
volatile int8_t x653 = -1;
volatile int8_t x654 = -42;
uint8_t x660 = 76U;
static volatile uint16_t x662 = 12U;
volatile int32_t t163 = 10;
volatile int64_t x673 = INT64_MIN;
static uint32_t x674 = UINT32_MAX;
static volatile int64_t x679 = -490034742227381LL;
volatile int32_t t166 = 65520;
int64_t x681 = INT64_MIN;
volatile int32_t t170 = -21852;
static int64_t x699 = -410411861037LL;
static uint16_t x700 = UINT16_MAX;
static uint32_t x705 = UINT32_MAX;
int32_t x707 = INT32_MIN;
uint32_t x712 = 3162874U;
static volatile int32_t t173 = 781481;
int64_t x718 = -499459966604LL;
int32_t x721 = INT32_MAX;
static int32_t x725 = INT32_MIN;
volatile int32_t x728 = 1;
int32_t x733 = -10083964;
int32_t t180 = 110636887;
static int32_t x746 = INT32_MIN;
int16_t x753 = INT16_MAX;
int8_t x755 = INT8_MIN;
int8_t x757 = INT8_MIN;
static int16_t x760 = INT16_MIN;
static int32_t x767 = -116;
static int32_t x770 = 8;
volatile int16_t x781 = INT16_MAX;
volatile int32_t t192 = 3165032;
static int32_t t193 = -440498;
static int8_t x805 = -7;
volatile uint8_t x806 = 38U;
static volatile int8_t x807 = INT8_MAX;
int8_t x809 = INT8_MIN;
uint64_t x812 = 42171810594726110LLU;
uint32_t x814 = 4U;
volatile int16_t x816 = -1;
int8_t x822 = INT8_MIN;


void f0(void) {
    	static volatile int32_t x1 = -1;
	int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MIN;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 16;

    t0 = (x1!=((x2<=x3)+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = UINT8_MAX;
	static int8_t x7 = INT8_MIN;
	int8_t x8 = 0;
	volatile int32_t t1 = -2248;

    t1 = (x5!=((x6<=x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MAX;
	static int64_t x10 = INT64_MIN;
	volatile int8_t x11 = INT8_MIN;
	static int32_t t2 = 340444;

    t2 = (x9!=((x10<=x11)+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -6852192;
	volatile int32_t x14 = -31709796;
	int32_t x15 = -1;
	int32_t x16 = -113;

    t3 = (x13!=((x14<=x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x17 = 48U;
	int64_t x19 = INT64_MIN;
	static int64_t x20 = 48759LL;
	volatile int32_t t4 = -368;

    t4 = (x17!=((x18<=x19)+x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -1;
	static int32_t x22 = 1106;
	static uint8_t x23 = 52U;
	uint32_t x24 = 88718U;
	volatile int32_t t5 = 112;

    t5 = (x21!=((x22<=x23)+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	static int8_t x26 = INT8_MIN;
	uint16_t x28 = 7U;
	volatile int32_t t6 = 82504138;

    t6 = (x25!=((x26<=x27)+x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x30 = 6491129004287LL;
	int16_t x31 = -1;
	int32_t x32 = 42;
	volatile int32_t t7 = -13;

    t7 = (x29!=((x30<=x31)+x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x35 = INT8_MIN;
	int8_t x36 = -1;
	volatile int32_t t8 = 97096380;

    t8 = (x33!=((x34<=x35)+x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x38 = UINT64_MAX;
	volatile uint32_t x39 = 2U;
	volatile int16_t x40 = INT16_MIN;

    t9 = (x37!=((x38<=x39)+x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = 3;
	int64_t x43 = 237787549LL;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -168322072;

    t10 = (x41!=((x42<=x43)+x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 151U;
	int32_t x46 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t11 = 119427661;

    t11 = (x45!=((x46<=x47)+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	volatile int64_t x51 = 208LL;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -5;

    t12 = (x49!=((x50<=x51)+x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MAX;
	static int32_t x54 = 7;
	volatile int8_t x55 = -1;
	static volatile int16_t x56 = INT16_MIN;
	int32_t t13 = 16385046;

    t13 = (x53!=((x54<=x55)+x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -21;
	int16_t x58 = 3236;
	uint16_t x59 = 3963U;
	volatile uint16_t x60 = UINT16_MAX;

    t14 = (x57!=((x58<=x59)+x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	int64_t x63 = INT64_MIN;
	volatile int32_t t15 = 13;

    t15 = (x61!=((x62<=x63)+x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = -36;
	int8_t x66 = -1;
	int32_t x67 = -1;
	static volatile int32_t x68 = INT32_MIN;
	static int32_t t16 = 1589261;

    t16 = (x65!=((x66<=x67)+x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = INT32_MIN;
	volatile int32_t x71 = -16758;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -12;

    t17 = (x69!=((x70<=x71)+x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	uint8_t x74 = 41U;
	int16_t x75 = -3045;
	int8_t x76 = INT8_MIN;

    t18 = (x73!=((x74<=x75)+x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 3273985702896373696LLU;
	static volatile int64_t x78 = -1LL;
	uint8_t x79 = 121U;
	int8_t x80 = -1;

    t19 = (x77!=((x78<=x79)+x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	int16_t x82 = 1918;
	uint32_t x83 = 48734U;
	int32_t t20 = -24823;

    t20 = (x81!=((x82<=x83)+x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = UINT64_MAX;
	uint16_t x86 = UINT16_MAX;
	int8_t x88 = -1;
	volatile int32_t t21 = -1;

    t21 = (x85!=((x86<=x87)+x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 798;
	uint16_t x90 = UINT16_MAX;
	int32_t x91 = -1;
	static int32_t x92 = 11456288;

    t22 = (x89!=((x90<=x91)+x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x95 = -1LL;
	int64_t x96 = INT64_MIN;
	static int32_t t23 = -1020277;

    t23 = (x93!=((x94<=x95)+x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MIN;
	int8_t x99 = -1;
	uint8_t x100 = 66U;
	static int32_t t24 = 0;

    t24 = (x97!=((x98<=x99)+x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x103 = 16U;
	static int8_t x104 = INT8_MIN;
	int32_t t25 = 13148213;

    t25 = (x101!=((x102<=x103)+x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1;
	static uint64_t x106 = UINT64_MAX;
	static int16_t x107 = INT16_MIN;
	static volatile int32_t t26 = -5;

    t26 = (x105!=((x106<=x107)+x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x109 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	static int64_t x112 = -16205456304906607LL;
	volatile int32_t t27 = -41815873;

    t27 = (x109!=((x110<=x111)+x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	int64_t x114 = INT64_MAX;
	uint64_t x116 = 2923486417139134LLU;
	int32_t t28 = 2823158;

    t28 = (x113!=((x114<=x115)+x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	volatile int64_t x118 = -2040846084960616LL;
	int16_t x120 = 0;
	static volatile int32_t t29 = -6696327;

    t29 = (x117!=((x118<=x119)+x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int16_t x122 = -95;
	int64_t x123 = INT64_MIN;
	static volatile int16_t x124 = INT16_MAX;
	int32_t t30 = -2080135;

    t30 = (x121!=((x122<=x123)+x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = 596;
	volatile int32_t x126 = INT32_MAX;
	int32_t t31 = 69200;

    t31 = (x125!=((x126<=x127)+x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x130 = INT64_MAX;
	static uint64_t x131 = 7306346947373481418LLU;
	int8_t x132 = 16;
	static int32_t t32 = -1994;

    t32 = (x129!=((x130<=x131)+x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x133 = 5645U;
	volatile uint32_t x134 = 75542042U;
	int8_t x135 = INT8_MIN;
	volatile int16_t x136 = 2;

    t33 = (x133!=((x134<=x135)+x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x139 = UINT32_MAX;
	int8_t x140 = 4;
	int32_t t34 = -56007276;

    t34 = (x137!=((x138<=x139)+x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = INT64_MIN;
	static uint32_t x142 = 2110U;
	uint8_t x143 = 13U;
	uint16_t x144 = 1U;
	volatile int32_t t35 = -428252;

    t35 = (x141!=((x142<=x143)+x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	static volatile uint32_t x147 = UINT32_MAX;
	int32_t x148 = -1;
	volatile int32_t t36 = 32;

    t36 = (x145!=((x146<=x147)+x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 60643U;
	uint8_t x150 = 5U;
	volatile int16_t x151 = INT16_MIN;
	uint8_t x152 = 4U;
	volatile int32_t t37 = -1;

    t37 = (x149!=((x150<=x151)+x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MIN;
	volatile uint8_t x154 = 13U;
	int8_t x155 = INT8_MAX;
	static int16_t x156 = 15409;
	static volatile int32_t t38 = -2854;

    t38 = (x153!=((x154<=x155)+x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = -1;
	int8_t x158 = INT8_MAX;
	static int8_t x159 = -1;
	int64_t x160 = -2007LL;

    t39 = (x157!=((x158<=x159)+x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x163 = INT16_MIN;
	uint64_t x164 = 6506LLU;
	volatile int32_t t40 = 75580674;

    t40 = (x161!=((x162<=x163)+x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MAX;
	volatile int32_t t41 = 2575160;

    t41 = (x165!=((x166<=x167)+x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	uint8_t x172 = 7U;
	volatile int32_t t42 = -5803;

    t42 = (x169!=((x170<=x171)+x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	int8_t x174 = 0;
	static volatile int64_t x175 = -1LL;
	volatile int64_t x176 = -120LL;
	int32_t t43 = 337;

    t43 = (x173!=((x174<=x175)+x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x178 = 142952U;
	static int64_t x179 = INT64_MIN;
	static volatile int8_t x180 = INT8_MAX;
	int32_t t44 = 1;

    t44 = (x177!=((x178<=x179)+x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x182 = 28479U;
	static uint8_t x184 = 0U;
	int32_t t45 = 2423148;

    t45 = (x181!=((x182<=x183)+x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	int8_t x186 = INT8_MAX;
	int8_t x188 = -4;
	static volatile int32_t t46 = -388389055;

    t46 = (x185!=((x186<=x187)+x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	int16_t x190 = 110;
	static uint8_t x191 = 10U;
	int16_t x192 = 1;
	volatile int32_t t47 = -1116882;

    t47 = (x189!=((x190<=x191)+x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x194 = 224009LLU;
	int32_t x195 = -1776423;
	volatile int32_t t48 = -100975;

    t48 = (x193!=((x194<=x195)+x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = -3862848;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t49 = 4188;

    t49 = (x197!=((x198<=x199)+x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x201 = 12U;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = 3;

    t50 = (x201!=((x202<=x203)+x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MAX;
	static volatile uint32_t x207 = UINT32_MAX;
	volatile int32_t t51 = 2;

    t51 = (x205!=((x206<=x207)+x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x209 = 3980U;
	volatile int8_t x210 = INT8_MIN;
	volatile int16_t x211 = -1;
	static int32_t x212 = -1;
	static int32_t t52 = -10;

    t52 = (x209!=((x210<=x211)+x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = 1779;
	volatile uint64_t x215 = 774LLU;
	static int8_t x216 = 14;
	volatile int32_t t53 = 364;

    t53 = (x213!=((x214<=x215)+x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 157995U;
	int64_t x218 = 196047524146442LL;
	static uint8_t x219 = 5U;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t54 = 2;

    t54 = (x217!=((x218<=x219)+x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = 4418LLU;
	int32_t x223 = -1;
	static uint16_t x224 = 9239U;

    t55 = (x221!=((x222<=x223)+x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x226 = INT16_MIN;
	static int32_t x227 = INT32_MIN;
	uint64_t x228 = 381120534LLU;
	int32_t t56 = -77296;

    t56 = (x225!=((x226<=x227)+x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MAX;
	int32_t x232 = INT32_MAX;
	int32_t t57 = 1;

    t57 = (x229!=((x230<=x231)+x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = 4;
	uint16_t x234 = UINT16_MAX;
	volatile int64_t x236 = -119310714841LL;
	volatile int32_t t58 = -339441982;

    t58 = (x233!=((x234<=x235)+x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = INT16_MIN;
	volatile int64_t x238 = INT64_MIN;
	uint8_t x240 = 39U;
	volatile int32_t t59 = 7992306;

    t59 = (x237!=((x238<=x239)+x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = -399590729LL;
	int8_t x242 = -2;
	static int64_t x243 = -261255398297515826LL;
	int64_t x244 = -1LL;
	int32_t t60 = -4076;

    t60 = (x241!=((x242<=x243)+x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 79567686044567LLU;
	int32_t x247 = 47;
	static int32_t t61 = -5199;

    t61 = (x245!=((x246<=x247)+x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x250 = INT8_MIN;
	uint8_t x251 = UINT8_MAX;

    t62 = (x249!=((x250<=x251)+x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	int16_t x255 = INT16_MAX;
	static int32_t x256 = 1304780;
	volatile int32_t t63 = -111;

    t63 = (x253!=((x254<=x255)+x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	int32_t x258 = -4;
	int32_t x259 = INT32_MIN;
	int32_t x260 = -1;
	volatile int32_t t64 = 32746051;

    t64 = (x257!=((x258<=x259)+x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 1U;
	static volatile int8_t x262 = INT8_MAX;
	static uint32_t x263 = UINT32_MAX;
	int32_t x264 = -389408417;
	volatile int32_t t65 = -248;

    t65 = (x261!=((x262<=x263)+x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 0;
	static int32_t x266 = 3588963;
	int32_t x267 = INT32_MAX;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = 524;

    t66 = (x265!=((x266<=x267)+x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	volatile int64_t x272 = -4068333694617LL;

    t67 = (x269!=((x270<=x271)+x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x273 = UINT64_MAX;
	static volatile int8_t x274 = -1;
	uint64_t x276 = 1393276944LLU;
	volatile int32_t t68 = 45856;

    t68 = (x273!=((x274<=x275)+x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = 2836201;
	volatile int16_t x278 = INT16_MIN;
	volatile int32_t x280 = INT32_MIN;
	static volatile int32_t t69 = 2881;

    t69 = (x277!=((x278<=x279)+x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x281 = 1015040471367646LLU;
	int64_t x282 = INT64_MAX;
	static volatile int32_t x284 = INT32_MIN;

    t70 = (x281!=((x282<=x283)+x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 400;
	static uint8_t x286 = UINT8_MAX;
	uint8_t x287 = UINT8_MAX;
	uint32_t x288 = 275353789U;
	volatile int32_t t71 = -413;

    t71 = (x285!=((x286<=x287)+x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	int64_t x290 = INT64_MAX;
	uint8_t x291 = 17U;
	int16_t x292 = -2906;
	int32_t t72 = -6;

    t72 = (x289!=((x290<=x291)+x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = 29;
	static int64_t x294 = -5161393243050LL;
	static volatile uint32_t x295 = UINT32_MAX;
	static volatile uint16_t x296 = UINT16_MAX;
	int32_t t73 = 25097401;

    t73 = (x293!=((x294<=x295)+x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = 3;
	int8_t x299 = -1;
	static volatile int32_t t74 = 58;

    t74 = (x297!=((x298<=x299)+x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = UINT64_MAX;
	uint8_t x302 = UINT8_MAX;
	static int16_t x303 = 500;
	volatile uint32_t x304 = 222909U;

    t75 = (x301!=((x302<=x303)+x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = INT64_MAX;
	int64_t x306 = 286417391473941LL;
	int64_t x307 = INT64_MIN;
	static volatile uint32_t x308 = 11757425U;
	volatile int32_t t76 = 12460;

    t76 = (x305!=((x306<=x307)+x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = -254;
	volatile int16_t x310 = INT16_MIN;
	volatile int16_t x311 = INT16_MIN;
	uint8_t x312 = 120U;
	static int32_t t77 = 3;

    t77 = (x309!=((x310<=x311)+x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = INT16_MIN;
	static int8_t x314 = INT8_MIN;

    t78 = (x313!=((x314<=x315)+x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = INT64_MIN;
	static int8_t x318 = INT8_MIN;
	uint64_t x319 = UINT64_MAX;
	volatile int32_t t79 = -686955;

    t79 = (x317!=((x318<=x319)+x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -72463;
	volatile uint32_t x322 = 99392531U;
	int8_t x323 = INT8_MIN;
	volatile int64_t x324 = INT64_MIN;
	int32_t t80 = -8805;

    t80 = (x321!=((x322<=x323)+x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = 57;
	static int16_t x327 = -1;
	static int32_t x328 = INT32_MIN;

    t81 = (x325!=((x326<=x327)+x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x330 = 126U;
	volatile int64_t x331 = -52481284991704LL;
	uint16_t x332 = UINT16_MAX;

    t82 = (x329!=((x330<=x331)+x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 6LL;
	static volatile uint32_t x334 = UINT32_MAX;
	int64_t x335 = 90263382376094831LL;
	int8_t x336 = INT8_MAX;
	int32_t t83 = -6;

    t83 = (x333!=((x334<=x335)+x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -1;
	uint64_t x338 = 2973717156LLU;
	uint64_t x339 = 94241086123LLU;
	volatile int64_t x340 = -1LL;
	volatile int32_t t84 = -69407;

    t84 = (x337!=((x338<=x339)+x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	int64_t x343 = INT64_MAX;
	int32_t x344 = -1;
	volatile int32_t t85 = 6011685;

    t85 = (x341!=((x342<=x343)+x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MIN;
	volatile int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = 5639528;

    t86 = (x345!=((x346<=x347)+x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x350 = INT16_MAX;
	int16_t x351 = INT16_MAX;
	int32_t x352 = -154745458;
	int32_t t87 = 136092784;

    t87 = (x349!=((x350<=x351)+x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	static volatile int16_t x354 = -14358;
	int8_t x355 = -1;
	uint16_t x356 = 774U;
	volatile int32_t t88 = 2;

    t88 = (x353!=((x354<=x355)+x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = 2;
	int8_t x358 = INT8_MAX;
	static uint32_t x359 = 26582U;
	volatile int64_t x360 = -1LL;
	int32_t t89 = 32;

    t89 = (x357!=((x358<=x359)+x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = UINT16_MAX;
	int32_t x363 = INT32_MIN;
	int16_t x364 = -1;
	static int32_t t90 = -5621353;

    t90 = (x361!=((x362<=x363)+x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	static int64_t x366 = INT64_MIN;
	volatile int32_t t91 = -10238137;

    t91 = (x365!=((x366<=x367)+x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = -47;
	uint64_t x370 = 3LLU;
	static int64_t x371 = -5517551LL;
	int8_t x372 = 14;
	int32_t t92 = 100;

    t92 = (x369!=((x370<=x371)+x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -9;
	static int8_t x375 = 1;
	volatile int64_t x376 = 9LL;
	int32_t t93 = -254850;

    t93 = (x373!=((x374<=x375)+x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x377 = INT16_MAX;
	uint32_t x378 = 24718U;
	int32_t x379 = INT32_MIN;

    t94 = (x377!=((x378<=x379)+x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x381 = 19374U;
	uint64_t x383 = UINT64_MAX;
	volatile int32_t t95 = 22099;

    t95 = (x381!=((x382<=x383)+x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -24;
	uint8_t x386 = 5U;
	int64_t x387 = -1LL;
	volatile int8_t x388 = INT8_MIN;
	int32_t t96 = -36798401;

    t96 = (x385!=((x386<=x387)+x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = -1;
	int32_t x390 = INT32_MIN;
	volatile uint32_t x392 = 172U;

    t97 = (x389!=((x390<=x391)+x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 30949U;
	int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MAX;

    t98 = (x393!=((x394<=x395)+x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x397 = 9LLU;
	static uint16_t x398 = 9016U;
	uint8_t x399 = 0U;
	int8_t x400 = INT8_MIN;
	int32_t t99 = -2007938;

    t99 = (x397!=((x398<=x399)+x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -13;
	int16_t x402 = -7777;
	volatile int8_t x403 = -1;
	static volatile int32_t t100 = 461474393;

    t100 = (x401!=((x402<=x403)+x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x406 = INT8_MIN;
	uint16_t x407 = 209U;
	int16_t x408 = INT16_MAX;

    t101 = (x405!=((x406<=x407)+x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -1LL;
	uint64_t x410 = UINT64_MAX;
	int64_t x411 = INT64_MIN;
	int64_t x412 = 670776525848520LL;

    t102 = (x409!=((x410<=x411)+x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = INT8_MIN;
	volatile int32_t x414 = INT32_MIN;
	int64_t x415 = -1LL;

    t103 = (x413!=((x414<=x415)+x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	int32_t x418 = 6184319;
	uint64_t x419 = UINT64_MAX;
	uint16_t x420 = 0U;
	int32_t t104 = 4;

    t104 = (x417!=((x418<=x419)+x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x423 = INT64_MIN;
	int32_t x424 = INT32_MIN;
	int32_t t105 = -40;

    t105 = (x421!=((x422<=x423)+x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -1;
	uint8_t x427 = 6U;
	uint8_t x428 = 87U;
	int32_t t106 = 4;

    t106 = (x425!=((x426<=x427)+x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = -1;
	int64_t x430 = -1LL;
	int32_t x431 = 186172;
	uint32_t x432 = 17479546U;
	volatile int32_t t107 = -213;

    t107 = (x429!=((x430<=x431)+x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	static uint8_t x434 = UINT8_MAX;
	volatile uint64_t x435 = UINT64_MAX;
	static uint64_t x436 = UINT64_MAX;
	static int32_t t108 = -2;

    t108 = (x433!=((x434<=x435)+x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = -1;
	volatile int8_t x438 = INT8_MIN;
	int16_t x439 = INT16_MAX;
	static volatile int8_t x440 = INT8_MIN;
	volatile int32_t t109 = -66332;

    t109 = (x437!=((x438<=x439)+x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x442 = 128622098LLU;
	static int64_t x443 = -38209605LL;
	int32_t x444 = INT32_MIN;
	static int32_t t110 = -1;

    t110 = (x441!=((x442<=x443)+x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint16_t x445 = UINT16_MAX;
	volatile int8_t x447 = INT8_MIN;
	uint8_t x448 = 2U;
	int32_t t111 = -5;

    t111 = (x445!=((x446<=x447)+x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x453 = 2348;
	int64_t x454 = -16112119LL;
	int32_t t112 = 0;

    t112 = (x453!=((x454<=x455)+x456));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x457 = INT16_MIN;
	static int8_t x458 = 31;
	uint64_t x459 = UINT64_MAX;
	int32_t x460 = INT32_MIN;

    t113 = (x457!=((x458<=x459)+x460));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x463 = INT32_MIN;
	volatile int16_t x464 = INT16_MIN;
	volatile int32_t t114 = 0;

    t114 = (x461!=((x462<=x463)+x464));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x466 = UINT8_MAX;
	static int64_t x467 = INT64_MAX;
	int32_t t115 = 1868;

    t115 = (x465!=((x466<=x467)+x468));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x469 = INT8_MIN;
	int64_t x470 = -1LL;
	int8_t x471 = INT8_MIN;
	int32_t x472 = -1;
	volatile int32_t t116 = 273773499;

    t116 = (x469!=((x470<=x471)+x472));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x475 = INT8_MIN;
	static uint8_t x476 = 22U;
	static volatile int32_t t117 = -111;

    t117 = (x473!=((x474<=x475)+x476));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x477 = -1LL;
	static int16_t x480 = -1;
	volatile int32_t t118 = -2756;

    t118 = (x477!=((x478<=x479)+x480));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x482 = 10U;
	int8_t x484 = -1;

    t119 = (x481!=((x482<=x483)+x484));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x485 = -1734280748367LL;
	int64_t x486 = INT64_MIN;
	volatile uint64_t x487 = 3979080LLU;
	int32_t x488 = INT32_MIN;
	int32_t t120 = 11776789;

    t120 = (x485!=((x486<=x487)+x488));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x489 = 19U;
	volatile int16_t x490 = INT16_MAX;
	int16_t x491 = -1;
	int64_t x492 = INT64_MAX;

    t121 = (x489!=((x490<=x491)+x492));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x493 = 7U;
	int32_t x494 = -726;
	uint8_t x495 = 3U;
	static uint16_t x496 = UINT16_MAX;

    t122 = (x493!=((x494<=x495)+x496));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x498 = -6878;
	static int32_t x499 = INT32_MAX;
	int8_t x500 = INT8_MIN;
	int32_t t123 = -312;

    t123 = (x497!=((x498<=x499)+x500));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x501 = -1;
	uint64_t x503 = 611035LLU;
	int32_t x504 = INT32_MIN;
	static int32_t t124 = 95557;

    t124 = (x501!=((x502<=x503)+x504));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x505 = INT8_MAX;
	int32_t x506 = INT32_MIN;
	uint32_t x508 = 163409U;
	volatile int32_t t125 = -9;

    t125 = (x505!=((x506<=x507)+x508));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x509 = 212789893232123823LLU;
	uint16_t x511 = UINT16_MAX;
	volatile uint16_t x512 = UINT16_MAX;
	int32_t t126 = 148387;

    t126 = (x509!=((x510<=x511)+x512));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x513 = INT8_MAX;
	uint32_t x514 = UINT32_MAX;
	uint16_t x515 = UINT16_MAX;
	uint8_t x516 = 2U;
	static int32_t t127 = 253683;

    t127 = (x513!=((x514<=x515)+x516));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x517 = INT32_MIN;
	int8_t x519 = INT8_MIN;
	uint8_t x520 = 2U;
	volatile int32_t t128 = 27;

    t128 = (x517!=((x518<=x519)+x520));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x521 = UINT64_MAX;
	uint64_t x522 = UINT64_MAX;
	volatile int8_t x523 = -1;
	uint8_t x524 = 1U;
	volatile int32_t t129 = 203855;

    t129 = (x521!=((x522<=x523)+x524));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x526 = INT16_MIN;
	int32_t x527 = -14229;
	uint8_t x528 = 48U;
	int32_t t130 = 16;

    t130 = (x525!=((x526<=x527)+x528));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x529 = 216057262881884280LLU;
	int64_t x530 = INT64_MAX;
	int16_t x531 = 55;
	int32_t x532 = 244286;
	int32_t t131 = 32864;

    t131 = (x529!=((x530<=x531)+x532));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x533 = 816;
	static volatile int64_t x534 = INT64_MIN;
	uint8_t x536 = 5U;

    t132 = (x533!=((x534<=x535)+x536));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x537 = INT16_MIN;
	uint64_t x540 = 18417212056038LLU;
	int32_t t133 = -9;

    t133 = (x537!=((x538<=x539)+x540));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x541 = INT16_MIN;
	static int8_t x543 = 6;
	volatile int32_t t134 = -6;

    t134 = (x541!=((x542<=x543)+x544));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x545 = 1226U;
	static uint16_t x546 = UINT16_MAX;
	uint8_t x547 = 1U;
	static volatile int32_t t135 = 0;

    t135 = (x545!=((x546<=x547)+x548));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x549 = -19128218581LL;
	static int32_t x550 = -1;
	int16_t x551 = -1;
	int32_t x552 = -1;
	int32_t t136 = 6727;

    t136 = (x549!=((x550<=x551)+x552));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x553 = INT16_MAX;
	int16_t x555 = -1;
	volatile uint16_t x556 = 3038U;
	volatile int32_t t137 = -11;

    t137 = (x553!=((x554<=x555)+x556));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x557 = UINT16_MAX;
	static int16_t x558 = -8;
	int64_t x559 = INT64_MIN;
	volatile int8_t x560 = INT8_MIN;
	static int32_t t138 = 254733657;

    t138 = (x557!=((x558<=x559)+x560));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x561 = UINT16_MAX;
	static int8_t x563 = INT8_MAX;
	uint8_t x564 = UINT8_MAX;
	int32_t t139 = 34478;

    t139 = (x561!=((x562<=x563)+x564));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x565 = INT32_MAX;
	int32_t x566 = INT32_MIN;
	int16_t x568 = -1249;
	volatile int32_t t140 = -17623;

    t140 = (x565!=((x566<=x567)+x568));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x569 = INT16_MAX;
	int8_t x570 = 9;
	static int32_t x571 = -1;
	static int64_t x572 = INT64_MIN;

    t141 = (x569!=((x570<=x571)+x572));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x573 = -1;
	uint16_t x574 = UINT16_MAX;
	static int8_t x575 = -1;
	uint32_t x576 = UINT32_MAX;
	static volatile int32_t t142 = 5;

    t142 = (x573!=((x574<=x575)+x576));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x577 = UINT8_MAX;
	uint8_t x578 = 0U;
	int16_t x579 = INT16_MIN;

    t143 = (x577!=((x578<=x579)+x580));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x581 = -3;
	int64_t x582 = INT64_MAX;
	static uint8_t x583 = 25U;
	uint32_t x584 = UINT32_MAX;
	volatile int32_t t144 = -1038008302;

    t144 = (x581!=((x582<=x583)+x584));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x585 = INT32_MIN;
	uint8_t x586 = 111U;
	int32_t x587 = -702859532;
	static int32_t x588 = 520653;
	int32_t t145 = -34304;

    t145 = (x585!=((x586<=x587)+x588));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x591 = UINT32_MAX;

    t146 = (x589!=((x590<=x591)+x592));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x593 = INT16_MAX;
	static volatile int64_t x595 = INT64_MAX;
	static volatile uint64_t x596 = 0LLU;
	volatile int32_t t147 = -59301;

    t147 = (x593!=((x594<=x595)+x596));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x598 = 9164U;
	uint64_t x599 = 3061LLU;
	int32_t t148 = 161;

    t148 = (x597!=((x598<=x599)+x600));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x601 = -1;
	int64_t x602 = INT64_MIN;
	uint8_t x603 = 52U;
	volatile int64_t x604 = -6964001599230376LL;
	volatile int32_t t149 = -1283901;

    t149 = (x601!=((x602<=x603)+x604));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x608 = 1941368U;
	int32_t t150 = -9796868;

    t150 = (x605!=((x606<=x607)+x608));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x609 = 849;
	volatile uint64_t x611 = 164989714LLU;
	int32_t t151 = -496727;

    t151 = (x609!=((x610<=x611)+x612));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x613 = -1;
	int64_t x614 = INT64_MAX;
	int32_t x616 = INT32_MIN;

    t152 = (x613!=((x614<=x615)+x616));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x617 = 8U;
	uint8_t x618 = 30U;
	uint16_t x619 = 425U;
	static int64_t x620 = -377382850326882879LL;
	int32_t t153 = 1;

    t153 = (x617!=((x618<=x619)+x620));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x623 = 3833LLU;
	volatile int64_t x624 = -3308LL;
	int32_t t154 = 18;

    t154 = (x621!=((x622<=x623)+x624));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x629 = INT16_MIN;
	int16_t x630 = INT16_MIN;
	uint8_t x631 = 10U;

    t155 = (x629!=((x630<=x631)+x632));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x633 = -1;
	volatile int8_t x634 = -5;
	volatile int64_t x635 = INT64_MAX;
	static int32_t x636 = 844364057;
	static int32_t t156 = 1;

    t156 = (x633!=((x634<=x635)+x636));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x637 = 169;
	volatile int32_t x638 = INT32_MAX;
	uint32_t x639 = UINT32_MAX;
	int8_t x640 = 1;

    t157 = (x637!=((x638<=x639)+x640));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x641 = INT64_MIN;
	int16_t x642 = INT16_MIN;
	int16_t x644 = INT16_MIN;
	int32_t t158 = -68352550;

    t158 = (x641!=((x642<=x643)+x644));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x645 = INT16_MIN;
	volatile int8_t x647 = INT8_MIN;
	static volatile int32_t t159 = -1269;

    t159 = (x645!=((x646<=x647)+x648));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x649 = 102U;
	static int64_t x652 = -1LL;
	int32_t t160 = -8119;

    t160 = (x649!=((x650<=x651)+x652));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x655 = INT16_MAX;
	int8_t x656 = -1;
	volatile int32_t t161 = -24359;

    t161 = (x653!=((x654<=x655)+x656));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x657 = 2;
	static uint8_t x658 = UINT8_MAX;
	int64_t x659 = -1LL;
	static volatile int32_t t162 = 4;

    t162 = (x657!=((x658<=x659)+x660));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x661 = -6LL;
	uint8_t x663 = 3U;
	uint32_t x664 = 291572955U;

    t163 = (x661!=((x662<=x663)+x664));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x665 = 19;
	uint64_t x666 = UINT64_MAX;
	int64_t x667 = INT64_MAX;
	volatile int16_t x668 = -1;
	int32_t t164 = 16923;

    t164 = (x665!=((x666<=x667)+x668));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x675 = INT64_MIN;
	int64_t x676 = INT64_MAX;
	volatile int32_t t165 = 1933;

    t165 = (x673!=((x674<=x675)+x676));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x678 = INT8_MAX;
	static int64_t x680 = INT64_MIN;

    t166 = (x677!=((x678<=x679)+x680));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x682 = INT16_MIN;
	int16_t x683 = INT16_MAX;
	int8_t x684 = 30;
	static volatile int32_t t167 = -119;

    t167 = (x681!=((x682<=x683)+x684));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x685 = -234;
	uint32_t x686 = 354U;
	int16_t x687 = INT16_MAX;
	int64_t x688 = INT64_MIN;
	static int32_t t168 = 389720346;

    t168 = (x685!=((x686<=x687)+x688));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x689 = INT64_MAX;
	int16_t x690 = INT16_MAX;
	static volatile int16_t x691 = INT16_MIN;
	int8_t x692 = INT8_MIN;
	int32_t t169 = -4129107;

    t169 = (x689!=((x690<=x691)+x692));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x693 = INT64_MAX;
	int8_t x694 = INT8_MIN;
	uint8_t x695 = 9U;
	int32_t x696 = INT32_MIN;

    t170 = (x693!=((x694<=x695)+x696));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = -1LL;
	uint64_t x698 = 4109LLU;
	volatile int32_t t171 = 111;

    t171 = (x697!=((x698<=x699)+x700));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x706 = INT8_MIN;
	int32_t x708 = INT32_MIN;
	static int32_t t172 = 809874417;

    t172 = (x705!=((x706<=x707)+x708));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x709 = INT16_MIN;
	static uint64_t x710 = 1144256680LLU;
	int32_t x711 = INT32_MIN;

    t173 = (x709!=((x710<=x711)+x712));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x713 = 343245LL;
	int8_t x714 = 0;
	uint32_t x715 = 349373U;
	int8_t x716 = -1;
	static volatile int32_t t174 = -67;

    t174 = (x713!=((x714<=x715)+x716));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x717 = UINT16_MAX;
	int8_t x719 = INT8_MIN;
	volatile int8_t x720 = INT8_MAX;
	volatile int32_t t175 = 3;

    t175 = (x717!=((x718<=x719)+x720));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x722 = 35;
	volatile uint32_t x723 = 185U;
	static int32_t x724 = -66;
	volatile int32_t t176 = -2042;

    t176 = (x721!=((x722<=x723)+x724));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x726 = 1;
	static int16_t x727 = -1;
	int32_t t177 = -370;

    t177 = (x725!=((x726<=x727)+x728));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x729 = INT16_MAX;
	static int16_t x730 = -1;
	int64_t x731 = INT64_MIN;
	uint32_t x732 = 10468116U;
	int32_t t178 = 22;

    t178 = (x729!=((x730<=x731)+x732));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x734 = 2522370845LL;
	volatile uint64_t x735 = 3LLU;
	static uint64_t x736 = 103LLU;
	volatile int32_t t179 = 116169847;

    t179 = (x733!=((x734<=x735)+x736));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x737 = 95849U;
	uint64_t x738 = 1094LLU;
	int16_t x739 = -40;
	int64_t x740 = -87192799575831706LL;

    t180 = (x737!=((x738<=x739)+x740));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x741 = 3U;
	int16_t x742 = 0;
	int8_t x743 = -1;
	static int32_t x744 = -4477;
	volatile int32_t t181 = -108387063;

    t181 = (x741!=((x742<=x743)+x744));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x745 = -12028;
	static uint32_t x747 = 153235U;
	int8_t x748 = INT8_MIN;
	static int32_t t182 = -748717;

    t182 = (x745!=((x746<=x747)+x748));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x754 = 841214387U;
	static int16_t x756 = INT16_MIN;
	int32_t t183 = -1;

    t183 = (x753!=((x754<=x755)+x756));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x758 = INT32_MAX;
	int8_t x759 = -18;
	int32_t t184 = -1;

    t184 = (x757!=((x758<=x759)+x760));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x761 = INT64_MIN;
	int32_t x762 = -19370235;
	static int8_t x763 = -1;
	uint16_t x764 = 191U;
	int32_t t185 = -646;

    t185 = (x761!=((x762<=x763)+x764));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x765 = -420908;
	uint16_t x766 = 240U;
	int64_t x768 = 470105965LL;
	static int32_t t186 = -54104428;

    t186 = (x765!=((x766<=x767)+x768));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x769 = 150477318148261722LL;
	int64_t x771 = 64062315591776LL;
	static uint16_t x772 = 9518U;
	int32_t t187 = -6;

    t187 = (x769!=((x770<=x771)+x772));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x773 = INT64_MIN;
	volatile int16_t x774 = 7;
	volatile uint16_t x775 = 69U;
	uint16_t x776 = 137U;
	int32_t t188 = -25473897;

    t188 = (x773!=((x774<=x775)+x776));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x777 = UINT16_MAX;
	volatile int32_t x778 = INT32_MAX;
	static int8_t x779 = 2;
	static uint64_t x780 = 3958453507771281075LLU;
	volatile int32_t t189 = 1286729;

    t189 = (x777!=((x778<=x779)+x780));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x782 = UINT8_MAX;
	int32_t x783 = -5538;
	int8_t x784 = INT8_MAX;
	int32_t t190 = 7179583;

    t190 = (x781!=((x782<=x783)+x784));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x785 = 3;
	int8_t x786 = INT8_MIN;
	int8_t x787 = -1;
	volatile uint8_t x788 = UINT8_MAX;
	volatile int32_t t191 = -57;

    t191 = (x785!=((x786<=x787)+x788));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x789 = -1LL;
	int16_t x790 = -12665;
	int16_t x791 = -1;
	volatile uint32_t x792 = 158380U;

    t192 = (x789!=((x790<=x791)+x792));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x793 = 485U;
	int64_t x794 = INT64_MIN;
	int16_t x795 = -1;
	volatile int32_t x796 = -439416246;

    t193 = (x793!=((x794<=x795)+x796));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = -18;
	int8_t x798 = -1;
	int64_t x799 = INT64_MIN;
	static int64_t x800 = -20104682LL;
	int32_t t194 = 14406687;

    t194 = (x797!=((x798<=x799)+x800));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x801 = INT8_MAX;
	int64_t x802 = INT64_MAX;
	int64_t x803 = -236697615LL;
	volatile int16_t x804 = INT16_MIN;
	volatile int32_t t195 = -868292;

    t195 = (x801!=((x802<=x803)+x804));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x808 = INT32_MIN;
	static int32_t t196 = 80;

    t196 = (x805!=((x806<=x807)+x808));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x810 = 4U;
	int32_t x811 = INT32_MIN;
	int32_t t197 = 775;

    t197 = (x809!=((x810<=x811)+x812));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x813 = INT16_MIN;
	uint32_t x815 = UINT32_MAX;
	volatile int32_t t198 = -3919213;

    t198 = (x813!=((x814<=x815)+x816));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x821 = 1;
	int16_t x823 = INT16_MAX;
	volatile int8_t x824 = -31;
	int32_t t199 = 4863689;

    t199 = (x821!=((x822<=x823)+x824));

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

