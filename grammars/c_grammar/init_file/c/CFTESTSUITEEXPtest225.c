
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

static int16_t x5 = INT16_MIN;
static uint32_t x12 = 923U;
static int64_t t1 = 49236403819140157LL;
volatile int16_t x27 = INT16_MIN;
int32_t x28 = -7;
int8_t x32 = 0;
static volatile int64_t t4 = INT64_MIN;
volatile uint32_t x38 = UINT32_MAX;
int32_t x49 = -1;
uint8_t x51 = 1U;
volatile uint32_t x77 = UINT32_MAX;
uint8_t x85 = 11U;
static uint8_t x99 = 1U;
int16_t x100 = -1;
int8_t x107 = 1;
static int8_t x109 = INT8_MIN;
uint32_t x112 = 948U;
uint32_t t13 = 7916U;
volatile uint64_t x118 = 367LLU;
int16_t x125 = INT16_MIN;
uint64_t x126 = UINT64_MAX;
int8_t x127 = -3;
uint32_t x128 = 330544824U;
static int8_t x138 = INT8_MIN;
static int32_t t17 = 99237478;
int8_t x143 = INT8_MIN;
volatile uint8_t x144 = 1U;
volatile int32_t t18 = 183857;
int64_t x146 = INT64_MIN;
volatile int8_t x158 = INT8_MIN;
uint64_t x170 = UINT64_MAX;
int16_t x181 = -1;
int8_t x194 = INT8_MAX;
volatile int8_t x204 = INT8_MAX;
static int32_t t25 = 60256;
volatile uint64_t t27 = UINT64_MAX;
static uint32_t x223 = 238676U;
uint8_t x224 = 21U;
static volatile int64_t t29 = INT64_MIN;
volatile uint8_t x237 = 14U;
int32_t x239 = -218790232;
volatile uint32_t x242 = 32882008U;
int8_t x249 = -1;
static int32_t x250 = 1;
int16_t x251 = INT16_MAX;
int32_t x259 = -1;
int8_t x260 = -1;
volatile int16_t x268 = INT16_MIN;
uint64_t x270 = 988405230LLU;
static int32_t x275 = INT32_MIN;
uint64_t t37 = 503253954LLU;
int16_t x279 = INT16_MIN;
volatile uint64_t t38 = 147LLU;
static uint16_t x295 = 16658U;
uint64_t t43 = 100LLU;
int16_t x325 = -1;
int8_t x327 = 38;
uint64_t x330 = 12LLU;
uint16_t x335 = UINT16_MAX;
int32_t x345 = -2631;
int64_t x357 = 1LL;
static int64_t t50 = -448834942700LL;
static int8_t x367 = -1;
int64_t x370 = -28LL;
int32_t x371 = INT32_MIN;
volatile uint64_t t53 = 979632632LLU;
static uint32_t x383 = 11893U;
int8_t x385 = 10;
int64_t x409 = -38LL;
volatile int64_t t57 = 35181LL;
int32_t x417 = 375472;
uint16_t x451 = UINT16_MAX;
int16_t x452 = INT16_MIN;
static int8_t x459 = 22;
uint32_t x462 = 6517484U;
int8_t x463 = INT8_MAX;
int32_t x474 = 941344;
static volatile int8_t x476 = INT8_MAX;
volatile int16_t x484 = 5;
uint8_t x489 = 11U;
volatile int32_t x491 = 24;
static uint8_t x492 = UINT8_MAX;
volatile int16_t x499 = -1;
static uint16_t x504 = UINT16_MAX;
int32_t t72 = -688;
volatile uint32_t t75 = 485544U;
int8_t x526 = INT8_MAX;
int16_t x528 = INT16_MIN;
uint64_t x533 = 20328286610021LLU;
uint64_t x534 = UINT64_MAX;
int16_t x536 = INT16_MIN;
volatile uint64_t t77 = 17929469LLU;
int64_t x539 = -1LL;
static int32_t t79 = 0;
int16_t x546 = INT16_MAX;
uint16_t x548 = 0U;
static volatile int64_t t82 = -2746324069024503535LL;
static uint64_t x580 = 135LLU;
volatile uint64_t t83 = 28LLU;
static volatile int16_t x584 = INT16_MIN;
int8_t x590 = INT8_MIN;
int16_t x593 = INT16_MIN;
static uint64_t x601 = 253239995840917LLU;
static int8_t x604 = INT8_MIN;
int16_t x606 = INT16_MIN;
int16_t x608 = 69;
volatile int16_t x612 = -1;
int64_t x619 = -23800058342407LL;
int64_t x637 = INT64_MIN;
volatile uint64_t t92 = 396LLU;
static volatile uint16_t x641 = 152U;
int32_t t93 = 11633;
uint64_t t94 = 10385417411419LLU;
volatile uint32_t x664 = 262556969U;
volatile int64_t x688 = 989916218LL;
uint64_t x691 = 394LLU;
uint32_t x692 = 4726413U;
static uint8_t x697 = 5U;
static uint32_t x721 = 20988239U;
uint64_t x726 = UINT64_MAX;
int16_t x728 = 46;
static uint64_t x734 = 1878832921291910LLU;
volatile uint32_t x740 = 5U;
int8_t x743 = INT8_MIN;
uint64_t x745 = 9435968940LLU;
volatile int64_t x765 = -1LL;
int64_t x768 = 69804877LL;
uint64_t x775 = 0LLU;
volatile uint32_t t114 = UINT32_MAX;
static volatile int32_t x793 = 7491551;
uint32_t x807 = 727586378U;
uint64_t x808 = UINT64_MAX;
volatile uint64_t t119 = 650692976663109LLU;
int16_t x815 = 3;
uint16_t x821 = UINT16_MAX;
volatile int32_t x823 = 69202;
static uint32_t x832 = 2531U;
uint8_t x833 = UINT8_MAX;
uint16_t x835 = UINT16_MAX;
int8_t x836 = 50;
static int16_t x838 = INT16_MIN;
volatile int8_t x839 = INT8_MAX;
uint32_t x840 = 19U;
uint32_t t127 = 15U;
uint8_t x855 = 6U;
int32_t t129 = -118786;
volatile int32_t t133 = -760369400;
uint64_t x888 = 7150058270871216556LLU;
volatile int8_t x904 = 60;
int16_t x906 = 728;
int64_t x911 = -1LL;
static uint64_t t138 = 6717LLU;
static uint64_t x929 = 3053743575050664LLU;
uint64_t x933 = 74675192126LLU;
int16_t x936 = -1;
volatile int16_t x944 = 41;
volatile int8_t x947 = -1;
uint64_t t145 = 399039929360049396LLU;
int16_t x956 = INT16_MIN;
volatile int64_t t147 = 34LL;
static volatile uint32_t t148 = 416U;
static volatile uint8_t x971 = 11U;
static volatile uint64_t t150 = 13031LLU;
int32_t x973 = INT32_MAX;
uint32_t t151 = 418U;
uint16_t x986 = 334U;
static int16_t x994 = -1;
int64_t x996 = 31119LL;
int16_t x1001 = 5941;
int8_t x1003 = -1;
int64_t t156 = 2764868839LL;
uint32_t x1005 = 333U;
uint8_t x1007 = UINT8_MAX;
int8_t x1008 = INT8_MAX;
volatile uint32_t t157 = 66720961U;
uint64_t x1040 = UINT64_MAX;
uint8_t x1042 = 10U;
volatile int8_t x1044 = -1;
volatile int32_t t162 = 143;
int8_t x1049 = -1;
int8_t x1053 = INT8_MIN;
uint16_t x1057 = 30148U;
volatile int16_t x1060 = -1;
static uint64_t t165 = 3299544285173755LLU;
int8_t x1065 = -7;
volatile int64_t x1067 = -1LL;
volatile int32_t x1069 = -5;
volatile uint64_t t168 = 8322880371LLU;
volatile int32_t x1097 = INT32_MIN;
volatile int16_t x1098 = 26;
static uint16_t x1103 = 15U;
uint8_t x1109 = 1U;
int16_t x1118 = 1;
static int16_t x1119 = INT16_MAX;
static uint16_t x1124 = UINT16_MAX;
static int16_t x1126 = INT16_MIN;
int8_t x1128 = -1;
volatile uint32_t x1133 = 659U;
static int64_t x1142 = -24525LL;
int32_t x1143 = INT32_MAX;
static volatile int64_t t177 = -250548900823031LL;
static int16_t x1145 = -4;
uint8_t x1175 = UINT8_MAX;
volatile uint32_t t181 = 2644254U;
uint16_t x1193 = 61U;
int16_t x1194 = -1;
uint64_t x1195 = 850829380311LLU;
static int32_t x1197 = -658;
static uint8_t x1198 = 3U;
static uint16_t x1202 = 32327U;
volatile uint64_t t185 = 11627158784262LLU;
static uint16_t x1237 = 85U;
int8_t x1238 = -1;
static int32_t x1243 = -13;
int16_t x1246 = INT16_MAX;
uint16_t x1250 = UINT16_MAX;
int32_t x1257 = 74278179;
int16_t x1266 = INT16_MIN;
uint64_t x1270 = UINT64_MAX;
volatile uint32_t t196 = 1377585U;
int32_t x1277 = 130878;
static volatile uint32_t t198 = 11916021U;
static int16_t x1293 = INT16_MIN;


void f0(void) {
    	volatile int8_t x6 = INT8_MIN;
	static int16_t x7 = INT16_MAX;
	int16_t x8 = -2;
	volatile int32_t t0 = -13;

    t0 = (x5+((x6-x7)*x8));

    if (t0 != 33022) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = -1;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = -87770928LL;

    t1 = (x9+((x10-x11)*x12));

    if (t1 != 81012801908LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x21 = 28061U;
	uint64_t x22 = UINT64_MAX;
	volatile int16_t x23 = INT16_MIN;
	uint64_t x24 = 41LLU;
	static volatile uint64_t t2 = 75475662652179LLU;

    t2 = (x21+((x22-x23)*x24));

    if (t2 != 1371508LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x25 = INT32_MIN;
	int16_t x26 = INT16_MIN;
	volatile int32_t t3 = INT32_MIN;

    t3 = (x25+((x26-x27)*x28));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x29 = INT64_MIN;
	static int32_t x30 = INT32_MAX;
	uint32_t x31 = 1U;

    t4 = (x29+((x30-x31)*x32));

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x37 = -5;
	int32_t x39 = 832138357;
	int8_t x40 = -9;
	volatile uint32_t t5 = 14U;

    t5 = (x37+((x38-x39)*x40));

    if (t5 != 3194277921U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x45 = UINT8_MAX;
	int32_t x46 = -673;
	int16_t x47 = -1;
	int8_t x48 = 5;
	int32_t t6 = 46687;

    t6 = (x45+((x46-x47)*x48));

    if (t6 != -3105) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x50 = -1;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t7 = -5576468;

    t7 = (x49+((x50-x51)*x52));

    if (t7 != -511) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x78 = INT16_MIN;
	static int32_t x79 = INT32_MIN;
	int32_t x80 = -1;
	uint32_t t8 = 105U;

    t8 = (x77+((x78-x79)*x80));

    if (t8 != 2147516415U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x86 = UINT32_MAX;
	int8_t x87 = -13;
	int32_t x88 = INT32_MIN;
	volatile uint32_t t9 = 349298U;

    t9 = (x85+((x86-x87)*x88));

    if (t9 != 11U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x89 = -1;
	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MIN;
	volatile int8_t x92 = -1;
	volatile int32_t t10 = -359;

    t10 = (x89+((x90-x91)*x92));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x97 = 464U;
	uint8_t x98 = 6U;
	uint32_t t11 = 238671521U;

    t11 = (x97+((x98-x99)*x100));

    if (t11 != 459U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x105 = -21475166;
	int8_t x106 = INT8_MIN;
	static int32_t x108 = 343;
	int32_t t12 = 15116269;

    t12 = (x105+((x106-x107)*x108));

    if (t12 != -21519413) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x110 = -1;
	static uint8_t x111 = 25U;

    t13 = (x109+((x110-x111)*x112));

    if (t13 != 4294942520U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x117 = INT8_MAX;
	volatile int64_t x119 = 33719438470127635LL;
	int64_t x120 = INT64_MIN;
	volatile uint64_t t14 = 125494LLU;

    t14 = (x117+((x118-x119)*x120));

    if (t14 != 127LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t t15 = 57954810LLU;

    t15 = (x125+((x126-x127)*x128));

    if (t15 != 661056880LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x129 = UINT64_MAX;
	int64_t x130 = -1LL;
	int64_t x131 = -1LL;
	uint8_t x132 = 19U;
	static volatile uint64_t t16 = UINT64_MAX;

    t16 = (x129+((x130-x131)*x132));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x137 = UINT16_MAX;
	int16_t x139 = -1;
	int8_t x140 = -1;

    t17 = (x137+((x138-x139)*x140));

    if (t17 != 65662) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x141 = 21U;
	int16_t x142 = INT16_MIN;

    t18 = (x141+((x142-x143)*x144));

    if (t18 != -32619) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x145 = -1;
	int32_t x147 = INT32_MIN;
	static int64_t x148 = -1LL;
	volatile int64_t t19 = 1788558LL;

    t19 = (x145+((x146-x147)*x148));

    if (t19 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x149 = INT8_MAX;
	static int32_t x150 = -36963;
	int32_t x151 = 527247;
	volatile int32_t x152 = -1;
	volatile int32_t t20 = 165;

    t20 = (x149+((x150-x151)*x152));

    if (t20 != 564337) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x157 = 1;
	uint32_t x159 = UINT32_MAX;
	int8_t x160 = INT8_MIN;
	static uint32_t t21 = 12U;

    t21 = (x157+((x158-x159)*x160));

    if (t21 != 16257U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x169 = 15232237LLU;
	uint8_t x171 = 5U;
	static uint16_t x172 = 21543U;
	volatile uint64_t t22 = 68421192695334LLU;

    t22 = (x169+((x170-x171)*x172));

    if (t22 != 15102979LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x182 = -211529938;
	static uint64_t x183 = 2047376384LLU;
	int8_t x184 = INT8_MAX;
	volatile uint64_t t23 = 88LLU;

    t23 = (x181+((x182-x183)*x184));

    if (t23 != 18446743786828448721LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x193 = 490494522LLU;
	uint16_t x195 = 106U;
	uint16_t x196 = 235U;
	volatile uint64_t t24 = 668LLU;

    t24 = (x193+((x194-x195)*x196));

    if (t24 != 490499457LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x201 = INT32_MAX;
	int32_t x202 = -1;
	uint8_t x203 = UINT8_MAX;

    t25 = (x201+((x202-x203)*x204));

    if (t25 != 2147451135) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x209 = -12;
	uint64_t x210 = 7674116859536LLU;
	static int64_t x211 = 1LL;
	volatile uint32_t x212 = 3U;
	volatile uint64_t t26 = 223151008LLU;

    t26 = (x209+((x210-x211)*x212));

    if (t26 != 23022350578593LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint64_t x217 = UINT64_MAX;
	volatile int8_t x218 = INT8_MIN;
	static volatile int8_t x219 = INT8_MIN;
	uint32_t x220 = 286382U;

    t27 = (x217+((x218-x219)*x220));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x221 = 3U;
	uint16_t x222 = 290U;
	volatile uint32_t t28 = 142U;

    t28 = (x221+((x222-x223)*x224));

    if (t28 != 4289961193U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x225 = INT64_MIN;
	int8_t x226 = -12;
	uint32_t x227 = 43026444U;
	static volatile int32_t x228 = INT32_MIN;

    t29 = (x225+((x226-x227)*x228));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x238 = 0U;
	int32_t x240 = -1;
	static int32_t t30 = -8762121;

    t30 = (x237+((x238-x239)*x240));

    if (t30 != -218790218) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x241 = -14;
	int16_t x243 = 0;
	int32_t x244 = 5308;
	volatile uint32_t t31 = 44046U;

    t31 = (x241+((x242-x243)*x244));

    if (t31 != 2739006610U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x252 = 7488775212LL;
	int64_t t32 = 129943965LL;

    t32 = (x249+((x250-x251)*x252));

    if (t32 != -245377208596393LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x253 = UINT64_MAX;
	int16_t x254 = INT16_MIN;
	uint8_t x255 = 0U;
	volatile uint8_t x256 = 1U;
	static volatile uint64_t t33 = 8558LLU;

    t33 = (x253+((x254-x255)*x256));

    if (t33 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x257 = -388063590277LL;
	static volatile int8_t x258 = -1;
	static volatile int64_t t34 = -610362LL;

    t34 = (x257+((x258-x259)*x260));

    if (t34 != -388063590277LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x265 = 1LLU;
	int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MIN;
	volatile uint64_t t35 = 2LLU;

    t35 = (x265+((x266-x267)*x268));

    if (t35 != 18446744072640004097LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x269 = UINT32_MAX;
	uint64_t x271 = 2215516LLU;
	int64_t x272 = -192389899388936506LL;
	uint64_t t36 = 9611LLU;

    t36 = (x269+((x270-x271)*x272));

    if (t36 != 13297607402090145515LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x273 = INT8_MIN;
	uint64_t x274 = UINT64_MAX;
	int16_t x276 = -1;

    t37 = (x273+((x274-x275)*x276));

    if (t37 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x277 = UINT64_MAX;
	volatile int16_t x278 = -613;
	int8_t x280 = INT8_MIN;

    t38 = (x277+((x278-x279)*x280));

    if (t38 != 18446744073705435775LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x281 = UINT32_MAX;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	int32_t x284 = -13;
	volatile int64_t t39 = 2618481LL;

    t39 = (x281+((x282-x283)*x284));

    if (t39 != 4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	volatile uint8_t x287 = 2U;
	static volatile uint32_t x288 = 197315U;
	uint32_t t40 = 10702U;

    t40 = (x285+((x286-x287)*x288));

    if (t40 != 4271405690U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x293 = INT32_MIN;
	uint64_t x294 = 105LLU;
	uint8_t x296 = 6U;
	volatile uint64_t t41 = 57LLU;

    t41 = (x293+((x294-x295)*x296));

    if (t41 != 18446744071561968650LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x305 = 1U;
	volatile uint8_t x306 = 5U;
	int32_t x307 = 3105;
	uint8_t x308 = 6U;
	int32_t t42 = 426598574;

    t42 = (x305+((x306-x307)*x308));

    if (t42 != -18599) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x317 = UINT32_MAX;
	uint64_t x318 = 1792471856017248LLU;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = -48;

    t43 = (x317+((x318-x319)*x320));

    if (t43 != 18360705635074121167LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x321 = 6;
	int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MAX;
	volatile int16_t x324 = 1;
	static int32_t t44 = -3;

    t44 = (x321+((x322-x323)*x324));

    if (t44 != -32889) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x326 = INT32_MAX;
	int16_t x328 = -1;
	static volatile int32_t t45 = 413;

    t45 = (x325+((x326-x327)*x328));

    if (t45 != -2147483610) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x329 = INT8_MIN;
	int16_t x331 = 10;
	int64_t x332 = INT64_MAX;
	static uint64_t t46 = 2045LLU;

    t46 = (x329+((x330-x331)*x332));

    if (t46 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x333 = 728LLU;
	uint16_t x334 = 637U;
	uint64_t x336 = UINT64_MAX;
	uint64_t t47 = 163842LLU;

    t47 = (x333+((x334-x335)*x336));

    if (t47 != 65626LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	uint8_t x348 = 0U;
	volatile uint64_t t48 = 1241268386LLU;

    t48 = (x345+((x346-x347)*x348));

    if (t48 != 18446744073709548985LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x353 = -13;
	int8_t x354 = 42;
	int8_t x355 = INT8_MIN;
	static uint64_t x356 = 197984027950485872LLU;
	static uint64_t t49 = 6LLU;

    t49 = (x353+((x354-x355)*x356));

    if (t49 != 15210540677873046611LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x358 = 32;
	static volatile int32_t x359 = 2403456;
	uint8_t x360 = 4U;

    t50 = (x357+((x358-x359)*x360));

    if (t50 != -9613695LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x361 = -1LL;
	static int32_t x362 = -1;
	static int8_t x363 = INT8_MAX;
	int8_t x364 = INT8_MAX;
	volatile int64_t t51 = 18LL;

    t51 = (x361+((x362-x363)*x364));

    if (t51 != -16257LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x365 = 842;
	uint16_t x366 = UINT16_MAX;
	static uint8_t x368 = UINT8_MAX;
	int32_t t52 = 97;

    t52 = (x365+((x366-x367)*x368));

    if (t52 != 16712522) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x369 = -1LL;
	volatile uint64_t x372 = 4484622657LLU;

    t53 = (x369+((x370-x371)*x372));

    if (t53 != 9630653697788378339LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x381 = -1LL;
	volatile uint32_t x382 = 29255700U;
	static volatile uint16_t x384 = 2835U;
	int64_t t54 = -28015LL;

    t54 = (x381+((x382-x383)*x384));

    if (t54 != 1301814220LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x386 = INT32_MIN;
	static int64_t x387 = -1365274358LL;
	uint64_t x388 = UINT64_MAX;
	static volatile uint64_t t55 = 70828LLU;

    t55 = (x385+((x386-x387)*x388));

    if (t55 != 782209300LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x389 = -2;
	uint32_t x390 = 0U;
	uint8_t x391 = 1U;
	int64_t x392 = -1LL;
	static int64_t t56 = -4672LL;

    t56 = (x389+((x390-x391)*x392));

    if (t56 != -4294967297LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x410 = 176LL;
	uint32_t x411 = UINT32_MAX;
	static volatile uint32_t x412 = 848U;

    t57 = (x409+((x410-x411)*x412));

    if (t57 != -3642132116950LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x413 = 40;
	volatile int8_t x414 = INT8_MAX;
	static volatile int32_t x415 = -1;
	volatile uint8_t x416 = UINT8_MAX;
	volatile int32_t t58 = 18794;

    t58 = (x413+((x414-x415)*x416));

    if (t58 != 32680) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x418 = 32;
	int16_t x419 = 0;
	static int8_t x420 = -1;
	static volatile int32_t t59 = 444;

    t59 = (x417+((x418-x419)*x420));

    if (t59 != 375440) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x421 = 1174653;
	uint64_t x422 = UINT64_MAX;
	uint8_t x423 = UINT8_MAX;
	static volatile int8_t x424 = -1;
	static uint64_t t60 = 142598335278679LLU;

    t60 = (x421+((x422-x423)*x424));

    if (t60 != 1174909LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x433 = 7250223346989635210LLU;
	volatile int64_t x434 = -1LL;
	int8_t x435 = INT8_MAX;
	uint64_t x436 = UINT64_MAX;
	uint64_t t61 = 31736890641310LLU;

    t61 = (x433+((x434-x435)*x436));

    if (t61 != 7250223346989635338LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x441 = 4489U;
	int64_t x442 = INT64_MAX;
	static int16_t x443 = 14;
	static uint64_t x444 = UINT64_MAX;
	uint64_t t62 = 1616316970984LLU;

    t62 = (x441+((x442-x443)*x444));

    if (t62 != 9223372036854780312LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x449 = INT64_MIN;
	uint16_t x450 = UINT16_MAX;
	static volatile int64_t t63 = INT64_MIN;

    t63 = (x449+((x450-x451)*x452));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x457 = INT16_MAX;
	int16_t x458 = -24;
	static int64_t x460 = 1883328LL;
	volatile int64_t t64 = 3737704LL;

    t64 = (x457+((x458-x459)*x460));

    if (t64 != -86600321LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x461 = 48U;
	int8_t x464 = INT8_MAX;
	static volatile uint32_t t65 = 1071059U;

    t65 = (x461+((x462-x463)*x464));

    if (t65 != 827704387U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x465 = 1LLU;
	static int32_t x466 = -1171;
	int8_t x467 = INT8_MIN;
	int32_t x468 = 2042553;
	volatile uint64_t t66 = 133903099321637LLU;

    t66 = (x465+((x466-x467)*x468));

    if (t66 != 18446744071579168838LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x473 = 3U;
	int8_t x475 = INT8_MIN;
	int32_t t67 = 16929144;

    t67 = (x473+((x474-x475)*x476));

    if (t67 != 119566947) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x481 = UINT32_MAX;
	int8_t x482 = -1;
	int16_t x483 = -1;
	uint32_t t68 = UINT32_MAX;

    t68 = (x481+((x482-x483)*x484));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x490 = 5717249621733988LLU;
	uint64_t t69 = 8318838706LLU;

    t69 = (x489+((x490-x491)*x492));

    if (t69 != 1457898653542160831LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x497 = INT64_MAX;
	uint16_t x498 = 4U;
	int8_t x500 = -2;
	volatile int64_t t70 = -6486526LL;

    t70 = (x497+((x498-x499)*x500));

    if (t70 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x501 = UINT8_MAX;
	static uint32_t x502 = 2050934906U;
	uint32_t x503 = UINT32_MAX;
	volatile uint32_t t71 = 3U;

    t71 = (x501+((x502-x503)*x504));

    if (t71 != 1312569476U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x509 = 16U;
	uint8_t x510 = UINT8_MAX;
	int8_t x511 = -1;
	uint16_t x512 = UINT16_MAX;

    t72 = (x509+((x510-x511)*x512));

    if (t72 != 16776976) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x513 = 1352U;
	uint64_t x514 = 106LLU;
	uint64_t x515 = 13996675524542LLU;
	static int64_t x516 = INT64_MIN;
	volatile uint64_t t73 = 33028LLU;

    t73 = (x513+((x514-x515)*x516));

    if (t73 != 1352LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x517 = INT8_MAX;
	uint64_t x518 = 505635LLU;
	uint16_t x519 = UINT16_MAX;
	int64_t x520 = -13LL;
	volatile uint64_t t74 = 440300LLU;

    t74 = (x517+((x518-x519)*x520));

    if (t74 != 18446744073703830443LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x521 = -6;
	uint8_t x522 = 33U;
	int8_t x523 = -1;
	static uint32_t x524 = 4U;

    t75 = (x521+((x522-x523)*x524));

    if (t75 != 130U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x525 = UINT32_MAX;
	uint8_t x527 = 58U;
	static uint32_t t76 = 237036U;

    t76 = (x525+((x526-x527)*x528));

    if (t76 != 4292706303U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x535 = 11U;

    t77 = (x533+((x534-x535)*x536));

    if (t77 != 20328287003237LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x537 = 16347U;
	static int8_t x538 = INT8_MAX;
	uint16_t x540 = 789U;
	static volatile int64_t t78 = 2115303474276155155LL;

    t78 = (x537+((x538-x539)*x540));

    if (t78 != 117339LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x541 = -1;
	int16_t x542 = -1;
	static volatile int16_t x543 = INT16_MAX;
	static int16_t x544 = INT16_MIN;

    t79 = (x541+((x542-x543)*x544));

    if (t79 != 1073741823) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x545 = -1;
	int16_t x547 = -1;
	volatile int32_t t80 = -781755554;

    t80 = (x545+((x546-x547)*x548));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x561 = INT32_MIN;
	uint64_t x562 = 25599964015870LLU;
	static int64_t x563 = -919526079065328052LL;
	int8_t x564 = INT8_MAX;
	volatile uint64_t t81 = 2630666LLU;

    t81 = (x561+((x562-x563)*x564));

    if (t81 != 6102598792321884750LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x569 = INT64_MAX;
	int16_t x570 = INT16_MIN;
	int32_t x571 = 3367;
	uint8_t x572 = 20U;

    t82 = (x569+((x570-x571)*x572));

    if (t82 != 9223372036854053107LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x577 = 159882050372908LL;
	int8_t x578 = INT8_MIN;
	int16_t x579 = -1;

    t83 = (x577+((x578-x579)*x580));

    if (t83 != 159882050355763LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x581 = -1;
	int16_t x582 = -1;
	uint64_t x583 = 476250849648LLU;
	volatile uint64_t t84 = 26LLU;

    t84 = (x581+((x582-x583)*x584));

    if (t84 != 15605787841298431LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x589 = 1;
	uint64_t x591 = UINT64_MAX;
	volatile uint64_t x592 = UINT64_MAX;
	uint64_t t85 = 19440565256LLU;

    t85 = (x589+((x590-x591)*x592));

    if (t85 != 128LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x594 = UINT8_MAX;
	int16_t x595 = INT16_MAX;
	volatile uint32_t x596 = UINT32_MAX;
	volatile uint32_t t86 = 4062014U;

    t86 = (x593+((x594-x595)*x596));

    if (t86 != 4294967040U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x597 = 192;
	static uint16_t x598 = UINT16_MAX;
	uint64_t x599 = UINT64_MAX;
	int8_t x600 = -1;
	uint64_t t87 = 30673704LLU;

    t87 = (x597+((x598-x599)*x600));

    if (t87 != 18446744073709486272LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x602 = 503;
	static int32_t x603 = -65;
	static volatile uint64_t t88 = 66213554426638581LLU;

    t88 = (x601+((x602-x603)*x604));

    if (t88 != 253239995768213LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x605 = -1;
	uint8_t x607 = UINT8_MAX;
	int32_t t89 = 42;

    t89 = (x605+((x606-x607)*x608));

    if (t89 != -2278588) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x609 = -70794122;
	int8_t x610 = INT8_MIN;
	int16_t x611 = INT16_MIN;
	static int32_t t90 = 0;

    t90 = (x609+((x610-x611)*x612));

    if (t90 != -70826762) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x617 = 3;
	uint16_t x618 = 29270U;
	uint64_t x620 = UINT64_MAX;
	uint64_t t91 = 33701743361964774LLU;

    t91 = (x617+((x618-x619)*x620));

    if (t91 != 18446720273651179942LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x638 = 277U;
	uint64_t x639 = 29794295LLU;
	uint16_t x640 = UINT16_MAX;

    t92 = (x637+((x638-x639)*x640));

    if (t92 != 9223370084303806178LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x642 = INT16_MAX;
	int16_t x643 = INT16_MAX;
	static int32_t x644 = 352;

    t93 = (x641+((x642-x643)*x644));

    if (t93 != 152) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x649 = INT64_MAX;
	uint32_t x650 = 28722U;
	uint8_t x651 = 5U;
	static uint64_t x652 = UINT64_MAX;

    t94 = (x649+((x650-x651)*x652));

    if (t94 != 9223372036854747090LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x661 = -1;
	uint16_t x662 = UINT16_MAX;
	int64_t x663 = -17LL;
	int64_t t95 = -5LL;

    t95 = (x661+((x662-x663)*x664));

    if (t95 != 17211134431887LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x677 = -1;
	int64_t x678 = -36300574640698LL;
	static volatile uint16_t x679 = 450U;
	static uint8_t x680 = 7U;
	volatile int64_t t96 = 2814LL;

    t96 = (x677+((x678-x679)*x680));

    if (t96 != -254104022488037LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x685 = 1LLU;
	static volatile uint8_t x686 = UINT8_MAX;
	uint8_t x687 = 1U;
	volatile uint64_t t97 = 1757642599LLU;

    t97 = (x685+((x686-x687)*x688));

    if (t97 != 251438719373LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x689 = 46283278LLU;
	uint64_t x690 = UINT64_MAX;
	uint64_t t98 = 678406959689828162LLU;

    t98 = (x689+((x690-x691)*x692));

    if (t98 != 18446744071888901759LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x693 = 24U;
	volatile int8_t x694 = INT8_MIN;
	volatile int32_t x695 = INT32_MIN;
	int32_t x696 = -1;
	volatile int32_t t99 = 1046943;

    t99 = (x693+((x694-x695)*x696));

    if (t99 != -2147483496) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x698 = 21U;
	volatile int32_t x699 = -1;
	int8_t x700 = -1;
	volatile int32_t t100 = -68011613;

    t100 = (x697+((x698-x699)*x700));

    if (t100 != -17) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x705 = UINT32_MAX;
	int16_t x706 = INT16_MIN;
	volatile uint32_t x707 = 1U;
	int16_t x708 = INT16_MIN;
	uint32_t t101 = 9U;

    t101 = (x705+((x706-x707)*x708));

    if (t101 != 1073774591U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x709 = -3113;
	int8_t x710 = 4;
	static uint64_t x711 = 8806968490975LLU;
	static uint8_t x712 = 115U;
	static volatile uint64_t t102 = 14582183125738LLU;

    t102 = (x709+((x710-x711)*x712));

    if (t102 != 18445731272333086838LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x713 = UINT64_MAX;
	int32_t x714 = 432526;
	int8_t x715 = INT8_MIN;
	static int8_t x716 = -1;
	uint64_t t103 = 49762292LLU;

    t103 = (x713+((x714-x715)*x716));

    if (t103 != 18446744073709118961LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x717 = -1;
	static uint64_t x718 = 420266660445454LLU;
	int16_t x719 = -1;
	uint64_t x720 = 2072274953LLU;
	static volatile uint64_t t104 = 569500556114063557LLU;

    t104 = (x717+((x718-x719)*x720));

    if (t104 != 392814096868294022LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x722 = INT8_MIN;
	volatile uint64_t x723 = 7370457569544LLU;
	uint64_t x724 = 1473128366718LLU;
	uint64_t t105 = 17593877239928031LLU;

    t105 = (x721+((x722-x723)*x724));

    if (t105 != 12759745766793879647LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x725 = 0;
	int32_t x727 = INT32_MAX;
	uint64_t t106 = 6058LLU;

    t106 = (x725+((x726-x727)*x728));

    if (t106 != 18446743974925303808LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x733 = 1007081;
	static int8_t x735 = -1;
	volatile int8_t x736 = 1;
	uint64_t t107 = 644032LLU;

    t107 = (x733+((x734-x735)*x736));

    if (t107 != 1878832922298992LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x737 = 1436983644U;
	uint16_t x738 = 38U;
	uint16_t x739 = 7252U;
	static uint32_t t108 = 6U;

    t108 = (x737+((x738-x739)*x740));

    if (t108 != 1436947574U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x741 = INT64_MIN;
	uint8_t x742 = 1U;
	int32_t x744 = 122548;
	static int64_t t109 = 11750098LL;

    t109 = (x741+((x742-x743)*x744));

    if (t109 != -9223372036838967116LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x746 = UINT8_MAX;
	uint32_t x747 = 20488U;
	int32_t x748 = INT32_MAX;
	volatile uint64_t t110 = 13440546540LLU;

    t110 = (x745+((x746-x747)*x748));

    if (t110 != 11583472821LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x753 = -18708477LL;
	int16_t x754 = -122;
	volatile int32_t x755 = -1;
	volatile uint32_t x756 = 2152U;
	int64_t t111 = -4726LL;

    t111 = (x753+((x754-x755)*x756));

    if (t111 != 4275998427LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x766 = 1562U;
	uint8_t x767 = 4U;
	volatile int64_t t112 = 185031832987299LL;

    t112 = (x765+((x766-x767)*x768));

    if (t112 != 108755998365LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x773 = UINT32_MAX;
	uint32_t x774 = 14U;
	int64_t x776 = INT64_MIN;
	volatile uint64_t t113 = 2139787LLU;

    t113 = (x773+((x774-x775)*x776));

    if (t113 != 4294967295LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x781 = UINT32_MAX;
	int8_t x782 = INT8_MIN;
	int8_t x783 = INT8_MIN;
	static uint8_t x784 = UINT8_MAX;

    t114 = (x781+((x782-x783)*x784));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x785 = UINT8_MAX;
	uint8_t x786 = UINT8_MAX;
	int16_t x787 = -1;
	int64_t x788 = -58284826LL;
	volatile int64_t t115 = 779171050285584LL;

    t115 = (x785+((x786-x787)*x788));

    if (t115 != -14920915201LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x789 = 10;
	volatile int8_t x790 = -15;
	int16_t x791 = -1;
	uint32_t x792 = 39875351U;
	uint32_t t116 = 1342U;

    t116 = (x789+((x790-x791)*x792));

    if (t116 != 3736712392U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x794 = -20;
	int8_t x795 = 48;
	int8_t x796 = INT8_MAX;
	volatile int32_t t117 = -3376636;

    t117 = (x793+((x794-x795)*x796));

    if (t117 != 7482915) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x797 = INT16_MAX;
	int64_t x798 = INT64_MIN;
	int8_t x799 = INT8_MIN;
	volatile uint64_t x800 = 189348LLU;
	static uint64_t t118 = 264197179108077886LLU;

    t118 = (x797+((x798-x799)*x800));

    if (t118 != 24269311LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x805 = UINT8_MAX;
	int32_t x806 = INT32_MIN;

    t119 = (x805+((x806-x807)*x808));

    if (t119 != 18446744072289654601LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x809 = 0U;
	uint32_t x810 = 79274U;
	uint64_t x811 = UINT64_MAX;
	int16_t x812 = -5326;
	uint64_t t120 = 26670963920LLU;

    t120 = (x809+((x810-x811)*x812));

    if (t120 != 18446744073287332966LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x813 = 64U;
	int64_t x814 = -1LL;
	uint64_t x816 = 3379027LLU;
	uint64_t t121 = 364017304034447783LLU;

    t121 = (x813+((x814-x815)*x816));

    if (t121 != 18446744073696035572LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x817 = 5847U;
	volatile int64_t x818 = INT64_MAX;
	volatile int32_t x819 = INT32_MAX;
	uint64_t x820 = 4120823071420556LLU;
	volatile uint64_t t122 = 18605143216LLU;

    t122 = (x817+((x818-x819)*x820));

    if (t122 != 1032071681927026391LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x822 = 15717;
	static uint32_t x824 = 18U;
	volatile uint32_t t123 = 3847U;

    t123 = (x821+((x822-x823)*x824));

    if (t123 != 4294070101U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x825 = 888;
	int16_t x826 = -8;
	uint64_t x827 = UINT64_MAX;
	static uint64_t x828 = UINT64_MAX;
	volatile uint64_t t124 = 6062LLU;

    t124 = (x825+((x826-x827)*x828));

    if (t124 != 895LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x829 = 113;
	volatile uint32_t x830 = 1135397187U;
	uint8_t x831 = UINT8_MAX;
	volatile uint32_t t125 = 54742U;

    t125 = (x829+((x830-x831)*x832));

    if (t125 != 356513981U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x834 = 38794U;
	volatile uint32_t t126 = 2849469U;

    t126 = (x833+((x834-x835)*x836));

    if (t126 != 4293630501U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x837 = -1;

    t127 = (x837+((x838-x839)*x840));

    if (t127 != 4294342290U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x845 = 13126;
	uint16_t x846 = UINT16_MAX;
	volatile uint8_t x847 = UINT8_MAX;
	int8_t x848 = -41;
	volatile int32_t t128 = -423;

    t128 = (x845+((x846-x847)*x848));

    if (t128 != -2663354) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x853 = -122;
	int8_t x854 = INT8_MIN;
	uint16_t x856 = 12U;

    t129 = (x853+((x854-x855)*x856));

    if (t129 != -1730) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x861 = 72545LLU;
	static volatile int32_t x862 = 190834135;
	static volatile int64_t x863 = -1056900744059LL;
	static uint8_t x864 = 0U;
	static volatile uint64_t t130 = 2829427515801647LLU;

    t130 = (x861+((x862-x863)*x864));

    if (t130 != 72545LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x865 = -236200;
	volatile uint64_t x866 = 3710184867LLU;
	uint8_t x867 = 84U;
	static int32_t x868 = -31618048;
	uint64_t t131 = 1107297948LLU;

    t131 = (x865+((x866-x867)*x868));

    if (t131 != 18329435273151551832LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x873 = INT8_MAX;
	static int32_t x874 = -1;
	int32_t x875 = -1;
	static volatile int32_t x876 = INT32_MIN;
	volatile int32_t t132 = 20;

    t132 = (x873+((x874-x875)*x876));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x877 = INT8_MIN;
	int8_t x878 = INT8_MAX;
	int8_t x879 = -1;
	uint16_t x880 = UINT16_MAX;

    t133 = (x877+((x878-x879)*x880));

    if (t133 != 8388352) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x885 = INT8_MIN;
	static int64_t x886 = 3500276533022LL;
	uint16_t x887 = UINT16_MAX;
	uint64_t t134 = 2376LLU;

    t134 = (x885+((x886-x887)*x888));

    if (t134 != 1862802903466739540LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x897 = -209006LL;
	uint8_t x898 = 1U;
	uint32_t x899 = 17U;
	uint16_t x900 = UINT16_MAX;
	int64_t t135 = 62LL;

    t135 = (x897+((x898-x899)*x900));

    if (t135 != 4293709730LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x901 = INT16_MAX;
	volatile uint32_t x902 = 3U;
	int64_t x903 = -1LL;
	static volatile int64_t t136 = -2879504LL;

    t136 = (x901+((x902-x903)*x904));

    if (t136 != 33007LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x905 = 5U;
	int8_t x907 = INT8_MIN;
	int8_t x908 = 2;
	int32_t t137 = -825740;

    t137 = (x905+((x906-x907)*x908));

    if (t137 != 1717) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x909 = UINT64_MAX;
	static int16_t x910 = INT16_MIN;
	volatile int8_t x912 = INT8_MAX;

    t138 = (x909+((x910-x911)*x912));

    if (t138 != 18446744073705390206LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x921 = 9492;
	uint64_t x922 = 2076124LLU;
	int32_t x923 = 7;
	volatile int16_t x924 = INT16_MIN;
	uint64_t t139 = 490849261036LLU;

    t139 = (x921+((x922-x923)*x924));

    if (t139 != 18446744005679359252LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x930 = INT16_MIN;
	int16_t x931 = INT16_MIN;
	int8_t x932 = INT8_MIN;
	volatile uint64_t t140 = 97594LLU;

    t140 = (x929+((x930-x931)*x932));

    if (t140 != 3053743575050664LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x934 = -565;
	int8_t x935 = 1;
	uint64_t t141 = 4583632227824LLU;

    t141 = (x933+((x934-x935)*x936));

    if (t141 != 74675192692LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x937 = UINT64_MAX;
	volatile uint32_t x938 = 41U;
	int32_t x939 = INT32_MIN;
	volatile int8_t x940 = INT8_MIN;
	uint64_t t142 = 5337273792456995LLU;

    t142 = (x937+((x938-x939)*x940));

    if (t142 != 4294962047LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x941 = 31041283853LL;
	int16_t x942 = INT16_MIN;
	uint32_t x943 = 32U;
	volatile int64_t t143 = -55LL;

    t143 = (x941+((x942-x943)*x944));

    if (t143 != 35334906349LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x945 = 10U;
	uint32_t x946 = 24029U;
	static int32_t x948 = -1;
	uint32_t t144 = 4U;

    t144 = (x945+((x946-x947)*x948));

    if (t144 != 4294943276U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x949 = INT8_MIN;
	volatile uint64_t x950 = UINT64_MAX;
	uint8_t x951 = UINT8_MAX;
	static int32_t x952 = INT32_MAX;

    t145 = (x949+((x950-x951)*x952));

    if (t145 != 18446743523953737856LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x953 = 25;
	uint16_t x954 = 811U;
	static int64_t x955 = 26997207736LL;
	volatile int64_t t146 = 4903085LL;

    t146 = (x953+((x954-x955)*x956));

    if (t146 != 884644476518425LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x957 = -7889;
	int8_t x958 = INT8_MAX;
	int16_t x959 = 49;
	int64_t x960 = -1LL;

    t147 = (x957+((x958-x959)*x960));

    if (t147 != -7967LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x961 = 5U;
	uint16_t x962 = 1476U;
	static uint16_t x963 = UINT16_MAX;
	static volatile int8_t x964 = 29;

    t148 = (x961+((x962-x963)*x964));

    if (t148 != 4293109590U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x965 = INT16_MIN;
	uint64_t x966 = UINT64_MAX;
	int8_t x967 = 7;
	volatile uint16_t x968 = 1633U;
	static volatile uint64_t t149 = 12542696LLU;

    t149 = (x965+((x966-x967)*x968));

    if (t149 != 18446744073709505784LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x969 = 176646LLU;
	static volatile int8_t x970 = 0;
	static uint16_t x972 = 1U;

    t150 = (x969+((x970-x971)*x972));

    if (t150 != 176635LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x974 = UINT32_MAX;
	int8_t x975 = INT8_MIN;
	static uint16_t x976 = 15589U;

    t151 = (x973+((x974-x975)*x976));

    if (t151 != 2149463450U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x985 = -1;
	uint64_t x987 = 475580LLU;
	int64_t x988 = INT64_MAX;
	uint64_t t152 = 6502741457141146780LLU;

    t152 = (x985+((x986-x987)*x988));

    if (t152 != 475245LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x989 = -5577643;
	static int32_t x990 = -40789064;
	int64_t x991 = -11366128LL;
	int16_t x992 = -1;
	volatile int64_t t153 = 330955949LL;

    t153 = (x989+((x990-x991)*x992));

    if (t153 != 23845293LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x993 = INT32_MIN;
	uint16_t x995 = 36U;
	int64_t t154 = -5825LL;

    t154 = (x993+((x994-x995)*x996));

    if (t154 != -2148635051LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x997 = -22486859109LL;
	volatile uint16_t x998 = UINT16_MAX;
	int8_t x999 = -1;
	static uint64_t x1000 = 181805LLU;
	volatile uint64_t t155 = 965495433364157912LLU;

    t155 = (x997+((x998-x999)*x1000));

    if (t155 != 18446744063137464987LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1002 = -1LL;
	int64_t x1004 = 165580911428489LL;

    t156 = (x1001+((x1002-x1003)*x1004));

    if (t156 != 5941LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x1006 = 217;

    t157 = (x1005+((x1006-x1007)*x1008));

    if (t157 != 4294962803U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x1013 = -1;
	static int32_t x1014 = -1;
	int64_t x1015 = 4078105899414LL;
	int32_t x1016 = -3;
	volatile int64_t t158 = 60696868293LL;

    t158 = (x1013+((x1014-x1015)*x1016));

    if (t158 != 12234317698244LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1029 = -1;
	uint16_t x1030 = 1191U;
	uint8_t x1031 = 3U;
	uint32_t x1032 = UINT32_MAX;
	uint32_t t159 = 11100U;

    t159 = (x1029+((x1030-x1031)*x1032));

    if (t159 != 4294966107U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1033 = 6624U;
	volatile uint64_t x1034 = 1085073095LLU;
	static int16_t x1035 = INT16_MIN;
	volatile int64_t x1036 = 2426879927455LL;
	uint64_t t160 = 26316371765574LLU;

    t160 = (x1033+((x1034-x1035)*x1036));

    if (t160 != 13983979611678845817LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1037 = UINT64_MAX;
	volatile int16_t x1038 = INT16_MIN;
	int64_t x1039 = INT64_MIN;
	uint64_t t161 = 274615197943305783LLU;

    t161 = (x1037+((x1038-x1039)*x1040));

    if (t161 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1041 = INT8_MIN;
	static int8_t x1043 = INT8_MIN;

    t162 = (x1041+((x1042-x1043)*x1044));

    if (t162 != -266) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1050 = 11969U;
	int32_t x1051 = 3;
	volatile int8_t x1052 = INT8_MIN;
	int32_t t163 = 1011947676;

    t163 = (x1049+((x1050-x1051)*x1052));

    if (t163 != -1531649) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1054 = 112744027092945LLU;
	uint64_t x1055 = UINT64_MAX;
	static volatile int16_t x1056 = 0;
	uint64_t t164 = 462545489LLU;

    t164 = (x1053+((x1054-x1055)*x1056));

    if (t164 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1058 = 1LLU;
	int8_t x1059 = INT8_MIN;

    t165 = (x1057+((x1058-x1059)*x1060));

    if (t165 != 30019LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x1061 = 1;
	int16_t x1062 = INT16_MAX;
	uint32_t x1063 = UINT32_MAX;
	int16_t x1064 = INT16_MIN;
	uint32_t t166 = 476U;

    t166 = (x1061+((x1062-x1063)*x1064));

    if (t166 != 3221225473U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1066 = -1;
	int64_t x1068 = INT64_MIN;
	volatile int64_t t167 = 77LL;

    t167 = (x1065+((x1066-x1067)*x1068));

    if (t167 != -7LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x1070 = -1;
	uint64_t x1071 = 39258161717636LLU;
	static int16_t x1072 = -1847;

    t168 = (x1069+((x1070-x1071)*x1072));

    if (t168 != 72509824692475534LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1099 = -1LL;
	uint16_t x1100 = 9U;
	static int64_t t169 = 7022261955LL;

    t169 = (x1097+((x1098-x1099)*x1100));

    if (t169 != -2147483405LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1101 = 271747943U;
	int32_t x1102 = INT32_MAX;
	int64_t x1104 = -163782621LL;
	static volatile int64_t t170 = 111605406LL;

    t170 = (x1101+((x1102-x1103)*x1104));

    if (t170 != -351720497531811529LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint64_t x1105 = UINT64_MAX;
	int64_t x1106 = -31LL;
	uint64_t x1107 = 1452033581LLU;
	static int8_t x1108 = -1;
	static uint64_t t171 = 8578864132475725987LLU;

    t171 = (x1105+((x1106-x1107)*x1108));

    if (t171 != 1452033611LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1110 = INT16_MAX;
	uint16_t x1111 = 15981U;
	int8_t x1112 = INT8_MAX;
	int32_t t172 = 102;

    t172 = (x1109+((x1110-x1111)*x1112));

    if (t172 != 2131823) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1117 = -1;
	static int32_t x1120 = -1;
	volatile int32_t t173 = 28016234;

    t173 = (x1117+((x1118-x1119)*x1120));

    if (t173 != 32765) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1121 = -2;
	int32_t x1122 = 6591;
	static uint64_t x1123 = UINT64_MAX;
	static volatile uint64_t t174 = 16872LLU;

    t174 = (x1121+((x1122-x1123)*x1124));

    if (t174 != 432006718LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x1125 = 30U;
	int32_t x1127 = -541;
	int32_t t175 = 1401;

    t175 = (x1125+((x1126-x1127)*x1128));

    if (t175 != 32257) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1134 = UINT32_MAX;
	uint16_t x1135 = 1242U;
	int16_t x1136 = -1;
	volatile uint32_t t176 = 277237533U;

    t176 = (x1133+((x1134-x1135)*x1136));

    if (t176 != 1902U) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int64_t x1141 = INT64_MIN;
	int32_t x1144 = -1;

    t177 = (x1141+((x1142-x1143)*x1144));

    if (t177 != -9223372034707267636LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1146 = 46838549;
	int16_t x1147 = 15;
	uint8_t x1148 = 0U;
	volatile int32_t t178 = 43147583;

    t178 = (x1145+((x1146-x1147)*x1148));

    if (t178 != -4) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x1153 = 59U;
	int64_t x1154 = INT64_MAX;
	int64_t x1155 = INT64_MAX;
	int16_t x1156 = INT16_MAX;
	static volatile int64_t t179 = -28399804136429LL;

    t179 = (x1153+((x1154-x1155)*x1156));

    if (t179 != 59LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1165 = -1;
	volatile int16_t x1166 = INT16_MIN;
	static volatile int8_t x1167 = INT8_MAX;
	int16_t x1168 = INT16_MIN;
	volatile int32_t t180 = -409248104;

    t180 = (x1165+((x1166-x1167)*x1168));

    if (t180 != 1077903359) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1173 = 10522;
	static uint32_t x1174 = UINT32_MAX;
	uint32_t x1176 = 85859101U;

    t181 = (x1173+((x1174-x1175)*x1176));

    if (t181 != 3789884442U) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1196 = INT8_MIN;
	volatile uint64_t t182 = 1LLU;

    t182 = (x1193+((x1194-x1195)*x1196));

    if (t182 != 108906160679997LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1199 = -5721;
	int16_t x1200 = 1;
	int32_t t183 = -889;

    t183 = (x1197+((x1198-x1199)*x1200));

    if (t183 != 5066) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1201 = -1;
	int64_t x1203 = 58LL;
	volatile int8_t x1204 = INT8_MIN;
	volatile int64_t t184 = 8255255141LL;

    t184 = (x1201+((x1202-x1203)*x1204));

    if (t184 != -4130433LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1209 = 126283163U;
	static uint8_t x1210 = 55U;
	volatile uint64_t x1211 = 3452198706LLU;
	static uint8_t x1212 = 63U;

    t185 = (x1209+((x1210-x1211)*x1212));

    if (t185 != 18446743856347319766LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1213 = INT32_MIN;
	uint16_t x1214 = 6U;
	int32_t x1215 = -1;
	int16_t x1216 = INT16_MAX;
	static volatile int32_t t186 = 31;

    t186 = (x1213+((x1214-x1215)*x1216));

    if (t186 != -2147254279) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1229 = UINT16_MAX;
	uint8_t x1230 = UINT8_MAX;
	static uint32_t x1231 = 325U;
	int32_t x1232 = INT32_MAX;
	volatile uint32_t t187 = 958006269U;

    t187 = (x1229+((x1230-x1231)*x1232));

    if (t187 != 65605U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1239 = -5;
	volatile int16_t x1240 = INT16_MAX;
	volatile int32_t t188 = 4155;

    t188 = (x1237+((x1238-x1239)*x1240));

    if (t188 != 131153) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1241 = INT16_MIN;
	uint32_t x1242 = UINT32_MAX;
	static int64_t x1244 = -8151682402362LL;
	int64_t t189 = -248LL;

    t189 = (x1241+((x1242-x1243)*x1244));

    if (t189 != -97820188861112LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x1245 = -1;
	static volatile int8_t x1247 = INT8_MAX;
	static uint64_t x1248 = UINT64_MAX;
	uint64_t t190 = 1325318865051521LLU;

    t190 = (x1245+((x1246-x1247)*x1248));

    if (t190 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1249 = -568LL;
	uint16_t x1251 = 296U;
	volatile uint16_t x1252 = 1U;
	static int64_t t191 = -37158991168047029LL;

    t191 = (x1249+((x1250-x1251)*x1252));

    if (t191 != 64671LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1258 = INT16_MAX;
	int64_t x1259 = -1LL;
	int8_t x1260 = 1;
	int64_t t192 = 516830LL;

    t192 = (x1257+((x1258-x1259)*x1260));

    if (t192 != 74310947LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1261 = -3;
	volatile int8_t x1262 = 2;
	uint8_t x1263 = UINT8_MAX;
	int16_t x1264 = INT16_MAX;
	volatile int32_t t193 = 1002144;

    t193 = (x1261+((x1262-x1263)*x1264));

    if (t193 != -8290054) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1265 = 55;
	static int64_t x1267 = INT64_MIN;
	uint8_t x1268 = 0U;
	int64_t t194 = 16494764LL;

    t194 = (x1265+((x1266-x1267)*x1268));

    if (t194 != 55LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1269 = INT16_MIN;
	static int16_t x1271 = 14162;
	static int16_t x1272 = INT16_MIN;
	volatile uint64_t t195 = 53LLU;

    t195 = (x1269+((x1270-x1271)*x1272));

    if (t195 != 464060416LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1273 = -759;
	int32_t x1274 = INT32_MIN;
	uint32_t x1275 = UINT32_MAX;
	uint32_t x1276 = 259137314U;

    t196 = (x1273+((x1274-x1275)*x1276));

    if (t196 != 259136555U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1278 = INT8_MAX;
	int64_t x1279 = -1LL;
	uint8_t x1280 = 1U;
	volatile int64_t t197 = 696907LL;

    t197 = (x1277+((x1278-x1279)*x1280));

    if (t197 != 131006LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1285 = 53;
	volatile uint8_t x1286 = UINT8_MAX;
	uint8_t x1287 = 3U;
	static uint32_t x1288 = 4U;

    t198 = (x1285+((x1286-x1287)*x1288));

    if (t198 != 1061U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1294 = 134360335144LLU;
	uint16_t x1295 = 403U;
	int32_t x1296 = -1;
	volatile uint64_t t199 = 4977534LLU;

    t199 = (x1293+((x1294-x1295)*x1296));

    if (t199 != 18446743939349184107LLU) { NG(); } else { ; }
	
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

