
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

static uint8_t x1 = 8U;
int8_t x4 = INT8_MAX;
volatile int32_t t0 = 1;
uint16_t x9 = 3708U;
int8_t x12 = -1;
static volatile int32_t t2 = 438;
volatile int8_t x15 = INT8_MIN;
int16_t x23 = INT16_MIN;
uint16_t x26 = UINT16_MAX;
int32_t t6 = 2;
int32_t x29 = INT32_MIN;
int8_t x30 = -2;
int16_t x35 = -1;
int32_t t9 = 1055753947;
volatile int32_t t10 = 2221706;
int32_t x46 = -1;
int8_t x47 = INT8_MAX;
volatile int32_t t11 = 8876;
uint32_t x49 = 100U;
int32_t t12 = -158822;
static volatile int8_t x59 = INT8_MAX;
int32_t x60 = INT32_MIN;
volatile int16_t x61 = INT16_MIN;
int16_t x65 = -1;
volatile int16_t x68 = INT16_MIN;
int32_t t16 = 0;
uint16_t x70 = UINT16_MAX;
static volatile int32_t t18 = -11145;
uint8_t x78 = 2U;
int64_t x79 = INT64_MAX;
int32_t x82 = -225707;
uint8_t x90 = 7U;
volatile int32_t x92 = -1;
int8_t x98 = INT8_MAX;
static volatile uint16_t x99 = 23157U;
int64_t x105 = -1LL;
volatile uint8_t x109 = UINT8_MAX;
int32_t x116 = -1;
int32_t x117 = INT32_MIN;
volatile uint16_t x126 = UINT16_MAX;
uint8_t x127 = UINT8_MAX;
volatile uint64_t x129 = 312907660LLU;
static uint16_t x133 = 5U;
static int16_t x144 = INT16_MAX;
uint64_t x146 = 10840176810LLU;
int32_t x148 = 232;
uint16_t x149 = 985U;
static volatile int32_t t36 = 910;
int32_t x154 = INT32_MAX;
static int64_t x156 = INT64_MIN;
volatile uint64_t x158 = 1494777477439421915LLU;
int32_t x160 = 5735054;
int64_t x162 = INT64_MAX;
int16_t x171 = INT16_MIN;
volatile uint8_t x181 = 5U;
int64_t x183 = 39LL;
int8_t x185 = 9;
int8_t x192 = INT8_MAX;
int64_t x194 = INT64_MAX;
uint16_t x199 = UINT16_MAX;
int32_t x204 = -1;
static volatile int8_t x205 = 1;
volatile int64_t x210 = -30295LL;
int32_t t52 = 62;
int64_t x219 = -1LL;
volatile int16_t x221 = INT16_MIN;
volatile int32_t t54 = -2347;
int8_t x229 = INT8_MIN;
volatile int32_t t56 = -1;
int64_t x239 = INT64_MIN;
int32_t x241 = INT32_MAX;
uint8_t x246 = 1U;
volatile int16_t x251 = -1;
volatile int32_t t61 = -2;
static int32_t x259 = INT32_MAX;
int32_t t65 = 1;
volatile int32_t t67 = -1;
uint8_t x280 = 10U;
uint16_t x285 = 5U;
volatile int64_t x293 = INT64_MIN;
uint32_t x299 = 83U;
uint64_t x311 = 14027538515001440LLU;
uint16_t x315 = UINT16_MAX;
uint32_t x320 = 11845544U;
volatile int16_t x327 = INT16_MIN;
int32_t x331 = -3;
int16_t x341 = -3;
int16_t x343 = INT16_MIN;
int8_t x344 = 8;
static volatile int32_t t84 = 2;
static uint64_t x349 = 4882LLU;
uint16_t x352 = UINT16_MAX;
int64_t x357 = -20114383046939063LL;
int32_t x359 = -361558;
int32_t x360 = INT32_MAX;
uint32_t x363 = UINT32_MAX;
volatile uint32_t x365 = UINT32_MAX;
static int64_t x366 = -498899475620476LL;
uint64_t x372 = UINT64_MAX;
uint32_t x377 = 602U;
static uint8_t x379 = 1U;
volatile int16_t x393 = INT16_MIN;
uint64_t x394 = 614441304577682375LLU;
volatile uint64_t x396 = 166947092121LLU;
static int32_t t97 = -56;
int16_t x397 = INT16_MIN;
uint64_t x415 = 301785LLU;
uint64_t x416 = 722116LLU;
volatile int32_t t103 = -28;
int32_t x421 = 74550;
int32_t t105 = -745516;
static uint32_t x434 = 1U;
uint16_t x443 = UINT16_MAX;
int32_t t109 = -508589200;
static int16_t x445 = INT16_MIN;
uint64_t x448 = 6892520093102716091LLU;
volatile int32_t t113 = 1;
volatile int32_t x464 = -1;
static int32_t t115 = -56191;
uint16_t x477 = 52U;
uint8_t x481 = 0U;
uint64_t x482 = 1LLU;
volatile int32_t t119 = 322;
int64_t x486 = -1LL;
static volatile int32_t x489 = INT32_MIN;
static uint64_t x490 = UINT64_MAX;
uint8_t x495 = 1U;
int16_t x498 = 247;
volatile int32_t t125 = -397133;
uint64_t x509 = 180068LLU;
int32_t x511 = INT32_MIN;
int32_t t126 = 1;
uint64_t x522 = 34066206LLU;
int16_t x528 = INT16_MIN;
int64_t x530 = INT64_MIN;
static uint32_t x533 = 583441563U;
int16_t x534 = INT16_MIN;
int32_t x539 = INT32_MIN;
int32_t t133 = 3329;
uint32_t x541 = UINT32_MAX;
static volatile int8_t x542 = INT8_MIN;
static int8_t x545 = INT8_MIN;
int8_t x551 = -7;
static uint64_t x558 = 2654667528738LLU;
volatile uint16_t x561 = 7U;
int16_t x572 = INT16_MAX;
static uint8_t x573 = 7U;
uint64_t x577 = 1LLU;
int64_t x579 = -1LL;
int32_t t145 = -127;
int16_t x589 = -1;
static volatile int32_t t146 = -9;
int64_t x593 = -1LL;
int32_t x594 = -303;
int32_t x595 = INT32_MIN;
uint8_t x596 = 6U;
int64_t x598 = INT64_MIN;
int32_t x600 = 126794;
int16_t x606 = -1;
volatile int64_t x611 = -975788152089768296LL;
int8_t x615 = INT8_MIN;
int32_t x618 = -1;
int32_t t153 = -6;
int32_t x639 = INT32_MIN;
uint8_t x644 = 30U;
uint64_t x660 = 257928630432119867LLU;
uint8_t x664 = 5U;
int16_t x671 = -1;
static int8_t x673 = INT8_MIN;
int8_t x676 = INT8_MAX;
int16_t x678 = INT16_MAX;
volatile int32_t t168 = -5501;
volatile int64_t x683 = 82972575LL;
int64_t x684 = INT64_MAX;
volatile int32_t t169 = 121;
int32_t x691 = -1;
int8_t x711 = INT8_MIN;
volatile int32_t t176 = 939037;
volatile int16_t x718 = -1;
int32_t x719 = 5;
volatile int8_t x722 = INT8_MIN;
volatile int16_t x723 = 2977;
int8_t x725 = INT8_MIN;
int32_t x732 = INT32_MIN;
static uint16_t x756 = 1669U;
volatile uint64_t x758 = 189532028496755LLU;
static uint32_t x766 = 1379014U;
uint64_t x768 = 344LLU;
uint32_t x779 = 29314U;
int32_t x781 = -1;
int32_t x801 = INT32_MAX;


void f0(void) {
    	uint16_t x2 = 31U;
	int8_t x3 = INT8_MIN;

    t0 = (x1>((x2%x3)|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	static int8_t x6 = INT8_MAX;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = UINT32_MAX;
	int32_t t1 = -98515085;

    t1 = (x5>((x6%x7)|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = UINT8_MAX;
	static int64_t x11 = -1LL;

    t2 = (x9>((x10%x11)|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 0U;
	uint64_t x14 = UINT64_MAX;
	int32_t x16 = INT32_MAX;
	static volatile int32_t t3 = 4182452;

    t3 = (x13>((x14%x15)|x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 0;
	static volatile uint16_t x18 = UINT16_MAX;
	int64_t x19 = 6858LL;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 3567;

    t4 = (x17>((x18%x19)|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	volatile uint8_t x22 = 0U;
	uint16_t x24 = 7U;
	volatile int32_t t5 = -603357745;

    t5 = (x21>((x22%x23)|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	uint32_t x27 = 15U;
	volatile int16_t x28 = -79;

    t6 = (x25>((x26%x27)|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x31 = -1;
	volatile int32_t x32 = -1;
	int32_t t7 = 1;

    t7 = (x29>((x30%x31)|x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 127423030U;
	volatile int64_t x34 = INT64_MIN;
	volatile uint32_t x36 = 230959U;
	volatile int32_t t8 = -1982;

    t8 = (x33>((x34%x35)|x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 0U;
	static int32_t x38 = -536182248;
	volatile int32_t x39 = INT32_MAX;
	int16_t x40 = 0;

    t9 = (x37>((x38%x39)|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = -1;
	static int16_t x42 = INT16_MAX;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MAX;

    t10 = (x41>((x42%x43)|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	volatile int64_t x48 = 915941449616LL;

    t11 = (x45>((x46%x47)|x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x50 = INT16_MAX;
	static volatile uint64_t x51 = 28680LLU;
	int64_t x52 = INT64_MIN;

    t12 = (x49>((x50%x51)|x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -51902;
	static int8_t x54 = INT8_MAX;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = 1984929U;
	int32_t t13 = 6;

    t13 = (x53>((x54%x55)|x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 795U;
	volatile int8_t x58 = -1;
	volatile int32_t t14 = 43389772;

    t14 = (x57>((x58%x59)|x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	int16_t x64 = -1;
	int32_t t15 = -248544;

    t15 = (x61>((x62%x63)|x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MIN;

    t16 = (x65>((x66%x67)|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x69 = -1;
	int32_t x71 = INT32_MAX;
	uint64_t x72 = 3712995758420LLU;
	volatile int32_t t17 = -10;

    t17 = (x69>((x70%x71)|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = -107028533;
	int16_t x74 = -1;
	static volatile int8_t x75 = -5;
	int64_t x76 = -1LL;

    t18 = (x73>((x74%x75)|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x77 = UINT32_MAX;
	int8_t x80 = INT8_MIN;
	static int32_t t19 = 6;

    t19 = (x77>((x78%x79)|x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	volatile uint16_t x83 = 1U;
	uint32_t x84 = 219012293U;
	volatile int32_t t20 = -1;

    t20 = (x81>((x82%x83)|x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MAX;
	int32_t x87 = 342167;
	static int16_t x88 = -66;
	int32_t t21 = -45369803;

    t21 = (x85>((x86%x87)|x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x91 = 89;
	int32_t t22 = 6699;

    t22 = (x89>((x90%x91)|x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MIN;
	volatile int64_t x100 = INT64_MAX;
	int32_t t23 = -90689;

    t23 = (x97>((x98%x99)|x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x101 = UINT64_MAX;
	int32_t x102 = -1;
	volatile int16_t x103 = 13;
	static uint16_t x104 = UINT16_MAX;
	static int32_t t24 = 14996258;

    t24 = (x101>((x102%x103)|x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x106 = -1;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	int32_t t25 = 1;

    t25 = (x105>((x106%x107)|x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x110 = 4U;
	uint16_t x111 = 6U;
	int32_t x112 = 4053;
	volatile int32_t t26 = 21496;

    t26 = (x109>((x110%x111)|x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x113 = 981116460884LLU;
	static int64_t x114 = INT64_MAX;
	volatile int8_t x115 = -1;
	int32_t t27 = 924;

    t27 = (x113>((x114%x115)|x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x118 = INT32_MIN;
	static int64_t x119 = INT64_MIN;
	static uint64_t x120 = UINT64_MAX;
	static volatile int32_t t28 = -1;

    t28 = (x117>((x118%x119)|x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = 2U;
	int32_t x122 = INT32_MIN;
	static volatile int16_t x123 = -199;
	int8_t x124 = -11;
	int32_t t29 = 12018827;

    t29 = (x121>((x122%x123)|x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x125 = INT16_MIN;
	volatile int32_t x128 = 235453883;
	int32_t t30 = -51692;

    t30 = (x125>((x126%x127)|x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x130 = UINT64_MAX;
	volatile int32_t x131 = -1;
	volatile int64_t x132 = 214708787863LL;
	volatile int32_t t31 = 200192;

    t31 = (x129>((x130%x131)|x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x134 = INT32_MIN;
	volatile int32_t x135 = -3948737;
	uint32_t x136 = 8286U;
	int32_t t32 = 1124;

    t32 = (x133>((x134%x135)|x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MAX;
	static int64_t x138 = -1LL;
	uint64_t x139 = UINT64_MAX;
	int16_t x140 = -13105;
	static int32_t t33 = 1332;

    t33 = (x137>((x138%x139)|x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = -1;
	uint64_t x142 = 887446LLU;
	uint32_t x143 = 2U;
	int32_t t34 = 146261772;

    t34 = (x141>((x142%x143)|x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = -88539;
	static uint64_t x147 = 178696821LLU;
	volatile int32_t t35 = 14859311;

    t35 = (x145>((x146%x147)|x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x150 = INT64_MIN;
	static volatile int64_t x151 = INT64_MIN;
	uint64_t x152 = 2528003613LLU;

    t36 = (x149>((x150%x151)|x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MIN;
	int64_t x155 = INT64_MIN;
	int32_t t37 = -532;

    t37 = (x153>((x154%x155)|x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x157 = 1U;
	volatile uint16_t x159 = 13U;
	int32_t t38 = -2609;

    t38 = (x157>((x158%x159)|x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = -1;
	uint8_t x163 = 119U;
	static uint16_t x164 = 106U;
	int32_t t39 = 42;

    t39 = (x161>((x162%x163)|x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MAX;
	static int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	static volatile int8_t x168 = INT8_MAX;
	volatile int32_t t40 = -440395;

    t40 = (x165>((x166%x167)|x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x169 = 5U;
	uint8_t x170 = 1U;
	uint32_t x172 = UINT32_MAX;
	int32_t t41 = 455;

    t41 = (x169>((x170%x171)|x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = -1;
	uint64_t x174 = 83LLU;
	volatile int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	int32_t t42 = 3016732;

    t42 = (x173>((x174%x175)|x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x177 = 12U;
	uint64_t x178 = 170897221053652LLU;
	int32_t x179 = INT32_MIN;
	uint16_t x180 = 11U;
	int32_t t43 = 48030269;

    t43 = (x177>((x178%x179)|x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x182 = -1LL;
	int32_t x184 = -1;
	volatile int32_t t44 = 6551;

    t44 = (x181>((x182%x183)|x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x186 = -1;
	int32_t x187 = -1;
	int64_t x188 = INT64_MAX;
	volatile int32_t t45 = 464;

    t45 = (x185>((x186%x187)|x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MAX;
	static volatile uint8_t x190 = 4U;
	static int64_t x191 = -1LL;
	int32_t t46 = -1850717;

    t46 = (x189>((x190%x191)|x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x193 = INT8_MIN;
	volatile int8_t x195 = 1;
	uint64_t x196 = 8749240852936306LLU;
	int32_t t47 = -46982636;

    t47 = (x193>((x194%x195)|x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = INT32_MAX;
	static int16_t x198 = INT16_MIN;
	int16_t x200 = -1;
	int32_t t48 = -39;

    t48 = (x197>((x198%x199)|x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x201 = 190121862503LLU;
	int8_t x202 = INT8_MIN;
	static uint8_t x203 = 41U;
	volatile int32_t t49 = -6;

    t49 = (x201>((x202%x203)|x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x206 = INT8_MIN;
	int16_t x207 = -7;
	uint8_t x208 = UINT8_MAX;
	int32_t t50 = 11178111;

    t50 = (x205>((x206%x207)|x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = -1;
	uint64_t x211 = 77848796118354LLU;
	uint16_t x212 = 3201U;
	volatile int32_t t51 = -250515;

    t51 = (x209>((x210%x211)|x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x213 = INT16_MIN;
	static int16_t x214 = -52;
	static int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MIN;

    t52 = (x213>((x214%x215)|x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = INT64_MAX;
	uint16_t x218 = UINT16_MAX;
	int64_t x220 = INT64_MIN;
	int32_t t53 = 925195;

    t53 = (x217>((x218%x219)|x220));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x222 = -1;
	int16_t x223 = INT16_MAX;
	volatile uint32_t x224 = 0U;

    t54 = (x221>((x222%x223)|x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = 1;
	int32_t x226 = INT32_MIN;
	int16_t x227 = -1;
	int16_t x228 = -1;
	static int32_t t55 = -93;

    t55 = (x225>((x226%x227)|x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x230 = 8859661LL;
	int64_t x231 = INT64_MAX;
	volatile uint64_t x232 = UINT64_MAX;

    t56 = (x229>((x230%x231)|x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	volatile int16_t x235 = INT16_MAX;
	int64_t x236 = 30105LL;
	static int32_t t57 = -1;

    t57 = (x233>((x234%x235)|x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x237 = INT32_MAX;
	volatile int16_t x238 = INT16_MIN;
	int16_t x240 = -1;
	int32_t t58 = 192912069;

    t58 = (x237>((x238%x239)|x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x242 = 54470229;
	uint64_t x243 = 7765812524172325957LLU;
	int64_t x244 = INT64_MIN;
	volatile int32_t t59 = -13489;

    t59 = (x241>((x242%x243)|x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x245 = 12;
	int64_t x247 = INT64_MIN;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t60 = 1;

    t60 = (x245>((x246%x247)|x248));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x249 = 29764U;
	volatile int16_t x250 = -1;
	volatile int64_t x252 = 4527522051921LL;

    t61 = (x249>((x250%x251)|x252));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x253 = 7U;
	int32_t x254 = INT32_MAX;
	int16_t x255 = INT16_MIN;
	int32_t x256 = 1559407;
	volatile int32_t t62 = 193;

    t62 = (x253>((x254%x255)|x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = -341216400353098LL;
	int32_t x258 = 173674961;
	uint16_t x260 = 20U;
	static volatile int32_t t63 = 6461510;

    t63 = (x257>((x258%x259)|x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x261 = INT64_MIN;
	static volatile uint8_t x262 = UINT8_MAX;
	int16_t x263 = INT16_MAX;
	volatile int32_t x264 = 8082;
	volatile int32_t t64 = 8314426;

    t64 = (x261>((x262%x263)|x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = -1;
	uint64_t x266 = UINT64_MAX;
	uint64_t x267 = UINT64_MAX;
	static volatile uint8_t x268 = UINT8_MAX;

    t65 = (x265>((x266%x267)|x268));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = 7;
	int16_t x270 = INT16_MAX;
	static int32_t x271 = INT32_MIN;
	uint32_t x272 = UINT32_MAX;
	static volatile int32_t t66 = 142603;

    t66 = (x269>((x270%x271)|x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x273 = -1;
	uint8_t x274 = UINT8_MAX;
	static volatile int16_t x275 = -280;
	int8_t x276 = -6;

    t67 = (x273>((x274%x275)|x276));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x277 = 53U;
	uint32_t x278 = 1018U;
	int64_t x279 = INT64_MAX;
	volatile int32_t t68 = 15250;

    t68 = (x277>((x278%x279)|x280));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x281 = -27LL;
	volatile int8_t x282 = INT8_MIN;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MIN;
	int32_t t69 = 305714;

    t69 = (x281>((x282%x283)|x284));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x286 = 50U;
	int32_t x287 = INT32_MIN;
	static int16_t x288 = 1;
	volatile int32_t t70 = -1583;

    t70 = (x285>((x286%x287)|x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = -1;
	uint16_t x290 = 16998U;
	uint64_t x291 = 2370657571LLU;
	static int32_t x292 = INT32_MIN;
	static volatile int32_t t71 = 986;

    t71 = (x289>((x290%x291)|x292));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x294 = 0U;
	int32_t x295 = INT32_MIN;
	int8_t x296 = -1;
	volatile int32_t t72 = -242168011;

    t72 = (x293>((x294%x295)|x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = -48;
	uint64_t x298 = UINT64_MAX;
	int8_t x300 = 1;
	int32_t t73 = 3;

    t73 = (x297>((x298%x299)|x300));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x301 = UINT16_MAX;
	int32_t x302 = -91;
	int32_t x303 = 68030569;
	int16_t x304 = -6;
	static int32_t t74 = -963950783;

    t74 = (x301>((x302%x303)|x304));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x305 = 3980799395095983LLU;
	int8_t x306 = -1;
	int32_t x307 = -23;
	int8_t x308 = INT8_MAX;
	int32_t t75 = 68;

    t75 = (x305>((x306%x307)|x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = -390;
	uint64_t x312 = UINT64_MAX;
	static volatile int32_t t76 = 93;

    t76 = (x309>((x310%x311)|x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = -195332;
	volatile uint8_t x314 = 29U;
	uint8_t x316 = 6U;
	static int32_t t77 = -1151;

    t77 = (x313>((x314%x315)|x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x317 = INT8_MIN;
	uint64_t x318 = 131530022LLU;
	int32_t x319 = INT32_MAX;
	volatile int32_t t78 = 878;

    t78 = (x317>((x318%x319)|x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x321 = 1995LL;
	static uint16_t x322 = 20556U;
	int64_t x323 = -1LL;
	int64_t x324 = INT64_MIN;
	static volatile int32_t t79 = -648984;

    t79 = (x321>((x322%x323)|x324));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x325 = -1LL;
	volatile uint16_t x326 = 8347U;
	int16_t x328 = 2916;
	volatile int32_t t80 = 320640882;

    t80 = (x325>((x326%x327)|x328));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x329 = 2046U;
	volatile int8_t x330 = INT8_MAX;
	int64_t x332 = INT64_MAX;
	int32_t t81 = -175006;

    t81 = (x329>((x330%x331)|x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = INT8_MAX;
	static uint32_t x334 = 249692867U;
	static int32_t x335 = -174071;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t82 = 22283291;

    t82 = (x333>((x334%x335)|x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x337 = 15U;
	int32_t x338 = 1;
	uint16_t x339 = 7U;
	static int32_t x340 = 1;
	volatile int32_t t83 = -31185;

    t83 = (x337>((x338%x339)|x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x342 = 205122U;

    t84 = (x341>((x342%x343)|x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = INT8_MAX;
	int64_t x346 = INT64_MIN;
	volatile uint16_t x347 = 63U;
	static int64_t x348 = -1LL;
	static volatile int32_t t85 = 70036508;

    t85 = (x345>((x346%x347)|x348));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x350 = 6637934424069772807LLU;
	int16_t x351 = INT16_MIN;
	volatile int32_t t86 = 215074;

    t86 = (x349>((x350%x351)|x352));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x353 = -145;
	volatile uint64_t x354 = 25521LLU;
	uint16_t x355 = 3427U;
	int32_t x356 = -1;
	volatile int32_t t87 = -428915135;

    t87 = (x353>((x354%x355)|x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x358 = 3756939U;
	int32_t t88 = 6523533;

    t88 = (x357>((x358%x359)|x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x361 = -1;
	volatile int32_t x362 = -1;
	volatile uint32_t x364 = UINT32_MAX;
	volatile int32_t t89 = -31678;

    t89 = (x361>((x362%x363)|x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x367 = -1LL;
	int64_t x368 = INT64_MIN;
	volatile int32_t t90 = 32;

    t90 = (x365>((x366%x367)|x368));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x369 = INT32_MIN;
	uint32_t x370 = UINT32_MAX;
	int8_t x371 = INT8_MAX;
	static int32_t t91 = -1945598;

    t91 = (x369>((x370%x371)|x372));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x373 = 11;
	uint32_t x374 = UINT32_MAX;
	static volatile int64_t x375 = INT64_MAX;
	int8_t x376 = 15;
	static volatile int32_t t92 = -4023742;

    t92 = (x373>((x374%x375)|x376));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x378 = -711;
	int8_t x380 = INT8_MAX;
	volatile int32_t t93 = 100058247;

    t93 = (x377>((x378%x379)|x380));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x381 = 1U;
	int32_t x382 = INT32_MAX;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = -1;
	volatile int32_t t94 = 6045;

    t94 = (x381>((x382%x383)|x384));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x385 = 128U;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 41U;
	int8_t x388 = -1;
	int32_t t95 = 2584939;

    t95 = (x385>((x386%x387)|x388));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x389 = INT16_MIN;
	volatile uint8_t x390 = 114U;
	uint32_t x391 = 8620571U;
	uint8_t x392 = 0U;
	static int32_t t96 = -52418182;

    t96 = (x389>((x390%x391)|x392));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x395 = 94U;

    t97 = (x393>((x394%x395)|x396));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x398 = INT8_MIN;
	static int32_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	int32_t t98 = 3;

    t98 = (x397>((x398%x399)|x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x401 = -101;
	int32_t x402 = 1379148;
	int32_t x403 = INT32_MAX;
	int32_t x404 = INT32_MIN;
	volatile int32_t t99 = 35;

    t99 = (x401>((x402%x403)|x404));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x405 = 10097357LLU;
	int8_t x406 = -4;
	static int8_t x407 = 4;
	int64_t x408 = -1LL;
	static volatile int32_t t100 = 133328600;

    t100 = (x405>((x406%x407)|x408));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x409 = 7313761LLU;
	volatile int8_t x410 = INT8_MIN;
	uint16_t x411 = UINT16_MAX;
	volatile int16_t x412 = INT16_MAX;
	int32_t t101 = -6;

    t101 = (x409>((x410%x411)|x412));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x413 = INT16_MIN;
	uint64_t x414 = 0LLU;
	int32_t t102 = 188;

    t102 = (x413>((x414%x415)|x416));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x417 = 5;
	int8_t x418 = INT8_MAX;
	int32_t x419 = INT32_MAX;
	volatile uint32_t x420 = 257U;

    t103 = (x417>((x418%x419)|x420));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x422 = 155LLU;
	static uint32_t x423 = 25595711U;
	uint32_t x424 = 0U;
	int32_t t104 = -29395;

    t104 = (x421>((x422%x423)|x424));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x425 = 0;
	volatile int64_t x426 = INT64_MIN;
	uint32_t x427 = 118236U;
	uint32_t x428 = 24U;

    t105 = (x425>((x426%x427)|x428));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x429 = INT32_MAX;
	int8_t x430 = 0;
	int8_t x431 = 52;
	static uint64_t x432 = 35LLU;
	volatile int32_t t106 = 1382;

    t106 = (x429>((x430%x431)|x432));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x433 = INT64_MIN;
	int32_t x435 = INT32_MAX;
	int64_t x436 = INT64_MAX;
	static int32_t t107 = -1062;

    t107 = (x433>((x434%x435)|x436));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x437 = 47022180213923468LLU;
	int16_t x438 = INT16_MIN;
	uint16_t x439 = 2U;
	static uint16_t x440 = 44U;
	int32_t t108 = 3989954;

    t108 = (x437>((x438%x439)|x440));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x441 = INT32_MIN;
	static int32_t x442 = INT32_MIN;
	int64_t x444 = 14LL;

    t109 = (x441>((x442%x443)|x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x446 = 8U;
	static int8_t x447 = INT8_MAX;
	int32_t t110 = -103588747;

    t110 = (x445>((x446%x447)|x448));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x449 = UINT64_MAX;
	static uint16_t x450 = 17039U;
	uint16_t x451 = UINT16_MAX;
	static volatile uint64_t x452 = 1LLU;
	volatile int32_t t111 = -2515;

    t111 = (x449>((x450%x451)|x452));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x453 = 6691;
	static int8_t x454 = -4;
	int16_t x455 = INT16_MAX;
	uint16_t x456 = UINT16_MAX;
	static int32_t t112 = -65495510;

    t112 = (x453>((x454%x455)|x456));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x457 = -16;
	int32_t x458 = -1;
	int32_t x459 = INT32_MIN;
	uint32_t x460 = 0U;

    t113 = (x457>((x458%x459)|x460));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x461 = 105U;
	int64_t x462 = INT64_MAX;
	uint16_t x463 = 116U;
	volatile int32_t t114 = 3681;

    t114 = (x461>((x462%x463)|x464));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MAX;
	uint32_t x467 = 2317U;
	volatile int64_t x468 = -53573214908135LL;

    t115 = (x465>((x466%x467)|x468));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x469 = -1;
	int16_t x470 = 425;
	static uint16_t x471 = 10304U;
	int32_t x472 = INT32_MIN;
	volatile int32_t t116 = -28;

    t116 = (x469>((x470%x471)|x472));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x473 = UINT16_MAX;
	int16_t x474 = INT16_MIN;
	uint32_t x475 = 10U;
	static int16_t x476 = 28;
	int32_t t117 = -901;

    t117 = (x473>((x474%x475)|x476));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x478 = 6U;
	int16_t x479 = 3;
	volatile uint64_t x480 = 41157702598LLU;
	static int32_t t118 = -6906684;

    t118 = (x477>((x478%x479)|x480));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x483 = INT32_MIN;
	uint64_t x484 = UINT64_MAX;

    t119 = (x481>((x482%x483)|x484));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x485 = -1;
	int8_t x487 = INT8_MAX;
	uint64_t x488 = UINT64_MAX;
	volatile int32_t t120 = -46492818;

    t120 = (x485>((x486%x487)|x488));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x491 = INT64_MAX;
	volatile int32_t x492 = INT32_MIN;
	int32_t t121 = 1;

    t121 = (x489>((x490%x491)|x492));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x493 = -1;
	int8_t x494 = -4;
	static int32_t x496 = 435183;
	int32_t t122 = -5340;

    t122 = (x493>((x494%x495)|x496));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x497 = INT32_MAX;
	uint64_t x499 = 7050216136797368218LLU;
	static uint32_t x500 = 39854427U;
	volatile int32_t t123 = -176;

    t123 = (x497>((x498%x499)|x500));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x501 = 762108667852686786LLU;
	int64_t x502 = 2204737494544LL;
	uint8_t x503 = 61U;
	uint8_t x504 = UINT8_MAX;
	static volatile int32_t t124 = -125;

    t124 = (x501>((x502%x503)|x504));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x505 = 67996;
	int8_t x506 = INT8_MAX;
	int32_t x507 = INT32_MIN;
	int8_t x508 = -1;

    t125 = (x505>((x506%x507)|x508));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x510 = 9730102560563LLU;
	int32_t x512 = -140607;

    t126 = (x509>((x510%x511)|x512));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x513 = -1;
	uint32_t x514 = UINT32_MAX;
	uint8_t x515 = UINT8_MAX;
	int16_t x516 = -1;
	volatile int32_t t127 = -428227;

    t127 = (x513>((x514%x515)|x516));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x517 = UINT64_MAX;
	int64_t x518 = 749775112538755059LL;
	static uint16_t x519 = 297U;
	int8_t x520 = -1;
	static volatile int32_t t128 = 5687326;

    t128 = (x517>((x518%x519)|x520));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x521 = INT64_MIN;
	static int64_t x523 = -1LL;
	volatile int32_t x524 = -1;
	int32_t t129 = -85;

    t129 = (x521>((x522%x523)|x524));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x525 = 60;
	int32_t x526 = INT32_MAX;
	uint8_t x527 = 14U;
	volatile int32_t t130 = 0;

    t130 = (x525>((x526%x527)|x528));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x529 = INT64_MIN;
	uint32_t x531 = 873U;
	volatile int64_t x532 = -76208LL;
	int32_t t131 = -13197;

    t131 = (x529>((x530%x531)|x532));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x535 = INT32_MIN;
	int32_t x536 = INT32_MIN;
	volatile int32_t t132 = 101837;

    t132 = (x533>((x534%x535)|x536));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x537 = UINT8_MAX;
	int32_t x538 = INT32_MIN;
	uint16_t x540 = 1U;

    t133 = (x537>((x538%x539)|x540));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x543 = -1;
	uint32_t x544 = UINT32_MAX;
	volatile int32_t t134 = 2;

    t134 = (x541>((x542%x543)|x544));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x546 = INT64_MIN;
	static uint16_t x547 = 22U;
	uint8_t x548 = UINT8_MAX;
	int32_t t135 = 383266616;

    t135 = (x545>((x546%x547)|x548));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x549 = UINT32_MAX;
	static uint16_t x550 = 8162U;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t136 = 666580;

    t136 = (x549>((x550%x551)|x552));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x553 = INT32_MAX;
	int32_t x554 = INT32_MIN;
	int16_t x555 = -1;
	int32_t x556 = INT32_MIN;
	volatile int32_t t137 = -203;

    t137 = (x553>((x554%x555)|x556));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x557 = UINT32_MAX;
	static int32_t x559 = INT32_MAX;
	int32_t x560 = 237717657;
	volatile int32_t t138 = 1;

    t138 = (x557>((x558%x559)|x560));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x562 = 290108590LLU;
	uint32_t x563 = 49811U;
	volatile uint8_t x564 = UINT8_MAX;
	volatile int32_t t139 = 20484;

    t139 = (x561>((x562%x563)|x564));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x565 = INT64_MIN;
	int16_t x566 = INT16_MIN;
	uint32_t x567 = 9U;
	uint8_t x568 = 50U;
	int32_t t140 = 536;

    t140 = (x565>((x566%x567)|x568));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x569 = UINT16_MAX;
	static int32_t x570 = 482079;
	volatile int64_t x571 = INT64_MIN;
	int32_t t141 = -475173;

    t141 = (x569>((x570%x571)|x572));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x574 = INT32_MIN;
	static uint16_t x575 = 1U;
	uint64_t x576 = 0LLU;
	volatile int32_t t142 = 443093356;

    t142 = (x573>((x574%x575)|x576));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x578 = INT8_MAX;
	static int8_t x580 = 5;
	static int32_t t143 = -134089881;

    t143 = (x577>((x578%x579)|x580));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x581 = INT16_MAX;
	volatile int16_t x582 = INT16_MIN;
	volatile uint32_t x583 = UINT32_MAX;
	int32_t x584 = INT32_MIN;
	volatile int32_t t144 = 151;

    t144 = (x581>((x582%x583)|x584));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x585 = UINT64_MAX;
	int16_t x586 = -1;
	volatile int8_t x587 = INT8_MIN;
	int8_t x588 = 13;

    t145 = (x585>((x586%x587)|x588));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x590 = 570679;
	uint8_t x591 = UINT8_MAX;
	uint8_t x592 = 50U;

    t146 = (x589>((x590%x591)|x592));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t t147 = 27990524;

    t147 = (x593>((x594%x595)|x596));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x597 = 0U;
	int16_t x599 = INT16_MAX;
	int32_t t148 = 122309;

    t148 = (x597>((x598%x599)|x600));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x601 = 7250685561089678694LLU;
	int32_t x602 = -1790255;
	uint8_t x603 = 22U;
	int64_t x604 = INT64_MIN;
	volatile int32_t t149 = -36791223;

    t149 = (x601>((x602%x603)|x604));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x605 = 20;
	uint8_t x607 = 5U;
	int64_t x608 = INT64_MIN;
	int32_t t150 = -14;

    t150 = (x605>((x606%x607)|x608));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x609 = INT8_MIN;
	static uint64_t x610 = 274670202249850LLU;
	int8_t x612 = -62;
	int32_t t151 = 2;

    t151 = (x609>((x610%x611)|x612));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x613 = INT32_MIN;
	volatile int8_t x614 = 24;
	uint32_t x616 = 3U;
	int32_t t152 = -246285;

    t152 = (x613>((x614%x615)|x616));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x617 = -7;
	static uint64_t x619 = 3526836589LLU;
	int64_t x620 = 10680832LL;

    t153 = (x617>((x618%x619)|x620));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x621 = 15U;
	uint16_t x622 = UINT16_MAX;
	int16_t x623 = -15285;
	volatile uint64_t x624 = 161LLU;
	int32_t t154 = 36;

    t154 = (x621>((x622%x623)|x624));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x625 = INT8_MIN;
	static int16_t x626 = -1680;
	int32_t x627 = INT32_MIN;
	int16_t x628 = INT16_MIN;
	volatile int32_t t155 = -5442;

    t155 = (x625>((x626%x627)|x628));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x629 = UINT32_MAX;
	uint16_t x630 = UINT16_MAX;
	uint32_t x631 = 5014U;
	uint16_t x632 = 265U;
	volatile int32_t t156 = 13;

    t156 = (x629>((x630%x631)|x632));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x633 = -2;
	volatile int32_t x634 = INT32_MIN;
	int16_t x635 = INT16_MIN;
	static int32_t x636 = INT32_MIN;
	int32_t t157 = -1178;

    t157 = (x633>((x634%x635)|x636));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x637 = 14LLU;
	int8_t x638 = 2;
	int8_t x640 = -1;
	int32_t t158 = 10;

    t158 = (x637>((x638%x639)|x640));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x641 = 4157338LL;
	int16_t x642 = -3;
	static int16_t x643 = INT16_MIN;
	int32_t t159 = 357700628;

    t159 = (x641>((x642%x643)|x644));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x645 = 9U;
	int16_t x646 = INT16_MIN;
	uint64_t x647 = 15063815475LLU;
	int8_t x648 = -1;
	int32_t t160 = 55720572;

    t160 = (x645>((x646%x647)|x648));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x649 = INT8_MIN;
	int16_t x650 = -233;
	static int64_t x651 = -1LL;
	int8_t x652 = INT8_MAX;
	volatile int32_t t161 = 468;

    t161 = (x649>((x650%x651)|x652));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x653 = INT16_MIN;
	int64_t x654 = INT64_MAX;
	static int64_t x655 = -1LL;
	static int32_t x656 = INT32_MIN;
	static int32_t t162 = -903673272;

    t162 = (x653>((x654%x655)|x656));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x657 = 2372U;
	volatile int16_t x658 = -8113;
	static uint64_t x659 = 5320LLU;
	volatile int32_t t163 = 209;

    t163 = (x657>((x658%x659)|x660));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x661 = INT32_MIN;
	uint64_t x662 = 21LLU;
	uint64_t x663 = 7LLU;
	int32_t t164 = -2022;

    t164 = (x661>((x662%x663)|x664));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x665 = INT16_MIN;
	volatile int8_t x666 = INT8_MIN;
	volatile int64_t x667 = 3634847408125447185LL;
	int16_t x668 = -2123;
	int32_t t165 = 1047;

    t165 = (x665>((x666%x667)|x668));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x669 = 1U;
	static uint64_t x670 = UINT64_MAX;
	volatile uint64_t x672 = 55777459842427LLU;
	int32_t t166 = 13647848;

    t166 = (x669>((x670%x671)|x672));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x674 = -1;
	int8_t x675 = INT8_MAX;
	int32_t t167 = -155822034;

    t167 = (x673>((x674%x675)|x676));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x677 = INT16_MAX;
	uint8_t x679 = 1U;
	volatile int32_t x680 = INT32_MIN;

    t168 = (x677>((x678%x679)|x680));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x681 = -1;
	uint8_t x682 = 105U;

    t169 = (x681>((x682%x683)|x684));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x685 = 19U;
	static uint8_t x686 = 0U;
	int8_t x687 = INT8_MIN;
	int16_t x688 = INT16_MIN;
	volatile int32_t t170 = 102901;

    t170 = (x685>((x686%x687)|x688));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x689 = -1;
	int8_t x690 = INT8_MIN;
	int8_t x692 = -1;
	int32_t t171 = 2448;

    t171 = (x689>((x690%x691)|x692));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x693 = INT32_MIN;
	volatile int64_t x694 = 17465038413756LL;
	int8_t x695 = -1;
	int16_t x696 = INT16_MIN;
	int32_t t172 = -53370088;

    t172 = (x693>((x694%x695)|x696));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x697 = INT64_MIN;
	uint16_t x698 = 29036U;
	int64_t x699 = -983342106505373367LL;
	uint64_t x700 = UINT64_MAX;
	int32_t t173 = 12248;

    t173 = (x697>((x698%x699)|x700));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x701 = 79U;
	int8_t x702 = INT8_MIN;
	uint8_t x703 = UINT8_MAX;
	int32_t x704 = INT32_MAX;
	int32_t t174 = -1;

    t174 = (x701>((x702%x703)|x704));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x709 = INT32_MIN;
	volatile int16_t x710 = -1;
	uint64_t x712 = 2398631LLU;
	static int32_t t175 = -1011;

    t175 = (x709>((x710%x711)|x712));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x713 = INT16_MAX;
	static int32_t x714 = 137;
	int8_t x715 = INT8_MIN;
	volatile uint64_t x716 = 1792788829745352LLU;

    t176 = (x713>((x714%x715)|x716));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x717 = 29;
	int8_t x720 = -1;
	int32_t t177 = -112510900;

    t177 = (x717>((x718%x719)|x720));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x721 = 8920427221165993LLU;
	volatile int16_t x724 = INT16_MIN;
	volatile int32_t t178 = -288550;

    t178 = (x721>((x722%x723)|x724));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x726 = INT16_MIN;
	int64_t x727 = INT64_MIN;
	int16_t x728 = -1;
	int32_t t179 = -28175969;

    t179 = (x725>((x726%x727)|x728));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x729 = INT16_MIN;
	int32_t x730 = INT32_MIN;
	static int32_t x731 = INT32_MIN;
	int32_t t180 = -59225;

    t180 = (x729>((x730%x731)|x732));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x733 = -72;
	int8_t x734 = -1;
	static uint16_t x735 = 4642U;
	uint64_t x736 = UINT64_MAX;
	volatile int32_t t181 = -759;

    t181 = (x733>((x734%x735)|x736));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x737 = 13272747522559833LL;
	static int16_t x738 = -956;
	uint32_t x739 = 60U;
	volatile uint16_t x740 = 154U;
	int32_t t182 = 11990123;

    t182 = (x737>((x738%x739)|x740));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x741 = -22;
	static int64_t x742 = INT64_MIN;
	int16_t x743 = -1;
	static int64_t x744 = INT64_MIN;
	int32_t t183 = -8;

    t183 = (x741>((x742%x743)|x744));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x745 = 310;
	int64_t x746 = 1869043605215LL;
	int16_t x747 = 9938;
	uint16_t x748 = 9980U;
	static volatile int32_t t184 = 196130;

    t184 = (x745>((x746%x747)|x748));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x749 = 7U;
	static uint8_t x750 = UINT8_MAX;
	static uint16_t x751 = 226U;
	int16_t x752 = 3216;
	volatile int32_t t185 = 9;

    t185 = (x749>((x750%x751)|x752));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x753 = 984;
	int64_t x754 = INT64_MAX;
	int64_t x755 = 179960LL;
	volatile int32_t t186 = 404742670;

    t186 = (x753>((x754%x755)|x756));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x757 = UINT16_MAX;
	volatile uint16_t x759 = 1U;
	volatile int16_t x760 = 478;
	int32_t t187 = -676342625;

    t187 = (x757>((x758%x759)|x760));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x761 = -227;
	uint32_t x762 = UINT32_MAX;
	static volatile int32_t x763 = INT32_MAX;
	int16_t x764 = INT16_MAX;
	int32_t t188 = 83191344;

    t188 = (x761>((x762%x763)|x764));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x765 = INT16_MAX;
	static int64_t x767 = 34203031191723LL;
	int32_t t189 = 57035;

    t189 = (x765>((x766%x767)|x768));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x769 = 21543662;
	int16_t x770 = -3298;
	uint16_t x771 = 4U;
	volatile int16_t x772 = INT16_MAX;
	volatile int32_t t190 = 50427;

    t190 = (x769>((x770%x771)|x772));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x773 = INT16_MIN;
	int32_t x774 = INT32_MAX;
	volatile int32_t x775 = INT32_MIN;
	int64_t x776 = INT64_MIN;
	int32_t t191 = -3517768;

    t191 = (x773>((x774%x775)|x776));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x777 = -59;
	static uint8_t x778 = UINT8_MAX;
	uint64_t x780 = 616402LLU;
	volatile int32_t t192 = -192619;

    t192 = (x777>((x778%x779)|x780));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x782 = 2911;
	volatile uint16_t x783 = 3991U;
	int32_t x784 = -9743249;
	static int32_t t193 = -3140866;

    t193 = (x781>((x782%x783)|x784));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x785 = 7;
	int16_t x786 = -126;
	int16_t x787 = -1;
	int8_t x788 = 7;
	volatile int32_t t194 = 3981;

    t194 = (x785>((x786%x787)|x788));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x789 = -1;
	static int8_t x790 = INT8_MIN;
	volatile int8_t x791 = 1;
	int16_t x792 = INT16_MIN;
	volatile int32_t t195 = -2893212;

    t195 = (x789>((x790%x791)|x792));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x793 = UINT8_MAX;
	volatile int64_t x794 = INT64_MIN;
	int16_t x795 = INT16_MIN;
	int64_t x796 = INT64_MIN;
	volatile int32_t t196 = 2094362;

    t196 = (x793>((x794%x795)|x796));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x802 = -1;
	int8_t x803 = INT8_MIN;
	int64_t x804 = 2158255LL;
	volatile int32_t t197 = 0;

    t197 = (x801>((x802%x803)|x804));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x805 = 0;
	uint16_t x806 = 23835U;
	uint8_t x807 = 48U;
	int8_t x808 = INT8_MAX;
	int32_t t198 = -3743;

    t198 = (x805>((x806%x807)|x808));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x809 = 1817816337U;
	int8_t x810 = -15;
	int32_t x811 = 31566705;
	int8_t x812 = -1;
	int32_t t199 = -6233753;

    t199 = (x809>((x810%x811)|x812));

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

