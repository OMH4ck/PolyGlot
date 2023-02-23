
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

uint32_t t0 = 1431623833U;
int8_t x128 = 0;
uint8_t x220 = 0U;
uint64_t t3 = 110638752351013LLU;
int8_t x268 = 1;
static int8_t x353 = 1;
static int16_t x521 = -3425;
uint32_t t8 = 104U;
uint16_t x539 = 7U;
int32_t x540 = 1;
volatile int64_t x583 = -1LL;
int64_t t10 = 10052506LL;
int16_t x669 = 2507;
volatile int16_t x670 = -1;
static volatile int32_t t12 = -13971217;
uint64_t x719 = UINT64_MAX;
int16_t x720 = 32;
uint64_t x745 = 1776951LLU;
uint16_t x746 = 265U;
static int16_t x779 = INT16_MIN;
int16_t x789 = -1;
volatile int32_t x792 = 27;
int32_t t16 = 36;
int8_t x802 = INT8_MIN;
uint8_t x814 = UINT8_MAX;
int16_t x815 = 0;
uint16_t x828 = 12U;
int8_t x859 = 60;
int32_t x903 = INT32_MIN;
static volatile uint64_t t22 = UINT64_MAX;
volatile int32_t t23 = 2001695;
int8_t x1029 = INT8_MIN;
int64_t x1081 = INT64_MIN;
static uint16_t x1113 = 1632U;
volatile int64_t x1117 = -15141645625LL;
uint64_t x1174 = UINT64_MAX;
static int32_t x1205 = -1;
volatile uint8_t x1207 = 31U;
uint64_t x1266 = 1870LLU;
uint8_t x1365 = 0U;
int16_t x1486 = -5;
int8_t x1509 = -1;
int64_t x1510 = -1LL;
volatile uint16_t x1551 = 1233U;
static volatile int32_t x1650 = INT32_MIN;
uint64_t x1652 = 3LLU;
uint8_t x1666 = UINT8_MAX;
int32_t t40 = 33865333;
uint32_t t41 = 64057232U;
volatile int32_t t42 = -94705814;
int16_t x1828 = 22;
static uint8_t x1922 = 25U;
static uint8_t x1924 = 15U;
uint64_t x2010 = 1705830997LLU;
int8_t x2011 = -1;
volatile uint8_t x2012 = 2U;
int64_t t49 = -7106214481LL;
uint16_t x2234 = 41U;
int64_t x2235 = -1LL;
int8_t x2267 = INT8_MIN;
uint16_t x2268 = 2U;
int32_t t54 = 255575045;
static int32_t x2474 = INT32_MAX;
volatile int16_t x2509 = -4014;
uint8_t x2515 = UINT8_MAX;
static int64_t x2517 = INT64_MIN;
volatile int16_t x2542 = 1;
uint8_t x2543 = 0U;
uint8_t x2544 = 0U;
volatile int32_t t60 = -407406;
int64_t x2577 = 118603933044550LL;
int8_t x2578 = INT8_MAX;
uint32_t x2580 = 4U;
int32_t t64 = -283177814;
uint32_t t66 = 10910259U;
int8_t x2980 = 7;
uint32_t x2983 = 9U;
uint8_t x2984 = 0U;
static volatile int32_t x3061 = -2525154;
uint64_t x3122 = UINT64_MAX;
volatile uint16_t x3123 = UINT16_MAX;
int32_t x3194 = 7056;
int8_t x3195 = INT8_MAX;
int32_t x3222 = INT32_MIN;
uint16_t x3277 = UINT16_MAX;
static int64_t x3302 = 15600551745991102LL;
int16_t x3303 = INT16_MIN;
static int64_t t76 = -291372LL;
uint32_t t78 = 75U;
int64_t x3404 = 1LL;
uint32_t x3435 = 3U;
uint64_t x3469 = UINT64_MAX;
uint64_t t82 = 5307401484869634LLU;
volatile int8_t x3546 = -1;
int16_t x3548 = 58;
int64_t x3617 = 20189938914317LL;
int32_t x3750 = -1;
uint8_t x3751 = 8U;
uint64_t x3759 = 8693517485LLU;
uint8_t x3992 = 0U;
static volatile int64_t t92 = 536786580369LL;
int32_t x4061 = -1;
uint64_t x4063 = UINT64_MAX;
volatile int32_t t94 = -4489;
volatile uint64_t t96 = 104856795156325LLU;
int8_t x4156 = 1;
volatile uint32_t x4321 = UINT32_MAX;
static int16_t x4629 = -3413;
int16_t x4735 = INT16_MIN;
static int32_t x4802 = INT32_MIN;
uint16_t x4806 = UINT16_MAX;
volatile uint8_t x4807 = 0U;
static uint8_t x4808 = 0U;
int32_t t105 = -15;
int8_t x4932 = 0;
int32_t t109 = 7136;
int8_t x5116 = 10;
volatile int16_t x5129 = INT16_MAX;
uint8_t x5464 = 12U;
volatile int64_t t114 = 108749LL;
static uint32_t x5564 = 4U;
int64_t t115 = -1LL;
int32_t x5609 = 996196;
uint64_t t117 = 287088765400456835LLU;
uint32_t x5806 = 9753173U;
static int32_t x5807 = INT32_MIN;
volatile uint32_t t120 = 3272651U;
static volatile int16_t x5845 = 147;
uint16_t x5848 = 0U;
volatile uint32_t t121 = 19U;
uint32_t t123 = 42278U;
static int32_t x6109 = -1280;
int32_t t124 = -787;
uint32_t t125 = 13U;
static volatile int8_t x6215 = INT8_MAX;
static uint16_t x6351 = UINT16_MAX;
volatile int32_t t129 = 7975958;
int32_t x6602 = -4276;
uint32_t x6619 = 2007983U;
volatile uint32_t t135 = 35255U;
static volatile int32_t t136 = 9;
volatile int32_t t137 = -45;
uint64_t t138 = 3457349LLU;
int32_t x7089 = INT32_MAX;
int8_t x7123 = INT8_MAX;
int8_t x7124 = 1;
uint8_t x7176 = 6U;
uint8_t x7244 = 29U;
int32_t t145 = 28;
static uint32_t t146 = 68U;
static int8_t x7465 = -1;
static int16_t x7514 = INT16_MIN;
uint16_t x7658 = 2963U;
volatile uint16_t x7909 = 1U;
uint16_t x8037 = 1U;
volatile int64_t x8040 = 1LL;
int32_t t157 = -8035027;
uint32_t x8112 = 15U;
int16_t x8149 = -110;
uint32_t x8151 = UINT32_MAX;
int16_t x8152 = 27;
volatile uint32_t t161 = 7936635U;
static uint8_t x8197 = 1U;
uint16_t x8199 = UINT16_MAX;
uint32_t x8206 = 2U;
static volatile uint64_t t164 = 1137LLU;
uint32_t t168 = 6U;
static volatile int64_t x8529 = 19199281729110980LL;
volatile int32_t x8745 = 381;
int8_t x8759 = -1;
uint64_t x8862 = 4936803823LLU;
volatile uint16_t x8866 = UINT16_MAX;
uint32_t x8868 = 0U;
uint64_t t174 = 3LLU;
static volatile int64_t x8893 = INT64_MIN;
int64_t x8913 = INT64_MIN;
int8_t x8930 = INT8_MIN;
static uint64_t x8990 = 6689LLU;
static uint8_t x8992 = 25U;
uint8_t x9125 = UINT8_MAX;
volatile int32_t x9202 = -114248;
int16_t x9390 = INT16_MIN;
static uint32_t x9391 = 272292U;
static int16_t x9514 = -1;
static int16_t x9696 = 6;
uint16_t x9714 = UINT16_MAX;
int16_t x9777 = INT16_MIN;
uint8_t x9778 = UINT8_MAX;
uint8_t x9779 = 0U;
uint8_t x9780 = 13U;
int32_t x9815 = -1;
uint32_t x9827 = 5U;
static int32_t x10003 = 69427;
volatile int8_t x10249 = INT8_MIN;
int32_t x10250 = -1;
static volatile uint32_t t195 = 14777777U;
volatile uint16_t x10464 = 19U;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	uint32_t x2 = 1296U;
	static volatile int8_t x3 = 49;
	uint8_t x4 = 1U;

    t0 = (x1+((x2+x3)>>x4));

    if (t0 != 544U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x125 = 1300;
	int32_t x126 = 1;
	int32_t x127 = -1;
	int32_t t1 = 4737833;

    t1 = (x125+((x126+x127)>>x128));

    if (t1 != 1300) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x165 = INT64_MIN;
	int64_t x166 = 92LL;
	uint64_t x167 = 1163557585646LLU;
	uint8_t x168 = 0U;
	volatile uint64_t t2 = 6806950189LLU;

    t2 = (x165+((x166+x167)>>x168));

    if (t2 != 9223373200412361546LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x217 = UINT16_MAX;
	uint64_t x218 = 2747729296619701054LLU;
	int32_t x219 = INT32_MIN;

    t3 = (x217+((x218+x219)>>x220));

    if (t3 != 2747729294472282941LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x265 = INT16_MAX;
	volatile uint32_t x266 = 10783758U;
	volatile int8_t x267 = INT8_MIN;
	uint32_t t4 = 498222874U;

    t4 = (x265+((x266+x267)>>x268));

    if (t4 != 5424582U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x354 = UINT64_MAX;
	int32_t x355 = -723474;
	volatile int16_t x356 = 0;
	static uint64_t t5 = 3637707778027LLU;

    t5 = (x353+((x354+x355)>>x356));

    if (t5 != 18446744073708828142LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x489 = 27686532;
	int32_t x490 = 452377;
	volatile uint64_t x491 = 1260859667LLU;
	uint32_t x492 = 25U;
	uint64_t t6 = 3327279673LLU;

    t6 = (x489+((x490+x491)>>x492));

    if (t6 != 27686569LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x505 = 1075U;
	uint32_t x506 = 1U;
	int16_t x507 = INT16_MAX;
	static volatile uint32_t x508 = 0U;
	uint32_t t7 = 41469U;

    t7 = (x505+((x506+x507)>>x508));

    if (t7 != 33843U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x522 = 337450853U;
	int32_t x523 = -1;
	int8_t x524 = 12;

    t8 = (x521+((x522+x523)>>x524));

    if (t8 != 78960U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x537 = INT8_MIN;
	uint8_t x538 = 27U;
	int32_t t9 = -2;

    t9 = (x537+((x538+x539)>>x540));

    if (t9 != -111) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x581 = INT16_MIN;
	volatile uint16_t x582 = UINT16_MAX;
	uint16_t x584 = 2U;

    t10 = (x581+((x582+x583)>>x584));

    if (t10 != -16385LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x589 = -6679;
	uint64_t x590 = 21105935437048LLU;
	volatile int32_t x591 = INT32_MAX;
	int8_t x592 = 1;
	volatile uint64_t t11 = 1918236LLU;

    t11 = (x589+((x590+x591)>>x592));

    if (t11 != 10554041453668LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x671 = 7U;
	uint8_t x672 = 17U;

    t12 = (x669+((x670+x671)>>x672));

    if (t12 != 2507) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x717 = INT16_MAX;
	volatile int8_t x718 = -33;
	uint64_t t13 = 2074635706LLU;

    t13 = (x717+((x718+x719)>>x720));

    if (t13 != 4295000062LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x747 = UINT8_MAX;
	uint16_t x748 = 6U;
	volatile uint64_t t14 = 1768833LLU;

    t14 = (x745+((x746+x747)>>x748));

    if (t14 != 1776959LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x777 = UINT16_MAX;
	uint16_t x778 = UINT16_MAX;
	uint16_t x780 = 6U;
	volatile int32_t t15 = -47;

    t15 = (x777+((x778+x779)>>x780));

    if (t15 != 66046) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x790 = 91U;
	uint16_t x791 = 16218U;

    t16 = (x789+((x790+x791)>>x792));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x801 = INT32_MIN;
	uint32_t x803 = 0U;
	uint8_t x804 = 6U;
	uint32_t t17 = 840U;

    t17 = (x801+((x802+x803)>>x804));

    if (t17 != 2214592510U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x813 = 645U;
	static uint16_t x816 = 11U;
	volatile int32_t t18 = 2272;

    t18 = (x813+((x814+x815)>>x816));

    if (t18 != 645) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x825 = 11972U;
	int8_t x826 = -21;
	uint16_t x827 = 71U;
	int32_t t19 = -3805792;

    t19 = (x825+((x826+x827)>>x828));

    if (t19 != 11972) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x857 = UINT32_MAX;
	volatile uint32_t x858 = UINT32_MAX;
	volatile uint8_t x860 = 5U;
	volatile uint32_t t20 = 31U;

    t20 = (x857+((x858+x859)>>x860));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x869 = 592U;
	static uint8_t x870 = 1U;
	uint16_t x871 = 15311U;
	int64_t x872 = 0LL;
	uint32_t t21 = 29077U;

    t21 = (x869+((x870+x871)>>x872));

    if (t21 != 15904U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x901 = UINT64_MAX;
	static int64_t x902 = 112087635307LL;
	uint8_t x904 = 60U;

    t22 = (x901+((x902+x903)>>x904));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x929 = 0;
	int16_t x930 = -1;
	int8_t x931 = 4;
	uint8_t x932 = 20U;

    t23 = (x929+((x930+x931)>>x932));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x1030 = -195;
	static uint32_t x1031 = 0U;
	uint8_t x1032 = 6U;
	uint32_t t24 = 235268131U;

    t24 = (x1029+((x1030+x1031)>>x1032));

    if (t24 != 67108732U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1082 = INT16_MAX;
	uint32_t x1083 = 306U;
	uint8_t x1084 = 8U;
	volatile int64_t t25 = 104227139LL;

    t25 = (x1081+((x1082+x1083)>>x1084));

    if (t25 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1109 = 45401U;
	static uint16_t x1110 = 7U;
	int32_t x1111 = -1;
	int8_t x1112 = 6;
	volatile uint32_t t26 = 18042U;

    t26 = (x1109+((x1110+x1111)>>x1112));

    if (t26 != 45401U) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x1114 = 3798U;
	uint32_t x1115 = UINT32_MAX;
	volatile uint64_t x1116 = 1LLU;
	static uint32_t t27 = 105U;

    t27 = (x1113+((x1114+x1115)>>x1116));

    if (t27 != 3530U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x1118 = 26039524995LLU;
	volatile int16_t x1119 = INT16_MIN;
	static uint16_t x1120 = 5U;
	uint64_t t28 = 633287120LLU;

    t28 = (x1117+((x1118+x1119)>>x1120));

    if (t28 != 18446744059381640123LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x1133 = 6643;
	volatile uint64_t x1134 = UINT64_MAX;
	volatile uint8_t x1135 = 86U;
	static uint16_t x1136 = 1U;
	uint64_t t29 = 266274793126109LLU;

    t29 = (x1133+((x1134+x1135)>>x1136));

    if (t29 != 6685LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1173 = -1;
	int32_t x1175 = -166;
	volatile uint8_t x1176 = 13U;
	uint64_t t30 = 1377703062580LLU;

    t30 = (x1173+((x1174+x1175)>>x1176));

    if (t30 != 2251799813685246LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x1206 = -1LL;
	static volatile uint8_t x1208 = 8U;
	volatile int64_t t31 = -82776526584193873LL;

    t31 = (x1205+((x1206+x1207)>>x1208));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1265 = 7074;
	static int8_t x1267 = INT8_MAX;
	int8_t x1268 = 38;
	uint64_t t32 = 2059923536232416LLU;

    t32 = (x1265+((x1266+x1267)>>x1268));

    if (t32 != 7074LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1273 = 45;
	int16_t x1274 = 2;
	uint16_t x1275 = 210U;
	uint8_t x1276 = 1U;
	int32_t t33 = 754104;

    t33 = (x1273+((x1274+x1275)>>x1276));

    if (t33 != 151) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x1366 = 149U;
	int8_t x1367 = -1;
	int8_t x1368 = 1;
	volatile uint32_t t34 = 1966157200U;

    t34 = (x1365+((x1366+x1367)>>x1368));

    if (t34 != 74U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1485 = 1;
	volatile uint32_t x1487 = UINT32_MAX;
	uint16_t x1488 = 14U;
	static uint32_t t35 = 999986U;

    t35 = (x1485+((x1486+x1487)>>x1488));

    if (t35 != 262144U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x1511 = 354U;
	uint8_t x1512 = 0U;
	int64_t t36 = -136560180631LL;

    t36 = (x1509+((x1510+x1511)>>x1512));

    if (t36 != 352LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x1549 = 5236399307LLU;
	int64_t x1550 = -1LL;
	uint8_t x1552 = 38U;
	volatile uint64_t t37 = 197LLU;

    t37 = (x1549+((x1550+x1551)>>x1552));

    if (t37 != 5236399307LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint16_t x1649 = 3U;
	int64_t x1651 = INT64_MAX;
	volatile int64_t t38 = 2LL;

    t38 = (x1649+((x1650+x1651)>>x1652));

    if (t38 != 1152921504338411522LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x1661 = 2771408669950335570LLU;
	int32_t x1662 = INT32_MIN;
	uint64_t x1663 = 8413087595LLU;
	uint8_t x1664 = 1U;
	volatile uint64_t t39 = 12969788243LLU;

    t39 = (x1661+((x1662+x1663)>>x1664));

    if (t39 != 2771408673083137543LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1665 = INT8_MIN;
	static int32_t x1667 = -3;
	static uint8_t x1668 = 15U;

    t40 = (x1665+((x1666+x1667)>>x1668));

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x1705 = UINT16_MAX;
	int16_t x1706 = 0;
	uint32_t x1707 = UINT32_MAX;
	uint8_t x1708 = 12U;

    t41 = (x1705+((x1706+x1707)>>x1708));

    if (t41 != 1114110U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x1745 = 19753229;
	static int32_t x1746 = 854;
	int32_t x1747 = 2;
	uint16_t x1748 = 27U;

    t42 = (x1745+((x1746+x1747)>>x1748));

    if (t42 != 19753229) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x1825 = INT64_MIN;
	uint64_t x1826 = UINT64_MAX;
	int8_t x1827 = INT8_MIN;
	volatile uint64_t t43 = 5938931501082LLU;

    t43 = (x1825+((x1826+x1827)>>x1828));

    if (t43 != 9223376434901286911LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x1921 = INT64_MAX;
	volatile int64_t x1923 = -1LL;
	int64_t t44 = INT64_MAX;

    t44 = (x1921+((x1922+x1923)>>x1924));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x1973 = 1012638981927LLU;
	int64_t x1974 = 1455115LL;
	int16_t x1975 = INT16_MIN;
	static uint16_t x1976 = 0U;
	static uint64_t t45 = 1467LLU;

    t45 = (x1973+((x1974+x1975)>>x1976));

    if (t45 != 1012640404274LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x1997 = 1U;
	uint64_t x1998 = 821419587319323LLU;
	int8_t x1999 = -1;
	static uint16_t x2000 = 15U;
	uint64_t t46 = 494LLU;

    t46 = (x1997+((x1998+x1999)>>x2000));

    if (t46 != 25067736430LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x2009 = -63;
	static volatile uint64_t t47 = 2LLU;

    t47 = (x2009+((x2010+x2011)>>x2012));

    if (t47 != 426457686LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x2149 = INT8_MIN;
	volatile int8_t x2150 = INT8_MAX;
	uint8_t x2151 = 2U;
	uint16_t x2152 = 2U;
	int32_t t48 = 30482515;

    t48 = (x2149+((x2150+x2151)>>x2152));

    if (t48 != -96) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x2153 = -7552046444506959LL;
	static int32_t x2154 = INT32_MAX;
	int8_t x2155 = -1;
	int8_t x2156 = 19;

    t49 = (x2153+((x2154+x2155)>>x2156));

    if (t49 != -7552046444502864LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x2157 = INT16_MAX;
	int64_t x2158 = -1LL;
	int16_t x2159 = 417;
	uint64_t x2160 = 5LLU;
	int64_t t50 = 47LL;

    t50 = (x2157+((x2158+x2159)>>x2160));

    if (t50 != 32780LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x2233 = 371U;
	uint16_t x2236 = 0U;
	static int64_t t51 = 108LL;

    t51 = (x2233+((x2234+x2235)>>x2236));

    if (t51 != 411LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x2265 = 12158595671468295LLU;
	static volatile uint64_t x2266 = UINT64_MAX;
	volatile uint64_t t52 = 5958999558192514LLU;

    t52 = (x2265+((x2266+x2267)>>x2268));

    if (t52 != 4623844614098856166LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x2289 = INT8_MIN;
	int64_t x2290 = -1LL;
	uint32_t x2291 = UINT32_MAX;
	uint8_t x2292 = 63U;
	static int64_t t53 = 23064293604303LL;

    t53 = (x2289+((x2290+x2291)>>x2292));

    if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x2369 = 0;
	int16_t x2370 = 5455;
	int32_t x2371 = 303444851;
	volatile uint8_t x2372 = 5U;

    t54 = (x2369+((x2370+x2371)>>x2372));

    if (t54 != 9482822) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x2473 = UINT8_MAX;
	uint64_t x2475 = 259682LLU;
	int16_t x2476 = 0;
	volatile uint64_t t55 = 37017910LLU;

    t55 = (x2473+((x2474+x2475)>>x2476));

    if (t55 != 2147743584LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x2510 = INT32_MIN;
	volatile uint64_t x2511 = UINT64_MAX;
	int8_t x2512 = 11;
	static volatile uint64_t t56 = 127882996012933891LLU;

    t56 = (x2509+((x2510+x2511)>>x2512));

    if (t56 != 9007199253688401LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x2513 = INT8_MIN;
	uint64_t x2514 = UINT64_MAX;
	int16_t x2516 = 12;
	volatile uint64_t t57 = 4067268310969863738LLU;

    t57 = (x2513+((x2514+x2515)>>x2516));

    if (t57 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x2518 = 0;
	static uint8_t x2519 = UINT8_MAX;
	uint64_t x2520 = 2LLU;
	static volatile int64_t t58 = 304063404LL;

    t58 = (x2517+((x2518+x2519)>>x2520));

    if (t58 != -9223372036854775745LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x2537 = UINT32_MAX;
	int8_t x2538 = -1;
	volatile uint32_t x2539 = 13U;
	uint8_t x2540 = 18U;
	uint32_t t59 = UINT32_MAX;

    t59 = (x2537+((x2538+x2539)>>x2540));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x2541 = -1;

    t60 = (x2541+((x2542+x2543)>>x2544));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x2569 = UINT64_MAX;
	int64_t x2570 = INT64_MAX;
	uint64_t x2571 = 5255268162398783222LLU;
	int8_t x2572 = 2;
	uint64_t t61 = 28633423266LLU;

    t61 = (x2569+((x2570+x2571)>>x2572));

    if (t61 != 3619660049813389756LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x2579 = UINT8_MAX;
	static volatile int64_t t62 = -58123282530LL;

    t62 = (x2577+((x2578+x2579)>>x2580));

    if (t62 != 118603933044573LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x2669 = 18689U;
	static uint32_t x2670 = 1071U;
	volatile uint64_t x2671 = 8790787845548922621LLU;
	uint8_t x2672 = 0U;
	volatile uint64_t t63 = 60958711925LLU;

    t63 = (x2669+((x2670+x2671)>>x2672));

    if (t63 != 8790787845548942381LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2689 = -3;
	int8_t x2690 = INT8_MIN;
	static uint16_t x2691 = UINT16_MAX;
	uint8_t x2692 = 1U;

    t64 = (x2689+((x2690+x2691)>>x2692));

    if (t64 != 32700) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x2909 = 109546;
	int16_t x2910 = INT16_MAX;
	int64_t x2911 = 266566906094LL;
	static int8_t x2912 = 14;
	int64_t t65 = -1733373887565535657LL;

    t65 = (x2909+((x2910+x2911)>>x2912));

    if (t65 != 16379500LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x2973 = -92;
	volatile uint32_t x2974 = 276971203U;
	uint16_t x2975 = UINT16_MAX;
	int8_t x2976 = 2;

    t66 = (x2973+((x2974+x2975)>>x2976));

    if (t66 != 69259092U) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x2977 = INT32_MIN;
	static uint8_t x2978 = 27U;
	volatile int64_t x2979 = -1LL;
	volatile int64_t t67 = 21450671847282826LL;

    t67 = (x2977+((x2978+x2979)>>x2980));

    if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x2981 = INT64_MIN;
	uint16_t x2982 = UINT16_MAX;
	volatile int64_t t68 = 173328LL;

    t68 = (x2981+((x2982+x2983)>>x2984));

    if (t68 != -9223372036854710264LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3062 = -1;
	int32_t x3063 = 123161410;
	static int8_t x3064 = 11;
	volatile int32_t t69 = 8459225;

    t69 = (x3061+((x3062+x3063)>>x3064));

    if (t69 != -2465017) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x3077 = 1878U;
	int32_t x3078 = INT32_MAX;
	uint32_t x3079 = UINT32_MAX;
	uint16_t x3080 = 28U;
	uint32_t t70 = 948151U;

    t70 = (x3077+((x3078+x3079)>>x3080));

    if (t70 != 1885U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x3093 = 11LLU;
	int16_t x3094 = 0;
	uint8_t x3095 = UINT8_MAX;
	uint16_t x3096 = 1U;
	volatile uint64_t t71 = 1495295LLU;

    t71 = (x3093+((x3094+x3095)>>x3096));

    if (t71 != 138LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x3121 = -25527476132LL;
	uint32_t x3124 = 0U;
	volatile uint64_t t72 = 60LLU;

    t72 = (x3121+((x3122+x3123)>>x3124));

    if (t72 != 18446744048182141018LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x3193 = 3U;
	int16_t x3196 = 3;
	static volatile int32_t t73 = -1;

    t73 = (x3193+((x3194+x3195)>>x3196));

    if (t73 != 900) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3221 = INT32_MIN;
	static int64_t x3223 = 99385374976LL;
	uint32_t x3224 = 34U;
	volatile int64_t t74 = -380658LL;

    t74 = (x3221+((x3222+x3223)>>x3224));

    if (t74 != -2147483643LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x3278 = INT8_MIN;
	int16_t x3279 = INT16_MAX;
	uint64_t x3280 = 1LLU;
	int32_t t75 = -146;

    t75 = (x3277+((x3278+x3279)>>x3280));

    if (t75 != 81854) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x3301 = 1;
	volatile uint8_t x3304 = 8U;

    t76 = (x3301+((x3302+x3303)>>x3304));

    if (t76 != 60939655257650LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x3333 = INT32_MIN;
	uint64_t x3334 = UINT64_MAX;
	int8_t x3335 = INT8_MIN;
	int8_t x3336 = 7;
	static volatile uint64_t t77 = 118051LLU;

    t77 = (x3333+((x3334+x3335)>>x3336));

    if (t77 != 144115185928372222LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x3373 = -547451959;
	uint32_t x3374 = 458724165U;
	int32_t x3375 = -1;
	int64_t x3376 = 7LL;

    t78 = (x3373+((x3374+x3375)>>x3376));

    if (t78 != 3751099119U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x3401 = INT16_MIN;
	uint8_t x3402 = 29U;
	int8_t x3403 = -1;
	int32_t t79 = -3;

    t79 = (x3401+((x3402+x3403)>>x3404));

    if (t79 != -32754) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x3433 = UINT8_MAX;
	uint8_t x3434 = UINT8_MAX;
	uint32_t x3436 = 3U;
	uint32_t t80 = 179399U;

    t80 = (x3433+((x3434+x3435)>>x3436));

    if (t80 != 287U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x3470 = -1;
	static uint64_t x3471 = 337701492146414LLU;
	int16_t x3472 = 0;
	volatile uint64_t t81 = 6192LLU;

    t81 = (x3469+((x3470+x3471)>>x3472));

    if (t81 != 337701492146412LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x3525 = 15305U;
	int8_t x3526 = -1;
	uint64_t x3527 = 341787LLU;
	int16_t x3528 = 2;

    t82 = (x3525+((x3526+x3527)>>x3528));

    if (t82 != 100751LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x3545 = 217737346U;
	uint64_t x3547 = 0LLU;
	volatile uint64_t t83 = 0LLU;

    t83 = (x3545+((x3546+x3547)>>x3548));

    if (t83 != 217737409LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x3618 = INT8_MIN;
	uint16_t x3619 = UINT16_MAX;
	static uint8_t x3620 = 10U;
	volatile int64_t t84 = -13416866LL;

    t84 = (x3617+((x3618+x3619)>>x3620));

    if (t84 != 20189938914380LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x3749 = 15214;
	int16_t x3752 = 1;
	volatile int32_t t85 = -45675320;

    t85 = (x3749+((x3750+x3751)>>x3752));

    if (t85 != 15217) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x3757 = INT8_MIN;
	int16_t x3758 = -10226;
	volatile uint64_t x3760 = 1LLU;
	uint64_t t86 = 28007083622526LLU;

    t86 = (x3757+((x3758+x3759)>>x3760));

    if (t86 != 4346753501LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x3837 = -1;
	static uint64_t x3838 = 378929095LLU;
	volatile int32_t x3839 = -1;
	int32_t x3840 = 3;
	uint64_t t87 = 102484405LLU;

    t87 = (x3837+((x3838+x3839)>>x3840));

    if (t87 != 47366135LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x3885 = 7964002511610LL;
	volatile uint32_t x3886 = UINT32_MAX;
	uint32_t x3887 = 0U;
	uint8_t x3888 = 5U;
	int64_t t88 = 736680214616999LL;

    t88 = (x3885+((x3886+x3887)>>x3888));

    if (t88 != 7964136729337LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x3921 = -1;
	uint16_t x3922 = UINT16_MAX;
	int64_t x3923 = -1LL;
	uint16_t x3924 = 2U;
	static int64_t t89 = -120915856658LL;

    t89 = (x3921+((x3922+x3923)>>x3924));

    if (t89 != 16382LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x3949 = INT32_MAX;
	static int64_t x3950 = 181683851643LL;
	uint64_t x3951 = UINT64_MAX;
	int8_t x3952 = 9;
	volatile uint64_t t90 = 669095182LLU;

    t90 = (x3949+((x3950+x3951)>>x3952));

    if (t90 != 2502334919LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x3989 = INT8_MIN;
	int8_t x3990 = 2;
	uint16_t x3991 = 3U;
	volatile int32_t t91 = -28;

    t91 = (x3989+((x3990+x3991)>>x3992));

    if (t91 != -123) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x4013 = 150U;
	volatile int64_t x4014 = INT64_MAX;
	int8_t x4015 = -1;
	volatile int16_t x4016 = 18;

    t92 = (x4013+((x4014+x4015)>>x4016));

    if (t92 != 35184372088981LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x4062 = 63LL;
	uint64_t x4064 = 2LLU;
	uint64_t t93 = 4378732503147944232LLU;

    t93 = (x4061+((x4062+x4063)>>x4064));

    if (t93 != 14LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x4069 = INT8_MIN;
	static uint16_t x4070 = UINT16_MAX;
	static int8_t x4071 = INT8_MIN;
	int8_t x4072 = 0;

    t94 = (x4069+((x4070+x4071)>>x4072));

    if (t94 != 65279) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x4085 = -1;
	uint32_t x4086 = 90682829U;
	int16_t x4087 = -5;
	volatile uint16_t x4088 = 1U;
	volatile uint32_t t95 = 8312U;

    t95 = (x4085+((x4086+x4087)>>x4088));

    if (t95 != 45341411U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x4089 = INT32_MAX;
	uint64_t x4090 = UINT64_MAX;
	uint64_t x4091 = 1440978LLU;
	volatile int8_t x4092 = 52;

    t96 = (x4089+((x4090+x4091)>>x4092));

    if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x4153 = 0;
	volatile int16_t x4154 = 2506;
	int16_t x4155 = 889;
	int32_t t97 = -172;

    t97 = (x4153+((x4154+x4155)>>x4156));

    if (t97 != 1697) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x4281 = -1;
	uint32_t x4282 = 1U;
	int8_t x4283 = INT8_MIN;
	static int8_t x4284 = 0;
	volatile uint32_t t98 = 6738777U;

    t98 = (x4281+((x4282+x4283)>>x4284));

    if (t98 != 4294967168U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x4322 = 1;
	uint64_t x4323 = 192396429978070LLU;
	uint8_t x4324 = 0U;
	uint64_t t99 = 1064883696225LLU;

    t99 = (x4321+((x4322+x4323)>>x4324));

    if (t99 != 192400724945366LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x4630 = 56147U;
	volatile uint16_t x4631 = 107U;
	uint32_t x4632 = 6U;
	volatile uint32_t t100 = 14U;

    t100 = (x4629+((x4630+x4631)>>x4632));

    if (t100 != 4294964761U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x4713 = INT16_MIN;
	int16_t x4714 = -983;
	int32_t x4715 = 5023;
	static volatile uint16_t x4716 = 26U;
	int32_t t101 = 74264882;

    t101 = (x4713+((x4714+x4715)>>x4716));

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x4729 = UINT64_MAX;
	volatile int64_t x4730 = INT64_MAX;
	static int8_t x4731 = -2;
	uint16_t x4732 = 37U;
	static uint64_t t102 = 1LLU;

    t102 = (x4729+((x4730+x4731)>>x4732));

    if (t102 != 67108862LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x4733 = UINT64_MAX;
	uint64_t x4734 = 32465738826321910LLU;
	static volatile uint8_t x4736 = 28U;
	uint64_t t103 = 5245833668592746LLU;

    t103 = (x4733+((x4734+x4735)>>x4736));

    if (t103 != 120944300LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x4801 = 3414U;
	static uint64_t x4803 = 123548582182087555LLU;
	int8_t x4804 = 0;
	volatile uint64_t t104 = 31LLU;

    t104 = (x4801+((x4802+x4803)>>x4804));

    if (t104 != 123548580034607321LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x4805 = INT16_MIN;

    t105 = (x4805+((x4806+x4807)>>x4808));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x4929 = INT32_MIN;
	volatile int16_t x4930 = -1;
	int8_t x4931 = INT8_MAX;
	int32_t t106 = 0;

    t106 = (x4929+((x4930+x4931)>>x4932));

    if (t106 != -2147483522) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x4989 = UINT32_MAX;
	int32_t x4990 = -52;
	uint64_t x4991 = UINT64_MAX;
	volatile uint32_t x4992 = 6U;
	volatile uint64_t t107 = 62LLU;

    t107 = (x4989+((x4990+x4991)>>x4992));

    if (t107 != 288230380446679038LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x5005 = INT16_MIN;
	static uint64_t x5006 = UINT64_MAX;
	int32_t x5007 = 1;
	volatile uint8_t x5008 = 41U;
	volatile uint64_t t108 = 34985LLU;

    t108 = (x5005+((x5006+x5007)>>x5008));

    if (t108 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x5057 = -354;
	volatile uint16_t x5058 = 477U;
	int8_t x5059 = INT8_MIN;
	int8_t x5060 = 3;

    t109 = (x5057+((x5058+x5059)>>x5060));

    if (t109 != -311) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x5113 = INT64_MIN;
	uint64_t x5114 = 4105419584705024LLU;
	static int64_t x5115 = INT64_MIN;
	uint64_t t110 = 254532LLU;

    t110 = (x5113+((x5114+x5115)>>x5116));

    if (t110 != 9232383245308329988LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x5130 = 25;
	uint8_t x5131 = 22U;
	uint32_t x5132 = 28U;
	static int32_t t111 = -160;

    t111 = (x5129+((x5130+x5131)>>x5132));

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5285 = INT8_MIN;
	uint32_t x5286 = UINT32_MAX;
	int16_t x5287 = 1;
	volatile uint8_t x5288 = 0U;
	uint32_t t112 = 530365U;

    t112 = (x5285+((x5286+x5287)>>x5288));

    if (t112 != 4294967168U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x5373 = UINT16_MAX;
	uint64_t x5374 = 267982LLU;
	uint16_t x5375 = 108U;
	int16_t x5376 = 4;
	static volatile uint64_t t113 = 939270508LLU;

    t113 = (x5373+((x5374+x5375)>>x5376));

    if (t113 != 82290LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x5461 = -68021957431663LL;
	int16_t x5462 = INT16_MAX;
	int8_t x5463 = INT8_MIN;

    t114 = (x5461+((x5462+x5463)>>x5464));

    if (t114 != -68021957431656LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x5561 = 37090774U;
	int64_t x5562 = INT64_MAX;
	int16_t x5563 = INT16_MIN;

    t115 = (x5561+((x5562+x5563)>>x5564));

    if (t115 != 576460752340512213LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x5601 = -1;
	int8_t x5602 = -1;
	uint32_t x5603 = 7U;
	volatile int64_t x5604 = 1LL;
	volatile uint32_t t116 = 4457831U;

    t116 = (x5601+((x5602+x5603)>>x5604));

    if (t116 != 2U) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x5610 = 0U;
	static uint64_t x5611 = UINT64_MAX;
	static int16_t x5612 = 1;

    t117 = (x5609+((x5610+x5611)>>x5612));

    if (t117 != 9223372036855772003LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x5637 = INT8_MIN;
	int32_t x5638 = -1;
	volatile int8_t x5639 = INT8_MAX;
	uint32_t x5640 = 1U;
	static int32_t t118 = -3398314;

    t118 = (x5637+((x5638+x5639)>>x5640));

    if (t118 != -65) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x5733 = 48;
	uint16_t x5734 = 28724U;
	static volatile int32_t x5735 = -1;
	uint8_t x5736 = 19U;
	volatile int32_t t119 = 2742;

    t119 = (x5733+((x5734+x5735)>>x5736));

    if (t119 != 48) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x5805 = -363;
	uint8_t x5808 = 0U;

    t120 = (x5805+((x5806+x5807)>>x5808));

    if (t120 != 2157236458U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x5846 = 13213447U;
	int16_t x5847 = INT16_MIN;

    t121 = (x5845+((x5846+x5847)>>x5848));

    if (t121 != 13180826U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x5937 = -1;
	int16_t x5938 = 134;
	uint16_t x5939 = 2672U;
	static uint8_t x5940 = 5U;
	int32_t t122 = -14720;

    t122 = (x5937+((x5938+x5939)>>x5940));

    if (t122 != 86) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x6053 = UINT16_MAX;
	uint32_t x6054 = 0U;
	int8_t x6055 = INT8_MIN;
	volatile int16_t x6056 = 0;

    t123 = (x6053+((x6054+x6055)>>x6056));

    if (t123 != 65407U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x6110 = INT16_MAX;
	int8_t x6111 = -1;
	static int64_t x6112 = 0LL;

    t124 = (x6109+((x6110+x6111)>>x6112));

    if (t124 != 31486) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x6189 = UINT16_MAX;
	volatile uint16_t x6190 = UINT16_MAX;
	uint32_t x6191 = 62988306U;
	int8_t x6192 = 31;

    t125 = (x6189+((x6190+x6191)>>x6192));

    if (t125 != 65535U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x6213 = INT32_MAX;
	int64_t x6214 = 41748967897719LL;
	uint8_t x6216 = 3U;
	int64_t t126 = -2674LL;

    t126 = (x6213+((x6214+x6215)>>x6216));

    if (t126 != 5220768470877LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x6265 = -1;
	static int8_t x6266 = -1;
	uint8_t x6267 = UINT8_MAX;
	int32_t x6268 = 1;
	volatile int32_t t127 = 10960;

    t127 = (x6265+((x6266+x6267)>>x6268));

    if (t127 != 126) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x6341 = 42008;
	uint64_t x6342 = 26592906401829LLU;
	volatile uint32_t x6343 = 93097955U;
	static int8_t x6344 = 8;
	volatile uint64_t t128 = 1733825126LLU;

    t128 = (x6341+((x6342+x6343)>>x6344));

    if (t128 != 103878946304LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x6349 = INT16_MIN;
	int16_t x6350 = -1;
	static uint8_t x6352 = 0U;

    t129 = (x6349+((x6350+x6351)>>x6352));

    if (t129 != 32766) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x6437 = INT64_MAX;
	uint64_t x6438 = UINT64_MAX;
	int32_t x6439 = INT32_MAX;
	uint16_t x6440 = 0U;
	volatile uint64_t t130 = 2877139014844LLU;

    t130 = (x6437+((x6438+x6439)>>x6440));

    if (t130 != 9223372039002259453LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x6453 = -1LL;
	volatile int8_t x6454 = INT8_MIN;
	volatile uint16_t x6455 = 14066U;
	int16_t x6456 = 0;
	static volatile int64_t t131 = -127291LL;

    t131 = (x6453+((x6454+x6455)>>x6456));

    if (t131 != 13937LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x6601 = INT32_MAX;
	uint32_t x6603 = 28469U;
	static int8_t x6604 = 6;
	volatile uint32_t t132 = 478590681U;

    t132 = (x6601+((x6602+x6603)>>x6604));

    if (t132 != 2147484025U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x6617 = 22U;
	static volatile int8_t x6618 = INT8_MIN;
	int32_t x6620 = 0;
	volatile uint32_t t133 = 322U;

    t133 = (x6617+((x6618+x6619)>>x6620));

    if (t133 != 2007877U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x6685 = INT32_MAX;
	static int64_t x6686 = INT64_MAX;
	int8_t x6687 = -1;
	uint64_t x6688 = 38LLU;
	int64_t t134 = -566996914LL;

    t134 = (x6685+((x6686+x6687)>>x6688));

    if (t134 != 2181038078LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x6773 = INT8_MAX;
	static uint32_t x6774 = 359881U;
	uint16_t x6775 = 0U;
	uint8_t x6776 = 15U;

    t135 = (x6773+((x6774+x6775)>>x6776));

    if (t135 != 137U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x6885 = INT8_MAX;
	uint8_t x6886 = UINT8_MAX;
	uint8_t x6887 = UINT8_MAX;
	static uint8_t x6888 = 27U;

    t136 = (x6885+((x6886+x6887)>>x6888));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x6933 = 6U;
	uint16_t x6934 = UINT16_MAX;
	static uint8_t x6935 = 0U;
	uint8_t x6936 = 7U;

    t137 = (x6933+((x6934+x6935)>>x6936));

    if (t137 != 517) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x6953 = 5U;
	int64_t x6954 = INT64_MAX;
	uint64_t x6955 = 18789295LLU;
	uint8_t x6956 = 3U;

    t138 = (x6953+((x6954+x6955)>>x6956));

    if (t138 != 1152921504609195642LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x6977 = 1;
	volatile int32_t x6978 = INT32_MAX;
	uint32_t x6979 = 22838U;
	uint8_t x6980 = 7U;
	volatile uint32_t t139 = 4802040U;

    t139 = (x6977+((x6978+x6979)>>x6980));

    if (t139 != 16777395U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x7037 = 6;
	volatile uint64_t x7038 = 1284LLU;
	int16_t x7039 = INT16_MAX;
	uint8_t x7040 = 5U;
	volatile uint64_t t140 = 0LLU;

    t140 = (x7037+((x7038+x7039)>>x7040));

    if (t140 != 1070LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x7090 = 3351394U;
	int16_t x7091 = INT16_MIN;
	uint8_t x7092 = 16U;
	volatile uint32_t t141 = 6517227U;

    t141 = (x7089+((x7090+x7091)>>x7092));

    if (t141 != 2147483697U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x7097 = 63U;
	int32_t x7098 = INT32_MIN;
	int64_t x7099 = INT64_MAX;
	volatile int8_t x7100 = 45;
	volatile int64_t t142 = -945522LL;

    t142 = (x7097+((x7098+x7099)>>x7100));

    if (t142 != 262206LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x7121 = 39066U;
	uint8_t x7122 = UINT8_MAX;
	uint32_t t143 = 505775151U;

    t143 = (x7121+((x7122+x7123)>>x7124));

    if (t143 != 39257U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x7173 = 31U;
	uint8_t x7174 = 2U;
	volatile int16_t x7175 = INT16_MAX;
	static volatile int32_t t144 = -57;

    t144 = (x7173+((x7174+x7175)>>x7176));

    if (t144 != 543) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x7241 = 87;
	volatile uint16_t x7242 = UINT16_MAX;
	uint8_t x7243 = UINT8_MAX;

    t145 = (x7241+((x7242+x7243)>>x7244));

    if (t145 != 87) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x7301 = 8U;
	int32_t x7302 = -946;
	static volatile int16_t x7303 = INT16_MAX;
	static uint8_t x7304 = 0U;

    t146 = (x7301+((x7302+x7303)>>x7304));

    if (t146 != 31829U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x7313 = INT32_MIN;
	uint32_t x7314 = UINT32_MAX;
	int8_t x7315 = -1;
	uint8_t x7316 = 6U;
	volatile uint32_t t147 = 1U;

    t147 = (x7313+((x7314+x7315)>>x7316));

    if (t147 != 2214592511U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x7466 = 108335LLU;
	uint64_t x7467 = 1806663254546LLU;
	uint8_t x7468 = 46U;
	volatile uint64_t t148 = UINT64_MAX;

    t148 = (x7465+((x7466+x7467)>>x7468));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x7473 = 3U;
	int64_t x7474 = 5564314081LL;
	int64_t x7475 = -1LL;
	uint8_t x7476 = 3U;
	static volatile int64_t t149 = 11568393569LL;

    t149 = (x7473+((x7474+x7475)>>x7476));

    if (t149 != 695539263LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x7513 = 1908;
	volatile int32_t x7515 = 564946621;
	uint64_t x7516 = 1LLU;
	static volatile int32_t t150 = -129925;

    t150 = (x7513+((x7514+x7515)>>x7516));

    if (t150 != 282458834) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x7641 = 0U;
	static int16_t x7642 = INT16_MIN;
	static uint64_t x7643 = 1LLU;
	static uint8_t x7644 = 51U;
	uint64_t t151 = 974722299695765LLU;

    t151 = (x7641+((x7642+x7643)>>x7644));

    if (t151 != 8191LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x7657 = 0;
	static uint64_t x7659 = UINT64_MAX;
	uint8_t x7660 = 1U;
	volatile uint64_t t152 = 303234043994826857LLU;

    t152 = (x7657+((x7658+x7659)>>x7660));

    if (t152 != 1481LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x7877 = UINT64_MAX;
	int32_t x7878 = 3427;
	uint8_t x7879 = 4U;
	uint32_t x7880 = 25U;
	uint64_t t153 = UINT64_MAX;

    t153 = (x7877+((x7878+x7879)>>x7880));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x7910 = -7LL;
	int64_t x7911 = INT64_MAX;
	uint32_t x7912 = 1U;
	static int64_t t154 = 10LL;

    t154 = (x7909+((x7910+x7911)>>x7912));

    if (t154 != 4611686018427387901LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x7965 = INT16_MIN;
	static uint16_t x7966 = UINT16_MAX;
	int32_t x7967 = -1;
	static uint32_t x7968 = 30U;
	int32_t t155 = -158379;

    t155 = (x7965+((x7966+x7967)>>x7968));

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x7977 = 183U;
	volatile uint8_t x7978 = 12U;
	static uint64_t x7979 = 30834LLU;
	static volatile int8_t x7980 = 49;
	volatile uint64_t t156 = 32259LLU;

    t156 = (x7977+((x7978+x7979)>>x7980));

    if (t156 != 183LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x8038 = 5997211;
	static int16_t x8039 = INT16_MAX;

    t157 = (x8037+((x8038+x8039)>>x8040));

    if (t157 != 3014990) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x8041 = 488158477U;
	int8_t x8042 = INT8_MIN;
	static volatile uint32_t x8043 = 761800U;
	uint8_t x8044 = 1U;
	volatile uint32_t t158 = 879282789U;

    t158 = (x8041+((x8042+x8043)>>x8044));

    if (t158 != 488539313U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x8109 = -1;
	static uint32_t x8110 = UINT32_MAX;
	int32_t x8111 = -1;
	volatile uint32_t t159 = 4583U;

    t159 = (x8109+((x8110+x8111)>>x8112));

    if (t159 != 131070U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x8133 = -456;
	int32_t x8134 = INT32_MIN;
	volatile uint32_t x8135 = 330U;
	int16_t x8136 = 0;
	static volatile uint32_t t160 = 11500136U;

    t160 = (x8133+((x8134+x8135)>>x8136));

    if (t160 != 2147483522U) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x8150 = -7;

    t161 = (x8149+((x8150+x8151)>>x8152));

    if (t161 != 4294967217U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x8198 = -1LL;
	static int8_t x8200 = 1;
	volatile int64_t t162 = -486229LL;

    t162 = (x8197+((x8198+x8199)>>x8200));

    if (t162 != 32768LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x8205 = 0LL;
	uint8_t x8207 = 1U;
	volatile int32_t x8208 = 18;
	volatile int64_t t163 = -43779467384120106LL;

    t163 = (x8205+((x8206+x8207)>>x8208));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x8293 = INT8_MAX;
	static uint64_t x8294 = 128265980255424309LLU;
	volatile int8_t x8295 = 15;
	uint16_t x8296 = 2U;

    t164 = (x8293+((x8294+x8295)>>x8296));

    if (t164 != 32066495063856208LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x8365 = -1;
	uint32_t x8366 = 185366U;
	int32_t x8367 = INT32_MIN;
	uint64_t x8368 = 3LLU;
	volatile uint32_t t165 = 1U;

    t165 = (x8365+((x8366+x8367)>>x8368));

    if (t165 != 268458625U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x8393 = -1LL;
	int64_t x8394 = 3588057632768236516LL;
	int16_t x8395 = INT16_MIN;
	uint8_t x8396 = 5U;
	volatile int64_t t166 = -2LL;

    t166 = (x8393+((x8394+x8395)>>x8396));

    if (t166 != 112126801024006366LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x8465 = -1LL;
	uint16_t x8466 = 29636U;
	int64_t x8467 = -25664LL;
	uint16_t x8468 = 0U;
	volatile int64_t t167 = -978270233299169LL;

    t167 = (x8465+((x8466+x8467)>>x8468));

    if (t167 != 3971LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x8493 = 20263U;
	volatile uint32_t x8494 = 3U;
	int32_t x8495 = INT32_MAX;
	uint16_t x8496 = 29U;

    t168 = (x8493+((x8494+x8495)>>x8496));

    if (t168 != 20267U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x8530 = 2U;
	static int8_t x8531 = -1;
	int32_t x8532 = 29;
	static int64_t t169 = 3169902424LL;

    t169 = (x8529+((x8530+x8531)>>x8532));

    if (t169 != 19199281729110980LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x8573 = -511927206533491356LL;
	int16_t x8574 = INT16_MAX;
	static int16_t x8575 = -1;
	uint16_t x8576 = 11U;
	int64_t t170 = -8398LL;

    t170 = (x8573+((x8574+x8575)>>x8576));

    if (t170 != -511927206533491341LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x8746 = 165;
	volatile uint32_t x8747 = UINT32_MAX;
	uint8_t x8748 = 21U;
	static volatile uint32_t t171 = 48U;

    t171 = (x8745+((x8746+x8747)>>x8748));

    if (t171 != 381U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x8757 = INT8_MIN;
	uint16_t x8758 = UINT16_MAX;
	volatile uint16_t x8760 = 0U;
	int32_t t172 = -1;

    t172 = (x8757+((x8758+x8759)>>x8760));

    if (t172 != 65406) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x8861 = 12884;
	volatile uint16_t x8863 = 58U;
	uint8_t x8864 = 13U;
	uint64_t t173 = 6519LLU;

    t173 = (x8861+((x8862+x8863)>>x8864));

    if (t173 != 615521LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x8865 = INT32_MIN;
	static volatile uint64_t x8867 = UINT64_MAX;

    t174 = (x8865+((x8866+x8867)>>x8868));

    if (t174 != 18446744071562133502LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x8894 = 885267U;
	static uint16_t x8895 = 415U;
	int8_t x8896 = 0;
	volatile int64_t t175 = 1LL;

    t175 = (x8893+((x8894+x8895)>>x8896));

    if (t175 != -9223372036853890126LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x8914 = UINT16_MAX;
	int16_t x8915 = -460;
	uint32_t x8916 = 1U;
	static volatile int64_t t176 = 33720611192053LL;

    t176 = (x8913+((x8914+x8915)>>x8916));

    if (t176 != -9223372036854743271LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x8929 = INT64_MAX;
	static uint16_t x8931 = UINT16_MAX;
	int8_t x8932 = 20;
	int64_t t177 = INT64_MAX;

    t177 = (x8929+((x8930+x8931)>>x8932));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x8989 = 1093953U;
	volatile int8_t x8991 = INT8_MAX;
	uint64_t t178 = 133372068506598LLU;

    t178 = (x8989+((x8990+x8991)>>x8992));

    if (t178 != 1093953LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x9037 = UINT16_MAX;
	volatile int8_t x9038 = 16;
	static volatile int64_t x9039 = -1LL;
	static int16_t x9040 = 16;
	volatile int64_t t179 = -67LL;

    t179 = (x9037+((x9038+x9039)>>x9040));

    if (t179 != 65535LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x9061 = INT8_MIN;
	int16_t x9062 = -6;
	uint32_t x9063 = 572866U;
	uint16_t x9064 = 17U;
	uint32_t t180 = 17765U;

    t180 = (x9061+((x9062+x9063)>>x9064));

    if (t180 != 4294967172U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x9126 = 1U;
	int16_t x9127 = 1;
	uint64_t x9128 = 24LLU;
	volatile int32_t t181 = 0;

    t181 = (x9125+((x9126+x9127)>>x9128));

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x9201 = INT32_MIN;
	int32_t x9203 = INT32_MAX;
	volatile int16_t x9204 = 0;
	static int32_t t182 = 117866382;

    t182 = (x9201+((x9202+x9203)>>x9204));

    if (t182 != -114249) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x9309 = INT8_MIN;
	uint32_t x9310 = UINT32_MAX;
	int8_t x9311 = 18;
	int8_t x9312 = 25;
	volatile uint32_t t183 = 8U;

    t183 = (x9309+((x9310+x9311)>>x9312));

    if (t183 != 4294967168U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x9389 = UINT32_MAX;
	int8_t x9392 = 0;
	uint32_t t184 = 1636U;

    t184 = (x9389+((x9390+x9391)>>x9392));

    if (t184 != 239523U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x9513 = 21775671LLU;
	uint8_t x9515 = UINT8_MAX;
	static uint64_t x9516 = 16LLU;
	volatile uint64_t t185 = 56162317937952LLU;

    t185 = (x9513+((x9514+x9515)>>x9516));

    if (t185 != 21775671LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x9581 = 4U;
	static volatile uint64_t x9582 = 4960394LLU;
	static int16_t x9583 = -1;
	int16_t x9584 = 22;
	uint64_t t186 = 38043LLU;

    t186 = (x9581+((x9582+x9583)>>x9584));

    if (t186 != 5LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x9693 = INT64_MAX;
	static int8_t x9694 = -1;
	volatile uint8_t x9695 = 30U;
	static int64_t t187 = INT64_MAX;

    t187 = (x9693+((x9694+x9695)>>x9696));

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x9713 = INT16_MIN;
	uint32_t x9715 = 152U;
	volatile uint16_t x9716 = 0U;
	static uint32_t t188 = 5794U;

    t188 = (x9713+((x9714+x9715)>>x9716));

    if (t188 != 32919U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t t189 = 11914;

    t189 = (x9777+((x9778+x9779)>>x9780));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x9813 = 2LLU;
	int8_t x9814 = INT8_MAX;
	uint16_t x9816 = 0U;
	volatile uint64_t t190 = 209317077411329LLU;

    t190 = (x9813+((x9814+x9815)>>x9816));

    if (t190 != 128LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x9825 = INT8_MIN;
	uint32_t x9826 = UINT32_MAX;
	int16_t x9828 = 11;
	static uint32_t t191 = 2338U;

    t191 = (x9825+((x9826+x9827)>>x9828));

    if (t191 != 4294967168U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x9929 = 6;
	volatile int64_t x9930 = -1LL;
	int16_t x9931 = 10;
	volatile int16_t x9932 = 1;
	volatile int64_t t192 = -506135LL;

    t192 = (x9929+((x9930+x9931)>>x9932));

    if (t192 != 10LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x10001 = INT64_MIN;
	int8_t x10002 = 29;
	int16_t x10004 = 2;
	int64_t t193 = 12021600363403180LL;

    t193 = (x10001+((x10002+x10003)>>x10004));

    if (t193 != -9223372036854758444LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x10025 = INT32_MIN;
	uint8_t x10026 = UINT8_MAX;
	uint64_t x10027 = 258055542430LLU;
	static uint8_t x10028 = 2U;
	uint64_t t194 = 9074701960464541596LLU;

    t194 = (x10025+((x10026+x10027)>>x10028));

    if (t194 != 62366402023LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x10251 = 53U;
	static uint16_t x10252 = 22U;

    t195 = (x10249+((x10250+x10251)>>x10252));

    if (t195 != 4294967168U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x10273 = 6187;
	int32_t x10274 = 88335952;
	int8_t x10275 = 1;
	uint16_t x10276 = 18U;
	int32_t t196 = -598062888;

    t196 = (x10273+((x10274+x10275)>>x10276));

    if (t196 != 6523) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x10317 = INT16_MIN;
	uint16_t x10318 = 204U;
	static uint16_t x10319 = 82U;
	int16_t x10320 = 1;
	int32_t t197 = -84713;

    t197 = (x10317+((x10318+x10319)>>x10320));

    if (t197 != -32625) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x10461 = UINT32_MAX;
	int32_t x10462 = -1;
	static int8_t x10463 = INT8_MAX;
	volatile uint32_t t198 = UINT32_MAX;

    t198 = (x10461+((x10462+x10463)>>x10464));

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x10525 = INT16_MIN;
	uint64_t x10526 = 593LLU;
	uint64_t x10527 = 4641467556656787530LLU;
	static int8_t x10528 = 19;
	uint64_t t199 = 3526LLU;

    t199 = (x10525+((x10526+x10527)>>x10528));

    if (t199 != 8852896765664LLU) { NG(); } else { ; }
	
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

