
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
uint16_t x3 = 1340U;
uint32_t x6 = 2U;
int32_t x7 = -1;
volatile int32_t x8 = INT32_MAX;
uint64_t x11 = UINT64_MAX;
static volatile uint32_t t2 = 143483932U;
volatile int32_t x16 = INT32_MAX;
static uint32_t x17 = 10190U;
uint64_t x19 = 127121363073LLU;
int16_t x21 = -218;
int32_t x30 = INT32_MIN;
static int16_t x31 = 85;
volatile uint64_t x45 = 94389993345105396LLU;
volatile uint16_t x50 = UINT16_MAX;
volatile int8_t x52 = 1;
volatile int64_t t12 = 35LL;
uint32_t x57 = 90U;
volatile uint32_t t14 = 19U;
static volatile int32_t t17 = 455919167;
volatile uint64_t x77 = 353367217970631928LLU;
uint16_t x90 = UINT16_MAX;
int8_t x92 = INT8_MIN;
uint64_t x94 = 675221890LLU;
uint64_t x97 = 35524663900014175LLU;
static uint64_t x102 = 1031417615LLU;
static volatile int8_t x103 = 0;
static int32_t x109 = INT32_MAX;
int32_t t26 = 11203783;
static volatile int32_t x127 = 24;
int8_t x128 = -41;
int32_t t31 = INT32_MIN;
int32_t x135 = -1;
int16_t x136 = -5938;
int16_t x140 = INT16_MAX;
int8_t x147 = 0;
int32_t x149 = INT32_MIN;
int32_t x150 = -1;
volatile int32_t x151 = INT32_MIN;
int32_t x158 = INT32_MAX;
int32_t t40 = INT32_MIN;
uint32_t x177 = UINT32_MAX;
int32_t t43 = 6;
volatile int64_t x186 = 28313LL;
int8_t x194 = INT8_MIN;
int32_t t46 = 106604427;
uint8_t x200 = 5U;
volatile uint16_t x202 = UINT16_MAX;
int16_t x204 = INT16_MIN;
static volatile int8_t x207 = 26;
volatile uint64_t t49 = UINT64_MAX;
uint16_t x212 = UINT16_MAX;
static uint32_t x225 = 219157U;
uint64_t x230 = UINT64_MAX;
int16_t x231 = -37;
uint32_t x237 = UINT32_MAX;
volatile int16_t x241 = 1;
static uint8_t x256 = UINT8_MAX;
static uint16_t x259 = 26090U;
int64_t t62 = INT64_MAX;
static int64_t x263 = -1LL;
static volatile int32_t t63 = -12705417;
int64_t x266 = INT64_MIN;
static int8_t x267 = -1;
int64_t t64 = -1634390929016LL;
int32_t t65 = -1379;
int8_t x273 = -1;
int32_t x274 = 83405;
int8_t x280 = -1;
int32_t t68 = -15;
static int32_t x293 = INT32_MAX;
int64_t x299 = INT64_MIN;
static int16_t x303 = 4473;
uint8_t x312 = 15U;
uint32_t x323 = 459U;
int8_t x325 = INT8_MAX;
static volatile int32_t x326 = 2676005;
int64_t x327 = INT64_MAX;
uint64_t t77 = UINT64_MAX;
uint16_t x335 = UINT16_MAX;
int64_t x337 = -209394LL;
int64_t x342 = -1LL;
int64_t x344 = 811598391886990312LL;
static int32_t x345 = INT32_MAX;
uint64_t x350 = UINT64_MAX;
static int32_t x355 = INT32_MIN;
int8_t x356 = INT8_MAX;
int16_t x365 = 9;
static int32_t x366 = -23668;
volatile int32_t t86 = -1;
volatile int32_t x370 = INT32_MIN;
int32_t x372 = INT32_MIN;
static uint32_t x382 = UINT32_MAX;
int32_t x397 = -369071008;
int32_t t96 = -98380037;
int64_t x410 = -8445454976640LL;
static volatile int32_t t97 = INT32_MIN;
static int8_t x413 = -1;
int64_t x415 = -1LL;
int16_t x416 = -25;
int32_t t98 = -102;
static int8_t x419 = INT8_MIN;
volatile int32_t t99 = 74802;
static int8_t x444 = -25;
uint32_t x448 = 1047592104U;
volatile int64_t x449 = 1762LL;
static int32_t t108 = -76851960;
int16_t x469 = INT16_MAX;
volatile uint8_t x472 = 2U;
int64_t x474 = INT64_MAX;
static int32_t x476 = -30;
volatile int16_t x478 = INT16_MIN;
uint16_t x482 = UINT16_MAX;
int8_t x487 = -1;
int8_t x488 = -16;
int32_t t116 = -8810486;
volatile uint8_t x495 = 9U;
int64_t x499 = INT64_MIN;
volatile int16_t x501 = -1;
volatile uint16_t x506 = 61U;
static int32_t t120 = INT32_MAX;
static uint8_t x509 = 0U;
int32_t t121 = 35;
static uint8_t x516 = UINT8_MAX;
volatile int64_t t122 = INT64_MIN;
static int16_t x517 = -1;
volatile int32_t t123 = 17628734;
static int8_t x527 = INT8_MIN;
volatile int64_t t125 = INT64_MAX;
int64_t x529 = -1LL;
static uint64_t x532 = 511948LLU;
volatile int64_t x534 = INT64_MIN;
volatile int32_t t127 = -16856868;
int64_t x539 = INT64_MIN;
volatile int32_t t128 = 73;
int64_t t129 = -167347253062690LL;
uint64_t x549 = 112125LLU;
static volatile uint64_t x554 = 410168LLU;
int32_t x563 = INT32_MIN;
static int32_t t134 = 0;
uint8_t x570 = UINT8_MAX;
uint16_t x574 = UINT16_MAX;
int8_t x583 = INT8_MIN;
volatile int64_t x599 = INT64_MIN;
int32_t t141 = -520464;
int32_t x612 = -1;
static int32_t t144 = 27;
uint16_t x613 = 1U;
volatile uint32_t x620 = 2394U;
volatile int32_t x623 = -70897;
volatile int32_t t147 = -1638288;
static int32_t x627 = INT32_MIN;
uint32_t x629 = 14U;
uint16_t x630 = UINT16_MAX;
static uint8_t x632 = 0U;
uint32_t t149 = 273084U;
int8_t x635 = INT8_MIN;
volatile int32_t t152 = 3;
int16_t x646 = INT16_MIN;
volatile uint64_t x648 = UINT64_MAX;
int32_t t154 = -46529;
int64_t x664 = -1579755099LL;
int8_t x668 = INT8_MIN;
static volatile int32_t x669 = INT32_MIN;
uint8_t x670 = 2U;
int64_t x674 = 3821356414424LL;
uint32_t x675 = 112448U;
uint16_t x679 = 160U;
int8_t x681 = -2;
uint16_t x687 = 49U;
volatile int32_t t163 = 7;
int8_t x694 = INT8_MIN;
int32_t x695 = INT32_MIN;
uint32_t x697 = 171383U;
static int8_t x699 = 6;
int16_t x700 = -49;
uint32_t t166 = 1275U;
int32_t x718 = 5435774;
uint64_t x719 = UINT64_MAX;
uint16_t x721 = UINT16_MAX;
int16_t x727 = 33;
uint64_t x728 = 228589436LLU;
int16_t x735 = INT16_MIN;
volatile int32_t x738 = INT32_MIN;
int32_t x744 = -1;
uint16_t x745 = 31U;
static volatile int32_t t176 = -198278;
volatile uint16_t x749 = UINT16_MAX;
uint32_t x760 = 189U;
static volatile int32_t x764 = INT32_MIN;
volatile int64_t x769 = INT64_MAX;
volatile int16_t x773 = -1;
volatile uint64_t x775 = 3LLU;
volatile int32_t t183 = 0;
uint64_t x781 = UINT64_MAX;
volatile int32_t t186 = 89;
volatile uint32_t t187 = UINT32_MAX;
int64_t x804 = -1LL;
volatile uint32_t t190 = 229812U;
int32_t x805 = -1;
volatile uint8_t x815 = 0U;
int32_t t193 = 6886;
int32_t x820 = INT32_MAX;
volatile int8_t x821 = -1;
uint32_t x822 = UINT32_MAX;
volatile int16_t x829 = -1;
static int32_t x832 = INT32_MIN;
int16_t x834 = 496;
static int16_t x836 = -1;
int32_t t199 = -3;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	int64_t x4 = -1LL;
	int32_t t0 = -290607;

    t0 = (x1-((x2<=x3)>x4));

    if (t0 != -129) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 2070280;
	static int32_t t1 = -13138354;

    t1 = (x5-((x6<=x7)>x8));

    if (t1 != 2070280) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	static uint64_t x10 = 307848949505658LLU;
	static int64_t x12 = INT64_MIN;

    t2 = (x9-((x10<=x11)>x12));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 70492247655580226LL;
	static int16_t x14 = 3646;
	int8_t x15 = INT8_MIN;
	volatile int64_t t3 = -664132752914382LL;

    t3 = (x13-((x14<=x15)>x16));

    if (t3 != 70492247655580226LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = INT64_MIN;
	uint64_t x20 = 1085389012760LLU;
	uint32_t t4 = 4U;

    t4 = (x17-((x18<=x19)>x20));

    if (t4 != 10190U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = 54;
	uint8_t x23 = 1U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 0;

    t5 = (x21-((x22<=x23)>x24));

    if (t5 != -219) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = 3;
	int16_t x26 = -80;
	int16_t x27 = 929;
	int16_t x28 = -2518;
	int32_t t6 = -24;

    t6 = (x25-((x26<=x27)>x28));

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = 20U;
	uint64_t x32 = 27LLU;
	static volatile int32_t t7 = 7777672;

    t7 = (x29-((x30<=x31)>x32));

    if (t7 != 20) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = 79313722LL;
	int8_t x34 = -1;
	int32_t x35 = INT32_MAX;
	uint32_t x36 = 2001318174U;
	int64_t t8 = -22145727955414822LL;

    t8 = (x33-((x34<=x35)>x36));

    if (t8 != 79313722LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 25260U;
	uint32_t x38 = 181630U;
	uint16_t x39 = 6166U;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = 69;

    t9 = (x37-((x38<=x39)>x40));

    if (t9 != 25260) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	volatile uint64_t x42 = UINT64_MAX;
	static int64_t x43 = -295235103503918LL;
	int16_t x44 = INT16_MAX;
	int64_t t10 = INT64_MAX;

    t10 = (x41-((x42<=x43)>x44));

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MIN;
	static int16_t x47 = -1;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t11 = 0LLU;

    t11 = (x45-((x46<=x47)>x48));

    if (t11 != 94389993345105395LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	uint8_t x51 = UINT8_MAX;

    t12 = (x49-((x50<=x51)>x52));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MAX;
	int16_t x55 = -1109;
	volatile int32_t x56 = -1;
	int32_t t13 = 94312738;

    t13 = (x53-((x54<=x55)>x56));

    if (t13 != -32769) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x58 = UINT32_MAX;
	static uint64_t x59 = 506LLU;
	int64_t x60 = INT64_MAX;

    t14 = (x57-((x58<=x59)>x60));

    if (t14 != 90U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = 17088025522593059LL;
	static volatile int16_t x66 = INT16_MIN;
	uint8_t x67 = 3U;
	uint8_t x68 = UINT8_MAX;
	volatile int64_t t15 = 2289809698754089308LL;

    t15 = (x65-((x66<=x67)>x68));

    if (t15 != 17088025522593059LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x69 = 23735108U;
	int8_t x70 = INT8_MIN;
	int16_t x71 = -93;
	uint64_t x72 = 53360466883LLU;
	uint32_t t16 = 89647752U;

    t16 = (x69-((x70<=x71)>x72));

    if (t16 != 23735108U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	uint16_t x74 = UINT16_MAX;
	static int16_t x75 = -1;
	uint16_t x76 = 15U;

    t17 = (x73-((x74<=x75)>x76));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x78 = -8;
	int8_t x79 = -1;
	volatile int16_t x80 = -1;
	volatile uint64_t t18 = 1559760242048450003LLU;

    t18 = (x77-((x78<=x79)>x80));

    if (t18 != 353367217970631927LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MIN;
	volatile int16_t x82 = INT16_MIN;
	int16_t x83 = -1;
	static uint32_t x84 = 746063395U;
	volatile int32_t t19 = INT32_MIN;

    t19 = (x81-((x82<=x83)>x84));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = INT8_MIN;
	static int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	volatile uint32_t x88 = UINT32_MAX;
	volatile int32_t t20 = -8017;

    t20 = (x85-((x86<=x87)>x88));

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -2780LL;
	int16_t x91 = INT16_MIN;
	static volatile int64_t t21 = 2216467533851095624LL;

    t21 = (x89-((x90<=x91)>x92));

    if (t21 != -2781LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 70U;
	uint16_t x95 = UINT16_MAX;
	volatile int64_t x96 = INT64_MAX;
	volatile int32_t t22 = 429593;

    t22 = (x93-((x94<=x95)>x96));

    if (t22 != 70) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x98 = INT32_MIN;
	int64_t x99 = -1LL;
	int32_t x100 = -1;
	uint64_t t23 = 349001LLU;

    t23 = (x97-((x98<=x99)>x100));

    if (t23 != 35524663900014174LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 3U;
	uint32_t x104 = 45U;
	static int32_t t24 = 0;

    t24 = (x101-((x102<=x103)>x104));

    if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = 61;
	int16_t x106 = INT16_MAX;
	static volatile uint32_t x107 = UINT32_MAX;
	uint16_t x108 = UINT16_MAX;
	int32_t t25 = -438;

    t25 = (x105-((x106<=x107)>x108));

    if (t25 != 61) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x110 = -6;
	static uint64_t x111 = UINT64_MAX;
	int8_t x112 = INT8_MIN;

    t26 = (x109-((x110<=x111)>x112));

    if (t26 != 2147483646) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x113 = 4026LLU;
	int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MAX;
	int16_t x116 = -1;
	volatile uint64_t t27 = 172057842839325041LLU;

    t27 = (x113-((x114<=x115)>x116));

    if (t27 != 4025LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = UINT32_MAX;
	static int16_t x118 = 8958;
	static int8_t x119 = -1;
	static int16_t x120 = INT16_MIN;
	volatile uint32_t t28 = 18194690U;

    t28 = (x117-((x118<=x119)>x120));

    if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x121 = 42;
	volatile int64_t x122 = INT64_MIN;
	volatile int16_t x123 = INT16_MIN;
	static int64_t x124 = INT64_MIN;
	int32_t t29 = 5803928;

    t29 = (x121-((x122<=x123)>x124));

    if (t29 != 41) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = -1;
	int32_t x126 = INT32_MIN;
	int32_t t30 = 8892399;

    t30 = (x125-((x126<=x127)>x128));

    if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x129 = INT32_MIN;
	static int32_t x130 = -7;
	int16_t x131 = INT16_MAX;
	uint64_t x132 = 32177221014263LLU;

    t31 = (x129-((x130<=x131)>x132));

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x133 = UINT64_MAX;
	uint64_t x134 = UINT64_MAX;
	uint64_t t32 = 41002LLU;

    t32 = (x133-((x134<=x135)>x136));

    if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = 92U;
	uint16_t x138 = 11299U;
	volatile int16_t x139 = -10;
	volatile int32_t t33 = -2;

    t33 = (x137-((x138<=x139)>x140));

    if (t33 != 92) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = INT8_MIN;
	volatile int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MAX;
	volatile int8_t x144 = INT8_MAX;
	volatile int32_t t34 = 3;

    t34 = (x141-((x142<=x143)>x144));

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x145 = 20LLU;
	int8_t x146 = -7;
	int8_t x148 = INT8_MIN;
	uint64_t t35 = 699979781617428LLU;

    t35 = (x145-((x146<=x147)>x148));

    if (t35 != 19LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x152 = INT16_MAX;
	static volatile int32_t t36 = INT32_MIN;

    t36 = (x149-((x150<=x151)>x152));

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MIN;
	static int64_t x154 = INT64_MIN;
	static volatile int8_t x155 = -1;
	int32_t x156 = -1;
	volatile int32_t t37 = -153;

    t37 = (x153-((x154<=x155)>x156));

    if (t37 != -129) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x157 = 16696067850LLU;
	int64_t x159 = INT64_MIN;
	volatile uint8_t x160 = 12U;
	static uint64_t t38 = 8LLU;

    t38 = (x157-((x158<=x159)>x160));

    if (t38 != 16696067850LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MIN;
	uint8_t x162 = 31U;
	static int32_t x163 = 3530;
	uint32_t x164 = 1U;
	int32_t t39 = -96833138;

    t39 = (x161-((x162<=x163)>x164));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x169 = INT32_MIN;
	static uint64_t x170 = 2LLU;
	uint16_t x171 = UINT16_MAX;
	static uint64_t x172 = 936910LLU;

    t40 = (x169-((x170<=x171)>x172));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = -1LL;
	static uint8_t x174 = 17U;
	volatile int16_t x175 = INT16_MAX;
	volatile uint32_t x176 = 45233930U;
	volatile int64_t t41 = -376917428880LL;

    t41 = (x173-((x174<=x175)>x176));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x178 = 12019U;
	static int16_t x179 = INT16_MAX;
	int16_t x180 = INT16_MIN;
	volatile uint32_t t42 = 14764U;

    t42 = (x177-((x178<=x179)>x180));

    if (t42 != 4294967294U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = INT16_MIN;
	static int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	int8_t x184 = 16;

    t43 = (x181-((x182<=x183)>x184));

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x185 = 28;
	int64_t x187 = 730379431352476LL;
	int16_t x188 = INT16_MIN;
	int32_t t44 = -192975;

    t44 = (x185-((x186<=x187)>x188));

    if (t44 != 27) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = 2463U;
	static volatile uint16_t x190 = 0U;
	int32_t x191 = INT32_MIN;
	int32_t x192 = -1;
	volatile int32_t t45 = -2682;

    t45 = (x189-((x190<=x191)>x192));

    if (t45 != 2462) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x193 = UINT16_MAX;
	volatile int64_t x195 = -155LL;
	static int16_t x196 = INT16_MIN;

    t46 = (x193-((x194<=x195)>x196));

    if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = INT8_MAX;
	volatile int64_t x198 = INT64_MAX;
	static volatile int8_t x199 = INT8_MIN;
	int32_t t47 = 157506319;

    t47 = (x197-((x198<=x199)>x200));

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x201 = -50;
	static int32_t x203 = -27;
	static volatile int32_t t48 = -23;

    t48 = (x201-((x202<=x203)>x204));

    if (t48 != -51) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x205 = UINT64_MAX;
	volatile int8_t x206 = 6;
	int16_t x208 = 8;

    t49 = (x205-((x206<=x207)>x208));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = INT64_MIN;
	static int64_t x210 = -1LL;
	volatile int32_t x211 = -2;
	volatile int64_t t50 = INT64_MIN;

    t50 = (x209-((x210<=x211)>x212));

    if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = 50LL;
	volatile uint32_t x214 = UINT32_MAX;
	int32_t x215 = -76689;
	static volatile int16_t x216 = INT16_MAX;
	static volatile int64_t t51 = 3LL;

    t51 = (x213-((x214<=x215)>x216));

    if (t51 != 50LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x217 = -14353638092LL;
	volatile int8_t x218 = -1;
	static volatile uint32_t x219 = UINT32_MAX;
	uint64_t x220 = 3468701LLU;
	volatile int64_t t52 = -248LL;

    t52 = (x217-((x218<=x219)>x220));

    if (t52 != -14353638092LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x221 = 31U;
	int64_t x222 = -1625300LL;
	int8_t x223 = -1;
	int64_t x224 = INT64_MIN;
	volatile int32_t t53 = 2486;

    t53 = (x221-((x222<=x223)>x224));

    if (t53 != 30) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x226 = INT32_MIN;
	uint8_t x227 = 31U;
	int64_t x228 = INT64_MIN;
	uint32_t t54 = 2U;

    t54 = (x225-((x226<=x227)>x228));

    if (t54 != 219156U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = 2901;
	volatile int32_t x232 = -222317669;
	int32_t t55 = 247239622;

    t55 = (x229-((x230<=x231)>x232));

    if (t55 != 2900) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x233 = -4858;
	uint8_t x234 = UINT8_MAX;
	volatile int8_t x235 = INT8_MAX;
	volatile uint8_t x236 = UINT8_MAX;
	static volatile int32_t t56 = 414;

    t56 = (x233-((x234<=x235)>x236));

    if (t56 != -4858) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x238 = 147;
	volatile uint16_t x239 = UINT16_MAX;
	int64_t x240 = -1LL;
	static uint32_t t57 = 5327843U;

    t57 = (x237-((x238<=x239)>x240));

    if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x242 = 1U;
	volatile int8_t x243 = 38;
	volatile int8_t x244 = -3;
	volatile int32_t t58 = -1285327;

    t58 = (x241-((x242<=x243)>x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x245 = INT8_MAX;
	volatile int8_t x246 = INT8_MIN;
	static int32_t x247 = INT32_MIN;
	static volatile int32_t x248 = INT32_MIN;
	static int32_t t59 = -992451;

    t59 = (x245-((x246<=x247)>x248));

    if (t59 != 126) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = INT64_MAX;
	int8_t x250 = -1;
	int16_t x251 = -691;
	volatile uint8_t x252 = 1U;
	int64_t t60 = INT64_MAX;

    t60 = (x249-((x250<=x251)>x252));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x253 = 137015929522895864LLU;
	int64_t x254 = -1LL;
	int16_t x255 = 8;
	uint64_t t61 = 3585067973LLU;

    t61 = (x253-((x254<=x255)>x256));

    if (t61 != 137015929522895864LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x257 = INT64_MAX;
	uint32_t x258 = 104104863U;
	uint16_t x260 = 31U;

    t62 = (x257-((x258<=x259)>x260));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x261 = -36;
	int64_t x262 = INT64_MIN;
	volatile uint64_t x264 = 104773473LLU;

    t63 = (x261-((x262<=x263)>x264));

    if (t63 != -36) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = -66543680885207LL;
	int32_t x268 = INT32_MIN;

    t64 = (x265-((x266<=x267)>x268));

    if (t64 != -66543680885208LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = -1;
	int32_t x270 = INT32_MIN;
	volatile uint32_t x271 = UINT32_MAX;
	static uint64_t x272 = 225994133356042LLU;

    t65 = (x269-((x270<=x271)>x272));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x275 = INT16_MAX;
	uint8_t x276 = UINT8_MAX;
	static int32_t t66 = 180154;

    t66 = (x273-((x274<=x275)>x276));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x277 = 7U;
	int32_t x278 = -1;
	int8_t x279 = 1;
	static int32_t t67 = -2274;

    t67 = (x277-((x278<=x279)>x280));

    if (t67 != 6) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x281 = -1;
	uint32_t x282 = 818U;
	uint8_t x283 = 0U;
	int64_t x284 = INT64_MIN;

    t68 = (x281-((x282<=x283)>x284));

    if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x289 = 49276U;
	int32_t x290 = -143062;
	int64_t x291 = INT64_MAX;
	int16_t x292 = -95;
	uint32_t t69 = 7U;

    t69 = (x289-((x290<=x291)>x292));

    if (t69 != 49275U) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x294 = UINT32_MAX;
	static int16_t x295 = 338;
	uint8_t x296 = UINT8_MAX;
	static volatile int32_t t70 = INT32_MAX;

    t70 = (x293-((x294<=x295)>x296));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x297 = INT8_MIN;
	volatile uint16_t x298 = UINT16_MAX;
	volatile uint8_t x300 = 114U;
	int32_t t71 = 1;

    t71 = (x297-((x298<=x299)>x300));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x301 = INT64_MIN;
	static uint8_t x302 = 6U;
	uint64_t x304 = 15399104LLU;
	int64_t t72 = INT64_MIN;

    t72 = (x301-((x302<=x303)>x304));

    if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x309 = 210U;
	int16_t x310 = INT16_MIN;
	int64_t x311 = -1LL;
	uint32_t t73 = 18243U;

    t73 = (x309-((x310<=x311)>x312));

    if (t73 != 210U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = 1;
	volatile int32_t x314 = -1;
	uint16_t x315 = 0U;
	int32_t x316 = -8060;
	volatile int32_t t74 = -11748646;

    t74 = (x313-((x314<=x315)>x316));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x321 = -221696182248LL;
	int32_t x322 = INT32_MIN;
	uint32_t x324 = 9978799U;
	volatile int64_t t75 = 4373377608010LL;

    t75 = (x321-((x322<=x323)>x324));

    if (t75 != -221696182248LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x328 = 384210476678178030LLU;
	int32_t t76 = -5063;

    t76 = (x325-((x326<=x327)>x328));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x329 = UINT64_MAX;
	int32_t x330 = INT32_MIN;
	int32_t x331 = -1;
	volatile uint8_t x332 = 76U;

    t77 = (x329-((x330<=x331)>x332));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x333 = 2206726327725987LLU;
	static int8_t x334 = 1;
	int32_t x336 = -1;
	uint64_t t78 = 59LLU;

    t78 = (x333-((x334<=x335)>x336));

    if (t78 != 2206726327725986LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x338 = INT64_MIN;
	int32_t x339 = -1;
	int32_t x340 = -1;
	int64_t t79 = 352LL;

    t79 = (x337-((x338<=x339)>x340));

    if (t79 != -209395LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x341 = UINT16_MAX;
	uint32_t x343 = 598178965U;
	volatile int32_t t80 = -323793058;

    t80 = (x341-((x342<=x343)>x344));

    if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x346 = INT64_MIN;
	uint64_t x347 = 25057693LLU;
	int64_t x348 = INT64_MAX;
	static int32_t t81 = INT32_MAX;

    t81 = (x345-((x346<=x347)>x348));

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x349 = INT16_MIN;
	static int32_t x351 = INT32_MIN;
	int32_t x352 = -14;
	int32_t t82 = 980961;

    t82 = (x349-((x350<=x351)>x352));

    if (t82 != -32769) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x353 = -1;
	uint8_t x354 = UINT8_MAX;
	volatile int32_t t83 = 1;

    t83 = (x353-((x354<=x355)>x356));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = INT16_MIN;
	int32_t x358 = -1;
	volatile uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t84 = -6152609;

    t84 = (x357-((x358<=x359)>x360));

    if (t84 != -32769) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x361 = -1;
	volatile int32_t x362 = -1;
	int32_t x363 = INT32_MIN;
	volatile int16_t x364 = -3;
	static int32_t t85 = -740999;

    t85 = (x361-((x362<=x363)>x364));

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x367 = -26;
	int64_t x368 = 320826LL;

    t86 = (x365-((x366<=x367)>x368));

    if (t86 != 9) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x369 = -1LL;
	int32_t x371 = INT32_MIN;
	volatile int64_t t87 = -3482036868579LL;

    t87 = (x369-((x370<=x371)>x372));

    if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x373 = INT16_MAX;
	int16_t x374 = 2;
	int32_t x375 = -203703929;
	int32_t x376 = -1;
	volatile int32_t t88 = 415582;

    t88 = (x373-((x374<=x375)>x376));

    if (t88 != 32766) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x377 = 2U;
	int64_t x378 = 792886797234569LL;
	uint32_t x379 = 12838U;
	int8_t x380 = INT8_MIN;
	static uint32_t t89 = 132315305U;

    t89 = (x377-((x378<=x379)>x380));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x381 = 168416U;
	static int64_t x383 = INT64_MIN;
	volatile int32_t x384 = INT32_MIN;
	static volatile uint32_t t90 = 148116960U;

    t90 = (x381-((x382<=x383)>x384));

    if (t90 != 168415U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MIN;
	int64_t x387 = -1LL;
	volatile uint32_t x388 = 1677492828U;
	volatile int32_t t91 = 50126;

    t91 = (x385-((x386<=x387)>x388));

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	uint16_t x391 = 13666U;
	uint32_t x392 = 0U;
	volatile int32_t t92 = -2660;

    t92 = (x389-((x390<=x391)>x392));

    if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x393 = -681097882442263590LL;
	static int8_t x394 = INT8_MIN;
	int64_t x395 = -3058494942605174LL;
	uint32_t x396 = UINT32_MAX;
	static volatile int64_t t93 = -21LL;

    t93 = (x393-((x394<=x395)>x396));

    if (t93 != -681097882442263590LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x398 = 137271778U;
	static volatile uint64_t x399 = 2950348440547LLU;
	uint8_t x400 = UINT8_MAX;
	int32_t t94 = -63581455;

    t94 = (x397-((x398<=x399)>x400));

    if (t94 != -369071008) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x401 = INT64_MAX;
	static uint8_t x402 = UINT8_MAX;
	int8_t x403 = INT8_MIN;
	static uint8_t x404 = UINT8_MAX;
	int64_t t95 = INT64_MAX;

    t95 = (x401-((x402<=x403)>x404));

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x405 = 4;
	uint32_t x406 = UINT32_MAX;
	int64_t x407 = -67136LL;
	volatile int32_t x408 = INT32_MIN;

    t96 = (x405-((x406<=x407)>x408));

    if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x409 = INT32_MIN;
	static int32_t x411 = -1;
	uint8_t x412 = UINT8_MAX;

    t97 = (x409-((x410<=x411)>x412));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x414 = INT8_MAX;

    t98 = (x413-((x414<=x415)>x416));

    if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = 1;
	int16_t x418 = INT16_MIN;
	static int8_t x420 = -28;

    t99 = (x417-((x418<=x419)>x420));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x421 = INT16_MIN;
	uint64_t x422 = 326534005658448LLU;
	uint32_t x423 = 44022213U;
	uint64_t x424 = 140LLU;
	volatile int32_t t100 = 1;

    t100 = (x421-((x422<=x423)>x424));

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x425 = 330735726542651LLU;
	uint8_t x426 = 2U;
	int8_t x427 = INT8_MIN;
	static uint64_t x428 = 13860785774LLU;
	volatile uint64_t t101 = 21497906537LLU;

    t101 = (x425-((x426<=x427)>x428));

    if (t101 != 330735726542651LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x429 = 142;
	volatile uint32_t x430 = 62391771U;
	uint64_t x431 = 15576LLU;
	int64_t x432 = INT64_MIN;
	int32_t t102 = 476020035;

    t102 = (x429-((x430<=x431)>x432));

    if (t102 != 141) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x437 = 29719809336LL;
	volatile uint32_t x438 = 550U;
	int16_t x439 = -1;
	int8_t x440 = INT8_MIN;
	int64_t t103 = -44634219095467080LL;

    t103 = (x437-((x438<=x439)>x440));

    if (t103 != 29719809335LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x441 = 24U;
	int64_t x442 = 158565131333321LL;
	int8_t x443 = -1;
	volatile int32_t t104 = 8;

    t104 = (x441-((x442<=x443)>x444));

    if (t104 != 23) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x445 = -1;
	uint8_t x446 = 3U;
	uint32_t x447 = 422U;
	volatile int32_t t105 = 60029062;

    t105 = (x445-((x446<=x447)>x448));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x450 = UINT32_MAX;
	uint32_t x451 = UINT32_MAX;
	uint64_t x452 = 4065231738785098LLU;
	volatile int64_t t106 = 30331LL;

    t106 = (x449-((x450<=x451)>x452));

    if (t106 != 1762LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x453 = -1;
	static uint64_t x454 = 23384LLU;
	uint32_t x455 = 24833860U;
	int8_t x456 = -1;
	static int32_t t107 = 38;

    t107 = (x453-((x454<=x455)>x456));

    if (t107 != -2) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x457 = 6095U;
	uint8_t x458 = UINT8_MAX;
	volatile uint64_t x459 = 786274LLU;
	static volatile int64_t x460 = INT64_MIN;

    t108 = (x457-((x458<=x459)>x460));

    if (t108 != 6094) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x461 = INT8_MIN;
	int64_t x462 = 10446829275LL;
	static volatile uint32_t x463 = 905073U;
	uint64_t x464 = 324179715741658573LLU;
	volatile int32_t t109 = 0;

    t109 = (x461-((x462<=x463)>x464));

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x465 = INT8_MIN;
	volatile int8_t x466 = INT8_MAX;
	int32_t x467 = INT32_MIN;
	static uint32_t x468 = 88U;
	volatile int32_t t110 = 344931416;

    t110 = (x465-((x466<=x467)>x468));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x470 = INT16_MIN;
	int16_t x471 = -312;
	int32_t t111 = 16676;

    t111 = (x469-((x470<=x471)>x472));

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x473 = -4;
	uint32_t x475 = UINT32_MAX;
	int32_t t112 = -3965790;

    t112 = (x473-((x474<=x475)>x476));

    if (t112 != -5) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x477 = INT64_MAX;
	uint32_t x479 = 866198028U;
	uint64_t x480 = 298198766260534848LLU;
	volatile int64_t t113 = INT64_MAX;

    t113 = (x477-((x478<=x479)>x480));

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x481 = 241U;
	int16_t x483 = -1;
	uint8_t x484 = 81U;
	uint32_t t114 = 771370249U;

    t114 = (x481-((x482<=x483)>x484));

    if (t114 != 241U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x485 = INT16_MAX;
	int8_t x486 = INT8_MIN;
	int32_t t115 = -4;

    t115 = (x485-((x486<=x487)>x488));

    if (t115 != 32766) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x489 = 46677;
	uint64_t x490 = UINT64_MAX;
	volatile int8_t x491 = INT8_MAX;
	static volatile int32_t x492 = INT32_MAX;

    t116 = (x489-((x490<=x491)>x492));

    if (t116 != 46677) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x494 = -1;
	uint32_t x496 = 446860910U;
	int32_t t117 = -466875;

    t117 = (x493-((x494<=x495)>x496));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x497 = 0U;
	uint32_t x498 = 58891U;
	int64_t x500 = INT64_MIN;
	int32_t t118 = -917268;

    t118 = (x497-((x498<=x499)>x500));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x502 = UINT16_MAX;
	static int8_t x503 = INT8_MIN;
	int16_t x504 = INT16_MIN;
	int32_t t119 = 2569228;

    t119 = (x501-((x502<=x503)>x504));

    if (t119 != -2) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x505 = INT32_MAX;
	static uint32_t x507 = 30713U;
	int32_t x508 = INT32_MAX;

    t120 = (x505-((x506<=x507)>x508));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x510 = INT8_MAX;
	int8_t x511 = -1;
	uint64_t x512 = UINT64_MAX;

    t121 = (x509-((x510<=x511)>x512));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x513 = INT64_MIN;
	int16_t x514 = INT16_MIN;
	uint32_t x515 = 2867U;

    t122 = (x513-((x514<=x515)>x516));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x518 = INT16_MIN;
	volatile int32_t x519 = 13123;
	volatile int16_t x520 = INT16_MIN;

    t123 = (x517-((x518<=x519)>x520));

    if (t123 != -2) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x521 = INT16_MIN;
	int16_t x522 = INT16_MIN;
	static int64_t x523 = -202459LL;
	static uint8_t x524 = 0U;
	int32_t t124 = 1924;

    t124 = (x521-((x522<=x523)>x524));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x525 = INT64_MAX;
	uint32_t x526 = 51062136U;
	static uint64_t x528 = 2227543933062153336LLU;

    t125 = (x525-((x526<=x527)>x528));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x530 = INT16_MIN;
	volatile int8_t x531 = -1;
	int64_t t126 = 7073002LL;

    t126 = (x529-((x530<=x531)>x532));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x533 = -1;
	int8_t x535 = -14;
	uint8_t x536 = UINT8_MAX;

    t127 = (x533-((x534<=x535)>x536));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x537 = -12;
	uint16_t x538 = 12615U;
	volatile uint64_t x540 = 269LLU;

    t128 = (x537-((x538<=x539)>x540));

    if (t128 != -12) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x541 = 12018689438455200LL;
	uint32_t x542 = 11U;
	int64_t x543 = -10994963695835488LL;
	int8_t x544 = -1;

    t129 = (x541-((x542<=x543)>x544));

    if (t129 != 12018689438455199LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x545 = -1;
	int32_t x546 = 52679468;
	int16_t x547 = -731;
	static uint8_t x548 = 2U;
	int32_t t130 = -162872865;

    t130 = (x545-((x546<=x547)>x548));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x550 = 13929059;
	int32_t x551 = -54;
	volatile int64_t x552 = INT64_MIN;
	uint64_t t131 = 138523599078058227LLU;

    t131 = (x549-((x550<=x551)>x552));

    if (t131 != 112124LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x553 = -1;
	volatile uint16_t x555 = UINT16_MAX;
	int16_t x556 = 0;
	volatile int32_t t132 = 0;

    t132 = (x553-((x554<=x555)>x556));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x557 = 10788771972417LL;
	int64_t x558 = INT64_MIN;
	uint16_t x559 = UINT16_MAX;
	int16_t x560 = INT16_MIN;
	volatile int64_t t133 = 22649LL;

    t133 = (x557-((x558<=x559)>x560));

    if (t133 != 10788771972416LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x561 = -144;
	int8_t x562 = INT8_MIN;
	uint32_t x564 = UINT32_MAX;

    t134 = (x561-((x562<=x563)>x564));

    if (t134 != -144) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x569 = 3LLU;
	int32_t x571 = INT32_MAX;
	static int16_t x572 = -6;
	volatile uint64_t t135 = 78327324843844LLU;

    t135 = (x569-((x570<=x571)>x572));

    if (t135 != 2LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x573 = -1;
	int16_t x575 = INT16_MIN;
	int64_t x576 = INT64_MIN;
	int32_t t136 = -4374;

    t136 = (x573-((x574<=x575)>x576));

    if (t136 != -2) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x581 = UINT8_MAX;
	static volatile int16_t x582 = -1;
	volatile int32_t x584 = INT32_MIN;
	volatile int32_t t137 = 1215;

    t137 = (x581-((x582<=x583)>x584));

    if (t137 != 254) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x585 = UINT16_MAX;
	volatile int16_t x586 = INT16_MAX;
	static int8_t x587 = -1;
	uint16_t x588 = 8778U;
	int32_t t138 = 156590003;

    t138 = (x585-((x586<=x587)>x588));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x589 = 2;
	static int16_t x590 = INT16_MAX;
	int32_t x591 = -27510;
	volatile int8_t x592 = 0;
	volatile int32_t t139 = 91361;

    t139 = (x589-((x590<=x591)>x592));

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x593 = INT16_MIN;
	int32_t x594 = INT32_MIN;
	int32_t x595 = INT32_MIN;
	volatile uint64_t x596 = 16972812328563205LLU;
	volatile int32_t t140 = 1;

    t140 = (x593-((x594<=x595)>x596));

    if (t140 != -32768) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x597 = -1;
	uint64_t x598 = UINT64_MAX;
	volatile uint16_t x600 = 1641U;

    t141 = (x597-((x598<=x599)>x600));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x601 = INT16_MAX;
	static int16_t x602 = 295;
	int64_t x603 = -2515483511942LL;
	static uint64_t x604 = 2167655065709LLU;
	int32_t t142 = 4017450;

    t142 = (x601-((x602<=x603)>x604));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x605 = 1U;
	uint16_t x606 = UINT16_MAX;
	static int8_t x607 = INT8_MAX;
	volatile uint16_t x608 = UINT16_MAX;
	volatile int32_t t143 = 363501;

    t143 = (x605-((x606<=x607)>x608));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x609 = 2U;
	static uint64_t x610 = 313493986LLU;
	int8_t x611 = INT8_MAX;

    t144 = (x609-((x610<=x611)>x612));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x614 = -1;
	volatile int8_t x615 = -1;
	int64_t x616 = 447437993LL;
	int32_t t145 = -4931547;

    t145 = (x613-((x614<=x615)>x616));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x617 = INT8_MAX;
	int64_t x618 = INT64_MIN;
	int32_t x619 = -1;
	int32_t t146 = 1096733;

    t146 = (x617-((x618<=x619)>x620));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x621 = 0;
	int32_t x622 = -188793;
	uint16_t x624 = UINT16_MAX;

    t147 = (x621-((x622<=x623)>x624));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x625 = INT16_MIN;
	uint8_t x626 = UINT8_MAX;
	static int8_t x628 = INT8_MIN;
	int32_t t148 = 57994;

    t148 = (x625-((x626<=x627)>x628));

    if (t148 != -32769) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x631 = UINT32_MAX;

    t149 = (x629-((x630<=x631)>x632));

    if (t149 != 13U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x633 = -1;
	int64_t x634 = INT64_MIN;
	volatile int8_t x636 = 6;
	int32_t t150 = -186479;

    t150 = (x633-((x634<=x635)>x636));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x637 = INT32_MAX;
	static int32_t x638 = 1;
	uint32_t x639 = 361363793U;
	uint16_t x640 = 17U;
	static volatile int32_t t151 = INT32_MAX;

    t151 = (x637-((x638<=x639)>x640));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x641 = 38U;
	int64_t x642 = -1663819801581811LL;
	static int16_t x643 = 2;
	int16_t x644 = -1;

    t152 = (x641-((x642<=x643)>x644));

    if (t152 != 37) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x645 = 8U;
	static uint64_t x647 = UINT64_MAX;
	volatile int32_t t153 = -118129;

    t153 = (x645-((x646<=x647)>x648));

    if (t153 != 8) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x649 = 12219U;
	static int32_t x650 = -1;
	volatile int32_t x651 = INT32_MIN;
	uint64_t x652 = 78503895122LLU;

    t154 = (x649-((x650<=x651)>x652));

    if (t154 != 12219) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x653 = INT16_MIN;
	volatile int64_t x654 = INT64_MIN;
	int16_t x655 = INT16_MIN;
	uint64_t x656 = UINT64_MAX;
	volatile int32_t t155 = -2;

    t155 = (x653-((x654<=x655)>x656));

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x657 = INT32_MAX;
	uint32_t x658 = 2086460187U;
	volatile int16_t x659 = 1;
	int16_t x660 = -1;
	volatile int32_t t156 = 43257871;

    t156 = (x657-((x658<=x659)>x660));

    if (t156 != 2147483646) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x661 = 1055U;
	static uint32_t x662 = 24U;
	uint8_t x663 = 2U;
	volatile int32_t t157 = 1;

    t157 = (x661-((x662<=x663)>x664));

    if (t157 != 1054) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x665 = UINT16_MAX;
	int16_t x666 = INT16_MIN;
	static volatile int8_t x667 = INT8_MIN;
	int32_t t158 = -19988;

    t158 = (x665-((x666<=x667)>x668));

    if (t158 != 65534) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x671 = INT32_MAX;
	static uint64_t x672 = 94481891653LLU;
	int32_t t159 = INT32_MIN;

    t159 = (x669-((x670<=x671)>x672));

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x673 = INT16_MIN;
	volatile int8_t x676 = -1;
	static volatile int32_t t160 = 1610;

    t160 = (x673-((x674<=x675)>x676));

    if (t160 != -32769) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x677 = UINT8_MAX;
	uint64_t x678 = UINT64_MAX;
	volatile uint32_t x680 = UINT32_MAX;
	static volatile int32_t t161 = 44132;

    t161 = (x677-((x678<=x679)>x680));

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x682 = UINT16_MAX;
	uint64_t x683 = UINT64_MAX;
	volatile uint64_t x684 = 4036LLU;
	static volatile int32_t t162 = 7;

    t162 = (x681-((x682<=x683)>x684));

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x685 = 5U;
	static uint64_t x686 = UINT64_MAX;
	static int32_t x688 = 0;

    t163 = (x685-((x686<=x687)>x688));

    if (t163 != 5) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x689 = INT8_MAX;
	int8_t x690 = 3;
	int16_t x691 = -2;
	int16_t x692 = -1;
	static volatile int32_t t164 = -576;

    t164 = (x689-((x690<=x691)>x692));

    if (t164 != 126) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x693 = -141LL;
	static int16_t x696 = INT16_MAX;
	int64_t t165 = -5018387LL;

    t165 = (x693-((x694<=x695)>x696));

    if (t165 != -141LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x698 = -3906;

    t166 = (x697-((x698<=x699)>x700));

    if (t166 != 171382U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x705 = 29U;
	int16_t x706 = INT16_MIN;
	static volatile int8_t x707 = 4;
	static int32_t x708 = 8914;
	volatile uint32_t t167 = 1004U;

    t167 = (x705-((x706<=x707)>x708));

    if (t167 != 29U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x713 = UINT32_MAX;
	int32_t x714 = -1;
	int32_t x715 = -1;
	int8_t x716 = INT8_MIN;
	volatile uint32_t t168 = 22114U;

    t168 = (x713-((x714<=x715)>x716));

    if (t168 != 4294967294U) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x717 = INT32_MIN;
	static uint16_t x720 = UINT16_MAX;
	static volatile int32_t t169 = INT32_MIN;

    t169 = (x717-((x718<=x719)>x720));

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x722 = 4379U;
	int32_t x723 = -8397;
	uint8_t x724 = UINT8_MAX;
	int32_t t170 = 2327057;

    t170 = (x721-((x722<=x723)>x724));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x725 = 1;
	int8_t x726 = -8;
	int32_t t171 = -1889;

    t171 = (x725-((x726<=x727)>x728));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x729 = 0;
	int16_t x730 = INT16_MAX;
	static volatile int8_t x731 = 56;
	volatile int64_t x732 = 3LL;
	static int32_t t172 = 7267;

    t172 = (x729-((x730<=x731)>x732));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x733 = -1;
	int32_t x734 = -1991979;
	static int32_t x736 = INT32_MIN;
	volatile int32_t t173 = 772;

    t173 = (x733-((x734<=x735)>x736));

    if (t173 != -2) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x737 = 3U;
	uint64_t x739 = 1LLU;
	int16_t x740 = -4517;
	static volatile int32_t t174 = 1;

    t174 = (x737-((x738<=x739)>x740));

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x741 = 157U;
	static uint64_t x742 = UINT64_MAX;
	int32_t x743 = INT32_MIN;
	static volatile int32_t t175 = 0;

    t175 = (x741-((x742<=x743)>x744));

    if (t175 != 156) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x746 = INT8_MIN;
	uint32_t x747 = UINT32_MAX;
	uint16_t x748 = 2U;

    t176 = (x745-((x746<=x747)>x748));

    if (t176 != 31) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x750 = 3855U;
	uint32_t x751 = 2U;
	int64_t x752 = -138129LL;
	volatile int32_t t177 = -39;

    t177 = (x749-((x750<=x751)>x752));

    if (t177 != 65534) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x753 = 1503043LLU;
	int64_t x754 = INT64_MAX;
	uint16_t x755 = 1490U;
	uint8_t x756 = 20U;
	volatile uint64_t t178 = 20562LLU;

    t178 = (x753-((x754<=x755)>x756));

    if (t178 != 1503043LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x757 = 0U;
	uint32_t x758 = UINT32_MAX;
	volatile int8_t x759 = INT8_MIN;
	int32_t t179 = -21625;

    t179 = (x757-((x758<=x759)>x760));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x761 = -1LL;
	volatile int8_t x762 = -6;
	static uint8_t x763 = 11U;
	static volatile int64_t t180 = 256484910072714LL;

    t180 = (x761-((x762<=x763)>x764));

    if (t180 != -2LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x765 = -1;
	static int16_t x766 = INT16_MIN;
	uint16_t x767 = 9134U;
	uint32_t x768 = 32864U;
	int32_t t181 = 5288313;

    t181 = (x765-((x766<=x767)>x768));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x770 = 279U;
	int64_t x771 = -1LL;
	int32_t x772 = INT32_MIN;
	volatile int64_t t182 = 3LL;

    t182 = (x769-((x770<=x771)>x772));

    if (t182 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x774 = -15;
	volatile uint8_t x776 = UINT8_MAX;

    t183 = (x773-((x774<=x775)>x776));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x777 = 4937795LLU;
	static int32_t x778 = 41097;
	uint8_t x779 = UINT8_MAX;
	volatile int16_t x780 = INT16_MAX;
	volatile uint64_t t184 = 661646LLU;

    t184 = (x777-((x778<=x779)>x780));

    if (t184 != 4937795LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x782 = INT64_MIN;
	int64_t x783 = 16LL;
	int32_t x784 = 5407;
	volatile uint64_t t185 = UINT64_MAX;

    t185 = (x781-((x782<=x783)>x784));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x785 = 27099U;
	static int32_t x786 = -1094227;
	uint16_t x787 = 867U;
	uint32_t x788 = 20U;

    t186 = (x785-((x786<=x787)>x788));

    if (t186 != 27099) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x789 = 0U;
	static int8_t x790 = INT8_MIN;
	uint16_t x791 = UINT16_MAX;
	int8_t x792 = INT8_MIN;

    t187 = (x789-((x790<=x791)>x792));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x793 = 3U;
	uint8_t x794 = UINT8_MAX;
	int8_t x795 = INT8_MIN;
	int16_t x796 = -1;
	volatile uint32_t t188 = 8U;

    t188 = (x793-((x794<=x795)>x796));

    if (t188 != 2U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x797 = 1561294885LL;
	int16_t x798 = -1;
	int32_t x799 = 1085573;
	int32_t x800 = -1;
	static int64_t t189 = 2063597259552966LL;

    t189 = (x797-((x798<=x799)>x800));

    if (t189 != 1561294884LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x801 = 103U;
	int64_t x802 = INT64_MIN;
	int8_t x803 = INT8_MIN;

    t190 = (x801-((x802<=x803)>x804));

    if (t190 != 102U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x806 = -1;
	static int16_t x807 = INT16_MIN;
	int16_t x808 = 5885;
	int32_t t191 = -27573;

    t191 = (x805-((x806<=x807)>x808));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x809 = -78470842401LL;
	uint64_t x810 = 118667328376LLU;
	int8_t x811 = INT8_MAX;
	volatile uint32_t x812 = 112590U;
	int64_t t192 = -436257754074951LL;

    t192 = (x809-((x810<=x811)>x812));

    if (t192 != -78470842401LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x813 = 30756U;
	uint16_t x814 = 7U;
	uint16_t x816 = UINT16_MAX;

    t193 = (x813-((x814<=x815)>x816));

    if (t193 != 30756) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x817 = 243752486LLU;
	int16_t x818 = INT16_MIN;
	int64_t x819 = INT64_MIN;
	volatile uint64_t t194 = 4256LLU;

    t194 = (x817-((x818<=x819)>x820));

    if (t194 != 243752486LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x823 = INT8_MAX;
	int64_t x824 = INT64_MIN;
	int32_t t195 = -21700603;

    t195 = (x821-((x822<=x823)>x824));

    if (t195 != -2) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x825 = INT8_MIN;
	uint64_t x826 = 65977LLU;
	int16_t x827 = INT16_MIN;
	int32_t x828 = INT32_MIN;
	volatile int32_t t196 = -18;

    t196 = (x825-((x826<=x827)>x828));

    if (t196 != -129) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x830 = INT8_MIN;
	static uint8_t x831 = 46U;
	static volatile int32_t t197 = -17;

    t197 = (x829-((x830<=x831)>x832));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x833 = INT8_MAX;
	int16_t x835 = INT16_MAX;
	int32_t t198 = 20828;

    t198 = (x833-((x834<=x835)>x836));

    if (t198 != 126) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x837 = 491;
	static int32_t x838 = INT32_MIN;
	uint64_t x839 = UINT64_MAX;
	int64_t x840 = INT64_MIN;

    t199 = (x837-((x838<=x839)>x840));

    if (t199 != 490) { NG(); } else { ; }
	
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

