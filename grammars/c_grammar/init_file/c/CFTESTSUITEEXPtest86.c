
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

static int16_t x3 = INT16_MIN;
int64_t x4 = 3589777294836662LL;
int8_t x6 = -1;
int64_t x8 = INT64_MIN;
volatile int32_t t1 = -2;
int16_t x13 = -1;
volatile int64_t x17 = 1011LL;
int32_t x18 = INT32_MIN;
static volatile uint8_t x19 = 1U;
volatile int8_t x29 = INT8_MAX;
volatile int64_t x31 = -1LL;
int64_t x50 = 4391756789919637LL;
uint32_t x52 = 2893U;
int16_t x73 = INT16_MIN;
static volatile int16_t x75 = INT16_MIN;
volatile int32_t t15 = 1;
volatile int32_t t17 = 402;
uint32_t x117 = 26U;
volatile int8_t x119 = INT8_MIN;
static uint64_t x130 = 14019220749281LLU;
int8_t x150 = -1;
int32_t x151 = -1;
int8_t x152 = INT8_MIN;
int32_t t27 = -255;
volatile uint32_t x154 = UINT32_MAX;
static int8_t x156 = -1;
int32_t t29 = 497569;
int64_t x161 = -5725044388LL;
uint32_t x162 = UINT32_MAX;
uint8_t x163 = UINT8_MAX;
uint64_t x164 = 3016552522LLU;
uint64_t x167 = UINT64_MAX;
int8_t x168 = -1;
static int64_t x169 = -1LL;
volatile int32_t t34 = -84854355;
uint32_t x185 = 764U;
volatile int32_t x187 = -9471;
volatile uint32_t t35 = 377325U;
static int64_t x192 = -1LL;
int8_t x201 = INT8_MAX;
int32_t x211 = INT32_MIN;
uint64_t x243 = 52889201LLU;
static int16_t x244 = INT16_MIN;
volatile int32_t t44 = 7;
static uint16_t x250 = 688U;
int16_t x251 = INT16_MIN;
int32_t t46 = -31752050;
static int32_t x275 = INT32_MIN;
int64_t x287 = 266975305798LL;
uint64_t x311 = 12813563029LLU;
int64_t x313 = -1LL;
int8_t x316 = 0;
int16_t x321 = INT16_MIN;
uint8_t x322 = 0U;
int8_t x332 = -2;
int8_t x340 = 30;
volatile int32_t t62 = -9940;
int16_t x341 = INT16_MIN;
int8_t x342 = -40;
uint64_t x343 = 954324LLU;
static uint8_t x356 = 0U;
int32_t t65 = -2048791;
uint16_t x360 = UINT16_MAX;
int8_t x366 = 0;
uint8_t x372 = UINT8_MAX;
uint64_t t69 = 36923427700037LLU;
static uint64_t x381 = 7826993290LLU;
uint32_t x382 = 822U;
volatile int16_t x397 = INT16_MIN;
uint8_t x400 = 9U;
volatile int32_t x411 = INT32_MIN;
uint64_t x425 = UINT64_MAX;
uint64_t t78 = 2LLU;
int16_t x429 = 45;
int8_t x430 = 3;
static uint32_t x444 = UINT32_MAX;
int64_t x448 = INT64_MIN;
static volatile int32_t t82 = -79;
int32_t t83 = 3050;
volatile int16_t x454 = INT16_MAX;
uint64_t x460 = UINT64_MAX;
uint32_t x481 = 7336U;
int8_t x483 = INT8_MIN;
static volatile int64_t x492 = INT64_MAX;
static int32_t x493 = 1004;
int64_t x498 = -1LL;
int8_t x503 = 38;
volatile int16_t x504 = 1151;
uint32_t t92 = 782938U;
int32_t x514 = INT32_MAX;
volatile int16_t x520 = -113;
uint8_t x527 = UINT8_MAX;
uint32_t x534 = 3788U;
volatile int64_t x539 = -1LL;
volatile int32_t t100 = -593;
static int8_t x542 = INT8_MAX;
volatile int32_t t101 = 1068161986;
volatile uint64_t x549 = UINT64_MAX;
uint8_t x551 = UINT8_MAX;
volatile uint64_t t103 = 63114231219LLU;
uint64_t t104 = 60212792120526833LLU;
int16_t x557 = INT16_MIN;
uint8_t x559 = 11U;
volatile uint64_t x567 = UINT64_MAX;
uint16_t x568 = 0U;
int32_t x571 = INT32_MAX;
volatile int64_t x573 = -1LL;
int16_t x575 = 1;
static uint32_t x584 = 357984U;
uint32_t x590 = 25054166U;
volatile int32_t t111 = -68759733;
int64_t x593 = 946016125022634LL;
uint32_t t113 = 28702U;
static int8_t x606 = INT8_MAX;
volatile uint64_t x609 = 52486039957LLU;
int8_t x611 = -1;
int64_t x627 = INT64_MAX;
uint64_t x631 = 0LLU;
static int16_t x634 = 47;
volatile int64_t x636 = INT64_MAX;
static int16_t x637 = -122;
int8_t x638 = INT8_MIN;
static volatile int64_t t123 = 8LL;
int8_t x653 = INT8_MIN;
volatile uint64_t x659 = UINT64_MAX;
int8_t x660 = INT8_MIN;
volatile int8_t x661 = INT8_MAX;
int32_t x663 = INT32_MIN;
int16_t x674 = INT16_MIN;
static uint8_t x677 = 2U;
volatile uint32_t x678 = UINT32_MAX;
int64_t x685 = 424747821547366947LL;
static volatile int32_t x693 = 20789203;
int32_t t133 = -1416;
volatile int32_t t134 = 1384;
int32_t t135 = 205899885;
static volatile int64_t x713 = -1LL;
volatile int32_t x727 = -333289652;
int8_t x731 = -35;
int64_t x735 = INT64_MAX;
volatile int64_t x744 = 2443LL;
static int32_t x748 = 6340247;
volatile uint32_t t143 = 589U;
int64_t x749 = INT64_MAX;
int16_t x753 = INT16_MIN;
static uint16_t x755 = 4U;
static int64_t x757 = 35836120260723LL;
int64_t x758 = INT64_MAX;
volatile int32_t x763 = INT32_MAX;
int64_t x768 = -692LL;
int64_t x817 = 55156953816863LL;
uint64_t x833 = 109864444591LLU;
static volatile uint64_t x838 = 301396892LLU;
int16_t x839 = -15028;
volatile int32_t t158 = -17;
int16_t x846 = INT16_MAX;
volatile int16_t x854 = INT16_MIN;
volatile int8_t x856 = INT8_MIN;
int32_t x863 = -1;
int32_t t164 = 367405;
int64_t x874 = INT64_MIN;
volatile int16_t x875 = 214;
uint64_t x878 = 9LLU;
uint8_t x882 = 0U;
int8_t x885 = 9;
int32_t x887 = INT32_MAX;
volatile int32_t t168 = 1;
int16_t x889 = 220;
static int64_t x891 = INT64_MAX;
uint16_t x894 = UINT16_MAX;
uint16_t x898 = 430U;
static volatile int16_t x912 = INT16_MIN;
uint8_t x921 = UINT8_MAX;
static uint8_t x923 = 1U;
int8_t x924 = -1;
volatile uint64_t x925 = 425664099258685236LLU;
uint64_t t177 = 18361LLU;
static int32_t t178 = 135184;
volatile uint64_t x944 = UINT64_MAX;
int64_t x954 = INT64_MIN;
volatile uint32_t t185 = 464U;
int8_t x982 = -43;
int8_t x984 = 1;
volatile int32_t t189 = -124962732;
volatile int8_t x986 = 0;
volatile int16_t x989 = INT16_MIN;
uint64_t x990 = UINT64_MAX;
int16_t x991 = INT16_MIN;
uint8_t x992 = 2U;
int16_t x1002 = -1;
static uint16_t x1005 = UINT16_MAX;
uint8_t x1008 = 70U;
volatile int64_t x1009 = INT64_MAX;
static volatile uint32_t x1010 = UINT32_MAX;
volatile int32_t x1011 = INT32_MIN;
uint64_t x1023 = UINT64_MAX;
int8_t x1026 = 0;
int32_t x1027 = 116142744;
int32_t x1031 = 0;
volatile int32_t t199 = -41723;


void f0(void) {
    	uint16_t x1 = 3U;
	uint16_t x2 = 1U;
	static int32_t t0 = -646676;

    t0 = (x1-((x2+x3)!=x4));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -1;
	int32_t x7 = INT32_MAX;

    t1 = (x5-((x6+x7)!=x8));

    if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x14 = INT64_MAX;
	volatile int64_t x15 = -1LL;
	int16_t x16 = -1;
	volatile int32_t t2 = 14393;

    t2 = (x13-((x14+x15)!=x16));

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x20 = INT8_MIN;
	volatile int64_t t3 = -1247066LL;

    t3 = (x17-((x18+x19)!=x20));

    if (t3 != 1010LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 79708215434389LLU;
	static volatile uint8_t x22 = 17U;
	int16_t x23 = 6;
	int64_t x24 = INT64_MIN;
	uint64_t t4 = 611LLU;

    t4 = (x21-((x22+x23)!=x24));

    if (t4 != 79708215434388LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x25 = 7829436LL;
	int16_t x26 = -1;
	int16_t x27 = -1;
	int16_t x28 = -19;
	int64_t t5 = -3552976386LL;

    t5 = (x25-((x26+x27)!=x28));

    if (t5 != 7829435LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x30 = 4LL;
	volatile int32_t x32 = INT32_MIN;
	volatile int32_t t6 = 52806949;

    t6 = (x29-((x30+x31)!=x32));

    if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x37 = UINT16_MAX;
	uint32_t x38 = 2815173U;
	static int8_t x39 = -11;
	static volatile int32_t x40 = 431;
	volatile int32_t t7 = 1438;

    t7 = (x37-((x38+x39)!=x40));

    if (t7 != 65534) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = 4819137U;
	static volatile int32_t x42 = -124826476;
	int32_t x43 = 49;
	volatile uint16_t x44 = 3352U;
	uint32_t t8 = 543U;

    t8 = (x41-((x42+x43)!=x44));

    if (t8 != 4819136U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x45 = 1U;
	static int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MAX;
	int16_t x48 = INT16_MAX;
	static int32_t t9 = -152;

    t9 = (x45-((x46+x47)!=x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = -2081105063948267866LL;
	int16_t x51 = 142;
	volatile int64_t t10 = 1120813170016572435LL;

    t10 = (x49-((x50+x51)!=x52));

    if (t10 != -2081105063948267867LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = INT8_MIN;
	static uint16_t x54 = 1U;
	uint64_t x55 = UINT64_MAX;
	volatile uint8_t x56 = 107U;
	volatile int32_t t11 = 27;

    t11 = (x53-((x54+x55)!=x56));

    if (t11 != -129) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x61 = 30U;
	volatile uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 203562LLU;
	volatile uint32_t x64 = UINT32_MAX;
	volatile int32_t t12 = 29;

    t12 = (x61-((x62+x63)!=x64));

    if (t12 != 29) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x65 = 14690418986LL;
	int16_t x66 = -1;
	int32_t x67 = -1;
	static int64_t x68 = 4606888612765LL;
	volatile int64_t t13 = 484793383490LL;

    t13 = (x65-((x66+x67)!=x68));

    if (t13 != 14690418985LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = INT8_MAX;
	static int64_t x70 = 1792171705056027898LL;
	int64_t x71 = INT64_MIN;
	volatile int16_t x72 = -9667;
	int32_t t14 = -1;

    t14 = (x69-((x70+x71)!=x72));

    if (t14 != 126) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x74 = -12036761LL;
	volatile int8_t x76 = 1;

    t15 = (x73-((x74+x75)!=x76));

    if (t15 != -32769) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x85 = -1;
	int8_t x86 = INT8_MIN;
	int32_t x87 = 23106980;
	volatile int64_t x88 = INT64_MIN;
	volatile int32_t t16 = -24852;

    t16 = (x85-((x86+x87)!=x88));

    if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x101 = 33;
	volatile int64_t x102 = 4054467498449519773LL;
	static int8_t x103 = -1;
	volatile int64_t x104 = INT64_MAX;

    t17 = (x101-((x102+x103)!=x104));

    if (t17 != 32) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x105 = 3757570LLU;
	uint64_t x106 = 420LLU;
	static volatile uint64_t x107 = 5208907874646239LLU;
	int16_t x108 = INT16_MIN;
	static volatile uint64_t t18 = 258338810511836LLU;

    t18 = (x105-((x106+x107)!=x108));

    if (t18 != 3757569LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x109 = INT16_MIN;
	uint32_t x110 = 83289688U;
	uint32_t x111 = 1U;
	static int8_t x112 = INT8_MIN;
	int32_t t19 = 267177620;

    t19 = (x109-((x110+x111)!=x112));

    if (t19 != -32769) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MIN;
	uint16_t x115 = 0U;
	int64_t x116 = -11024279252931LL;
	volatile uint64_t t20 = 63599LLU;

    t20 = (x113-((x114+x115)!=x116));

    if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x118 = 429;
	uint8_t x120 = 6U;
	uint32_t t21 = 7U;

    t21 = (x117-((x118+x119)!=x120));

    if (t21 != 25U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x125 = -3196;
	int16_t x126 = -1;
	int8_t x127 = 1;
	static volatile int16_t x128 = -3397;
	volatile int32_t t22 = 4859;

    t22 = (x125-((x126+x127)!=x128));

    if (t22 != -3197) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x129 = UINT8_MAX;
	int16_t x131 = INT16_MAX;
	uint16_t x132 = 0U;
	int32_t t23 = -1209;

    t23 = (x129-((x130+x131)!=x132));

    if (t23 != 254) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x133 = UINT32_MAX;
	int32_t x134 = -1;
	int32_t x135 = -1;
	static volatile int16_t x136 = -4;
	uint32_t t24 = 3427U;

    t24 = (x133-((x134+x135)!=x136));

    if (t24 != 4294967294U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x137 = 884226U;
	volatile int32_t x138 = -163771;
	int64_t x139 = -1LL;
	int64_t x140 = INT64_MAX;
	uint32_t t25 = 89129340U;

    t25 = (x137-((x138+x139)!=x140));

    if (t25 != 884225U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x145 = UINT32_MAX;
	volatile int16_t x146 = INT16_MIN;
	uint32_t x147 = 17175347U;
	static uint8_t x148 = 34U;
	uint32_t t26 = 235329868U;

    t26 = (x145-((x146+x147)!=x148));

    if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x149 = UINT16_MAX;

    t27 = (x149-((x150+x151)!=x152));

    if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x153 = INT8_MIN;
	uint16_t x155 = 47U;
	static volatile int32_t t28 = 23421;

    t28 = (x153-((x154+x155)!=x156));

    if (t28 != -129) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x157 = UINT8_MAX;
	int64_t x158 = -1LL;
	uint64_t x159 = 2136676257LLU;
	volatile int16_t x160 = INT16_MIN;

    t29 = (x157-((x158+x159)!=x160));

    if (t29 != 254) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t t30 = -2655230758LL;

    t30 = (x161-((x162+x163)!=x164));

    if (t30 != -5725044389LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x165 = 4U;
	int64_t x166 = INT64_MIN;
	static int32_t t31 = -134530249;

    t31 = (x165-((x166+x167)!=x168));

    if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x170 = 243U;
	static int16_t x171 = INT16_MAX;
	int32_t x172 = INT32_MIN;
	int64_t t32 = 7972751556LL;

    t32 = (x169-((x170+x171)!=x172));

    if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x173 = 0U;
	int32_t x174 = INT32_MIN;
	int64_t x175 = -1LL;
	uint16_t x176 = 3694U;
	static int32_t t33 = -9722411;

    t33 = (x173-((x174+x175)!=x176));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x181 = 969;
	int64_t x182 = -5442927554LL;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = 1;

    t34 = (x181-((x182+x183)!=x184));

    if (t34 != 968) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x186 = 0U;
	static int64_t x188 = INT64_MIN;

    t35 = (x185-((x186+x187)!=x188));

    if (t35 != 763U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x189 = INT32_MAX;
	uint16_t x190 = 1U;
	static int16_t x191 = INT16_MAX;
	int32_t t36 = 1;

    t36 = (x189-((x190+x191)!=x192));

    if (t36 != 2147483646) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x202 = 1;
	uint16_t x203 = UINT16_MAX;
	uint64_t x204 = 9355343LLU;
	volatile int32_t t37 = 1608115;

    t37 = (x201-((x202+x203)!=x204));

    if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint8_t x205 = 34U;
	int8_t x206 = INT8_MAX;
	uint64_t x207 = UINT64_MAX;
	volatile int8_t x208 = -1;
	int32_t t38 = 0;

    t38 = (x205-((x206+x207)!=x208));

    if (t38 != 33) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x209 = 62002517163399LL;
	uint32_t x210 = UINT32_MAX;
	static int16_t x212 = 69;
	static volatile int64_t t39 = 1LL;

    t39 = (x209-((x210+x211)!=x212));

    if (t39 != 62002517163398LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x221 = -998;
	uint16_t x222 = 434U;
	static uint8_t x223 = 0U;
	uint32_t x224 = 42627U;
	int32_t t40 = 24956930;

    t40 = (x221-((x222+x223)!=x224));

    if (t40 != -999) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 985051940U;
	static int64_t x228 = INT64_MIN;
	static volatile uint64_t t41 = 10033638866689LLU;

    t41 = (x225-((x226+x227)!=x228));

    if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x229 = 64155508084063LLU;
	int8_t x230 = -1;
	uint16_t x231 = 17903U;
	volatile int16_t x232 = -1033;
	static volatile uint64_t t42 = 7860530183LLU;

    t42 = (x229-((x230+x231)!=x232));

    if (t42 != 64155508084062LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x237 = -370;
	volatile int64_t x238 = -1LL;
	uint8_t x239 = 16U;
	static uint64_t x240 = 5246263118350293877LLU;
	int32_t t43 = -178584507;

    t43 = (x237-((x238+x239)!=x240));

    if (t43 != -371) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x241 = INT8_MAX;
	int32_t x242 = INT32_MIN;

    t44 = (x241-((x242+x243)!=x244));

    if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x245 = UINT32_MAX;
	uint16_t x246 = 1U;
	volatile int8_t x247 = 1;
	int16_t x248 = INT16_MIN;
	uint32_t t45 = 1274270U;

    t45 = (x245-((x246+x247)!=x248));

    if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x249 = 14;
	uint64_t x252 = UINT64_MAX;

    t46 = (x249-((x250+x251)!=x252));

    if (t46 != 13) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x253 = UINT32_MAX;
	int16_t x254 = INT16_MIN;
	static uint32_t x255 = UINT32_MAX;
	static int8_t x256 = -1;
	uint32_t t47 = 25920514U;

    t47 = (x253-((x254+x255)!=x256));

    if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x261 = INT32_MAX;
	static uint16_t x262 = 53U;
	int8_t x263 = 2;
	volatile int64_t x264 = INT64_MIN;
	volatile int32_t t48 = -645115593;

    t48 = (x261-((x262+x263)!=x264));

    if (t48 != 2147483646) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x269 = 3U;
	int16_t x270 = INT16_MIN;
	uint32_t x271 = 0U;
	uint32_t x272 = 224U;
	int32_t t49 = 7;

    t49 = (x269-((x270+x271)!=x272));

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x273 = 1602LLU;
	int8_t x274 = 0;
	int64_t x276 = -308317756507125672LL;
	volatile uint64_t t50 = 24315604978674426LLU;

    t50 = (x273-((x274+x275)!=x276));

    if (t50 != 1601LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x285 = 5;
	int16_t x286 = 1998;
	int16_t x288 = INT16_MIN;
	volatile int32_t t51 = 660;

    t51 = (x285-((x286+x287)!=x288));

    if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x297 = -1;
	uint32_t x298 = 19613U;
	uint8_t x299 = UINT8_MAX;
	int64_t x300 = INT64_MAX;
	int32_t t52 = 1397;

    t52 = (x297-((x298+x299)!=x300));

    if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x301 = 833499U;
	uint16_t x302 = UINT16_MAX;
	static int32_t x303 = -10789932;
	int8_t x304 = INT8_MIN;
	uint32_t t53 = 876U;

    t53 = (x301-((x302+x303)!=x304));

    if (t53 != 833498U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	int64_t x307 = -247LL;
	volatile int64_t x308 = INT64_MAX;
	volatile int32_t t54 = -2160;

    t54 = (x305-((x306+x307)!=x308));

    if (t54 != -129) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x309 = -1LL;
	volatile int8_t x310 = INT8_MIN;
	int8_t x312 = INT8_MIN;
	int64_t t55 = -1403395645LL;

    t55 = (x309-((x310+x311)!=x312));

    if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x314 = INT16_MAX;
	int64_t x315 = 33341006LL;
	int64_t t56 = 554LL;

    t56 = (x313-((x314+x315)!=x316));

    if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x317 = 7LLU;
	int64_t x318 = INT64_MAX;
	int64_t x319 = INT64_MIN;
	volatile int32_t x320 = INT32_MIN;
	volatile uint64_t t57 = 63LLU;

    t57 = (x317-((x318+x319)!=x320));

    if (t57 != 6LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x323 = UINT16_MAX;
	uint16_t x324 = 100U;
	volatile int32_t t58 = 79640202;

    t58 = (x321-((x322+x323)!=x324));

    if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x325 = UINT32_MAX;
	uint32_t x326 = 0U;
	int32_t x327 = 17272;
	volatile int16_t x328 = INT16_MIN;
	uint32_t t59 = 4868425U;

    t59 = (x325-((x326+x327)!=x328));

    if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x329 = 397U;
	uint64_t x330 = 275LLU;
	int32_t x331 = -987976;
	volatile int32_t t60 = -6;

    t60 = (x329-((x330+x331)!=x332));

    if (t60 != 396) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x333 = 0U;
	int64_t x334 = -1LL;
	volatile uint64_t x335 = 4050LLU;
	static volatile int32_t x336 = 26771544;
	int32_t t61 = 57358;

    t61 = (x333-((x334+x335)!=x336));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x337 = INT8_MIN;
	uint16_t x338 = 20U;
	int32_t x339 = 67146741;

    t62 = (x337-((x338+x339)!=x340));

    if (t62 != -129) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x344 = 1;
	int32_t t63 = -127617268;

    t63 = (x341-((x342+x343)!=x344));

    if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x349 = 175LLU;
	int64_t x350 = -119242953185993155LL;
	volatile uint32_t x351 = 0U;
	volatile uint32_t x352 = 13U;
	static uint64_t t64 = 75860LLU;

    t64 = (x349-((x350+x351)!=x352));

    if (t64 != 174LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x353 = INT16_MIN;
	uint8_t x354 = 6U;
	int64_t x355 = INT64_MIN;

    t65 = (x353-((x354+x355)!=x356));

    if (t65 != -32769) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x357 = -1;
	static uint8_t x358 = UINT8_MAX;
	int8_t x359 = -1;
	volatile int32_t t66 = 0;

    t66 = (x357-((x358+x359)!=x360));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x365 = INT32_MAX;
	static volatile int64_t x367 = INT64_MIN;
	volatile int64_t x368 = 2103475140381LL;
	int32_t t67 = 2;

    t67 = (x365-((x366+x367)!=x368));

    if (t67 != 2147483646) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x369 = INT8_MAX;
	uint64_t x370 = 4LLU;
	int64_t x371 = INT64_MIN;
	volatile int32_t t68 = 8852936;

    t68 = (x369-((x370+x371)!=x372));

    if (t68 != 126) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x373 = 3555674842227010756LLU;
	int16_t x374 = -1;
	volatile int32_t x375 = -1;
	static volatile uint8_t x376 = 16U;

    t69 = (x373-((x374+x375)!=x376));

    if (t69 != 3555674842227010755LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x377 = -1;
	static int16_t x378 = 469;
	int16_t x379 = 183;
	int32_t x380 = -1;
	static int32_t t70 = 8;

    t70 = (x377-((x378+x379)!=x380));

    if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x383 = INT32_MAX;
	volatile uint64_t x384 = UINT64_MAX;
	uint64_t t71 = 105118448218638319LLU;

    t71 = (x381-((x382+x383)!=x384));

    if (t71 != 7826993289LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x389 = INT16_MIN;
	uint8_t x390 = 3U;
	int8_t x391 = INT8_MIN;
	int8_t x392 = -1;
	static int32_t t72 = -89007537;

    t72 = (x389-((x390+x391)!=x392));

    if (t72 != -32769) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x398 = 0U;
	static volatile uint16_t x399 = 292U;
	int32_t t73 = -922986459;

    t73 = (x397-((x398+x399)!=x400));

    if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MIN;
	volatile int64_t x403 = -1LL;
	volatile int8_t x404 = INT8_MAX;
	int32_t t74 = -1;

    t74 = (x401-((x402+x403)!=x404));

    if (t74 != -32769) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x409 = 83U;
	volatile uint8_t x410 = UINT8_MAX;
	static int16_t x412 = INT16_MAX;
	volatile int32_t t75 = 2845930;

    t75 = (x409-((x410+x411)!=x412));

    if (t75 != 82) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x413 = 3U;
	static int32_t x414 = INT32_MAX;
	static uint32_t x415 = 0U;
	int8_t x416 = INT8_MAX;
	int32_t t76 = 9;

    t76 = (x413-((x414+x415)!=x416));

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x421 = UINT8_MAX;
	static volatile uint16_t x422 = 10U;
	int64_t x423 = -45263233579LL;
	uint64_t x424 = 54909059430560LLU;
	static int32_t t77 = 25789;

    t77 = (x421-((x422+x423)!=x424));

    if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x426 = INT32_MIN;
	uint8_t x427 = 1U;
	uint32_t x428 = 507149U;

    t78 = (x425-((x426+x427)!=x428));

    if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x431 = 11489U;
	volatile int64_t x432 = 4LL;
	volatile int32_t t79 = 529877042;

    t79 = (x429-((x430+x431)!=x432));

    if (t79 != 44) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x433 = INT32_MAX;
	int8_t x434 = INT8_MIN;
	int64_t x435 = -1LL;
	uint16_t x436 = UINT16_MAX;
	static int32_t t80 = 2039680;

    t80 = (x433-((x434+x435)!=x436));

    if (t80 != 2147483646) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x441 = 1261824725763LLU;
	int8_t x442 = 2;
	int8_t x443 = INT8_MAX;
	volatile uint64_t t81 = 18302LLU;

    t81 = (x441-((x442+x443)!=x444));

    if (t81 != 1261824725762LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x445 = -1;
	uint8_t x446 = 34U;
	uint64_t x447 = 44326941125LLU;

    t82 = (x445-((x446+x447)!=x448));

    if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x449 = 49U;
	static int16_t x450 = -1;
	volatile int16_t x451 = -24;
	int16_t x452 = INT16_MIN;

    t83 = (x449-((x450+x451)!=x452));

    if (t83 != 48) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x453 = -68149466802LL;
	int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	volatile int64_t t84 = 0LL;

    t84 = (x453-((x454+x455)!=x456));

    if (t84 != -68149466803LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x457 = UINT32_MAX;
	volatile int64_t x458 = INT64_MAX;
	static uint8_t x459 = 0U;
	volatile uint32_t t85 = 1487122U;

    t85 = (x457-((x458+x459)!=x460));

    if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x477 = 13U;
	int16_t x478 = -72;
	static uint64_t x479 = 18247150450LLU;
	int64_t x480 = 8258390643315286LL;
	volatile int32_t t86 = -4367;

    t86 = (x477-((x478+x479)!=x480));

    if (t86 != 12) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x482 = UINT64_MAX;
	uint16_t x484 = 1U;
	uint32_t t87 = 1951921U;

    t87 = (x481-((x482+x483)!=x484));

    if (t87 != 7335U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x485 = UINT64_MAX;
	uint64_t x486 = 936457LLU;
	int8_t x487 = -1;
	int16_t x488 = -1360;
	uint64_t t88 = 159LLU;

    t88 = (x485-((x486+x487)!=x488));

    if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x489 = 10874476443582LLU;
	int16_t x490 = 3441;
	uint16_t x491 = 4056U;
	uint64_t t89 = 2029824615459LLU;

    t89 = (x489-((x490+x491)!=x492));

    if (t89 != 10874476443581LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x494 = INT16_MAX;
	int16_t x495 = INT16_MIN;
	int8_t x496 = INT8_MIN;
	static int32_t t90 = 8604;

    t90 = (x493-((x494+x495)!=x496));

    if (t90 != 1003) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x497 = 6U;
	uint8_t x499 = 22U;
	int32_t x500 = 942587;
	volatile int32_t t91 = -2601862;

    t91 = (x497-((x498+x499)!=x500));

    if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x501 = UINT32_MAX;
	static int8_t x502 = INT8_MIN;

    t92 = (x501-((x502+x503)!=x504));

    if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x505 = 1U;
	int8_t x506 = INT8_MAX;
	int64_t x507 = INT64_MIN;
	uint8_t x508 = 6U;
	int32_t t93 = -57;

    t93 = (x505-((x506+x507)!=x508));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x509 = -1LL;
	static int32_t x510 = -107032;
	int32_t x511 = -1;
	static uint64_t x512 = 10972353LLU;
	volatile int64_t t94 = 7679524LL;

    t94 = (x509-((x510+x511)!=x512));

    if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x513 = 2;
	int32_t x515 = -1;
	uint32_t x516 = 337632363U;
	volatile int32_t t95 = -3303;

    t95 = (x513-((x514+x515)!=x516));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x517 = -1104401316836573LL;
	uint8_t x518 = UINT8_MAX;
	uint8_t x519 = 6U;
	static int64_t t96 = -228775320824LL;

    t96 = (x517-((x518+x519)!=x520));

    if (t96 != -1104401316836574LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x521 = 1U;
	uint8_t x522 = 1U;
	static uint32_t x523 = 81120U;
	static int64_t x524 = INT64_MIN;
	static volatile int32_t t97 = -36;

    t97 = (x521-((x522+x523)!=x524));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x525 = 9U;
	volatile int64_t x526 = -35289156681LL;
	int64_t x528 = INT64_MAX;
	int32_t t98 = 56;

    t98 = (x525-((x526+x527)!=x528));

    if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x533 = INT16_MIN;
	volatile int64_t x535 = 2567824439496103340LL;
	int64_t x536 = INT64_MIN;
	volatile int32_t t99 = 15;

    t99 = (x533-((x534+x535)!=x536));

    if (t99 != -32769) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x537 = -6623;
	int16_t x538 = INT16_MAX;
	int32_t x540 = INT32_MIN;

    t100 = (x537-((x538+x539)!=x540));

    if (t100 != -6624) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x541 = INT8_MIN;
	volatile uint64_t x543 = 2218685561LLU;
	static int16_t x544 = INT16_MIN;

    t101 = (x541-((x542+x543)!=x544));

    if (t101 != -129) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x545 = INT8_MIN;
	int8_t x546 = INT8_MIN;
	static volatile int64_t x547 = 71003705192709523LL;
	static volatile uint32_t x548 = UINT32_MAX;
	volatile int32_t t102 = 349897;

    t102 = (x545-((x546+x547)!=x548));

    if (t102 != -129) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x550 = 3782;
	int8_t x552 = INT8_MIN;

    t103 = (x549-((x550+x551)!=x552));

    if (t103 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x553 = 56156LLU;
	static uint8_t x554 = UINT8_MAX;
	int64_t x555 = -21056959054370568LL;
	uint32_t x556 = 1383U;

    t104 = (x553-((x554+x555)!=x556));

    if (t104 != 56155LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x558 = INT32_MIN;
	static int64_t x560 = INT64_MIN;
	int32_t t105 = -1;

    t105 = (x557-((x558+x559)!=x560));

    if (t105 != -32769) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x565 = -1LL;
	int32_t x566 = -34010;
	volatile int64_t t106 = 2275768LL;

    t106 = (x565-((x566+x567)!=x568));

    if (t106 != -2LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x569 = 29U;
	uint32_t x570 = 3865390U;
	uint32_t x572 = 567091U;
	volatile int32_t t107 = -35;

    t107 = (x569-((x570+x571)!=x572));

    if (t107 != 28) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x574 = -1;
	uint8_t x576 = 2U;
	int64_t t108 = -229430801382LL;

    t108 = (x573-((x574+x575)!=x576));

    if (t108 != -2LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x581 = 1107198452343722LL;
	static int64_t x582 = -1LL;
	static int8_t x583 = INT8_MIN;
	volatile int64_t t109 = -7978109LL;

    t109 = (x581-((x582+x583)!=x584));

    if (t109 != 1107198452343721LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x585 = UINT64_MAX;
	static int16_t x586 = -1;
	static uint64_t x587 = 363432760922036LLU;
	int32_t x588 = INT32_MAX;
	static volatile uint64_t t110 = 3234324753LLU;

    t110 = (x585-((x586+x587)!=x588));

    if (t110 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x589 = INT8_MAX;
	int32_t x591 = INT32_MAX;
	uint16_t x592 = UINT16_MAX;

    t111 = (x589-((x590+x591)!=x592));

    if (t111 != 126) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x594 = INT64_MAX;
	int32_t x595 = -1;
	static uint32_t x596 = UINT32_MAX;
	int64_t t112 = -26743836169233LL;

    t112 = (x593-((x594+x595)!=x596));

    if (t112 != 946016125022633LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x597 = 3879U;
	uint32_t x598 = 3712229U;
	int32_t x599 = 197800;
	static int32_t x600 = INT32_MIN;

    t113 = (x597-((x598+x599)!=x600));

    if (t113 != 3878U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x601 = 17;
	volatile int64_t x602 = 734561546485LL;
	static int32_t x603 = -1;
	int32_t x604 = INT32_MIN;
	int32_t t114 = 936;

    t114 = (x601-((x602+x603)!=x604));

    if (t114 != 16) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x605 = INT8_MIN;
	int32_t x607 = INT32_MIN;
	volatile int32_t x608 = -1004700885;
	static int32_t t115 = -9376745;

    t115 = (x605-((x606+x607)!=x608));

    if (t115 != -129) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x610 = 454U;
	int32_t x612 = -663;
	volatile uint64_t t116 = 1062168187026140349LLU;

    t116 = (x609-((x610+x611)!=x612));

    if (t116 != 52486039956LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x617 = UINT64_MAX;
	int16_t x618 = -9;
	volatile int16_t x619 = -1;
	int32_t x620 = INT32_MAX;
	static volatile uint64_t t117 = 3089783058LLU;

    t117 = (x617-((x618+x619)!=x620));

    if (t117 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x621 = 942U;
	int32_t x622 = -1;
	uint8_t x623 = 7U;
	static int8_t x624 = INT8_MIN;
	int32_t t118 = -4150;

    t118 = (x621-((x622+x623)!=x624));

    if (t118 != 941) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x625 = 4446LL;
	int8_t x626 = INT8_MIN;
	volatile int32_t x628 = -1;
	volatile int64_t t119 = 30402309LL;

    t119 = (x625-((x626+x627)!=x628));

    if (t119 != 4445LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x629 = 3969U;
	volatile uint8_t x630 = UINT8_MAX;
	static int16_t x632 = -12;
	volatile int32_t t120 = -1;

    t120 = (x629-((x630+x631)!=x632));

    if (t120 != 3968) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x633 = 52U;
	static int64_t x635 = INT64_MIN;
	int32_t t121 = -16282;

    t121 = (x633-((x634+x635)!=x636));

    if (t121 != 51) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x639 = 39LLU;
	uint32_t x640 = 269U;
	static int32_t t122 = -486346419;

    t122 = (x637-((x638+x639)!=x640));

    if (t122 != -123) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x645 = INT64_MAX;
	int64_t x646 = INT64_MAX;
	uint64_t x647 = UINT64_MAX;
	volatile int16_t x648 = INT16_MIN;

    t123 = (x645-((x646+x647)!=x648));

    if (t123 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x649 = 3U;
	int8_t x650 = INT8_MAX;
	uint16_t x651 = UINT16_MAX;
	int8_t x652 = INT8_MAX;
	uint32_t t124 = 6976947U;

    t124 = (x649-((x650+x651)!=x652));

    if (t124 != 2U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x654 = UINT8_MAX;
	uint16_t x655 = UINT16_MAX;
	int64_t x656 = INT64_MIN;
	static volatile int32_t t125 = -24;

    t125 = (x653-((x654+x655)!=x656));

    if (t125 != -129) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x657 = -1;
	int64_t x658 = INT64_MIN;
	volatile int32_t t126 = -21927;

    t126 = (x657-((x658+x659)!=x660));

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x662 = 1U;
	uint64_t x664 = 46852060563353LLU;
	volatile int32_t t127 = 189360666;

    t127 = (x661-((x662+x663)!=x664));

    if (t127 != 126) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x669 = -1;
	volatile int32_t x670 = -1;
	int32_t x671 = INT32_MAX;
	static int64_t x672 = 31018109990436647LL;
	volatile int32_t t128 = -215899;

    t128 = (x669-((x670+x671)!=x672));

    if (t128 != -2) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x673 = 457U;
	int16_t x675 = -6;
	int64_t x676 = -194LL;
	static int32_t t129 = -78468;

    t129 = (x673-((x674+x675)!=x676));

    if (t129 != 456) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x679 = UINT16_MAX;
	volatile int64_t x680 = -125461LL;
	volatile int32_t t130 = -164;

    t130 = (x677-((x678+x679)!=x680));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x681 = -1;
	int64_t x682 = INT64_MIN;
	uint32_t x683 = 302535735U;
	uint64_t x684 = 131062158602LLU;
	int32_t t131 = 2792689;

    t131 = (x681-((x682+x683)!=x684));

    if (t131 != -2) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x686 = -1;
	int64_t x687 = 2527624294752136362LL;
	uint8_t x688 = UINT8_MAX;
	volatile int64_t t132 = -3112999490LL;

    t132 = (x685-((x686+x687)!=x688));

    if (t132 != 424747821547366946LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x694 = INT8_MIN;
	static uint64_t x695 = UINT64_MAX;
	int32_t x696 = -1;

    t133 = (x693-((x694+x695)!=x696));

    if (t133 != 20789202) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x701 = -1;
	static int8_t x702 = 1;
	int32_t x703 = 1986;
	int64_t x704 = -1LL;

    t134 = (x701-((x702+x703)!=x704));

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x705 = UINT16_MAX;
	int16_t x706 = INT16_MIN;
	static uint64_t x707 = UINT64_MAX;
	int8_t x708 = INT8_MAX;

    t135 = (x705-((x706+x707)!=x708));

    if (t135 != 65534) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x714 = -1;
	uint16_t x715 = UINT16_MAX;
	static int32_t x716 = INT32_MIN;
	volatile int64_t t136 = -1518291570342310940LL;

    t136 = (x713-((x714+x715)!=x716));

    if (t136 != -2LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x717 = 84;
	static uint8_t x718 = 124U;
	int32_t x719 = 88;
	int16_t x720 = INT16_MAX;
	static int32_t t137 = -6821044;

    t137 = (x717-((x718+x719)!=x720));

    if (t137 != 83) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x726 = INT8_MIN;
	int8_t x728 = -1;
	volatile int32_t t138 = 9244;

    t138 = (x725-((x726+x727)!=x728));

    if (t138 != -129) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x729 = 1U;
	static int8_t x730 = INT8_MIN;
	int16_t x732 = -1;
	int32_t t139 = 97761313;

    t139 = (x729-((x730+x731)!=x732));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x733 = 20U;
	uint64_t x734 = UINT64_MAX;
	static volatile uint64_t x736 = 6488LLU;
	volatile int32_t t140 = 5204;

    t140 = (x733-((x734+x735)!=x736));

    if (t140 != 19) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x737 = UINT16_MAX;
	uint64_t x738 = 4LLU;
	static int32_t x739 = -65;
	volatile int8_t x740 = -1;
	static int32_t t141 = 0;

    t141 = (x737-((x738+x739)!=x740));

    if (t141 != 65534) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x741 = INT16_MAX;
	int32_t x742 = INT32_MIN;
	uint64_t x743 = UINT64_MAX;
	static volatile int32_t t142 = -6804179;

    t142 = (x741-((x742+x743)!=x744));

    if (t142 != 32766) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x745 = 13U;
	volatile int64_t x746 = INT64_MAX;
	static int32_t x747 = -1;

    t143 = (x745-((x746+x747)!=x748));

    if (t143 != 12U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x750 = INT32_MAX;
	int32_t x751 = INT32_MIN;
	int8_t x752 = 0;
	volatile int64_t t144 = -3413664501218021LL;

    t144 = (x749-((x750+x751)!=x752));

    if (t144 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x754 = INT64_MIN;
	int8_t x756 = INT8_MIN;
	volatile int32_t t145 = 1972157;

    t145 = (x753-((x754+x755)!=x756));

    if (t145 != -32769) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x759 = INT8_MIN;
	int16_t x760 = 1;
	static int64_t t146 = 1310440523LL;

    t146 = (x757-((x758+x759)!=x760));

    if (t146 != 35836120260722LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x761 = INT32_MAX;
	int32_t x762 = -1;
	int64_t x764 = -110LL;
	volatile int32_t t147 = 812;

    t147 = (x761-((x762+x763)!=x764));

    if (t147 != 2147483646) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x765 = 0U;
	int16_t x766 = 477;
	volatile uint32_t x767 = 2398U;
	volatile int32_t t148 = 15646;

    t148 = (x765-((x766+x767)!=x768));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x769 = -395967434LL;
	static int16_t x770 = 3534;
	int8_t x771 = -38;
	static int8_t x772 = -1;
	int64_t t149 = 917195380399LL;

    t149 = (x769-((x770+x771)!=x772));

    if (t149 != -395967435LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x777 = INT16_MIN;
	uint64_t x778 = 1422LLU;
	volatile int32_t x779 = 642046231;
	static int32_t x780 = INT32_MAX;
	int32_t t150 = -1;

    t150 = (x777-((x778+x779)!=x780));

    if (t150 != -32769) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x793 = UINT8_MAX;
	static int32_t x794 = INT32_MIN;
	int64_t x795 = -1LL;
	uint32_t x796 = 12U;
	int32_t t151 = -2;

    t151 = (x793-((x794+x795)!=x796));

    if (t151 != 254) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x797 = -1;
	int64_t x798 = 111LL;
	int32_t x799 = -99623;
	uint32_t x800 = 1U;
	static int32_t t152 = 30723892;

    t152 = (x797-((x798+x799)!=x800));

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x809 = UINT16_MAX;
	uint8_t x810 = UINT8_MAX;
	int16_t x811 = 55;
	int64_t x812 = -1LL;
	volatile int32_t t153 = 826789;

    t153 = (x809-((x810+x811)!=x812));

    if (t153 != 65534) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x818 = UINT64_MAX;
	int16_t x819 = INT16_MAX;
	int16_t x820 = 7;
	volatile int64_t t154 = 72871LL;

    t154 = (x817-((x818+x819)!=x820));

    if (t154 != 55156953816862LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x825 = INT16_MIN;
	int64_t x826 = 91395578LL;
	volatile int32_t x827 = INT32_MIN;
	int16_t x828 = INT16_MIN;
	volatile int32_t t155 = -1;

    t155 = (x825-((x826+x827)!=x828));

    if (t155 != -32769) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x829 = INT8_MIN;
	int8_t x830 = 7;
	uint32_t x831 = UINT32_MAX;
	int8_t x832 = INT8_MIN;
	volatile int32_t t156 = 169251;

    t156 = (x829-((x830+x831)!=x832));

    if (t156 != -129) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x834 = 2U;
	static int32_t x835 = -1;
	int32_t x836 = INT32_MIN;
	volatile uint64_t t157 = 127199571LLU;

    t157 = (x833-((x834+x835)!=x836));

    if (t157 != 109864444590LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x837 = INT8_MIN;
	static int16_t x840 = -1;

    t158 = (x837-((x838+x839)!=x840));

    if (t158 != -129) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x841 = UINT8_MAX;
	int16_t x842 = 121;
	int64_t x843 = -1LL;
	volatile uint32_t x844 = 766582055U;
	int32_t t159 = 0;

    t159 = (x841-((x842+x843)!=x844));

    if (t159 != 254) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x845 = -518082397LL;
	int32_t x847 = -1;
	int64_t x848 = INT64_MAX;
	volatile int64_t t160 = 23815LL;

    t160 = (x845-((x846+x847)!=x848));

    if (t160 != -518082398LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x853 = -1;
	volatile int8_t x855 = -3;
	volatile int32_t t161 = 52869;

    t161 = (x853-((x854+x855)!=x856));

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x861 = 119;
	uint16_t x862 = 144U;
	int64_t x864 = -1LL;
	int32_t t162 = 28;

    t162 = (x861-((x862+x863)!=x864));

    if (t162 != 118) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x865 = INT8_MIN;
	int8_t x866 = -1;
	int8_t x867 = INT8_MIN;
	uint16_t x868 = UINT16_MAX;
	static int32_t t163 = -52512472;

    t163 = (x865-((x866+x867)!=x868));

    if (t163 != -129) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x869 = -1;
	static uint16_t x870 = 3087U;
	int32_t x871 = INT32_MIN;
	int32_t x872 = 162962;

    t164 = (x869-((x870+x871)!=x872));

    if (t164 != -2) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x873 = -1;
	int16_t x876 = INT16_MAX;
	static volatile int32_t t165 = 135215842;

    t165 = (x873-((x874+x875)!=x876));

    if (t165 != -2) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x877 = 6;
	volatile uint64_t x879 = 230LLU;
	volatile int32_t x880 = -1;
	int32_t t166 = -10543;

    t166 = (x877-((x878+x879)!=x880));

    if (t166 != 5) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x881 = -1;
	int8_t x883 = -2;
	static int8_t x884 = INT8_MAX;
	int32_t t167 = -405697454;

    t167 = (x881-((x882+x883)!=x884));

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x886 = INT32_MIN;
	int64_t x888 = -86002183237886LL;

    t168 = (x885-((x886+x887)!=x888));

    if (t168 != 8) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x890 = INT32_MIN;
	uint16_t x892 = 7561U;
	static int32_t t169 = 3114708;

    t169 = (x889-((x890+x891)!=x892));

    if (t169 != 219) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x893 = INT16_MIN;
	int32_t x895 = -239;
	volatile int64_t x896 = INT64_MIN;
	volatile int32_t t170 = 3121;

    t170 = (x893-((x894+x895)!=x896));

    if (t170 != -32769) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x897 = UINT32_MAX;
	volatile int8_t x899 = -1;
	static uint64_t x900 = UINT64_MAX;
	static uint32_t t171 = 344U;

    t171 = (x897-((x898+x899)!=x900));

    if (t171 != 4294967294U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x901 = 486U;
	int64_t x902 = 245LL;
	int16_t x903 = -13;
	uint16_t x904 = 62U;
	int32_t t172 = 1;

    t172 = (x901-((x902+x903)!=x904));

    if (t172 != 485) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x905 = -834;
	uint64_t x906 = 0LLU;
	uint16_t x907 = UINT16_MAX;
	int16_t x908 = -1;
	int32_t t173 = 2;

    t173 = (x905-((x906+x907)!=x908));

    if (t173 != -835) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x909 = -1;
	uint8_t x910 = 7U;
	int64_t x911 = INT64_MIN;
	int32_t t174 = 680363;

    t174 = (x909-((x910+x911)!=x912));

    if (t174 != -2) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x913 = -1;
	int32_t x914 = -3;
	int64_t x915 = INT64_MAX;
	uint8_t x916 = 116U;
	volatile int32_t t175 = -640639193;

    t175 = (x913-((x914+x915)!=x916));

    if (t175 != -2) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x922 = 3464925036902727LLU;
	int32_t t176 = -413774348;

    t176 = (x921-((x922+x923)!=x924));

    if (t176 != 254) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x926 = -1;
	int8_t x927 = -1;
	uint8_t x928 = 1U;

    t177 = (x925-((x926+x927)!=x928));

    if (t177 != 425664099258685235LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x929 = 10U;
	uint64_t x930 = 268696188814238764LLU;
	int32_t x931 = INT32_MIN;
	volatile uint16_t x932 = 5U;

    t178 = (x929-((x930+x931)!=x932));

    if (t178 != 9) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x933 = UINT16_MAX;
	uint32_t x934 = 1705936277U;
	int8_t x935 = INT8_MIN;
	int32_t x936 = INT32_MIN;
	int32_t t179 = -1392;

    t179 = (x933-((x934+x935)!=x936));

    if (t179 != 65534) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x937 = 1412656;
	uint8_t x938 = 4U;
	int8_t x939 = 11;
	int8_t x940 = -1;
	volatile int32_t t180 = 6;

    t180 = (x937-((x938+x939)!=x940));

    if (t180 != 1412655) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x941 = -1LL;
	uint8_t x942 = 1U;
	int16_t x943 = -1;
	static int64_t t181 = -313LL;

    t181 = (x941-((x942+x943)!=x944));

    if (t181 != -2LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x945 = 39U;
	static int8_t x946 = -1;
	int8_t x947 = -1;
	int32_t x948 = INT32_MAX;
	volatile int32_t t182 = -1091194;

    t182 = (x945-((x946+x947)!=x948));

    if (t182 != 38) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x949 = 244U;
	int8_t x950 = 1;
	uint32_t x951 = 18185U;
	int32_t x952 = INT32_MIN;
	volatile int32_t t183 = -1;

    t183 = (x949-((x950+x951)!=x952));

    if (t183 != 243) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x953 = -118;
	uint16_t x955 = 8U;
	volatile int8_t x956 = -1;
	int32_t t184 = 29;

    t184 = (x953-((x954+x955)!=x956));

    if (t184 != -119) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x957 = 1488231756U;
	int16_t x958 = 1;
	int32_t x959 = INT32_MIN;
	uint64_t x960 = 1801702078882002LLU;

    t185 = (x957-((x958+x959)!=x960));

    if (t185 != 1488231755U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x961 = -1;
	int32_t x962 = 451;
	uint32_t x963 = 119U;
	int64_t x964 = -1LL;
	volatile int32_t t186 = 225106566;

    t186 = (x961-((x962+x963)!=x964));

    if (t186 != -2) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x965 = -1;
	volatile int8_t x966 = -4;
	int8_t x967 = -42;
	uint32_t x968 = UINT32_MAX;
	int32_t t187 = -2724;

    t187 = (x965-((x966+x967)!=x968));

    if (t187 != -2) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x969 = 902594LL;
	static uint16_t x970 = 1778U;
	int8_t x971 = -1;
	uint16_t x972 = 113U;
	volatile int64_t t188 = -5286457168LL;

    t188 = (x969-((x970+x971)!=x972));

    if (t188 != 902593LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x981 = INT16_MIN;
	static volatile int8_t x983 = -1;

    t189 = (x981-((x982+x983)!=x984));

    if (t189 != -32769) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x985 = 727754483;
	int64_t x987 = 365478679773LL;
	int32_t x988 = 0;
	volatile int32_t t190 = -31386;

    t190 = (x985-((x986+x987)!=x988));

    if (t190 != 727754482) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t t191 = -59;

    t191 = (x989-((x990+x991)!=x992));

    if (t191 != -32769) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x993 = -5;
	static int64_t x994 = -3299607359LL;
	int32_t x995 = 7796886;
	static int32_t x996 = 382020;
	volatile int32_t t192 = 290840;

    t192 = (x993-((x994+x995)!=x996));

    if (t192 != -6) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1001 = 16499479334311625LLU;
	int16_t x1003 = 256;
	int8_t x1004 = -2;
	uint64_t t193 = 201LLU;

    t193 = (x1001-((x1002+x1003)!=x1004));

    if (t193 != 16499479334311624LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1006 = INT64_MIN;
	static volatile int64_t x1007 = INT64_MAX;
	int32_t t194 = 54699295;

    t194 = (x1005-((x1006+x1007)!=x1008));

    if (t194 != 65534) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1012 = -283739LL;
	volatile int64_t t195 = -383656773155670LL;

    t195 = (x1009-((x1010+x1011)!=x1012));

    if (t195 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x1021 = -1LL;
	volatile int16_t x1022 = INT16_MIN;
	int16_t x1024 = INT16_MIN;
	int64_t t196 = -1634774006403717070LL;

    t196 = (x1021-((x1022+x1023)!=x1024));

    if (t196 != -2LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x1025 = UINT64_MAX;
	int32_t x1028 = INT32_MIN;
	static uint64_t t197 = 29291835320LLU;

    t197 = (x1025-((x1026+x1027)!=x1028));

    if (t197 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x1029 = UINT16_MAX;
	static uint64_t x1030 = 5750054682908LLU;
	int16_t x1032 = -8935;
	static volatile int32_t t198 = 8580183;

    t198 = (x1029-((x1030+x1031)!=x1032));

    if (t198 != 65534) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1033 = 101U;
	volatile int8_t x1034 = INT8_MIN;
	static int8_t x1035 = INT8_MIN;
	int64_t x1036 = INT64_MAX;

    t199 = (x1033-((x1034+x1035)!=x1036));

    if (t199 != 100) { NG(); } else { ; }
	
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

