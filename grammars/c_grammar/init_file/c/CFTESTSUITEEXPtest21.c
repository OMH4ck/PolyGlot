
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

static int32_t x1 = INT32_MAX;
static uint32_t x4 = 34741990U;
static uint8_t x11 = UINT8_MAX;
int16_t x12 = 75;
volatile int32_t t3 = -12202950;
uint8_t x24 = UINT8_MAX;
volatile uint64_t x25 = UINT64_MAX;
volatile int64_t x44 = -1LL;
volatile uint64_t x46 = 256473374310051LLU;
static uint32_t x47 = 32062U;
static uint8_t x58 = 1U;
int8_t x60 = INT8_MIN;
static uint16_t x62 = 5U;
static uint16_t x64 = 1U;
int32_t t10 = 0;
volatile int32_t t11 = 94;
int32_t x70 = -1;
static int64_t x77 = -1LL;
static int8_t x78 = 1;
uint8_t x80 = UINT8_MAX;
static volatile int32_t t13 = -3514;
int16_t x91 = INT16_MIN;
int16_t x92 = INT16_MAX;
volatile int16_t x93 = INT16_MAX;
int32_t x105 = INT32_MAX;
int16_t x107 = -1;
volatile int8_t x108 = INT8_MIN;
volatile int32_t t19 = 215632395;
static int16_t x114 = 1;
uint8_t x115 = UINT8_MAX;
int32_t x122 = -76;
int32_t x129 = -2798;
int16_t x132 = 0;
int8_t x141 = INT8_MAX;
uint64_t x147 = UINT64_MAX;
uint16_t x159 = UINT16_MAX;
int16_t x165 = INT16_MAX;
volatile int8_t x168 = -11;
int16_t x172 = -3272;
static int32_t t31 = -2089545;
uint16_t x179 = 8970U;
static volatile int16_t x180 = -1;
static volatile int32_t t32 = -1;
int16_t x184 = INT16_MAX;
int32_t t34 = 337225;
int8_t x192 = 8;
static volatile int32_t t35 = -3157976;
int32_t t36 = 150;
int32_t t37 = 45;
volatile int32_t x201 = -1;
volatile int32_t x212 = INT32_MIN;
int16_t x215 = -9;
int16_t x227 = INT16_MIN;
int64_t x228 = 1LL;
int16_t x237 = -1;
volatile int32_t x241 = INT32_MIN;
int16_t x243 = INT16_MIN;
static volatile int32_t t45 = -1;
int32_t t47 = 9216;
static volatile int8_t x276 = INT8_MAX;
static volatile int64_t x278 = INT64_MAX;
volatile int32_t x279 = -1;
volatile int32_t t53 = 108023;
int16_t x287 = 481;
uint8_t x299 = UINT8_MAX;
static uint8_t x303 = 1U;
uint16_t x312 = 91U;
int8_t x318 = INT8_MIN;
uint32_t x319 = 22686U;
int8_t x329 = -1;
volatile int32_t x332 = 0;
static volatile int32_t t64 = -5178;
static uint8_t x346 = 1U;
volatile int32_t t65 = 160;
uint64_t x354 = 2533180917057479700LLU;
uint16_t x357 = 802U;
volatile int32_t x365 = 397;
static volatile uint16_t x369 = UINT16_MAX;
uint16_t x370 = 25U;
int8_t x372 = 48;
int32_t t70 = 60559;
int64_t x373 = INT64_MAX;
int64_t x379 = INT64_MIN;
volatile int32_t t73 = 184;
int8_t x386 = INT8_MIN;
uint8_t x387 = 31U;
volatile int32_t t74 = 0;
uint32_t x396 = 454U;
int16_t x415 = INT16_MIN;
int64_t x421 = -30729481LL;
static uint64_t x429 = 112448663372017185LLU;
int8_t x430 = INT8_MAX;
int64_t x432 = INT64_MAX;
int16_t x434 = -1;
volatile uint64_t x436 = 617021577570708394LLU;
volatile int32_t t83 = -329128476;
static int64_t x437 = 803731942246140LL;
static uint8_t x455 = 1U;
volatile int32_t t88 = 60;
volatile int64_t x463 = -1LL;
int32_t x469 = 1905201;
int64_t x475 = INT64_MAX;
int32_t t93 = 1512562;
uint64_t x489 = 21435LLU;
volatile int32_t x491 = INT32_MIN;
int16_t x497 = -1;
static int8_t x499 = -18;
int8_t x501 = 60;
volatile uint32_t x502 = 1U;
static volatile int8_t x504 = INT8_MIN;
int8_t x523 = INT8_MIN;
volatile int32_t t100 = 266253694;
uint16_t x532 = 2692U;
static volatile int64_t x533 = INT64_MAX;
volatile int32_t t103 = 9070;
static int16_t x542 = INT16_MIN;
volatile int32_t t106 = 3;
int8_t x549 = INT8_MAX;
int32_t x556 = INT32_MIN;
int32_t t109 = -104;
int16_t x562 = INT16_MAX;
static int64_t x566 = -1LL;
int32_t x569 = INT32_MIN;
static int16_t x576 = INT16_MIN;
static int16_t x578 = 1;
uint16_t x583 = UINT16_MAX;
static int16_t x584 = INT16_MAX;
uint16_t x588 = 422U;
static int16_t x594 = 3;
int32_t x595 = INT32_MIN;
uint64_t x616 = UINT64_MAX;
int32_t t123 = 10;
int8_t x631 = INT8_MAX;
static uint32_t x632 = UINT32_MAX;
static int64_t x641 = -1227LL;
int64_t x653 = 17LL;
volatile uint32_t x660 = 77474591U;
int64_t x662 = -607799497LL;
int64_t x665 = INT64_MIN;
int32_t t132 = -49;
uint16_t x673 = 28357U;
uint16_t x674 = UINT16_MAX;
int8_t x682 = INT8_MAX;
int64_t x697 = -1LL;
uint32_t x698 = 62U;
volatile int8_t x709 = INT8_MAX;
static int8_t x712 = 1;
int16_t x727 = -1;
int16_t x728 = INT16_MIN;
int16_t x734 = -1;
int64_t x740 = -8063781540LL;
int32_t x744 = -13639391;
int16_t x749 = INT16_MIN;
uint16_t x750 = UINT16_MAX;
uint16_t x751 = 458U;
static uint32_t x754 = 828279U;
volatile uint16_t x759 = UINT16_MAX;
static volatile int16_t x760 = INT16_MAX;
volatile int32_t t151 = -5624411;
int16_t x761 = INT16_MAX;
uint32_t x773 = 125964U;
volatile int32_t t155 = 10125131;
int64_t x822 = INT64_MIN;
uint64_t x824 = UINT64_MAX;
volatile int32_t t164 = 45;
uint64_t x859 = UINT64_MAX;
int16_t x865 = -530;
int64_t x866 = -1LL;
int16_t x868 = -1;
int8_t x869 = 6;
int64_t x873 = -1LL;
uint8_t x879 = UINT8_MAX;
int32_t x881 = -1;
int16_t x896 = -7;
int32_t x897 = INT32_MIN;
static volatile int64_t x908 = INT64_MIN;
int64_t x917 = 5341LL;
static int32_t x918 = INT32_MAX;
int8_t x922 = INT8_MIN;
static volatile int32_t t185 = -873560;
int32_t x927 = INT32_MIN;
int32_t t188 = 3;
int16_t x942 = -7;
uint32_t x946 = 15910348U;
volatile int32_t t191 = 394092;
uint32_t x957 = UINT32_MAX;
static volatile uint64_t x958 = UINT64_MAX;
volatile int32_t t193 = 1;
int16_t x962 = INT16_MIN;
volatile int32_t t194 = 1;
int32_t x967 = INT32_MAX;
volatile int32_t t195 = 104004;
uint32_t x973 = UINT32_MAX;
static int8_t x982 = -13;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	uint32_t x3 = 474U;
	volatile int32_t t0 = -10;

    t0 = (x1!=((x2+x3)-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = 22516825;
	static int32_t x10 = INT32_MIN;
	volatile int32_t t1 = -416;

    t1 = (x9!=((x10+x11)-x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x13 = 67883U;
	uint64_t x14 = UINT64_MAX;
	uint16_t x15 = 8195U;
	int32_t x16 = -1;
	volatile int32_t t2 = 74243;

    t2 = (x13!=((x14+x15)-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = -394831281;
	volatile int16_t x18 = INT16_MIN;
	int64_t x19 = -1LL;
	int64_t x20 = -1LL;

    t3 = (x17!=((x18+x19)-x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -1;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	int32_t t4 = 1280828;

    t4 = (x21!=((x22+x23)-x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x26 = INT32_MIN;
	volatile uint64_t x27 = UINT64_MAX;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = -775626899;

    t5 = (x25!=((x26+x27)-x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = INT64_MAX;
	int16_t x34 = 1152;
	int8_t x35 = 13;
	uint32_t x36 = 55U;
	volatile int32_t t6 = -12;

    t6 = (x33!=((x34+x35)-x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x41 = 3094802241LLU;
	static volatile int8_t x42 = INT8_MAX;
	int32_t x43 = INT32_MIN;
	volatile int32_t t7 = 753715416;

    t7 = (x41!=((x42+x43)-x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = 1151705;
	static int16_t x48 = 6;
	volatile int32_t t8 = -8116290;

    t8 = (x45!=((x46+x47)-x48));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x57 = INT16_MAX;
	uint64_t x59 = 8731371LLU;
	int32_t t9 = 93;

    t9 = (x57!=((x58+x59)-x60));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x61 = 1520531297892264682LL;
	int32_t x63 = INT32_MIN;

    t10 = (x61!=((x62+x63)-x64));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x65 = 24U;
	int32_t x66 = 343919;
	volatile uint64_t x67 = 16LLU;
	uint8_t x68 = UINT8_MAX;

    t11 = (x65!=((x66+x67)-x68));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x69 = INT32_MAX;
	int32_t x71 = 1;
	static uint64_t x72 = UINT64_MAX;
	int32_t t12 = -1;

    t12 = (x69!=((x70+x71)-x72));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x79 = 4309070;

    t13 = (x77!=((x78+x79)-x80));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x85 = 339550687004690049LL;
	volatile int16_t x86 = INT16_MIN;
	volatile int64_t x87 = INT64_MAX;
	int64_t x88 = -3489LL;
	volatile int32_t t14 = 268326703;

    t14 = (x85!=((x86+x87)-x88));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	volatile int32_t t15 = -2786045;

    t15 = (x89!=((x90+x91)-x92));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x94 = 1002788842LLU;
	int32_t x95 = 19064603;
	volatile int32_t x96 = 38649816;
	volatile int32_t t16 = 247;

    t16 = (x93!=((x94+x95)-x96));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x97 = -14144LL;
	int8_t x98 = INT8_MAX;
	volatile uint8_t x99 = 41U;
	int8_t x100 = -1;
	volatile int32_t t17 = 188125319;

    t17 = (x97!=((x98+x99)-x100));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x106 = 12;
	int32_t t18 = 10207140;

    t18 = (x105!=((x106+x107)-x108));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x109 = INT8_MIN;
	static int8_t x110 = -43;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = -61682117707LL;

    t19 = (x109!=((x110+x111)-x112));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x113 = INT16_MIN;
	uint16_t x116 = 6U;
	int32_t t20 = 3940;

    t20 = (x113!=((x114+x115)-x116));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x117 = INT64_MIN;
	static volatile uint16_t x118 = UINT16_MAX;
	static uint16_t x119 = UINT16_MAX;
	static uint8_t x120 = 0U;
	int32_t t21 = 37;

    t21 = (x117!=((x118+x119)-x120));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x121 = -1LL;
	volatile uint64_t x123 = 7260LLU;
	volatile int8_t x124 = INT8_MIN;
	static volatile int32_t t22 = 13704616;

    t22 = (x121!=((x122+x123)-x124));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x125 = 1LL;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = -56;
	int64_t x128 = 6685525213LL;
	int32_t t23 = 441;

    t23 = (x125!=((x126+x127)-x128));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x130 = 1U;
	static uint64_t x131 = 24678LLU;
	int32_t t24 = 130589;

    t24 = (x129!=((x130+x131)-x132));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x137 = 16;
	int16_t x138 = INT16_MIN;
	static volatile uint8_t x139 = 7U;
	uint64_t x140 = UINT64_MAX;
	static volatile int32_t t25 = 597000030;

    t25 = (x137!=((x138+x139)-x140));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x142 = INT8_MIN;
	static int8_t x143 = INT8_MIN;
	static uint8_t x144 = UINT8_MAX;
	int32_t t26 = -7142652;

    t26 = (x141!=((x142+x143)-x144));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x145 = UINT8_MAX;
	static uint32_t x146 = 79025U;
	static uint16_t x148 = 18962U;
	volatile int32_t t27 = 37230830;

    t27 = (x145!=((x146+x147)-x148));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x153 = 0;
	volatile int32_t x154 = INT32_MAX;
	uint64_t x155 = 5868LLU;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t28 = 3;

    t28 = (x153!=((x154+x155)-x156));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x157 = 186690LL;
	int32_t x158 = 1;
	int16_t x160 = -23;
	static volatile int32_t t29 = 866;

    t29 = (x157!=((x158+x159)-x160));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x166 = 3LL;
	volatile int64_t x167 = -38LL;
	int32_t t30 = 11;

    t30 = (x165!=((x166+x167)-x168));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x169 = -284251144049724690LL;
	int8_t x170 = 0;
	uint8_t x171 = 9U;

    t31 = (x169!=((x170+x171)-x172));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x177 = INT8_MAX;
	int8_t x178 = INT8_MAX;

    t32 = (x177!=((x178+x179)-x180));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x181 = 1411U;
	static volatile uint64_t x182 = UINT64_MAX;
	int64_t x183 = INT64_MIN;
	volatile int32_t t33 = -1;

    t33 = (x181!=((x182+x183)-x184));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x185 = 15;
	uint16_t x186 = UINT16_MAX;
	volatile uint32_t x187 = UINT32_MAX;
	static uint32_t x188 = UINT32_MAX;

    t34 = (x185!=((x186+x187)-x188));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x189 = 6U;
	int32_t x190 = -10;
	uint32_t x191 = 39U;

    t35 = (x189!=((x190+x191)-x192));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x193 = INT16_MIN;
	uint32_t x194 = UINT32_MAX;
	int8_t x195 = INT8_MAX;
	volatile int8_t x196 = -1;

    t36 = (x193!=((x194+x195)-x196));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x197 = 11327415304471LL;
	volatile uint32_t x198 = UINT32_MAX;
	int8_t x199 = -1;
	int16_t x200 = -1;

    t37 = (x197!=((x198+x199)-x200));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x202 = UINT32_MAX;
	int8_t x203 = -1;
	uint8_t x204 = 0U;
	int32_t t38 = 715;

    t38 = (x201!=((x202+x203)-x204));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x209 = 12636;
	static volatile int32_t x210 = -31649544;
	volatile int32_t x211 = -2076;
	int32_t t39 = -9;

    t39 = (x209!=((x210+x211)-x212));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x213 = 9055096U;
	volatile uint8_t x214 = 57U;
	int64_t x216 = 128149704655LL;
	static int32_t t40 = -2;

    t40 = (x213!=((x214+x215)-x216));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x225 = INT64_MIN;
	static int8_t x226 = -1;
	static int32_t t41 = -410;

    t41 = (x225!=((x226+x227)-x228));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x229 = 3U;
	uint8_t x230 = 119U;
	int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t42 = -581;

    t42 = (x229!=((x230+x231)-x232));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x233 = 14941865234LLU;
	static uint64_t x234 = 343633489640351535LLU;
	int32_t x235 = 105;
	int16_t x236 = INT16_MAX;
	int32_t t43 = -96;

    t43 = (x233!=((x234+x235)-x236));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MAX;
	volatile uint32_t x240 = 374U;
	volatile int32_t t44 = 4;

    t44 = (x237!=((x238+x239)-x240));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x242 = -1;
	int64_t x244 = INT64_MIN;

    t45 = (x241!=((x242+x243)-x244));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x245 = 10509LL;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = 66;
	volatile uint64_t x248 = 209211335427LLU;
	volatile int32_t t46 = 0;

    t46 = (x245!=((x246+x247)-x248));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x249 = -6;
	uint32_t x250 = UINT32_MAX;
	int16_t x251 = -97;
	static int32_t x252 = 1;

    t47 = (x249!=((x250+x251)-x252));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MAX;
	int32_t x255 = INT32_MIN;
	volatile int32_t x256 = INT32_MIN;
	static volatile int32_t t48 = 6611936;

    t48 = (x253!=((x254+x255)-x256));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x261 = 5409U;
	int8_t x262 = -1;
	volatile uint8_t x263 = 8U;
	volatile uint16_t x264 = 105U;
	int32_t t49 = -226;

    t49 = (x261!=((x262+x263)-x264));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x265 = INT32_MAX;
	int64_t x266 = -239126616462LL;
	int8_t x267 = -5;
	int64_t x268 = -1LL;
	volatile int32_t t50 = 182;

    t50 = (x265!=((x266+x267)-x268));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x269 = 11;
	int32_t x270 = 152;
	uint16_t x271 = 2U;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t51 = 29;

    t51 = (x269!=((x270+x271)-x272));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x273 = -1LL;
	static int16_t x274 = INT16_MAX;
	static volatile uint16_t x275 = 143U;
	int32_t t52 = 73590138;

    t52 = (x273!=((x274+x275)-x276));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x277 = 9;
	static volatile int64_t x280 = 5624LL;

    t53 = (x277!=((x278+x279)-x280));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x281 = -73;
	static int64_t x282 = INT64_MIN;
	uint32_t x283 = 391872U;
	int64_t x284 = INT64_MIN;
	int32_t t54 = 367559;

    t54 = (x281!=((x282+x283)-x284));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x285 = 1;
	int16_t x286 = -163;
	uint8_t x288 = 9U;
	static int32_t t55 = 56;

    t55 = (x285!=((x286+x287)-x288));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x289 = INT16_MIN;
	uint64_t x290 = UINT64_MAX;
	volatile int32_t x291 = -154693;
	int8_t x292 = INT8_MAX;
	int32_t t56 = -84656;

    t56 = (x289!=((x290+x291)-x292));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x293 = UINT8_MAX;
	volatile int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	static int16_t x296 = 110;
	static int32_t t57 = 45744;

    t57 = (x293!=((x294+x295)-x296));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x297 = -1;
	int64_t x298 = -5084150876844374LL;
	volatile uint64_t x300 = UINT64_MAX;
	volatile int32_t t58 = -61914472;

    t58 = (x297!=((x298+x299)-x300));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x301 = UINT64_MAX;
	uint8_t x302 = 2U;
	int8_t x304 = -52;
	static int32_t t59 = -1467771;

    t59 = (x301!=((x302+x303)-x304));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = -1;
	int16_t x311 = INT16_MIN;
	volatile int32_t t60 = -17671534;

    t60 = (x309!=((x310+x311)-x312));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x317 = INT32_MIN;
	volatile int64_t x320 = -95LL;
	volatile int32_t t61 = 922504309;

    t61 = (x317!=((x318+x319)-x320));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x321 = 0U;
	int8_t x322 = INT8_MAX;
	int16_t x323 = INT16_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t62 = -290;

    t62 = (x321!=((x322+x323)-x324));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x330 = 10U;
	volatile int8_t x331 = INT8_MIN;
	int32_t t63 = 751111880;

    t63 = (x329!=((x330+x331)-x332));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x337 = -1;
	uint64_t x338 = 891LLU;
	int8_t x339 = 7;
	static volatile int64_t x340 = INT64_MAX;

    t64 = (x337!=((x338+x339)-x340));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x345 = INT16_MIN;
	int32_t x347 = -223900;
	uint64_t x348 = UINT64_MAX;

    t65 = (x345!=((x346+x347)-x348));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x349 = 4345U;
	static uint32_t x350 = 109U;
	uint8_t x351 = UINT8_MAX;
	static volatile uint64_t x352 = UINT64_MAX;
	int32_t t66 = 16466681;

    t66 = (x349!=((x350+x351)-x352));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x353 = INT64_MIN;
	int8_t x355 = INT8_MIN;
	volatile int8_t x356 = -1;
	volatile int32_t t67 = 5;

    t67 = (x353!=((x354+x355)-x356));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x358 = INT8_MIN;
	int64_t x359 = INT64_MAX;
	uint8_t x360 = UINT8_MAX;
	int32_t t68 = 7016;

    t68 = (x357!=((x358+x359)-x360));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MAX;
	int16_t x368 = -1;
	static int32_t t69 = -8369;

    t69 = (x365!=((x366+x367)-x368));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x371 = INT16_MIN;

    t70 = (x369!=((x370+x371)-x372));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x374 = 15;
	uint8_t x375 = 12U;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t71 = -1;

    t71 = (x373!=((x374+x375)-x376));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x377 = -1LL;
	volatile uint16_t x378 = 53U;
	int64_t x380 = -1LL;
	int32_t t72 = -1;

    t72 = (x377!=((x378+x379)-x380));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x381 = INT32_MAX;
	static uint16_t x382 = 8836U;
	uint32_t x383 = 168028260U;
	volatile int16_t x384 = -2;

    t73 = (x381!=((x382+x383)-x384));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x385 = INT8_MIN;
	volatile uint64_t x388 = UINT64_MAX;

    t74 = (x385!=((x386+x387)-x388));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x389 = INT32_MIN;
	int16_t x390 = -1534;
	int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	static int32_t t75 = 19;

    t75 = (x389!=((x390+x391)-x392));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x393 = INT8_MIN;
	uint8_t x394 = UINT8_MAX;
	int16_t x395 = 0;
	int32_t t76 = 756730;

    t76 = (x393!=((x394+x395)-x396));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x401 = INT16_MIN;
	uint64_t x402 = 240240LLU;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MIN;
	volatile int32_t t77 = -5899;

    t77 = (x401!=((x402+x403)-x404));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x405 = 18471280LL;
	int32_t x406 = 12;
	int64_t x407 = -1LL;
	int8_t x408 = INT8_MIN;
	int32_t t78 = -848275522;

    t78 = (x405!=((x406+x407)-x408));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x409 = -1;
	uint16_t x410 = 9U;
	int16_t x411 = -1;
	int32_t x412 = INT32_MAX;
	static volatile int32_t t79 = 347;

    t79 = (x409!=((x410+x411)-x412));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x413 = INT64_MIN;
	static int32_t x414 = INT32_MAX;
	static int8_t x416 = INT8_MIN;
	int32_t t80 = 4;

    t80 = (x413!=((x414+x415)-x416));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x422 = -1LL;
	int32_t x423 = INT32_MAX;
	uint32_t x424 = 92973378U;
	volatile int32_t t81 = -53948;

    t81 = (x421!=((x422+x423)-x424));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x431 = INT8_MAX;
	int32_t t82 = -1;

    t82 = (x429!=((x430+x431)-x432));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x433 = -1LL;
	int16_t x435 = -1;

    t83 = (x433!=((x434+x435)-x436));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x438 = 1211;
	uint32_t x439 = 5559U;
	volatile int32_t x440 = INT32_MIN;
	int32_t t84 = 1244;

    t84 = (x437!=((x438+x439)-x440));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x441 = INT16_MIN;
	int16_t x442 = 1217;
	int16_t x443 = INT16_MIN;
	int16_t x444 = -1;
	int32_t t85 = 14;

    t85 = (x441!=((x442+x443)-x444));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x445 = UINT32_MAX;
	static volatile int16_t x446 = -1;
	int64_t x447 = 411LL;
	static uint64_t x448 = 157519722035LLU;
	int32_t t86 = -214;

    t86 = (x445!=((x446+x447)-x448));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x453 = 15707U;
	static uint8_t x454 = UINT8_MAX;
	int8_t x456 = -2;
	volatile int32_t t87 = -47856;

    t87 = (x453!=((x454+x455)-x456));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x457 = INT16_MAX;
	int16_t x458 = INT16_MAX;
	int64_t x459 = INT64_MIN;
	static int16_t x460 = INT16_MAX;

    t88 = (x457!=((x458+x459)-x460));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x461 = 248;
	volatile int16_t x462 = 20;
	int16_t x464 = INT16_MIN;
	volatile int32_t t89 = -243887;

    t89 = (x461!=((x462+x463)-x464));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x465 = UINT16_MAX;
	int32_t x466 = INT32_MAX;
	uint32_t x467 = 0U;
	uint16_t x468 = 22U;
	int32_t t90 = 11980646;

    t90 = (x465!=((x466+x467)-x468));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x470 = -1;
	static uint64_t x471 = 2694266069158214LLU;
	static volatile int8_t x472 = INT8_MIN;
	volatile int32_t t91 = -5894;

    t91 = (x469!=((x470+x471)-x472));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x473 = INT8_MAX;
	int32_t x474 = INT32_MIN;
	volatile int16_t x476 = 14;
	volatile int32_t t92 = 1655763;

    t92 = (x473!=((x474+x475)-x476));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x477 = 26U;
	static int32_t x478 = INT32_MAX;
	static int32_t x479 = INT32_MIN;
	static int8_t x480 = -2;

    t93 = (x477!=((x478+x479)-x480));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x485 = 27;
	uint32_t x486 = 1576636722U;
	volatile uint64_t x487 = 2100879766543LLU;
	int32_t x488 = INT32_MIN;
	volatile int32_t t94 = 248;

    t94 = (x485!=((x486+x487)-x488));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x490 = 6LLU;
	uint64_t x492 = 146539606971372LLU;
	volatile int32_t t95 = 76492;

    t95 = (x489!=((x490+x491)-x492));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x498 = -1;
	static int16_t x500 = -1749;
	volatile int32_t t96 = -823454;

    t96 = (x497!=((x498+x499)-x500));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x503 = UINT16_MAX;
	volatile int32_t t97 = 7649563;

    t97 = (x501!=((x502+x503)-x504));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x505 = -14;
	int64_t x506 = -65492346946552849LL;
	int64_t x507 = 12020313LL;
	static uint16_t x508 = UINT16_MAX;
	int32_t t98 = 1012769802;

    t98 = (x505!=((x506+x507)-x508));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x517 = INT64_MAX;
	int8_t x518 = -8;
	static int8_t x519 = 52;
	int16_t x520 = INT16_MAX;
	static volatile int32_t t99 = -1;

    t99 = (x517!=((x518+x519)-x520));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x521 = UINT8_MAX;
	uint16_t x522 = 377U;
	static uint16_t x524 = UINT16_MAX;

    t100 = (x521!=((x522+x523)-x524));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x525 = 31;
	static volatile int32_t x526 = INT32_MIN;
	static int64_t x527 = -1LL;
	static int8_t x528 = 11;
	int32_t t101 = 0;

    t101 = (x525!=((x526+x527)-x528));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x529 = -1;
	static int32_t x530 = 734114681;
	uint8_t x531 = 1U;
	int32_t t102 = -218820;

    t102 = (x529!=((x530+x531)-x532));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint64_t x534 = 96275126058493886LLU;
	volatile int8_t x535 = INT8_MIN;
	int8_t x536 = -1;

    t103 = (x533!=((x534+x535)-x536));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x537 = 77029423LLU;
	static uint8_t x538 = UINT8_MAX;
	static uint64_t x539 = UINT64_MAX;
	static int16_t x540 = INT16_MAX;
	volatile int32_t t104 = -91;

    t104 = (x537!=((x538+x539)-x540));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x541 = INT32_MAX;
	int16_t x543 = -1791;
	int64_t x544 = 1444641LL;
	volatile int32_t t105 = 24363286;

    t105 = (x541!=((x542+x543)-x544));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x545 = 3904U;
	static int64_t x546 = INT64_MIN;
	int64_t x547 = INT64_MAX;
	uint64_t x548 = 10443115LLU;

    t106 = (x545!=((x546+x547)-x548));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x550 = INT16_MIN;
	int32_t x551 = 445562271;
	int64_t x552 = INT64_MAX;
	static volatile int32_t t107 = -118;

    t107 = (x549!=((x550+x551)-x552));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x554 = -1LL;
	uint64_t x555 = 120808267440LLU;
	int32_t t108 = -23070659;

    t108 = (x553!=((x554+x555)-x556));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x557 = -1LL;
	static int64_t x558 = INT64_MIN;
	uint8_t x559 = 16U;
	static int64_t x560 = -190604826130017785LL;

    t109 = (x557!=((x558+x559)-x560));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x561 = INT8_MIN;
	int32_t x563 = INT32_MIN;
	uint8_t x564 = UINT8_MAX;
	int32_t t110 = -892772223;

    t110 = (x561!=((x562+x563)-x564));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x565 = -1LL;
	int8_t x567 = INT8_MIN;
	int16_t x568 = INT16_MAX;
	int32_t t111 = -1;

    t111 = (x565!=((x566+x567)-x568));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x570 = 0;
	int16_t x571 = INT16_MIN;
	volatile int8_t x572 = -1;
	int32_t t112 = -5;

    t112 = (x569!=((x570+x571)-x572));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x573 = 1;
	int16_t x574 = 1187;
	static uint64_t x575 = 22803509129431355LLU;
	int32_t t113 = 3837805;

    t113 = (x573!=((x574+x575)-x576));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x577 = INT64_MIN;
	int16_t x579 = INT16_MIN;
	volatile int32_t x580 = 16524500;
	volatile int32_t t114 = -103083584;

    t114 = (x577!=((x578+x579)-x580));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x581 = -1;
	int16_t x582 = -12718;
	volatile int32_t t115 = 13;

    t115 = (x581!=((x582+x583)-x584));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x585 = 158220607U;
	int32_t x586 = -598543287;
	static int16_t x587 = INT16_MIN;
	volatile int32_t t116 = 68;

    t116 = (x585!=((x586+x587)-x588));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x593 = INT64_MAX;
	int32_t x596 = INT32_MIN;
	int32_t t117 = -163752;

    t117 = (x593!=((x594+x595)-x596));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x597 = 100U;
	volatile int8_t x598 = INT8_MAX;
	static int32_t x599 = 350038;
	uint64_t x600 = 1087148724114416178LLU;
	volatile int32_t t118 = 0;

    t118 = (x597!=((x598+x599)-x600));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x605 = 11U;
	int16_t x606 = -1;
	int32_t x607 = 7;
	int8_t x608 = INT8_MIN;
	volatile int32_t t119 = -1536;

    t119 = (x605!=((x606+x607)-x608));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x613 = 43;
	static int16_t x614 = INT16_MAX;
	int16_t x615 = -1;
	int32_t t120 = -1441583;

    t120 = (x613!=((x614+x615)-x616));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x617 = -1LL;
	int16_t x618 = -11081;
	static int16_t x619 = INT16_MIN;
	uint32_t x620 = 0U;
	static int32_t t121 = 1271;

    t121 = (x617!=((x618+x619)-x620));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x621 = 1102486289420387LLU;
	int16_t x622 = INT16_MIN;
	volatile int16_t x623 = INT16_MIN;
	int32_t x624 = 0;
	volatile int32_t t122 = 1;

    t122 = (x621!=((x622+x623)-x624));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x625 = -290186452745711LL;
	static int8_t x626 = INT8_MIN;
	volatile int16_t x627 = 10;
	volatile uint16_t x628 = 865U;

    t123 = (x625!=((x626+x627)-x628));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x629 = INT8_MIN;
	static int32_t x630 = -164243;
	volatile int32_t t124 = 93;

    t124 = (x629!=((x630+x631)-x632));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x637 = INT8_MAX;
	volatile uint16_t x638 = 19844U;
	uint32_t x639 = 119132U;
	int16_t x640 = INT16_MIN;
	int32_t t125 = 122180343;

    t125 = (x637!=((x638+x639)-x640));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x642 = -1;
	static int16_t x643 = INT16_MIN;
	int64_t x644 = 59LL;
	static volatile int32_t t126 = -5929;

    t126 = (x641!=((x642+x643)-x644));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x645 = INT32_MIN;
	static int64_t x646 = -3667966622648260737LL;
	uint64_t x647 = UINT64_MAX;
	volatile uint8_t x648 = 4U;
	static int32_t t127 = 175992271;

    t127 = (x645!=((x646+x647)-x648));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x649 = INT32_MAX;
	int8_t x650 = INT8_MIN;
	static int16_t x651 = -1;
	int8_t x652 = INT8_MIN;
	int32_t t128 = -100804373;

    t128 = (x649!=((x650+x651)-x652));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x654 = -649953346LL;
	int16_t x655 = -224;
	int16_t x656 = -1;
	volatile int32_t t129 = 153559822;

    t129 = (x653!=((x654+x655)-x656));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x657 = 170U;
	int64_t x658 = 517135398LL;
	int16_t x659 = INT16_MIN;
	volatile int32_t t130 = -1393;

    t130 = (x657!=((x658+x659)-x660));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x661 = INT64_MIN;
	volatile int32_t x663 = INT32_MIN;
	int64_t x664 = INT64_MIN;
	int32_t t131 = -1;

    t131 = (x661!=((x662+x663)-x664));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint16_t x666 = 16U;
	static int8_t x667 = -1;
	uint64_t x668 = 284LLU;

    t132 = (x665!=((x666+x667)-x668));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x675 = INT64_MIN;
	volatile int32_t x676 = INT32_MIN;
	volatile int32_t t133 = 455;

    t133 = (x673!=((x674+x675)-x676));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x677 = UINT8_MAX;
	uint16_t x678 = 10U;
	uint8_t x679 = 3U;
	int32_t x680 = 917915828;
	static int32_t t134 = 6731;

    t134 = (x677!=((x678+x679)-x680));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x681 = 0;
	uint32_t x683 = 78922U;
	uint64_t x684 = 11855685896LLU;
	static int32_t t135 = -2699;

    t135 = (x681!=((x682+x683)-x684));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x685 = INT16_MIN;
	static int8_t x686 = -3;
	volatile int16_t x687 = INT16_MAX;
	int32_t x688 = 29280986;
	static volatile int32_t t136 = -4132147;

    t136 = (x685!=((x686+x687)-x688));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x689 = 49U;
	static volatile int32_t x690 = 21;
	static int8_t x691 = -1;
	volatile uint32_t x692 = 115383U;
	int32_t t137 = 163528770;

    t137 = (x689!=((x690+x691)-x692));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x693 = 461U;
	int32_t x694 = -1;
	static volatile int64_t x695 = INT64_MAX;
	volatile int8_t x696 = -1;
	static volatile int32_t t138 = -542;

    t138 = (x693!=((x694+x695)-x696));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x699 = 10U;
	volatile int8_t x700 = INT8_MIN;
	volatile int32_t t139 = -162577;

    t139 = (x697!=((x698+x699)-x700));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x701 = INT16_MIN;
	static volatile int64_t x702 = -1526867208074541LL;
	uint64_t x703 = UINT64_MAX;
	int64_t x704 = INT64_MIN;
	int32_t t140 = 15996;

    t140 = (x701!=((x702+x703)-x704));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x705 = INT16_MIN;
	int64_t x706 = -1LL;
	uint64_t x707 = UINT64_MAX;
	int8_t x708 = 0;
	volatile int32_t t141 = -811510162;

    t141 = (x705!=((x706+x707)-x708));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x710 = INT32_MIN;
	static uint32_t x711 = UINT32_MAX;
	volatile int32_t t142 = -1928462;

    t142 = (x709!=((x710+x711)-x712));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x713 = UINT8_MAX;
	int16_t x714 = 99;
	int64_t x715 = -1LL;
	int16_t x716 = -1;
	volatile int32_t t143 = -444079410;

    t143 = (x713!=((x714+x715)-x716));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x721 = INT16_MIN;
	volatile uint64_t x722 = UINT64_MAX;
	int8_t x723 = INT8_MIN;
	uint8_t x724 = UINT8_MAX;
	static int32_t t144 = -1;

    t144 = (x721!=((x722+x723)-x724));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x725 = 2;
	static uint32_t x726 = 239U;
	volatile int32_t t145 = 371519223;

    t145 = (x725!=((x726+x727)-x728));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x733 = INT32_MAX;
	volatile uint64_t x735 = UINT64_MAX;
	int8_t x736 = -1;
	int32_t t146 = 121839;

    t146 = (x733!=((x734+x735)-x736));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x737 = INT8_MIN;
	static uint16_t x738 = 2967U;
	volatile int16_t x739 = -1;
	volatile int32_t t147 = -1526;

    t147 = (x737!=((x738+x739)-x740));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x741 = INT32_MIN;
	uint16_t x742 = 117U;
	int8_t x743 = -3;
	static int32_t t148 = 37;

    t148 = (x741!=((x742+x743)-x744));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x752 = -1;
	volatile int32_t t149 = -8904139;

    t149 = (x749!=((x750+x751)-x752));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x753 = 2;
	int8_t x755 = INT8_MIN;
	int16_t x756 = INT16_MIN;
	static int32_t t150 = 30;

    t150 = (x753!=((x754+x755)-x756));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x757 = UINT32_MAX;
	uint16_t x758 = UINT16_MAX;

    t151 = (x757!=((x758+x759)-x760));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x762 = INT16_MIN;
	uint64_t x763 = 8333049LLU;
	int16_t x764 = INT16_MIN;
	int32_t t152 = -46;

    t152 = (x761!=((x762+x763)-x764));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x765 = 14;
	static uint32_t x766 = 398083116U;
	int32_t x767 = -1;
	static int64_t x768 = -1LL;
	volatile int32_t t153 = -599;

    t153 = (x765!=((x766+x767)-x768));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x774 = 178LL;
	static uint32_t x775 = 139379U;
	uint64_t x776 = 2244LLU;
	volatile int32_t t154 = -113;

    t154 = (x773!=((x774+x775)-x776));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x777 = -1;
	int32_t x778 = INT32_MIN;
	uint64_t x779 = UINT64_MAX;
	int64_t x780 = -1LL;

    t155 = (x777!=((x778+x779)-x780));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x781 = -32503093;
	int16_t x782 = 2943;
	int16_t x783 = 2;
	int8_t x784 = INT8_MIN;
	int32_t t156 = -171943;

    t156 = (x781!=((x782+x783)-x784));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x785 = -302530740420452LL;
	volatile int64_t x786 = -1LL;
	uint64_t x787 = 459353054607LLU;
	int64_t x788 = INT64_MAX;
	static int32_t t157 = 32900965;

    t157 = (x785!=((x786+x787)-x788));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x789 = 3574958828864103257LLU;
	volatile int64_t x790 = -126301364LL;
	int16_t x791 = INT16_MAX;
	int32_t x792 = 0;
	volatile int32_t t158 = 91;

    t158 = (x789!=((x790+x791)-x792));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x793 = -1;
	int16_t x794 = -1;
	volatile uint16_t x795 = 33U;
	uint64_t x796 = 32092015LLU;
	int32_t t159 = 603;

    t159 = (x793!=((x794+x795)-x796));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x797 = -1;
	int8_t x798 = INT8_MIN;
	static int8_t x799 = -6;
	int16_t x800 = INT16_MIN;
	volatile int32_t t160 = 0;

    t160 = (x797!=((x798+x799)-x800));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x805 = UINT16_MAX;
	uint32_t x806 = 125344U;
	int8_t x807 = INT8_MIN;
	int16_t x808 = -25;
	volatile int32_t t161 = 29506;

    t161 = (x805!=((x806+x807)-x808));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x821 = INT8_MIN;
	int32_t x823 = 97208029;
	static volatile int32_t t162 = 1491;

    t162 = (x821!=((x822+x823)-x824));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x829 = 668530079460LLU;
	int16_t x830 = INT16_MAX;
	int32_t x831 = 519;
	uint16_t x832 = UINT16_MAX;
	int32_t t163 = 2081636;

    t163 = (x829!=((x830+x831)-x832));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x833 = -247;
	uint32_t x834 = 925466U;
	int8_t x835 = -1;
	int16_t x836 = INT16_MAX;

    t164 = (x833!=((x834+x835)-x836));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x841 = -1;
	int64_t x842 = -402569444065258LL;
	int32_t x843 = 2089752;
	uint16_t x844 = 1446U;
	int32_t t165 = 445;

    t165 = (x841!=((x842+x843)-x844));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x845 = INT16_MIN;
	int64_t x846 = -1LL;
	int16_t x847 = INT16_MIN;
	uint16_t x848 = UINT16_MAX;
	int32_t t166 = -3146427;

    t166 = (x845!=((x846+x847)-x848));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x849 = INT32_MIN;
	int8_t x850 = 2;
	int32_t x851 = -10205831;
	uint32_t x852 = 13U;
	static int32_t t167 = -1;

    t167 = (x849!=((x850+x851)-x852));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x853 = -1;
	static int8_t x854 = -60;
	int16_t x855 = INT16_MIN;
	volatile uint8_t x856 = 7U;
	volatile int32_t t168 = -492011267;

    t168 = (x853!=((x854+x855)-x856));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x857 = INT8_MAX;
	volatile int8_t x858 = INT8_MIN;
	int64_t x860 = INT64_MAX;
	volatile int32_t t169 = 1;

    t169 = (x857!=((x858+x859)-x860));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x861 = 31313728145190876LLU;
	volatile int32_t x862 = 1523514;
	volatile uint16_t x863 = 683U;
	int32_t x864 = -44866;
	int32_t t170 = 102;

    t170 = (x861!=((x862+x863)-x864));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x867 = 7265210874LLU;
	volatile int32_t t171 = -694;

    t171 = (x865!=((x866+x867)-x868));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x870 = UINT16_MAX;
	volatile int64_t x871 = INT64_MIN;
	volatile uint8_t x872 = 31U;
	int32_t t172 = 198;

    t172 = (x869!=((x870+x871)-x872));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x874 = 10;
	volatile int32_t x875 = INT32_MIN;
	uint32_t x876 = 79U;
	volatile int32_t t173 = -502072;

    t173 = (x873!=((x874+x875)-x876));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x877 = 929383468295188LLU;
	int8_t x878 = -39;
	int8_t x880 = INT8_MAX;
	volatile int32_t t174 = -20;

    t174 = (x877!=((x878+x879)-x880));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x882 = UINT32_MAX;
	static uint16_t x883 = 3U;
	int8_t x884 = -1;
	static int32_t t175 = 3;

    t175 = (x881!=((x882+x883)-x884));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x885 = -3041;
	volatile int8_t x886 = 44;
	volatile int8_t x887 = INT8_MIN;
	static int32_t x888 = 468753;
	volatile int32_t t176 = -14711126;

    t176 = (x885!=((x886+x887)-x888));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x889 = 1;
	int8_t x890 = 1;
	uint64_t x891 = UINT64_MAX;
	volatile int8_t x892 = INT8_MAX;
	int32_t t177 = -123;

    t177 = (x889!=((x890+x891)-x892));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x893 = INT16_MIN;
	int16_t x894 = INT16_MIN;
	int8_t x895 = -1;
	static volatile int32_t t178 = -411556488;

    t178 = (x893!=((x894+x895)-x896));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x898 = UINT16_MAX;
	uint8_t x899 = 70U;
	volatile int32_t x900 = 100;
	static volatile int32_t t179 = -9;

    t179 = (x897!=((x898+x899)-x900));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint16_t x901 = 1225U;
	static int32_t x902 = -1;
	uint16_t x903 = 29380U;
	static int32_t x904 = 4;
	static volatile int32_t t180 = 251397;

    t180 = (x901!=((x902+x903)-x904));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x905 = UINT16_MAX;
	volatile int8_t x906 = INT8_MIN;
	volatile int8_t x907 = 1;
	int32_t t181 = 844;

    t181 = (x905!=((x906+x907)-x908));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x909 = UINT64_MAX;
	static int64_t x910 = 18874233321781974LL;
	int8_t x911 = 0;
	int32_t x912 = -20015159;
	int32_t t182 = 14;

    t182 = (x909!=((x910+x911)-x912));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x913 = -1;
	int8_t x914 = INT8_MIN;
	volatile uint32_t x915 = 703U;
	uint32_t x916 = 119U;
	volatile int32_t t183 = -437;

    t183 = (x913!=((x914+x915)-x916));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x919 = 130974126912858LLU;
	uint8_t x920 = UINT8_MAX;
	volatile int32_t t184 = -4;

    t184 = (x917!=((x918+x919)-x920));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x921 = 12LLU;
	int8_t x923 = INT8_MIN;
	static uint8_t x924 = UINT8_MAX;

    t185 = (x921!=((x922+x923)-x924));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x925 = 36140U;
	int64_t x926 = 0LL;
	int16_t x928 = -1;
	int32_t t186 = 147;

    t186 = (x925!=((x926+x927)-x928));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x929 = INT8_MAX;
	int32_t x930 = INT32_MIN;
	uint32_t x931 = 12U;
	int8_t x932 = -1;
	volatile int32_t t187 = -18470;

    t187 = (x929!=((x930+x931)-x932));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x933 = -1;
	int8_t x934 = -1;
	static int16_t x935 = INT16_MAX;
	int8_t x936 = INT8_MIN;

    t188 = (x933!=((x934+x935)-x936));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x937 = INT64_MAX;
	static uint64_t x938 = 2234138851LLU;
	static int16_t x939 = INT16_MAX;
	int16_t x940 = INT16_MIN;
	int32_t t189 = -120;

    t189 = (x937!=((x938+x939)-x940));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x941 = -797;
	int32_t x943 = -1;
	int8_t x944 = INT8_MIN;
	volatile int32_t t190 = 32;

    t190 = (x941!=((x942+x943)-x944));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x945 = 11U;
	static volatile uint8_t x947 = UINT8_MAX;
	uint32_t x948 = UINT32_MAX;

    t191 = (x945!=((x946+x947)-x948));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x953 = INT16_MAX;
	int16_t x954 = INT16_MAX;
	int64_t x955 = INT64_MIN;
	int8_t x956 = INT8_MIN;
	volatile int32_t t192 = -40489;

    t192 = (x953!=((x954+x955)-x956));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x959 = -452;
	static int16_t x960 = INT16_MIN;

    t193 = (x957!=((x958+x959)-x960));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x961 = 1870986466U;
	int16_t x963 = 8842;
	int8_t x964 = -1;

    t194 = (x961!=((x962+x963)-x964));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x965 = 1;
	int32_t x966 = -1;
	int16_t x968 = -1;

    t195 = (x965!=((x966+x967)-x968));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x974 = 65U;
	int32_t x975 = INT32_MIN;
	int64_t x976 = -1908614LL;
	int32_t t196 = 2255065;

    t196 = (x973!=((x974+x975)-x976));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x977 = INT16_MIN;
	volatile uint8_t x978 = UINT8_MAX;
	volatile int16_t x979 = INT16_MAX;
	volatile int32_t x980 = INT32_MAX;
	int32_t t197 = -114746853;

    t197 = (x977!=((x978+x979)-x980));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x981 = 389LLU;
	int16_t x983 = -45;
	uint64_t x984 = 2059616LLU;
	static volatile int32_t t198 = -838366290;

    t198 = (x981!=((x982+x983)-x984));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x985 = 0;
	static uint32_t x986 = UINT32_MAX;
	uint32_t x987 = UINT32_MAX;
	int64_t x988 = INT64_MAX;
	int32_t t199 = -821063;

    t199 = (x985!=((x986+x987)-x988));

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

