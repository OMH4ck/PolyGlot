
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

uint32_t x3 = 1375359478U;
uint16_t x6 = UINT16_MAX;
uint16_t x8 = 16321U;
static int16_t x13 = 15346;
int32_t x14 = -919719;
static int32_t t2 = 4;
int16_t x26 = INT16_MIN;
int16_t x27 = -1;
int16_t x45 = 2;
volatile int32_t t6 = -1;
int8_t x53 = 0;
int16_t x55 = INT16_MIN;
int32_t t7 = -31288049;
volatile int64_t x71 = INT64_MAX;
static int32_t x74 = INT32_MAX;
volatile int32_t t11 = 439;
static uint8_t x96 = UINT8_MAX;
volatile int32_t x97 = INT32_MIN;
uint32_t x99 = UINT32_MAX;
int16_t x118 = -25;
volatile uint32_t t16 = 5793107U;
uint8_t x132 = UINT8_MAX;
static int8_t x143 = INT8_MIN;
int32_t t19 = 15;
int32_t t21 = -9020250;
static int8_t x170 = 3;
uint32_t x174 = 1065323669U;
static int8_t x188 = -19;
int16_t x193 = -3523;
static int32_t x196 = INT32_MAX;
int16_t x255 = INT16_MIN;
int32_t t33 = -289;
uint16_t x260 = 9165U;
int8_t x265 = INT8_MIN;
volatile int8_t x286 = 1;
int16_t x313 = INT16_MIN;
int32_t x316 = INT32_MAX;
int16_t x317 = INT16_MAX;
int32_t x320 = -1;
uint8_t x322 = 0U;
int8_t x323 = -1;
static uint32_t x330 = 291U;
volatile int8_t x335 = -1;
static uint32_t x337 = 1533U;
int16_t x340 = -1;
volatile uint32_t t44 = 107U;
volatile int16_t x356 = -1;
volatile int32_t t47 = 254;
static int32_t x369 = INT32_MIN;
int8_t x373 = INT8_MAX;
static int16_t x374 = 82;
volatile int64_t x376 = -1LL;
int8_t x377 = INT8_MIN;
int64_t x379 = INT64_MAX;
static volatile int32_t x402 = INT32_MIN;
static uint32_t x407 = 23693U;
volatile int64_t x416 = -535LL;
int64_t x420 = -1LL;
uint64_t x426 = UINT64_MAX;
uint64_t x427 = 1LLU;
static volatile int64_t x436 = -1LL;
int16_t x437 = INT16_MAX;
volatile int64_t x439 = INT64_MAX;
int64_t x440 = 1LL;
int16_t x474 = INT16_MIN;
int32_t t61 = 187083;
int32_t t62 = 358;
volatile uint16_t x484 = 1U;
volatile int16_t x506 = INT16_MAX;
volatile int32_t t66 = 1494;
static int32_t x527 = -1;
int64_t t69 = -217502923LL;
volatile int32_t t71 = -96803940;
int64_t x567 = -1LL;
volatile int32_t t72 = -104;
int32_t x573 = -1;
int64_t x582 = INT64_MIN;
int8_t x583 = -1;
volatile int32_t t75 = 994;
volatile uint16_t x606 = UINT16_MAX;
int16_t x607 = -1;
uint8_t x611 = 0U;
int64_t x621 = INT64_MIN;
static int8_t x623 = 1;
volatile uint64_t x631 = 8797LLU;
int64_t x650 = INT64_MIN;
int32_t t81 = 28008;
uint16_t x663 = 1144U;
uint8_t x664 = UINT8_MAX;
static uint64_t x694 = 1632422972726351LLU;
volatile uint8_t x702 = 0U;
int64_t x703 = INT64_MIN;
int32_t t87 = -68;
int32_t x713 = INT32_MAX;
static volatile int16_t x714 = -2;
int64_t x725 = INT64_MIN;
volatile int8_t x735 = 58;
uint32_t x750 = 710U;
uint8_t x751 = 9U;
static volatile int64_t t93 = -127410718LL;
static int32_t x781 = 54;
static uint64_t x790 = UINT64_MAX;
static int32_t t99 = -52;
uint64_t x797 = 13651998254259304LLU;
volatile int8_t x806 = -19;
static uint8_t x820 = 9U;
static volatile int64_t t104 = -30232247870225LL;
volatile int32_t x825 = INT32_MAX;
int8_t x827 = -10;
int32_t x828 = -1;
static volatile int32_t x829 = 1;
uint8_t x830 = 43U;
int16_t x831 = INT16_MIN;
uint64_t x833 = 146587994956293400LLU;
int16_t x834 = 2211;
uint16_t x842 = UINT16_MAX;
volatile uint8_t x844 = UINT8_MAX;
int32_t t109 = 201142418;
uint8_t x847 = 80U;
static int16_t x853 = INT16_MAX;
int32_t x863 = 77110;
int32_t x865 = INT32_MIN;
int16_t x869 = INT16_MIN;
uint8_t x876 = 5U;
volatile uint32_t t116 = 436146U;
volatile int32_t x896 = -1;
int32_t t118 = -10;
static volatile int32_t x901 = -1;
int32_t x913 = INT32_MIN;
uint8_t x954 = UINT8_MAX;
uint64_t x976 = 1479033433026135LLU;
int8_t x980 = 3;
int8_t x986 = -2;
uint64_t t127 = 234LLU;
uint8_t x1004 = UINT8_MAX;
int64_t x1007 = INT64_MIN;
volatile int32_t x1019 = -519974389;
volatile int8_t x1052 = -1;
int64_t x1059 = INT64_MIN;
static uint32_t x1060 = 291549U;
static uint64_t t134 = 2950128881388483324LLU;
uint16_t x1083 = 65U;
uint16_t x1084 = 3U;
int64_t t140 = -33849LL;
uint8_t x1119 = 6U;
int16_t x1128 = 1351;
volatile int64_t x1145 = 0LL;
int32_t x1158 = INT32_MAX;
uint32_t x1216 = UINT32_MAX;
volatile int64_t t153 = 4418824LL;
uint64_t x1249 = 16407585172515LLU;
static uint8_t x1270 = 45U;
uint64_t x1271 = 31418359344LLU;
static uint64_t x1272 = UINT64_MAX;
uint64_t t157 = 330LLU;
volatile int64_t x1273 = INT64_MAX;
int32_t x1274 = 12423;
int64_t t158 = -60638014LL;
int32_t x1314 = 76;
uint64_t t160 = 7879635990758LLU;
volatile int16_t x1317 = INT16_MIN;
static volatile int64_t t163 = -250573460LL;
static volatile int32_t x1341 = INT32_MAX;
int32_t t165 = -549;
int32_t t166 = -1307;
int32_t x1378 = INT32_MAX;
volatile uint16_t x1379 = 1913U;
static int32_t x1395 = INT32_MAX;
volatile int32_t t169 = -43514766;
int64_t x1419 = -1527066035407610211LL;
uint16_t x1420 = UINT16_MAX;
volatile uint16_t x1489 = UINT16_MAX;
static volatile uint8_t x1490 = 1U;
int32_t t175 = -23;
int16_t x1497 = 2;
int64_t x1505 = 65672605623723182LL;
static volatile int8_t x1507 = INT8_MAX;
int32_t t179 = 3260;
volatile int64_t x1514 = -36740647LL;
static int64_t x1523 = INT64_MIN;
volatile int64_t x1524 = 23LL;
int16_t x1530 = INT16_MIN;
uint32_t x1531 = UINT32_MAX;
int64_t x1532 = 31757455LL;
int32_t x1534 = INT32_MIN;
static uint16_t x1541 = 1U;
int32_t x1543 = 1;
uint8_t x1545 = 103U;
static int64_t t186 = 29857446479098245LL;
int16_t x1549 = -1;
uint8_t x1562 = 3U;
uint8_t x1577 = 15U;
static int32_t t190 = -8850281;
int64_t x1595 = -1LL;
volatile int32_t t192 = 398;
int32_t x1598 = INT32_MAX;
uint8_t x1600 = 1U;
int32_t t199 = 21;


void f0(void) {
    	uint64_t x1 = 32286030LLU;
	volatile int16_t x2 = -91;
	uint16_t x4 = 1893U;
	static uint64_t t0 = 1531894301270408LLU;

    t0 = (x1%((x2!=x3)&x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 16545U;
	static volatile uint32_t x7 = UINT32_MAX;
	volatile uint32_t t1 = 1235U;

    t1 = (x5%((x6!=x7)&x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x15 = 670327;
	volatile int16_t x16 = 7;

    t2 = (x13%((x14!=x15)&x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x17 = INT16_MIN;
	uint16_t x18 = 198U;
	uint64_t x19 = UINT64_MAX;
	static uint8_t x20 = 83U;
	static volatile int32_t t3 = -575900285;

    t3 = (x17%((x18!=x19)&x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x25 = 5U;
	uint32_t x28 = 267U;
	uint32_t t4 = 376713802U;

    t4 = (x25%((x26!=x27)&x28));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x33 = 94551169325LL;
	volatile uint16_t x34 = 612U;
	volatile int32_t x35 = -11876971;
	int16_t x36 = -1;
	volatile int64_t t5 = 100826037242474LL;

    t5 = (x33%((x34!=x35)&x36));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x46 = 3U;
	volatile int64_t x47 = INT64_MIN;
	static int32_t x48 = 2342383;

    t6 = (x45%((x46!=x47)&x48));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x54 = INT32_MAX;
	volatile int16_t x56 = INT16_MAX;

    t7 = (x53%((x54!=x55)&x56));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x69 = UINT16_MAX;
	uint32_t x70 = 7118530U;
	volatile uint32_t x72 = UINT32_MAX;
	uint32_t t8 = 1750U;

    t8 = (x69%((x70!=x71)&x72));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x73 = 187LL;
	volatile int16_t x75 = 46;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t9 = 18606201181761LLU;

    t9 = (x73%((x74!=x75)&x76));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x81 = 101U;
	int64_t x82 = INT64_MIN;
	volatile uint64_t x83 = 38561042831354854LLU;
	int16_t x84 = 1607;
	static int32_t t10 = -2887;

    t10 = (x81%((x82!=x83)&x84));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x89 = 3U;
	int16_t x90 = INT16_MIN;
	uint64_t x91 = UINT64_MAX;
	int32_t x92 = -1;

    t11 = (x89%((x90!=x91)&x92));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x93 = -1121;
	int16_t x94 = INT16_MAX;
	int8_t x95 = 12;
	int32_t t12 = -183554;

    t12 = (x93%((x94!=x95)&x96));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x98 = INT8_MIN;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t13 = 172008;

    t13 = (x97%((x98!=x99)&x100));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint32_t x105 = 3U;
	uint32_t x106 = 39U;
	int64_t x107 = INT64_MAX;
	int64_t x108 = -1LL;
	volatile int64_t t14 = -147670784877056LL;

    t14 = (x105%((x106!=x107)&x108));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x109 = 15;
	static uint16_t x110 = 4634U;
	static int32_t x111 = -1;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t15 = 80855U;

    t15 = (x109%((x110!=x111)&x112));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x117 = UINT32_MAX;
	volatile int8_t x119 = INT8_MAX;
	int8_t x120 = -55;

    t16 = (x117%((x118!=x119)&x120));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x129 = 5;
	uint8_t x130 = UINT8_MAX;
	uint64_t x131 = 34344717213868954LLU;
	int32_t t17 = 214697499;

    t17 = (x129%((x130!=x131)&x132));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x133 = 2U;
	int64_t x134 = 1330918601910LL;
	int8_t x135 = 51;
	int16_t x136 = 7;
	int32_t t18 = -5;

    t18 = (x133%((x134!=x135)&x136));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x141 = INT8_MAX;
	uint8_t x142 = 0U;
	uint8_t x144 = 3U;

    t19 = (x141%((x142!=x143)&x144));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x149 = 190385861U;
	static int8_t x150 = INT8_MIN;
	volatile uint8_t x151 = UINT8_MAX;
	uint16_t x152 = UINT16_MAX;
	volatile uint32_t t20 = 1926U;

    t20 = (x149%((x150!=x151)&x152));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x165 = INT8_MAX;
	static int16_t x166 = -13;
	int32_t x167 = INT32_MAX;
	int32_t x168 = INT32_MAX;

    t21 = (x165%((x166!=x167)&x168));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x169 = UINT16_MAX;
	uint32_t x171 = UINT32_MAX;
	uint32_t x172 = 471U;
	static volatile uint32_t t22 = 33634584U;

    t22 = (x169%((x170!=x171)&x172));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x173 = -1;
	int32_t x175 = INT32_MIN;
	uint8_t x176 = 101U;
	int32_t t23 = 1057668737;

    t23 = (x173%((x174!=x175)&x176));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x185 = INT16_MAX;
	volatile int32_t x186 = 1;
	static int16_t x187 = -1;
	volatile int32_t t24 = 6969;

    t24 = (x185%((x186!=x187)&x188));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x194 = 2975682787784LLU;
	static uint32_t x195 = 3968884U;
	int32_t t25 = 730;

    t25 = (x193%((x194!=x195)&x196));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x197 = INT8_MAX;
	uint8_t x198 = UINT8_MAX;
	int32_t x199 = INT32_MAX;
	int32_t x200 = -1;
	volatile int32_t t26 = -1;

    t26 = (x197%((x198!=x199)&x200));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x205 = 867LLU;
	static int8_t x206 = -1;
	static int16_t x207 = INT16_MIN;
	volatile uint16_t x208 = 1U;
	static uint64_t t27 = 4003LLU;

    t27 = (x205%((x206!=x207)&x208));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x213 = INT16_MIN;
	int32_t x214 = 1;
	int32_t x215 = 155;
	static int16_t x216 = INT16_MAX;
	int32_t t28 = 384298483;

    t28 = (x213%((x214!=x215)&x216));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x221 = UINT16_MAX;
	uint64_t x222 = 3864LLU;
	int32_t x223 = INT32_MIN;
	uint8_t x224 = UINT8_MAX;
	int32_t t29 = -30818579;

    t29 = (x221%((x222!=x223)&x224));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x225 = 1;
	int32_t x226 = -1283;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MAX;
	static volatile int64_t t30 = 446483LL;

    t30 = (x225%((x226!=x227)&x228));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x229 = -1;
	uint16_t x230 = 1644U;
	int32_t x231 = INT32_MIN;
	volatile uint64_t x232 = 7194047LLU;
	volatile uint64_t t31 = 49312556437694LLU;

    t31 = (x229%((x230!=x231)&x232));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x241 = 2U;
	static int64_t x242 = -1LL;
	volatile uint32_t x243 = UINT32_MAX;
	volatile uint8_t x244 = UINT8_MAX;
	int32_t t32 = 1;

    t32 = (x241%((x242!=x243)&x244));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x253 = INT32_MAX;
	uint32_t x254 = 213354U;
	int8_t x256 = INT8_MAX;

    t33 = (x253%((x254!=x255)&x256));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x257 = UINT8_MAX;
	int64_t x258 = 80862180LL;
	uint16_t x259 = UINT16_MAX;
	static int32_t t34 = 1035478461;

    t34 = (x257%((x258!=x259)&x260));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x261 = 8992;
	static volatile int32_t x262 = -5593308;
	static uint8_t x263 = 7U;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t35 = 279U;

    t35 = (x261%((x262!=x263)&x264));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x266 = INT16_MIN;
	static uint32_t x267 = 6595U;
	int8_t x268 = 1;
	volatile int32_t t36 = 1493341;

    t36 = (x265%((x266!=x267)&x268));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x281 = INT16_MAX;
	volatile int8_t x282 = -1;
	volatile int8_t x283 = -2;
	uint32_t x284 = UINT32_MAX;
	uint32_t t37 = 3057U;

    t37 = (x281%((x282!=x283)&x284));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x285 = 4;
	uint64_t x287 = 61822591158960679LLU;
	int64_t x288 = -25385LL;
	volatile int64_t t38 = 59263172079366812LL;

    t38 = (x285%((x286!=x287)&x288));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x314 = INT64_MIN;
	int8_t x315 = INT8_MIN;
	int32_t t39 = 89183;

    t39 = (x313%((x314!=x315)&x316));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x318 = 0;
	int64_t x319 = -1LL;
	static volatile int32_t t40 = -47;

    t40 = (x317%((x318!=x319)&x320));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x321 = 161162780U;
	int16_t x324 = -5;
	volatile uint32_t t41 = 66818951U;

    t41 = (x321%((x322!=x323)&x324));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x329 = UINT8_MAX;
	volatile int64_t x331 = INT64_MIN;
	volatile int32_t x332 = -1;
	volatile int32_t t42 = 2315;

    t42 = (x329%((x330!=x331)&x332));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x333 = UINT32_MAX;
	int8_t x334 = INT8_MIN;
	volatile uint16_t x336 = 313U;
	uint32_t t43 = 0U;

    t43 = (x333%((x334!=x335)&x336));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x338 = 4049U;
	int32_t x339 = -1;

    t44 = (x337%((x338!=x339)&x340));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x349 = INT32_MIN;
	int32_t x350 = -1;
	int16_t x351 = 30;
	int32_t x352 = 259814935;
	static volatile int32_t t45 = 13310478;

    t45 = (x349%((x350!=x351)&x352));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x353 = INT8_MIN;
	static int64_t x354 = -2220551LL;
	int32_t x355 = INT32_MIN;
	int32_t t46 = 3;

    t46 = (x353%((x354!=x355)&x356));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x365 = -2;
	volatile uint8_t x366 = UINT8_MAX;
	uint8_t x367 = 28U;
	volatile uint8_t x368 = UINT8_MAX;

    t47 = (x365%((x366!=x367)&x368));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x370 = -1;
	static volatile int8_t x371 = -6;
	uint32_t x372 = UINT32_MAX;
	static uint32_t t48 = 13374U;

    t48 = (x369%((x370!=x371)&x372));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x375 = 32667LL;
	volatile int64_t t49 = 133630330121629LL;

    t49 = (x373%((x374!=x375)&x376));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x378 = -1LL;
	uint16_t x380 = 7U;
	volatile int32_t t50 = -255;

    t50 = (x377%((x378!=x379)&x380));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x401 = -4LL;
	int32_t x403 = 1;
	int64_t x404 = -453407725LL;
	int64_t t51 = 504256536337801LL;

    t51 = (x401%((x402!=x403)&x404));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x405 = INT32_MAX;
	uint8_t x406 = UINT8_MAX;
	int64_t x408 = INT64_MAX;
	int64_t t52 = -3LL;

    t52 = (x405%((x406!=x407)&x408));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	volatile int16_t x414 = 22;
	int16_t x415 = 1;
	volatile uint64_t t53 = 59947LLU;

    t53 = (x413%((x414!=x415)&x416));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x417 = 2U;
	int64_t x418 = 649370LL;
	static int32_t x419 = 6404;
	int64_t t54 = 20489119644944LL;

    t54 = (x417%((x418!=x419)&x420));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x425 = UINT32_MAX;
	int8_t x428 = -1;
	uint32_t t55 = 255738424U;

    t55 = (x425%((x426!=x427)&x428));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x433 = 1;
	volatile uint16_t x434 = 604U;
	uint32_t x435 = UINT32_MAX;
	int64_t t56 = -69516384024702LL;

    t56 = (x433%((x434!=x435)&x436));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x438 = -643845005;
	volatile int64_t t57 = -446013034709135265LL;

    t57 = (x437%((x438!=x439)&x440));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	int8_t x450 = 6;
	int32_t x451 = INT32_MIN;
	uint8_t x452 = UINT8_MAX;
	volatile uint32_t t58 = 254397U;

    t58 = (x449%((x450!=x451)&x452));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x453 = 104776958U;
	static uint16_t x454 = 1547U;
	uint32_t x455 = UINT32_MAX;
	volatile uint32_t x456 = 20469597U;
	volatile uint32_t t59 = 1942165U;

    t59 = (x453%((x454!=x455)&x456));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x469 = 0U;
	int32_t x470 = INT32_MIN;
	int16_t x471 = 2438;
	int8_t x472 = -1;
	int32_t t60 = -195972501;

    t60 = (x469%((x470!=x471)&x472));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x473 = INT32_MIN;
	int32_t x475 = INT32_MAX;
	int16_t x476 = INT16_MAX;

    t61 = (x473%((x474!=x475)&x476));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x477 = -1;
	static int64_t x478 = INT64_MIN;
	int32_t x479 = -1;
	static int16_t x480 = INT16_MAX;

    t62 = (x477%((x478!=x479)&x480));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x481 = INT8_MAX;
	uint16_t x482 = 3U;
	int32_t x483 = INT32_MAX;
	int32_t t63 = -37;

    t63 = (x481%((x482!=x483)&x484));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x493 = 17457069729407LL;
	uint64_t x494 = 2297849164443693LLU;
	volatile uint16_t x495 = 222U;
	int16_t x496 = INT16_MAX;
	int64_t t64 = 10LL;

    t64 = (x493%((x494!=x495)&x496));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x505 = INT8_MIN;
	static int64_t x507 = INT64_MIN;
	int8_t x508 = -1;
	volatile int32_t t65 = -3240754;

    t65 = (x505%((x506!=x507)&x508));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x513 = 0U;
	uint32_t x514 = UINT32_MAX;
	int64_t x515 = INT64_MIN;
	int16_t x516 = 1;

    t66 = (x513%((x514!=x515)&x516));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x525 = INT32_MIN;
	int64_t x526 = 127217407LL;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t67 = 303731988;

    t67 = (x525%((x526!=x527)&x528));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x533 = 15281232U;
	int64_t x534 = 88LL;
	uint32_t x535 = 70483844U;
	uint32_t x536 = UINT32_MAX;
	uint32_t t68 = 1645146U;

    t68 = (x533%((x534!=x535)&x536));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x537 = -2878LL;
	int16_t x538 = INT16_MIN;
	int16_t x539 = 4121;
	static int64_t x540 = -1LL;

    t69 = (x537%((x538!=x539)&x540));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x545 = -1;
	int8_t x546 = 21;
	uint8_t x547 = 60U;
	static uint64_t x548 = 14512997LLU;
	static volatile uint64_t t70 = 574LLU;

    t70 = (x545%((x546!=x547)&x548));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x549 = -1397;
	uint16_t x550 = UINT16_MAX;
	static int32_t x551 = INT32_MIN;
	volatile int32_t x552 = -1;

    t71 = (x549%((x550!=x551)&x552));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x565 = 10;
	int8_t x566 = INT8_MAX;
	int8_t x568 = -1;

    t72 = (x565%((x566!=x567)&x568));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x574 = 479436737719405LLU;
	int64_t x575 = INT64_MAX;
	uint16_t x576 = 1U;
	volatile int32_t t73 = -140;

    t73 = (x573%((x574!=x575)&x576));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x577 = INT16_MIN;
	int64_t x578 = INT64_MIN;
	static int16_t x579 = INT16_MAX;
	int8_t x580 = -1;
	volatile int32_t t74 = 596;

    t74 = (x577%((x578!=x579)&x580));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x581 = INT32_MIN;
	volatile int32_t x584 = -15799;

    t75 = (x581%((x582!=x583)&x584));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x605 = INT32_MAX;
	int32_t x608 = 91;
	volatile int32_t t76 = 0;

    t76 = (x605%((x606!=x607)&x608));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x609 = UINT8_MAX;
	volatile int16_t x610 = INT16_MAX;
	int64_t x612 = INT64_MAX;
	volatile int64_t t77 = -24429343091LL;

    t77 = (x609%((x610!=x611)&x612));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x622 = 511696427LLU;
	int32_t x624 = 13;
	int64_t t78 = -235053LL;

    t78 = (x621%((x622!=x623)&x624));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x629 = 36U;
	int32_t x630 = INT32_MIN;
	int16_t x632 = -1;
	int32_t t79 = -20807;

    t79 = (x629%((x630!=x631)&x632));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x633 = -768;
	int64_t x634 = INT64_MIN;
	volatile int32_t x635 = INT32_MIN;
	int8_t x636 = 1;
	volatile int32_t t80 = -83198113;

    t80 = (x633%((x634!=x635)&x636));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x649 = 233U;
	static volatile int8_t x651 = -3;
	int16_t x652 = 31;

    t81 = (x649%((x650!=x651)&x652));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x661 = INT16_MAX;
	uint64_t x662 = UINT64_MAX;
	static int32_t t82 = 22;

    t82 = (x661%((x662!=x663)&x664));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x669 = 296315228U;
	volatile uint8_t x670 = UINT8_MAX;
	volatile uint64_t x671 = UINT64_MAX;
	int16_t x672 = INT16_MAX;
	static volatile uint32_t t83 = 62U;

    t83 = (x669%((x670!=x671)&x672));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x673 = -31276195LL;
	volatile int16_t x674 = -1;
	int32_t x675 = INT32_MAX;
	static int32_t x676 = -1;
	volatile int64_t t84 = -139141170LL;

    t84 = (x673%((x674!=x675)&x676));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x685 = -984;
	uint64_t x686 = 2500963478531969LLU;
	int16_t x687 = -1;
	volatile uint32_t x688 = UINT32_MAX;
	uint32_t t85 = 62U;

    t85 = (x685%((x686!=x687)&x688));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x693 = INT8_MAX;
	volatile int32_t x695 = -1;
	volatile int32_t x696 = -1;
	volatile int32_t t86 = -969517339;

    t86 = (x693%((x694!=x695)&x696));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x701 = 178056997;
	int8_t x704 = INT8_MAX;

    t87 = (x701%((x702!=x703)&x704));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x705 = -1;
	uint64_t x706 = 11193477340354339LLU;
	volatile int16_t x707 = INT16_MIN;
	int32_t x708 = INT32_MAX;
	int32_t t88 = 46;

    t88 = (x705%((x706!=x707)&x708));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x715 = INT32_MIN;
	uint64_t x716 = UINT64_MAX;
	volatile uint64_t t89 = 6077756596734492050LLU;

    t89 = (x713%((x714!=x715)&x716));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x721 = UINT16_MAX;
	int16_t x722 = -7895;
	uint8_t x723 = 1U;
	int64_t x724 = -1LL;
	static int64_t t90 = 2236LL;

    t90 = (x721%((x722!=x723)&x724));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x726 = INT32_MAX;
	uint16_t x727 = 8884U;
	int64_t x728 = INT64_MAX;
	int64_t t91 = -4290960204164520486LL;

    t91 = (x725%((x726!=x727)&x728));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x733 = INT32_MIN;
	volatile int64_t x734 = INT64_MIN;
	static int64_t x736 = -1LL;
	volatile int64_t t92 = 2LL;

    t92 = (x733%((x734!=x735)&x736));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x749 = UINT32_MAX;
	int64_t x752 = INT64_MAX;

    t93 = (x749%((x750!=x751)&x752));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x753 = INT8_MAX;
	int8_t x754 = -1;
	static int8_t x755 = INT8_MIN;
	static int64_t x756 = -1LL;
	int64_t t94 = 64552790821LL;

    t94 = (x753%((x754!=x755)&x756));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x757 = INT32_MIN;
	volatile uint8_t x758 = UINT8_MAX;
	static int64_t x759 = -1LL;
	static volatile int32_t x760 = -1;
	volatile int32_t t95 = -319;

    t95 = (x757%((x758!=x759)&x760));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x761 = -1;
	static int32_t x762 = -4;
	static uint16_t x763 = 386U;
	static uint16_t x764 = UINT16_MAX;
	volatile int32_t t96 = -8344255;

    t96 = (x761%((x762!=x763)&x764));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x773 = UINT16_MAX;
	int32_t x774 = -1;
	int32_t x775 = INT32_MIN;
	volatile uint64_t x776 = 102387563LLU;
	volatile uint64_t t97 = 30270LLU;

    t97 = (x773%((x774!=x775)&x776));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x782 = INT64_MIN;
	uint8_t x783 = 3U;
	uint32_t x784 = 6365U;
	uint32_t t98 = 3U;

    t98 = (x781%((x782!=x783)&x784));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x789 = INT16_MAX;
	int64_t x791 = INT64_MAX;
	int8_t x792 = -1;

    t99 = (x789%((x790!=x791)&x792));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x793 = 8U;
	static int16_t x794 = -15;
	volatile int64_t x795 = INT64_MIN;
	int64_t x796 = -1LL;
	volatile int64_t t100 = 45848865LL;

    t100 = (x793%((x794!=x795)&x796));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x798 = -2;
	int8_t x799 = INT8_MAX;
	static int16_t x800 = 41;
	static uint64_t t101 = 560279118197848092LLU;

    t101 = (x797%((x798!=x799)&x800));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x801 = 1824U;
	uint8_t x802 = 3U;
	uint8_t x803 = UINT8_MAX;
	uint64_t x804 = 104208405LLU;
	volatile uint64_t t102 = 9192349320111722836LLU;

    t102 = (x801%((x802!=x803)&x804));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x805 = -1;
	uint32_t x807 = 4U;
	int16_t x808 = INT16_MAX;
	int32_t t103 = 21995;

    t103 = (x805%((x806!=x807)&x808));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x817 = 395743LL;
	static volatile uint16_t x818 = UINT16_MAX;
	static int16_t x819 = INT16_MIN;

    t104 = (x817%((x818!=x819)&x820));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x821 = -1548;
	static volatile uint64_t x822 = UINT64_MAX;
	uint16_t x823 = 5U;
	static uint32_t x824 = 6339U;
	uint32_t t105 = 154U;

    t105 = (x821%((x822!=x823)&x824));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x826 = -1;
	volatile int32_t t106 = -666041;

    t106 = (x825%((x826!=x827)&x828));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x832 = 2751U;
	volatile int32_t t107 = 1653;

    t107 = (x829%((x830!=x831)&x832));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x835 = INT64_MIN;
	int8_t x836 = -1;
	volatile uint64_t t108 = 1008770LLU;

    t108 = (x833%((x834!=x835)&x836));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x841 = INT16_MIN;
	int8_t x843 = INT8_MAX;

    t109 = (x841%((x842!=x843)&x844));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x845 = 24LL;
	volatile int16_t x846 = -1;
	int64_t x848 = -865303LL;
	volatile int64_t t110 = 80678LL;

    t110 = (x845%((x846!=x847)&x848));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x854 = 0U;
	uint64_t x855 = 1LLU;
	volatile uint64_t x856 = 837640753830675LLU;
	static volatile uint64_t t111 = 42851908838LLU;

    t111 = (x853%((x854!=x855)&x856));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x857 = -4704553;
	volatile int64_t x858 = 1LL;
	uint64_t x859 = UINT64_MAX;
	uint16_t x860 = UINT16_MAX;
	volatile int32_t t112 = 7674;

    t112 = (x857%((x858!=x859)&x860));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x861 = INT16_MIN;
	static int16_t x862 = INT16_MIN;
	volatile uint8_t x864 = 3U;
	int32_t t113 = 14745;

    t113 = (x861%((x862!=x863)&x864));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x866 = UINT16_MAX;
	int8_t x867 = 8;
	uint8_t x868 = 53U;
	volatile int32_t t114 = 357731;

    t114 = (x865%((x866!=x867)&x868));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x870 = 218;
	static volatile uint32_t x871 = UINT32_MAX;
	uint8_t x872 = 1U;
	int32_t t115 = 951691;

    t115 = (x869%((x870!=x871)&x872));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x873 = 734396449U;
	int16_t x874 = INT16_MIN;
	volatile int8_t x875 = 1;

    t116 = (x873%((x874!=x875)&x876));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x893 = 5U;
	int8_t x894 = 12;
	int8_t x895 = INT8_MIN;
	int32_t t117 = 0;

    t117 = (x893%((x894!=x895)&x896));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x897 = 12U;
	int64_t x898 = INT64_MIN;
	static int32_t x899 = -128027811;
	uint16_t x900 = 14153U;

    t118 = (x897%((x898!=x899)&x900));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x902 = -61;
	static int32_t x903 = 2411;
	static int8_t x904 = 1;
	volatile int32_t t119 = 2251401;

    t119 = (x901%((x902!=x903)&x904));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x914 = INT32_MAX;
	volatile uint64_t x915 = 667480891687092LLU;
	int64_t x916 = 20833151468192835LL;
	volatile int64_t t120 = 112111876896LL;

    t120 = (x913%((x914!=x915)&x916));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x921 = -1;
	int32_t x922 = INT32_MIN;
	int32_t x923 = -213169;
	static int8_t x924 = -3;
	volatile int32_t t121 = 9;

    t121 = (x921%((x922!=x923)&x924));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x937 = INT64_MIN;
	int64_t x938 = INT64_MIN;
	static int64_t x939 = -1LL;
	int8_t x940 = INT8_MAX;
	static volatile int64_t t122 = -102534430LL;

    t122 = (x937%((x938!=x939)&x940));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x953 = 1363173897583LLU;
	static uint8_t x955 = 34U;
	static int32_t x956 = 3735;
	volatile uint64_t t123 = 10039533LLU;

    t123 = (x953%((x954!=x955)&x956));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x961 = 4U;
	int32_t x962 = INT32_MIN;
	volatile uint64_t x963 = 10535573LLU;
	static uint16_t x964 = 45U;
	uint32_t t124 = 4443325U;

    t124 = (x961%((x962!=x963)&x964));

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x973 = 1U;
	static int16_t x974 = INT16_MIN;
	int16_t x975 = -106;
	uint64_t t125 = 359983237708474LLU;

    t125 = (x973%((x974!=x975)&x976));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x977 = -248;
	int8_t x978 = -1;
	static int32_t x979 = INT32_MIN;
	volatile int32_t t126 = 122497;

    t126 = (x977%((x978!=x979)&x980));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x985 = INT16_MIN;
	int16_t x987 = -176;
	static uint64_t x988 = 169931776613727LLU;

    t127 = (x985%((x986!=x987)&x988));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x1001 = 35U;
	static volatile int16_t x1002 = 0;
	uint64_t x1003 = 1844418459231873LLU;
	volatile int32_t t128 = 1806;

    t128 = (x1001%((x1002!=x1003)&x1004));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x1005 = -1707;
	int64_t x1006 = INT64_MAX;
	uint32_t x1008 = UINT32_MAX;
	volatile uint32_t t129 = 66933440U;

    t129 = (x1005%((x1006!=x1007)&x1008));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1009 = INT32_MIN;
	int64_t x1010 = INT64_MIN;
	int32_t x1011 = 178;
	static uint32_t x1012 = UINT32_MAX;
	uint32_t t130 = 27587U;

    t130 = (x1009%((x1010!=x1011)&x1012));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x1017 = UINT32_MAX;
	uint64_t x1018 = 46137LLU;
	static uint16_t x1020 = 15U;
	volatile uint32_t t131 = 36802U;

    t131 = (x1017%((x1018!=x1019)&x1020));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1025 = 1;
	int64_t x1026 = INT64_MIN;
	static uint16_t x1027 = UINT16_MAX;
	uint32_t x1028 = UINT32_MAX;
	uint32_t t132 = 7U;

    t132 = (x1025%((x1026!=x1027)&x1028));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1049 = INT16_MIN;
	int8_t x1050 = INT8_MAX;
	uint64_t x1051 = UINT64_MAX;
	volatile int32_t t133 = 7;

    t133 = (x1049%((x1050!=x1051)&x1052));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1057 = 50326257780LLU;
	int8_t x1058 = INT8_MIN;

    t134 = (x1057%((x1058!=x1059)&x1060));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1065 = INT16_MIN;
	int8_t x1066 = INT8_MAX;
	int16_t x1067 = INT16_MAX;
	int8_t x1068 = -7;
	int32_t t135 = 854696;

    t135 = (x1065%((x1066!=x1067)&x1068));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1073 = -1;
	int64_t x1074 = INT64_MAX;
	uint32_t x1075 = UINT32_MAX;
	static int32_t x1076 = -15989;
	volatile int32_t t136 = 9092968;

    t136 = (x1073%((x1074!=x1075)&x1076));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x1077 = INT32_MAX;
	int8_t x1078 = -1;
	volatile int32_t x1079 = INT32_MIN;
	static uint64_t x1080 = 1LLU;
	uint64_t t137 = 971824LLU;

    t137 = (x1077%((x1078!=x1079)&x1080));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x1081 = 6U;
	int32_t x1082 = INT32_MIN;
	int32_t t138 = -1;

    t138 = (x1081%((x1082!=x1083)&x1084));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x1093 = -1;
	volatile int16_t x1094 = -1;
	int64_t x1095 = INT64_MIN;
	int16_t x1096 = 6461;
	volatile int32_t t139 = 94;

    t139 = (x1093%((x1094!=x1095)&x1096));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x1101 = -1;
	static volatile uint64_t x1102 = 203652LLU;
	int8_t x1103 = INT8_MIN;
	int64_t x1104 = -3928097LL;

    t140 = (x1101%((x1102!=x1103)&x1104));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1117 = INT16_MIN;
	static int32_t x1118 = INT32_MAX;
	static uint32_t x1120 = 526481U;
	volatile uint32_t t141 = 532443U;

    t141 = (x1117%((x1118!=x1119)&x1120));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x1125 = 4722263388016LLU;
	int32_t x1126 = INT32_MIN;
	int8_t x1127 = -2;
	static uint64_t t142 = 500468114501390030LLU;

    t142 = (x1125%((x1126!=x1127)&x1128));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1133 = -1;
	volatile uint8_t x1134 = 30U;
	int16_t x1135 = 7610;
	static uint64_t x1136 = UINT64_MAX;
	static volatile uint64_t t143 = 138508311191330LLU;

    t143 = (x1133%((x1134!=x1135)&x1136));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1146 = -1063;
	uint8_t x1147 = 1U;
	int16_t x1148 = -1;
	int64_t t144 = 27209894LL;

    t144 = (x1145%((x1146!=x1147)&x1148));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x1149 = INT64_MIN;
	static int32_t x1150 = INT32_MIN;
	int8_t x1151 = INT8_MIN;
	int32_t x1152 = -1;
	volatile int64_t t145 = -1LL;

    t145 = (x1149%((x1150!=x1151)&x1152));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1157 = UINT16_MAX;
	int64_t x1159 = INT64_MIN;
	int16_t x1160 = -1;
	static volatile int32_t t146 = -87;

    t146 = (x1157%((x1158!=x1159)&x1160));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1161 = INT16_MIN;
	int64_t x1162 = INT64_MIN;
	uint64_t x1163 = 17498589806LLU;
	static volatile int64_t x1164 = INT64_MAX;
	volatile int64_t t147 = -176202LL;

    t147 = (x1161%((x1162!=x1163)&x1164));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x1185 = INT16_MAX;
	static uint8_t x1186 = 71U;
	static volatile int8_t x1187 = -22;
	static volatile int16_t x1188 = -27;
	static int32_t t148 = -534857191;

    t148 = (x1185%((x1186!=x1187)&x1188));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1197 = INT16_MIN;
	uint64_t x1198 = 1254LLU;
	int32_t x1199 = INT32_MAX;
	uint16_t x1200 = UINT16_MAX;
	int32_t t149 = -162;

    t149 = (x1197%((x1198!=x1199)&x1200));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1201 = 23U;
	static int16_t x1202 = INT16_MIN;
	static int32_t x1203 = -1;
	uint16_t x1204 = 115U;
	static int32_t t150 = -42672;

    t150 = (x1201%((x1202!=x1203)&x1204));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x1209 = 2715291551981487031LLU;
	uint16_t x1210 = UINT16_MAX;
	int16_t x1211 = INT16_MAX;
	uint16_t x1212 = UINT16_MAX;
	volatile uint64_t t151 = 502954699417737LLU;

    t151 = (x1209%((x1210!=x1211)&x1212));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1213 = INT64_MIN;
	int64_t x1214 = INT64_MIN;
	static uint8_t x1215 = 1U;
	static int64_t t152 = 14LL;

    t152 = (x1213%((x1214!=x1215)&x1216));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1229 = INT64_MIN;
	static int32_t x1230 = INT32_MIN;
	uint64_t x1231 = 8533081301432LLU;
	uint16_t x1232 = 93U;

    t153 = (x1229%((x1230!=x1231)&x1232));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1233 = 5;
	int64_t x1234 = INT64_MIN;
	int8_t x1235 = -3;
	int32_t x1236 = INT32_MAX;
	int32_t t154 = 53;

    t154 = (x1233%((x1234!=x1235)&x1236));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x1250 = -1LL;
	uint64_t x1251 = 1972882558166114LLU;
	int16_t x1252 = INT16_MAX;
	volatile uint64_t t155 = 165422LLU;

    t155 = (x1249%((x1250!=x1251)&x1252));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1261 = 4124LL;
	int32_t x1262 = INT32_MAX;
	int32_t x1263 = 2;
	uint8_t x1264 = 3U;
	int64_t t156 = 554410243829LL;

    t156 = (x1261%((x1262!=x1263)&x1264));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1269 = 28;

    t157 = (x1269%((x1270!=x1271)&x1272));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x1275 = 1;
	uint8_t x1276 = 19U;

    t158 = (x1273%((x1274!=x1275)&x1276));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x1301 = INT8_MIN;
	volatile int16_t x1302 = -1;
	volatile int8_t x1303 = INT8_MIN;
	static int8_t x1304 = -3;
	volatile int32_t t159 = -26646;

    t159 = (x1301%((x1302!=x1303)&x1304));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1313 = INT8_MAX;
	static uint32_t x1315 = 192U;
	uint64_t x1316 = UINT64_MAX;

    t160 = (x1313%((x1314!=x1315)&x1316));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1318 = INT32_MAX;
	int16_t x1319 = -1;
	uint32_t x1320 = UINT32_MAX;
	static volatile uint32_t t161 = 1360312487U;

    t161 = (x1317%((x1318!=x1319)&x1320));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1325 = 1;
	uint32_t x1326 = 1U;
	uint16_t x1327 = 5113U;
	int16_t x1328 = -275;
	static int32_t t162 = -24;

    t162 = (x1325%((x1326!=x1327)&x1328));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1333 = 1329LL;
	int32_t x1334 = -1;
	volatile uint8_t x1335 = 6U;
	volatile int16_t x1336 = INT16_MAX;

    t163 = (x1333%((x1334!=x1335)&x1336));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1337 = UINT32_MAX;
	int8_t x1338 = INT8_MAX;
	uint16_t x1339 = 1882U;
	int32_t x1340 = -1;
	volatile uint32_t t164 = 225619U;

    t164 = (x1337%((x1338!=x1339)&x1340));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1342 = INT8_MIN;
	volatile int16_t x1343 = -1;
	static int8_t x1344 = -1;

    t165 = (x1341%((x1342!=x1343)&x1344));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1369 = -2;
	static volatile int64_t x1370 = INT64_MAX;
	int8_t x1371 = INT8_MIN;
	static volatile int16_t x1372 = -1;

    t166 = (x1369%((x1370!=x1371)&x1372));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1377 = INT8_MIN;
	static int8_t x1380 = -1;
	int32_t t167 = -8050;

    t167 = (x1377%((x1378!=x1379)&x1380));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1393 = INT32_MIN;
	static uint8_t x1394 = UINT8_MAX;
	static uint64_t x1396 = 36474163894247LLU;
	uint64_t t168 = 1087509208741356375LLU;

    t168 = (x1393%((x1394!=x1395)&x1396));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1397 = INT32_MAX;
	int8_t x1398 = INT8_MIN;
	int8_t x1399 = 1;
	static int32_t x1400 = -5873701;

    t169 = (x1397%((x1398!=x1399)&x1400));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x1417 = UINT32_MAX;
	uint8_t x1418 = UINT8_MAX;
	uint32_t t170 = 15178394U;

    t170 = (x1417%((x1418!=x1419)&x1420));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x1437 = -1;
	int64_t x1438 = INT64_MAX;
	uint16_t x1439 = UINT16_MAX;
	static int64_t x1440 = 1192566471567LL;
	static int64_t t171 = -2809683133950571LL;

    t171 = (x1437%((x1438!=x1439)&x1440));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1449 = 923U;
	int32_t x1450 = INT32_MIN;
	int32_t x1451 = -1;
	int64_t x1452 = 1806577218861303859LL;
	volatile int64_t t172 = -178612549031948881LL;

    t172 = (x1449%((x1450!=x1451)&x1452));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1465 = 3U;
	int16_t x1466 = 3;
	volatile int32_t x1467 = INT32_MIN;
	static volatile uint16_t x1468 = UINT16_MAX;
	int32_t t173 = -1646;

    t173 = (x1465%((x1466!=x1467)&x1468));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x1473 = INT32_MIN;
	int16_t x1474 = -1;
	static int64_t x1475 = 262781590LL;
	static int16_t x1476 = INT16_MAX;
	volatile int32_t t174 = -23765898;

    t174 = (x1473%((x1474!=x1475)&x1476));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1491 = INT64_MAX;
	volatile int8_t x1492 = -1;

    t175 = (x1489%((x1490!=x1491)&x1492));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1498 = INT64_MAX;
	uint8_t x1499 = UINT8_MAX;
	uint16_t x1500 = UINT16_MAX;
	volatile int32_t t176 = 7;

    t176 = (x1497%((x1498!=x1499)&x1500));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1501 = UINT64_MAX;
	int32_t x1502 = 151658790;
	volatile int16_t x1503 = INT16_MIN;
	static uint64_t x1504 = UINT64_MAX;
	volatile uint64_t t177 = 20LLU;

    t177 = (x1501%((x1502!=x1503)&x1504));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1506 = -1LL;
	uint32_t x1508 = UINT32_MAX;
	int64_t t178 = -516276LL;

    t178 = (x1505%((x1506!=x1507)&x1508));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1509 = UINT8_MAX;
	volatile uint64_t x1510 = 18869LLU;
	int64_t x1511 = -65833272754640LL;
	int16_t x1512 = -1;

    t179 = (x1509%((x1510!=x1511)&x1512));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1513 = -912334268728LL;
	int64_t x1515 = INT64_MIN;
	int8_t x1516 = INT8_MAX;
	int64_t t180 = -1710LL;

    t180 = (x1513%((x1514!=x1515)&x1516));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1521 = INT16_MAX;
	uint32_t x1522 = 343771U;
	volatile int64_t t181 = -3838826159212571942LL;

    t181 = (x1521%((x1522!=x1523)&x1524));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1525 = UINT16_MAX;
	int32_t x1526 = INT32_MIN;
	static int32_t x1527 = -464031288;
	int64_t x1528 = -1LL;
	static volatile int64_t t182 = -1LL;

    t182 = (x1525%((x1526!=x1527)&x1528));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1529 = INT32_MIN;
	volatile int64_t t183 = -69LL;

    t183 = (x1529%((x1530!=x1531)&x1532));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1533 = INT16_MAX;
	int16_t x1535 = INT16_MAX;
	volatile int64_t x1536 = INT64_MAX;
	int64_t t184 = -399505LL;

    t184 = (x1533%((x1534!=x1535)&x1536));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x1542 = 144085107LL;
	int8_t x1544 = INT8_MAX;
	static volatile int32_t t185 = -85292;

    t185 = (x1541%((x1542!=x1543)&x1544));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1546 = 5;
	int64_t x1547 = INT64_MIN;
	int64_t x1548 = INT64_MAX;

    t186 = (x1545%((x1546!=x1547)&x1548));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x1550 = 102341610927054LLU;
	static uint32_t x1551 = 6533931U;
	static volatile int64_t x1552 = INT64_MAX;
	int64_t t187 = -498364380LL;

    t187 = (x1549%((x1550!=x1551)&x1552));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1557 = -82;
	volatile int64_t x1558 = INT64_MIN;
	int16_t x1559 = -1;
	int16_t x1560 = -57;
	volatile int32_t t188 = 33303373;

    t188 = (x1557%((x1558!=x1559)&x1560));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x1561 = 411U;
	int64_t x1563 = 2316153153056832317LL;
	int16_t x1564 = INT16_MAX;
	uint32_t t189 = 110567U;

    t189 = (x1561%((x1562!=x1563)&x1564));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1578 = INT16_MIN;
	static int32_t x1579 = -1;
	int8_t x1580 = -1;

    t190 = (x1577%((x1578!=x1579)&x1580));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1585 = UINT8_MAX;
	uint8_t x1586 = 58U;
	volatile int64_t x1587 = INT64_MIN;
	volatile int16_t x1588 = -83;
	int32_t t191 = 1139048;

    t191 = (x1585%((x1586!=x1587)&x1588));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1593 = 2551;
	int32_t x1594 = -221767321;
	uint8_t x1596 = UINT8_MAX;

    t192 = (x1593%((x1594!=x1595)&x1596));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1597 = -437;
	uint16_t x1599 = 52U;
	volatile int32_t t193 = -41;

    t193 = (x1597%((x1598!=x1599)&x1600));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x1601 = INT8_MAX;
	static volatile int64_t x1602 = INT64_MIN;
	static uint16_t x1603 = 0U;
	uint16_t x1604 = 3U;
	volatile int32_t t194 = 99418452;

    t194 = (x1601%((x1602!=x1603)&x1604));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x1605 = UINT8_MAX;
	static volatile int16_t x1606 = -1;
	int64_t x1607 = -22510299836LL;
	static int8_t x1608 = 11;
	int32_t t195 = 24516;

    t195 = (x1605%((x1606!=x1607)&x1608));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x1609 = INT64_MIN;
	volatile int32_t x1610 = -1;
	uint16_t x1611 = 10U;
	int32_t x1612 = INT32_MAX;
	volatile int64_t t196 = -84796778801877LL;

    t196 = (x1609%((x1610!=x1611)&x1612));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1613 = -1;
	volatile int16_t x1614 = 2;
	uint8_t x1615 = 1U;
	int64_t x1616 = 116873471LL;
	volatile int64_t t197 = 22520234LL;

    t197 = (x1613%((x1614!=x1615)&x1616));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1617 = INT32_MIN;
	int64_t x1618 = INT64_MAX;
	volatile int16_t x1619 = INT16_MIN;
	uint32_t x1620 = UINT32_MAX;
	static volatile uint32_t t198 = 68896U;

    t198 = (x1617%((x1618!=x1619)&x1620));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1621 = 14;
	static int32_t x1622 = INT32_MIN;
	int64_t x1623 = INT64_MIN;
	volatile int32_t x1624 = INT32_MAX;

    t199 = (x1621%((x1622!=x1623)&x1624));

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

