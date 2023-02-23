
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

int16_t x57 = INT16_MIN;
volatile uint32_t t0 = 13U;
volatile int16_t x205 = -1;
volatile int16_t x208 = 0;
volatile int16_t x210 = -1;
uint8_t x472 = 0U;
uint8_t x610 = 72U;
uint16_t x612 = 21U;
static int16_t x690 = 6294;
int16_t x697 = INT16_MAX;
uint64_t x701 = UINT64_MAX;
uint8_t x744 = 0U;
uint32_t t12 = 24957711U;
uint8_t x1109 = 113U;
uint32_t x1111 = 804021U;
uint32_t x1232 = 15U;
int32_t x1298 = 1957363;
volatile int32_t t19 = -35487544;
uint64_t x1403 = 1122826250LLU;
uint64_t t20 = 45312218566360685LLU;
int32_t x1510 = INT32_MIN;
volatile uint64_t t23 = 234113817LLU;
uint64_t x1691 = UINT64_MAX;
static uint64_t t24 = 75285524388431LLU;
uint32_t x1765 = 133U;
uint64_t t25 = 386616LLU;
int64_t x1846 = -1LL;
int64_t t27 = 462379933593293LL;
uint64_t x1862 = 49LLU;
volatile uint64_t t28 = 33LLU;
uint8_t x1941 = UINT8_MAX;
int8_t x1942 = INT8_MIN;
static uint64_t x1974 = 1492444LLU;
static uint64_t x2195 = UINT64_MAX;
uint64_t t35 = 1396017355LLU;
static int8_t x2316 = 1;
int64_t t37 = 59909199006597997LL;
volatile int16_t x2347 = -79;
int64_t x2427 = INT64_MIN;
int8_t x2538 = INT8_MIN;
int32_t x2870 = 4728684;
uint16_t x2921 = 204U;
int16_t x2924 = 27;
int32_t t46 = 22658499;
int64_t x3041 = INT64_MAX;
uint16_t x3042 = 6523U;
int64_t t47 = 1307LL;
volatile uint32_t t48 = 212470109U;
uint32_t x3122 = 60269361U;
uint64_t t50 = 698130390647099LLU;
uint32_t x3326 = UINT32_MAX;
uint64_t x3421 = UINT64_MAX;
uint64_t t53 = 59165890605048540LLU;
static int16_t x3547 = INT16_MIN;
volatile uint8_t x3589 = UINT8_MAX;
uint32_t x3590 = 54787052U;
uint8_t x3592 = 16U;
int32_t x3610 = -1;
static uint16_t x3800 = 25U;
uint16_t x3830 = 2047U;
int8_t x4024 = 5;
int64_t t64 = 61884552914964937LL;
uint64_t x4159 = 43046LLU;
volatile int8_t x4385 = -1;
volatile int64_t t68 = -11500149906801LL;
static volatile int16_t x4568 = 1;
int16_t x4593 = -1;
static uint16_t x4594 = UINT16_MAX;


void f0(void) {
    	uint32_t x58 = 186U;
	volatile int32_t x59 = -1;
	int32_t x60 = 1;

    t0 = (x57/((x58-x59)<<x60));

    if (t0 != 11483782U) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x206 = UINT16_MAX;
	volatile int8_t x207 = 0;
	volatile int32_t t1 = 86;

    t1 = (x205/((x206-x207)<<x208));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x209 = 644U;
	int32_t x211 = -19514053;
	uint16_t x212 = 1U;
	int32_t t2 = 1;

    t2 = (x209/((x210-x211)<<x212));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x297 = -1;
	static int16_t x298 = INT16_MAX;
	static int8_t x299 = INT8_MAX;
	volatile uint8_t x300 = 3U;
	volatile int32_t t3 = 678250;

    t3 = (x297/((x298-x299)<<x300));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x469 = INT64_MIN;
	int8_t x470 = 1;
	static volatile int64_t x471 = -1LL;
	int64_t t4 = 236372LL;

    t4 = (x469/((x470-x471)<<x472));

    if (t4 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x485 = 567120508744212LLU;
	int8_t x486 = -2;
	volatile uint64_t x487 = 5544LLU;
	uint8_t x488 = 61U;
	uint64_t t5 = 3632035LLU;

    t5 = (x485/((x486-x487)<<x488));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x609 = UINT8_MAX;
	static volatile uint64_t x611 = 18517165LLU;
	volatile uint64_t t6 = 34335LLU;

    t6 = (x609/((x610-x611)<<x612));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x689 = -72232543256781104LL;
	static int8_t x691 = 1;
	uint16_t x692 = 12U;
	volatile int64_t t7 = 2017711LL;

    t7 = (x689/((x690-x691)<<x692));

    if (t7 != -2802303870LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x698 = INT8_MAX;
	int8_t x699 = -1;
	int32_t x700 = 15;
	int32_t t8 = -277063872;

    t8 = (x697/((x698-x699)<<x700));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x702 = INT32_MIN;
	static uint32_t x703 = 348U;
	uint8_t x704 = 28U;
	uint64_t t9 = 536008915704115240LLU;

    t9 = (x701/((x702-x703)<<x704));

    if (t9 != 17179869183LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x733 = 463U;
	int16_t x734 = INT16_MIN;
	static int64_t x735 = INT64_MIN;
	int8_t x736 = 0;
	int64_t t10 = 478LL;

    t10 = (x733/((x734-x735)<<x736));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x741 = UINT32_MAX;
	int16_t x742 = INT16_MIN;
	int64_t x743 = INT64_MIN;
	int64_t t11 = -5LL;

    t11 = (x741/((x742-x743)<<x744));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x781 = 0U;
	int16_t x782 = -1;
	uint32_t x783 = 32561698U;
	int8_t x784 = 9;

    t12 = (x781/((x782-x783)<<x784));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x853 = UINT32_MAX;
	int8_t x854 = -3;
	int16_t x855 = INT16_MIN;
	int32_t x856 = 15;
	volatile uint32_t t13 = 160769206U;

    t13 = (x853/((x854-x855)<<x856));

    if (t13 != 4U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x889 = 14U;
	uint32_t x890 = UINT32_MAX;
	volatile uint32_t x891 = 1364418U;
	uint8_t x892 = 0U;
	volatile uint32_t t14 = 1128U;

    t14 = (x889/((x890-x891)<<x892));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x965 = INT64_MIN;
	static int16_t x966 = INT16_MAX;
	int16_t x967 = 277;
	uint64_t x968 = 7LLU;
	int64_t t15 = -994973LL;

    t15 = (x965/((x966-x967)<<x968));

    if (t15 != -2217839151675LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x1110 = -37;
	uint8_t x1112 = 1U;
	uint32_t t16 = 30182433U;

    t16 = (x1109/((x1110-x1111)<<x1112));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x1213 = 1U;
	int64_t x1214 = 29070343140170LL;
	uint64_t x1215 = 964LLU;
	uint16_t x1216 = 1U;
	static volatile uint64_t t17 = 625LLU;

    t17 = (x1213/((x1214-x1215)<<x1216));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x1229 = -3555790307639823516LL;
	uint64_t x1230 = 461590LLU;
	int16_t x1231 = INT16_MIN;
	uint64_t t18 = 4483833199403LLU;

    t18 = (x1229/((x1230-x1231)<<x1232));

    if (t18 != 919244444LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1297 = -1;
	int16_t x1299 = INT16_MAX;
	int8_t x1300 = 6;

    t19 = (x1297/((x1298-x1299)<<x1300));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1401 = 5076;
	int32_t x1402 = INT32_MIN;
	uint16_t x1404 = 0U;

    t20 = (x1401/((x1402-x1403)<<x1404));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1433 = 1LLU;
	volatile int16_t x1434 = 13810;
	int8_t x1435 = INT8_MIN;
	uint8_t x1436 = 11U;
	volatile uint64_t t21 = 427196LLU;

    t21 = (x1433/((x1434-x1435)<<x1436));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1505 = -1LL;
	int32_t x1506 = -13515;
	int16_t x1507 = INT16_MIN;
	volatile uint8_t x1508 = 0U;
	static int64_t t22 = -31853194019986404LL;

    t22 = (x1505/((x1506-x1507)<<x1508));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x1509 = 3U;
	uint64_t x1511 = 1LLU;
	uint8_t x1512 = 42U;

    t23 = (x1509/((x1510-x1511)<<x1512));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1689 = -3;
	uint32_t x1690 = 1789291U;
	volatile int8_t x1692 = 6;

    t24 = (x1689/((x1690-x1691)<<x1692));

    if (t24 != 161086271079LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1766 = UINT64_MAX;
	uint32_t x1767 = 1641261428U;
	static uint16_t x1768 = 26U;

    t25 = (x1765/((x1766-x1767)<<x1768));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1845 = UINT8_MAX;
	int16_t x1847 = -135;
	volatile uint8_t x1848 = 1U;
	static volatile int64_t t26 = -3515433706182293935LL;

    t26 = (x1845/((x1846-x1847)<<x1848));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x1857 = 0U;
	uint16_t x1858 = UINT16_MAX;
	int64_t x1859 = -1LL;
	uint8_t x1860 = 0U;

    t27 = (x1857/((x1858-x1859)<<x1860));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1861 = 5;
	uint16_t x1863 = 1770U;
	uint8_t x1864 = 24U;

    t28 = (x1861/((x1862-x1863)<<x1864));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x1921 = 13274612482074200LL;
	uint64_t x1922 = 1670608612LLU;
	int32_t x1923 = -1;
	uint8_t x1924 = 2U;
	static volatile uint64_t t29 = 31702869252026LLU;

    t29 = (x1921/((x1922-x1923)<<x1924));

    if (t29 != 1986493LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1943 = -212LL;
	uint8_t x1944 = 3U;
	volatile int64_t t30 = 466825LL;

    t30 = (x1941/((x1942-x1943)<<x1944));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1973 = 1919931629787729LLU;
	volatile uint32_t x1975 = UINT32_MAX;
	static volatile uint8_t x1976 = 0U;
	volatile uint64_t t31 = 205065733678430LLU;

    t31 = (x1973/((x1974-x1975)<<x1976));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x2153 = INT8_MAX;
	uint8_t x2154 = 20U;
	static int16_t x2155 = INT16_MIN;
	int8_t x2156 = 0;
	int32_t t32 = 61700;

    t32 = (x2153/((x2154-x2155)<<x2156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2193 = 7U;
	int16_t x2194 = INT16_MIN;
	int8_t x2196 = 58;
	static volatile uint64_t t33 = 1873363331LLU;

    t33 = (x2193/((x2194-x2195)<<x2196));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x2197 = 1388;
	static uint64_t x2198 = UINT64_MAX;
	static int8_t x2199 = 0;
	volatile uint32_t x2200 = 33U;
	uint64_t t34 = 342632777019LLU;

    t34 = (x2197/((x2198-x2199)<<x2200));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2253 = -1;
	uint64_t x2254 = 7428498LLU;
	volatile int16_t x2255 = -1;
	static uint64_t x2256 = 15LLU;

    t35 = (x2253/((x2254-x2255)<<x2256));

    if (t35 != 75782463LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2285 = -1LL;
	int32_t x2286 = INT32_MIN;
	uint32_t x2287 = UINT32_MAX;
	uint8_t x2288 = 3U;
	volatile int64_t t36 = 283588897208357LL;

    t36 = (x2285/((x2286-x2287)<<x2288));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2313 = INT64_MAX;
	volatile uint8_t x2314 = 7U;
	int16_t x2315 = 2;

    t37 = (x2313/((x2314-x2315)<<x2316));

    if (t37 != 922337203685477580LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x2345 = INT8_MAX;
	static uint8_t x2346 = 0U;
	uint16_t x2348 = 1U;
	int32_t t38 = 59616;

    t38 = (x2345/((x2346-x2347)<<x2348));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2425 = -1;
	int32_t x2426 = INT32_MIN;
	volatile uint8_t x2428 = 0U;
	volatile int64_t t39 = 24865709290LL;

    t39 = (x2425/((x2426-x2427)<<x2428));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x2453 = INT8_MAX;
	int32_t x2454 = INT32_MIN;
	uint32_t x2455 = 1177109131U;
	uint16_t x2456 = 8U;
	volatile uint32_t t40 = 3578631U;

    t40 = (x2453/((x2454-x2455)<<x2456));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x2537 = -826;
	int32_t x2539 = INT32_MIN;
	uint64_t x2540 = 0LLU;
	int32_t t41 = -44747;

    t41 = (x2537/((x2538-x2539)<<x2540));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x2701 = 124562623669LLU;
	static uint32_t x2702 = 3932694U;
	volatile uint16_t x2703 = 0U;
	uint16_t x2704 = 1U;
	static volatile uint64_t t42 = 26361844LLU;

    t42 = (x2701/((x2702-x2703)<<x2704));

    if (t42 != 15836LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x2833 = UINT16_MAX;
	uint64_t x2834 = UINT64_MAX;
	volatile int64_t x2835 = INT64_MAX;
	volatile int8_t x2836 = 0;
	static volatile uint64_t t43 = 60522760LLU;

    t43 = (x2833/((x2834-x2835)<<x2836));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x2869 = UINT32_MAX;
	uint32_t x2871 = 43637U;
	uint8_t x2872 = 1U;
	volatile uint32_t t44 = 72457033U;

    t44 = (x2869/((x2870-x2871)<<x2872));

    if (t44 != 458U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x2922 = 25511U;
	uint32_t x2923 = UINT32_MAX;
	uint32_t t45 = 894U;

    t45 = (x2921/((x2922-x2923)<<x2924));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x2969 = INT16_MAX;
	int16_t x2970 = -1;
	static int16_t x2971 = -29;
	static volatile uint16_t x2972 = 25U;

    t46 = (x2969/((x2970-x2971)<<x2972));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x3043 = 5U;
	volatile uint16_t x3044 = 3U;

    t47 = (x3041/((x3042-x3043)<<x3044));

    if (t47 != 176882710126855LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x3049 = UINT16_MAX;
	uint32_t x3050 = 31585389U;
	uint32_t x3051 = 167U;
	int8_t x3052 = 3;

    t48 = (x3049/((x3050-x3051)<<x3052));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x3121 = 0U;
	uint64_t x3123 = 3635305006LLU;
	uint16_t x3124 = 15U;
	static volatile uint64_t t49 = 6840307867228LLU;

    t49 = (x3121/((x3122-x3123)<<x3124));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x3133 = INT32_MIN;
	volatile uint64_t x3134 = 931736401552981LLU;
	static uint32_t x3135 = 13U;
	volatile int16_t x3136 = 11;

    t50 = (x3133/((x3134-x3135)<<x3136));

    if (t50 != 9LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x3317 = INT16_MIN;
	uint8_t x3318 = 21U;
	volatile int16_t x3319 = INT16_MIN;
	int16_t x3320 = 0;
	int32_t t51 = 3;

    t51 = (x3317/((x3318-x3319)<<x3320));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x3325 = UINT32_MAX;
	uint16_t x3327 = 0U;
	uint64_t x3328 = 26LLU;
	static uint32_t t52 = 191727355U;

    t52 = (x3325/((x3326-x3327)<<x3328));

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x3422 = INT32_MAX;
	static uint64_t x3423 = 1284553869307LLU;
	uint8_t x3424 = 7U;

    t53 = (x3421/((x3422-x3423)<<x3424));

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3461 = -1;
	static int32_t x3462 = -969777900;
	uint32_t x3463 = 1067U;
	uint8_t x3464 = 1U;
	static uint32_t t54 = 358580387U;

    t54 = (x3461/((x3462-x3463)<<x3464));

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x3545 = 489400U;
	uint64_t x3546 = 7849947LLU;
	uint64_t x3548 = 2LLU;
	static volatile uint64_t t55 = 63LLU;

    t55 = (x3545/((x3546-x3547)<<x3548));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x3591 = -118;
	volatile uint32_t t56 = 1654U;

    t56 = (x3589/((x3590-x3591)<<x3592));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x3609 = INT32_MIN;
	int32_t x3611 = INT32_MIN;
	uint8_t x3612 = 0U;
	static volatile int32_t t57 = 1050340656;

    t57 = (x3609/((x3610-x3611)<<x3612));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x3657 = 56U;
	static volatile int16_t x3658 = INT16_MAX;
	uint8_t x3659 = 27U;
	uint32_t x3660 = 1U;
	static uint32_t t58 = 6264U;

    t58 = (x3657/((x3658-x3659)<<x3660));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x3797 = 709LLU;
	uint16_t x3798 = 21U;
	int32_t x3799 = -1;
	volatile uint64_t t59 = 12578613LLU;

    t59 = (x3797/((x3798-x3799)<<x3800));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x3829 = -1LL;
	uint32_t x3831 = UINT32_MAX;
	static int16_t x3832 = 11;
	volatile int64_t t60 = 5668995LL;

    t60 = (x3829/((x3830-x3831)<<x3832));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x3985 = -1;
	int16_t x3986 = INT16_MIN;
	static uint64_t x3987 = 8074177973618643LLU;
	uint16_t x3988 = 57U;
	volatile uint64_t t61 = 23488828LLU;

    t61 = (x3985/((x3986-x3987)<<x3988));

    if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x4021 = INT8_MIN;
	uint8_t x4022 = UINT8_MAX;
	int8_t x4023 = INT8_MIN;
	int32_t t62 = -20470206;

    t62 = (x4021/((x4022-x4023)<<x4024));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x4061 = INT16_MAX;
	uint32_t x4062 = 8063U;
	static uint64_t x4063 = 1957273333088LLU;
	uint16_t x4064 = 1U;
	volatile uint64_t t63 = 1LLU;

    t63 = (x4061/((x4062-x4063)<<x4064));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x4089 = 1;
	int64_t x4090 = 1920LL;
	uint16_t x4091 = 0U;
	volatile int8_t x4092 = 9;

    t64 = (x4089/((x4090-x4091)<<x4092));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x4157 = -1;
	static int32_t x4158 = INT32_MIN;
	volatile uint16_t x4160 = 0U;
	volatile uint64_t t65 = 8LLU;

    t65 = (x4157/((x4158-x4159)<<x4160));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x4365 = UINT64_MAX;
	uint16_t x4366 = 23789U;
	volatile int8_t x4367 = 55;
	uint8_t x4368 = 3U;
	uint64_t t66 = 125057LLU;

    t66 = (x4365/((x4366-x4367)<<x4368));

    if (t66 != 97153577534915LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x4386 = INT32_MIN;
	static uint32_t x4387 = 13U;
	int8_t x4388 = 0;
	uint32_t t67 = 212710698U;

    t67 = (x4385/((x4386-x4387)<<x4388));

    if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x4397 = INT64_MIN;
	uint8_t x4398 = 1U;
	static int64_t x4399 = -1LL;
	uint32_t x4400 = 60U;

    t68 = (x4397/((x4398-x4399)<<x4400));

    if (t68 != -4LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x4565 = 776210478526LLU;
	int8_t x4566 = INT8_MIN;
	uint32_t x4567 = UINT32_MAX;
	uint64_t t69 = 3743805LLU;

    t69 = (x4565/((x4566-x4567)<<x4568));

    if (t69 != 180LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x4595 = 5884887344135409LLU;
	int16_t x4596 = 0;
	uint64_t t70 = 23933449072LLU;

    t70 = (x4593/((x4594-x4595)<<x4596));

    if (t70 != 1LLU) { NG(); } else { ; }
	
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


    return 0;
}

