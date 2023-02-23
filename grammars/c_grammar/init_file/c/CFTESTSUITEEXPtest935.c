
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

int16_t x70 = INT16_MIN;
volatile int64_t x174 = INT64_MIN;
static uint32_t x191 = 4042U;
int64_t x433 = 912479026820LL;
int32_t x485 = 20;
int32_t x574 = INT32_MIN;
int32_t x575 = INT32_MIN;
int8_t x722 = 25;
int8_t x723 = INT8_MAX;
static uint32_t x724 = 6U;
int8_t x848 = 8;
volatile uint64_t x945 = UINT64_MAX;
int64_t x975 = INT64_MIN;
int8_t x1162 = INT8_MIN;
static uint16_t x1433 = 0U;
uint8_t x1436 = 0U;
uint8_t x1490 = 85U;
static uint8_t x1672 = 3U;
uint32_t x1834 = 1U;
volatile int64_t t22 = -6228355473683LL;
int32_t x2113 = INT32_MAX;
int16_t x2295 = INT16_MIN;
static volatile uint16_t x2762 = 5U;
uint8_t x2917 = 2U;
int64_t x3091 = INT64_MIN;
static volatile int32_t x3141 = 417191;
int32_t x3169 = 5396;
static int8_t x3170 = -1;
static int32_t x3255 = INT32_MIN;
static int32_t x3302 = 14;
int32_t t38 = 68326341;
uint64_t x3359 = 136849LLU;
static volatile int32_t x3486 = INT32_MIN;
uint64_t x3681 = UINT64_MAX;
uint8_t x3820 = 25U;
volatile int8_t x3855 = INT8_MAX;
uint8_t x4045 = 13U;
static int8_t x4156 = 1;
uint64_t t47 = 88481LLU;
uint64_t x4234 = UINT64_MAX;
static volatile int64_t x4262 = 7187674910LL;
static volatile uint16_t x4389 = UINT16_MAX;
uint16_t x4392 = 4U;
volatile uint16_t x4541 = 148U;
volatile int8_t x4543 = INT8_MIN;
uint32_t x4788 = 17U;
int32_t t53 = 6335;
volatile uint16_t x4907 = UINT16_MAX;
volatile int32_t t55 = 98;
uint8_t x5004 = 23U;
int16_t x5018 = -197;
int64_t x5019 = -1LL;
int8_t x5066 = 8;
volatile int64_t t58 = -2219870812211130185LL;
int16_t x5351 = -1;
int8_t x5451 = 49;
int32_t x5497 = 15;
static volatile int8_t x5560 = 2;
int32_t x5790 = INT32_MAX;
static int8_t x5791 = INT8_MAX;
static volatile int32_t t65 = -1;
volatile uint16_t x5887 = 11059U;
int32_t t67 = -1;
uint64_t x5965 = 43598711003235LLU;
int8_t x6205 = INT8_MAX;
int16_t x6206 = 15;
int64_t x6303 = INT64_MIN;
uint16_t x6304 = 52U;
volatile uint32_t t71 = 1604260883U;
static int32_t x6421 = 57172029;
int8_t x6696 = 0;
static int64_t x6827 = INT64_MIN;
uint32_t x6858 = 62U;
int16_t x6873 = INT16_MAX;
static int64_t x6874 = -1LL;
uint8_t x6875 = 1U;
uint16_t x6880 = 24U;
static uint64_t x7305 = 365007383377084793LLU;
uint8_t x7307 = 6U;
uint32_t x7425 = UINT32_MAX;
static int32_t x7426 = INT32_MIN;
uint16_t x7620 = 1U;
int32_t x7950 = -38775506;
int64_t x7951 = -1LL;
int16_t x7952 = 23;
static int16_t x7987 = -1;
static int32_t x8038 = INT32_MIN;
volatile uint32_t x8269 = UINT32_MAX;
uint16_t x8293 = 24695U;
uint32_t x8294 = 44U;
volatile uint8_t x8295 = 1U;
uint64_t x8590 = 7718LLU;
uint32_t t93 = UINT32_MAX;
static int8_t x8761 = INT8_MAX;
uint32_t x8763 = 44U;
int16_t x8764 = 7;
int8_t x9228 = 15;
int16_t x9351 = 22;
int16_t x9535 = INT16_MIN;
volatile uint32_t x9593 = UINT32_MAX;
int8_t x9597 = INT8_MAX;
uint16_t x9599 = 9440U;
volatile int8_t x9698 = 0;
uint16_t x9789 = 451U;
volatile int64_t x9922 = 7905581215LL;
int16_t x10080 = 0;
static volatile int64_t t112 = INT64_MAX;
int32_t x10263 = -1;
int16_t x10264 = 1;
static uint8_t x10293 = 19U;
volatile uint64_t x10318 = 97128601LLU;
static uint16_t x10405 = 13U;
static volatile int32_t t116 = -584086138;
volatile int16_t x10464 = 0;
uint32_t x10908 = 8U;
volatile uint64_t x10922 = 19555959LLU;
uint32_t t121 = 13530235U;
int8_t x10934 = 60;
volatile int32_t x11017 = 1;
static volatile uint32_t x11020 = 24U;
int64_t x11042 = INT64_MAX;
int8_t x11043 = -1;
int64_t x11278 = INT64_MIN;
int8_t x11280 = 2;
static uint8_t x11321 = 17U;


void f0(void) {
    	static uint32_t x69 = 35142738U;
	int16_t x71 = 1;
	uint16_t x72 = 1U;
	uint32_t t0 = 7969U;

    t0 = (x69>>((x70%x71)>>x72));

    if (t0 != 35142738U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x173 = 1;
	volatile int8_t x175 = -1;
	int32_t x176 = 8;
	static volatile int32_t t1 = 335994;

    t1 = (x173>>((x174%x175)>>x176));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x189 = 3213LL;
	int32_t x190 = INT32_MIN;
	uint32_t x192 = 15U;
	int64_t t2 = 2754691LL;

    t2 = (x189>>((x190%x191)>>x192));

    if (t2 != 3213LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x434 = INT64_MIN;
	volatile int16_t x435 = -1;
	uint16_t x436 = 3U;
	static volatile int64_t t3 = -2044843725LL;

    t3 = (x433>>((x434%x435)>>x436));

    if (t3 != 912479026820LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x486 = -1;
	uint64_t x487 = UINT64_MAX;
	int8_t x488 = 35;
	int32_t t4 = -7361502;

    t4 = (x485>>((x486%x487)>>x488));

    if (t4 != 20) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x573 = 74U;
	static uint8_t x576 = 11U;
	volatile int32_t t5 = 670;

    t5 = (x573>>((x574%x575)>>x576));

    if (t5 != 74) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x625 = INT32_MAX;
	static volatile uint16_t x626 = 624U;
	static volatile int64_t x627 = INT64_MIN;
	uint8_t x628 = 5U;
	volatile int32_t t6 = 7516640;

    t6 = (x625>>((x626%x627)>>x628));

    if (t6 != 4095) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x685 = 372191LLU;
	uint16_t x686 = 236U;
	int16_t x687 = 16;
	int8_t x688 = 14;
	uint64_t t7 = 3102745LLU;

    t7 = (x685>>((x686%x687)>>x688));

    if (t7 != 372191LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x721 = INT8_MAX;
	int32_t t8 = 2840330;

    t8 = (x721>>((x722%x723)>>x724));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x845 = UINT16_MAX;
	static int64_t x846 = INT64_MIN;
	static int32_t x847 = INT32_MIN;
	static int32_t t9 = -47;

    t9 = (x845>>((x846%x847)>>x848));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x865 = INT16_MAX;
	int8_t x866 = INT8_MAX;
	static uint16_t x867 = UINT16_MAX;
	uint8_t x868 = 2U;
	static volatile int32_t t10 = -497;

    t10 = (x865>>((x866%x867)>>x868));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x946 = 1;
	volatile int8_t x947 = -1;
	int8_t x948 = 1;
	volatile uint64_t t11 = UINT64_MAX;

    t11 = (x945>>((x946%x947)>>x948));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x973 = 56U;
	int64_t x974 = INT64_MIN;
	uint16_t x976 = 2U;
	volatile int32_t t12 = 23;

    t12 = (x973>>((x974%x975)>>x976));

    if (t12 != 56) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x1013 = UINT64_MAX;
	uint32_t x1014 = 18U;
	int16_t x1015 = INT16_MIN;
	static volatile uint32_t x1016 = 12U;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = (x1013>>((x1014%x1015)>>x1016));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1121 = 679U;
	static int32_t x1122 = INT32_MIN;
	int8_t x1123 = INT8_MIN;
	static uint8_t x1124 = 1U;
	int32_t t14 = 179237;

    t14 = (x1121>>((x1122%x1123)>>x1124));

    if (t14 != 679) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x1161 = 8048222U;
	static volatile int8_t x1163 = INT8_MIN;
	uint32_t x1164 = 12U;
	volatile uint32_t t15 = 11305U;

    t15 = (x1161>>((x1162%x1163)>>x1164));

    if (t15 != 8048222U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x1193 = UINT64_MAX;
	int8_t x1194 = INT8_MAX;
	uint64_t x1195 = UINT64_MAX;
	int32_t x1196 = 1;
	uint64_t t16 = 30251300759LLU;

    t16 = (x1193>>((x1194%x1195)>>x1196));

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1369 = 112LLU;
	uint8_t x1370 = UINT8_MAX;
	volatile int64_t x1371 = INT64_MIN;
	uint8_t x1372 = 15U;
	volatile uint64_t t17 = 281LLU;

    t17 = (x1369>>((x1370%x1371)>>x1372));

    if (t17 != 112LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x1429 = 9U;
	static int8_t x1430 = 27;
	static int64_t x1431 = -1LL;
	uint8_t x1432 = 1U;
	volatile int32_t t18 = -102301;

    t18 = (x1429>>((x1430%x1431)>>x1432));

    if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x1434 = 1U;
	uint64_t x1435 = 1LLU;
	int32_t t19 = -3626;

    t19 = (x1433>>((x1434%x1435)>>x1436));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1489 = 2538364585LLU;
	int64_t x1491 = -1LL;
	volatile uint8_t x1492 = 0U;
	volatile uint64_t t20 = 295064483LLU;

    t20 = (x1489>>((x1490%x1491)>>x1492));

    if (t20 != 2538364585LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x1669 = 126U;
	static uint8_t x1670 = 59U;
	int64_t x1671 = INT64_MIN;
	volatile uint32_t t21 = 2U;

    t21 = (x1669>>((x1670%x1671)>>x1672));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x1833 = 324LL;
	static int32_t x1835 = INT32_MIN;
	volatile uint8_t x1836 = 3U;

    t22 = (x1833>>((x1834%x1835)>>x1836));

    if (t22 != 324LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x1929 = 9U;
	int16_t x1930 = 0;
	int64_t x1931 = -205LL;
	static volatile uint64_t x1932 = 7LLU;
	int32_t t23 = -505470;

    t23 = (x1929>>((x1930%x1931)>>x1932));

    if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x2069 = UINT8_MAX;
	int16_t x2070 = INT16_MIN;
	int64_t x2071 = -1LL;
	uint8_t x2072 = 39U;
	static volatile int32_t t24 = -12;

    t24 = (x2069>>((x2070%x2071)>>x2072));

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x2114 = -1;
	uint32_t x2115 = UINT32_MAX;
	int8_t x2116 = 2;
	volatile int32_t t25 = INT32_MAX;

    t25 = (x2113>>((x2114%x2115)>>x2116));

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x2229 = UINT8_MAX;
	uint64_t x2230 = UINT64_MAX;
	int8_t x2231 = INT8_MAX;
	uint8_t x2232 = 31U;
	static volatile int32_t t26 = -741693;

    t26 = (x2229>>((x2230%x2231)>>x2232));

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x2293 = INT32_MAX;
	uint16_t x2294 = 97U;
	static int8_t x2296 = 28;
	int32_t t27 = INT32_MAX;

    t27 = (x2293>>((x2294%x2295)>>x2296));

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x2329 = 44748;
	int16_t x2330 = 0;
	int8_t x2331 = INT8_MAX;
	int64_t x2332 = 6LL;
	volatile int32_t t28 = 1;

    t28 = (x2329>>((x2330%x2331)>>x2332));

    if (t28 != 44748) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x2685 = 603850607U;
	int32_t x2686 = INT32_MIN;
	volatile int32_t x2687 = INT32_MIN;
	static volatile int8_t x2688 = 1;
	uint32_t t29 = 9420404U;

    t29 = (x2685>>((x2686%x2687)>>x2688));

    if (t29 != 603850607U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x2761 = 3973586611LLU;
	uint32_t x2763 = 2U;
	int16_t x2764 = 13;
	uint64_t t30 = 1536524LLU;

    t30 = (x2761>>((x2762%x2763)>>x2764));

    if (t30 != 3973586611LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x2813 = 2U;
	static int32_t x2814 = INT32_MAX;
	int32_t x2815 = INT32_MAX;
	int32_t x2816 = 0;
	int32_t t31 = 12;

    t31 = (x2813>>((x2814%x2815)>>x2816));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x2918 = 47U;
	uint8_t x2919 = 2U;
	uint8_t x2920 = 2U;
	volatile int32_t t32 = -90;

    t32 = (x2917>>((x2918%x2919)>>x2920));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x2921 = 12612660U;
	uint8_t x2922 = 18U;
	static uint32_t x2923 = 993399U;
	int8_t x2924 = 0;
	static volatile uint32_t t33 = 29173U;

    t33 = (x2921>>((x2922%x2923)>>x2924));

    if (t33 != 48U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x3089 = 2U;
	volatile uint16_t x3090 = UINT16_MAX;
	int32_t x3092 = 57;
	int32_t t34 = -497;

    t34 = (x3089>>((x3090%x3091)>>x3092));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x3142 = 3U;
	uint16_t x3143 = 6639U;
	static int8_t x3144 = 1;
	volatile int32_t t35 = -1643;

    t35 = (x3141>>((x3142%x3143)>>x3144));

    if (t35 != 208595) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x3171 = -1;
	int8_t x3172 = 1;
	volatile int32_t t36 = -864091196;

    t36 = (x3169>>((x3170%x3171)>>x3172));

    if (t36 != 5396) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x3253 = UINT32_MAX;
	int32_t x3254 = INT32_MIN;
	uint32_t x3256 = 1U;
	uint32_t t37 = UINT32_MAX;

    t37 = (x3253>>((x3254%x3255)>>x3256));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x3301 = UINT16_MAX;
	int16_t x3303 = INT16_MAX;
	uint8_t x3304 = 2U;

    t38 = (x3301>>((x3302%x3303)>>x3304));

    if (t38 != 8191) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x3357 = 35914528U;
	int32_t x3358 = 0;
	uint16_t x3360 = 20U;
	static volatile uint32_t t39 = 0U;

    t39 = (x3357>>((x3358%x3359)>>x3360));

    if (t39 != 35914528U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x3485 = 3U;
	int16_t x3487 = INT16_MIN;
	static uint8_t x3488 = 23U;
	int32_t t40 = 3;

    t40 = (x3485>>((x3486%x3487)>>x3488));

    if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x3682 = INT64_MAX;
	static int64_t x3683 = -1LL;
	uint8_t x3684 = 49U;
	static volatile uint64_t t41 = UINT64_MAX;

    t41 = (x3681>>((x3682%x3683)>>x3684));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x3817 = 23U;
	int16_t x3818 = INT16_MAX;
	int16_t x3819 = -1;
	volatile int32_t t42 = 493014863;

    t42 = (x3817>>((x3818%x3819)>>x3820));

    if (t42 != 23) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x3853 = INT16_MAX;
	volatile int8_t x3854 = 13;
	uint8_t x3856 = 6U;
	int32_t t43 = 0;

    t43 = (x3853>>((x3854%x3855)>>x3856));

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x3977 = INT32_MAX;
	uint32_t x3978 = UINT32_MAX;
	static uint16_t x3979 = 1U;
	uint8_t x3980 = 30U;
	static volatile int32_t t44 = INT32_MAX;

    t44 = (x3977>>((x3978%x3979)>>x3980));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x4046 = 27261LLU;
	static int32_t x4047 = 63528;
	static int16_t x4048 = 13;
	static volatile int32_t t45 = -355;

    t45 = (x4045>>((x4046%x4047)>>x4048));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x4141 = INT32_MAX;
	uint8_t x4142 = UINT8_MAX;
	int32_t x4143 = INT32_MIN;
	uint32_t x4144 = 12U;
	volatile int32_t t46 = INT32_MAX;

    t46 = (x4141>>((x4142%x4143)>>x4144));

    if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x4153 = 32LLU;
	int8_t x4154 = INT8_MIN;
	int64_t x4155 = -1LL;

    t47 = (x4153>>((x4154%x4155)>>x4156));

    if (t47 != 32LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x4233 = UINT32_MAX;
	static int16_t x4235 = 1;
	static int8_t x4236 = 42;
	volatile uint32_t t48 = UINT32_MAX;

    t48 = (x4233>>((x4234%x4235)>>x4236));

    if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x4261 = 53U;
	static volatile int16_t x4263 = INT16_MIN;
	volatile uint32_t x4264 = 42U;
	volatile int32_t t49 = -270;

    t49 = (x4261>>((x4262%x4263)>>x4264));

    if (t49 != 53) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x4390 = 8;
	int64_t x4391 = 197636409946485431LL;
	int32_t t50 = 5044640;

    t50 = (x4389>>((x4390%x4391)>>x4392));

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x4542 = UINT8_MAX;
	uint16_t x4544 = 22U;
	volatile int32_t t51 = -2970;

    t51 = (x4541>>((x4542%x4543)>>x4544));

    if (t51 != 148) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x4785 = 627U;
	int8_t x4786 = -1;
	uint32_t x4787 = 25U;
	volatile uint32_t t52 = 30989U;

    t52 = (x4785>>((x4786%x4787)>>x4788));

    if (t52 != 627U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x4865 = 1;
	int64_t x4866 = 121774LL;
	uint32_t x4867 = UINT32_MAX;
	volatile uint8_t x4868 = 33U;

    t53 = (x4865>>((x4866%x4867)>>x4868));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x4905 = 452U;
	int32_t x4906 = 6;
	uint8_t x4908 = 0U;
	int32_t t54 = -6202549;

    t54 = (x4905>>((x4906%x4907)>>x4908));

    if (t54 != 7) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x4965 = INT8_MAX;
	int32_t x4966 = -1;
	uint32_t x4967 = 7U;
	uint8_t x4968 = 1U;

    t55 = (x4965>>((x4966%x4967)>>x4968));

    if (t55 != 63) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x5001 = 145197991LLU;
	int64_t x5002 = INT64_MIN;
	int16_t x5003 = INT16_MIN;
	static volatile uint64_t t56 = 6464140894185LLU;

    t56 = (x5001>>((x5002%x5003)>>x5004));

    if (t56 != 145197991LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x5017 = 0;
	uint16_t x5020 = 0U;
	volatile int32_t t57 = 28934;

    t57 = (x5017>>((x5018%x5019)>>x5020));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x5065 = 1LL;
	int16_t x5067 = INT16_MIN;
	volatile int32_t x5068 = 0;

    t58 = (x5065>>((x5066%x5067)>>x5068));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x5245 = INT8_MAX;
	uint32_t x5246 = 454540091U;
	volatile uint8_t x5247 = 104U;
	static uint16_t x5248 = 7U;
	int32_t t59 = -34;

    t59 = (x5245>>((x5246%x5247)>>x5248));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x5349 = INT8_MAX;
	static int16_t x5350 = 1;
	int32_t x5352 = 1;
	volatile int32_t t60 = 32738;

    t60 = (x5349>>((x5350%x5351)>>x5352));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x5449 = 328;
	static uint16_t x5450 = UINT16_MAX;
	uint16_t x5452 = 3U;
	volatile int32_t t61 = 1658602;

    t61 = (x5449>>((x5450%x5451)>>x5452));

    if (t61 != 82) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x5498 = -1;
	uint32_t x5499 = UINT32_MAX;
	volatile int16_t x5500 = 1;
	volatile int32_t t62 = -17796;

    t62 = (x5497>>((x5498%x5499)>>x5500));

    if (t62 != 15) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x5557 = INT8_MAX;
	uint16_t x5558 = UINT16_MAX;
	uint16_t x5559 = UINT16_MAX;
	volatile int32_t t63 = -1288;

    t63 = (x5557>>((x5558%x5559)>>x5560));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x5789 = UINT32_MAX;
	uint16_t x5792 = 22U;
	static volatile uint32_t t64 = UINT32_MAX;

    t64 = (x5789>>((x5790%x5791)>>x5792));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x5881 = 0;
	static uint8_t x5882 = 19U;
	int64_t x5883 = INT64_MIN;
	int32_t x5884 = 5;

    t65 = (x5881>>((x5882%x5883)>>x5884));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x5885 = UINT32_MAX;
	uint8_t x5886 = 3U;
	static uint8_t x5888 = 3U;
	uint32_t t66 = UINT32_MAX;

    t66 = (x5885>>((x5886%x5887)>>x5888));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x5961 = 1;
	int32_t x5962 = INT32_MAX;
	static volatile int64_t x5963 = -1LL;
	int32_t x5964 = 1;

    t67 = (x5961>>((x5962%x5963)>>x5964));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x5966 = 2579U;
	volatile uint8_t x5967 = 2U;
	uint8_t x5968 = 18U;
	volatile uint64_t t68 = 1282780863LLU;

    t68 = (x5965>>((x5966%x5967)>>x5968));

    if (t68 != 43598711003235LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x6017 = 193685218U;
	int8_t x6018 = INT8_MIN;
	int16_t x6019 = -4;
	uint32_t x6020 = 1U;
	volatile uint32_t t69 = 0U;

    t69 = (x6017>>((x6018%x6019)>>x6020));

    if (t69 != 193685218U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x6207 = 5;
	static volatile uint16_t x6208 = 3U;
	volatile int32_t t70 = 246367580;

    t70 = (x6205>>((x6206%x6207)>>x6208));

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x6301 = 2U;
	static int8_t x6302 = 1;

    t71 = (x6301>>((x6302%x6303)>>x6304));

    if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x6422 = UINT32_MAX;
	int32_t x6423 = -1;
	volatile uint8_t x6424 = 0U;
	int32_t t72 = -1152;

    t72 = (x6421>>((x6422%x6423)>>x6424));

    if (t72 != 57172029) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x6465 = 10474U;
	int64_t x6466 = INT64_MIN;
	static int8_t x6467 = -1;
	uint32_t x6468 = 3U;
	volatile uint32_t t73 = 605503U;

    t73 = (x6465>>((x6466%x6467)>>x6468));

    if (t73 != 10474U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x6693 = INT8_MAX;
	int8_t x6694 = INT8_MIN;
	int8_t x6695 = 2;
	volatile int32_t t74 = 408925;

    t74 = (x6693>>((x6694%x6695)>>x6696));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x6825 = UINT8_MAX;
	int64_t x6826 = INT64_MIN;
	static uint16_t x6828 = 11U;
	int32_t t75 = 103;

    t75 = (x6825>>((x6826%x6827)>>x6828));

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x6841 = UINT8_MAX;
	static uint32_t x6842 = 5U;
	int8_t x6843 = INT8_MIN;
	int8_t x6844 = 1;
	volatile int32_t t76 = 184559935;

    t76 = (x6841>>((x6842%x6843)>>x6844));

    if (t76 != 63) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x6857 = 19U;
	static int64_t x6859 = INT64_MIN;
	uint8_t x6860 = 4U;
	static volatile int32_t t77 = -11486;

    t77 = (x6857>>((x6858%x6859)>>x6860));

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x6876 = 1;
	static int32_t t78 = -2;

    t78 = (x6873>>((x6874%x6875)>>x6876));

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x6877 = 84494934LLU;
	int32_t x6878 = -302538757;
	static int16_t x6879 = -1;
	uint64_t t79 = 524LLU;

    t79 = (x6877>>((x6878%x6879)>>x6880));

    if (t79 != 84494934LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x6921 = 5083367670576LLU;
	uint64_t x6922 = 127735332360LLU;
	static int64_t x6923 = 436LL;
	static uint8_t x6924 = 25U;
	volatile uint64_t t80 = 49339998LLU;

    t80 = (x6921>>((x6922%x6923)>>x6924));

    if (t80 != 5083367670576LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x7306 = 98972;
	uint8_t x7308 = 1U;
	volatile uint64_t t81 = 2LLU;

    t81 = (x7305>>((x7306%x7307)>>x7308));

    if (t81 != 182503691688542396LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x7427 = 1U;
	int8_t x7428 = 2;
	uint32_t t82 = UINT32_MAX;

    t82 = (x7425>>((x7426%x7427)>>x7428));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x7617 = 96U;
	volatile uint32_t x7618 = 6175599U;
	static uint8_t x7619 = UINT8_MAX;
	int32_t t83 = 1954;

    t83 = (x7617>>((x7618%x7619)>>x7620));

    if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x7729 = 12;
	volatile uint32_t x7730 = 1915131646U;
	static int64_t x7731 = INT64_MAX;
	volatile uint8_t x7732 = 52U;
	int32_t t84 = -717343;

    t84 = (x7729>>((x7730%x7731)>>x7732));

    if (t84 != 12) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x7949 = 25U;
	int32_t t85 = 30;

    t85 = (x7949>>((x7950%x7951)>>x7952));

    if (t85 != 25) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x7985 = 25594191791LLU;
	static uint16_t x7986 = 4U;
	uint8_t x7988 = 10U;
	uint64_t t86 = 6168905606061967LLU;

    t86 = (x7985>>((x7986%x7987)>>x7988));

    if (t86 != 25594191791LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x8037 = 1;
	static int16_t x8039 = INT16_MIN;
	volatile uint8_t x8040 = 1U;
	int32_t t87 = -6;

    t87 = (x8037>>((x8038%x8039)>>x8040));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x8057 = 841339044405630LLU;
	volatile int64_t x8058 = INT64_MAX;
	int16_t x8059 = INT16_MIN;
	uint8_t x8060 = 14U;
	uint64_t t88 = 1354718LLU;

    t88 = (x8057>>((x8058%x8059)>>x8060));

    if (t88 != 420669522202815LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x8270 = INT16_MIN;
	int32_t x8271 = 1;
	uint32_t x8272 = 4U;
	static uint32_t t89 = UINT32_MAX;

    t89 = (x8269>>((x8270%x8271)>>x8272));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x8296 = 4U;
	int32_t t90 = 66383197;

    t90 = (x8293>>((x8294%x8295)>>x8296));

    if (t90 != 24695) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x8589 = UINT8_MAX;
	int64_t x8591 = -1LL;
	uint8_t x8592 = 9U;
	volatile int32_t t91 = 13;

    t91 = (x8589>>((x8590%x8591)>>x8592));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x8605 = UINT32_MAX;
	uint64_t x8606 = 2641252762943LLU;
	static uint8_t x8607 = 1U;
	int8_t x8608 = 4;
	uint32_t t92 = UINT32_MAX;

    t92 = (x8605>>((x8606%x8607)>>x8608));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x8641 = UINT32_MAX;
	uint32_t x8642 = 22598U;
	uint64_t x8643 = 1370450386407268397LLU;
	static int8_t x8644 = 39;

    t93 = (x8641>>((x8642%x8643)>>x8644));

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x8762 = -7;
	static volatile int32_t t94 = -4617859;

    t94 = (x8761>>((x8762%x8763)>>x8764));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x8973 = 0U;
	int16_t x8974 = INT16_MIN;
	volatile int64_t x8975 = -32LL;
	static uint16_t x8976 = 32U;
	int32_t t95 = -649567;

    t95 = (x8973>>((x8974%x8975)>>x8976));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x8989 = 551U;
	int8_t x8990 = 3;
	volatile int16_t x8991 = -1;
	volatile uint8_t x8992 = 4U;
	int32_t t96 = 84958;

    t96 = (x8989>>((x8990%x8991)>>x8992));

    if (t96 != 551) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x9225 = UINT64_MAX;
	int64_t x9226 = 3105226273LL;
	int8_t x9227 = INT8_MIN;
	volatile uint64_t t97 = UINT64_MAX;

    t97 = (x9225>>((x9226%x9227)>>x9228));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x9253 = 76U;
	int64_t x9254 = -1LL;
	int64_t x9255 = -1LL;
	uint32_t x9256 = 2U;
	uint32_t t98 = 44068045U;

    t98 = (x9253>>((x9254%x9255)>>x9256));

    if (t98 != 76U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x9261 = 4121U;
	uint8_t x9262 = 31U;
	volatile int64_t x9263 = -1LL;
	uint8_t x9264 = 29U;
	volatile uint32_t t99 = 9U;

    t99 = (x9261>>((x9262%x9263)>>x9264));

    if (t99 != 4121U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x9349 = INT16_MAX;
	uint8_t x9350 = 0U;
	int16_t x9352 = 5;
	int32_t t100 = 180125774;

    t100 = (x9349>>((x9350%x9351)>>x9352));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x9533 = 7040U;
	volatile int64_t x9534 = 272LL;
	static volatile int8_t x9536 = 9;
	volatile uint32_t t101 = 26761970U;

    t101 = (x9533>>((x9534%x9535)>>x9536));

    if (t101 != 7040U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x9594 = UINT8_MAX;
	static uint8_t x9595 = UINT8_MAX;
	int8_t x9596 = 3;
	volatile uint32_t t102 = UINT32_MAX;

    t102 = (x9593>>((x9594%x9595)>>x9596));

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x9598 = 63;
	static volatile uint8_t x9600 = 3U;
	static int32_t t103 = 6222786;

    t103 = (x9597>>((x9598%x9599)>>x9600));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x9621 = UINT32_MAX;
	int32_t x9622 = 1;
	uint64_t x9623 = 21537922405071524LLU;
	volatile int16_t x9624 = 4;
	uint32_t t104 = UINT32_MAX;

    t104 = (x9621>>((x9622%x9623)>>x9624));

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x9697 = 13U;
	static uint64_t x9699 = 61926817391LLU;
	uint8_t x9700 = 3U;
	int32_t t105 = 3;

    t105 = (x9697>>((x9698%x9699)>>x9700));

    if (t105 != 13) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x9785 = INT8_MAX;
	static volatile int8_t x9786 = INT8_MAX;
	uint64_t x9787 = 33971931031LLU;
	uint8_t x9788 = 3U;
	volatile int32_t t106 = 562509;

    t106 = (x9785>>((x9786%x9787)>>x9788));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x9790 = -411;
	static uint8_t x9791 = 3U;
	static volatile uint32_t x9792 = 1U;
	volatile int32_t t107 = 660401;

    t107 = (x9789>>((x9790%x9791)>>x9792));

    if (t107 != 451) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x9885 = 65899442;
	int32_t x9886 = INT32_MIN;
	int8_t x9887 = INT8_MIN;
	int32_t x9888 = 2;
	int32_t t108 = 3;

    t108 = (x9885>>((x9886%x9887)>>x9888));

    if (t108 != 65899442) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x9921 = 2348941LLU;
	volatile uint8_t x9923 = UINT8_MAX;
	volatile uint16_t x9924 = 18U;
	uint64_t t109 = 442063716267701139LLU;

    t109 = (x9921>>((x9922%x9923)>>x9924));

    if (t109 != 2348941LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x9961 = 50;
	static uint8_t x9962 = 4U;
	uint32_t x9963 = 50799310U;
	uint8_t x9964 = 5U;
	int32_t t110 = 28;

    t110 = (x9961>>((x9962%x9963)>>x9964));

    if (t110 != 50) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x10077 = 61U;
	static uint16_t x10078 = UINT16_MAX;
	int32_t x10079 = -1;
	volatile int32_t t111 = 1;

    t111 = (x10077>>((x10078%x10079)>>x10080));

    if (t111 != 61) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x10221 = INT64_MAX;
	static int16_t x10222 = 0;
	static int16_t x10223 = INT16_MIN;
	uint8_t x10224 = 3U;

    t112 = (x10221>>((x10222%x10223)>>x10224));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x10261 = 65LLU;
	uint8_t x10262 = 1U;
	uint64_t t113 = 1435749923768422LLU;

    t113 = (x10261>>((x10262%x10263)>>x10264));

    if (t113 != 65LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x10294 = INT64_MIN;
	int64_t x10295 = INT64_MIN;
	int8_t x10296 = 38;
	int32_t t114 = 187;

    t114 = (x10293>>((x10294%x10295)>>x10296));

    if (t114 != 19) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x10317 = 0LLU;
	volatile uint8_t x10319 = 46U;
	int16_t x10320 = 4;
	volatile uint64_t t115 = 2942324LLU;

    t115 = (x10317>>((x10318%x10319)>>x10320));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x10406 = -2477002611706550LL;
	volatile int64_t x10407 = -1LL;
	int16_t x10408 = 1;

    t116 = (x10405>>((x10406%x10407)>>x10408));

    if (t116 != 13) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x10437 = UINT64_MAX;
	static int16_t x10438 = INT16_MIN;
	int16_t x10439 = INT16_MIN;
	uint8_t x10440 = 15U;
	uint64_t t117 = UINT64_MAX;

    t117 = (x10437>>((x10438%x10439)>>x10440));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x10461 = 426422;
	int16_t x10462 = -1;
	volatile int16_t x10463 = -1;
	static volatile int32_t t118 = 13305;

    t118 = (x10461>>((x10462%x10463)>>x10464));

    if (t118 != 426422) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x10689 = 0;
	static uint32_t x10690 = 14110U;
	int8_t x10691 = -1;
	volatile int8_t x10692 = 19;
	int32_t t119 = -227344;

    t119 = (x10689>>((x10690%x10691)>>x10692));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x10905 = UINT8_MAX;
	static uint32_t x10906 = 8373U;
	uint32_t x10907 = 3U;
	int32_t t120 = -18620664;

    t120 = (x10905>>((x10906%x10907)>>x10908));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x10921 = UINT32_MAX;
	volatile uint16_t x10923 = 12U;
	static int32_t x10924 = 0;

    t121 = (x10921>>((x10922%x10923)>>x10924));

    if (t121 != 536870911U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x10933 = 516374660244479291LLU;
	int16_t x10935 = -3;
	static uint8_t x10936 = 0U;
	uint64_t t122 = 7LLU;

    t122 = (x10933>>((x10934%x10935)>>x10936));

    if (t122 != 516374660244479291LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x11018 = 0;
	int16_t x11019 = 551;
	static int32_t t123 = 150149804;

    t123 = (x11017>>((x11018%x11019)>>x11020));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x11041 = UINT8_MAX;
	int16_t x11044 = 18;
	volatile int32_t t124 = -8901;

    t124 = (x11041>>((x11042%x11043)>>x11044));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x11277 = 0U;
	int16_t x11279 = 1;
	static volatile int32_t t125 = -3143;

    t125 = (x11277>>((x11278%x11279)>>x11280));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x11322 = UINT8_MAX;
	volatile uint64_t x11323 = UINT64_MAX;
	volatile int8_t x11324 = 57;
	volatile int32_t t126 = -247078239;

    t126 = (x11321>>((x11322%x11323)>>x11324));

    if (t126 != 17) { NG(); } else { ; }
	
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


    return 0;
}

