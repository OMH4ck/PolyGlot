
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

static int64_t t2 = 75812665901LL;
static int16_t x225 = INT16_MAX;
static uint16_t x316 = 10U;
uint16_t x330 = 19097U;
uint8_t x340 = 3U;
uint16_t x393 = 253U;
static uint32_t x417 = UINT32_MAX;
int32_t x419 = INT32_MAX;
uint32_t x425 = UINT32_MAX;
uint8_t x496 = 18U;
int8_t x522 = 8;
volatile int32_t t14 = -3070636;
int32_t x615 = INT32_MIN;
int32_t t15 = 85;
int16_t x623 = -875;
uint8_t x624 = 18U;
int8_t x653 = 3;
int8_t x654 = -1;
static uint64_t x655 = UINT64_MAX;
int8_t x693 = 43;
volatile int32_t t21 = -97591424;
static uint8_t x844 = 14U;
static uint32_t x847 = 10U;
static uint8_t x952 = 1U;
uint32_t x995 = 865530671U;
uint32_t x1010 = UINT32_MAX;
int32_t x1011 = INT32_MIN;
uint8_t x1012 = 12U;
uint64_t x1120 = 1LLU;
int8_t x1307 = -1;
int8_t x1308 = 1;
uint16_t x1317 = 3283U;
int32_t x1318 = INT32_MIN;
static uint8_t x1320 = 7U;
int64_t x1334 = INT64_MIN;
static int32_t t36 = -11;
static uint64_t x1578 = 107903LLU;
static int16_t x1877 = 483;
volatile uint64_t x1883 = UINT64_MAX;
int32_t t46 = -60088386;
volatile uint16_t x1929 = 6U;
uint64_t x1989 = 18126961646163145LLU;
int32_t x1991 = 10321612;
volatile uint64_t t49 = 64058511080836LLU;
volatile int32_t t50 = -1;
uint16_t x2145 = 0U;
uint32_t x2318 = 976U;
int32_t x2323 = -8977;
static int16_t x2500 = 6;
uint8_t x2516 = 5U;
uint32_t x2733 = UINT32_MAX;
int64_t x2846 = 29290144027LL;
static uint8_t x2848 = 1U;
volatile int8_t x2906 = -1;
uint64_t x2908 = 21LLU;
int8_t x2947 = 31;
volatile int32_t t65 = -18149;
volatile uint8_t x3022 = 1U;
static volatile int64_t x3023 = 427471623388471994LL;
uint64_t x3024 = 6LLU;
int8_t x3222 = 11;
static volatile int32_t t67 = -1750;
static int64_t x3349 = 1055486957LL;
int8_t x3351 = INT8_MIN;
int8_t x3353 = INT8_MAX;
int16_t x3354 = INT16_MAX;
volatile int16_t x3374 = INT16_MIN;
int8_t x3640 = 1;
uint8_t x3708 = 1U;
volatile uint64_t t77 = 3LLU;
uint32_t t79 = 1747205U;
uint64_t x3904 = 7LLU;
static volatile int8_t x4019 = 13;
volatile uint16_t x4020 = 3U;
volatile int32_t t83 = -323197;
volatile int64_t x4313 = INT64_MAX;
volatile int16_t x4314 = INT16_MAX;
uint64_t t87 = 2292815140721LLU;
int32_t x4394 = -1;
static uint8_t x4396 = 6U;
volatile uint64_t t89 = 2125424175656738167LLU;
static int32_t x4602 = INT32_MIN;
static volatile int32_t t93 = -2593988;
static volatile uint32_t x4728 = 8U;
int16_t x4876 = 1;
volatile int16_t x4899 = -28;
static uint64_t t99 = 358573729270LLU;
uint8_t x4985 = 3U;
int32_t x4986 = -1;
int16_t x4987 = INT16_MIN;
int8_t x5236 = 5;
volatile int32_t t102 = 66268974;
uint32_t x5270 = 52838U;
int8_t x5329 = INT8_MAX;
volatile int32_t t104 = -3;
volatile uint16_t x5595 = UINT16_MAX;
volatile int32_t t108 = 32292888;
volatile uint32_t t112 = 1866934U;
uint64_t x5798 = UINT64_MAX;
int8_t x5799 = INT8_MAX;
uint16_t x5991 = 4U;
static int32_t t116 = 7261;
volatile uint8_t x6068 = 14U;
int8_t x6325 = INT8_MAX;
int32_t t119 = -1653410;
int16_t x6341 = 1;
int64_t x6343 = -315169LL;
volatile int8_t x6390 = 1;
int8_t x6484 = 6;
uint64_t x6547 = 244581733LLU;
int32_t t126 = 19751076;
int64_t x6749 = INT64_MAX;
uint64_t x6751 = 3086652288LLU;
uint32_t x6857 = UINT32_MAX;
uint16_t x6858 = 214U;
int8_t x6859 = -1;
volatile int16_t x6939 = -768;
volatile uint16_t x7009 = 7U;
int64_t x7011 = -26283398616544813LL;
int8_t x7013 = 0;
uint32_t x7014 = 38U;
volatile uint64_t x7394 = 38320545753LLU;
uint8_t x7498 = UINT8_MAX;
uint8_t x7523 = 55U;
uint8_t x7591 = 16U;
int32_t t142 = 75209;
static volatile uint64_t x7766 = 778961750117157LLU;
volatile int64_t x7884 = 0LL;
int8_t x7935 = INT8_MAX;
uint32_t t147 = 128475U;
uint16_t x8089 = 1605U;
static volatile int32_t t150 = -19484;
int8_t x8192 = 7;
volatile int64_t x8241 = 1709638133LL;
int32_t x8243 = INT32_MIN;
static uint16_t x8481 = 381U;
uint32_t x8542 = UINT32_MAX;
int16_t x8822 = -111;
uint64_t x8824 = 0LLU;
int32_t x8846 = INT32_MAX;
int64_t x8890 = 610069161LL;
int32_t x9165 = 39;
uint16_t x9168 = 3U;
uint64_t t166 = 184861585755367496LLU;
int8_t x9293 = 1;
uint32_t x9570 = 7U;
int64_t x9571 = INT64_MIN;
static uint64_t x9613 = 1LLU;
static int64_t x9774 = -200806LL;
uint8_t x9777 = UINT8_MAX;
int8_t x9780 = 1;
static uint16_t x9810 = 2225U;
uint16_t x9846 = UINT16_MAX;
uint8_t x9848 = 15U;
uint16_t x9928 = 1U;
uint32_t x9973 = UINT32_MAX;
int8_t x9976 = 10;
volatile uint32_t t180 = 97766U;
int32_t x9990 = INT32_MAX;
uint32_t x9992 = 61U;
int16_t x10167 = INT16_MIN;
volatile int16_t x10168 = 10;
uint64_t t185 = 19665LLU;
int32_t x10526 = 1;
int32_t x10565 = INT32_MAX;
volatile int32_t x10835 = INT32_MAX;
uint8_t x10853 = 70U;
static volatile int32_t x10855 = -1;
volatile uint64_t x10960 = 3LLU;
uint8_t x10992 = 1U;
static int32_t t193 = -32971291;
uint32_t x11020 = 0U;
uint64_t x11029 = 52343829502979LLU;
static int16_t x11030 = INT16_MIN;
int8_t x11032 = 11;
int32_t x11070 = INT32_MIN;
uint8_t x11155 = 35U;
static volatile uint16_t x11194 = 73U;


void f0(void) {
    	uint64_t x37 = UINT64_MAX;
	int8_t x38 = -1;
	uint64_t x39 = 341107622641LLU;
	uint8_t x40 = 4U;
	volatile uint64_t t0 = 5LLU;

    t0 = (x37<<((x38!=x39)^x40));

    if (t0 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x101 = INT16_MAX;
	uint64_t x102 = UINT64_MAX;
	static int16_t x103 = INT16_MIN;
	int16_t x104 = 0;
	volatile int32_t t1 = -62;

    t1 = (x101<<((x102!=x103)^x104));

    if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x189 = 4983LL;
	int16_t x190 = -1;
	int16_t x191 = INT16_MIN;
	int16_t x192 = 1;

    t2 = (x189<<((x190!=x191)^x192));

    if (t2 != 4983LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x197 = INT16_MAX;
	static int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	uint8_t x200 = 0U;
	int32_t t3 = 13461704;

    t3 = (x197<<((x198!=x199)^x200));

    if (t3 != 65534) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x226 = -2023;
	int16_t x227 = INT16_MAX;
	volatile int8_t x228 = 3;
	volatile int32_t t4 = 234;

    t4 = (x225<<((x226!=x227)^x228));

    if (t4 != 131068) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x313 = 82;
	uint16_t x314 = 20U;
	static int32_t x315 = -1;
	volatile int32_t t5 = -7871;

    t5 = (x313<<((x314!=x315)^x316));

    if (t5 != 167936) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x329 = 9U;
	int32_t x331 = INT32_MAX;
	volatile uint8_t x332 = 14U;
	static volatile int32_t t6 = 2317253;

    t6 = (x329<<((x330!=x331)^x332));

    if (t6 != 294912) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x337 = 0LL;
	int64_t x338 = INT64_MIN;
	int8_t x339 = -1;
	static int64_t t7 = 1082192316761LL;

    t7 = (x337<<((x338!=x339)^x340));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x357 = 1162489037374903LLU;
	static volatile int64_t x358 = -1LL;
	uint32_t x359 = 616636420U;
	int8_t x360 = 17;
	volatile uint64_t t8 = 0LLU;

    t8 = (x357<<((x358!=x359)^x360));

    if (t8 != 2397905258563436544LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x394 = UINT16_MAX;
	static int32_t x395 = INT32_MIN;
	volatile int8_t x396 = 1;
	volatile int32_t t9 = 534160907;

    t9 = (x393<<((x394!=x395)^x396));

    if (t9 != 253) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x418 = -13467;
	static uint8_t x420 = 2U;
	volatile uint32_t t10 = 6115U;

    t10 = (x417<<((x418!=x419)^x420));

    if (t10 != 4294967288U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	volatile uint16_t x428 = 0U;
	uint32_t t11 = UINT32_MAX;

    t11 = (x425<<((x426!=x427)^x428));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x429 = 328626330LLU;
	int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = 3U;
	volatile uint64_t t12 = 7LLU;

    t12 = (x429<<((x430!=x431)^x432));

    if (t12 != 1314505320LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x493 = 0;
	uint32_t x494 = UINT32_MAX;
	int16_t x495 = -300;
	volatile int32_t t13 = 16097;

    t13 = (x493<<((x494!=x495)^x496));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x521 = UINT8_MAX;
	int32_t x523 = INT32_MAX;
	int64_t x524 = 0LL;

    t14 = (x521<<((x522!=x523)^x524));

    if (t14 != 510) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x613 = INT16_MAX;
	uint32_t x614 = 372U;
	volatile int16_t x616 = 1;

    t15 = (x613<<((x614!=x615)^x616));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x621 = 159LL;
	volatile int64_t x622 = -1LL;
	volatile int64_t t16 = 881877950577105LL;

    t16 = (x621<<((x622!=x623)^x624));

    if (t16 != 83361792LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x656 = 1U;
	int32_t t17 = -1243;

    t17 = (x653<<((x654!=x655)^x656));

    if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x685 = 1;
	uint32_t x686 = UINT32_MAX;
	volatile int16_t x687 = -12;
	volatile uint16_t x688 = 14U;
	int32_t t18 = 123170001;

    t18 = (x685<<((x686!=x687)^x688));

    if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x694 = 4U;
	static int8_t x695 = -10;
	volatile int16_t x696 = 2;
	int32_t t19 = -204;

    t19 = (x693<<((x694!=x695)^x696));

    if (t19 != 344) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x697 = INT8_MAX;
	uint16_t x698 = 438U;
	static uint16_t x699 = 17U;
	int8_t x700 = 10;
	volatile int32_t t20 = 407360;

    t20 = (x697<<((x698!=x699)^x700));

    if (t20 != 260096) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x713 = 28U;
	uint32_t x714 = 1716400125U;
	int32_t x715 = INT32_MIN;
	uint8_t x716 = 1U;

    t21 = (x713<<((x714!=x715)^x716));

    if (t21 != 28) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x813 = 29U;
	static int8_t x814 = -1;
	int8_t x815 = INT8_MIN;
	int16_t x816 = 4;
	uint32_t t22 = 6635408U;

    t22 = (x813<<((x814!=x815)^x816));

    if (t22 != 928U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x841 = 322LLU;
	int64_t x842 = INT64_MIN;
	int32_t x843 = -1;
	volatile uint64_t t23 = 1408993558033456LLU;

    t23 = (x841<<((x842!=x843)^x844));

    if (t23 != 10551296LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x845 = 4U;
	uint16_t x846 = 240U;
	int8_t x848 = 5;
	uint32_t t24 = 3U;

    t24 = (x845<<((x846!=x847)^x848));

    if (t24 != 64U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x933 = 1657LLU;
	int16_t x934 = INT16_MIN;
	int8_t x935 = 0;
	int32_t x936 = 43;
	volatile uint64_t t25 = 186LLU;

    t25 = (x933<<((x934!=x935)^x936));

    if (t25 != 7287563068899328LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x945 = 3LL;
	int64_t x946 = 41298076444LL;
	static uint16_t x947 = 5U;
	volatile uint8_t x948 = 26U;
	int64_t t26 = 3137634423880522LL;

    t26 = (x945<<((x946!=x947)^x948));

    if (t26 != 402653184LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x949 = 20963LLU;
	uint64_t x950 = UINT64_MAX;
	int16_t x951 = -1;
	uint64_t t27 = 354764816LLU;

    t27 = (x949<<((x950!=x951)^x952));

    if (t27 != 41926LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x985 = UINT64_MAX;
	int16_t x986 = INT16_MIN;
	volatile int32_t x987 = -82871831;
	static uint64_t x988 = 50LLU;
	volatile uint64_t t28 = 31798157163846577LLU;

    t28 = (x985<<((x986!=x987)^x988));

    if (t28 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x993 = 1381334635U;
	int8_t x994 = -1;
	uint8_t x996 = 0U;
	uint32_t t29 = 11552U;

    t29 = (x993<<((x994!=x995)^x996));

    if (t29 != 2762669270U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1009 = 18;
	int32_t t30 = -749451191;

    t30 = (x1009<<((x1010!=x1011)^x1012));

    if (t30 != 147456) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1117 = 6U;
	uint16_t x1118 = 266U;
	static volatile int32_t x1119 = -1;
	static int32_t t31 = 490264;

    t31 = (x1117<<((x1118!=x1119)^x1120));

    if (t31 != 6) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1161 = 1U;
	static uint64_t x1162 = UINT64_MAX;
	volatile int64_t x1163 = -1LL;
	int8_t x1164 = 15;
	volatile int32_t t32 = 19403;

    t32 = (x1161<<((x1162!=x1163)^x1164));

    if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x1269 = INT8_MAX;
	int64_t x1270 = 81147408773726LL;
	uint8_t x1271 = 4U;
	int16_t x1272 = 2;
	static int32_t t33 = -313722761;

    t33 = (x1269<<((x1270!=x1271)^x1272));

    if (t33 != 1016) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x1305 = 0;
	volatile int32_t x1306 = INT32_MIN;
	static volatile int32_t t34 = -67053;

    t34 = (x1305<<((x1306!=x1307)^x1308));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1319 = UINT64_MAX;
	int32_t t35 = 4;

    t35 = (x1317<<((x1318!=x1319)^x1320));

    if (t35 != 210112) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1333 = 0;
	int32_t x1335 = -114883;
	int16_t x1336 = 6;

    t36 = (x1333<<((x1334!=x1335)^x1336));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x1357 = 0;
	uint16_t x1358 = UINT16_MAX;
	uint16_t x1359 = 9085U;
	static uint32_t x1360 = 29U;
	int32_t t37 = 12225780;

    t37 = (x1357<<((x1358!=x1359)^x1360));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1437 = 0U;
	int16_t x1438 = -1;
	static uint32_t x1439 = 13122743U;
	int8_t x1440 = 0;
	int32_t t38 = 8;

    t38 = (x1437<<((x1438!=x1439)^x1440));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x1573 = UINT32_MAX;
	uint64_t x1574 = 172839LLU;
	static int8_t x1575 = 0;
	uint8_t x1576 = 0U;
	volatile uint32_t t39 = 23033521U;

    t39 = (x1573<<((x1574!=x1575)^x1576));

    if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1577 = 1539LLU;
	volatile int16_t x1579 = -38;
	static int8_t x1580 = 0;
	uint64_t t40 = 1LLU;

    t40 = (x1577<<((x1578!=x1579)^x1580));

    if (t40 != 3078LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x1705 = INT32_MAX;
	static int16_t x1706 = -1367;
	volatile int64_t x1707 = INT64_MIN;
	int8_t x1708 = 1;
	volatile int32_t t41 = INT32_MAX;

    t41 = (x1705<<((x1706!=x1707)^x1708));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x1773 = 1LLU;
	uint64_t x1774 = 73085643575LLU;
	uint8_t x1775 = 3U;
	static volatile int32_t x1776 = 38;
	uint64_t t42 = 2327543635553899LLU;

    t42 = (x1773<<((x1774!=x1775)^x1776));

    if (t42 != 549755813888LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x1829 = 670680LLU;
	int32_t x1830 = INT32_MAX;
	int8_t x1831 = INT8_MIN;
	volatile uint8_t x1832 = 22U;
	static volatile uint64_t t43 = 3LLU;

    t43 = (x1829<<((x1830!=x1831)^x1832));

    if (t43 != 5626071613440LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x1878 = 8609151661121882LLU;
	int16_t x1879 = 1;
	uint16_t x1880 = 6U;
	int32_t t44 = 4090060;

    t44 = (x1877<<((x1878!=x1879)^x1880));

    if (t44 != 61824) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x1881 = 282U;
	int64_t x1882 = INT64_MIN;
	uint16_t x1884 = 1U;
	volatile int32_t t45 = 66;

    t45 = (x1881<<((x1882!=x1883)^x1884));

    if (t45 != 282) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x1905 = 449;
	int64_t x1906 = 931768612405LL;
	static volatile int8_t x1907 = -1;
	uint16_t x1908 = 13U;

    t46 = (x1905<<((x1906!=x1907)^x1908));

    if (t46 != 1839104) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x1930 = 81290314U;
	int16_t x1931 = -1;
	int8_t x1932 = 1;
	static volatile int32_t t47 = -1;

    t47 = (x1929<<((x1930!=x1931)^x1932));

    if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x1990 = 2U;
	volatile uint8_t x1992 = 3U;
	uint64_t t48 = 4025LLU;

    t48 = (x1989<<((x1990!=x1991)^x1992));

    if (t48 != 72507846584652580LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x2005 = UINT64_MAX;
	static int32_t x2006 = 664;
	int32_t x2007 = -474380;
	uint16_t x2008 = 28U;

    t49 = (x2005<<((x2006!=x2007)^x2008));

    if (t49 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x2049 = 69U;
	volatile int8_t x2050 = INT8_MIN;
	uint32_t x2051 = UINT32_MAX;
	static uint8_t x2052 = 0U;

    t50 = (x2049<<((x2050!=x2051)^x2052));

    if (t50 != 138) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x2057 = 4121U;
	static volatile int8_t x2058 = -1;
	int16_t x2059 = INT16_MIN;
	static uint16_t x2060 = 21U;
	volatile uint32_t t51 = 541492U;

    t51 = (x2057<<((x2058!=x2059)^x2060));

    if (t51 != 26214400U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2146 = INT32_MIN;
	int16_t x2147 = -6;
	volatile int64_t x2148 = 24LL;
	volatile int32_t t52 = 2;

    t52 = (x2145<<((x2146!=x2147)^x2148));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x2185 = UINT16_MAX;
	static int32_t x2186 = INT32_MIN;
	int32_t x2187 = INT32_MAX;
	static volatile uint16_t x2188 = 11U;
	volatile int32_t t53 = 2355489;

    t53 = (x2185<<((x2186!=x2187)^x2188));

    if (t53 != 67107840) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x2233 = UINT64_MAX;
	volatile int32_t x2234 = INT32_MAX;
	int16_t x2235 = -126;
	uint8_t x2236 = 35U;
	uint64_t t54 = 2496LLU;

    t54 = (x2233<<((x2234!=x2235)^x2236));

    if (t54 != 18446744056529682432LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x2317 = 48977;
	static int8_t x2319 = INT8_MIN;
	int8_t x2320 = 2;
	static int32_t t55 = -2;

    t55 = (x2317<<((x2318!=x2319)^x2320));

    if (t55 != 391816) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x2321 = UINT8_MAX;
	static volatile int16_t x2322 = -1;
	uint8_t x2324 = 1U;
	int32_t t56 = -1033883650;

    t56 = (x2321<<((x2322!=x2323)^x2324));

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x2333 = 1U;
	uint8_t x2334 = 4U;
	volatile uint16_t x2335 = UINT16_MAX;
	uint8_t x2336 = 5U;
	static uint32_t t57 = 10482U;

    t57 = (x2333<<((x2334!=x2335)^x2336));

    if (t57 != 16U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x2497 = 13U;
	uint32_t x2498 = UINT32_MAX;
	int32_t x2499 = 7639;
	volatile int32_t t58 = 395434822;

    t58 = (x2497<<((x2498!=x2499)^x2500));

    if (t58 != 1664) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x2513 = 0U;
	volatile uint32_t x2514 = 37935U;
	int64_t x2515 = -1LL;
	int32_t t59 = -16103;

    t59 = (x2513<<((x2514!=x2515)^x2516));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x2533 = INT8_MAX;
	int32_t x2534 = INT32_MIN;
	int32_t x2535 = -22489409;
	volatile int16_t x2536 = 0;
	int32_t t60 = 0;

    t60 = (x2533<<((x2534!=x2535)^x2536));

    if (t60 != 254) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x2734 = INT32_MAX;
	volatile int16_t x2735 = INT16_MIN;
	int8_t x2736 = 0;
	volatile uint32_t t61 = 6747673U;

    t61 = (x2733<<((x2734!=x2735)^x2736));

    if (t61 != 4294967294U) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x2845 = 1;
	int8_t x2847 = -33;
	int32_t t62 = -148467;

    t62 = (x2845<<((x2846!=x2847)^x2848));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x2873 = 19;
	volatile uint64_t x2874 = 342LLU;
	volatile int32_t x2875 = INT32_MIN;
	int32_t x2876 = 23;
	int32_t t63 = -59891;

    t63 = (x2873<<((x2874!=x2875)^x2876));

    if (t63 != 79691776) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2905 = 1;
	uint8_t x2907 = UINT8_MAX;
	volatile int32_t t64 = -1433;

    t64 = (x2905<<((x2906!=x2907)^x2908));

    if (t64 != 1048576) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x2945 = 27531U;
	int32_t x2946 = 46;
	volatile uint8_t x2948 = 7U;

    t65 = (x2945<<((x2946!=x2947)^x2948));

    if (t65 != 1761984) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3021 = 262LL;
	int64_t t66 = 14235LL;

    t66 = (x3021<<((x3022!=x3023)^x3024));

    if (t66 != 33536LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3221 = 2282;
	uint32_t x3223 = 1U;
	uint16_t x3224 = 0U;

    t67 = (x3221<<((x3222!=x3223)^x3224));

    if (t67 != 4564) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x3329 = UINT64_MAX;
	static int16_t x3330 = INT16_MIN;
	static int32_t x3331 = -974;
	int16_t x3332 = 10;
	uint64_t t68 = 91920517LLU;

    t68 = (x3329<<((x3330!=x3331)^x3332));

    if (t68 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x3337 = UINT8_MAX;
	uint16_t x3338 = 0U;
	int32_t x3339 = INT32_MIN;
	volatile int8_t x3340 = 0;
	int32_t t69 = -56042988;

    t69 = (x3337<<((x3338!=x3339)^x3340));

    if (t69 != 510) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x3350 = INT32_MIN;
	uint8_t x3352 = 33U;
	int64_t t70 = 13671LL;

    t70 = (x3349<<((x3350!=x3351)^x3352));

    if (t70 != 4533281961669558272LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x3355 = 386119616U;
	uint16_t x3356 = 2U;
	static volatile int32_t t71 = 37919;

    t71 = (x3353<<((x3354!=x3355)^x3356));

    if (t71 != 1016) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x3373 = 90;
	int8_t x3375 = INT8_MIN;
	volatile uint16_t x3376 = 1U;
	volatile int32_t t72 = 0;

    t72 = (x3373<<((x3374!=x3375)^x3376));

    if (t72 != 90) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x3545 = INT16_MAX;
	volatile uint8_t x3546 = 7U;
	int64_t x3547 = -1LL;
	int8_t x3548 = 0;
	int32_t t73 = 0;

    t73 = (x3545<<((x3546!=x3547)^x3548));

    if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x3601 = UINT32_MAX;
	volatile uint32_t x3602 = 82419485U;
	volatile uint16_t x3603 = UINT16_MAX;
	static uint8_t x3604 = 1U;
	uint32_t t74 = UINT32_MAX;

    t74 = (x3601<<((x3602!=x3603)^x3604));

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x3637 = 0;
	int64_t x3638 = 1483LL;
	static int16_t x3639 = INT16_MIN;
	volatile int32_t t75 = 13047841;

    t75 = (x3637<<((x3638!=x3639)^x3640));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x3681 = 243;
	int16_t x3682 = -1020;
	int64_t x3683 = INT64_MIN;
	uint16_t x3684 = 17U;
	volatile int32_t t76 = -49;

    t76 = (x3681<<((x3682!=x3683)^x3684));

    if (t76 != 15925248) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x3705 = 734533309349LLU;
	uint32_t x3706 = UINT32_MAX;
	volatile int16_t x3707 = 1;

    t77 = (x3705<<((x3706!=x3707)^x3708));

    if (t77 != 734533309349LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x3725 = 1401U;
	int32_t x3726 = INT32_MIN;
	int8_t x3727 = -1;
	int16_t x3728 = 3;
	volatile int32_t t78 = 2;

    t78 = (x3725<<((x3726!=x3727)^x3728));

    if (t78 != 5604) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x3737 = UINT32_MAX;
	int32_t x3738 = 213408;
	static volatile uint16_t x3739 = 0U;
	volatile uint8_t x3740 = 5U;

    t79 = (x3737<<((x3738!=x3739)^x3740));

    if (t79 != 4294967280U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x3805 = 193U;
	int16_t x3806 = INT16_MAX;
	static int64_t x3807 = -1LL;
	volatile int8_t x3808 = 24;
	uint32_t t80 = 11481249U;

    t80 = (x3805<<((x3806!=x3807)^x3808));

    if (t80 != 2181038080U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x3901 = 3745979750613225LLU;
	uint16_t x3902 = 37U;
	int32_t x3903 = 0;
	volatile uint64_t t81 = 1701LLU;

    t81 = (x3901<<((x3902!=x3903)^x3904));

    if (t81 != 239742704039246400LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x3917 = 45;
	int64_t x3918 = -168109201LL;
	volatile int8_t x3919 = 3;
	static volatile uint16_t x3920 = 11U;
	int32_t t82 = -12796;

    t82 = (x3917<<((x3918!=x3919)^x3920));

    if (t82 != 46080) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x4017 = 1U;
	static int8_t x4018 = 0;

    t83 = (x4017<<((x4018!=x4019)^x4020));

    if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x4109 = 2;
	int8_t x4110 = 7;
	static uint16_t x4111 = 11U;
	uint8_t x4112 = 1U;
	volatile int32_t t84 = -90690237;

    t84 = (x4109<<((x4110!=x4111)^x4112));

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x4125 = 5578U;
	int16_t x4126 = INT16_MIN;
	int64_t x4127 = -1LL;
	int8_t x4128 = 11;
	uint32_t t85 = 4376539U;

    t85 = (x4125<<((x4126!=x4127)^x4128));

    if (t85 != 5711872U) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint8_t x4315 = 9U;
	uint32_t x4316 = 1U;
	int64_t t86 = INT64_MAX;

    t86 = (x4313<<((x4314!=x4315)^x4316));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x4325 = 15344383LLU;
	uint64_t x4326 = UINT64_MAX;
	int32_t x4327 = 19872;
	int8_t x4328 = 2;

    t87 = (x4325<<((x4326!=x4327)^x4328));

    if (t87 != 122755064LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x4385 = 13U;
	static int64_t x4386 = INT64_MIN;
	static volatile int8_t x4387 = INT8_MIN;
	volatile uint16_t x4388 = 3U;
	int32_t t88 = -653821;

    t88 = (x4385<<((x4386!=x4387)^x4388));

    if (t88 != 52) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x4393 = 60643713963252016LLU;
	int32_t x4395 = -1;

    t89 = (x4393<<((x4394!=x4395)^x4396));

    if (t89 != 3881197693648129024LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x4421 = UINT32_MAX;
	uint16_t x4422 = 1U;
	int32_t x4423 = INT32_MIN;
	volatile uint8_t x4424 = 3U;
	volatile uint32_t t90 = 18573075U;

    t90 = (x4421<<((x4422!=x4423)^x4424));

    if (t90 != 4294967292U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x4601 = 57U;
	int32_t x4603 = INT32_MIN;
	static volatile uint8_t x4604 = 20U;
	volatile int32_t t91 = 12273;

    t91 = (x4601<<((x4602!=x4603)^x4604));

    if (t91 != 59768832) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x4617 = 111U;
	int32_t x4618 = INT32_MIN;
	int8_t x4619 = INT8_MIN;
	uint8_t x4620 = 1U;
	volatile int32_t t92 = 2;

    t92 = (x4617<<((x4618!=x4619)^x4620));

    if (t92 != 111) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x4625 = 34U;
	uint8_t x4626 = UINT8_MAX;
	uint16_t x4627 = UINT16_MAX;
	static volatile int32_t x4628 = 2;

    t93 = (x4625<<((x4626!=x4627)^x4628));

    if (t93 != 272) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x4665 = 2616;
	int64_t x4666 = 68318510191176LL;
	int16_t x4667 = -13360;
	int8_t x4668 = 0;
	static int32_t t94 = 1;

    t94 = (x4665<<((x4666!=x4667)^x4668));

    if (t94 != 5232) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x4725 = 3U;
	uint64_t x4726 = 29LLU;
	static int32_t x4727 = INT32_MAX;
	volatile int32_t t95 = 2340;

    t95 = (x4725<<((x4726!=x4727)^x4728));

    if (t95 != 1536) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x4737 = 1U;
	int64_t x4738 = 3552196483LL;
	volatile int64_t x4739 = INT64_MAX;
	uint16_t x4740 = 11U;
	static int32_t t96 = -20802;

    t96 = (x4737<<((x4738!=x4739)^x4740));

    if (t96 != 1024) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x4873 = UINT32_MAX;
	static uint16_t x4874 = 4U;
	static int8_t x4875 = INT8_MAX;
	volatile uint32_t t97 = UINT32_MAX;

    t97 = (x4873<<((x4874!=x4875)^x4876));

    if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x4893 = UINT64_MAX;
	int32_t x4894 = 1;
	static int32_t x4895 = 1;
	uint16_t x4896 = 11U;
	uint64_t t98 = 618120004481932732LLU;

    t98 = (x4893<<((x4894!=x4895)^x4896));

    if (t98 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x4897 = UINT64_MAX;
	volatile int8_t x4898 = INT8_MAX;
	uint8_t x4900 = 3U;

    t99 = (x4897<<((x4898!=x4899)^x4900));

    if (t99 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x4988 = 7;
	static volatile int32_t t100 = 39;

    t100 = (x4985<<((x4986!=x4987)^x4988));

    if (t100 != 192) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x5033 = 12378967053257243LLU;
	int16_t x5034 = INT16_MAX;
	static volatile int64_t x5035 = 921497580LL;
	uint8_t x5036 = 1U;
	volatile uint64_t t101 = 44124402806684LLU;

    t101 = (x5033<<((x5034!=x5035)^x5036));

    if (t101 != 12378967053257243LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x5233 = UINT16_MAX;
	static int64_t x5234 = -71LL;
	static int8_t x5235 = INT8_MAX;

    t102 = (x5233<<((x5234!=x5235)^x5236));

    if (t102 != 1048560) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x5269 = 4;
	int16_t x5271 = INT16_MAX;
	static uint32_t x5272 = 15U;
	volatile int32_t t103 = 788494;

    t103 = (x5269<<((x5270!=x5271)^x5272));

    if (t103 != 65536) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x5330 = 0U;
	volatile int16_t x5331 = INT16_MIN;
	volatile uint8_t x5332 = 0U;

    t104 = (x5329<<((x5330!=x5331)^x5332));

    if (t104 != 254) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x5361 = 0U;
	volatile int8_t x5362 = INT8_MAX;
	volatile int8_t x5363 = 0;
	int8_t x5364 = 1;
	int32_t t105 = 694;

    t105 = (x5361<<((x5362!=x5363)^x5364));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x5433 = UINT32_MAX;
	int16_t x5434 = -1;
	int16_t x5435 = INT16_MIN;
	volatile uint16_t x5436 = 19U;
	uint32_t t106 = 76U;

    t106 = (x5433<<((x5434!=x5435)^x5436));

    if (t106 != 4294705152U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x5509 = UINT64_MAX;
	volatile int32_t x5510 = INT32_MAX;
	int32_t x5511 = 235018;
	int8_t x5512 = 0;
	volatile uint64_t t107 = 5676LLU;

    t107 = (x5509<<((x5510!=x5511)^x5512));

    if (t107 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x5593 = INT8_MAX;
	static volatile uint16_t x5594 = UINT16_MAX;
	uint8_t x5596 = 2U;

    t108 = (x5593<<((x5594!=x5595)^x5596));

    if (t108 != 508) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x5641 = 103897664U;
	int8_t x5642 = -62;
	volatile uint16_t x5643 = 9229U;
	int16_t x5644 = 1;
	uint32_t t109 = 733789263U;

    t109 = (x5641<<((x5642!=x5643)^x5644));

    if (t109 != 103897664U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x5705 = 1U;
	int16_t x5706 = INT16_MAX;
	static int16_t x5707 = -1;
	static int8_t x5708 = 1;
	volatile int32_t t110 = 4936;

    t110 = (x5705<<((x5706!=x5707)^x5708));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x5721 = 0LL;
	volatile uint64_t x5722 = 64LLU;
	volatile int64_t x5723 = INT64_MIN;
	int8_t x5724 = 33;
	static int64_t t111 = -62216LL;

    t111 = (x5721<<((x5722!=x5723)^x5724));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x5737 = 1483181U;
	int32_t x5738 = -9;
	uint16_t x5739 = 10U;
	int16_t x5740 = 8;

    t112 = (x5737<<((x5738!=x5739)^x5740));

    if (t112 != 759388672U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x5797 = 44U;
	volatile uint8_t x5800 = 3U;
	int32_t t113 = 14;

    t113 = (x5797<<((x5798!=x5799)^x5800));

    if (t113 != 176) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x5897 = 55854205273924055LLU;
	uint8_t x5898 = 71U;
	volatile int32_t x5899 = INT32_MAX;
	uint8_t x5900 = 7U;
	uint64_t t114 = 1997283662872439LLU;

    t114 = (x5897<<((x5898!=x5899)^x5900));

    if (t114 != 3574669137531139520LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x5961 = 9U;
	uint64_t x5962 = 951LLU;
	static int16_t x5963 = INT16_MIN;
	volatile uint8_t x5964 = 1U;
	volatile int32_t t115 = 9;

    t115 = (x5961<<((x5962!=x5963)^x5964));

    if (t115 != 9) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x5989 = INT16_MAX;
	int16_t x5990 = -20;
	volatile uint8_t x5992 = 17U;

    t116 = (x5989<<((x5990!=x5991)^x5992));

    if (t116 != 2147418112) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x6065 = 57;
	int8_t x6066 = INT8_MIN;
	static uint16_t x6067 = UINT16_MAX;
	int32_t t117 = 0;

    t117 = (x6065<<((x6066!=x6067)^x6068));

    if (t117 != 1867776) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x6125 = 19LLU;
	static int64_t x6126 = -1LL;
	volatile int16_t x6127 = INT16_MIN;
	uint16_t x6128 = 1U;
	volatile uint64_t t118 = 16017970300044240LLU;

    t118 = (x6125<<((x6126!=x6127)^x6128));

    if (t118 != 19LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x6326 = -1;
	int32_t x6327 = INT32_MIN;
	volatile uint64_t x6328 = 1LLU;

    t119 = (x6325<<((x6326!=x6327)^x6328));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x6342 = -1;
	uint8_t x6344 = 10U;
	static int32_t t120 = 3429;

    t120 = (x6341<<((x6342!=x6343)^x6344));

    if (t120 != 2048) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x6389 = 0;
	static int8_t x6391 = INT8_MIN;
	int8_t x6392 = 25;
	int32_t t121 = 962;

    t121 = (x6389<<((x6390!=x6391)^x6392));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x6481 = 4U;
	int8_t x6482 = -45;
	static uint8_t x6483 = UINT8_MAX;
	static int32_t t122 = -4162052;

    t122 = (x6481<<((x6482!=x6483)^x6484));

    if (t122 != 512) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x6545 = 60U;
	static int16_t x6546 = -1;
	uint16_t x6548 = 1U;
	volatile int32_t t123 = -64;

    t123 = (x6545<<((x6546!=x6547)^x6548));

    if (t123 != 60) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x6585 = 1LLU;
	uint64_t x6586 = 2328179952LLU;
	int8_t x6587 = -1;
	int32_t x6588 = 0;
	static uint64_t t124 = 6LLU;

    t124 = (x6585<<((x6586!=x6587)^x6588));

    if (t124 != 2LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x6605 = 2;
	int32_t x6606 = INT32_MIN;
	int16_t x6607 = -35;
	int32_t x6608 = 1;
	int32_t t125 = -6192564;

    t125 = (x6605<<((x6606!=x6607)^x6608));

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x6609 = INT8_MAX;
	volatile uint32_t x6610 = UINT32_MAX;
	uint64_t x6611 = UINT64_MAX;
	volatile uint8_t x6612 = 14U;

    t126 = (x6609<<((x6610!=x6611)^x6612));

    if (t126 != 4161536) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x6750 = -3137286111841388119LL;
	int16_t x6752 = 1;
	int64_t t127 = INT64_MAX;

    t127 = (x6749<<((x6750!=x6751)^x6752));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x6781 = 5710;
	int32_t x6782 = 248;
	static int32_t x6783 = INT32_MIN;
	int64_t x6784 = 0LL;
	volatile int32_t t128 = -645;

    t128 = (x6781<<((x6782!=x6783)^x6784));

    if (t128 != 11420) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x6860 = 13;
	volatile uint32_t t129 = 1001474386U;

    t129 = (x6857<<((x6858!=x6859)^x6860));

    if (t129 != 4294963200U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x6905 = UINT64_MAX;
	int8_t x6906 = INT8_MIN;
	static volatile int64_t x6907 = INT64_MIN;
	int16_t x6908 = 0;
	volatile uint64_t t130 = 870LLU;

    t130 = (x6905<<((x6906!=x6907)^x6908));

    if (t130 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x6937 = 1586U;
	int16_t x6938 = -1;
	int8_t x6940 = 0;
	volatile uint32_t t131 = 151893476U;

    t131 = (x6937<<((x6938!=x6939)^x6940));

    if (t131 != 3172U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x7010 = INT32_MIN;
	volatile int8_t x7012 = 1;
	static int32_t t132 = -30594;

    t132 = (x7009<<((x7010!=x7011)^x7012));

    if (t132 != 7) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x7015 = 9U;
	static uint16_t x7016 = 4U;
	int32_t t133 = -108;

    t133 = (x7013<<((x7014!=x7015)^x7016));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x7153 = 459U;
	static int8_t x7154 = INT8_MIN;
	volatile int32_t x7155 = INT32_MIN;
	uint64_t x7156 = 15LLU;
	volatile int32_t t134 = 1;

    t134 = (x7153<<((x7154!=x7155)^x7156));

    if (t134 != 7520256) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x7393 = UINT64_MAX;
	int8_t x7395 = INT8_MAX;
	int8_t x7396 = 1;
	uint64_t t135 = UINT64_MAX;

    t135 = (x7393<<((x7394!=x7395)^x7396));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x7469 = 1700212245LLU;
	volatile int64_t x7470 = INT64_MIN;
	static uint16_t x7471 = 6U;
	uint8_t x7472 = 9U;
	uint64_t t136 = 900774LLU;

    t136 = (x7469<<((x7470!=x7471)^x7472));

    if (t136 != 435254334720LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x7473 = UINT64_MAX;
	int32_t x7474 = INT32_MIN;
	volatile int16_t x7475 = INT16_MIN;
	int8_t x7476 = 17;
	static uint64_t t137 = 28508332LLU;

    t137 = (x7473<<((x7474!=x7475)^x7476));

    if (t137 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x7497 = UINT16_MAX;
	int16_t x7499 = INT16_MAX;
	int16_t x7500 = 1;
	int32_t t138 = -7466;

    t138 = (x7497<<((x7498!=x7499)^x7500));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x7521 = INT8_MAX;
	uint16_t x7522 = UINT16_MAX;
	volatile int8_t x7524 = 0;
	static volatile int32_t t139 = -65265;

    t139 = (x7521<<((x7522!=x7523)^x7524));

    if (t139 != 254) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x7581 = INT64_MAX;
	int16_t x7582 = -1;
	static int16_t x7583 = -1;
	int16_t x7584 = 0;
	volatile int64_t t140 = INT64_MAX;

    t140 = (x7581<<((x7582!=x7583)^x7584));

    if (t140 != INT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x7589 = 10414582U;
	uint16_t x7590 = 0U;
	volatile int8_t x7592 = 24;
	uint32_t t141 = 1U;

    t141 = (x7589<<((x7590!=x7591)^x7592));

    if (t141 != 3959422976U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x7657 = 0U;
	static int16_t x7658 = -1;
	uint32_t x7659 = UINT32_MAX;
	int8_t x7660 = 3;

    t142 = (x7657<<((x7658!=x7659)^x7660));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x7701 = 31U;
	int8_t x7702 = INT8_MIN;
	static int16_t x7703 = -1;
	int32_t x7704 = 0;
	volatile int32_t t143 = 109983;

    t143 = (x7701<<((x7702!=x7703)^x7704));

    if (t143 != 62) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x7765 = INT16_MAX;
	int16_t x7767 = INT16_MAX;
	volatile uint16_t x7768 = 2U;
	volatile int32_t t144 = -111311;

    t144 = (x7765<<((x7766!=x7767)^x7768));

    if (t144 != 262136) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x7849 = 0U;
	volatile uint16_t x7850 = 85U;
	static int64_t x7851 = INT64_MIN;
	static int16_t x7852 = 0;
	volatile uint32_t t145 = 5U;

    t145 = (x7849<<((x7850!=x7851)^x7852));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x7881 = INT8_MAX;
	volatile int8_t x7882 = -1;
	int64_t x7883 = INT64_MAX;
	volatile int32_t t146 = 12;

    t146 = (x7881<<((x7882!=x7883)^x7884));

    if (t146 != 254) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x7933 = UINT32_MAX;
	int8_t x7934 = INT8_MAX;
	uint8_t x7936 = 1U;

    t147 = (x7933<<((x7934!=x7935)^x7936));

    if (t147 != 4294967294U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x8017 = 8946435LLU;
	int16_t x8018 = INT16_MIN;
	int32_t x8019 = -545;
	static volatile int16_t x8020 = 4;
	volatile uint64_t t148 = 115646LLU;

    t148 = (x8017<<((x8018!=x8019)^x8020));

    if (t148 != 286285920LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x8041 = 56U;
	uint64_t x8042 = 216LLU;
	uint32_t x8043 = 3U;
	volatile uint16_t x8044 = 21U;
	static volatile int32_t t149 = -12148;

    t149 = (x8041<<((x8042!=x8043)^x8044));

    if (t149 != 58720256) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x8090 = -1LL;
	int8_t x8091 = -1;
	static uint16_t x8092 = 17U;

    t150 = (x8089<<((x8090!=x8091)^x8092));

    if (t150 != 210370560) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x8149 = 1;
	int32_t x8150 = -1;
	int16_t x8151 = -1;
	static int16_t x8152 = 2;
	volatile int32_t t151 = 42;

    t151 = (x8149<<((x8150!=x8151)^x8152));

    if (t151 != 4) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x8189 = 4864U;
	int16_t x8190 = 5894;
	int16_t x8191 = INT16_MIN;
	static volatile int32_t t152 = -1008876846;

    t152 = (x8189<<((x8190!=x8191)^x8192));

    if (t152 != 311296) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x8242 = INT32_MAX;
	static int64_t x8244 = 2LL;
	static volatile int64_t t153 = 6264045617LL;

    t153 = (x8241<<((x8242!=x8243)^x8244));

    if (t153 != 13677105064LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x8482 = INT64_MAX;
	int32_t x8483 = INT32_MAX;
	uint8_t x8484 = 11U;
	int32_t t154 = 1211758;

    t154 = (x8481<<((x8482!=x8483)^x8484));

    if (t154 != 390144) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x8541 = UINT64_MAX;
	int16_t x8543 = INT16_MAX;
	int16_t x8544 = 20;
	volatile uint64_t t155 = 50359421395489224LLU;

    t155 = (x8541<<((x8542!=x8543)^x8544));

    if (t155 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x8665 = INT8_MAX;
	static uint8_t x8666 = 8U;
	int16_t x8667 = 121;
	int8_t x8668 = 1;
	int32_t t156 = -2381906;

    t156 = (x8665<<((x8666!=x8667)^x8668));

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x8757 = UINT32_MAX;
	int32_t x8758 = -68;
	int8_t x8759 = INT8_MAX;
	uint16_t x8760 = 24U;
	static uint32_t t157 = 43U;

    t157 = (x8757<<((x8758!=x8759)^x8760));

    if (t157 != 4261412864U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x8809 = 3U;
	static volatile int32_t x8810 = INT32_MIN;
	int8_t x8811 = INT8_MIN;
	volatile int8_t x8812 = 1;
	static int32_t t158 = 1523714;

    t158 = (x8809<<((x8810!=x8811)^x8812));

    if (t158 != 3) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x8821 = UINT64_MAX;
	int16_t x8823 = 0;
	volatile uint64_t t159 = 343LLU;

    t159 = (x8821<<((x8822!=x8823)^x8824));

    if (t159 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x8845 = 823052242U;
	volatile int64_t x8847 = -1004722LL;
	int8_t x8848 = 1;
	volatile uint32_t t160 = 611710719U;

    t160 = (x8845<<((x8846!=x8847)^x8848));

    if (t160 != 823052242U) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x8861 = 272U;
	uint8_t x8862 = UINT8_MAX;
	int64_t x8863 = -1LL;
	uint32_t x8864 = 1U;
	static int32_t t161 = 2550769;

    t161 = (x8861<<((x8862!=x8863)^x8864));

    if (t161 != 272) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x8889 = UINT64_MAX;
	uint8_t x8891 = UINT8_MAX;
	int8_t x8892 = 1;
	volatile uint64_t t162 = UINT64_MAX;

    t162 = (x8889<<((x8890!=x8891)^x8892));

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x8913 = UINT8_MAX;
	static int16_t x8914 = INT16_MIN;
	int32_t x8915 = -5726;
	uint16_t x8916 = 13U;
	int32_t t163 = 5842;

    t163 = (x8913<<((x8914!=x8915)^x8916));

    if (t163 != 1044480) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x8933 = UINT32_MAX;
	int16_t x8934 = INT16_MIN;
	static uint8_t x8935 = 0U;
	static uint16_t x8936 = 2U;
	volatile uint32_t t164 = 28U;

    t164 = (x8933<<((x8934!=x8935)^x8936));

    if (t164 != 4294967288U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x9166 = UINT64_MAX;
	volatile uint32_t x9167 = UINT32_MAX;
	volatile int32_t t165 = 18914;

    t165 = (x9165<<((x9166!=x9167)^x9168));

    if (t165 != 156) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x9261 = 61994075908633LLU;
	int64_t x9262 = -1LL;
	uint8_t x9263 = 0U;
	int8_t x9264 = 33;

    t166 = (x9261<<((x9262!=x9263)^x9264));

    if (t166 != 2224613396551041024LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x9294 = 1U;
	int8_t x9295 = -3;
	uint16_t x9296 = 1U;
	int32_t t167 = 865;

    t167 = (x9293<<((x9294!=x9295)^x9296));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x9421 = 532235857LLU;
	volatile int32_t x9422 = INT32_MIN;
	static int16_t x9423 = INT16_MIN;
	uint16_t x9424 = 11U;
	uint64_t t168 = 15313679496LLU;

    t168 = (x9421<<((x9422!=x9423)^x9424));

    if (t168 != 545009517568LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x9485 = UINT64_MAX;
	volatile int64_t x9486 = INT64_MIN;
	int32_t x9487 = 49986558;
	uint8_t x9488 = 31U;
	static uint64_t t169 = 3LLU;

    t169 = (x9485<<((x9486!=x9487)^x9488));

    if (t169 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x9541 = 177U;
	int64_t x9542 = INT64_MIN;
	volatile int64_t x9543 = -60455LL;
	int16_t x9544 = 2;
	int32_t t170 = 23106;

    t170 = (x9541<<((x9542!=x9543)^x9544));

    if (t170 != 1416) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x9565 = 1;
	static int32_t x9566 = INT32_MIN;
	uint8_t x9567 = UINT8_MAX;
	int16_t x9568 = 0;
	int32_t t171 = 21578;

    t171 = (x9565<<((x9566!=x9567)^x9568));

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x9569 = UINT64_MAX;
	static uint16_t x9572 = 8U;
	volatile uint64_t t172 = 78463518505LLU;

    t172 = (x9569<<((x9570!=x9571)^x9572));

    if (t172 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x9614 = -1;
	int64_t x9615 = INT64_MAX;
	static uint32_t x9616 = 0U;
	static volatile uint64_t t173 = 178215421772812LLU;

    t173 = (x9613<<((x9614!=x9615)^x9616));

    if (t173 != 2LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x9773 = 6736529344131182LLU;
	volatile int16_t x9775 = INT16_MIN;
	int8_t x9776 = 0;
	volatile uint64_t t174 = 10773701484118LLU;

    t174 = (x9773<<((x9774!=x9775)^x9776));

    if (t174 != 13473058688262364LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x9778 = 171826054LLU;
	uint32_t x9779 = UINT32_MAX;
	volatile int32_t t175 = 28164300;

    t175 = (x9777<<((x9778!=x9779)^x9780));

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x9809 = 781591U;
	volatile int32_t x9811 = INT32_MIN;
	int8_t x9812 = 28;
	static volatile uint32_t t176 = 1991794412U;

    t176 = (x9809<<((x9810!=x9811)^x9812));

    if (t176 != 3758096384U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x9845 = 3U;
	static uint64_t x9847 = 26LLU;
	volatile int32_t t177 = 7189;

    t177 = (x9845<<((x9846!=x9847)^x9848));

    if (t177 != 49152) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint32_t x9925 = 48U;
	volatile uint64_t x9926 = UINT64_MAX;
	uint32_t x9927 = 2941U;
	volatile uint32_t t178 = 13445524U;

    t178 = (x9925<<((x9926!=x9927)^x9928));

    if (t178 != 48U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x9933 = 993U;
	uint32_t x9934 = UINT32_MAX;
	static volatile int64_t x9935 = INT64_MIN;
	uint8_t x9936 = 0U;
	volatile int32_t t179 = -14;

    t179 = (x9933<<((x9934!=x9935)^x9936));

    if (t179 != 1986) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x9974 = 1;
	uint64_t x9975 = 3058671908235754LLU;

    t180 = (x9973<<((x9974!=x9975)^x9976));

    if (t180 != 4294965248U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x9989 = UINT64_MAX;
	int32_t x9991 = INT32_MIN;
	uint64_t t181 = 2208810LLU;

    t181 = (x9989<<((x9990!=x9991)^x9992));

    if (t181 != 17293822569102704640LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x10129 = 343354U;
	int16_t x10130 = INT16_MIN;
	int8_t x10131 = 14;
	int16_t x10132 = 1;
	volatile uint32_t t182 = 1035176242U;

    t182 = (x10129<<((x10130!=x10131)^x10132));

    if (t182 != 343354U) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x10165 = 1035138;
	static volatile uint64_t x10166 = 34288559992082LLU;
	int32_t t183 = 53;

    t183 = (x10165<<((x10166!=x10167)^x10168));

    if (t183 != 2119962624) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x10169 = UINT8_MAX;
	volatile int32_t x10170 = -563867551;
	uint64_t x10171 = UINT64_MAX;
	int8_t x10172 = 23;
	volatile int32_t t184 = -39900005;

    t184 = (x10169<<((x10170!=x10171)^x10172));

    if (t184 != 1069547520) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x10189 = UINT64_MAX;
	static int64_t x10190 = -1LL;
	int8_t x10191 = INT8_MAX;
	volatile uint8_t x10192 = 14U;

    t185 = (x10189<<((x10190!=x10191)^x10192));

    if (t185 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x10245 = UINT64_MAX;
	static int8_t x10246 = -1;
	int32_t x10247 = INT32_MAX;
	uint64_t x10248 = 0LLU;
	static volatile uint64_t t186 = 23338384789350LLU;

    t186 = (x10245<<((x10246!=x10247)^x10248));

    if (t186 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x10265 = 1;
	int64_t x10266 = -1LL;
	static int64_t x10267 = -1LL;
	uint32_t x10268 = 7U;
	volatile int32_t t187 = 1745;

    t187 = (x10265<<((x10266!=x10267)^x10268));

    if (t187 != 128) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x10525 = 23679U;
	uint32_t x10527 = 456478U;
	uint8_t x10528 = 13U;
	uint32_t t188 = 37U;

    t188 = (x10525<<((x10526!=x10527)^x10528));

    if (t188 != 96989184U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x10566 = UINT32_MAX;
	int8_t x10567 = 5;
	int32_t x10568 = 1;
	volatile int32_t t189 = INT32_MAX;

    t189 = (x10565<<((x10566!=x10567)^x10568));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x10833 = 10;
	volatile int8_t x10834 = 3;
	uint8_t x10836 = 3U;
	int32_t t190 = 15;

    t190 = (x10833<<((x10834!=x10835)^x10836));

    if (t190 != 40) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x10854 = UINT8_MAX;
	int8_t x10856 = 0;
	int32_t t191 = 394609558;

    t191 = (x10853<<((x10854!=x10855)^x10856));

    if (t191 != 140) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x10957 = 1U;
	static int32_t x10958 = 6071656;
	static uint16_t x10959 = 615U;
	volatile int32_t t192 = 349640112;

    t192 = (x10957<<((x10958!=x10959)^x10960));

    if (t192 != 4) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x10989 = 6;
	uint32_t x10990 = 14808751U;
	volatile uint16_t x10991 = UINT16_MAX;

    t193 = (x10989<<((x10990!=x10991)^x10992));

    if (t193 != 6) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x11017 = 9;
	int8_t x11018 = INT8_MAX;
	int32_t x11019 = -48906476;
	static int32_t t194 = -213;

    t194 = (x11017<<((x11018!=x11019)^x11020));

    if (t194 != 18) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x11031 = INT64_MIN;
	static volatile uint64_t t195 = 678LLU;

    t195 = (x11029<<((x11030!=x11031)^x11032));

    if (t195 != 53600081411050496LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x11069 = UINT16_MAX;
	static volatile int64_t x11071 = 423441906392LL;
	int32_t x11072 = 7;
	static volatile int32_t t196 = -461;

    t196 = (x11069<<((x11070!=x11071)^x11072));

    if (t196 != 4194240) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x11121 = 114646121LLU;
	static uint16_t x11122 = 13U;
	int16_t x11123 = INT16_MAX;
	uint16_t x11124 = 14U;
	uint64_t t197 = 29650337161936441LLU;

    t197 = (x11121<<((x11122!=x11123)^x11124));

    if (t197 != 3756724092928LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x11153 = 329384U;
	uint64_t x11154 = UINT64_MAX;
	int8_t x11156 = 0;
	uint32_t t198 = 1654153045U;

    t198 = (x11153<<((x11154!=x11155)^x11156));

    if (t198 != 658768U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x11193 = 3;
	static int8_t x11195 = INT8_MIN;
	uint64_t x11196 = 4LLU;
	volatile int32_t t199 = -1226;

    t199 = (x11193<<((x11194!=x11195)^x11196));

    if (t199 != 96) { NG(); } else { ; }
	
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

