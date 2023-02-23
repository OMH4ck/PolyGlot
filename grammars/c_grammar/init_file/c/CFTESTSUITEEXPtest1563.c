
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

volatile int32_t x4 = 97;
static int64_t x8 = INT64_MIN;
int32_t t1 = -1;
int64_t x10 = INT64_MIN;
volatile uint8_t x11 = 8U;
int32_t x13 = -29;
int8_t x16 = -1;
int16_t x20 = INT16_MIN;
volatile int32_t t4 = 54784;
int64_t x22 = -59033LL;
int32_t x27 = -1;
int32_t t6 = 5;
volatile int64_t x39 = INT64_MAX;
static int32_t x40 = INT32_MIN;
int32_t x47 = 22;
static volatile int8_t x49 = INT8_MIN;
volatile uint32_t x54 = 43165U;
volatile uint64_t x61 = 85270688620LLU;
volatile int32_t t15 = -1165;
volatile int32_t x66 = INT32_MAX;
int32_t t16 = 30445;
volatile uint8_t x71 = 2U;
volatile int32_t t17 = -14289;
int16_t x79 = INT16_MAX;
static uint8_t x85 = 15U;
int32_t x87 = 1047967;
int32_t t21 = 13943;
int16_t x97 = INT16_MIN;
static uint8_t x99 = UINT8_MAX;
static uint64_t x102 = 36LLU;
uint16_t x114 = 29U;
int8_t x117 = -1;
int8_t x126 = INT8_MAX;
static int32_t x128 = INT32_MAX;
int8_t x138 = INT8_MIN;
uint8_t x139 = 3U;
int32_t t34 = -12035518;
volatile int16_t x144 = -1;
int64_t x146 = INT64_MAX;
int8_t x149 = -1;
int64_t x153 = 1164711361521832978LL;
uint8_t x156 = 15U;
int32_t t38 = 4;
static int32_t x159 = -5689773;
int32_t t41 = 12684;
int32_t t42 = 447;
static int64_t x183 = 9LL;
uint8_t x184 = UINT8_MAX;
static uint64_t x185 = 8542107107995LLU;
static int8_t x191 = INT8_MIN;
int64_t x198 = INT64_MAX;
int16_t x205 = 7931;
uint32_t x206 = 6U;
uint16_t x215 = 2U;
int64_t x223 = -161200593LL;
static uint16_t x226 = UINT16_MAX;
static uint8_t x230 = 1U;
int64_t x232 = -1LL;
static volatile uint64_t x234 = 7523249894562754LLU;
int16_t x235 = INT16_MIN;
static uint8_t x238 = 1U;
int32_t t59 = 4642500;
static int8_t x241 = 1;
static int8_t x243 = -1;
volatile int64_t x247 = INT64_MAX;
uint32_t x250 = 536311831U;
static int32_t t62 = -11858;
int32_t x253 = -1;
int64_t x255 = 19192871999207LL;
volatile int32_t t63 = -52639112;
uint8_t x260 = 45U;
volatile int32_t t64 = 56476244;
uint32_t x262 = UINT32_MAX;
int32_t t66 = -39934195;
static int64_t x271 = INT64_MAX;
int32_t t67 = -64869120;
int16_t x273 = INT16_MAX;
int16_t x276 = -4;
int32_t t68 = 956;
volatile int32_t t71 = -5597878;
volatile int32_t x299 = INT32_MAX;
volatile uint16_t x300 = 117U;
int16_t x304 = INT16_MIN;
int32_t x305 = -1822461;
int16_t x309 = INT16_MAX;
static uint64_t x311 = UINT64_MAX;
volatile int32_t t77 = -260354235;
int8_t x317 = INT8_MAX;
static int32_t x320 = -1;
int8_t x321 = INT8_MAX;
int32_t x323 = -1;
volatile int32_t t80 = 762124;
volatile int8_t x325 = -1;
volatile int32_t x334 = INT32_MIN;
int32_t x335 = INT32_MAX;
static int8_t x338 = 0;
volatile int16_t x341 = -1;
int16_t x342 = INT16_MIN;
int32_t t85 = 3249;
int32_t t87 = 310678;
int64_t x358 = INT64_MAX;
static uint32_t x360 = 259583099U;
static volatile int32_t t90 = -802141266;
int8_t x365 = INT8_MIN;
static int32_t x366 = INT32_MAX;
volatile int32_t t91 = 139640;
int8_t x371 = INT8_MIN;
int8_t x372 = -1;
int32_t x374 = -984;
volatile int32_t t93 = 1;
volatile int32_t t94 = -201399334;
int8_t x384 = 0;
volatile int16_t x392 = INT16_MIN;
int16_t x400 = INT16_MIN;
volatile int32_t x402 = 9429868;
static uint8_t x403 = UINT8_MAX;
volatile int64_t x404 = INT64_MAX;
volatile uint64_t x406 = 52LLU;
int8_t x407 = INT8_MIN;
volatile int32_t t101 = -166912;
int16_t x410 = INT16_MIN;
uint32_t x413 = 2U;
int16_t x415 = -1;
static int32_t x421 = -801557;
int8_t x423 = INT8_MAX;
static int32_t t105 = -5461;
int32_t x428 = -1;
volatile uint8_t x433 = 119U;
static int16_t x434 = -1;
volatile int32_t t108 = -882;
uint16_t x444 = UINT16_MAX;
int16_t x452 = INT16_MIN;
static int64_t x453 = -8434976824329806LL;
uint32_t x458 = 0U;
static uint16_t x464 = UINT16_MAX;
int32_t x465 = -4;
uint16_t x473 = 1U;
int32_t x477 = INT32_MAX;
static volatile int64_t x483 = INT64_MIN;
int32_t x488 = -1;
static uint16_t x489 = 9U;
int16_t x491 = -1;
volatile int32_t t122 = 669953;
static int16_t x495 = -1;
static int8_t x498 = 30;
int32_t t125 = -1925543;
static int16_t x505 = INT16_MIN;
static volatile int8_t x509 = -44;
int64_t x512 = 782081730LL;
int64_t x519 = INT64_MIN;
static uint64_t x527 = 198025566874552LLU;
static uint16_t x529 = 31923U;
uint8_t x540 = UINT8_MAX;
static int16_t x541 = INT16_MIN;
volatile int32_t x542 = 3907;
static int64_t x546 = -1LL;
uint32_t x547 = 2552U;
int16_t x550 = INT16_MAX;
uint32_t x552 = UINT32_MAX;
int16_t x556 = -1728;
int32_t x559 = INT32_MIN;
volatile int32_t t139 = -29275;
int64_t x564 = INT64_MIN;
int64_t x571 = INT64_MAX;
int8_t x572 = INT8_MIN;
int32_t t143 = 24044;
int8_t x581 = INT8_MAX;
int32_t t145 = -374472;
int8_t x589 = -1;
static int32_t t148 = 7011;
int16_t x603 = -1;
static int16_t x608 = -1;
int64_t x616 = 6369LL;
int8_t x619 = -1;
static int32_t t154 = 3599;
uint32_t x621 = UINT32_MAX;
int64_t x622 = 328LL;
int32_t t157 = 3;
volatile int32_t t159 = 534214;
static volatile int16_t x642 = INT16_MIN;
uint8_t x646 = 15U;
int32_t x648 = -273353921;
int64_t x653 = INT64_MAX;
static int32_t t163 = 9932148;
int32_t x660 = -4556902;
int64_t x664 = -1LL;
static int16_t x667 = -1;
int8_t x673 = -1;
volatile int8_t x674 = INT8_MAX;
int32_t t170 = 1746;
int32_t x685 = INT32_MIN;
uint32_t x690 = 1U;
uint32_t x691 = 565297052U;
int32_t t172 = 169271698;
volatile int32_t t173 = 6;
static int32_t x702 = 1;
int16_t x703 = -1;
int16_t x712 = INT16_MIN;
volatile int32_t x722 = INT32_MIN;
int32_t x725 = INT32_MAX;
int8_t x726 = INT8_MIN;
uint64_t x732 = 7LLU;
static int8_t x740 = INT8_MAX;
int32_t t184 = -2639269;
int16_t x747 = INT16_MAX;
int32_t x751 = 9247617;
int8_t x754 = INT8_MIN;
volatile int64_t x758 = INT64_MIN;
uint32_t x761 = UINT32_MAX;
int32_t x764 = INT32_MIN;
static int32_t t190 = 1668;
int64_t x766 = -1LL;
volatile uint8_t x770 = UINT8_MAX;
int16_t x771 = INT16_MIN;
int32_t t192 = -2496700;
int64_t x775 = INT64_MAX;
uint64_t x783 = 626430LLU;
uint16_t x786 = 111U;
int8_t x790 = -1;
uint8_t x792 = 79U;
int32_t t197 = 43337;
int8_t x793 = INT8_MAX;
static volatile int32_t t198 = 1037952983;
volatile uint32_t x797 = 249360868U;


void f0(void) {
    	volatile int64_t x1 = 213299598355226LL;
	volatile uint32_t x2 = 9341897U;
	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = 233451;

    t0 = (x1>((x2==x3)^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = 63;
	static int64_t x6 = -1LL;
	int32_t x7 = -2921;

    t1 = (x5>((x6==x7)^x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	static uint64_t x12 = 1169158010229LLU;
	volatile int32_t t2 = -5;

    t2 = (x9>((x10==x11)^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 5873189229209523925LLU;
	volatile int64_t x15 = INT64_MAX;
	volatile int32_t t3 = 2804073;

    t3 = (x13>((x14==x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MIN;
	uint64_t x19 = 376223410113780960LLU;

    t4 = (x17>((x18==x19)^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int32_t x23 = 54471589;
	uint64_t x24 = 48879323559647LLU;
	volatile int32_t t5 = 14;

    t5 = (x21>((x22==x23)^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 1494LLU;
	int16_t x26 = -1;
	int16_t x28 = -1;

    t6 = (x25>((x26==x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MAX;
	int64_t x30 = -50586166347464587LL;
	static int64_t x31 = 320530312078LL;
	volatile uint8_t x32 = 84U;
	volatile int32_t t7 = 3038;

    t7 = (x29>((x30==x31)^x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = -83;
	int32_t x34 = INT32_MAX;
	int32_t x35 = INT32_MIN;
	uint32_t x36 = 732889484U;
	static int32_t t8 = -26382518;

    t8 = (x33>((x34==x35)^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	int64_t x38 = INT64_MIN;
	volatile int32_t t9 = 75721;

    t9 = (x37>((x38==x39)^x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	int8_t x42 = INT8_MAX;
	volatile int8_t x43 = 7;
	int64_t x44 = 1889355714852LL;
	volatile int32_t t10 = 359029;

    t10 = (x41>((x42==x43)^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -54;
	static int16_t x46 = INT16_MIN;
	int32_t x48 = -1;
	int32_t t11 = 20;

    t11 = (x45>((x46==x47)^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 16011LLU;
	int16_t x51 = INT16_MAX;
	static uint64_t x52 = UINT64_MAX;
	int32_t t12 = -129656942;

    t12 = (x49>((x50==x51)^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = INT8_MAX;
	static uint64_t x55 = 2638148379194LLU;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -15594578;

    t13 = (x53>((x54==x55)^x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int16_t x58 = INT16_MIN;
	int64_t x59 = -6332780698LL;
	int64_t x60 = -1LL;
	int32_t t14 = -21191971;

    t14 = (x57>((x58==x59)^x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = INT32_MIN;
	volatile int8_t x63 = -1;
	static uint16_t x64 = UINT16_MAX;

    t15 = (x61>((x62==x63)^x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MIN;
	volatile int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MIN;

    t16 = (x65>((x66==x67)^x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	uint64_t x70 = 26129506536LLU;
	volatile int16_t x72 = 1225;

    t17 = (x69>((x70==x71)^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	static uint16_t x74 = 2321U;
	static volatile int16_t x75 = -1;
	static uint8_t x76 = 1U;
	volatile int32_t t18 = 819;

    t18 = (x73>((x74==x75)^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 11073738;
	uint32_t x78 = UINT32_MAX;
	volatile uint64_t x80 = 244519648LLU;
	volatile int32_t t19 = 22143318;

    t19 = (x77>((x78==x79)^x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	volatile uint64_t x82 = UINT64_MAX;
	uint64_t x83 = 7763433029592565LLU;
	volatile int8_t x84 = -5;
	int32_t t20 = -20730;

    t20 = (x81>((x82==x83)^x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = 1576205093U;
	int8_t x88 = 0;

    t21 = (x85>((x86==x87)^x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = 3;
	int32_t x90 = 7;
	int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MIN;
	static int32_t t22 = -124185;

    t22 = (x89>((x90==x91)^x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = -1;
	int64_t x94 = 34817232470313599LL;
	int64_t x95 = INT64_MIN;
	static int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = -157;

    t23 = (x93>((x94==x95)^x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x98 = -14;
	int16_t x100 = INT16_MIN;
	int32_t t24 = 1066795;

    t24 = (x97>((x98==x99)^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 3013U;
	int64_t x103 = 186436780LL;
	uint32_t x104 = UINT32_MAX;
	int32_t t25 = -8;

    t25 = (x101>((x102==x103)^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MIN;
	static int32_t x106 = INT32_MAX;
	int16_t x107 = INT16_MIN;
	uint16_t x108 = 3241U;
	int32_t t26 = -26377677;

    t26 = (x105>((x106==x107)^x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	uint16_t x110 = 1U;
	int16_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = -236;

    t27 = (x109>((x110==x111)^x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -2654;
	volatile int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MIN;
	static volatile int32_t t28 = -1305;

    t28 = (x113>((x114==x115)^x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x118 = UINT8_MAX;
	uint8_t x119 = 19U;
	static uint8_t x120 = 3U;
	int32_t t29 = 189927;

    t29 = (x117>((x118==x119)^x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -6220598;
	static uint32_t x122 = 585U;
	int8_t x123 = -1;
	int16_t x124 = INT16_MAX;
	int32_t t30 = -1412815;

    t30 = (x121>((x122==x123)^x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 2;
	int16_t x127 = INT16_MIN;
	int32_t t31 = -23349879;

    t31 = (x125>((x126==x127)^x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MIN;
	uint32_t x131 = 15347U;
	uint64_t x132 = 27107024566372LLU;
	int32_t t32 = 1;

    t32 = (x129>((x130==x131)^x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 35478500016LLU;
	int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MIN;
	volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = 304158;

    t33 = (x133>((x134==x135)^x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x137 = UINT64_MAX;
	int64_t x140 = INT64_MIN;

    t34 = (x137>((x138==x139)^x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 29U;
	int64_t x142 = 11234086488151LL;
	uint32_t x143 = 398U;
	int32_t t35 = -3;

    t35 = (x141>((x142==x143)^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 5;
	int64_t x147 = 152LL;
	int16_t x148 = INT16_MIN;
	int32_t t36 = 357006758;

    t36 = (x145>((x146==x147)^x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x150 = -1;
	int8_t x151 = -4;
	int16_t x152 = -4;
	volatile int32_t t37 = -324592;

    t37 = (x149>((x150==x151)^x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x154 = 6U;
	int8_t x155 = INT8_MIN;

    t38 = (x153>((x154==x155)^x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 2262911LLU;
	int64_t x158 = INT64_MIN;
	int32_t x160 = 76;
	int32_t t39 = 440963577;

    t39 = (x157>((x158==x159)^x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MAX;
	int64_t x162 = INT64_MIN;
	volatile int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MAX;
	volatile int32_t t40 = -906296573;

    t40 = (x161>((x162==x163)^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x165 = 3U;
	static uint32_t x166 = 3U;
	uint32_t x167 = 16272U;
	static int64_t x168 = -54LL;

    t41 = (x165>((x166==x167)^x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -758446177LL;
	static int8_t x170 = INT8_MIN;
	volatile uint32_t x171 = UINT32_MAX;
	uint64_t x172 = 1305914805054649LLU;

    t42 = (x169>((x170==x171)^x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = INT32_MIN;
	static volatile int16_t x174 = -1;
	int32_t x175 = INT32_MIN;
	volatile int16_t x176 = INT16_MIN;
	int32_t t43 = 278396692;

    t43 = (x173>((x174==x175)^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = 0;
	int32_t x178 = INT32_MAX;
	int16_t x179 = 1;
	static int16_t x180 = INT16_MIN;
	int32_t t44 = -6;

    t44 = (x177>((x178==x179)^x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	int32_t x182 = -1;
	int32_t t45 = -23436;

    t45 = (x181>((x182==x183)^x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = INT16_MAX;
	static int8_t x187 = -1;
	uint8_t x188 = 3U;
	int32_t t46 = 5;

    t46 = (x185>((x186==x187)^x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	static uint64_t x190 = 66469399LLU;
	int64_t x192 = 3214947092891636LL;
	static volatile int32_t t47 = 140;

    t47 = (x189>((x190==x191)^x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	static int32_t x194 = 3;
	int8_t x195 = 0;
	int16_t x196 = -6334;
	int32_t t48 = 1;

    t48 = (x193>((x194==x195)^x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	static int32_t x199 = INT32_MIN;
	int32_t x200 = -403;
	volatile int32_t t49 = -17543;

    t49 = (x197>((x198==x199)^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 276800738498246LLU;
	uint8_t x202 = 97U;
	static volatile int16_t x203 = -1;
	static int64_t x204 = -1LL;
	volatile int32_t t50 = 308210637;

    t50 = (x201>((x202==x203)^x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x207 = INT64_MIN;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -180;

    t51 = (x205>((x206==x207)^x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = UINT16_MAX;
	static volatile int16_t x210 = 1782;
	static uint16_t x211 = UINT16_MAX;
	static int32_t x212 = 240554971;
	volatile int32_t t52 = -10516396;

    t52 = (x209>((x210==x211)^x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = 86673157501465601LL;
	int8_t x214 = 0;
	static int8_t x216 = 1;
	volatile int32_t t53 = 410030426;

    t53 = (x213>((x214==x215)^x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x217 = 371401854441608LLU;
	int32_t x218 = INT32_MAX;
	int32_t x219 = INT32_MIN;
	int16_t x220 = 648;
	int32_t t54 = 987747276;

    t54 = (x217>((x218==x219)^x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = INT8_MAX;
	int64_t x222 = -1LL;
	int64_t x224 = -18LL;
	volatile int32_t t55 = 19908718;

    t55 = (x221>((x222==x223)^x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 86U;
	int16_t x227 = 0;
	int32_t x228 = -1;
	static volatile int32_t t56 = -3521;

    t56 = (x225>((x226==x227)^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -1LL;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t t57 = 55525696;

    t57 = (x229>((x230==x231)^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 1643U;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t58 = -7611483;

    t58 = (x233>((x234==x235)^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -3;
	uint16_t x239 = UINT16_MAX;
	uint16_t x240 = 192U;

    t59 = (x237>((x238==x239)^x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x242 = INT8_MAX;
	int32_t x244 = 2359570;
	volatile int32_t t60 = 499557;

    t60 = (x241>((x242==x243)^x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = INT16_MIN;
	uint32_t x246 = 307U;
	int64_t x248 = -12LL;
	int32_t t61 = -673190016;

    t61 = (x245>((x246==x247)^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x249 = 37U;
	volatile uint8_t x251 = 0U;
	volatile int32_t x252 = -1;

    t62 = (x249>((x250==x251)^x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x254 = -11;
	int32_t x256 = 898;

    t63 = (x253>((x254==x255)^x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 1U;
	uint64_t x258 = 41288939782934218LLU;
	int32_t x259 = -67338573;

    t64 = (x257>((x258==x259)^x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 2576U;
	int8_t x263 = INT8_MAX;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t65 = 57003;

    t65 = (x261>((x262==x263)^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = UINT64_MAX;
	volatile int8_t x266 = INT8_MIN;
	int8_t x267 = 8;
	volatile uint32_t x268 = 13869602U;

    t66 = (x265>((x266==x267)^x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	int8_t x270 = INT8_MIN;
	int64_t x272 = 20LL;

    t67 = (x269>((x270==x271)^x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x274 = 115013;
	int8_t x275 = -1;

    t68 = (x273>((x274==x275)^x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x277 = 339979495LL;
	volatile int32_t x278 = INT32_MAX;
	static volatile int64_t x279 = -11063083883229078LL;
	volatile int16_t x280 = -8122;
	volatile int32_t t69 = -1432;

    t69 = (x277>((x278==x279)^x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MAX;
	int32_t x282 = INT32_MAX;
	static uint8_t x283 = 4U;
	static int32_t x284 = INT32_MIN;
	volatile int32_t t70 = 239;

    t70 = (x281>((x282==x283)^x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x285 = 7LLU;
	int8_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;

    t71 = (x285>((x286==x287)^x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = 31;
	volatile uint16_t x290 = 1365U;
	int8_t x291 = INT8_MIN;
	volatile int8_t x292 = INT8_MAX;
	volatile int32_t t72 = -36;

    t72 = (x289>((x290==x291)^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x293 = 290U;
	volatile int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -179981;

    t73 = (x293>((x294==x295)^x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -36;
	uint16_t x298 = UINT16_MAX;
	int32_t t74 = -13;

    t74 = (x297>((x298==x299)^x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = 113211432057087LLU;
	int16_t x302 = INT16_MIN;
	static uint8_t x303 = UINT8_MAX;
	int32_t t75 = 8;

    t75 = (x301>((x302==x303)^x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = -1;
	static int8_t x307 = -14;
	int32_t x308 = -3168;
	static int32_t t76 = 1;

    t76 = (x305>((x306==x307)^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x310 = UINT32_MAX;
	uint64_t x312 = 149707LLU;

    t77 = (x309>((x310==x311)^x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = 36405712;
	static uint8_t x314 = UINT8_MAX;
	int32_t x315 = -236;
	static uint8_t x316 = UINT8_MAX;
	volatile int32_t t78 = -1981;

    t78 = (x313>((x314==x315)^x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = INT16_MAX;
	static int8_t x319 = INT8_MAX;
	static int32_t t79 = 1;

    t79 = (x317>((x318==x319)^x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x322 = 3387U;
	int32_t x324 = -765192903;

    t80 = (x321>((x322==x323)^x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x326 = 57582U;
	static int8_t x327 = INT8_MIN;
	volatile int16_t x328 = -9;
	volatile int32_t t81 = -20;

    t81 = (x325>((x326==x327)^x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 1;
	static uint64_t x330 = 689117388483337974LLU;
	uint64_t x331 = 1494988845583LLU;
	static int32_t x332 = INT32_MAX;
	volatile int32_t t82 = -475;

    t82 = (x329>((x330==x331)^x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 75875;
	static uint8_t x336 = 1U;
	int32_t t83 = 11227;

    t83 = (x333>((x334==x335)^x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 1204080U;
	int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	int32_t t84 = 2556;

    t84 = (x337>((x338==x339)^x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MIN;

    t85 = (x341>((x342==x343)^x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	uint64_t x346 = 56059349242LLU;
	uint16_t x347 = 219U;
	int64_t x348 = 0LL;
	int32_t t86 = 17;

    t86 = (x345>((x346==x347)^x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = 8036560200225LL;
	static volatile uint16_t x350 = 17746U;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;

    t87 = (x349>((x350==x351)^x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	static int8_t x355 = -1;
	int8_t x356 = 2;
	volatile int32_t t88 = -1;

    t88 = (x353>((x354==x355)^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MAX;
	static uint16_t x359 = 13U;
	int32_t t89 = -140619150;

    t89 = (x357>((x358==x359)^x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	uint16_t x362 = 25704U;
	static volatile int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;

    t90 = (x361>((x362==x363)^x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x367 = 2;
	uint64_t x368 = 18882990695472LLU;

    t91 = (x365>((x366==x367)^x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	uint64_t x370 = 257839493016LLU;
	volatile int32_t t92 = -650;

    t92 = (x369>((x370==x371)^x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	volatile int64_t x375 = -5162967032303308LL;
	int64_t x376 = INT64_MIN;

    t93 = (x373>((x374==x375)^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MIN;
	uint16_t x379 = UINT16_MAX;
	uint64_t x380 = UINT64_MAX;

    t94 = (x377>((x378==x379)^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x381 = UINT16_MAX;
	volatile int16_t x382 = -1;
	static int64_t x383 = -1LL;
	int32_t t95 = 936;

    t95 = (x381>((x382==x383)^x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = UINT64_MAX;
	volatile uint32_t x386 = 278137941U;
	int64_t x387 = 360259739433LL;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 914366942;

    t96 = (x385>((x386==x387)^x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = 0;
	static volatile int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MIN;
	static int32_t t97 = 0;

    t97 = (x389>((x390==x391)^x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MAX;
	int8_t x395 = INT8_MIN;
	volatile int64_t x396 = INT64_MIN;
	volatile int32_t t98 = -15;

    t98 = (x393>((x394==x395)^x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = 23;
	volatile uint32_t x398 = 184060138U;
	static int16_t x399 = 1;
	int32_t t99 = -143389826;

    t99 = (x397>((x398==x399)^x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 55779U;
	static int32_t t100 = -56;

    t100 = (x401>((x402==x403)^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x405 = -1LL;
	uint64_t x408 = UINT64_MAX;

    t101 = (x405>((x406==x407)^x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MAX;
	static uint32_t x411 = 4460U;
	int16_t x412 = -3006;
	volatile int32_t t102 = -15808;

    t102 = (x409>((x410==x411)^x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = 13437126168725608LL;
	int8_t x416 = -1;
	static volatile int32_t t103 = 813132069;

    t103 = (x413>((x414==x415)^x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = INT64_MIN;
	static uint64_t x418 = 2033513LLU;
	uint16_t x419 = 22732U;
	static int32_t x420 = INT32_MAX;
	volatile int32_t t104 = 48;

    t104 = (x417>((x418==x419)^x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x422 = INT16_MIN;
	uint16_t x424 = 11U;

    t105 = (x421>((x422==x423)^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 22U;
	int32_t x426 = -1;
	int8_t x427 = INT8_MIN;
	static volatile int32_t t106 = -104022333;

    t106 = (x425>((x426==x427)^x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	int16_t x430 = -1;
	volatile int16_t x431 = 37;
	int8_t x432 = INT8_MAX;
	int32_t t107 = -171;

    t107 = (x429>((x430==x431)^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x435 = UINT8_MAX;
	int32_t x436 = INT32_MIN;

    t108 = (x433>((x434==x435)^x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -1;
	static uint8_t x438 = UINT8_MAX;
	uint64_t x439 = UINT64_MAX;
	uint64_t x440 = 1551615LLU;
	int32_t t109 = 118;

    t109 = (x437>((x438==x439)^x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x441 = -424743404353LL;
	uint32_t x442 = 2U;
	int8_t x443 = -1;
	int32_t t110 = 65208539;

    t110 = (x441>((x442==x443)^x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = INT32_MIN;
	uint8_t x448 = 27U;
	static int32_t t111 = 81948;

    t111 = (x445>((x446==x447)^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = 18U;
	int64_t x450 = 16745274366029048LL;
	int8_t x451 = INT8_MIN;
	volatile int32_t t112 = 10278148;

    t112 = (x449>((x450==x451)^x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x454 = 3U;
	int16_t x455 = -1;
	int16_t x456 = -1;
	int32_t t113 = 59341;

    t113 = (x453>((x454==x455)^x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 783092725324884LLU;
	int8_t x459 = INT8_MIN;
	int32_t x460 = 124368092;
	int32_t t114 = -6;

    t114 = (x457>((x458==x459)^x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	int64_t x462 = INT64_MIN;
	static int64_t x463 = 268790205LL;
	volatile int32_t t115 = 103258529;

    t115 = (x461>((x462==x463)^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = INT32_MIN;
	int8_t x467 = -1;
	static volatile int8_t x468 = 8;
	int32_t t116 = 1418279;

    t116 = (x465>((x466==x467)^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 843075174U;
	int8_t x470 = -1;
	int8_t x471 = INT8_MIN;
	volatile int64_t x472 = -16691347791420LL;
	int32_t t117 = -22;

    t117 = (x469>((x470==x471)^x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x474 = 13U;
	int32_t x475 = INT32_MAX;
	int32_t x476 = INT32_MAX;
	volatile int32_t t118 = 19943365;

    t118 = (x473>((x474==x475)^x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x478 = INT8_MIN;
	int64_t x479 = INT64_MAX;
	volatile uint16_t x480 = UINT16_MAX;
	int32_t t119 = 37;

    t119 = (x477>((x478==x479)^x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 1315281288534391212LLU;
	int16_t x482 = 11961;
	int64_t x484 = 2014933LL;
	volatile int32_t t120 = 798;

    t120 = (x481>((x482==x483)^x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	volatile int8_t x486 = INT8_MAX;
	int32_t x487 = INT32_MIN;
	int32_t t121 = 403727916;

    t121 = (x485>((x486==x487)^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x490 = INT32_MIN;
	uint64_t x492 = UINT64_MAX;

    t122 = (x489>((x490==x491)^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = 7U;
	int8_t x494 = INT8_MIN;
	uint32_t x496 = 878479136U;
	static volatile int32_t t123 = -49727505;

    t123 = (x493>((x494==x495)^x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	static uint8_t x499 = UINT8_MAX;
	int16_t x500 = INT16_MIN;
	volatile int32_t t124 = 27726;

    t124 = (x497>((x498==x499)^x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	int16_t x502 = 5973;
	uint64_t x503 = 8008607445921LLU;
	volatile uint8_t x504 = UINT8_MAX;

    t125 = (x501>((x502==x503)^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x506 = 3U;
	volatile int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MIN;
	volatile int32_t t126 = -161;

    t126 = (x505>((x506==x507)^x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = -1;
	int16_t x511 = INT16_MIN;
	int32_t t127 = 20;

    t127 = (x509>((x510==x511)^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MAX;
	uint16_t x514 = 1U;
	int8_t x515 = -28;
	int8_t x516 = INT8_MAX;
	volatile int32_t t128 = 2553505;

    t128 = (x513>((x514==x515)^x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 14719471U;
	int64_t x518 = INT64_MIN;
	int16_t x520 = INT16_MAX;
	int32_t t129 = 23;

    t129 = (x517>((x518==x519)^x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 840498083U;
	int8_t x522 = -3;
	uint16_t x523 = UINT16_MAX;
	static int64_t x524 = INT64_MAX;
	static int32_t t130 = -3;

    t130 = (x521>((x522==x523)^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 0U;
	int32_t x526 = INT32_MIN;
	static int16_t x528 = INT16_MIN;
	static int32_t t131 = -62;

    t131 = (x525>((x526==x527)^x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x530 = -1;
	int32_t x531 = -1;
	int64_t x532 = INT64_MAX;
	volatile int32_t t132 = -3218532;

    t132 = (x529>((x530==x531)^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	volatile int8_t x534 = 1;
	uint16_t x535 = 84U;
	uint32_t x536 = 788U;
	volatile int32_t t133 = 384;

    t133 = (x533>((x534==x535)^x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint16_t x537 = 1644U;
	static volatile int16_t x538 = INT16_MAX;
	uint8_t x539 = UINT8_MAX;
	int32_t t134 = -12814057;

    t134 = (x537>((x538==x539)^x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x543 = INT64_MIN;
	uint8_t x544 = 17U;
	static volatile int32_t t135 = -1;

    t135 = (x541>((x542==x543)^x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 0U;
	int32_t x548 = INT32_MAX;
	int32_t t136 = 11;

    t136 = (x545>((x546==x547)^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x549 = INT64_MAX;
	int64_t x551 = INT64_MAX;
	int32_t t137 = 446390;

    t137 = (x549>((x550==x551)^x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x553 = UINT32_MAX;
	int32_t x554 = INT32_MAX;
	uint64_t x555 = 1468254090103927845LLU;
	static int32_t t138 = -2958929;

    t138 = (x553>((x554==x555)^x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MAX;
	uint32_t x558 = 113U;
	static int8_t x560 = 7;

    t139 = (x557>((x558==x559)^x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	static volatile uint64_t x562 = UINT64_MAX;
	static uint64_t x563 = 14973852LLU;
	volatile int32_t t140 = -262722378;

    t140 = (x561>((x562==x563)^x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 4U;
	int64_t x566 = 4251525677160977824LL;
	int8_t x567 = INT8_MIN;
	volatile int64_t x568 = INT64_MAX;
	int32_t t141 = -10880532;

    t141 = (x565>((x566==x567)^x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = 404435009662965812LL;
	volatile uint8_t x570 = 19U;
	static int32_t t142 = -3132844;

    t142 = (x569>((x570==x571)^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	uint64_t x574 = 90725613589LLU;
	int64_t x575 = -1LL;
	static uint16_t x576 = 249U;

    t143 = (x573>((x574==x575)^x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = INT8_MAX;
	static int64_t x578 = INT64_MIN;
	int8_t x579 = -9;
	static volatile uint16_t x580 = UINT16_MAX;
	volatile int32_t t144 = 0;

    t144 = (x577>((x578==x579)^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x582 = INT32_MAX;
	int64_t x583 = -27042282774144524LL;
	volatile int8_t x584 = INT8_MAX;

    t145 = (x581>((x582==x583)^x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 664065488U;
	static volatile int32_t x586 = INT32_MIN;
	int8_t x587 = -1;
	uint8_t x588 = UINT8_MAX;
	volatile int32_t t146 = 2105;

    t146 = (x585>((x586==x587)^x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x590 = 1;
	uint32_t x591 = UINT32_MAX;
	static volatile uint16_t x592 = 0U;
	int32_t t147 = 860049092;

    t147 = (x589>((x590==x591)^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	volatile int16_t x594 = -198;
	uint32_t x595 = 8825U;
	int64_t x596 = 107LL;

    t148 = (x593>((x594==x595)^x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x597 = INT64_MIN;
	int64_t x598 = -1LL;
	static volatile uint64_t x599 = 8604286LLU;
	int64_t x600 = 41LL;
	volatile int32_t t149 = 26614;

    t149 = (x597>((x598==x599)^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	static int64_t x602 = -1LL;
	static int8_t x604 = INT8_MAX;
	int32_t t150 = -91;

    t150 = (x601>((x602==x603)^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 6690793U;
	uint8_t x606 = UINT8_MAX;
	static int8_t x607 = -28;
	volatile int32_t t151 = -58494959;

    t151 = (x605>((x606==x607)^x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = 170377720231305LL;
	static int8_t x610 = 0;
	int16_t x611 = INT16_MAX;
	uint8_t x612 = UINT8_MAX;
	int32_t t152 = 155;

    t152 = (x609>((x610==x611)^x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -4;
	uint16_t x614 = 16421U;
	int64_t x615 = INT64_MIN;
	volatile int32_t t153 = -446;

    t153 = (x613>((x614==x615)^x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 21741U;
	volatile int8_t x618 = INT8_MIN;
	static int64_t x620 = -1LL;

    t154 = (x617>((x618==x619)^x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x623 = INT16_MAX;
	int16_t x624 = INT16_MAX;
	static int32_t t155 = -35494;

    t155 = (x621>((x622==x623)^x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x625 = INT64_MAX;
	int32_t x626 = 111858;
	uint8_t x627 = UINT8_MAX;
	static int8_t x628 = -1;
	volatile int32_t t156 = 251659;

    t156 = (x625>((x626==x627)^x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 7;
	int64_t x630 = INT64_MIN;
	int8_t x631 = INT8_MIN;
	int32_t x632 = INT32_MAX;

    t157 = (x629>((x630==x631)^x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = INT32_MIN;
	int8_t x634 = 1;
	int8_t x635 = INT8_MAX;
	static int16_t x636 = INT16_MIN;
	int32_t t158 = -484069;

    t158 = (x633>((x634==x635)^x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = -1;
	int8_t x638 = -1;
	int16_t x639 = INT16_MIN;
	uint32_t x640 = UINT32_MAX;

    t159 = (x637>((x638==x639)^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -27;
	volatile int8_t x643 = INT8_MAX;
	volatile uint16_t x644 = 8204U;
	int32_t t160 = -335948288;

    t160 = (x641>((x642==x643)^x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = 56;
	int32_t x647 = 0;
	volatile int32_t t161 = -99214349;

    t161 = (x645>((x646==x647)^x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 125U;
	int32_t x650 = INT32_MIN;
	static int32_t x651 = INT32_MAX;
	uint32_t x652 = 305865U;
	volatile int32_t t162 = -1236531;

    t162 = (x649>((x650==x651)^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = INT64_MIN;
	uint8_t x655 = 1U;
	static int32_t x656 = -29633338;

    t163 = (x653>((x654==x655)^x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = 243LL;
	volatile uint8_t x658 = UINT8_MAX;
	int64_t x659 = INT64_MIN;
	int32_t t164 = -27925861;

    t164 = (x657>((x658==x659)^x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 8005U;
	int8_t x662 = -12;
	uint16_t x663 = 2U;
	volatile int32_t t165 = -295651885;

    t165 = (x661>((x662==x663)^x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x665 = -1;
	static int8_t x666 = -6;
	int32_t x668 = -1;
	int32_t t166 = -2356115;

    t166 = (x665>((x666==x667)^x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = 8;
	static uint32_t x670 = UINT32_MAX;
	static uint64_t x671 = 44619831LLU;
	int8_t x672 = INT8_MAX;
	volatile int32_t t167 = 166;

    t167 = (x669>((x670==x671)^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x675 = INT64_MAX;
	volatile int64_t x676 = 59796LL;
	static int32_t t168 = -112829849;

    t168 = (x673>((x674==x675)^x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	int32_t x678 = INT32_MIN;
	volatile int64_t x679 = 999535691LL;
	volatile uint16_t x680 = UINT16_MAX;
	int32_t t169 = -32997782;

    t169 = (x677>((x678==x679)^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 451173514179464LLU;
	int64_t x682 = -1LL;
	int64_t x683 = INT64_MAX;
	int16_t x684 = INT16_MIN;

    t170 = (x681>((x682==x683)^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x686 = -1LL;
	int8_t x687 = INT8_MIN;
	int32_t x688 = 618253;
	static int32_t t171 = 379869413;

    t171 = (x685>((x686==x687)^x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x689 = -215;
	volatile int8_t x692 = -1;

    t172 = (x689>((x690==x691)^x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int32_t x694 = -1;
	uint16_t x695 = 15U;
	uint32_t x696 = 2443U;

    t173 = (x693>((x694==x695)^x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	uint64_t x698 = 810LLU;
	uint16_t x699 = UINT16_MAX;
	static int32_t x700 = -6794023;
	static volatile int32_t t174 = -180995016;

    t174 = (x697>((x698==x699)^x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x701 = -1;
	int32_t x704 = -1;
	static int32_t t175 = -13;

    t175 = (x701>((x702==x703)^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = -27;
	uint16_t x706 = 24671U;
	volatile uint16_t x707 = 233U;
	int32_t x708 = -1;
	int32_t t176 = 844106743;

    t176 = (x705>((x706==x707)^x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	int16_t x710 = -4;
	int64_t x711 = 406524520098LL;
	volatile int32_t t177 = 522960850;

    t177 = (x709>((x710==x711)^x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 3802169898LLU;
	static uint8_t x714 = UINT8_MAX;
	int8_t x715 = INT8_MIN;
	int16_t x716 = -1;
	int32_t t178 = 22637630;

    t178 = (x713>((x714==x715)^x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = 59LL;
	volatile int32_t x718 = INT32_MIN;
	volatile int16_t x719 = INT16_MIN;
	int16_t x720 = -828;
	static int32_t t179 = 35;

    t179 = (x717>((x718==x719)^x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x721 = UINT64_MAX;
	uint16_t x723 = 4U;
	int32_t x724 = INT32_MAX;
	static volatile int32_t t180 = 74253585;

    t180 = (x721>((x722==x723)^x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x727 = 823777596U;
	uint16_t x728 = 14817U;
	int32_t t181 = 241;

    t181 = (x725>((x726==x727)^x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 1326911U;
	static int8_t x730 = 1;
	int16_t x731 = INT16_MIN;
	static int32_t t182 = 6615;

    t182 = (x729>((x730==x731)^x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	int32_t x734 = INT32_MIN;
	volatile uint32_t x735 = UINT32_MAX;
	static int64_t x736 = INT64_MAX;
	int32_t t183 = -33441;

    t183 = (x733>((x734==x735)^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = 6U;
	int8_t x738 = -1;
	uint32_t x739 = 1582845U;

    t184 = (x737>((x738==x739)^x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	int32_t x742 = INT32_MAX;
	int16_t x743 = 5;
	int16_t x744 = INT16_MAX;
	int32_t t185 = -96366579;

    t185 = (x741>((x742==x743)^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x745 = 0;
	uint16_t x746 = 0U;
	int8_t x748 = INT8_MIN;
	static int32_t t186 = -15511;

    t186 = (x745>((x746==x747)^x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 2932885848LLU;
	volatile int64_t x750 = INT64_MIN;
	uint8_t x752 = 1U;
	static volatile int32_t t187 = 219355244;

    t187 = (x749>((x750==x751)^x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x753 = UINT32_MAX;
	int8_t x755 = -3;
	uint8_t x756 = 10U;
	static volatile int32_t t188 = 10;

    t188 = (x753>((x754==x755)^x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 1357U;
	uint8_t x759 = UINT8_MAX;
	int8_t x760 = INT8_MIN;
	volatile int32_t t189 = 0;

    t189 = (x757>((x758==x759)^x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = 341846474;
	uint8_t x763 = UINT8_MAX;

    t190 = (x761>((x762==x763)^x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = -409;
	static int64_t x767 = INT64_MIN;
	static int32_t x768 = INT32_MAX;
	static int32_t t191 = -31326;

    t191 = (x765>((x766==x767)^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x769 = 72U;
	uint64_t x772 = UINT64_MAX;

    t192 = (x769>((x770==x771)^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 3U;
	static uint16_t x774 = UINT16_MAX;
	int64_t x776 = INT64_MIN;
	volatile int32_t t193 = -1189619;

    t193 = (x773>((x774==x775)^x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 0U;
	int32_t x778 = INT32_MIN;
	uint64_t x779 = 842076972745964LLU;
	int32_t x780 = -1;
	volatile int32_t t194 = 890032232;

    t194 = (x777>((x778==x779)^x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -1;
	uint8_t x782 = 0U;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t195 = 0;

    t195 = (x781>((x782==x783)^x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = INT64_MIN;
	volatile uint8_t x787 = 6U;
	volatile uint32_t x788 = UINT32_MAX;
	volatile int32_t t196 = 3058;

    t196 = (x785>((x786==x787)^x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 87925694U;
	static int16_t x791 = INT16_MIN;

    t197 = (x789>((x790==x791)^x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x794 = -1LL;
	static uint8_t x795 = UINT8_MAX;
	static uint64_t x796 = 35200540064708934LLU;

    t198 = (x793>((x794==x795)^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x798 = INT64_MIN;
	int8_t x799 = INT8_MIN;
	int64_t x800 = 936LL;
	static int32_t t199 = 170710813;

    t199 = (x797>((x798==x799)^x800));

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

