
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
int16_t x5 = -1;
volatile uint32_t x16 = UINT32_MAX;
uint64_t x19 = 5117784387749528LLU;
uint16_t x25 = 1U;
uint8_t x27 = UINT8_MAX;
uint16_t x35 = UINT16_MAX;
int32_t x36 = 28590913;
volatile uint64_t x37 = 6038565LLU;
int32_t t7 = -6495;
int64_t x52 = INT64_MIN;
static uint64_t x62 = 121LLU;
static int8_t x63 = -1;
int32_t x64 = INT32_MIN;
static uint32_t x71 = 94037U;
static uint32_t x72 = 2682U;
volatile int32_t t13 = 1;
int32_t t15 = 138423379;
int16_t x85 = INT16_MIN;
int64_t x88 = INT64_MIN;
volatile int32_t t16 = 7489817;
int32_t t17 = -2;
volatile uint64_t x94 = UINT64_MAX;
int8_t x97 = INT8_MAX;
volatile uint32_t x99 = 3U;
int16_t x100 = -158;
uint16_t x104 = 1U;
volatile int32_t t21 = -28069107;
uint16_t x123 = 1384U;
uint16_t x129 = 60U;
volatile int32_t t24 = -364;
static uint16_t x136 = 642U;
static int8_t x147 = INT8_MIN;
int16_t x152 = 3;
int8_t x159 = INT8_MAX;
static volatile int32_t t33 = -76;
uint8_t x188 = 1U;
uint64_t x192 = UINT64_MAX;
volatile int32_t t35 = -1338334;
int8_t x193 = -1;
static volatile int16_t x201 = INT16_MAX;
int64_t x208 = INT64_MIN;
int64_t x217 = -29665144LL;
uint16_t x218 = 2863U;
static int8_t x222 = INT8_MAX;
int8_t x223 = INT8_MIN;
int32_t t40 = -241850145;
static uint8_t x225 = 3U;
static int16_t x229 = -1;
uint16_t x230 = UINT16_MAX;
int64_t x231 = -1LL;
volatile int32_t t42 = 195;
int32_t t43 = 91;
int64_t x254 = INT64_MAX;
int8_t x261 = 0;
int16_t x270 = -14;
int32_t t49 = 1235529;
static int16_t x276 = 4;
int64_t x294 = 87765945669602292LL;
int16_t x304 = INT16_MIN;
volatile int8_t x312 = INT8_MIN;
static int32_t t56 = 58073;
int16_t x319 = -1;
uint64_t x329 = UINT64_MAX;
int32_t t59 = 665;
int32_t x342 = INT32_MIN;
int16_t x344 = INT16_MIN;
int64_t x357 = -1LL;
static int64_t x363 = -110962636237400598LL;
volatile int32_t t64 = -414;
static int32_t x365 = INT32_MIN;
int32_t x368 = 594;
int16_t x378 = INT16_MIN;
uint32_t x381 = 30171U;
int64_t x383 = 853649480132LL;
int16_t x389 = -9496;
static int8_t x392 = INT8_MAX;
static int32_t t68 = 132;
int32_t x394 = INT32_MIN;
volatile uint32_t x400 = UINT32_MAX;
uint64_t x404 = 5080407LLU;
static int16_t x414 = INT16_MIN;
volatile int64_t x420 = 8230LL;
uint16_t x421 = UINT16_MAX;
int64_t x429 = INT64_MIN;
int16_t x440 = INT16_MAX;
uint32_t x445 = 306U;
uint16_t x446 = UINT16_MAX;
static int64_t x448 = 254583991544169LL;
static int64_t x453 = INT64_MIN;
uint8_t x454 = 11U;
int64_t x461 = -1LL;
uint64_t x470 = 192822LLU;
int8_t x471 = -1;
int8_t x472 = 0;
volatile int32_t x480 = 1867;
int8_t x507 = INT8_MIN;
int32_t x512 = -6333;
volatile int32_t t93 = 723336;
uint32_t x530 = 10U;
int16_t x534 = INT16_MAX;
volatile uint32_t x538 = UINT32_MAX;
int8_t x551 = -1;
uint16_t x552 = 1053U;
int32_t t99 = 5778;
int64_t x568 = 559854638614793LL;
int64_t x580 = INT64_MIN;
volatile int64_t x585 = -11LL;
static uint16_t x595 = 0U;
volatile int32_t t109 = 115043533;
int16_t x610 = -1;
static uint16_t x612 = UINT16_MAX;
int16_t x613 = INT16_MIN;
int8_t x614 = -1;
volatile int32_t t115 = 1;
volatile int16_t x633 = 1871;
static volatile int16_t x642 = -1;
static int16_t x644 = -1;
int32_t x657 = -2;
int64_t x666 = -1297LL;
int8_t x671 = -2;
uint8_t x685 = UINT8_MAX;
uint64_t x687 = UINT64_MAX;
uint32_t x689 = UINT32_MAX;
static int8_t x694 = INT8_MIN;
int16_t x697 = 5687;
uint8_t x703 = UINT8_MAX;
uint32_t x718 = 12822U;
int8_t x728 = INT8_MIN;
uint32_t x742 = 45332U;
int32_t t136 = 2;
int16_t x747 = INT16_MIN;
volatile int16_t x749 = INT16_MIN;
uint8_t x753 = UINT8_MAX;
volatile int8_t x755 = 0;
int64_t x767 = -1LL;
int32_t t141 = 7008;
uint16_t x769 = UINT16_MAX;
int16_t x779 = -16;
int16_t x782 = -1;
int32_t t145 = 0;
static int16_t x786 = INT16_MIN;
uint16_t x790 = 0U;
uint8_t x791 = 107U;
int64_t x792 = 59LL;
static int32_t t147 = 5500;
int32_t t148 = 6;
int32_t x800 = 95;
volatile int32_t t149 = -3658;
uint8_t x805 = 14U;
volatile uint64_t x815 = 33436261970085LLU;
volatile int32_t t156 = 129292556;
static int32_t t157 = -378399;
volatile int64_t x846 = -1LL;
uint16_t x847 = 20901U;
static uint16_t x876 = UINT16_MAX;
int32_t t164 = 21;
uint64_t x880 = 609812LLU;
static int32_t t165 = -4321;
volatile int16_t x891 = -1;
int8_t x898 = 1;
static int64_t x901 = INT64_MIN;
static volatile int16_t x911 = INT16_MAX;
volatile int32_t x929 = -1;
int32_t x937 = INT32_MIN;
uint8_t x941 = 5U;
static volatile int64_t x958 = INT64_MAX;
int32_t x959 = 1;
int64_t x960 = -7699681713807LL;
int8_t x968 = INT8_MAX;
volatile int32_t t181 = -3938;
uint32_t x981 = 168768019U;
volatile int16_t x989 = -2;
volatile int32_t t184 = 8010244;
uint32_t x995 = 1U;
volatile int32_t t185 = 5;
static int8_t x1013 = INT8_MIN;
static volatile int32_t t189 = 3;
static volatile int32_t t190 = -51668;
static volatile int16_t x1034 = INT16_MIN;
uint16_t x1040 = 5U;
int16_t x1042 = -1;
volatile int32_t x1047 = 0;
int16_t x1050 = 4954;
volatile int32_t t196 = 178352;
int32_t t197 = -201;
int8_t x1057 = -1;
volatile int32_t x1064 = 90743;


void f0(void) {
    	uint8_t x1 = 3U;
	static uint64_t x2 = UINT64_MAX;
	static int32_t x4 = -1;
	int32_t t0 = 3819161;

    t0 = (x1!=((x2*x3)<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = -7854LL;
	int16_t x7 = -198;
	uint64_t x8 = 11042512333642516LLU;
	static int32_t t1 = 3329665;

    t1 = (x5!=((x6*x7)<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x13 = 7275;
	static int64_t x14 = -1LL;
	static volatile int8_t x15 = 1;
	static volatile int32_t t2 = -1;

    t2 = (x13!=((x14*x15)<=x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MAX;
	static int16_t x18 = 5003;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t3 = 60171297;

    t3 = (x17!=((x18*x19)<=x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x26 = UINT16_MAX;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t4 = 29838700;

    t4 = (x25!=((x26*x27)<=x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x33 = INT8_MAX;
	static uint64_t x34 = 8567764604118605284LLU;
	volatile int32_t t5 = -1;

    t5 = (x33!=((x34*x35)<=x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x38 = -1;
	volatile int16_t x39 = INT16_MIN;
	volatile int16_t x40 = 6;
	int32_t t6 = 1;

    t6 = (x37!=((x38*x39)<=x40));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MIN;
	uint32_t x43 = 3915195U;
	int16_t x44 = INT16_MIN;

    t7 = (x41!=((x42*x43)<=x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x45 = INT32_MIN;
	int32_t x46 = 3;
	static int32_t x47 = -29441;
	int8_t x48 = INT8_MAX;
	volatile int32_t t8 = -7038509;

    t8 = (x45!=((x46*x47)<=x48));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x49 = UINT64_MAX;
	uint32_t x50 = 73549U;
	uint8_t x51 = 32U;
	static int32_t t9 = -158674522;

    t9 = (x49!=((x50*x51)<=x52));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x53 = -1LL;
	int8_t x54 = INT8_MIN;
	uint64_t x55 = 8677136305486659LLU;
	int32_t x56 = 381;
	static volatile int32_t t10 = -1923;

    t10 = (x53!=((x54*x55)<=x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x61 = 1680U;
	volatile int32_t t11 = -318;

    t11 = (x61!=((x62*x63)<=x64));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = 9780850247364LL;
	int8_t x67 = 24;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t12 = -81844;

    t12 = (x65!=((x66*x67)<=x68));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x69 = -2;
	int8_t x70 = 2;

    t13 = (x69!=((x70*x71)<=x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x73 = 105U;
	uint64_t x74 = UINT64_MAX;
	static int8_t x75 = 6;
	volatile uint64_t x76 = 13026733LLU;
	int32_t t14 = 360498;

    t14 = (x73!=((x74*x75)<=x76));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x77 = INT64_MIN;
	static uint32_t x78 = UINT32_MAX;
	static volatile uint8_t x79 = 0U;
	int16_t x80 = -3;

    t15 = (x77!=((x78*x79)<=x80));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x86 = UINT32_MAX;
	uint16_t x87 = 0U;

    t16 = (x85!=((x86*x87)<=x88));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x89 = -117LL;
	int8_t x90 = -1;
	static uint32_t x91 = UINT32_MAX;
	static volatile int16_t x92 = INT16_MIN;

    t17 = (x89!=((x90*x91)<=x92));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x93 = INT8_MIN;
	uint64_t x95 = 6LLU;
	volatile int64_t x96 = 315887266116346231LL;
	static volatile int32_t t18 = -3466801;

    t18 = (x93!=((x94*x95)<=x96));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x98 = 2394764883699441976LLU;
	int32_t t19 = -3390560;

    t19 = (x97!=((x98*x99)<=x100));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MIN;
	int32_t x103 = -1;
	volatile int32_t t20 = 44;

    t20 = (x101!=((x102*x103)<=x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x109 = 1;
	static uint32_t x110 = 0U;
	volatile int32_t x111 = INT32_MIN;
	static uint32_t x112 = UINT32_MAX;

    t21 = (x109!=((x110*x111)<=x112));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x113 = UINT16_MAX;
	uint16_t x114 = 20413U;
	int64_t x115 = -1LL;
	static uint16_t x116 = UINT16_MAX;
	volatile int32_t t22 = -1308;

    t22 = (x113!=((x114*x115)<=x116));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x121 = INT16_MIN;
	int8_t x122 = -1;
	static int16_t x124 = INT16_MAX;
	int32_t t23 = 2677;

    t23 = (x121!=((x122*x123)<=x124));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x130 = 291698794191LL;
	volatile int16_t x131 = -1;
	volatile int32_t x132 = -794;

    t24 = (x129!=((x130*x131)<=x132));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x133 = 2931332U;
	uint32_t x134 = 377841U;
	int8_t x135 = -1;
	volatile int32_t t25 = 64;

    t25 = (x133!=((x134*x135)<=x136));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x137 = 335133LLU;
	uint16_t x138 = UINT16_MAX;
	volatile uint64_t x139 = UINT64_MAX;
	uint8_t x140 = UINT8_MAX;
	int32_t t26 = 4508300;

    t26 = (x137!=((x138*x139)<=x140));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MIN;
	int8_t x148 = 1;
	volatile int32_t t27 = -6545962;

    t27 = (x145!=((x146*x147)<=x148));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x149 = 795U;
	uint8_t x150 = 28U;
	static uint16_t x151 = 1633U;
	int32_t t28 = -152138046;

    t28 = (x149!=((x150*x151)<=x152));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x153 = UINT32_MAX;
	int64_t x154 = 144248783LL;
	volatile uint64_t x155 = 588719373LLU;
	static uint16_t x156 = UINT16_MAX;
	volatile int32_t t29 = -208941094;

    t29 = (x153!=((x154*x155)<=x156));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x157 = UINT64_MAX;
	uint8_t x158 = UINT8_MAX;
	uint64_t x160 = 712937605624262LLU;
	int32_t t30 = 107294;

    t30 = (x157!=((x158*x159)<=x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x161 = INT64_MAX;
	int16_t x162 = -1;
	int64_t x163 = -1LL;
	static int32_t x164 = INT32_MIN;
	int32_t t31 = -1;

    t31 = (x161!=((x162*x163)<=x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x173 = 215;
	int16_t x174 = INT16_MIN;
	volatile uint8_t x175 = 24U;
	volatile uint32_t x176 = UINT32_MAX;
	volatile int32_t t32 = -13505628;

    t32 = (x173!=((x174*x175)<=x176));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	static int16_t x183 = INT16_MIN;
	int16_t x184 = -1;

    t33 = (x181!=((x182*x183)<=x184));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x185 = INT32_MAX;
	static uint32_t x186 = 65U;
	int64_t x187 = -1LL;
	volatile int32_t t34 = -1388;

    t34 = (x185!=((x186*x187)<=x188));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x189 = -830290919310815404LL;
	int16_t x190 = -1;
	volatile int8_t x191 = 4;

    t35 = (x189!=((x190*x191)<=x192));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x194 = -1;
	static volatile int8_t x195 = INT8_MIN;
	static int32_t x196 = -3206;
	int32_t t36 = -373;

    t36 = (x193!=((x194*x195)<=x196));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x202 = 19;
	uint8_t x203 = 6U;
	uint64_t x204 = 117225797749LLU;
	static volatile int32_t t37 = 9;

    t37 = (x201!=((x202*x203)<=x204));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x205 = 60LLU;
	static int64_t x206 = 14586LL;
	int8_t x207 = -32;
	static volatile int32_t t38 = -133070135;

    t38 = (x205!=((x206*x207)<=x208));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x219 = INT16_MIN;
	int8_t x220 = 6;
	volatile int32_t t39 = -2222068;

    t39 = (x217!=((x218*x219)<=x220));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x221 = 113221628U;
	volatile uint16_t x224 = UINT16_MAX;

    t40 = (x221!=((x222*x223)<=x224));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x226 = -1;
	int64_t x227 = -10380737756665LL;
	static int64_t x228 = -2371808086LL;
	static int32_t t41 = 5475110;

    t41 = (x225!=((x226*x227)<=x228));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x232 = INT32_MIN;

    t42 = (x229!=((x230*x231)<=x232));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x234 = -1;
	int8_t x235 = -1;
	static int64_t x236 = 291LL;

    t43 = (x233!=((x234*x235)<=x236));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x237 = -1LL;
	uint8_t x238 = 7U;
	int64_t x239 = -1LL;
	int8_t x240 = -1;
	volatile int32_t t44 = -16331099;

    t44 = (x237!=((x238*x239)<=x240));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x249 = INT64_MIN;
	int8_t x250 = -1;
	static int32_t x251 = -1;
	volatile int32_t x252 = -1;
	int32_t t45 = -1875191;

    t45 = (x249!=((x250*x251)<=x252));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x253 = 50;
	int8_t x255 = -1;
	volatile int64_t x256 = INT64_MIN;
	int32_t t46 = -3296;

    t46 = (x253!=((x254*x255)<=x256));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x257 = 22774;
	int32_t x258 = INT32_MIN;
	static uint64_t x259 = UINT64_MAX;
	uint64_t x260 = UINT64_MAX;
	int32_t t47 = 907;

    t47 = (x257!=((x258*x259)<=x260));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x262 = UINT16_MAX;
	volatile int16_t x263 = 0;
	int8_t x264 = -2;
	int32_t t48 = -149;

    t48 = (x261!=((x262*x263)<=x264));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x269 = INT8_MAX;
	static int32_t x271 = -1;
	static uint64_t x272 = UINT64_MAX;

    t49 = (x269!=((x270*x271)<=x272));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x273 = INT64_MIN;
	uint16_t x274 = UINT16_MAX;
	int16_t x275 = 3;
	volatile int32_t t50 = -1;

    t50 = (x273!=((x274*x275)<=x276));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x277 = -1;
	static uint8_t x278 = 9U;
	int32_t x279 = -1;
	int16_t x280 = INT16_MIN;
	int32_t t51 = -235;

    t51 = (x277!=((x278*x279)<=x280));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x293 = -8;
	uint64_t x295 = UINT64_MAX;
	uint32_t x296 = 25576550U;
	int32_t t52 = -788158;

    t52 = (x293!=((x294*x295)<=x296));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x297 = -1;
	static int16_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	uint8_t x300 = 37U;
	int32_t t53 = -591037;

    t53 = (x297!=((x298*x299)<=x300));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x301 = 2436U;
	int8_t x302 = -25;
	static int64_t x303 = -1LL;
	int32_t t54 = 1229428;

    t54 = (x301!=((x302*x303)<=x304));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x305 = INT16_MAX;
	int16_t x306 = INT16_MAX;
	volatile int16_t x307 = 8;
	int8_t x308 = -12;
	static volatile int32_t t55 = 1241976;

    t55 = (x305!=((x306*x307)<=x308));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x309 = -38;
	int16_t x310 = INT16_MIN;
	volatile int8_t x311 = INT8_MIN;

    t56 = (x309!=((x310*x311)<=x312));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x317 = UINT32_MAX;
	static uint16_t x318 = 3U;
	int16_t x320 = -1;
	static int32_t t57 = 28;

    t57 = (x317!=((x318*x319)<=x320));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x321 = 7999469274272LLU;
	static int64_t x322 = -1LL;
	uint64_t x323 = 90610297LLU;
	uint64_t x324 = UINT64_MAX;
	int32_t t58 = -3652;

    t58 = (x321!=((x322*x323)<=x324));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x330 = INT8_MAX;
	int8_t x331 = -4;
	int16_t x332 = INT16_MIN;

    t59 = (x329!=((x330*x331)<=x332));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x333 = 26207LLU;
	int16_t x334 = -9699;
	uint8_t x335 = 14U;
	static volatile int8_t x336 = INT8_MAX;
	volatile int32_t t60 = 181358;

    t60 = (x333!=((x334*x335)<=x336));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x337 = INT32_MIN;
	int64_t x338 = 56101LL;
	uint16_t x339 = 89U;
	int32_t x340 = INT32_MIN;
	int32_t t61 = 967907;

    t61 = (x337!=((x338*x339)<=x340));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x341 = -1LL;
	uint32_t x343 = 3721251U;
	int32_t t62 = 1;

    t62 = (x341!=((x342*x343)<=x344));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x358 = INT16_MAX;
	volatile uint16_t x359 = 15U;
	uint64_t x360 = 2532402355703275602LLU;
	int32_t t63 = 449;

    t63 = (x357!=((x358*x359)<=x360));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x361 = 2U;
	static int64_t x362 = -1LL;
	static int8_t x364 = 5;

    t64 = (x361!=((x362*x363)<=x364));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x366 = INT32_MAX;
	int8_t x367 = -1;
	int32_t t65 = -97;

    t65 = (x365!=((x366*x367)<=x368));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x377 = 721839U;
	uint64_t x379 = 11498956LLU;
	uint64_t x380 = 232011136LLU;
	static volatile int32_t t66 = -925458082;

    t66 = (x377!=((x378*x379)<=x380));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x382 = 1U;
	int8_t x384 = INT8_MIN;
	int32_t t67 = 1;

    t67 = (x381!=((x382*x383)<=x384));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x390 = INT8_MIN;
	volatile uint16_t x391 = 4U;

    t68 = (x389!=((x390*x391)<=x392));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x393 = -1592611LL;
	uint8_t x395 = 0U;
	uint8_t x396 = UINT8_MAX;
	int32_t t69 = 623555;

    t69 = (x393!=((x394*x395)<=x396));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	static int16_t x399 = INT16_MIN;
	int32_t t70 = -8128;

    t70 = (x397!=((x398*x399)<=x400));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint8_t x401 = UINT8_MAX;
	int16_t x402 = 7;
	int16_t x403 = 0;
	static int32_t t71 = -8;

    t71 = (x401!=((x402*x403)<=x404));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x409 = -16463997808216LL;
	int16_t x410 = -1;
	int64_t x411 = INT64_MAX;
	int16_t x412 = INT16_MAX;
	volatile int32_t t72 = 471;

    t72 = (x409!=((x410*x411)<=x412));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x413 = 254U;
	uint16_t x415 = 187U;
	int64_t x416 = -1LL;
	int32_t t73 = 478;

    t73 = (x413!=((x414*x415)<=x416));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x417 = INT32_MIN;
	uint64_t x418 = 15925183057LLU;
	static volatile int8_t x419 = -16;
	volatile int32_t t74 = 125058111;

    t74 = (x417!=((x418*x419)<=x420));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x422 = 12U;
	static volatile uint64_t x423 = 25454125877LLU;
	uint8_t x424 = 5U;
	int32_t t75 = -80772;

    t75 = (x421!=((x422*x423)<=x424));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x425 = 25318188483LLU;
	uint16_t x426 = 27U;
	static uint16_t x427 = UINT16_MAX;
	uint8_t x428 = 13U;
	static int32_t t76 = -59;

    t76 = (x425!=((x426*x427)<=x428));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x430 = INT16_MAX;
	int32_t x431 = -22577;
	uint64_t x432 = UINT64_MAX;
	volatile int32_t t77 = 365361;

    t77 = (x429!=((x430*x431)<=x432));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x437 = UINT8_MAX;
	static int64_t x438 = -397294LL;
	uint64_t x439 = UINT64_MAX;
	static int32_t t78 = 720;

    t78 = (x437!=((x438*x439)<=x440));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x447 = INT16_MIN;
	int32_t t79 = 79732;

    t79 = (x445!=((x446*x447)<=x448));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x455 = 476U;
	static int64_t x456 = INT64_MIN;
	int32_t t80 = 1532759;

    t80 = (x453!=((x454*x455)<=x456));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x457 = UINT8_MAX;
	int64_t x458 = -1LL;
	static int64_t x459 = INT64_MAX;
	volatile int8_t x460 = 2;
	volatile int32_t t81 = -182;

    t81 = (x457!=((x458*x459)<=x460));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x462 = INT32_MIN;
	volatile uint32_t x463 = UINT32_MAX;
	static int16_t x464 = INT16_MIN;
	int32_t t82 = -117;

    t82 = (x461!=((x462*x463)<=x464));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x469 = 129510917529405690LLU;
	int32_t t83 = -12768662;

    t83 = (x469!=((x470*x471)<=x472));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x473 = 1;
	int16_t x474 = INT16_MIN;
	uint16_t x475 = 11993U;
	int32_t x476 = INT32_MIN;
	int32_t t84 = -154;

    t84 = (x473!=((x474*x475)<=x476));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x477 = INT32_MIN;
	int64_t x478 = 690448286LL;
	uint16_t x479 = 137U;
	int32_t t85 = 1941325;

    t85 = (x477!=((x478*x479)<=x480));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x481 = INT8_MAX;
	volatile int8_t x482 = 43;
	int32_t x483 = -19118;
	volatile int16_t x484 = INT16_MIN;
	int32_t t86 = -241067730;

    t86 = (x481!=((x482*x483)<=x484));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x485 = INT8_MAX;
	uint8_t x486 = UINT8_MAX;
	uint64_t x487 = UINT64_MAX;
	static int16_t x488 = 1;
	static volatile int32_t t87 = 412;

    t87 = (x485!=((x486*x487)<=x488));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x493 = INT32_MAX;
	int64_t x494 = 79956634210126LL;
	int8_t x495 = INT8_MIN;
	int16_t x496 = -22;
	int32_t t88 = -660181641;

    t88 = (x493!=((x494*x495)<=x496));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x501 = -1;
	uint64_t x502 = UINT64_MAX;
	int32_t x503 = INT32_MIN;
	int8_t x504 = INT8_MIN;
	int32_t t89 = 29;

    t89 = (x501!=((x502*x503)<=x504));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x505 = INT32_MIN;
	volatile int16_t x506 = INT16_MIN;
	static int16_t x508 = INT16_MIN;
	volatile int32_t t90 = -1937;

    t90 = (x505!=((x506*x507)<=x508));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x509 = INT16_MIN;
	int64_t x510 = INT64_MAX;
	int32_t x511 = -1;
	static volatile int32_t t91 = 115;

    t91 = (x509!=((x510*x511)<=x512));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x517 = 3643424972942128253LL;
	uint16_t x518 = 26U;
	int16_t x519 = INT16_MIN;
	int8_t x520 = -1;
	volatile int32_t t92 = 12454;

    t92 = (x517!=((x518*x519)<=x520));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x525 = -93;
	int8_t x526 = -1;
	uint8_t x527 = UINT8_MAX;
	int8_t x528 = INT8_MAX;

    t93 = (x525!=((x526*x527)<=x528));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x529 = 4U;
	int64_t x531 = 191721474LL;
	uint32_t x532 = 248302U;
	int32_t t94 = 8;

    t94 = (x529!=((x530*x531)<=x532));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x533 = 30U;
	static uint8_t x535 = 1U;
	uint64_t x536 = UINT64_MAX;
	int32_t t95 = 5;

    t95 = (x533!=((x534*x535)<=x536));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x537 = INT16_MIN;
	int8_t x539 = -1;
	int32_t x540 = -1;
	int32_t t96 = 112876140;

    t96 = (x537!=((x538*x539)<=x540));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x541 = UINT8_MAX;
	static int16_t x542 = 1890;
	volatile uint32_t x543 = 11U;
	uint8_t x544 = UINT8_MAX;
	volatile int32_t t97 = 4694;

    t97 = (x541!=((x542*x543)<=x544));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x545 = INT8_MAX;
	uint8_t x546 = UINT8_MAX;
	uint64_t x547 = 68292LLU;
	volatile uint8_t x548 = 31U;
	int32_t t98 = -934;

    t98 = (x545!=((x546*x547)<=x548));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x549 = INT32_MAX;
	uint64_t x550 = UINT64_MAX;

    t99 = (x549!=((x550*x551)<=x552));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x553 = -1;
	volatile uint8_t x554 = 24U;
	uint16_t x555 = 20901U;
	uint64_t x556 = UINT64_MAX;
	volatile int32_t t100 = 12555472;

    t100 = (x553!=((x554*x555)<=x556));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x561 = INT8_MIN;
	int16_t x562 = 574;
	volatile uint64_t x563 = UINT64_MAX;
	int32_t x564 = -1141;
	int32_t t101 = -357;

    t101 = (x561!=((x562*x563)<=x564));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x565 = 1U;
	volatile int8_t x566 = -1;
	volatile uint64_t x567 = 27LLU;
	volatile int32_t t102 = -14427371;

    t102 = (x565!=((x566*x567)<=x568));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x569 = INT32_MIN;
	uint8_t x570 = 9U;
	int32_t x571 = 1670;
	uint32_t x572 = 107842U;
	int32_t t103 = 552;

    t103 = (x569!=((x570*x571)<=x572));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x573 = -1;
	volatile uint64_t x574 = UINT64_MAX;
	int16_t x575 = -82;
	int8_t x576 = INT8_MAX;
	int32_t t104 = -72980695;

    t104 = (x573!=((x574*x575)<=x576));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x577 = -1;
	uint64_t x578 = 2824954LLU;
	static volatile int64_t x579 = -225789438933821137LL;
	static int32_t t105 = 508529595;

    t105 = (x577!=((x578*x579)<=x580));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint8_t x586 = UINT8_MAX;
	volatile int32_t x587 = 7784292;
	int64_t x588 = INT64_MIN;
	volatile int32_t t106 = 885;

    t106 = (x585!=((x586*x587)<=x588));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x589 = 12U;
	int64_t x590 = 976LL;
	int8_t x591 = 3;
	volatile int64_t x592 = -1LL;
	volatile int32_t t107 = -346;

    t107 = (x589!=((x590*x591)<=x592));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x593 = INT16_MIN;
	int32_t x594 = INT32_MIN;
	int8_t x596 = 3;
	static volatile int32_t t108 = 5183438;

    t108 = (x593!=((x594*x595)<=x596));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x597 = 6;
	uint32_t x598 = 1271255237U;
	volatile int64_t x599 = -1LL;
	int32_t x600 = INT32_MAX;

    t109 = (x597!=((x598*x599)<=x600));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x601 = INT32_MAX;
	static int32_t x602 = -248;
	uint32_t x603 = 27220491U;
	static int64_t x604 = 2LL;
	int32_t t110 = 180434671;

    t110 = (x601!=((x602*x603)<=x604));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x605 = UINT32_MAX;
	volatile int8_t x606 = INT8_MIN;
	int32_t x607 = -1;
	uint16_t x608 = 1U;
	static int32_t t111 = -511116520;

    t111 = (x605!=((x606*x607)<=x608));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x609 = -1;
	static uint64_t x611 = 457426099066LLU;
	volatile int32_t t112 = 224410091;

    t112 = (x609!=((x610*x611)<=x612));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x615 = -19293;
	int32_t x616 = INT32_MAX;
	volatile int32_t t113 = 83;

    t113 = (x613!=((x614*x615)<=x616));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x617 = 128829U;
	int8_t x618 = INT8_MIN;
	static volatile uint8_t x619 = 7U;
	volatile int16_t x620 = -29;
	int32_t t114 = 10343474;

    t114 = (x617!=((x618*x619)<=x620));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x629 = -1;
	static int32_t x630 = -10244;
	int64_t x631 = -488LL;
	int8_t x632 = 0;

    t115 = (x629!=((x630*x631)<=x632));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x634 = 15205963U;
	static uint32_t x635 = 2083586083U;
	static uint32_t x636 = 4709583U;
	volatile int32_t t116 = 569;

    t116 = (x633!=((x634*x635)<=x636));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x641 = INT16_MAX;
	int32_t x643 = 560171544;
	int32_t t117 = 14918053;

    t117 = (x641!=((x642*x643)<=x644));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x649 = -13;
	uint64_t x650 = UINT64_MAX;
	volatile int64_t x651 = -23559658487LL;
	uint64_t x652 = 410632144LLU;
	int32_t t118 = -161;

    t118 = (x649!=((x650*x651)<=x652));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x658 = INT16_MIN;
	uint8_t x659 = 0U;
	int8_t x660 = INT8_MIN;
	int32_t t119 = -22;

    t119 = (x657!=((x658*x659)<=x660));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x665 = INT8_MIN;
	static volatile int16_t x667 = INT16_MAX;
	int32_t x668 = -71394852;
	int32_t t120 = 1;

    t120 = (x665!=((x666*x667)<=x668));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x669 = 0U;
	volatile int16_t x670 = -1790;
	volatile int16_t x672 = 55;
	int32_t t121 = -121330;

    t121 = (x669!=((x670*x671)<=x672));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x673 = -1;
	static int16_t x674 = -1;
	int32_t x675 = -74646763;
	int8_t x676 = INT8_MIN;
	int32_t t122 = -21980;

    t122 = (x673!=((x674*x675)<=x676));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x677 = 32;
	int64_t x678 = -25LL;
	int16_t x679 = INT16_MIN;
	uint64_t x680 = UINT64_MAX;
	int32_t t123 = 0;

    t123 = (x677!=((x678*x679)<=x680));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x681 = 2U;
	static int8_t x682 = -1;
	static int64_t x683 = 565716343513073LL;
	int8_t x684 = -1;
	static int32_t t124 = 72005367;

    t124 = (x681!=((x682*x683)<=x684));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x686 = 31364;
	static uint8_t x688 = 12U;
	volatile int32_t t125 = 525630;

    t125 = (x685!=((x686*x687)<=x688));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x690 = -1LL;
	int32_t x691 = 6;
	int8_t x692 = INT8_MIN;
	int32_t t126 = -31202828;

    t126 = (x689!=((x690*x691)<=x692));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x693 = INT32_MIN;
	int8_t x695 = -50;
	int16_t x696 = -1;
	volatile int32_t t127 = 6358538;

    t127 = (x693!=((x694*x695)<=x696));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x698 = 35U;
	int16_t x699 = INT16_MIN;
	uint64_t x700 = UINT64_MAX;
	volatile int32_t t128 = -109771648;

    t128 = (x697!=((x698*x699)<=x700));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x701 = -7;
	uint32_t x702 = UINT32_MAX;
	int16_t x704 = INT16_MIN;
	volatile int32_t t129 = -53576;

    t129 = (x701!=((x702*x703)<=x704));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x705 = 1U;
	volatile uint32_t x706 = UINT32_MAX;
	static uint32_t x707 = 2085U;
	volatile int8_t x708 = 13;
	volatile int32_t t130 = -124057;

    t130 = (x705!=((x706*x707)<=x708));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x713 = UINT64_MAX;
	int32_t x714 = 6;
	volatile int32_t x715 = -1;
	static volatile int16_t x716 = -1;
	int32_t t131 = 149;

    t131 = (x713!=((x714*x715)<=x716));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x717 = 69LL;
	uint8_t x719 = 36U;
	int64_t x720 = -1LL;
	int32_t t132 = -21073;

    t132 = (x717!=((x718*x719)<=x720));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x725 = -76LL;
	uint8_t x726 = UINT8_MAX;
	static uint16_t x727 = UINT16_MAX;
	volatile int32_t t133 = 5881;

    t133 = (x725!=((x726*x727)<=x728));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x733 = INT16_MAX;
	uint32_t x734 = UINT32_MAX;
	volatile int8_t x735 = INT8_MIN;
	int64_t x736 = INT64_MAX;
	volatile int32_t t134 = -1;

    t134 = (x733!=((x734*x735)<=x736));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x737 = INT16_MIN;
	uint32_t x738 = 762378291U;
	int64_t x739 = -23196LL;
	uint64_t x740 = UINT64_MAX;
	volatile int32_t t135 = -8484;

    t135 = (x737!=((x738*x739)<=x740));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x741 = 5U;
	static volatile uint32_t x743 = 238032228U;
	int16_t x744 = INT16_MAX;

    t136 = (x741!=((x742*x743)<=x744));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x745 = 5955379639LL;
	volatile int16_t x746 = INT16_MIN;
	uint64_t x748 = UINT64_MAX;
	volatile int32_t t137 = 4149959;

    t137 = (x745!=((x746*x747)<=x748));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x750 = -1;
	static int32_t x751 = 963059;
	uint32_t x752 = UINT32_MAX;
	static volatile int32_t t138 = -379;

    t138 = (x749!=((x750*x751)<=x752));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x754 = UINT32_MAX;
	volatile int16_t x756 = INT16_MAX;
	volatile int32_t t139 = 370413;

    t139 = (x753!=((x754*x755)<=x756));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x757 = UINT32_MAX;
	int8_t x758 = INT8_MAX;
	volatile uint16_t x759 = UINT16_MAX;
	volatile int16_t x760 = INT16_MIN;
	volatile int32_t t140 = 188941;

    t140 = (x757!=((x758*x759)<=x760));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x765 = 96277751;
	volatile uint16_t x766 = 853U;
	uint32_t x768 = UINT32_MAX;

    t141 = (x765!=((x766*x767)<=x768));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x770 = -2532277;
	int8_t x771 = INT8_MIN;
	static int32_t x772 = -371292;
	volatile int32_t t142 = -3;

    t142 = (x769!=((x770*x771)<=x772));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x773 = INT32_MIN;
	int8_t x774 = -1;
	int8_t x775 = INT8_MIN;
	static volatile int8_t x776 = INT8_MAX;
	int32_t t143 = -690744;

    t143 = (x773!=((x774*x775)<=x776));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x777 = INT64_MIN;
	int16_t x778 = INT16_MAX;
	volatile int32_t x780 = INT32_MIN;
	volatile int32_t t144 = 184668644;

    t144 = (x777!=((x778*x779)<=x780));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x781 = 391;
	volatile int8_t x783 = 1;
	static int16_t x784 = 1300;

    t145 = (x781!=((x782*x783)<=x784));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x785 = INT16_MAX;
	uint64_t x787 = UINT64_MAX;
	int8_t x788 = -1;
	int32_t t146 = -6587;

    t146 = (x785!=((x786*x787)<=x788));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x789 = INT8_MIN;

    t147 = (x789!=((x790*x791)<=x792));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x793 = 28351U;
	static int64_t x794 = -25098401843368LL;
	static int8_t x795 = INT8_MIN;
	volatile uint32_t x796 = UINT32_MAX;

    t148 = (x793!=((x794*x795)<=x796));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x797 = INT64_MAX;
	int64_t x798 = INT64_MAX;
	volatile int32_t x799 = -1;

    t149 = (x797!=((x798*x799)<=x800));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x801 = UINT64_MAX;
	static int8_t x802 = 0;
	uint32_t x803 = 3U;
	int16_t x804 = 2023;
	volatile int32_t t150 = -13;

    t150 = (x801!=((x802*x803)<=x804));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x806 = 1;
	uint64_t x807 = 3529LLU;
	int8_t x808 = 20;
	volatile int32_t t151 = -474029;

    t151 = (x805!=((x806*x807)<=x808));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x813 = INT64_MAX;
	volatile int64_t x814 = INT64_MAX;
	static int64_t x816 = INT64_MAX;
	volatile int32_t t152 = 2083507;

    t152 = (x813!=((x814*x815)<=x816));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x817 = INT16_MAX;
	volatile int16_t x818 = -12;
	static int8_t x819 = INT8_MAX;
	uint64_t x820 = 278LLU;
	int32_t t153 = -15;

    t153 = (x817!=((x818*x819)<=x820));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x821 = 1;
	int16_t x822 = INT16_MIN;
	uint64_t x823 = 19039394062LLU;
	static int64_t x824 = -1LL;
	int32_t t154 = 4849936;

    t154 = (x821!=((x822*x823)<=x824));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x825 = -16;
	static int64_t x826 = -33933732558LL;
	volatile int32_t x827 = 659;
	static uint32_t x828 = 0U;
	int32_t t155 = 25;

    t155 = (x825!=((x826*x827)<=x828));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x829 = UINT8_MAX;
	uint32_t x830 = 14682U;
	int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MAX;

    t156 = (x829!=((x830*x831)<=x832));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x833 = -7360571728116632LL;
	int8_t x834 = -1;
	static uint16_t x835 = 1U;
	static int64_t x836 = INT64_MIN;

    t157 = (x833!=((x834*x835)<=x836));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x837 = -1;
	volatile uint16_t x838 = 7612U;
	uint8_t x839 = 7U;
	int32_t x840 = -1;
	volatile int32_t t158 = 1;

    t158 = (x837!=((x838*x839)<=x840));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x841 = -1;
	static volatile uint64_t x842 = 12517135LLU;
	static int16_t x843 = INT16_MAX;
	uint64_t x844 = 194567986963LLU;
	static volatile int32_t t159 = 774;

    t159 = (x841!=((x842*x843)<=x844));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x845 = 1U;
	static uint64_t x848 = UINT64_MAX;
	static int32_t t160 = -9064977;

    t160 = (x845!=((x846*x847)<=x848));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x849 = INT64_MIN;
	int16_t x850 = -81;
	uint64_t x851 = UINT64_MAX;
	uint32_t x852 = 14812U;
	volatile int32_t t161 = -62;

    t161 = (x849!=((x850*x851)<=x852));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x853 = INT32_MIN;
	static int16_t x854 = INT16_MIN;
	static uint32_t x855 = UINT32_MAX;
	int16_t x856 = -447;
	int32_t t162 = -1941;

    t162 = (x853!=((x854*x855)<=x856));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x857 = INT8_MIN;
	int64_t x858 = -32548872LL;
	volatile uint32_t x859 = 1254051U;
	int32_t x860 = INT32_MIN;
	static volatile int32_t t163 = 1168092;

    t163 = (x857!=((x858*x859)<=x860));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x873 = 1693620667405123LL;
	uint8_t x874 = UINT8_MAX;
	static int16_t x875 = -17;

    t164 = (x873!=((x874*x875)<=x876));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x877 = -6786963;
	static int16_t x878 = INT16_MIN;
	int16_t x879 = INT16_MAX;

    t165 = (x877!=((x878*x879)<=x880));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x881 = INT32_MIN;
	int64_t x882 = -1LL;
	uint32_t x883 = 505U;
	volatile int32_t x884 = INT32_MIN;
	volatile int32_t t166 = 434;

    t166 = (x881!=((x882*x883)<=x884));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x885 = 0U;
	int8_t x886 = -32;
	uint64_t x887 = UINT64_MAX;
	volatile uint64_t x888 = UINT64_MAX;
	static int32_t t167 = -355;

    t167 = (x885!=((x886*x887)<=x888));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x889 = -1;
	int64_t x890 = 418440LL;
	static int8_t x892 = 0;
	volatile int32_t t168 = -33561;

    t168 = (x889!=((x890*x891)<=x892));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x897 = INT16_MAX;
	uint32_t x899 = UINT32_MAX;
	int16_t x900 = INT16_MIN;
	static int32_t t169 = 55995963;

    t169 = (x897!=((x898*x899)<=x900));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x902 = 4307451U;
	int8_t x903 = -1;
	int64_t x904 = -1LL;
	int32_t t170 = -4;

    t170 = (x901!=((x902*x903)<=x904));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x909 = INT32_MAX;
	int16_t x910 = -7;
	int64_t x912 = -1LL;
	int32_t t171 = 10561187;

    t171 = (x909!=((x910*x911)<=x912));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x921 = INT32_MIN;
	uint64_t x922 = UINT64_MAX;
	uint32_t x923 = 1423643U;
	int8_t x924 = INT8_MIN;
	volatile int32_t t172 = 13869;

    t172 = (x921!=((x922*x923)<=x924));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x925 = 571232665274054300LL;
	volatile int16_t x926 = INT16_MIN;
	volatile uint64_t x927 = UINT64_MAX;
	static int8_t x928 = 0;
	int32_t t173 = 8385;

    t173 = (x925!=((x926*x927)<=x928));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x930 = -6355935;
	uint32_t x931 = 868792914U;
	int8_t x932 = INT8_MAX;
	volatile int32_t t174 = -1652340;

    t174 = (x929!=((x930*x931)<=x932));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x938 = 1U;
	int32_t x939 = -1;
	uint32_t x940 = 56U;
	int32_t t175 = -945053180;

    t175 = (x937!=((x938*x939)<=x940));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x942 = 7283511LLU;
	uint8_t x943 = 126U;
	int32_t x944 = -92;
	volatile int32_t t176 = -66628098;

    t176 = (x941!=((x942*x943)<=x944));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x957 = INT64_MAX;
	int32_t t177 = 0;

    t177 = (x957!=((x958*x959)<=x960));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x961 = 0U;
	static int16_t x962 = INT16_MAX;
	volatile int16_t x963 = INT16_MIN;
	int8_t x964 = -1;
	volatile int32_t t178 = -48536658;

    t178 = (x961!=((x962*x963)<=x964));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x965 = INT8_MIN;
	uint16_t x966 = 1U;
	uint32_t x967 = 3041U;
	static volatile int32_t t179 = 15746;

    t179 = (x965!=((x966*x967)<=x968));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x969 = 1264;
	int8_t x970 = INT8_MIN;
	int64_t x971 = 2077860641117826LL;
	static int8_t x972 = INT8_MIN;
	volatile int32_t t180 = 217;

    t180 = (x969!=((x970*x971)<=x972));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x977 = -1;
	static int8_t x978 = INT8_MIN;
	static int32_t x979 = -369;
	int32_t x980 = INT32_MAX;

    t181 = (x977!=((x978*x979)<=x980));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x982 = 1751U;
	static uint8_t x983 = 76U;
	volatile uint16_t x984 = 3792U;
	static int32_t t182 = -116;

    t182 = (x981!=((x982*x983)<=x984));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x985 = INT8_MIN;
	int32_t x986 = 843250;
	int8_t x987 = -1;
	volatile uint32_t x988 = UINT32_MAX;
	int32_t t183 = -91;

    t183 = (x985!=((x986*x987)<=x988));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x990 = 308U;
	static uint16_t x991 = 11U;
	int32_t x992 = INT32_MIN;

    t184 = (x989!=((x990*x991)<=x992));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x993 = -1;
	static int64_t x994 = INT64_MIN;
	int64_t x996 = -2279631408258194LL;

    t185 = (x993!=((x994*x995)<=x996));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1001 = -3;
	int8_t x1002 = INT8_MIN;
	volatile uint8_t x1003 = 11U;
	volatile uint32_t x1004 = 5702077U;
	int32_t t186 = -45297663;

    t186 = (x1001!=((x1002*x1003)<=x1004));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1005 = -1;
	volatile uint32_t x1006 = 30U;
	int8_t x1007 = INT8_MAX;
	int16_t x1008 = -1;
	static int32_t t187 = -40622;

    t187 = (x1005!=((x1006*x1007)<=x1008));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1014 = INT8_MIN;
	int8_t x1015 = -1;
	int32_t x1016 = -687509;
	int32_t t188 = 101529824;

    t188 = (x1013!=((x1014*x1015)<=x1016));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1017 = INT32_MIN;
	volatile uint8_t x1018 = 0U;
	uint8_t x1019 = 13U;
	volatile int16_t x1020 = -1;

    t189 = (x1017!=((x1018*x1019)<=x1020));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x1021 = INT64_MAX;
	int8_t x1022 = 1;
	volatile int32_t x1023 = INT32_MIN;
	int64_t x1024 = INT64_MIN;

    t190 = (x1021!=((x1022*x1023)<=x1024));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1029 = INT32_MAX;
	int64_t x1030 = INT64_MAX;
	int8_t x1031 = -1;
	volatile int8_t x1032 = -2;
	volatile int32_t t191 = 299500826;

    t191 = (x1029!=((x1030*x1031)<=x1032));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1033 = 47412929494LL;
	int16_t x1035 = INT16_MIN;
	uint64_t x1036 = UINT64_MAX;
	int32_t t192 = -833929;

    t192 = (x1033!=((x1034*x1035)<=x1036));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1037 = INT8_MIN;
	int64_t x1038 = -1LL;
	uint16_t x1039 = 13U;
	volatile int32_t t193 = -67200;

    t193 = (x1037!=((x1038*x1039)<=x1040));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1041 = 0U;
	int16_t x1043 = INT16_MIN;
	uint64_t x1044 = 79066775012727327LLU;
	volatile int32_t t194 = 3862;

    t194 = (x1041!=((x1042*x1043)<=x1044));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1045 = 16935800667198853LL;
	int8_t x1046 = INT8_MIN;
	int8_t x1048 = -12;
	volatile int32_t t195 = -355117587;

    t195 = (x1045!=((x1046*x1047)<=x1048));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x1049 = 534197494;
	volatile int32_t x1051 = -14315;
	static int32_t x1052 = -1;

    t196 = (x1049!=((x1050*x1051)<=x1052));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1053 = 594522LLU;
	uint16_t x1054 = UINT16_MAX;
	int16_t x1055 = INT16_MIN;
	int16_t x1056 = -4;

    t197 = (x1053!=((x1054*x1055)<=x1056));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1058 = UINT32_MAX;
	volatile uint64_t x1059 = 33041417LLU;
	uint64_t x1060 = UINT64_MAX;
	volatile int32_t t198 = 24212;

    t198 = (x1057!=((x1058*x1059)<=x1060));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1061 = INT8_MAX;
	volatile int32_t x1062 = -1;
	uint32_t x1063 = 13677567U;
	int32_t t199 = -22448;

    t199 = (x1061!=((x1062*x1063)<=x1064));

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

