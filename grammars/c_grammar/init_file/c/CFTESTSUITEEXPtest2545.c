
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

volatile uint32_t x109 = 0U;
int32_t x110 = -1;
int16_t x111 = INT16_MIN;
int16_t x301 = INT16_MAX;
uint32_t x407 = 6U;
volatile int32_t t2 = 51;
uint64_t x463 = UINT64_MAX;
volatile int8_t x464 = -3;
int64_t x500 = -1LL;
int32_t t4 = INT32_MAX;
static volatile int64_t x826 = INT64_MIN;
uint16_t x834 = 0U;
int32_t x835 = -1;
volatile int16_t x840 = -1;
volatile int32_t t8 = 3138;
volatile int8_t x1082 = 0;
int8_t x1178 = -1;
uint8_t x1353 = 5U;
int64_t x1425 = INT64_MAX;
int64_t t13 = INT64_MAX;
volatile uint32_t t15 = 286U;
int32_t x1620 = INT32_MAX;
volatile uint32_t x1721 = 4434U;
static int8_t x1810 = INT8_MIN;
int64_t x1920 = -1LL;
int64_t x1970 = INT64_MAX;
int64_t x2008 = -17LL;
int16_t x2013 = 1312;
int32_t x2014 = INT32_MIN;
volatile int32_t t23 = 0;
static uint16_t x2177 = 82U;
int32_t x2180 = INT32_MIN;
volatile int32_t t24 = -410759429;
int64_t x2398 = -1LL;
volatile int16_t x2402 = 1765;
int64_t x2432 = -1LL;
volatile int32_t t30 = -6;
volatile uint32_t x2477 = UINT32_MAX;
static int64_t x2480 = -1LL;
volatile int8_t x2588 = -1;
volatile uint32_t x2613 = 455U;
static int8_t x2616 = -2;
int64_t x2726 = -1LL;
uint8_t x2825 = UINT8_MAX;
int16_t x2923 = INT16_MIN;
volatile uint16_t x2979 = UINT16_MAX;
int32_t x3037 = INT32_MAX;
volatile int32_t t43 = -475214;
int16_t x3078 = -51;
static uint32_t t44 = 354240U;
uint16_t x3255 = 15328U;
int32_t t46 = INT32_MAX;
uint16_t x3317 = 12U;
int16_t x3467 = -1;
volatile uint64_t t51 = UINT64_MAX;
static int32_t x3930 = INT32_MIN;
int16_t x3931 = -1;
int8_t x4099 = -1;
volatile uint64_t t56 = 3811217970838LLU;
int16_t x4170 = INT16_MIN;
volatile int16_t x4304 = -21;
volatile int32_t x4568 = INT32_MIN;
uint64_t x4659 = 57588751404LLU;
volatile int32_t t62 = 546790;
static int16_t x4792 = -1;
volatile uint8_t x5142 = 0U;
int32_t x5181 = INT32_MAX;
static int32_t x5184 = -1;
static int32_t t67 = INT32_MAX;
int32_t x5415 = INT32_MIN;
static int16_t x5416 = -1;
int64_t t69 = INT64_MAX;
int32_t t71 = -833609;
int8_t x5495 = INT8_MIN;
int8_t x5496 = INT8_MIN;
volatile int64_t x5681 = INT64_MAX;
static volatile int16_t x5685 = INT16_MAX;
static volatile int64_t t75 = 11602LL;
int8_t x5821 = INT8_MAX;
int8_t x5860 = -1;
int64_t t77 = -75955954518477LL;
static uint16_t x5922 = 8273U;
int32_t t79 = -56619;
int16_t x5943 = -1;
int32_t x6043 = INT32_MIN;
volatile uint32_t t82 = 10U;
volatile int16_t x6155 = -1;
uint64_t t84 = 43949LLU;
int32_t x6464 = -1;
int64_t x6493 = INT64_MAX;
volatile int8_t x6690 = -1;
static int64_t x6813 = 26917LL;
uint32_t x6857 = 134U;
uint8_t x7021 = 0U;
int64_t x7114 = INT64_MIN;
int8_t x7207 = 45;
uint32_t x7254 = 31449U;
int16_t x7387 = -8009;
int32_t t99 = -392;
int16_t x7470 = -1;
volatile uint32_t x7474 = UINT32_MAX;
int32_t x7475 = 30082;
int32_t t102 = 27651220;
uint64_t t103 = 906191LLU;
int64_t x7604 = -1LL;
volatile uint64_t x7777 = 47LLU;
int8_t x7816 = -22;
uint32_t x8031 = 18U;
static uint8_t x8081 = UINT8_MAX;
static int32_t x8084 = -1;
uint64_t x8145 = 16063595687LLU;
uint16_t x8147 = 1U;
volatile int64_t t112 = INT64_MAX;
uint16_t x8385 = 8U;
int16_t x8388 = -1;
int16_t x8486 = INT16_MIN;
volatile int64_t x8488 = -1LL;
static int16_t x8565 = INT16_MAX;
int64_t x8568 = -19LL;
static int8_t x8753 = INT8_MAX;
int32_t t119 = -52;
int16_t x8871 = -1;
int16_t x8872 = -5;
volatile uint8_t x8913 = 17U;
int32_t x8978 = -3683;
static volatile int16_t x9015 = -1;
int8_t x9016 = -1;
volatile int8_t x9018 = INT8_MIN;
int8_t x9030 = INT8_MIN;
int32_t x9031 = INT32_MIN;
int32_t t127 = 114455;
static int32_t x9082 = INT32_MIN;
int8_t x9090 = 1;
volatile int16_t x9117 = 0;
int16_t x9215 = -2;
uint32_t x9229 = 1019U;
int32_t x9232 = INT32_MIN;
uint16_t x9233 = 0U;
uint32_t x9234 = 1U;
int16_t x9236 = -1;
volatile int32_t t134 = 110602966;
uint8_t x9383 = UINT8_MAX;
volatile int32_t x9678 = INT32_MIN;
volatile uint64_t x9697 = 1390LLU;
volatile uint64_t t138 = 127130064292329002LLU;
uint64_t x10149 = 179LLU;
static int64_t x10150 = -1LL;
static int32_t x10259 = -1;
int8_t x10580 = -1;
uint8_t x10702 = 12U;
volatile int32_t t154 = -4171151;
int32_t t155 = 15392113;
volatile uint32_t t156 = 2002625U;
uint64_t x10925 = UINT64_MAX;
static uint32_t x10926 = UINT32_MAX;
int16_t x11200 = -1;
volatile int32_t t159 = 24;
int64_t x11336 = -1LL;
volatile int32_t t161 = 1;
uint16_t x11609 = 4411U;
static uint16_t x11612 = UINT16_MAX;
static int32_t x11666 = -968408997;
int8_t x11667 = -19;
static int32_t x11671 = -1;
volatile int16_t x11823 = -1;
static int8_t x11826 = -7;
volatile int32_t t167 = INT32_MAX;
volatile int64_t x11946 = INT64_MAX;
int32_t t169 = 8388172;
static uint32_t x12160 = UINT32_MAX;
volatile int64_t x12181 = 1093LL;
volatile int64_t t172 = -636292896LL;
int8_t x12283 = INT8_MIN;
static int32_t x12349 = 3;
static uint64_t x12352 = UINT64_MAX;
volatile int32_t t176 = -92033;
volatile int32_t x12538 = INT32_MIN;
int8_t x12544 = -1;
int32_t t180 = -34;
uint16_t x12645 = UINT16_MAX;
int8_t x13073 = INT8_MAX;
static volatile int16_t x13075 = INT16_MIN;
static int8_t x13112 = -32;
volatile int32_t t186 = 97;
uint64_t x13341 = 959186357650965LLU;
int64_t x13344 = -6LL;
uint64_t x13373 = 379LLU;
int8_t x13374 = INT8_MIN;
volatile int16_t x13375 = INT16_MAX;
int8_t x13463 = INT8_MAX;
static uint64_t x13464 = UINT64_MAX;
uint8_t x13492 = UINT8_MAX;
int16_t x13502 = -1;
int64_t x13596 = -1LL;
volatile uint8_t x13741 = 1U;
static volatile uint8_t x13743 = 88U;
int32_t t197 = -1;
volatile int8_t x13778 = -1;


void f0(void) {
    	int32_t x112 = -1;
	volatile uint32_t t0 = 7198U;

    t0 = (x109>>((x110|x111)^x112));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x302 = -20;
	uint32_t x303 = UINT32_MAX;
	volatile uint32_t x304 = UINT32_MAX;
	volatile int32_t t1 = -83;

    t1 = (x301>>((x302|x303)^x304));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MIN;
	static int8_t x408 = INT8_MIN;

    t2 = (x405>>((x406|x407)^x408));

    if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x461 = 270U;
	int64_t x462 = INT64_MAX;
	uint32_t t3 = 791U;

    t3 = (x461>>((x462|x463)^x464));

    if (t3 != 67U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x497 = INT32_MAX;
	static int16_t x498 = INT16_MAX;
	int64_t x499 = -352LL;

    t4 = (x497>>((x498|x499)^x500));

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x741 = 114200U;
	int16_t x742 = -1;
	int32_t x743 = INT32_MIN;
	static int8_t x744 = -1;
	uint32_t t5 = 6939494U;

    t5 = (x741>>((x742|x743)^x744));

    if (t5 != 114200U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x825 = INT64_MAX;
	uint8_t x827 = 0U;
	static int64_t x828 = INT64_MIN;
	volatile int64_t t6 = INT64_MAX;

    t6 = (x825>>((x826|x827)^x828));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x833 = 26048U;
	uint64_t x836 = UINT64_MAX;
	static int32_t t7 = 280629;

    t7 = (x833>>((x834|x835)^x836));

    if (t7 != 26048) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x837 = 8873U;
	volatile int16_t x838 = INT16_MIN;
	volatile uint64_t x839 = UINT64_MAX;

    t8 = (x837>>((x838|x839)^x840));

    if (t8 != 8873) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x893 = 23169422595LL;
	int16_t x894 = -1;
	static int16_t x895 = 4;
	int16_t x896 = -1;
	volatile int64_t t9 = -102938854982233011LL;

    t9 = (x893>>((x894|x895)^x896));

    if (t9 != 23169422595LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x1081 = 0LL;
	uint64_t x1083 = UINT64_MAX;
	int16_t x1084 = -1;
	static volatile int64_t t10 = -404LL;

    t10 = (x1081>>((x1082|x1083)^x1084));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x1177 = 12U;
	volatile uint16_t x1179 = UINT16_MAX;
	int64_t x1180 = -1LL;
	volatile uint32_t t11 = 2415494U;

    t11 = (x1177>>((x1178|x1179)^x1180));

    if (t11 != 12U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x1354 = UINT64_MAX;
	static int16_t x1355 = INT16_MAX;
	int8_t x1356 = -3;
	int32_t t12 = 392;

    t12 = (x1353>>((x1354|x1355)^x1356));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x1426 = -1;
	int16_t x1427 = -1;
	uint64_t x1428 = UINT64_MAX;

    t13 = (x1425>>((x1426|x1427)^x1428));

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1489 = 965LLU;
	uint64_t x1490 = 884810863788LLU;
	int8_t x1491 = -1;
	int8_t x1492 = -1;
	volatile uint64_t t14 = 157170065539991LLU;

    t14 = (x1489>>((x1490|x1491)^x1492));

    if (t14 != 965LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x1569 = UINT32_MAX;
	int8_t x1570 = -13;
	static int64_t x1571 = 7154932042101LL;
	static int8_t x1572 = -1;

    t15 = (x1569>>((x1570|x1571)^x1572));

    if (t15 != 16777215U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1617 = 77573U;
	uint64_t x1618 = 493696LLU;
	volatile int32_t x1619 = INT32_MAX;
	uint32_t t16 = 8U;

    t16 = (x1617>>((x1618|x1619)^x1620));

    if (t16 != 77573U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1722 = INT16_MIN;
	int64_t x1723 = -1LL;
	volatile int8_t x1724 = -1;
	static uint32_t t17 = 16178901U;

    t17 = (x1721>>((x1722|x1723)^x1724));

    if (t17 != 4434U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1809 = 2U;
	static uint32_t x1811 = UINT32_MAX;
	static int16_t x1812 = -1;
	static int32_t t18 = -122072759;

    t18 = (x1809>>((x1810|x1811)^x1812));

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1917 = 0;
	uint64_t x1918 = UINT64_MAX;
	uint32_t x1919 = 173335802U;
	volatile int32_t t19 = -3;

    t19 = (x1917>>((x1918|x1919)^x1920));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1969 = 32611578887LLU;
	int8_t x1971 = -1;
	int32_t x1972 = -1;
	static volatile uint64_t t20 = 169181LLU;

    t20 = (x1969>>((x1970|x1971)^x1972));

    if (t20 != 32611578887LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x2005 = 3506;
	static int32_t x2006 = -1;
	volatile int64_t x2007 = -1LL;
	static int32_t t21 = -2;

    t21 = (x2005>>((x2006|x2007)^x2008));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x2015 = INT32_MAX;
	int8_t x2016 = -1;
	int32_t t22 = -3168;

    t22 = (x2013>>((x2014|x2015)^x2016));

    if (t22 != 1312) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x2037 = 3082U;
	int8_t x2038 = 0;
	int64_t x2039 = INT64_MIN;
	volatile int64_t x2040 = INT64_MIN;

    t23 = (x2037>>((x2038|x2039)^x2040));

    if (t23 != 3082) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x2178 = INT64_MIN;
	int32_t x2179 = INT32_MIN;

    t24 = (x2177>>((x2178|x2179)^x2180));

    if (t24 != 82) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x2245 = UINT32_MAX;
	int16_t x2246 = -1;
	uint64_t x2247 = 1396819LLU;
	uint64_t x2248 = UINT64_MAX;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = (x2245>>((x2246|x2247)^x2248));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x2397 = UINT64_MAX;
	int32_t x2399 = INT32_MIN;
	static int64_t x2400 = -1LL;
	uint64_t t26 = UINT64_MAX;

    t26 = (x2397>>((x2398|x2399)^x2400));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x2401 = UINT64_MAX;
	int8_t x2403 = -6;
	volatile int8_t x2404 = -1;
	uint64_t t27 = UINT64_MAX;

    t27 = (x2401>>((x2402|x2403)^x2404));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x2429 = INT32_MAX;
	static volatile int64_t x2430 = -14LL;
	int64_t x2431 = -14696134574626LL;
	static volatile int32_t t28 = -411842990;

    t28 = (x2429>>((x2430|x2431)^x2432));

    if (t28 != 1073741823) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x2453 = INT64_MAX;
	int8_t x2454 = 4;
	volatile int64_t x2455 = INT64_MIN;
	volatile int64_t x2456 = INT64_MIN;
	int64_t t29 = 868831868649LL;

    t29 = (x2453>>((x2454|x2455)^x2456));

    if (t29 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x2461 = UINT8_MAX;
	int32_t x2462 = -46;
	static int8_t x2463 = INT8_MAX;
	int8_t x2464 = -8;

    t30 = (x2461>>((x2462|x2463)^x2464));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x2478 = 117U;
	static volatile int8_t x2479 = INT8_MIN;
	static volatile uint32_t t31 = 824318612U;

    t31 = (x2477>>((x2478|x2479)^x2480));

    if (t31 != 4194303U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x2585 = 62LL;
	volatile int8_t x2586 = -1;
	uint64_t x2587 = 726LLU;
	static int64_t t32 = -142663760LL;

    t32 = (x2585>>((x2586|x2587)^x2588));

    if (t32 != 62LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int32_t x2614 = -1;
	static volatile int64_t x2615 = INT64_MIN;
	volatile uint32_t t33 = 11666140U;

    t33 = (x2613>>((x2614|x2615)^x2616));

    if (t33 != 227U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x2621 = INT32_MAX;
	int16_t x2622 = -1;
	uint64_t x2623 = UINT64_MAX;
	int16_t x2624 = -1;
	volatile int32_t t34 = INT32_MAX;

    t34 = (x2621>>((x2622|x2623)^x2624));

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2633 = 13U;
	int32_t x2634 = INT32_MIN;
	static volatile int64_t x2635 = -1LL;
	static int64_t x2636 = -22LL;
	int32_t t35 = -2160802;

    t35 = (x2633>>((x2634|x2635)^x2636));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2725 = 240520998064LLU;
	static int8_t x2727 = 2;
	int32_t x2728 = -5;
	volatile uint64_t t36 = 208304LLU;

    t36 = (x2725>>((x2726|x2727)^x2728));

    if (t36 != 15032562379LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x2737 = 55059U;
	uint16_t x2738 = 8U;
	int32_t x2739 = INT32_MIN;
	static volatile int32_t x2740 = INT32_MIN;
	uint32_t t37 = 7093U;

    t37 = (x2737>>((x2738|x2739)^x2740));

    if (t37 != 215U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2826 = INT8_MAX;
	static uint64_t x2827 = UINT64_MAX;
	static volatile int8_t x2828 = -1;
	volatile int32_t t38 = 297573;

    t38 = (x2825>>((x2826|x2827)^x2828));

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x2857 = 13794925U;
	uint8_t x2858 = 52U;
	int64_t x2859 = -1LL;
	static volatile int32_t x2860 = -1;
	uint32_t t39 = 952U;

    t39 = (x2857>>((x2858|x2859)^x2860));

    if (t39 != 13794925U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2921 = INT32_MAX;
	int8_t x2922 = -1;
	static int8_t x2924 = -1;
	static volatile int32_t t40 = INT32_MAX;

    t40 = (x2921>>((x2922|x2923)^x2924));

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x2977 = INT16_MAX;
	int8_t x2978 = -1;
	uint32_t x2980 = UINT32_MAX;
	int32_t t41 = -1;

    t41 = (x2977>>((x2978|x2979)^x2980));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x3025 = INT64_MAX;
	int64_t x3026 = INT64_MIN;
	static int16_t x3027 = INT16_MIN;
	volatile int16_t x3028 = INT16_MIN;
	volatile int64_t t42 = INT64_MAX;

    t42 = (x3025>>((x3026|x3027)^x3028));

    if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x3038 = 25961U;
	int32_t x3039 = -8478;
	static int16_t x3040 = -1;

    t43 = (x3037>>((x3038|x3039)^x3040));

    if (t43 != 2047) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x3077 = 16226302U;
	uint16_t x3079 = 35U;
	int64_t x3080 = -1LL;

    t44 = (x3077>>((x3078|x3079)^x3080));

    if (t44 != 247U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x3197 = UINT64_MAX;
	int16_t x3198 = INT16_MIN;
	uint64_t x3199 = UINT64_MAX;
	int16_t x3200 = -1;
	volatile uint64_t t45 = UINT64_MAX;

    t45 = (x3197>>((x3198|x3199)^x3200));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x3253 = INT32_MAX;
	static int16_t x3254 = -1;
	static int64_t x3256 = -1LL;

    t46 = (x3253>>((x3254|x3255)^x3256));

    if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x3318 = -1LL;
	int32_t x3319 = -1;
	int16_t x3320 = -1;
	int32_t t47 = -3;

    t47 = (x3317>>((x3318|x3319)^x3320));

    if (t47 != 12) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x3465 = UINT8_MAX;
	volatile int8_t x3466 = INT8_MAX;
	int64_t x3468 = -1LL;
	volatile int32_t t48 = 5489813;

    t48 = (x3465>>((x3466|x3467)^x3468));

    if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x3569 = UINT32_MAX;
	volatile int8_t x3570 = -1;
	int64_t x3571 = 675771273LL;
	volatile int8_t x3572 = -1;
	uint32_t t49 = UINT32_MAX;

    t49 = (x3569>>((x3570|x3571)^x3572));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x3809 = 2639100LLU;
	volatile int8_t x3810 = -2;
	volatile int64_t x3811 = -2028472142274LL;
	volatile int32_t x3812 = -1;
	volatile uint64_t t50 = 3862449415840782449LLU;

    t50 = (x3809>>((x3810|x3811)^x3812));

    if (t50 != 1319550LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x3849 = UINT64_MAX;
	uint8_t x3850 = 1U;
	int16_t x3851 = -1;
	int64_t x3852 = -1LL;

    t51 = (x3849>>((x3850|x3851)^x3852));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x3929 = INT32_MAX;
	static int32_t x3932 = -1;
	static int32_t t52 = INT32_MAX;

    t52 = (x3929>>((x3930|x3931)^x3932));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x4057 = 0;
	int32_t x4058 = -1;
	int16_t x4059 = INT16_MAX;
	int64_t x4060 = -1LL;
	volatile int32_t t53 = -1;

    t53 = (x4057>>((x4058|x4059)^x4060));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x4069 = 2972U;
	int32_t x4070 = -1;
	volatile int64_t x4071 = 3604376LL;
	int64_t x4072 = -1LL;
	volatile int32_t t54 = 608214519;

    t54 = (x4069>>((x4070|x4071)^x4072));

    if (t54 != 2972) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x4097 = UINT16_MAX;
	int8_t x4098 = INT8_MIN;
	volatile int32_t x4100 = -1;
	int32_t t55 = -189975;

    t55 = (x4097>>((x4098|x4099)^x4100));

    if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x4149 = 20842574318LLU;
	int8_t x4150 = -1;
	int32_t x4151 = -1;
	int8_t x4152 = -1;

    t56 = (x4149>>((x4150|x4151)^x4152));

    if (t56 != 20842574318LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x4169 = 10699940U;
	int64_t x4171 = -19LL;
	uint64_t x4172 = UINT64_MAX;
	uint32_t t57 = 129136U;

    t57 = (x4169>>((x4170|x4171)^x4172));

    if (t57 != 40U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x4209 = 1368;
	int16_t x4210 = -1;
	int16_t x4211 = INT16_MIN;
	int32_t x4212 = -1;
	int32_t t58 = -237360943;

    t58 = (x4209>>((x4210|x4211)^x4212));

    if (t58 != 1368) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x4301 = INT64_MAX;
	uint32_t x4302 = UINT32_MAX;
	static int8_t x4303 = -62;
	int64_t t59 = -57735595LL;

    t59 = (x4301>>((x4302|x4303)^x4304));

    if (t59 != 8796093022207LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x4565 = 1;
	int32_t x4566 = INT32_MIN;
	static volatile uint8_t x4567 = 6U;
	int32_t t60 = 1;

    t60 = (x4565>>((x4566|x4567)^x4568));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x4657 = INT64_MAX;
	volatile int8_t x4658 = INT8_MIN;
	int8_t x4660 = INT8_MIN;
	int64_t t61 = -3513434390726LL;

    t61 = (x4657>>((x4658|x4659)^x4660));

    if (t61 != 524287LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x4709 = 2;
	int8_t x4710 = -11;
	volatile uint32_t x4711 = 55U;
	int16_t x4712 = -1;

    t62 = (x4709>>((x4710|x4711)^x4712));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x4789 = INT64_MAX;
	int16_t x4790 = -19;
	uint16_t x4791 = UINT16_MAX;
	volatile int64_t t63 = INT64_MAX;

    t63 = (x4789>>((x4790|x4791)^x4792));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x4817 = INT8_MAX;
	int8_t x4818 = INT8_MIN;
	static int8_t x4819 = -1;
	int16_t x4820 = -1;
	int32_t t64 = -90724235;

    t64 = (x4817>>((x4818|x4819)^x4820));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x5133 = 0;
	int16_t x5134 = INT16_MIN;
	uint64_t x5135 = UINT64_MAX;
	int8_t x5136 = -1;
	volatile int32_t t65 = 30039642;

    t65 = (x5133>>((x5134|x5135)^x5136));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x5141 = 12159430U;
	int8_t x5143 = -1;
	int64_t x5144 = -1LL;
	volatile uint32_t t66 = 1731261965U;

    t66 = (x5141>>((x5142|x5143)^x5144));

    if (t66 != 12159430U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x5182 = UINT64_MAX;
	static uint64_t x5183 = 1484929467LLU;

    t67 = (x5181>>((x5182|x5183)^x5184));

    if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x5229 = 872U;
	uint32_t x5230 = 102U;
	volatile int64_t x5231 = -1LL;
	static int32_t x5232 = -1;
	static volatile uint32_t t68 = 26994305U;

    t68 = (x5229>>((x5230|x5231)^x5232));

    if (t68 != 872U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x5413 = INT64_MAX;
	uint32_t x5414 = UINT32_MAX;

    t69 = (x5413>>((x5414|x5415)^x5416));

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x5417 = 24843173906LL;
	int16_t x5418 = -12;
	int8_t x5419 = -1;
	int8_t x5420 = -1;
	volatile int64_t t70 = -1068189192081148LL;

    t70 = (x5417>>((x5418|x5419)^x5420));

    if (t70 != 24843173906LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x5425 = 12;
	int32_t x5426 = -1;
	int8_t x5427 = INT8_MIN;
	int16_t x5428 = -1;

    t71 = (x5425>>((x5426|x5427)^x5428));

    if (t71 != 12) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x5493 = INT16_MAX;
	uint8_t x5494 = 13U;
	int32_t t72 = -46457127;

    t72 = (x5493>>((x5494|x5495)^x5496));

    if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x5682 = -5;
	static volatile uint16_t x5683 = UINT16_MAX;
	volatile int8_t x5684 = -20;
	static volatile int64_t t73 = -2826LL;

    t73 = (x5681>>((x5682|x5683)^x5684));

    if (t73 != 17592186044415LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x5686 = -1LL;
	static uint64_t x5687 = 21404LLU;
	uint64_t x5688 = UINT64_MAX;
	static volatile int32_t t74 = -32148;

    t74 = (x5685>>((x5686|x5687)^x5688));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x5781 = INT64_MAX;
	static int32_t x5782 = INT32_MAX;
	static int8_t x5783 = -3;
	int8_t x5784 = -14;

    t75 = (x5781>>((x5782|x5783)^x5784));

    if (t75 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x5822 = INT64_MAX;
	static int16_t x5823 = -5119;
	int16_t x5824 = -1;
	volatile int32_t t76 = -1614;

    t76 = (x5821>>((x5822|x5823)^x5824));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x5857 = 78LL;
	int32_t x5858 = -1;
	static int16_t x5859 = -1;

    t77 = (x5857>>((x5858|x5859)^x5860));

    if (t77 != 78LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x5921 = INT32_MAX;
	static int32_t x5923 = -1;
	static int64_t x5924 = -1LL;
	volatile int32_t t78 = INT32_MAX;

    t78 = (x5921>>((x5922|x5923)^x5924));

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x5937 = INT16_MAX;
	volatile int16_t x5938 = -1;
	int16_t x5939 = INT16_MIN;
	static uint32_t x5940 = UINT32_MAX;

    t79 = (x5937>>((x5938|x5939)^x5940));

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x5941 = INT16_MAX;
	static int8_t x5942 = 1;
	int16_t x5944 = -1;
	int32_t t80 = -1108;

    t80 = (x5941>>((x5942|x5943)^x5944));

    if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x6041 = INT32_MAX;
	static uint32_t x6042 = UINT32_MAX;
	int32_t x6044 = -1;
	int32_t t81 = INT32_MAX;

    t81 = (x6041>>((x6042|x6043)^x6044));

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x6057 = 7U;
	int16_t x6058 = INT16_MIN;
	volatile int64_t x6059 = INT64_MAX;
	volatile int8_t x6060 = -1;

    t82 = (x6057>>((x6058|x6059)^x6060));

    if (t82 != 7U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x6153 = 10727U;
	int32_t x6154 = -3;
	int64_t x6156 = -22LL;
	static volatile int32_t t83 = -365444095;

    t83 = (x6153>>((x6154|x6155)^x6156));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x6201 = 1079635169406550802LLU;
	uint64_t x6202 = UINT64_MAX;
	int64_t x6203 = -1LL;
	int8_t x6204 = -1;

    t84 = (x6201>>((x6202|x6203)^x6204));

    if (t84 != 1079635169406550802LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x6461 = UINT64_MAX;
	uint32_t x6462 = 13U;
	int16_t x6463 = -1;
	static uint64_t t85 = UINT64_MAX;

    t85 = (x6461>>((x6462|x6463)^x6464));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x6469 = 0U;
	int16_t x6470 = -1;
	uint32_t x6471 = UINT32_MAX;
	int8_t x6472 = -1;
	int32_t t86 = 26;

    t86 = (x6469>>((x6470|x6471)^x6472));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x6494 = 666040949;
	int16_t x6495 = -1;
	int16_t x6496 = -1;
	volatile int64_t t87 = INT64_MAX;

    t87 = (x6493>>((x6494|x6495)^x6496));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x6689 = INT64_MAX;
	int64_t x6691 = 2LL;
	int16_t x6692 = -1;
	int64_t t88 = INT64_MAX;

    t88 = (x6689>>((x6690|x6691)^x6692));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x6814 = UINT32_MAX;
	int8_t x6815 = -1;
	static int8_t x6816 = -1;
	volatile int64_t t89 = 9LL;

    t89 = (x6813>>((x6814|x6815)^x6816));

    if (t89 != 26917LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x6858 = -14;
	uint32_t x6859 = UINT32_MAX;
	int8_t x6860 = -21;
	uint32_t t90 = 26327U;

    t90 = (x6857>>((x6858|x6859)^x6860));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x6913 = 58U;
	int8_t x6914 = 2;
	static uint32_t x6915 = UINT32_MAX;
	static uint32_t x6916 = UINT32_MAX;
	static volatile int32_t t91 = 0;

    t91 = (x6913>>((x6914|x6915)^x6916));

    if (t91 != 58) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x6965 = 6;
	uint16_t x6966 = 13U;
	int32_t x6967 = -1;
	int32_t x6968 = -1;
	int32_t t92 = -108;

    t92 = (x6965>>((x6966|x6967)^x6968));

    if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x7022 = -1;
	volatile uint8_t x7023 = 0U;
	static uint32_t x7024 = UINT32_MAX;
	volatile int32_t t93 = 420970;

    t93 = (x7021>>((x7022|x7023)^x7024));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x7113 = 222U;
	int64_t x7115 = -1LL;
	int32_t x7116 = -1;
	volatile int32_t t94 = 4;

    t94 = (x7113>>((x7114|x7115)^x7116));

    if (t94 != 222) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x7205 = 1LL;
	volatile uint16_t x7206 = 2U;
	uint32_t x7208 = 21U;
	int64_t t95 = 959545LL;

    t95 = (x7205>>((x7206|x7207)^x7208));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x7253 = 5105025U;
	int16_t x7255 = -1;
	static int16_t x7256 = -18;
	uint32_t t96 = 398361U;

    t96 = (x7253>>((x7254|x7255)^x7256));

    if (t96 != 38U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x7325 = 3;
	int8_t x7326 = -1;
	int16_t x7327 = INT16_MIN;
	int32_t x7328 = -18;
	volatile int32_t t97 = -1422;

    t97 = (x7325>>((x7326|x7327)^x7328));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x7365 = 102U;
	int32_t x7366 = -10085;
	uint16_t x7367 = UINT16_MAX;
	static int64_t x7368 = -1LL;
	volatile uint32_t t98 = 25U;

    t98 = (x7365>>((x7366|x7367)^x7368));

    if (t98 != 102U) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint8_t x7385 = 79U;
	volatile uint32_t x7386 = UINT32_MAX;
	volatile int16_t x7388 = -16;

    t99 = (x7385>>((x7386|x7387)^x7388));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x7469 = INT64_MAX;
	volatile int32_t x7471 = -1;
	uint32_t x7472 = UINT32_MAX;
	volatile int64_t t100 = INT64_MAX;

    t100 = (x7469>>((x7470|x7471)^x7472));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x7473 = 1U;
	static uint32_t x7476 = UINT32_MAX;
	int32_t t101 = -248310554;

    t101 = (x7473>>((x7474|x7475)^x7476));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x7569 = 4U;
	static int16_t x7570 = INT16_MAX;
	volatile int8_t x7571 = -1;
	int64_t x7572 = -4LL;

    t102 = (x7569>>((x7570|x7571)^x7572));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x7593 = 123730914065948799LLU;
	static uint8_t x7594 = 0U;
	volatile int64_t x7595 = -1LL;
	static int16_t x7596 = -1;

    t103 = (x7593>>((x7594|x7595)^x7596));

    if (t103 != 123730914065948799LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x7601 = UINT16_MAX;
	volatile int32_t x7602 = -1;
	volatile int32_t x7603 = INT32_MIN;
	static int32_t t104 = -132190685;

    t104 = (x7601>>((x7602|x7603)^x7604));

    if (t104 != 65535) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x7753 = 3;
	volatile uint64_t x7754 = 158LLU;
	int8_t x7755 = -1;
	volatile int32_t x7756 = -1;
	int32_t t105 = -101;

    t105 = (x7753>>((x7754|x7755)^x7756));

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x7765 = INT32_MAX;
	volatile int16_t x7766 = INT16_MIN;
	int16_t x7767 = INT16_MAX;
	int16_t x7768 = -10;
	volatile int32_t t106 = 4277568;

    t106 = (x7765>>((x7766|x7767)^x7768));

    if (t106 != 4194303) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x7778 = 3;
	int32_t x7779 = INT32_MIN;
	static int32_t x7780 = INT32_MIN;
	uint64_t t107 = 5LLU;

    t107 = (x7777>>((x7778|x7779)^x7780));

    if (t107 != 5LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x7813 = 1U;
	volatile uint8_t x7814 = UINT8_MAX;
	uint64_t x7815 = UINT64_MAX;
	volatile int32_t t108 = 15363781;

    t108 = (x7813>>((x7814|x7815)^x7816));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x8029 = 198LLU;
	int8_t x8030 = 0;
	uint8_t x8032 = 4U;
	uint64_t t109 = 170755033980932989LLU;

    t109 = (x8029>>((x8030|x8031)^x8032));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x8082 = INT8_MAX;
	uint64_t x8083 = UINT64_MAX;
	int32_t t110 = -2430;

    t110 = (x8081>>((x8082|x8083)^x8084));

    if (t110 != 255) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x8146 = -1;
	int8_t x8148 = -1;
	static uint64_t t111 = 81123645720769551LLU;

    t111 = (x8145>>((x8146|x8147)^x8148));

    if (t111 != 16063595687LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x8193 = INT64_MAX;
	static volatile int16_t x8194 = -1;
	uint16_t x8195 = UINT16_MAX;
	int64_t x8196 = -1LL;

    t112 = (x8193>>((x8194|x8195)^x8196));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x8386 = 25;
	int8_t x8387 = -5;
	static volatile int32_t t113 = 4619;

    t113 = (x8385>>((x8386|x8387)^x8388));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x8449 = 96U;
	int16_t x8450 = INT16_MAX;
	int8_t x8451 = -1;
	int64_t x8452 = -1LL;
	uint32_t t114 = 7U;

    t114 = (x8449>>((x8450|x8451)^x8452));

    if (t114 != 96U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x8485 = 6U;
	int64_t x8487 = INT64_MAX;
	volatile int32_t t115 = -46;

    t115 = (x8485>>((x8486|x8487)^x8488));

    if (t115 != 6) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x8505 = UINT16_MAX;
	int64_t x8506 = -1823LL;
	uint16_t x8507 = UINT16_MAX;
	int32_t x8508 = -1;
	static volatile int32_t t116 = 73175229;

    t116 = (x8505>>((x8506|x8507)^x8508));

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x8566 = 47;
	volatile int16_t x8567 = -1;
	volatile int32_t t117 = -107054;

    t117 = (x8565>>((x8566|x8567)^x8568));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x8661 = INT8_MAX;
	static volatile int64_t x8662 = -1LL;
	volatile int32_t x8663 = -123943072;
	static uint64_t x8664 = UINT64_MAX;
	volatile int32_t t118 = -28;

    t118 = (x8661>>((x8662|x8663)^x8664));

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x8754 = INT32_MAX;
	int32_t x8755 = INT32_MIN;
	int16_t x8756 = -1;

    t119 = (x8753>>((x8754|x8755)^x8756));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x8757 = 0;
	int32_t x8758 = -1;
	uint64_t x8759 = 56733181LLU;
	volatile int32_t x8760 = -1;
	volatile int32_t t120 = 475165913;

    t120 = (x8757>>((x8758|x8759)^x8760));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x8813 = INT64_MAX;
	uint8_t x8814 = 1U;
	volatile int16_t x8815 = INT16_MIN;
	static int16_t x8816 = INT16_MIN;
	int64_t t121 = -399216LL;

    t121 = (x8813>>((x8814|x8815)^x8816));

    if (t121 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x8869 = 2;
	int16_t x8870 = INT16_MIN;
	static int32_t t122 = 965;

    t122 = (x8869>>((x8870|x8871)^x8872));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x8914 = 86936;
	static volatile int8_t x8915 = -1;
	int8_t x8916 = -1;
	static volatile int32_t t123 = -311163841;

    t123 = (x8913>>((x8914|x8915)^x8916));

    if (t123 != 17) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x8977 = UINT8_MAX;
	static uint64_t x8979 = UINT64_MAX;
	static int8_t x8980 = -1;
	volatile int32_t t124 = -167034;

    t124 = (x8977>>((x8978|x8979)^x8980));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x9013 = UINT8_MAX;
	int16_t x9014 = INT16_MAX;
	int32_t t125 = 510;

    t125 = (x9013>>((x9014|x9015)^x9016));

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x9017 = 14833194740LLU;
	uint64_t x9019 = 164223195LLU;
	int32_t x9020 = -1;
	uint64_t t126 = 1818331658197LLU;

    t126 = (x9017>>((x9018|x9019)^x9020));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x9029 = INT16_MAX;
	int8_t x9032 = INT8_MIN;

    t127 = (x9029>>((x9030|x9031)^x9032));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x9081 = 6;
	int32_t x9083 = INT32_MAX;
	volatile int16_t x9084 = -1;
	volatile int32_t t128 = -517414060;

    t128 = (x9081>>((x9082|x9083)^x9084));

    if (t128 != 6) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x9089 = INT64_MAX;
	int64_t x9091 = -1LL;
	int8_t x9092 = -1;
	int64_t t129 = INT64_MAX;

    t129 = (x9089>>((x9090|x9091)^x9092));

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x9109 = 0;
	int16_t x9110 = -1;
	uint64_t x9111 = 7LLU;
	int32_t x9112 = -1;
	int32_t t130 = -775490508;

    t130 = (x9109>>((x9110|x9111)^x9112));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x9118 = INT16_MIN;
	int32_t x9119 = -1;
	int16_t x9120 = -1;
	volatile int32_t t131 = 856266;

    t131 = (x9117>>((x9118|x9119)^x9120));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x9213 = 434126347LL;
	int16_t x9214 = INT16_MAX;
	int32_t x9216 = -1;
	volatile int64_t t132 = -1270LL;

    t132 = (x9213>>((x9214|x9215)^x9216));

    if (t132 != 434126347LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x9230 = INT32_MIN;
	volatile int32_t x9231 = INT32_MIN;
	volatile uint32_t t133 = 3U;

    t133 = (x9229>>((x9230|x9231)^x9232));

    if (t133 != 1019U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x9235 = -1;

    t134 = (x9233>>((x9234|x9235)^x9236));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x9381 = 18249156U;
	int8_t x9382 = INT8_MIN;
	static uint64_t x9384 = UINT64_MAX;
	uint32_t t135 = 9054U;

    t135 = (x9381>>((x9382|x9383)^x9384));

    if (t135 != 18249156U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x9577 = 266463099081706114LLU;
	volatile int64_t x9578 = INT64_MIN;
	int64_t x9579 = INT64_MIN;
	int64_t x9580 = INT64_MIN;
	volatile uint64_t t136 = 556755162LLU;

    t136 = (x9577>>((x9578|x9579)^x9580));

    if (t136 != 266463099081706114LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x9677 = 24;
	int64_t x9679 = INT64_MIN;
	int32_t x9680 = INT32_MIN;
	volatile int32_t t137 = 6;

    t137 = (x9677>>((x9678|x9679)^x9680));

    if (t137 != 24) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x9698 = 54;
	int16_t x9699 = -1;
	static volatile int16_t x9700 = -1;

    t138 = (x9697>>((x9698|x9699)^x9700));

    if (t138 != 1390LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x9713 = 48;
	static int16_t x9714 = -1;
	uint16_t x9715 = 3114U;
	int8_t x9716 = -1;
	int32_t t139 = 18094;

    t139 = (x9713>>((x9714|x9715)^x9716));

    if (t139 != 48) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x9977 = 10U;
	int8_t x9978 = -24;
	static int16_t x9979 = -54;
	int16_t x9980 = -1;
	static int32_t t140 = -10828215;

    t140 = (x9977>>((x9978|x9979)^x9980));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x10073 = 5323254U;
	int8_t x10074 = INT8_MAX;
	uint32_t x10075 = UINT32_MAX;
	volatile int16_t x10076 = -31;
	uint32_t t141 = 1U;

    t141 = (x10073>>((x10074|x10075)^x10076));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x10151 = INT8_MIN;
	int8_t x10152 = -13;
	uint64_t t142 = 72082356772055LLU;

    t142 = (x10149>>((x10150|x10151)^x10152));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x10253 = INT32_MAX;
	static uint16_t x10254 = UINT16_MAX;
	static int8_t x10255 = INT8_MIN;
	volatile uint32_t x10256 = UINT32_MAX;
	volatile int32_t t143 = INT32_MAX;

    t143 = (x10253>>((x10254|x10255)^x10256));

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x10257 = INT32_MAX;
	int64_t x10258 = INT64_MIN;
	static int32_t x10260 = -1;
	static volatile int32_t t144 = INT32_MAX;

    t144 = (x10257>>((x10258|x10259)^x10260));

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x10277 = INT16_MAX;
	int32_t x10278 = -1;
	int16_t x10279 = INT16_MIN;
	int32_t x10280 = -1;
	volatile int32_t t145 = -4000;

    t145 = (x10277>>((x10278|x10279)^x10280));

    if (t145 != 32767) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x10533 = 1;
	int32_t x10534 = INT32_MIN;
	volatile int8_t x10535 = 1;
	static int32_t x10536 = INT32_MIN;
	volatile int32_t t146 = 307031898;

    t146 = (x10533>>((x10534|x10535)^x10536));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x10577 = 19551;
	int32_t x10578 = -1;
	int64_t x10579 = -1LL;
	volatile int32_t t147 = 3546678;

    t147 = (x10577>>((x10578|x10579)^x10580));

    if (t147 != 19551) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x10621 = 329521U;
	static int8_t x10622 = -1;
	int32_t x10623 = 6965308;
	int16_t x10624 = -10;
	volatile uint32_t t148 = 179191930U;

    t148 = (x10621>>((x10622|x10623)^x10624));

    if (t148 != 643U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x10629 = INT8_MAX;
	static int64_t x10630 = -1LL;
	volatile int32_t x10631 = -1;
	int32_t x10632 = -1;
	volatile int32_t t149 = 208336046;

    t149 = (x10629>>((x10630|x10631)^x10632));

    if (t149 != 127) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x10653 = 9U;
	int64_t x10654 = 0LL;
	int8_t x10655 = INT8_MIN;
	int8_t x10656 = INT8_MIN;
	int32_t t150 = 10901054;

    t150 = (x10653>>((x10654|x10655)^x10656));

    if (t150 != 9) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x10665 = 2U;
	volatile int32_t x10666 = -1;
	uint64_t x10667 = 497300851471222LLU;
	volatile int32_t x10668 = -1;
	int32_t t151 = -193197;

    t151 = (x10665>>((x10666|x10667)^x10668));

    if (t151 != 2) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x10685 = 444141537LLU;
	int8_t x10686 = -1;
	int32_t x10687 = -1;
	volatile uint64_t x10688 = UINT64_MAX;
	static uint64_t t152 = 369326372LLU;

    t152 = (x10685>>((x10686|x10687)^x10688));

    if (t152 != 444141537LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x10701 = 1;
	static int16_t x10703 = -1;
	static uint32_t x10704 = UINT32_MAX;
	volatile int32_t t153 = -255152;

    t153 = (x10701>>((x10702|x10703)^x10704));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x10757 = 65195987;
	static uint8_t x10758 = 7U;
	volatile int64_t x10759 = -1LL;
	int8_t x10760 = -10;

    t154 = (x10757>>((x10758|x10759)^x10760));

    if (t154 != 127335) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x10853 = UINT16_MAX;
	static int64_t x10854 = INT64_MAX;
	int64_t x10855 = -1LL;
	int8_t x10856 = -1;

    t155 = (x10853>>((x10854|x10855)^x10856));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x10917 = 1195712927U;
	int64_t x10918 = 3841088128027943517LL;
	int8_t x10919 = -1;
	int16_t x10920 = -1;

    t156 = (x10917>>((x10918|x10919)^x10920));

    if (t156 != 1195712927U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x10927 = INT8_MAX;
	int16_t x10928 = -1;
	volatile uint64_t t157 = UINT64_MAX;

    t157 = (x10925>>((x10926|x10927)^x10928));

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x11121 = 12545U;
	static int32_t x11122 = INT32_MIN;
	int16_t x11123 = -1;
	volatile int16_t x11124 = -1;
	int32_t t158 = -709442;

    t158 = (x11121>>((x11122|x11123)^x11124));

    if (t158 != 12545) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x11197 = UINT8_MAX;
	uint64_t x11198 = UINT64_MAX;
	volatile int16_t x11199 = INT16_MIN;

    t159 = (x11197>>((x11198|x11199)^x11200));

    if (t159 != 255) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x11333 = INT16_MAX;
	static int64_t x11334 = INT64_MIN;
	int64_t x11335 = INT64_MAX;
	volatile int32_t t160 = 122;

    t160 = (x11333>>((x11334|x11335)^x11336));

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x11409 = UINT16_MAX;
	int64_t x11410 = -1LL;
	uint64_t x11411 = UINT64_MAX;
	int8_t x11412 = -1;

    t161 = (x11409>>((x11410|x11411)^x11412));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x11610 = 0;
	uint16_t x11611 = UINT16_MAX;
	int32_t t162 = 15253;

    t162 = (x11609>>((x11610|x11611)^x11612));

    if (t162 != 4411) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x11665 = UINT32_MAX;
	int16_t x11668 = -7;
	static uint32_t t163 = 213653031U;

    t163 = (x11665>>((x11666|x11667)^x11668));

    if (t163 != 67108863U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x11669 = UINT8_MAX;
	uint8_t x11670 = UINT8_MAX;
	int32_t x11672 = -1;
	volatile int32_t t164 = 12;

    t164 = (x11669>>((x11670|x11671)^x11672));

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x11821 = INT8_MAX;
	volatile int64_t x11822 = INT64_MIN;
	static uint64_t x11824 = UINT64_MAX;
	volatile int32_t t165 = -40;

    t165 = (x11821>>((x11822|x11823)^x11824));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x11825 = UINT64_MAX;
	uint16_t x11827 = 2817U;
	static volatile int64_t x11828 = -1LL;
	uint64_t t166 = 15908LLU;

    t166 = (x11825>>((x11826|x11827)^x11828));

    if (t166 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x11837 = INT32_MAX;
	volatile int8_t x11838 = INT8_MAX;
	int64_t x11839 = -1LL;
	int16_t x11840 = -1;

    t167 = (x11837>>((x11838|x11839)^x11840));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x11945 = 46U;
	int16_t x11947 = INT16_MIN;
	static int32_t x11948 = -1;
	int32_t t168 = 221;

    t168 = (x11945>>((x11946|x11947)^x11948));

    if (t168 != 46) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x12045 = 28U;
	static volatile int64_t x12046 = INT64_MAX;
	int8_t x12047 = -1;
	int32_t x12048 = -1;

    t169 = (x12045>>((x12046|x12047)^x12048));

    if (t169 != 28) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x12149 = INT64_MAX;
	int32_t x12150 = -2328;
	int64_t x12151 = INT64_MAX;
	int32_t x12152 = -1;
	int64_t t170 = INT64_MAX;

    t170 = (x12149>>((x12150|x12151)^x12152));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x12157 = 261U;
	static int16_t x12158 = INT16_MAX;
	int16_t x12159 = INT16_MIN;
	int32_t t171 = -31937;

    t171 = (x12157>>((x12158|x12159)^x12160));

    if (t171 != 261) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x12182 = INT64_MAX;
	int32_t x12183 = INT32_MAX;
	int64_t x12184 = INT64_MAX;

    t172 = (x12181>>((x12182|x12183)^x12184));

    if (t172 != 1093LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x12281 = 8118U;
	volatile int16_t x12282 = INT16_MIN;
	static int8_t x12284 = INT8_MIN;
	static int32_t t173 = 911673;

    t173 = (x12281>>((x12282|x12283)^x12284));

    if (t173 != 8118) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x12289 = UINT16_MAX;
	static uint8_t x12290 = 2U;
	static uint32_t x12291 = UINT32_MAX;
	volatile int8_t x12292 = -1;
	int32_t t174 = 19677704;

    t174 = (x12289>>((x12290|x12291)^x12292));

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x12350 = -1;
	static int32_t x12351 = -4;
	static int32_t t175 = -2222630;

    t175 = (x12349>>((x12350|x12351)^x12352));

    if (t175 != 3) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x12393 = 9297U;
	static int32_t x12394 = -1;
	int64_t x12395 = INT64_MIN;
	int8_t x12396 = -1;

    t176 = (x12393>>((x12394|x12395)^x12396));

    if (t176 != 9297) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x12473 = 344566308764LL;
	int8_t x12474 = -1;
	uint32_t x12475 = 5580U;
	static int8_t x12476 = -1;
	int64_t t177 = 41104LL;

    t177 = (x12473>>((x12474|x12475)^x12476));

    if (t177 != 344566308764LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x12525 = 3U;
	int16_t x12526 = INT16_MIN;
	static int16_t x12527 = -1;
	static uint64_t x12528 = UINT64_MAX;
	static volatile uint32_t t178 = 11930776U;

    t178 = (x12525>>((x12526|x12527)^x12528));

    if (t178 != 3U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x12537 = 7U;
	int32_t x12539 = INT32_MIN;
	static int32_t x12540 = INT32_MIN;
	static int32_t t179 = -119218337;

    t179 = (x12537>>((x12538|x12539)^x12540));

    if (t179 != 7) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x12541 = INT8_MAX;
	int16_t x12542 = -1;
	uint8_t x12543 = 1U;

    t180 = (x12541>>((x12542|x12543)^x12544));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x12646 = UINT64_MAX;
	int8_t x12647 = -1;
	static int64_t x12648 = -1LL;
	volatile int32_t t181 = 1134;

    t181 = (x12645>>((x12646|x12647)^x12648));

    if (t181 != 65535) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x12693 = INT8_MAX;
	static uint16_t x12694 = UINT16_MAX;
	static int16_t x12695 = -1;
	static int64_t x12696 = -1LL;
	int32_t t182 = -41321532;

    t182 = (x12693>>((x12694|x12695)^x12696));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x12925 = 39154382222272876LLU;
	volatile uint8_t x12926 = UINT8_MAX;
	int8_t x12927 = INT8_MIN;
	static int8_t x12928 = -1;
	volatile uint64_t t183 = 63271931LLU;

    t183 = (x12925>>((x12926|x12927)^x12928));

    if (t183 != 39154382222272876LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x12965 = 31032955427LLU;
	uint64_t x12966 = UINT64_MAX;
	volatile int16_t x12967 = 0;
	static int32_t x12968 = -1;
	uint64_t t184 = 904117655890LLU;

    t184 = (x12965>>((x12966|x12967)^x12968));

    if (t184 != 31032955427LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x13074 = INT8_MIN;
	volatile int8_t x13076 = INT8_MIN;
	int32_t t185 = 3;

    t185 = (x13073>>((x13074|x13075)^x13076));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x13109 = INT16_MAX;
	uint32_t x13110 = UINT32_MAX;
	volatile uint16_t x13111 = 1U;

    t186 = (x13109>>((x13110|x13111)^x13112));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x13241 = UINT8_MAX;
	int16_t x13242 = INT16_MAX;
	int16_t x13243 = -6214;
	int32_t x13244 = -1;
	static int32_t t187 = -240;

    t187 = (x13241>>((x13242|x13243)^x13244));

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x13342 = -987;
	int8_t x13343 = -15;
	uint64_t t188 = 30335443LLU;

    t188 = (x13341>>((x13342|x13343)^x13344));

    if (t188 != 29272044606LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x13376 = -1LL;
	volatile uint64_t t189 = 48627570363575LLU;

    t189 = (x13373>>((x13374|x13375)^x13376));

    if (t189 != 379LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x13425 = 63;
	uint32_t x13426 = 24U;
	int16_t x13427 = INT16_MIN;
	int16_t x13428 = INT16_MIN;
	int32_t t190 = 245444;

    t190 = (x13425>>((x13426|x13427)^x13428));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x13461 = 92;
	int8_t x13462 = INT8_MIN;
	static volatile int32_t t191 = -7;

    t191 = (x13461>>((x13462|x13463)^x13464));

    if (t191 != 92) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x13489 = 348321347U;
	int16_t x13490 = 121;
	uint8_t x13491 = UINT8_MAX;
	static volatile uint32_t t192 = 434027232U;

    t192 = (x13489>>((x13490|x13491)^x13492));

    if (t192 != 348321347U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x13501 = UINT16_MAX;
	uint32_t x13503 = 7323U;
	int16_t x13504 = -4;
	volatile int32_t t193 = -228;

    t193 = (x13501>>((x13502|x13503)^x13504));

    if (t193 != 8191) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x13557 = 4;
	uint8_t x13558 = 9U;
	uint32_t x13559 = UINT32_MAX;
	int8_t x13560 = -3;
	static int32_t t194 = -2544;

    t194 = (x13557>>((x13558|x13559)^x13560));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x13593 = 86436LLU;
	int32_t x13594 = 169414;
	volatile int8_t x13595 = -60;
	volatile uint64_t t195 = 207LLU;

    t195 = (x13593>>((x13594|x13595)^x13596));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x13653 = 3082U;
	static uint64_t x13654 = UINT64_MAX;
	int8_t x13655 = -1;
	uint64_t x13656 = UINT64_MAX;
	int32_t t196 = 782;

    t196 = (x13653>>((x13654|x13655)^x13656));

    if (t196 != 3082) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x13742 = -1;
	int16_t x13744 = -1;

    t197 = (x13741>>((x13742|x13743)^x13744));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x13765 = 3;
	static volatile int16_t x13766 = 3271;
	int32_t x13767 = -1;
	uint32_t x13768 = UINT32_MAX;
	int32_t t198 = -22087;

    t198 = (x13765>>((x13766|x13767)^x13768));

    if (t198 != 3) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x13777 = 23599851285LLU;
	int16_t x13779 = -3;
	int8_t x13780 = -1;
	static uint64_t t199 = 247741720671187120LLU;

    t199 = (x13777>>((x13778|x13779)^x13780));

    if (t199 != 23599851285LLU) { NG(); } else { ; }
	
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

