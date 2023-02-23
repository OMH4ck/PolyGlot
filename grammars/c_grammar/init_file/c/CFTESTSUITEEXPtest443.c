
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

int16_t x5 = INT16_MAX;
volatile int8_t x7 = INT8_MIN;
int64_t x12 = -1LL;
uint64_t x24 = UINT64_MAX;
int16_t x29 = -3958;
int64_t x37 = 402520558LL;
int32_t x41 = -29;
volatile int16_t x44 = -1;
int16_t x57 = -1;
int64_t x59 = -1LL;
volatile int8_t x72 = -1;
volatile int8_t x75 = INT8_MIN;
int32_t t13 = -127;
volatile int32_t t15 = 14985;
uint64_t x90 = 93467279743LLU;
int64_t x92 = -15856319938289LL;
int8_t x103 = INT8_MIN;
volatile int32_t t18 = -124;
static int8_t x110 = INT8_MAX;
static int32_t t19 = 219383;
volatile int64_t x125 = -1LL;
int8_t x126 = 1;
int64_t x137 = INT64_MAX;
uint32_t x155 = UINT32_MAX;
static uint64_t x156 = 215996837035LLU;
int64_t x164 = INT64_MAX;
int64_t x167 = 13697018309915083LL;
int64_t x179 = 24902LL;
int8_t x180 = -1;
static int32_t x185 = 1;
int8_t x186 = INT8_MIN;
volatile int32_t x187 = -1;
int16_t x189 = 185;
static int32_t t35 = 1010572;
int32_t x201 = INT32_MIN;
volatile int16_t x211 = -1;
uint32_t x216 = 499508U;
uint8_t x225 = 107U;
static volatile uint64_t x242 = 8LLU;
int64_t x254 = -3251569428LL;
int32_t t47 = 8;
uint8_t x264 = 5U;
volatile int32_t x268 = INT32_MIN;
volatile int8_t x271 = 1;
int8_t x274 = -6;
static int16_t x279 = -15469;
int64_t x281 = INT64_MIN;
volatile int32_t t54 = 8651;
int8_t x300 = INT8_MAX;
static int32_t x305 = 0;
static volatile int32_t x315 = INT32_MIN;
static int8_t x333 = 15;
volatile int32_t t60 = 69;
int8_t x339 = 1;
volatile uint16_t x342 = 40U;
static int32_t t62 = 1009;
uint64_t x345 = UINT64_MAX;
static int8_t x346 = -1;
int16_t x365 = INT16_MAX;
static int32_t x370 = -72;
volatile int8_t x374 = INT8_MIN;
static int32_t x376 = INT32_MIN;
int16_t x378 = INT16_MAX;
volatile uint32_t x391 = 4337U;
uint32_t x402 = 5U;
uint64_t x413 = 153170752660768025LLU;
int64_t x414 = 0LL;
volatile uint8_t x415 = 28U;
int64_t x420 = -167LL;
static int64_t x431 = -173LL;
static volatile uint16_t x434 = 91U;
volatile int32_t x436 = INT32_MIN;
volatile uint32_t x452 = 1U;
volatile int32_t t86 = -5281487;
static volatile int32_t t88 = 1;
uint16_t x480 = 1U;
int8_t x486 = INT8_MIN;
static volatile int8_t x487 = -4;
static int32_t t91 = -716192735;
volatile int32_t t92 = 4896;
int32_t t93 = 232;
int16_t x502 = INT16_MIN;
int32_t x504 = 1;
int8_t x511 = -28;
int32_t t97 = -1;
static int64_t x517 = -1LL;
volatile uint32_t x519 = 83U;
int8_t x533 = -1;
static uint16_t x534 = 71U;
uint32_t x546 = UINT32_MAX;
int32_t x548 = -4;
volatile int32_t x549 = -1;
uint64_t x550 = UINT64_MAX;
int32_t t105 = 3900019;
int16_t x561 = -13009;
uint8_t x563 = 7U;
int8_t x568 = INT8_MIN;
volatile int32_t t108 = 409;
uint8_t x571 = 58U;
uint8_t x580 = 20U;
static volatile int32_t x583 = -2626;
static uint16_t x590 = 15U;
volatile int8_t x592 = -1;
static int16_t x594 = INT16_MAX;
uint16_t x595 = UINT16_MAX;
static volatile int32_t t117 = 19621;
uint32_t x605 = 1U;
int8_t x608 = 59;
static volatile int8_t x616 = INT8_MAX;
int8_t x617 = -1;
static volatile int32_t x620 = -32454601;
static uint32_t x627 = 30456U;
static volatile int32_t t122 = -4230;
uint16_t x632 = 2U;
int8_t x639 = INT8_MIN;
uint64_t x643 = 87175404826744LLU;
uint64_t x650 = UINT64_MAX;
volatile int8_t x651 = INT8_MIN;
static int32_t x659 = INT32_MAX;
uint16_t x670 = 5U;
int8_t x674 = 2;
int16_t x678 = -1;
volatile int16_t x679 = -15537;
uint16_t x685 = UINT16_MAX;
static volatile uint64_t x686 = 136136330066LLU;
int32_t x687 = INT32_MAX;
int64_t x700 = INT64_MIN;
int8_t x701 = 5;
static int64_t x703 = INT64_MIN;
volatile int16_t x705 = INT16_MAX;
volatile int8_t x711 = -11;
uint16_t x720 = 419U;
static uint8_t x727 = UINT8_MAX;
int16_t x734 = INT16_MIN;
int32_t t145 = 0;
static volatile uint64_t x737 = 5306067763373331115LLU;
uint64_t x738 = 4074195782499LLU;
volatile uint32_t x739 = UINT32_MAX;
int8_t x743 = INT8_MAX;
int64_t x744 = -585543LL;
int64_t x747 = 27240LL;
uint8_t x748 = 11U;
int16_t x759 = 1;
uint8_t x762 = UINT8_MAX;
static int16_t x763 = -11793;
static uint64_t x768 = UINT64_MAX;
static int16_t x769 = 1;
int8_t x784 = 1;
int8_t x786 = INT8_MIN;
int16_t x788 = INT16_MIN;
int8_t x789 = INT8_MIN;
int8_t x795 = 49;
uint32_t x800 = 239723U;
int8_t x801 = INT8_MIN;
uint64_t x803 = UINT64_MAX;
int32_t t161 = -225211;
static int32_t x817 = INT32_MAX;
volatile uint64_t x819 = UINT64_MAX;
volatile int32_t t165 = -1868877;
volatile uint16_t x827 = UINT16_MAX;
uint32_t x829 = 1471U;
int16_t x838 = -15928;
int16_t x842 = 13833;
uint8_t x872 = 77U;
static int8_t x875 = INT8_MAX;
uint8_t x880 = 15U;
int16_t x881 = INT16_MIN;
volatile uint32_t x884 = 105128U;
uint32_t x895 = 80165U;
uint16_t x896 = UINT16_MAX;
volatile int32_t x902 = -22142;
int8_t x906 = INT8_MIN;
volatile int32_t t182 = 2;
uint64_t x923 = UINT64_MAX;
static int8_t x946 = INT8_MAX;
static volatile int16_t x947 = INT16_MAX;
static int8_t x965 = INT8_MIN;
volatile int64_t x975 = 28834LL;
static int16_t x976 = INT16_MAX;
int32_t t191 = 205226874;
int32_t x978 = -1;
int8_t x985 = INT8_MAX;
volatile int16_t x993 = INT16_MIN;
int8_t x996 = INT8_MIN;
uint8_t x997 = 30U;
static int32_t t197 = 3;
int32_t t199 = 26983;


void f0(void) {
    	static volatile int16_t x6 = 10;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t0 = -338302;

    t0 = (x5>((x6*x7)/x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MAX;
	int8_t x10 = INT8_MIN;
	int16_t x11 = -1;
	static int32_t t1 = -602;

    t1 = (x9>((x10*x11)/x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x13 = 1157LLU;
	volatile int16_t x14 = INT16_MIN;
	uint64_t x15 = UINT64_MAX;
	int32_t x16 = -1;
	int32_t t2 = 1230634;

    t2 = (x13>((x14*x15)/x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x21 = INT16_MIN;
	uint16_t x22 = UINT16_MAX;
	int32_t x23 = -538;
	volatile int32_t t3 = 14609;

    t3 = (x21>((x22*x23)/x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = 7;
	volatile int16_t x26 = -2077;
	uint8_t x27 = 1U;
	uint32_t x28 = 74648U;
	static int32_t t4 = 5;

    t4 = (x25>((x26*x27)/x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x30 = 24U;
	uint32_t x31 = 12U;
	int32_t x32 = 30400;
	volatile int32_t t5 = 1;

    t5 = (x29>((x30*x31)/x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x33 = 555844U;
	int32_t x34 = INT32_MAX;
	uint32_t x35 = 587U;
	static int64_t x36 = 131183902243LL;
	static int32_t t6 = 3669;

    t6 = (x33>((x34*x35)/x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x38 = 3LLU;
	volatile int8_t x39 = INT8_MIN;
	uint64_t x40 = 34LLU;
	int32_t t7 = -9368;

    t7 = (x37>((x38*x39)/x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x42 = -1;
	int64_t x43 = INT64_MAX;
	volatile int32_t t8 = 7710706;

    t8 = (x41>((x42*x43)/x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x45 = 212U;
	int16_t x46 = 451;
	uint16_t x47 = 163U;
	uint64_t x48 = 661081826169LLU;
	int32_t t9 = -928;

    t9 = (x45>((x46*x47)/x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x49 = INT64_MIN;
	int8_t x50 = -1;
	uint32_t x51 = 181U;
	volatile int16_t x52 = INT16_MAX;
	int32_t t10 = -3812104;

    t10 = (x49>((x50*x51)/x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x58 = UINT16_MAX;
	static int32_t x60 = INT32_MIN;
	volatile int32_t t11 = 0;

    t11 = (x57>((x58*x59)/x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x69 = 6U;
	uint64_t x70 = UINT64_MAX;
	uint64_t x71 = 8779LLU;
	int32_t t12 = 4368237;

    t12 = (x69>((x70*x71)/x72));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x73 = -1;
	int16_t x74 = INT16_MIN;
	uint16_t x76 = UINT16_MAX;

    t13 = (x73>((x74*x75)/x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x81 = 20U;
	uint32_t x82 = 178186484U;
	static int8_t x83 = 1;
	uint64_t x84 = UINT64_MAX;
	int32_t t14 = 186;

    t14 = (x81>((x82*x83)/x84));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x85 = INT64_MIN;
	static int8_t x86 = -45;
	volatile int64_t x87 = -10017170LL;
	int16_t x88 = -1;

    t15 = (x85>((x86*x87)/x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x91 = -1;
	static volatile int32_t t16 = -8;

    t16 = (x89>((x90*x91)/x92));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x101 = INT8_MAX;
	int16_t x102 = INT16_MIN;
	static int64_t x104 = INT64_MIN;
	int32_t t17 = 8152;

    t17 = (x101>((x102*x103)/x104));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x105 = INT8_MAX;
	uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 66U;
	static volatile int16_t x108 = 656;

    t18 = (x105>((x106*x107)/x108));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x109 = -1LL;
	volatile uint64_t x111 = UINT64_MAX;
	static int16_t x112 = -1;

    t19 = (x109>((x110*x111)/x112));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x113 = 35;
	int32_t x114 = INT32_MIN;
	uint32_t x115 = 61U;
	static int32_t x116 = -1;
	volatile int32_t t20 = -65041910;

    t20 = (x113>((x114*x115)/x116));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x127 = -1;
	int32_t x128 = INT32_MIN;
	int32_t t21 = 2227;

    t21 = (x125>((x126*x127)/x128));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x133 = -1;
	uint16_t x134 = 954U;
	volatile uint16_t x135 = UINT16_MAX;
	int32_t x136 = INT32_MIN;
	int32_t t22 = -1010186143;

    t22 = (x133>((x134*x135)/x136));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x138 = 99540001U;
	uint8_t x139 = 7U;
	static int64_t x140 = 251344185835317LL;
	int32_t t23 = 0;

    t23 = (x137>((x138*x139)/x140));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x141 = INT64_MIN;
	uint32_t x142 = 15U;
	uint8_t x143 = 4U;
	volatile int64_t x144 = INT64_MIN;
	static int32_t t24 = -1;

    t24 = (x141>((x142*x143)/x144));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x145 = 133545018555009849LL;
	static uint16_t x146 = 2U;
	int32_t x147 = -8;
	int64_t x148 = INT64_MIN;
	volatile int32_t t25 = 8514472;

    t25 = (x145>((x146*x147)/x148));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x149 = 7U;
	static volatile uint16_t x150 = UINT16_MAX;
	int16_t x151 = INT16_MIN;
	int64_t x152 = -1LL;
	int32_t t26 = 19536;

    t26 = (x149>((x150*x151)/x152));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x153 = UINT32_MAX;
	static uint64_t x154 = 1327629529LLU;
	static volatile int32_t t27 = 48;

    t27 = (x153>((x154*x155)/x156));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x161 = UINT64_MAX;
	int8_t x162 = INT8_MAX;
	uint16_t x163 = UINT16_MAX;
	volatile int32_t t28 = -12968829;

    t28 = (x161>((x162*x163)/x164));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x165 = -1;
	int16_t x166 = -71;
	static int8_t x168 = INT8_MAX;
	volatile int32_t t29 = -51976;

    t29 = (x165>((x166*x167)/x168));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x169 = -6;
	volatile int16_t x170 = -2157;
	uint8_t x171 = UINT8_MAX;
	static int8_t x172 = -1;
	volatile int32_t t30 = -338558220;

    t30 = (x169>((x170*x171)/x172));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x173 = 187121610LLU;
	int32_t x174 = -337;
	int8_t x175 = -1;
	volatile int8_t x176 = INT8_MAX;
	int32_t t31 = -97326844;

    t31 = (x173>((x174*x175)/x176));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x177 = UINT32_MAX;
	int16_t x178 = INT16_MAX;
	volatile int32_t t32 = 116217922;

    t32 = (x177>((x178*x179)/x180));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x181 = 9745454U;
	int32_t x182 = 187281;
	int64_t x183 = -1LL;
	static uint64_t x184 = 3LLU;
	static volatile int32_t t33 = -13;

    t33 = (x181>((x182*x183)/x184));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x188 = 4148450250LL;
	volatile int32_t t34 = -249;

    t34 = (x185>((x186*x187)/x188));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x190 = 7U;
	int32_t x191 = 16777037;
	volatile uint64_t x192 = UINT64_MAX;

    t35 = (x189>((x190*x191)/x192));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x193 = 5;
	int16_t x194 = -1;
	static uint64_t x195 = 2126490963641LLU;
	uint16_t x196 = 7U;
	volatile int32_t t36 = -882570;

    t36 = (x193>((x194*x195)/x196));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MIN;
	int16_t x204 = INT16_MAX;
	volatile int32_t t37 = -107640525;

    t37 = (x201>((x202*x203)/x204));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x205 = -7;
	static uint64_t x206 = 13436611491139174LLU;
	int16_t x207 = INT16_MIN;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t38 = -5;

    t38 = (x205>((x206*x207)/x208));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x209 = 90U;
	int8_t x210 = INT8_MIN;
	static uint32_t x212 = 52695U;
	int32_t t39 = 39;

    t39 = (x209>((x210*x211)/x212));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x213 = -1;
	static int64_t x214 = -1LL;
	uint8_t x215 = 24U;
	volatile int32_t t40 = 2575576;

    t40 = (x213>((x214*x215)/x216));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x221 = UINT64_MAX;
	int8_t x222 = -1;
	int32_t x223 = INT32_MAX;
	volatile int64_t x224 = -1LL;
	volatile int32_t t41 = -13;

    t41 = (x221>((x222*x223)/x224));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x226 = 6U;
	volatile int64_t x227 = -1LL;
	static uint32_t x228 = UINT32_MAX;
	int32_t t42 = 108808;

    t42 = (x225>((x226*x227)/x228));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x233 = -1;
	static int64_t x234 = -211LL;
	int16_t x235 = INT16_MIN;
	int32_t x236 = INT32_MIN;
	int32_t t43 = 0;

    t43 = (x233>((x234*x235)/x236));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x241 = -1224;
	uint64_t x243 = 31LLU;
	volatile uint16_t x244 = 15U;
	int32_t t44 = -63;

    t44 = (x241>((x242*x243)/x244));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x245 = INT16_MIN;
	int8_t x246 = 1;
	uint64_t x247 = 30692LLU;
	volatile int16_t x248 = INT16_MAX;
	volatile int32_t t45 = 639325837;

    t45 = (x245>((x246*x247)/x248));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x253 = -1;
	int16_t x255 = -1;
	int8_t x256 = 1;
	int32_t t46 = 14168716;

    t46 = (x253>((x254*x255)/x256));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x257 = INT16_MIN;
	uint8_t x258 = UINT8_MAX;
	int16_t x259 = -1;
	volatile uint32_t x260 = 9439215U;

    t47 = (x257>((x258*x259)/x260));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x261 = INT8_MIN;
	uint8_t x262 = 1U;
	int32_t x263 = INT32_MIN;
	int32_t t48 = -17;

    t48 = (x261>((x262*x263)/x264));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x265 = INT16_MIN;
	volatile uint32_t x266 = UINT32_MAX;
	int32_t x267 = INT32_MAX;
	int32_t t49 = 53;

    t49 = (x265>((x266*x267)/x268));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x269 = 122U;
	uint64_t x270 = UINT64_MAX;
	int32_t x272 = INT32_MIN;
	int32_t t50 = 1756;

    t50 = (x269>((x270*x271)/x272));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x273 = 3944U;
	static volatile uint32_t x275 = 3300178U;
	int8_t x276 = INT8_MAX;
	volatile int32_t t51 = -1;

    t51 = (x273>((x274*x275)/x276));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x277 = 2749LLU;
	int16_t x278 = 218;
	volatile uint64_t x280 = UINT64_MAX;
	volatile int32_t t52 = -394;

    t52 = (x277>((x278*x279)/x280));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x282 = 1879928479156846LLU;
	uint32_t x283 = 1U;
	int64_t x284 = INT64_MAX;
	volatile int32_t t53 = -216089;

    t53 = (x281>((x282*x283)/x284));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x289 = INT64_MAX;
	volatile int64_t x290 = 1450492LL;
	int8_t x291 = 1;
	int8_t x292 = INT8_MIN;

    t54 = (x289>((x290*x291)/x292));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x293 = 124;
	volatile int16_t x294 = -1;
	uint64_t x295 = 197456554LLU;
	uint16_t x296 = 4536U;
	volatile int32_t t55 = 1880;

    t55 = (x293>((x294*x295)/x296));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x297 = -2;
	uint64_t x298 = UINT64_MAX;
	uint64_t x299 = 1667LLU;
	int32_t t56 = 7664;

    t56 = (x297>((x298*x299)/x300));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x306 = UINT64_MAX;
	uint64_t x307 = 551LLU;
	uint32_t x308 = UINT32_MAX;
	int32_t t57 = 87;

    t57 = (x305>((x306*x307)/x308));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x313 = INT64_MIN;
	static uint64_t x314 = 0LLU;
	volatile int64_t x316 = -111LL;
	int32_t t58 = 7755;

    t58 = (x313>((x314*x315)/x316));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x317 = UINT16_MAX;
	int8_t x318 = -1;
	volatile int16_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t59 = -10359177;

    t59 = (x317>((x318*x319)/x320));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x334 = -1;
	int32_t x335 = -1;
	uint16_t x336 = 2077U;

    t60 = (x333>((x334*x335)/x336));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x337 = -15877;
	uint32_t x338 = UINT32_MAX;
	static int64_t x340 = -6LL;
	static volatile int32_t t61 = -39710;

    t61 = (x337>((x338*x339)/x340));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x341 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	static int16_t x344 = INT16_MAX;

    t62 = (x341>((x342*x343)/x344));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x347 = INT16_MAX;
	uint8_t x348 = 53U;
	volatile int32_t t63 = 1716366;

    t63 = (x345>((x346*x347)/x348));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x349 = INT8_MIN;
	int8_t x350 = -1;
	static uint64_t x351 = 16632817707160LLU;
	int16_t x352 = INT16_MIN;
	int32_t t64 = -4258089;

    t64 = (x349>((x350*x351)/x352));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x361 = 15U;
	uint64_t x362 = 14422594750LLU;
	int64_t x363 = 25136562451059LL;
	static int8_t x364 = INT8_MAX;
	volatile int32_t t65 = 16322;

    t65 = (x361>((x362*x363)/x364));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x366 = INT16_MAX;
	int64_t x367 = -612LL;
	volatile int8_t x368 = INT8_MIN;
	static int32_t t66 = 1;

    t66 = (x365>((x366*x367)/x368));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x369 = INT16_MAX;
	uint8_t x371 = 45U;
	int64_t x372 = INT64_MIN;
	volatile int32_t t67 = 7121359;

    t67 = (x369>((x370*x371)/x372));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x373 = UINT16_MAX;
	uint16_t x375 = 432U;
	int32_t t68 = 76316336;

    t68 = (x373>((x374*x375)/x376));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x377 = -1;
	static int32_t x379 = 1;
	int32_t x380 = INT32_MIN;
	int32_t t69 = 21;

    t69 = (x377>((x378*x379)/x380));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x381 = INT64_MIN;
	static uint32_t x382 = 24749U;
	int32_t x383 = INT32_MAX;
	int8_t x384 = INT8_MAX;
	volatile int32_t t70 = 8822;

    t70 = (x381>((x382*x383)/x384));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x385 = 13;
	int32_t x386 = -1;
	int8_t x387 = INT8_MIN;
	uint64_t x388 = 6803609404879LLU;
	volatile int32_t t71 = -938466;

    t71 = (x385>((x386*x387)/x388));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x389 = INT8_MAX;
	int32_t x390 = -1;
	volatile int8_t x392 = -1;
	static volatile int32_t t72 = -5611268;

    t72 = (x389>((x390*x391)/x392));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x393 = -66625069;
	static volatile uint8_t x394 = 124U;
	uint32_t x395 = 34261644U;
	int8_t x396 = INT8_MAX;
	static volatile int32_t t73 = -35426;

    t73 = (x393>((x394*x395)/x396));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x397 = UINT64_MAX;
	int64_t x398 = 1771958698LL;
	volatile int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	int32_t t74 = 606424262;

    t74 = (x397>((x398*x399)/x400));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x401 = INT64_MIN;
	int64_t x403 = 378638215127LL;
	volatile uint8_t x404 = 87U;
	volatile int32_t t75 = 634;

    t75 = (x401>((x402*x403)/x404));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x405 = 0U;
	static volatile int16_t x406 = -1;
	volatile uint64_t x407 = 26257568699900LLU;
	int16_t x408 = 3;
	volatile int32_t t76 = 503;

    t76 = (x405>((x406*x407)/x408));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x409 = -485;
	volatile uint64_t x410 = 9476LLU;
	int8_t x411 = INT8_MAX;
	uint64_t x412 = UINT64_MAX;
	int32_t t77 = -14;

    t77 = (x409>((x410*x411)/x412));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x416 = 81851LLU;
	volatile int32_t t78 = -26;

    t78 = (x413>((x414*x415)/x416));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x417 = 179527876LLU;
	uint64_t x418 = UINT64_MAX;
	uint64_t x419 = 12273476903688LLU;
	int32_t t79 = -5414;

    t79 = (x417>((x418*x419)/x420));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x425 = 4342133564LLU;
	uint8_t x426 = UINT8_MAX;
	int8_t x427 = -1;
	uint64_t x428 = 1016338LLU;
	volatile int32_t t80 = 2;

    t80 = (x425>((x426*x427)/x428));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x429 = INT64_MAX;
	static uint32_t x430 = 11U;
	volatile uint16_t x432 = 183U;
	int32_t t81 = -31933929;

    t81 = (x429>((x430*x431)/x432));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x433 = -1;
	static int8_t x435 = INT8_MIN;
	int32_t t82 = -10;

    t82 = (x433>((x434*x435)/x436));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x437 = 3U;
	uint32_t x438 = UINT32_MAX;
	int8_t x439 = 1;
	static int64_t x440 = -1LL;
	volatile int32_t t83 = 0;

    t83 = (x437>((x438*x439)/x440));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x441 = -1;
	int32_t x442 = INT32_MAX;
	static uint8_t x443 = 1U;
	int64_t x444 = -1LL;
	volatile int32_t t84 = -90044;

    t84 = (x441>((x442*x443)/x444));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x449 = -8603120;
	volatile uint64_t x450 = 529592255098346LLU;
	int16_t x451 = -8734;
	volatile int32_t t85 = -126574;

    t85 = (x449>((x450*x451)/x452));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x453 = -1;
	int16_t x454 = -1;
	int16_t x455 = -1;
	int8_t x456 = -3;

    t86 = (x453>((x454*x455)/x456));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x457 = 57191293;
	int16_t x458 = INT16_MIN;
	int16_t x459 = INT16_MAX;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t87 = 1827;

    t87 = (x457>((x458*x459)/x460));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x461 = 87U;
	int32_t x462 = -1;
	uint32_t x463 = 1563528426U;
	volatile uint8_t x464 = UINT8_MAX;

    t88 = (x461>((x462*x463)/x464));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x469 = INT8_MAX;
	int8_t x470 = INT8_MIN;
	int8_t x471 = INT8_MIN;
	volatile uint64_t x472 = 6696LLU;
	static volatile int32_t t89 = -2184;

    t89 = (x469>((x470*x471)/x472));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x477 = UINT16_MAX;
	static volatile int8_t x478 = INT8_MAX;
	int8_t x479 = -1;
	volatile int32_t t90 = -1741866;

    t90 = (x477>((x478*x479)/x480));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x485 = INT32_MAX;
	uint8_t x488 = 27U;

    t91 = (x485>((x486*x487)/x488));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x489 = -1;
	int8_t x490 = INT8_MIN;
	int16_t x491 = -1;
	uint16_t x492 = UINT16_MAX;

    t92 = (x489>((x490*x491)/x492));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x493 = INT32_MIN;
	volatile uint64_t x494 = 122905507LLU;
	static int64_t x495 = INT64_MAX;
	static int16_t x496 = INT16_MIN;

    t93 = (x493>((x494*x495)/x496));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x497 = 9788454LLU;
	uint16_t x498 = UINT16_MAX;
	uint64_t x499 = 893427348931986455LLU;
	static volatile int16_t x500 = INT16_MIN;
	int32_t t94 = -3127992;

    t94 = (x497>((x498*x499)/x500));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x501 = INT16_MAX;
	static volatile uint8_t x503 = 0U;
	volatile int32_t t95 = 346713;

    t95 = (x501>((x502*x503)/x504));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x505 = INT16_MIN;
	volatile int16_t x506 = -1;
	volatile uint64_t x507 = UINT64_MAX;
	volatile uint32_t x508 = 8414279U;
	int32_t t96 = 330447;

    t96 = (x505>((x506*x507)/x508));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x509 = INT32_MAX;
	static volatile int16_t x510 = INT16_MIN;
	static int8_t x512 = -20;

    t97 = (x509>((x510*x511)/x512));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x513 = INT8_MIN;
	int8_t x514 = -1;
	uint16_t x515 = 655U;
	volatile int16_t x516 = 1;
	volatile int32_t t98 = 727;

    t98 = (x513>((x514*x515)/x516));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x518 = -1;
	uint8_t x520 = UINT8_MAX;
	static int32_t t99 = -2;

    t99 = (x517>((x518*x519)/x520));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x525 = UINT32_MAX;
	volatile uint8_t x526 = 16U;
	int32_t x527 = -1;
	int64_t x528 = -1LL;
	volatile int32_t t100 = -29135;

    t100 = (x525>((x526*x527)/x528));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x529 = INT8_MAX;
	int16_t x530 = -9;
	int8_t x531 = INT8_MAX;
	static volatile int32_t x532 = INT32_MAX;
	int32_t t101 = 86897;

    t101 = (x529>((x530*x531)/x532));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x535 = UINT8_MAX;
	volatile int16_t x536 = -10;
	int32_t t102 = 1671297;

    t102 = (x533>((x534*x535)/x536));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x537 = 237017LLU;
	static int8_t x538 = INT8_MIN;
	int16_t x539 = -33;
	uint8_t x540 = 2U;
	volatile int32_t t103 = -32469;

    t103 = (x537>((x538*x539)/x540));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x545 = 3U;
	uint16_t x547 = 172U;
	int32_t t104 = 171943;

    t104 = (x545>((x546*x547)/x548));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x551 = 177U;
	uint8_t x552 = 3U;

    t105 = (x549>((x550*x551)/x552));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x553 = -237776LL;
	int8_t x554 = INT8_MIN;
	int16_t x555 = INT16_MAX;
	int32_t x556 = 6751;
	int32_t t106 = 3365;

    t106 = (x553>((x554*x555)/x556));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x562 = -1LL;
	volatile uint32_t x564 = 148616U;
	static volatile int32_t t107 = 1;

    t107 = (x561>((x562*x563)/x564));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x565 = -1360;
	static volatile int16_t x566 = INT16_MIN;
	uint32_t x567 = 4044399U;

    t108 = (x565>((x566*x567)/x568));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x569 = UINT16_MAX;
	int16_t x570 = -136;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t109 = 25166;

    t109 = (x569>((x570*x571)/x572));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x573 = -1;
	int16_t x574 = INT16_MAX;
	uint16_t x575 = 0U;
	volatile uint32_t x576 = 1090124459U;
	static volatile int32_t t110 = -553;

    t110 = (x573>((x574*x575)/x576));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x577 = INT64_MIN;
	uint64_t x578 = 50620574908710501LLU;
	uint16_t x579 = 1U;
	volatile int32_t t111 = -1;

    t111 = (x577>((x578*x579)/x580));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x581 = -30;
	int64_t x582 = -1LL;
	uint8_t x584 = 4U;
	int32_t t112 = 11410380;

    t112 = (x581>((x582*x583)/x584));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x585 = INT64_MIN;
	int16_t x586 = INT16_MAX;
	int16_t x587 = -1356;
	volatile uint32_t x588 = 9172729U;
	int32_t t113 = -5;

    t113 = (x585>((x586*x587)/x588));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x589 = -5927;
	uint16_t x591 = 3445U;
	int32_t t114 = -2;

    t114 = (x589>((x590*x591)/x592));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x593 = 52445;
	int8_t x596 = INT8_MIN;
	static volatile int32_t t115 = -11655399;

    t115 = (x593>((x594*x595)/x596));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x597 = INT32_MIN;
	static volatile int16_t x598 = INT16_MIN;
	uint64_t x599 = 294LLU;
	int16_t x600 = -1;
	static volatile int32_t t116 = -1057944;

    t116 = (x597>((x598*x599)/x600));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x601 = INT16_MIN;
	uint64_t x602 = 10744278550782LLU;
	uint8_t x603 = 1U;
	volatile int64_t x604 = -1LL;

    t117 = (x601>((x602*x603)/x604));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x606 = -1;
	int8_t x607 = -1;
	static int32_t t118 = 7741;

    t118 = (x605>((x606*x607)/x608));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x609 = 360676LL;
	int64_t x610 = INT64_MIN;
	uint64_t x611 = UINT64_MAX;
	int64_t x612 = INT64_MIN;
	volatile int32_t t119 = -11094225;

    t119 = (x609>((x610*x611)/x612));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x613 = -1;
	static int32_t x614 = INT32_MIN;
	static uint32_t x615 = UINT32_MAX;
	int32_t t120 = 76102036;

    t120 = (x613>((x614*x615)/x616));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x618 = INT16_MIN;
	int8_t x619 = INT8_MAX;
	int32_t t121 = 31;

    t121 = (x617>((x618*x619)/x620));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x625 = 7U;
	int8_t x626 = INT8_MIN;
	int8_t x628 = 6;

    t122 = (x625>((x626*x627)/x628));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x629 = 0U;
	int32_t x630 = -1;
	int16_t x631 = INT16_MIN;
	int32_t t123 = 662761;

    t123 = (x629>((x630*x631)/x632));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x637 = -1;
	uint64_t x638 = 356LLU;
	uint64_t x640 = 232LLU;
	static int32_t t124 = -229;

    t124 = (x637>((x638*x639)/x640));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x641 = -1;
	static int8_t x642 = INT8_MAX;
	int16_t x644 = INT16_MIN;
	volatile int32_t t125 = 972;

    t125 = (x641>((x642*x643)/x644));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x645 = 1LL;
	uint64_t x646 = UINT64_MAX;
	volatile int32_t x647 = INT32_MAX;
	volatile uint8_t x648 = UINT8_MAX;
	int32_t t126 = -1;

    t126 = (x645>((x646*x647)/x648));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x649 = 215988U;
	int64_t x652 = INT64_MIN;
	volatile int32_t t127 = 293247796;

    t127 = (x649>((x650*x651)/x652));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x657 = UINT64_MAX;
	static uint32_t x658 = UINT32_MAX;
	volatile int8_t x660 = -1;
	static int32_t t128 = 5049446;

    t128 = (x657>((x658*x659)/x660));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x661 = UINT64_MAX;
	int8_t x662 = 1;
	volatile int64_t x663 = 46451237812258LL;
	int16_t x664 = INT16_MIN;
	int32_t t129 = 266445;

    t129 = (x661>((x662*x663)/x664));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x669 = 3U;
	volatile int8_t x671 = INT8_MAX;
	int8_t x672 = -5;
	int32_t t130 = -181;

    t130 = (x669>((x670*x671)/x672));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x673 = 543;
	int8_t x675 = INT8_MAX;
	int16_t x676 = INT16_MIN;
	static volatile int32_t t131 = -864008817;

    t131 = (x673>((x674*x675)/x676));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x677 = 7075437092741348LLU;
	static int8_t x680 = INT8_MIN;
	static int32_t t132 = 0;

    t132 = (x677>((x678*x679)/x680));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x681 = INT16_MAX;
	uint16_t x682 = 25U;
	uint16_t x683 = 1U;
	int8_t x684 = 7;
	volatile int32_t t133 = -868;

    t133 = (x681>((x682*x683)/x684));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x688 = INT32_MAX;
	volatile int32_t t134 = -194237;

    t134 = (x685>((x686*x687)/x688));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x693 = 0U;
	int64_t x694 = 220387630037LL;
	uint16_t x695 = 109U;
	int64_t x696 = INT64_MAX;
	volatile int32_t t135 = -28;

    t135 = (x693>((x694*x695)/x696));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x697 = 8893LLU;
	int16_t x698 = INT16_MIN;
	volatile int16_t x699 = INT16_MIN;
	volatile int32_t t136 = -124814;

    t136 = (x697>((x698*x699)/x700));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint8_t x702 = 0U;
	volatile uint64_t x704 = 631986024LLU;
	static int32_t t137 = 194;

    t137 = (x701>((x702*x703)/x704));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x706 = 21318LLU;
	volatile uint32_t x707 = 6U;
	static volatile int32_t x708 = INT32_MIN;
	volatile int32_t t138 = 23201;

    t138 = (x705>((x706*x707)/x708));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x709 = -1LL;
	int16_t x710 = INT16_MIN;
	int16_t x712 = INT16_MAX;
	volatile int32_t t139 = 485;

    t139 = (x709>((x710*x711)/x712));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x713 = UINT32_MAX;
	int8_t x714 = 4;
	static uint16_t x715 = UINT16_MAX;
	volatile int8_t x716 = INT8_MAX;
	int32_t t140 = 69289976;

    t140 = (x713>((x714*x715)/x716));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x717 = INT16_MAX;
	int32_t x718 = -1;
	int32_t x719 = -1;
	static int32_t t141 = 325134865;

    t141 = (x717>((x718*x719)/x720));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x721 = -342LL;
	static uint16_t x722 = 145U;
	uint64_t x723 = 122235LLU;
	int64_t x724 = INT64_MAX;
	int32_t t142 = -1755316;

    t142 = (x721>((x722*x723)/x724));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x725 = 827713463064816LLU;
	volatile int16_t x726 = 1;
	volatile uint32_t x728 = UINT32_MAX;
	static int32_t t143 = 106626;

    t143 = (x725>((x726*x727)/x728));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x729 = -1;
	uint64_t x730 = UINT64_MAX;
	uint32_t x731 = 1410U;
	static uint32_t x732 = 403977391U;
	static volatile int32_t t144 = -20;

    t144 = (x729>((x730*x731)/x732));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x733 = -51431LL;
	int8_t x735 = INT8_MIN;
	uint32_t x736 = 11421U;

    t145 = (x733>((x734*x735)/x736));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x740 = INT64_MIN;
	static volatile int32_t t146 = 33409995;

    t146 = (x737>((x738*x739)/x740));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x741 = 0;
	uint32_t x742 = UINT32_MAX;
	int32_t t147 = -288306473;

    t147 = (x741>((x742*x743)/x744));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x745 = UINT64_MAX;
	int32_t x746 = INT32_MIN;
	static volatile int32_t t148 = -29267;

    t148 = (x745>((x746*x747)/x748));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x749 = -1;
	uint8_t x750 = 22U;
	static volatile uint16_t x751 = UINT16_MAX;
	uint8_t x752 = 7U;
	static volatile int32_t t149 = 1;

    t149 = (x749>((x750*x751)/x752));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x757 = -1;
	int32_t x758 = 11538;
	uint32_t x760 = 90349U;
	static int32_t t150 = -62;

    t150 = (x757>((x758*x759)/x760));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x761 = 38328457250LL;
	int8_t x764 = INT8_MAX;
	volatile int32_t t151 = 1161;

    t151 = (x761>((x762*x763)/x764));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x765 = -27;
	static uint32_t x766 = 128888290U;
	volatile uint16_t x767 = 6845U;
	int32_t t152 = -690;

    t152 = (x765>((x766*x767)/x768));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x770 = UINT64_MAX;
	uint8_t x771 = UINT8_MAX;
	static int8_t x772 = INT8_MIN;
	static volatile int32_t t153 = -897830754;

    t153 = (x769>((x770*x771)/x772));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x773 = INT64_MIN;
	static volatile uint16_t x774 = 3U;
	int8_t x775 = INT8_MAX;
	volatile int16_t x776 = 1031;
	static int32_t t154 = -1005061844;

    t154 = (x773>((x774*x775)/x776));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x777 = -1LL;
	volatile int8_t x778 = -1;
	volatile uint8_t x779 = 1U;
	int16_t x780 = INT16_MIN;
	static int32_t t155 = -360;

    t155 = (x777>((x778*x779)/x780));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x781 = INT8_MIN;
	uint64_t x782 = 36LLU;
	static int8_t x783 = INT8_MAX;
	static volatile int32_t t156 = 960;

    t156 = (x781>((x782*x783)/x784));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x785 = INT16_MIN;
	volatile uint8_t x787 = 11U;
	static volatile int32_t t157 = 731845933;

    t157 = (x785>((x786*x787)/x788));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x790 = -1;
	int32_t x791 = -1;
	int64_t x792 = 71LL;
	int32_t t158 = -363849;

    t158 = (x789>((x790*x791)/x792));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x793 = 223U;
	int16_t x794 = -1984;
	int16_t x796 = INT16_MAX;
	int32_t t159 = -97675580;

    t159 = (x793>((x794*x795)/x796));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x797 = 134;
	static uint64_t x798 = UINT64_MAX;
	static volatile int8_t x799 = INT8_MIN;
	volatile int32_t t160 = -1534;

    t160 = (x797>((x798*x799)/x800));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x802 = 32U;
	uint16_t x804 = UINT16_MAX;

    t161 = (x801>((x802*x803)/x804));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x805 = -259974681186889921LL;
	uint32_t x806 = 61725U;
	int8_t x807 = 6;
	int8_t x808 = -1;
	int32_t t162 = -50603990;

    t162 = (x805>((x806*x807)/x808));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x809 = 39U;
	static int64_t x810 = -33833082007260LL;
	static uint16_t x811 = 12U;
	volatile uint32_t x812 = UINT32_MAX;
	static int32_t t163 = 229658839;

    t163 = (x809>((x810*x811)/x812));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x813 = -1;
	uint32_t x814 = 26056U;
	int32_t x815 = INT32_MIN;
	static uint64_t x816 = UINT64_MAX;
	int32_t t164 = 49;

    t164 = (x813>((x814*x815)/x816));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x818 = -1;
	int32_t x820 = 212831;

    t165 = (x817>((x818*x819)/x820));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x821 = 13;
	uint32_t x822 = 0U;
	uint32_t x823 = 1U;
	uint64_t x824 = 52441643599LLU;
	volatile int32_t t166 = 181318;

    t166 = (x821>((x822*x823)/x824));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x825 = 26;
	volatile uint8_t x826 = 2U;
	uint32_t x828 = 350U;
	int32_t t167 = 252377361;

    t167 = (x825>((x826*x827)/x828));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x830 = 10;
	uint8_t x831 = 9U;
	int32_t x832 = -1;
	static int32_t t168 = 16066038;

    t168 = (x829>((x830*x831)/x832));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x837 = -1;
	static uint16_t x839 = 8U;
	uint32_t x840 = 11U;
	int32_t t169 = 1;

    t169 = (x837>((x838*x839)/x840));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x841 = 227U;
	uint8_t x843 = UINT8_MAX;
	int32_t x844 = 281920316;
	int32_t t170 = 0;

    t170 = (x841>((x842*x843)/x844));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x853 = 50;
	static int16_t x854 = -564;
	static volatile int8_t x855 = INT8_MAX;
	volatile uint32_t x856 = 172147U;
	volatile int32_t t171 = -208921;

    t171 = (x853>((x854*x855)/x856));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x857 = 4137696U;
	uint64_t x858 = UINT64_MAX;
	volatile uint16_t x859 = 227U;
	int8_t x860 = -1;
	volatile int32_t t172 = -4;

    t172 = (x857>((x858*x859)/x860));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x861 = -1;
	uint16_t x862 = UINT16_MAX;
	int64_t x863 = -1LL;
	int16_t x864 = -1;
	volatile int32_t t173 = -916;

    t173 = (x861>((x862*x863)/x864));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x869 = 313679LLU;
	uint16_t x870 = UINT16_MAX;
	uint32_t x871 = UINT32_MAX;
	volatile int32_t t174 = -6172230;

    t174 = (x869>((x870*x871)/x872));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x873 = 25507U;
	uint8_t x874 = UINT8_MAX;
	int8_t x876 = -1;
	volatile int32_t t175 = -26796743;

    t175 = (x873>((x874*x875)/x876));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x877 = UINT64_MAX;
	int64_t x878 = INT64_MAX;
	uint64_t x879 = 0LLU;
	int32_t t176 = -3038;

    t176 = (x877>((x878*x879)/x880));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x882 = 51U;
	static int64_t x883 = -380489011706545LL;
	static int32_t t177 = -6073595;

    t177 = (x881>((x882*x883)/x884));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x885 = INT64_MIN;
	int16_t x886 = 0;
	uint16_t x887 = UINT16_MAX;
	volatile int16_t x888 = INT16_MAX;
	int32_t t178 = 999;

    t178 = (x885>((x886*x887)/x888));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x893 = -3937;
	int8_t x894 = INT8_MAX;
	volatile int32_t t179 = 175;

    t179 = (x893>((x894*x895)/x896));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x901 = INT64_MIN;
	static uint32_t x903 = 5U;
	int64_t x904 = INT64_MIN;
	int32_t t180 = -26;

    t180 = (x901>((x902*x903)/x904));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x905 = INT8_MIN;
	uint8_t x907 = UINT8_MAX;
	int16_t x908 = 1410;
	volatile int32_t t181 = -65476;

    t181 = (x905>((x906*x907)/x908));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x917 = -60228537;
	static int64_t x918 = 10LL;
	static uint64_t x919 = 1161014383564LLU;
	volatile int64_t x920 = INT64_MIN;

    t182 = (x917>((x918*x919)/x920));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x921 = 596U;
	int16_t x922 = INT16_MAX;
	uint64_t x924 = 24LLU;
	volatile int32_t t183 = -6465;

    t183 = (x921>((x922*x923)/x924));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x933 = 2;
	int16_t x934 = INT16_MIN;
	int16_t x935 = INT16_MAX;
	volatile int8_t x936 = INT8_MIN;
	int32_t t184 = 0;

    t184 = (x933>((x934*x935)/x936));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x937 = -3;
	static uint8_t x938 = UINT8_MAX;
	int16_t x939 = -21;
	int16_t x940 = 3;
	static volatile int32_t t185 = -2236;

    t185 = (x937>((x938*x939)/x940));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x941 = 79;
	int32_t x942 = -1;
	uint32_t x943 = 54890145U;
	int32_t x944 = INT32_MIN;
	static volatile int32_t t186 = 532871;

    t186 = (x941>((x942*x943)/x944));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x945 = INT32_MAX;
	static volatile uint64_t x948 = UINT64_MAX;
	volatile int32_t t187 = 45699783;

    t187 = (x945>((x946*x947)/x948));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x953 = -518808;
	int8_t x954 = INT8_MAX;
	int8_t x955 = INT8_MIN;
	int8_t x956 = INT8_MIN;
	int32_t t188 = -11;

    t188 = (x953>((x954*x955)/x956));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x961 = UINT64_MAX;
	static uint64_t x962 = UINT64_MAX;
	static volatile int64_t x963 = -62156511335137LL;
	int8_t x964 = INT8_MIN;
	static volatile int32_t t189 = -274236;

    t189 = (x961>((x962*x963)/x964));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x966 = 839U;
	uint8_t x967 = 94U;
	int32_t x968 = 6792;
	int32_t t190 = -432214690;

    t190 = (x965>((x966*x967)/x968));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x973 = UINT64_MAX;
	int64_t x974 = -10LL;

    t191 = (x973>((x974*x975)/x976));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x977 = 9U;
	int16_t x979 = INT16_MIN;
	int32_t x980 = INT32_MIN;
	int32_t t192 = 14378;

    t192 = (x977>((x978*x979)/x980));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x981 = INT8_MIN;
	int16_t x982 = 231;
	volatile uint16_t x983 = 398U;
	uint64_t x984 = UINT64_MAX;
	int32_t t193 = 19;

    t193 = (x981>((x982*x983)/x984));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x986 = -1;
	uint8_t x987 = 25U;
	static uint32_t x988 = 803391U;
	static volatile int32_t t194 = 7;

    t194 = (x985>((x986*x987)/x988));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x994 = 31U;
	static volatile uint16_t x995 = UINT16_MAX;
	int32_t t195 = 79605;

    t195 = (x993>((x994*x995)/x996));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x998 = INT16_MAX;
	volatile uint32_t x999 = 1460511U;
	int16_t x1000 = INT16_MIN;
	volatile int32_t t196 = -6;

    t196 = (x997>((x998*x999)/x1000));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1001 = INT64_MAX;
	volatile uint64_t x1002 = 5662797LLU;
	static int32_t x1003 = INT32_MIN;
	volatile uint64_t x1004 = UINT64_MAX;

    t197 = (x1001>((x1002*x1003)/x1004));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1009 = INT64_MIN;
	int16_t x1010 = INT16_MAX;
	int16_t x1011 = -22;
	int64_t x1012 = INT64_MIN;
	volatile int32_t t198 = -47953;

    t198 = (x1009>((x1010*x1011)/x1012));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1013 = 17U;
	static uint8_t x1014 = UINT8_MAX;
	int8_t x1015 = -1;
	int16_t x1016 = INT16_MAX;

    t199 = (x1013>((x1014*x1015)/x1016));

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

