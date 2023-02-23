
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

volatile uint32_t x103 = UINT32_MAX;
volatile int8_t x118 = INT8_MIN;
uint32_t t2 = 0U;
int16_t x254 = -1;
volatile uint16_t x441 = 967U;
volatile int64_t t4 = 5268857523981LL;
int64_t t5 = 17841305917759LL;
static uint64_t x661 = 1756155LLU;
volatile int32_t x786 = INT32_MAX;
static uint64_t x1087 = 12LLU;
static volatile int64_t x1165 = -1LL;
uint64_t x1375 = 3886410659LLU;
int8_t x1376 = 41;
uint64_t t11 = 28057LLU;
int64_t t12 = 0LL;
int8_t x1490 = 0;
uint32_t t13 = UINT32_MAX;
uint64_t x1499 = UINT64_MAX;
static int8_t x1500 = 58;
uint64_t x1651 = 2399LLU;
volatile uint32_t x1666 = UINT32_MAX;
static uint64_t x1786 = 6859836419040891LLU;
int8_t x1788 = 2;
static int64_t x1854 = -64187996LL;
int8_t x2109 = INT8_MIN;
uint16_t x2110 = UINT16_MAX;
uint8_t x2336 = 10U;
uint16_t x2404 = 1U;
uint32_t t28 = 880283434U;
uint8_t x2525 = UINT8_MAX;
volatile uint64_t t31 = 11835189681726568LLU;
int32_t x2690 = -523640;
volatile uint64_t t33 = 112407372915LLU;
uint64_t x2870 = UINT64_MAX;
uint64_t x3077 = 30LLU;
static uint64_t x3080 = 28LLU;
volatile uint64_t t37 = 23584928LLU;
int8_t x3157 = 0;
uint8_t x3160 = 0U;
uint64_t x3165 = 3185200714LLU;
static volatile uint32_t x3171 = UINT32_MAX;
uint8_t x3172 = 7U;
volatile int64_t t40 = INT64_MIN;
int8_t x3185 = INT8_MIN;
uint64_t x3218 = 108707LLU;
static int32_t x3219 = INT32_MIN;
volatile int64_t t43 = 19231723444LL;
int16_t x3269 = INT16_MAX;
int32_t x3428 = 20;
uint64_t x3575 = UINT64_MAX;
uint8_t x3576 = 11U;
volatile int32_t x3610 = -1;
int8_t x3715 = INT8_MIN;
static int16_t x3740 = 26;
volatile uint32_t t51 = 403150U;
int32_t x3823 = INT32_MIN;
volatile int32_t x4032 = 2;
static volatile int32_t t57 = -3890400;
int16_t x4069 = 2741;
int16_t x4072 = 2;
int64_t x4186 = INT64_MIN;
int16_t x4187 = 0;
static volatile int64_t x4329 = -19525102645LL;
int8_t x4330 = -1;
int16_t x4470 = 0;
uint64_t x4495 = UINT64_MAX;
uint64_t x4515 = 33LLU;
uint8_t x4516 = 16U;
uint64_t x4573 = 1704720751684756986LLU;
uint8_t x4576 = 0U;
int16_t x4603 = INT16_MAX;
volatile uint64_t x4674 = 1LLU;
static int8_t x4676 = 2;
uint64_t t70 = 1078LLU;
int32_t x4686 = -1774;
uint8_t x4700 = 4U;
int8_t x4707 = INT8_MAX;
int32_t t74 = 0;
int16_t x4795 = INT16_MIN;
int32_t x4889 = INT32_MIN;
volatile uint32_t x4929 = UINT32_MAX;
static volatile uint32_t t81 = UINT32_MAX;
uint8_t x5036 = 30U;
uint64_t x5161 = UINT64_MAX;
uint32_t x5162 = 1408467U;
int16_t x5163 = 4977;
static int16_t x5233 = 79;
int16_t x5235 = -1;
uint64_t x5305 = 9032LLU;
int16_t x5555 = -917;
int32_t t91 = -5522830;
uint32_t x5592 = 31U;
volatile int64_t x5773 = -1LL;
int16_t x5839 = -1;
uint8_t x5867 = 0U;
volatile int64_t t98 = INT64_MAX;
volatile int8_t x5870 = -1;
uint8_t x5901 = 3U;
int8_t x5904 = 9;
uint8_t x6320 = 3U;
int8_t x6343 = INT8_MIN;
static volatile int32_t t105 = 250425;
int64_t t106 = INT64_MIN;
static uint32_t t109 = 12642U;
static int8_t x6997 = INT8_MIN;
int32_t x6999 = INT32_MIN;
uint8_t x7000 = 3U;
uint16_t x7057 = UINT16_MAX;
static volatile uint32_t t114 = 41731504U;
volatile uint8_t x7140 = 2U;
uint64_t t116 = 2977LLU;
static volatile uint32_t x7168 = 14U;
volatile int64_t t118 = 4635239294636LL;
volatile uint64_t t121 = 1004751032LLU;
volatile uint8_t x7458 = UINT8_MAX;
volatile int8_t x7557 = 0;
int32_t x7577 = -1;
static uint8_t x7579 = 10U;
int16_t x7620 = 0;
volatile int32_t t129 = 1;
int16_t x8053 = 3;
int32_t x8091 = INT32_MIN;
volatile uint32_t t135 = 2135168610U;
static int8_t x8203 = INT8_MAX;
static volatile uint8_t x8228 = 1U;
volatile int8_t x8340 = 30;
volatile int32_t t139 = -8;
uint16_t x8429 = 100U;
int16_t x8772 = 1;
int16_t x8794 = INT16_MAX;
uint64_t x8795 = UINT64_MAX;
uint64_t t147 = 222254268660245269LLU;
volatile int64_t x9153 = -3160919800456LL;
uint64_t x9154 = 1629861311LLU;
uint32_t x9180 = 1U;
volatile int64_t x9405 = INT64_MIN;
static uint8_t x9526 = 0U;
int16_t x9693 = -23;
volatile uint16_t x9694 = UINT16_MAX;
uint8_t x9696 = 0U;
static int32_t x9749 = INT32_MAX;
volatile int32_t t161 = 449563;
uint16_t x9821 = 0U;
int8_t x10001 = -1;
uint64_t x10003 = UINT64_MAX;
int32_t x10102 = 0;
volatile int16_t x10250 = INT16_MAX;
int64_t x10321 = INT64_MIN;
uint64_t x10323 = UINT64_MAX;
static int16_t x10330 = -1;
uint8_t x10332 = 11U;
uint32_t t171 = 1007U;
uint64_t x10609 = 1541551490071647570LLU;
static uint64_t x10610 = 48576863LLU;
volatile uint64_t t172 = 1043553539LLU;
uint64_t t176 = UINT64_MAX;
uint16_t x10675 = 37U;
uint32_t x10697 = 340U;
int32_t x10698 = -233;
int32_t x10700 = 1;
uint32_t x10825 = UINT32_MAX;
uint64_t x10826 = UINT64_MAX;
uint32_t x10827 = UINT32_MAX;
volatile int16_t x11097 = 12;
uint32_t x11153 = UINT32_MAX;
uint32_t x11386 = 988584U;
static int16_t x11388 = 0;
int64_t x11550 = -2894336LL;
static volatile uint64_t t194 = 6LLU;
int32_t x11633 = -1;
uint32_t x11634 = UINT32_MAX;
int32_t x11635 = -1;
uint8_t x11719 = UINT8_MAX;
static uint32_t t198 = 5U;


void f0(void) {
    	int8_t x101 = INT8_MIN;
	int32_t x102 = -25;
	static volatile int16_t x104 = 1;
	static volatile uint32_t t0 = 14859638U;

    t0 = (x101-((x102*x103)<<x104));

    if (t0 != 4294967118U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x117 = 207000602373160LL;
	int32_t x119 = -175334;
	int16_t x120 = 0;
	int64_t t1 = 1656618LL;

    t1 = (x117-((x118*x119)<<x120));

    if (t1 != 207000579930408LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	static uint32_t x187 = 11788118U;
	uint16_t x188 = 2U;

    t2 = (x185-((x186*x187)<<x188));

    if (t2 != 1740548992U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x253 = 0;
	static uint64_t x255 = 42644582LLU;
	uint8_t x256 = 26U;
	uint64_t t3 = 456800LLU;

    t3 = (x253-((x254*x255)<<x256));

    if (t3 != 2861829453774848LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x442 = -1LL;
	int16_t x443 = -1454;
	int32_t x444 = 1;

    t4 = (x441-((x442*x443)<<x444));

    if (t4 != -1941LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x449 = INT32_MIN;
	int64_t x450 = 20852332830LL;
	uint16_t x451 = 3461U;
	uint16_t x452 = 1U;

    t5 = (x449-((x450*x451)<<x452));

    if (t5 != -144341995332908LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x662 = 186U;
	int32_t x663 = -504407;
	volatile uint8_t x664 = 1U;
	volatile uint64_t t6 = 60251596298810501LLU;

    t6 = (x661-((x662*x663)<<x664));

    if (t6 != 18446744069603979879LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x705 = -1;
	static int64_t x706 = -3LL;
	uint64_t x707 = 1845636278152LLU;
	volatile int64_t x708 = 32LL;
	uint64_t t7 = 3428954782104086LLU;

    t7 = (x705-((x706*x707)<<x708));

    if (t7 != 2989253910385917951LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x785 = 20U;
	static uint64_t x787 = UINT64_MAX;
	int32_t x788 = 21;
	static volatile uint64_t t8 = 242547262943229LLU;

    t8 = (x785-((x786*x787)<<x788));

    if (t8 != 4503599625273364LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x1085 = -1;
	static int16_t x1086 = INT16_MIN;
	volatile uint8_t x1088 = 2U;
	uint64_t t9 = 197474791228LLU;

    t9 = (x1085-((x1086*x1087)<<x1088));

    if (t9 != 1572863LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x1166 = 464553401140LLU;
	int64_t x1167 = 70790824580065805LL;
	uint32_t x1168 = 0U;
	static uint64_t t10 = 5824769121LLU;

    t10 = (x1165-((x1166*x1167)<<x1168));

    if (t10 != 3668729745527068251LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x1373 = INT16_MAX;
	volatile int32_t x1374 = -1;

    t11 = (x1373-((x1374*x1375)<<x1376));

    if (t11 != 5464913638651363327LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x1437 = UINT32_MAX;
	static int64_t x1438 = INT64_MAX;
	int8_t x1439 = 1;
	int8_t x1440 = 0;

    t12 = (x1437-((x1438*x1439)<<x1440));

    if (t12 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x1489 = -1;
	uint32_t x1491 = UINT32_MAX;
	static int8_t x1492 = 0;

    t13 = (x1489-((x1490*x1491)<<x1492));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1497 = 1516U;
	int32_t x1498 = INT32_MIN;
	volatile uint64_t t14 = 48LLU;

    t14 = (x1497-((x1498*x1499)<<x1500));

    if (t14 != 1516LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x1553 = UINT32_MAX;
	static int64_t x1554 = -1LL;
	volatile int16_t x1555 = -195;
	uint16_t x1556 = 20U;
	volatile int64_t t15 = 242120709376415346LL;

    t15 = (x1553-((x1554*x1555)<<x1556));

    if (t15 != 4090494975LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1649 = INT8_MIN;
	volatile int64_t x1650 = 13790159882LL;
	static uint8_t x1652 = 11U;
	volatile uint64_t t16 = 111737487680986284LLU;

    t16 = (x1649-((x1650*x1651)<<x1652));

    if (t16 != 18378990922104983424LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1665 = 19U;
	volatile uint64_t x1667 = 271LLU;
	uint8_t x1668 = 4U;
	uint64_t t17 = 93654678183128LLU;

    t17 = (x1665-((x1666*x1667)<<x1668));

    if (t17 != 18446725450731360515LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1785 = -1LL;
	volatile uint64_t x1787 = 0LLU;
	static volatile uint64_t t18 = UINT64_MAX;

    t18 = (x1785-((x1786*x1787)<<x1788));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1853 = INT8_MIN;
	volatile int8_t x1855 = 0;
	int8_t x1856 = 54;
	int64_t t19 = 720454LL;

    t19 = (x1853-((x1854*x1855)<<x1856));

    if (t19 != -128LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1949 = 6U;
	volatile uint32_t x1950 = UINT32_MAX;
	uint32_t x1951 = 13380691U;
	uint8_t x1952 = 1U;
	static uint32_t t20 = 22696357U;

    t20 = (x1949-((x1950*x1951)<<x1952));

    if (t20 != 26761388U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x1953 = INT16_MIN;
	uint32_t x1954 = 2U;
	static uint16_t x1955 = 12U;
	int16_t x1956 = 12;
	uint32_t t21 = 38907U;

    t21 = (x1953-((x1954*x1955)<<x1956));

    if (t21 != 4294836224U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2013 = 1;
	uint32_t x2014 = UINT32_MAX;
	int32_t x2015 = -1;
	uint8_t x2016 = 3U;
	volatile uint32_t t22 = 381018U;

    t22 = (x2013-((x2014*x2015)<<x2016));

    if (t22 != 4294967289U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x2111 = INT8_MAX;
	int8_t x2112 = 0;
	volatile int32_t t23 = 85;

    t23 = (x2109-((x2110*x2111)<<x2112));

    if (t23 != -8323073) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x2261 = 8008U;
	uint64_t x2262 = UINT64_MAX;
	static int16_t x2263 = INT16_MAX;
	int32_t x2264 = 0;
	uint64_t t24 = 47984845375998LLU;

    t24 = (x2261-((x2262*x2263)<<x2264));

    if (t24 != 40775LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x2329 = 3LLU;
	uint64_t x2330 = 352LLU;
	int8_t x2331 = INT8_MAX;
	uint8_t x2332 = 11U;
	uint64_t t25 = 517605887LLU;

    t25 = (x2329-((x2330*x2331)<<x2332));

    if (t25 != 18446744073617997827LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x2333 = 25127675U;
	uint64_t x2334 = 12251LLU;
	volatile int8_t x2335 = INT8_MAX;
	volatile uint64_t t26 = 424212586569309730LLU;

    t26 = (x2333-((x2334*x2335)<<x2336));

    if (t26 != 18446744072141461243LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x2357 = 357U;
	static uint64_t x2358 = UINT64_MAX;
	uint32_t x2359 = 360U;
	uint8_t x2360 = 4U;
	volatile uint64_t t27 = 955109314226163195LLU;

    t27 = (x2357-((x2358*x2359)<<x2360));

    if (t27 != 6117LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x2401 = UINT8_MAX;
	uint32_t x2402 = 49118606U;
	uint32_t x2403 = 502238584U;

    t28 = (x2401-((x2402*x2403)<<x2404));

    if (t28 != 166191071U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x2453 = -1;
	uint32_t x2454 = 1U;
	int8_t x2455 = -1;
	int8_t x2456 = 0;
	static uint32_t t29 = 62U;

    t29 = (x2453-((x2454*x2455)<<x2456));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x2501 = -1;
	static uint64_t x2502 = 300977LLU;
	static int64_t x2503 = INT64_MAX;
	static int8_t x2504 = 0;
	static uint64_t t30 = 33394284505180568LLU;

    t30 = (x2501-((x2502*x2503)<<x2504));

    if (t30 != 9223372036855076784LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2526 = INT8_MIN;
	uint64_t x2527 = UINT64_MAX;
	static uint32_t x2528 = 2U;

    t31 = (x2525-((x2526*x2527)<<x2528));

    if (t31 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x2689 = -1;
	int32_t x2691 = -1;
	static uint8_t x2692 = 6U;
	int32_t t32 = 9;

    t32 = (x2689-((x2690*x2691)<<x2692));

    if (t32 != -33512961) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x2713 = -1;
	static int32_t x2714 = INT32_MIN;
	uint64_t x2715 = 7957126LLU;
	int64_t x2716 = 1LL;

    t33 = (x2713-((x2714*x2715)<<x2716));

    if (t33 != 34175595940151295LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2809 = INT8_MAX;
	volatile uint32_t x2810 = 85U;
	uint16_t x2811 = 25787U;
	uint8_t x2812 = 2U;
	volatile uint32_t t34 = 795U;

    t34 = (x2809-((x2810*x2811)<<x2812));

    if (t34 != 4286199843U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x2869 = UINT16_MAX;
	uint8_t x2871 = UINT8_MAX;
	int8_t x2872 = 3;
	uint64_t t35 = 6347LLU;

    t35 = (x2869-((x2870*x2871)<<x2872));

    if (t35 != 67575LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x2973 = 438U;
	static uint64_t x2974 = UINT64_MAX;
	volatile uint8_t x2975 = 5U;
	volatile int16_t x2976 = 0;
	static uint64_t t36 = 270LLU;

    t36 = (x2973-((x2974*x2975)<<x2976));

    if (t36 != 443LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x3078 = 185167354707LLU;
	static int16_t x3079 = INT16_MIN;

    t37 = (x3077-((x3078*x3079)<<x3080));

    if (t37 != 12455434845213949982LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x3158 = INT16_MIN;
	int8_t x3159 = -1;
	volatile int32_t t38 = -2683499;

    t38 = (x3157-((x3158*x3159)<<x3160));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x3166 = 165U;
	uint8_t x3167 = 21U;
	int64_t x3168 = 0LL;
	uint64_t t39 = 2464058648513208LLU;

    t39 = (x3165-((x3166*x3167)<<x3168));

    if (t39 != 3185197249LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x3169 = INT64_MIN;
	int32_t x3170 = INT32_MIN;

    t40 = (x3169-((x3170*x3171)<<x3172));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x3186 = 1U;
	uint32_t x3187 = 9U;
	int32_t x3188 = 1;
	uint32_t t41 = 219U;

    t41 = (x3185-((x3186*x3187)<<x3188));

    if (t41 != 4294967150U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x3217 = INT16_MIN;
	int8_t x3220 = 0;
	uint64_t t42 = 1LLU;

    t42 = (x3217-((x3218*x3219)<<x3220));

    if (t42 != 233446504890368LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x3237 = UINT32_MAX;
	int8_t x3238 = INT8_MIN;
	int64_t x3239 = -1LL;
	uint16_t x3240 = 4U;

    t43 = (x3237-((x3238*x3239)<<x3240));

    if (t43 != 4294965247LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x3270 = 0;
	volatile int8_t x3271 = -1;
	static uint16_t x3272 = 17U;
	volatile int32_t t44 = 0;

    t44 = (x3269-((x3270*x3271)<<x3272));

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x3369 = -9;
	static int16_t x3370 = INT16_MIN;
	static uint16_t x3371 = 0U;
	static int16_t x3372 = 1;
	static int32_t t45 = 3237;

    t45 = (x3369-((x3370*x3371)<<x3372));

    if (t45 != -9) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x3425 = UINT8_MAX;
	volatile uint8_t x3426 = 13U;
	uint16_t x3427 = 66U;
	int32_t t46 = 7635861;

    t46 = (x3425-((x3426*x3427)<<x3428));

    if (t46 != -899677953) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x3573 = INT8_MIN;
	volatile int32_t x3574 = -5;
	uint64_t t47 = 10LLU;

    t47 = (x3573-((x3574*x3575)<<x3576));

    if (t47 != 18446744073709541248LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x3609 = INT16_MIN;
	uint64_t x3611 = 221907LLU;
	volatile uint8_t x3612 = 8U;
	uint64_t t48 = 3202LLU;

    t48 = (x3609-((x3610*x3611)<<x3612));

    if (t48 != 56775424LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x3657 = UINT32_MAX;
	static int64_t x3658 = -1897365824934632505LL;
	volatile int64_t x3659 = -1LL;
	static volatile uint8_t x3660 = 0U;
	static int64_t t49 = 50LL;

    t49 = (x3657-((x3658*x3659)<<x3660));

    if (t49 != -1897365820639665210LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x3713 = -52;
	volatile int16_t x3714 = INT16_MIN;
	uint8_t x3716 = 6U;
	volatile int32_t t50 = 17962980;

    t50 = (x3713-((x3714*x3715)<<x3716));

    if (t50 != -268435508) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x3737 = 7;
	volatile int32_t x3738 = -1;
	static uint32_t x3739 = 226U;

    t51 = (x3737-((x3738*x3739)<<x3740));

    if (t51 != 2281701383U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x3821 = INT16_MIN;
	static uint32_t x3822 = 879U;
	volatile uint16_t x3824 = 24U;
	uint32_t t52 = 200778469U;

    t52 = (x3821-((x3822*x3823)<<x3824));

    if (t52 != 4294934528U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x3885 = INT32_MAX;
	uint8_t x3886 = 27U;
	uint64_t x3887 = 219760650929801333LLU;
	uint8_t x3888 = 1U;
	volatile uint64_t t53 = 1LLU;

    t53 = (x3885-((x3886*x3887)<<x3888));

    if (t53 != 6579668925647763281LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x3953 = 207U;
	static int16_t x3954 = INT16_MAX;
	uint16_t x3955 = 879U;
	volatile uint32_t x3956 = 3U;
	int32_t t54 = -1;

    t54 = (x3953-((x3954*x3955)<<x3956));

    if (t54 != -230417337) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x3961 = 5U;
	uint32_t x3962 = 445U;
	volatile int32_t x3963 = INT32_MIN;
	int8_t x3964 = 0;
	static uint32_t t55 = 4061U;

    t55 = (x3961-((x3962*x3963)<<x3964));

    if (t55 != 2147483653U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x4009 = INT32_MAX;
	int8_t x4010 = 26;
	int32_t x4011 = 391899;
	volatile int16_t x4012 = 6;
	static int32_t t56 = -49;

    t56 = (x4009-((x4010*x4011)<<x4012));

    if (t56 != 1495363711) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x4029 = 0;
	int16_t x4030 = -1;
	volatile int8_t x4031 = -1;

    t57 = (x4029-((x4030*x4031)<<x4032));

    if (t57 != -4) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x4070 = -1;
	uint8_t x4071 = 0U;
	static int32_t t58 = 1;

    t58 = (x4069-((x4070*x4071)<<x4072));

    if (t58 != 2741) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x4113 = UINT64_MAX;
	uint64_t x4114 = UINT64_MAX;
	int8_t x4115 = INT8_MIN;
	int16_t x4116 = 1;
	volatile uint64_t t59 = 33LLU;

    t59 = (x4113-((x4114*x4115)<<x4116));

    if (t59 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x4169 = 16625U;
	static int8_t x4170 = INT8_MIN;
	volatile int8_t x4171 = -7;
	uint16_t x4172 = 15U;
	int32_t t60 = -875881;

    t60 = (x4169-((x4170*x4171)<<x4172));

    if (t60 != -29343503) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x4185 = 391405107LLU;
	uint8_t x4188 = 19U;
	static volatile uint64_t t61 = 2LLU;

    t61 = (x4185-((x4186*x4187)<<x4188));

    if (t61 != 391405107LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x4189 = INT8_MIN;
	static uint8_t x4190 = 1U;
	volatile uint64_t x4191 = UINT64_MAX;
	int8_t x4192 = 2;
	static uint64_t t62 = 321884757668LLU;

    t62 = (x4189-((x4190*x4191)<<x4192));

    if (t62 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x4305 = INT32_MIN;
	uint64_t x4306 = 2073885LLU;
	int8_t x4307 = -1;
	int8_t x4308 = 60;
	volatile uint64_t t63 = 393817618415LLU;

    t63 = (x4305-((x4306*x4307)<<x4308));

    if (t63 != 14987979557741527040LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x4331 = INT8_MIN;
	uint16_t x4332 = 0U;
	volatile int64_t t64 = -3265LL;

    t64 = (x4329-((x4330*x4331)<<x4332));

    if (t64 != -19525102773LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x4469 = INT64_MIN;
	int16_t x4471 = INT16_MIN;
	uint16_t x4472 = 2U;
	int64_t t65 = INT64_MIN;

    t65 = (x4469-((x4470*x4471)<<x4472));

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x4493 = 4176410U;
	static volatile int16_t x4494 = INT16_MIN;
	uint8_t x4496 = 0U;
	volatile uint64_t t66 = 2097LLU;

    t66 = (x4493-((x4494*x4495)<<x4496));

    if (t66 != 4143642LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x4513 = UINT64_MAX;
	volatile int8_t x4514 = INT8_MIN;
	uint64_t t67 = 709414341599768LLU;

    t67 = (x4513-((x4514*x4515)<<x4516));

    if (t67 != 276824063LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x4574 = 1252698167LLU;
	static int64_t x4575 = 59LL;
	uint64_t t68 = 749109LLU;

    t68 = (x4573-((x4574*x4575)<<x4576));

    if (t68 != 1704720677775565133LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x4601 = INT8_MAX;
	volatile uint8_t x4602 = UINT8_MAX;
	volatile int8_t x4604 = 1;
	static int32_t t69 = 8582;

    t69 = (x4601-((x4602*x4603)<<x4604));

    if (t69 != -16711043) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x4673 = -1;
	int64_t x4675 = -1LL;

    t70 = (x4673-((x4674*x4675)<<x4676));

    if (t70 != 3LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x4685 = 1U;
	uint32_t x4687 = UINT32_MAX;
	uint16_t x4688 = 1U;
	volatile uint32_t t71 = 29702631U;

    t71 = (x4685-((x4686*x4687)<<x4688));

    if (t71 != 4294963749U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x4697 = 2171040743263LL;
	int8_t x4698 = -1;
	uint32_t x4699 = 14962U;
	static int64_t t72 = 46678225712700LL;

    t72 = (x4697-((x4698*x4699)<<x4700));

    if (t72 != 2166746015359LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x4705 = INT64_MIN;
	uint64_t x4706 = 5292LLU;
	volatile int64_t x4708 = 19LL;
	static uint64_t t73 = 2LLU;

    t73 = (x4705-((x4706*x4707)<<x4708));

    if (t73 != 9223371684489199616LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x4725 = -2081707;
	int16_t x4726 = INT16_MAX;
	volatile int8_t x4727 = 10;
	volatile uint8_t x4728 = 3U;

    t74 = (x4725-((x4726*x4727)<<x4728));

    if (t74 != -4703067) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x4745 = INT32_MIN;
	uint64_t x4746 = 1689312479877LLU;
	volatile uint8_t x4747 = UINT8_MAX;
	uint8_t x4748 = 0U;
	volatile uint64_t t75 = 4431LLU;

    t75 = (x4745-((x4746*x4747)<<x4748));

    if (t75 != 18446313296879699333LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x4757 = -13482620;
	uint16_t x4758 = UINT16_MAX;
	int32_t x4759 = 1201;
	uint16_t x4760 = 2U;
	volatile int32_t t76 = -6979;

    t76 = (x4757-((x4758*x4759)<<x4760));

    if (t76 != -328312760) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x4793 = INT8_MAX;
	volatile uint32_t x4794 = UINT32_MAX;
	uint32_t x4796 = 0U;
	static uint32_t t77 = 47U;

    t77 = (x4793-((x4794*x4795)<<x4796));

    if (t77 != 4294934655U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x4825 = -1;
	int16_t x4826 = INT16_MAX;
	int8_t x4827 = 1;
	int32_t x4828 = 1;
	int32_t t78 = 50157;

    t78 = (x4825-((x4826*x4827)<<x4828));

    if (t78 != -65535) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x4890 = -366105306;
	static volatile int64_t x4891 = -1LL;
	uint8_t x4892 = 24U;
	int64_t t79 = -126091891168151LL;

    t79 = (x4889-((x4890*x4891)<<x4892));

    if (t79 != -6142229944991744LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x4897 = INT64_MIN;
	static int32_t x4898 = 0;
	int8_t x4899 = 0;
	static uint16_t x4900 = 16U;
	volatile int64_t t80 = INT64_MIN;

    t80 = (x4897-((x4898*x4899)<<x4900));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x4930 = 0U;
	int32_t x4931 = 202149413;
	uint16_t x4932 = 26U;

    t81 = (x4929-((x4930*x4931)<<x4932));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x5033 = 1;
	volatile uint64_t x5034 = 74102LLU;
	int32_t x5035 = INT32_MIN;
	volatile uint64_t t82 = 4LLU;

    t82 = (x5033-((x5034*x5035)<<x5036));

    if (t82 != 13835058055282163713LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x5121 = INT64_MIN;
	int16_t x5122 = INT16_MIN;
	volatile uint64_t x5123 = 377797860245134654LLU;
	uint8_t x5124 = 6U;
	uint64_t t83 = 18LLU;

    t83 = (x5121-((x5122*x5123)<<x5124));

    if (t83 != 2656870942533222400LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x5164 = 0U;
	volatile uint64_t t84 = 60LLU;

    t84 = (x5161-((x5162*x5163)<<x5164));

    if (t84 != 18446744070994578652LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x5169 = -1;
	int8_t x5170 = INT8_MAX;
	int32_t x5171 = 1;
	static uint8_t x5172 = 3U;
	static volatile int32_t t85 = -842991;

    t85 = (x5169-((x5170*x5171)<<x5172));

    if (t85 != -1017) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x5225 = UINT8_MAX;
	int16_t x5226 = -1;
	int8_t x5227 = -1;
	int32_t x5228 = 3;
	static int32_t t86 = 1;

    t86 = (x5225-((x5226*x5227)<<x5228));

    if (t86 != 247) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x5234 = UINT32_MAX;
	static int8_t x5236 = 0;
	static uint32_t t87 = 113706332U;

    t87 = (x5233-((x5234*x5235)<<x5236));

    if (t87 != 78U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x5306 = INT16_MIN;
	static volatile uint32_t x5307 = UINT32_MAX;
	uint8_t x5308 = 25U;
	uint64_t t88 = 7792072828LLU;

    t88 = (x5305-((x5306*x5307)<<x5308));

    if (t88 != 9032LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x5433 = INT32_MAX;
	int32_t x5434 = INT32_MIN;
	int64_t x5435 = -1LL;
	static uint8_t x5436 = 19U;
	static volatile int64_t t89 = 401028579748274LL;

    t89 = (x5433-((x5434*x5435)<<x5436));

    if (t89 != -1125897759358977LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x5517 = 84260U;
	volatile uint64_t x5518 = 764851568032LLU;
	volatile uint8_t x5519 = UINT8_MAX;
	uint8_t x5520 = 24U;
	volatile uint64_t t90 = 211296LLU;

    t90 = (x5517-((x5518*x5519)<<x5520));

    if (t90 != 11340054093352749348LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x5553 = 0U;
	static int8_t x5554 = INT8_MIN;
	uint8_t x5556 = 3U;

    t91 = (x5553-((x5554*x5555)<<x5556));

    if (t91 != -939008) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x5589 = 28U;
	volatile int8_t x5590 = 55;
	uint32_t x5591 = UINT32_MAX;
	static uint32_t t92 = 27098U;

    t92 = (x5589-((x5590*x5591)<<x5592));

    if (t92 != 2147483676U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x5629 = INT16_MIN;
	static int16_t x5630 = 422;
	int16_t x5631 = INT16_MAX;
	uint8_t x5632 = 3U;
	volatile int32_t t93 = -2862287;

    t93 = (x5629-((x5630*x5631)<<x5632));

    if (t93 != -110654160) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x5774 = 569950864U;
	volatile int32_t x5775 = INT32_MIN;
	volatile int16_t x5776 = 0;
	volatile int64_t t94 = -155LL;

    t94 = (x5773-((x5774*x5775)<<x5776));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint64_t x5785 = 60234LLU;
	uint32_t x5786 = UINT32_MAX;
	volatile uint16_t x5787 = 2732U;
	int8_t x5788 = 1;
	volatile uint64_t t95 = 17982052665390LLU;

    t95 = (x5785-((x5786*x5787)<<x5788));

    if (t95 != 18446744069414650018LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x5809 = 23;
	volatile int16_t x5810 = INT16_MIN;
	static volatile uint8_t x5811 = 0U;
	uint8_t x5812 = 1U;
	int32_t t96 = -11;

    t96 = (x5809-((x5810*x5811)<<x5812));

    if (t96 != 23) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x5837 = 0;
	int32_t x5838 = -1;
	static int8_t x5840 = 0;
	volatile int32_t t97 = 4;

    t97 = (x5837-((x5838*x5839)<<x5840));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x5865 = INT64_MAX;
	static int32_t x5866 = -1;
	int32_t x5868 = 30;

    t98 = (x5865-((x5866*x5867)<<x5868));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x5869 = 1929;
	static uint64_t x5871 = 3582512LLU;
	uint8_t x5872 = 0U;
	uint64_t t99 = 51458465LLU;

    t99 = (x5869-((x5870*x5871)<<x5872));

    if (t99 != 3584441LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x5881 = 58U;
	int16_t x5882 = INT16_MIN;
	uint64_t x5883 = UINT64_MAX;
	uint16_t x5884 = 0U;
	static uint64_t t100 = 16628414160326278LLU;

    t100 = (x5881-((x5882*x5883)<<x5884));

    if (t100 != 18446744073709518906LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x5902 = INT16_MAX;
	uint32_t x5903 = 67615U;
	uint32_t t101 = 0U;

    t101 = (x5901-((x5902*x5903)<<x5904));

    if (t101 != 3809492483U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x5973 = INT32_MAX;
	static int64_t x5974 = -44055207LL;
	int8_t x5975 = INT8_MIN;
	uint8_t x5976 = 2U;
	static int64_t t102 = 67957476171235366LL;

    t102 = (x5973-((x5974*x5975)<<x5976));

    if (t102 != -20408782337LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x6121 = 7341061638LL;
	int64_t x6122 = -2846581LL;
	int16_t x6123 = INT16_MIN;
	static uint32_t x6124 = 1U;
	static int64_t t103 = 284238804LL;

    t103 = (x6121-((x6122*x6123)<<x6124));

    if (t103 != -179212470778LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x6317 = INT16_MIN;
	int16_t x6318 = INT16_MIN;
	static int8_t x6319 = INT8_MIN;
	static volatile int32_t t104 = 60;

    t104 = (x6317-((x6318*x6319)<<x6320));

    if (t104 != -33587200) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x6341 = INT8_MAX;
	int32_t x6342 = -1;
	static volatile uint8_t x6344 = 19U;

    t105 = (x6341-((x6342*x6343)<<x6344));

    if (t105 != -67108737) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x6369 = INT64_MIN;
	int64_t x6370 = -54LL;
	volatile uint16_t x6371 = 0U;
	volatile uint16_t x6372 = 1U;

    t106 = (x6369-((x6370*x6371)<<x6372));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x6445 = -1;
	int64_t x6446 = INT64_MIN;
	int16_t x6447 = 0;
	volatile uint8_t x6448 = 1U;
	volatile int64_t t107 = 834LL;

    t107 = (x6445-((x6446*x6447)<<x6448));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x6481 = -441;
	int32_t x6482 = 3;
	static uint16_t x6483 = UINT16_MAX;
	uint8_t x6484 = 0U;
	int32_t t108 = 0;

    t108 = (x6481-((x6482*x6483)<<x6484));

    if (t108 != -197046) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x6545 = 77U;
	static uint8_t x6546 = 13U;
	static uint8_t x6547 = UINT8_MAX;
	volatile uint32_t x6548 = 0U;

    t109 = (x6545-((x6546*x6547)<<x6548));

    if (t109 != 4294964058U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x6725 = 14088300LLU;
	uint64_t x6726 = 236035317219LLU;
	uint32_t x6727 = 221632901U;
	int8_t x6728 = 46;
	static volatile uint64_t t110 = 2459930303131746LLU;

    t110 = (x6725-((x6726*x6727)<<x6728));

    if (t110 != 14088455903080020076LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x6937 = UINT8_MAX;
	int16_t x6938 = INT16_MIN;
	uint64_t x6939 = 7728064LLU;
	int32_t x6940 = 11;
	uint64_t t111 = 3716063784LLU;

    t111 = (x6937-((x6938*x6939)<<x6940));

    if (t111 != 518621595959551LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x6998 = UINT32_MAX;
	uint32_t t112 = 45297U;

    t112 = (x6997-((x6998*x6999)<<x7000));

    if (t112 != 4294967168U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x7041 = 49LL;
	volatile uint64_t x7042 = 2796961LLU;
	volatile int64_t x7043 = INT64_MAX;
	uint8_t x7044 = 0U;
	volatile uint64_t t113 = 11698411LLU;

    t113 = (x7041-((x7042*x7043)<<x7044));

    if (t113 != 9223372036857572818LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x7058 = 1779985128U;
	int16_t x7059 = INT16_MAX;
	uint16_t x7060 = 1U;

    t114 = (x7057-((x7058*x7059)<<x7060));

    if (t114 != 1766446543U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x7073 = INT16_MAX;
	uint64_t x7074 = 3712267317154158732LLU;
	uint64_t x7075 = UINT64_MAX;
	static int8_t x7076 = 1;
	uint64_t t115 = 494720001021120449LLU;

    t115 = (x7073-((x7074*x7075)<<x7076));

    if (t115 != 7424534634308350231LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x7137 = 237U;
	uint64_t x7138 = 127770916446836LLU;
	uint64_t x7139 = 2046LLU;

    t116 = (x7137-((x7138*x7139)<<x7140));

    if (t116 != 17401066893508646029LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x7165 = INT8_MIN;
	static int16_t x7166 = -1;
	int64_t x7167 = -1LL;
	volatile int64_t t117 = 129624618614LL;

    t117 = (x7165-((x7166*x7167)<<x7168));

    if (t117 != -16512LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x7261 = INT8_MAX;
	int64_t x7262 = -1LL;
	int8_t x7263 = -1;
	static volatile uint8_t x7264 = 34U;

    t118 = (x7261-((x7262*x7263)<<x7264));

    if (t118 != -17179869057LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x7269 = -1152;
	static uint64_t x7270 = 577LLU;
	uint64_t x7271 = UINT64_MAX;
	static uint64_t x7272 = 6LLU;
	volatile uint64_t t119 = 41581868075442LLU;

    t119 = (x7269-((x7270*x7271)<<x7272));

    if (t119 != 35776LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x7433 = INT16_MIN;
	int16_t x7434 = 7387;
	int16_t x7435 = INT16_MAX;
	volatile int16_t x7436 = 1;
	volatile int32_t t120 = 0;

    t120 = (x7433-((x7434*x7435)<<x7436));

    if (t120 != -484132426) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x7441 = INT64_MIN;
	int16_t x7442 = INT16_MIN;
	uint64_t x7443 = 156722110907LLU;
	uint8_t x7444 = 6U;

    t121 = (x7441-((x7442*x7443)<<x7444));

    if (t121 != 9552042125187612672LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x7457 = -58582711LL;
	volatile int16_t x7459 = INT16_MAX;
	uint8_t x7460 = 3U;
	static int64_t t122 = 143281398316122497LL;

    t122 = (x7457-((x7458*x7459)<<x7460));

    if (t122 != -125427391LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x7553 = INT64_MAX;
	uint8_t x7554 = 2U;
	int16_t x7555 = 11096;
	uint8_t x7556 = 2U;
	volatile int64_t t123 = -690048439811707505LL;

    t123 = (x7553-((x7554*x7555)<<x7556));

    if (t123 != 9223372036854687039LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x7558 = 9U;
	volatile uint16_t x7559 = 51U;
	uint8_t x7560 = 0U;
	int32_t t124 = -30;

    t124 = (x7557-((x7558*x7559)<<x7560));

    if (t124 != -459) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x7569 = -226;
	int8_t x7570 = INT8_MAX;
	uint16_t x7571 = 256U;
	uint32_t x7572 = 2U;
	volatile int32_t t125 = -3;

    t125 = (x7569-((x7570*x7571)<<x7572));

    if (t125 != -130274) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x7578 = 1U;
	int8_t x7580 = 11;
	volatile int32_t t126 = 362;

    t126 = (x7577-((x7578*x7579)<<x7580));

    if (t126 != -20481) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x7617 = INT8_MIN;
	int8_t x7618 = 1;
	volatile int8_t x7619 = 3;
	volatile int32_t t127 = 223;

    t127 = (x7617-((x7618*x7619)<<x7620));

    if (t127 != -131) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x7661 = INT8_MIN;
	uint16_t x7662 = 1420U;
	volatile uint32_t x7663 = 7147043U;
	volatile uint8_t x7664 = 0U;
	uint32_t t128 = 106963314U;

    t128 = (x7661-((x7662*x7663)<<x7664));

    if (t128 != 2736100700U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x7713 = 13U;
	int32_t x7714 = -1;
	int16_t x7715 = INT16_MIN;
	volatile uint16_t x7716 = 1U;

    t129 = (x7713-((x7714*x7715)<<x7716));

    if (t129 != -65523) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x7745 = 1;
	uint32_t x7746 = UINT32_MAX;
	int32_t x7747 = -28786;
	uint16_t x7748 = 25U;
	uint32_t t130 = 523582U;

    t130 = (x7745-((x7746*x7747)<<x7748));

    if (t130 != 469762049U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x7777 = 1125;
	volatile int8_t x7778 = INT8_MAX;
	static int32_t x7779 = 34;
	uint8_t x7780 = 1U;
	volatile int32_t t131 = 58074006;

    t131 = (x7777-((x7778*x7779)<<x7780));

    if (t131 != -7511) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x7801 = -1LL;
	int32_t x7802 = 118367688;
	uint32_t x7803 = UINT32_MAX;
	volatile int8_t x7804 = 1;
	static volatile int64_t t132 = 416174642170LL;

    t132 = (x7801-((x7802*x7803)<<x7804));

    if (t132 != -4058231921LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x8054 = INT8_MIN;
	int16_t x8055 = INT16_MIN;
	uint8_t x8056 = 0U;
	int32_t t133 = -2744;

    t133 = (x8053-((x8054*x8055)<<x8056));

    if (t133 != -4194301) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x8089 = INT8_MAX;
	int16_t x8090 = 0;
	int8_t x8092 = 1;
	volatile int32_t t134 = -501162545;

    t134 = (x8089-((x8090*x8091)<<x8092));

    if (t134 != 127) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x8125 = 0U;
	uint32_t x8126 = 4U;
	uint32_t x8127 = UINT32_MAX;
	static uint8_t x8128 = 29U;

    t135 = (x8125-((x8126*x8127)<<x8128));

    if (t135 != 2147483648U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x8201 = 66975017;
	uint32_t x8202 = UINT32_MAX;
	uint8_t x8204 = 7U;
	static volatile uint32_t t136 = 10531191U;

    t136 = (x8201-((x8202*x8203)<<x8204));

    if (t136 != 66991273U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x8225 = UINT16_MAX;
	int8_t x8226 = 59;
	uint64_t x8227 = 148246234LLU;
	uint64_t t137 = 534303525940704LLU;

    t137 = (x8225-((x8226*x8227)<<x8228));

    if (t137 != 18446744056216561539LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x8265 = UINT8_MAX;
	volatile uint16_t x8266 = 10U;
	uint64_t x8267 = 92610239246868LLU;
	static uint32_t x8268 = 0U;
	uint64_t t138 = 8386474749LLU;

    t138 = (x8265-((x8266*x8267)<<x8268));

    if (t138 != 18445817971317083191LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x8337 = 0;
	int32_t x8338 = 0;
	int16_t x8339 = -1;

    t139 = (x8337-((x8338*x8339)<<x8340));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x8377 = INT8_MAX;
	uint64_t x8378 = 434024LLU;
	int32_t x8379 = -1;
	int8_t x8380 = 12;
	volatile uint64_t t140 = 29734651476794845LLU;

    t140 = (x8377-((x8378*x8379)<<x8380));

    if (t140 != 1777762431LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x8430 = 1811138465U;
	static uint64_t x8431 = 7767120623LLU;
	int8_t x8432 = 0;
	volatile uint64_t t141 = 3479358004LLU;

    t141 = (x8429-((x8430*x8431)<<x8432));

    if (t141 != 4379413151099488021LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x8537 = 80LLU;
	int64_t x8538 = 1891823057886174106LL;
	uint8_t x8539 = 3U;
	static volatile int8_t x8540 = 0;
	uint64_t t142 = 1061041851LLU;

    t142 = (x8537-((x8538*x8539)<<x8540));

    if (t142 != 12771274900051029378LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x8649 = INT64_MIN;
	static int8_t x8650 = 0;
	volatile int64_t x8651 = -103201070509598779LL;
	static uint8_t x8652 = 2U;
	int64_t t143 = INT64_MIN;

    t143 = (x8649-((x8650*x8651)<<x8652));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x8661 = -1;
	int8_t x8662 = -7;
	volatile uint32_t x8663 = UINT32_MAX;
	uint8_t x8664 = 1U;
	static uint32_t t144 = 188U;

    t144 = (x8661-((x8662*x8663)<<x8664));

    if (t144 != 4294967281U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x8769 = 13536405734946924LLU;
	uint64_t x8770 = 2438LLU;
	uint32_t x8771 = 0U;
	volatile uint64_t t145 = 52LLU;

    t145 = (x8769-((x8770*x8771)<<x8772));

    if (t145 != 13536405734946924LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x8793 = 4144;
	int8_t x8796 = 42;
	static uint64_t t146 = 14976LLU;

    t146 = (x8793-((x8794*x8795)<<x8796));

    if (t146 != 144110790029348912LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x8853 = 1;
	uint64_t x8854 = 63LLU;
	volatile int32_t x8855 = -1;
	uint16_t x8856 = 1U;

    t147 = (x8853-((x8854*x8855)<<x8856));

    if (t147 != 127LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x8925 = 384501U;
	int16_t x8926 = INT16_MIN;
	volatile uint64_t x8927 = UINT64_MAX;
	int8_t x8928 = 0;
	static uint64_t t148 = 243705025LLU;

    t148 = (x8925-((x8926*x8927)<<x8928));

    if (t148 != 351733LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x9025 = 0U;
	uint64_t x9026 = 3616501LLU;
	int16_t x9027 = INT16_MIN;
	static volatile uint64_t x9028 = 3LLU;
	uint64_t t149 = 2237358453LLU;

    t149 = (x9025-((x9026*x9027)<<x9028));

    if (t149 != 948044038144LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x9155 = 180LL;
	volatile uint32_t x9156 = 52U;
	volatile uint64_t t150 = 25LLU;

    t150 = (x9153-((x9154*x9155)<<x9156));

    if (t150 != 6575252295041123704LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x9177 = UINT16_MAX;
	uint16_t x9178 = 1383U;
	volatile uint64_t x9179 = 15LLU;
	uint64_t t151 = 0LLU;

    t151 = (x9177-((x9178*x9179)<<x9180));

    if (t151 != 24045LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x9325 = -1;
	uint64_t x9326 = 485LLU;
	int64_t x9327 = INT64_MIN;
	uint8_t x9328 = 11U;
	volatile uint64_t t152 = UINT64_MAX;

    t152 = (x9325-((x9326*x9327)<<x9328));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x9377 = INT64_MIN;
	int16_t x9378 = -1;
	uint64_t x9379 = 2706259LLU;
	static int16_t x9380 = 23;
	volatile uint64_t t153 = 614377905LLU;

    t153 = (x9377-((x9378*x9379)<<x9380));

    if (t153 != 9223394738600673280LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x9406 = 0;
	static int8_t x9407 = 1;
	volatile uint8_t x9408 = 0U;
	int64_t t154 = INT64_MIN;

    t154 = (x9405-((x9406*x9407)<<x9408));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x9525 = 41776943946723107LLU;
	static int32_t x9527 = INT32_MIN;
	static uint16_t x9528 = 0U;
	uint64_t t155 = 1176741803LLU;

    t155 = (x9525-((x9526*x9527)<<x9528));

    if (t155 != 41776943946723107LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x9545 = 439;
	volatile int64_t x9546 = 0LL;
	int8_t x9547 = -1;
	static uint8_t x9548 = 12U;
	volatile int64_t t156 = 8344LL;

    t156 = (x9545-((x9546*x9547)<<x9548));

    if (t156 != 439LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x9581 = 2859766LL;
	static uint64_t x9582 = 267744717897332003LLU;
	int8_t x9583 = INT8_MIN;
	int32_t x9584 = 7;
	uint64_t t157 = 183347LLU;

    t157 = (x9581-((x9582*x9583)<<x9584));

    if (t157 != 14851112560726663926LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x9661 = UINT16_MAX;
	int32_t x9662 = INT32_MAX;
	uint8_t x9663 = 0U;
	uint16_t x9664 = 8U;
	volatile int32_t t158 = -23;

    t158 = (x9661-((x9662*x9663)<<x9664));

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x9695 = 125821502130753LLU;
	uint64_t t159 = 261247323881LLU;

    t159 = (x9693-((x9694*x9695)<<x9696));

    if (t159 != 10201031931570653738LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x9750 = 3LLU;
	static int8_t x9751 = INT8_MAX;
	int8_t x9752 = 7;
	static uint64_t t160 = 384928327LLU;

    t160 = (x9749-((x9750*x9751)<<x9752));

    if (t160 != 2147434879LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x9769 = INT16_MIN;
	int8_t x9770 = INT8_MAX;
	volatile uint8_t x9771 = 63U;
	volatile int32_t x9772 = 1;

    t161 = (x9769-((x9770*x9771)<<x9772));

    if (t161 != -48770) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x9822 = 6576162272784LLU;
	int32_t x9823 = INT32_MAX;
	int8_t x9824 = 0;
	static volatile uint64_t t162 = 1041487180582830LLU;

    t162 = (x9821-((x9822*x9823)<<x9824));

    if (t162 != 8005019639523374608LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x9909 = UINT8_MAX;
	static int16_t x9910 = 5983;
	static uint32_t x9911 = 3948U;
	int8_t x9912 = 1;
	static uint32_t t163 = 7U;

    t163 = (x9909-((x9910*x9911)<<x9912));

    if (t163 != 4247725783U) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x10002 = UINT64_MAX;
	volatile int16_t x10004 = 0;
	volatile uint64_t t164 = 9491776LLU;

    t164 = (x10001-((x10002*x10003)<<x10004));

    if (t164 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x10065 = -1;
	uint32_t x10066 = 3145446U;
	volatile uint32_t x10067 = 39400U;
	uint8_t x10068 = 4U;
	volatile uint32_t t165 = 3234691U;

    t165 = (x10065-((x10066*x10067)<<x10068));

    if (t165 != 1385732351U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x10101 = 122;
	int32_t x10103 = INT32_MIN;
	int16_t x10104 = 12;
	volatile int32_t t166 = -228684062;

    t166 = (x10101-((x10102*x10103)<<x10104));

    if (t166 != 122) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x10217 = -1;
	static volatile int64_t x10218 = -1LL;
	int16_t x10219 = INT16_MIN;
	uint32_t x10220 = 1U;
	int64_t t167 = 2400756LL;

    t167 = (x10217-((x10218*x10219)<<x10220));

    if (t167 != -65537LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x10249 = 7;
	uint16_t x10251 = 8U;
	volatile uint16_t x10252 = 8U;
	volatile int32_t t168 = -766430346;

    t168 = (x10249-((x10250*x10251)<<x10252));

    if (t168 != -67106809) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x10322 = 556306985LLU;
	uint8_t x10324 = 29U;
	static volatile uint64_t t169 = 294608075317467095LLU;

    t169 = (x10321-((x10322*x10323)<<x10324));

    if (t169 != 9522037075243696128LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x10329 = -1;
	int16_t x10331 = -1;
	volatile int32_t t170 = 2467282;

    t170 = (x10329-((x10330*x10331)<<x10332));

    if (t170 != -2049) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x10569 = INT8_MIN;
	static int8_t x10570 = INT8_MIN;
	uint32_t x10571 = 1U;
	int8_t x10572 = 5;

    t171 = (x10569-((x10570*x10571)<<x10572));

    if (t171 != 3968U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x10611 = INT8_MIN;
	volatile uint64_t x10612 = 5LLU;

    t172 = (x10609-((x10610*x10611)<<x10612));

    if (t172 != 1541551689042478418LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x10617 = INT32_MIN;
	int8_t x10618 = INT8_MAX;
	uint64_t x10619 = 10135947LLU;
	volatile uint16_t x10620 = 35U;
	volatile uint64_t t173 = 664772047123LLU;

    t173 = (x10617-((x10618*x10619)<<x10620));

    if (t173 != 11110134365928030208LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x10629 = INT64_MIN;
	uint64_t x10630 = 1LLU;
	static uint16_t x10631 = UINT16_MAX;
	uint16_t x10632 = 53U;
	volatile uint64_t t174 = 538249513LLU;

    t174 = (x10629-((x10630*x10631)<<x10632));

    if (t174 != 9232379236109516800LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x10633 = -1;
	static int8_t x10634 = INT8_MAX;
	uint64_t x10635 = 3692LLU;
	int8_t x10636 = 5;
	uint64_t t175 = 4529833988027968LLU;

    t175 = (x10633-((x10634*x10635)<<x10636));

    if (t175 != 18446744073694547327LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x10641 = -1;
	int64_t x10642 = INT64_MIN;
	uint64_t x10643 = UINT64_MAX;
	uint16_t x10644 = 2U;

    t176 = (x10641-((x10642*x10643)<<x10644));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x10673 = 6919;
	uint16_t x10674 = 39U;
	int16_t x10676 = 10;
	volatile int32_t t177 = 81826162;

    t177 = (x10673-((x10674*x10675)<<x10676));

    if (t177 != -1470713) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x10699 = 94856094443LLU;
	static volatile uint64_t t178 = 34881611693LLU;

    t178 = (x10697-((x10698*x10699)<<x10700));

    if (t178 != 44202940010778LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x10828 = 14U;
	uint64_t t179 = 967916747032624461LLU;

    t179 = (x10825-((x10826*x10827)<<x10828));

    if (t179 != 70373039128575LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x10841 = 8247046;
	uint64_t x10842 = 1092725387LLU;
	int16_t x10843 = 3897;
	static uint32_t x10844 = 0U;
	static uint64_t t180 = 6983255676395121502LLU;

    t180 = (x10841-((x10842*x10843)<<x10844));

    if (t180 != 18446739815366965523LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x10849 = INT64_MIN;
	uint16_t x10850 = 0U;
	int64_t x10851 = 1954LL;
	int8_t x10852 = 6;
	static volatile int64_t t181 = INT64_MIN;

    t181 = (x10849-((x10850*x10851)<<x10852));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x10873 = INT16_MIN;
	volatile int16_t x10874 = -5851;
	uint32_t x10875 = UINT32_MAX;
	volatile int16_t x10876 = 31;
	static volatile uint32_t t182 = 220204U;

    t182 = (x10873-((x10874*x10875)<<x10876));

    if (t182 != 2147450880U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x10969 = 2171534U;
	volatile uint32_t x10970 = UINT32_MAX;
	static uint32_t x10971 = UINT32_MAX;
	uint16_t x10972 = 1U;
	volatile uint32_t t183 = 902U;

    t183 = (x10969-((x10970*x10971)<<x10972));

    if (t183 != 2171532U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x11013 = -1LL;
	int8_t x11014 = INT8_MAX;
	uint64_t x11015 = 0LLU;
	uint32_t x11016 = 40U;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (x11013-((x11014*x11015)<<x11016));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x11077 = UINT16_MAX;
	int8_t x11078 = INT8_MAX;
	int8_t x11079 = INT8_MAX;
	uint8_t x11080 = 1U;
	volatile int32_t t185 = -16;

    t185 = (x11077-((x11078*x11079)<<x11080));

    if (t185 != 33277) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x11098 = -1;
	int32_t x11099 = -1;
	uint8_t x11100 = 0U;
	static volatile int32_t t186 = 673498460;

    t186 = (x11097-((x11098*x11099)<<x11100));

    if (t186 != 11) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x11154 = UINT64_MAX;
	int32_t x11155 = INT32_MAX;
	uint8_t x11156 = 0U;
	volatile uint64_t t187 = 37720033993LLU;

    t187 = (x11153-((x11154*x11155)<<x11156));

    if (t187 != 6442450942LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x11213 = 3U;
	volatile int8_t x11214 = INT8_MAX;
	uint64_t x11215 = UINT64_MAX;
	uint8_t x11216 = 0U;
	uint64_t t188 = 492LLU;

    t188 = (x11213-((x11214*x11215)<<x11216));

    if (t188 != 130LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x11369 = -1LL;
	uint64_t x11370 = 1584LLU;
	static uint16_t x11371 = 6681U;
	uint16_t x11372 = 4U;
	volatile uint64_t t189 = 14787755453798LLU;

    t189 = (x11369-((x11370*x11371)<<x11372));

    if (t189 != 18446744073540228351LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x11385 = -1;
	volatile int8_t x11387 = INT8_MIN;
	static uint32_t t190 = 101489671U;

    t190 = (x11385-((x11386*x11387)<<x11388));

    if (t190 != 126538751U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x11453 = INT8_MIN;
	int64_t x11454 = -503LL;
	static int8_t x11455 = -1;
	int64_t x11456 = 13LL;
	volatile int64_t t191 = -8323418019141571LL;

    t191 = (x11453-((x11454*x11455)<<x11456));

    if (t191 != -4120704LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x11477 = 56U;
	uint64_t x11478 = UINT64_MAX;
	static uint64_t x11479 = 18LLU;
	int8_t x11480 = 31;
	uint64_t t192 = 47645LLU;

    t192 = (x11477-((x11478*x11479)<<x11480));

    if (t192 != 38654705720LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x11549 = -4386;
	int16_t x11551 = -21;
	uint32_t x11552 = 0U;
	int64_t t193 = -61448193021LL;

    t193 = (x11549-((x11550*x11551)<<x11552));

    if (t193 != -60785442LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x11605 = 14U;
	static volatile uint8_t x11606 = 32U;
	uint64_t x11607 = 67685759516665876LLU;
	uint8_t x11608 = 21U;

    t194 = (x11605-((x11606*x11607)<<x11608));

    if (t194 != 11830569603983998990LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x11609 = 52417989U;
	volatile uint16_t x11610 = 4U;
	int16_t x11611 = 391;
	volatile uint8_t x11612 = 0U;
	uint32_t t195 = 27017U;

    t195 = (x11609-((x11610*x11611)<<x11612));

    if (t195 != 52416425U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x11636 = 2U;
	volatile uint32_t t196 = 50718U;

    t196 = (x11633-((x11634*x11635)<<x11636));

    if (t196 != 4294967291U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x11717 = INT32_MIN;
	uint32_t x11718 = 93U;
	uint8_t x11720 = 18U;
	uint32_t t197 = 23U;

    t197 = (x11717-((x11718*x11719)<<x11720));

    if (t197 != 225705984U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x11725 = INT32_MAX;
	volatile int16_t x11726 = -258;
	static uint32_t x11727 = UINT32_MAX;
	static uint16_t x11728 = 22U;

    t198 = (x11725-((x11726*x11727)<<x11728));

    if (t198 != 1065353215U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x11733 = -1;
	static volatile int64_t x11734 = 26LL;
	uint16_t x11735 = UINT16_MAX;
	uint16_t x11736 = 0U;
	volatile int64_t t199 = 27055380786330403LL;

    t199 = (x11733-((x11734*x11735)<<x11736));

    if (t199 != -1703911LL) { NG(); } else { ; }
	
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

