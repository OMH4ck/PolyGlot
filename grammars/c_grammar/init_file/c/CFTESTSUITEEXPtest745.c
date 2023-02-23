
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

int32_t x10 = INT32_MIN;
uint64_t t2 = 1354LLU;
volatile uint8_t x18 = 12U;
uint16_t x27 = 23U;
uint64_t t6 = 1LLU;
uint64_t x38 = 195981059550671LLU;
static int16_t x44 = INT16_MIN;
uint8_t x45 = UINT8_MAX;
int8_t x54 = INT8_MAX;
volatile int16_t x56 = INT16_MIN;
volatile uint32_t x57 = 665U;
uint16_t x59 = UINT16_MAX;
int32_t x61 = INT32_MAX;
static int16_t x63 = -283;
int32_t x67 = INT32_MIN;
static uint64_t x69 = UINT64_MAX;
static volatile uint64_t t16 = 192971LLU;
static uint8_t x84 = 0U;
uint64_t t19 = 521593LLU;
int8_t x85 = INT8_MIN;
int16_t x86 = 49;
uint32_t x89 = UINT32_MAX;
uint32_t x90 = 200128247U;
static volatile int64_t x91 = 55LL;
volatile uint64_t t21 = 118948246463732LLU;
static int16_t x96 = INT16_MAX;
uint16_t x113 = 0U;
volatile int64_t t26 = -73LL;
uint16_t x119 = UINT16_MAX;
static int32_t x128 = INT32_MAX;
int32_t t29 = 0;
static int8_t x134 = 3;
int64_t t31 = -110327600505LL;
uint8_t x137 = 2U;
int64_t x140 = INT64_MIN;
static volatile int32_t t33 = -18;
int8_t x146 = 0;
volatile int8_t x147 = INT8_MIN;
int64_t x157 = -90425019654348LL;
int16_t x159 = -1;
uint64_t t38 = 51184390216LLU;
int8_t x170 = INT8_MIN;
static volatile int64_t t40 = -88504241855060053LL;
int64_t x184 = INT64_MIN;
int16_t x191 = -1;
int64_t x192 = -3157201856LL;
static int64_t x199 = INT64_MIN;
uint16_t x202 = UINT16_MAX;
int64_t x214 = INT64_MIN;
static int32_t x222 = INT32_MIN;
static uint16_t x226 = 9U;
int32_t x228 = 362762077;
volatile uint64_t t53 = 57319279163330385LLU;
uint32_t x239 = 328U;
static volatile uint32_t x243 = 120012621U;
volatile int16_t x246 = INT16_MAX;
int64_t x251 = 15216976LL;
int16_t x252 = -1;
volatile int32_t x261 = INT32_MAX;
int32_t x275 = 651267022;
uint64_t x294 = 691806LLU;
volatile int8_t x297 = INT8_MIN;
uint64_t x299 = 3LLU;
static volatile uint64_t t69 = 2581078LLU;
int64_t x301 = INT64_MIN;
int32_t x315 = 215458772;
uint32_t t73 = 2U;
int16_t x319 = INT16_MIN;
volatile uint64_t x320 = 32015LLU;
static int8_t x321 = INT8_MIN;
int16_t x322 = INT16_MAX;
volatile int32_t t75 = 850390;
static volatile uint8_t x326 = 1U;
uint16_t x330 = UINT16_MAX;
static int32_t t77 = 6;
volatile int64_t x334 = -1LL;
volatile int64_t x337 = 10024LL;
int32_t x338 = 252256364;
int64_t x342 = INT64_MIN;
int16_t x345 = INT16_MAX;
volatile uint64_t x346 = 1530745851LLU;
int32_t x348 = 7;
static int32_t x349 = INT32_MAX;
int8_t x360 = 12;
int16_t x370 = -51;
volatile int64_t x371 = INT64_MIN;
volatile int64_t x372 = INT64_MIN;
int16_t x377 = INT16_MIN;
static int32_t x382 = 48;
volatile uint64_t t88 = 502477372003LLU;
volatile int8_t x386 = -3;
int8_t x388 = INT8_MIN;
int32_t x390 = -871;
int64_t x412 = INT64_MIN;
uint8_t x414 = UINT8_MAX;
int64_t x416 = -1LL;
int16_t x426 = -1290;
static volatile int16_t x428 = INT16_MIN;
int64_t t96 = -13377LL;
int16_t x433 = 2;
int32_t x435 = INT32_MIN;
volatile uint32_t t99 = 152730U;
static int8_t x445 = -1;
volatile uint64_t x452 = 108715617865LLU;
int32_t x454 = -164963764;
int64_t t103 = -11LL;
int8_t x463 = 14;
uint64_t t104 = 3575852LLU;
int64_t x467 = -1LL;
int16_t x479 = -1;
uint16_t x484 = UINT16_MAX;
static int8_t x485 = 1;
volatile int16_t x486 = -1;
volatile int32_t t110 = 2780;
static int16_t x490 = INT16_MIN;
static uint32_t t111 = 821173U;
static volatile int32_t t112 = 0;
volatile int64_t x498 = -1LL;
static int8_t x502 = INT8_MIN;
int8_t x503 = INT8_MIN;
uint64_t t114 = 3626875994954735LLU;
uint8_t x511 = UINT8_MAX;
int32_t x514 = INT32_MAX;
volatile int16_t x521 = INT16_MAX;
int8_t x532 = INT8_MAX;
volatile int64_t t121 = INT64_MIN;
int64_t t122 = 548555686757120593LL;
int16_t x538 = INT16_MIN;
volatile int64_t x542 = 0LL;
int16_t x545 = INT16_MIN;
int64_t x553 = INT64_MAX;
static int16_t x555 = 15;
volatile int32_t t129 = -83432;
int8_t x567 = INT8_MIN;
static uint8_t x573 = 115U;
int32_t x589 = INT32_MAX;
volatile int32_t x591 = INT32_MAX;
uint32_t x592 = 7U;
int8_t x601 = INT8_MAX;
static int8_t x605 = INT8_MIN;
int32_t x612 = 187416;
int8_t x620 = -1;
int32_t x622 = -96732151;
volatile int16_t x624 = 14753;
int32_t x627 = -4;
static uint8_t x628 = 1U;
static int32_t t143 = -29409;
static int8_t x629 = 1;
int8_t x630 = INT8_MIN;
int16_t x641 = INT16_MIN;
uint32_t t147 = 1688926U;
int64_t x650 = 12230899631272092LL;
int16_t x652 = -6;
int16_t x653 = INT16_MIN;
uint8_t x656 = 10U;
int32_t x658 = -1;
volatile int64_t x664 = 1138LL;
int64_t t151 = -131545493LL;
int16_t x665 = INT16_MIN;
volatile uint64_t t153 = 19LLU;
volatile int64_t x680 = INT64_MAX;
static volatile int64_t t155 = -28578449713270LL;
volatile int32_t t156 = -5;
static int32_t x693 = 11020;
uint8_t x694 = UINT8_MAX;
static int64_t x699 = INT64_MIN;
int64_t t160 = 463799582387245977LL;
static uint16_t x710 = 0U;
int16_t x721 = 7;
static uint32_t x723 = 2U;
uint16_t x724 = UINT16_MAX;
int8_t x725 = -1;
int16_t x732 = 1;
uint32_t t168 = UINT32_MAX;
uint64_t x738 = 7246589419432222344LLU;
volatile uint64_t x760 = UINT64_MAX;
volatile int32_t x761 = INT32_MIN;
static int8_t x762 = INT8_MAX;
int32_t x764 = INT32_MAX;
static volatile uint64_t t174 = 1449981689LLU;
static int32_t x771 = 83036;
volatile uint64_t t175 = 2401508LLU;
int64_t x775 = INT64_MAX;
volatile int64_t t176 = -3404LL;
uint16_t x780 = UINT16_MAX;
int32_t x781 = INT32_MIN;
int32_t x788 = -1;
int8_t x791 = INT8_MIN;
int64_t x804 = -1240738394832054299LL;
volatile int64_t t183 = 33143443LL;
int16_t x812 = -1;
uint64_t t186 = 171523604995LLU;
int8_t x832 = INT8_MAX;
volatile int64_t x834 = INT64_MIN;
volatile uint16_t x842 = 7U;
volatile int64_t t190 = 670LL;
uint64_t x851 = 3854040699301820LLU;
int16_t x852 = 4811;
static volatile int64_t t193 = 653933302LL;
static volatile uint32_t t194 = 25677U;
volatile int64_t x872 = INT64_MAX;
uint64_t x874 = 552676LLU;
volatile uint64_t x878 = 932665913LLU;
volatile uint64_t x883 = UINT64_MAX;
static int8_t x884 = 1;


void f0(void) {
    	int32_t x5 = INT32_MIN;
	static int32_t x6 = -4498;
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	int32_t t0 = -8218799;

    t0 = (x5*((x6/x7)&x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x9 = 6923;
	volatile uint32_t x11 = UINT32_MAX;
	uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t1 = 448385320357819LLU;

    t1 = (x9*((x10/x11)&x12));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	int64_t x14 = 35LL;
	uint64_t x15 = 100LLU;
	int16_t x16 = INT16_MIN;

    t2 = (x13*((x14/x15)&x16));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 7571LLU;
	static uint32_t x19 = UINT32_MAX;
	static int32_t x20 = 0;
	uint64_t t3 = 25LLU;

    t3 = (x17*((x18/x19)&x20));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x21 = 467620268LLU;
	static uint64_t x22 = 545416883419634271LLU;
	volatile int32_t x23 = -54233;
	int32_t x24 = 2;
	uint64_t t4 = 15152942780823085LLU;

    t4 = (x21*((x22/x23)&x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x25 = 3;
	int8_t x26 = INT8_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t5 = -6084119;

    t5 = (x25*((x26/x27)&x28));

    if (t5 != -384) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x29 = -8LL;
	int32_t x30 = 24195;
	uint64_t x31 = 18725773811060LLU;
	int32_t x32 = 32;

    t6 = (x29*((x30/x31)&x32));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 85U;
	int32_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = 0;
	volatile uint32_t t7 = 100320U;

    t7 = (x33*((x34/x35)&x36));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x37 = INT16_MIN;
	static int16_t x39 = -81;
	int64_t x40 = 120549LL;
	volatile uint64_t t8 = 1076074813461LLU;

    t8 = (x37*((x38/x39)&x40));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = 1;
	int32_t x42 = -1;
	static int64_t x43 = INT64_MIN;
	int64_t t9 = -59786LL;

    t9 = (x41*((x42/x43)&x44));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x46 = INT64_MIN;
	uint32_t x47 = UINT32_MAX;
	uint64_t x48 = 61376878837LLU;
	uint64_t t10 = 20130501680642499LLU;

    t10 = (x45*((x46/x47)&x48));

    if (t10 != 15333033246720LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MAX;
	int64_t x50 = INT64_MAX;
	int8_t x51 = -1;
	volatile int64_t x52 = 593349941391LL;
	int64_t t11 = INT64_MAX;

    t11 = (x49*((x50/x51)&x52));

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x53 = 439LL;
	static int64_t x55 = -2431768LL;
	int64_t t12 = 110009LL;

    t12 = (x53*((x54/x55)&x56));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x58 = UINT64_MAX;
	int16_t x60 = INT16_MAX;
	uint64_t t13 = 1LLU;

    t13 = (x57*((x58/x59)&x60));

    if (t13 != 665LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x62 = 13766U;
	uint8_t x64 = 0U;
	volatile uint32_t t14 = 49702614U;

    t14 = (x61*((x62/x63)&x64));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x65 = -178834616788092564LL;
	static volatile int8_t x66 = -37;
	int16_t x68 = -1;
	volatile int64_t t15 = 31671456LL;

    t15 = (x65*((x66/x67)&x68));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x70 = 316U;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MIN;

    t16 = (x69*((x70/x71)&x72));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x73 = 21U;
	uint32_t x74 = UINT32_MAX;
	volatile int64_t x75 = INT64_MAX;
	int64_t x76 = -576LL;
	int64_t t17 = 570LL;

    t17 = (x73*((x74/x75)&x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = 1U;
	int8_t x78 = INT8_MAX;
	uint64_t x79 = UINT64_MAX;
	int16_t x80 = 404;
	static uint64_t t18 = 512699361LLU;

    t18 = (x77*((x78/x79)&x80));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 224905615178094LLU;
	int64_t x82 = INT64_MIN;
	static volatile int8_t x83 = INT8_MAX;

    t19 = (x81*((x82/x83)&x84));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x87 = -3980LL;
	int64_t x88 = -450085452323248LL;
	static int64_t t20 = -2LL;

    t20 = (x85*((x86/x87)&x88));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x92 = 393LLU;

    t21 = (x89*((x90/x91)&x92));

    if (t21 != 1653562408575LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = 212914LLU;
	int64_t x94 = INT64_MIN;
	static int16_t x95 = INT16_MAX;
	volatile uint64_t t22 = 176LLU;

    t22 = (x93*((x94/x95)&x96));

    if (t22 != 6975062640LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x97 = INT64_MIN;
	uint64_t x98 = 115320831155639LLU;
	static volatile uint8_t x99 = 6U;
	uint8_t x100 = 47U;
	uint64_t t23 = 1421831LLU;

    t23 = (x97*((x98/x99)&x100));

    if (t23 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x101 = 98U;
	uint32_t x102 = UINT32_MAX;
	int8_t x103 = -1;
	int32_t x104 = 48636;
	volatile uint32_t t24 = 1U;

    t24 = (x101*((x102/x103)&x104));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x109 = 61U;
	volatile uint32_t x110 = 31U;
	int32_t x111 = -1;
	int64_t x112 = INT64_MIN;
	int64_t t25 = 91399665LL;

    t25 = (x109*((x110/x111)&x112));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x114 = 12U;
	volatile int64_t x115 = INT64_MAX;
	int64_t x116 = 52598151982663LL;

    t26 = (x113*((x114/x115)&x116));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x117 = -11370;
	volatile int64_t x118 = 1535828699080313330LL;
	volatile int64_t x120 = 35592703826081210LL;
	int64_t t27 = -5019LL;

    t27 = (x117*((x118/x119)&x120));

    if (t27 != -215656092557842320LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x121 = INT16_MIN;
	uint32_t x122 = 5U;
	int64_t x123 = INT64_MIN;
	static volatile uint8_t x124 = 62U;
	volatile int64_t t28 = 47465710388046LL;

    t28 = (x121*((x122/x123)&x124));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = UINT8_MAX;
	volatile int8_t x126 = INT8_MAX;
	int8_t x127 = INT8_MIN;

    t29 = (x125*((x126/x127)&x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = INT8_MIN;
	int32_t x130 = INT32_MIN;
	static volatile int64_t x131 = INT64_MIN;
	uint64_t x132 = 2318234469LLU;
	volatile uint64_t t30 = 211676262720LLU;

    t30 = (x129*((x130/x131)&x132));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = INT64_MIN;
	int64_t x135 = INT64_MIN;
	int8_t x136 = 56;

    t31 = (x133*((x134/x135)&x136));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x138 = INT64_MIN;
	static int16_t x139 = INT16_MIN;
	static int64_t t32 = -405LL;

    t32 = (x137*((x138/x139)&x140));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = -15;
	static int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	int8_t x144 = -2;

    t33 = (x141*((x142/x143)&x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x145 = 45U;
	uint16_t x148 = 8U;
	volatile int32_t t34 = 857229513;

    t34 = (x145*((x146/x147)&x148));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = INT16_MIN;
	static int16_t x150 = 1;
	volatile int16_t x151 = INT16_MIN;
	static int8_t x152 = -1;
	static int32_t t35 = 1;

    t35 = (x149*((x150/x151)&x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = INT8_MIN;
	int32_t x154 = 15319;
	uint32_t x155 = 54022321U;
	uint32_t x156 = 2065735477U;
	static uint32_t t36 = 59710U;

    t36 = (x153*((x154/x155)&x156));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x158 = -4242LL;
	uint32_t x160 = UINT32_MAX;
	static volatile int64_t t37 = -1439051201825LL;

    t37 = (x157*((x158/x159)&x160));

    if (t37 != -383582933373744216LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = INT32_MIN;
	uint16_t x162 = 12978U;
	uint64_t x163 = UINT64_MAX;
	uint16_t x164 = UINT16_MAX;

    t38 = (x161*((x162/x163)&x164));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = -1;
	int32_t x166 = -1;
	int32_t x167 = INT32_MIN;
	volatile int16_t x168 = -43;
	static volatile int32_t t39 = -59;

    t39 = (x165*((x166/x167)&x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x169 = -1;
	int64_t x171 = INT64_MIN;
	volatile int64_t x172 = INT64_MIN;

    t40 = (x169*((x170/x171)&x172));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x173 = 7433LLU;
	volatile int64_t x174 = INT64_MAX;
	uint16_t x175 = 3U;
	int32_t x176 = INT32_MAX;
	volatile uint64_t t41 = 101862308059425288LLU;

    t41 = (x173*((x174/x175)&x176));

    if (t41 != 5320748646906LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x181 = INT8_MAX;
	int8_t x182 = -26;
	volatile int32_t x183 = 16383;
	volatile int64_t t42 = -175341LL;

    t42 = (x181*((x182/x183)&x184));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MIN;
	static int64_t x187 = -801LL;
	uint8_t x188 = UINT8_MAX;
	static volatile int64_t t43 = 20817LL;

    t43 = (x185*((x186/x187)&x188));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = -1LL;
	static volatile int32_t x190 = INT32_MAX;
	int64_t t44 = 7146701LL;

    t44 = (x189*((x190/x191)&x192));

    if (t44 != 4294967296LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = -1LL;
	int8_t x194 = -7;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t45 = 22770621481LL;

    t45 = (x193*((x194/x195)&x196));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x197 = 53U;
	uint16_t x198 = 1U;
	int16_t x200 = 209;
	int64_t t46 = 1214497540336579762LL;

    t46 = (x197*((x198/x199)&x200));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = 70757452653958LL;
	uint8_t x203 = 11U;
	volatile uint64_t x204 = 6734712LLU;
	static volatile uint64_t t47 = 1482LLU;

    t47 = (x201*((x202/x203)&x204));

    if (t47 != 58870200608093056LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x205 = -912538669964998LL;
	static int32_t x206 = -1;
	volatile int16_t x207 = -3;
	volatile int16_t x208 = 81;
	volatile int64_t t48 = 295229855033LL;

    t48 = (x205*((x206/x207)&x208));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x213 = UINT16_MAX;
	int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	int64_t t49 = -128523LL;

    t49 = (x213*((x214/x215)&x216));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x217 = -1LL;
	int8_t x218 = 1;
	int16_t x219 = INT16_MAX;
	static int32_t x220 = 8519266;
	int64_t t50 = 16168807451345803LL;

    t50 = (x217*((x218/x219)&x220));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x221 = 30;
	static uint8_t x223 = 82U;
	static int64_t x224 = 252851622LL;
	int64_t t51 = 4965278029791LL;

    t51 = (x221*((x222/x223)&x224));

    if (t51 != 7078146240LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x225 = UINT32_MAX;
	int32_t x227 = INT32_MAX;
	volatile uint32_t t52 = 5154U;

    t52 = (x225*((x226/x227)&x228));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = INT64_MIN;
	volatile uint64_t x230 = 57LLU;
	static uint8_t x231 = 98U;
	int8_t x232 = 0;

    t53 = (x229*((x230/x231)&x232));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x233 = -1;
	int16_t x234 = 13;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = -1LL;
	uint64_t t54 = 350850936LLU;

    t54 = (x233*((x234/x235)&x236));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MAX;
	uint8_t x240 = 12U;
	uint32_t t55 = 228970U;

    t55 = (x237*((x238/x239)&x240));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x241 = -76728813391598LL;
	int64_t x242 = -1LL;
	volatile int64_t x244 = INT64_MIN;
	static volatile int64_t t56 = 70158296273LL;

    t56 = (x241*((x242/x243)&x244));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x245 = UINT32_MAX;
	volatile int64_t x247 = INT64_MIN;
	int8_t x248 = INT8_MIN;
	volatile int64_t t57 = -1LL;

    t57 = (x245*((x246/x247)&x248));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x249 = INT16_MIN;
	static int64_t x250 = INT64_MIN;
	int64_t t58 = -18376063972869284LL;

    t58 = (x249*((x250/x251)&x252));

    if (t58 != 19861466227146752LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x253 = -1LL;
	volatile uint64_t x254 = 7029380146017139LLU;
	int8_t x255 = INT8_MAX;
	int32_t x256 = INT32_MAX;
	uint64_t t59 = 115915754299LLU;

    t59 = (x253*((x254/x255)&x256));

    if (t59 != 18446744073503126530LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x257 = -4766;
	int32_t x258 = -1;
	uint64_t x259 = 2226570389411263728LLU;
	int8_t x260 = 6;
	volatile uint64_t t60 = 12542433LLU;

    t60 = (x257*((x258/x259)&x260));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x262 = UINT16_MAX;
	uint32_t x263 = UINT32_MAX;
	static uint8_t x264 = UINT8_MAX;
	volatile uint32_t t61 = 1301605889U;

    t61 = (x261*((x262/x263)&x264));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x265 = -1;
	uint8_t x266 = 4U;
	int64_t x267 = -1LL;
	int8_t x268 = INT8_MIN;
	static volatile int64_t t62 = 566961825720LL;

    t62 = (x265*((x266/x267)&x268));

    if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x269 = -53;
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = 1;
	int32_t x272 = 0;
	int32_t t63 = 3;

    t63 = (x269*((x270/x271)&x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x273 = 8;
	volatile uint64_t x274 = UINT64_MAX;
	uint32_t x276 = 105709359U;
	uint64_t t64 = 2LLU;

    t64 = (x273*((x274/x275)&x276));

    if (t64 != 34058360LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x277 = UINT8_MAX;
	static volatile int16_t x278 = 7;
	uint16_t x279 = 16081U;
	uint16_t x280 = 28357U;
	volatile int32_t t65 = -526003444;

    t65 = (x277*((x278/x279)&x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x281 = INT32_MAX;
	uint16_t x282 = 77U;
	static int32_t x283 = INT32_MIN;
	volatile int64_t x284 = INT64_MIN;
	static int64_t t66 = -2308432832233932696LL;

    t66 = (x281*((x282/x283)&x284));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = -1;
	uint32_t x286 = 33141013U;
	volatile int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MIN;
	int64_t t67 = 6059LL;

    t67 = (x285*((x286/x287)&x288));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x293 = INT64_MAX;
	int8_t x295 = 22;
	static int16_t x296 = INT16_MAX;
	uint64_t t68 = 2379855921310LLU;

    t68 = (x293*((x294/x295)&x296));

    if (t68 != 9223372036854744363LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x298 = -17320232LL;
	int32_t x300 = 3891;

    t69 = (x297*((x298/x299)&x300));

    if (t69 != 18446744073709152000LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x302 = -1;
	volatile int64_t x303 = INT64_MIN;
	int8_t x304 = -1;
	int64_t t70 = -133550037332LL;

    t70 = (x301*((x302/x303)&x304));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x305 = INT8_MIN;
	volatile uint16_t x306 = UINT16_MAX;
	uint64_t x307 = 7561LLU;
	static int32_t x308 = -669316;
	volatile uint64_t t71 = 21692496970LLU;

    t71 = (x305*((x306/x307)&x308));

    if (t71 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x309 = 74047LL;
	uint64_t x310 = UINT64_MAX;
	uint32_t x311 = UINT32_MAX;
	static uint16_t x312 = 4U;
	static volatile uint64_t t72 = 65081034060050LLU;

    t72 = (x309*((x310/x311)&x312));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MAX;
	volatile uint32_t x316 = 63517722U;

    t73 = (x313*((x314/x315)&x316));

    if (t73 != 4294966272U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x317 = -1LL;
	uint64_t x318 = 926477836500LLU;
	static uint64_t t74 = 17332822901794391LLU;

    t74 = (x317*((x318/x319)&x320));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x323 = INT16_MIN;
	volatile int32_t x324 = 8181;

    t75 = (x321*((x322/x323)&x324));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x325 = INT64_MIN;
	volatile int16_t x327 = INT16_MAX;
	int32_t x328 = INT32_MAX;
	int64_t t76 = -117432396LL;

    t76 = (x325*((x326/x327)&x328));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x329 = 51U;
	uint8_t x331 = 59U;
	uint16_t x332 = UINT16_MAX;

    t77 = (x329*((x330/x331)&x332));

    if (t77 != 56610) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x333 = INT8_MIN;
	int64_t x335 = -70056235LL;
	int64_t x336 = INT64_MIN;
	int64_t t78 = -29LL;

    t78 = (x333*((x334/x335)&x336));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x339 = -6;
	static int16_t x340 = INT16_MIN;
	static int64_t t79 = -548198LL;

    t79 = (x337*((x338/x339)&x340));

    if (t79 != -421750898688LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x341 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = 872072747LLU;
	volatile uint64_t t80 = 205634941437086LLU;

    t80 = (x341*((x342/x343)&x344));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x347 = INT64_MIN;
	volatile uint64_t t81 = 717639020000799LLU;

    t81 = (x345*((x346/x347)&x348));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint8_t x350 = UINT8_MAX;
	int64_t x351 = -1LL;
	uint16_t x352 = 3U;
	volatile int64_t t82 = -1LL;

    t82 = (x349*((x350/x351)&x352));

    if (t82 != 2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x353 = 2LLU;
	volatile int32_t x354 = INT32_MIN;
	int8_t x355 = INT8_MIN;
	int8_t x356 = -1;
	static volatile uint64_t t83 = 90434432LLU;

    t83 = (x353*((x354/x355)&x356));

    if (t83 != 33554432LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x357 = INT32_MAX;
	uint64_t x358 = UINT64_MAX;
	int8_t x359 = INT8_MIN;
	uint64_t t84 = 46LLU;

    t84 = (x357*((x358/x359)&x360));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x361 = 5342LLU;
	int64_t x362 = -1024288643642209LL;
	int8_t x363 = INT8_MAX;
	static int8_t x364 = -1;
	static volatile uint64_t t85 = 23LLU;

    t85 = (x361*((x362/x363)&x364));

    if (t85 != 18403659428557297360LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x369 = 219LL;
	volatile int64_t t86 = -229070060373LL;

    t86 = (x369*((x370/x371)&x372));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x378 = 6227U;
	static int32_t x379 = INT32_MIN;
	static volatile int16_t x380 = -1;
	static volatile int32_t t87 = 0;

    t87 = (x377*((x378/x379)&x380));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x381 = UINT16_MAX;
	uint64_t x383 = UINT64_MAX;
	uint16_t x384 = UINT16_MAX;

    t88 = (x381*((x382/x383)&x384));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x385 = 44;
	uint8_t x387 = 45U;
	int32_t t89 = 60281960;

    t89 = (x385*((x386/x387)&x388));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = -1;
	int32_t x391 = INT32_MAX;
	volatile int16_t x392 = 0;
	int32_t t90 = -51359864;

    t90 = (x389*((x390/x391)&x392));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x397 = 4280738529LLU;
	uint16_t x398 = UINT16_MAX;
	uint8_t x399 = 2U;
	int8_t x400 = 28;
	uint64_t t91 = 876106LLU;

    t91 = (x397*((x398/x399)&x400));

    if (t91 != 119860678812LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	static uint16_t x403 = 2U;
	volatile int64_t x404 = INT64_MIN;
	int64_t t92 = 3744084462953LL;

    t92 = (x401*((x402/x403)&x404));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x409 = -1;
	int8_t x410 = -11;
	int32_t x411 = INT32_MIN;
	int64_t t93 = -5LL;

    t93 = (x409*((x410/x411)&x412));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x413 = -1;
	volatile int64_t x415 = INT64_MIN;
	int64_t t94 = -8073LL;

    t94 = (x413*((x414/x415)&x416));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x417 = -1122LL;
	uint32_t x418 = UINT32_MAX;
	static uint32_t x419 = UINT32_MAX;
	uint16_t x420 = 0U;
	int64_t t95 = 213194136LL;

    t95 = (x417*((x418/x419)&x420));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x425 = -1LL;
	int16_t x427 = 93;

    t96 = (x425*((x426/x427)&x428));

    if (t96 != 32768LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x434 = 6U;
	static volatile int8_t x436 = -1;
	volatile uint32_t t97 = 35U;

    t97 = (x433*((x434/x435)&x436));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = 18;
	uint16_t x438 = UINT16_MAX;
	int16_t x439 = INT16_MAX;
	static int64_t x440 = INT64_MAX;
	int64_t t98 = -1LL;

    t98 = (x437*((x438/x439)&x440));

    if (t98 != 36LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x441 = -1;
	int8_t x442 = INT8_MIN;
	int8_t x443 = -1;
	volatile uint32_t x444 = 3U;

    t99 = (x441*((x442/x443)&x444));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x446 = INT8_MIN;
	uint64_t x447 = UINT64_MAX;
	uint8_t x448 = 20U;
	uint64_t t100 = 4424600049LLU;

    t100 = (x445*((x446/x447)&x448));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x449 = 649U;
	int8_t x450 = INT8_MIN;
	static int8_t x451 = 1;
	volatile uint64_t t101 = 2467896281583250LLU;

    t101 = (x449*((x450/x451)&x452));

    if (t101 != 70556435947008LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x453 = 0;
	static uint32_t x455 = 4387U;
	static int32_t x456 = 886338331;
	uint32_t t102 = 30U;

    t102 = (x453*((x454/x455)&x456));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x457 = UINT16_MAX;
	int64_t x458 = 42131064LL;
	static int64_t x459 = INT64_MAX;
	uint8_t x460 = UINT8_MAX;

    t103 = (x457*((x458/x459)&x460));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x461 = INT32_MIN;
	int16_t x462 = INT16_MAX;
	volatile uint64_t x464 = 0LLU;

    t104 = (x461*((x462/x463)&x464));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x465 = INT8_MIN;
	static int16_t x466 = INT16_MIN;
	uint64_t x468 = 397103850308550LLU;
	uint64_t t105 = 54667323LLU;

    t105 = (x465*((x466/x467)&x468));

    if (t105 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x469 = 137329671U;
	int32_t x470 = INT32_MAX;
	uint64_t x471 = UINT64_MAX;
	static int16_t x472 = -1600;
	uint64_t t106 = 323600557LLU;

    t106 = (x469*((x470/x471)&x472));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x473 = 8U;
	uint16_t x474 = 174U;
	int16_t x475 = INT16_MAX;
	static int16_t x476 = INT16_MIN;
	volatile int32_t t107 = -672775898;

    t107 = (x473*((x474/x475)&x476));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x477 = INT8_MIN;
	int64_t x478 = 9133993LL;
	int32_t x480 = INT32_MIN;
	static volatile int64_t t108 = -148195548712LL;

    t108 = (x477*((x478/x479)&x480));

    if (t108 != 274877906944LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x481 = 62238063LL;
	int8_t x482 = -57;
	uint16_t x483 = UINT16_MAX;
	int64_t t109 = 1960165087312LL;

    t109 = (x481*((x482/x483)&x484));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x487 = INT16_MIN;
	int32_t x488 = INT32_MIN;

    t110 = (x485*((x486/x487)&x488));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x489 = UINT32_MAX;
	uint32_t x491 = 7334U;
	static int32_t x492 = INT32_MAX;

    t111 = (x489*((x490/x491)&x492));

    if (t111 != 4294381677U) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x493 = 2U;
	volatile int16_t x494 = -75;
	int8_t x495 = -35;
	volatile uint8_t x496 = 21U;

    t112 = (x493*((x494/x495)&x496));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x497 = 7U;
	volatile int16_t x499 = -13;
	static int64_t x500 = INT64_MIN;
	volatile int64_t t113 = -237LL;

    t113 = (x497*((x498/x499)&x500));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x501 = 11119589749500554LLU;
	int8_t x504 = INT8_MIN;

    t114 = (x501*((x502/x503)&x504));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x505 = INT16_MAX;
	uint32_t x506 = 140514U;
	int16_t x507 = INT16_MIN;
	int32_t x508 = INT32_MIN;
	volatile uint32_t t115 = 522298072U;

    t115 = (x505*((x506/x507)&x508));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x509 = 91U;
	volatile uint32_t x510 = 40782U;
	uint64_t x512 = 0LLU;
	static uint64_t t116 = 29104701LLU;

    t116 = (x509*((x510/x511)&x512));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x513 = INT16_MIN;
	static int32_t x515 = INT32_MIN;
	volatile uint32_t x516 = 457U;
	static uint32_t t117 = 1614674U;

    t117 = (x513*((x514/x515)&x516));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x517 = UINT16_MAX;
	int64_t x518 = 15182LL;
	uint16_t x519 = 24U;
	uint8_t x520 = 8U;
	static volatile int64_t t118 = -80120854024994LL;

    t118 = (x517*((x518/x519)&x520));

    if (t118 != 524280LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x522 = INT64_MAX;
	uint64_t x523 = 491308899504LLU;
	int64_t x524 = -1LL;
	uint64_t t119 = 213403LLU;

    t119 = (x521*((x522/x523)&x524));

    if (t119 != 615136889787LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x525 = 1U;
	int16_t x526 = INT16_MAX;
	static volatile int32_t x527 = INT32_MIN;
	int8_t x528 = -1;
	int32_t t120 = -1;

    t120 = (x525*((x526/x527)&x528));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x529 = INT64_MIN;
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MIN;

    t121 = (x529*((x530/x531)&x532));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint16_t x533 = 919U;
	static volatile int32_t x534 = -1;
	static int64_t x535 = INT64_MIN;
	uint32_t x536 = 205076413U;

    t122 = (x533*((x534/x535)&x536));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x537 = INT32_MAX;
	static int8_t x539 = -48;
	uint64_t x540 = 129384374362144616LLU;
	volatile uint64_t t123 = 67275LLU;

    t123 = (x537*((x538/x539)&x540));

    if (t123 != 1185410973144LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x541 = INT64_MIN;
	uint64_t x543 = 1506993344955144LLU;
	volatile int8_t x544 = -1;
	volatile uint64_t t124 = 230LLU;

    t124 = (x541*((x542/x543)&x544));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x546 = 30;
	int64_t x547 = -206413828473496518LL;
	volatile int8_t x548 = INT8_MAX;
	static int64_t t125 = 153926861294LL;

    t125 = (x545*((x546/x547)&x548));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x549 = 884883U;
	int8_t x550 = INT8_MIN;
	int32_t x551 = INT32_MIN;
	volatile int64_t x552 = -44LL;
	volatile int64_t t126 = -1LL;

    t126 = (x549*((x550/x551)&x552));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x554 = -1;
	uint32_t x556 = 265559212U;
	static volatile int64_t t127 = -6LL;

    t127 = (x553*((x554/x555)&x556));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x557 = INT32_MAX;
	static int32_t x558 = -1;
	volatile int16_t x559 = 5805;
	static int16_t x560 = -4;
	volatile int32_t t128 = 29588532;

    t128 = (x557*((x558/x559)&x560));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x561 = INT8_MIN;
	uint8_t x562 = 9U;
	volatile uint8_t x563 = UINT8_MAX;
	static int16_t x564 = INT16_MAX;

    t129 = (x561*((x562/x563)&x564));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x565 = 1953026LLU;
	uint8_t x566 = 15U;
	int32_t x568 = -2527086;
	uint64_t t130 = 64LLU;

    t130 = (x565*((x566/x567)&x568));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x569 = INT32_MAX;
	uint64_t x570 = 483LLU;
	int8_t x571 = INT8_MIN;
	int16_t x572 = 13635;
	volatile uint64_t t131 = 46285LLU;

    t131 = (x569*((x570/x571)&x572));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x574 = INT64_MIN;
	int16_t x575 = INT16_MAX;
	int32_t x576 = 23;
	volatile int64_t t132 = 32057718LL;

    t132 = (x573*((x574/x575)&x576));

    if (t132 != 1840LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x577 = UINT16_MAX;
	volatile int64_t x578 = 352356637961267LL;
	int32_t x579 = INT32_MIN;
	uint16_t x580 = UINT16_MAX;
	int64_t t133 = 1026473135198110LL;

    t133 = (x577*((x578/x579)&x580));

    if (t133 != 2131853550LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x581 = 35;
	int32_t x582 = INT32_MIN;
	static uint16_t x583 = UINT16_MAX;
	int16_t x584 = -1;
	int32_t t134 = 218;

    t134 = (x581*((x582/x583)&x584));

    if (t134 != -1146880) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x590 = INT16_MAX;
	volatile uint32_t t135 = 21504U;

    t135 = (x589*((x590/x591)&x592));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x593 = 220LLU;
	int16_t x594 = INT16_MIN;
	int16_t x595 = INT16_MAX;
	static int64_t x596 = -291LL;
	uint64_t t136 = 3081558464806085LLU;

    t136 = (x593*((x594/x595)&x596));

    if (t136 != 18446744073709487596LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x602 = INT16_MAX;
	uint8_t x603 = 80U;
	static int64_t x604 = INT64_MIN;
	int64_t t137 = -1343134LL;

    t137 = (x601*((x602/x603)&x604));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x606 = -237;
	int32_t x607 = INT32_MAX;
	static int64_t x608 = -1LL;
	volatile int64_t t138 = -2147546840LL;

    t138 = (x605*((x606/x607)&x608));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x609 = UINT32_MAX;
	int32_t x610 = INT32_MIN;
	int8_t x611 = INT8_MIN;
	volatile uint32_t t139 = 22032U;

    t139 = (x609*((x610/x611)&x612));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x613 = 1U;
	static volatile int16_t x614 = INT16_MIN;
	volatile int64_t x615 = 6LL;
	int32_t x616 = -4;
	static volatile int64_t t140 = 1245413052510011LL;

    t140 = (x613*((x614/x615)&x616));

    if (t140 != -5464LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x617 = INT32_MIN;
	static int8_t x618 = -1;
	int16_t x619 = INT16_MAX;
	int32_t t141 = 4918482;

    t141 = (x617*((x618/x619)&x620));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x621 = -1;
	int32_t x623 = INT32_MIN;
	static int32_t t142 = -21679;

    t142 = (x621*((x622/x623)&x624));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x625 = -1;
	volatile int16_t x626 = INT16_MIN;

    t143 = (x625*((x626/x627)&x628));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x631 = INT64_MAX;
	uint8_t x632 = UINT8_MAX;
	static volatile int64_t t144 = -1239095672190154LL;

    t144 = (x629*((x630/x631)&x632));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x633 = 43U;
	int16_t x634 = -1;
	int16_t x635 = 5;
	int64_t x636 = -1LL;
	volatile int64_t t145 = -23447040070849LL;

    t145 = (x633*((x634/x635)&x636));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x637 = 48U;
	uint32_t x638 = 22183514U;
	static volatile int8_t x639 = 1;
	static int8_t x640 = 1;
	uint32_t t146 = 14845U;

    t146 = (x637*((x638/x639)&x640));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x642 = 9065U;
	uint16_t x643 = UINT16_MAX;
	static uint16_t x644 = UINT16_MAX;

    t147 = (x641*((x642/x643)&x644));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x649 = 1;
	uint8_t x651 = 1U;
	volatile int64_t t148 = -9191641LL;

    t148 = (x649*((x650/x651)&x652));

    if (t148 != 12230899631272088LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x654 = -6819965177440LL;
	volatile uint64_t x655 = 240938LLU;
	static uint64_t t149 = 5760120244669LLU;

    t149 = (x653*((x654/x655)&x656));

    if (t149 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x657 = INT32_MIN;
	volatile int32_t x659 = -1;
	int16_t x660 = -1;
	int32_t t150 = INT32_MIN;

    t150 = (x657*((x658/x659)&x660));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x661 = UINT8_MAX;
	uint8_t x662 = UINT8_MAX;
	int32_t x663 = 523223;

    t151 = (x661*((x662/x663)&x664));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x666 = INT16_MIN;
	uint16_t x667 = UINT16_MAX;
	uint8_t x668 = 110U;
	int32_t t152 = 182;

    t152 = (x665*((x666/x667)&x668));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x669 = 1344LLU;
	static volatile int64_t x670 = -26804LL;
	int8_t x671 = INT8_MIN;
	static int8_t x672 = INT8_MIN;

    t153 = (x669*((x670/x671)&x672));

    if (t153 != 172032LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x673 = 1267325U;
	static int32_t x674 = -1;
	static volatile int32_t x675 = -1660;
	int16_t x676 = -1;
	static volatile uint32_t t154 = 1U;

    t154 = (x673*((x674/x675)&x676));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x677 = 3U;
	static uint8_t x678 = UINT8_MAX;
	uint16_t x679 = 191U;

    t155 = (x677*((x678/x679)&x680));

    if (t155 != 3LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x681 = INT8_MIN;
	int32_t x682 = INT32_MIN;
	int16_t x683 = INT16_MIN;
	static int8_t x684 = INT8_MIN;

    t156 = (x681*((x682/x683)&x684));

    if (t156 != -8388608) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x685 = 12U;
	int16_t x686 = INT16_MAX;
	int32_t x687 = INT32_MIN;
	static int32_t x688 = 314;
	int32_t t157 = 25;

    t157 = (x685*((x686/x687)&x688));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x689 = INT32_MIN;
	int32_t x690 = INT32_MAX;
	static volatile uint8_t x691 = 25U;
	int32_t x692 = INT32_MIN;
	volatile int32_t t158 = 1280325;

    t158 = (x689*((x690/x691)&x692));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x695 = INT8_MIN;
	static int32_t x696 = -221;
	volatile int32_t t159 = 1;

    t159 = (x693*((x694/x695)&x696));

    if (t159 != -2435420) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x697 = 452669U;
	int16_t x698 = INT16_MIN;
	volatile uint16_t x700 = UINT16_MAX;

    t160 = (x697*((x698/x699)&x700));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x701 = -1;
	uint8_t x702 = 0U;
	int64_t x703 = INT64_MAX;
	int32_t x704 = INT32_MAX;
	volatile int64_t t161 = 823989LL;

    t161 = (x701*((x702/x703)&x704));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x709 = 156;
	uint32_t x711 = UINT32_MAX;
	volatile uint8_t x712 = 107U;
	volatile uint32_t t162 = 442870U;

    t162 = (x709*((x710/x711)&x712));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x713 = -1;
	uint8_t x714 = 0U;
	int8_t x715 = INT8_MIN;
	uint32_t x716 = 26U;
	volatile uint32_t t163 = 7U;

    t163 = (x713*((x714/x715)&x716));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x717 = -1;
	volatile int16_t x718 = -6915;
	int16_t x719 = INT16_MAX;
	volatile int16_t x720 = 2133;
	int32_t t164 = 4063767;

    t164 = (x717*((x718/x719)&x720));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x722 = 8459LL;
	volatile int64_t t165 = -6LL;

    t165 = (x721*((x722/x723)&x724));

    if (t165 != 29603LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x726 = 4LL;
	int8_t x727 = INT8_MIN;
	int8_t x728 = INT8_MIN;
	int64_t t166 = -5LL;

    t166 = (x725*((x726/x727)&x728));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x729 = INT64_MAX;
	static int64_t x730 = INT64_MAX;
	int64_t x731 = 30052197400435248LL;
	int64_t t167 = 7889833957191LL;

    t167 = (x729*((x730/x731)&x732));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x733 = UINT32_MAX;
	uint32_t x734 = UINT32_MAX;
	int8_t x735 = -3;
	uint32_t x736 = UINT32_MAX;

    t168 = (x733*((x734/x735)&x736));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x737 = 4943560U;
	int16_t x739 = INT16_MAX;
	static int64_t x740 = 27302416013537417LL;
	uint64_t t169 = 59163LLU;

    t169 = (x737*((x738/x739)&x740));

    if (t169 != 4921710904924663496LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x741 = -1;
	uint8_t x742 = 0U;
	static int64_t x743 = -136LL;
	int32_t x744 = -11784;
	volatile int64_t t170 = 220119027LL;

    t170 = (x741*((x742/x743)&x744));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x753 = 4223172118719LLU;
	int64_t x754 = INT64_MAX;
	int8_t x755 = INT8_MAX;
	uint16_t x756 = 55U;
	volatile uint64_t t171 = 1LLU;

    t171 = (x753*((x754/x755)&x756));

    if (t171 != 4223172118719LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x757 = INT8_MIN;
	int8_t x758 = 30;
	int8_t x759 = INT8_MIN;
	uint64_t t172 = 2525558610448281437LLU;

    t172 = (x757*((x758/x759)&x760));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x763 = INT64_MIN;
	volatile int64_t t173 = 42303271LL;

    t173 = (x761*((x762/x763)&x764));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x765 = UINT64_MAX;
	int64_t x766 = 2LL;
	static int64_t x767 = INT64_MIN;
	volatile uint8_t x768 = 2U;

    t174 = (x765*((x766/x767)&x768));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x769 = -1;
	static int8_t x770 = INT8_MIN;
	static uint64_t x772 = UINT64_MAX;

    t175 = (x769*((x770/x771)&x772));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x773 = 29;
	uint16_t x774 = 8393U;
	int16_t x776 = INT16_MIN;

    t176 = (x773*((x774/x775)&x776));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint16_t x777 = 138U;
	volatile int32_t x778 = -53;
	int32_t x779 = -1;
	volatile int32_t t177 = 29;

    t177 = (x777*((x778/x779)&x780));

    if (t177 != 7314) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x782 = -1LL;
	static int16_t x783 = -1645;
	int16_t x784 = INT16_MIN;
	volatile int64_t t178 = -33787073480431395LL;

    t178 = (x781*((x782/x783)&x784));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x785 = INT16_MIN;
	int64_t x786 = INT64_MIN;
	uint16_t x787 = UINT16_MAX;
	static int64_t t179 = -3450314LL;

    t179 = (x785*((x786/x787)&x788));

    if (t179 != 4611756388245307392LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x789 = INT32_MIN;
	int16_t x790 = -17;
	int8_t x792 = -9;
	volatile int32_t t180 = -1;

    t180 = (x789*((x790/x791)&x792));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x793 = INT8_MIN;
	uint16_t x794 = 85U;
	uint8_t x795 = UINT8_MAX;
	volatile int16_t x796 = INT16_MAX;
	int32_t t181 = -1;

    t181 = (x793*((x794/x795)&x796));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x797 = INT32_MAX;
	volatile uint16_t x798 = 7071U;
	volatile uint64_t x799 = UINT64_MAX;
	int8_t x800 = -1;
	uint64_t t182 = 6115570LLU;

    t182 = (x797*((x798/x799)&x800));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x801 = 1;
	uint8_t x802 = UINT8_MAX;
	int32_t x803 = INT32_MAX;

    t183 = (x801*((x802/x803)&x804));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x809 = 50;
	int8_t x810 = INT8_MIN;
	int8_t x811 = INT8_MIN;
	static volatile int32_t t184 = -3212156;

    t184 = (x809*((x810/x811)&x812));

    if (t184 != 50) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x813 = INT8_MIN;
	volatile int32_t x814 = INT32_MIN;
	static int64_t x815 = INT64_MIN;
	int8_t x816 = INT8_MIN;
	int64_t t185 = 104LL;

    t185 = (x813*((x814/x815)&x816));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x817 = 8050174U;
	volatile uint32_t x818 = 1U;
	uint64_t x819 = 2114995055887160329LLU;
	volatile int8_t x820 = -34;

    t186 = (x817*((x818/x819)&x820));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x821 = 44LLU;
	int8_t x822 = -22;
	static int64_t x823 = 62LL;
	uint64_t x824 = UINT64_MAX;
	volatile uint64_t t187 = 68LLU;

    t187 = (x821*((x822/x823)&x824));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x829 = INT16_MIN;
	volatile uint32_t x830 = 918602U;
	static uint32_t x831 = 735U;
	volatile uint32_t t188 = 23395819U;

    t188 = (x829*((x830/x831)&x832));

    if (t188 != 4291788800U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x833 = -1;
	uint16_t x835 = UINT16_MAX;
	static int8_t x836 = INT8_MIN;
	volatile int64_t t189 = 75LL;

    t189 = (x833*((x834/x835)&x836));

    if (t189 != 140739635871744LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x841 = 4378313206036017806LL;
	volatile int32_t x843 = INT32_MIN;
	uint8_t x844 = 38U;

    t190 = (x841*((x842/x843)&x844));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x849 = INT64_MIN;
	uint16_t x850 = UINT16_MAX;
	volatile uint64_t t191 = 1663LLU;

    t191 = (x849*((x850/x851)&x852));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x853 = INT32_MIN;
	uint16_t x854 = 7331U;
	static uint32_t x855 = 57249603U;
	int16_t x856 = INT16_MIN;
	volatile uint32_t t192 = 9526546U;

    t192 = (x853*((x854/x855)&x856));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x857 = INT16_MIN;
	int64_t x858 = INT64_MAX;
	int64_t x859 = -1LL;
	uint8_t x860 = 1U;

    t193 = (x857*((x858/x859)&x860));

    if (t193 != -32768LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x861 = 275046689;
	static int32_t x862 = 200;
	volatile uint32_t x863 = 15040U;
	static int16_t x864 = -1;

    t194 = (x861*((x862/x863)&x864));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x865 = INT16_MIN;
	volatile int64_t x866 = INT64_MIN;
	int16_t x867 = INT16_MIN;
	uint32_t x868 = 23686U;
	static int64_t t195 = -3LL;

    t195 = (x865*((x866/x867)&x868));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x869 = -1;
	int8_t x870 = -1;
	static uint64_t x871 = 9596940441LLU;
	static uint64_t t196 = 46LLU;

    t196 = (x869*((x870/x871)&x872));

    if (t196 != 18446744071787403179LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x873 = INT16_MAX;
	uint16_t x875 = 1791U;
	static uint32_t x876 = 40461U;
	volatile uint64_t t197 = 1673389LLU;

    t197 = (x873*((x874/x875)&x876));

    if (t197 != 131068LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x877 = -1LL;
	uint64_t x879 = 237150202LLU;
	static int32_t x880 = INT32_MAX;
	uint64_t t198 = 5975467284695693LLU;

    t198 = (x877*((x878/x879)&x880));

    if (t198 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x881 = INT64_MIN;
	uint64_t x882 = UINT64_MAX;
	volatile uint64_t t199 = 33690LLU;

    t199 = (x881*((x882/x883)&x884));

    if (t199 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

