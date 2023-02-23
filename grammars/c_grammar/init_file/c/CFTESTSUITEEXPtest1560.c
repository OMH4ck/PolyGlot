
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

volatile int8_t x4 = 0;
int8_t x20 = 1;
volatile uint64_t x57 = UINT64_MAX;
uint32_t x133 = 21U;
uint8_t x135 = 2U;
uint32_t x173 = UINT32_MAX;
int32_t x175 = INT32_MAX;
volatile int32_t t7 = 14;
int32_t x343 = -1;
volatile int32_t t10 = -65757878;
volatile int32_t x753 = 996023;
static int32_t t15 = -1652259;
static uint32_t x759 = 247817U;
int8_t x760 = 2;
int16_t x985 = INT16_MAX;
int32_t t19 = -13090709;
uint32_t x1185 = 3U;
static uint64_t t22 = 78378383557LLU;
uint64_t x1413 = 379857932634927LLU;
uint64_t x1414 = 536497259356988123LLU;
volatile uint64_t t24 = 1937563LLU;
uint64_t x1589 = 52817142LLU;
static volatile int16_t x1590 = -1;
int8_t x1591 = 0;
uint16_t x1914 = 88U;
static uint8_t x2060 = 10U;
volatile uint32_t t33 = 1696U;
int16_t x2085 = INT16_MAX;
int8_t x2092 = 0;
volatile uint32_t t35 = 27U;
uint32_t x2125 = UINT32_MAX;
volatile int32_t x2126 = INT32_MIN;
int8_t x2127 = 0;
uint16_t x2233 = UINT16_MAX;
int32_t x2318 = INT32_MIN;
uint32_t x2453 = 7462598U;
static int16_t x2454 = 2;
volatile uint64_t x2517 = 4146554125432216LLU;
int64_t x2518 = INT64_MAX;
int32_t x2523 = 277;
volatile uint32_t t42 = 0U;
uint32_t x2526 = UINT32_MAX;
static uint16_t x2527 = UINT16_MAX;
int8_t x2556 = 1;
uint32_t t44 = 650U;
int16_t x2805 = INT16_MAX;
volatile int32_t t45 = -1072403;
int32_t x2821 = 3716;
volatile uint64_t x2861 = 119702LLU;
int64_t x2863 = INT64_MAX;
int8_t x2914 = INT8_MAX;
uint8_t x2915 = 4U;
volatile uint8_t x3002 = 66U;
uint64_t x3004 = 1LLU;
uint32_t t50 = 16442U;
volatile int32_t t51 = -876;
uint16_t x3126 = 4U;
int8_t x3128 = 3;
volatile int32_t t54 = 14;
int8_t x3290 = INT8_MIN;
volatile uint16_t x3293 = 905U;
volatile uint64_t x3437 = 66393619555893787LLU;
int16_t x3438 = 0;
uint64_t t60 = 8372486010202LLU;
static int64_t x3518 = -720852LL;
uint64_t t61 = 31949010834LLU;


void f0(void) {
    	static uint16_t x1 = 3U;
	int16_t x2 = INT16_MAX;
	volatile int64_t x3 = INT64_MAX;
	int32_t t0 = 65301;

    t0 = (x1<<((x2==x3)^x4));

    if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x17 = 1540495724872584LLU;
	uint32_t x18 = 503292U;
	static uint16_t x19 = UINT16_MAX;
	volatile uint64_t t1 = 321253321LLU;

    t1 = (x17<<((x18==x19)^x20));

    if (t1 != 3080991449745168LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x58 = -2007;
	static volatile uint32_t x59 = 142646U;
	int16_t x60 = 7;
	static uint64_t t2 = 88658975353239659LLU;

    t2 = (x57<<((x58==x59)^x60));

    if (t2 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x134 = 82U;
	int8_t x136 = 2;
	static uint32_t t3 = 768210U;

    t3 = (x133<<((x134==x135)^x136));

    if (t3 != 84U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x145 = UINT8_MAX;
	static int8_t x146 = -1;
	static volatile int16_t x147 = INT16_MAX;
	uint8_t x148 = 4U;
	int32_t t4 = 492112795;

    t4 = (x145<<((x146==x147)^x148));

    if (t4 != 4080) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x165 = 159;
	int16_t x166 = -1;
	int8_t x167 = 2;
	uint64_t x168 = 0LLU;
	volatile int32_t t5 = 37;

    t5 = (x165<<((x166==x167)^x168));

    if (t5 != 159) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x174 = INT64_MAX;
	uint16_t x176 = 1U;
	uint32_t t6 = 7U;

    t6 = (x173<<((x174==x175)^x176));

    if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x225 = 117U;
	volatile uint16_t x226 = 2259U;
	int8_t x227 = -1;
	int8_t x228 = 0;

    t7 = (x225<<((x226==x227)^x228));

    if (t7 != 117) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x341 = 59U;
	uint16_t x342 = 7261U;
	volatile uint16_t x344 = 1U;
	volatile int32_t t8 = 216059779;

    t8 = (x341<<((x342==x343)^x344));

    if (t8 != 118) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x413 = 2083775LLU;
	int64_t x414 = -1LL;
	int32_t x415 = -10078;
	uint8_t x416 = 1U;
	static volatile uint64_t t9 = 1634937482992499LLU;

    t9 = (x413<<((x414==x415)^x416));

    if (t9 != 4167550LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x461 = INT8_MAX;
	static int8_t x462 = INT8_MIN;
	uint64_t x463 = 16090LLU;
	static uint16_t x464 = 12U;

    t10 = (x461<<((x462==x463)^x464));

    if (t10 != 520192) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x485 = 13U;
	uint16_t x486 = 5U;
	uint8_t x487 = 20U;
	int8_t x488 = 1;
	volatile int32_t t11 = -3513;

    t11 = (x485<<((x486==x487)^x488));

    if (t11 != 26) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x573 = INT8_MAX;
	int32_t x574 = -6116;
	int8_t x575 = 11;
	static uint8_t x576 = 1U;
	volatile int32_t t12 = 0;

    t12 = (x573<<((x574==x575)^x576));

    if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x601 = 1;
	static uint32_t x602 = UINT32_MAX;
	uint64_t x603 = 15811078975309203LLU;
	uint16_t x604 = 0U;
	static int32_t t13 = -486825;

    t13 = (x601<<((x602==x603)^x604));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x705 = 118U;
	uint32_t x706 = 872090411U;
	uint32_t x707 = 4U;
	uint32_t x708 = 5U;
	volatile int32_t t14 = 3193;

    t14 = (x705<<((x706==x707)^x708));

    if (t14 != 3776) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x754 = INT64_MAX;
	int64_t x755 = -1LL;
	volatile uint8_t x756 = 0U;

    t15 = (x753<<((x754==x755)^x756));

    if (t15 != 996023) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x757 = UINT16_MAX;
	int8_t x758 = INT8_MAX;
	int32_t t16 = -119113;

    t16 = (x757<<((x758==x759)^x760));

    if (t16 != 262140) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x765 = 28758U;
	uint32_t x766 = 1559554414U;
	int64_t x767 = -1LL;
	volatile uint8_t x768 = 0U;
	uint32_t t17 = 2402866U;

    t17 = (x765<<((x766==x767)^x768));

    if (t17 != 28758U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x986 = INT32_MAX;
	volatile int64_t x987 = INT64_MAX;
	int8_t x988 = 2;
	static int32_t t18 = -795298656;

    t18 = (x985<<((x986==x987)^x988));

    if (t18 != 131068) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1145 = 229563765;
	static uint32_t x1146 = 22U;
	int8_t x1147 = 0;
	uint8_t x1148 = 3U;

    t19 = (x1145<<((x1146==x1147)^x1148));

    if (t19 != 1836510120) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1177 = 6143U;
	volatile int8_t x1178 = INT8_MIN;
	volatile int64_t x1179 = INT64_MAX;
	uint8_t x1180 = 7U;
	volatile int32_t t20 = 4855016;

    t20 = (x1177<<((x1178==x1179)^x1180));

    if (t20 != 786304) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x1186 = 6;
	static volatile int8_t x1187 = -1;
	uint16_t x1188 = 0U;
	static volatile uint32_t t21 = 64862U;

    t21 = (x1185<<((x1186==x1187)^x1188));

    if (t21 != 3U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1353 = 6622LLU;
	uint32_t x1354 = 71503079U;
	static int8_t x1355 = INT8_MIN;
	int32_t x1356 = 1;

    t22 = (x1353<<((x1354==x1355)^x1356));

    if (t22 != 13244LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x1369 = UINT8_MAX;
	int8_t x1370 = 1;
	uint64_t x1371 = 8LLU;
	int16_t x1372 = 18;
	int32_t t23 = 118171;

    t23 = (x1369<<((x1370==x1371)^x1372));

    if (t23 != 66846720) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1415 = INT16_MIN;
	uint32_t x1416 = 29U;

    t24 = (x1413<<((x1414==x1415)^x1416));

    if (t24 != 5918989288728428544LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1592 = 0;
	static volatile uint64_t t25 = 2986226852289328878LLU;

    t25 = (x1589<<((x1590==x1591)^x1592));

    if (t25 != 52817142LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x1621 = 0U;
	int8_t x1622 = -18;
	uint32_t x1623 = 7092481U;
	volatile uint16_t x1624 = 2U;
	volatile int32_t t26 = -4939333;

    t26 = (x1621<<((x1622==x1623)^x1624));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x1645 = 514396LLU;
	uint64_t x1646 = 8386661223102697LLU;
	volatile uint64_t x1647 = UINT64_MAX;
	int8_t x1648 = 1;
	uint64_t t27 = 12503LLU;

    t27 = (x1645<<((x1646==x1647)^x1648));

    if (t27 != 1028792LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1673 = 2;
	int16_t x1674 = INT16_MIN;
	int64_t x1675 = INT64_MIN;
	static uint32_t x1676 = 1U;
	volatile int32_t t28 = 192;

    t28 = (x1673<<((x1674==x1675)^x1676));

    if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x1693 = 0;
	int32_t x1694 = 13;
	static int64_t x1695 = -1105645164LL;
	int8_t x1696 = 19;
	int32_t t29 = -1954159;

    t29 = (x1693<<((x1694==x1695)^x1696));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x1809 = UINT16_MAX;
	uint8_t x1810 = 5U;
	volatile int32_t x1811 = INT32_MAX;
	uint8_t x1812 = 0U;
	int32_t t30 = 65874254;

    t30 = (x1809<<((x1810==x1811)^x1812));

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1913 = 10LL;
	static int8_t x1915 = -20;
	uint16_t x1916 = 2U;
	static int64_t t31 = 235915073888LL;

    t31 = (x1913<<((x1914==x1915)^x1916));

    if (t31 != 40LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1989 = UINT16_MAX;
	static uint64_t x1990 = UINT64_MAX;
	int64_t x1991 = INT64_MIN;
	uint32_t x1992 = 10U;
	volatile int32_t t32 = 7;

    t32 = (x1989<<((x1990==x1991)^x1992));

    if (t32 != 67107840) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2057 = 21206021U;
	volatile int8_t x2058 = INT8_MIN;
	int64_t x2059 = 896LL;

    t33 = (x2057<<((x2058==x2059)^x2060));

    if (t33 != 240129024U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x2086 = INT32_MIN;
	volatile int32_t x2087 = -628076;
	volatile uint8_t x2088 = 0U;
	static volatile int32_t t34 = 2664830;

    t34 = (x2085<<((x2086==x2087)^x2088));

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x2089 = UINT32_MAX;
	int64_t x2090 = INT64_MIN;
	int64_t x2091 = INT64_MIN;

    t35 = (x2089<<((x2090==x2091)^x2092));

    if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x2128 = 30U;
	volatile uint32_t t36 = 5863779U;

    t36 = (x2125<<((x2126==x2127)^x2128));

    if (t36 != 3221225472U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x2234 = 106U;
	static uint64_t x2235 = 10958095LLU;
	static uint8_t x2236 = 2U;
	volatile int32_t t37 = -2;

    t37 = (x2233<<((x2234==x2235)^x2236));

    if (t37 != 262140) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2317 = 1;
	static volatile int32_t x2319 = -1;
	int8_t x2320 = 0;
	volatile int32_t t38 = -117;

    t38 = (x2317<<((x2318==x2319)^x2320));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2365 = 2486;
	static volatile int64_t x2366 = INT64_MIN;
	uint8_t x2367 = 5U;
	uint8_t x2368 = 0U;
	volatile int32_t t39 = -657769;

    t39 = (x2365<<((x2366==x2367)^x2368));

    if (t39 != 2486) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x2455 = INT8_MIN;
	volatile int8_t x2456 = 5;
	volatile uint32_t t40 = 330688442U;

    t40 = (x2453<<((x2454==x2455)^x2456));

    if (t40 != 238803136U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x2519 = INT32_MIN;
	volatile int16_t x2520 = 0;
	uint64_t t41 = 71704879629800912LLU;

    t41 = (x2517<<((x2518==x2519)^x2520));

    if (t41 != 4146554125432216LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x2521 = 4960076U;
	static uint32_t x2522 = 870U;
	int8_t x2524 = 2;

    t42 = (x2521<<((x2522==x2523)^x2524));

    if (t42 != 19840304U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x2525 = UINT64_MAX;
	volatile int16_t x2528 = 0;
	uint64_t t43 = UINT64_MAX;

    t43 = (x2525<<((x2526==x2527)^x2528));

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x2553 = UINT32_MAX;
	static int64_t x2554 = -1LL;
	volatile int16_t x2555 = INT16_MAX;

    t44 = (x2553<<((x2554==x2555)^x2556));

    if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x2806 = INT64_MIN;
	int32_t x2807 = INT32_MIN;
	uint8_t x2808 = 2U;

    t45 = (x2805<<((x2806==x2807)^x2808));

    if (t45 != 131068) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x2822 = 619U;
	int64_t x2823 = INT64_MAX;
	uint8_t x2824 = 4U;
	volatile int32_t t46 = 1436412;

    t46 = (x2821<<((x2822==x2823)^x2824));

    if (t46 != 59456) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x2862 = UINT16_MAX;
	uint8_t x2864 = 1U;
	uint64_t t47 = 5604051370868725LLU;

    t47 = (x2861<<((x2862==x2863)^x2864));

    if (t47 != 239404LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2913 = 6492172823LLU;
	int32_t x2916 = 17;
	uint64_t t48 = 2057735LLU;

    t48 = (x2913<<((x2914==x2915)^x2916));

    if (t48 != 850942076256256LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x2921 = UINT64_MAX;
	uint8_t x2922 = 7U;
	int16_t x2923 = -28;
	uint16_t x2924 = 1U;
	uint64_t t49 = 96779663428601LLU;

    t49 = (x2921<<((x2922==x2923)^x2924));

    if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x3001 = 13U;
	static volatile uint32_t x3003 = 1494U;

    t50 = (x3001<<((x3002==x3003)^x3004));

    if (t50 != 26U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x3029 = 7U;
	int8_t x3030 = INT8_MAX;
	uint64_t x3031 = 1773LLU;
	uint16_t x3032 = 7U;

    t51 = (x3029<<((x3030==x3031)^x3032));

    if (t51 != 896) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x3125 = UINT16_MAX;
	int32_t x3127 = INT32_MIN;
	volatile int32_t t52 = -1772795;

    t52 = (x3125<<((x3126==x3127)^x3128));

    if (t52 != 524280) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x3221 = INT16_MAX;
	int32_t x3222 = INT32_MIN;
	int64_t x3223 = INT64_MIN;
	volatile int8_t x3224 = 10;
	volatile int32_t t53 = -43071;

    t53 = (x3221<<((x3222==x3223)^x3224));

    if (t53 != 33553408) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x3261 = 0;
	int16_t x3262 = INT16_MIN;
	uint16_t x3263 = 2191U;
	uint32_t x3264 = 6U;

    t54 = (x3261<<((x3262==x3263)^x3264));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x3273 = 0;
	int64_t x3274 = -112643606328LL;
	int32_t x3275 = 73762478;
	int8_t x3276 = 3;
	volatile int32_t t55 = -7465;

    t55 = (x3273<<((x3274==x3275)^x3276));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x3289 = INT16_MAX;
	int64_t x3291 = -1LL;
	static volatile uint32_t x3292 = 11U;
	int32_t t56 = 64507;

    t56 = (x3289<<((x3290==x3291)^x3292));

    if (t56 != 67106816) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x3294 = -28754151LL;
	uint32_t x3295 = 1419U;
	uint32_t x3296 = 1U;
	volatile int32_t t57 = 578415547;

    t57 = (x3293<<((x3294==x3295)^x3296));

    if (t57 != 1810) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x3389 = INT8_MAX;
	uint64_t x3390 = UINT64_MAX;
	int64_t x3391 = -1LL;
	uint32_t x3392 = 0U;
	volatile int32_t t58 = -606234217;

    t58 = (x3389<<((x3390==x3391)^x3392));

    if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x3439 = 105LLU;
	static volatile uint64_t x3440 = 8LLU;
	uint64_t t59 = 12807LLU;

    t59 = (x3437<<((x3438==x3439)^x3440));

    if (t59 != 16996766606308809472LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x3441 = 16888536LLU;
	int16_t x3442 = 42;
	int64_t x3443 = -179104LL;
	uint16_t x3444 = 16U;

    t60 = (x3441<<((x3442==x3443)^x3444));

    if (t60 != 1106807095296LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x3517 = UINT64_MAX;
	int16_t x3519 = INT16_MAX;
	uint16_t x3520 = 5U;

    t61 = (x3517<<((x3518==x3519)^x3520));

    if (t61 != 18446744073709551584LLU) { NG(); } else { ; }
	
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


    return 0;
}

