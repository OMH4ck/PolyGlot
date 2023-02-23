
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

uint32_t x1 = UINT32_MAX;
uint8_t x6 = UINT8_MAX;
volatile uint32_t x9 = 7034709U;
volatile uint8_t x10 = 17U;
volatile int32_t t2 = -1;
static int16_t x16 = INT16_MIN;
static uint32_t x19 = 66063U;
volatile int64_t x24 = INT64_MAX;
static int8_t x25 = INT8_MIN;
uint16_t x26 = 77U;
int8_t x28 = -1;
static int32_t x29 = INT32_MIN;
int8_t x30 = -9;
static int8_t x31 = INT8_MIN;
int8_t x33 = -1;
volatile int32_t t8 = 0;
int32_t x40 = 89;
int32_t t9 = 0;
static uint32_t x41 = UINT32_MAX;
int8_t x46 = INT8_MAX;
uint8_t x47 = 0U;
int64_t x48 = 109028LL;
int32_t x51 = INT32_MIN;
static int32_t x55 = -64399219;
int32_t t14 = -29;
static uint16_t x62 = 0U;
uint16_t x63 = 1U;
int64_t x68 = INT64_MIN;
volatile uint8_t x69 = 111U;
int32_t x75 = INT32_MAX;
int16_t x79 = -1;
uint8_t x86 = UINT8_MAX;
int64_t x88 = INT64_MIN;
volatile int32_t t21 = 2;
int16_t x91 = INT16_MIN;
int64_t x100 = -1939431866LL;
int8_t x105 = INT8_MAX;
int32_t x109 = 170678369;
static volatile int16_t x125 = INT16_MAX;
static int64_t x126 = INT64_MAX;
volatile int32_t t31 = -122641;
int64_t x135 = INT64_MIN;
int32_t x136 = INT32_MAX;
int32_t t33 = 37708701;
int64_t x137 = INT64_MAX;
uint64_t x139 = 107942564215181184LLU;
int32_t t34 = 30;
volatile int32_t t35 = -453260684;
int64_t x145 = INT64_MAX;
volatile uint64_t x147 = 928362LLU;
volatile int32_t t37 = -377;
static volatile int32_t t38 = 55854;
volatile int32_t t40 = 1;
volatile int64_t x166 = 78751290LL;
int8_t x168 = INT8_MIN;
static volatile int64_t x170 = 283610815656495282LL;
uint16_t x172 = UINT16_MAX;
volatile uint8_t x174 = 0U;
static int8_t x176 = -1;
uint32_t x178 = UINT32_MAX;
static uint16_t x180 = UINT16_MAX;
volatile int32_t t44 = -53977;
uint16_t x181 = UINT16_MAX;
volatile int32_t t45 = 65;
int32_t t46 = -15216929;
int64_t x193 = 107914LL;
int16_t x194 = 5;
static volatile uint8_t x195 = UINT8_MAX;
uint32_t x199 = 1934937628U;
int32_t x203 = -134113135;
static uint8_t x207 = UINT8_MAX;
volatile int64_t x210 = INT64_MIN;
volatile int32_t t52 = 460818038;
int64_t x226 = INT64_MIN;
int32_t x232 = -106;
int32_t t58 = 1;
int32_t t59 = 52;
static int32_t t61 = 8497334;
int32_t x252 = INT32_MAX;
static int16_t x256 = -1;
static int16_t x260 = INT16_MIN;
volatile int64_t x262 = INT64_MAX;
int32_t x266 = -1;
int8_t x275 = -24;
uint64_t x292 = UINT64_MAX;
volatile int32_t t72 = -75;
static volatile int64_t x306 = -1LL;
int64_t x310 = INT64_MIN;
static int64_t x311 = -1LL;
static int32_t x315 = 9936974;
int16_t x318 = INT16_MAX;
volatile uint16_t x326 = 1532U;
int16_t x327 = 2836;
int32_t t81 = -631;
int16_t x332 = INT16_MAX;
uint64_t x334 = 941390394940815LLU;
volatile int16_t x336 = INT16_MIN;
int8_t x337 = INT8_MIN;
int8_t x343 = -1;
int32_t x345 = INT32_MIN;
uint64_t x351 = UINT64_MAX;
static int64_t x362 = -1LL;
int8_t x363 = INT8_MAX;
static int64_t x365 = -1LL;
int64_t x366 = INT64_MAX;
volatile int16_t x369 = 6;
volatile int8_t x370 = INT8_MAX;
int8_t x373 = -1;
uint64_t x376 = 278456129LLU;
volatile int32_t x377 = 135752200;
static volatile int16_t x379 = -1424;
int32_t t95 = 1983;
int32_t t96 = 2831716;
int8_t x392 = -1;
int64_t x397 = INT64_MIN;
int8_t x398 = INT8_MAX;
uint64_t x404 = UINT64_MAX;
int32_t t100 = 7;
int64_t x408 = INT64_MIN;
static int32_t x409 = 86318;
static uint32_t x410 = 19U;
static int32_t x411 = INT32_MAX;
static int32_t x412 = 0;
int16_t x415 = 457;
volatile int64_t x422 = INT64_MIN;
volatile int32_t t105 = 51;
static int32_t x426 = -47987871;
int32_t x427 = INT32_MAX;
static uint64_t x439 = UINT64_MAX;
int8_t x446 = -1;
uint16_t x455 = 13145U;
int32_t x456 = INT32_MIN;
volatile int16_t x458 = -11824;
static volatile int32_t t115 = -13;
int32_t x473 = 21316;
uint16_t x475 = 226U;
int8_t x478 = -6;
volatile int32_t t120 = 5790;
int32_t t121 = -261;
static int32_t t122 = 14;
volatile int64_t x494 = INT64_MIN;
int32_t t123 = 31;
static uint32_t x498 = UINT32_MAX;
uint16_t x503 = 0U;
int32_t t126 = 1553;
uint64_t x509 = UINT64_MAX;
int32_t x511 = -1;
int16_t x520 = -1;
int64_t x523 = -2635165248129495LL;
static int16_t x524 = INT16_MIN;
int32_t t131 = 15607448;
int16_t x530 = INT16_MIN;
int16_t x531 = -1;
static volatile uint16_t x535 = UINT16_MAX;
uint8_t x539 = UINT8_MAX;
int8_t x550 = -43;
volatile int32_t t137 = 1;
int16_t x557 = -1;
int16_t x560 = INT16_MIN;
int64_t x566 = INT64_MIN;
volatile int32_t t141 = -1;
static volatile int32_t t142 = 428395;
int8_t x573 = 28;
int8_t x574 = INT8_MIN;
volatile int32_t t143 = 8087;
static uint16_t x581 = UINT16_MAX;
uint64_t x605 = UINT64_MAX;
int64_t x608 = INT64_MAX;
int64_t x613 = INT64_MAX;
volatile uint8_t x618 = 18U;
int64_t x620 = INT64_MAX;
int8_t x629 = 12;
static int64_t x635 = -1LL;
uint16_t x636 = 5746U;
uint16_t x637 = 11867U;
int8_t x638 = INT8_MAX;
static int64_t x643 = INT64_MAX;
int64_t x652 = -1LL;
static uint16_t x656 = 5074U;
volatile int16_t x661 = INT16_MIN;
int32_t t165 = -30248828;
int32_t t168 = -824052;
static int32_t t169 = 1773217;
volatile int32_t t170 = 57018;
volatile uint64_t x691 = 24LLU;
uint16_t x692 = UINT16_MAX;
volatile int64_t x696 = INT64_MIN;
static volatile int32_t t174 = 66;
int32_t t175 = -40;
uint32_t x715 = UINT32_MAX;
int16_t x716 = INT16_MIN;
static volatile int32_t t178 = -1;
static volatile int64_t x717 = 119009820828587LL;
int16_t x718 = -1;
int64_t x724 = INT64_MIN;
volatile uint64_t x731 = UINT64_MAX;
volatile int32_t x734 = INT32_MAX;
int64_t x737 = -245059435LL;
static int32_t x738 = -1;
int32_t t185 = 870166574;
volatile int64_t x751 = INT64_MIN;
int32_t x754 = INT32_MIN;
int16_t x755 = 0;
static int8_t x757 = INT8_MAX;
int32_t t189 = 418;
static uint32_t x762 = 3786784U;
uint32_t x764 = 83303U;
int32_t x765 = INT32_MAX;
int32_t t191 = -585;
volatile int16_t x769 = -73;
static int16_t x773 = -1;
int32_t t193 = 25;
int32_t t194 = -1482576;
static int64_t x784 = INT64_MAX;
volatile uint32_t x787 = 333701U;
volatile uint64_t x788 = UINT64_MAX;
volatile int8_t x790 = -1;
static int8_t x794 = 0;


void f0(void) {
    	uint32_t x2 = 5459481U;
	static volatile int16_t x3 = INT16_MAX;
	volatile int64_t x4 = -445756967023491LL;
	volatile int32_t t0 = 394380;

    t0 = (x1!=((x2<=x3)<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint32_t x7 = 1028333U;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -29524683;

    t1 = (x5!=((x6<=x7)<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x11 = 53U;
	int16_t x12 = -78;

    t2 = (x9!=((x10<=x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 1814;
	int16_t x14 = INT16_MAX;
	int64_t x15 = -1LL;
	static int32_t t3 = -5;

    t3 = (x13!=((x14<=x15)<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = UINT64_MAX;
	static int64_t x18 = INT64_MIN;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = -59409185;

    t4 = (x17!=((x18<=x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 5986U;
	volatile int8_t x22 = -9;
	uint8_t x23 = UINT8_MAX;
	volatile int32_t t5 = 4;

    t5 = (x21!=((x22<=x23)<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x27 = -1;
	int32_t t6 = -321490956;

    t6 = (x25!=((x26<=x27)<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x32 = 2;
	volatile int32_t t7 = -5571193;

    t7 = (x29!=((x30<=x31)<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x34 = INT16_MAX;
	int64_t x35 = INT64_MIN;
	uint8_t x36 = 29U;

    t8 = (x33!=((x34<=x35)<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = 950900437115LL;
	static uint8_t x38 = 6U;
	volatile uint8_t x39 = UINT8_MAX;

    t9 = (x37!=((x38<=x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x42 = -7LL;
	volatile uint64_t x43 = 4997538371LLU;
	volatile int32_t x44 = -119668;
	volatile int32_t t10 = 44464476;

    t10 = (x41!=((x42<=x43)<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = UINT64_MAX;
	int32_t t11 = 1055594918;

    t11 = (x45!=((x46<=x47)<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 0U;
	int16_t x50 = INT16_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -40337439;

    t12 = (x49!=((x50<=x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x54 = 8507806995LL;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 63;

    t13 = (x53!=((x54<=x55)<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint8_t x58 = 7U;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = INT32_MIN;

    t14 = (x57!=((x58<=x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -239;

    t15 = (x61!=((x62<=x63)<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 11U;
	int32_t x66 = 115511233;
	int32_t x67 = INT32_MIN;
	int32_t t16 = 121;

    t16 = (x65!=((x66<=x67)<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x70 = 109501669LLU;
	static int64_t x71 = -919397461521LL;
	int32_t x72 = -1;
	int32_t t17 = -99014508;

    t17 = (x69!=((x70<=x71)<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MIN;
	static int8_t x76 = INT8_MIN;
	static int32_t t18 = 5;

    t18 = (x73!=((x74<=x75)<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MIN;
	int64_t x78 = -1LL;
	volatile int16_t x80 = -179;
	int32_t t19 = 32801587;

    t19 = (x77!=((x78<=x79)<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = INT16_MIN;
	uint32_t x82 = 570484952U;
	uint64_t x83 = 494296LLU;
	int8_t x84 = 4;
	int32_t t20 = -389;

    t20 = (x81!=((x82<=x83)<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 21934867LLU;
	static int32_t x87 = 1330;

    t21 = (x85!=((x86<=x87)<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -1;
	int8_t x90 = INT8_MIN;
	int16_t x92 = -2;
	volatile int32_t t22 = 615;

    t22 = (x89!=((x90<=x91)<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x93 = -25;
	int32_t x94 = -1;
	static int32_t x95 = -16358056;
	int64_t x96 = INT64_MIN;
	int32_t t23 = -4;

    t23 = (x93!=((x94<=x95)<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = INT32_MIN;
	static int16_t x98 = 248;
	int64_t x99 = INT64_MIN;
	int32_t t24 = 32042;

    t24 = (x97!=((x98<=x99)<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	int64_t x102 = -81155654154848570LL;
	static volatile int64_t x103 = 2LL;
	int64_t x104 = INT64_MIN;
	int32_t t25 = -240559043;

    t25 = (x101!=((x102<=x103)<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x106 = INT8_MIN;
	int16_t x107 = -11;
	static int32_t x108 = INT32_MIN;
	int32_t t26 = 1552682;

    t26 = (x105!=((x106<=x107)<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = -73;
	uint8_t x111 = UINT8_MAX;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = 0;

    t27 = (x109!=((x110<=x111)<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 1;
	static int16_t x114 = 2409;
	int64_t x115 = INT64_MIN;
	static uint8_t x116 = 56U;
	volatile int32_t t28 = 1;

    t28 = (x113!=((x114<=x115)<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	volatile int16_t x118 = 2;
	uint16_t x119 = 1835U;
	int8_t x120 = INT8_MIN;
	static int32_t t29 = 2764239;

    t29 = (x117!=((x118<=x119)<=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	int64_t x122 = 29889003819000302LL;
	int8_t x123 = 0;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = 150011;

    t30 = (x121!=((x122<=x123)<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x127 = INT16_MIN;
	uint16_t x128 = 764U;

    t31 = (x125!=((x126<=x127)<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 11148;
	static volatile int8_t x130 = INT8_MAX;
	int32_t x131 = INT32_MIN;
	uint8_t x132 = 123U;
	static volatile int32_t t32 = -1;

    t32 = (x129!=((x130<=x131)<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 59780131U;
	uint16_t x134 = UINT16_MAX;

    t33 = (x133!=((x134<=x135)<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MAX;
	static volatile int64_t x140 = -2LL;

    t34 = (x137!=((x138<=x139)<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	volatile int16_t x143 = INT16_MIN;
	int8_t x144 = -1;

    t35 = (x141!=((x142<=x143)<=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x146 = -25;
	static volatile int16_t x148 = INT16_MAX;
	int32_t t36 = 1;

    t36 = (x145!=((x146<=x147)<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = 2U;
	static int64_t x152 = -33483906LL;

    t37 = (x149!=((x150<=x151)<=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 115U;
	int32_t x154 = -824;
	volatile int64_t x155 = INT64_MAX;
	static volatile int8_t x156 = INT8_MIN;

    t38 = (x153!=((x154<=x155)<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	uint8_t x158 = 3U;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = INT32_MIN;
	int32_t t39 = -13390509;

    t39 = (x157!=((x158<=x159)<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	static int8_t x162 = INT8_MIN;
	static uint8_t x163 = 70U;
	volatile uint16_t x164 = UINT16_MAX;

    t40 = (x161!=((x162<=x163)<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 21842347855LLU;
	int32_t x167 = 705112367;
	static int32_t t41 = -37;

    t41 = (x165!=((x166<=x167)<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = INT8_MIN;
	uint32_t x171 = UINT32_MAX;
	volatile int32_t t42 = -770532205;

    t42 = (x169!=((x170<=x171)<=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = 0LL;
	static volatile int16_t x175 = -3;
	int32_t t43 = 1370;

    t43 = (x173!=((x174<=x175)<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	int64_t x179 = 134150391LL;

    t44 = (x177!=((x178<=x179)<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x182 = 7510U;
	int32_t x183 = -1;
	uint8_t x184 = 1U;

    t45 = (x181!=((x182<=x183)<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -4;
	uint8_t x186 = 2U;
	int16_t x187 = INT16_MAX;
	int32_t x188 = -763600;

    t46 = (x185!=((x186<=x187)<=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 5U;
	volatile int16_t x190 = 184;
	uint32_t x191 = 559067531U;
	int64_t x192 = INT64_MIN;
	static int32_t t47 = -1;

    t47 = (x189!=((x190<=x191)<=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x196 = INT64_MIN;
	int32_t t48 = 1;

    t48 = (x193!=((x194<=x195)<=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x197 = 1820600759593022447LLU;
	static int16_t x198 = INT16_MIN;
	uint64_t x200 = 861876347669LLU;
	int32_t t49 = -48917431;

    t49 = (x197!=((x198<=x199)<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = -1;
	int8_t x202 = -1;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 479;

    t50 = (x201!=((x202<=x203)<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -5;
	int32_t x206 = INT32_MIN;
	static uint64_t x208 = 334491903LLU;
	int32_t t51 = 54054512;

    t51 = (x205!=((x206<=x207)<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x209 = 1U;
	int16_t x211 = -1;
	int8_t x212 = INT8_MAX;

    t52 = (x209!=((x210<=x211)<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	static int32_t x214 = -1;
	int32_t x215 = -1;
	volatile uint64_t x216 = 86411924LLU;
	int32_t t53 = -1;

    t53 = (x213!=((x214<=x215)<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	static int16_t x218 = INT16_MIN;
	static int8_t x219 = -7;
	uint64_t x220 = UINT64_MAX;
	static volatile int32_t t54 = 10480;

    t54 = (x217!=((x218<=x219)<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = -86;
	static volatile int64_t x222 = INT64_MIN;
	volatile uint32_t x223 = 29U;
	int8_t x224 = INT8_MIN;
	int32_t t55 = -106005;

    t55 = (x221!=((x222<=x223)<=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MAX;
	static int32_t x227 = 24;
	static int8_t x228 = INT8_MAX;
	volatile int32_t t56 = -134;

    t56 = (x225!=((x226<=x227)<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	uint32_t x230 = 50U;
	static int8_t x231 = 1;
	volatile int32_t t57 = -248461509;

    t57 = (x229!=((x230<=x231)<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = 28;
	int8_t x234 = INT8_MIN;
	static int32_t x235 = -219;
	volatile int64_t x236 = -239712321304773LL;

    t58 = (x233!=((x234<=x235)<=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	int64_t x238 = INT64_MAX;
	uint8_t x239 = 40U;
	static volatile int32_t x240 = 194377410;

    t59 = (x237!=((x238<=x239)<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x241 = INT8_MIN;
	uint16_t x242 = 726U;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = -391930261;

    t60 = (x241!=((x242<=x243)<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	int32_t x246 = 103;
	volatile int32_t x247 = INT32_MAX;
	volatile int32_t x248 = INT32_MIN;

    t61 = (x245!=((x246<=x247)<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = 92LL;
	int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MAX;
	int32_t t62 = -2;

    t62 = (x249!=((x250<=x251)<=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MAX;
	uint16_t x254 = 3U;
	int16_t x255 = -1;
	volatile int32_t t63 = 0;

    t63 = (x253!=((x254<=x255)<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	int16_t x258 = -3231;
	volatile uint64_t x259 = 19707990LLU;
	volatile int32_t t64 = 1033842;

    t64 = (x257!=((x258<=x259)<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1296;
	static int8_t x263 = INT8_MAX;
	volatile int32_t x264 = -1;
	volatile int32_t t65 = 1;

    t65 = (x261!=((x262<=x263)<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 172U;
	int64_t x267 = INT64_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t66 = 0;

    t66 = (x265!=((x266<=x267)<=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 2U;
	static int64_t x270 = INT64_MIN;
	int16_t x271 = 37;
	static int64_t x272 = -1LL;
	int32_t t67 = -54292;

    t67 = (x269!=((x270<=x271)<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -367215774LL;
	int16_t x274 = INT16_MAX;
	static volatile int32_t x276 = INT32_MIN;
	int32_t t68 = 16518641;

    t68 = (x273!=((x274<=x275)<=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = 0;
	int64_t x278 = -99766133000243LL;
	volatile int16_t x279 = -1;
	volatile uint8_t x280 = 9U;
	volatile int32_t t69 = -26;

    t69 = (x277!=((x278<=x279)<=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	int64_t x282 = INT64_MIN;
	uint64_t x283 = 66112214871601LLU;
	static uint32_t x284 = 16507585U;
	int32_t t70 = -48;

    t70 = (x281!=((x282<=x283)<=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x285 = 47U;
	static uint16_t x286 = 13870U;
	int64_t x287 = -121774694LL;
	int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 22;

    t71 = (x285!=((x286<=x287)<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MAX;
	int64_t x291 = INT64_MIN;

    t72 = (x289!=((x290<=x291)<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x293 = 28;
	int32_t x294 = -1;
	uint8_t x295 = 24U;
	int64_t x296 = INT64_MAX;
	volatile int32_t t73 = 3841;

    t73 = (x293!=((x294<=x295)<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -1;
	int32_t x298 = INT32_MAX;
	int16_t x299 = INT16_MIN;
	static volatile int16_t x300 = -1;
	int32_t t74 = 6;

    t74 = (x297!=((x298<=x299)<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = INT8_MIN;
	int16_t x302 = -7;
	uint8_t x303 = 0U;
	int8_t x304 = INT8_MAX;
	static int32_t t75 = -108085192;

    t75 = (x301!=((x302<=x303)<=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = 23;
	int64_t x307 = 2145770391127LL;
	volatile int64_t x308 = INT64_MIN;
	volatile int32_t t76 = 919784073;

    t76 = (x305!=((x306<=x307)<=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	static volatile int8_t x312 = INT8_MAX;
	volatile int32_t t77 = -6333;

    t77 = (x309!=((x310<=x311)<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x313 = INT64_MIN;
	int32_t x314 = -233597536;
	int8_t x316 = -1;
	int32_t t78 = -18237944;

    t78 = (x313!=((x314<=x315)<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = INT8_MIN;
	uint32_t x319 = 0U;
	static int32_t x320 = -1;
	volatile int32_t t79 = -8571379;

    t79 = (x317!=((x318<=x319)<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	volatile uint32_t x322 = 195500U;
	int32_t x323 = INT32_MIN;
	int32_t x324 = -99188351;
	static volatile int32_t t80 = -366;

    t80 = (x321!=((x322<=x323)<=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x325 = -165398626LL;
	volatile int8_t x328 = INT8_MIN;

    t81 = (x325!=((x326<=x327)<=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MAX;
	int8_t x330 = -1;
	volatile uint16_t x331 = UINT16_MAX;
	int32_t t82 = 730718703;

    t82 = (x329!=((x330<=x331)<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	int8_t x335 = 31;
	static int32_t t83 = -3;

    t83 = (x333!=((x334<=x335)<=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	int32_t x340 = 611;
	volatile int32_t t84 = -70682;

    t84 = (x337!=((x338<=x339)<=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = -1;
	static uint8_t x342 = 14U;
	int16_t x344 = INT16_MIN;
	int32_t t85 = 0;

    t85 = (x341!=((x342<=x343)<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x346 = INT8_MAX;
	int64_t x347 = INT64_MIN;
	uint16_t x348 = 145U;
	int32_t t86 = -112261613;

    t86 = (x345!=((x346<=x347)<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	uint32_t x350 = 103480661U;
	uint8_t x352 = UINT8_MAX;
	static int32_t t87 = -241;

    t87 = (x349!=((x350<=x351)<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = INT32_MAX;
	int64_t x354 = INT64_MIN;
	static volatile int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = -21;

    t88 = (x353!=((x354<=x355)<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	uint16_t x359 = UINT16_MAX;
	int64_t x360 = -3LL;
	volatile int32_t t89 = -3;

    t89 = (x357!=((x358<=x359)<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	int32_t x364 = -1;
	int32_t t90 = 1;

    t90 = (x361!=((x362<=x363)<=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x367 = INT32_MAX;
	static uint16_t x368 = 11U;
	static int32_t t91 = -1;

    t91 = (x365!=((x366<=x367)<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x371 = INT16_MAX;
	uint64_t x372 = 366712753771LLU;
	volatile int32_t t92 = 126720683;

    t92 = (x369!=((x370<=x371)<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x374 = 65U;
	int32_t x375 = 5;
	volatile int32_t t93 = 164983;

    t93 = (x373!=((x374<=x375)<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x378 = UINT64_MAX;
	uint64_t x380 = UINT64_MAX;
	int32_t t94 = 0;

    t94 = (x377!=((x378<=x379)<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = 389;
	int8_t x382 = INT8_MIN;
	volatile int64_t x383 = INT64_MIN;
	volatile uint64_t x384 = 106LLU;

    t95 = (x381!=((x382<=x383)<=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MIN;
	static uint8_t x386 = 0U;
	int8_t x387 = -31;
	int8_t x388 = INT8_MIN;

    t96 = (x385!=((x386<=x387)<=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = -203;
	uint64_t x390 = 963010630346LLU;
	volatile int16_t x391 = INT16_MIN;
	static int32_t t97 = -22023;

    t97 = (x389!=((x390<=x391)<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x393 = INT32_MIN;
	uint32_t x394 = 161397U;
	volatile uint8_t x395 = 111U;
	static volatile int64_t x396 = INT64_MIN;
	static volatile int32_t t98 = -2995;

    t98 = (x393!=((x394<=x395)<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x399 = -1;
	volatile uint32_t x400 = 16484U;
	volatile int32_t t99 = -499;

    t99 = (x397!=((x398<=x399)<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MAX;
	volatile int8_t x402 = INT8_MAX;
	int16_t x403 = 11907;

    t100 = (x401!=((x402<=x403)<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	static int16_t x406 = 2;
	uint64_t x407 = 33525113849997LLU;
	volatile int32_t t101 = 255125;

    t101 = (x405!=((x406<=x407)<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t t102 = -27;

    t102 = (x409!=((x410<=x411)<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x413 = 31U;
	static volatile int16_t x414 = -1;
	static volatile int16_t x416 = -465;
	int32_t t103 = 4515521;

    t103 = (x413!=((x414<=x415)<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = -1LL;
	int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	volatile uint32_t x420 = 55872U;
	int32_t t104 = 25511514;

    t104 = (x417!=((x418<=x419)<=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x421 = 0U;
	int64_t x423 = -810517453327685614LL;
	static int32_t x424 = -1421548;

    t105 = (x421!=((x422<=x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = UINT16_MAX;
	int32_t x428 = INT32_MAX;
	volatile int32_t t106 = -12383;

    t106 = (x425!=((x426<=x427)<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	int32_t x430 = -1;
	uint16_t x431 = 9308U;
	int64_t x432 = -1LL;
	int32_t t107 = 389;

    t107 = (x429!=((x430<=x431)<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x433 = INT8_MIN;
	int32_t x434 = -1;
	static int16_t x435 = INT16_MIN;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t108 = 27349;

    t108 = (x433!=((x434<=x435)<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 1U;
	uint64_t x438 = UINT64_MAX;
	static int16_t x440 = INT16_MIN;
	int32_t t109 = -15588;

    t109 = (x437!=((x438<=x439)<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x441 = 17361411U;
	uint32_t x442 = UINT32_MAX;
	static int64_t x443 = 32532889529LL;
	int32_t x444 = INT32_MIN;
	volatile int32_t t110 = 2941;

    t110 = (x441!=((x442<=x443)<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 5510054313LL;
	volatile int32_t x447 = 1;
	uint64_t x448 = UINT64_MAX;
	int32_t t111 = 21005262;

    t111 = (x445!=((x446<=x447)<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	int16_t x450 = -1;
	int32_t x451 = INT32_MAX;
	uint8_t x452 = 2U;
	volatile int32_t t112 = -1707;

    t112 = (x449!=((x450<=x451)<=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x453 = 0U;
	int8_t x454 = INT8_MIN;
	static volatile int32_t t113 = -630644;

    t113 = (x453!=((x454<=x455)<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	uint64_t x459 = 6714LLU;
	uint8_t x460 = 10U;
	static int32_t t114 = -2;

    t114 = (x457!=((x458<=x459)<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -250344967946LL;
	int64_t x462 = 4002467055090LL;
	static int64_t x463 = INT64_MAX;
	volatile int64_t x464 = 267528107494LL;

    t115 = (x461!=((x462<=x463)<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 1;
	uint32_t x466 = 4226312U;
	uint32_t x467 = UINT32_MAX;
	static int32_t x468 = INT32_MIN;
	int32_t t116 = 730329;

    t116 = (x465!=((x466<=x467)<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 15909112982142LL;
	volatile int8_t x470 = 1;
	uint16_t x471 = 416U;
	int64_t x472 = 71287150534938476LL;
	int32_t t117 = -141;

    t117 = (x469!=((x470<=x471)<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x474 = UINT8_MAX;
	int32_t x476 = -1;
	int32_t t118 = -6;

    t118 = (x473!=((x474<=x475)<=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	int16_t x479 = INT16_MIN;
	uint8_t x480 = 123U;
	volatile int32_t t119 = -941;

    t119 = (x477!=((x478<=x479)<=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = -1LL;
	int64_t x482 = INT64_MAX;
	int8_t x483 = -1;
	volatile int32_t x484 = -1;

    t120 = (x481!=((x482<=x483)<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x485 = UINT32_MAX;
	uint8_t x486 = UINT8_MAX;
	int64_t x487 = -1LL;
	int64_t x488 = 3LL;

    t121 = (x485!=((x486<=x487)<=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -129;
	uint16_t x490 = 205U;
	int8_t x491 = -1;
	int64_t x492 = INT64_MAX;

    t122 = (x489!=((x490<=x491)<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	int16_t x495 = -451;
	volatile int16_t x496 = 4;

    t123 = (x493!=((x494<=x495)<=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x497 = 1;
	uint8_t x499 = 81U;
	static uint8_t x500 = 30U;
	static int32_t t124 = -151978;

    t124 = (x497!=((x498<=x499)<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = 211;
	uint32_t x502 = UINT32_MAX;
	static uint16_t x504 = UINT16_MAX;
	volatile int32_t t125 = 1;

    t125 = (x501!=((x502<=x503)<=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 118LLU;
	int64_t x506 = -86884165LL;
	uint32_t x507 = 13709452U;
	static int16_t x508 = INT16_MAX;

    t126 = (x505!=((x506<=x507)<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x510 = UINT64_MAX;
	int64_t x512 = 51748LL;
	int32_t t127 = -736;

    t127 = (x509!=((x510<=x511)<=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 248491697U;
	uint16_t x514 = UINT16_MAX;
	int16_t x515 = 119;
	static int64_t x516 = INT64_MIN;
	volatile int32_t t128 = 60;

    t128 = (x513!=((x514<=x515)<=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x517 = INT32_MAX;
	volatile int8_t x518 = 6;
	int8_t x519 = 1;
	int32_t t129 = -836006;

    t129 = (x517!=((x518<=x519)<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -6571;
	static uint16_t x522 = 13U;
	volatile int32_t t130 = 2;

    t130 = (x521!=((x522<=x523)<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x525 = 225U;
	static int64_t x526 = INT64_MAX;
	uint32_t x527 = 31U;
	int32_t x528 = 1901575;

    t131 = (x525!=((x526<=x527)<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -7631;
	static volatile int64_t x532 = INT64_MAX;
	int32_t t132 = 1162;

    t132 = (x529!=((x530<=x531)<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint16_t x533 = 14U;
	static uint64_t x534 = UINT64_MAX;
	static uint16_t x536 = 167U;
	volatile int32_t t133 = 2049057;

    t133 = (x533!=((x534<=x535)<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = UINT16_MAX;
	volatile uint32_t x538 = 40767401U;
	int64_t x540 = 3221LL;
	static int32_t t134 = -797;

    t134 = (x537!=((x538<=x539)<=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x541 = 1;
	volatile uint16_t x542 = 17529U;
	volatile int8_t x543 = INT8_MIN;
	int64_t x544 = -16286790547366026LL;
	volatile int32_t t135 = 26719438;

    t135 = (x541!=((x542<=x543)<=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 2897;
	int8_t x546 = 0;
	static uint32_t x547 = 203594233U;
	uint8_t x548 = UINT8_MAX;
	int32_t t136 = 298;

    t136 = (x545!=((x546<=x547)<=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	uint8_t x551 = UINT8_MAX;
	volatile int8_t x552 = -1;

    t137 = (x549!=((x550<=x551)<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = -7;
	volatile uint64_t x554 = 443674910144156121LLU;
	volatile int32_t x555 = 198839;
	static int8_t x556 = INT8_MIN;
	int32_t t138 = 0;

    t138 = (x553!=((x554<=x555)<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x558 = INT64_MIN;
	volatile int32_t x559 = -20383;
	int32_t t139 = 178;

    t139 = (x557!=((x558<=x559)<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = 0LL;
	static uint8_t x562 = UINT8_MAX;
	int8_t x563 = -1;
	int8_t x564 = INT8_MIN;
	volatile int32_t t140 = 41263129;

    t140 = (x561!=((x562<=x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MIN;
	int32_t x567 = -1;
	int16_t x568 = -1;

    t141 = (x565!=((x566<=x567)<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint32_t x569 = 11918U;
	uint64_t x570 = 100465791829953411LLU;
	volatile uint64_t x571 = UINT64_MAX;
	int64_t x572 = INT64_MIN;

    t142 = (x569!=((x570<=x571)<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x575 = UINT64_MAX;
	int64_t x576 = 2LL;

    t143 = (x573!=((x574<=x575)<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x577 = INT8_MIN;
	volatile int32_t x578 = -5159536;
	uint32_t x579 = 110U;
	int64_t x580 = 8895929239589059LL;
	int32_t t144 = -13244;

    t144 = (x577!=((x578<=x579)<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x582 = INT64_MIN;
	int16_t x583 = INT16_MAX;
	int64_t x584 = INT64_MIN;
	volatile int32_t t145 = -373928;

    t145 = (x581!=((x582<=x583)<=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 61LLU;
	uint16_t x586 = 5U;
	volatile int8_t x587 = 3;
	int32_t x588 = INT32_MIN;
	int32_t t146 = 8264107;

    t146 = (x585!=((x586<=x587)<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = 833116602LL;
	int8_t x590 = 35;
	int8_t x591 = INT8_MIN;
	int32_t x592 = INT32_MIN;
	int32_t t147 = 25058;

    t147 = (x589!=((x590<=x591)<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	static int32_t x594 = INT32_MIN;
	int8_t x595 = INT8_MAX;
	int32_t x596 = -1;
	volatile int32_t t148 = 1014;

    t148 = (x593!=((x594<=x595)<=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 402;
	int32_t x598 = INT32_MAX;
	volatile int64_t x599 = 73132588LL;
	static int64_t x600 = -7242628010411LL;
	int32_t t149 = 1754;

    t149 = (x597!=((x598<=x599)<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 51U;
	static int32_t x602 = INT32_MAX;
	int64_t x603 = -1LL;
	static int64_t x604 = -1LL;
	static int32_t t150 = 69464471;

    t150 = (x601!=((x602<=x603)<=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x606 = 433366998296559819LLU;
	int8_t x607 = -1;
	int32_t t151 = -6;

    t151 = (x605!=((x606<=x607)<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = INT16_MAX;
	int64_t x610 = -119550370251LL;
	static int16_t x611 = 3708;
	int16_t x612 = INT16_MIN;
	int32_t t152 = -845854;

    t152 = (x609!=((x610<=x611)<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x614 = UINT16_MAX;
	volatile int16_t x615 = -2;
	int16_t x616 = 1;
	volatile int32_t t153 = 1;

    t153 = (x613!=((x614<=x615)<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	uint8_t x619 = UINT8_MAX;
	volatile int32_t t154 = 3798;

    t154 = (x617!=((x618<=x619)<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	uint32_t x622 = 2U;
	int64_t x623 = INT64_MIN;
	int16_t x624 = INT16_MIN;
	static int32_t t155 = 5845389;

    t155 = (x621!=((x622<=x623)<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1936902196957687LL;
	int32_t x626 = INT32_MAX;
	uint32_t x627 = 234U;
	int8_t x628 = 1;
	int32_t t156 = 20529132;

    t156 = (x625!=((x626<=x627)<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x630 = 964U;
	volatile int16_t x631 = -1;
	volatile int32_t x632 = -1;
	volatile int32_t t157 = 460;

    t157 = (x629!=((x630<=x631)<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = INT64_MAX;
	static uint16_t x634 = 10U;
	int32_t t158 = -169613;

    t158 = (x633!=((x634<=x635)<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x639 = INT16_MAX;
	int16_t x640 = INT16_MIN;
	int32_t t159 = 36305;

    t159 = (x637!=((x638<=x639)<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	int16_t x642 = INT16_MIN;
	int32_t x644 = -1;
	volatile int32_t t160 = -12789107;

    t160 = (x641!=((x642<=x643)<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -901615;
	uint16_t x646 = UINT16_MAX;
	static volatile int16_t x647 = INT16_MAX;
	int16_t x648 = 1181;
	static volatile int32_t t161 = -55275;

    t161 = (x645!=((x646<=x647)<=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	static int64_t x650 = -1LL;
	int64_t x651 = INT64_MIN;
	volatile int32_t t162 = -29;

    t162 = (x649!=((x650<=x651)<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = INT32_MIN;
	uint8_t x654 = 13U;
	volatile int64_t x655 = -1LL;
	int32_t t163 = 0;

    t163 = (x653!=((x654<=x655)<=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	static int16_t x658 = -15435;
	static int8_t x659 = -1;
	int8_t x660 = INT8_MIN;
	volatile int32_t t164 = -119912;

    t164 = (x657!=((x658<=x659)<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = -18;
	uint16_t x663 = 53U;
	int16_t x664 = -1;

    t165 = (x661!=((x662<=x663)<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = UINT64_MAX;
	uint64_t x666 = 4400706892282516001LLU;
	static uint32_t x667 = UINT32_MAX;
	uint64_t x668 = 59684575LLU;
	static int32_t t166 = -212584195;

    t166 = (x665!=((x666<=x667)<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 14631698U;
	int32_t x670 = INT32_MIN;
	static int16_t x671 = -1;
	static uint8_t x672 = 9U;
	static int32_t t167 = 145;

    t167 = (x669!=((x670<=x671)<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 2U;
	volatile uint8_t x674 = 0U;
	static uint64_t x675 = 235LLU;
	uint16_t x676 = UINT16_MAX;

    t168 = (x673!=((x674<=x675)<=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	static int8_t x678 = INT8_MAX;
	int32_t x679 = -1;
	static int32_t x680 = -18834;

    t169 = (x677!=((x678<=x679)<=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MAX;
	volatile int8_t x682 = INT8_MAX;
	int16_t x683 = INT16_MAX;
	uint64_t x684 = UINT64_MAX;

    t170 = (x681!=((x682<=x683)<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x685 = INT8_MAX;
	int32_t x686 = INT32_MIN;
	uint8_t x687 = 96U;
	uint64_t x688 = 565821374LLU;
	volatile int32_t t171 = 0;

    t171 = (x685!=((x686<=x687)<=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 18459894842879372LLU;
	int8_t x690 = INT8_MIN;
	static int32_t t172 = -326;

    t172 = (x689!=((x690<=x691)<=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	uint16_t x694 = UINT16_MAX;
	int16_t x695 = INT16_MIN;
	volatile int32_t t173 = 0;

    t173 = (x693!=((x694<=x695)<=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 111U;
	volatile int32_t x698 = INT32_MIN;
	volatile uint64_t x699 = UINT64_MAX;
	int32_t x700 = INT32_MIN;

    t174 = (x697!=((x698<=x699)<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = INT8_MAX;
	int8_t x702 = -1;
	volatile int64_t x703 = INT64_MIN;
	int64_t x704 = INT64_MIN;

    t175 = (x701!=((x702<=x703)<=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 34717776345298LLU;
	int32_t x706 = INT32_MAX;
	uint8_t x707 = UINT8_MAX;
	int8_t x708 = INT8_MAX;
	volatile int32_t t176 = 0;

    t176 = (x705!=((x706<=x707)<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = 0;
	static int16_t x710 = 808;
	volatile int16_t x711 = 4933;
	int32_t x712 = INT32_MIN;
	volatile int32_t t177 = 2079293;

    t177 = (x709!=((x710<=x711)<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	int16_t x714 = 1;

    t178 = (x713!=((x714<=x715)<=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x719 = -2;
	uint8_t x720 = 1U;
	volatile int32_t t179 = -2703433;

    t179 = (x717!=((x718<=x719)<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = UINT16_MAX;
	volatile int64_t x722 = -1LL;
	int8_t x723 = -4;
	int32_t t180 = 31090748;

    t180 = (x721!=((x722<=x723)<=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x725 = 2014;
	volatile uint8_t x726 = UINT8_MAX;
	static uint16_t x727 = 61U;
	static int8_t x728 = INT8_MAX;
	static volatile int32_t t181 = -637;

    t181 = (x725!=((x726<=x727)<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	uint8_t x730 = 6U;
	static volatile int16_t x732 = -1;
	int32_t t182 = -19038433;

    t182 = (x729!=((x730<=x731)<=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	uint8_t x735 = 63U;
	int16_t x736 = -7;
	volatile int32_t t183 = 1;

    t183 = (x733!=((x734<=x735)<=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x739 = 1U;
	uint8_t x740 = UINT8_MAX;
	int32_t t184 = 347695199;

    t184 = (x737!=((x738<=x739)<=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 791200566841298LLU;
	uint64_t x742 = 469183479582520914LLU;
	int64_t x743 = INT64_MIN;
	int32_t x744 = INT32_MAX;

    t185 = (x741!=((x742<=x743)<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MAX;
	int64_t x746 = -1LL;
	int8_t x747 = 2;
	int32_t x748 = -1;
	volatile int32_t t186 = -58;

    t186 = (x745!=((x746<=x747)<=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	uint8_t x750 = UINT8_MAX;
	int8_t x752 = -1;
	volatile int32_t t187 = -58;

    t187 = (x749!=((x750<=x751)<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = 26136509363772041LL;
	volatile int32_t x756 = INT32_MIN;
	int32_t t188 = -31730;

    t188 = (x753!=((x754<=x755)<=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x758 = INT16_MIN;
	int8_t x759 = -6;
	int64_t x760 = -1LL;

    t189 = (x757!=((x758<=x759)<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = UINT16_MAX;
	uint64_t x763 = UINT64_MAX;
	int32_t t190 = 9;

    t190 = (x761!=((x762<=x763)<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x766 = 180U;
	volatile int16_t x767 = INT16_MAX;
	int64_t x768 = INT64_MIN;

    t191 = (x765!=((x766<=x767)<=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x770 = INT8_MIN;
	static volatile uint32_t x771 = UINT32_MAX;
	static int16_t x772 = INT16_MIN;
	int32_t t192 = 16399;

    t192 = (x769!=((x770<=x771)<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x774 = 7;
	volatile int16_t x775 = INT16_MIN;
	int64_t x776 = -1LL;

    t193 = (x773!=((x774<=x775)<=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = UINT64_MAX;
	static int16_t x778 = -1;
	int32_t x779 = INT32_MIN;
	uint8_t x780 = 29U;

    t194 = (x777!=((x778<=x779)<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	volatile int64_t x782 = INT64_MIN;
	int8_t x783 = INT8_MIN;
	int32_t t195 = -3524647;

    t195 = (x781!=((x782<=x783)<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	int64_t x786 = INT64_MAX;
	static volatile int32_t t196 = 13815;

    t196 = (x785!=((x786<=x787)<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = INT64_MAX;
	static int8_t x791 = 0;
	int8_t x792 = INT8_MIN;
	static int32_t t197 = 5;

    t197 = (x789!=((x790<=x791)<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -1LL;
	int32_t x795 = INT32_MIN;
	int16_t x796 = INT16_MAX;
	int32_t t198 = -6661;

    t198 = (x793!=((x794<=x795)<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = 1;
	volatile int64_t x798 = -5LL;
	uint16_t x799 = 27U;
	int64_t x800 = 224652213045389LL;
	static volatile int32_t t199 = 2;

    t199 = (x797!=((x798<=x799)<=x800));

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

