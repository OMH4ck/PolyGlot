
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

volatile uint64_t t1 = 143582196313751660LLU;
volatile int64_t x422 = INT64_MIN;
static uint16_t x470 = 0U;
static int8_t x471 = -7;
int32_t t7 = -1854439;
uint64_t x542 = 102436955852564LLU;
static int64_t x587 = -94LL;
static uint8_t x597 = 51U;
static uint32_t x605 = UINT32_MAX;
int16_t x768 = -1;
static uint8_t x953 = UINT8_MAX;
int16_t x1178 = INT16_MAX;
int32_t t19 = 9;
static int32_t t20 = 441710;
static volatile uint32_t x1225 = 1U;
int32_t x1226 = INT32_MAX;
int32_t x1227 = INT32_MIN;
volatile int64_t x1239 = INT64_MIN;
volatile int32_t x1359 = INT32_MAX;
int64_t x1360 = -1LL;
volatile uint32_t t24 = 74U;
static int8_t x1443 = INT8_MIN;
uint8_t x1519 = 1U;
volatile int32_t t27 = -6;
uint8_t x1616 = 0U;
int64_t t28 = INT64_MAX;
uint32_t x1702 = 9096U;
static int8_t x1715 = -1;
uint64_t x1905 = UINT64_MAX;
volatile int16_t x1906 = -1;
int64_t x1939 = -1LL;
static int32_t x1942 = -6984;
volatile int64_t x1996 = -1LL;
uint32_t x2005 = 587U;
int64_t t37 = 15594LL;
static uint64_t x2199 = UINT64_MAX;
int16_t x2314 = INT16_MIN;
int8_t x2317 = INT8_MAX;
int8_t x2320 = -1;
int32_t t41 = 8202;
int8_t x2351 = -9;
volatile int32_t t42 = 214;
volatile int16_t x2373 = INT16_MAX;
int32_t x2374 = INT32_MAX;
static volatile uint8_t x2541 = UINT8_MAX;
uint16_t x2557 = 57U;
int8_t x2667 = 0;
static uint8_t x2736 = 0U;
int16_t x2816 = -1;
int16_t x2857 = 1;
volatile uint8_t x2994 = 27U;
uint16_t x3001 = 25U;
static int64_t x3002 = INT64_MAX;
static int32_t t55 = 1104;
int16_t x3048 = -1;


void f0(void) {
    	static uint8_t x13 = UINT8_MAX;
	uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = INT8_MAX;
	uint64_t x16 = 0LLU;
	int32_t t0 = -1;

    t0 = (x13>>((x14|x15)*x16));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x29 = UINT64_MAX;
	volatile int32_t x30 = -1;
	int64_t x31 = INT64_MIN;
	int16_t x32 = -18;

    t1 = (x29>>((x30|x31)*x32));

    if (t1 != 70368744177663LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x33 = UINT64_MAX;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = INT16_MIN;
	static int32_t x36 = -1;
	static volatile uint64_t t2 = 751LLU;

    t2 = (x33>>((x34|x35)*x36));

    if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x73 = INT32_MAX;
	static int16_t x74 = 387;
	int32_t x75 = -790106;
	uint16_t x76 = 0U;
	int32_t t3 = INT32_MAX;

    t3 = (x73>>((x74|x75)*x76));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x113 = 2U;
	static uint8_t x114 = UINT8_MAX;
	int64_t x115 = -1LL;
	int64_t x116 = -1LL;
	static volatile int32_t t4 = 235754818;

    t4 = (x113>>((x114|x115)*x116));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x193 = 93004343U;
	static int32_t x194 = -1;
	int16_t x195 = -1;
	uint64_t x196 = UINT64_MAX;
	uint32_t t5 = 45157421U;

    t5 = (x193>>((x194|x195)*x196));

    if (t5 != 46502171U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x421 = 13U;
	static int16_t x423 = -1;
	volatile int32_t x424 = -31;
	uint32_t t6 = 1763309U;

    t6 = (x421>>((x422|x423)*x424));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x469 = 1;
	static uint64_t x472 = UINT64_MAX;

    t7 = (x469>>((x470|x471)*x472));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x541 = INT16_MAX;
	int64_t x543 = -1LL;
	volatile int64_t x544 = -1LL;
	volatile int32_t t8 = -201931564;

    t8 = (x541>>((x542|x543)*x544));

    if (t8 != 16383) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x585 = 6U;
	volatile int16_t x586 = INT16_MIN;
	uint8_t x588 = 0U;
	static volatile int32_t t9 = 3545;

    t9 = (x585>>((x586|x587)*x588));

    if (t9 != 6) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x598 = INT64_MAX;
	static volatile int64_t x599 = -1LL;
	static uint16_t x600 = 0U;
	int32_t t10 = -3110179;

    t10 = (x597>>((x598|x599)*x600));

    if (t10 != 51) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x606 = -13903;
	int64_t x607 = -4LL;
	static int64_t x608 = -1LL;
	uint32_t t11 = 757U;

    t11 = (x605>>((x606|x607)*x608));

    if (t11 != 536870911U) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint16_t x749 = UINT16_MAX;
	int8_t x750 = -20;
	int64_t x751 = INT64_MIN;
	int32_t x752 = -1;
	static int32_t t12 = -24161;

    t12 = (x749>>((x750|x751)*x752));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x765 = INT16_MAX;
	static uint8_t x766 = 1U;
	int64_t x767 = -1LL;
	static volatile int32_t t13 = 615533261;

    t13 = (x765>>((x766|x767)*x768));

    if (t13 != 16383) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x954 = -1LL;
	int64_t x955 = -177395567091LL;
	int64_t x956 = -1LL;
	volatile int32_t t14 = -169991;

    t14 = (x953>>((x954|x955)*x956));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x1005 = 3416U;
	int8_t x1006 = -1;
	volatile int32_t x1007 = INT32_MAX;
	static int64_t x1008 = -1LL;
	volatile int32_t t15 = -1860863;

    t15 = (x1005>>((x1006|x1007)*x1008));

    if (t15 != 1708) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x1085 = 1U;
	volatile int16_t x1086 = -1;
	int16_t x1087 = INT16_MIN;
	int32_t x1088 = -1;
	uint32_t t16 = 317U;

    t16 = (x1085>>((x1086|x1087)*x1088));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x1097 = 8U;
	int16_t x1098 = -1;
	int64_t x1099 = INT64_MIN;
	uint64_t x1100 = UINT64_MAX;
	volatile int32_t t17 = 645239;

    t17 = (x1097>>((x1098|x1099)*x1100));

    if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1177 = 1;
	static int32_t x1179 = -6;
	uint16_t x1180 = 0U;
	volatile int32_t t18 = 548;

    t18 = (x1177>>((x1178|x1179)*x1180));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x1197 = UINT8_MAX;
	int64_t x1198 = -1LL;
	uint64_t x1199 = 165663276LLU;
	int16_t x1200 = -1;

    t19 = (x1197>>((x1198|x1199)*x1200));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x1201 = 23;
	uint64_t x1202 = 4614461846LLU;
	volatile uint64_t x1203 = UINT64_MAX;
	int64_t x1204 = -1LL;

    t20 = (x1201>>((x1202|x1203)*x1204));

    if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1209 = 370495LL;
	volatile int32_t x1210 = INT32_MIN;
	int8_t x1211 = -1;
	int8_t x1212 = 0;
	int64_t t21 = -653291LL;

    t21 = (x1209>>((x1210|x1211)*x1212));

    if (t21 != 370495LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1228 = -1LL;
	volatile uint32_t t22 = 5635U;

    t22 = (x1225>>((x1226|x1227)*x1228));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x1237 = 9U;
	static volatile int32_t x1238 = -1;
	int64_t x1240 = -1LL;
	volatile int32_t t23 = 6;

    t23 = (x1237>>((x1238|x1239)*x1240));

    if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x1357 = UINT32_MAX;
	volatile int32_t x1358 = -9;

    t24 = (x1357>>((x1358|x1359)*x1360));

    if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1393 = 102381217291431LLU;
	int8_t x1394 = -1;
	uint8_t x1395 = UINT8_MAX;
	static int16_t x1396 = -1;
	volatile uint64_t t25 = 578LLU;

    t25 = (x1393>>((x1394|x1395)*x1396));

    if (t25 != 51190608645715LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1441 = INT8_MAX;
	uint64_t x1442 = 66903466002295LLU;
	volatile int8_t x1444 = -1;
	volatile int32_t t26 = -15;

    t26 = (x1441>>((x1442|x1443)*x1444));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x1517 = 0U;
	int32_t x1518 = INT32_MIN;
	uint16_t x1520 = 0U;

    t27 = (x1517>>((x1518|x1519)*x1520));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x1613 = INT64_MAX;
	static volatile uint16_t x1614 = 3U;
	static int8_t x1615 = -11;

    t28 = (x1613>>((x1614|x1615)*x1616));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1645 = 34U;
	int16_t x1646 = -1;
	volatile uint16_t x1647 = 1655U;
	static int32_t x1648 = -1;
	int32_t t29 = -253;

    t29 = (x1645>>((x1646|x1647)*x1648));

    if (t29 != 17) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1701 = 9U;
	uint64_t x1703 = UINT64_MAX;
	uint64_t x1704 = UINT64_MAX;
	static int32_t t30 = 0;

    t30 = (x1701>>((x1702|x1703)*x1704));

    if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x1713 = UINT64_MAX;
	static int8_t x1714 = INT8_MIN;
	uint64_t x1716 = UINT64_MAX;
	static volatile uint64_t t31 = 205LLU;

    t31 = (x1713>>((x1714|x1715)*x1716));

    if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1907 = 192U;
	int16_t x1908 = -6;
	uint64_t t32 = 33089744LLU;

    t32 = (x1905>>((x1906|x1907)*x1908));

    if (t32 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x1937 = 412992953U;
	static uint16_t x1938 = 15773U;
	int16_t x1940 = -8;
	volatile uint32_t t33 = 27581U;

    t33 = (x1937>>((x1938|x1939)*x1940));

    if (t33 != 1613253U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1941 = 2719501LLU;
	int32_t x1943 = INT32_MAX;
	static volatile int8_t x1944 = -1;
	volatile uint64_t t34 = 72LLU;

    t34 = (x1941>>((x1942|x1943)*x1944));

    if (t34 != 1359750LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x1993 = 23U;
	int8_t x1994 = -46;
	int16_t x1995 = INT16_MAX;
	uint32_t t35 = 28456U;

    t35 = (x1993>>((x1994|x1995)*x1996));

    if (t35 != 11U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x2006 = 1411U;
	static volatile int8_t x2007 = INT8_MIN;
	volatile int8_t x2008 = 0;
	volatile uint32_t t36 = 16705202U;

    t36 = (x2005>>((x2006|x2007)*x2008));

    if (t36 != 587U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x2009 = INT64_MAX;
	static int32_t x2010 = -12;
	int32_t x2011 = INT32_MIN;
	int16_t x2012 = -1;

    t37 = (x2009>>((x2010|x2011)*x2012));

    if (t37 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x2077 = UINT16_MAX;
	uint64_t x2078 = UINT64_MAX;
	static int64_t x2079 = 444457030LL;
	int8_t x2080 = -1;
	volatile int32_t t38 = -99534;

    t38 = (x2077>>((x2078|x2079)*x2080));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2197 = 18878199U;
	int32_t x2198 = 73941;
	static int8_t x2200 = -1;
	volatile uint32_t t39 = 94U;

    t39 = (x2197>>((x2198|x2199)*x2200));

    if (t39 != 9439099U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x2313 = 1;
	volatile int16_t x2315 = INT16_MAX;
	static uint8_t x2316 = 0U;
	int32_t t40 = -1;

    t40 = (x2313>>((x2314|x2315)*x2316));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x2318 = INT16_MIN;
	int64_t x2319 = -1LL;

    t41 = (x2317>>((x2318|x2319)*x2320));

    if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x2349 = 72U;
	static int8_t x2350 = INT8_MAX;
	int64_t x2352 = -1LL;

    t42 = (x2349>>((x2350|x2351)*x2352));

    if (t42 != 36) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x2375 = INT16_MIN;
	static int32_t x2376 = -1;
	static volatile int32_t t43 = 820893;

    t43 = (x2373>>((x2374|x2375)*x2376));

    if (t43 != 16383) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2525 = INT32_MAX;
	uint64_t x2526 = 32444415LLU;
	int64_t x2527 = -3LL;
	volatile int8_t x2528 = -1;
	volatile int32_t t44 = 62;

    t44 = (x2525>>((x2526|x2527)*x2528));

    if (t44 != 1073741823) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2542 = 7996811421461923LLU;
	static uint8_t x2543 = 1U;
	int8_t x2544 = 0;
	volatile int32_t t45 = -356;

    t45 = (x2541>>((x2542|x2543)*x2544));

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x2558 = -1;
	volatile int64_t x2559 = INT64_MIN;
	static uint64_t x2560 = UINT64_MAX;
	volatile int32_t t46 = 57;

    t46 = (x2557>>((x2558|x2559)*x2560));

    if (t46 != 28) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x2601 = INT64_MAX;
	volatile uint8_t x2602 = 0U;
	int8_t x2603 = INT8_MAX;
	uint8_t x2604 = 0U;
	int64_t t47 = INT64_MAX;

    t47 = (x2601>>((x2602|x2603)*x2604));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x2653 = 3861345U;
	static uint32_t x2654 = UINT32_MAX;
	volatile uint8_t x2655 = 2U;
	volatile int8_t x2656 = -1;
	uint32_t t48 = 2726203U;

    t48 = (x2653>>((x2654|x2655)*x2656));

    if (t48 != 1930672U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x2665 = 101473;
	volatile int16_t x2666 = -1;
	uint16_t x2668 = 0U;
	static int32_t t49 = 17;

    t49 = (x2665>>((x2666|x2667)*x2668));

    if (t49 != 101473) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x2733 = 25;
	int16_t x2734 = -1;
	uint64_t x2735 = 497353LLU;
	static int32_t t50 = -1;

    t50 = (x2733>>((x2734|x2735)*x2736));

    if (t50 != 25) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x2813 = 27U;
	volatile int32_t x2814 = INT32_MIN;
	static int64_t x2815 = INT64_MAX;
	volatile int32_t t51 = -2602;

    t51 = (x2813>>((x2814|x2815)*x2816));

    if (t51 != 13) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x2858 = -1;
	int32_t x2859 = INT32_MAX;
	int32_t x2860 = -1;
	int32_t t52 = 56750;

    t52 = (x2857>>((x2858|x2859)*x2860));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x2945 = UINT32_MAX;
	int32_t x2946 = 1265;
	volatile uint32_t x2947 = 108647373U;
	static uint8_t x2948 = 0U;
	uint32_t t53 = UINT32_MAX;

    t53 = (x2945>>((x2946|x2947)*x2948));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x2993 = 451202U;
	uint32_t x2995 = UINT32_MAX;
	volatile int8_t x2996 = -1;
	volatile uint32_t t54 = 503912497U;

    t54 = (x2993>>((x2994|x2995)*x2996));

    if (t54 != 225601U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x3003 = -1;
	int32_t x3004 = -1;

    t55 = (x3001>>((x3002|x3003)*x3004));

    if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x3045 = 1;
	int16_t x3046 = INT16_MIN;
	static int16_t x3047 = INT16_MAX;
	int32_t t56 = 0;

    t56 = (x3045>>((x3046|x3047)*x3048));

    if (t56 != 0) { NG(); } else { ; }
	
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


    return 0;
}

