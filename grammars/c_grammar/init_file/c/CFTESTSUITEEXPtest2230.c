
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

volatile uint16_t x143 = UINT16_MAX;
uint8_t x166 = 3U;
volatile int8_t x167 = 13;
volatile int64_t x270 = 67126650LL;
static int16_t x272 = 1;
volatile int8_t x277 = INT8_MIN;
uint8_t x302 = 7U;
static uint16_t x303 = UINT16_MAX;
int8_t x356 = 0;
int16_t x357 = INT16_MIN;
int8_t x360 = 1;
int8_t x408 = 0;
int16_t x431 = INT16_MIN;
uint8_t x432 = 0U;
uint16_t x488 = 5U;
static int16_t x507 = 1;
uint16_t x508 = 0U;
int32_t t13 = 2073683;
static uint16_t x520 = 18U;
volatile int64_t x678 = INT64_MAX;
static volatile uint64_t t16 = 109LLU;
uint64_t x692 = 0LLU;
static int8_t x742 = INT8_MIN;
uint16_t x744 = 5U;
uint8_t x804 = 31U;
static uint8_t x900 = 1U;
volatile uint32_t x1000 = 17U;
static volatile int32_t t22 = 192256;
int16_t x1015 = INT16_MAX;
uint8_t x1062 = UINT8_MAX;
int8_t x1063 = INT8_MIN;
volatile int32_t t25 = -89965;
volatile int64_t x1121 = -1LL;
volatile int64_t t27 = -787284003980031LL;
int8_t x1139 = 13;
static uint16_t x1208 = 28U;
uint8_t x1316 = 4U;
volatile int64_t t32 = 2646981841LL;
uint32_t x1327 = UINT32_MAX;
int32_t x1362 = INT32_MAX;
uint16_t x1370 = UINT16_MAX;
int64_t x1461 = INT64_MIN;
int64_t t38 = -63977376LL;
uint8_t x1708 = 8U;
uint32_t x1747 = 58200U;
static uint32_t x1814 = 739705U;
int64_t x1815 = -2097666437773470LL;
int64_t x1853 = INT64_MIN;
uint8_t x1855 = 1U;
uint64_t x1883 = UINT64_MAX;
static int8_t x1884 = 0;
static volatile int32_t x1918 = -1;
uint8_t x1919 = 1U;
uint64_t t49 = 172158770064665760LLU;
static int8_t x2002 = INT8_MAX;
volatile uint32_t x2025 = UINT32_MAX;
uint64_t x2027 = 81872LLU;
int16_t x2052 = 2;
int16_t x2138 = INT16_MAX;
int16_t x2139 = -13;
uint32_t x2391 = 3281483U;
int32_t x2629 = INT32_MIN;
uint8_t x2640 = 2U;
static uint64_t t62 = 3418972822960046LLU;
int8_t x2797 = 1;
uint32_t x2798 = 4052269U;
volatile int8_t x2800 = 1;
uint64_t x2827 = 50LLU;
int16_t x2828 = 3;
uint32_t x2918 = 55U;
uint64_t t66 = 39801LLU;
int8_t x3022 = 3;
uint64_t t69 = 1021977LLU;
int8_t x3260 = 12;
static volatile uint32_t t70 = 5U;
static volatile int64_t t72 = -11099063703LL;
uint32_t x3427 = 2U;
uint16_t x3442 = UINT16_MAX;
volatile int64_t x3485 = INT64_MIN;
int64_t t76 = -9LL;
static int8_t x3495 = -1;
int64_t x3529 = INT64_MIN;
static uint16_t x3530 = 2706U;
volatile uint32_t x3532 = 8U;
volatile int64_t t78 = 5090217483610379LL;
static uint32_t x3551 = 128U;
static volatile uint64_t x3552 = 1LLU;
volatile int32_t t80 = -15200853;
volatile uint8_t x3569 = 3U;
int32_t x3653 = INT32_MIN;
static volatile uint8_t x3747 = 39U;
int8_t x3776 = 0;
int64_t x3814 = 92368529938720LL;
volatile int32_t x3815 = INT32_MIN;
volatile uint64_t t87 = 48897297LLU;
static int16_t x3869 = INT16_MIN;
int8_t x3986 = INT8_MAX;
static int64_t t89 = 1LL;
uint8_t x4065 = 68U;
uint64_t t93 = 16824609484978LLU;
static volatile int8_t x4202 = -15;
uint64_t x4203 = 9LLU;
static int8_t x4273 = INT8_MIN;
int16_t x4411 = -1588;
int64_t x4475 = -836523LL;
static int64_t t98 = 1194891LL;
volatile uint64_t t99 = 2408505707980187LLU;
static int64_t x4639 = -16025994089LL;
uint8_t x4699 = 1U;
volatile uint64_t t101 = 31666735769557253LLU;
uint64_t t102 = 44202456021LLU;
uint64_t x4902 = UINT64_MAX;
int16_t x4903 = -928;
static uint64_t t105 = 194344098LLU;
int32_t x5039 = -1;
uint32_t x5153 = UINT32_MAX;
volatile uint16_t x5156 = 0U;
int32_t x5271 = -1;
int32_t x5286 = INT32_MAX;
int16_t x5421 = -1;
int16_t x5422 = 2254;
int64_t x5485 = -160754403LL;
int64_t x5513 = -14587316LL;
int64_t t114 = -210557632835105697LL;
static int16_t x5526 = -1580;
volatile int16_t x5527 = INT16_MAX;
volatile int64_t x5743 = INT64_MAX;
volatile int64_t t123 = 2311784930787149LL;
uint32_t x5758 = 103898591U;
int64_t t124 = -176631LL;
static int16_t x5837 = INT16_MIN;
uint64_t t126 = 556972857099162459LLU;
int8_t x5949 = INT8_MIN;
volatile int32_t x5950 = -1;
uint16_t x6323 = UINT16_MAX;
volatile uint8_t x6324 = 18U;
int64_t x6389 = 1025573LL;
int64_t x6390 = INT64_MAX;
volatile int32_t x6429 = INT32_MIN;
int16_t x6446 = 816;
int64_t t133 = 198LL;
int64_t x6490 = 32558993750223LL;
uint32_t x6514 = 930548U;
uint16_t x6515 = 37U;
uint64_t x6695 = UINT64_MAX;
uint64_t t137 = 1412006893932229189LLU;
int64_t x6754 = 48828030813LL;
int64_t x6755 = -184788LL;
uint64_t x6810 = 23369836LLU;
int8_t x6811 = INT8_MIN;
int16_t x6823 = 89;
uint16_t x6824 = 9U;
volatile int64_t t141 = 577163596863LL;
static volatile uint64_t t142 = 15307515711426LLU;
volatile uint16_t x6958 = UINT16_MAX;
volatile int64_t t144 = -8473LL;
static volatile uint32_t x7052 = 0U;
volatile uint16_t x7106 = 3408U;
volatile int64_t t148 = -668695881966431LL;
static int16_t x7110 = INT16_MAX;
int16_t x7112 = 1;
int64_t x7165 = -1LL;
uint8_t x7167 = UINT8_MAX;
uint64_t x7170 = UINT64_MAX;
uint8_t x7172 = 2U;
int16_t x7187 = -1;
volatile int64_t t152 = -3LL;
volatile int16_t x7206 = 2641;
int32_t t153 = 5619168;
static int32_t x7216 = 9;
volatile int16_t x7221 = -1;
volatile int32_t t155 = 967020;
static volatile int32_t x7257 = -1;
volatile int8_t x7258 = -18;
int8_t x7289 = -46;
static volatile int8_t x7350 = -8;
int8_t x7389 = INT8_MIN;
volatile int32_t t162 = 7594;
int32_t x7532 = 3;
int64_t t163 = 11096719816LL;
volatile int64_t x7645 = -1LL;
static volatile int8_t x7813 = 43;
volatile int32_t t166 = -1;
uint64_t t167 = 406980511LLU;
int64_t t171 = -1773507564LL;
static int32_t x8245 = INT32_MIN;
uint8_t x8246 = UINT8_MAX;
uint64_t x8323 = 26LLU;
int16_t x8553 = INT16_MAX;
int32_t x8555 = INT32_MIN;
int64_t x8559 = 108882337276440LL;
uint32_t x8672 = 44U;
int16_t x8723 = 1126;
int8_t x8794 = INT8_MAX;
volatile int32_t x8795 = 23994;
volatile int32_t t180 = 927;
uint8_t x9062 = UINT8_MAX;
static uint64_t x9147 = 1169352372729324919LLU;
uint32_t x9285 = UINT32_MAX;
int32_t x9286 = -1;
int64_t x9287 = 2487405LL;
uint8_t x9397 = UINT8_MAX;
uint8_t x9400 = 2U;
volatile int32_t t190 = -1;
uint64_t x9441 = 22537640977LLU;
uint16_t x9482 = UINT16_MAX;
int32_t t192 = 2703275;
static int8_t x9506 = 6;
uint32_t x9709 = UINT32_MAX;
uint8_t x9712 = 0U;
volatile int64_t x9822 = INT64_MAX;
volatile int32_t x9824 = 0;
uint64_t x9863 = UINT64_MAX;


void f0(void) {
    	int8_t x89 = INT8_MIN;
	volatile uint32_t x90 = 11901U;
	volatile int8_t x91 = 3;
	int8_t x92 = 1;
	static uint32_t t0 = 7871U;

    t0 = (x89/((x90&x91)<<x92));

    if (t0 != 2147483584U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	uint32_t x111 = 145307U;
	int8_t x112 = 1;
	volatile uint32_t t1 = 1288447U;

    t1 = (x109/((x110&x111)<<x112));

    if (t1 != 14778U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x141 = -1LL;
	int8_t x142 = INT8_MIN;
	static uint64_t x144 = 0LLU;
	volatile int64_t t2 = 1LL;

    t2 = (x141/((x142&x143)<<x144));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x165 = 399728LLU;
	uint8_t x168 = 3U;
	static uint64_t t3 = 348392992LLU;

    t3 = (x165/((x166&x167)<<x168));

    if (t3 != 49966LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x269 = -234;
	int8_t x271 = INT8_MAX;
	volatile int64_t t4 = -1349117205608LL;

    t4 = (x269/((x270&x271)<<x272));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x278 = 4774U;
	static uint32_t x279 = 277176U;
	static int64_t x280 = 0LL;
	static volatile uint32_t t5 = 30073978U;

    t5 = (x277/((x278&x279)<<x280));

    if (t5 != 900790U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x301 = 22U;
	int8_t x304 = 11;
	int32_t t6 = -3804947;

    t6 = (x301/((x302&x303)<<x304));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x353 = 99178152144258LLU;
	static uint32_t x354 = 49454U;
	volatile int16_t x355 = INT16_MIN;
	volatile uint64_t t7 = 138105538528053LLU;

    t7 = (x353/((x354&x355)<<x356));

    if (t7 != 3026677006LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x358 = INT8_MIN;
	volatile int32_t x359 = 12724;
	int32_t t8 = 721;

    t8 = (x357/((x358&x359)<<x360));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x369 = 0U;
	volatile uint8_t x370 = UINT8_MAX;
	int8_t x371 = INT8_MIN;
	static uint32_t x372 = 1U;
	int32_t t9 = 522;

    t9 = (x369/((x370&x371)<<x372));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x405 = 500612220LLU;
	int8_t x406 = 20;
	uint32_t x407 = 893767U;
	static uint64_t t10 = 267259120152130731LLU;

    t10 = (x405/((x406&x407)<<x408));

    if (t10 != 125153055LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x429 = UINT64_MAX;
	static volatile int64_t x430 = INT64_MAX;
	volatile uint64_t t11 = 69415578978823812LLU;

    t11 = (x429/((x430&x431)<<x432));

    if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x485 = -1;
	int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MAX;
	volatile int32_t t12 = 747064;

    t12 = (x485/((x486&x487)<<x488));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x505 = 52242;
	uint16_t x506 = UINT16_MAX;

    t13 = (x505/((x506&x507)<<x508));

    if (t13 != 52242) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x517 = -61;
	static int64_t x518 = -7423366894293LL;
	static int32_t x519 = 79540;
	int64_t t14 = -3696387212419993513LL;

    t14 = (x517/((x518&x519)<<x520));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x665 = 77U;
	int32_t x666 = -1;
	static uint64_t x667 = 9480158149851259LLU;
	uint8_t x668 = 1U;
	uint64_t t15 = 7260113753897222LLU;

    t15 = (x665/((x666&x667)<<x668));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x677 = 124LLU;
	uint32_t x679 = 4510U;
	uint8_t x680 = 43U;

    t16 = (x677/((x678&x679)<<x680));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x689 = -1;
	int16_t x690 = INT16_MAX;
	uint32_t x691 = 73256701U;
	volatile uint32_t t17 = 36U;

    t17 = (x689/((x690&x691)<<x692));

    if (t17 != 212401U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x741 = 0LL;
	uint64_t x743 = 251894766328755LLU;
	static volatile uint64_t t18 = 55951040935791LLU;

    t18 = (x741/((x742&x743)<<x744));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x801 = 36317U;
	int64_t x802 = 125123973LL;
	int64_t x803 = INT64_MAX;
	int64_t t19 = 1544572LL;

    t19 = (x801/((x802&x803)<<x804));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x897 = -675976196010498LL;
	int64_t x898 = -1LL;
	int8_t x899 = INT8_MAX;
	int64_t t20 = 9578150229012LL;

    t20 = (x897/((x898&x899)<<x900));

    if (t20 != -2661323606340LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x945 = 311U;
	uint32_t x946 = UINT32_MAX;
	static uint16_t x947 = UINT16_MAX;
	volatile int8_t x948 = 0;
	volatile uint32_t t21 = 204055U;

    t21 = (x945/((x946&x947)<<x948));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x997 = INT16_MAX;
	int16_t x998 = 1;
	int8_t x999 = INT8_MAX;

    t22 = (x997/((x998&x999)<<x1000));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x1013 = 3024139739338376597LL;
	static uint64_t x1014 = 1712158805LLU;
	uint16_t x1016 = 2U;
	static volatile uint64_t t23 = 27271594146359477LLU;

    t23 = (x1013/((x1014&x1015)<<x1016));

    if (t23 != 24542604604271LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1025 = -1;
	uint64_t x1026 = 302036878442921322LLU;
	uint16_t x1027 = 82U;
	static int64_t x1028 = 4LL;
	uint64_t t24 = 340935LLU;

    t24 = (x1025/((x1026&x1027)<<x1028));

    if (t24 != 17468507645558287LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1061 = INT32_MIN;
	uint8_t x1064 = 2U;

    t25 = (x1061/((x1062&x1063)<<x1064));

    if (t25 != -4194304) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1113 = -1LL;
	uint64_t x1114 = 24727483544LLU;
	uint64_t x1115 = UINT64_MAX;
	uint8_t x1116 = 54U;
	uint64_t t26 = 449651437LLU;

    t26 = (x1113/((x1114&x1115)<<x1116));

    if (t26 != 6LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1122 = 8850346LL;
	int16_t x1123 = -1;
	static int64_t x1124 = 0LL;

    t27 = (x1121/((x1122&x1123)<<x1124));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1137 = INT16_MAX;
	static int32_t x1138 = -10533;
	int16_t x1140 = 3;
	static int32_t t28 = -683;

    t28 = (x1137/((x1138&x1139)<<x1140));

    if (t28 != 455) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x1145 = -1277;
	static int8_t x1146 = 3;
	uint16_t x1147 = 13U;
	uint8_t x1148 = 6U;
	int32_t t29 = 18;

    t29 = (x1145/((x1146&x1147)<<x1148));

    if (t29 != -19) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x1169 = 3289LLU;
	int64_t x1170 = INT64_MAX;
	int16_t x1171 = -3;
	int32_t x1172 = 0;
	volatile uint64_t t30 = 83162307575LLU;

    t30 = (x1169/((x1170&x1171)<<x1172));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x1205 = UINT32_MAX;
	int16_t x1206 = -9412;
	uint32_t x1207 = 15321U;
	static volatile uint32_t t31 = 1056U;

    t31 = (x1205/((x1206&x1207)<<x1208));

    if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1313 = INT64_MIN;
	static volatile int16_t x1314 = INT16_MAX;
	static uint16_t x1315 = 31141U;

    t32 = (x1313/((x1314&x1315)<<x1316));

    if (t32 != -18511311528320LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1325 = INT16_MIN;
	int64_t x1326 = INT64_MAX;
	uint32_t x1328 = 29U;
	volatile int64_t t33 = 9LL;

    t33 = (x1325/((x1326&x1327)<<x1328));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x1361 = UINT16_MAX;
	uint8_t x1363 = UINT8_MAX;
	static uint8_t x1364 = 11U;
	int32_t t34 = 264395420;

    t34 = (x1361/((x1362&x1363)<<x1364));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1369 = INT32_MIN;
	volatile int16_t x1371 = INT16_MIN;
	int16_t x1372 = 13;
	static int32_t t35 = 831;

    t35 = (x1369/((x1370&x1371)<<x1372));

    if (t35 != -8) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1462 = -1;
	int32_t x1463 = 27;
	int8_t x1464 = 3;
	volatile int64_t t36 = 4861959540589418LL;

    t36 = (x1461/((x1462&x1463)<<x1464));

    if (t36 != -42700796466920258LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x1497 = 4U;
	uint8_t x1498 = 19U;
	static volatile uint32_t x1499 = 1912U;
	uint32_t x1500 = 0U;
	uint32_t t37 = 3492U;

    t37 = (x1497/((x1498&x1499)<<x1500));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x1585 = 19353316717LL;
	static int16_t x1586 = INT16_MAX;
	int8_t x1587 = INT8_MIN;
	static uint16_t x1588 = 6U;

    t38 = (x1585/((x1586&x1587)<<x1588));

    if (t38 != 9264LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1597 = -1;
	uint8_t x1598 = 93U;
	int16_t x1599 = -113;
	int8_t x1600 = 1;
	static volatile int32_t t39 = 998134;

    t39 = (x1597/((x1598&x1599)<<x1600));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1661 = UINT64_MAX;
	uint64_t x1662 = 1539720242LLU;
	volatile int8_t x1663 = INT8_MIN;
	uint16_t x1664 = 3U;
	volatile uint64_t t40 = 29468272217209LLU;

    t40 = (x1661/((x1662&x1663)<<x1664));

    if (t40 != 1497572754LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x1705 = -1;
	uint64_t x1706 = UINT64_MAX;
	volatile int64_t x1707 = INT64_MAX;
	uint64_t t41 = 39952214541931LLU;

    t41 = (x1705/((x1706&x1707)<<x1708));

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1741 = INT8_MAX;
	static uint32_t x1742 = UINT32_MAX;
	int16_t x1743 = INT16_MIN;
	int16_t x1744 = 10;
	static uint32_t t42 = 142486U;

    t42 = (x1741/((x1742&x1743)<<x1744));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x1745 = UINT16_MAX;
	uint8_t x1746 = 47U;
	uint8_t x1748 = 7U;
	uint32_t t43 = 2U;

    t43 = (x1745/((x1746&x1747)<<x1748));

    if (t43 != 63U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x1813 = 6U;
	static volatile int64_t x1816 = 12LL;
	static int64_t t44 = -4703428530486LL;

    t44 = (x1813/((x1814&x1815)<<x1816));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x1841 = -7485;
	int32_t x1842 = INT32_MAX;
	volatile int16_t x1843 = INT16_MAX;
	int8_t x1844 = 3;
	int32_t t45 = 69;

    t45 = (x1841/((x1842&x1843)<<x1844));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x1854 = -1LL;
	int8_t x1856 = 55;
	int64_t t46 = 114LL;

    t46 = (x1853/((x1854&x1855)<<x1856));

    if (t46 != -256LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x1881 = UINT32_MAX;
	int32_t x1882 = INT32_MIN;
	volatile uint64_t t47 = 23773847LLU;

    t47 = (x1881/((x1882&x1883)<<x1884));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x1885 = 3412102808478LL;
	int32_t x1886 = INT32_MAX;
	uint32_t x1887 = 26425097U;
	int32_t x1888 = 1;
	volatile int64_t t48 = 4604725682051LL;

    t48 = (x1885/((x1886&x1887)<<x1888));

    if (t48 != 64561LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x1917 = 263LLU;
	uint8_t x1920 = 28U;

    t49 = (x1917/((x1918&x1919)<<x1920));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x1957 = 2;
	int8_t x1958 = -1;
	volatile int32_t x1959 = INT32_MAX;
	int8_t x1960 = 0;
	volatile int32_t t50 = 953;

    t50 = (x1957/((x1958&x1959)<<x1960));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x2001 = 24489340741LLU;
	static uint16_t x2003 = UINT16_MAX;
	int8_t x2004 = 0;
	uint64_t t51 = 3126057933807680LLU;

    t51 = (x2001/((x2002&x2003)<<x2004));

    if (t51 != 192829454LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x2026 = 775853509608250741LLU;
	volatile int16_t x2028 = 40;
	volatile uint64_t t52 = 164783232881652LLU;

    t52 = (x2025/((x2026&x2027)<<x2028));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x2049 = -1;
	volatile int64_t x2050 = 90174174914389LL;
	int16_t x2051 = -1;
	volatile int64_t t53 = 65760778770761LL;

    t53 = (x2049/((x2050&x2051)<<x2052));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x2137 = -209;
	int8_t x2140 = 1;
	static volatile int32_t t54 = 6250986;

    t54 = (x2137/((x2138&x2139)<<x2140));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x2185 = INT16_MIN;
	int64_t x2186 = -123006692390LL;
	uint64_t x2187 = UINT64_MAX;
	int8_t x2188 = 0;
	uint64_t t55 = 1784759785LLU;

    t55 = (x2185/((x2186&x2187)<<x2188));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x2237 = 3565559484613002LLU;
	volatile int8_t x2238 = -1;
	uint8_t x2239 = UINT8_MAX;
	volatile int8_t x2240 = 11;
	volatile uint64_t t56 = 2796LLU;

    t56 = (x2237/((x2238&x2239)<<x2240));

    if (t56 != 6827434674LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x2389 = -3;
	int8_t x2390 = -1;
	uint8_t x2392 = 24U;
	volatile uint32_t t57 = 3846405U;

    t57 = (x2389/((x2390&x2391)<<x2392));

    if (t57 != 3U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x2433 = -1LL;
	int64_t x2434 = -1LL;
	static int32_t x2435 = INT32_MAX;
	volatile uint32_t x2436 = 1U;
	int64_t t58 = 76220971287366608LL;

    t58 = (x2433/((x2434&x2435)<<x2436));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x2537 = 6U;
	int32_t x2538 = INT32_MAX;
	int64_t x2539 = 16832744272483LL;
	volatile uint8_t x2540 = 1U;
	static volatile int64_t t59 = -29000204LL;

    t59 = (x2537/((x2538&x2539)<<x2540));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x2630 = UINT16_MAX;
	static volatile uint8_t x2631 = UINT8_MAX;
	uint8_t x2632 = 15U;
	int32_t t60 = 936595107;

    t60 = (x2629/((x2630&x2631)<<x2632));

    if (t60 != -257) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x2637 = 7U;
	static uint8_t x2638 = UINT8_MAX;
	int8_t x2639 = -7;
	volatile int32_t t61 = -77593385;

    t61 = (x2637/((x2638&x2639)<<x2640));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x2665 = -1LL;
	uint32_t x2666 = 245374U;
	uint64_t x2667 = 7293604LLU;
	static uint16_t x2668 = 13U;

    t62 = (x2665/((x2666&x2667)<<x2668));

    if (t62 != 11303988944LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x2773 = INT16_MIN;
	volatile uint16_t x2774 = UINT16_MAX;
	uint16_t x2775 = UINT16_MAX;
	static uint8_t x2776 = 3U;
	static int32_t t63 = -183691;

    t63 = (x2773/((x2774&x2775)<<x2776));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x2799 = 12U;
	uint32_t t64 = 1460U;

    t64 = (x2797/((x2798&x2799)<<x2800));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x2825 = 3276U;
	uint16_t x2826 = 56U;
	volatile uint64_t t65 = 768837751LLU;

    t65 = (x2825/((x2826&x2827)<<x2828));

    if (t65 != 8LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x2917 = INT8_MAX;
	uint64_t x2919 = 1576200445LLU;
	uint8_t x2920 = 6U;

    t66 = (x2917/((x2918&x2919)<<x2920));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x3021 = 5209900846657LLU;
	int32_t x3023 = -7;
	static uint8_t x3024 = 3U;
	uint64_t t67 = 0LLU;

    t67 = (x3021/((x3022&x3023)<<x3024));

    if (t67 != 651237605832LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x3205 = UINT64_MAX;
	uint32_t x3206 = 636128950U;
	int32_t x3207 = -1;
	static uint8_t x3208 = 6U;
	uint64_t t68 = 60297313562636LLU;

    t68 = (x3205/((x3206&x3207)<<x3208));

    if (t68 != 8965405336LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3217 = -1;
	int16_t x3218 = -1;
	uint64_t x3219 = 125458LLU;
	static int8_t x3220 = 29;

    t69 = (x3217/((x3218&x3219)<<x3220));

    if (t69 != 273874LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x3257 = INT16_MIN;
	int8_t x3258 = -2;
	uint32_t x3259 = 2988905U;

    t70 = (x3257/((x3258&x3259)<<x3260));

    if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x3297 = INT16_MIN;
	int32_t x3298 = -9;
	int64_t x3299 = 109912023956672LL;
	static uint64_t x3300 = 7LLU;
	volatile int64_t t71 = -353224931109LL;

    t71 = (x3297/((x3298&x3299)<<x3300));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x3417 = INT16_MIN;
	int64_t x3418 = INT64_MAX;
	int8_t x3419 = INT8_MAX;
	uint8_t x3420 = 49U;

    t72 = (x3417/((x3418&x3419)<<x3420));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x3425 = 23LLU;
	uint64_t x3426 = UINT64_MAX;
	volatile uint8_t x3428 = 25U;
	static uint64_t t73 = 82LLU;

    t73 = (x3425/((x3426&x3427)<<x3428));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x3441 = INT8_MIN;
	uint16_t x3443 = UINT16_MAX;
	int16_t x3444 = 3;
	int32_t t74 = -207406096;

    t74 = (x3441/((x3442&x3443)<<x3444));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x3469 = UINT8_MAX;
	volatile int64_t x3470 = -153131549191354LL;
	volatile uint16_t x3471 = UINT16_MAX;
	int16_t x3472 = 2;
	volatile int64_t t75 = -56753088025LL;

    t75 = (x3469/((x3470&x3471)<<x3472));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x3486 = -1LL;
	uint16_t x3487 = 85U;
	volatile uint8_t x3488 = 1U;

    t76 = (x3485/((x3486&x3487)<<x3488));

    if (t76 != -54255129628557504LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x3493 = INT16_MIN;
	int16_t x3494 = INT16_MAX;
	volatile int16_t x3496 = 7;
	volatile int32_t t77 = -9128;

    t77 = (x3493/((x3494&x3495)<<x3496));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x3531 = INT8_MAX;

    t78 = (x3529/((x3530&x3531)<<x3532));

    if (t78 != -2001599834386887LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x3549 = 102U;
	static uint16_t x3550 = 3968U;
	volatile uint32_t t79 = 4089064U;

    t79 = (x3549/((x3550&x3551)<<x3552));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x3565 = 368835997;
	volatile int32_t x3566 = 21;
	volatile uint16_t x3567 = UINT16_MAX;
	uint32_t x3568 = 9U;

    t80 = (x3565/((x3566&x3567)<<x3568));

    if (t80 != 34303) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x3570 = -22;
	int32_t x3571 = 509778;
	int8_t x3572 = 0;
	int32_t t81 = 0;

    t81 = (x3569/((x3570&x3571)<<x3572));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x3589 = INT16_MIN;
	int64_t x3590 = -1LL;
	int16_t x3591 = 1;
	int32_t x3592 = 4;
	volatile int64_t t82 = -4057933LL;

    t82 = (x3589/((x3590&x3591)<<x3592));

    if (t82 != -2048LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x3654 = INT32_MAX;
	int64_t x3655 = INT64_MAX;
	int16_t x3656 = 28;
	int64_t t83 = 62000238408559LL;

    t83 = (x3653/((x3654&x3655)<<x3656));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x3745 = -1LL;
	int16_t x3746 = 21;
	int8_t x3748 = 2;
	volatile int64_t t84 = 245LL;

    t84 = (x3745/((x3746&x3747)<<x3748));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x3773 = 94751U;
	uint32_t x3774 = 1122U;
	uint16_t x3775 = 110U;
	static uint32_t t85 = 3404588U;

    t85 = (x3773/((x3774&x3775)<<x3776));

    if (t85 != 966U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x3813 = 113U;
	uint8_t x3816 = 3U;
	volatile int64_t t86 = -139521507807727LL;

    t86 = (x3813/((x3814&x3815)<<x3816));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x3817 = INT16_MIN;
	uint32_t x3818 = UINT32_MAX;
	volatile uint64_t x3819 = UINT64_MAX;
	static uint8_t x3820 = 9U;

    t87 = (x3817/((x3818&x3819)<<x3820));

    if (t87 != 8388608LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x3870 = 27880U;
	int32_t x3871 = -58280;
	int8_t x3872 = 1;
	volatile int32_t t88 = 3;

    t88 = (x3869/((x3870&x3871)<<x3872));

    if (t88 != -5) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x3985 = -1LL;
	uint32_t x3987 = 8980364U;
	static int32_t x3988 = 1;

    t89 = (x3985/((x3986&x3987)<<x3988));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x4061 = 16446655510LLU;
	int8_t x4062 = -1;
	int8_t x4063 = INT8_MAX;
	uint16_t x4064 = 2U;
	uint64_t t90 = 24503646LLU;

    t90 = (x4061/((x4062&x4063)<<x4064));

    if (t90 != 32375306LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x4066 = INT8_MIN;
	volatile uint64_t x4067 = 798961535717488LLU;
	static volatile int8_t x4068 = 1;
	volatile uint64_t t91 = 917LLU;

    t91 = (x4065/((x4066&x4067)<<x4068));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x4157 = INT32_MIN;
	uint8_t x4158 = 84U;
	int16_t x4159 = -1;
	uint8_t x4160 = 5U;
	int32_t t92 = -6;

    t92 = (x4157/((x4158&x4159)<<x4160));

    if (t92 != -798915) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x4161 = -1LL;
	uint64_t x4162 = 258LLU;
	int8_t x4163 = INT8_MIN;
	int16_t x4164 = 0;

    t93 = (x4161/((x4162&x4163)<<x4164));

    if (t93 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x4201 = -1;
	volatile uint8_t x4204 = 29U;
	volatile uint64_t t94 = 1407212017522LLU;

    t94 = (x4201/((x4202&x4203)<<x4204));

    if (t94 != 34359738367LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x4274 = UINT16_MAX;
	int8_t x4275 = -4;
	uint8_t x4276 = 0U;
	volatile int32_t t95 = -113752;

    t95 = (x4273/((x4274&x4275)<<x4276));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x4409 = 412684546LLU;
	volatile uint8_t x4410 = UINT8_MAX;
	static int8_t x4412 = 0;
	uint64_t t96 = 2091496138LLU;

    t96 = (x4409/((x4410&x4411)<<x4412));

    if (t96 != 2022963LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x4413 = INT8_MAX;
	int8_t x4414 = -1;
	uint64_t x4415 = 3LLU;
	uint8_t x4416 = 47U;
	uint64_t t97 = 181848999366093LLU;

    t97 = (x4413/((x4414&x4415)<<x4416));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x4473 = 427;
	uint32_t x4474 = UINT32_MAX;
	volatile int16_t x4476 = 0;

    t98 = (x4473/((x4474&x4475)<<x4476));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x4541 = -17397184;
	uint64_t x4542 = UINT64_MAX;
	uint32_t x4543 = 9600298U;
	uint8_t x4544 = 6U;

    t99 = (x4541/((x4542&x4543)<<x4544));

    if (t99 != 30023065549LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x4637 = 851;
	static volatile uint8_t x4638 = UINT8_MAX;
	volatile int32_t x4640 = 4;
	int64_t t100 = 10322322211990LL;

    t100 = (x4637/((x4638&x4639)<<x4640));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x4697 = INT64_MAX;
	static uint64_t x4698 = UINT64_MAX;
	volatile uint8_t x4700 = 2U;

    t101 = (x4697/((x4698&x4699)<<x4700));

    if (t101 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x4785 = UINT16_MAX;
	uint32_t x4786 = 31U;
	uint64_t x4787 = 19LLU;
	int8_t x4788 = 0;

    t102 = (x4785/((x4786&x4787)<<x4788));

    if (t102 != 3449LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x4849 = 5429;
	uint64_t x4850 = 24302441532LLU;
	int16_t x4851 = INT16_MAX;
	uint8_t x4852 = 0U;
	volatile uint64_t t103 = 27629483025LLU;

    t103 = (x4849/((x4850&x4851)<<x4852));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x4901 = 12U;
	static uint8_t x4904 = 6U;
	uint64_t t104 = 4145902578708123855LLU;

    t104 = (x4901/((x4902&x4903)<<x4904));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x5025 = 101U;
	static uint16_t x5026 = 2160U;
	uint64_t x5027 = 72749LLU;
	volatile uint16_t x5028 = 0U;

    t105 = (x5025/((x5026&x5027)<<x5028));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x5037 = 4U;
	uint16_t x5038 = 426U;
	uint8_t x5040 = 10U;
	int32_t t106 = 313775;

    t106 = (x5037/((x5038&x5039)<<x5040));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x5154 = UINT8_MAX;
	volatile int8_t x5155 = -2;
	uint32_t t107 = 20936U;

    t107 = (x5153/((x5154&x5155)<<x5156));

    if (t107 != 16909320U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x5269 = UINT32_MAX;
	uint32_t x5270 = 78503U;
	static uint16_t x5272 = 3U;
	uint32_t t108 = 2613962U;

    t108 = (x5269/((x5270&x5271)<<x5272));

    if (t108 != 6838U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x5285 = 54493U;
	uint32_t x5287 = 94269012U;
	uint32_t x5288 = 1U;
	volatile uint32_t t109 = 162U;

    t109 = (x5285/((x5286&x5287)<<x5288));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x5423 = INT8_MIN;
	volatile int32_t x5424 = 3;
	int32_t t110 = -82;

    t110 = (x5421/((x5422&x5423)<<x5424));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x5437 = INT16_MAX;
	static uint32_t x5438 = 3U;
	volatile uint32_t x5439 = 6453U;
	volatile uint8_t x5440 = 1U;
	volatile uint32_t t111 = 115158730U;

    t111 = (x5437/((x5438&x5439)<<x5440));

    if (t111 != 16383U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x5441 = 852U;
	static int16_t x5442 = -1;
	int64_t x5443 = 2087537777168385LL;
	uint16_t x5444 = 1U;
	int64_t t112 = 663302969891384LL;

    t112 = (x5441/((x5442&x5443)<<x5444));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x5486 = -51;
	volatile uint8_t x5487 = UINT8_MAX;
	volatile uint8_t x5488 = 0U;
	volatile int64_t t113 = 5974LL;

    t113 = (x5485/((x5486&x5487)<<x5488));

    if (t113 != -784167LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x5514 = INT64_MAX;
	uint32_t x5515 = 136668U;
	int8_t x5516 = 1;

    t114 = (x5513/((x5514&x5515)<<x5516));

    if (t114 != -53LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x5517 = -881021477239422531LL;
	uint16_t x5518 = 441U;
	static uint32_t x5519 = UINT32_MAX;
	uint8_t x5520 = 1U;
	int64_t t115 = -378643005710759LL;

    t115 = (x5517/((x5518&x5519)<<x5520));

    if (t115 != -998890563763517LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x5525 = 988U;
	uint8_t x5528 = 4U;
	volatile int32_t t116 = -2;

    t116 = (x5525/((x5526&x5527)<<x5528));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x5541 = 789789832928513LLU;
	volatile int32_t x5542 = INT32_MAX;
	uint8_t x5543 = UINT8_MAX;
	uint16_t x5544 = 19U;
	volatile uint64_t t117 = 149224750LLU;

    t117 = (x5541/((x5542&x5543)<<x5544));

    if (t117 != 5907468LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x5553 = UINT16_MAX;
	volatile int16_t x5554 = INT16_MAX;
	int8_t x5555 = 44;
	uint8_t x5556 = 3U;
	volatile int32_t t118 = 85396;

    t118 = (x5553/((x5554&x5555)<<x5556));

    if (t118 != 186) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x5625 = INT16_MAX;
	uint8_t x5626 = 24U;
	static int64_t x5627 = -1075822693285LL;
	uint16_t x5628 = 5U;
	volatile int64_t t119 = 24520845681635LL;

    t119 = (x5625/((x5626&x5627)<<x5628));

    if (t119 != 42LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x5637 = INT64_MAX;
	volatile uint32_t x5638 = UINT32_MAX;
	int8_t x5639 = 42;
	volatile uint32_t x5640 = 0U;
	volatile int64_t t120 = 9195LL;

    t120 = (x5637/((x5638&x5639)<<x5640));

    if (t120 != 219604096115589900LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x5657 = -1;
	uint8_t x5658 = 1U;
	static int16_t x5659 = -1;
	static volatile uint8_t x5660 = 14U;
	int32_t t121 = -15850;

    t121 = (x5657/((x5658&x5659)<<x5660));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x5681 = INT16_MIN;
	static volatile uint8_t x5682 = 4U;
	uint32_t x5683 = UINT32_MAX;
	static volatile uint8_t x5684 = 7U;
	volatile uint32_t t122 = 78892163U;

    t122 = (x5681/((x5682&x5683)<<x5684));

    if (t122 != 8388544U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x5741 = INT32_MIN;
	int32_t x5742 = INT32_MIN;
	uint8_t x5744 = 0U;

    t123 = (x5741/((x5742&x5743)<<x5744));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x5757 = INT8_MAX;
	static volatile int64_t x5759 = -1LL;
	uint16_t x5760 = 0U;

    t124 = (x5757/((x5758&x5759)<<x5760));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x5838 = -37101805441877LL;
	volatile int32_t x5839 = 45;
	uint8_t x5840 = 14U;
	volatile int64_t t125 = 63012822851605LL;

    t125 = (x5837/((x5838&x5839)<<x5840));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x5925 = -1;
	uint64_t x5926 = 552981878170666932LLU;
	int8_t x5927 = INT8_MIN;
	int16_t x5928 = 1;

    t126 = (x5925/((x5926&x5927)<<x5928));

    if (t126 != 16LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x5951 = 13773009;
	uint8_t x5952 = 3U;
	int32_t t127 = 8157;

    t127 = (x5949/((x5950&x5951)<<x5952));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x6297 = INT16_MAX;
	static uint64_t x6298 = UINT64_MAX;
	uint64_t x6299 = 2904472270LLU;
	int8_t x6300 = 0;
	volatile uint64_t t128 = 888255879415844571LLU;

    t128 = (x6297/((x6298&x6299)<<x6300));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x6321 = -1;
	uint16_t x6322 = 14U;
	int32_t t129 = 2;

    t129 = (x6321/((x6322&x6323)<<x6324));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x6391 = -1;
	uint32_t x6392 = 0U;
	volatile int64_t t130 = 0LL;

    t130 = (x6389/((x6390&x6391)<<x6392));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x6430 = INT32_MIN;
	volatile uint64_t x6431 = 1837178785934618LLU;
	static uint8_t x6432 = 5U;
	volatile uint64_t t131 = 14585487868437571LLU;

    t131 = (x6429/((x6430&x6431)<<x6432));

    if (t131 != 313LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x6445 = INT32_MIN;
	uint32_t x6447 = 55529U;
	uint8_t x6448 = 1U;
	static uint32_t t132 = 70972337U;

    t132 = (x6445/((x6446&x6447)<<x6448));

    if (t132 != 33554432U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x6449 = INT64_MIN;
	volatile int64_t x6450 = INT64_MAX;
	uint16_t x6451 = UINT16_MAX;
	uint8_t x6452 = 24U;

    t133 = (x6449/((x6450&x6451)<<x6452));

    if (t133 != -8388736LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x6489 = -2763386LL;
	uint32_t x6491 = 27U;
	int8_t x6492 = 1;
	int64_t t134 = 2670LL;

    t134 = (x6489/((x6490&x6491)<<x6492));

    if (t134 != -125608LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x6501 = UINT16_MAX;
	volatile int16_t x6502 = -1;
	uint16_t x6503 = 3U;
	int8_t x6504 = 1;
	volatile int32_t t135 = -466664;

    t135 = (x6501/((x6502&x6503)<<x6504));

    if (t135 != 10922) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x6513 = 1;
	uint16_t x6516 = 1U;
	volatile uint32_t t136 = 1580123U;

    t136 = (x6513/((x6514&x6515)<<x6516));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x6693 = INT32_MIN;
	volatile int16_t x6694 = -1;
	int8_t x6696 = 11;

    t137 = (x6693/((x6694&x6695)<<x6696));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x6697 = -33;
	static volatile uint16_t x6698 = 189U;
	static uint32_t x6699 = UINT32_MAX;
	int8_t x6700 = 0;
	uint32_t t138 = 15U;

    t138 = (x6697/((x6698&x6699)<<x6700));

    if (t138 != 22724694U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x6753 = 14;
	uint32_t x6756 = 3U;
	volatile int64_t t139 = -824LL;

    t139 = (x6753/((x6754&x6755)<<x6756));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x6809 = -1;
	int32_t x6812 = 7;
	volatile uint64_t t140 = 6893486422692871560LLU;

    t140 = (x6809/((x6810&x6811)<<x6812));

    if (t140 != 6166746488LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x6821 = -119059573226LL;
	uint8_t x6822 = 53U;

    t141 = (x6821/((x6822&x6823)<<x6824));

    if (t141 != -13678719LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x6869 = 865870686503555LLU;
	int16_t x6870 = INT16_MAX;
	uint64_t x6871 = 1787814982441570306LLU;
	uint16_t x6872 = 34U;

    t142 = (x6869/((x6870&x6871)<<x6872));

    if (t142 != 12LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x6945 = 0;
	int8_t x6946 = -10;
	int8_t x6947 = 19;
	int8_t x6948 = 0;
	volatile int32_t t143 = 409;

    t143 = (x6945/((x6946&x6947)<<x6948));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x6957 = INT64_MIN;
	int64_t x6959 = 4488597504511LL;
	int8_t x6960 = 1;

    t144 = (x6957/((x6958&x6959)<<x6960));

    if (t144 != -138576460182919LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x6997 = UINT32_MAX;
	static uint32_t x6998 = UINT32_MAX;
	static uint64_t x6999 = 895808496LLU;
	volatile int32_t x7000 = 0;
	volatile uint64_t t145 = 731291788351804LLU;

    t145 = (x6997/((x6998&x6999)<<x7000));

    if (t145 != 4LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x7029 = INT32_MAX;
	int32_t x7030 = INT32_MAX;
	int64_t x7031 = -4144762946644955LL;
	uint16_t x7032 = 14U;
	static int64_t t146 = 0LL;

    t146 = (x7029/((x7030&x7031)<<x7032));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x7049 = 1;
	uint16_t x7050 = UINT16_MAX;
	uint32_t x7051 = UINT32_MAX;
	volatile uint32_t t147 = 3939U;

    t147 = (x7049/((x7050&x7051)<<x7052));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x7105 = INT8_MAX;
	int64_t x7107 = INT64_MAX;
	volatile uint8_t x7108 = 14U;

    t148 = (x7105/((x7106&x7107)<<x7108));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x7109 = 0;
	static int16_t x7111 = 1;
	volatile int32_t t149 = 1324166;

    t149 = (x7109/((x7110&x7111)<<x7112));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x7166 = 8841LLU;
	int16_t x7168 = 0;
	uint64_t t150 = 27917869LLU;

    t150 = (x7165/((x7166&x7167)<<x7168));

    if (t150 != 134647766961383588LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x7169 = 117427;
	static uint64_t x7171 = 6138477LLU;
	uint64_t t151 = 898LLU;

    t151 = (x7169/((x7170&x7171)<<x7172));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x7185 = INT64_MIN;
	int32_t x7186 = INT32_MAX;
	uint8_t x7188 = 0U;

    t152 = (x7185/((x7186&x7187)<<x7188));

    if (t152 != -4294967298LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x7205 = 4;
	int16_t x7207 = 237;
	uint8_t x7208 = 2U;

    t153 = (x7205/((x7206&x7207)<<x7208));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x7213 = 2201284782837LL;
	int32_t x7214 = 13;
	int16_t x7215 = 1;
	volatile int64_t t154 = 1LL;

    t154 = (x7213/((x7214&x7215)<<x7216));

    if (t154 != 4299384341LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x7222 = UINT16_MAX;
	uint16_t x7223 = 2U;
	uint8_t x7224 = 17U;

    t155 = (x7221/((x7222&x7223)<<x7224));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x7259 = 52U;
	int16_t x7260 = 0;
	int32_t t156 = -6805;

    t156 = (x7257/((x7258&x7259)<<x7260));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint32_t x7290 = 907U;
	int64_t x7291 = -932LL;
	static int64_t x7292 = 12LL;
	volatile int64_t t157 = 3744403792LL;

    t157 = (x7289/((x7290&x7291)<<x7292));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x7333 = INT64_MIN;
	uint64_t x7334 = UINT64_MAX;
	static uint64_t x7335 = UINT64_MAX;
	uint8_t x7336 = 0U;
	volatile uint64_t t158 = 258737195239925646LLU;

    t158 = (x7333/((x7334&x7335)<<x7336));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x7349 = INT32_MIN;
	uint64_t x7351 = 351LLU;
	uint8_t x7352 = 14U;
	static volatile uint64_t t159 = 4237858443332783LLU;

    t159 = (x7349/((x7350&x7351)<<x7352));

    if (t159 != 3272964845091LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x7353 = INT64_MIN;
	int16_t x7354 = INT16_MIN;
	volatile int32_t x7355 = 3050526;
	uint8_t x7356 = 0U;
	int64_t t160 = -128529235596488060LL;

    t160 = (x7353/((x7354&x7355)<<x7356));

    if (t160 != -3026612652802LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x7390 = 46501LLU;
	int32_t x7391 = -266;
	uint16_t x7392 = 12U;
	volatile uint64_t t161 = 5364808142LLU;

    t161 = (x7389/((x7390&x7391)<<x7392));

    if (t161 != 97387761166LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x7393 = UINT16_MAX;
	int8_t x7394 = INT8_MIN;
	uint16_t x7395 = UINT16_MAX;
	int32_t x7396 = 2;

    t162 = (x7393/((x7394&x7395)<<x7396));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x7529 = 1773132178297LL;
	volatile int64_t x7530 = 1277LL;
	int8_t x7531 = INT8_MIN;

    t163 = (x7529/((x7530&x7531)<<x7532));

    if (t163 != 192397154LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x7597 = -6;
	int32_t x7598 = 203;
	uint64_t x7599 = UINT64_MAX;
	uint16_t x7600 = 7U;
	volatile uint64_t t164 = 935596663865909146LLU;

    t164 = (x7597/((x7598&x7599)<<x7600));

    if (t164 != 709927034856432LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x7646 = 7158762864323279232LLU;
	static uint64_t x7647 = 77430LLU;
	int32_t x7648 = 0;
	static uint64_t t165 = 1LLU;

    t165 = (x7645/((x7646&x7647)<<x7648));

    if (t165 != 243437817695702LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x7814 = INT32_MAX;
	volatile uint16_t x7815 = 472U;
	uint8_t x7816 = 0U;

    t166 = (x7813/((x7814&x7815)<<x7816));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x7817 = 2357837334233488LLU;
	volatile uint8_t x7818 = 5U;
	volatile int8_t x7819 = -1;
	uint8_t x7820 = 7U;

    t167 = (x7817/((x7818&x7819)<<x7820));

    if (t167 != 3684120834739LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x7869 = INT8_MIN;
	static volatile uint64_t x7870 = 13005258556566143LLU;
	uint32_t x7871 = 110U;
	volatile int8_t x7872 = 1;
	volatile uint64_t t168 = 31LLU;

    t168 = (x7869/((x7870&x7871)<<x7872));

    if (t168 != 83848836698679779LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x8013 = 3;
	static uint32_t x8014 = UINT32_MAX;
	int32_t x8015 = INT32_MAX;
	uint16_t x8016 = 23U;
	uint32_t t169 = 12914U;

    t169 = (x8013/((x8014&x8015)<<x8016));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x8161 = 521059504U;
	volatile int32_t x8162 = -130088303;
	uint16_t x8163 = UINT16_MAX;
	static uint8_t x8164 = 2U;
	static uint32_t t170 = 3093U;

    t170 = (x8161/((x8162&x8163)<<x8164));

    if (t170 != 198272U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x8237 = -1LL;
	volatile uint8_t x8238 = 10U;
	static int16_t x8239 = INT16_MAX;
	static volatile int8_t x8240 = 0;

    t171 = (x8237/((x8238&x8239)<<x8240));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x8247 = 448340159065428936LLU;
	static uint16_t x8248 = 3U;
	volatile uint64_t t172 = 1697071607LLU;

    t172 = (x8245/((x8246&x8247)<<x8248));

    if (t172 != 11529215044726292LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x8321 = INT8_MAX;
	volatile int32_t x8322 = INT32_MAX;
	int32_t x8324 = 38;
	volatile uint64_t t173 = 0LLU;

    t173 = (x8321/((x8322&x8323)<<x8324));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x8385 = INT64_MIN;
	static int8_t x8386 = 1;
	int8_t x8387 = -23;
	volatile int8_t x8388 = 0;
	volatile int64_t t174 = INT64_MIN;

    t174 = (x8385/((x8386&x8387)<<x8388));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x8554 = 7408687493LLU;
	int16_t x8556 = 0;
	volatile uint64_t t175 = 455154587LLU;

    t175 = (x8553/((x8554&x8555)<<x8556));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x8557 = -1;
	int64_t x8558 = 1025555514LL;
	int8_t x8560 = 0;
	int64_t t176 = -3LL;

    t176 = (x8557/((x8558&x8559)<<x8560));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x8641 = 2;
	static uint64_t x8642 = 94152543781471LLU;
	int32_t x8643 = 2;
	static int8_t x8644 = 3;
	uint64_t t177 = 180511856272001LLU;

    t177 = (x8641/((x8642&x8643)<<x8644));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x8669 = -1;
	uint16_t x8670 = UINT16_MAX;
	uint64_t x8671 = 4774705992300189LLU;
	uint64_t t178 = 80520LLU;

    t178 = (x8669/((x8670&x8671)<<x8672));

    if (t178 != 16LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x8721 = -1;
	uint16_t x8722 = 2916U;
	uint16_t x8724 = 7U;
	volatile int32_t t179 = -613;

    t179 = (x8721/((x8722&x8723)<<x8724));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x8793 = INT32_MIN;
	int8_t x8796 = 6;

    t180 = (x8793/((x8794&x8795)<<x8796));

    if (t180 != -578524) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x8937 = INT16_MAX;
	static uint64_t x8938 = 4092899104212561873LLU;
	uint64_t x8939 = 5854899752345457979LLU;
	volatile int16_t x8940 = 1;
	volatile uint64_t t181 = 11193806LLU;

    t181 = (x8937/((x8938&x8939)<<x8940));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x8969 = INT16_MAX;
	static uint16_t x8970 = 21108U;
	static volatile int8_t x8971 = INT8_MIN;
	int8_t x8972 = 4;
	static volatile int32_t t182 = -11;

    t182 = (x8969/((x8970&x8971)<<x8972));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x8973 = 0;
	int8_t x8974 = INT8_MAX;
	static int16_t x8975 = INT16_MAX;
	static volatile int8_t x8976 = 9;
	static int32_t t183 = 0;

    t183 = (x8973/((x8974&x8975)<<x8976));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x9061 = -15;
	int64_t x9063 = 15996168016754701LL;
	volatile int8_t x9064 = 1;
	static int64_t t184 = -439276261559927911LL;

    t184 = (x9061/((x9062&x9063)<<x9064));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x9089 = 2;
	int32_t x9090 = -73381938;
	uint16_t x9091 = 15U;
	static volatile uint8_t x9092 = 16U;
	int32_t t185 = 809;

    t185 = (x9089/((x9090&x9091)<<x9092));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x9145 = 168975916137LLU;
	volatile int32_t x9146 = -12;
	static int8_t x9148 = 6;
	volatile uint64_t t186 = 321866LLU;

    t186 = (x9145/((x9146&x9147)<<x9148));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x9288 = 1U;
	volatile int64_t t187 = 15LL;

    t187 = (x9285/((x9286&x9287)<<x9288));

    if (t187 != 863LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x9333 = -1;
	int16_t x9334 = 7;
	int32_t x9335 = 327129;
	volatile uint16_t x9336 = 2U;
	volatile int32_t t188 = 1;

    t188 = (x9333/((x9334&x9335)<<x9336));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x9337 = UINT8_MAX;
	int32_t x9338 = INT32_MAX;
	uint64_t x9339 = 10149138069LLU;
	uint8_t x9340 = 11U;
	static uint64_t t189 = 2266566526122LLU;

    t189 = (x9337/((x9338&x9339)<<x9340));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x9398 = -24;
	volatile int32_t x9399 = 14124;

    t190 = (x9397/((x9398&x9399)<<x9400));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x9442 = UINT64_MAX;
	static uint64_t x9443 = 8539173961086994753LLU;
	uint8_t x9444 = 16U;
	uint64_t t191 = 788639716LLU;

    t191 = (x9441/((x9442&x9443)<<x9444));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x9481 = 0U;
	int16_t x9483 = -1;
	int16_t x9484 = 1;

    t192 = (x9481/((x9482&x9483)<<x9484));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x9505 = UINT8_MAX;
	int16_t x9507 = -1;
	uint8_t x9508 = 1U;
	volatile int32_t t193 = -14715822;

    t193 = (x9505/((x9506&x9507)<<x9508));

    if (t193 != 21) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x9649 = 133744445;
	int64_t x9650 = -1LL;
	static int8_t x9651 = 1;
	static uint16_t x9652 = 0U;
	int64_t t194 = 12761LL;

    t194 = (x9649/((x9650&x9651)<<x9652));

    if (t194 != 133744445LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x9710 = 1509;
	volatile int64_t x9711 = -1LL;
	int64_t t195 = 920LL;

    t195 = (x9709/((x9710&x9711)<<x9712));

    if (t195 != 2846234LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x9821 = 2209275U;
	int8_t x9823 = 2;
	int64_t t196 = 877LL;

    t196 = (x9821/((x9822&x9823)<<x9824));

    if (t196 != 1104637LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x9861 = 67U;
	uint8_t x9862 = 10U;
	int8_t x9864 = 2;
	uint64_t t197 = 894048930947LLU;

    t197 = (x9861/((x9862&x9863)<<x9864));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x9913 = UINT8_MAX;
	uint64_t x9914 = UINT64_MAX;
	int8_t x9915 = INT8_MAX;
	static volatile uint16_t x9916 = 1U;
	uint64_t t198 = 3916301LLU;

    t198 = (x9913/((x9914&x9915)<<x9916));

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x10029 = UINT16_MAX;
	uint64_t x10030 = 98060094994585LLU;
	int8_t x10031 = INT8_MAX;
	int8_t x10032 = 6;
	static uint64_t t199 = 1361417255287089LLU;

    t199 = (x10029/((x10030&x10031)<<x10032));

    if (t199 != 40LLU) { NG(); } else { ; }
	
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

