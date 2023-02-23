
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

static int64_t x1 = INT64_MIN;
int16_t x3 = INT16_MIN;
uint8_t x4 = 125U;
int16_t x8 = INT16_MAX;
int32_t x10 = 3;
volatile int16_t x12 = INT16_MIN;
int32_t x18 = 1;
uint8_t x28 = UINT8_MAX;
uint64_t x32 = 2697203933207LLU;
int32_t x34 = INT32_MAX;
static int16_t x38 = INT16_MAX;
uint32_t x39 = UINT32_MAX;
volatile int32_t x40 = -1;
int32_t x49 = 2191345;
int64_t x59 = INT64_MIN;
int64_t x61 = -1LL;
volatile int32_t t16 = 1;
int64_t x70 = INT64_MIN;
uint64_t x71 = UINT64_MAX;
static int32_t t18 = 227286;
uint8_t x79 = 47U;
volatile int8_t x83 = -1;
int32_t t21 = -1642233;
int32_t x92 = -371;
int8_t x94 = -7;
volatile int8_t x111 = INT8_MIN;
int16_t x113 = INT16_MIN;
int16_t x119 = INT16_MIN;
volatile int16_t x127 = 10;
int16_t x128 = INT16_MAX;
volatile int32_t t30 = 519638;
int16_t x129 = INT16_MAX;
int16_t x131 = INT16_MAX;
int64_t x135 = -2418111254760533LL;
int32_t t32 = 216;
int64_t x140 = INT64_MIN;
int32_t t33 = 10;
uint32_t x141 = 1669U;
volatile int16_t x150 = INT16_MAX;
static volatile int32_t x153 = 753746291;
static uint8_t x156 = 1U;
volatile int32_t t37 = 0;
int8_t x163 = INT8_MAX;
static int32_t t38 = 332188;
static int64_t x165 = INT64_MIN;
volatile int32_t x166 = -2;
int64_t x170 = -27LL;
int32_t t41 = -1215951;
volatile int64_t x178 = 1LL;
int8_t x179 = -1;
int16_t x186 = INT16_MIN;
int8_t x189 = -1;
int32_t t45 = -688118002;
static int32_t x196 = 3001070;
uint16_t x200 = UINT16_MAX;
static int16_t x201 = 13026;
static int64_t x203 = 2705475889LL;
volatile int32_t t48 = 109;
uint8_t x213 = UINT8_MAX;
int8_t x214 = -1;
uint64_t x229 = 15LLU;
int32_t t55 = 902;
volatile int32_t t56 = 1323228;
static int8_t x237 = INT8_MIN;
uint16_t x241 = UINT16_MAX;
int16_t x250 = -174;
int8_t x255 = 2;
volatile int16_t x260 = INT16_MAX;
volatile uint8_t x261 = UINT8_MAX;
uint32_t x269 = UINT32_MAX;
uint8_t x272 = 0U;
volatile int32_t t66 = 0;
uint64_t x288 = 3343780901120LLU;
static uint8_t x291 = 63U;
volatile int32_t t68 = -1;
volatile uint16_t x305 = UINT16_MAX;
volatile int32_t x308 = 3;
int64_t x316 = INT64_MIN;
int32_t t74 = 11908;
int16_t x322 = INT16_MIN;
int32_t t76 = 600642;
static uint8_t x325 = 52U;
int32_t t77 = -2;
int16_t x331 = INT16_MIN;
int16_t x333 = -1;
int32_t x336 = 201199081;
uint8_t x338 = 13U;
uint8_t x346 = 10U;
int8_t x355 = INT8_MAX;
uint8_t x357 = UINT8_MAX;
uint8_t x361 = 9U;
uint16_t x363 = UINT16_MAX;
int64_t x364 = 2097507092937362LL;
volatile uint8_t x365 = UINT8_MAX;
int32_t t87 = 2811;
volatile int8_t x370 = INT8_MIN;
int32_t x371 = -1;
uint16_t x382 = 20165U;
static int16_t x399 = INT16_MAX;
static volatile int32_t t95 = -6450366;
static int16_t x408 = INT16_MIN;
volatile int32_t t97 = 3926;
volatile int32_t x413 = 18993143;
int64_t x415 = -1LL;
static int8_t x425 = 8;
volatile uint8_t x427 = 15U;
static volatile uint64_t x431 = 4291LLU;
volatile int64_t x432 = INT64_MIN;
int64_t x433 = INT64_MIN;
static int8_t x434 = INT8_MAX;
int8_t x435 = INT8_MAX;
volatile uint64_t x447 = 418481LLU;
static uint64_t x449 = 719LLU;
uint8_t x463 = UINT8_MAX;
int32_t t110 = -1;
volatile uint64_t x469 = 591993LLU;
int16_t x471 = INT16_MIN;
int8_t x481 = INT8_MIN;
int16_t x482 = INT16_MIN;
static int32_t x483 = INT32_MAX;
uint32_t x486 = 2059U;
static volatile uint16_t x500 = UINT16_MAX;
int32_t t118 = -54539776;
int16_t x526 = INT16_MIN;
int32_t t124 = 29330128;
int16_t x532 = -292;
static uint64_t x533 = 11834LLU;
volatile uint32_t x535 = 2779U;
uint16_t x538 = UINT16_MAX;
int8_t x539 = INT8_MAX;
volatile uint16_t x540 = 3148U;
int32_t x544 = INT32_MIN;
static volatile uint64_t x548 = 2LLU;
int32_t x550 = -60051160;
int8_t x558 = INT8_MIN;
static int32_t x561 = INT32_MAX;
int8_t x563 = -13;
uint8_t x565 = 0U;
int32_t x582 = INT32_MIN;
static volatile int32_t t138 = 24755751;
int32_t x588 = INT32_MIN;
int32_t t140 = 238;
uint64_t x600 = UINT64_MAX;
uint16_t x602 = 221U;
uint16_t x615 = 97U;
volatile int32_t t146 = 11;
static int8_t x618 = INT8_MIN;
int32_t x620 = -1;
volatile int32_t t147 = 1549608;
volatile int64_t x624 = 134096LL;
int16_t x625 = INT16_MIN;
static volatile int64_t x632 = INT64_MIN;
static uint8_t x638 = 107U;
volatile uint64_t x639 = 1800561135371266066LLU;
uint8_t x640 = UINT8_MAX;
static int16_t x641 = -410;
int16_t x645 = -231;
static volatile uint8_t x649 = 0U;
uint16_t x651 = 1485U;
static int16_t x659 = 2;
volatile uint64_t x666 = 27869080612500LLU;
volatile int32_t t159 = 1;
int32_t t160 = -1177;
int8_t x675 = INT8_MAX;
volatile int16_t x677 = INT16_MAX;
int16_t x681 = INT16_MIN;
uint16_t x697 = UINT16_MAX;
uint8_t x701 = UINT8_MAX;
static uint32_t x703 = 469036U;
int16_t x706 = -1;
int64_t x708 = INT64_MIN;
static uint16_t x714 = 0U;
static uint8_t x716 = 14U;
int32_t x717 = 4;
volatile int32_t x718 = -1;
static volatile int16_t x720 = -1;
int16_t x721 = INT16_MIN;
int8_t x722 = -37;
uint64_t x731 = UINT64_MAX;
volatile int8_t x740 = -2;
int32_t t177 = 14;
int64_t x741 = INT64_MIN;
int64_t x746 = 53064258224231LL;
static int32_t x752 = INT32_MIN;
int32_t t180 = -1450090;
int32_t x761 = INT32_MIN;
volatile int64_t x766 = INT64_MIN;
volatile uint32_t x767 = UINT32_MAX;
uint16_t x776 = 55U;
uint8_t x779 = 63U;
static int8_t x792 = -63;
int32_t x802 = -1;
int32_t x807 = 265021;
uint16_t x811 = 25U;
int8_t x819 = INT8_MIN;
int32_t t196 = 14304;
int16_t x824 = -85;
volatile uint32_t x830 = 145654U;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	static volatile int32_t t0 = 177;

    t0 = (x1==((x2%x3)|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int16_t x6 = 0;
	int8_t x7 = INT8_MIN;
	int32_t t1 = 7475619;

    t1 = (x5==((x6%x7)|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int64_t x11 = INT64_MIN;
	volatile int32_t t2 = 264285;

    t2 = (x9==((x10%x11)|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 3;
	int16_t x14 = INT16_MIN;
	int16_t x15 = -168;
	volatile uint64_t x16 = UINT64_MAX;
	int32_t t3 = 903196080;

    t3 = (x13==((x14%x15)|x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile int64_t x19 = INT64_MIN;
	int16_t x20 = -2501;
	volatile int32_t t4 = 254446210;

    t4 = (x17==((x18%x19)|x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MIN;
	int8_t x22 = INT8_MIN;
	int32_t x23 = -1;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -782863824;

    t5 = (x21==((x22%x23)|x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MAX;
	int64_t x26 = INT64_MIN;
	uint8_t x27 = UINT8_MAX;
	int32_t t6 = -1414;

    t6 = (x25==((x26%x27)|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	static int32_t x30 = INT32_MIN;
	volatile uint32_t x31 = 1310905U;
	static int32_t t7 = -3;

    t7 = (x29==((x30%x31)|x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MAX;
	uint8_t x35 = 27U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -600696310;

    t8 = (x33==((x34%x35)|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	static int32_t t9 = 140198559;

    t9 = (x37==((x38%x39)|x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int64_t x42 = INT64_MAX;
	static uint16_t x43 = 32350U;
	static int64_t x44 = INT64_MIN;
	int32_t t10 = -4560;

    t10 = (x41==((x42%x43)|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	uint32_t x46 = 18912U;
	static int32_t x47 = INT32_MIN;
	uint32_t x48 = 2U;
	int32_t t11 = -17;

    t11 = (x45==((x46%x47)|x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = -44;
	uint16_t x51 = 148U;
	uint8_t x52 = 9U;
	volatile int32_t t12 = 5388;

    t12 = (x49==((x50%x51)|x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	int8_t x54 = INT8_MAX;
	uint32_t x55 = 37500U;
	uint16_t x56 = 11U;
	volatile int32_t t13 = -7109;

    t13 = (x53==((x54%x55)|x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 1;
	int32_t x58 = -1624;
	int16_t x60 = 402;
	volatile int32_t t14 = 1;

    t14 = (x57==((x58%x59)|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = -1;
	static uint8_t x63 = UINT8_MAX;
	static int32_t x64 = 15471004;
	int32_t t15 = -141430;

    t15 = (x61==((x62%x63)|x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 10U;
	int16_t x66 = 1;
	uint32_t x67 = 5758653U;
	int64_t x68 = INT64_MIN;

    t16 = (x65==((x66%x67)|x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = 11U;
	int32_t x72 = -1;
	static int32_t t17 = -3;

    t17 = (x69==((x70%x71)|x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = INT64_MAX;
	int64_t x74 = -60841619721LL;
	int8_t x75 = 59;
	int8_t x76 = INT8_MIN;

    t18 = (x73==((x74%x75)|x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	uint16_t x78 = 796U;
	static int8_t x80 = INT8_MIN;
	int32_t t19 = -3;

    t19 = (x77==((x78%x79)|x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	static int64_t x82 = INT64_MAX;
	int64_t x84 = -5313LL;
	int32_t t20 = 9;

    t20 = (x81==((x82%x83)|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -1;
	int32_t x86 = INT32_MAX;
	volatile int16_t x87 = -399;
	volatile uint16_t x88 = UINT16_MAX;

    t21 = (x85==((x86%x87)|x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int16_t x90 = -9;
	uint8_t x91 = UINT8_MAX;
	int32_t t22 = 356;

    t22 = (x89==((x90%x91)|x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	volatile uint32_t x95 = 444619U;
	int64_t x96 = INT64_MIN;
	int32_t t23 = 57;

    t23 = (x93==((x94%x95)|x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = -1;
	static int8_t x102 = -8;
	uint32_t x103 = UINT32_MAX;
	int64_t x104 = INT64_MAX;
	static volatile int32_t t24 = 150;

    t24 = (x101==((x102%x103)|x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile int16_t x108 = -12021;
	int32_t t25 = 1;

    t25 = (x105==((x106%x107)|x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -45039645677757802LL;
	uint64_t x110 = 13267LLU;
	static uint32_t x112 = 32427U;
	int32_t t26 = 39575974;

    t26 = (x109==((x110%x111)|x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x114 = -1;
	static int16_t x115 = -19;
	int32_t x116 = -1;
	int32_t t27 = -949401243;

    t27 = (x113==((x114%x115)|x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x117 = -1;
	volatile int8_t x118 = 14;
	static int16_t x120 = -1;
	static volatile int32_t t28 = -322361;

    t28 = (x117==((x118%x119)|x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x121 = UINT32_MAX;
	static int32_t x122 = INT32_MIN;
	static uint64_t x123 = UINT64_MAX;
	int8_t x124 = -1;
	int32_t t29 = -1;

    t29 = (x121==((x122%x123)|x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = -1LL;
	int8_t x126 = 1;

    t30 = (x125==((x126%x127)|x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x130 = INT32_MIN;
	uint64_t x132 = 1LLU;
	int32_t t31 = 43;

    t31 = (x129==((x130%x131)|x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MIN;
	int16_t x136 = 1;

    t32 = (x133==((x134%x135)|x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = UINT32_MAX;
	int16_t x138 = INT16_MIN;
	uint16_t x139 = 318U;

    t33 = (x137==((x138%x139)|x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x142 = -1LL;
	static int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t34 = 371950836;

    t34 = (x141==((x142%x143)|x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x145 = 158229U;
	int8_t x146 = 1;
	int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MAX;
	volatile int32_t t35 = -47643619;

    t35 = (x145==((x146%x147)|x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = -1;
	static int32_t x151 = -2;
	static uint8_t x152 = 20U;
	int32_t t36 = -4455;

    t36 = (x149==((x150%x151)|x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x154 = -1;
	static uint32_t x155 = 4U;

    t37 = (x153==((x154%x155)|x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = INT8_MAX;
	static int64_t x162 = 30266144730840LL;
	static uint32_t x164 = 2427384U;

    t38 = (x161==((x162%x163)|x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x167 = -1LL;
	int64_t x168 = -217752746LL;
	int32_t t39 = 1740817;

    t39 = (x165==((x166%x167)|x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x169 = 7473;
	static uint64_t x171 = 144887365042170661LLU;
	static int64_t x172 = -6513887LL;
	static int32_t t40 = -1;

    t40 = (x169==((x170%x171)|x172));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x173 = INT32_MIN;
	uint16_t x174 = UINT16_MAX;
	volatile int64_t x175 = -1LL;
	static int32_t x176 = -1;

    t41 = (x173==((x174%x175)|x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x177 = INT64_MAX;
	int32_t x180 = -4579;
	volatile int32_t t42 = 153857396;

    t42 = (x177==((x178%x179)|x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = 79;
	uint16_t x182 = 24184U;
	int64_t x183 = -128792LL;
	uint64_t x184 = 389087899224268912LLU;
	int32_t t43 = 6408643;

    t43 = (x181==((x182%x183)|x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = -1;
	static int32_t x187 = -521835153;
	int8_t x188 = -1;
	int32_t t44 = -3283;

    t44 = (x185==((x186%x187)|x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x190 = INT8_MIN;
	uint8_t x191 = 3U;
	static int16_t x192 = -18;

    t45 = (x189==((x190%x191)|x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x193 = INT32_MIN;
	static volatile int16_t x194 = -1;
	int64_t x195 = -55LL;
	int32_t t46 = 475;

    t46 = (x193==((x194%x195)|x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x197 = 17950612152314188LL;
	int8_t x198 = -12;
	int16_t x199 = -1;
	int32_t t47 = 2952457;

    t47 = (x197==((x198%x199)|x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x202 = 126U;
	int64_t x204 = -1LL;

    t48 = (x201==((x202%x203)|x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = 5676U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t49 = -86;

    t49 = (x205==((x206%x207)|x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = INT32_MAX;
	uint32_t x210 = 134U;
	uint32_t x211 = UINT32_MAX;
	static int8_t x212 = INT8_MAX;
	int32_t t50 = 366;

    t50 = (x209==((x210%x211)|x212));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x215 = INT16_MIN;
	int32_t x216 = -20835;
	volatile int32_t t51 = 98628274;

    t51 = (x213==((x214%x215)|x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x217 = UINT64_MAX;
	uint64_t x218 = 2LLU;
	uint16_t x219 = 156U;
	int32_t x220 = -1;
	static int32_t t52 = 1;

    t52 = (x217==((x218%x219)|x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = -1;
	int8_t x222 = INT8_MIN;
	volatile uint16_t x223 = 3U;
	static volatile uint16_t x224 = 1899U;
	int32_t t53 = -9;

    t53 = (x221==((x222%x223)|x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x225 = -16;
	uint32_t x226 = 42218727U;
	volatile int32_t x227 = -1;
	int8_t x228 = INT8_MAX;
	volatile int32_t t54 = -1;

    t54 = (x225==((x226%x227)|x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x230 = INT16_MAX;
	static int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MIN;

    t55 = (x229==((x230%x231)|x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MAX;
	int32_t x235 = INT32_MIN;
	volatile int64_t x236 = INT64_MIN;

    t56 = (x233==((x234%x235)|x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x238 = INT32_MAX;
	uint16_t x239 = UINT16_MAX;
	int16_t x240 = INT16_MIN;
	int32_t t57 = -948;

    t57 = (x237==((x238%x239)|x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x242 = 75;
	int64_t x243 = INT64_MAX;
	int32_t x244 = -1;
	int32_t t58 = -48608;

    t58 = (x241==((x242%x243)|x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x249 = -1;
	volatile int64_t x251 = INT64_MIN;
	int16_t x252 = -1;
	int32_t t59 = -243;

    t59 = (x249==((x250%x251)|x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = INT16_MAX;
	static int8_t x254 = INT8_MIN;
	int64_t x256 = INT64_MIN;
	volatile int32_t t60 = -361284;

    t60 = (x253==((x254%x255)|x256));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x257 = 2609U;
	uint64_t x258 = 5421227616934635LLU;
	uint16_t x259 = UINT16_MAX;
	static int32_t t61 = -3199998;

    t61 = (x257==((x258%x259)|x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x262 = 22694U;
	int16_t x263 = -1;
	volatile int8_t x264 = 3;
	int32_t t62 = 5485575;

    t62 = (x261==((x262%x263)|x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x265 = 1U;
	volatile int8_t x266 = INT8_MAX;
	volatile int32_t x267 = -2;
	int32_t x268 = -352;
	volatile int32_t t63 = -718;

    t63 = (x265==((x266%x267)|x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x270 = 789U;
	int32_t x271 = INT32_MAX;
	volatile int32_t t64 = 2276;

    t64 = (x269==((x270%x271)|x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x277 = INT16_MAX;
	volatile int8_t x278 = INT8_MIN;
	static volatile int8_t x279 = INT8_MIN;
	uint8_t x280 = 7U;
	volatile int32_t t65 = -95593;

    t65 = (x277==((x278%x279)|x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x281 = -1LL;
	static int8_t x282 = 57;
	static int16_t x283 = INT16_MIN;
	int8_t x284 = -4;

    t66 = (x281==((x282%x283)|x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x285 = -1;
	volatile uint64_t x286 = 4663834LLU;
	static volatile int32_t x287 = INT32_MIN;
	int32_t t67 = -23464621;

    t67 = (x285==((x286%x287)|x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x289 = 40U;
	int16_t x290 = INT16_MIN;
	int32_t x292 = INT32_MIN;

    t68 = (x289==((x290%x291)|x292));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t69 = -215163676;

    t69 = (x293==((x294%x295)|x296));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x297 = 62U;
	int32_t x298 = -1;
	uint64_t x299 = UINT64_MAX;
	static int16_t x300 = INT16_MIN;
	int32_t t70 = 1767;

    t70 = (x297==((x298%x299)|x300));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = -1;
	uint64_t x302 = UINT64_MAX;
	int64_t x303 = 4902546229100904LL;
	uint8_t x304 = 20U;
	int32_t t71 = 193;

    t71 = (x301==((x302%x303)|x304));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x306 = INT16_MIN;
	int8_t x307 = INT8_MIN;
	static int32_t t72 = -1764080;

    t72 = (x305==((x306%x307)|x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = -2004929171LL;
	int8_t x310 = -1;
	volatile int32_t x311 = INT32_MIN;
	static int32_t x312 = INT32_MIN;
	int32_t t73 = 299438577;

    t73 = (x309==((x310%x311)|x312));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x313 = -1;
	static uint32_t x314 = 574597466U;
	uint64_t x315 = 101221194LLU;

    t74 = (x313==((x314%x315)|x316));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x317 = INT16_MIN;
	uint16_t x318 = 1058U;
	int32_t x319 = INT32_MAX;
	volatile int8_t x320 = INT8_MAX;
	volatile int32_t t75 = -2967162;

    t75 = (x317==((x318%x319)|x320));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x321 = 2U;
	int8_t x323 = -32;
	uint8_t x324 = 57U;

    t76 = (x321==((x322%x323)|x324));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x326 = -2;
	static int16_t x327 = -1;
	int16_t x328 = 13;

    t77 = (x325==((x326%x327)|x328));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x329 = 60U;
	int32_t x330 = -230290109;
	int64_t x332 = -1LL;
	int32_t t78 = 116664176;

    t78 = (x329==((x330%x331)|x332));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x334 = -4521528864977957442LL;
	uint32_t x335 = 18463659U;
	int32_t t79 = -39709;

    t79 = (x333==((x334%x335)|x336));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x337 = -1;
	int8_t x339 = -1;
	int8_t x340 = -2;
	int32_t t80 = 2;

    t80 = (x337==((x338%x339)|x340));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x341 = UINT32_MAX;
	uint8_t x342 = UINT8_MAX;
	volatile uint8_t x343 = UINT8_MAX;
	int32_t x344 = -1;
	volatile int32_t t81 = 96746064;

    t81 = (x341==((x342%x343)|x344));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x345 = 2873;
	uint8_t x347 = 19U;
	int16_t x348 = -1;
	volatile int32_t t82 = 15959927;

    t82 = (x345==((x346%x347)|x348));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	int8_t x351 = -24;
	volatile int8_t x352 = 1;
	static int32_t t83 = -58054535;

    t83 = (x349==((x350%x351)|x352));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t84 = 1;

    t84 = (x353==((x354%x355)|x356));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x358 = 16;
	uint32_t x359 = 29U;
	int8_t x360 = -1;
	volatile int32_t t85 = 7;

    t85 = (x357==((x358%x359)|x360));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x362 = 2U;
	static volatile int32_t t86 = -3092;

    t86 = (x361==((x362%x363)|x364));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x366 = 970U;
	int32_t x367 = -1;
	int8_t x368 = 0;

    t87 = (x365==((x366%x367)|x368));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x369 = -1LL;
	int8_t x372 = -9;
	static int32_t t88 = 212;

    t88 = (x369==((x370%x371)|x372));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = INT8_MIN;
	uint8_t x374 = UINT8_MAX;
	uint8_t x375 = 1U;
	volatile int64_t x376 = INT64_MAX;
	volatile int32_t t89 = -48281;

    t89 = (x373==((x374%x375)|x376));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x377 = INT16_MIN;
	uint16_t x378 = UINT16_MAX;
	volatile int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t90 = -773953;

    t90 = (x377==((x378%x379)|x380));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x381 = -215;
	static volatile int8_t x383 = INT8_MAX;
	static int16_t x384 = INT16_MIN;
	static int32_t t91 = -17562;

    t91 = (x381==((x382%x383)|x384));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x385 = UINT16_MAX;
	volatile int16_t x386 = 15546;
	int64_t x387 = -1LL;
	int64_t x388 = -1LL;
	volatile int32_t t92 = -265;

    t92 = (x385==((x386%x387)|x388));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x389 = -15888332420LL;
	int32_t x390 = INT32_MIN;
	uint32_t x391 = 6U;
	int8_t x392 = INT8_MAX;
	volatile int32_t t93 = -255148956;

    t93 = (x389==((x390%x391)|x392));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x393 = 50813U;
	volatile int16_t x394 = -812;
	static int32_t x395 = INT32_MIN;
	static volatile int8_t x396 = 3;
	volatile int32_t t94 = -1;

    t94 = (x393==((x394%x395)|x396));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x397 = -1;
	int8_t x398 = -1;
	int32_t x400 = -221754733;

    t95 = (x397==((x398%x399)|x400));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x401 = 243666675680045093LL;
	uint16_t x402 = 4U;
	static int16_t x403 = 7130;
	static volatile int32_t x404 = INT32_MIN;
	int32_t t96 = -354453;

    t96 = (x401==((x402%x403)|x404));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x405 = -3544LL;
	int16_t x406 = -1;
	static volatile int32_t x407 = 31;

    t97 = (x405==((x406%x407)|x408));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x409 = INT16_MAX;
	volatile int8_t x410 = -30;
	volatile int32_t x411 = -1;
	static uint32_t x412 = 122157817U;
	int32_t t98 = -3791400;

    t98 = (x409==((x410%x411)|x412));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x414 = 223244U;
	static uint16_t x416 = 2488U;
	volatile int32_t t99 = -4027;

    t99 = (x413==((x414%x415)|x416));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x417 = 30U;
	uint8_t x418 = 23U;
	int64_t x419 = -1LL;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t100 = 282118;

    t100 = (x417==((x418%x419)|x420));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x426 = UINT64_MAX;
	static int64_t x428 = INT64_MAX;
	static int32_t t101 = -435;

    t101 = (x425==((x426%x427)|x428));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x429 = INT8_MIN;
	uint32_t x430 = 21781U;
	volatile int32_t t102 = 60;

    t102 = (x429==((x430%x431)|x432));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x436 = INT8_MIN;
	int32_t t103 = -1;

    t103 = (x433==((x434%x435)|x436));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x437 = -1LL;
	static volatile uint64_t x438 = UINT64_MAX;
	int16_t x439 = INT16_MIN;
	int64_t x440 = -1073608881747712284LL;
	int32_t t104 = -648945;

    t104 = (x437==((x438%x439)|x440));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x441 = -122;
	volatile uint8_t x442 = 1U;
	volatile int8_t x443 = INT8_MAX;
	static int8_t x444 = INT8_MIN;
	volatile int32_t t105 = -22757805;

    t105 = (x441==((x442%x443)|x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = -1;
	static int8_t x446 = INT8_MIN;
	int8_t x448 = 2;
	int32_t t106 = 380;

    t106 = (x445==((x446%x447)|x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x450 = -17;
	static int64_t x451 = INT64_MAX;
	int32_t x452 = -1;
	volatile int32_t t107 = -22;

    t107 = (x449==((x450%x451)|x452));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x453 = 742772260;
	volatile int64_t x454 = INT64_MIN;
	volatile int32_t x455 = INT32_MIN;
	int64_t x456 = INT64_MIN;
	volatile int32_t t108 = -2006004;

    t108 = (x453==((x454%x455)|x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	uint8_t x458 = 92U;
	static volatile uint16_t x459 = 51U;
	int64_t x460 = -1LL;
	int32_t t109 = -2137094;

    t109 = (x457==((x458%x459)|x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x461 = 4535374990169909LLU;
	volatile int16_t x462 = -1;
	int32_t x464 = -1;

    t110 = (x461==((x462%x463)|x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x465 = 224U;
	int8_t x466 = INT8_MIN;
	int8_t x467 = -1;
	int16_t x468 = -7;
	int32_t t111 = 490;

    t111 = (x465==((x466%x467)|x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x470 = -36851507LL;
	int64_t x472 = INT64_MAX;
	int32_t t112 = -13540122;

    t112 = (x469==((x470%x471)|x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x477 = INT8_MAX;
	volatile int8_t x478 = INT8_MAX;
	uint32_t x479 = 468U;
	int16_t x480 = INT16_MAX;
	volatile int32_t t113 = -1743;

    t113 = (x477==((x478%x479)|x480));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x484 = 0;
	int32_t t114 = 63178374;

    t114 = (x481==((x482%x483)|x484));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x485 = 2U;
	static uint16_t x487 = UINT16_MAX;
	uint64_t x488 = 20039100303176LLU;
	volatile int32_t t115 = -64470;

    t115 = (x485==((x486%x487)|x488));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x489 = INT8_MAX;
	int16_t x490 = 0;
	volatile uint64_t x491 = UINT64_MAX;
	volatile uint64_t x492 = 891501LLU;
	static int32_t t116 = -353761;

    t116 = (x489==((x490%x491)|x492));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x497 = 5;
	static int32_t x498 = -1;
	int16_t x499 = INT16_MIN;
	static int32_t t117 = -8;

    t117 = (x497==((x498%x499)|x500));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x501 = -1LL;
	static uint64_t x502 = 4530114070413386548LLU;
	static uint8_t x503 = UINT8_MAX;
	static int64_t x504 = INT64_MIN;

    t118 = (x501==((x502%x503)|x504));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x505 = INT64_MAX;
	int16_t x506 = INT16_MIN;
	int16_t x507 = INT16_MIN;
	int64_t x508 = -5277767918LL;
	volatile int32_t t119 = -40;

    t119 = (x505==((x506%x507)|x508));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x509 = INT32_MIN;
	volatile int64_t x510 = INT64_MIN;
	int32_t x511 = 666;
	volatile uint16_t x512 = 2U;
	int32_t t120 = 483;

    t120 = (x509==((x510%x511)|x512));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x513 = UINT16_MAX;
	volatile int8_t x514 = -8;
	volatile int64_t x515 = INT64_MAX;
	static int8_t x516 = 0;
	static int32_t t121 = -10450;

    t121 = (x513==((x514%x515)|x516));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x517 = UINT64_MAX;
	int16_t x518 = INT16_MIN;
	static uint16_t x519 = 40U;
	static int64_t x520 = -1LL;
	int32_t t122 = 4382642;

    t122 = (x517==((x518%x519)|x520));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x521 = INT8_MIN;
	int16_t x522 = -1;
	uint8_t x523 = UINT8_MAX;
	int8_t x524 = INT8_MAX;
	volatile int32_t t123 = -125483;

    t123 = (x521==((x522%x523)|x524));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x525 = UINT16_MAX;
	static int32_t x527 = 233797;
	static uint32_t x528 = 25182212U;

    t124 = (x525==((x526%x527)|x528));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x529 = 5699811263794614LL;
	int8_t x530 = -1;
	int16_t x531 = -1;
	int32_t t125 = -6;

    t125 = (x529==((x530%x531)|x532));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x534 = INT32_MIN;
	uint16_t x536 = 1141U;
	int32_t t126 = -533806;

    t126 = (x533==((x534%x535)|x536));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x537 = 5;
	int32_t t127 = -2034;

    t127 = (x537==((x538%x539)|x540));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x541 = UINT32_MAX;
	volatile int16_t x542 = -58;
	uint16_t x543 = UINT16_MAX;
	volatile int32_t t128 = 343;

    t128 = (x541==((x542%x543)|x544));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x545 = 40755727652LL;
	static volatile int32_t x546 = INT32_MIN;
	static volatile int64_t x547 = 420064LL;
	volatile int32_t t129 = -14334189;

    t129 = (x545==((x546%x547)|x548));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x549 = UINT64_MAX;
	int64_t x551 = -1530294339867LL;
	int8_t x552 = -1;
	volatile int32_t t130 = -186;

    t130 = (x549==((x550%x551)|x552));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x553 = 14602U;
	uint64_t x554 = UINT64_MAX;
	int16_t x555 = 4060;
	int64_t x556 = -881955333665825LL;
	int32_t t131 = -870391;

    t131 = (x553==((x554%x555)|x556));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x557 = -1;
	static int8_t x559 = INT8_MAX;
	int16_t x560 = INT16_MAX;
	volatile int32_t t132 = -193;

    t132 = (x557==((x558%x559)|x560));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x562 = INT64_MIN;
	volatile uint64_t x564 = UINT64_MAX;
	volatile int32_t t133 = -305203;

    t133 = (x561==((x562%x563)|x564));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x566 = 4U;
	uint32_t x567 = UINT32_MAX;
	static int8_t x568 = 14;
	static volatile int32_t t134 = 87887863;

    t134 = (x565==((x566%x567)|x568));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint8_t x569 = 1U;
	int8_t x570 = 0;
	int16_t x571 = -1;
	int32_t x572 = INT32_MIN;
	volatile int32_t t135 = -23509354;

    t135 = (x569==((x570%x571)|x572));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x573 = INT16_MIN;
	uint8_t x574 = 12U;
	uint32_t x575 = UINT32_MAX;
	int64_t x576 = INT64_MIN;
	volatile int32_t t136 = 0;

    t136 = (x573==((x574%x575)|x576));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x577 = 2982U;
	uint64_t x578 = UINT64_MAX;
	static uint32_t x579 = UINT32_MAX;
	int16_t x580 = INT16_MAX;
	int32_t t137 = 160444;

    t137 = (x577==((x578%x579)|x580));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x581 = -26;
	uint32_t x583 = 226U;
	static int64_t x584 = INT64_MAX;

    t138 = (x581==((x582%x583)|x584));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x585 = 21534587U;
	static uint8_t x586 = 1U;
	uint32_t x587 = 40U;
	volatile int32_t t139 = 993891470;

    t139 = (x585==((x586%x587)|x588));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint8_t x589 = 37U;
	static uint16_t x590 = 666U;
	int8_t x591 = INT8_MIN;
	volatile uint8_t x592 = UINT8_MAX;

    t140 = (x589==((x590%x591)|x592));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x593 = 6;
	int32_t x594 = -966438;
	uint64_t x595 = UINT64_MAX;
	uint64_t x596 = 281120099926LLU;
	int32_t t141 = -4;

    t141 = (x593==((x594%x595)|x596));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x597 = 2LLU;
	static int32_t x598 = INT32_MIN;
	volatile int64_t x599 = INT64_MAX;
	volatile int32_t t142 = 1395100;

    t142 = (x597==((x598%x599)|x600));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x601 = UINT64_MAX;
	int16_t x603 = 15;
	volatile int32_t x604 = 4;
	volatile int32_t t143 = -59296114;

    t143 = (x601==((x602%x603)|x604));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x605 = 11;
	int16_t x606 = -23;
	int64_t x607 = INT64_MAX;
	int32_t x608 = 18459017;
	int32_t t144 = 32063342;

    t144 = (x605==((x606%x607)|x608));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x609 = INT64_MAX;
	int16_t x610 = -1;
	uint16_t x611 = UINT16_MAX;
	static int32_t x612 = -1;
	volatile int32_t t145 = -2213;

    t145 = (x609==((x610%x611)|x612));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x613 = INT32_MAX;
	uint64_t x614 = 0LLU;
	int64_t x616 = INT64_MAX;

    t146 = (x613==((x614%x615)|x616));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x617 = INT16_MIN;
	int32_t x619 = -1;

    t147 = (x617==((x618%x619)|x620));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x621 = 1LL;
	int64_t x622 = -296180255LL;
	int16_t x623 = -15005;
	volatile int32_t t148 = -432;

    t148 = (x621==((x622%x623)|x624));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x626 = INT64_MAX;
	static int64_t x627 = INT64_MAX;
	int64_t x628 = -1LL;
	static volatile int32_t t149 = 43;

    t149 = (x625==((x626%x627)|x628));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x629 = INT32_MIN;
	int16_t x630 = 1394;
	uint64_t x631 = 1035881205685LLU;
	int32_t t150 = 0;

    t150 = (x629==((x630%x631)|x632));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x633 = UINT8_MAX;
	volatile int32_t x634 = -1;
	volatile uint32_t x635 = 50U;
	uint64_t x636 = 1LLU;
	volatile int32_t t151 = -387172820;

    t151 = (x633==((x634%x635)|x636));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x637 = 5664672U;
	static int32_t t152 = 9399545;

    t152 = (x637==((x638%x639)|x640));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x642 = INT64_MAX;
	uint64_t x643 = UINT64_MAX;
	volatile int64_t x644 = 1443895210798969LL;
	int32_t t153 = 7861;

    t153 = (x641==((x642%x643)|x644));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x646 = 158;
	static volatile int8_t x647 = 1;
	int16_t x648 = INT16_MIN;
	static int32_t t154 = 6;

    t154 = (x645==((x646%x647)|x648));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x650 = -1;
	int64_t x652 = INT64_MAX;
	int32_t t155 = 579;

    t155 = (x649==((x650%x651)|x652));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x653 = INT8_MIN;
	volatile int16_t x654 = INT16_MIN;
	int32_t x655 = -6;
	int8_t x656 = INT8_MIN;
	volatile int32_t t156 = -804499828;

    t156 = (x653==((x654%x655)|x656));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x657 = -557626086321LL;
	int16_t x658 = INT16_MIN;
	int64_t x660 = -1LL;
	static int32_t t157 = 20687825;

    t157 = (x657==((x658%x659)|x660));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x661 = 13204U;
	int32_t x662 = INT32_MAX;
	uint8_t x663 = UINT8_MAX;
	int32_t x664 = INT32_MIN;
	int32_t t158 = 843;

    t158 = (x661==((x662%x663)|x664));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x665 = 1;
	int64_t x667 = INT64_MIN;
	static int16_t x668 = -1;

    t159 = (x665==((x666%x667)|x668));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x669 = INT64_MIN;
	static volatile int16_t x670 = -1127;
	int32_t x671 = INT32_MIN;
	volatile int32_t x672 = -86731;

    t160 = (x669==((x670%x671)|x672));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x673 = INT64_MIN;
	int8_t x674 = INT8_MIN;
	int32_t x676 = INT32_MIN;
	int32_t t161 = -365;

    t161 = (x673==((x674%x675)|x676));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x678 = -2;
	int16_t x679 = INT16_MIN;
	int16_t x680 = INT16_MIN;
	volatile int32_t t162 = -5640;

    t162 = (x677==((x678%x679)|x680));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x682 = 134U;
	int16_t x683 = 1470;
	volatile uint8_t x684 = 1U;
	int32_t t163 = -29;

    t163 = (x681==((x682%x683)|x684));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x685 = -1;
	int64_t x686 = -1LL;
	uint16_t x687 = 23U;
	uint8_t x688 = 3U;
	int32_t t164 = -36513277;

    t164 = (x685==((x686%x687)|x688));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x689 = -104;
	volatile uint8_t x690 = 1U;
	int32_t x691 = INT32_MIN;
	static volatile int16_t x692 = INT16_MAX;
	volatile int32_t t165 = 3047767;

    t165 = (x689==((x690%x691)|x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x693 = INT8_MIN;
	static volatile int32_t x694 = 1;
	static uint16_t x695 = 100U;
	int64_t x696 = INT64_MAX;
	static int32_t t166 = 6;

    t166 = (x693==((x694%x695)|x696));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x698 = 131371U;
	uint64_t x699 = 4LLU;
	int32_t x700 = INT32_MAX;
	int32_t t167 = 6;

    t167 = (x697==((x698%x699)|x700));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x702 = INT16_MIN;
	static int16_t x704 = 539;
	volatile int32_t t168 = -2966;

    t168 = (x701==((x702%x703)|x704));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x705 = INT64_MAX;
	static int8_t x707 = INT8_MIN;
	volatile int32_t t169 = -246;

    t169 = (x705==((x706%x707)|x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x709 = INT8_MIN;
	static volatile int32_t x710 = INT32_MIN;
	volatile int8_t x711 = -1;
	int8_t x712 = -2;
	static int32_t t170 = 14;

    t170 = (x709==((x710%x711)|x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x713 = -14156;
	int32_t x715 = -1;
	static int32_t t171 = -376;

    t171 = (x713==((x714%x715)|x716));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x719 = -1LL;
	volatile int32_t t172 = 42;

    t172 = (x717==((x718%x719)|x720));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x723 = INT16_MIN;
	static int16_t x724 = INT16_MIN;
	volatile int32_t t173 = -12805;

    t173 = (x721==((x722%x723)|x724));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x725 = 28;
	uint8_t x726 = UINT8_MAX;
	int32_t x727 = INT32_MIN;
	int8_t x728 = 0;
	volatile int32_t t174 = -3911445;

    t174 = (x725==((x726%x727)|x728));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x729 = INT16_MAX;
	int16_t x730 = 0;
	static volatile int16_t x732 = 5;
	int32_t t175 = -58723509;

    t175 = (x729==((x730%x731)|x732));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x733 = 991U;
	uint16_t x734 = 450U;
	static int16_t x735 = -2;
	uint16_t x736 = 3558U;
	volatile int32_t t176 = 22394868;

    t176 = (x733==((x734%x735)|x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x737 = UINT64_MAX;
	int64_t x738 = INT64_MIN;
	uint64_t x739 = UINT64_MAX;

    t177 = (x737==((x738%x739)|x740));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x742 = INT32_MIN;
	static volatile uint16_t x743 = UINT16_MAX;
	int32_t x744 = -1;
	static int32_t t178 = -108;

    t178 = (x741==((x742%x743)|x744));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x745 = UINT64_MAX;
	int16_t x747 = -1;
	int8_t x748 = INT8_MAX;
	int32_t t179 = -1;

    t179 = (x745==((x746%x747)|x748));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x749 = INT8_MIN;
	int32_t x750 = -1;
	int8_t x751 = -1;

    t180 = (x749==((x750%x751)|x752));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x753 = 3U;
	int32_t x754 = INT32_MIN;
	int64_t x755 = INT64_MAX;
	int16_t x756 = -1;
	int32_t t181 = 0;

    t181 = (x753==((x754%x755)|x756));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x757 = UINT64_MAX;
	int32_t x758 = INT32_MIN;
	uint32_t x759 = 1670U;
	int16_t x760 = 1;
	volatile int32_t t182 = 12696311;

    t182 = (x757==((x758%x759)|x760));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x762 = -1;
	int16_t x763 = INT16_MIN;
	int32_t x764 = -1;
	static volatile int32_t t183 = 76340842;

    t183 = (x761==((x762%x763)|x764));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x765 = INT64_MIN;
	int8_t x768 = 4;
	int32_t t184 = 223;

    t184 = (x765==((x766%x767)|x768));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x769 = INT16_MAX;
	int8_t x770 = -1;
	volatile int32_t x771 = INT32_MIN;
	static volatile int16_t x772 = INT16_MAX;
	volatile int32_t t185 = 1709454;

    t185 = (x769==((x770%x771)|x772));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x773 = 52023159U;
	int8_t x774 = INT8_MAX;
	int8_t x775 = INT8_MIN;
	int32_t t186 = 6698;

    t186 = (x773==((x774%x775)|x776));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x777 = INT8_MAX;
	static volatile int16_t x778 = INT16_MIN;
	volatile int32_t x780 = -1;
	volatile int32_t t187 = -667125;

    t187 = (x777==((x778%x779)|x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x781 = UINT32_MAX;
	int32_t x782 = -604516636;
	int16_t x783 = 2225;
	int16_t x784 = INT16_MIN;
	int32_t t188 = -752956;

    t188 = (x781==((x782%x783)|x784));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x785 = INT64_MAX;
	int32_t x786 = INT32_MIN;
	static uint64_t x787 = UINT64_MAX;
	static int64_t x788 = INT64_MIN;
	int32_t t189 = 62784;

    t189 = (x785==((x786%x787)|x788));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x789 = INT8_MAX;
	int8_t x790 = INT8_MAX;
	static int8_t x791 = 20;
	volatile int32_t t190 = 0;

    t190 = (x789==((x790%x791)|x792));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x793 = 33532431209LL;
	volatile int8_t x794 = -31;
	static volatile uint32_t x795 = 28226U;
	int8_t x796 = INT8_MIN;
	volatile int32_t t191 = -7086102;

    t191 = (x793==((x794%x795)|x796));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x801 = 14570494498LLU;
	static int32_t x803 = -913;
	volatile uint64_t x804 = 1LLU;
	int32_t t192 = 6504;

    t192 = (x801==((x802%x803)|x804));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x805 = 6U;
	static volatile int64_t x806 = -1LL;
	volatile uint64_t x808 = 104822LLU;
	static volatile int32_t t193 = -24002762;

    t193 = (x805==((x806%x807)|x808));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x809 = INT8_MIN;
	int16_t x810 = 2036;
	int16_t x812 = INT16_MIN;
	volatile int32_t t194 = 671882;

    t194 = (x809==((x810%x811)|x812));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x813 = INT64_MIN;
	int16_t x814 = -36;
	volatile uint8_t x815 = UINT8_MAX;
	int32_t x816 = -8;
	volatile int32_t t195 = 72068;

    t195 = (x813==((x814%x815)|x816));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x817 = -458859916512688LL;
	uint16_t x818 = UINT16_MAX;
	static int8_t x820 = INT8_MAX;

    t196 = (x817==((x818%x819)|x820));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x821 = INT64_MAX;
	static int64_t x822 = INT64_MAX;
	int64_t x823 = INT64_MAX;
	volatile int32_t t197 = -228968222;

    t197 = (x821==((x822%x823)|x824));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x825 = 3865;
	uint32_t x826 = UINT32_MAX;
	int16_t x827 = 7;
	int8_t x828 = -1;
	int32_t t198 = 10413;

    t198 = (x825==((x826%x827)|x828));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x829 = INT64_MAX;
	uint8_t x831 = 7U;
	int32_t x832 = 2910550;
	static int32_t t199 = -347657;

    t199 = (x829==((x830%x831)|x832));

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

