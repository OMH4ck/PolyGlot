
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

int32_t t0 = 994905267;
volatile int32_t x268 = -675616;
int32_t t2 = 1553;
static int8_t x402 = 0;
uint64_t x467 = 10LLU;
static volatile uint64_t x526 = UINT64_MAX;
int32_t t6 = -2637;
int64_t x529 = INT64_MAX;
int64_t x542 = INT64_MAX;
int32_t x549 = -23;
int64_t x557 = 2139056LL;
volatile int16_t x561 = INT16_MIN;
int64_t x649 = INT64_MAX;
static int16_t x666 = INT16_MAX;
uint16_t x667 = 13U;
uint16_t x726 = 198U;
static uint8_t x1113 = 11U;
uint8_t x1151 = 1U;
uint32_t x1238 = 1U;
volatile int64_t x1556 = -1LL;
volatile uint8_t x1591 = 0U;
int64_t t28 = -1LL;
int64_t x1676 = INT64_MIN;
int32_t t30 = -35431;
uint32_t x1682 = 0U;
volatile int64_t t33 = -416691849470LL;
int32_t t36 = -1130007;
int8_t x2474 = 6;
uint8_t x2581 = 42U;
volatile int32_t t45 = 136630610;
uint8_t x2630 = 0U;
int8_t x2632 = INT8_MIN;
static volatile uint64_t x2646 = UINT64_MAX;
int32_t x2668 = -28;
int32_t x2732 = -1;
uint8_t x2860 = 17U;
int32_t t50 = 1725;
int64_t x2881 = INT64_MAX;
uint8_t x2882 = 0U;
int16_t x2967 = 0;
uint8_t x2968 = UINT8_MAX;
uint8_t x3059 = 17U;
uint64_t x3190 = UINT64_MAX;
volatile int8_t x3191 = 3;
int64_t x3192 = INT64_MAX;
volatile int8_t x3285 = INT8_MIN;
volatile uint8_t x3286 = 6U;
int32_t t57 = 22400596;
int32_t t58 = 339;
volatile int32_t t60 = -1;
uint8_t x3574 = 20U;
int8_t x3750 = INT8_MAX;
volatile int32_t t65 = -478601135;
uint16_t x3904 = 2833U;
static int32_t x3917 = 2398831;
volatile int8_t x3920 = INT8_MIN;
volatile uint8_t x3963 = 0U;
volatile uint8_t x3971 = 1U;
static volatile int32_t x4036 = INT32_MIN;
int64_t x4049 = INT64_MAX;
uint8_t x4055 = 5U;
int8_t x4200 = INT8_MIN;
uint16_t x4273 = 7U;
static uint8_t x4282 = UINT8_MAX;
volatile int32_t x4283 = 4;
int64_t x4313 = INT64_MIN;
volatile int64_t t79 = 1096680553494311468LL;
int32_t x4333 = INT32_MAX;
volatile int32_t t80 = -438;
volatile int8_t x4371 = 1;
volatile int32_t t81 = -61;
uint8_t x4386 = 1U;
volatile uint64_t t84 = 29829366602LLU;
volatile int32_t x4572 = 973;
uint32_t x4613 = UINT32_MAX;
volatile uint8_t x4614 = 1U;
int64_t x5025 = -508LL;
volatile uint8_t x5047 = 0U;
volatile uint64_t t94 = 165412057LLU;
int16_t x5081 = -8834;
int32_t t95 = 542866;
static uint16_t x5109 = UINT16_MAX;
int16_t x5389 = -14;
volatile int32_t x5391 = 1;
uint64_t x5575 = 0LLU;
int64_t x5620 = INT64_MIN;
uint32_t x5763 = 18U;
volatile int32_t t104 = 83084;
int32_t x5894 = 26469411;
uint64_t x6046 = UINT64_MAX;
int32_t t107 = -17689395;
static uint64_t x6318 = 4806134122457599923LLU;
int8_t x6375 = 45;
volatile int64_t t118 = 1446654LL;
int16_t x6603 = 1;
uint32_t x6670 = UINT32_MAX;
static int16_t x6672 = 0;
int16_t x6675 = 0;
uint16_t x7013 = 102U;
uint16_t x7014 = 1U;


void f0(void) {
    	int8_t x57 = INT8_MIN;
	int8_t x58 = 0;
	uint16_t x59 = 5U;
	static int64_t x60 = INT64_MIN;

    t0 = (x57%((x58<<x59)!=x60));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x265 = 0U;
	uint16_t x266 = 244U;
	volatile uint16_t x267 = 22U;
	volatile int32_t t1 = 0;

    t1 = (x265%((x266<<x267)!=x268));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x269 = 35;
	uint32_t x270 = UINT32_MAX;
	uint16_t x271 = 5U;
	volatile uint8_t x272 = UINT8_MAX;

    t2 = (x269%((x270<<x271)!=x272));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x329 = INT8_MIN;
	uint64_t x330 = 32646832806617159LLU;
	int64_t x331 = 6LL;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t3 = -417944983;

    t3 = (x329%((x330<<x331)!=x332));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x401 = INT32_MIN;
	static uint64_t x403 = 11LLU;
	volatile int32_t x404 = -1;
	volatile int32_t t4 = -259;

    t4 = (x401%((x402<<x403)!=x404));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x465 = UINT32_MAX;
	static volatile uint16_t x466 = UINT16_MAX;
	int64_t x468 = -1LL;
	uint32_t t5 = 15472755U;

    t5 = (x465%((x466<<x467)!=x468));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x525 = INT16_MIN;
	static int32_t x527 = 19;
	int16_t x528 = INT16_MIN;

    t6 = (x525%((x526<<x527)!=x528));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x530 = 16241919;
	volatile uint16_t x531 = 1U;
	volatile uint16_t x532 = 11U;
	static int64_t t7 = 18LL;

    t7 = (x529%((x530<<x531)!=x532));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x541 = UINT8_MAX;
	volatile uint64_t x543 = 0LLU;
	int64_t x544 = INT64_MIN;
	volatile int32_t t8 = 603;

    t8 = (x541%((x542<<x543)!=x544));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x550 = 6U;
	uint8_t x551 = 1U;
	uint64_t x552 = 1LLU;
	volatile int32_t t9 = 0;

    t9 = (x549%((x550<<x551)!=x552));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x558 = UINT32_MAX;
	int8_t x559 = 1;
	volatile uint8_t x560 = 48U;
	int64_t t10 = -37934425121410018LL;

    t10 = (x557%((x558<<x559)!=x560));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x562 = 0;
	volatile uint8_t x563 = 0U;
	volatile int8_t x564 = INT8_MIN;
	static volatile int32_t t11 = 6346788;

    t11 = (x561%((x562<<x563)!=x564));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x617 = UINT64_MAX;
	int16_t x618 = INT16_MAX;
	int16_t x619 = 4;
	volatile int16_t x620 = -48;
	uint64_t t12 = 5336610900915590LLU;

    t12 = (x617%((x618<<x619)!=x620));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x650 = 2589;
	int32_t x651 = 7;
	uint16_t x652 = 21123U;
	int64_t t13 = 965439970215677LL;

    t13 = (x649%((x650<<x651)!=x652));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x665 = INT8_MIN;
	uint16_t x668 = 7978U;
	volatile int32_t t14 = -28972;

    t14 = (x665%((x666<<x667)!=x668));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x685 = 27;
	uint8_t x686 = 1U;
	int32_t x687 = 7;
	int64_t x688 = INT64_MIN;
	int32_t t15 = 61;

    t15 = (x685%((x686<<x687)!=x688));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x725 = 38699430U;
	uint8_t x727 = 9U;
	volatile uint8_t x728 = 7U;
	volatile uint32_t t16 = 5880U;

    t16 = (x725%((x726<<x727)!=x728));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x849 = -53;
	int64_t x850 = 3547145034386LL;
	static uint32_t x851 = 18U;
	int8_t x852 = 21;
	volatile int32_t t17 = 19;

    t17 = (x849%((x850<<x851)!=x852));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x1077 = 70817107U;
	volatile uint16_t x1078 = UINT16_MAX;
	int32_t x1079 = 10;
	int8_t x1080 = 0;
	uint32_t t18 = 55978020U;

    t18 = (x1077%((x1078<<x1079)!=x1080));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x1114 = UINT32_MAX;
	static uint16_t x1115 = 7U;
	int16_t x1116 = 15;
	volatile int32_t t19 = 45;

    t19 = (x1113%((x1114<<x1115)!=x1116));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x1141 = -11;
	static uint16_t x1142 = 370U;
	uint16_t x1143 = 12U;
	int64_t x1144 = 10401LL;
	int32_t t20 = -3942;

    t20 = (x1141%((x1142<<x1143)!=x1144));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1149 = INT32_MIN;
	int8_t x1150 = 11;
	volatile uint16_t x1152 = 44U;
	volatile int32_t t21 = 176;

    t21 = (x1149%((x1150<<x1151)!=x1152));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1237 = -1;
	uint16_t x1239 = 14U;
	int8_t x1240 = 6;
	volatile int32_t t22 = 4;

    t22 = (x1237%((x1238<<x1239)!=x1240));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1361 = 502315U;
	int8_t x1362 = INT8_MAX;
	int8_t x1363 = 4;
	static int64_t x1364 = 3561132LL;
	volatile uint32_t t23 = 13658884U;

    t23 = (x1361%((x1362<<x1363)!=x1364));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x1393 = 15U;
	uint64_t x1394 = 5016662939217LLU;
	volatile uint16_t x1395 = 56U;
	uint16_t x1396 = UINT16_MAX;
	volatile uint32_t t24 = 57340U;

    t24 = (x1393%((x1394<<x1395)!=x1396));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x1485 = UINT64_MAX;
	uint32_t x1486 = 21836626U;
	uint8_t x1487 = 13U;
	static uint8_t x1488 = 2U;
	static uint64_t t25 = 55815LLU;

    t25 = (x1485%((x1486<<x1487)!=x1488));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1553 = UINT8_MAX;
	uint64_t x1554 = 160801722LLU;
	uint8_t x1555 = 0U;
	int32_t t26 = 6707176;

    t26 = (x1553%((x1554<<x1555)!=x1556));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1585 = INT16_MIN;
	uint8_t x1586 = UINT8_MAX;
	int64_t x1587 = 1LL;
	int8_t x1588 = INT8_MAX;
	int32_t t27 = 268033676;

    t27 = (x1585%((x1586<<x1587)!=x1588));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1589 = -3938729973456200735LL;
	volatile uint16_t x1590 = 0U;
	volatile int32_t x1592 = INT32_MIN;

    t28 = (x1589%((x1590<<x1591)!=x1592));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x1637 = INT64_MAX;
	int16_t x1638 = INT16_MAX;
	uint8_t x1639 = 9U;
	static int64_t x1640 = -357630130367LL;
	volatile int64_t t29 = -117LL;

    t29 = (x1637%((x1638<<x1639)!=x1640));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1673 = INT16_MAX;
	volatile int32_t x1674 = 504;
	int32_t x1675 = 0;

    t30 = (x1673%((x1674<<x1675)!=x1676));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1677 = 3672U;
	static int16_t x1678 = INT16_MAX;
	int16_t x1679 = 12;
	volatile int16_t x1680 = INT16_MIN;
	volatile uint32_t t31 = 35542109U;

    t31 = (x1677%((x1678<<x1679)!=x1680));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x1681 = 130618603497LLU;
	volatile uint32_t x1683 = 0U;
	volatile int16_t x1684 = INT16_MIN;
	static uint64_t t32 = 15418323789331052LLU;

    t32 = (x1681%((x1682<<x1683)!=x1684));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1729 = -1LL;
	uint16_t x1730 = UINT16_MAX;
	volatile int32_t x1731 = 15;
	int32_t x1732 = -1;

    t33 = (x1729%((x1730<<x1731)!=x1732));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x1765 = UINT8_MAX;
	uint16_t x1766 = 499U;
	volatile int8_t x1767 = 2;
	static uint8_t x1768 = UINT8_MAX;
	volatile int32_t t34 = 46138;

    t34 = (x1765%((x1766<<x1767)!=x1768));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1769 = 251907830806LLU;
	int8_t x1770 = 2;
	static volatile uint64_t x1771 = 15LLU;
	int16_t x1772 = INT16_MIN;
	uint64_t t35 = 29LLU;

    t35 = (x1769%((x1770<<x1771)!=x1772));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x1937 = 1U;
	uint32_t x1938 = 29U;
	int32_t x1939 = 1;
	int32_t x1940 = 14972;

    t36 = (x1937%((x1938<<x1939)!=x1940));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x2093 = INT8_MIN;
	int8_t x2094 = 24;
	uint32_t x2095 = 0U;
	volatile int16_t x2096 = 1112;
	int32_t t37 = 24;

    t37 = (x2093%((x2094<<x2095)!=x2096));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x2165 = INT64_MIN;
	int16_t x2166 = INT16_MAX;
	static uint16_t x2167 = 4U;
	int32_t x2168 = -119;
	int64_t t38 = 111243786447LL;

    t38 = (x2165%((x2166<<x2167)!=x2168));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x2337 = 469316414085908LLU;
	static uint64_t x2338 = UINT64_MAX;
	static uint32_t x2339 = 11U;
	int8_t x2340 = -1;
	volatile uint64_t t39 = 1LLU;

    t39 = (x2337%((x2338<<x2339)!=x2340));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x2361 = 12970150;
	static int8_t x2362 = 5;
	uint64_t x2363 = 20LLU;
	static volatile int8_t x2364 = INT8_MAX;
	static int32_t t40 = -18682190;

    t40 = (x2361%((x2362<<x2363)!=x2364));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x2453 = 310U;
	uint32_t x2454 = 52U;
	uint64_t x2455 = 1LLU;
	uint32_t x2456 = 1495932U;
	static volatile int32_t t41 = 31311;

    t41 = (x2453%((x2454<<x2455)!=x2456));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x2469 = INT64_MAX;
	uint8_t x2470 = 0U;
	uint8_t x2471 = 1U;
	static int64_t x2472 = INT64_MIN;
	int64_t t42 = -1222742387117LL;

    t42 = (x2469%((x2470<<x2471)!=x2472));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x2473 = INT16_MAX;
	int8_t x2475 = 15;
	static volatile int32_t x2476 = INT32_MIN;
	volatile int32_t t43 = 96203906;

    t43 = (x2473%((x2474<<x2475)!=x2476));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x2477 = UINT8_MAX;
	static volatile uint32_t x2478 = UINT32_MAX;
	static uint8_t x2479 = 13U;
	uint16_t x2480 = 0U;
	volatile int32_t t44 = 172004171;

    t44 = (x2477%((x2478<<x2479)!=x2480));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x2582 = 6293;
	int32_t x2583 = 7;
	uint8_t x2584 = 0U;

    t45 = (x2581%((x2582<<x2583)!=x2584));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x2629 = INT8_MIN;
	uint64_t x2631 = 0LLU;
	int32_t t46 = 284109;

    t46 = (x2629%((x2630<<x2631)!=x2632));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x2645 = -5913;
	volatile int16_t x2647 = 1;
	int64_t x2648 = INT64_MIN;
	int32_t t47 = 58;

    t47 = (x2645%((x2646<<x2647)!=x2648));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x2665 = 33U;
	volatile uint32_t x2666 = 87U;
	volatile uint8_t x2667 = 0U;
	volatile int32_t t48 = 1;

    t48 = (x2665%((x2666<<x2667)!=x2668));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x2729 = -3953973330697932913LL;
	static volatile int64_t x2730 = 4673516393LL;
	static volatile uint8_t x2731 = 19U;
	volatile int64_t t49 = 35610440145050890LL;

    t49 = (x2729%((x2730<<x2731)!=x2732));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x2857 = -209;
	volatile int8_t x2858 = INT8_MAX;
	uint16_t x2859 = 3U;

    t50 = (x2857%((x2858<<x2859)!=x2860));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x2883 = 8U;
	int16_t x2884 = INT16_MIN;
	volatile int64_t t51 = -6LL;

    t51 = (x2881%((x2882<<x2883)!=x2884));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x2949 = 24U;
	static int64_t x2950 = 40287732402202LL;
	int32_t x2951 = 3;
	static int64_t x2952 = -13267406LL;
	int32_t t52 = -64709;

    t52 = (x2949%((x2950<<x2951)!=x2952));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x2965 = INT32_MIN;
	uint32_t x2966 = 8205U;
	static volatile int32_t t53 = 249904;

    t53 = (x2965%((x2966<<x2967)!=x2968));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x3049 = 9675U;
	int32_t x3050 = 11852613;
	volatile int8_t x3051 = 2;
	int8_t x3052 = INT8_MIN;
	int32_t t54 = -18209648;

    t54 = (x3049%((x3050<<x3051)!=x3052));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x3057 = INT64_MAX;
	uint64_t x3058 = 8586372650LLU;
	static int8_t x3060 = -3;
	volatile int64_t t55 = -4178977546LL;

    t55 = (x3057%((x3058<<x3059)!=x3060));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x3189 = -1;
	static volatile int32_t t56 = -1;

    t56 = (x3189%((x3190<<x3191)!=x3192));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x3287 = 1U;
	static int8_t x3288 = INT8_MIN;

    t57 = (x3285%((x3286<<x3287)!=x3288));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x3457 = INT16_MIN;
	uint8_t x3458 = 94U;
	static int64_t x3459 = 0LL;
	uint32_t x3460 = 852964U;

    t58 = (x3457%((x3458<<x3459)!=x3460));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x3509 = UINT64_MAX;
	uint8_t x3510 = 29U;
	uint8_t x3511 = 7U;
	volatile int8_t x3512 = INT8_MIN;
	volatile uint64_t t59 = 171619124030850215LLU;

    t59 = (x3509%((x3510<<x3511)!=x3512));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x3521 = 1U;
	volatile uint32_t x3522 = UINT32_MAX;
	uint8_t x3523 = 0U;
	static uint32_t x3524 = 10389951U;

    t60 = (x3521%((x3522<<x3523)!=x3524));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x3525 = INT16_MIN;
	volatile uint8_t x3526 = 38U;
	uint8_t x3527 = 8U;
	volatile uint32_t x3528 = UINT32_MAX;
	static volatile int32_t t61 = 44441581;

    t61 = (x3525%((x3526<<x3527)!=x3528));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x3561 = 26U;
	static uint8_t x3562 = 1U;
	uint8_t x3563 = 0U;
	int32_t x3564 = 0;
	int32_t t62 = -64860;

    t62 = (x3561%((x3562<<x3563)!=x3564));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x3573 = 15918U;
	uint8_t x3575 = 2U;
	volatile int16_t x3576 = -119;
	volatile uint32_t t63 = 302688392U;

    t63 = (x3573%((x3574<<x3575)!=x3576));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x3749 = -1;
	int8_t x3751 = 0;
	int16_t x3752 = -1;
	int32_t t64 = 47002709;

    t64 = (x3749%((x3750<<x3751)!=x3752));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3821 = -14365;
	volatile uint16_t x3822 = 1U;
	volatile int8_t x3823 = 3;
	int64_t x3824 = INT64_MIN;

    t65 = (x3821%((x3822<<x3823)!=x3824));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3849 = INT64_MAX;
	static int32_t x3850 = 1;
	int8_t x3851 = 0;
	uint64_t x3852 = UINT64_MAX;
	int64_t t66 = -2LL;

    t66 = (x3849%((x3850<<x3851)!=x3852));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x3869 = UINT64_MAX;
	static volatile int8_t x3870 = 50;
	int64_t x3871 = 4LL;
	volatile int64_t x3872 = INT64_MIN;
	volatile uint64_t t67 = 1669542583860LLU;

    t67 = (x3869%((x3870<<x3871)!=x3872));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x3901 = 6559912269963599LLU;
	uint16_t x3902 = UINT16_MAX;
	static int16_t x3903 = 0;
	uint64_t t68 = 15LLU;

    t68 = (x3901%((x3902<<x3903)!=x3904));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x3918 = 2739659088291LLU;
	int8_t x3919 = 1;
	volatile int32_t t69 = 25830472;

    t69 = (x3917%((x3918<<x3919)!=x3920));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x3961 = -1;
	uint64_t x3962 = 119186564101730LLU;
	uint64_t x3964 = 6923896075LLU;
	volatile int32_t t70 = 29573;

    t70 = (x3961%((x3962<<x3963)!=x3964));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x3969 = 308970LLU;
	uint16_t x3970 = 10U;
	int8_t x3972 = 0;
	uint64_t t71 = 86LLU;

    t71 = (x3969%((x3970<<x3971)!=x3972));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x4033 = INT8_MIN;
	volatile uint8_t x4034 = 0U;
	static int32_t x4035 = 5;
	int32_t t72 = -818;

    t72 = (x4033%((x4034<<x4035)!=x4036));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x4050 = INT8_MAX;
	static int16_t x4051 = 1;
	uint8_t x4052 = UINT8_MAX;
	volatile int64_t t73 = 1027380496547248141LL;

    t73 = (x4049%((x4050<<x4051)!=x4052));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x4053 = -1;
	uint32_t x4054 = 28185U;
	uint8_t x4056 = 23U;
	int32_t t74 = 874;

    t74 = (x4053%((x4054<<x4055)!=x4056));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x4197 = -1;
	uint16_t x4198 = UINT16_MAX;
	static int16_t x4199 = 3;
	static int32_t t75 = -18173;

    t75 = (x4197%((x4198<<x4199)!=x4200));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x4249 = -1LL;
	volatile uint16_t x4250 = UINT16_MAX;
	uint16_t x4251 = 0U;
	static int8_t x4252 = 48;
	static int64_t t76 = 135862LL;

    t76 = (x4249%((x4250<<x4251)!=x4252));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x4274 = INT8_MAX;
	uint8_t x4275 = 0U;
	uint32_t x4276 = UINT32_MAX;
	int32_t t77 = 15;

    t77 = (x4273%((x4274<<x4275)!=x4276));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x4281 = -9;
	volatile int64_t x4284 = -674LL;
	int32_t t78 = 59759;

    t78 = (x4281%((x4282<<x4283)!=x4284));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint16_t x4314 = 1950U;
	uint8_t x4315 = 1U;
	int8_t x4316 = INT8_MAX;

    t79 = (x4313%((x4314<<x4315)!=x4316));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x4334 = INT8_MAX;
	int8_t x4335 = 1;
	static uint64_t x4336 = UINT64_MAX;

    t80 = (x4333%((x4334<<x4335)!=x4336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x4369 = 7U;
	uint16_t x4370 = 0U;
	int8_t x4372 = -1;

    t81 = (x4369%((x4370<<x4371)!=x4372));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4385 = 17U;
	uint8_t x4387 = 1U;
	static int32_t x4388 = INT32_MAX;
	volatile int32_t t82 = -406418;

    t82 = (x4385%((x4386<<x4387)!=x4388));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x4449 = 62749U;
	int32_t x4450 = 31;
	uint8_t x4451 = 13U;
	uint32_t x4452 = 151246U;
	uint32_t t83 = 30835891U;

    t83 = (x4449%((x4450<<x4451)!=x4452));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x4481 = 17LLU;
	volatile uint16_t x4482 = 60U;
	int8_t x4483 = 3;
	int8_t x4484 = -18;

    t84 = (x4481%((x4482<<x4483)!=x4484));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x4517 = -6697307;
	static int16_t x4518 = 486;
	uint8_t x4519 = 13U;
	int8_t x4520 = -1;
	volatile int32_t t85 = 1331278;

    t85 = (x4517%((x4518<<x4519)!=x4520));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x4569 = -24;
	volatile uint64_t x4570 = 133027429523002LLU;
	static int16_t x4571 = 56;
	static volatile int32_t t86 = 21731;

    t86 = (x4569%((x4570<<x4571)!=x4572));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x4615 = 1U;
	volatile uint64_t x4616 = 33489529860449LLU;
	uint32_t t87 = 11246297U;

    t87 = (x4613%((x4614<<x4615)!=x4616));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x4649 = 511U;
	static int8_t x4650 = INT8_MAX;
	uint8_t x4651 = 10U;
	uint16_t x4652 = 28472U;
	uint32_t t88 = 79895878U;

    t88 = (x4649%((x4650<<x4651)!=x4652));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint64_t x4685 = 138013277908624LLU;
	volatile uint16_t x4686 = UINT16_MAX;
	uint8_t x4687 = 6U;
	volatile uint16_t x4688 = UINT16_MAX;
	volatile uint64_t t89 = 3309371458LLU;

    t89 = (x4685%((x4686<<x4687)!=x4688));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x5021 = 268554U;
	volatile int64_t x5022 = 1354225469LL;
	uint16_t x5023 = 16U;
	uint16_t x5024 = 2U;
	volatile uint32_t t90 = 22690U;

    t90 = (x5021%((x5022<<x5023)!=x5024));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x5026 = 61;
	int8_t x5027 = 1;
	static int64_t x5028 = -118167531LL;
	volatile int64_t t91 = -13010746LL;

    t91 = (x5025%((x5026<<x5027)!=x5028));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x5033 = INT64_MAX;
	int16_t x5034 = 3;
	uint8_t x5035 = 3U;
	int32_t x5036 = INT32_MAX;
	volatile int64_t t92 = -794LL;

    t92 = (x5033%((x5034<<x5035)!=x5036));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x5041 = INT8_MIN;
	uint8_t x5042 = UINT8_MAX;
	uint8_t x5043 = 13U;
	static int32_t x5044 = INT32_MAX;
	volatile int32_t t93 = -17858;

    t93 = (x5041%((x5042<<x5043)!=x5044));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x5045 = UINT64_MAX;
	uint64_t x5046 = UINT64_MAX;
	int16_t x5048 = INT16_MIN;

    t94 = (x5045%((x5046<<x5047)!=x5048));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x5082 = 7U;
	uint32_t x5083 = 19U;
	uint16_t x5084 = 25616U;

    t95 = (x5081%((x5082<<x5083)!=x5084));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x5110 = INT16_MAX;
	uint16_t x5111 = 0U;
	uint8_t x5112 = UINT8_MAX;
	int32_t t96 = -62305;

    t96 = (x5109%((x5110<<x5111)!=x5112));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x5297 = INT32_MAX;
	volatile int8_t x5298 = INT8_MAX;
	static uint8_t x5299 = 5U;
	uint32_t x5300 = 7609U;
	static int32_t t97 = -4;

    t97 = (x5297%((x5298<<x5299)!=x5300));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x5369 = 19U;
	int32_t x5370 = 13982;
	volatile uint8_t x5371 = 2U;
	int64_t x5372 = -1LL;
	volatile int32_t t98 = 1633875;

    t98 = (x5369%((x5370<<x5371)!=x5372));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x5390 = UINT8_MAX;
	int32_t x5392 = -1;
	int32_t t99 = -1;

    t99 = (x5389%((x5390<<x5391)!=x5392));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x5573 = UINT8_MAX;
	uint64_t x5574 = 5403337LLU;
	uint16_t x5576 = 3928U;
	int32_t t100 = -16382059;

    t100 = (x5573%((x5574<<x5575)!=x5576));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x5617 = 2;
	volatile int64_t x5618 = 2501972232LL;
	static uint8_t x5619 = 10U;
	volatile int32_t t101 = 25820;

    t101 = (x5617%((x5618<<x5619)!=x5620));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x5661 = INT64_MIN;
	int64_t x5662 = INT64_MAX;
	int16_t x5663 = 0;
	int8_t x5664 = INT8_MIN;
	volatile int64_t t102 = -438770160LL;

    t102 = (x5661%((x5662<<x5663)!=x5664));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x5761 = -1;
	static uint8_t x5762 = UINT8_MAX;
	int16_t x5764 = INT16_MAX;
	static int32_t t103 = -64715;

    t103 = (x5761%((x5762<<x5763)!=x5764));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x5789 = 1381U;
	int16_t x5790 = 0;
	static uint8_t x5791 = 2U;
	int8_t x5792 = 9;

    t104 = (x5789%((x5790<<x5791)!=x5792));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x5893 = INT16_MIN;
	uint64_t x5895 = 0LLU;
	uint64_t x5896 = UINT64_MAX;
	volatile int32_t t105 = 10563144;

    t105 = (x5893%((x5894<<x5895)!=x5896));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x5993 = INT64_MAX;
	volatile uint64_t x5994 = 12184LLU;
	uint32_t x5995 = 1U;
	uint32_t x5996 = UINT32_MAX;
	static volatile int64_t t106 = -603876559612LL;

    t106 = (x5993%((x5994<<x5995)!=x5996));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x6045 = INT8_MAX;
	uint8_t x6047 = 1U;
	int32_t x6048 = INT32_MIN;

    t107 = (x6045%((x6046<<x6047)!=x6048));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x6109 = -2;
	uint16_t x6110 = UINT16_MAX;
	uint8_t x6111 = 14U;
	volatile uint64_t x6112 = UINT64_MAX;
	int32_t t108 = -223305391;

    t108 = (x6109%((x6110<<x6111)!=x6112));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x6145 = INT64_MAX;
	uint64_t x6146 = 960688160305LLU;
	int16_t x6147 = 0;
	volatile uint8_t x6148 = 44U;
	int64_t t109 = 206012706198LL;

    t109 = (x6145%((x6146<<x6147)!=x6148));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x6229 = 3U;
	uint8_t x6230 = UINT8_MAX;
	volatile uint8_t x6231 = 0U;
	int32_t x6232 = -1827667;
	int32_t t110 = 185;

    t110 = (x6229%((x6230<<x6231)!=x6232));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x6253 = UINT8_MAX;
	uint16_t x6254 = 795U;
	volatile int8_t x6255 = 1;
	uint64_t x6256 = 678LLU;
	volatile int32_t t111 = 25;

    t111 = (x6253%((x6254<<x6255)!=x6256));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x6273 = UINT16_MAX;
	uint64_t x6274 = 5788545LLU;
	int8_t x6275 = 2;
	uint16_t x6276 = 116U;
	volatile int32_t t112 = -16145;

    t112 = (x6273%((x6274<<x6275)!=x6276));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x6301 = INT64_MIN;
	uint32_t x6302 = 1874004U;
	uint16_t x6303 = 5U;
	static int32_t x6304 = -1;
	int64_t t113 = 169LL;

    t113 = (x6301%((x6302<<x6303)!=x6304));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x6317 = -1;
	static uint32_t x6319 = 46U;
	uint8_t x6320 = 3U;
	int32_t t114 = 3;

    t114 = (x6317%((x6318<<x6319)!=x6320));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x6373 = 5U;
	volatile uint64_t x6374 = 6260LLU;
	int32_t x6376 = INT32_MAX;
	static volatile int32_t t115 = -28997645;

    t115 = (x6373%((x6374<<x6375)!=x6376));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x6457 = INT16_MAX;
	static uint16_t x6458 = 912U;
	uint8_t x6459 = 2U;
	static int32_t x6460 = INT32_MAX;
	volatile int32_t t116 = 15478;

    t116 = (x6457%((x6458<<x6459)!=x6460));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x6469 = -497357561876669LL;
	uint64_t x6470 = 12LLU;
	static int8_t x6471 = 0;
	int8_t x6472 = -1;
	volatile int64_t t117 = -47205LL;

    t117 = (x6469%((x6470<<x6471)!=x6472));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x6505 = -1LL;
	int8_t x6506 = 1;
	uint16_t x6507 = 0U;
	int32_t x6508 = INT32_MIN;

    t118 = (x6505%((x6506<<x6507)!=x6508));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x6601 = INT8_MAX;
	volatile uint16_t x6602 = 2151U;
	volatile uint16_t x6604 = 3972U;
	volatile int32_t t119 = -1702;

    t119 = (x6601%((x6602<<x6603)!=x6604));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x6669 = 9689LLU;
	int32_t x6671 = 11;
	volatile uint64_t t120 = 5LLU;

    t120 = (x6669%((x6670<<x6671)!=x6672));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x6673 = INT8_MAX;
	int32_t x6674 = 3;
	static uint32_t x6676 = 223778U;
	volatile int32_t t121 = -5;

    t121 = (x6673%((x6674<<x6675)!=x6676));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x6965 = UINT64_MAX;
	static volatile int16_t x6966 = INT16_MAX;
	int32_t x6967 = 1;
	volatile int16_t x6968 = -18;
	volatile uint64_t t122 = 117756615LLU;

    t122 = (x6965%((x6966<<x6967)!=x6968));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x7015 = 28U;
	static int16_t x7016 = INT16_MIN;
	volatile int32_t t123 = -55;

    t123 = (x7013%((x7014<<x7015)!=x7016));

    if (t123 != 0) { NG(); } else { ; }
	
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


    return 0;
}

