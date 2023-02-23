
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

volatile int32_t x102 = INT32_MAX;
int32_t x104 = INT32_MAX;
uint32_t t1 = UINT32_MAX;
uint64_t x207 = UINT64_MAX;
volatile int32_t x208 = -1;
static int16_t x431 = -1;
static volatile int32_t t3 = 1501;
int16_t x438 = INT16_MIN;
int16_t x620 = -1;
int32_t x865 = INT32_MAX;
static volatile int8_t x927 = -1;
int16_t x984 = -1;
volatile uint64_t t10 = UINT64_MAX;
int32_t x999 = INT32_MAX;
int8_t x1179 = INT8_MAX;
int8_t x1251 = INT8_MAX;
uint64_t x1451 = 1004392332965776386LLU;
static int32_t x1762 = -7174;
uint64_t x1765 = 616LLU;
int16_t x1768 = INT16_MIN;
static int32_t x1778 = -1;
int8_t x1919 = -1;
int8_t x2016 = -1;
volatile int32_t t24 = -1;
volatile int16_t x2219 = -1;
int32_t x2300 = -16;
int16_t x2533 = 113;
volatile uint64_t x2576 = UINT64_MAX;
uint64_t x2585 = 192398549LLU;
volatile uint64_t t31 = 497LLU;
int32_t x2767 = -1;
int8_t x2768 = -17;
volatile uint32_t t33 = 54339485U;
uint32_t x2771 = UINT32_MAX;
int64_t x2985 = 3927998127LL;
volatile int8_t x2988 = -1;
uint64_t x3319 = 61435939602099LLU;
volatile int32_t x3323 = INT32_MIN;
volatile int8_t x3397 = INT8_MAX;
uint64_t x3400 = UINT64_MAX;
uint16_t x3781 = 11U;
volatile uint16_t x3877 = 407U;
int64_t x3878 = INT64_MAX;
volatile int8_t x3880 = -1;
volatile int32_t t46 = -755;
volatile int64_t t47 = 8LL;
uint64_t x4150 = UINT64_MAX;
int16_t x4426 = -1;
static volatile uint32_t x4437 = UINT32_MAX;
static int64_t x4439 = INT64_MIN;
int64_t x4440 = -1LL;
volatile uint32_t t51 = 3630643U;
volatile uint32_t t53 = UINT32_MAX;
uint64_t x5166 = 526LLU;
volatile uint32_t t55 = 0U;
uint8_t x5283 = UINT8_MAX;
int32_t x5312 = -1;
int8_t x5331 = INT8_MAX;
int32_t t58 = -1;
int16_t x5666 = INT16_MIN;
static int32_t t60 = 101056;
uint16_t x5685 = UINT16_MAX;
int8_t x5743 = INT8_MIN;
volatile int8_t x5744 = -1;
int32_t t63 = 23;
uint8_t x5979 = 0U;
volatile int64_t x6474 = INT64_MAX;
int64_t x6476 = -1LL;
static int16_t x6514 = -1;
volatile uint16_t x6515 = 15U;
volatile int32_t t72 = -44937;
int8_t x6894 = -1;
static int8_t x6895 = INT8_MAX;
volatile uint32_t x7011 = 1391679U;
volatile uint64_t t74 = 41986LLU;
uint32_t x7069 = 387143540U;
int32_t x7071 = INT32_MIN;
volatile int32_t t76 = INT32_MAX;
uint8_t x7185 = UINT8_MAX;
static uint8_t x7269 = UINT8_MAX;
volatile uint16_t x7270 = 12U;
static volatile int32_t t79 = -711741;
static int64_t x7403 = 7223434451LL;
uint16_t x7405 = 3U;
volatile int64_t x7406 = -1LL;
static int32_t t81 = -2;
int16_t x7471 = -224;
static uint64_t x7472 = UINT64_MAX;
uint64_t t82 = 1LLU;
volatile int8_t x7538 = 1;
static uint64_t x7552 = UINT64_MAX;
uint32_t x7569 = 436U;
int16_t x7579 = -1;
int32_t x7781 = 29409;
int32_t t90 = -63;
int16_t x7836 = -1;
static uint16_t x7889 = 205U;
int32_t x7925 = INT32_MAX;
static int8_t x7927 = INT8_MIN;
uint32_t x7928 = UINT32_MAX;
int32_t t93 = INT32_MAX;
int32_t x8044 = -1;
int8_t x8246 = INT8_MIN;
volatile int32_t t96 = -1;
int64_t x8358 = 54334LL;
int8_t x8380 = -1;
int64_t x8556 = INT64_MIN;
volatile uint16_t x8613 = UINT16_MAX;
static int32_t x8673 = INT32_MAX;
volatile uint32_t t103 = UINT32_MAX;
int16_t x8749 = 520;
int8_t x8750 = INT8_MIN;
volatile int64_t x8792 = -2LL;
static volatile uint8_t x8829 = 0U;
int8_t x8831 = -1;
int64_t x8859 = -1LL;
int8_t x9217 = 1;
static uint64_t x9354 = UINT64_MAX;
int32_t x9355 = -342;
volatile uint32_t x9621 = UINT32_MAX;
volatile int64_t x9624 = -1LL;
uint64_t x9705 = 2010881LLU;
int16_t x9955 = -7751;
int32_t t120 = 1;
int32_t t122 = -624;
volatile int16_t x10104 = -1;
static volatile int8_t x10367 = -1;
volatile int32_t t125 = 2;
uint32_t x10465 = 14334700U;
int8_t x10467 = INT8_MIN;
static int64_t x10468 = -2LL;
volatile uint64_t x10502 = 49257191318584LLU;
int32_t x10869 = INT32_MAX;
int32_t x10929 = 8085;
static int64_t x10930 = INT64_MAX;
int32_t x10942 = -1;
uint32_t x10943 = 53183U;
volatile int32_t t132 = 93781;
uint64_t x11160 = UINT64_MAX;
int32_t t133 = -55200236;
uint32_t x11395 = UINT32_MAX;
uint32_t x11904 = UINT32_MAX;
int16_t x11942 = INT16_MIN;
uint32_t t137 = UINT32_MAX;
int8_t x12268 = -1;
uint32_t x12586 = UINT32_MAX;
int16_t x12612 = -1;
int32_t x12786 = -1;
int32_t t150 = INT32_MAX;
int8_t x12940 = -1;
uint64_t x13020 = UINT64_MAX;
int8_t x13037 = INT8_MAX;
volatile int16_t x13039 = INT16_MIN;
uint32_t x13041 = UINT32_MAX;
volatile int64_t x13042 = INT64_MIN;
volatile uint32_t t156 = UINT32_MAX;
uint64_t x13073 = 184294LLU;
int8_t x13363 = INT8_MIN;
static volatile int16_t x13364 = -1;
uint16_t x13365 = 3U;
int32_t x13367 = -1;
static int8_t x13368 = -1;
volatile int32_t t160 = -44356466;
uint16_t x13398 = UINT16_MAX;
uint16_t x13573 = 10U;
int64_t x13574 = -1LL;
volatile int64_t x13686 = -1LL;
int16_t x13745 = INT16_MAX;
uint16_t x13746 = UINT16_MAX;
static volatile int16_t x13765 = INT16_MAX;
uint16_t x13766 = 19U;
volatile int32_t x13767 = -1;
uint16_t x14025 = 926U;
int32_t t170 = 898042;
uint16_t x14061 = UINT16_MAX;
static volatile uint64_t x14062 = UINT64_MAX;
static int64_t x14064 = -1LL;
uint16_t x14147 = 10822U;
volatile int32_t x14299 = INT32_MAX;
uint16_t x14303 = UINT16_MAX;
static uint64_t x14308 = UINT64_MAX;
static volatile uint64_t t175 = 51406096LLU;
volatile int32_t t176 = 1;
uint16_t x14431 = UINT16_MAX;
volatile int64_t t180 = -7LL;


void f0(void) {
    	static uint32_t x101 = UINT32_MAX;
	uint32_t x103 = 23U;
	static uint32_t t0 = UINT32_MAX;

    t0 = (x101<<((x102|x103)-x104));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x161 = UINT32_MAX;
	int16_t x162 = INT16_MIN;
	static uint32_t x163 = UINT32_MAX;
	int16_t x164 = -1;

    t1 = (x161<<((x162|x163)-x164));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x205 = 595U;
	static volatile int8_t x206 = INT8_MIN;
	int32_t t2 = 0;

    t2 = (x205<<((x206|x207)-x208));

    if (t2 != 595) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x429 = 0;
	uint16_t x430 = 11625U;
	uint64_t x432 = UINT64_MAX;

    t3 = (x429<<((x430|x431)-x432));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x437 = 3279LL;
	static int8_t x439 = -1;
	int32_t x440 = -1;
	int64_t t4 = 29751771964915LL;

    t4 = (x437<<((x438|x439)-x440));

    if (t4 != 3279LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x453 = 0U;
	uint16_t x454 = 15U;
	static int8_t x455 = 3;
	static uint8_t x456 = 4U;
	int32_t t5 = 1051592840;

    t5 = (x453<<((x454|x455)-x456));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x593 = 2896U;
	uint8_t x594 = 0U;
	int64_t x595 = INT64_MIN;
	int64_t x596 = INT64_MIN;
	volatile int32_t t6 = -27514732;

    t6 = (x593<<((x594|x595)-x596));

    if (t6 != 2896) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x617 = INT8_MAX;
	int8_t x618 = -1;
	static volatile uint64_t x619 = 32930702LLU;
	volatile int32_t t7 = -6892;

    t7 = (x617<<((x618|x619)-x620));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x866 = INT8_MAX;
	int8_t x867 = INT8_MIN;
	static int64_t x868 = -1LL;
	int32_t t8 = INT32_MAX;

    t8 = (x865<<((x866|x867)-x868));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x925 = 15U;
	int32_t x926 = 7714;
	static uint32_t x928 = UINT32_MAX;
	volatile int32_t t9 = -97100;

    t9 = (x925<<((x926|x927)-x928));

    if (t9 != 15) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x981 = UINT64_MAX;
	volatile int64_t x982 = -1LL;
	uint64_t x983 = 49125769990103782LLU;

    t10 = (x981<<((x982|x983)-x984));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x997 = 1U;
	int64_t x998 = -1LL;
	int32_t x1000 = -1;
	volatile int32_t t11 = 1;

    t11 = (x997<<((x998|x999)-x1000));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x1089 = 3U;
	uint64_t x1090 = 60LLU;
	volatile int64_t x1091 = -1LL;
	uint64_t x1092 = UINT64_MAX;
	static uint32_t t12 = 5U;

    t12 = (x1089<<((x1090|x1091)-x1092));

    if (t12 != 3U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x1177 = UINT64_MAX;
	int32_t x1178 = -1;
	volatile int32_t x1180 = -1;
	uint64_t t13 = UINT64_MAX;

    t13 = (x1177<<((x1178|x1179)-x1180));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x1249 = 20U;
	int16_t x1250 = -11;
	int8_t x1252 = -3;
	volatile int32_t t14 = 22;

    t14 = (x1249<<((x1250|x1251)-x1252));

    if (t14 != 80) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1301 = UINT16_MAX;
	int64_t x1302 = INT64_MIN;
	volatile int64_t x1303 = -1LL;
	static uint64_t x1304 = UINT64_MAX;
	int32_t t15 = -63646;

    t15 = (x1301<<((x1302|x1303)-x1304));

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x1321 = INT16_MAX;
	static uint16_t x1322 = UINT16_MAX;
	int8_t x1323 = -1;
	uint32_t x1324 = UINT32_MAX;
	static volatile int32_t t16 = -49;

    t16 = (x1321<<((x1322|x1323)-x1324));

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x1389 = 333488980;
	volatile int64_t x1390 = INT64_MAX;
	static uint32_t x1391 = 2050087285U;
	static int64_t x1392 = INT64_MAX;
	static volatile int32_t t17 = -12688722;

    t17 = (x1389<<((x1390|x1391)-x1392));

    if (t17 != 333488980) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x1449 = 23;
	uint64_t x1450 = UINT64_MAX;
	int64_t x1452 = -1LL;
	static volatile int32_t t18 = -54;

    t18 = (x1449<<((x1450|x1451)-x1452));

    if (t18 != 23) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x1677 = 16U;
	volatile uint32_t x1678 = UINT32_MAX;
	int64_t x1679 = -1LL;
	static int16_t x1680 = -1;
	volatile int32_t t19 = 1;

    t19 = (x1677<<((x1678|x1679)-x1680));

    if (t19 != 16) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1761 = INT8_MAX;
	int32_t x1763 = INT32_MAX;
	int64_t x1764 = -6LL;
	static int32_t t20 = 521431668;

    t20 = (x1761<<((x1762|x1763)-x1764));

    if (t20 != 4064) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x1766 = INT32_MIN;
	volatile int16_t x1767 = INT16_MIN;
	uint64_t t21 = 133909526942558277LLU;

    t21 = (x1765<<((x1766|x1767)-x1768));

    if (t21 != 616LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x1777 = 2968;
	uint64_t x1779 = UINT64_MAX;
	volatile int32_t x1780 = -1;
	volatile int32_t t22 = 11;

    t22 = (x1777<<((x1778|x1779)-x1780));

    if (t22 != 2968) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1917 = 3638137;
	volatile uint16_t x1918 = 1877U;
	int16_t x1920 = -1;
	volatile int32_t t23 = -1312338;

    t23 = (x1917<<((x1918|x1919)-x1920));

    if (t23 != 3638137) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x2013 = INT16_MAX;
	int8_t x2014 = -1;
	int8_t x2015 = INT8_MIN;

    t24 = (x2013<<((x2014|x2015)-x2016));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x2217 = UINT8_MAX;
	uint64_t x2218 = UINT64_MAX;
	int64_t x2220 = -1LL;
	volatile int32_t t25 = 0;

    t25 = (x2217<<((x2218|x2219)-x2220));

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x2221 = INT64_MAX;
	volatile int32_t x2222 = INT32_MIN;
	static int8_t x2223 = -1;
	uint32_t x2224 = UINT32_MAX;
	int64_t t26 = INT64_MAX;

    t26 = (x2221<<((x2222|x2223)-x2224));

    if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x2297 = 6205827219332899LLU;
	int8_t x2298 = -3;
	int32_t x2299 = INT32_MAX;
	volatile uint64_t t27 = 7695LLU;

    t27 = (x2297<<((x2298|x2299)-x2300));

    if (t27 != 438361512295366656LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2405 = 75078749829LLU;
	int8_t x2406 = -1;
	uint8_t x2407 = UINT8_MAX;
	static int8_t x2408 = -1;
	volatile uint64_t t28 = 45618884LLU;

    t28 = (x2405<<((x2406|x2407)-x2408));

    if (t28 != 75078749829LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x2534 = 6;
	int16_t x2535 = -1;
	static int16_t x2536 = -20;
	volatile int32_t t29 = 201221;

    t29 = (x2533<<((x2534|x2535)-x2536));

    if (t29 != 59244544) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x2573 = 62;
	int64_t x2574 = -2LL;
	static uint8_t x2575 = UINT8_MAX;
	volatile int32_t t30 = 6911344;

    t30 = (x2573<<((x2574|x2575)-x2576));

    if (t30 != 62) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x2586 = INT32_MIN;
	volatile int32_t x2587 = INT32_MAX;
	int32_t x2588 = -1;

    t31 = (x2585<<((x2586|x2587)-x2588));

    if (t31 != 192398549LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint16_t x2729 = 4U;
	uint8_t x2730 = UINT8_MAX;
	volatile int64_t x2731 = -1LL;
	int64_t x2732 = -1LL;
	volatile int32_t t32 = 3;

    t32 = (x2729<<((x2730|x2731)-x2732));

    if (t32 != 4) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x2765 = UINT32_MAX;
	static int64_t x2766 = -1LL;

    t33 = (x2765<<((x2766|x2767)-x2768));

    if (t33 != 4294901760U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x2769 = 28863606;
	int8_t x2770 = -1;
	int8_t x2772 = -1;
	int32_t t34 = 43;

    t34 = (x2769<<((x2770|x2771)-x2772));

    if (t34 != 28863606) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x2965 = INT16_MAX;
	static int32_t x2966 = -1;
	volatile int16_t x2967 = INT16_MIN;
	static int16_t x2968 = -1;
	volatile int32_t t35 = -29109;

    t35 = (x2965<<((x2966|x2967)-x2968));

    if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x2986 = -1;
	uint32_t x2987 = 9389096U;
	volatile int64_t t36 = 129142474578174LL;

    t36 = (x2985<<((x2986|x2987)-x2988));

    if (t36 != 3927998127LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x3105 = 5;
	uint8_t x3106 = 5U;
	uint8_t x3107 = 2U;
	uint64_t x3108 = 0LLU;
	static volatile int32_t t37 = -16;

    t37 = (x3105<<((x3106|x3107)-x3108));

    if (t37 != 640) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x3317 = 3;
	static int32_t x3318 = -1;
	int8_t x3320 = -1;
	int32_t t38 = -344684767;

    t38 = (x3317<<((x3318|x3319)-x3320));

    if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x3321 = 7251687261845580353LLU;
	int8_t x3322 = INT8_MIN;
	int8_t x3324 = INT8_MIN;
	volatile uint64_t t39 = 3558935731313LLU;

    t39 = (x3321<<((x3322|x3323)-x3324));

    if (t39 != 7251687261845580353LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x3398 = INT32_MAX;
	int32_t x3399 = INT32_MIN;
	static int32_t t40 = 2539;

    t40 = (x3397<<((x3398|x3399)-x3400));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x3513 = 206;
	volatile int8_t x3514 = -1;
	uint64_t x3515 = UINT64_MAX;
	static uint64_t x3516 = UINT64_MAX;
	volatile int32_t t41 = -1;

    t41 = (x3513<<((x3514|x3515)-x3516));

    if (t41 != 206) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x3782 = -1;
	volatile int64_t x3783 = 1LL;
	static int16_t x3784 = -1;
	volatile int32_t t42 = -1943664;

    t42 = (x3781<<((x3782|x3783)-x3784));

    if (t42 != 11) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x3857 = INT64_MAX;
	int32_t x3858 = INT32_MIN;
	int32_t x3859 = INT32_MAX;
	static int64_t x3860 = -1LL;
	volatile int64_t t43 = INT64_MAX;

    t43 = (x3857<<((x3858|x3859)-x3860));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x3879 = -1LL;
	int32_t t44 = -8059;

    t44 = (x3877<<((x3878|x3879)-x3880));

    if (t44 != 407) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x3897 = 10U;
	int64_t x3898 = INT64_MIN;
	int8_t x3899 = -1;
	int64_t x3900 = -1LL;
	static volatile int32_t t45 = 0;

    t45 = (x3897<<((x3898|x3899)-x3900));

    if (t45 != 10) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x3925 = INT8_MAX;
	uint32_t x3926 = 206U;
	int8_t x3927 = INT8_MAX;
	uint8_t x3928 = UINT8_MAX;

    t46 = (x3925<<((x3926|x3927)-x3928));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x3953 = 804LL;
	int16_t x3954 = -3017;
	int32_t x3955 = -1;
	uint64_t x3956 = UINT64_MAX;

    t47 = (x3953<<((x3954|x3955)-x3956));

    if (t47 != 804LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x4149 = UINT8_MAX;
	int16_t x4151 = INT16_MIN;
	int64_t x4152 = -1LL;
	int32_t t48 = -33;

    t48 = (x4149<<((x4150|x4151)-x4152));

    if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x4425 = 31U;
	int8_t x4427 = 23;
	static int32_t x4428 = -1;
	volatile int32_t t49 = -882;

    t49 = (x4425<<((x4426|x4427)-x4428));

    if (t49 != 31) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x4438 = -1;
	uint32_t t50 = UINT32_MAX;

    t50 = (x4437<<((x4438|x4439)-x4440));

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x4569 = 26U;
	int32_t x4570 = INT32_MAX;
	int16_t x4571 = INT16_MAX;
	static int32_t x4572 = INT32_MAX;

    t51 = (x4569<<((x4570|x4571)-x4572));

    if (t51 != 26U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x4677 = INT64_MAX;
	static int64_t x4678 = INT64_MIN;
	int32_t x4679 = INT32_MIN;
	int32_t x4680 = INT32_MIN;
	int64_t t52 = INT64_MAX;

    t52 = (x4677<<((x4678|x4679)-x4680));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x4773 = UINT32_MAX;
	uint16_t x4774 = 74U;
	int32_t x4775 = -1;
	volatile uint32_t x4776 = UINT32_MAX;

    t53 = (x4773<<((x4774|x4775)-x4776));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x5165 = 983U;
	static int16_t x5167 = -1;
	int16_t x5168 = -1;
	int32_t t54 = -370392133;

    t54 = (x5165<<((x5166|x5167)-x5168));

    if (t54 != 983) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x5173 = 11250U;
	int16_t x5174 = 9;
	int8_t x5175 = 27;
	volatile uint8_t x5176 = 0U;

    t55 = (x5173<<((x5174|x5175)-x5176));

    if (t55 != 2415919104U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x5281 = UINT16_MAX;
	static int64_t x5282 = -1LL;
	int8_t x5284 = -8;
	volatile int32_t t56 = -133879951;

    t56 = (x5281<<((x5282|x5283)-x5284));

    if (t56 != 8388480) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x5309 = 1U;
	static volatile uint8_t x5310 = UINT8_MAX;
	volatile int8_t x5311 = -1;
	int32_t t57 = 3;

    t57 = (x5309<<((x5310|x5311)-x5312));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x5329 = UINT16_MAX;
	uint64_t x5330 = UINT64_MAX;
	volatile int8_t x5332 = -1;

    t58 = (x5329<<((x5330|x5331)-x5332));

    if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x5469 = UINT16_MAX;
	volatile int8_t x5470 = -1;
	volatile uint32_t x5471 = 568808U;
	static int8_t x5472 = -1;
	int32_t t59 = -23;

    t59 = (x5469<<((x5470|x5471)-x5472));

    if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x5665 = 59;
	volatile uint8_t x5667 = 4U;
	int16_t x5668 = INT16_MIN;

    t60 = (x5665<<((x5666|x5667)-x5668));

    if (t60 != 944) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x5686 = INT16_MIN;
	int64_t x5687 = -1LL;
	int32_t x5688 = -1;
	static int32_t t61 = 203721421;

    t61 = (x5685<<((x5686|x5687)-x5688));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x5741 = 1U;
	uint64_t x5742 = UINT64_MAX;
	volatile int32_t t62 = -8519053;

    t62 = (x5741<<((x5742|x5743)-x5744));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x5785 = 0;
	int32_t x5786 = INT32_MIN;
	uint16_t x5787 = 6U;
	static int32_t x5788 = INT32_MIN;

    t63 = (x5785<<((x5786|x5787)-x5788));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x5977 = 1U;
	uint8_t x5978 = 0U;
	volatile int64_t x5980 = -1LL;
	int32_t t64 = -1;

    t64 = (x5977<<((x5978|x5979)-x5980));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x6021 = 1U;
	static int16_t x6022 = -19;
	uint16_t x6023 = UINT16_MAX;
	int32_t x6024 = -1;
	volatile uint32_t t65 = 6U;

    t65 = (x6021<<((x6022|x6023)-x6024));

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x6325 = INT64_MAX;
	int32_t x6326 = INT32_MAX;
	static volatile int8_t x6327 = INT8_MIN;
	uint64_t x6328 = UINT64_MAX;
	volatile int64_t t66 = INT64_MAX;

    t66 = (x6325<<((x6326|x6327)-x6328));

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x6457 = 125U;
	int64_t x6458 = -1LL;
	volatile int64_t x6459 = INT64_MAX;
	int32_t x6460 = -1;
	static int32_t t67 = 209;

    t67 = (x6457<<((x6458|x6459)-x6460));

    if (t67 != 125) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x6473 = INT16_MAX;
	int8_t x6475 = -1;
	volatile int32_t t68 = 836;

    t68 = (x6473<<((x6474|x6475)-x6476));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x6513 = 1774321815LLU;
	int64_t x6516 = -1LL;
	volatile uint64_t t69 = 8468467634702LLU;

    t69 = (x6513<<((x6514|x6515)-x6516));

    if (t69 != 1774321815LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x6749 = 412U;
	int16_t x6750 = -1;
	int32_t x6751 = -92045;
	static int16_t x6752 = -1;
	int32_t t70 = -74272;

    t70 = (x6749<<((x6750|x6751)-x6752));

    if (t70 != 412) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x6789 = 0;
	volatile int8_t x6790 = -4;
	volatile int64_t x6791 = -1LL;
	int8_t x6792 = -7;
	int32_t t71 = 1621;

    t71 = (x6789<<((x6790|x6791)-x6792));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x6869 = INT16_MAX;
	int64_t x6870 = -1LL;
	static int8_t x6871 = INT8_MAX;
	volatile int8_t x6872 = -1;

    t72 = (x6869<<((x6870|x6871)-x6872));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x6893 = INT16_MAX;
	int8_t x6896 = -12;
	int32_t t73 = -13;

    t73 = (x6893<<((x6894|x6895)-x6896));

    if (t73 != 67106816) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x7009 = 299751LLU;
	int8_t x7010 = INT8_MIN;
	volatile int8_t x7012 = INT8_MIN;

    t74 = (x7009<<((x7010|x7011)-x7012));

    if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x7070 = -1;
	int8_t x7072 = -1;
	volatile uint32_t t75 = 186732U;

    t75 = (x7069<<((x7070|x7071)-x7072));

    if (t75 != 387143540U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x7169 = INT32_MAX;
	uint8_t x7170 = UINT8_MAX;
	static int8_t x7171 = INT8_MIN;
	static int64_t x7172 = -1LL;

    t76 = (x7169<<((x7170|x7171)-x7172));

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x7186 = INT64_MIN;
	static int32_t x7187 = -1;
	volatile int64_t x7188 = -1LL;
	volatile int32_t t77 = -6042906;

    t77 = (x7185<<((x7186|x7187)-x7188));

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x7257 = 11022878541619LL;
	uint32_t x7258 = UINT32_MAX;
	uint16_t x7259 = 1667U;
	volatile int8_t x7260 = -1;
	static volatile int64_t t78 = -908640545120LL;

    t78 = (x7257<<((x7258|x7259)-x7260));

    if (t78 != 11022878541619LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x7271 = INT32_MAX;
	static int32_t x7272 = INT32_MAX;

    t79 = (x7269<<((x7270|x7271)-x7272));

    if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x7401 = 0U;
	int32_t x7402 = -1;
	uint64_t x7404 = UINT64_MAX;
	int32_t t80 = 10;

    t80 = (x7401<<((x7402|x7403)-x7404));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x7407 = INT64_MIN;
	int8_t x7408 = -1;

    t81 = (x7405<<((x7406|x7407)-x7408));

    if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x7469 = 4452211239694LLU;
	volatile uint8_t x7470 = UINT8_MAX;

    t82 = (x7469<<((x7470|x7471)-x7472));

    if (t82 != 4452211239694LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x7473 = 968361540586988692LL;
	static int32_t x7474 = -16338;
	static int32_t x7475 = -1;
	static int32_t x7476 = -1;
	int64_t t83 = -496323321LL;

    t83 = (x7473<<((x7474|x7475)-x7476));

    if (t83 != 968361540586988692LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x7537 = UINT64_MAX;
	volatile uint16_t x7539 = 28U;
	uint64_t x7540 = UINT64_MAX;
	static uint64_t t84 = 2619644587568963526LLU;

    t84 = (x7537<<((x7538|x7539)-x7540));

    if (t84 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x7549 = 10184U;
	int8_t x7550 = INT8_MAX;
	int8_t x7551 = INT8_MIN;
	static volatile int32_t t85 = 0;

    t85 = (x7549<<((x7550|x7551)-x7552));

    if (t85 != 10184) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x7570 = 3;
	uint32_t x7571 = 13U;
	static int8_t x7572 = -1;
	static volatile uint32_t t86 = 172146U;

    t86 = (x7569<<((x7570|x7571)-x7572));

    if (t86 != 28573696U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x7577 = 29;
	int64_t x7578 = 737239984359673607LL;
	volatile int8_t x7580 = -3;
	int32_t t87 = 4068;

    t87 = (x7577<<((x7578|x7579)-x7580));

    if (t87 != 116) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x7673 = 97019201741614731LLU;
	volatile int32_t x7674 = -1;
	volatile int32_t x7675 = -237248161;
	int64_t x7676 = -1LL;
	uint64_t t88 = 112144066967120945LLU;

    t88 = (x7673<<((x7674|x7675)-x7676));

    if (t88 != 97019201741614731LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x7773 = UINT16_MAX;
	int64_t x7774 = INT64_MIN;
	int64_t x7775 = -1LL;
	int16_t x7776 = -1;
	int32_t t89 = 50;

    t89 = (x7773<<((x7774|x7775)-x7776));

    if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x7782 = 4U;
	int8_t x7783 = -1;
	volatile uint64_t x7784 = UINT64_MAX;

    t90 = (x7781<<((x7782|x7783)-x7784));

    if (t90 != 29409) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x7833 = 68832657692924409LLU;
	static int8_t x7834 = INT8_MIN;
	int32_t x7835 = INT32_MAX;
	volatile uint64_t t91 = 2100936771LLU;

    t91 = (x7833<<((x7834|x7835)-x7836));

    if (t91 != 68832657692924409LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x7890 = INT16_MIN;
	uint32_t x7891 = UINT32_MAX;
	int16_t x7892 = -1;
	static volatile int32_t t92 = -385291;

    t92 = (x7889<<((x7890|x7891)-x7892));

    if (t92 != 205) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x7926 = INT16_MAX;

    t93 = (x7925<<((x7926|x7927)-x7928));

    if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x8041 = 55;
	int8_t x8042 = INT8_MIN;
	uint64_t x8043 = UINT64_MAX;
	static volatile int32_t t94 = -21698605;

    t94 = (x8041<<((x8042|x8043)-x8044));

    if (t94 != 55) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x8133 = 1873659806LL;
	volatile uint64_t x8134 = UINT64_MAX;
	static uint32_t x8135 = 24660U;
	static volatile int16_t x8136 = -29;
	int64_t t95 = -223650LL;

    t95 = (x8133<<((x8134|x8135)-x8136));

    if (t95 != 502956724412481536LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x8245 = 109U;
	int64_t x8247 = INT64_MAX;
	int64_t x8248 = -1LL;

    t96 = (x8245<<((x8246|x8247)-x8248));

    if (t96 != 109) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x8357 = 2U;
	static int8_t x8359 = -1;
	static volatile int8_t x8360 = -10;
	volatile int32_t t97 = 1;

    t97 = (x8357<<((x8358|x8359)-x8360));

    if (t97 != 1024) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x8377 = 68384116269302LLU;
	volatile uint64_t x8378 = UINT64_MAX;
	int64_t x8379 = 681779489839492LL;
	uint64_t t98 = 97642810835166464LLU;

    t98 = (x8377<<((x8378|x8379)-x8380));

    if (t98 != 68384116269302LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x8481 = 0;
	static uint64_t x8482 = UINT64_MAX;
	int32_t x8483 = -1;
	static int64_t x8484 = -1LL;
	int32_t t99 = -3369457;

    t99 = (x8481<<((x8482|x8483)-x8484));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint32_t x8553 = UINT32_MAX;
	volatile int64_t x8554 = INT64_MIN;
	uint16_t x8555 = 0U;
	uint32_t t100 = UINT32_MAX;

    t100 = (x8553<<((x8554|x8555)-x8556));

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x8614 = -1;
	int64_t x8615 = 885384852078229386LL;
	static volatile uint64_t x8616 = UINT64_MAX;
	static int32_t t101 = -3425064;

    t101 = (x8613<<((x8614|x8615)-x8616));

    if (t101 != 65535) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x8674 = 0U;
	volatile uint8_t x8675 = UINT8_MAX;
	static volatile uint8_t x8676 = UINT8_MAX;
	static volatile int32_t t102 = INT32_MAX;

    t102 = (x8673<<((x8674|x8675)-x8676));

    if (t102 != INT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x8689 = UINT32_MAX;
	volatile int32_t x8690 = INT32_MIN;
	uint32_t x8691 = UINT32_MAX;
	uint32_t x8692 = UINT32_MAX;

    t103 = (x8689<<((x8690|x8691)-x8692));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x8751 = INT16_MAX;
	int32_t x8752 = -1;
	volatile int32_t t104 = -32481060;

    t104 = (x8749<<((x8750|x8751)-x8752));

    if (t104 != 520) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x8789 = 0;
	int16_t x8790 = -632;
	int8_t x8791 = -1;
	static int32_t t105 = 535483539;

    t105 = (x8789<<((x8790|x8791)-x8792));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x8830 = 110LLU;
	int8_t x8832 = -14;
	volatile int32_t t106 = -63;

    t106 = (x8829<<((x8830|x8831)-x8832));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x8857 = 3887846145810497527LLU;
	int32_t x8858 = INT32_MIN;
	int16_t x8860 = -1;
	volatile uint64_t t107 = 6556332LLU;

    t107 = (x8857<<((x8858|x8859)-x8860));

    if (t107 != 3887846145810497527LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x8881 = UINT8_MAX;
	static int8_t x8882 = -1;
	uint8_t x8883 = 4U;
	static int64_t x8884 = -1LL;
	volatile int32_t t108 = 1248;

    t108 = (x8881<<((x8882|x8883)-x8884));

    if (t108 != 255) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x9001 = INT16_MAX;
	static uint16_t x9002 = UINT16_MAX;
	int16_t x9003 = INT16_MIN;
	static int8_t x9004 = -1;
	static volatile int32_t t109 = -691303;

    t109 = (x9001<<((x9002|x9003)-x9004));

    if (t109 != 32767) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x9085 = 412U;
	int8_t x9086 = 45;
	int32_t x9087 = 1;
	static uint8_t x9088 = 15U;
	uint32_t t110 = 131397595U;

    t110 = (x9085<<((x9086|x9087)-x9088));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x9109 = 367LLU;
	uint64_t x9110 = UINT64_MAX;
	uint16_t x9111 = 1U;
	volatile int8_t x9112 = -1;
	static uint64_t t111 = 28452557436LLU;

    t111 = (x9109<<((x9110|x9111)-x9112));

    if (t111 != 367LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x9125 = INT8_MAX;
	uint64_t x9126 = 401676LLU;
	int32_t x9127 = -1;
	int8_t x9128 = -1;
	volatile int32_t t112 = -53;

    t112 = (x9125<<((x9126|x9127)-x9128));

    if (t112 != 127) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x9218 = 0U;
	int8_t x9219 = -1;
	volatile int8_t x9220 = -1;
	volatile int32_t t113 = -15603;

    t113 = (x9217<<((x9218|x9219)-x9220));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x9229 = 38040845946897LLU;
	static int8_t x9230 = INT8_MIN;
	int16_t x9231 = INT16_MIN;
	volatile int8_t x9232 = INT8_MIN;
	uint64_t t114 = 17795500340995LLU;

    t114 = (x9229<<((x9230|x9231)-x9232));

    if (t114 != 38040845946897LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x9353 = 21;
	int32_t x9356 = -1;
	static int32_t t115 = 157565;

    t115 = (x9353<<((x9354|x9355)-x9356));

    if (t115 != 21) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x9453 = 72273U;
	volatile int16_t x9454 = INT16_MIN;
	int64_t x9455 = INT64_MAX;
	uint64_t x9456 = UINT64_MAX;
	volatile uint32_t t116 = 1447094831U;

    t116 = (x9453<<((x9454|x9455)-x9456));

    if (t116 != 72273U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x9529 = 16388LL;
	volatile uint32_t x9530 = UINT32_MAX;
	volatile int8_t x9531 = INT8_MIN;
	int16_t x9532 = -1;
	int64_t t117 = 1476LL;

    t117 = (x9529<<((x9530|x9531)-x9532));

    if (t117 != 16388LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x9622 = 24;
	uint64_t x9623 = UINT64_MAX;
	volatile uint32_t t118 = UINT32_MAX;

    t118 = (x9621<<((x9622|x9623)-x9624));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x9706 = UINT64_MAX;
	uint32_t x9707 = 12386855U;
	static uint64_t x9708 = UINT64_MAX;
	uint64_t t119 = 9912389974LLU;

    t119 = (x9705<<((x9706|x9707)-x9708));

    if (t119 != 2010881LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x9953 = INT16_MAX;
	volatile int8_t x9954 = -1;
	uint32_t x9956 = UINT32_MAX;

    t120 = (x9953<<((x9954|x9955)-x9956));

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x9965 = 7U;
	volatile int32_t x9966 = INT32_MIN;
	volatile int64_t x9967 = -1LL;
	int32_t x9968 = -1;
	int32_t t121 = -1;

    t121 = (x9965<<((x9966|x9967)-x9968));

    if (t121 != 7) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x9993 = 7755U;
	int16_t x9994 = INT16_MAX;
	volatile int8_t x9995 = -1;
	int16_t x9996 = -1;

    t122 = (x9993<<((x9994|x9995)-x9996));

    if (t122 != 7755) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x10101 = 37292119415554LLU;
	int8_t x10102 = INT8_MIN;
	volatile int16_t x10103 = INT16_MAX;
	static uint64_t t123 = 41LLU;

    t123 = (x10101<<((x10102|x10103)-x10104));

    if (t123 != 37292119415554LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x10293 = 43;
	int8_t x10294 = INT8_MIN;
	int32_t x10295 = INT32_MIN;
	static volatile int8_t x10296 = INT8_MIN;
	static int32_t t124 = 4176273;

    t124 = (x10293<<((x10294|x10295)-x10296));

    if (t124 != 43) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x10365 = 12;
	uint16_t x10366 = 24U;
	int32_t x10368 = -1;

    t125 = (x10365<<((x10366|x10367)-x10368));

    if (t125 != 12) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x10385 = 10;
	static int32_t x10386 = -1;
	static int64_t x10387 = INT64_MIN;
	int32_t x10388 = -1;
	static int32_t t126 = -1;

    t126 = (x10385<<((x10386|x10387)-x10388));

    if (t126 != 10) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x10405 = INT8_MAX;
	static int64_t x10406 = 828840LL;
	int8_t x10407 = -1;
	volatile int8_t x10408 = -1;
	volatile int32_t t127 = 0;

    t127 = (x10405<<((x10406|x10407)-x10408));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x10466 = UINT16_MAX;
	volatile uint32_t t128 = 335U;

    t128 = (x10465<<((x10466|x10467)-x10468));

    if (t128 != 28669400U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x10501 = 1574U;
	static int16_t x10503 = -1;
	static int64_t x10504 = -1LL;
	int32_t t129 = 46695;

    t129 = (x10501<<((x10502|x10503)-x10504));

    if (t129 != 1574) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x10870 = 64U;
	static int8_t x10871 = -1;
	int8_t x10872 = -1;
	volatile int32_t t130 = INT32_MAX;

    t130 = (x10869<<((x10870|x10871)-x10872));

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x10931 = -1;
	uint64_t x10932 = UINT64_MAX;
	int32_t t131 = -16041437;

    t131 = (x10929<<((x10930|x10931)-x10932));

    if (t131 != 8085) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x10941 = INT16_MAX;
	static volatile int32_t x10944 = -1;

    t132 = (x10941<<((x10942|x10943)-x10944));

    if (t132 != 32767) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x11157 = UINT16_MAX;
	volatile int32_t x11158 = -1;
	int64_t x11159 = -126LL;

    t133 = (x11157<<((x11158|x11159)-x11160));

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x11393 = UINT32_MAX;
	int8_t x11394 = INT8_MAX;
	int32_t x11396 = -1;
	uint32_t t134 = UINT32_MAX;

    t134 = (x11393<<((x11394|x11395)-x11396));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x11761 = 428594LL;
	int64_t x11762 = -1LL;
	volatile int32_t x11763 = -1;
	int32_t x11764 = -1;
	int64_t t135 = -7LL;

    t135 = (x11761<<((x11762|x11763)-x11764));

    if (t135 != 428594LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x11901 = 8U;
	volatile int8_t x11902 = INT8_MIN;
	int32_t x11903 = -1;
	int32_t t136 = -114198;

    t136 = (x11901<<((x11902|x11903)-x11904));

    if (t136 != 8) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x11941 = UINT32_MAX;
	int8_t x11943 = -1;
	int32_t x11944 = -1;

    t137 = (x11941<<((x11942|x11943)-x11944));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x11977 = 359220013U;
	static int16_t x11978 = INT16_MIN;
	static uint64_t x11979 = UINT64_MAX;
	int64_t x11980 = -1LL;
	volatile uint32_t t138 = 4084U;

    t138 = (x11977<<((x11978|x11979)-x11980));

    if (t138 != 359220013U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x12009 = 792878820379389LLU;
	int8_t x12010 = -3;
	int8_t x12011 = 7;
	int8_t x12012 = -1;
	volatile uint64_t t139 = 1588LLU;

    t139 = (x12009<<((x12010|x12011)-x12012));

    if (t139 != 792878820379389LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x12053 = 499611248LLU;
	volatile uint8_t x12054 = 27U;
	static uint8_t x12055 = 3U;
	int16_t x12056 = -3;
	volatile uint64_t t140 = 265218202417996276LLU;

    t140 = (x12053<<((x12054|x12055)-x12056));

    if (t140 != 536453492718436352LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x12265 = 12934641348LLU;
	int64_t x12266 = INT64_MAX;
	static int64_t x12267 = -13175943390934767LL;
	volatile uint64_t t141 = 8977278770LLU;

    t141 = (x12265<<((x12266|x12267)-x12268));

    if (t141 != 12934641348LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x12337 = UINT16_MAX;
	uint64_t x12338 = 12672301127600LLU;
	int64_t x12339 = INT64_MAX;
	int64_t x12340 = INT64_MAX;
	volatile int32_t t142 = 145639162;

    t142 = (x12337<<((x12338|x12339)-x12340));

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x12381 = UINT32_MAX;
	int16_t x12382 = INT16_MIN;
	int8_t x12383 = -1;
	volatile uint64_t x12384 = UINT64_MAX;
	static volatile uint32_t t143 = UINT32_MAX;

    t143 = (x12381<<((x12382|x12383)-x12384));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x12385 = UINT16_MAX;
	int32_t x12386 = INT32_MIN;
	static int32_t x12387 = INT32_MIN;
	volatile int32_t x12388 = INT32_MIN;
	int32_t t144 = 1005697878;

    t144 = (x12385<<((x12386|x12387)-x12388));

    if (t144 != 65535) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x12433 = 1;
	int64_t x12434 = -1LL;
	int32_t x12435 = INT32_MAX;
	int16_t x12436 = -1;
	static volatile int32_t t145 = 3714238;

    t145 = (x12433<<((x12434|x12435)-x12436));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x12577 = 2LLU;
	static uint64_t x12578 = UINT64_MAX;
	uint64_t x12579 = UINT64_MAX;
	volatile uint64_t x12580 = UINT64_MAX;
	uint64_t t146 = 194713446086092275LLU;

    t146 = (x12577<<((x12578|x12579)-x12580));

    if (t146 != 2LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x12585 = 58U;
	volatile int32_t x12587 = INT32_MAX;
	int32_t x12588 = -1;
	int32_t t147 = -29060;

    t147 = (x12585<<((x12586|x12587)-x12588));

    if (t147 != 58) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x12609 = 1409956;
	int16_t x12610 = -87;
	int16_t x12611 = INT16_MAX;
	static int32_t t148 = 706596912;

    t148 = (x12609<<((x12610|x12611)-x12612));

    if (t148 != 1409956) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x12721 = 1162LLU;
	int32_t x12722 = -1;
	int8_t x12723 = -1;
	static int64_t x12724 = -1LL;
	uint64_t t149 = 5LLU;

    t149 = (x12721<<((x12722|x12723)-x12724));

    if (t149 != 1162LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x12785 = INT32_MAX;
	static int8_t x12787 = -13;
	static uint32_t x12788 = UINT32_MAX;

    t150 = (x12785<<((x12786|x12787)-x12788));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x12933 = 15138U;
	int8_t x12934 = INT8_MIN;
	static uint8_t x12935 = UINT8_MAX;
	volatile uint64_t x12936 = UINT64_MAX;
	int32_t t151 = 1;

    t151 = (x12933<<((x12934|x12935)-x12936));

    if (t151 != 15138) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x12937 = 73658;
	int8_t x12938 = INT8_MIN;
	int16_t x12939 = -1;
	volatile int32_t t152 = -73;

    t152 = (x12937<<((x12938|x12939)-x12940));

    if (t152 != 73658) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x12969 = INT8_MAX;
	static int8_t x12970 = -1;
	int16_t x12971 = -131;
	uint32_t x12972 = UINT32_MAX;
	volatile int32_t t153 = -238;

    t153 = (x12969<<((x12970|x12971)-x12972));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x13017 = 15963;
	static uint32_t x13018 = UINT32_MAX;
	static int64_t x13019 = -403022LL;
	int32_t t154 = 19035355;

    t154 = (x13017<<((x13018|x13019)-x13020));

    if (t154 != 15963) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x13038 = -1;
	int16_t x13040 = -17;
	int32_t t155 = -446646;

    t155 = (x13037<<((x13038|x13039)-x13040));

    if (t155 != 8323072) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x13043 = -1;
	int16_t x13044 = -1;

    t156 = (x13041<<((x13042|x13043)-x13044));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x13074 = -344;
	uint64_t x13075 = UINT64_MAX;
	volatile uint64_t x13076 = UINT64_MAX;
	uint64_t t157 = 5LLU;

    t157 = (x13073<<((x13074|x13075)-x13076));

    if (t157 != 184294LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x13081 = INT32_MAX;
	volatile uint32_t x13082 = UINT32_MAX;
	int32_t x13083 = INT32_MAX;
	int32_t x13084 = -1;
	int32_t t158 = INT32_MAX;

    t158 = (x13081<<((x13082|x13083)-x13084));

    if (t158 != INT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x13361 = 979;
	static int8_t x13362 = -1;
	int32_t t159 = -3976;

    t159 = (x13361<<((x13362|x13363)-x13364));

    if (t159 != 979) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x13366 = INT64_MAX;

    t160 = (x13365<<((x13366|x13367)-x13368));

    if (t160 != 3) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x13397 = 218U;
	uint8_t x13399 = UINT8_MAX;
	static uint16_t x13400 = UINT16_MAX;
	volatile int32_t t161 = -7811;

    t161 = (x13397<<((x13398|x13399)-x13400));

    if (t161 != 218) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x13421 = 2072957131LL;
	volatile int16_t x13422 = 298;
	volatile uint64_t x13423 = UINT64_MAX;
	int8_t x13424 = -3;
	static volatile int64_t t162 = 1931090577LL;

    t162 = (x13421<<((x13422|x13423)-x13424));

    if (t162 != 8291828524LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x13575 = INT16_MAX;
	int16_t x13576 = -1;
	volatile int32_t t163 = -36;

    t163 = (x13573<<((x13574|x13575)-x13576));

    if (t163 != 10) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x13685 = UINT8_MAX;
	volatile int16_t x13687 = -1;
	int8_t x13688 = -1;
	volatile int32_t t164 = 6717;

    t164 = (x13685<<((x13686|x13687)-x13688));

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x13747 = INT32_MAX;
	int32_t x13748 = INT32_MAX;
	volatile int32_t t165 = 55965;

    t165 = (x13745<<((x13746|x13747)-x13748));

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x13768 = -1;
	volatile int32_t t166 = -21146562;

    t166 = (x13765<<((x13766|x13767)-x13768));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x13885 = 1U;
	int8_t x13886 = INT8_MIN;
	int64_t x13887 = -1LL;
	int16_t x13888 = -1;
	volatile int32_t t167 = 281011582;

    t167 = (x13885<<((x13886|x13887)-x13888));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x13913 = 1047U;
	static uint32_t x13914 = 169U;
	int8_t x13915 = -1;
	static int16_t x13916 = -1;
	int32_t t168 = 11;

    t168 = (x13913<<((x13914|x13915)-x13916));

    if (t168 != 1047) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x14026 = 62U;
	int16_t x14027 = -1;
	static int8_t x14028 = -1;
	static int32_t t169 = 1090;

    t169 = (x14025<<((x14026|x14027)-x14028));

    if (t169 != 926) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x14033 = 10U;
	int8_t x14034 = -1;
	int8_t x14035 = 1;
	volatile int8_t x14036 = -1;

    t170 = (x14033<<((x14034|x14035)-x14036));

    if (t170 != 10) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x14063 = 114712804011LLU;
	static int32_t t171 = 2032238;

    t171 = (x14061<<((x14062|x14063)-x14064));

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x14145 = UINT64_MAX;
	volatile int8_t x14146 = -1;
	int16_t x14148 = -11;
	volatile uint64_t t172 = 996100254322722LLU;

    t172 = (x14145<<((x14146|x14147)-x14148));

    if (t172 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x14297 = INT8_MAX;
	static int32_t x14298 = -3;
	int8_t x14300 = -1;
	int32_t t173 = -107346;

    t173 = (x14297<<((x14298|x14299)-x14300));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x14301 = 0;
	int32_t x14302 = -1;
	uint64_t x14304 = UINT64_MAX;
	volatile int32_t t174 = -1;

    t174 = (x14301<<((x14302|x14303)-x14304));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x14305 = 71783821558155LLU;
	volatile uint8_t x14306 = 5U;
	int8_t x14307 = -1;

    t175 = (x14305<<((x14306|x14307)-x14308));

    if (t175 != 71783821558155LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x14373 = UINT16_MAX;
	uint8_t x14374 = 1U;
	uint64_t x14375 = UINT64_MAX;
	int32_t x14376 = -1;

    t176 = (x14373<<((x14374|x14375)-x14376));

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x14421 = 908914558162397LLU;
	int32_t x14422 = INT32_MIN;
	static uint32_t x14423 = UINT32_MAX;
	static int32_t x14424 = -1;
	uint64_t t177 = 1LLU;

    t177 = (x14421<<((x14422|x14423)-x14424));

    if (t177 != 908914558162397LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x14429 = 122811U;
	int8_t x14430 = -1;
	int8_t x14432 = -2;
	volatile uint32_t t178 = 6699U;

    t178 = (x14429<<((x14430|x14431)-x14432));

    if (t178 != 245622U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x14449 = UINT64_MAX;
	volatile int8_t x14450 = -1;
	int16_t x14451 = -1;
	static uint64_t x14452 = UINT64_MAX;
	uint64_t t179 = UINT64_MAX;

    t179 = (x14449<<((x14450|x14451)-x14452));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x14473 = 301843659LL;
	int8_t x14474 = -1;
	uint8_t x14475 = 0U;
	static volatile uint64_t x14476 = UINT64_MAX;

    t180 = (x14473<<((x14474|x14475)-x14476));

    if (t180 != 301843659LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x14621 = 1714560793U;
	uint8_t x14622 = 52U;
	uint32_t x14623 = UINT32_MAX;
	int32_t x14624 = -1;
	uint32_t t181 = 26U;

    t181 = (x14621<<((x14622|x14623)-x14624));

    if (t181 != 1714560793U) { NG(); } else { ; }
	
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


    return 0;
}

