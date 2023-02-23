
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

int8_t x2 = INT8_MIN;
int16_t x4 = 0;
uint64_t x14 = 1048669633669LLU;
static int16_t x15 = -966;
int64_t x24 = -1LL;
int32_t x25 = -1;
int8_t x38 = 1;
volatile uint32_t x40 = 198U;
uint64_t x43 = 51LLU;
volatile uint32_t x53 = UINT32_MAX;
static volatile int32_t t14 = 469113;
int32_t x64 = INT32_MAX;
volatile int64_t x68 = INT64_MIN;
int32_t x69 = INT32_MIN;
volatile uint8_t x70 = 1U;
int32_t x71 = 31060;
volatile uint64_t x75 = 28175267197148357LLU;
int16_t x76 = -2354;
static volatile int16_t x78 = -153;
uint64_t x80 = 3373607488556964480LLU;
uint32_t x85 = 38682U;
uint8_t x89 = UINT8_MAX;
volatile int16_t x90 = INT16_MAX;
int8_t x92 = INT8_MAX;
int16_t x98 = INT16_MIN;
int8_t x100 = -1;
int8_t x101 = -2;
static uint16_t x106 = 39U;
int16_t x109 = INT16_MAX;
static int16_t x110 = INT16_MIN;
volatile int16_t x112 = INT16_MAX;
static int32_t x113 = 1041522;
uint8_t x115 = 24U;
static int16_t x116 = -49;
volatile int32_t t26 = 343825;
volatile uint32_t x120 = 4162U;
volatile uint32_t x122 = 67410U;
int8_t x125 = 2;
int16_t x126 = INT16_MAX;
static int64_t t30 = INT64_MAX;
uint16_t x135 = 182U;
int64_t x141 = INT64_MIN;
volatile uint8_t x146 = 2U;
static int64_t x147 = INT64_MIN;
uint8_t x151 = 29U;
int8_t x152 = -1;
volatile uint64_t x155 = 348478598LLU;
volatile int32_t x157 = INT32_MIN;
uint16_t x160 = 1U;
volatile uint16_t x166 = UINT16_MAX;
int32_t t41 = -10272;
uint16_t x187 = 3U;
volatile int32_t t44 = -3265972;
int32_t x194 = INT32_MIN;
volatile int32_t t46 = 1;
int32_t x203 = -1;
volatile int64_t t48 = INT64_MAX;
volatile uint64_t x206 = UINT64_MAX;
static uint32_t x212 = 25453U;
static int64_t x213 = -106LL;
volatile int16_t x215 = -930;
int32_t x218 = INT32_MIN;
uint64_t x221 = 2084505233812LLU;
static uint32_t x228 = UINT32_MAX;
int64_t x234 = INT64_MIN;
int32_t t60 = 290;
int8_t x253 = INT8_MAX;
uint16_t x256 = UINT16_MAX;
volatile int32_t t61 = -127816030;
int64_t x259 = INT64_MIN;
volatile int64_t x260 = INT64_MAX;
int32_t t62 = -62;
uint32_t x261 = UINT32_MAX;
volatile uint64_t x262 = 433425LLU;
static volatile uint64_t x273 = 577370213621172LLU;
static int32_t x274 = INT32_MAX;
int64_t x287 = 2081LL;
int32_t t69 = 0;
volatile int8_t x298 = INT8_MIN;
volatile int16_t x308 = INT16_MIN;
int32_t t75 = 45;
uint16_t x332 = 4U;
uint32_t x338 = 1U;
uint16_t x339 = 1U;
volatile uint8_t x342 = UINT8_MAX;
static int64_t x357 = -141040898293925LL;
static uint64_t x359 = UINT64_MAX;
static int16_t x360 = -1;
int64_t t86 = 46235487910294LL;
static int16_t x361 = 1695;
uint64_t x364 = 2165202009949857LLU;
volatile uint16_t x365 = 8U;
uint64_t x371 = 420LLU;
volatile uint32_t x372 = UINT32_MAX;
static int64_t x383 = -84417648268745461LL;
static int64_t x397 = -15561272814LL;
volatile int16_t x400 = -1;
int32_t t97 = -122928;
int16_t x407 = INT16_MIN;
int8_t x412 = INT8_MIN;
volatile uint64_t x414 = 13841LLU;
int32_t x416 = 182749339;
int64_t x418 = INT64_MIN;
static int32_t t105 = -6051982;
int8_t x444 = -1;
volatile int8_t x446 = INT8_MIN;
int64_t x449 = INT64_MAX;
int8_t x450 = INT8_MIN;
int16_t x453 = 374;
uint64_t x457 = 12864751133698010LLU;
uint32_t x460 = UINT32_MAX;
volatile int16_t x461 = -1;
volatile int32_t t111 = 689109;
int64_t x468 = -1LL;
int32_t t113 = 0;
static int32_t x480 = INT32_MIN;
static volatile int32_t t115 = 702;
uint32_t x481 = 423420U;
uint32_t x482 = UINT32_MAX;
int16_t x483 = -1;
volatile int32_t t117 = -469578182;
static int16_t x492 = 0;
int32_t t119 = 3;
volatile int16_t x500 = -1;
int32_t x513 = -1;
uint64_t x516 = 194427187LLU;
volatile int32_t x519 = INT32_MIN;
int64_t x525 = INT64_MIN;
int8_t x540 = INT8_MIN;
uint16_t x543 = 2U;
static int8_t x548 = INT8_MIN;
volatile uint32_t x552 = 499507U;
uint8_t x553 = 1U;
int32_t t134 = -476;
uint16_t x571 = 24115U;
int64_t t137 = INT64_MIN;
int64_t x575 = INT64_MIN;
int32_t x577 = -509334048;
volatile uint32_t x578 = 32U;
int64_t x579 = 1527252499LL;
volatile int16_t x580 = INT16_MAX;
uint32_t x581 = 609224889U;
uint32_t t140 = 15479U;
volatile int32_t t141 = 5892946;
int16_t x591 = INT16_MIN;
uint64_t x597 = UINT64_MAX;
int16_t x600 = INT16_MIN;
int32_t t144 = -9;
int16_t x609 = INT16_MAX;
static uint16_t x612 = 15U;
volatile int64_t x620 = INT64_MIN;
uint32_t x621 = 2471U;
int16_t x623 = -1;
uint32_t t149 = 87290U;
int8_t x626 = 1;
volatile int16_t x630 = -441;
static int16_t x632 = -1;
volatile uint8_t x652 = 96U;
volatile int32_t t157 = -5638385;
volatile int8_t x657 = -13;
static uint16_t x677 = 660U;
int32_t x680 = INT32_MIN;
volatile int32_t t162 = 2;
int8_t x682 = -1;
uint32_t x685 = UINT32_MAX;
int64_t x687 = INT64_MIN;
uint16_t x689 = 1U;
uint16_t x693 = 24U;
int16_t x694 = 14;
uint32_t x696 = 371315522U;
int64_t x697 = INT64_MAX;
uint32_t x704 = UINT32_MAX;
int32_t t169 = 102;
uint8_t x710 = UINT8_MAX;
int32_t x718 = INT32_MIN;
static uint8_t x723 = UINT8_MAX;
int32_t x725 = 3834120;
volatile int32_t t177 = 465788;
int32_t x741 = -1;
volatile int64_t x743 = -6920LL;
int32_t x748 = -845142;
int8_t x750 = -18;
int16_t x758 = -11;
volatile int64_t t182 = INT64_MIN;
int8_t x761 = INT8_MAX;
uint8_t x763 = 1U;
int8_t x765 = -1;
static volatile uint32_t x777 = 2U;
uint16_t x778 = 11U;
int16_t x782 = INT16_MIN;
static uint16_t x784 = UINT16_MAX;
static int32_t t188 = 11;
int16_t x785 = -1;
static int32_t x786 = 1445885;
volatile int32_t x789 = INT32_MIN;
uint64_t x790 = 3LLU;
int16_t x791 = -1;
uint16_t x797 = UINT16_MAX;
int16_t x798 = 13869;
uint64_t x807 = UINT64_MAX;
static int8_t x830 = 0;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int64_t x3 = INT64_MIN;
	uint64_t t0 = UINT64_MAX;

    t0 = (x1*((x2%x3)!=x4));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	int8_t x6 = 56;
	static int8_t x7 = -1;
	int64_t x8 = -1LL;
	volatile int32_t t1 = INT32_MIN;

    t1 = (x5*((x6%x7)!=x8));

    if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 6U;
	static int16_t x10 = INT16_MIN;
	int32_t x11 = -123145;
	int16_t x12 = INT16_MIN;
	volatile uint32_t t2 = 103846U;

    t2 = (x9*((x10%x11)!=x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = 3;
	int32_t x16 = -1;
	static int32_t t3 = 1;

    t3 = (x13*((x14%x15)!=x16));

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int8_t x18 = -1;
	int8_t x19 = -1;
	volatile int32_t x20 = -1;
	volatile int32_t t4 = -38887657;

    t4 = (x17*((x18%x19)!=x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = UINT32_MAX;
	static int8_t x22 = INT8_MIN;
	int64_t x23 = 42LL;
	uint32_t t5 = UINT32_MAX;

    t5 = (x21*((x22%x23)!=x24));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x26 = INT16_MAX;
	int64_t x27 = -361214170698768672LL;
	static volatile int32_t x28 = 221897;
	int32_t t6 = -580383;

    t6 = (x25*((x26%x27)!=x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = UINT16_MAX;
	volatile int8_t x30 = INT8_MIN;
	int32_t x31 = 6;
	int32_t x32 = -1;
	int32_t t7 = 917488306;

    t7 = (x29*((x30%x31)!=x32));

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -105;
	int32_t x34 = -763554754;
	uint32_t x35 = 1132224U;
	int16_t x36 = -35;
	volatile int32_t t8 = -856814;

    t8 = (x33*((x34%x35)!=x36));

    if (t8 != -105) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -9120582487152LL;
	int64_t x39 = INT64_MIN;
	volatile int64_t t9 = -18419445542432LL;

    t9 = (x37*((x38%x39)!=x40));

    if (t9 != -9120582487152LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 0U;
	volatile int16_t x42 = -207;
	static uint64_t x44 = 2LLU;
	int32_t t10 = -3;

    t10 = (x41*((x42%x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 556U;
	int8_t x46 = 34;
	static int64_t x47 = INT64_MIN;
	static volatile int8_t x48 = INT8_MAX;
	int32_t t11 = 496606;

    t11 = (x45*((x46%x47)!=x48));

    if (t11 != 556) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MIN;
	int64_t x51 = 752507587846201034LL;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t12 = INT32_MIN;

    t12 = (x49*((x50%x51)!=x52));

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = 24;
	int8_t x55 = INT8_MIN;
	static int64_t x56 = -1LL;
	uint32_t t13 = UINT32_MAX;

    t13 = (x53*((x54%x55)!=x56));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	int32_t x58 = -1;
	int32_t x59 = INT32_MIN;
	volatile int32_t x60 = 223135;

    t14 = (x57*((x58%x59)!=x60));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = INT16_MAX;
	uint64_t x62 = 1297359378758LLU;
	int32_t x63 = -4572;
	volatile int32_t t15 = -13769233;

    t15 = (x61*((x62%x63)!=x64));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -1055LL;
	static int32_t x66 = INT32_MIN;
	volatile int8_t x67 = INT8_MAX;
	static volatile int64_t t16 = 11LL;

    t16 = (x65*((x66%x67)!=x68));

    if (t16 != -1055LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = INT32_MIN;

    t17 = (x69*((x70%x71)!=x72));

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = 31641088U;
	uint16_t x74 = 0U;
	volatile uint32_t t18 = 49U;

    t18 = (x73*((x74%x75)!=x76));

    if (t18 != 31641088U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	int32_t x79 = 3563726;
	static int32_t t19 = -813922;

    t19 = (x77*((x78%x79)!=x80));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x86 = UINT8_MAX;
	static int8_t x87 = INT8_MAX;
	int64_t x88 = -260085LL;
	uint32_t t20 = 1U;

    t20 = (x85*((x86%x87)!=x88));

    if (t20 != 38682U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x91 = 7742909U;
	int32_t t21 = -561;

    t21 = (x89*((x90%x91)!=x92));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x97 = UINT16_MAX;
	volatile int16_t x99 = INT16_MAX;
	volatile int32_t t22 = -98;

    t22 = (x97*((x98%x99)!=x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x102 = 6973117993979LL;
	uint16_t x103 = 10608U;
	uint64_t x104 = 4498387LLU;
	volatile int32_t t23 = -71692;

    t23 = (x101*((x102%x103)!=x104));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = INT16_MIN;
	volatile int64_t x107 = INT64_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t24 = -6;

    t24 = (x105*((x106%x107)!=x108));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x111 = 1U;
	static int32_t t25 = 184700644;

    t25 = (x109*((x110%x111)!=x112));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x114 = 1LLU;

    t26 = (x113*((x114%x115)!=x116));

    if (t26 != 1041522) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = INT64_MIN;
	static int64_t x118 = INT64_MIN;
	static int32_t x119 = 47012149;
	int64_t t27 = INT64_MIN;

    t27 = (x117*((x118%x119)!=x120));

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MAX;
	int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t28 = INT32_MAX;

    t28 = (x121*((x122%x123)!=x124));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MAX;
	volatile int32_t t29 = -213;

    t29 = (x125*((x126%x127)!=x128));

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MAX;
	volatile int32_t x130 = -1;
	uint32_t x131 = 3U;
	int8_t x132 = INT8_MIN;

    t30 = (x129*((x130%x131)!=x132));

    if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = -1LL;
	int64_t x134 = INT64_MAX;
	int32_t x136 = INT32_MIN;
	volatile int64_t t31 = 146398884918LL;

    t31 = (x133*((x134%x135)!=x136));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = 2U;
	int16_t x138 = INT16_MAX;
	volatile int64_t x139 = -1LL;
	int8_t x140 = INT8_MAX;
	int32_t t32 = 2572606;

    t32 = (x137*((x138%x139)!=x140));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x142 = INT8_MIN;
	int64_t x143 = -123638112LL;
	int8_t x144 = INT8_MIN;
	int64_t t33 = -1558341098649946727LL;

    t33 = (x141*((x142%x143)!=x144));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x145 = INT16_MIN;
	int8_t x148 = INT8_MIN;
	volatile int32_t t34 = 220;

    t34 = (x145*((x146%x147)!=x148));

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x149 = UINT16_MAX;
	static uint16_t x150 = 6U;
	int32_t t35 = 57750;

    t35 = (x149*((x150%x151)!=x152));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x153 = 21U;
	uint64_t x154 = 6454909809472234871LLU;
	volatile int8_t x156 = INT8_MIN;
	int32_t t36 = 6;

    t36 = (x153*((x154%x155)!=x156));

    if (t36 != 21) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x158 = 54U;
	int16_t x159 = INT16_MAX;
	int32_t t37 = INT32_MIN;

    t37 = (x157*((x158%x159)!=x160));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = 2;
	int64_t x162 = 2829078LL;
	uint16_t x163 = 11729U;
	volatile uint32_t x164 = UINT32_MAX;
	int32_t t38 = -65;

    t38 = (x161*((x162%x163)!=x164));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x165 = UINT8_MAX;
	int32_t x167 = INT32_MAX;
	static int16_t x168 = INT16_MIN;
	static int32_t t39 = 109738188;

    t39 = (x165*((x166%x167)!=x168));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x169 = INT16_MIN;
	int8_t x170 = -1;
	int8_t x171 = INT8_MAX;
	int32_t x172 = -14;
	volatile int32_t t40 = 114070;

    t40 = (x169*((x170%x171)!=x172));

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x173 = 25U;
	int16_t x174 = INT16_MAX;
	int16_t x175 = -1472;
	uint32_t x176 = 4U;

    t41 = (x173*((x174%x175)!=x176));

    if (t41 != 25) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = INT16_MIN;
	uint8_t x178 = 7U;
	int32_t x179 = INT32_MIN;
	uint8_t x180 = 1U;
	int32_t t42 = 3664855;

    t42 = (x177*((x178%x179)!=x180));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x181 = INT16_MIN;
	int16_t x182 = -1;
	int32_t x183 = 2;
	uint64_t x184 = 596239617984691LLU;
	int32_t t43 = 77;

    t43 = (x181*((x182%x183)!=x184));

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MAX;
	volatile int8_t x186 = 40;
	uint16_t x188 = UINT16_MAX;

    t44 = (x185*((x186%x187)!=x188));

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = -1;
	int64_t x190 = INT64_MAX;
	int32_t x191 = 304291;
	static int32_t x192 = INT32_MIN;
	int32_t t45 = 1010631965;

    t45 = (x189*((x190%x191)!=x192));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x193 = UINT8_MAX;
	volatile int16_t x195 = 223;
	int8_t x196 = -1;

    t46 = (x193*((x194%x195)!=x196));

    if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = UINT8_MAX;
	static uint64_t x198 = UINT64_MAX;
	uint32_t x199 = UINT32_MAX;
	uint32_t x200 = 1679U;
	int32_t t47 = 25911899;

    t47 = (x197*((x198%x199)!=x200));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = INT64_MAX;
	static int16_t x202 = INT16_MIN;
	int8_t x204 = INT8_MAX;

    t48 = (x201*((x202%x203)!=x204));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MAX;
	static volatile int64_t x207 = -1LL;
	int16_t x208 = INT16_MIN;
	volatile int32_t t49 = 6883787;

    t49 = (x205*((x206%x207)!=x208));

    if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = INT32_MIN;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = -1;
	volatile int32_t t50 = INT32_MIN;

    t50 = (x209*((x210%x211)!=x212));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x214 = 0;
	uint16_t x216 = UINT16_MAX;
	int64_t t51 = -64809538376481096LL;

    t51 = (x213*((x214%x215)!=x216));

    if (t51 != -106LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile int8_t x219 = INT8_MAX;
	uint8_t x220 = 10U;
	uint64_t t52 = UINT64_MAX;

    t52 = (x217*((x218%x219)!=x220));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x222 = 10U;
	uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 9956U;
	uint64_t t53 = 73723764104864LLU;

    t53 = (x221*((x222%x223)!=x224));

    if (t53 != 2084505233812LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x225 = -1;
	static uint64_t x226 = UINT64_MAX;
	int32_t x227 = -1;
	int32_t t54 = 180108923;

    t54 = (x225*((x226%x227)!=x228));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x229 = 18U;
	int8_t x230 = INT8_MIN;
	uint32_t x231 = UINT32_MAX;
	int8_t x232 = 9;
	static uint32_t t55 = 5U;

    t55 = (x229*((x230%x231)!=x232));

    if (t55 != 18U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x233 = -1;
	uint16_t x235 = 4164U;
	int16_t x236 = -1;
	static volatile int32_t t56 = 138;

    t56 = (x233*((x234%x235)!=x236));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = 1;
	int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MAX;
	static volatile int64_t x240 = 3185954959LL;
	int32_t t57 = 49576;

    t57 = (x237*((x238%x239)!=x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x241 = -1LL;
	static int16_t x242 = -1;
	uint8_t x243 = 22U;
	uint64_t x244 = 151555922LLU;
	static volatile int64_t t58 = -64503085LL;

    t58 = (x241*((x242%x243)!=x244));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x245 = 11639678049LLU;
	volatile int64_t x246 = 129799276000978295LL;
	volatile int64_t x247 = INT64_MIN;
	int64_t x248 = -2305580934092565LL;
	volatile uint64_t t59 = 8008450360861187269LLU;

    t59 = (x245*((x246%x247)!=x248));

    if (t59 != 11639678049LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = -1;
	int16_t x250 = -3117;
	int8_t x251 = INT8_MIN;
	int64_t x252 = -1LL;

    t60 = (x249*((x250%x251)!=x252));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x254 = -662;
	volatile int8_t x255 = 14;

    t61 = (x253*((x254%x255)!=x256));

    if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x257 = -1;
	int8_t x258 = 1;

    t62 = (x257*((x258%x259)!=x260));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x263 = 2;
	volatile uint64_t x264 = 59375996377LLU;
	static uint32_t t63 = UINT32_MAX;

    t63 = (x261*((x262%x263)!=x264));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint16_t x265 = UINT16_MAX;
	uint16_t x266 = UINT16_MAX;
	int64_t x267 = INT64_MIN;
	int32_t x268 = -4124575;
	volatile int32_t t64 = 164418418;

    t64 = (x265*((x266%x267)!=x268));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x269 = INT8_MIN;
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = -1;
	int32_t x272 = INT32_MAX;
	int32_t t65 = -699;

    t65 = (x269*((x270%x271)!=x272));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MIN;
	uint64_t t66 = 34175LLU;

    t66 = (x273*((x274%x275)!=x276));

    if (t66 != 577370213621172LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x277 = UINT64_MAX;
	static uint16_t x278 = 666U;
	uint64_t x279 = 1701020LLU;
	uint8_t x280 = 10U;
	uint64_t t67 = UINT64_MAX;

    t67 = (x277*((x278%x279)!=x280));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x281 = INT32_MIN;
	uint32_t x282 = UINT32_MAX;
	volatile int64_t x283 = INT64_MAX;
	int32_t x284 = INT32_MIN;
	volatile int32_t t68 = INT32_MIN;

    t68 = (x281*((x282%x283)!=x284));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x285 = INT16_MIN;
	uint32_t x286 = 37U;
	int16_t x288 = INT16_MIN;

    t69 = (x285*((x286%x287)!=x288));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = -252026914LL;
	uint32_t x290 = 0U;
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MIN;
	volatile int64_t t70 = 1LL;

    t70 = (x289*((x290%x291)!=x292));

    if (t70 != -252026914LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = -1LL;
	int8_t x294 = -27;
	uint32_t x295 = 5561457U;
	uint16_t x296 = 19U;
	static volatile int64_t t71 = 19186769147LL;

    t71 = (x293*((x294%x295)!=x296));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 801U;
	int8_t x299 = INT8_MIN;
	static int32_t x300 = INT32_MAX;
	volatile uint32_t t72 = 1500696988U;

    t72 = (x297*((x298%x299)!=x300));

    if (t72 != 801U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x301 = -1LL;
	int8_t x302 = INT8_MIN;
	int8_t x303 = -13;
	int16_t x304 = INT16_MAX;
	static int64_t t73 = 461784316665306992LL;

    t73 = (x301*((x302%x303)!=x304));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = 1807;
	int16_t x306 = INT16_MAX;
	volatile int16_t x307 = INT16_MAX;
	volatile int32_t t74 = 226;

    t74 = (x305*((x306%x307)!=x308));

    if (t74 != 1807) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x309 = INT16_MAX;
	int16_t x310 = INT16_MAX;
	int64_t x311 = 7870LL;
	int8_t x312 = INT8_MIN;

    t75 = (x309*((x310%x311)!=x312));

    if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x313 = 4U;
	static int8_t x314 = INT8_MAX;
	int16_t x315 = INT16_MIN;
	int8_t x316 = -1;
	static volatile int32_t t76 = 0;

    t76 = (x313*((x314%x315)!=x316));

    if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x317 = 0U;
	volatile uint64_t x318 = 4360200834LLU;
	uint16_t x319 = 12U;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t77 = -4;

    t77 = (x317*((x318%x319)!=x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	volatile int16_t x323 = -1;
	static int64_t x324 = -45069633002LL;
	volatile int64_t t78 = INT64_MIN;

    t78 = (x321*((x322%x323)!=x324));

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x329 = 62U;
	volatile int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	static uint32_t t79 = 1795011U;

    t79 = (x329*((x330%x331)!=x332));

    if (t79 != 62U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x333 = -3;
	static int16_t x334 = -1;
	static uint16_t x335 = 653U;
	volatile int16_t x336 = 5;
	int32_t t80 = 10516;

    t80 = (x333*((x334%x335)!=x336));

    if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x337 = UINT64_MAX;
	int16_t x340 = -490;
	uint64_t t81 = UINT64_MAX;

    t81 = (x337*((x338%x339)!=x340));

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x341 = 74U;
	int16_t x343 = 1;
	int8_t x344 = -1;
	int32_t t82 = 9221;

    t82 = (x341*((x342%x343)!=x344));

    if (t82 != 74) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = -1;
	int64_t x346 = 13560248032LL;
	int8_t x347 = 5;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t83 = -63479499;

    t83 = (x345*((x346%x347)!=x348));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MAX;
	int8_t x352 = INT8_MIN;
	volatile uint32_t t84 = UINT32_MAX;

    t84 = (x349*((x350%x351)!=x352));

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x353 = -15;
	uint64_t x354 = 12052051505667LLU;
	int16_t x355 = 12741;
	static uint64_t x356 = UINT64_MAX;
	static volatile int32_t t85 = 1;

    t85 = (x353*((x354%x355)!=x356));

    if (t85 != -15) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x358 = UINT16_MAX;

    t86 = (x357*((x358%x359)!=x360));

    if (t86 != -141040898293925LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x362 = UINT16_MAX;
	int64_t x363 = INT64_MIN;
	static int32_t t87 = -441897193;

    t87 = (x361*((x362%x363)!=x364));

    if (t87 != 1695) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x366 = -1;
	int8_t x367 = -1;
	static volatile uint8_t x368 = 7U;
	int32_t t88 = -9216294;

    t88 = (x365*((x366%x367)!=x368));

    if (t88 != 8) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x369 = 33;
	volatile int32_t x370 = -2;
	int32_t t89 = 13934823;

    t89 = (x369*((x370%x371)!=x372));

    if (t89 != 33) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = -736;
	uint16_t x374 = 2U;
	int32_t x375 = 1;
	int64_t x376 = INT64_MAX;
	int32_t t90 = -17;

    t90 = (x373*((x374%x375)!=x376));

    if (t90 != -736) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MAX;
	static int8_t x379 = -13;
	int64_t x380 = INT64_MIN;
	int32_t t91 = -4;

    t91 = (x377*((x378%x379)!=x380));

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x381 = -97923LL;
	volatile uint8_t x382 = UINT8_MAX;
	volatile int16_t x384 = -1;
	int64_t t92 = 2546068868490658918LL;

    t92 = (x381*((x382%x383)!=x384));

    if (t92 != -97923LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = 4;
	uint32_t x386 = 95900U;
	uint16_t x387 = 5617U;
	uint32_t x388 = UINT32_MAX;
	int32_t t93 = -3634;

    t93 = (x385*((x386%x387)!=x388));

    if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x389 = -1;
	int16_t x390 = -1;
	int64_t x391 = INT64_MAX;
	int16_t x392 = -982;
	volatile int32_t t94 = 714935;

    t94 = (x389*((x390%x391)!=x392));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x393 = 28221359095LLU;
	int64_t x394 = INT64_MAX;
	int64_t x395 = INT64_MIN;
	uint8_t x396 = 14U;
	static volatile uint64_t t95 = 76453654020502LLU;

    t95 = (x393*((x394%x395)!=x396));

    if (t95 != 28221359095LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x398 = 0U;
	volatile int8_t x399 = -1;
	volatile int64_t t96 = 701LL;

    t96 = (x397*((x398%x399)!=x400));

    if (t96 != -15561272814LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x401 = -1;
	int32_t x402 = 8887;
	static volatile uint16_t x403 = 829U;
	int32_t x404 = -1;

    t97 = (x401*((x402%x403)!=x404));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x405 = -1LL;
	static volatile int32_t x406 = -1182260;
	static int8_t x408 = 1;
	static volatile int64_t t98 = -53LL;

    t98 = (x405*((x406%x407)!=x408));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x409 = UINT16_MAX;
	static uint8_t x410 = 102U;
	int8_t x411 = INT8_MIN;
	int32_t t99 = 164273944;

    t99 = (x409*((x410%x411)!=x412));

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x413 = INT8_MAX;
	static volatile int64_t x415 = -44962990LL;
	volatile int32_t t100 = -124423;

    t100 = (x413*((x414%x415)!=x416));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x417 = INT64_MIN;
	uint64_t x419 = 103166464041LLU;
	static int32_t x420 = INT32_MIN;
	volatile int64_t t101 = INT64_MIN;

    t101 = (x417*((x418%x419)!=x420));

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = INT8_MIN;
	int16_t x422 = -124;
	int16_t x423 = INT16_MAX;
	uint64_t x424 = 14620121294240LLU;
	static int32_t t102 = -3;

    t102 = (x421*((x422%x423)!=x424));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = -1;
	uint32_t x426 = 0U;
	int32_t x427 = -1;
	static int16_t x428 = -1;
	volatile int32_t t103 = 0;

    t103 = (x425*((x426%x427)!=x428));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x429 = 87133LL;
	static uint64_t x430 = 977LLU;
	static int32_t x431 = -1;
	int8_t x432 = -1;
	int64_t t104 = 125878LL;

    t104 = (x429*((x430%x431)!=x432));

    if (t104 != 87133LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x433 = 3U;
	static uint8_t x434 = 1U;
	int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MAX;

    t105 = (x433*((x434%x435)!=x436));

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x441 = 0;
	int8_t x442 = INT8_MAX;
	uint32_t x443 = UINT32_MAX;
	int32_t t106 = 6733;

    t106 = (x441*((x442%x443)!=x444));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x445 = -1LL;
	uint32_t x447 = 66732U;
	uint32_t x448 = 8U;
	int64_t t107 = 4413427550096LL;

    t107 = (x445*((x446%x447)!=x448));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x451 = 93U;
	uint8_t x452 = 3U;
	int64_t t108 = INT64_MAX;

    t108 = (x449*((x450%x451)!=x452));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x454 = 118403U;
	volatile int32_t x455 = -100875945;
	int8_t x456 = INT8_MIN;
	volatile int32_t t109 = 7277;

    t109 = (x453*((x454%x455)!=x456));

    if (t109 != 374) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x458 = 7767U;
	int16_t x459 = -14931;
	uint64_t t110 = 47712816089247207LLU;

    t110 = (x457*((x458%x459)!=x460));

    if (t110 != 12864751133698010LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x462 = -31;
	static int8_t x463 = -1;
	volatile int16_t x464 = -1;

    t111 = (x461*((x462%x463)!=x464));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x465 = 31U;
	static uint16_t x466 = 68U;
	int32_t x467 = INT32_MAX;
	int32_t t112 = 1071;

    t112 = (x465*((x466%x467)!=x468));

    if (t112 != 31) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x470 = -9625726;
	uint16_t x471 = UINT16_MAX;
	static int32_t x472 = -1;

    t113 = (x469*((x470%x471)!=x472));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x473 = 1348766110LLU;
	int64_t x474 = INT64_MAX;
	int32_t x475 = INT32_MIN;
	uint64_t x476 = 816LLU;
	uint64_t t114 = 115745263553392LLU;

    t114 = (x473*((x474%x475)!=x476));

    if (t114 != 1348766110LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x477 = 14U;
	int32_t x478 = -61636861;
	uint16_t x479 = UINT16_MAX;

    t115 = (x477*((x478%x479)!=x480));

    if (t115 != 14) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x484 = UINT64_MAX;
	uint32_t t116 = 133613561U;

    t116 = (x481*((x482%x483)!=x484));

    if (t116 != 423420U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x485 = INT16_MIN;
	int32_t x486 = -450031;
	static uint8_t x487 = 1U;
	uint8_t x488 = UINT8_MAX;

    t117 = (x485*((x486%x487)!=x488));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x489 = UINT32_MAX;
	uint64_t x490 = 331LLU;
	int16_t x491 = INT16_MIN;
	static uint32_t t118 = UINT32_MAX;

    t118 = (x489*((x490%x491)!=x492));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x494 = -1LL;
	uint8_t x495 = 6U;
	int32_t x496 = INT32_MIN;

    t119 = (x493*((x494%x495)!=x496));

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x497 = INT8_MIN;
	volatile int8_t x498 = INT8_MIN;
	static volatile int16_t x499 = -166;
	volatile int32_t t120 = 525;

    t120 = (x497*((x498%x499)!=x500));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x501 = INT16_MAX;
	int64_t x502 = INT64_MIN;
	static uint64_t x503 = 288744016767681086LLU;
	volatile uint32_t x504 = 41U;
	volatile int32_t t121 = 1;

    t121 = (x501*((x502%x503)!=x504));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x505 = INT64_MAX;
	uint32_t x506 = 705042U;
	static uint32_t x507 = 14U;
	uint64_t x508 = UINT64_MAX;
	volatile int64_t t122 = INT64_MAX;

    t122 = (x505*((x506%x507)!=x508));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x509 = 14;
	uint8_t x510 = 0U;
	int64_t x511 = INT64_MIN;
	int16_t x512 = INT16_MIN;
	volatile int32_t t123 = -37;

    t123 = (x509*((x510%x511)!=x512));

    if (t123 != 14) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x514 = 21431U;
	static int16_t x515 = -115;
	volatile int32_t t124 = 117951;

    t124 = (x513*((x514%x515)!=x516));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x517 = 240U;
	int32_t x518 = 20;
	uint32_t x520 = 861474318U;
	int32_t t125 = 466981642;

    t125 = (x517*((x518%x519)!=x520));

    if (t125 != 240) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x521 = 176683472LL;
	static int16_t x522 = 0;
	uint8_t x523 = 2U;
	static int8_t x524 = INT8_MAX;
	volatile int64_t t126 = 45LL;

    t126 = (x521*((x522%x523)!=x524));

    if (t126 != 176683472LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x526 = -1;
	int8_t x527 = -1;
	int64_t x528 = INT64_MIN;
	int64_t t127 = INT64_MIN;

    t127 = (x525*((x526%x527)!=x528));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x529 = UINT16_MAX;
	static uint64_t x530 = UINT64_MAX;
	int16_t x531 = -9927;
	int32_t x532 = 3;
	int32_t t128 = 1899;

    t128 = (x529*((x530%x531)!=x532));

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x537 = -1;
	static int32_t x538 = -31;
	int32_t x539 = INT32_MIN;
	int32_t t129 = 1;

    t129 = (x537*((x538%x539)!=x540));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x541 = 84601733;
	int32_t x542 = INT32_MIN;
	uint64_t x544 = UINT64_MAX;
	volatile int32_t t130 = -2;

    t130 = (x541*((x542%x543)!=x544));

    if (t130 != 84601733) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x545 = INT16_MIN;
	uint32_t x546 = UINT32_MAX;
	volatile int16_t x547 = INT16_MIN;
	static volatile int32_t t131 = 946563;

    t131 = (x545*((x546%x547)!=x548));

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x549 = 22U;
	static uint8_t x550 = 6U;
	static uint32_t x551 = 65480U;
	static int32_t t132 = -15536449;

    t132 = (x549*((x550%x551)!=x552));

    if (t132 != 22) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x554 = INT8_MIN;
	uint64_t x555 = 21LLU;
	int32_t x556 = INT32_MIN;
	int32_t t133 = -3;

    t133 = (x553*((x554%x555)!=x556));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x557 = UINT8_MAX;
	static int64_t x558 = -339266149842040957LL;
	int8_t x559 = INT8_MIN;
	int8_t x560 = INT8_MIN;

    t134 = (x557*((x558%x559)!=x560));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x561 = UINT32_MAX;
	static volatile int8_t x562 = INT8_MIN;
	int16_t x563 = INT16_MIN;
	static volatile uint32_t x564 = 593U;
	volatile uint32_t t135 = UINT32_MAX;

    t135 = (x561*((x562%x563)!=x564));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x565 = UINT8_MAX;
	int8_t x566 = -1;
	int8_t x567 = -1;
	int32_t x568 = INT32_MAX;
	volatile int32_t t136 = -55;

    t136 = (x565*((x566%x567)!=x568));

    if (t136 != 255) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x569 = INT64_MIN;
	volatile int32_t x570 = 3066856;
	int64_t x572 = -1LL;

    t137 = (x569*((x570%x571)!=x572));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x573 = 125;
	volatile int64_t x574 = INT64_MAX;
	static volatile uint8_t x576 = UINT8_MAX;
	static volatile int32_t t138 = -1;

    t138 = (x573*((x574%x575)!=x576));

    if (t138 != 125) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t t139 = -105370;

    t139 = (x577*((x578%x579)!=x580));

    if (t139 != -509334048) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x582 = -6;
	static uint32_t x583 = 420433695U;
	uint16_t x584 = 206U;

    t140 = (x581*((x582%x583)!=x584));

    if (t140 != 609224889U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = -1;
	int64_t x586 = INT64_MIN;
	uint64_t x587 = UINT64_MAX;
	uint64_t x588 = UINT64_MAX;

    t141 = (x585*((x586%x587)!=x588));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x589 = INT64_MAX;
	int8_t x590 = INT8_MIN;
	uint32_t x592 = UINT32_MAX;
	volatile int64_t t142 = INT64_MAX;

    t142 = (x589*((x590%x591)!=x592));

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x598 = -56;
	int32_t x599 = INT32_MIN;
	uint64_t t143 = UINT64_MAX;

    t143 = (x597*((x598%x599)!=x600));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x601 = 1408U;
	static uint16_t x602 = 130U;
	int16_t x603 = INT16_MIN;
	int32_t x604 = -1;

    t144 = (x601*((x602%x603)!=x604));

    if (t144 != 1408) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x605 = INT64_MIN;
	uint32_t x606 = UINT32_MAX;
	uint64_t x607 = 1991LLU;
	uint64_t x608 = 1215061861439LLU;
	static int64_t t145 = INT64_MIN;

    t145 = (x605*((x606%x607)!=x608));

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x610 = -1LL;
	int8_t x611 = -1;
	int32_t t146 = -30928;

    t146 = (x609*((x610%x611)!=x612));

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x613 = -1;
	int32_t x614 = -40;
	uint32_t x615 = UINT32_MAX;
	int32_t x616 = INT32_MAX;
	int32_t t147 = 4;

    t147 = (x613*((x614%x615)!=x616));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = -1;
	volatile int64_t x618 = INT64_MAX;
	uint32_t x619 = 326427590U;
	volatile int32_t t148 = -1;

    t148 = (x617*((x618%x619)!=x620));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x622 = -1;
	volatile uint16_t x624 = 5U;

    t149 = (x621*((x622%x623)!=x624));

    if (t149 != 2471U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x625 = 1U;
	int32_t x627 = 138085762;
	int8_t x628 = INT8_MAX;
	int32_t t150 = -247758;

    t150 = (x625*((x626%x627)!=x628));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x629 = INT8_MIN;
	int64_t x631 = -1LL;
	int32_t t151 = -125;

    t151 = (x629*((x630%x631)!=x632));

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x633 = INT8_MAX;
	volatile int16_t x634 = -387;
	uint16_t x635 = 979U;
	int32_t x636 = -1;
	volatile int32_t t152 = 123;

    t152 = (x633*((x634%x635)!=x636));

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x637 = UINT8_MAX;
	int16_t x638 = -1;
	static int16_t x639 = INT16_MIN;
	int64_t x640 = INT64_MIN;
	int32_t t153 = 38516857;

    t153 = (x637*((x638%x639)!=x640));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x641 = INT32_MAX;
	static int32_t x642 = INT32_MIN;
	static int32_t x643 = INT32_MIN;
	int16_t x644 = -97;
	volatile int32_t t154 = INT32_MAX;

    t154 = (x641*((x642%x643)!=x644));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x645 = 20750492877425176LLU;
	volatile int8_t x646 = 0;
	static volatile int16_t x647 = INT16_MAX;
	static volatile uint32_t x648 = 147629117U;
	volatile uint64_t t155 = 37783322LLU;

    t155 = (x645*((x646%x647)!=x648));

    if (t155 != 20750492877425176LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x649 = 940252;
	static uint8_t x650 = UINT8_MAX;
	volatile uint8_t x651 = 12U;
	int32_t t156 = 16008959;

    t156 = (x649*((x650%x651)!=x652));

    if (t156 != 940252) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x653 = -1;
	static int32_t x654 = -28165530;
	volatile int16_t x655 = 13;
	int32_t x656 = -1;

    t157 = (x653*((x654%x655)!=x656));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x658 = INT16_MIN;
	int64_t x659 = 892341538315429LL;
	uint8_t x660 = 1U;
	int32_t t158 = -14780;

    t158 = (x657*((x658%x659)!=x660));

    if (t158 != -13) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x661 = UINT64_MAX;
	int16_t x662 = -22;
	int16_t x663 = INT16_MIN;
	uint8_t x664 = 13U;
	static uint64_t t159 = UINT64_MAX;

    t159 = (x661*((x662%x663)!=x664));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x665 = 1570611437LLU;
	static int16_t x666 = 848;
	static int64_t x667 = INT64_MIN;
	static int32_t x668 = INT32_MIN;
	static volatile uint64_t t160 = 7770973LLU;

    t160 = (x665*((x666%x667)!=x668));

    if (t160 != 1570611437LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x673 = INT32_MIN;
	static uint16_t x674 = UINT16_MAX;
	int32_t x675 = INT32_MIN;
	uint64_t x676 = 2651177786264391945LLU;
	static int32_t t161 = INT32_MIN;

    t161 = (x673*((x674%x675)!=x676));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x678 = INT8_MAX;
	int32_t x679 = INT32_MIN;

    t162 = (x677*((x678%x679)!=x680));

    if (t162 != 660) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x681 = INT32_MAX;
	static volatile int64_t x683 = INT64_MIN;
	uint16_t x684 = UINT16_MAX;
	int32_t t163 = INT32_MAX;

    t163 = (x681*((x682%x683)!=x684));

    if (t163 != INT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x686 = INT32_MIN;
	static uint16_t x688 = UINT16_MAX;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = (x685*((x686%x687)!=x688));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x690 = UINT64_MAX;
	uint8_t x691 = 41U;
	static int32_t x692 = INT32_MAX;
	volatile int32_t t165 = 3711;

    t165 = (x689*((x690%x691)!=x692));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x695 = 7;
	volatile int32_t t166 = -16420;

    t166 = (x693*((x694%x695)!=x696));

    if (t166 != 24) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x698 = INT64_MIN;
	int8_t x699 = 52;
	int64_t x700 = INT64_MAX;
	volatile int64_t t167 = INT64_MAX;

    t167 = (x697*((x698%x699)!=x700));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x701 = UINT64_MAX;
	int32_t x702 = INT32_MIN;
	int8_t x703 = INT8_MAX;
	volatile uint64_t t168 = UINT64_MAX;

    t168 = (x701*((x702%x703)!=x704));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x705 = -1;
	int16_t x706 = INT16_MIN;
	int32_t x707 = INT32_MAX;
	int64_t x708 = INT64_MIN;

    t169 = (x705*((x706%x707)!=x708));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x709 = 44;
	int16_t x711 = 2967;
	volatile uint8_t x712 = 1U;
	volatile int32_t t170 = 4011084;

    t170 = (x709*((x710%x711)!=x712));

    if (t170 != 44) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x713 = -1;
	int32_t x714 = INT32_MIN;
	volatile int64_t x715 = -1LL;
	int32_t x716 = INT32_MIN;
	int32_t t171 = 10433;

    t171 = (x713*((x714%x715)!=x716));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x717 = INT8_MIN;
	volatile int8_t x719 = INT8_MIN;
	int64_t x720 = -289408871707088118LL;
	volatile int32_t t172 = -11579;

    t172 = (x717*((x718%x719)!=x720));

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x721 = 889LL;
	int32_t x722 = 2010;
	uint32_t x724 = UINT32_MAX;
	int64_t t173 = -11348561625LL;

    t173 = (x721*((x722%x723)!=x724));

    if (t173 != 889LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x726 = INT32_MIN;
	static int8_t x727 = INT8_MIN;
	volatile int32_t x728 = INT32_MIN;
	int32_t t174 = -7863462;

    t174 = (x725*((x726%x727)!=x728));

    if (t174 != 3834120) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x729 = INT64_MIN;
	int64_t x730 = INT64_MIN;
	static volatile int8_t x731 = INT8_MIN;
	uint8_t x732 = 1U;
	static int64_t t175 = INT64_MIN;

    t175 = (x729*((x730%x731)!=x732));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x733 = UINT32_MAX;
	volatile uint16_t x734 = 0U;
	int8_t x735 = INT8_MAX;
	uint64_t x736 = 57320030624126LLU;
	uint32_t t176 = UINT32_MAX;

    t176 = (x733*((x734%x735)!=x736));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x737 = -1;
	int16_t x738 = -3241;
	int64_t x739 = -1LL;
	static uint64_t x740 = 8536014585LLU;

    t177 = (x737*((x738%x739)!=x740));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x742 = -1;
	static volatile uint64_t x744 = 17425LLU;
	int32_t t178 = 1471343;

    t178 = (x741*((x742%x743)!=x744));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x745 = INT8_MIN;
	int8_t x746 = -1;
	int64_t x747 = 2572228414LL;
	volatile int32_t t179 = 276260;

    t179 = (x745*((x746%x747)!=x748));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x749 = INT8_MIN;
	static int16_t x751 = INT16_MIN;
	uint16_t x752 = 2U;
	int32_t t180 = -6863;

    t180 = (x749*((x750%x751)!=x752));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x753 = INT8_MIN;
	uint8_t x754 = 1U;
	uint16_t x755 = UINT16_MAX;
	int16_t x756 = -1;
	volatile int32_t t181 = -186;

    t181 = (x753*((x754%x755)!=x756));

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x757 = INT64_MIN;
	int16_t x759 = -1;
	int8_t x760 = INT8_MIN;

    t182 = (x757*((x758%x759)!=x760));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x762 = INT8_MIN;
	int64_t x764 = INT64_MIN;
	volatile int32_t t183 = -1605370;

    t183 = (x761*((x762%x763)!=x764));

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x766 = -1;
	int8_t x767 = 1;
	int32_t x768 = 0;
	int32_t t184 = 15;

    t184 = (x765*((x766%x767)!=x768));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x769 = 1U;
	int64_t x770 = 2069122967834018814LL;
	int64_t x771 = -62038883850960633LL;
	volatile uint32_t x772 = UINT32_MAX;
	volatile int32_t t185 = 12335430;

    t185 = (x769*((x770%x771)!=x772));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x773 = 3U;
	volatile uint8_t x774 = 16U;
	volatile int64_t x775 = INT64_MIN;
	int64_t x776 = INT64_MIN;
	int32_t t186 = -4499;

    t186 = (x773*((x774%x775)!=x776));

    if (t186 != 3) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x779 = 2583219U;
	uint64_t x780 = 46787453LLU;
	uint32_t t187 = 138101685U;

    t187 = (x777*((x778%x779)!=x780));

    if (t187 != 2U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x781 = -753;
	int8_t x783 = INT8_MIN;

    t188 = (x781*((x782%x783)!=x784));

    if (t188 != -753) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x787 = INT8_MIN;
	volatile int8_t x788 = 1;
	volatile int32_t t189 = -25557;

    t189 = (x785*((x786%x787)!=x788));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x792 = INT64_MIN;
	int32_t t190 = INT32_MIN;

    t190 = (x789*((x790%x791)!=x792));

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x793 = 55U;
	int32_t x794 = INT32_MIN;
	int64_t x795 = INT64_MAX;
	uint64_t x796 = UINT64_MAX;
	volatile int32_t t191 = 48921037;

    t191 = (x793*((x794%x795)!=x796));

    if (t191 != 55) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x799 = INT32_MAX;
	static volatile int16_t x800 = INT16_MAX;
	static volatile int32_t t192 = 5;

    t192 = (x797*((x798%x799)!=x800));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x801 = 0;
	static int32_t x802 = -1;
	static int64_t x803 = INT64_MIN;
	int32_t x804 = INT32_MIN;
	static volatile int32_t t193 = -7;

    t193 = (x801*((x802%x803)!=x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x805 = -450;
	int8_t x806 = INT8_MIN;
	int64_t x808 = INT64_MIN;
	volatile int32_t t194 = -193114;

    t194 = (x805*((x806%x807)!=x808));

    if (t194 != -450) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x809 = INT64_MIN;
	volatile uint64_t x810 = 10569872992197562LLU;
	int16_t x811 = INT16_MIN;
	volatile int8_t x812 = 1;
	static volatile int64_t t195 = INT64_MIN;

    t195 = (x809*((x810%x811)!=x812));

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x813 = INT64_MAX;
	static uint64_t x814 = 85LLU;
	static int32_t x815 = 1715;
	uint64_t x816 = 10033801LLU;
	int64_t t196 = INT64_MAX;

    t196 = (x813*((x814%x815)!=x816));

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x817 = UINT32_MAX;
	uint16_t x818 = UINT16_MAX;
	int16_t x819 = -61;
	static int16_t x820 = 94;
	uint32_t t197 = UINT32_MAX;

    t197 = (x817*((x818%x819)!=x820));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x821 = 1;
	int64_t x822 = INT64_MIN;
	int32_t x823 = -1;
	uint32_t x824 = UINT32_MAX;
	volatile int32_t t198 = -2137;

    t198 = (x821*((x822%x823)!=x824));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x829 = INT64_MAX;
	static int8_t x831 = INT8_MAX;
	uint64_t x832 = 4LLU;
	int64_t t199 = INT64_MAX;

    t199 = (x829*((x830%x831)!=x832));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

