
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

int64_t x3 = INT64_MIN;
uint32_t x4 = 1260U;
static uint32_t x5 = UINT32_MAX;
volatile int8_t x8 = INT8_MAX;
volatile int32_t x22 = -1;
static int64_t x34 = INT64_MAX;
int32_t x40 = 700455206;
static int32_t x41 = 88775;
int32_t x44 = INT32_MIN;
uint8_t x55 = 2U;
volatile int32_t t12 = 0;
int64_t x67 = -1151965LL;
static volatile int32_t t15 = -29255398;
int16_t x74 = INT16_MIN;
uint32_t x80 = 7U;
int32_t x81 = -1;
int16_t x83 = -1417;
static int16_t x85 = INT16_MIN;
static int16_t x87 = 119;
int16_t x94 = -189;
volatile int16_t x96 = INT16_MIN;
int32_t t21 = -11;
static volatile int8_t x106 = 42;
volatile int64_t x114 = INT64_MIN;
int8_t x125 = INT8_MIN;
int64_t x128 = INT64_MIN;
volatile int8_t x136 = -1;
static int32_t t30 = 421312;
static uint32_t x141 = 469U;
static int32_t t32 = 13;
uint32_t x155 = UINT32_MAX;
volatile int32_t t35 = -1;
int32_t x157 = INT32_MIN;
static uint8_t x174 = 12U;
volatile int8_t x175 = -6;
volatile int32_t t43 = -1;
int16_t x206 = INT16_MAX;
volatile int32_t t48 = -196;
int16_t x219 = -1;
volatile int32_t t50 = 587103;
int64_t x221 = -1LL;
volatile uint64_t x223 = 88880898116102339LLU;
static uint8_t x226 = 0U;
volatile uint16_t x229 = 34U;
int16_t x230 = -1;
volatile uint32_t x231 = 1123347U;
static int8_t x247 = 2;
uint64_t x249 = 38LLU;
int32_t x250 = -1365;
int8_t x258 = -1;
int32_t t61 = 1;
static int8_t x269 = INT8_MIN;
int16_t x270 = INT16_MIN;
volatile int32_t t63 = 1;
int8_t x277 = INT8_MIN;
int8_t x301 = INT8_MAX;
volatile uint64_t x302 = 8488649327LLU;
int32_t x309 = INT32_MIN;
int32_t x315 = INT32_MAX;
volatile int32_t t75 = -16613;
int16_t x325 = -1;
uint8_t x326 = UINT8_MAX;
int16_t x327 = INT16_MAX;
static int64_t x337 = INT64_MAX;
volatile int8_t x339 = -1;
volatile uint8_t x349 = 90U;
int64_t x353 = -1LL;
static int32_t t84 = 341465;
int8_t x360 = INT8_MIN;
volatile int32_t t85 = 1;
static int64_t x362 = INT64_MIN;
int8_t x363 = -1;
static int16_t x364 = INT16_MIN;
static int8_t x365 = -1;
int16_t x369 = -1;
int16_t x370 = INT16_MAX;
static int16_t x373 = INT16_MIN;
static int32_t x375 = 22;
int64_t x378 = INT64_MIN;
uint64_t x380 = 25684917356LLU;
static int32_t t90 = -5604;
static int8_t x384 = -3;
uint8_t x385 = 24U;
int8_t x386 = INT8_MIN;
int16_t x389 = INT16_MIN;
int64_t x390 = -1LL;
int64_t x393 = INT64_MIN;
volatile uint32_t x398 = UINT32_MAX;
uint8_t x403 = UINT8_MAX;
uint64_t x404 = 32641365262LLU;
uint32_t x410 = 1660419U;
static int32_t x414 = -1;
int32_t x425 = INT32_MIN;
volatile int32_t t103 = -119188;
int8_t x436 = -1;
volatile int32_t t104 = -46358098;
static volatile uint16_t x437 = 14U;
volatile int32_t t106 = -20;
int16_t x453 = 3627;
static volatile int8_t x461 = INT8_MIN;
int32_t t111 = -14;
uint8_t x471 = 24U;
int32_t t113 = 724456460;
uint32_t x480 = 683U;
static int8_t x494 = INT8_MAX;
static int8_t x503 = -1;
int32_t x508 = INT32_MIN;
int8_t x509 = 0;
static int16_t x520 = -1;
int16_t x529 = -1;
int8_t x534 = -50;
uint8_t x540 = 5U;
int64_t x541 = -288995378739LL;
int32_t x543 = -1;
static int8_t x545 = -1;
uint64_t x547 = 13064389327657LLU;
int32_t t131 = -11;
uint64_t x553 = 0LLU;
static int32_t t132 = -89284;
int32_t t134 = 131342520;
static int64_t x567 = -1LL;
uint32_t x572 = 671611795U;
static volatile int32_t t137 = 5;
int32_t t138 = 5217;
int16_t x589 = 223;
uint8_t x597 = 83U;
uint8_t x599 = 56U;
volatile int32_t t143 = 5941736;
static int64_t x603 = -6644738010176068LL;
volatile uint8_t x606 = 1U;
uint16_t x608 = 10U;
static int32_t x623 = -1;
int32_t t149 = 168;
uint64_t x627 = UINT64_MAX;
int32_t x631 = INT32_MIN;
int64_t x634 = INT64_MIN;
volatile int8_t x636 = INT8_MAX;
static uint16_t x642 = 14U;
int8_t x643 = INT8_MIN;
int8_t x645 = INT8_MAX;
static int8_t x647 = 31;
int8_t x649 = -3;
uint8_t x652 = 6U;
static int32_t t156 = 1229;
static int32_t x657 = 0;
static int8_t x659 = INT8_MAX;
static int8_t x663 = 0;
static int16_t x665 = -1;
int64_t x666 = -1LL;
int16_t x670 = -1;
int32_t t161 = -829;
int8_t x673 = INT8_MIN;
int64_t x674 = INT64_MIN;
static uint8_t x679 = 76U;
static uint16_t x683 = 0U;
int32_t t167 = 21460948;
static int32_t x698 = -18816720;
static uint16_t x704 = UINT16_MAX;
int32_t t171 = 2685;
static int32_t x716 = 3171;
volatile int32_t t172 = -237;
volatile uint8_t x722 = 6U;
int8_t x725 = -1;
volatile int32_t t174 = 29119;
uint32_t x730 = UINT32_MAX;
static volatile int32_t t175 = 1897589;
uint8_t x735 = UINT8_MAX;
uint8_t x751 = 0U;
int32_t x756 = INT32_MAX;
volatile uint32_t x759 = UINT32_MAX;
int8_t x762 = 7;
uint8_t x763 = 0U;
int32_t t183 = 13990165;
int8_t x771 = INT8_MIN;
uint32_t x778 = 773724952U;
int32_t t187 = 3241109;
int32_t t188 = -109271;
int8_t x788 = INT8_MIN;
int8_t x800 = INT8_MIN;
uint16_t x801 = 106U;
int32_t x802 = INT32_MAX;
int8_t x804 = INT8_MIN;
static int16_t x805 = -9;
int8_t x807 = -1;
int32_t x808 = -1;
uint32_t x809 = 18U;
uint64_t x815 = 711LLU;
uint32_t x816 = 3549521U;
static volatile int64_t x817 = -1LL;
volatile int32_t x822 = -1;
int16_t x825 = 836;
static uint8_t x826 = 1U;


void f0(void) {
    	uint32_t x1 = 3514168U;
	int16_t x2 = INT16_MAX;
	static volatile int32_t t0 = 0;

    t0 = (x1>((x2&x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x6 = UINT8_MAX;
	int64_t x7 = INT64_MAX;
	int32_t t1 = -5787;

    t1 = (x5>((x6&x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = 9;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MAX;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = -56523;

    t2 = (x9>((x10&x11)%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 12;
	int64_t x14 = -63836420LL;
	static int32_t x15 = 4791;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = -43094;

    t3 = (x13>((x14&x15)%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MAX;
	uint16_t x19 = 1939U;
	int32_t x20 = -501872290;
	static int32_t t4 = 1077254;

    t4 = (x17>((x18&x19)%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint8_t x21 = 1U;
	volatile int16_t x23 = -10041;
	static uint32_t x24 = 38U;
	int32_t t5 = 204;

    t5 = (x21>((x22&x23)%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int64_t x26 = -1LL;
	int8_t x27 = -1;
	int16_t x28 = 1;
	static int32_t t6 = -1220;

    t6 = (x25>((x26&x27)%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x33 = -57;
	uint16_t x35 = 20U;
	int64_t x36 = -1LL;
	volatile int32_t t7 = 180409797;

    t7 = (x33>((x34&x35)%x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 7U;
	static volatile int8_t x38 = INT8_MAX;
	int8_t x39 = 48;
	volatile int32_t t8 = 1779855;

    t8 = (x37>((x38&x39)%x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = 30;
	int16_t x43 = -1;
	volatile int32_t t9 = 196246517;

    t9 = (x41>((x42&x43)%x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;
	int32_t x50 = 375438;
	uint64_t x51 = 15778054301366LLU;
	int8_t x52 = INT8_MAX;
	static int32_t t10 = 7;

    t10 = (x49>((x50&x51)%x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	static int64_t x56 = INT64_MAX;
	int32_t t11 = 7;

    t11 = (x53>((x54&x55)%x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x57 = 1803950350192315LLU;
	static int64_t x58 = -1LL;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;

    t12 = (x57>((x58&x59)%x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = INT64_MAX;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MIN;
	static volatile int16_t x64 = 7;
	int32_t t13 = 24588529;

    t13 = (x61>((x62&x63)%x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = UINT16_MAX;
	int32_t x66 = -1;
	uint16_t x68 = 1U;
	static int32_t t14 = 241;

    t14 = (x65>((x66&x67)%x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = INT64_MAX;
	static volatile int8_t x70 = -1;
	uint64_t x71 = 2488LLU;
	uint16_t x72 = 209U;

    t15 = (x69>((x70&x71)%x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x73 = UINT8_MAX;
	uint16_t x75 = 18051U;
	volatile int64_t x76 = INT64_MIN;
	static volatile int32_t t16 = -48646105;

    t16 = (x73>((x74&x75)%x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x77 = 0U;
	uint64_t x78 = 90880810420723LLU;
	volatile uint16_t x79 = 2040U;
	int32_t t17 = 1109369;

    t17 = (x77>((x78&x79)%x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x82 = 6039843197097LLU;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t18 = -7580;

    t18 = (x81>((x82&x83)%x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x86 = UINT64_MAX;
	volatile uint64_t x88 = 519429LLU;
	static int32_t t19 = -121361;

    t19 = (x85>((x86&x87)%x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MIN;
	int8_t x90 = -15;
	uint32_t x91 = UINT32_MAX;
	volatile int16_t x92 = INT16_MAX;
	int32_t t20 = 113;

    t20 = (x89>((x90&x91)%x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x93 = INT16_MAX;
	uint32_t x95 = UINT32_MAX;

    t21 = (x93>((x94&x95)%x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x101 = UINT8_MAX;
	uint8_t x102 = UINT8_MAX;
	static int16_t x103 = INT16_MAX;
	int8_t x104 = -1;
	volatile int32_t t22 = -659547;

    t22 = (x101>((x102&x103)%x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = -1;
	int8_t x107 = INT8_MIN;
	uint16_t x108 = 3966U;
	int32_t t23 = 407463168;

    t23 = (x105>((x106&x107)%x108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x109 = INT16_MIN;
	uint16_t x110 = UINT16_MAX;
	static volatile uint64_t x111 = UINT64_MAX;
	uint32_t x112 = 121375U;
	int32_t t24 = 57991205;

    t24 = (x109>((x110&x111)%x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x113 = INT32_MAX;
	int8_t x115 = INT8_MIN;
	uint16_t x116 = 1U;
	volatile int32_t t25 = -3;

    t25 = (x113>((x114&x115)%x116));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x117 = INT32_MIN;
	static int32_t x118 = INT32_MAX;
	int8_t x119 = 4;
	int16_t x120 = INT16_MAX;
	int32_t t26 = 0;

    t26 = (x117>((x118&x119)%x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -1;
	uint64_t x122 = UINT64_MAX;
	int8_t x123 = INT8_MIN;
	static uint64_t x124 = 1979648491762129355LLU;
	volatile int32_t t27 = -359;

    t27 = (x121>((x122&x123)%x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x126 = UINT64_MAX;
	volatile int16_t x127 = INT16_MIN;
	int32_t t28 = -1;

    t28 = (x125>((x126&x127)%x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MAX;
	int16_t x130 = 5271;
	static int64_t x131 = -885195LL;
	static uint64_t x132 = 15740LLU;
	static int32_t t29 = -1;

    t29 = (x129>((x130&x131)%x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x133 = 185177U;
	int8_t x134 = -2;
	volatile int64_t x135 = INT64_MIN;

    t30 = (x133>((x134&x135)%x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x137 = UINT32_MAX;
	static uint64_t x138 = 6968482LLU;
	static uint16_t x139 = 1296U;
	int32_t x140 = INT32_MIN;
	int32_t t31 = 33904354;

    t31 = (x137>((x138&x139)%x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x142 = -1159275190675613LL;
	uint32_t x143 = UINT32_MAX;
	static uint16_t x144 = 939U;

    t32 = (x141>((x142&x143)%x144));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x145 = 16934887679LL;
	static uint64_t x146 = 1312LLU;
	int16_t x147 = -1;
	int16_t x148 = -1;
	int32_t t33 = 3;

    t33 = (x145>((x146&x147)%x148));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = 198593439LL;
	volatile int64_t x150 = INT64_MAX;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = 4U;
	int32_t t34 = 12;

    t34 = (x149>((x150&x151)%x152));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = 5830;
	uint16_t x154 = UINT16_MAX;
	static int16_t x156 = INT16_MIN;

    t35 = (x153>((x154&x155)%x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x158 = INT32_MIN;
	static int16_t x159 = INT16_MAX;
	int32_t x160 = INT32_MAX;
	volatile int32_t t36 = 1621;

    t36 = (x157>((x158&x159)%x160));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x161 = 54886U;
	static int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MIN;
	static int8_t x164 = INT8_MIN;
	int32_t t37 = 14411772;

    t37 = (x161>((x162&x163)%x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MIN;
	uint64_t x167 = UINT64_MAX;
	static volatile uint16_t x168 = 204U;
	volatile int32_t t38 = -54212724;

    t38 = (x165>((x166&x167)%x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x169 = UINT16_MAX;
	int16_t x170 = -2008;
	int32_t x171 = INT32_MIN;
	int8_t x172 = 23;
	int32_t t39 = 16480544;

    t39 = (x169>((x170&x171)%x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x173 = 1596314U;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t40 = -4380637;

    t40 = (x173>((x174&x175)%x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = INT64_MAX;
	int32_t x178 = 1;
	int32_t x179 = INT32_MIN;
	static uint64_t x180 = 13549202381LLU;
	int32_t t41 = 4440875;

    t41 = (x177>((x178&x179)%x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = INT16_MIN;
	int8_t x182 = INT8_MIN;
	int16_t x183 = 239;
	uint16_t x184 = 6253U;
	volatile int32_t t42 = -15;

    t42 = (x181>((x182&x183)%x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = 6;
	volatile int16_t x186 = INT16_MIN;
	int32_t x187 = -1;
	volatile int32_t x188 = INT32_MAX;

    t43 = (x185>((x186&x187)%x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x193 = -1;
	uint8_t x194 = 3U;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MAX;
	static volatile int32_t t44 = -171787;

    t44 = (x193>((x194&x195)%x196));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x197 = 23250122U;
	int32_t x198 = -1;
	volatile uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;
	int32_t t45 = 2;

    t45 = (x197>((x198&x199)%x200));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x201 = INT8_MAX;
	static uint8_t x202 = UINT8_MAX;
	volatile int32_t x203 = -1;
	int64_t x204 = INT64_MIN;
	volatile int32_t t46 = -723748;

    t46 = (x201>((x202&x203)%x204));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x205 = -2997;
	int32_t x207 = INT32_MIN;
	int64_t x208 = -1LL;
	int32_t t47 = 519542389;

    t47 = (x205>((x206&x207)%x208));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x209 = 123675385;
	int32_t x210 = INT32_MAX;
	static uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MIN;

    t48 = (x209>((x210&x211)%x212));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = 1;
	int32_t x214 = -1;
	volatile uint64_t x215 = 9225LLU;
	uint8_t x216 = 14U;
	volatile int32_t t49 = 62457291;

    t49 = (x213>((x214&x215)%x216));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x217 = -13;
	int64_t x218 = INT64_MIN;
	volatile int8_t x220 = -12;

    t50 = (x217>((x218&x219)%x220));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x222 = 0U;
	int16_t x224 = 830;
	volatile int32_t t51 = -249546;

    t51 = (x221>((x222&x223)%x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x225 = INT8_MIN;
	int32_t x227 = -74319;
	uint8_t x228 = 8U;
	volatile int32_t t52 = -1;

    t52 = (x225>((x226&x227)%x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x232 = 419806LL;
	volatile int32_t t53 = 8136;

    t53 = (x229>((x230&x231)%x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x233 = -38LL;
	volatile uint8_t x234 = 30U;
	volatile int8_t x235 = INT8_MAX;
	int64_t x236 = 13079935LL;
	static volatile int32_t t54 = -5492362;

    t54 = (x233>((x234&x235)%x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x237 = -1;
	volatile int8_t x238 = 3;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MAX;
	int32_t t55 = 0;

    t55 = (x237>((x238&x239)%x240));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x241 = INT8_MAX;
	volatile int64_t x242 = INT64_MIN;
	static int16_t x243 = INT16_MAX;
	int32_t x244 = -1;
	volatile int32_t t56 = 45615;

    t56 = (x241>((x242&x243)%x244));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = -1;
	volatile int32_t x246 = 187590;
	uint64_t x248 = 593LLU;
	static volatile int32_t t57 = -24905;

    t57 = (x245>((x246&x247)%x248));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x251 = 0U;
	volatile uint32_t x252 = 6471499U;
	static int32_t t58 = 0;

    t58 = (x249>((x250&x251)%x252));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x253 = -270;
	int32_t x254 = INT32_MAX;
	int32_t x255 = 163381729;
	int16_t x256 = 180;
	static int32_t t59 = -3112862;

    t59 = (x253>((x254&x255)%x256));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x257 = -2076;
	volatile int16_t x259 = -6522;
	uint8_t x260 = 1U;
	int32_t t60 = -216237270;

    t60 = (x257>((x258&x259)%x260));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x261 = -67;
	int8_t x262 = 8;
	uint8_t x263 = 29U;
	static volatile uint32_t x264 = UINT32_MAX;

    t61 = (x261>((x262&x263)%x264));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x265 = INT8_MIN;
	int16_t x266 = -1625;
	int64_t x267 = INT64_MAX;
	uint32_t x268 = UINT32_MAX;
	int32_t t62 = 2;

    t62 = (x265>((x266&x267)%x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x271 = -838430240897LL;
	int8_t x272 = INT8_MIN;

    t63 = (x269>((x270&x271)%x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x273 = 89742U;
	volatile int8_t x274 = 0;
	volatile int32_t x275 = 43;
	int16_t x276 = INT16_MIN;
	int32_t t64 = 28009586;

    t64 = (x273>((x274&x275)%x276));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x278 = 412U;
	int16_t x279 = -1;
	int8_t x280 = INT8_MIN;
	volatile int32_t t65 = 746167157;

    t65 = (x277>((x278&x279)%x280));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x281 = INT64_MAX;
	static uint16_t x282 = UINT16_MAX;
	int32_t x283 = 14974;
	static int64_t x284 = INT64_MIN;
	volatile int32_t t66 = -7329;

    t66 = (x281>((x282&x283)%x284));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x285 = INT8_MIN;
	uint8_t x286 = UINT8_MAX;
	uint8_t x287 = 1U;
	int32_t x288 = -6635;
	static int32_t t67 = 1;

    t67 = (x285>((x286&x287)%x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x289 = INT32_MAX;
	volatile int64_t x290 = 5219809LL;
	int8_t x291 = -1;
	int32_t x292 = INT32_MIN;
	int32_t t68 = 6;

    t68 = (x289>((x290&x291)%x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x293 = 1714566864LLU;
	int32_t x294 = -1;
	uint8_t x295 = UINT8_MAX;
	volatile int32_t x296 = INT32_MAX;
	int32_t t69 = 56776152;

    t69 = (x293>((x294&x295)%x296));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x297 = -12909517LL;
	int64_t x298 = INT64_MIN;
	volatile int16_t x299 = 0;
	int32_t x300 = INT32_MAX;
	volatile int32_t t70 = -30093819;

    t70 = (x297>((x298&x299)%x300));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x303 = 2U;
	static volatile int64_t x304 = -1LL;
	volatile int32_t t71 = 3044117;

    t71 = (x301>((x302&x303)%x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x305 = -1LL;
	int8_t x306 = -1;
	int8_t x307 = INT8_MIN;
	static int32_t x308 = -4;
	volatile int32_t t72 = 747;

    t72 = (x305>((x306&x307)%x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	volatile uint16_t x312 = UINT16_MAX;
	static int32_t t73 = -19316690;

    t73 = (x309>((x310&x311)%x312));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x313 = -7505451;
	int16_t x314 = -26;
	static volatile int8_t x316 = INT8_MAX;
	volatile int32_t t74 = 31805816;

    t74 = (x313>((x314&x315)%x316));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x317 = INT64_MIN;
	static int8_t x318 = -2;
	int8_t x319 = INT8_MAX;
	int8_t x320 = -1;

    t75 = (x317>((x318&x319)%x320));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x321 = 1563U;
	static uint16_t x322 = UINT16_MAX;
	volatile int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t76 = -96;

    t76 = (x321>((x322&x323)%x324));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x328 = 223U;
	volatile int32_t t77 = 74962;

    t77 = (x325>((x326&x327)%x328));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MAX;
	int64_t x331 = INT64_MAX;
	static uint64_t x332 = 167LLU;
	volatile int32_t t78 = -332816977;

    t78 = (x329>((x330&x331)%x332));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x333 = 211U;
	static int16_t x334 = INT16_MIN;
	static int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MIN;
	volatile int32_t t79 = 325139425;

    t79 = (x333>((x334&x335)%x336));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x338 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t80 = 5;

    t80 = (x337>((x338&x339)%x340));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x341 = 515376573088361272LL;
	int64_t x342 = -1268466122870042988LL;
	int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MAX;
	int32_t t81 = -3961;

    t81 = (x341>((x342&x343)%x344));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x345 = UINT64_MAX;
	uint64_t x346 = 1749181877LLU;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -33857064325310LL;
	int32_t t82 = -51488;

    t82 = (x345>((x346&x347)%x348));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x350 = INT8_MAX;
	int32_t x351 = -1;
	static uint8_t x352 = 26U;
	volatile int32_t t83 = -245168;

    t83 = (x349>((x350&x351)%x352));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x354 = INT64_MAX;
	uint64_t x355 = 860LLU;
	volatile uint32_t x356 = UINT32_MAX;

    t84 = (x353>((x354&x355)%x356));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x357 = INT16_MAX;
	uint16_t x358 = 66U;
	int16_t x359 = 5;

    t85 = (x357>((x358&x359)%x360));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x361 = 7761U;
	int32_t t86 = -6440739;

    t86 = (x361>((x362&x363)%x364));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x366 = -1LL;
	int8_t x367 = -1;
	int8_t x368 = INT8_MAX;
	static volatile int32_t t87 = 30;

    t87 = (x365>((x366&x367)%x368));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x371 = -1LL;
	static int32_t x372 = INT32_MAX;
	int32_t t88 = 0;

    t88 = (x369>((x370&x371)%x372));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x374 = INT32_MIN;
	uint32_t x376 = 1003U;
	static volatile int32_t t89 = -2035;

    t89 = (x373>((x374&x375)%x376));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MAX;
	int64_t x379 = INT64_MAX;

    t90 = (x377>((x378&x379)%x380));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x381 = 55770655574677857LL;
	volatile int8_t x382 = -1;
	static int32_t x383 = INT32_MIN;
	int32_t t91 = -115070667;

    t91 = (x381>((x382&x383)%x384));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x387 = 2042084459582LL;
	uint64_t x388 = 4837664LLU;
	static int32_t t92 = -83;

    t92 = (x385>((x386&x387)%x388));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x391 = -1;
	int64_t x392 = 23554875LL;
	int32_t t93 = 1;

    t93 = (x389>((x390&x391)%x392));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x394 = -1;
	uint16_t x395 = 2U;
	int8_t x396 = -1;
	volatile int32_t t94 = 3627;

    t94 = (x393>((x394&x395)%x396));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x397 = INT16_MAX;
	volatile int32_t x399 = INT32_MIN;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t95 = 1;

    t95 = (x397>((x398&x399)%x400));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x401 = INT64_MAX;
	volatile int16_t x402 = -93;
	volatile int32_t t96 = -119;

    t96 = (x401>((x402&x403)%x404));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x405 = INT32_MIN;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = -455246756;
	uint16_t x408 = UINT16_MAX;
	int32_t t97 = 84505;

    t97 = (x405>((x406&x407)%x408));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x409 = UINT32_MAX;
	int32_t x411 = -1;
	static int16_t x412 = INT16_MIN;
	static volatile int32_t t98 = 42308;

    t98 = (x409>((x410&x411)%x412));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x413 = -1;
	int32_t x415 = 32566483;
	int32_t x416 = -210402064;
	volatile int32_t t99 = 53967870;

    t99 = (x413>((x414&x415)%x416));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x417 = INT64_MAX;
	static uint8_t x418 = 3U;
	int64_t x419 = INT64_MIN;
	int32_t x420 = -1;
	int32_t t100 = 8;

    t100 = (x417>((x418&x419)%x420));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x421 = 3942;
	uint16_t x422 = 176U;
	uint32_t x423 = UINT32_MAX;
	uint8_t x424 = 19U;
	static int32_t t101 = 1266710;

    t101 = (x421>((x422&x423)%x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x426 = 1U;
	static int32_t x427 = INT32_MIN;
	int32_t x428 = INT32_MAX;
	static int32_t t102 = 480;

    t102 = (x425>((x426&x427)%x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x429 = UINT64_MAX;
	uint64_t x430 = 3751483234140116LLU;
	int8_t x431 = -1;
	static int8_t x432 = -1;

    t103 = (x429>((x430&x431)%x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x433 = INT32_MAX;
	static int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MIN;

    t104 = (x433>((x434&x435)%x436));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x438 = 0U;
	int64_t x439 = 10646078102457LL;
	volatile int16_t x440 = -1446;
	int32_t t105 = 767980325;

    t105 = (x437>((x438&x439)%x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x441 = INT64_MAX;
	static volatile int8_t x442 = -1;
	int64_t x443 = 3965462LL;
	volatile int64_t x444 = INT64_MAX;

    t106 = (x441>((x442&x443)%x444));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int16_t x445 = -3394;
	volatile uint64_t x446 = 17654LLU;
	int16_t x447 = INT16_MIN;
	volatile int64_t x448 = -182951664LL;
	static int32_t t107 = 51;

    t107 = (x445>((x446&x447)%x448));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x454 = 210266U;
	static volatile int8_t x455 = 40;
	int64_t x456 = INT64_MIN;
	volatile int32_t t108 = -3649360;

    t108 = (x453>((x454&x455)%x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x457 = 21901U;
	int64_t x458 = INT64_MAX;
	static uint32_t x459 = 226908876U;
	int32_t x460 = INT32_MIN;
	static int32_t t109 = -4;

    t109 = (x457>((x458&x459)%x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x462 = INT64_MAX;
	uint16_t x463 = 10U;
	int32_t x464 = 24622362;
	volatile int32_t t110 = -909347;

    t110 = (x461>((x462&x463)%x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x465 = -6;
	uint64_t x466 = UINT64_MAX;
	static int16_t x467 = INT16_MIN;
	uint16_t x468 = 7881U;

    t111 = (x465>((x466&x467)%x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x469 = INT16_MIN;
	int16_t x470 = INT16_MIN;
	volatile int8_t x472 = INT8_MAX;
	volatile int32_t t112 = 1;

    t112 = (x469>((x470&x471)%x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x473 = INT16_MAX;
	static uint16_t x474 = 377U;
	volatile int64_t x475 = INT64_MIN;
	static int32_t x476 = INT32_MIN;

    t113 = (x473>((x474&x475)%x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x477 = 599U;
	static int8_t x478 = -1;
	int32_t x479 = 574058;
	int32_t t114 = 14;

    t114 = (x477>((x478&x479)%x480));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x481 = 5215207LLU;
	int8_t x482 = INT8_MIN;
	int16_t x483 = INT16_MIN;
	uint8_t x484 = 1U;
	volatile int32_t t115 = 0;

    t115 = (x481>((x482&x483)%x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x485 = -1;
	int8_t x486 = -4;
	int32_t x487 = -1;
	uint8_t x488 = 1U;
	static int32_t t116 = 28539;

    t116 = (x485>((x486&x487)%x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x493 = INT8_MAX;
	volatile uint32_t x495 = 6U;
	volatile int8_t x496 = -1;
	volatile int32_t t117 = -946;

    t117 = (x493>((x494&x495)%x496));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x497 = INT8_MAX;
	volatile uint8_t x498 = 66U;
	int16_t x499 = INT16_MAX;
	static uint64_t x500 = 1356LLU;
	int32_t t118 = -36377;

    t118 = (x497>((x498&x499)%x500));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x501 = INT64_MIN;
	int8_t x502 = -6;
	int64_t x504 = INT64_MIN;
	int32_t t119 = 634778;

    t119 = (x501>((x502&x503)%x504));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x505 = INT16_MIN;
	int8_t x506 = INT8_MIN;
	uint8_t x507 = 7U;
	volatile int32_t t120 = -83;

    t120 = (x505>((x506&x507)%x508));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x510 = UINT16_MAX;
	int32_t x511 = -1;
	static int32_t x512 = -1;
	volatile int32_t t121 = -137182370;

    t121 = (x509>((x510&x511)%x512));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x513 = 487720672571574LLU;
	int32_t x514 = INT32_MAX;
	uint64_t x515 = 436015432324LLU;
	uint16_t x516 = 105U;
	volatile int32_t t122 = -36652128;

    t122 = (x513>((x514&x515)%x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x517 = 1;
	static int16_t x518 = INT16_MIN;
	static volatile int32_t x519 = 124;
	volatile int32_t t123 = 14983957;

    t123 = (x517>((x518&x519)%x520));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x521 = UINT64_MAX;
	int8_t x522 = 0;
	volatile int8_t x523 = INT8_MIN;
	int8_t x524 = INT8_MAX;
	static int32_t t124 = -3580944;

    t124 = (x521>((x522&x523)%x524));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x525 = -1LL;
	static int16_t x526 = -1;
	uint16_t x527 = 28182U;
	volatile int16_t x528 = -1516;
	int32_t t125 = -1980;

    t125 = (x525>((x526&x527)%x528));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x530 = INT8_MIN;
	static volatile int32_t x531 = -11581554;
	uint8_t x532 = UINT8_MAX;
	static volatile int32_t t126 = -1;

    t126 = (x529>((x530&x531)%x532));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x533 = INT64_MIN;
	static volatile uint32_t x535 = 11773U;
	static int16_t x536 = -1;
	volatile int32_t t127 = 160;

    t127 = (x533>((x534&x535)%x536));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x537 = INT64_MIN;
	static volatile int8_t x538 = 1;
	volatile uint32_t x539 = 18863757U;
	int32_t t128 = -7;

    t128 = (x537>((x538&x539)%x540));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x542 = INT64_MAX;
	volatile int32_t x544 = INT32_MIN;
	static volatile int32_t t129 = -19;

    t129 = (x541>((x542&x543)%x544));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x546 = UINT32_MAX;
	uint64_t x548 = UINT64_MAX;
	static volatile int32_t t130 = 1777657;

    t130 = (x545>((x546&x547)%x548));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x549 = INT16_MAX;
	volatile int32_t x550 = -1;
	uint32_t x551 = 181858U;
	volatile int16_t x552 = INT16_MIN;

    t131 = (x549>((x550&x551)%x552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x554 = INT32_MIN;
	static uint64_t x555 = 36443LLU;
	int32_t x556 = INT32_MIN;

    t132 = (x553>((x554&x555)%x556));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x557 = INT32_MIN;
	uint16_t x558 = 6U;
	volatile int16_t x559 = INT16_MAX;
	static uint8_t x560 = 5U;
	int32_t t133 = -1;

    t133 = (x557>((x558&x559)%x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x561 = UINT16_MAX;
	volatile int16_t x562 = 383;
	int8_t x563 = INT8_MIN;
	static int64_t x564 = -1LL;

    t134 = (x561>((x562&x563)%x564));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint32_t x565 = 11128841U;
	uint64_t x566 = UINT64_MAX;
	static int8_t x568 = INT8_MAX;
	volatile int32_t t135 = 0;

    t135 = (x565>((x566&x567)%x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x569 = 10930;
	int64_t x570 = INT64_MIN;
	int32_t x571 = -1;
	int32_t t136 = -5696161;

    t136 = (x569>((x570&x571)%x572));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x573 = 21452U;
	static volatile int64_t x574 = 1LL;
	int64_t x575 = -63267589303LL;
	int64_t x576 = INT64_MIN;

    t137 = (x573>((x574&x575)%x576));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x577 = 14;
	uint8_t x578 = 29U;
	int64_t x579 = INT64_MIN;
	uint32_t x580 = 165U;

    t138 = (x577>((x578&x579)%x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x581 = -276692412;
	volatile int64_t x582 = INT64_MIN;
	int16_t x583 = INT16_MIN;
	int32_t x584 = -1;
	int32_t t139 = -59231601;

    t139 = (x581>((x582&x583)%x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x585 = 2079;
	static uint16_t x586 = 4U;
	int32_t x587 = 131398;
	static volatile int16_t x588 = -1;
	static volatile int32_t t140 = 1;

    t140 = (x585>((x586&x587)%x588));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x590 = -1;
	int8_t x591 = -25;
	static int64_t x592 = INT64_MIN;
	volatile int32_t t141 = 11;

    t141 = (x589>((x590&x591)%x592));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x593 = INT16_MIN;
	int64_t x594 = -16203947296643LL;
	int16_t x595 = INT16_MAX;
	uint32_t x596 = 23737U;
	int32_t t142 = -246562807;

    t142 = (x593>((x594&x595)%x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x598 = -1;
	volatile uint64_t x600 = 466878575055457922LLU;

    t143 = (x597>((x598&x599)%x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x601 = 1465U;
	uint64_t x602 = 10209152LLU;
	static int8_t x604 = 1;
	static int32_t t144 = 1142217;

    t144 = (x601>((x602&x603)%x604));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x605 = 341320873LLU;
	static uint64_t x607 = 815LLU;
	static volatile int32_t t145 = 5329207;

    t145 = (x605>((x606&x607)%x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x609 = -1;
	volatile int64_t x610 = -3744327LL;
	volatile int64_t x611 = -1LL;
	int64_t x612 = -75392967LL;
	int32_t t146 = -2606;

    t146 = (x609>((x610&x611)%x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x613 = 36U;
	int32_t x614 = -362;
	volatile int8_t x615 = -13;
	uint16_t x616 = 1U;
	static volatile int32_t t147 = 47315535;

    t147 = (x613>((x614&x615)%x616));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = INT8_MIN;
	volatile uint32_t x618 = 8253U;
	static uint8_t x619 = 91U;
	int8_t x620 = INT8_MIN;
	volatile int32_t t148 = -3777;

    t148 = (x617>((x618&x619)%x620));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x621 = UINT8_MAX;
	int8_t x622 = INT8_MIN;
	int32_t x624 = INT32_MIN;

    t149 = (x621>((x622&x623)%x624));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x625 = INT16_MAX;
	int8_t x626 = INT8_MAX;
	int64_t x628 = 5LL;
	int32_t t150 = 634046;

    t150 = (x625>((x626&x627)%x628));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x629 = 45;
	int64_t x630 = INT64_MAX;
	int32_t x632 = INT32_MAX;
	volatile int32_t t151 = -75;

    t151 = (x629>((x630&x631)%x632));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x633 = INT64_MIN;
	int32_t x635 = INT32_MIN;
	volatile int32_t t152 = -1826781;

    t152 = (x633>((x634&x635)%x636));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x637 = INT32_MIN;
	int32_t x638 = -151425955;
	uint8_t x639 = 33U;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t153 = 10;

    t153 = (x637>((x638&x639)%x640));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x641 = -3319245994291LL;
	int64_t x644 = 28120589607907558LL;
	int32_t t154 = -5149699;

    t154 = (x641>((x642&x643)%x644));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x646 = INT16_MIN;
	static int32_t x648 = INT32_MIN;
	volatile int32_t t155 = -233501108;

    t155 = (x645>((x646&x647)%x648));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x650 = -38;
	int8_t x651 = -3;

    t156 = (x649>((x650&x651)%x652));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x653 = 2U;
	static int8_t x654 = 60;
	static int32_t x655 = INT32_MIN;
	int32_t x656 = -1;
	static volatile int32_t t157 = 7635;

    t157 = (x653>((x654&x655)%x656));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x658 = 1;
	volatile int32_t x660 = INT32_MIN;
	static int32_t t158 = 1;

    t158 = (x657>((x658&x659)%x660));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x661 = 1763;
	static volatile uint8_t x662 = 5U;
	int8_t x664 = INT8_MAX;
	volatile int32_t t159 = 11935282;

    t159 = (x661>((x662&x663)%x664));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x667 = -44;
	volatile int8_t x668 = INT8_MAX;
	volatile int32_t t160 = -3;

    t160 = (x665>((x666&x667)%x668));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x669 = -1;
	static int8_t x671 = -1;
	int8_t x672 = 1;

    t161 = (x669>((x670&x671)%x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x675 = INT64_MIN;
	int16_t x676 = INT16_MIN;
	static int32_t t162 = 45726;

    t162 = (x673>((x674&x675)%x676));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x677 = UINT64_MAX;
	uint16_t x678 = UINT16_MAX;
	int64_t x680 = INT64_MIN;
	int32_t t163 = -95412;

    t163 = (x677>((x678&x679)%x680));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x681 = INT32_MIN;
	uint16_t x682 = UINT16_MAX;
	int16_t x684 = INT16_MIN;
	int32_t t164 = 165782;

    t164 = (x681>((x682&x683)%x684));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x685 = 2441792034LL;
	uint8_t x686 = 1U;
	int16_t x687 = -1;
	uint16_t x688 = UINT16_MAX;
	volatile int32_t t165 = 0;

    t165 = (x685>((x686&x687)%x688));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x689 = INT8_MIN;
	int32_t x690 = 7744;
	int64_t x691 = INT64_MAX;
	int64_t x692 = 12106LL;
	int32_t t166 = 92473430;

    t166 = (x689>((x690&x691)%x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x693 = 57917LLU;
	int32_t x694 = INT32_MAX;
	int64_t x695 = INT64_MIN;
	int32_t x696 = INT32_MIN;

    t167 = (x693>((x694&x695)%x696));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x697 = 52998700695909LLU;
	int32_t x699 = -1;
	static int64_t x700 = -44902LL;
	volatile int32_t t168 = -12910868;

    t168 = (x697>((x698&x699)%x700));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x701 = 9U;
	int64_t x702 = INT64_MIN;
	int8_t x703 = -4;
	int32_t t169 = -25;

    t169 = (x701>((x702&x703)%x704));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x705 = 1438620086LL;
	volatile uint16_t x706 = UINT16_MAX;
	static uint32_t x707 = UINT32_MAX;
	int16_t x708 = -546;
	int32_t t170 = -149;

    t170 = (x705>((x706&x707)%x708));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x709 = UINT32_MAX;
	volatile uint64_t x710 = UINT64_MAX;
	uint8_t x711 = 24U;
	int8_t x712 = -1;

    t171 = (x709>((x710&x711)%x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x713 = -2847569607683LL;
	uint16_t x714 = 0U;
	uint64_t x715 = 39996LLU;

    t172 = (x713>((x714&x715)%x716));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x721 = 3U;
	int32_t x723 = INT32_MIN;
	static uint32_t x724 = 3292064U;
	int32_t t173 = -1;

    t173 = (x721>((x722&x723)%x724));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x726 = UINT8_MAX;
	int8_t x727 = INT8_MAX;
	int16_t x728 = 272;

    t174 = (x725>((x726&x727)%x728));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x729 = INT32_MAX;
	uint8_t x731 = 116U;
	int16_t x732 = INT16_MAX;

    t175 = (x729>((x730&x731)%x732));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x733 = INT32_MIN;
	static int64_t x734 = INT64_MIN;
	static uint16_t x736 = 3U;
	int32_t t176 = 21912;

    t176 = (x733>((x734&x735)%x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x737 = -1;
	static uint64_t x738 = 12424074578205405LLU;
	uint32_t x739 = UINT32_MAX;
	volatile int16_t x740 = INT16_MIN;
	int32_t t177 = 50619;

    t177 = (x737>((x738&x739)%x740));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x741 = -1;
	int32_t x742 = INT32_MAX;
	uint8_t x743 = 8U;
	static int64_t x744 = INT64_MAX;
	int32_t t178 = 7;

    t178 = (x741>((x742&x743)%x744));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x745 = -7;
	uint8_t x746 = 49U;
	int16_t x747 = -1;
	int8_t x748 = -1;
	static int32_t t179 = 62265663;

    t179 = (x745>((x746&x747)%x748));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x749 = -1;
	uint32_t x750 = 158955242U;
	int8_t x752 = INT8_MIN;
	static int32_t t180 = -13;

    t180 = (x749>((x750&x751)%x752));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x753 = 32597U;
	static uint16_t x754 = 182U;
	static volatile int64_t x755 = INT64_MIN;
	volatile int32_t t181 = -7641;

    t181 = (x753>((x754&x755)%x756));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x757 = 70646868LL;
	uint8_t x758 = UINT8_MAX;
	uint64_t x760 = UINT64_MAX;
	static volatile int32_t t182 = 172096;

    t182 = (x757>((x758&x759)%x760));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x761 = INT32_MIN;
	int32_t x764 = -1;

    t183 = (x761>((x762&x763)%x764));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	uint64_t x766 = 155LLU;
	static int8_t x767 = 1;
	uint32_t x768 = 4938632U;
	volatile int32_t t184 = -3;

    t184 = (x765>((x766&x767)%x768));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x769 = INT64_MIN;
	static uint64_t x770 = UINT64_MAX;
	int8_t x772 = INT8_MIN;
	volatile int32_t t185 = 486;

    t185 = (x769>((x770&x771)%x772));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x773 = INT16_MIN;
	uint32_t x774 = 1264U;
	volatile int16_t x775 = 1;
	uint8_t x776 = 1U;
	static volatile int32_t t186 = 169302;

    t186 = (x773>((x774&x775)%x776));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x777 = UINT8_MAX;
	int32_t x779 = INT32_MIN;
	uint8_t x780 = 15U;

    t187 = (x777>((x778&x779)%x780));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x781 = -1;
	volatile int8_t x782 = INT8_MIN;
	int8_t x783 = 11;
	int32_t x784 = INT32_MAX;

    t188 = (x781>((x782&x783)%x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x785 = UINT8_MAX;
	int16_t x786 = 3036;
	uint32_t x787 = UINT32_MAX;
	volatile int32_t t189 = 92785203;

    t189 = (x785>((x786&x787)%x788));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x789 = 8160827U;
	int8_t x790 = 0;
	int16_t x791 = -1;
	int64_t x792 = -1LL;
	static int32_t t190 = -12082;

    t190 = (x789>((x790&x791)%x792));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x793 = UINT32_MAX;
	int16_t x794 = -1;
	int64_t x795 = -2798988166405LL;
	int32_t x796 = -694135;
	volatile int32_t t191 = 6075;

    t191 = (x793>((x794&x795)%x796));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x797 = INT64_MAX;
	static uint64_t x798 = UINT64_MAX;
	static int16_t x799 = -1;
	volatile int32_t t192 = -924096;

    t192 = (x797>((x798&x799)%x800));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x803 = INT64_MAX;
	int32_t t193 = 3;

    t193 = (x801>((x802&x803)%x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x806 = -1;
	int32_t t194 = 28;

    t194 = (x805>((x806&x807)%x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x810 = 3580232585014165LLU;
	static int16_t x811 = -15821;
	int64_t x812 = -78879108274290100LL;
	static int32_t t195 = 150777;

    t195 = (x809>((x810&x811)%x812));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x813 = INT32_MAX;
	volatile int32_t x814 = INT32_MIN;
	static volatile int32_t t196 = -436372375;

    t196 = (x813>((x814&x815)%x816));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x818 = 1;
	volatile int64_t x819 = INT64_MAX;
	volatile uint64_t x820 = 395LLU;
	volatile int32_t t197 = 3102;

    t197 = (x817>((x818&x819)%x820));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x821 = 5861;
	int64_t x823 = -118956272989632134LL;
	static volatile uint16_t x824 = 12701U;
	volatile int32_t t198 = 141766926;

    t198 = (x821>((x822&x823)%x824));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x827 = INT64_MIN;
	int32_t x828 = -1;
	volatile int32_t t199 = -144939885;

    t199 = (x825>((x826&x827)%x828));

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

