
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

static volatile int16_t x31 = -1;
int8_t x45 = INT8_MAX;
volatile uint16_t x75 = 17827U;
uint32_t x76 = 1U;
int16_t x82 = INT16_MIN;
uint8_t x93 = 57U;
volatile int64_t t6 = INT64_MAX;
int16_t x175 = INT16_MAX;
int32_t t7 = -239021169;
static int8_t x242 = 1;
static volatile uint8_t x279 = 2U;
static uint32_t x339 = 266U;
volatile uint64_t x381 = 1255077956LLU;
uint64_t t14 = 122995LLU;
int8_t x470 = 0;
int64_t x472 = INT64_MAX;
int32_t t16 = -2261;
volatile uint64_t x501 = 109757LLU;
volatile uint64_t t17 = 2608448377012131LLU;
volatile int8_t x605 = 1;
int8_t x607 = INT8_MAX;
int32_t x610 = -119;
static int64_t x611 = -156901341893401LL;
volatile uint64_t x687 = 29938074289400LLU;
static int8_t x718 = -1;
static uint16_t x729 = 196U;
int8_t x816 = INT8_MAX;
volatile uint64_t x822 = 443LLU;
int32_t x879 = -1;
uint64_t t32 = 1718LLU;
int32_t t34 = 747;
static uint32_t x1183 = 69676830U;
static uint64_t x1257 = 33504835964LLU;
static volatile int32_t t37 = 101;
uint8_t x1330 = 0U;
volatile int64_t t38 = 156876197LL;
uint64_t x1414 = 45LLU;
int8_t x1416 = INT8_MIN;
volatile uint32_t t40 = 1U;
uint16_t x1437 = UINT16_MAX;
uint8_t x1441 = 34U;
int32_t x1442 = 14;
int64_t x1523 = INT64_MAX;
uint16_t x1524 = 7U;
static uint8_t x1549 = 0U;
int32_t x1551 = 823;
int8_t x1574 = 5;
int32_t t48 = -348;
int32_t x1638 = INT32_MIN;
static int32_t x1659 = -1;
volatile uint8_t x1715 = 7U;
static volatile int32_t t52 = 38023749;
uint16_t x1738 = 45U;
int32_t x1740 = -1;
uint8_t x1763 = 10U;
int16_t x1786 = INT16_MAX;
volatile int16_t x1787 = INT16_MAX;
static volatile int32_t t56 = -71774692;
static volatile uint64_t x1813 = 137269365932390LLU;
volatile int32_t x1823 = 1;
int32_t t59 = 196182620;
int8_t x1838 = 0;
int32_t t60 = INT32_MAX;
int16_t x1890 = 3830;
uint64_t x1897 = 3997189818LLU;
uint32_t x1911 = UINT32_MAX;
uint16_t x1912 = 16U;
static int16_t x1926 = INT16_MIN;
static int32_t t64 = -29945451;
uint8_t x1961 = 33U;
int32_t x1964 = INT32_MAX;
volatile uint8_t x2041 = 34U;
volatile int32_t t69 = -1;
int32_t x2169 = 47569;
uint64_t x2177 = 25250018111LLU;
static int16_t x2179 = INT16_MIN;
volatile int32_t t73 = 17841981;
int64_t x2282 = 338822LL;
int64_t x2302 = INT64_MIN;
int16_t x2304 = -1;
int8_t x2313 = 2;
int32_t t76 = 3331016;
int64_t x2392 = -1LL;
int64_t t79 = -247564649472858102LL;
int8_t x2430 = INT8_MAX;
static int32_t t81 = -30;
static int64_t x2467 = 32476789788LL;
volatile int32_t t82 = -21218;
uint32_t x2497 = 786U;
uint32_t x2510 = 15U;
int8_t x2511 = INT8_MIN;
volatile int16_t x2552 = -43;
volatile uint8_t x2605 = UINT8_MAX;
uint16_t x2621 = 1738U;
uint16_t x2623 = UINT16_MAX;
uint32_t x2669 = 12723U;
uint32_t x2714 = 1U;
static int32_t t91 = -4;
int32_t x2742 = 31997;
volatile uint32_t t95 = 3091U;
volatile int64_t x2800 = INT64_MAX;
static int32_t x2845 = INT32_MAX;
int32_t t98 = 13;
int16_t x2851 = -1;
volatile int32_t t100 = 127655;
uint64_t x2959 = 15LLU;
uint64_t x2984 = UINT64_MAX;
static uint64_t x3042 = 2706908803568991849LLU;
volatile uint8_t x3043 = UINT8_MAX;
static int32_t x3052 = INT32_MAX;
volatile int32_t t107 = 4297;
int32_t x3104 = -1;
int32_t x3158 = INT32_MAX;
static int8_t x3270 = -1;
static int8_t x3281 = 6;
int32_t t114 = -1;
uint8_t x3341 = 0U;
uint32_t x3449 = UINT32_MAX;
volatile int8_t x3494 = 7;
volatile int32_t x3556 = -1;
uint16_t x3565 = 94U;
static uint8_t x3567 = 23U;
volatile int64_t x3607 = 260819215115920LL;
uint8_t x3608 = 5U;
static volatile uint16_t x3617 = 1425U;
int8_t x3620 = -10;
int8_t x3651 = -3;
static int32_t x3681 = 101;
int64_t x3682 = 17024230257110LL;
volatile int32_t t128 = -135452882;
uint32_t x3702 = 28U;
uint64_t x3703 = UINT64_MAX;
static uint8_t x3722 = 5U;
volatile int16_t x3724 = -26;
uint16_t x3754 = 8U;
static uint16_t x3797 = 1341U;
static int16_t x3799 = INT16_MAX;
volatile int8_t x3805 = INT8_MAX;
int16_t x3808 = -1;
int32_t x3848 = 21064385;
volatile int64_t x3891 = 260560LL;
static uint8_t x3894 = 2U;
uint32_t x3929 = 127U;
uint8_t x3930 = 2U;
int16_t x3932 = -1;
static volatile uint32_t t139 = 12688249U;
static volatile uint16_t x4046 = 11220U;
static uint32_t x4047 = 452145U;
int32_t t141 = 13870;
uint16_t x4073 = UINT16_MAX;
int16_t x4074 = 12515;
uint64_t t145 = 26849LLU;
static int8_t x4360 = 63;
int32_t t148 = -214;
static uint16_t x4410 = UINT16_MAX;
int16_t x4411 = 1;
uint16_t x4412 = UINT16_MAX;
volatile int64_t t149 = 1861382820LL;
static int32_t x4419 = -5;
static volatile int32_t t150 = 1;
int16_t x4427 = 45;
uint64_t t156 = 9049988248454236735LLU;
uint16_t x4638 = 31200U;
static volatile uint32_t x4640 = 15U;
int8_t x4668 = -17;
int8_t x4755 = INT8_MIN;
volatile uint64_t t161 = 32LLU;
volatile int8_t x4850 = 1;
int16_t x4851 = 3;
uint32_t x4879 = UINT32_MAX;
volatile int16_t x4880 = INT16_MAX;
int8_t x4883 = 46;
static volatile uint64_t x5013 = 0LLU;
int16_t x5017 = 7744;
uint64_t x5029 = UINT64_MAX;
volatile int64_t x5045 = INT64_MAX;
static uint32_t x5047 = UINT32_MAX;
int16_t x5048 = INT16_MIN;
uint16_t x5079 = 1U;
static int32_t x5091 = INT32_MAX;
static int32_t x5098 = -6430378;
uint32_t x5122 = UINT32_MAX;
int64_t x5150 = -1LL;
int16_t x5152 = INT16_MAX;
static uint8_t x5157 = UINT8_MAX;
uint16_t x5158 = 9U;
volatile uint16_t x5210 = 0U;
uint32_t x5251 = 421873889U;
static int16_t x5294 = INT16_MIN;
volatile int64_t x5310 = -1LL;
volatile uint8_t x5320 = 6U;
uint32_t t186 = 74064090U;
static volatile int64_t x5337 = INT64_MAX;
static uint16_t x5338 = 34U;
volatile uint32_t t188 = 44244066U;
int16_t x5361 = 760;
uint16_t x5366 = UINT16_MAX;
static uint32_t x5431 = 5700U;
int8_t x5479 = INT8_MIN;
uint64_t t195 = 3055736010812502LLU;
volatile uint64_t t196 = 2550391550LLU;
volatile int32_t x5706 = -1;


void f0(void) {
    	volatile uint32_t x1 = UINT32_MAX;
	volatile uint64_t x2 = UINT64_MAX;
	int16_t x3 = INT16_MIN;
	int8_t x4 = 40;
	static uint32_t t0 = 369790077U;

    t0 = (x1>>((x2+x3)%x4));

    if (t0 != 33554431U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x29 = 6180U;
	volatile int8_t x30 = INT8_MIN;
	volatile uint8_t x32 = 3U;
	volatile int32_t t1 = -16;

    t1 = (x29>>((x30+x31)%x32));

    if (t1 != 6180) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x46 = -1019161223LL;
	int64_t x47 = 178294841LL;
	static int8_t x48 = 1;
	volatile int32_t t2 = -15614625;

    t2 = (x45>>((x46+x47)%x48));

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x73 = 2LLU;
	volatile uint64_t x74 = 3549420889LLU;
	volatile uint64_t t3 = 94714707669089378LLU;

    t3 = (x73>>((x74+x75)%x76));

    if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x81 = UINT64_MAX;
	static int64_t x83 = -1100829255534392LL;
	volatile int16_t x84 = -1;
	uint64_t t4 = UINT64_MAX;

    t4 = (x81>>((x82+x83)%x84));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x94 = -1;
	uint32_t x95 = 83990U;
	int8_t x96 = 7;
	static int32_t t5 = 5501;

    t5 = (x93>>((x94+x95)%x96));

    if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x117 = INT64_MAX;
	volatile int64_t x118 = 79LL;
	uint32_t x119 = 2U;
	uint8_t x120 = 1U;

    t6 = (x117>>((x118+x119)%x120));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x173 = INT16_MAX;
	int64_t x174 = -386LL;
	uint8_t x176 = 9U;

    t7 = (x173>>((x174+x175)%x176));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x193 = 1;
	uint8_t x194 = 0U;
	int64_t x195 = INT64_MAX;
	int64_t x196 = -14LL;
	volatile int32_t t8 = -3;

    t8 = (x193>>((x194+x195)%x196));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x233 = UINT8_MAX;
	static int8_t x234 = INT8_MIN;
	volatile uint8_t x235 = UINT8_MAX;
	int64_t x236 = -1LL;
	int32_t t9 = -20739308;

    t9 = (x233>>((x234+x235)%x236));

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x241 = 5854U;
	uint64_t x243 = UINT64_MAX;
	static uint16_t x244 = 1673U;
	int32_t t10 = -166181;

    t10 = (x241>>((x242+x243)%x244));

    if (t10 != 5854) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x277 = 119U;
	int16_t x278 = -1;
	int8_t x280 = INT8_MIN;
	volatile int32_t t11 = 144;

    t11 = (x277>>((x278+x279)%x280));

    if (t11 != 59) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x337 = 34U;
	volatile int32_t x338 = INT32_MIN;
	uint64_t x340 = 9LLU;
	static volatile int32_t t12 = -441;

    t12 = (x337>>((x338+x339)%x340));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x382 = -1;
	volatile uint8_t x383 = 7U;
	uint8_t x384 = UINT8_MAX;
	volatile uint64_t t13 = 149038LLU;

    t13 = (x381>>((x382+x383)%x384));

    if (t13 != 19610593LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x461 = 25334659533772LLU;
	volatile int8_t x462 = 49;
	uint8_t x463 = UINT8_MAX;
	int16_t x464 = -1;

    t14 = (x461>>((x462+x463)%x464));

    if (t14 != 25334659533772LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x469 = 486125298;
	uint8_t x471 = 20U;
	volatile int32_t t15 = 42306777;

    t15 = (x469>>((x470+x471)%x472));

    if (t15 != 463) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x489 = UINT8_MAX;
	int16_t x490 = -1;
	static int16_t x491 = -51;
	static uint64_t x492 = 46LLU;

    t16 = (x489>>((x490+x491)%x492));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x502 = -54;
	int8_t x503 = INT8_MIN;
	uint64_t x504 = 457LLU;

    t17 = (x501>>((x502+x503)%x504));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x517 = 17;
	static int8_t x518 = INT8_MIN;
	static int64_t x519 = 347640467618967851LL;
	int8_t x520 = -41;
	int32_t t18 = 615745641;

    t18 = (x517>>((x518+x519)%x520));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x606 = -115;
	int32_t x608 = -1;
	int32_t t19 = 7326203;

    t19 = (x605>>((x606+x607)%x608));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x609 = INT16_MAX;
	int32_t x612 = -5;
	int32_t t20 = 186813662;

    t20 = (x609>>((x610+x611)%x612));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x681 = 5923U;
	int16_t x682 = INT16_MAX;
	uint8_t x683 = 0U;
	volatile int16_t x684 = -1;
	uint32_t t21 = 863049920U;

    t21 = (x681>>((x682+x683)%x684));

    if (t21 != 5923U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x685 = 2U;
	volatile int8_t x686 = INT8_MAX;
	int16_t x688 = 2;
	volatile int32_t t22 = 129568;

    t22 = (x685>>((x686+x687)%x688));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x697 = 45;
	int32_t x698 = 4483594;
	int16_t x699 = -19;
	uint8_t x700 = 1U;
	int32_t t23 = 243;

    t23 = (x697>>((x698+x699)%x700));

    if (t23 != 45) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x717 = 32496408;
	uint8_t x719 = 2U;
	static int16_t x720 = -55;
	static volatile int32_t t24 = -848;

    t24 = (x717>>((x718+x719)%x720));

    if (t24 != 16248204) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x730 = INT16_MIN;
	int16_t x731 = -1;
	static int8_t x732 = 1;
	int32_t t25 = -95286686;

    t25 = (x729>>((x730+x731)%x732));

    if (t25 != 196) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x773 = INT32_MAX;
	static uint64_t x774 = 12LLU;
	int16_t x775 = 19;
	int64_t x776 = INT64_MIN;
	volatile int32_t t26 = -2105;

    t26 = (x773>>((x774+x775)%x776));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x813 = 0LLU;
	uint32_t x814 = 0U;
	int8_t x815 = INT8_MAX;
	uint64_t t27 = 1343LLU;

    t27 = (x813>>((x814+x815)%x816));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x821 = INT8_MAX;
	volatile int32_t x823 = INT32_MIN;
	volatile uint8_t x824 = 52U;
	int32_t t28 = -28033;

    t28 = (x821>>((x822+x823)%x824));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x877 = 7373652007254LL;
	int8_t x878 = -1;
	int8_t x880 = -1;
	volatile int64_t t29 = 27727LL;

    t29 = (x877>>((x878+x879)%x880));

    if (t29 != 7373652007254LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x897 = 334882LLU;
	int32_t x898 = INT32_MIN;
	int64_t x899 = 1LL;
	int16_t x900 = -1;
	static uint64_t t30 = 678723252651822021LLU;

    t30 = (x897>>((x898+x899)%x900));

    if (t30 != 334882LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x929 = 14;
	int32_t x930 = INT32_MAX;
	static int16_t x931 = -1;
	int8_t x932 = -1;
	static volatile int32_t t31 = -988509;

    t31 = (x929>>((x930+x931)%x932));

    if (t31 != 14) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x945 = 32369920521248052LLU;
	int16_t x946 = -1;
	uint64_t x947 = 4443689LLU;
	uint32_t x948 = 15U;

    t32 = (x945>>((x946+x947)%x948));

    if (t32 != 3951406313628LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1049 = INT64_MAX;
	int32_t x1050 = 14;
	static int16_t x1051 = INT16_MAX;
	static int8_t x1052 = INT8_MAX;
	volatile int64_t t33 = -2608276061LL;

    t33 = (x1049>>((x1050+x1051)%x1052));

    if (t33 != 281474976710655LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x1101 = UINT8_MAX;
	int8_t x1102 = INT8_MAX;
	uint8_t x1103 = 24U;
	volatile int8_t x1104 = -23;

    t34 = (x1101>>((x1102+x1103)%x1104));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x1181 = 657U;
	volatile int8_t x1182 = INT8_MIN;
	int64_t x1184 = -1LL;
	uint32_t t35 = 387621U;

    t35 = (x1181>>((x1182+x1183)%x1184));

    if (t35 != 657U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x1258 = -1;
	static int32_t x1259 = INT32_MAX;
	int64_t x1260 = -50LL;
	static uint64_t t36 = 16477092658663444LLU;

    t36 = (x1257>>((x1258+x1259)%x1260));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x1297 = INT8_MAX;
	uint32_t x1298 = 399U;
	int32_t x1299 = 105070024;
	uint16_t x1300 = 1U;

    t37 = (x1297>>((x1298+x1299)%x1300));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x1329 = 194215675045327LL;
	uint32_t x1331 = 1U;
	static uint32_t x1332 = 87491291U;

    t38 = (x1329>>((x1330+x1331)%x1332));

    if (t38 != 97107837522663LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1413 = INT64_MAX;
	int8_t x1415 = -1;
	volatile int64_t t39 = 17LL;

    t39 = (x1413>>((x1414+x1415)%x1416));

    if (t39 != 524287LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x1421 = 6U;
	uint32_t x1422 = 459549U;
	uint8_t x1423 = 3U;
	uint16_t x1424 = 38U;

    t40 = (x1421>>((x1422+x1423)%x1424));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x1438 = INT32_MIN;
	uint8_t x1439 = 1U;
	int8_t x1440 = -1;
	static volatile int32_t t41 = 71220;

    t41 = (x1437>>((x1438+x1439)%x1440));

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x1443 = UINT16_MAX;
	uint16_t x1444 = 1U;
	int32_t t42 = 58075;

    t42 = (x1441>>((x1442+x1443)%x1444));

    if (t42 != 34) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x1497 = 4U;
	volatile int32_t x1498 = INT32_MAX;
	static uint32_t x1499 = 2484U;
	uint8_t x1500 = 7U;
	int32_t t43 = 0;

    t43 = (x1497>>((x1498+x1499)%x1500));

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x1517 = 14;
	int16_t x1518 = 0;
	int16_t x1519 = INT16_MIN;
	volatile int16_t x1520 = -1;
	volatile int32_t t44 = 104311;

    t44 = (x1517>>((x1518+x1519)%x1520));

    if (t44 != 14) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x1521 = 5837U;
	uint8_t x1522 = 0U;
	static volatile int32_t t45 = 464;

    t45 = (x1521>>((x1522+x1523)%x1524));

    if (t45 != 5837) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x1545 = INT64_MAX;
	uint8_t x1546 = 2U;
	int8_t x1547 = INT8_MIN;
	int8_t x1548 = 1;
	int64_t t46 = INT64_MAX;

    t46 = (x1545>>((x1546+x1547)%x1548));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x1550 = INT16_MAX;
	uint32_t x1552 = 173U;
	int32_t t47 = -31113383;

    t47 = (x1549>>((x1550+x1551)%x1552));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x1573 = 11;
	volatile uint32_t x1575 = 158102682U;
	uint8_t x1576 = 11U;

    t48 = (x1573>>((x1574+x1575)%x1576));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x1637 = 62U;
	static uint64_t x1639 = UINT64_MAX;
	int32_t x1640 = 1;
	volatile int32_t t49 = -66742;

    t49 = (x1637>>((x1638+x1639)%x1640));

    if (t49 != 62) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x1657 = 13;
	uint32_t x1658 = 2U;
	volatile int8_t x1660 = INT8_MIN;
	static volatile int32_t t50 = 11137110;

    t50 = (x1657>>((x1658+x1659)%x1660));

    if (t50 != 6) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x1713 = 2387LL;
	int32_t x1714 = INT32_MIN;
	static volatile int8_t x1716 = -1;
	static volatile int64_t t51 = -14198LL;

    t51 = (x1713>>((x1714+x1715)%x1716));

    if (t51 != 2387LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x1721 = 1900U;
	uint64_t x1722 = UINT64_MAX;
	int8_t x1723 = 1;
	int32_t x1724 = INT32_MIN;

    t52 = (x1721>>((x1722+x1723)%x1724));

    if (t52 != 1900) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x1737 = INT8_MAX;
	uint8_t x1739 = 4U;
	volatile int32_t t53 = 125076850;

    t53 = (x1737>>((x1738+x1739)%x1740));

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x1757 = INT8_MAX;
	int8_t x1758 = INT8_MIN;
	static volatile int32_t x1759 = -957128200;
	int16_t x1760 = -1;
	volatile int32_t t54 = -160;

    t54 = (x1757>>((x1758+x1759)%x1760));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x1761 = INT64_MAX;
	int8_t x1762 = -3;
	uint16_t x1764 = UINT16_MAX;
	volatile int64_t t55 = 62LL;

    t55 = (x1761>>((x1762+x1763)%x1764));

    if (t55 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x1785 = 1U;
	static int8_t x1788 = -1;

    t56 = (x1785>>((x1786+x1787)%x1788));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x1805 = 3U;
	int16_t x1806 = INT16_MIN;
	volatile int16_t x1807 = INT16_MAX;
	volatile int8_t x1808 = -1;
	volatile int32_t t57 = 12614271;

    t57 = (x1805>>((x1806+x1807)%x1808));

    if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x1814 = INT64_MIN;
	volatile int64_t x1815 = 221729597LL;
	int64_t x1816 = -1LL;
	volatile uint64_t t58 = 1LLU;

    t58 = (x1813>>((x1814+x1815)%x1816));

    if (t58 != 137269365932390LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x1821 = UINT16_MAX;
	static volatile uint32_t x1822 = UINT32_MAX;
	static int8_t x1824 = -52;

    t59 = (x1821>>((x1822+x1823)%x1824));

    if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x1837 = INT32_MAX;
	uint32_t x1839 = 0U;
	int8_t x1840 = -1;

    t60 = (x1837>>((x1838+x1839)%x1840));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x1889 = 104962LLU;
	int8_t x1891 = INT8_MAX;
	int64_t x1892 = -1LL;
	uint64_t t61 = 8014248911955LLU;

    t61 = (x1889>>((x1890+x1891)%x1892));

    if (t61 != 104962LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x1898 = INT32_MIN;
	volatile uint8_t x1899 = 0U;
	int8_t x1900 = -1;
	uint64_t t62 = 395770131532LLU;

    t62 = (x1897>>((x1898+x1899)%x1900));

    if (t62 != 3997189818LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x1909 = 6666U;
	int16_t x1910 = 1;
	volatile int32_t t63 = 7259527;

    t63 = (x1909>>((x1910+x1911)%x1912));

    if (t63 != 6666) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x1925 = UINT16_MAX;
	int16_t x1927 = INT16_MIN;
	int64_t x1928 = -1LL;

    t64 = (x1925>>((x1926+x1927)%x1928));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x1962 = UINT32_MAX;
	static volatile uint64_t x1963 = UINT64_MAX;
	volatile int32_t t65 = -2170;

    t65 = (x1961>>((x1962+x1963)%x1964));

    if (t65 != 33) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint16_t x2025 = 7U;
	int8_t x2026 = INT8_MAX;
	uint32_t x2027 = 7843160U;
	volatile uint16_t x2028 = 1U;
	int32_t t66 = -226384;

    t66 = (x2025>>((x2026+x2027)%x2028));

    if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x2042 = INT16_MIN;
	uint8_t x2043 = 7U;
	int64_t x2044 = -1LL;
	volatile int32_t t67 = 3162246;

    t67 = (x2041>>((x2042+x2043)%x2044));

    if (t67 != 34) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x2085 = INT8_MAX;
	int64_t x2086 = -1LL;
	int16_t x2087 = INT16_MIN;
	int16_t x2088 = -1;
	int32_t t68 = -7253;

    t68 = (x2085>>((x2086+x2087)%x2088));

    if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x2097 = 30;
	int8_t x2098 = -1;
	static int16_t x2099 = INT16_MIN;
	int16_t x2100 = -1;

    t69 = (x2097>>((x2098+x2099)%x2100));

    if (t69 != 30) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x2117 = INT32_MAX;
	int32_t x2118 = -443;
	volatile int64_t x2119 = -19045LL;
	int32_t x2120 = -1;
	int32_t t70 = INT32_MAX;

    t70 = (x2117>>((x2118+x2119)%x2120));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x2170 = 4U;
	uint16_t x2171 = UINT16_MAX;
	int16_t x2172 = INT16_MIN;
	int32_t t71 = -16;

    t71 = (x2169>>((x2170+x2171)%x2172));

    if (t71 != 5946) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2178 = -1;
	volatile int8_t x2180 = -9;
	static uint64_t t72 = 1LLU;

    t72 = (x2177>>((x2178+x2179)%x2180));

    if (t72 != 25250018111LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x2253 = 15;
	int32_t x2254 = -1;
	uint8_t x2255 = 58U;
	int32_t x2256 = -1;

    t73 = (x2253>>((x2254+x2255)%x2256));

    if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x2281 = INT8_MAX;
	static int8_t x2283 = INT8_MIN;
	volatile int8_t x2284 = -3;
	int32_t t74 = 54295;

    t74 = (x2281>>((x2282+x2283)%x2284));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x2301 = UINT8_MAX;
	int64_t x2303 = INT64_MAX;
	static volatile int32_t t75 = -4340593;

    t75 = (x2301>>((x2302+x2303)%x2304));

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x2314 = INT64_MAX;
	static int16_t x2315 = -1;
	volatile uint8_t x2316 = 1U;

    t76 = (x2313>>((x2314+x2315)%x2316));

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x2389 = 461451620U;
	uint8_t x2390 = 5U;
	int32_t x2391 = -1;
	volatile uint32_t t77 = 293429638U;

    t77 = (x2389>>((x2390+x2391)%x2392));

    if (t77 != 461451620U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x2393 = UINT32_MAX;
	int32_t x2394 = INT32_MIN;
	static volatile uint8_t x2395 = 17U;
	int32_t x2396 = -1;
	volatile uint32_t t78 = UINT32_MAX;

    t78 = (x2393>>((x2394+x2395)%x2396));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x2417 = INT64_MAX;
	int64_t x2418 = 511LL;
	volatile uint64_t x2419 = 89564515LLU;
	int8_t x2420 = 3;

    t79 = (x2417>>((x2418+x2419)%x2420));

    if (t79 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x2429 = 232U;
	int64_t x2431 = 451807033433246412LL;
	uint8_t x2432 = 19U;
	volatile int32_t t80 = 837816702;

    t80 = (x2429>>((x2430+x2431)%x2432));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x2445 = UINT8_MAX;
	int8_t x2446 = INT8_MAX;
	uint8_t x2447 = 3U;
	static int16_t x2448 = 1;

    t81 = (x2445>>((x2446+x2447)%x2448));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x2465 = 1125;
	uint8_t x2466 = 49U;
	uint64_t x2468 = 1LLU;

    t82 = (x2465>>((x2466+x2467)%x2468));

    if (t82 != 1125) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x2477 = 385;
	int64_t x2478 = 18LL;
	int64_t x2479 = -1LL;
	int32_t x2480 = 131984622;
	static int32_t t83 = 0;

    t83 = (x2477>>((x2478+x2479)%x2480));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x2493 = 272549247;
	int8_t x2494 = -1;
	uint8_t x2495 = 2U;
	static int8_t x2496 = -1;
	static volatile int32_t t84 = 2;

    t84 = (x2493>>((x2494+x2495)%x2496));

    if (t84 != 272549247) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x2498 = 14U;
	int16_t x2499 = -1;
	int64_t x2500 = INT64_MAX;
	uint32_t t85 = 101951U;

    t85 = (x2497>>((x2498+x2499)%x2500));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x2509 = 93843LL;
	uint32_t x2512 = 53U;
	int64_t t86 = -172918839196LL;

    t86 = (x2509>>((x2510+x2511)%x2512));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x2549 = 6053U;
	volatile uint8_t x2550 = UINT8_MAX;
	static uint8_t x2551 = 7U;
	int32_t t87 = -119;

    t87 = (x2549>>((x2550+x2551)%x2552));

    if (t87 != 378) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x2606 = INT8_MIN;
	static int16_t x2607 = 6;
	static int8_t x2608 = 1;
	volatile int32_t t88 = 103713;

    t88 = (x2605>>((x2606+x2607)%x2608));

    if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x2622 = -1;
	int8_t x2624 = 1;
	int32_t t89 = -2;

    t89 = (x2621>>((x2622+x2623)%x2624));

    if (t89 != 1738) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x2670 = INT16_MIN;
	int32_t x2671 = -32597257;
	volatile int32_t x2672 = -1;
	static uint32_t t90 = 88U;

    t90 = (x2669>>((x2670+x2671)%x2672));

    if (t90 != 12723U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x2713 = 3U;
	volatile uint32_t x2715 = UINT32_MAX;
	volatile uint64_t x2716 = UINT64_MAX;

    t91 = (x2713>>((x2714+x2715)%x2716));

    if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x2733 = 48484268790226267LLU;
	static uint32_t x2734 = UINT32_MAX;
	static uint32_t x2735 = 7U;
	uint8_t x2736 = 2U;
	volatile uint64_t t92 = 66007LLU;

    t92 = (x2733>>((x2734+x2735)%x2736));

    if (t92 != 48484268790226267LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x2741 = 76582307446478LLU;
	int16_t x2743 = 1018;
	int32_t x2744 = -1;
	static uint64_t t93 = 13180LLU;

    t93 = (x2741>>((x2742+x2743)%x2744));

    if (t93 != 76582307446478LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x2749 = 1;
	static uint32_t x2750 = 2U;
	int32_t x2751 = -1;
	static uint16_t x2752 = 1U;
	volatile int32_t t94 = -4242910;

    t94 = (x2749>>((x2750+x2751)%x2752));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x2793 = 1134U;
	static uint8_t x2794 = 1U;
	volatile uint16_t x2795 = 1U;
	uint64_t x2796 = UINT64_MAX;

    t95 = (x2793>>((x2794+x2795)%x2796));

    if (t95 != 283U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x2797 = UINT8_MAX;
	uint64_t x2798 = UINT64_MAX;
	static int64_t x2799 = -1LL;
	int32_t t96 = -142213410;

    t96 = (x2797>>((x2798+x2799)%x2800));

    if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x2833 = INT64_MAX;
	int16_t x2834 = 1;
	int32_t x2835 = 1;
	int64_t x2836 = -3139LL;
	static volatile int64_t t97 = -241096LL;

    t97 = (x2833>>((x2834+x2835)%x2836));

    if (t97 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x2846 = 2;
	uint8_t x2847 = UINT8_MAX;
	uint8_t x2848 = 4U;

    t98 = (x2845>>((x2846+x2847)%x2848));

    if (t98 != 1073741823) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint16_t x2849 = 1315U;
	static int64_t x2850 = 555LL;
	int32_t x2852 = -1;
	volatile int32_t t99 = -1009669729;

    t99 = (x2849>>((x2850+x2851)%x2852));

    if (t99 != 1315) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x2873 = 1;
	uint16_t x2874 = 581U;
	static int16_t x2875 = 54;
	uint8_t x2876 = 29U;

    t100 = (x2873>>((x2874+x2875)%x2876));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x2881 = 11926U;
	volatile int16_t x2882 = INT16_MIN;
	volatile int16_t x2883 = 29;
	int16_t x2884 = -1;
	volatile int32_t t101 = -343114422;

    t101 = (x2881>>((x2882+x2883)%x2884));

    if (t101 != 11926) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x2957 = UINT64_MAX;
	int32_t x2958 = INT32_MIN;
	uint8_t x2960 = 12U;
	volatile uint64_t t102 = 153699150138LLU;

    t102 = (x2957>>((x2958+x2959)%x2960));

    if (t102 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x2965 = UINT16_MAX;
	static int32_t x2966 = INT32_MIN;
	int64_t x2967 = 91483LL;
	int64_t x2968 = -1LL;
	static volatile int32_t t103 = -143;

    t103 = (x2965>>((x2966+x2967)%x2968));

    if (t103 != 65535) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x2981 = 20;
	int16_t x2982 = 1;
	int16_t x2983 = -1;
	int32_t t104 = -6692513;

    t104 = (x2981>>((x2982+x2983)%x2984));

    if (t104 != 20) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x3021 = UINT8_MAX;
	uint8_t x3022 = 10U;
	static int16_t x3023 = 2;
	int64_t x3024 = INT64_MAX;
	volatile int32_t t105 = 49405;

    t105 = (x3021>>((x3022+x3023)%x3024));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x3041 = 48;
	int16_t x3044 = 13;
	int32_t t106 = 52203218;

    t106 = (x3041>>((x3042+x3043)%x3044));

    if (t106 != 3) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x3049 = 2;
	uint64_t x3050 = UINT64_MAX;
	int64_t x3051 = INT64_MIN;

    t107 = (x3049>>((x3050+x3051)%x3052));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x3057 = UINT16_MAX;
	uint32_t x3058 = 2464U;
	int16_t x3059 = 4530;
	volatile int64_t x3060 = 1LL;
	int32_t t108 = -430;

    t108 = (x3057>>((x3058+x3059)%x3060));

    if (t108 != 65535) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x3101 = INT32_MAX;
	int16_t x3102 = INT16_MAX;
	uint16_t x3103 = UINT16_MAX;
	int32_t t109 = INT32_MAX;

    t109 = (x3101>>((x3102+x3103)%x3104));

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x3113 = 211U;
	uint64_t x3114 = UINT64_MAX;
	int16_t x3115 = INT16_MIN;
	volatile int16_t x3116 = 9;
	int32_t t110 = 221016459;

    t110 = (x3113>>((x3114+x3115)%x3116));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x3157 = 1;
	volatile int8_t x3159 = INT8_MIN;
	uint16_t x3160 = 1U;
	static int32_t t111 = -23838443;

    t111 = (x3157>>((x3158+x3159)%x3160));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x3185 = 0U;
	static int8_t x3186 = INT8_MIN;
	uint8_t x3187 = 15U;
	int16_t x3188 = -1;
	static int32_t t112 = 98166;

    t112 = (x3185>>((x3186+x3187)%x3188));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x3269 = UINT8_MAX;
	volatile uint64_t x3271 = UINT64_MAX;
	static int8_t x3272 = 63;
	volatile int32_t t113 = 2;

    t113 = (x3269>>((x3270+x3271)%x3272));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x3282 = 19U;
	static uint64_t x3283 = UINT64_MAX;
	int32_t x3284 = INT32_MIN;

    t114 = (x3281>>((x3282+x3283)%x3284));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x3301 = UINT64_MAX;
	volatile int32_t x3302 = INT32_MIN;
	uint64_t x3303 = UINT64_MAX;
	int32_t x3304 = 1;
	uint64_t t115 = UINT64_MAX;

    t115 = (x3301>>((x3302+x3303)%x3304));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x3342 = INT8_MAX;
	int8_t x3343 = INT8_MIN;
	int64_t x3344 = -1LL;
	static int32_t t116 = -11390739;

    t116 = (x3341>>((x3342+x3343)%x3344));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3345 = INT32_MAX;
	static uint64_t x3346 = 111261248781707905LLU;
	int32_t x3347 = -1;
	int8_t x3348 = 8;
	int32_t t117 = INT32_MAX;

    t117 = (x3345>>((x3346+x3347)%x3348));

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x3405 = INT32_MAX;
	static uint64_t x3406 = 395210045609767LLU;
	volatile int64_t x3407 = INT64_MIN;
	static uint16_t x3408 = 11U;
	volatile int32_t t118 = INT32_MAX;

    t118 = (x3405>>((x3406+x3407)%x3408));

    if (t118 != INT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x3450 = UINT16_MAX;
	uint16_t x3451 = UINT16_MAX;
	int32_t x3452 = -1;
	static uint32_t t119 = UINT32_MAX;

    t119 = (x3449>>((x3450+x3451)%x3452));

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x3493 = UINT16_MAX;
	int8_t x3495 = -6;
	static int16_t x3496 = INT16_MIN;
	static int32_t t120 = -2;

    t120 = (x3493>>((x3494+x3495)%x3496));

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x3553 = 4U;
	int16_t x3554 = INT16_MAX;
	uint16_t x3555 = 1471U;
	static int32_t t121 = -273746648;

    t121 = (x3553>>((x3554+x3555)%x3556));

    if (t121 != 4) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x3566 = INT8_MAX;
	volatile int64_t x3568 = -69LL;
	volatile int32_t t122 = -1953448;

    t122 = (x3565>>((x3566+x3567)%x3568));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x3597 = 1;
	static int8_t x3598 = -1;
	static uint32_t x3599 = UINT32_MAX;
	static volatile int8_t x3600 = 1;
	int32_t t123 = 34223409;

    t123 = (x3597>>((x3598+x3599)%x3600));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x3605 = UINT64_MAX;
	int8_t x3606 = INT8_MIN;
	uint64_t t124 = 5582276LLU;

    t124 = (x3605>>((x3606+x3607)%x3608));

    if (t124 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x3618 = 15201281037191LL;
	int16_t x3619 = INT16_MIN;
	volatile int32_t t125 = -2163;

    t125 = (x3617>>((x3618+x3619)%x3620));

    if (t125 != 178) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x3649 = 1517182U;
	int16_t x3650 = -1;
	static volatile uint8_t x3652 = 4U;
	uint32_t t126 = 0U;

    t126 = (x3649>>((x3650+x3651)%x3652));

    if (t126 != 1517182U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x3677 = INT32_MAX;
	uint64_t x3678 = UINT64_MAX;
	uint16_t x3679 = 3U;
	uint16_t x3680 = 16U;
	volatile int32_t t127 = 161656742;

    t127 = (x3677>>((x3678+x3679)%x3680));

    if (t127 != 536870911) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x3683 = 96U;
	uint16_t x3684 = 26U;

    t128 = (x3681>>((x3682+x3683)%x3684));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x3701 = 1;
	int32_t x3704 = INT32_MIN;
	int32_t t129 = -128147;

    t129 = (x3701>>((x3702+x3703)%x3704));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x3721 = 6U;
	volatile int16_t x3723 = -1;
	int32_t t130 = -25202789;

    t130 = (x3721>>((x3722+x3723)%x3724));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x3737 = INT16_MAX;
	int32_t x3738 = 3139258;
	uint8_t x3739 = 15U;
	int64_t x3740 = -1LL;
	volatile int32_t t131 = -6;

    t131 = (x3737>>((x3738+x3739)%x3740));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x3753 = 419U;
	volatile int32_t x3755 = INT32_MIN;
	int8_t x3756 = INT8_MAX;
	volatile int32_t t132 = -435;

    t132 = (x3753>>((x3754+x3755)%x3756));

    if (t132 != 419) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x3798 = INT8_MIN;
	int8_t x3800 = -1;
	volatile int32_t t133 = 3388491;

    t133 = (x3797>>((x3798+x3799)%x3800));

    if (t133 != 1341) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x3806 = -1LL;
	int8_t x3807 = 7;
	volatile int32_t t134 = 546;

    t134 = (x3805>>((x3806+x3807)%x3808));

    if (t134 != 127) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x3825 = 19744590253LLU;
	volatile int32_t x3826 = 0;
	static int64_t x3827 = INT64_MAX;
	volatile uint16_t x3828 = 2U;
	volatile uint64_t t135 = 478384277945519LLU;

    t135 = (x3825>>((x3826+x3827)%x3828));

    if (t135 != 9872295126LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x3845 = 378459237LL;
	int8_t x3846 = 26;
	static uint32_t x3847 = UINT32_MAX;
	int64_t t136 = 70385794204971514LL;

    t136 = (x3845>>((x3846+x3847)%x3848));

    if (t136 != 11LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x3889 = 35U;
	static int8_t x3890 = INT8_MIN;
	int32_t x3892 = -1;
	int32_t t137 = -24;

    t137 = (x3889>>((x3890+x3891)%x3892));

    if (t137 != 35) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x3893 = 270;
	int64_t x3895 = INT64_MIN;
	static int64_t x3896 = -1LL;
	int32_t t138 = -154;

    t138 = (x3893>>((x3894+x3895)%x3896));

    if (t138 != 270) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x3931 = INT64_MIN;

    t139 = (x3929>>((x3930+x3931)%x3932));

    if (t139 != 127U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x3941 = 0;
	int64_t x3942 = -1LL;
	static int32_t x3943 = -9024961;
	int64_t x3944 = -1LL;
	int32_t t140 = 11152;

    t140 = (x3941>>((x3942+x3943)%x3944));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x4045 = UINT8_MAX;
	volatile uint8_t x4048 = 1U;

    t141 = (x4045>>((x4046+x4047)%x4048));

    if (t141 != 255) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x4075 = 466;
	int32_t x4076 = -1;
	volatile int32_t t142 = 37196;

    t142 = (x4073>>((x4074+x4075)%x4076));

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x4089 = 7U;
	uint16_t x4090 = 1U;
	int16_t x4091 = -1;
	uint16_t x4092 = 1U;
	int32_t t143 = 923;

    t143 = (x4089>>((x4090+x4091)%x4092));

    if (t143 != 7) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x4113 = 50;
	static int32_t x4114 = INT32_MIN;
	volatile int8_t x4115 = INT8_MAX;
	static int64_t x4116 = -1LL;
	int32_t t144 = -5;

    t144 = (x4113>>((x4114+x4115)%x4116));

    if (t144 != 50) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x4165 = 2997LLU;
	volatile int32_t x4166 = -1;
	static uint8_t x4167 = 23U;
	int8_t x4168 = INT8_MIN;

    t145 = (x4165>>((x4166+x4167)%x4168));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x4265 = 1;
	static int16_t x4266 = -1;
	int8_t x4267 = INT8_MAX;
	volatile int16_t x4268 = 1;
	volatile int32_t t146 = -32018919;

    t146 = (x4265>>((x4266+x4267)%x4268));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x4313 = INT64_MAX;
	int16_t x4314 = 996;
	int32_t x4315 = 32;
	int8_t x4316 = -1;
	int64_t t147 = INT64_MAX;

    t147 = (x4313>>((x4314+x4315)%x4316));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x4357 = 0U;
	volatile int8_t x4358 = INT8_MAX;
	int8_t x4359 = 28;

    t148 = (x4357>>((x4358+x4359)%x4360));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x4409 = INT64_MAX;

    t149 = (x4409>>((x4410+x4411)%x4412));

    if (t149 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x4417 = 10U;
	static int32_t x4418 = 1;
	volatile int64_t x4420 = -1LL;

    t150 = (x4417>>((x4418+x4419)%x4420));

    if (t150 != 10) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x4425 = INT16_MAX;
	volatile int16_t x4426 = -1245;
	int8_t x4428 = -1;
	int32_t t151 = -526939949;

    t151 = (x4425>>((x4426+x4427)%x4428));

    if (t151 != 32767) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x4505 = 1;
	int8_t x4506 = -1;
	int32_t x4507 = -1;
	static int64_t x4508 = -1LL;
	volatile int32_t t152 = -1;

    t152 = (x4505>>((x4506+x4507)%x4508));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x4509 = 5U;
	int32_t x4510 = INT32_MIN;
	static uint64_t x4511 = UINT64_MAX;
	int16_t x4512 = INT16_MAX;
	volatile int32_t t153 = -3596609;

    t153 = (x4509>>((x4510+x4511)%x4512));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x4549 = UINT32_MAX;
	int32_t x4550 = -1;
	int32_t x4551 = -65;
	int8_t x4552 = -1;
	volatile uint32_t t154 = UINT32_MAX;

    t154 = (x4549>>((x4550+x4551)%x4552));

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x4581 = 1;
	int8_t x4582 = INT8_MIN;
	uint64_t x4583 = 951019742LLU;
	uint8_t x4584 = 17U;
	int32_t t155 = -60141;

    t155 = (x4581>>((x4582+x4583)%x4584));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x4609 = 7740234045060451LLU;
	volatile uint32_t x4610 = 48U;
	uint64_t x4611 = UINT64_MAX;
	int16_t x4612 = -1;

    t156 = (x4609>>((x4610+x4611)%x4612));

    if (t156 != 54LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x4617 = 353571475285917664LLU;
	static int32_t x4618 = 0;
	int64_t x4619 = INT64_MIN;
	static int8_t x4620 = -4;
	volatile uint64_t t157 = 44799987027236384LLU;

    t157 = (x4617>>((x4618+x4619)%x4620));

    if (t157 != 353571475285917664LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x4637 = UINT64_MAX;
	volatile uint32_t x4639 = 28804590U;
	static volatile uint64_t t158 = UINT64_MAX;

    t158 = (x4637>>((x4638+x4639)%x4640));

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x4665 = 11U;
	uint8_t x4666 = UINT8_MAX;
	volatile int16_t x4667 = -1;
	int32_t t159 = 122040;

    t159 = (x4665>>((x4666+x4667)%x4668));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x4745 = 30623052U;
	int8_t x4746 = -1;
	volatile int8_t x4747 = 9;
	int64_t x4748 = INT64_MIN;
	static volatile uint32_t t160 = 9U;

    t160 = (x4745>>((x4746+x4747)%x4748));

    if (t160 != 119621U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x4753 = 279892753876LLU;
	int32_t x4754 = -87544738;
	static uint32_t x4756 = 3U;

    t161 = (x4753>>((x4754+x4755)%x4756));

    if (t161 != 139946376938LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x4769 = 1863079719584073478LLU;
	int8_t x4770 = -1;
	volatile int16_t x4771 = INT16_MAX;
	static uint8_t x4772 = 72U;
	volatile uint64_t t162 = 14781900144996LLU;

    t162 = (x4769>>((x4770+x4771)%x4772));

    if (t162 != 29110620618501148LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x4813 = UINT16_MAX;
	uint16_t x4814 = 412U;
	volatile int16_t x4815 = INT16_MAX;
	int32_t x4816 = -1;
	volatile int32_t t163 = -16512988;

    t163 = (x4813>>((x4814+x4815)%x4816));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x4849 = 14U;
	uint64_t x4852 = 37548616426LLU;
	int32_t t164 = 140695012;

    t164 = (x4849>>((x4850+x4851)%x4852));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x4877 = UINT16_MAX;
	uint64_t x4878 = UINT64_MAX;
	volatile int32_t t165 = 1;

    t165 = (x4877>>((x4878+x4879)%x4880));

    if (t165 != 16383) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x4881 = 1;
	static volatile int16_t x4882 = -1;
	volatile uint64_t x4884 = 1LLU;
	int32_t t166 = 109;

    t166 = (x4881>>((x4882+x4883)%x4884));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x5014 = -19315634301393LL;
	uint8_t x5015 = 87U;
	volatile int32_t x5016 = -1;
	static uint64_t t167 = 0LLU;

    t167 = (x5013>>((x5014+x5015)%x5016));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x5018 = UINT8_MAX;
	int8_t x5019 = -1;
	int16_t x5020 = -1;
	int32_t t168 = 156;

    t168 = (x5017>>((x5018+x5019)%x5020));

    if (t168 != 7744) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x5030 = 98U;
	volatile int32_t x5031 = -195825;
	uint8_t x5032 = 7U;
	volatile uint64_t t169 = UINT64_MAX;

    t169 = (x5029>>((x5030+x5031)%x5032));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x5046 = 54;
	volatile int64_t t170 = -2537LL;

    t170 = (x5045>>((x5046+x5047)%x5048));

    if (t170 != 1023LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x5049 = 2485430U;
	uint16_t x5050 = UINT16_MAX;
	volatile int8_t x5051 = INT8_MIN;
	int8_t x5052 = INT8_MAX;
	volatile uint32_t t171 = 62777U;

    t171 = (x5049>>((x5050+x5051)%x5052));

    if (t171 != 621357U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x5065 = 40649840430LLU;
	static uint32_t x5066 = 195U;
	int32_t x5067 = -1;
	volatile uint32_t x5068 = 5U;
	uint64_t t172 = 116622712LLU;

    t172 = (x5065>>((x5066+x5067)%x5068));

    if (t172 != 2540615026LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x5077 = INT8_MAX;
	static uint16_t x5078 = 11101U;
	volatile uint8_t x5080 = 1U;
	volatile int32_t t173 = 26131;

    t173 = (x5077>>((x5078+x5079)%x5080));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x5081 = 6U;
	volatile int8_t x5082 = 60;
	int32_t x5083 = -3;
	int16_t x5084 = -1;
	static int32_t t174 = -1023313;

    t174 = (x5081>>((x5082+x5083)%x5084));

    if (t174 != 6) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x5089 = 343912;
	int16_t x5090 = -1;
	uint8_t x5092 = 22U;
	volatile int32_t t175 = 0;

    t175 = (x5089>>((x5090+x5091)%x5092));

    if (t175 != 343912) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x5097 = 7LL;
	uint64_t x5099 = 53635082071637LLU;
	uint8_t x5100 = 24U;
	int64_t t176 = -13LL;

    t176 = (x5097>>((x5098+x5099)%x5100));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x5121 = 3017U;
	volatile uint16_t x5123 = UINT16_MAX;
	int8_t x5124 = 4;
	volatile int32_t t177 = -52649441;

    t177 = (x5121>>((x5122+x5123)%x5124));

    if (t177 != 754) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x5149 = 0;
	uint16_t x5151 = UINT16_MAX;
	int32_t t178 = -2156683;

    t178 = (x5149>>((x5150+x5151)%x5152));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x5159 = 7342LL;
	int16_t x5160 = -1;
	volatile int32_t t179 = 21;

    t179 = (x5157>>((x5158+x5159)%x5160));

    if (t179 != 255) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x5189 = UINT32_MAX;
	volatile uint16_t x5190 = 5750U;
	uint32_t x5191 = 6967U;
	int16_t x5192 = 50;
	volatile uint32_t t180 = 273901816U;

    t180 = (x5189>>((x5190+x5191)%x5192));

    if (t180 != 32767U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x5209 = 1690133359U;
	int64_t x5211 = INT64_MIN;
	int16_t x5212 = INT16_MIN;
	uint32_t t181 = 55U;

    t181 = (x5209>>((x5210+x5211)%x5212));

    if (t181 != 1690133359U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x5217 = UINT32_MAX;
	uint64_t x5218 = 24LLU;
	volatile uint32_t x5219 = UINT32_MAX;
	int32_t x5220 = INT32_MAX;
	uint32_t t182 = 942283702U;

    t182 = (x5217>>((x5218+x5219)%x5220));

    if (t182 != 127U) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x5249 = 257096619637935903LLU;
	uint32_t x5250 = 4U;
	uint16_t x5252 = 1U;
	volatile uint64_t t183 = 5953375LLU;

    t183 = (x5249>>((x5250+x5251)%x5252));

    if (t183 != 257096619637935903LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x5293 = 1514U;
	volatile uint64_t x5295 = 530358LLU;
	volatile uint8_t x5296 = 1U;
	int32_t t184 = -1;

    t184 = (x5293>>((x5294+x5295)%x5296));

    if (t184 != 1514) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x5309 = 15U;
	static volatile int8_t x5311 = 4;
	int32_t x5312 = 248;
	static int32_t t185 = -133807;

    t185 = (x5309>>((x5310+x5311)%x5312));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x5317 = 734917528U;
	volatile uint32_t x5318 = UINT32_MAX;
	uint32_t x5319 = 1136U;

    t186 = (x5317>>((x5318+x5319)%x5320));

    if (t186 != 367458764U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x5339 = INT16_MAX;
	int8_t x5340 = INT8_MIN;
	volatile int64_t t187 = -7LL;

    t187 = (x5337>>((x5338+x5339)%x5340));

    if (t187 != 1073741823LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x5353 = 1973U;
	int64_t x5354 = -1097071LL;
	int16_t x5355 = 1522;
	volatile int8_t x5356 = -1;

    t188 = (x5353>>((x5354+x5355)%x5356));

    if (t188 != 1973U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x5362 = 21294324U;
	volatile uint16_t x5363 = 1U;
	volatile uint32_t x5364 = 1U;
	volatile int32_t t189 = -227056344;

    t189 = (x5361>>((x5362+x5363)%x5364));

    if (t189 != 760) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x5365 = INT32_MAX;
	int64_t x5367 = 6LL;
	int16_t x5368 = 104;
	int32_t t190 = 38580;

    t190 = (x5365>>((x5366+x5367)%x5368));

    if (t190 != 1023) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x5373 = 1U;
	volatile int16_t x5374 = INT16_MAX;
	volatile int32_t x5375 = 43;
	static int32_t x5376 = -1;
	volatile int32_t t191 = 259075;

    t191 = (x5373>>((x5374+x5375)%x5376));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x5401 = UINT32_MAX;
	int64_t x5402 = INT64_MAX;
	static volatile int16_t x5403 = -1;
	static int8_t x5404 = -1;
	volatile uint32_t t192 = UINT32_MAX;

    t192 = (x5401>>((x5402+x5403)%x5404));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x5409 = 1598243U;
	static volatile int16_t x5410 = INT16_MAX;
	int16_t x5411 = INT16_MAX;
	volatile int8_t x5412 = -1;
	uint32_t t193 = 1516717161U;

    t193 = (x5409>>((x5410+x5411)%x5412));

    if (t193 != 1598243U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x5429 = 47194205295908LLU;
	int16_t x5430 = INT16_MIN;
	uint16_t x5432 = 1U;
	volatile uint64_t t194 = 283517702754484LLU;

    t194 = (x5429>>((x5430+x5431)%x5432));

    if (t194 != 47194205295908LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x5477 = 1029751613463033364LLU;
	static int16_t x5478 = INT16_MAX;
	int32_t x5480 = -25;

    t195 = (x5477>>((x5478+x5479)%x5480));

    if (t195 != 62851050626405LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x5493 = 1053925685019868LLU;
	static int64_t x5494 = -10836510LL;
	uint16_t x5495 = 7915U;
	int16_t x5496 = 1;

    t196 = (x5493>>((x5494+x5495)%x5496));

    if (t196 != 1053925685019868LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x5553 = 7682U;
	static int64_t x5554 = -1LL;
	static uint8_t x5555 = 1U;
	int8_t x5556 = INT8_MAX;
	int32_t t197 = -131863;

    t197 = (x5553>>((x5554+x5555)%x5556));

    if (t197 != 7682) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x5589 = INT8_MAX;
	static volatile int8_t x5590 = -12;
	static int64_t x5591 = 139738484283LL;
	static int64_t x5592 = -1LL;
	volatile int32_t t198 = -388319;

    t198 = (x5589>>((x5590+x5591)%x5592));

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x5705 = 377U;
	static int8_t x5707 = INT8_MIN;
	int8_t x5708 = -1;
	int32_t t199 = -2;

    t199 = (x5705>>((x5706+x5707)%x5708));

    if (t199 != 377) { NG(); } else { ; }
	
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

